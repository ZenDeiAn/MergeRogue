Shader "Unlit/LoadingSplash"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _Fill ("Fill", Int) = 0
    }
    SubShader
    {
        Tags { "RenderType"="Transparent" }
        LOD 100

        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            // make fog work

            #include "UnityCG.cginc"

            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
            };

            struct v2f
            {
                float2 uv : TEXCOORD0;
                float4 vertex : SV_POSITION;
            };

            sampler2D _MainTex;
            float4 _MainTex_ST;

            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                UNITY_TRANSFER_FOG(o,o.vertex);
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                // sample the texture
                fixed4 col = tex2D(_MainTex, i.uv);
                // apply fog
                UNITY_APPLY_FOG(i.fogCoord, col);
                return col;
            }
            ENDCG
        }
    }
}
/*// GLSL Fragment Shader: 5-second looping animation
#ifdef GL_ES
precision mediump float;
#endif

uniform vec2 u_resolution;
uniform float u_time;

void main() {
    vec2 uv = gl_FragCoord.xy / u_resolution;

    // Define the grid parameters
    float gridSize = 15.0; // Number of cells in each row and column
    float cellSize = 1.0 / gridSize;

    // Calculate grid coordinates
    vec2 gridPos = floor(uv / cellSize);

    // Adjust grid activation to ensure full coverage
    vec2 gridOffset = vec2(1.0) / gridSize; // Shift cells slightly to reach corners
    vec2 adjustedPos = gridPos + gridOffset;

    // Calculate local UV inside the current cell
    vec2 localUV = fract(uv / cellSize) - 0.5;

    // Determine the "activation time" for each cell
    float activationTime = (adjustedPos.x + adjustedPos.y) / gridSize;
    
    float fill = 0.096;

    // Modify progress calculation based on fill value using a smooth function
    float progress = smoothstep(0.0, 1.0, (length(uv / cellSize) + 1.0) / gridSize * fill * sin(fill));

    // Calculate the square size
    float squareSize = progress; // Max size is half of the cell

    // Check if the fragment is inside the square
    float square = step(abs(localUV.x), squareSize) * step(abs(localUV.y), squareSize);

    // Output color
    vec3 color = vec3(0.0);
    color += square * vec3(1.0, 0.8, 0.2); // Yellow color for squares

    gl_FragColor = vec4(color, 1.0);
}
}*/
