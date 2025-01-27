#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
struct AudioMixerGroupU5BU5D_t8FDE37A00A7E874EB75184A6133A160137D0532B;
struct AudioMixerSnapshotU5BU5D_tD41A94680B8A241063054F1931BDDC8B997D8382;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD;
struct ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941;
struct AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A;
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
struct AudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2;
struct AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2;
struct AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718;
struct AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35;
struct AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0;
struct AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04;
struct AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311;
struct AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781;
struct AudioRenderer_t0AE73D979E98C81F302348B4BE76F88F717EA8DC;
struct AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA;
struct AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835;
struct AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2;
struct AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD;
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct Microphone_tC7BC94B89C5C1409E8F2C532B7EBEF7F23989AB8;
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749;
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
struct ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE;
struct SampleFramesEventNativeFunction_tCDAC7603B0833CEDC752346C2CE1B79DFAD40639;
struct SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30;
struct AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177;
struct CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0574E31B2E15797E57C51DEC554AE14E00CCB9CC;
IL2CPP_EXTERN_C String_t* _stringLiteral0ED72C9B4D0AB21E88D08F74AC73C6C8CEC4B7DF;
IL2CPP_EXTERN_C String_t* _stringLiteral0FC2A6DFBAD242B7CE1A74ACA9D3224CE2E0163D;
IL2CPP_EXTERN_C String_t* _stringLiteral2186DB8EA3F0EBBFF4B670DC1B315D485E2F447B;
IL2CPP_EXTERN_C String_t* _stringLiteral247AA0C7832E73DA2B1C26AE6EECA78F6305621E;
IL2CPP_EXTERN_C String_t* _stringLiteral2CB02688EA29A0BD85B9DA7E74AC7A3A69999F58;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral49403A17E8D32B35CB5B66AB1A2651A7EEAD1B00;
IL2CPP_EXTERN_C String_t* _stringLiteral4D559554A5CC1687161C80ACC0D5510EE8FE6230;
IL2CPP_EXTERN_C String_t* _stringLiteral5633EC5A323E76AB2DB48162D296F674B1A4AE13;
IL2CPP_EXTERN_C String_t* _stringLiteral57186E11345D0E246E80500DE17B8C941EF8A38F;
IL2CPP_EXTERN_C String_t* _stringLiteral5A82DE4DD1062E4ABDD8007673991EC29CAA760B;
IL2CPP_EXTERN_C String_t* _stringLiteral5DAF31F38982B9C7550A85BB70D632177804B10A;
IL2CPP_EXTERN_C String_t* _stringLiteral67DB02F1FABDC6C47E8B1ED9A9ADC8E17845BD4F;
IL2CPP_EXTERN_C String_t* _stringLiteral706336A4F6F53F903F6BD416474754F528D2A13B;
IL2CPP_EXTERN_C String_t* _stringLiteral747CA643504D60A83574C1454D344DADB4D2BA17;
IL2CPP_EXTERN_C String_t* _stringLiteral75DC747EA24DB7802D5E580A86C87FFCD3EA69B0;
IL2CPP_EXTERN_C String_t* _stringLiteral7F33A83E7C1398BEA9BE2EB876FECFEF16BCCDBD;
IL2CPP_EXTERN_C String_t* _stringLiteral828D4B8E973CD2A33393B5ADD77232D5F1E14741;
IL2CPP_EXTERN_C String_t* _stringLiteral833CA0336B0B01052EF2587E1BA1531EF4774426;
IL2CPP_EXTERN_C String_t* _stringLiteral8C53570A90E7EFA87FDB7F0DCC0EE1FCC019E426;
IL2CPP_EXTERN_C String_t* _stringLiteral9EAFE4F84FECC3407E28F6C22DC663D4A31C78D0;
IL2CPP_EXTERN_C String_t* _stringLiteralA30E3C82128EAFD5F248E826279F110DA15013C8;
IL2CPP_EXTERN_C String_t* _stringLiteralA69BE8EF0F1482795ABF1CC395A765AA747ECD85;
IL2CPP_EXTERN_C String_t* _stringLiteralAB94595983AD879C2F3FFCB8A1823C3113AE9497;
IL2CPP_EXTERN_C String_t* _stringLiteralAE56D62F1A0C7288753F11908D986231A5CE82BE;
IL2CPP_EXTERN_C String_t* _stringLiteralB1FAE4F904170535BC9DC23FF347B1D0603313EA;
IL2CPP_EXTERN_C String_t* _stringLiteralB7ED4706BFE5D072AD3E5A0F26644FF44E847682;
IL2CPP_EXTERN_C String_t* _stringLiteralB9ACF8E6DF73A863387F2ABAD61D84C3197C6B01;
IL2CPP_EXTERN_C String_t* _stringLiteralBBA43AB32D58B78D9EADF68C826FFB1393530223;
IL2CPP_EXTERN_C String_t* _stringLiteralBDA23AE58FC5A90E442B50E1279E2922EF7DFFFB;
IL2CPP_EXTERN_C String_t* _stringLiteralC01DE08865A1C5D9A0B7F1023D8CD55C8685904B;
IL2CPP_EXTERN_C String_t* _stringLiteralC51F74D9F7385459B7E90865166418A267D9A62B;
IL2CPP_EXTERN_C String_t* _stringLiteralC563ED6549A22286FAAA38A5D49C5B247A52C622;
IL2CPP_EXTERN_C String_t* _stringLiteralCAEF26BE398F51129C4063A43AD4BF947AC128D6;
IL2CPP_EXTERN_C String_t* _stringLiteralCC867B94415511BD48E92E3242D7EDA425D20035;
IL2CPP_EXTERN_C String_t* _stringLiteralD7EA9435CDE6F5B13E32FE646D502752ECCD43DD;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDEDDE242032A9FE10235C17BEBE07A06A35AF793;
IL2CPP_EXTERN_C String_t* _stringLiteralF52B980B71426E2D226C2ED5B2045868E72F85FF;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClipPlayable_GetPauseDelay_mAECC9DDE01CAFD50761079E4FBC1B00E8B9FE48C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClipPlayable_SetSpatialBlend_m72F1B86E4E5940E8587C1EA32BB48463A00810BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClipPlayable_SetStereoPan_mB8403E93B06B2ECCD0D4D6B0D55C151D0CCCC494_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClipPlayable_SetVolume_m3553EC43CBA43CA7802292710A1A284A6DEF8FCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClipPlayable__ctor_m4E686B92CFA7C6A36AA794B1E8C36B1E60605751_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioMixerPlayable__ctor_m2CDDE33FCE0B3F7D9EB482D76515FBF771285F47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioMixer_TransitionToSnapshot_m308E8D50A4573EFDD381ED7DEC23162F8CD0EB5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioPlayableBinding_CreateAudioOutput_m2BE0EDC74ADA082B5CD6247ACD78EFCBDB85ADC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetFunctionPointerForDelegate_TisSampleFramesEventNativeFunction_tCDAC7603B0833CEDC752346C2CE1B79DFAD40639_mCC82AA3A7E3C114EFFE27AB8DF03A8CD8118A91A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m306C543FED06B697C9354420F4D95B2DCA99F67C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_SetDuration_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m67FC8BE5E310D54C91DB1D492F7393237401332E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m95809D16DD3494AEB0E9E652B42E0CE3167BEE0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C_m28F89BE3D7CCE69B28258CC5B1C7D4E814F48CAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525;

struct AudioMixerGroupU5BU5D_t8FDE37A00A7E874EB75184A6133A160137D0532B;
struct AudioMixerSnapshotU5BU5D_tD41A94680B8A241063054F1931BDDC8B997D8382;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t462BCCFB9B78348533823E0754F65F52A5348F89 
{
};
struct AudioClipExtensionsInternal_t3995B6D319437144177828D73CE0636C952CB0D1  : public RuntimeObject
{
};
struct AudioPlayableBinding_tCEBDA2DEB832C1B7A2698EC9DAB066F7D6D85D3F  : public RuntimeObject
{
};
struct AudioPlayableGraphExtensions_tFE52BCEBCCE023697BAC3291D42A6659E973F50E  : public RuntimeObject
{
};
struct AudioRenderer_t0AE73D979E98C81F302348B4BE76F88F717EA8DC  : public RuntimeObject
{
};
struct AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2  : public RuntimeObject
{
	ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE* ___m_ConsumeSampleFramesNativeFunction;
	uint32_t ___U3CidU3Ek__BackingField;
	uint16_t ___U3CtrackIndexU3Ek__BackingField;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___U3CownerU3Ek__BackingField;
	uint16_t ___U3CchannelCountU3Ek__BackingField;
	uint32_t ___U3CsampleRateU3Ek__BackingField;
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* ___sampleFramesAvailable;
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* ___sampleFramesOverflow;
};
struct AudioSampleProviderExtensionsInternal_t2048E36B58249FA0769169B930D56184AD99CCF9  : public RuntimeObject
{
};
struct AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD  : public RuntimeObject
{
};
struct AudioSourceExtensionsInternal_t34F34B1A500157DC44451F05825A9E15E8660858  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct Microphone_tC7BC94B89C5C1409E8F2C532B7EBEF7F23989AB8  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD  : public RuntimeObject
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct RefreshRate_t44FF0D3F256477CC8AB97FA49D08B636AFB4F68F 
{
	uint32_t ___numerator;
	uint32_t ___denominator;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD 
{
	bool ___hasValue;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct AudioClipLoadType_t9FDAF1B7675E8608120B797D440340BCEE11160C 
{
	int32_t ___value__;
};
struct AudioDataLoadState_tC19F28D3D0EFE5FD5A6F6B0DBC2253A487A7DC46 
{
	int32_t ___value__;
};
struct AudioMixerUpdateMode_tC3F444582B5A55F4D4FC0DDF3D17F834EFACB9F8 
{
	int32_t ___value__;
};
struct AudioReverbPreset_t77042909B2925DD46622B59B0287A55A6B8CA3F2 
{
	int32_t ___value__;
};
struct AudioRolloffMode_tA944C7222A7D47A746407C74368B413CDA1B6B7B 
{
	int32_t ___value__;
};
struct AudioSourceCurveType_t64710ADB803BFCA09E5CC91AB49EAE15D4C708B7 
{
	int32_t ___value__;
};
struct AudioSpeakerMode_tD681BDF379A4FB499C5562BF3F97AB93B4E540ED 
{
	int32_t ___value__;
};
struct AudioVelocityUpdateMode_tF7763A78F66027066CD32B02EA361179F8C3EA06 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct FFTWindow_t50600D039B314BA8470C689D618126AF6E0223FE 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct PlayState_tC54D3C31D69D8394457D7EC5712E56B0891A5750 
{
	int32_t ___value__;
};
struct PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E 
{
	intptr_t ___m_Handle;
	uint32_t ___m_Version;
};
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	intptr_t ___m_Handle;
	uint32_t ___m_Version;
};
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 
{
	intptr_t ___m_Handle;
	uint32_t ___m_Version;
};
struct Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 
{
	int32_t ___m_Width;
	int32_t ___m_Height;
	RefreshRate_t44FF0D3F256477CC8AB97FA49D08B636AFB4F68F ___m_RefreshRate;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct WebCamKind_t6E6C1B17D52A297F99D6A758D43B6D90D3287D5C 
{
	int32_t ___value__;
};
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback;
};
struct AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle;
};
struct AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D 
{
	int32_t ___speakerMode;
	int32_t ___dspBufferSize;
	int32_t ___sampleRate;
	int32_t ___numRealVoices;
	int32_t ___numVirtualVoices;
};
struct AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle;
};
struct AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 
{
	String_t* ___m_StreamName;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_SourceObject;
	Type_t* ___m_SourceBindingType;
	CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* ___m_CreateOutputMethod;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke
{
	char* ___m_StreamName;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___m_SourceObject;
	Type_t* ___m_SourceBindingType;
	Il2CppMethodPointer ___m_CreateOutputMethod;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com
{
	Il2CppChar* ___m_StreamName;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___m_SourceObject;
	Type_t* ___m_SourceBindingType;
	Il2CppMethodPointer ___m_CreateOutputMethod;
};
struct PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C 
{
	String_t* ___m_Name;
	String_t* ___m_DepthCameraName;
	int32_t ___m_Flags;
	int32_t ___m_Kind;
	ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* ___m_Resolutions;
};
struct WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_DepthCameraName;
	int32_t ___m_Flags;
	int32_t ___m_Kind;
	Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* ___m_Resolutions;
};
struct WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_DepthCameraName;
	int32_t ___m_Flags;
	int32_t ___m_Kind;
	Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* ___m_Resolutions;
};
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E  : public MulticastDelegate_t
{
};
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072  : public MulticastDelegate_t
{
};
struct ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE  : public MulticastDelegate_t
{
};
struct SampleFramesEventNativeFunction_tCDAC7603B0833CEDC752346C2CE1B79DFAD40639  : public MulticastDelegate_t
{
};
struct SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30  : public MulticastDelegate_t
{
};
struct AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177  : public MulticastDelegate_t
{
};
struct CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509  : public MulticastDelegate_t
{
};
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};
struct AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields
{
	AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* ___OnAudioConfigurationChanged;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAudioSystemShuttingDown;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAudioSystemStartedUp;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields
{
	bool ___U3CmuteStateU3Ek__BackingField;
	bool ____stopAudioOutputOnMute;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnMuteStateChanged;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null;
};
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Null;
};
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___m_NullPlayable;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields
{
	PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD* ___None;
	double ___DefaultDuration;
};
struct PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_StaticFields
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___m_NullPlayableOutput;
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	int32_t ___GenerateAllMips;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A  : public RuntimeArray
{
	ALIGN_FIELD (8) Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 m_Items[1];

	inline Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 value)
	{
		m_Items[index] = value;
	}
};
struct WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5  : public RuntimeArray
{
	ALIGN_FIELD (8) WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C m_Items[1];

	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DepthCameraName), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Resolutions), (void*)NULL);
		#endif
	}
	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DepthCameraName), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Resolutions), (void*)NULL);
		#endif
	}
};
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
struct AudioMixerGroupU5BU5D_t8FDE37A00A7E874EB75184A6133A160137D0532B  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* m_Items[1];

	inline AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct AudioMixerSnapshotU5BU5D_tD41A94680B8A241063054F1931BDDC8B997D8382  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* m_Items[1];

	inline AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_gshared (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_gshared (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_gshared_inline (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_gshared (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetDuration_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m67FC8BE5E310D54C91DB1D492F7393237401332E_gshared (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___0_playable, double ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m95809D16DD3494AEB0E9E652B42E0CE3167BEE0E_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C_m28F89BE3D7CCE69B28258CC5B1C7D4E814F48CAB_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6_gshared (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m306C543FED06B697C9354420F4D95B2DCA99F67C_gshared (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m389A3417EF0CFE64A042AA7E53E8604F24458074_gshared (RuntimeObject* ___0_d, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_SetConfiguration_Injected_mCA4F9A7C9034332E10425C289E6DCDA12EEE432F (AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D* ___0_config, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_GetSpeakerMode_m9ACCF1E3EC7A1F151C0B7AAD50B39352B501AEF3 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D AudioSettings_GetConfiguration_mDA005BAD9577EBBE375F6D6C040D7F110508C910 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_SetConfiguration_m23590EFC835CF67DC0972681ACBBBBED0881117E (AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D ___0_config, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_GetSampleRate_mF571145D34E609D5F0F8C232FB9FDCCCC521F2A5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_GetConfiguration_Injected_m74228B679C071A70B4C5F7C46A88AFC046B9F8DA (AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D* ___0_ret, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_inline (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mobile_set_muteState_m7C9A464BCA3762330E18CCAD79AF6C47B863CA02_inline (bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mobile_get_stopAudioOutputOnMute_m43EC82258D38C418353DFE19F32B51B64B18DCCA (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_StopAudioOutput_m10B8CEF668EE4967D0AD1D6741B6A37540C28A46 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_StartAudioOutput_m731D1EEEE7A0D56BAADD571BA0FCAC13FB071223 (const RuntimeMethod* method) ;
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_mBDEFD7D7C8E5DEA3CCEE2D7DB406DBB0C244924E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_data, int32_t ___2_numSamples, int32_t ___3_samplesOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_mB49A9BC4639C62B9C8B22319D33D46AAD176BC3B (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_data, int32_t ___2_numsamples, int32_t ___3_samplesOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_mE8111F06981E42666B6A9A59D0A3EBE002D2CDFB (String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8 (String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4_stream, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___5_pcmreadercallback, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___6_pcmsetpositioncallback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Construct_Internal_m88BC07CE3F412DDB62820F9430D1D52DA42A26F6 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMReaderCallback_mA226EA143D90E04117A740FC9FA9F1111346CA83 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMSetPositionCallback_mB280AD93A847C65F536D846FECC7DCBE9266C37F (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_CreateUserSound_m34DA102DD6848D555D4A9D45AFAA9D3E5574BC45 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4_stream, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_inline (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_inline (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_GetOutputDataHelper_mB30445231F5805870AA625983442CE881D7B66FB (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_samples, int32_t ___1_channel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_GetSpectrumDataHelper_m2631C609AB0CC9ED84EB55C939EDC78456E0482F (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_samples, int32_t ___1_channel, int32_t ___2_window, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBehaviour__ctor_m6D88837496C42A746A51383F3D6F29CA72A9D309 (AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_GetPitch_m80F6D2BAF966F669253E9231AFCFFC303779913D (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetPitch_mE75DEDF8F37301BDA63E0F545A7A00850C24F53E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, float ___1_pitch, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, uint64_t ___1_delay, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m10DB5ACD1CC32EE433DBC10416B1450A30DE5F16 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, double ___0_delay, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, float ___1_volumeScale, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShotHelper_mD110EAF42353687BD0B1190EEF30F0C65A4CF265 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_clip, float ___2_volumeScale, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_stopOneShots, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_mF9D129487C356127ADA3AB5C0A67C7D00F26E3DD (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, float ___2_volume, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Type_t* ___0_componentType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, float ___1_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetCustomCurveHelper_m3921C8867C4075133FEF2629601FF44400BA86E9 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, int32_t ___1_type, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___2_curve, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* AudioSource_GetCustomCurveHelper_mC0B206F9AE3FA7A900C64194461691451F71B2AD (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, int32_t ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_GetOutputDataHelper_m209E9A63B5FEDFAA87E99B95E6D4D287AADC0444 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_samples, int32_t ___2_channel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_GetSpectrumDataHelper_m64E105A054751BD5E7477C7E309992EC0BF274EB (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_samples, int32_t ___2_channel, int32_t ___3_window, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* AudioLowPassFilter_GetCustomLowpassLevelCurveCopy_m14BAC51BB10B6F00B3BAC19CE7FEC5231F99E15B (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_SetCustomLowpassLevelCurveHelper_m47A4935A70317BB52F179FC0BFC6BEDEEA953CAC (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* ___0_source, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_curve, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetMicrophoneDeviceIDFromName_mD33349A5B41E037F04802638690FBA891035C238 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Microphone_StartRecord_m561E1A2B878937E556D6FCABC3FE735CB818D897 (int32_t ___0_deviceID, bool ___1_loop, float ___2_lengthSec, int32_t ___3_frequency, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_EndRecord_m6F4983F3A002DA6F07F979D42D0750A1C3D16156 (int32_t ___0_deviceID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_m59B6BAF774312891C815FCC4D0304256FDC93CB0 (int32_t ___0_deviceID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetRecordPosition_m73C6D07638BD2BB56C6FA91FF19AAE591A2782C6 (int32_t ___0_deviceID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_GetDeviceCaps_mEE44F844E84A87EE9B8CB7F241DB365309CC80AC (int32_t ___0_deviceID, int32_t* ___1_minFreq, int32_t* ___2_maxFreq, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioRenderer_Internal_AudioRenderer_Start_mCE86EBF2CD0C4BF634EA665D77380A69B73300E0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioRenderer_Internal_AudioRenderer_Stop_mE5058A6788AB5F599D1628FD8B22ABB673CF0DCE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioRenderer_Internal_AudioRenderer_GetSampleCountForCaptureFrame_m04AFD7EE530D8A61788927AAF565B0A9F088F6D9 (const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_gshared)(___0_nativeArray, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioRenderer_Internal_AudioRenderer_AddMixerGroupSink_m09D2301DB0F152CECFF48436ED175745EE2A49B9 (AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* ___0_mixerGroup, void* ___1_ptr, int32_t ___2_length, bool ___3_excludeFromMix, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioRenderer_Internal_AudioRenderer_Render_m17C449F516B4C0FFFC0F1D7A96705EFEBDE0799C (void* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture__ctor_mC0C7974BEBD867CEB281409FEA15A78CD91B19CC (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Internal_CreateWebCamTexture_mE8B5E78C03DAD51A213D6D39D5A154919409BDD9 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* ___0_self, String_t* ___1_scriptingDevice, int32_t ___2_requestedWidth, int32_t ___3_requestedHeight, int32_t ___4_maxFramerate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_GetPixel_Injected_mE8B1CFDFB7ED72F53E74D906FAE89DC575039E94 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, int32_t ___0_x, int32_t ___1_y, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___2_ret, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* WebCamTexture_GetPixels_mD30134473515AEA70C9DE43392F2ADD95747237A (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_blockWidth, int32_t ___3_blockHeight, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* WebCamTexture_GetPixels32_m7F4F302BE0E517451593C43E3F0D0D1B7840E39E (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_colors, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 WebCamTexture_get_internalAutoFocusPoint_m481D9B757EE9EC40A5FD8E8FA69CE1A02699A555 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) ;
inline void Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73 (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_gshared)(__this, ___0_value, method);
}
inline bool Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD*, const RuntimeMethod*))Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_gshared_inline)(__this, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7 (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD*, const RuntimeMethod*))Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_set_internalAutoFocusPoint_m29347F6736F67D3DFA70DC89580C5443553BEF99 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_get_internalAutoFocusPoint_Injected_m9ACB2C19E8240C26CA748D68358BE68D6D256ABE (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_ret, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_set_internalAutoFocusPoint_Injected_m20952B51A9F862174DFF269D23BC8CFC53E709AC (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_CreateHandle_mD7CA217BC6DE899D586272C372456EBB7ED2A825 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_clip, bool ___2_looping, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable__ctor_m4E686B92CFA7C6A36AA794B1E8C36B1E60605751 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
inline void PlayableExtensions_SetDuration_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m67FC8BE5E310D54C91DB1D492F7393237401332E (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___0_playable, double ___1_value, const RuntimeMethod* method)
{
	((  void (*) (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0, double, const RuntimeMethod*))PlayableExtensions_SetDuration_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m67FC8BE5E310D54C91DB1D492F7393237401332E_gshared)(___0_playable, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_InternalCreateAudioClipPlayable_mBDAA54F35207F6C62F87CAE268732072C7287616 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0_graph, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_clip, bool ___2_looping, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___3_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
inline bool PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m95809D16DD3494AEB0E9E652B42E0CE3167BEE0E (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m95809D16DD3494AEB0E9E652B42E0CE3167BEE0E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_x, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClipPlayable_GetClipInternal_m0B594FA02A34EEFC4CAB34B778FF10CD538EDF71 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClipPlayable_GetClip_m009747EE98DE59A9C7F31A069EEE77EBAC0A5A6F (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetClipInternal_mACA6B51D98C05266D1D0D05D86B5C675006C2DDD (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_clip, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetClip_mC1D588D0FB1D42630C2A76F82A1C2BDA61009926 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_GetLoopedInternal_m337CC96BD2CFEFCDB78AE704FD99AF8ED73B34FA (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_GetLooped_m18E3568715253DAF09D74A3C08CBF25A07B54660 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetLoopedInternal_mB8FA25F4121BEA4638075D388C2EA66011236341 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, bool ___1_looped, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetLooped_m7B0B25EC1369786D181CB8DF9BF31E5BFF81201B (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClipPlayable_GetVolumeInternal_m5ED28FAFC2B3077BAE2CA8F90612C9932C272FCE (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClipPlayable_GetVolume_mEB0C89F492CD12218C579365A1F9B07D96E7AE8B (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetVolumeInternal_m71EFEE49486AACBE4F9C936F4898448AB071B55F (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, float ___1_volume, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetVolume_m3553EC43CBA43CA7802292710A1A284A6DEF8FCC (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClipPlayable_GetStereoPanInternal_mCC24F11786E25F26876873CCF6CE4B1368608244 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClipPlayable_GetStereoPan_mB766EBDC23718A7FDC8D3510FB9A2A0B2AA38E69 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetStereoPanInternal_m206A1B777709E25F42C9EF0BEAF3A84D622D4A90 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, float ___1_stereoPan, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetStereoPan_mB8403E93B06B2ECCD0D4D6B0D55C151D0CCCC494 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClipPlayable_GetSpatialBlendInternal_m588B81B3B008D87A79B2DA76494BF359B2AA8125 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClipPlayable_GetSpatialBlend_mB3479E606D27347E8AE9470A50FF13F567D1B5DA (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetSpatialBlendInternal_mBAE4A56ACEE90D4732C5D2C5D2D721C65B3DD55B (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, float ___1_spatialBlend, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetSpatialBlend_m72F1B86E4E5940E8587C1EA32BB48463A00810BB (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_IsChannelPlaying_mA1C0DFAD142F4D43C5BB4EFE2929708CCE59EDA4 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_IsPlaying_mB24D86E9BA044A3CC82FB12866DC2EB61ADE238F (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_GetIsChannelPlayingInternal_mE3D91DB6102F7D166F4D495E22330B98A4B14721 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AudioClipPlayable_GetStartDelayInternal_m45F9633CF2D28DD344D68231443AEF11CA3B12F6 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AudioClipPlayable_GetStartDelay_m9C96B753369B9CDA1482CFBB76AFBE22DDED5E47 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetStartDelayInternal_m1A3816547BF61B7448654300EF078D464A5618CD (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, double ___1_delay, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetStartDelay_mD7F1860C6EAD27123871D6B95B9D2B1A21DA17C3 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AudioClipPlayable_GetPauseDelayInternal_m0993546EFBB076183302FF7902815057D7A5A399 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AudioClipPlayable_GetPauseDelay_m402FFC47A9FA96C5015D1268A7B0063308A3724A (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetPlayState_m14547B804BB9B9B9E2B20B3F0975334CC99E778F (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetPauseDelayInternal_m803360EBD0BB692C31D31D620AAB9C8D0CD7A9D1 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, double ___1_delay, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_GetPauseDelay_mAECC9DDE01CAFD50761079E4FBC1B00E8B9FE48C (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_Seek_m2AB327B535C677793BBADEA634B7AAC9442B1391 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, double ___0_startTime, double ___1_startDelay, double ___2_duration, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_Seek_m9444B6B715ECAB55500E1BBD04A1B6BD22980ECD (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, double ___0_startTime, double ___1_startDelay, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableHandle_GetDuration_mE3CF9C12CA5A186288A7F1981A92F043100E02A7 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetDone_mE04197A8D1657035DC6C70AF7291715557A9FB49 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetDuration_m4E07F9F3A90B2F3CE10325D9F405993F03CCA08B (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetTime_m6D255AB6779F3DC278813F1C016FE4EBC9F4B1E4 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_Play_m1EF8E1105EB6A4A9B0D6638A57CDCBCEEDC6FB2D (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* AudioMixerSnapshot_get_audioMixer_mCC13199F7F9EBB2C5510DFA750A501747229CBF5 (AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixer_TransitionToSnapshotInternal_m9D07330A3EF997CC4BB165829D8D2AD6187A8DD0 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* ___0_snapshot, float ___1_timeToReach, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_CreateHandle_mCA2A6EF1CC490A8E59C8EE2020D3304D66B96852 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, int32_t ___1_inputCount, bool ___2_normalizeInputVolumes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixerPlayable__ctor_m2CDDE33FCE0B3F7D9EB482D76515FBF771285F47 (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_CreateAudioMixerPlayableInternal_mB91DD585A6A2903F01F49719CA0045C8727B5AA9 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0_graph, bool ___1_normalizeInputVolumes, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___2_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetInputCount_m6067CD3616C428F777903FCBFD789060A2185DEE (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline bool PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C_m28F89BE3D7CCE69B28258CC5B1C7D4E814F48CAB (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C_m28F89BE3D7CCE69B28258CC5B1C7D4E814F48CAB_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57 (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixer_TransitionToSnapshot_m308E8D50A4573EFDD381ED7DEC23162F8CD0EB5D (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* ___0_snapshot, float ___1_timeToReach, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateOutputMethod__ctor_m5A339017CD8ECB0140EB936FD2A5B589B20166B4 (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 PlayableBinding_CreateInternal_m63C8C98E659B52725E0373019ECFCEC22167A47A (String_t* ___0_name, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_sourceObject, Type_t* ___2_sourceType, CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* ___3_createFunction, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 AudioPlayableOutput_Create_m90DF38B28813932D4246094FD4DB6105572619D2 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 AudioPlayableOutput_op_Implicit_mD2D35763126BDE08E10CA74D8E8C49988477F428 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 ___0_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioPlayableGraphExtensions_InternalCreateAudioOutput_m5EF8B18878AFFE0B462E615C8243C2433A3F5E78 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0_graph, String_t* ___1_name, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___2_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 AudioPlayableOutput_get_Null_m8404386CE6506C8C0574B74023EB1BC17A45F205 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_SetTarget_m34EE86E5C2833F12993681ABE5AC85961836DE04 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsValid_mA94C343D72B72C3B1C7636C93A8DB5EA71691312 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;
inline bool PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, const RuntimeMethod*))PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutputHandle_get_Null_m656E8D2549FA031DA8A2EA5B39CE3B33D75B69F8 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AudioPlayableOutput_GetHandle_m55153D572F8FB9BCFF3843402A20280273B934AE (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* AudioPlayableOutput_InternalGetTarget_m34CC5798C297222E92D216941F1A98E76BF55F47 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* AudioPlayableOutput_GetTarget_m2258506791A9E370329AFD2D4FE9FD7CD2D2DB48 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_InternalSetTarget_m3A9912A00BC052FCEDEBB5EB75DCBE5B2B9DA86E (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_output, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___1_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioPlayableOutput_InternalGetEvaluateOnSeek_m13F0BE232D32E1C4F6982CC22A386ACB3741560A (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioPlayableOutput_GetEvaluateOnSeek_m23EF84B9C518CDB97E68214E2A2BD89A1FCD6F6E (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_InternalSetEvaluateOnSeek_m639F527A20B97D2617898E223B5CDC1DC8548804 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_output, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_SetEvaluateOnSeek_mB3266A8A68E94933A82A0C431B7A2E7321929D92 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* AudioSampleProvider_InternalGetScriptingPtr_mA1A158321BE37492A745702503F4233E234C1D62 (uint32_t ___0_providerId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSampleProvider_InternalIsValid_mCBDAABC4B1ED912B8F13D66AA587175BC549A548 (uint32_t ___0_providerId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider__ctor_m83670597E1EBE98AC6468172D464C9129CFCE375 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, uint32_t ___0_providerId, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_ownerObj, uint16_t ___2_trackIdx, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_InternalCreateSampleProvider_m3BD26F837CD7D2ED547A0AE02AC079A72BEE998D (uint16_t ___0_channelCount, uint32_t ___1_sampleRate, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioSampleProvider_set_owner_mD620FF3D0BC2188F48D2741102385358F0B8E71B_inline (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioSampleProvider_set_id_mA392A551DD19269C1C8C0134935E6CDAA51831A6_inline (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioSampleProvider_set_trackIndex_mC2EE9E4029DF0362F4EAC7FE4DA24C3BFC9AEBAB_inline (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioSampleProvider_InternalGetConsumeSampleFramesNativeFunctionPtr_m9F24D2DADDF9A36E4E81D16DE1F9C40A3A4FFE89 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304 (intptr_t ___0_ptr, Type_t* ___1_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InternalGetFormatInfo_m8725A2417CD3304F009AA19328606EF2434FD703 (uint32_t ___0_providerId, uint16_t* ___1_chCount, uint32_t* ___2_sRate, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioSampleProvider_set_channelCount_m32FE390F1DBCEF6483FA2B6DD80A1F7542B29DE5_inline (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioSampleProvider_set_sampleRate_m3F8E715867B01BF4238E9A6D0B5705BFB6CDEFC7_inline (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InternalSetScriptingPtr_m6FE4C028426BB46CC9648F66930324E2A708DEF8 (uint32_t ___0_providerId, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_Dispose_mD4D855AD77CF61F9BDF38BE79564E67BA4627E2A (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_get_id_m54B9861281DA7D0B1BE31B01B4319986E649BAED_inline (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* AudioSampleProvider_get_owner_mC8461FD790AEC7BACE00C8A3F1DE4D00E08EF1AC_inline (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InternalRemove_mBC651EF68D78CFB4310E3022002070ED2174BD24 (uint32_t ___0_providerId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_InternalGetMaxSampleFrameCount_m33AF5AF071B5354DC657C8521ACD6379094F8A79 (uint32_t ___0_providerId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_InternalGetAvailableSampleFrameCount_mD9A3A290D03ADB2D14625A2F2DC56D6FFD6D1AA0 (uint32_t ___0_providerId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_InternalGetFreeSampleFrameCount_mF71ABBF38D3686A855500D81EBC91F209C91E989 (uint32_t ___0_providerId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_InternalGetFreeSampleFrameCountLowThreshold_m011436ED9F51F1BDB79C7D2C418971EB29ED8F6B (uint32_t ___0_providerId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InternalSetFreeSampleFrameCountLowThreshold_mD5788B7F4F5C2069F04AD6D343148ED9916E319B (uint32_t ___0_providerId, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSampleProvider_InternalGetEnableSampleFramesAvailableEvents_m5828616745AD1EA4FC310DDE5001BBE5D3F5E62F (uint32_t ___0_providerId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InternalSetEnableSampleFramesAvailableEvents_mB1F3F754FCD1952FC3C6B27EEAC27A961A30C66F (uint32_t ___0_providerId, bool ___1_enable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSampleProvider_InternalGetEnableSilencePadding_m8C2198276DCB909C7327096B728C5489F012E4ED (uint32_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InternalSetEnableSilencePadding_m4B055B4F1E7877BDC67BB611BBA5390193171D3F (uint32_t ___0_id, bool ___1_enabled, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t AudioSampleProvider_get_channelCount_m2E8B29584D96B878521E64400D6673C59E4A10B7_inline (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ConsumeSampleFramesNativeFunction_Invoke_mBE5976A97FA5133DA1EFD35257CB184D71181B99_inline (ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE* __this, uint32_t ___0_providerId, intptr_t ___1_interleavedSampleFrames, uint32_t ___2_sampleFrameCount, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m306C543FED06B697C9354420F4D95B2DCA99F67C (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m306C543FED06B697C9354420F4D95B2DCA99F67C_gshared)(___0_nativeArray, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_InternalQueueSampleFrames_mDF93286C58F479F4FDBFF783D00B426F85C6624D (uint32_t ___0_id, intptr_t ___1_interleavedSampleFrames, uint32_t ___2_sampleFrameCount, const RuntimeMethod* method) ;
inline intptr_t Marshal_GetFunctionPointerForDelegate_TisSampleFramesEventNativeFunction_tCDAC7603B0833CEDC752346C2CE1B79DFAD40639_mCC82AA3A7E3C114EFFE27AB8DF03A8CD8118A91A (SampleFramesEventNativeFunction_tCDAC7603B0833CEDC752346C2CE1B79DFAD40639* ___0_d, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (SampleFramesEventNativeFunction_tCDAC7603B0833CEDC752346C2CE1B79DFAD40639*, const RuntimeMethod*))Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m389A3417EF0CFE64A042AA7E53E8604F24458074_gshared)(___0_d, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InternalSetSampleFramesAvailableNativeHandler_m76AD17D2A2B6F1387747538E681DC72EAC0A56A1 (uint32_t ___0_providerId, intptr_t ___1_handler, intptr_t ___2_userData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InternalClearSampleFramesAvailableNativeHandler_m28838F1E2D5A6CE0910E1045A3EA27D1ADD311EA (uint32_t ___0_providerId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InternalSetSampleFramesOverflowNativeHandler_mDEB472C3FBF948D64213C9D5C4748B819FFB08E3 (uint32_t ___0_providerId, intptr_t ___1_handler, intptr_t ___2_userData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InternalClearSampleFramesOverflowNativeHandler_m4C2BB3111C516BF7AD0ED0503FE77F15E6DA553B (uint32_t ___0_providerId, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSampleProviderExtensionsInternal_InternalGetAudioSampleProviderSpeed_m4B89D873E08293C6DDDADB795D061049EAFEEEA8 (uint32_t ___0_providerId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSourceExtensionsInternal_Internal_RegisterSampleProviderWithAudioSource_m44FC79BA5403BE0101D7CA745089AD5A70362528 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, uint32_t ___1_providerId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSourceExtensionsInternal_Internal_UnregisterSampleProviderFromAudioSource_mE36C0772279DFEE17E6D9A07510D91C7058247D7 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, uint32_t ___1_providerId, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_GetSpeakerMode_m9ACCF1E3EC7A1F151C0B7AAD50B39352B501AEF3 (const RuntimeMethod* method) 
{
	typedef int32_t (*AudioSettings_GetSpeakerMode_m9ACCF1E3EC7A1F151C0B7AAD50B39352B501AEF3_ftn) ();
	static AudioSettings_GetSpeakerMode_m9ACCF1E3EC7A1F151C0B7AAD50B39352B501AEF3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_GetSpeakerMode_m9ACCF1E3EC7A1F151C0B7AAD50B39352B501AEF3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::GetSpeakerMode()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_SetConfiguration_m23590EFC835CF67DC0972681ACBBBBED0881117E (AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D ___0_config, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = AudioSettings_SetConfiguration_Injected_mCA4F9A7C9034332E10425C289E6DCDA12EEE432F((&___0_config), NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_GetSampleRate_mF571145D34E609D5F0F8C232FB9FDCCCC521F2A5 (const RuntimeMethod* method) 
{
	typedef int32_t (*AudioSettings_GetSampleRate_mF571145D34E609D5F0F8C232FB9FDCCCC521F2A5_ftn) ();
	static AudioSettings_GetSampleRate_mF571145D34E609D5F0F8C232FB9FDCCCC521F2A5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_GetSampleRate_mF571145D34E609D5F0F8C232FB9FDCCCC521F2A5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::GetSampleRate()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_get_driverCapabilities_mE17FA788F706BBB1CCE5DF0DD33EB96F45E07701 (const RuntimeMethod* method) 
{
	typedef int32_t (*AudioSettings_get_driverCapabilities_mE17FA788F706BBB1CCE5DF0DD33EB96F45E07701_ftn) ();
	static AudioSettings_get_driverCapabilities_mE17FA788F706BBB1CCE5DF0DD33EB96F45E07701_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_get_driverCapabilities_mE17FA788F706BBB1CCE5DF0DD33EB96F45E07701_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::get_driverCapabilities()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_get_speakerMode_mE38A6FBB1F5F61B39075062B413742A1E78317A9 (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = AudioSettings_GetSpeakerMode_m9ACCF1E3EC7A1F151C0B7AAD50B39352B501AEF3(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_set_speakerMode_m255E3F7E44959D9A365CBE05859A1B39D8B5373B (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D559554A5CC1687161C80ACC0D5510EE8FE6230);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEDDE242032A9FE10235C17BEBE07A06A35AF793);
		s_Il2CppMethodInitialized = true;
	}
	AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral4D559554A5CC1687161C80ACC0D5510EE8FE6230, NULL);
		AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D L_0;
		L_0 = AudioSettings_GetConfiguration_mDA005BAD9577EBBE375F6D6C040D7F110508C910(NULL);
		V_0 = L_0;
		int32_t L_1 = ___0_value;
		(&V_0)->___speakerMode = L_1;
		AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D L_2 = V_0;
		bool L_3;
		L_3 = AudioSettings_SetConfiguration_m23590EFC835CF67DC0972681ACBBBBED0881117E(L_2, NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralDEDDE242032A9FE10235C17BEBE07A06A35AF793, NULL);
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_get_profilerCaptureFlags_m3D9B8353004FC3DB1B17C4B2AED61917D85F37B1 (const RuntimeMethod* method) 
{
	typedef int32_t (*AudioSettings_get_profilerCaptureFlags_m3D9B8353004FC3DB1B17C4B2AED61917D85F37B1_ftn) ();
	static AudioSettings_get_profilerCaptureFlags_m3D9B8353004FC3DB1B17C4B2AED61917D85F37B1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_get_profilerCaptureFlags_m3D9B8353004FC3DB1B17C4B2AED61917D85F37B1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::get_profilerCaptureFlags()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA (const RuntimeMethod* method) 
{
	typedef double (*AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA_ftn) ();
	static AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_get_dspTime_m246053C21870BC68BF7BBC5C5AC1B8F25337AEEA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::get_dspTime()");
	double icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_get_outputSampleRate_mEACF8FD7BFDFBD76EB8FC7E438B3AF19DB57BC6D (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = AudioSettings_GetSampleRate_mF571145D34E609D5F0F8C232FB9FDCCCC521F2A5(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_set_outputSampleRate_m999BE5DA776313AB9BCB0DB5ABBBB8C822BF3CC1 (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CB02688EA29A0BD85B9DA7E74AC7A3A69999F58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral828D4B8E973CD2A33393B5ADD77232D5F1E14741);
		s_Il2CppMethodInitialized = true;
	}
	AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral2CB02688EA29A0BD85B9DA7E74AC7A3A69999F58, NULL);
		AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D L_0;
		L_0 = AudioSettings_GetConfiguration_mDA005BAD9577EBBE375F6D6C040D7F110508C910(NULL);
		V_0 = L_0;
		int32_t L_1 = ___0_value;
		(&V_0)->___sampleRate = L_1;
		AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D L_2 = V_0;
		bool L_3;
		L_3 = AudioSettings_SetConfiguration_m23590EFC835CF67DC0972681ACBBBBED0881117E(L_2, NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral828D4B8E973CD2A33393B5ADD77232D5F1E14741, NULL);
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_GetDSPBufferSize_mA02A8E7960F597D6F6CE6402B59410B51EC32F59 (int32_t* ___0_bufferLength, int32_t* ___1_numBuffers, const RuntimeMethod* method) 
{
	typedef void (*AudioSettings_GetDSPBufferSize_mA02A8E7960F597D6F6CE6402B59410B51EC32F59_ftn) (int32_t*, int32_t*);
	static AudioSettings_GetDSPBufferSize_mA02A8E7960F597D6F6CE6402B59410B51EC32F59_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_GetDSPBufferSize_mA02A8E7960F597D6F6CE6402B59410B51EC32F59_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::GetDSPBufferSize(System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___0_bufferLength, ___1_numBuffers);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_SetDSPBufferSize_m14F06B59A5E365B746749C0F9310FC3F4C3E198F (int32_t ___0_bufferLength, int32_t ___1_numBuffers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DAF31F38982B9C7550A85BB70D632177804B10A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB94595983AD879C2F3FFCB8A1823C3113AE9497);
		s_Il2CppMethodInitialized = true;
	}
	AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral5DAF31F38982B9C7550A85BB70D632177804B10A, NULL);
		AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D L_0;
		L_0 = AudioSettings_GetConfiguration_mDA005BAD9577EBBE375F6D6C040D7F110508C910(NULL);
		V_0 = L_0;
		int32_t L_1 = ___0_bufferLength;
		(&V_0)->___dspBufferSize = L_1;
		AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D L_2 = V_0;
		bool L_3;
		L_3 = AudioSettings_SetConfiguration_m23590EFC835CF67DC0972681ACBBBBED0881117E(L_2, NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralAB94595983AD879C2F3FFCB8A1823C3113AE9497, NULL);
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioSettings_GetSpatializerPluginName_m60C2C3FA09CB0422D1EDAE5185F20BF01689BF00 (const RuntimeMethod* method) 
{
	typedef String_t* (*AudioSettings_GetSpatializerPluginName_m60C2C3FA09CB0422D1EDAE5185F20BF01689BF00_ftn) ();
	static AudioSettings_GetSpatializerPluginName_m60C2C3FA09CB0422D1EDAE5185F20BF01689BF00_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_GetSpatializerPluginName_m60C2C3FA09CB0422D1EDAE5185F20BF01689BF00_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::GetSpatializerPluginName()");
	String_t* icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D AudioSettings_GetConfiguration_mDA005BAD9577EBBE375F6D6C040D7F110508C910 (const RuntimeMethod* method) 
{
	AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AudioSettings_GetConfiguration_Injected_m74228B679C071A70B4C5F7C46A88AFC046B9F8DA((&V_0), NULL);
		AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_Reset_mA15BD1F6C3A6C78D85845D3D86C4271559A12D75 (AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D ___0_config, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D L_0 = ___0_config;
		bool L_1;
		L_1 = AudioSettings_SetConfiguration_m23590EFC835CF67DC0972681ACBBBBED0881117E(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_add_OnAudioConfigurationChanged_m53F7FD8FF545E23217D2271424843E27AF31585F (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* V_0 = NULL;
	AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* V_1 = NULL;
	AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* V_2 = NULL;
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioConfigurationChanged;
		V_0 = L_0;
	}

IL_0006:
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_1 = V_0;
		V_1 = L_1;
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_2 = V_1;
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177*)CastclassSealed((RuntimeObject*)L_4, AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177_il2cpp_TypeInfo_var));
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_5 = V_2;
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_6 = V_1;
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_7;
		L_7 = InterlockedCompareExchangeImpl<AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177*>((&((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioConfigurationChanged), L_5, L_6);
		V_0 = L_7;
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_8 = V_0;
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_9 = V_1;
		if ((!(((RuntimeObject*)(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177*)L_8) == ((RuntimeObject*)(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_remove_OnAudioConfigurationChanged_mA9CB4575FC75DF3761B8AA0D0259A1255FFF908D (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* V_0 = NULL;
	AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* V_1 = NULL;
	AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* V_2 = NULL;
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioConfigurationChanged;
		V_0 = L_0;
	}

IL_0006:
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_1 = V_0;
		V_1 = L_1;
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_2 = V_1;
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177*)CastclassSealed((RuntimeObject*)L_4, AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177_il2cpp_TypeInfo_var));
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_5 = V_2;
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_6 = V_1;
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_7;
		L_7 = InterlockedCompareExchangeImpl<AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177*>((&((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioConfigurationChanged), L_5, L_6);
		V_0 = L_7;
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_8 = V_0;
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_9 = V_1;
		if ((!(((RuntimeObject*)(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177*)L_8) == ((RuntimeObject*)(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_add_OnAudioSystemShuttingDown_m085D01C33AA0B928411130FAC1EFF9E078880A8F (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioSystemShuttingDown;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioSystemShuttingDown), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_remove_OnAudioSystemShuttingDown_m8CC63D0928D01C18BE6BB13D832C4AB795616459 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioSystemShuttingDown;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioSystemShuttingDown), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_add_OnAudioSystemStartedUp_m42720147F78075E9ED9AC288A39C0F7290E8A7C7 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioSystemStartedUp;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioSystemStartedUp), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_remove_OnAudioSystemStartedUp_mC47DA438649F6130CE9191E2C22CC05CE18048EE (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioSystemStartedUp;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioSystemStartedUp), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioConfigurationChanged_m8273D3AEB24F4C3E374238B6F699BE6696808E85 (bool ___0_deviceWasChanged, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioConfigurationChanged;
		V_0 = (bool)((!(((RuntimeObject*)(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_2 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioConfigurationChanged;
		bool L_3 = ___0_deviceWasChanged;
		NullCheck(L_2);
		AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_inline(L_2, L_3, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioSystemShuttingDown_m1B9895D60B3267EBDEC69B9169730DBAD8325E90 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioSystemShuttingDown;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0011;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0011:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioSystemStartedUp_m7FE042936237E5BDCB20299D8C4CF583B661468C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioSystemStartedUp;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0011;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0011:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_get_unityAudioDisabled_mB14CD46E59D1A9A8CBEFA75DB45C826B98DFC8CB (const RuntimeMethod* method) 
{
	typedef bool (*AudioSettings_get_unityAudioDisabled_mB14CD46E59D1A9A8CBEFA75DB45C826B98DFC8CB_ftn) ();
	static AudioSettings_get_unityAudioDisabled_mB14CD46E59D1A9A8CBEFA75DB45C826B98DFC8CB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_get_unityAudioDisabled_mB14CD46E59D1A9A8CBEFA75DB45C826B98DFC8CB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::get_unityAudioDisabled()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioSettings_GetAmbisonicDecoderPluginName_mE0E37E5829FD3F936DEB8107B27A188444F4DC80 (const RuntimeMethod* method) 
{
	typedef String_t* (*AudioSettings_GetAmbisonicDecoderPluginName_mE0E37E5829FD3F936DEB8107B27A188444F4DC80_ftn) ();
	static AudioSettings_GetAmbisonicDecoderPluginName_mE0E37E5829FD3F936DEB8107B27A188444F4DC80_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_GetAmbisonicDecoderPluginName_mE0E37E5829FD3F936DEB8107B27A188444F4DC80_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::GetAmbisonicDecoderPluginName()");
	String_t* icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE (const RuntimeMethod* method) 
{
	typedef bool (*AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE_ftn) ();
	static AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::StartAudioOutput()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB (const RuntimeMethod* method) 
{
	typedef bool (*AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB_ftn) ();
	static AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::StopAudioOutput()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_get_audioOutputStarted_m99BFE5F17D472653F04BCA0E5662D9728C11F07F (const RuntimeMethod* method) 
{
	typedef bool (*AudioSettings_get_audioOutputStarted_m99BFE5F17D472653F04BCA0E5662D9728C11F07F_ftn) ();
	static AudioSettings_get_audioOutputStarted_m99BFE5F17D472653F04BCA0E5662D9728C11F07F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_get_audioOutputStarted_m99BFE5F17D472653F04BCA0E5662D9728C11F07F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::get_audioOutputStarted()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings__ctor_mC0A73A13453F1775EEBCDBE82FA77B2EB7299219 (AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_SetConfiguration_Injected_mCA4F9A7C9034332E10425C289E6DCDA12EEE432F (AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D* ___0_config, const RuntimeMethod* method) 
{
	typedef bool (*AudioSettings_SetConfiguration_Injected_mCA4F9A7C9034332E10425C289E6DCDA12EEE432F_ftn) (AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D*);
	static AudioSettings_SetConfiguration_Injected_mCA4F9A7C9034332E10425C289E6DCDA12EEE432F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_SetConfiguration_Injected_mCA4F9A7C9034332E10425C289E6DCDA12EEE432F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::SetConfiguration_Injected(UnityEngine.AudioConfiguration&)");
	bool icallRetVal = _il2cpp_icall_func(___0_config);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_GetConfiguration_Injected_m74228B679C071A70B4C5F7C46A88AFC046B9F8DA (AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*AudioSettings_GetConfiguration_Injected_m74228B679C071A70B4C5F7C46A88AFC046B9F8DA_ftn) (AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D*);
	static AudioSettings_GetConfiguration_Injected_m74228B679C071A70B4C5F7C46A88AFC046B9F8DA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_GetConfiguration_Injected_m74228B679C071A70B4C5F7C46A88AFC046B9F8DA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::GetConfiguration_Injected(UnityEngine.AudioConfiguration&)");
	_il2cpp_icall_func(___0_ret);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_Multicast(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* currentDelegate = reinterpret_cast<AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_deviceWasChanged, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_OpenInst(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_deviceWasChanged, method);
}
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_OpenStatic(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_deviceWasChanged, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177 (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(static_cast<int32_t>(___0_deviceWasChanged));

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler__ctor_mA9827AB9472EC8EE0A0F0FC24EBC06B4740DD944 (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2 (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_deviceWasChanged, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___U3CmuteStateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_set_muteState_m7C9A464BCA3762330E18CCAD79AF6C47B863CA02 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___U3CmuteStateU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mobile_get_stopAudioOutputOnMute_m43EC82258D38C418353DFE19F32B51B64B18DCCA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->____stopAudioOutputOnMute;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_InvokeOnMuteStateChanged_mE5242862F948BA9FBB013A2B45F645B6A21E6198 (bool ___0_mute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		bool L_0 = ___0_mute;
		bool L_1;
		L_1 = Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D_inline(NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		bool L_3 = ___0_mute;
		Mobile_set_muteState_m7C9A464BCA3762330E18CCAD79AF6C47B863CA02_inline(L_3, NULL);
		bool L_4;
		L_4 = Mobile_get_stopAudioOutputOnMute_m43EC82258D38C418353DFE19F32B51B64B18DCCA(NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		bool L_6;
		L_6 = Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D_inline(NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		Mobile_StopAudioOutput_m10B8CEF668EE4967D0AD1D6741B6A37540C28A46(NULL);
		goto IL_0039;
	}

IL_0033:
	{
		Mobile_StartAudioOutput_m731D1EEEE7A0D56BAADD571BA0FCAC13FB071223(NULL);
	}

IL_0039:
	{
	}

IL_003a:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___OnMuteStateChanged;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___OnMuteStateChanged;
		bool L_11 = ___0_mute;
		NullCheck(L_10);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_10, L_11, NULL);
	}

IL_0052:
	{
	}

IL_0053:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mobile_InvokeIsStopAudioOutputOnMuteEnabled_m854CB455C7BE7ADC06BABCB9AA24F60309AE7ED1 (const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = Mobile_get_stopAudioOutputOnMute_m43EC82258D38C418353DFE19F32B51B64B18DCCA(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_StartAudioOutput_m731D1EEEE7A0D56BAADD571BA0FCAC13FB071223 (const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_StopAudioOutput_m10B8CEF668EE4967D0AD1D6741B6A37540C28A46 (const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB(NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip__ctor_m038DA97CB07076D1D9391E1E103F0F41D3622F89 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___m_PCMReaderCallback = (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PCMReaderCallback), (void*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)NULL);
		__this->___m_PCMSetPositionCallback = (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PCMSetPositionCallback), (void*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_mBDEFD7D7C8E5DEA3CCEE2D7DB406DBB0C244924E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_data, int32_t ___2_numSamples, int32_t ___3_samplesOffset, const RuntimeMethod* method) 
{
	typedef bool (*AudioClip_GetData_mBDEFD7D7C8E5DEA3CCEE2D7DB406DBB0C244924E_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, int32_t, int32_t);
	static AudioClip_GetData_mBDEFD7D7C8E5DEA3CCEE2D7DB406DBB0C244924E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_GetData_mBDEFD7D7C8E5DEA3CCEE2D7DB406DBB0C244924E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::GetData(UnityEngine.AudioClip,System.Single[],System.Int32,System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(___0_clip, ___1_data, ___2_numSamples, ___3_samplesOffset);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_mB49A9BC4639C62B9C8B22319D33D46AAD176BC3B (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_data, int32_t ___2_numsamples, int32_t ___3_samplesOffset, const RuntimeMethod* method) 
{
	typedef bool (*AudioClip_SetData_mB49A9BC4639C62B9C8B22319D33D46AAD176BC3B_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, int32_t, int32_t);
	static AudioClip_SetData_mB49A9BC4639C62B9C8B22319D33D46AAD176BC3B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_SetData_mB49A9BC4639C62B9C8B22319D33D46AAD176BC3B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::SetData(UnityEngine.AudioClip,System.Single[],System.Int32,System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(___0_clip, ___1_data, ___2_numsamples, ___3_samplesOffset);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Construct_Internal_m88BC07CE3F412DDB62820F9430D1D52DA42A26F6 (const RuntimeMethod* method) 
{
	typedef AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* (*AudioClip_Construct_Internal_m88BC07CE3F412DDB62820F9430D1D52DA42A26F6_ftn) ();
	static AudioClip_Construct_Internal_m88BC07CE3F412DDB62820F9430D1D52DA42A26F6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_Construct_Internal_m88BC07CE3F412DDB62820F9430D1D52DA42A26F6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::Construct_Internal()");
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef String_t* (*AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::GetName()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_CreateUserSound_m34DA102DD6848D555D4A9D45AFAA9D3E5574BC45 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4_stream, const RuntimeMethod* method) 
{
	typedef void (*AudioClip_CreateUserSound_m34DA102DD6848D555D4A9D45AFAA9D3E5574BC45_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, String_t*, int32_t, int32_t, int32_t, bool);
	static AudioClip_CreateUserSound_m34DA102DD6848D555D4A9D45AFAA9D3E5574BC45_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_CreateUserSound_m34DA102DD6848D555D4A9D45AFAA9D3E5574BC45_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::CreateUserSound(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___0_name, ___1_lengthSamples, ___2_channels, ___3_frequency, ___4_stream);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_length()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_samples()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_channels()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_frequency()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_get_isReadyToPlay_m84A0F1A9E45C8C8A6932F68B8B9124A3C55144D0 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef bool (*AudioClip_get_isReadyToPlay_m84A0F1A9E45C8C8A6932F68B8B9124A3C55144D0_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_get_isReadyToPlay_m84A0F1A9E45C8C8A6932F68B8B9124A3C55144D0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_isReadyToPlay_m84A0F1A9E45C8C8A6932F68B8B9124A3C55144D0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_isReadyToPlay()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_loadType_m87B9E136629F7C45118EBB5B6A39273A667EE838 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioClip_get_loadType_m87B9E136629F7C45118EBB5B6A39273A667EE838_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_get_loadType_m87B9E136629F7C45118EBB5B6A39273A667EE838_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_loadType_m87B9E136629F7C45118EBB5B6A39273A667EE838_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_loadType()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_LoadAudioData_mF43E6195AA70C39045DCF08D01C61C9DAA6876DC (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef bool (*AudioClip_LoadAudioData_mF43E6195AA70C39045DCF08D01C61C9DAA6876DC_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_LoadAudioData_mF43E6195AA70C39045DCF08D01C61C9DAA6876DC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_LoadAudioData_mF43E6195AA70C39045DCF08D01C61C9DAA6876DC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::LoadAudioData()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_UnloadAudioData_m4022A02B836CDC945D634DD7CB4DA0018F718E62 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef bool (*AudioClip_UnloadAudioData_m4022A02B836CDC945D634DD7CB4DA0018F718E62_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_UnloadAudioData_m4022A02B836CDC945D634DD7CB4DA0018F718E62_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_UnloadAudioData_m4022A02B836CDC945D634DD7CB4DA0018F718E62_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::UnloadAudioData()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_get_preloadAudioData_mA3D346D89D612D70EED427D95FD6CA254AE02D4A (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef bool (*AudioClip_get_preloadAudioData_mA3D346D89D612D70EED427D95FD6CA254AE02D4A_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_get_preloadAudioData_mA3D346D89D612D70EED427D95FD6CA254AE02D4A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_preloadAudioData_mA3D346D89D612D70EED427D95FD6CA254AE02D4A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_preloadAudioData()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_get_ambisonic_m56A48DCA23ABD92C967B8BD26AEC6D7CE4711304 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef bool (*AudioClip_get_ambisonic_m56A48DCA23ABD92C967B8BD26AEC6D7CE4711304_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_get_ambisonic_m56A48DCA23ABD92C967B8BD26AEC6D7CE4711304_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_ambisonic_m56A48DCA23ABD92C967B8BD26AEC6D7CE4711304_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_ambisonic()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_get_loadInBackground_m13F3D5F7AEA3A845D3903D93F3E986F616D64FDC (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef bool (*AudioClip_get_loadInBackground_m13F3D5F7AEA3A845D3903D93F3E986F616D64FDC_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_get_loadInBackground_m13F3D5F7AEA3A845D3903D93F3E986F616D64FDC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_loadInBackground_m13F3D5F7AEA3A845D3903D93F3E986F616D64FDC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_loadInBackground()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_loadState_mD5E89ED3E6C1C706C021598FDF86FEB7BF5DE669 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioClip_get_loadState_mD5E89ED3E6C1C706C021598FDF86FEB7BF5DE669_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_get_loadState_mD5E89ED3E6C1C706C021598FDF86FEB7BF5DE669_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_loadState_mD5E89ED3E6C1C706C021598FDF86FEB7BF5DE669_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_loadState()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_m1F6480FFDA2E354A7D8C8DE40F61AAB5AF6B4A1D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, int32_t ___1_offsetSamples, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C53570A90E7EFA87FDB7F0DCC0EE1FCC019E426);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF52B980B71426E2D226C2ED5B2045868E72F85FF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0;
		L_0 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(__this, NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2;
		L_2 = AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1(__this, NULL);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralF52B980B71426E2D226C2ED5B2045868E72F85FF, L_2, _stringLiteral8C53570A90E7EFA87FDB7F0DCC0EE1FCC019E426, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		V_2 = (bool)0;
		goto IL_004e;
	}

IL_0031:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ___0_data;
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0041;
	}

IL_0037:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(__this, NULL);
		G_B5_0 = ((int32_t)(((int32_t)(((RuntimeArray*)L_5)->max_length))/L_6));
	}

IL_0041:
	{
		V_0 = G_B5_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = ___0_data;
		int32_t L_8 = V_0;
		int32_t L_9 = ___1_offsetSamples;
		bool L_10;
		L_10 = AudioClip_GetData_mBDEFD7D7C8E5DEA3CCEE2D7DB406DBB0C244924E(__this, L_7, L_8, L_9, NULL);
		V_2 = L_10;
		goto IL_004e;
	}

IL_004e:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, int32_t ___1_offsetSamples, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5633EC5A323E76AB2DB48162D296F674B1A4AE13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C53570A90E7EFA87FDB7F0DCC0EE1FCC019E426);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	{
		int32_t L_0;
		L_0 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(__this, NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2;
		L_2 = AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1(__this, NULL);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral5633EC5A323E76AB2DB48162D296F674B1A4AE13, L_2, _stringLiteral8C53570A90E7EFA87FDB7F0DCC0EE1FCC019E426, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		V_1 = (bool)0;
		goto IL_0082;
	}

IL_0031:
	{
		int32_t L_4 = ___1_offsetSamples;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_5 = ___1_offsetSamples;
		int32_t L_6;
		L_6 = AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E(__this, NULL);
		G_B5_0 = ((((int32_t)((((int32_t)L_5) < ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 1;
	}

IL_0044:
	{
		V_2 = (bool)G_B5_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA69BE8EF0F1482795ABF1CC395A765AA747ECD85)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3_RuntimeMethod_var)));
	}

IL_0053:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___0_data;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = ___0_data;
		NullCheck(L_10);
		G_B10_0 = ((((int32_t)(((RuntimeArray*)L_10)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_005e;
	}

IL_005d:
	{
		G_B10_0 = 1;
	}

IL_005e:
	{
		V_3 = (bool)G_B10_0;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_006d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral747CA643504D60A83574C1454D344DADB4D2BA17)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3_RuntimeMethod_var)));
	}

IL_006d:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = ___0_data;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(__this, NULL);
		int32_t L_16 = ___1_offsetSamples;
		bool L_17;
		L_17 = AudioClip_SetData_mB49A9BC4639C62B9C8B22319D33D46AAD176BC3B(__this, L_13, ((int32_t)(((int32_t)(((RuntimeArray*)L_14)->max_length))/L_15)), L_16, NULL);
		V_1 = L_17;
		goto IL_0082;
	}

IL_0082:
	{
		bool L_18 = V_1;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_mF6B34084B76355CBC1991D8F4EAA878AA3A033A2 (String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4__3D, bool ___5_stream, const RuntimeMethod* method) 
{
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	{
		String_t* L_0 = ___0_name;
		int32_t L_1 = ___1_lengthSamples;
		int32_t L_2 = ___2_channels;
		int32_t L_3 = ___3_frequency;
		bool L_4 = ___5_stream;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5;
		L_5 = AudioClip_Create_mE8111F06981E42666B6A9A59D0A3EBE002D2CDFB(L_0, L_1, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_000f;
	}

IL_000f:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_m151B4E9C35D1B185FF1605DFC93D91DFAE11DB13 (String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4__3D, bool ___5_stream, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___6_pcmreadercallback, const RuntimeMethod* method) 
{
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	{
		String_t* L_0 = ___0_name;
		int32_t L_1 = ___1_lengthSamples;
		int32_t L_2 = ___2_channels;
		int32_t L_3 = ___3_frequency;
		bool L_4 = ___5_stream;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_5 = ___6_pcmreadercallback;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6;
		L_6 = AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8(L_0, L_1, L_2, L_3, L_4, L_5, (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)NULL, NULL);
		V_0 = L_6;
		goto IL_0012;
	}

IL_0012:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_m845EAF7C4DB9F316162F8441D225587CD043B9BF (String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4__3D, bool ___5_stream, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___6_pcmreadercallback, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___7_pcmsetpositioncallback, const RuntimeMethod* method) 
{
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	{
		String_t* L_0 = ___0_name;
		int32_t L_1 = ___1_lengthSamples;
		int32_t L_2 = ___2_channels;
		int32_t L_3 = ___3_frequency;
		bool L_4 = ___5_stream;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_5 = ___6_pcmreadercallback;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_6 = ___7_pcmsetpositioncallback;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7;
		L_7 = AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8(L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_0 = L_7;
		goto IL_0013;
	}

IL_0013:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_mE8111F06981E42666B6A9A59D0A3EBE002D2CDFB (String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4_stream, const RuntimeMethod* method) 
{
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_1 = NULL;
	{
		String_t* L_0 = ___0_name;
		int32_t L_1 = ___1_lengthSamples;
		int32_t L_2 = ___2_channels;
		int32_t L_3 = ___3_frequency;
		bool L_4 = ___4_stream;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5;
		L_5 = AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8(L_0, L_1, L_2, L_3, L_4, (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)NULL, (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)NULL, NULL);
		V_0 = L_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = V_0;
		V_1 = L_6;
		goto IL_0013;
	}

IL_0013:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_m48B1434AA494303489CF28D8794B6CA110B51CD2 (String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4_stream, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___5_pcmreadercallback, const RuntimeMethod* method) 
{
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_1 = NULL;
	{
		String_t* L_0 = ___0_name;
		int32_t L_1 = ___1_lengthSamples;
		int32_t L_2 = ___2_channels;
		int32_t L_3 = ___3_frequency;
		bool L_4 = ___4_stream;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_5 = ___5_pcmreadercallback;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6;
		L_6 = AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8(L_0, L_1, L_2, L_3, L_4, L_5, (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)NULL, NULL);
		V_0 = L_6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7 = V_0;
		V_1 = L_7;
		goto IL_0014;
	}

IL_0014:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8 (String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4_stream, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___5_pcmreadercallback, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___6_pcmsetpositioncallback, const RuntimeMethod* method) 
{
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_7 = NULL;
	{
		String_t* L_0 = ___0_name;
		V_1 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8_RuntimeMethod_var)));
	}

IL_000f:
	{
		int32_t L_3 = ___1_lengthSamples;
		V_2 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC563ED6549A22286FAAA38A5D49C5B247A52C622)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8_RuntimeMethod_var)));
	}

IL_0025:
	{
		int32_t L_6 = ___2_channels;
		V_3 = (bool)((((int32_t)((((int32_t)L_6) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9ACF8E6DF73A863387F2ABAD61D84C3197C6B01)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8_RuntimeMethod_var)));
	}

IL_003b:
	{
		int32_t L_9 = ___3_frequency;
		V_4 = (bool)((((int32_t)((((int32_t)L_9) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0053;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCC867B94415511BD48E92E3242D7EDA425D20035)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8_RuntimeMethod_var)));
	}

IL_0053:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_12;
		L_12 = AudioClip_Construct_Internal_m88BC07CE3F412DDB62820F9430D1D52DA42A26F6(NULL);
		V_0 = L_12;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_13 = ___5_pcmreadercallback;
		V_5 = (bool)((!(((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_13) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_006d;
		}
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_15 = V_0;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_16 = ___5_pcmreadercallback;
		NullCheck(L_15);
		AudioClip_add_m_PCMReaderCallback_mA226EA143D90E04117A740FC9FA9F1111346CA83(L_15, L_16, NULL);
	}

IL_006d:
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_17 = ___6_pcmsetpositioncallback;
		V_6 = (bool)((!(((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0081;
		}
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_19 = V_0;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_20 = ___6_pcmsetpositioncallback;
		NullCheck(L_19);
		AudioClip_add_m_PCMSetPositionCallback_mB280AD93A847C65F536D846FECC7DCBE9266C37F(L_19, L_20, NULL);
	}

IL_0081:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_21 = V_0;
		String_t* L_22 = ___0_name;
		int32_t L_23 = ___1_lengthSamples;
		int32_t L_24 = ___2_channels;
		int32_t L_25 = ___3_frequency;
		bool L_26 = ___4_stream;
		NullCheck(L_21);
		AudioClip_CreateUserSound_m34DA102DD6848D555D4A9D45AFAA9D3E5574BC45(L_21, L_22, L_23, L_24, L_25, L_26, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_27 = V_0;
		V_7 = L_27;
		goto IL_0093;
	}

IL_0093:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_28 = V_7;
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMReaderCallback_mA226EA143D90E04117A740FC9FA9F1111346CA83 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_0 = NULL;
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_1 = NULL;
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_2 = NULL;
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_0 = __this->___m_PCMReaderCallback;
		V_0 = L_0;
	}

IL_0007:
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_1 = V_0;
		V_1 = L_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_2 = V_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)CastclassSealed((RuntimeObject*)L_4, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_il2cpp_TypeInfo_var));
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E** L_5 = (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E**)(&__this->___m_PCMReaderCallback);
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_6 = V_2;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_7 = V_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_8;
		L_8 = InterlockedCompareExchangeImpl<PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*>(L_5, L_6, L_7);
		V_0 = L_8;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_9 = V_0;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_10 = V_1;
		if ((!(((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_9) == ((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_remove_m_PCMReaderCallback_m3258A455005F4A94570B4F8FE28A5EDA91A88412 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_0 = NULL;
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_1 = NULL;
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_2 = NULL;
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_0 = __this->___m_PCMReaderCallback;
		V_0 = L_0;
	}

IL_0007:
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_1 = V_0;
		V_1 = L_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_2 = V_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)CastclassSealed((RuntimeObject*)L_4, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_il2cpp_TypeInfo_var));
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E** L_5 = (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E**)(&__this->___m_PCMReaderCallback);
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_6 = V_2;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_7 = V_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_8;
		L_8 = InterlockedCompareExchangeImpl<PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*>(L_5, L_6, L_7);
		V_0 = L_8;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_9 = V_0;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_10 = V_1;
		if ((!(((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_9) == ((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMSetPositionCallback_mB280AD93A847C65F536D846FECC7DCBE9266C37F (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_0 = NULL;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_1 = NULL;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_2 = NULL;
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_0 = __this->___m_PCMSetPositionCallback;
		V_0 = L_0;
	}

IL_0007:
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_1 = V_0;
		V_1 = L_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_2 = V_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)CastclassSealed((RuntimeObject*)L_4, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_il2cpp_TypeInfo_var));
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072** L_5 = (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072**)(&__this->___m_PCMSetPositionCallback);
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_6 = V_2;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_7 = V_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_8;
		L_8 = InterlockedCompareExchangeImpl<PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*>(L_5, L_6, L_7);
		V_0 = L_8;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_9 = V_0;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_10 = V_1;
		if ((!(((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_9) == ((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_remove_m_PCMSetPositionCallback_m39598139640580138742F129E0510917DF2E233C (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_0 = NULL;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_1 = NULL;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_2 = NULL;
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_0 = __this->___m_PCMSetPositionCallback;
		V_0 = L_0;
	}

IL_0007:
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_1 = V_0;
		V_1 = L_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_2 = V_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)CastclassSealed((RuntimeObject*)L_4, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_il2cpp_TypeInfo_var));
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072** L_5 = (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072**)(&__this->___m_PCMSetPositionCallback);
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_6 = V_2;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_7 = V_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_8;
		L_8 = InterlockedCompareExchangeImpl<PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*>(L_5, L_6, L_7);
		V_0 = L_8;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_9 = V_0;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_10 = V_1;
		if ((!(((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_9) == ((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_InvokePCMReaderCallback_Internal_m766E5705AB5AE16F5F142867CC3758ABE4BF462C (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_0 = __this->___m_PCMReaderCallback;
		V_0 = (bool)((!(((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_2 = __this->___m_PCMReaderCallback;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___0_data;
		NullCheck(L_2);
		PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_inline(L_2, L_3, NULL);
	}

IL_001b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_InvokePCMSetPositionCallback_Internal_m986EF703B7DDE42343730DE93A095D05B9F4DBB8 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_0 = __this->___m_PCMSetPositionCallback;
		V_0 = (bool)((!(((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_2 = __this->___m_PCMSetPositionCallback;
		int32_t L_3 = ___0_position;
		NullCheck(L_2);
		PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_inline(L_2, L_3, NULL);
	}

IL_001b:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_Multicast(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* currentDelegate = reinterpret_cast<PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_data, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenInst(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method)
{
	NullCheck(___0_data);
	typedef void (*FunctionPointerType) (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_data, method);
}
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenStatic(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_data, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	float* ____0_data_marshaled = NULL;
	if (___0_data != NULL)
	{
		____0_data_marshaled = reinterpret_cast<float*>((___0_data)->GetAddressAtUnchecked(0));
	}

	il2cppPInvokeFunc(____0_data_marshaled);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMReaderCallback__ctor_mF621B6CC1A4BA6525190C5037401CF2FD5C0CF28 (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152 (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_data, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_Multicast(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* currentDelegate = reinterpret_cast<PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_position, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_OpenInst(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_position, method);
}
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_OpenStatic(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_position, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072 (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_position);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMSetPositionCallback__ctor_mD16F77DDB552EB69BB3F5EF39420B2F09F95455B (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702 (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_position, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBehaviour__ctor_m6D88837496C42A746A51383F3D6F29CA72A9D309 (AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_GetOutputDataHelper_mB30445231F5805870AA625983442CE881D7B66FB (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_samples, int32_t ___1_channel, const RuntimeMethod* method) 
{
	typedef void (*AudioListener_GetOutputDataHelper_mB30445231F5805870AA625983442CE881D7B66FB_ftn) (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, int32_t);
	static AudioListener_GetOutputDataHelper_mB30445231F5805870AA625983442CE881D7B66FB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_GetOutputDataHelper_mB30445231F5805870AA625983442CE881D7B66FB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::GetOutputDataHelper(System.Single[],System.Int32)");
	_il2cpp_icall_func(___0_samples, ___1_channel);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_GetSpectrumDataHelper_m2631C609AB0CC9ED84EB55C939EDC78456E0482F (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_samples, int32_t ___1_channel, int32_t ___2_window, const RuntimeMethod* method) 
{
	typedef void (*AudioListener_GetSpectrumDataHelper_m2631C609AB0CC9ED84EB55C939EDC78456E0482F_ftn) (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, int32_t, int32_t);
	static AudioListener_GetSpectrumDataHelper_m2631C609AB0CC9ED84EB55C939EDC78456E0482F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_GetSpectrumDataHelper_m2631C609AB0CC9ED84EB55C939EDC78456E0482F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::GetSpectrumDataHelper(System.Single[],System.Int32,UnityEngine.FFTWindow)");
	_il2cpp_icall_func(___0_samples, ___1_channel, ___2_window);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioListener_get_volume_m8EAB8FBA127A53E689C1D8C1857781070381974A (const RuntimeMethod* method) 
{
	typedef float (*AudioListener_get_volume_m8EAB8FBA127A53E689C1D8C1857781070381974A_ftn) ();
	static AudioListener_get_volume_m8EAB8FBA127A53E689C1D8C1857781070381974A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_get_volume_m8EAB8FBA127A53E689C1D8C1857781070381974A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::get_volume()");
	float icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721 (float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721_ftn) (float);
	static AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::set_volume(System.Single)");
	_il2cpp_icall_func(___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioListener_get_pause_mD5DE01AAFDE5CB1F747762091F18FF95963FF473 (const RuntimeMethod* method) 
{
	typedef bool (*AudioListener_get_pause_mD5DE01AAFDE5CB1F747762091F18FF95963FF473_ftn) ();
	static AudioListener_get_pause_mD5DE01AAFDE5CB1F747762091F18FF95963FF473_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_get_pause_mD5DE01AAFDE5CB1F747762091F18FF95963FF473_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::get_pause()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_pause_m4D52C9FFC6B10B0F281329FA0FB3CE2C64894F33 (bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioListener_set_pause_m4D52C9FFC6B10B0F281329FA0FB3CE2C64894F33_ftn) (bool);
	static AudioListener_set_pause_m4D52C9FFC6B10B0F281329FA0FB3CE2C64894F33_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_set_pause_m4D52C9FFC6B10B0F281329FA0FB3CE2C64894F33_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::set_pause(System.Boolean)");
	_il2cpp_icall_func(___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioListener_get_velocityUpdateMode_m869BB586C70B4EE05527CA13184A243FE9909A74 (AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioListener_get_velocityUpdateMode_m869BB586C70B4EE05527CA13184A243FE9909A74_ftn) (AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35*);
	static AudioListener_get_velocityUpdateMode_m869BB586C70B4EE05527CA13184A243FE9909A74_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_get_velocityUpdateMode_m869BB586C70B4EE05527CA13184A243FE9909A74_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::get_velocityUpdateMode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_velocityUpdateMode_m9A4C2E6F9F814DEAE18D1FDF91A9E5D37DDDEC06 (AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioListener_set_velocityUpdateMode_m9A4C2E6F9F814DEAE18D1FDF91A9E5D37DDDEC06_ftn) (AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35*, int32_t);
	static AudioListener_set_velocityUpdateMode_m9A4C2E6F9F814DEAE18D1FDF91A9E5D37DDDEC06_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioListener_set_velocityUpdateMode_m9A4C2E6F9F814DEAE18D1FDF91A9E5D37DDDEC06_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioListener::set_velocityUpdateMode(UnityEngine.AudioVelocityUpdateMode)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* AudioListener_GetOutputData_mC424B552A74589C2FA12A0EB9DCAEA1261DCB39F (int32_t ___0_numSamples, int32_t ___1_channel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	{
		int32_t L_0 = ___0_numSamples;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = V_0;
		int32_t L_3 = ___1_channel;
		AudioListener_GetOutputDataHelper_mB30445231F5805870AA625983442CE881D7B66FB(L_2, L_3, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		V_1 = L_4;
		goto IL_0014;
	}

IL_0014:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_GetOutputData_m296DA3768E887CCD587D5BDD55A3D9AB1ADECA9E (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_samples, int32_t ___1_channel, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_samples;
		int32_t L_1 = ___1_channel;
		AudioListener_GetOutputDataHelper_mB30445231F5805870AA625983442CE881D7B66FB(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* AudioListener_GetSpectrumData_m63364D81841D7FC8EAB015C441E92394236A646B (int32_t ___0_numSamples, int32_t ___1_channel, int32_t ___2_window, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	{
		int32_t L_0 = ___0_numSamples;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = V_0;
		int32_t L_3 = ___1_channel;
		int32_t L_4 = ___2_window;
		AudioListener_GetSpectrumDataHelper_m2631C609AB0CC9ED84EB55C939EDC78456E0482F(L_2, L_3, L_4, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = V_0;
		V_1 = L_5;
		goto IL_0015;
	}

IL_0015:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_GetSpectrumData_m66A3A04DD3DF8A2CBE8DE16ED2CBD9AA42EBFABC (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_samples, int32_t ___1_channel, int32_t ___2_window, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_samples;
		int32_t L_1 = ___1_channel;
		int32_t L_2 = ___2_window;
		AudioListener_GetSpectrumDataHelper_m2631C609AB0CC9ED84EB55C939EDC78456E0482F(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener__ctor_m428A6CC2CFA95A7D6065D33098191569A7412EE4 (AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* __this, const RuntimeMethod* method) 
{
	{
		AudioBehaviour__ctor_m6D88837496C42A746A51383F3D6F29CA72A9D309(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_GetPitch_m80F6D2BAF966F669253E9231AFCFFC303779913D (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_GetPitch_m80F6D2BAF966F669253E9231AFCFFC303779913D_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_GetPitch_m80F6D2BAF966F669253E9231AFCFFC303779913D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetPitch_m80F6D2BAF966F669253E9231AFCFFC303779913D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetPitch(UnityEngine.AudioSource)");
	float icallRetVal = _il2cpp_icall_func(___0_source);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetPitch_mE75DEDF8F37301BDA63E0F545A7A00850C24F53E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, float ___1_pitch, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_SetPitch_mE75DEDF8F37301BDA63E0F545A7A00850C24F53E_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, float);
	static AudioSource_SetPitch_mE75DEDF8F37301BDA63E0F545A7A00850C24F53E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetPitch_mE75DEDF8F37301BDA63E0F545A7A00850C24F53E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetPitch(UnityEngine.AudioSource,System.Single)");
	_il2cpp_icall_func(___0_source, ___1_pitch);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, uint64_t ___1_delay, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, uint64_t);
	static AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayHelper(UnityEngine.AudioSource,System.UInt64)");
	_il2cpp_icall_func(___0_source, ___1_delay);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m10DB5ACD1CC32EE433DBC10416B1450A30DE5F16 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, double ___0_delay, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_Play_m10DB5ACD1CC32EE433DBC10416B1450A30DE5F16_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, double);
	static AudioSource_Play_m10DB5ACD1CC32EE433DBC10416B1450A30DE5F16_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Play_m10DB5ACD1CC32EE433DBC10416B1450A30DE5F16_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Play(System.Double)");
	_il2cpp_icall_func(__this, ___0_delay);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShotHelper_mD110EAF42353687BD0B1190EEF30F0C65A4CF265 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_clip, float ___2_volumeScale, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_PlayOneShotHelper_mD110EAF42353687BD0B1190EEF30F0C65A4CF265_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, float);
	static AudioSource_PlayOneShotHelper_mD110EAF42353687BD0B1190EEF30F0C65A4CF265_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayOneShotHelper_mD110EAF42353687BD0B1190EEF30F0C65A4CF265_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayOneShotHelper(UnityEngine.AudioSource,UnityEngine.AudioClip,System.Single)");
	_il2cpp_icall_func(___0_source, ___1_clip, ___2_volumeScale);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_stopOneShots, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, bool);
	static AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Stop(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_stopOneShots);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetCustomCurveHelper_m3921C8867C4075133FEF2629601FF44400BA86E9 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, int32_t ___1_type, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___2_curve, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_SetCustomCurveHelper_m3921C8867C4075133FEF2629601FF44400BA86E9_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, int32_t, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*);
	static AudioSource_SetCustomCurveHelper_m3921C8867C4075133FEF2629601FF44400BA86E9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetCustomCurveHelper_m3921C8867C4075133FEF2629601FF44400BA86E9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetCustomCurveHelper(UnityEngine.AudioSource,UnityEngine.AudioSourceCurveType,UnityEngine.AnimationCurve)");
	_il2cpp_icall_func(___0_source, ___1_type, ___2_curve);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* AudioSource_GetCustomCurveHelper_mC0B206F9AE3FA7A900C64194461691451F71B2AD (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, int32_t ___1_type, const RuntimeMethod* method) 
{
	typedef AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* (*AudioSource_GetCustomCurveHelper_mC0B206F9AE3FA7A900C64194461691451F71B2AD_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, int32_t);
	static AudioSource_GetCustomCurveHelper_mC0B206F9AE3FA7A900C64194461691451F71B2AD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetCustomCurveHelper_mC0B206F9AE3FA7A900C64194461691451F71B2AD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetCustomCurveHelper(UnityEngine.AudioSource,UnityEngine.AudioSourceCurveType)");
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* icallRetVal = _il2cpp_icall_func(___0_source, ___1_type);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_GetOutputDataHelper_m209E9A63B5FEDFAA87E99B95E6D4D287AADC0444 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_samples, int32_t ___2_channel, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_GetOutputDataHelper_m209E9A63B5FEDFAA87E99B95E6D4D287AADC0444_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, int32_t);
	static AudioSource_GetOutputDataHelper_m209E9A63B5FEDFAA87E99B95E6D4D287AADC0444_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetOutputDataHelper_m209E9A63B5FEDFAA87E99B95E6D4D287AADC0444_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetOutputDataHelper(UnityEngine.AudioSource,System.Single[],System.Int32)");
	_il2cpp_icall_func(___0_source, ___1_samples, ___2_channel);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_GetSpectrumDataHelper_m64E105A054751BD5E7477C7E309992EC0BF274EB (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_samples, int32_t ___2_channel, int32_t ___3_window, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_GetSpectrumDataHelper_m64E105A054751BD5E7477C7E309992EC0BF274EB_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, int32_t, int32_t);
	static AudioSource_GetSpectrumDataHelper_m64E105A054751BD5E7477C7E309992EC0BF274EB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetSpectrumDataHelper_m64E105A054751BD5E7477C7E309992EC0BF274EB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetSpectrumDataHelper(UnityEngine.AudioSource,System.Single[],System.Int32,UnityEngine.FFTWindow)");
	_il2cpp_icall_func(___0_source, ___1_samples, ___2_channel, ___3_window);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_volume()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, float);
	static AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_volume(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_pitch_mB1B0B8A52400B5C798BF1E644FE1C2FFA20A9863 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0;
		L_0 = AudioSource_GetPitch_m80F6D2BAF966F669253E9231AFCFFC303779913D(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		AudioSource_SetPitch_mE75DEDF8F37301BDA63E0F545A7A00850C24F53E(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_time_m130D08644F36736115FE082DAA2ED5E2C9D97A93 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_time_m130D08644F36736115FE082DAA2ED5E2C9D97A93_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_time_m130D08644F36736115FE082DAA2ED5E2C9D97A93_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_time_m130D08644F36736115FE082DAA2ED5E2C9D97A93_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_time()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, float);
	static AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_time_m6670372FD9C494978B7B3E01B7F4D220616F6204_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_time(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_timeSamples_mF230FF8ABBD5A5250CBC487D0E0FCE286BA95B82 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioSource_get_timeSamples_mF230FF8ABBD5A5250CBC487D0E0FCE286BA95B82_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_timeSamples_mF230FF8ABBD5A5250CBC487D0E0FCE286BA95B82_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_timeSamples_mF230FF8ABBD5A5250CBC487D0E0FCE286BA95B82_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_timeSamples()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_timeSamples_mAC3793C13390C591E4995A88A2CE90E26BBDA6BE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_timeSamples_mAC3793C13390C591E4995A88A2CE90E26BBDA6BE_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, int32_t);
	static AudioSource_set_timeSamples_mAC3793C13390C591E4995A88A2CE90E26BBDA6BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_timeSamples_mAC3793C13390C591E4995A88A2CE90E26BBDA6BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_timeSamples(System.Int32)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* (*AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_clip()");
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* AudioSource_get_outputAudioMixerGroup_mE141F3A6337D84F9BD43196A28CC85D092695CAB (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* (*AudioSource_get_outputAudioMixerGroup_mE141F3A6337D84F9BD43196A28CC85D092695CAB_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_outputAudioMixerGroup_mE141F3A6337D84F9BD43196A28CC85D092695CAB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_outputAudioMixerGroup_mE141F3A6337D84F9BD43196A28CC85D092695CAB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_outputAudioMixerGroup()");
	AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_outputAudioMixerGroup_m10D0A0EAE270424CD2F3BB960CFAA158D9FC24CF (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_outputAudioMixerGroup_m10D0A0EAE270424CD2F3BB960CFAA158D9FC24CF_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311*);
	static AudioSource_set_outputAudioMixerGroup_m10D0A0EAE270424CD2F3BB960CFAA158D9FC24CF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_outputAudioMixerGroup_m10D0A0EAE270424CD2F3BB960CFAA158D9FC24CF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_outputAudioMixerGroup(UnityEngine.Audio.AudioMixerGroup)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	{
		AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960(__this, ((int64_t)0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mC9D19FA54347ED102AD9913E3E7528BE969199FB (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, uint64_t ___0_delay, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_delay;
		AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayDelayed_m6A4992F1A010DC12906C6002B22F19082967770E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_delay, const RuntimeMethod* method) 
{
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* G_B2_0 = NULL;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* G_B1_0 = NULL;
	double G_B3_0 = 0.0;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* G_B3_1 = NULL;
	{
		float L_0 = ___0_delay;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			G_B2_0 = __this;
			goto IL_000f;
		}
		G_B1_0 = __this;
	}
	{
		float L_1 = ___0_delay;
		G_B3_0 = ((-((double)L_1)));
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_000f:
	{
		G_B3_0 = (0.0);
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		AudioSource_Play_m10DB5ACD1CC32EE433DBC10416B1450A30DE5F16(G_B3_1, G_B3_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayScheduled_m9F3C7245A13A1D4BC64AFA9A08763357133727D9 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, double ___0_time, const RuntimeMethod* method) 
{
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* G_B2_0 = NULL;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* G_B1_0 = NULL;
	double G_B3_0 = 0.0;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* G_B3_1 = NULL;
	{
		double L_0 = ___0_time;
		if ((((double)L_0) < ((double)(0.0))))
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
		G_B1_0 = __this;
	}
	{
		double L_1 = ___0_time;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_001a;
	}

IL_0011:
	{
		G_B3_0 = (0.0);
		G_B3_1 = G_B2_0;
	}

IL_001a:
	{
		NullCheck(G_B3_1);
		AudioSource_Play_m10DB5ACD1CC32EE433DBC10416B1450A30DE5F16(G_B3_1, G_B3_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, const RuntimeMethod* method) 
{
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___0_clip;
		AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B(__this, L_0, (1.0f), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, float ___1_volumeScale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49403A17E8D32B35CB5B66AB1A2651A7EEAD1B00);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___0_clip;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral49403A17E8D32B35CB5B66AB1A2651A7EEAD1B00, NULL);
		goto IL_0023;
	}

IL_001a:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = ___0_clip;
		float L_4 = ___1_volumeScale;
		AudioSource_PlayOneShotHelper_mD110EAF42353687BD0B1190EEF30F0C65A4CF265(__this, L_3, L_4, NULL);
	}

IL_0023:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetScheduledStartTime_m831CB1AC7E3C70BEFB84892B0A50BA161CE1EDDD (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, double ___0_time, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_SetScheduledStartTime_m831CB1AC7E3C70BEFB84892B0A50BA161CE1EDDD_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, double);
	static AudioSource_SetScheduledStartTime_m831CB1AC7E3C70BEFB84892B0A50BA161CE1EDDD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetScheduledStartTime_m831CB1AC7E3C70BEFB84892B0A50BA161CE1EDDD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetScheduledStartTime(System.Double)");
	_il2cpp_icall_func(__this, ___0_time);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetScheduledEndTime_mC9BF39919029A6C6CB8981B09A792D45A60A3730 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, double ___0_time, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_SetScheduledEndTime_mC9BF39919029A6C6CB8981B09A792D45A60A3730_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, double);
	static AudioSource_SetScheduledEndTime_mC9BF39919029A6C6CB8981B09A792D45A60A3730_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetScheduledEndTime_mC9BF39919029A6C6CB8981B09A792D45A60A3730_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetScheduledEndTime(System.Double)");
	_il2cpp_icall_func(__this, ___0_time);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	{
		AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5(__this, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Pause()");
	_il2cpp_icall_func(__this);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_UnPause_mC4A6A1E71439A3ADB4664B62DABDF4D79D3B21B9 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_UnPause_mC4A6A1E71439A3ADB4664B62DABDF4D79D3B21B9_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_UnPause_mC4A6A1E71439A3ADB4664B62DABDF4D79D3B21B9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_UnPause_mC4A6A1E71439A3ADB4664B62DABDF4D79D3B21B9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::UnPause()");
	_il2cpp_icall_func(__this);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_isPlaying()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isVirtual_m7AD36D47A866FF2047CF73D6A2E8BD72C9C03759 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_isVirtual_m7AD36D47A866FF2047CF73D6A2E8BD72C9C03759_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_isVirtual_m7AD36D47A866FF2047CF73D6A2E8BD72C9C03759_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_isVirtual_m7AD36D47A866FF2047CF73D6A2E8BD72C9C03759_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_isVirtual()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_mA78328A70D3F1088B588EF6F811AAD6577F2B7BF (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) 
{
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___0_clip;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_position;
		AudioSource_PlayClipAtPoint_mF9D129487C356127ADA3AB5C0A67C7D00F26E3DD(L_0, L_1, (1.0f), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_mF9D129487C356127ADA3AB5C0A67C7D00F26E3DD (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, float ___2_volume, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2186DB8EA3F0EBBFF4B670DC1B315D485E2F447B);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* V_1 = NULL;
	float G_B2_0 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_1 = NULL;
	float G_B1_0 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_2 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral2186DB8EA3F0EBBFF4B670DC1B315D485E2F447B, NULL);
		V_0 = L_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_position;
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_3, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		NullCheck(L_4);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_7;
		L_7 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_4, L_6, NULL);
		V_1 = ((AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*)CastclassSealed((RuntimeObject*)L_7, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_il2cpp_TypeInfo_var));
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = V_1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = ___0_clip;
		NullCheck(L_8);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_8, L_9, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = V_1;
		NullCheck(L_10);
		AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001(L_10, (1.0f), NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = V_1;
		float L_12 = ___2_volume;
		NullCheck(L_11);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_11, L_12, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_13 = V_1;
		NullCheck(L_13);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_13, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_15 = ___0_clip;
		NullCheck(L_15);
		float L_16;
		L_16 = AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D(L_15, NULL);
		float L_17;
		L_17 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		if ((((float)L_17) < ((float)(0.00999999978f))))
		{
			G_B2_0 = L_16;
			G_B2_1 = L_14;
			goto IL_006c;
		}
		G_B1_0 = L_16;
		G_B1_1 = L_14;
	}
	{
		float L_18;
		L_18 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		G_B3_0 = L_18;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0071;
	}

IL_006c:
	{
		G_B3_0 = (0.00999999978f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0071:
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(G_B3_2, ((float)il2cpp_codegen_multiply(G_B3_1, G_B3_0)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_loop_m2D83BF58E1BD1BEE4CC80413C12E761D3310FC2C (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_loop_m2D83BF58E1BD1BEE4CC80413C12E761D3310FC2C_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_loop_m2D83BF58E1BD1BEE4CC80413C12E761D3310FC2C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_loop_m2D83BF58E1BD1BEE4CC80413C12E761D3310FC2C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_loop()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, bool);
	static AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_loop(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_ignoreListenerVolume_mC58B59373161017F770D42A36C536511805AE87C (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_ignoreListenerVolume_mC58B59373161017F770D42A36C536511805AE87C_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_ignoreListenerVolume_mC58B59373161017F770D42A36C536511805AE87C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_ignoreListenerVolume_mC58B59373161017F770D42A36C536511805AE87C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_ignoreListenerVolume()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_ignoreListenerVolume_mAB973FFB2B666C4C6DE3BF34C930C28CC315731D (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_ignoreListenerVolume_mAB973FFB2B666C4C6DE3BF34C930C28CC315731D_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, bool);
	static AudioSource_set_ignoreListenerVolume_mAB973FFB2B666C4C6DE3BF34C930C28CC315731D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_ignoreListenerVolume_mAB973FFB2B666C4C6DE3BF34C930C28CC315731D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_ignoreListenerVolume(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_playOnAwake_mB07DE7C6BE0F5E6229FA160DA65BE8B8978BF9D1 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_playOnAwake_mB07DE7C6BE0F5E6229FA160DA65BE8B8978BF9D1_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_playOnAwake_mB07DE7C6BE0F5E6229FA160DA65BE8B8978BF9D1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_playOnAwake_mB07DE7C6BE0F5E6229FA160DA65BE8B8978BF9D1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_playOnAwake()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, bool);
	static AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_playOnAwake(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_ignoreListenerPause_m544337985D4025632846D4AB4EC1ADD0CF0B4B01 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_ignoreListenerPause_m544337985D4025632846D4AB4EC1ADD0CF0B4B01_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_ignoreListenerPause_m544337985D4025632846D4AB4EC1ADD0CF0B4B01_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_ignoreListenerPause_m544337985D4025632846D4AB4EC1ADD0CF0B4B01_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_ignoreListenerPause()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_ignoreListenerPause_m1BC14FA0984DEDF62E1CDBAB323950100A0BF2B4 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_ignoreListenerPause_m1BC14FA0984DEDF62E1CDBAB323950100A0BF2B4_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, bool);
	static AudioSource_set_ignoreListenerPause_m1BC14FA0984DEDF62E1CDBAB323950100A0BF2B4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_ignoreListenerPause_m1BC14FA0984DEDF62E1CDBAB323950100A0BF2B4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_ignoreListenerPause(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_velocityUpdateMode_mEFF48403F8A591A14927408F806E0603391E153B (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioSource_get_velocityUpdateMode_mEFF48403F8A591A14927408F806E0603391E153B_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_velocityUpdateMode_mEFF48403F8A591A14927408F806E0603391E153B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_velocityUpdateMode_mEFF48403F8A591A14927408F806E0603391E153B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_velocityUpdateMode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_velocityUpdateMode_m379F5704F12211BFB9AF3E3DE6647A6B057C7426 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_velocityUpdateMode_m379F5704F12211BFB9AF3E3DE6647A6B057C7426_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, int32_t);
	static AudioSource_set_velocityUpdateMode_m379F5704F12211BFB9AF3E3DE6647A6B057C7426_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_velocityUpdateMode_m379F5704F12211BFB9AF3E3DE6647A6B057C7426_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_velocityUpdateMode(UnityEngine.AudioVelocityUpdateMode)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_panStereo_mEB4CE5FF235A46C8B7CE62529A9DDA75A15C2505 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_panStereo_mEB4CE5FF235A46C8B7CE62529A9DDA75A15C2505_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_panStereo_mEB4CE5FF235A46C8B7CE62529A9DDA75A15C2505_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_panStereo_mEB4CE5FF235A46C8B7CE62529A9DDA75A15C2505_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_panStereo()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_panStereo_mE3BA673B5F93F731114E8901355A63F07C8A54DF (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_panStereo_mE3BA673B5F93F731114E8901355A63F07C8A54DF_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, float);
	static AudioSource_set_panStereo_mE3BA673B5F93F731114E8901355A63F07C8A54DF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_panStereo_mE3BA673B5F93F731114E8901355A63F07C8A54DF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_panStereo(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_spatialBlend_m06E7948B2813AA3EAE031BD4D1DE61A29416B1CE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_spatialBlend_m06E7948B2813AA3EAE031BD4D1DE61A29416B1CE_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_spatialBlend_m06E7948B2813AA3EAE031BD4D1DE61A29416B1CE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_spatialBlend_m06E7948B2813AA3EAE031BD4D1DE61A29416B1CE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_spatialBlend()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, float);
	static AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_spatialBlend(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_spatialize_m5CA89537077D4BB8DBAABFD8EB36D0B89BA8DACB (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_spatialize_m5CA89537077D4BB8DBAABFD8EB36D0B89BA8DACB_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_spatialize_m5CA89537077D4BB8DBAABFD8EB36D0B89BA8DACB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_spatialize_m5CA89537077D4BB8DBAABFD8EB36D0B89BA8DACB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_spatialize()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialize_mDFA357EDCB0C59EF11F53C845F7ACBF6BF7F7B3C (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_spatialize_mDFA357EDCB0C59EF11F53C845F7ACBF6BF7F7B3C_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, bool);
	static AudioSource_set_spatialize_mDFA357EDCB0C59EF11F53C845F7ACBF6BF7F7B3C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_spatialize_mDFA357EDCB0C59EF11F53C845F7ACBF6BF7F7B3C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_spatialize(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_spatializePostEffects_m02D6863671C49B81DFACDA623C74188B1FD950A4 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_spatializePostEffects_m02D6863671C49B81DFACDA623C74188B1FD950A4_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_spatializePostEffects_m02D6863671C49B81DFACDA623C74188B1FD950A4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_spatializePostEffects_m02D6863671C49B81DFACDA623C74188B1FD950A4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_spatializePostEffects()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatializePostEffects_m7CC219B7790E27667D49F4A36C8F62FFF399DA54 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_spatializePostEffects_m7CC219B7790E27667D49F4A36C8F62FFF399DA54_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, bool);
	static AudioSource_set_spatializePostEffects_m7CC219B7790E27667D49F4A36C8F62FFF399DA54_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_spatializePostEffects_m7CC219B7790E27667D49F4A36C8F62FFF399DA54_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_spatializePostEffects(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetCustomCurve_m6597C180AE2DD79DA663ABD76FC26AC816CB7CFB (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_type, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_curve, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_type;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = ___1_curve;
		AudioSource_SetCustomCurveHelper_m3921C8867C4075133FEF2629601FF44400BA86E9(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* AudioSource_GetCustomCurve_m39ADDCACC6F9E55D4059E45A13092FFA7C39B23D (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_type, const RuntimeMethod* method) 
{
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* V_0 = NULL;
	{
		int32_t L_0 = ___0_type;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1;
		L_1 = AudioSource_GetCustomCurveHelper_mC0B206F9AE3FA7A900C64194461691451F71B2AD(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_reverbZoneMix_mA1BE21696195BADD380311B236AA46314911B859 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_reverbZoneMix_mA1BE21696195BADD380311B236AA46314911B859_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_reverbZoneMix_mA1BE21696195BADD380311B236AA46314911B859_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_reverbZoneMix_mA1BE21696195BADD380311B236AA46314911B859_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_reverbZoneMix()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_reverbZoneMix_m0AD755F3841952B06F87767F97CA93E2C9545D1E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_reverbZoneMix_m0AD755F3841952B06F87767F97CA93E2C9545D1E_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, float);
	static AudioSource_set_reverbZoneMix_m0AD755F3841952B06F87767F97CA93E2C9545D1E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_reverbZoneMix_m0AD755F3841952B06F87767F97CA93E2C9545D1E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_reverbZoneMix(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_bypassEffects_m0172FACE00674F743A70870EB138B3223D42A35E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_bypassEffects_m0172FACE00674F743A70870EB138B3223D42A35E_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_bypassEffects_m0172FACE00674F743A70870EB138B3223D42A35E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_bypassEffects_m0172FACE00674F743A70870EB138B3223D42A35E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_bypassEffects()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_bypassEffects_m56E81C34448803D4B63105071D96AC644CFFEA9A (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_bypassEffects_m56E81C34448803D4B63105071D96AC644CFFEA9A_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, bool);
	static AudioSource_set_bypassEffects_m56E81C34448803D4B63105071D96AC644CFFEA9A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_bypassEffects_m56E81C34448803D4B63105071D96AC644CFFEA9A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_bypassEffects(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_bypassListenerEffects_m47CE7EC60DB5D13E4D818CFA6D5E1B9D6134EF02 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_bypassListenerEffects_m47CE7EC60DB5D13E4D818CFA6D5E1B9D6134EF02_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_bypassListenerEffects_m47CE7EC60DB5D13E4D818CFA6D5E1B9D6134EF02_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_bypassListenerEffects_m47CE7EC60DB5D13E4D818CFA6D5E1B9D6134EF02_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_bypassListenerEffects()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_bypassListenerEffects_m321403F18B6174D2E91D080DBF5090C29BC11899 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_bypassListenerEffects_m321403F18B6174D2E91D080DBF5090C29BC11899_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, bool);
	static AudioSource_set_bypassListenerEffects_m321403F18B6174D2E91D080DBF5090C29BC11899_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_bypassListenerEffects_m321403F18B6174D2E91D080DBF5090C29BC11899_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_bypassListenerEffects(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_bypassReverbZones_mA640A5F9FF8E52777CF13950D966839729D1B3DF (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_bypassReverbZones_mA640A5F9FF8E52777CF13950D966839729D1B3DF_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_bypassReverbZones_mA640A5F9FF8E52777CF13950D966839729D1B3DF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_bypassReverbZones_mA640A5F9FF8E52777CF13950D966839729D1B3DF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_bypassReverbZones()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_bypassReverbZones_m900FD2BA30F36243B5A5B872B0D019CBAB6AC410 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_bypassReverbZones_m900FD2BA30F36243B5A5B872B0D019CBAB6AC410_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, bool);
	static AudioSource_set_bypassReverbZones_m900FD2BA30F36243B5A5B872B0D019CBAB6AC410_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_bypassReverbZones_m900FD2BA30F36243B5A5B872B0D019CBAB6AC410_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_bypassReverbZones(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_dopplerLevel_m7BF6F31D1E8927E059BC87933AD9B81D63AF97BE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_dopplerLevel_m7BF6F31D1E8927E059BC87933AD9B81D63AF97BE_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_dopplerLevel_m7BF6F31D1E8927E059BC87933AD9B81D63AF97BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_dopplerLevel_m7BF6F31D1E8927E059BC87933AD9B81D63AF97BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_dopplerLevel()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_dopplerLevel_mB9AC5164E5AF16ACECA3B8E29F5C8573C37E40D6 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_dopplerLevel_mB9AC5164E5AF16ACECA3B8E29F5C8573C37E40D6_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, float);
	static AudioSource_set_dopplerLevel_mB9AC5164E5AF16ACECA3B8E29F5C8573C37E40D6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_dopplerLevel_mB9AC5164E5AF16ACECA3B8E29F5C8573C37E40D6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_dopplerLevel(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_spread_mC21DF6C651AD67BEB5D721F0EA0B2F3B080F4C77 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_spread_mC21DF6C651AD67BEB5D721F0EA0B2F3B080F4C77_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_spread_mC21DF6C651AD67BEB5D721F0EA0B2F3B080F4C77_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_spread_mC21DF6C651AD67BEB5D721F0EA0B2F3B080F4C77_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_spread()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spread_mDFBC1BF11837C26EF9763A8DEEFC56AF95F6E83F (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_spread_mDFBC1BF11837C26EF9763A8DEEFC56AF95F6E83F_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, float);
	static AudioSource_set_spread_mDFBC1BF11837C26EF9763A8DEEFC56AF95F6E83F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_spread_mDFBC1BF11837C26EF9763A8DEEFC56AF95F6E83F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_spread(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_priority_mD4B6D16F6BCB1D5ACA3F2CC096EDA8861DA66881 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioSource_get_priority_mD4B6D16F6BCB1D5ACA3F2CC096EDA8861DA66881_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_priority_mD4B6D16F6BCB1D5ACA3F2CC096EDA8861DA66881_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_priority_mD4B6D16F6BCB1D5ACA3F2CC096EDA8861DA66881_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_priority()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_priority_mD1AB7ED858D8A1233642F5DBA81AEFBE35DD4B40 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_priority_mD1AB7ED858D8A1233642F5DBA81AEFBE35DD4B40_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, int32_t);
	static AudioSource_set_priority_mD1AB7ED858D8A1233642F5DBA81AEFBE35DD4B40_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_priority_mD1AB7ED858D8A1233642F5DBA81AEFBE35DD4B40_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_priority(System.Int32)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_mute_mE23745FC15F1105556CB7590CA651628FC562DBD (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_mute_mE23745FC15F1105556CB7590CA651628FC562DBD_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_mute_mE23745FC15F1105556CB7590CA651628FC562DBD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_mute_mE23745FC15F1105556CB7590CA651628FC562DBD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_mute()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, bool);
	static AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_mute(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_minDistance_m459BE399BBBEA04CBBCF50CFB15A09CB3D7431F0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_minDistance_m459BE399BBBEA04CBBCF50CFB15A09CB3D7431F0_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_minDistance_m459BE399BBBEA04CBBCF50CFB15A09CB3D7431F0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_minDistance_m459BE399BBBEA04CBBCF50CFB15A09CB3D7431F0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_minDistance()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_minDistance_m6CBE3A60C03C0F179192FBDD62095B2E9D717690 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_minDistance_m6CBE3A60C03C0F179192FBDD62095B2E9D717690_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, float);
	static AudioSource_set_minDistance_m6CBE3A60C03C0F179192FBDD62095B2E9D717690_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_minDistance_m6CBE3A60C03C0F179192FBDD62095B2E9D717690_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_minDistance(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_maxDistance_m8C31CB391B999C8D344EFF0AFB8E20488F7A5F7E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_maxDistance_m8C31CB391B999C8D344EFF0AFB8E20488F7A5F7E_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_maxDistance_m8C31CB391B999C8D344EFF0AFB8E20488F7A5F7E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_maxDistance_m8C31CB391B999C8D344EFF0AFB8E20488F7A5F7E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_maxDistance()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_maxDistance_m4BF310D54761500A77A6C4841A0BBDBD09225813 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_maxDistance_m4BF310D54761500A77A6C4841A0BBDBD09225813_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, float);
	static AudioSource_set_maxDistance_m4BF310D54761500A77A6C4841A0BBDBD09225813_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_maxDistance_m4BF310D54761500A77A6C4841A0BBDBD09225813_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_maxDistance(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_rolloffMode_m1D5F4CCF83174583ACF0C365051E58978ED02CFD (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioSource_get_rolloffMode_m1D5F4CCF83174583ACF0C365051E58978ED02CFD_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_rolloffMode_m1D5F4CCF83174583ACF0C365051E58978ED02CFD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_rolloffMode_m1D5F4CCF83174583ACF0C365051E58978ED02CFD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_rolloffMode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_rolloffMode_m441D9552D8648D6040E66EE2C2650A79DC5E6FB4 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_rolloffMode_m441D9552D8648D6040E66EE2C2650A79DC5E6FB4_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, int32_t);
	static AudioSource_set_rolloffMode_m441D9552D8648D6040E66EE2C2650A79DC5E6FB4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_rolloffMode_m441D9552D8648D6040E66EE2C2650A79DC5E6FB4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_rolloffMode(UnityEngine.AudioRolloffMode)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* AudioSource_GetOutputData_m7482BBFA8AF652D3D4F13E4D9C9A8DC39A736D68 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_numSamples, int32_t ___1_channel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	{
		int32_t L_0 = ___0_numSamples;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = V_0;
		int32_t L_3 = ___1_channel;
		AudioSource_GetOutputDataHelper_m209E9A63B5FEDFAA87E99B95E6D4D287AADC0444(__this, L_2, L_3, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		V_1 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_GetOutputData_m8AEF8365E3B162E379E1D5FA6C1607999DE458F3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_samples, int32_t ___1_channel, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_samples;
		int32_t L_1 = ___1_channel;
		AudioSource_GetOutputDataHelper_m209E9A63B5FEDFAA87E99B95E6D4D287AADC0444(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* AudioSource_GetSpectrumData_m8179FFE6FA60C9AE1E6F51B6FAB48C49D81F44FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_numSamples, int32_t ___1_channel, int32_t ___2_window, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	{
		int32_t L_0 = ___0_numSamples;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = V_0;
		int32_t L_3 = ___1_channel;
		int32_t L_4 = ___2_window;
		AudioSource_GetSpectrumDataHelper_m64E105A054751BD5E7477C7E309992EC0BF274EB(__this, L_2, L_3, L_4, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = V_0;
		V_1 = L_5;
		goto IL_0016;
	}

IL_0016:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_GetSpectrumData_m0F3872A4C6B41EFD5A23BA24322B08367BFF0CFE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_samples, int32_t ___1_channel, int32_t ___2_window, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_samples;
		int32_t L_1 = ___1_channel;
		int32_t L_2 = ___2_window;
		AudioSource_GetSpectrumDataHelper_m64E105A054751BD5E7477C7E309992EC0BF274EB(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_minVolume_m8EBDCA4B2BBD49066F1B981771BCCDD75C197458 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE56D62F1A0C7288753F11908D986231A5CE82BE);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralAE56D62F1A0C7288753F11908D986231A5CE82BE, NULL);
		V_0 = (0.0f);
		goto IL_0014;
	}

IL_0014:
	{
		float L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_minVolume_mA84614CAD182A1E6DF7BF32207618EB882910D33 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE56D62F1A0C7288753F11908D986231A5CE82BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralAE56D62F1A0C7288753F11908D986231A5CE82BE, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_maxVolume_m4C9A8BEAF838B8BC2B938DAC360D84E44DD8DDA0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDA23AE58FC5A90E442B50E1279E2922EF7DFFFB);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralBDA23AE58FC5A90E442B50E1279E2922EF7DFFFB, NULL);
		V_0 = (0.0f);
		goto IL_0014;
	}

IL_0014:
	{
		float L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_maxVolume_mBBF6CA7789D92FC72C394C42F63812FCDF232018 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDA23AE58FC5A90E442B50E1279E2922EF7DFFFB);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralBDA23AE58FC5A90E442B50E1279E2922EF7DFFFB, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_rolloffFactor_m8E37942D2DB42B017B43A3A261783B7CF9ECEEA9 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A82DE4DD1062E4ABDD8007673991EC29CAA760B);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral5A82DE4DD1062E4ABDD8007673991EC29CAA760B, NULL);
		V_0 = (0.0f);
		goto IL_0014;
	}

IL_0014:
	{
		float L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_rolloffFactor_mB8ABAD5E639E429028B910A36CE0F16A4041AFDF (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A82DE4DD1062E4ABDD8007673991EC29CAA760B);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral5A82DE4DD1062E4ABDD8007673991EC29CAA760B, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_SetSpatializerFloat_m124ADF8D1FB75E1677A8891D9BF7138FD8398ADB (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_index, float ___1_value, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_SetSpatializerFloat_m124ADF8D1FB75E1677A8891D9BF7138FD8398ADB_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, int32_t, float);
	static AudioSource_SetSpatializerFloat_m124ADF8D1FB75E1677A8891D9BF7138FD8398ADB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetSpatializerFloat_m124ADF8D1FB75E1677A8891D9BF7138FD8398ADB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetSpatializerFloat(System.Int32,System.Single)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_index, ___1_value);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_GetSpatializerFloat_mEC4F0121F73E3D68A99B527036C431C191554F59 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_index, float* ___1_value, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_GetSpatializerFloat_mEC4F0121F73E3D68A99B527036C431C191554F59_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, int32_t, float*);
	static AudioSource_GetSpatializerFloat_mEC4F0121F73E3D68A99B527036C431C191554F59_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetSpatializerFloat_mEC4F0121F73E3D68A99B527036C431C191554F59_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetSpatializerFloat(System.Int32,System.Single&)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_index, ___1_value);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_GetAmbisonicDecoderFloat_m2223F72DBFC57C4E9EEE3465325702ADB728D059 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_index, float* ___1_value, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_GetAmbisonicDecoderFloat_m2223F72DBFC57C4E9EEE3465325702ADB728D059_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, int32_t, float*);
	static AudioSource_GetAmbisonicDecoderFloat_m2223F72DBFC57C4E9EEE3465325702ADB728D059_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetAmbisonicDecoderFloat_m2223F72DBFC57C4E9EEE3465325702ADB728D059_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetAmbisonicDecoderFloat(System.Int32,System.Single&)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_index, ___1_value);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_SetAmbisonicDecoderFloat_mDA21CA3D9B098FB3704B5450D5D90319E9CC9BA8 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, int32_t ___0_index, float ___1_value, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_SetAmbisonicDecoderFloat_mDA21CA3D9B098FB3704B5450D5D90319E9CC9BA8_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, int32_t, float);
	static AudioSource_SetAmbisonicDecoderFloat_mDA21CA3D9B098FB3704B5450D5D90319E9CC9BA8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetAmbisonicDecoderFloat_mDA21CA3D9B098FB3704B5450D5D90319E9CC9BA8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetAmbisonicDecoderFloat(System.Int32,System.Single)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_index, ___1_value);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource__ctor_mC67BD65374AC3CDFB702307F4A89932D803191C1 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	{
		AudioBehaviour__ctor_m6D88837496C42A746A51383F3D6F29CA72A9D309(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_minDistance_m604DC4E7952CCD3F231FC918873D3167AD536201 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbZone_get_minDistance_m604DC4E7952CCD3F231FC918873D3167AD536201_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*);
	static AudioReverbZone_get_minDistance_m604DC4E7952CCD3F231FC918873D3167AD536201_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_minDistance_m604DC4E7952CCD3F231FC918873D3167AD536201_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_minDistance()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_minDistance_m0C9EE04712E8925D4451B08028B09A127F003893 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_minDistance_m0C9EE04712E8925D4451B08028B09A127F003893_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*, float);
	static AudioReverbZone_set_minDistance_m0C9EE04712E8925D4451B08028B09A127F003893_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_minDistance_m0C9EE04712E8925D4451B08028B09A127F003893_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_minDistance(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_maxDistance_mD167A784DD3B68E0BD87BA4F427571F38FCC49BF (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbZone_get_maxDistance_mD167A784DD3B68E0BD87BA4F427571F38FCC49BF_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*);
	static AudioReverbZone_get_maxDistance_mD167A784DD3B68E0BD87BA4F427571F38FCC49BF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_maxDistance_mD167A784DD3B68E0BD87BA4F427571F38FCC49BF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_maxDistance()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_maxDistance_m76A445B58F9F590441660048A23CF87B5136178F (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_maxDistance_m76A445B58F9F590441660048A23CF87B5136178F_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*, float);
	static AudioReverbZone_set_maxDistance_m76A445B58F9F590441660048A23CF87B5136178F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_maxDistance_m76A445B58F9F590441660048A23CF87B5136178F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_maxDistance(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbZone_get_reverbPreset_m64434E787D94B9B94E4B71E9B1F367B89DA10DE0 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioReverbZone_get_reverbPreset_m64434E787D94B9B94E4B71E9B1F367B89DA10DE0_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*);
	static AudioReverbZone_get_reverbPreset_m64434E787D94B9B94E4B71E9B1F367B89DA10DE0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_reverbPreset_m64434E787D94B9B94E4B71E9B1F367B89DA10DE0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_reverbPreset()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_reverbPreset_m06D572EC66CD0366B231EEA444C510039E932508 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_reverbPreset_m06D572EC66CD0366B231EEA444C510039E932508_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*, int32_t);
	static AudioReverbZone_set_reverbPreset_m06D572EC66CD0366B231EEA444C510039E932508_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_reverbPreset_m06D572EC66CD0366B231EEA444C510039E932508_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_reverbPreset(UnityEngine.AudioReverbPreset)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbZone_get_room_m177AE0751D1D4E24F0872FF14628635CFCA25638 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioReverbZone_get_room_m177AE0751D1D4E24F0872FF14628635CFCA25638_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*);
	static AudioReverbZone_get_room_m177AE0751D1D4E24F0872FF14628635CFCA25638_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_room_m177AE0751D1D4E24F0872FF14628635CFCA25638_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_room()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_room_m4A6D908E887AFF48B17A4D714D90405A77DCDA23 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_room_m4A6D908E887AFF48B17A4D714D90405A77DCDA23_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*, int32_t);
	static AudioReverbZone_set_room_m4A6D908E887AFF48B17A4D714D90405A77DCDA23_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_room_m4A6D908E887AFF48B17A4D714D90405A77DCDA23_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_room(System.Int32)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbZone_get_roomHF_m366BB86E42585AE62C2DF751981B81E8A507FA8B (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioReverbZone_get_roomHF_m366BB86E42585AE62C2DF751981B81E8A507FA8B_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*);
	static AudioReverbZone_get_roomHF_m366BB86E42585AE62C2DF751981B81E8A507FA8B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_roomHF_m366BB86E42585AE62C2DF751981B81E8A507FA8B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_roomHF()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_roomHF_m5719F85D38ACCA7E2EF3D2FE0E51118B18FD7730 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_roomHF_m5719F85D38ACCA7E2EF3D2FE0E51118B18FD7730_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*, int32_t);
	static AudioReverbZone_set_roomHF_m5719F85D38ACCA7E2EF3D2FE0E51118B18FD7730_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_roomHF_m5719F85D38ACCA7E2EF3D2FE0E51118B18FD7730_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_roomHF(System.Int32)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbZone_get_roomLF_mC0D33BDFF54FE6E613C2BF4FCEB535F14B3B642E (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioReverbZone_get_roomLF_mC0D33BDFF54FE6E613C2BF4FCEB535F14B3B642E_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*);
	static AudioReverbZone_get_roomLF_mC0D33BDFF54FE6E613C2BF4FCEB535F14B3B642E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_roomLF_mC0D33BDFF54FE6E613C2BF4FCEB535F14B3B642E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_roomLF()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_roomLF_m7CBC3E5E5F63314FF913864B6E97EC33855FD149 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_roomLF_m7CBC3E5E5F63314FF913864B6E97EC33855FD149_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*, int32_t);
	static AudioReverbZone_set_roomLF_m7CBC3E5E5F63314FF913864B6E97EC33855FD149_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_roomLF_m7CBC3E5E5F63314FF913864B6E97EC33855FD149_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_roomLF(System.Int32)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_decayTime_mFE6375F34E3EF5CF17421EA6CDAC6A04607D0019 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbZone_get_decayTime_mFE6375F34E3EF5CF17421EA6CDAC6A04607D0019_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*);
	static AudioReverbZone_get_decayTime_mFE6375F34E3EF5CF17421EA6CDAC6A04607D0019_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_decayTime_mFE6375F34E3EF5CF17421EA6CDAC6A04607D0019_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_decayTime()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_decayTime_mEC8A1C062306166C8DF04BE7E3B9EE9DBCA61EAE (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_decayTime_mEC8A1C062306166C8DF04BE7E3B9EE9DBCA61EAE_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*, float);
	static AudioReverbZone_set_decayTime_mEC8A1C062306166C8DF04BE7E3B9EE9DBCA61EAE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_decayTime_mEC8A1C062306166C8DF04BE7E3B9EE9DBCA61EAE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_decayTime(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_decayHFRatio_mB838649CAF924734973B5D32F021AC038E466B3F (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbZone_get_decayHFRatio_mB838649CAF924734973B5D32F021AC038E466B3F_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*);
	static AudioReverbZone_get_decayHFRatio_mB838649CAF924734973B5D32F021AC038E466B3F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_decayHFRatio_mB838649CAF924734973B5D32F021AC038E466B3F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_decayHFRatio()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_decayHFRatio_m11530DE7EEB8C8040285FCE7E7BA945B0783036D (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_decayHFRatio_m11530DE7EEB8C8040285FCE7E7BA945B0783036D_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*, float);
	static AudioReverbZone_set_decayHFRatio_m11530DE7EEB8C8040285FCE7E7BA945B0783036D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_decayHFRatio_m11530DE7EEB8C8040285FCE7E7BA945B0783036D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_decayHFRatio(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbZone_get_reflections_mA327CC41BCAE9737DAAF9ECDB6953041F6F27A95 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioReverbZone_get_reflections_mA327CC41BCAE9737DAAF9ECDB6953041F6F27A95_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*);
	static AudioReverbZone_get_reflections_mA327CC41BCAE9737DAAF9ECDB6953041F6F27A95_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_reflections_mA327CC41BCAE9737DAAF9ECDB6953041F6F27A95_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_reflections()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_reflections_m8D1A6EF3D58D3B0B3F3A8627AE1C49A492377D43 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_reflections_m8D1A6EF3D58D3B0B3F3A8627AE1C49A492377D43_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*, int32_t);
	static AudioReverbZone_set_reflections_m8D1A6EF3D58D3B0B3F3A8627AE1C49A492377D43_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_reflections_m8D1A6EF3D58D3B0B3F3A8627AE1C49A492377D43_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_reflections(System.Int32)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_reflectionsDelay_m25AD8A786CB391F409489591A7A10454C5D7AB13 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbZone_get_reflectionsDelay_m25AD8A786CB391F409489591A7A10454C5D7AB13_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*);
	static AudioReverbZone_get_reflectionsDelay_m25AD8A786CB391F409489591A7A10454C5D7AB13_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_reflectionsDelay_m25AD8A786CB391F409489591A7A10454C5D7AB13_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_reflectionsDelay()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_reflectionsDelay_m888146187B34E8ECD770C5E0A5C59D886FF6CFF6 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_reflectionsDelay_m888146187B34E8ECD770C5E0A5C59D886FF6CFF6_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*, float);
	static AudioReverbZone_set_reflectionsDelay_m888146187B34E8ECD770C5E0A5C59D886FF6CFF6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_reflectionsDelay_m888146187B34E8ECD770C5E0A5C59D886FF6CFF6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_reflectionsDelay(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbZone_get_reverb_m7237DD1B544F18802FC34B8717A337608B40900B (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioReverbZone_get_reverb_m7237DD1B544F18802FC34B8717A337608B40900B_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*);
	static AudioReverbZone_get_reverb_m7237DD1B544F18802FC34B8717A337608B40900B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_reverb_m7237DD1B544F18802FC34B8717A337608B40900B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_reverb()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_reverb_mB3FA34C7B13C292E99FE5DE31DDF767954F9C3A3 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_reverb_mB3FA34C7B13C292E99FE5DE31DDF767954F9C3A3_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*, int32_t);
	static AudioReverbZone_set_reverb_mB3FA34C7B13C292E99FE5DE31DDF767954F9C3A3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_reverb_mB3FA34C7B13C292E99FE5DE31DDF767954F9C3A3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_reverb(System.Int32)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_reverbDelay_m8FE5034FC1BD0F18D3C032B5FA4EAB6B00EF50F4 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbZone_get_reverbDelay_m8FE5034FC1BD0F18D3C032B5FA4EAB6B00EF50F4_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*);
	static AudioReverbZone_get_reverbDelay_m8FE5034FC1BD0F18D3C032B5FA4EAB6B00EF50F4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_reverbDelay_m8FE5034FC1BD0F18D3C032B5FA4EAB6B00EF50F4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_reverbDelay()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_reverbDelay_m19CB45AD5F697D28AD05D5917A7157BD92816F21 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_reverbDelay_m19CB45AD5F697D28AD05D5917A7157BD92816F21_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*, float);
	static AudioReverbZone_set_reverbDelay_m19CB45AD5F697D28AD05D5917A7157BD92816F21_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_reverbDelay_m19CB45AD5F697D28AD05D5917A7157BD92816F21_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_reverbDelay(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_HFReference_m8449C3C5D8436EA4832CD86317C0DD66F7875B8B (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbZone_get_HFReference_m8449C3C5D8436EA4832CD86317C0DD66F7875B8B_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*);
	static AudioReverbZone_get_HFReference_m8449C3C5D8436EA4832CD86317C0DD66F7875B8B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_HFReference_m8449C3C5D8436EA4832CD86317C0DD66F7875B8B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_HFReference()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_HFReference_m331EC64325F258615093855990B8B3181099B517 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_HFReference_m331EC64325F258615093855990B8B3181099B517_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*, float);
	static AudioReverbZone_set_HFReference_m331EC64325F258615093855990B8B3181099B517_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_HFReference_m331EC64325F258615093855990B8B3181099B517_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_HFReference(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_LFReference_mA7BDD93A2FB05546DBB00E29696D905B5F89829D (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbZone_get_LFReference_mA7BDD93A2FB05546DBB00E29696D905B5F89829D_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*);
	static AudioReverbZone_get_LFReference_mA7BDD93A2FB05546DBB00E29696D905B5F89829D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_LFReference_mA7BDD93A2FB05546DBB00E29696D905B5F89829D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_LFReference()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_LFReference_mD790C9855FC151F399990DED609153983EAE4D38 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_LFReference_mD790C9855FC151F399990DED609153983EAE4D38_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*, float);
	static AudioReverbZone_set_LFReference_mD790C9855FC151F399990DED609153983EAE4D38_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_LFReference_mD790C9855FC151F399990DED609153983EAE4D38_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_LFReference(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_roomRolloffFactor_m32F6F8931E314AB0F3DA617E91D72A0C8E345C22 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral247AA0C7832E73DA2B1C26AE6EECA78F6305621E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral247AA0C7832E73DA2B1C26AE6EECA78F6305621E, NULL);
		V_0 = (10.0f);
		goto IL_0014;
	}

IL_0014:
	{
		float L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_roomRolloffFactor_mDF41A2C59C38763A6D0AFBE1268BDF976FA7A65E (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral247AA0C7832E73DA2B1C26AE6EECA78F6305621E);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral247AA0C7832E73DA2B1C26AE6EECA78F6305621E, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_diffusion_mD41B0A5AB6A954AF9453FFD4CA56DE1E99112F81 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbZone_get_diffusion_mD41B0A5AB6A954AF9453FFD4CA56DE1E99112F81_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*);
	static AudioReverbZone_get_diffusion_mD41B0A5AB6A954AF9453FFD4CA56DE1E99112F81_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_diffusion_mD41B0A5AB6A954AF9453FFD4CA56DE1E99112F81_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_diffusion()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_diffusion_mEBE6DD85D505213B5C017ED539EAAD8897043BAC (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_diffusion_mEBE6DD85D505213B5C017ED539EAAD8897043BAC_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*, float);
	static AudioReverbZone_set_diffusion_mEBE6DD85D505213B5C017ED539EAAD8897043BAC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_diffusion_mEBE6DD85D505213B5C017ED539EAAD8897043BAC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_diffusion(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbZone_get_density_m2735C507661A18EDA8DF843A610AC425A8AA05EF (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbZone_get_density_m2735C507661A18EDA8DF843A610AC425A8AA05EF_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*);
	static AudioReverbZone_get_density_m2735C507661A18EDA8DF843A610AC425A8AA05EF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_get_density_m2735C507661A18EDA8DF843A610AC425A8AA05EF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::get_density()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone_set_density_mD0AB2B4E9E31D3C30446F5D927E7A4D1B3E6661A (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbZone_set_density_mD0AB2B4E9E31D3C30446F5D927E7A4D1B3E6661A_ftn) (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835*, float);
	static AudioReverbZone_set_density_mD0AB2B4E9E31D3C30446F5D927E7A4D1B3E6661A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbZone_set_density_mD0AB2B4E9E31D3C30446F5D927E7A4D1B3E6661A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbZone::set_density(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbZone__ctor_m6125F0EA7D0C37A533B744C29A9611A688045A77 (AudioReverbZone_tD03987BC18B10E2AC1C93DEBD97E6268AD519835* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* AudioLowPassFilter_GetCustomLowpassLevelCurveCopy_m14BAC51BB10B6F00B3BAC19CE7FEC5231F99E15B (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* __this, const RuntimeMethod* method) 
{
	typedef AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* (*AudioLowPassFilter_GetCustomLowpassLevelCurveCopy_m14BAC51BB10B6F00B3BAC19CE7FEC5231F99E15B_ftn) (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0*);
	static AudioLowPassFilter_GetCustomLowpassLevelCurveCopy_m14BAC51BB10B6F00B3BAC19CE7FEC5231F99E15B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioLowPassFilter_GetCustomLowpassLevelCurveCopy_m14BAC51BB10B6F00B3BAC19CE7FEC5231F99E15B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioLowPassFilter::GetCustomLowpassLevelCurveCopy()");
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_SetCustomLowpassLevelCurveHelper_m47A4935A70317BB52F179FC0BFC6BEDEEA953CAC (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* ___0_source, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_curve, const RuntimeMethod* method) 
{
	typedef void (*AudioLowPassFilter_SetCustomLowpassLevelCurveHelper_m47A4935A70317BB52F179FC0BFC6BEDEEA953CAC_ftn) (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0*, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*);
	static AudioLowPassFilter_SetCustomLowpassLevelCurveHelper_m47A4935A70317BB52F179FC0BFC6BEDEEA953CAC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioLowPassFilter_SetCustomLowpassLevelCurveHelper_m47A4935A70317BB52F179FC0BFC6BEDEEA953CAC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioLowPassFilter::SetCustomLowpassLevelCurveHelper(UnityEngine.AudioLowPassFilter,UnityEngine.AnimationCurve)");
	_il2cpp_icall_func(___0_source, ___1_curve);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* AudioLowPassFilter_get_customCutoffCurve_mE5E13EB0D3D7414FBAE5DDDA31821027AA7FD116 (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* __this, const RuntimeMethod* method) 
{
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* V_0 = NULL;
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0;
		L_0 = AudioLowPassFilter_GetCustomLowpassLevelCurveCopy_m14BAC51BB10B6F00B3BAC19CE7FEC5231F99E15B(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_set_customCutoffCurve_m3DD993213650BB06F924B9ECC8B77AEE7FFE9098 (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method) 
{
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___0_value;
		AudioLowPassFilter_SetCustomLowpassLevelCurveHelper_m47A4935A70317BB52F179FC0BFC6BEDEEA953CAC(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioLowPassFilter_get_cutoffFrequency_m81B07E7C2CE10E23F89954A3445AE3E79FC41F76 (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioLowPassFilter_get_cutoffFrequency_m81B07E7C2CE10E23F89954A3445AE3E79FC41F76_ftn) (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0*);
	static AudioLowPassFilter_get_cutoffFrequency_m81B07E7C2CE10E23F89954A3445AE3E79FC41F76_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioLowPassFilter_get_cutoffFrequency_m81B07E7C2CE10E23F89954A3445AE3E79FC41F76_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioLowPassFilter::get_cutoffFrequency()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_set_cutoffFrequency_m593B7A476225759056C6DACCEBF92016FEE7B050 (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioLowPassFilter_set_cutoffFrequency_m593B7A476225759056C6DACCEBF92016FEE7B050_ftn) (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0*, float);
	static AudioLowPassFilter_set_cutoffFrequency_m593B7A476225759056C6DACCEBF92016FEE7B050_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioLowPassFilter_set_cutoffFrequency_m593B7A476225759056C6DACCEBF92016FEE7B050_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioLowPassFilter::set_cutoffFrequency(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioLowPassFilter_get_lowpassResonanceQ_mE4C49AFFCD409A295C6232C1560014D7B661CC95 (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioLowPassFilter_get_lowpassResonanceQ_mE4C49AFFCD409A295C6232C1560014D7B661CC95_ftn) (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0*);
	static AudioLowPassFilter_get_lowpassResonanceQ_mE4C49AFFCD409A295C6232C1560014D7B661CC95_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioLowPassFilter_get_lowpassResonanceQ_mE4C49AFFCD409A295C6232C1560014D7B661CC95_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioLowPassFilter::get_lowpassResonanceQ()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter_set_lowpassResonanceQ_m99921D5254062F0CB3FFE1C608CF703AD1BA0F4B (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioLowPassFilter_set_lowpassResonanceQ_m99921D5254062F0CB3FFE1C608CF703AD1BA0F4B_ftn) (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0*, float);
	static AudioLowPassFilter_set_lowpassResonanceQ_m99921D5254062F0CB3FFE1C608CF703AD1BA0F4B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioLowPassFilter_set_lowpassResonanceQ_m99921D5254062F0CB3FFE1C608CF703AD1BA0F4B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioLowPassFilter::set_lowpassResonanceQ(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioLowPassFilter__ctor_m84825EE53C006C52517EEA9F9F20D80A517F4BCA (AudioLowPassFilter_tB32626505D7322A99E2F35C81584960BAC42C2C0* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioHighPassFilter_get_cutoffFrequency_m3B2D24CAE52BABA37E36DDBFFC5710F8346889CD (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioHighPassFilter_get_cutoffFrequency_m3B2D24CAE52BABA37E36DDBFFC5710F8346889CD_ftn) (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718*);
	static AudioHighPassFilter_get_cutoffFrequency_m3B2D24CAE52BABA37E36DDBFFC5710F8346889CD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioHighPassFilter_get_cutoffFrequency_m3B2D24CAE52BABA37E36DDBFFC5710F8346889CD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioHighPassFilter::get_cutoffFrequency()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioHighPassFilter_set_cutoffFrequency_mBD5636A124C598DC0B54B8338FF834F422DD676C (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioHighPassFilter_set_cutoffFrequency_mBD5636A124C598DC0B54B8338FF834F422DD676C_ftn) (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718*, float);
	static AudioHighPassFilter_set_cutoffFrequency_mBD5636A124C598DC0B54B8338FF834F422DD676C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioHighPassFilter_set_cutoffFrequency_mBD5636A124C598DC0B54B8338FF834F422DD676C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioHighPassFilter::set_cutoffFrequency(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioHighPassFilter_get_highpassResonanceQ_m64B258EA328733E39E4D37DAA9E29919CBCF29C1 (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioHighPassFilter_get_highpassResonanceQ_m64B258EA328733E39E4D37DAA9E29919CBCF29C1_ftn) (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718*);
	static AudioHighPassFilter_get_highpassResonanceQ_m64B258EA328733E39E4D37DAA9E29919CBCF29C1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioHighPassFilter_get_highpassResonanceQ_m64B258EA328733E39E4D37DAA9E29919CBCF29C1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioHighPassFilter::get_highpassResonanceQ()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioHighPassFilter_set_highpassResonanceQ_m904290EB5077604E41690C97AE1160AB78FE24B6 (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioHighPassFilter_set_highpassResonanceQ_m904290EB5077604E41690C97AE1160AB78FE24B6_ftn) (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718*, float);
	static AudioHighPassFilter_set_highpassResonanceQ_m904290EB5077604E41690C97AE1160AB78FE24B6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioHighPassFilter_set_highpassResonanceQ_m904290EB5077604E41690C97AE1160AB78FE24B6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioHighPassFilter::set_highpassResonanceQ(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioHighPassFilter__ctor_mDAB8BDE4375EB6D37AEF7F10636038195818AF1B (AudioHighPassFilter_tC553FD08CC1A23D836BF86BA3070256FB8006718* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioDistortionFilter_get_distortionLevel_mA6CAE95E51279B223842C5460DDF558AC2B9E5BF (AudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioDistortionFilter_get_distortionLevel_mA6CAE95E51279B223842C5460DDF558AC2B9E5BF_ftn) (AudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2*);
	static AudioDistortionFilter_get_distortionLevel_mA6CAE95E51279B223842C5460DDF558AC2B9E5BF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioDistortionFilter_get_distortionLevel_mA6CAE95E51279B223842C5460DDF558AC2B9E5BF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioDistortionFilter::get_distortionLevel()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioDistortionFilter_set_distortionLevel_m1C3A97CA5778481402593F35B9DF69C1ABE7FF3F (AudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioDistortionFilter_set_distortionLevel_m1C3A97CA5778481402593F35B9DF69C1ABE7FF3F_ftn) (AudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2*, float);
	static AudioDistortionFilter_set_distortionLevel_m1C3A97CA5778481402593F35B9DF69C1ABE7FF3F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioDistortionFilter_set_distortionLevel_m1C3A97CA5778481402593F35B9DF69C1ABE7FF3F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioDistortionFilter::set_distortionLevel(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioDistortionFilter__ctor_m36416ED8C4E280AB866F56E30EEFA6D6F3103635 (AudioDistortionFilter_t7F3BAB686EC252D931F9F0C9D5711334A15AE2C2* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_delay_mCB330FE5F6FA47E2F150055D5B5DE7CF823B60C3 (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioEchoFilter_get_delay_mCB330FE5F6FA47E2F150055D5B5DE7CF823B60C3_ftn) (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2*);
	static AudioEchoFilter_get_delay_mCB330FE5F6FA47E2F150055D5B5DE7CF823B60C3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioEchoFilter_get_delay_mCB330FE5F6FA47E2F150055D5B5DE7CF823B60C3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioEchoFilter::get_delay()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_delay_m397356ADDF75BA6494C0BB6D7010CE491EB380EA (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioEchoFilter_set_delay_m397356ADDF75BA6494C0BB6D7010CE491EB380EA_ftn) (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2*, float);
	static AudioEchoFilter_set_delay_m397356ADDF75BA6494C0BB6D7010CE491EB380EA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioEchoFilter_set_delay_m397356ADDF75BA6494C0BB6D7010CE491EB380EA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioEchoFilter::set_delay(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_decayRatio_m8FA03CFD848069F564CDAA623CBF8CBA54EA872E (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioEchoFilter_get_decayRatio_m8FA03CFD848069F564CDAA623CBF8CBA54EA872E_ftn) (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2*);
	static AudioEchoFilter_get_decayRatio_m8FA03CFD848069F564CDAA623CBF8CBA54EA872E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioEchoFilter_get_decayRatio_m8FA03CFD848069F564CDAA623CBF8CBA54EA872E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioEchoFilter::get_decayRatio()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_decayRatio_m11BF2192C4E06EDD856936E0D911121A9B718B85 (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioEchoFilter_set_decayRatio_m11BF2192C4E06EDD856936E0D911121A9B718B85_ftn) (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2*, float);
	static AudioEchoFilter_set_decayRatio_m11BF2192C4E06EDD856936E0D911121A9B718B85_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioEchoFilter_set_decayRatio_m11BF2192C4E06EDD856936E0D911121A9B718B85_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioEchoFilter::set_decayRatio(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_dryMix_mC739CE6F775496904C2E4B3F9B4FD461BFF9A9C4 (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioEchoFilter_get_dryMix_mC739CE6F775496904C2E4B3F9B4FD461BFF9A9C4_ftn) (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2*);
	static AudioEchoFilter_get_dryMix_mC739CE6F775496904C2E4B3F9B4FD461BFF9A9C4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioEchoFilter_get_dryMix_mC739CE6F775496904C2E4B3F9B4FD461BFF9A9C4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioEchoFilter::get_dryMix()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_dryMix_mD6D153883670F3E1C64ACC3C3E9B546A90786B58 (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioEchoFilter_set_dryMix_mD6D153883670F3E1C64ACC3C3E9B546A90786B58_ftn) (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2*, float);
	static AudioEchoFilter_set_dryMix_mD6D153883670F3E1C64ACC3C3E9B546A90786B58_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioEchoFilter_set_dryMix_mD6D153883670F3E1C64ACC3C3E9B546A90786B58_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioEchoFilter::set_dryMix(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioEchoFilter_get_wetMix_mDD2098A367D66E20E7467D9C70775BDF9649FC79 (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioEchoFilter_get_wetMix_mDD2098A367D66E20E7467D9C70775BDF9649FC79_ftn) (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2*);
	static AudioEchoFilter_get_wetMix_mDD2098A367D66E20E7467D9C70775BDF9649FC79_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioEchoFilter_get_wetMix_mDD2098A367D66E20E7467D9C70775BDF9649FC79_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioEchoFilter::get_wetMix()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter_set_wetMix_mB73E5B2A5C73C6FC72E90EA1850B9497E4D09370 (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioEchoFilter_set_wetMix_mB73E5B2A5C73C6FC72E90EA1850B9497E4D09370_ftn) (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2*, float);
	static AudioEchoFilter_set_wetMix_mB73E5B2A5C73C6FC72E90EA1850B9497E4D09370_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioEchoFilter_set_wetMix_mB73E5B2A5C73C6FC72E90EA1850B9497E4D09370_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioEchoFilter::set_wetMix(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEchoFilter__ctor_m5100792BD25686BF7A44FED02F04D974D6DA0A4E (AudioEchoFilter_t1EA13A6D92A166983CC9AC04472212B01293EAC2* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_dryMix_m1A9342CF6C25C7A1F39036EF22053D7971C1548A (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioChorusFilter_get_dryMix_m1A9342CF6C25C7A1F39036EF22053D7971C1548A_ftn) (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A*);
	static AudioChorusFilter_get_dryMix_m1A9342CF6C25C7A1F39036EF22053D7971C1548A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_get_dryMix_m1A9342CF6C25C7A1F39036EF22053D7971C1548A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::get_dryMix()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_dryMix_mB1A570CFCA83E7774B818D4CC793EE8826036F57 (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioChorusFilter_set_dryMix_mB1A570CFCA83E7774B818D4CC793EE8826036F57_ftn) (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A*, float);
	static AudioChorusFilter_set_dryMix_mB1A570CFCA83E7774B818D4CC793EE8826036F57_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_set_dryMix_mB1A570CFCA83E7774B818D4CC793EE8826036F57_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::set_dryMix(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_wetMix1_m8745993A0B1ACDC2D7B573AFE2D518A9F4D9C4DF (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioChorusFilter_get_wetMix1_m8745993A0B1ACDC2D7B573AFE2D518A9F4D9C4DF_ftn) (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A*);
	static AudioChorusFilter_get_wetMix1_m8745993A0B1ACDC2D7B573AFE2D518A9F4D9C4DF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_get_wetMix1_m8745993A0B1ACDC2D7B573AFE2D518A9F4D9C4DF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::get_wetMix1()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_wetMix1_m29F12D2DAA2B9331BB403E2CCD51622A28CA9AB5 (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioChorusFilter_set_wetMix1_m29F12D2DAA2B9331BB403E2CCD51622A28CA9AB5_ftn) (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A*, float);
	static AudioChorusFilter_set_wetMix1_m29F12D2DAA2B9331BB403E2CCD51622A28CA9AB5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_set_wetMix1_m29F12D2DAA2B9331BB403E2CCD51622A28CA9AB5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::set_wetMix1(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_wetMix2_mDA24F10D5F578A8A9B298D20EA96859540E84280 (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioChorusFilter_get_wetMix2_mDA24F10D5F578A8A9B298D20EA96859540E84280_ftn) (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A*);
	static AudioChorusFilter_get_wetMix2_mDA24F10D5F578A8A9B298D20EA96859540E84280_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_get_wetMix2_mDA24F10D5F578A8A9B298D20EA96859540E84280_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::get_wetMix2()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_wetMix2_m0FAF980C47D4AEE1D8E77FD18E87B4FBB6AF5FF4 (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioChorusFilter_set_wetMix2_m0FAF980C47D4AEE1D8E77FD18E87B4FBB6AF5FF4_ftn) (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A*, float);
	static AudioChorusFilter_set_wetMix2_m0FAF980C47D4AEE1D8E77FD18E87B4FBB6AF5FF4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_set_wetMix2_m0FAF980C47D4AEE1D8E77FD18E87B4FBB6AF5FF4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::set_wetMix2(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_wetMix3_m34E39E60D6C3B6B1FB75DB16E6E0E0CAECFBC45D (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioChorusFilter_get_wetMix3_m34E39E60D6C3B6B1FB75DB16E6E0E0CAECFBC45D_ftn) (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A*);
	static AudioChorusFilter_get_wetMix3_m34E39E60D6C3B6B1FB75DB16E6E0E0CAECFBC45D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_get_wetMix3_m34E39E60D6C3B6B1FB75DB16E6E0E0CAECFBC45D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::get_wetMix3()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_wetMix3_mDB728423C888D810F3952E0EE1B539965816D5CA (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioChorusFilter_set_wetMix3_mDB728423C888D810F3952E0EE1B539965816D5CA_ftn) (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A*, float);
	static AudioChorusFilter_set_wetMix3_mDB728423C888D810F3952E0EE1B539965816D5CA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_set_wetMix3_mDB728423C888D810F3952E0EE1B539965816D5CA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::set_wetMix3(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_delay_m672795F6AA8E8B25C82E7AD89F700A47EF006D13 (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioChorusFilter_get_delay_m672795F6AA8E8B25C82E7AD89F700A47EF006D13_ftn) (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A*);
	static AudioChorusFilter_get_delay_m672795F6AA8E8B25C82E7AD89F700A47EF006D13_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_get_delay_m672795F6AA8E8B25C82E7AD89F700A47EF006D13_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::get_delay()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_delay_m55A6C17C5720CD54E2635377DF9F2AA909BE6AB9 (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioChorusFilter_set_delay_m55A6C17C5720CD54E2635377DF9F2AA909BE6AB9_ftn) (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A*, float);
	static AudioChorusFilter_set_delay_m55A6C17C5720CD54E2635377DF9F2AA909BE6AB9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_set_delay_m55A6C17C5720CD54E2635377DF9F2AA909BE6AB9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::set_delay(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_rate_mE7CC401F69E7E5576B31B1D9BE22B04567DCF014 (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioChorusFilter_get_rate_mE7CC401F69E7E5576B31B1D9BE22B04567DCF014_ftn) (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A*);
	static AudioChorusFilter_get_rate_mE7CC401F69E7E5576B31B1D9BE22B04567DCF014_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_get_rate_mE7CC401F69E7E5576B31B1D9BE22B04567DCF014_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::get_rate()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_rate_m5F33CF51BDE70FE8A955CAB1E8C4FB7C18E0E5D8 (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioChorusFilter_set_rate_m5F33CF51BDE70FE8A955CAB1E8C4FB7C18E0E5D8_ftn) (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A*, float);
	static AudioChorusFilter_set_rate_m5F33CF51BDE70FE8A955CAB1E8C4FB7C18E0E5D8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_set_rate_m5F33CF51BDE70FE8A955CAB1E8C4FB7C18E0E5D8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::set_rate(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_depth_m7759E9F1054657F72E4DFEFB013BD79A230702BD (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioChorusFilter_get_depth_m7759E9F1054657F72E4DFEFB013BD79A230702BD_ftn) (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A*);
	static AudioChorusFilter_get_depth_m7759E9F1054657F72E4DFEFB013BD79A230702BD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_get_depth_m7759E9F1054657F72E4DFEFB013BD79A230702BD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::get_depth()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_depth_m9CF37951B349E28FED863E207CFA2E5E451BDE2B (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioChorusFilter_set_depth_m9CF37951B349E28FED863E207CFA2E5E451BDE2B_ftn) (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A*, float);
	static AudioChorusFilter_set_depth_m9CF37951B349E28FED863E207CFA2E5E451BDE2B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioChorusFilter_set_depth_m9CF37951B349E28FED863E207CFA2E5E451BDE2B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioChorusFilter::set_depth(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioChorusFilter_get_feedback_m5227967B0E1E516101D09CA21E671FD43E8EDADE (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral833CA0336B0B01052EF2587E1BA1531EF4774426);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral833CA0336B0B01052EF2587E1BA1531EF4774426, NULL);
		V_0 = (0.0f);
		goto IL_0014;
	}

IL_0014:
	{
		float L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter_set_feedback_mFDEC32D90161D51FE3FDA1A8D42597F11DC16DAA (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral833CA0336B0B01052EF2587E1BA1531EF4774426);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral833CA0336B0B01052EF2587E1BA1531EF4774426, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioChorusFilter__ctor_mEF2A7D547F029200A840E0457C90369E1BD7CDBA (AudioChorusFilter_t95CE93C9DE6F53B2897C4F9108B1DE967FE7511A* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioReverbFilter_get_reverbPreset_m0DD8D4359DB574E72F9A80FFB7BDCE4E15A1044B (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioReverbFilter_get_reverbPreset_m0DD8D4359DB574E72F9A80FFB7BDCE4E15A1044B_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*);
	static AudioReverbFilter_get_reverbPreset_m0DD8D4359DB574E72F9A80FFB7BDCE4E15A1044B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_reverbPreset_m0DD8D4359DB574E72F9A80FFB7BDCE4E15A1044B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_reverbPreset()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reverbPreset_mF0D458E66A09909A3363CB82045D324A15D0A35C (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_reverbPreset_mF0D458E66A09909A3363CB82045D324A15D0A35C_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*, int32_t);
	static AudioReverbFilter_set_reverbPreset_mF0D458E66A09909A3363CB82045D324A15D0A35C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_reverbPreset_mF0D458E66A09909A3363CB82045D324A15D0A35C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_reverbPreset(UnityEngine.AudioReverbPreset)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_dryLevel_mD08FE87B5DC628565F293CE1B56A9A1307AE0C09 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_dryLevel_mD08FE87B5DC628565F293CE1B56A9A1307AE0C09_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*);
	static AudioReverbFilter_get_dryLevel_mD08FE87B5DC628565F293CE1B56A9A1307AE0C09_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_dryLevel_mD08FE87B5DC628565F293CE1B56A9A1307AE0C09_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_dryLevel()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_dryLevel_m38274A3E21082394406A720CAA563CC837C7E38C (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_dryLevel_m38274A3E21082394406A720CAA563CC837C7E38C_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*, float);
	static AudioReverbFilter_set_dryLevel_m38274A3E21082394406A720CAA563CC837C7E38C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_dryLevel_m38274A3E21082394406A720CAA563CC837C7E38C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_dryLevel(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_room_m29E27BCA006A28DC57C48238713F5C7BB4150FBB (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_room_m29E27BCA006A28DC57C48238713F5C7BB4150FBB_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*);
	static AudioReverbFilter_get_room_m29E27BCA006A28DC57C48238713F5C7BB4150FBB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_room_m29E27BCA006A28DC57C48238713F5C7BB4150FBB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_room()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_room_mEBB4B620CFC0CF674850C555EA9D387F01EE7B66 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_room_mEBB4B620CFC0CF674850C555EA9D387F01EE7B66_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*, float);
	static AudioReverbFilter_set_room_mEBB4B620CFC0CF674850C555EA9D387F01EE7B66_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_room_mEBB4B620CFC0CF674850C555EA9D387F01EE7B66_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_room(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_roomHF_m3BCD46183B80171D31662CA8C14FD83EC79FEFA7 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_roomHF_m3BCD46183B80171D31662CA8C14FD83EC79FEFA7_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*);
	static AudioReverbFilter_get_roomHF_m3BCD46183B80171D31662CA8C14FD83EC79FEFA7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_roomHF_m3BCD46183B80171D31662CA8C14FD83EC79FEFA7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_roomHF()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_roomHF_mE2105449BD5C099291B33096F7B07B2675F3F2FE (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_roomHF_mE2105449BD5C099291B33096F7B07B2675F3F2FE_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*, float);
	static AudioReverbFilter_set_roomHF_mE2105449BD5C099291B33096F7B07B2675F3F2FE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_roomHF_mE2105449BD5C099291B33096F7B07B2675F3F2FE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_roomHF(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_roomRolloffFactor_m87397401ACDCEE355A406B6615C3CAD2ED2A755E (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral247AA0C7832E73DA2B1C26AE6EECA78F6305621E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral247AA0C7832E73DA2B1C26AE6EECA78F6305621E, NULL);
		V_0 = (10.0f);
		goto IL_0014;
	}

IL_0014:
	{
		float L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_roomRolloffFactor_mEA2B79BA611BF72D7C7877EC4C07ED25C499A3BF (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral247AA0C7832E73DA2B1C26AE6EECA78F6305621E);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral247AA0C7832E73DA2B1C26AE6EECA78F6305621E, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_decayTime_m9997163F354BA2E0AC8AEFAF0A176A7F29071C5A (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_decayTime_m9997163F354BA2E0AC8AEFAF0A176A7F29071C5A_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*);
	static AudioReverbFilter_get_decayTime_m9997163F354BA2E0AC8AEFAF0A176A7F29071C5A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_decayTime_m9997163F354BA2E0AC8AEFAF0A176A7F29071C5A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_decayTime()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_decayTime_m5A0A13CCEB435EC02065BB2BBD52515C813E3269 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_decayTime_m5A0A13CCEB435EC02065BB2BBD52515C813E3269_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*, float);
	static AudioReverbFilter_set_decayTime_m5A0A13CCEB435EC02065BB2BBD52515C813E3269_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_decayTime_m5A0A13CCEB435EC02065BB2BBD52515C813E3269_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_decayTime(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_decayHFRatio_m0A583A0F2C049AC770DA5DCD96444C42505715CA (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_decayHFRatio_m0A583A0F2C049AC770DA5DCD96444C42505715CA_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*);
	static AudioReverbFilter_get_decayHFRatio_m0A583A0F2C049AC770DA5DCD96444C42505715CA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_decayHFRatio_m0A583A0F2C049AC770DA5DCD96444C42505715CA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_decayHFRatio()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_decayHFRatio_mAA637FF73CAB073B4B72333E49B8EF87CB835B96 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_decayHFRatio_mAA637FF73CAB073B4B72333E49B8EF87CB835B96_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*, float);
	static AudioReverbFilter_set_decayHFRatio_mAA637FF73CAB073B4B72333E49B8EF87CB835B96_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_decayHFRatio_mAA637FF73CAB073B4B72333E49B8EF87CB835B96_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_decayHFRatio(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reflectionsLevel_mEF98034B0B4519F11928C18392244FF9E4D9CEEE (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_reflectionsLevel_mEF98034B0B4519F11928C18392244FF9E4D9CEEE_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*);
	static AudioReverbFilter_get_reflectionsLevel_mEF98034B0B4519F11928C18392244FF9E4D9CEEE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_reflectionsLevel_mEF98034B0B4519F11928C18392244FF9E4D9CEEE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_reflectionsLevel()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reflectionsLevel_m8155042594B3010E232EC28BF11A77B8A21DDF5C (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_reflectionsLevel_m8155042594B3010E232EC28BF11A77B8A21DDF5C_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*, float);
	static AudioReverbFilter_set_reflectionsLevel_m8155042594B3010E232EC28BF11A77B8A21DDF5C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_reflectionsLevel_m8155042594B3010E232EC28BF11A77B8A21DDF5C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_reflectionsLevel(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reflectionsDelay_mD749A1A26AD423F1E1BE315FE63AFB8EF6EBC128 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_reflectionsDelay_mD749A1A26AD423F1E1BE315FE63AFB8EF6EBC128_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*);
	static AudioReverbFilter_get_reflectionsDelay_mD749A1A26AD423F1E1BE315FE63AFB8EF6EBC128_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_reflectionsDelay_mD749A1A26AD423F1E1BE315FE63AFB8EF6EBC128_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_reflectionsDelay()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reflectionsDelay_m36D46F143CFB54001467708C8E99074EE087431F (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_reflectionsDelay_m36D46F143CFB54001467708C8E99074EE087431F_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*, float);
	static AudioReverbFilter_set_reflectionsDelay_m36D46F143CFB54001467708C8E99074EE087431F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_reflectionsDelay_m36D46F143CFB54001467708C8E99074EE087431F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_reflectionsDelay(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reverbLevel_m5C1CFAC4F1C69B6F58EE6C99BDF9B58EF9D56D9F (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_reverbLevel_m5C1CFAC4F1C69B6F58EE6C99BDF9B58EF9D56D9F_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*);
	static AudioReverbFilter_get_reverbLevel_m5C1CFAC4F1C69B6F58EE6C99BDF9B58EF9D56D9F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_reverbLevel_m5C1CFAC4F1C69B6F58EE6C99BDF9B58EF9D56D9F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_reverbLevel()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reverbLevel_m1772AB9B29E73CE217FB1311C584A5E905D8678A (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_reverbLevel_m1772AB9B29E73CE217FB1311C584A5E905D8678A_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*, float);
	static AudioReverbFilter_set_reverbLevel_m1772AB9B29E73CE217FB1311C584A5E905D8678A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_reverbLevel_m1772AB9B29E73CE217FB1311C584A5E905D8678A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_reverbLevel(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_reverbDelay_m57423C26BFCAE1C785D53E86D49CF5D53C220F8B (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_reverbDelay_m57423C26BFCAE1C785D53E86D49CF5D53C220F8B_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*);
	static AudioReverbFilter_get_reverbDelay_m57423C26BFCAE1C785D53E86D49CF5D53C220F8B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_reverbDelay_m57423C26BFCAE1C785D53E86D49CF5D53C220F8B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_reverbDelay()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_reverbDelay_m39032CE9C3873B99EED57ADDC0CAABF1DC476589 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_reverbDelay_m39032CE9C3873B99EED57ADDC0CAABF1DC476589_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*, float);
	static AudioReverbFilter_set_reverbDelay_m39032CE9C3873B99EED57ADDC0CAABF1DC476589_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_reverbDelay_m39032CE9C3873B99EED57ADDC0CAABF1DC476589_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_reverbDelay(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_diffusion_m9A4C2092D061AAC950EA9C366D56ADDE350CB261 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_diffusion_m9A4C2092D061AAC950EA9C366D56ADDE350CB261_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*);
	static AudioReverbFilter_get_diffusion_m9A4C2092D061AAC950EA9C366D56ADDE350CB261_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_diffusion_m9A4C2092D061AAC950EA9C366D56ADDE350CB261_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_diffusion()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_diffusion_mE2CA22104B7E38D40DE2F885941C049719117C94 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_diffusion_mE2CA22104B7E38D40DE2F885941C049719117C94_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*, float);
	static AudioReverbFilter_set_diffusion_mE2CA22104B7E38D40DE2F885941C049719117C94_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_diffusion_mE2CA22104B7E38D40DE2F885941C049719117C94_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_diffusion(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_density_mAD87B83256988D3C56E012513FC8328599746637 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_density_mAD87B83256988D3C56E012513FC8328599746637_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*);
	static AudioReverbFilter_get_density_mAD87B83256988D3C56E012513FC8328599746637_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_density_mAD87B83256988D3C56E012513FC8328599746637_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_density()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_density_mF31C5ABD0AD7531217B5641D54246D5F0FDE1531 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_density_mF31C5ABD0AD7531217B5641D54246D5F0FDE1531_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*, float);
	static AudioReverbFilter_set_density_mF31C5ABD0AD7531217B5641D54246D5F0FDE1531_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_density_mF31C5ABD0AD7531217B5641D54246D5F0FDE1531_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_density(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_hfReference_m2C7256088BAB07BA98BE0FFD6D9E7997072F2A8A (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_hfReference_m2C7256088BAB07BA98BE0FFD6D9E7997072F2A8A_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*);
	static AudioReverbFilter_get_hfReference_m2C7256088BAB07BA98BE0FFD6D9E7997072F2A8A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_hfReference_m2C7256088BAB07BA98BE0FFD6D9E7997072F2A8A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_hfReference()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_hfReference_m4DBCBB0F944EEFD8B617412A540E8D7C926603BC (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_hfReference_m4DBCBB0F944EEFD8B617412A540E8D7C926603BC_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*, float);
	static AudioReverbFilter_set_hfReference_m4DBCBB0F944EEFD8B617412A540E8D7C926603BC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_hfReference_m4DBCBB0F944EEFD8B617412A540E8D7C926603BC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_hfReference(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_roomLF_mF155DBD3B5A136D06DE3BF6200FDFFE1941F014A (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_roomLF_mF155DBD3B5A136D06DE3BF6200FDFFE1941F014A_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*);
	static AudioReverbFilter_get_roomLF_mF155DBD3B5A136D06DE3BF6200FDFFE1941F014A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_roomLF_mF155DBD3B5A136D06DE3BF6200FDFFE1941F014A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_roomLF()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_roomLF_m8EF46CFC0599913676A9E88F76BD25E88911D03D (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_roomLF_m8EF46CFC0599913676A9E88F76BD25E88911D03D_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*, float);
	static AudioReverbFilter_set_roomLF_m8EF46CFC0599913676A9E88F76BD25E88911D03D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_roomLF_m8EF46CFC0599913676A9E88F76BD25E88911D03D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_roomLF(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioReverbFilter_get_lfReference_mFA5EAB7CD86E9D96CC26DA9968594D3B11A49104 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioReverbFilter_get_lfReference_mFA5EAB7CD86E9D96CC26DA9968594D3B11A49104_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*);
	static AudioReverbFilter_get_lfReference_mFA5EAB7CD86E9D96CC26DA9968594D3B11A49104_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_get_lfReference_mFA5EAB7CD86E9D96CC26DA9968594D3B11A49104_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::get_lfReference()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter_set_lfReference_mA2FB3E1E3EEA40142C72F2CC071DC9ED12C11CA9 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioReverbFilter_set_lfReference_mA2FB3E1E3EEA40142C72F2CC071DC9ED12C11CA9_ftn) (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA*, float);
	static AudioReverbFilter_set_lfReference_mA2FB3E1E3EEA40142C72F2CC071DC9ED12C11CA9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioReverbFilter_set_lfReference_mA2FB3E1E3EEA40142C72F2CC071DC9ED12C11CA9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioReverbFilter::set_lfReference(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioReverbFilter__ctor_m20060D1ED1FAFD97683C98E7ABAE796DA2B3B368 (AudioReverbFilter_tEECC3DC7F610088FFB4484962F0356AB6E26EDEA* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetMicrophoneDeviceIDFromName_mD33349A5B41E037F04802638690FBA891035C238 (String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef int32_t (*Microphone_GetMicrophoneDeviceIDFromName_mD33349A5B41E037F04802638690FBA891035C238_ftn) (String_t*);
	static Microphone_GetMicrophoneDeviceIDFromName_mD33349A5B41E037F04802638690FBA891035C238_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_GetMicrophoneDeviceIDFromName_mD33349A5B41E037F04802638690FBA891035C238_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::GetMicrophoneDeviceIDFromName(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_name);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Microphone_StartRecord_m561E1A2B878937E556D6FCABC3FE735CB818D897 (int32_t ___0_deviceID, bool ___1_loop, float ___2_lengthSec, int32_t ___3_frequency, const RuntimeMethod* method) 
{
	typedef AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* (*Microphone_StartRecord_m561E1A2B878937E556D6FCABC3FE735CB818D897_ftn) (int32_t, bool, float, int32_t);
	static Microphone_StartRecord_m561E1A2B878937E556D6FCABC3FE735CB818D897_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_StartRecord_m561E1A2B878937E556D6FCABC3FE735CB818D897_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::StartRecord(System.Int32,System.Boolean,System.Single,System.Int32)");
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* icallRetVal = _il2cpp_icall_func(___0_deviceID, ___1_loop, ___2_lengthSec, ___3_frequency);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_EndRecord_m6F4983F3A002DA6F07F979D42D0750A1C3D16156 (int32_t ___0_deviceID, const RuntimeMethod* method) 
{
	typedef void (*Microphone_EndRecord_m6F4983F3A002DA6F07F979D42D0750A1C3D16156_ftn) (int32_t);
	static Microphone_EndRecord_m6F4983F3A002DA6F07F979D42D0750A1C3D16156_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_EndRecord_m6F4983F3A002DA6F07F979D42D0750A1C3D16156_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::EndRecord(System.Int32)");
	_il2cpp_icall_func(___0_deviceID);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_m59B6BAF774312891C815FCC4D0304256FDC93CB0 (int32_t ___0_deviceID, const RuntimeMethod* method) 
{
	typedef bool (*Microphone_IsRecording_m59B6BAF774312891C815FCC4D0304256FDC93CB0_ftn) (int32_t);
	static Microphone_IsRecording_m59B6BAF774312891C815FCC4D0304256FDC93CB0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_IsRecording_m59B6BAF774312891C815FCC4D0304256FDC93CB0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::IsRecording(System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(___0_deviceID);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetRecordPosition_m73C6D07638BD2BB56C6FA91FF19AAE591A2782C6 (int32_t ___0_deviceID, const RuntimeMethod* method) 
{
	typedef int32_t (*Microphone_GetRecordPosition_m73C6D07638BD2BB56C6FA91FF19AAE591A2782C6_ftn) (int32_t);
	static Microphone_GetRecordPosition_m73C6D07638BD2BB56C6FA91FF19AAE591A2782C6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_GetRecordPosition_m73C6D07638BD2BB56C6FA91FF19AAE591A2782C6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::GetRecordPosition(System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_deviceID);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_GetDeviceCaps_mEE44F844E84A87EE9B8CB7F241DB365309CC80AC (int32_t ___0_deviceID, int32_t* ___1_minFreq, int32_t* ___2_maxFreq, const RuntimeMethod* method) 
{
	typedef void (*Microphone_GetDeviceCaps_mEE44F844E84A87EE9B8CB7F241DB365309CC80AC_ftn) (int32_t, int32_t*, int32_t*);
	static Microphone_GetDeviceCaps_mEE44F844E84A87EE9B8CB7F241DB365309CC80AC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_GetDeviceCaps_mEE44F844E84A87EE9B8CB7F241DB365309CC80AC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::GetDeviceCaps(System.Int32,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___0_deviceID, ___1_minFreq, ___2_maxFreq);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E (String_t* ___0_deviceName, bool ___1_loop, int32_t ___2_lengthSec, int32_t ___3_frequency, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_5 = NULL;
	{
		String_t* L_0 = ___0_deviceName;
		int32_t L_1;
		L_1 = Microphone_GetMicrophoneDeviceIDFromName_mD33349A5B41E037F04802638690FBA891035C238(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_4 = ___0_deviceName;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7ED4706BFE5D072AD3E5A0F26644FF44E847682)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E_RuntimeMethod_var)));
	}

IL_0021:
	{
		int32_t L_7 = ___2_lengthSec;
		V_2 = (bool)((((int32_t)((((int32_t)L_7) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___2_lengthSec), NULL);
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67DB02F1FABDC6C47E8B1ED9A9ADC8E17845BD4F)), L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0ED72C9B4D0AB21E88D08F74AC73C6C8CEC4B7DF)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E_RuntimeMethod_var)));
	}

IL_0048:
	{
		int32_t L_12 = ___2_lengthSec;
		V_3 = (bool)((((int32_t)L_12) > ((int32_t)((int32_t)3600)))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___2_lengthSec), NULL);
		String_t* L_15;
		L_15 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F33A83E7C1398BEA9BE2EB876FECFEF16BCCDBD)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0ED72C9B4D0AB21E88D08F74AC73C6C8CEC4B7DF)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_16 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E_RuntimeMethod_var)));
	}

IL_0070:
	{
		int32_t L_17 = ___3_frequency;
		V_4 = (bool)((((int32_t)((((int32_t)L_17) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0099;
		}
	}
	{
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___3_frequency), NULL);
		String_t* L_20;
		L_20 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral75DC747EA24DB7802D5E580A86C87FFCD3EA69B0)), L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCAEF26BE398F51129C4063A43AD4BF947AC128D6)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E_RuntimeMethod_var)));
	}

IL_0099:
	{
		int32_t L_22 = V_0;
		bool L_23 = ___1_loop;
		int32_t L_24 = ___2_lengthSec;
		int32_t L_25 = ___3_frequency;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_26;
		L_26 = Microphone_StartRecord_m561E1A2B878937E556D6FCABC3FE735CB818D897(L_22, L_23, ((float)L_24), L_25, NULL);
		V_5 = L_26;
		goto IL_00a7;
	}

IL_00a7:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_27 = V_5;
		return L_27;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_End_mB368877FCC9EA1522914006671E637848A0F7CC6 (String_t* ___0_deviceName, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		String_t* L_0 = ___0_deviceName;
		int32_t L_1;
		L_1 = Microphone_GetMicrophoneDeviceIDFromName_mD33349A5B41E037F04802638690FBA891035C238(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		int32_t L_4 = V_0;
		Microphone_EndRecord_m6F4983F3A002DA6F07F979D42D0750A1C3D16156(L_4, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Microphone_get_devices_mC2821E200C36C599DDC37927DEC9EA725240812D (const RuntimeMethod* method) 
{
	typedef StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*Microphone_get_devices_mC2821E200C36C599DDC37927DEC9EA725240812D_ftn) ();
	static Microphone_get_devices_mC2821E200C36C599DDC37927DEC9EA725240812D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_get_devices_mC2821E200C36C599DDC37927DEC9EA725240812D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::get_devices()");
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_get_isAnyDeviceRecording_mA23DADE28B942271902CACC6FC92B60BA83B5858 (const RuntimeMethod* method) 
{
	typedef bool (*Microphone_get_isAnyDeviceRecording_mA23DADE28B942271902CACC6FC92B60BA83B5858_ftn) ();
	static Microphone_get_isAnyDeviceRecording_mA23DADE28B942271902CACC6FC92B60BA83B5858_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Microphone_get_isAnyDeviceRecording_mA23DADE28B942271902CACC6FC92B60BA83B5858_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Microphone::get_isAnyDeviceRecording()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_m93CA54969E12BF2083326E43794D71F0FED5D653 (String_t* ___0_deviceName, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		String_t* L_0 = ___0_deviceName;
		int32_t L_1;
		L_1 = Microphone_GetMicrophoneDeviceIDFromName_mD33349A5B41E037F04802638690FBA891035C238(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_001d;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		bool L_5;
		L_5 = Microphone_IsRecording_m59B6BAF774312891C815FCC4D0304256FDC93CB0(L_4, NULL);
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetPosition_m13F4C8EBE8536893D9AD8388B0E5B46D62E6A459 (String_t* ___0_deviceName, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___0_deviceName;
		int32_t L_1;
		L_1 = Microphone_GetMicrophoneDeviceIDFromName_mD33349A5B41E037F04802638690FBA891035C238(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		V_2 = 0;
		goto IL_001d;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = Microphone_GetRecordPosition_m73C6D07638BD2BB56C6FA91FF19AAE591A2782C6(L_4, NULL);
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_GetDeviceCaps_m8C443A4C8FDA86E23E2C5556C4E3AAA6FD181454 (String_t* ___0_deviceName, int32_t* ___1_minFreq, int32_t* ___2_maxFreq, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t* L_0 = ___1_minFreq;
		*((int32_t*)L_0) = (int32_t)0;
		int32_t* L_1 = ___2_maxFreq;
		*((int32_t*)L_1) = (int32_t)0;
		String_t* L_2 = ___0_deviceName;
		int32_t L_3;
		L_3 = Microphone_GetMicrophoneDeviceIDFromName_mD33349A5B41E037F04802638690FBA891035C238(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0018;
		}
	}
	{
		goto IL_0021;
	}

IL_0018:
	{
		int32_t L_6 = V_0;
		int32_t* L_7 = ___1_minFreq;
		int32_t* L_8 = ___2_maxFreq;
		Microphone_GetDeviceCaps_mEE44F844E84A87EE9B8CB7F241DB365309CC80AC(L_6, L_7, L_8, NULL);
	}

IL_0021:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone__ctor_m4EA008BA12EFE1DF177C87B132A41AEFEDEBC067 (Microphone_tC7BC94B89C5C1409E8F2C532B7EBEF7F23989AB8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioRenderer_Start_mC32C9B9C9AAFF501CD62A2B30B270F7BF08E6429 (const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = AudioRenderer_Internal_AudioRenderer_Start_mCE86EBF2CD0C4BF634EA665D77380A69B73300E0(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioRenderer_Stop_m08B0E63CC996CB8330B497E47A2161D59A400DDF (const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = AudioRenderer_Internal_AudioRenderer_Stop_mE5058A6788AB5F599D1628FD8B22ABB673CF0DCE(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioRenderer_GetSampleCountForCaptureFrame_m145C6DDF7931564988F0F17210335B1588D84113 (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = AudioRenderer_Internal_AudioRenderer_GetSampleCountForCaptureFrame_m04AFD7EE530D8A61788927AAF565B0A9F088F6D9(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioRenderer_AddMixerGroupSink_mE47E9079DB70B240748AC55DB3B4B78705FA7D7B (AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* ___0_mixerGroup, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___1_buffer, bool ___2_excludeFromMix, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* L_0 = ___0_mixerGroup;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_1 = ___1_buffer;
		void* L_2;
		L_2 = NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F(L_1, NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_RuntimeMethod_var);
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_buffer))->___m_Length);
		bool L_4 = ___2_excludeFromMix;
		bool L_5;
		L_5 = AudioRenderer_Internal_AudioRenderer_AddMixerGroupSink_m09D2301DB0F152CECFF48436ED175745EE2A49B9(L_0, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0018;
	}

IL_0018:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioRenderer_Render_m4AA1F575224F29628BEAF1A651C537BC6120BF35 (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___0_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_0 = ___0_buffer;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F(L_0, NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_RuntimeMethod_var);
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length);
		bool L_3;
		L_3 = AudioRenderer_Internal_AudioRenderer_Render_m17C449F516B4C0FFFC0F1D7A96705EFEBDE0799C(L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioRenderer_Internal_AudioRenderer_Start_mCE86EBF2CD0C4BF634EA665D77380A69B73300E0 (const RuntimeMethod* method) 
{
	typedef bool (*AudioRenderer_Internal_AudioRenderer_Start_mCE86EBF2CD0C4BF634EA665D77380A69B73300E0_ftn) ();
	static AudioRenderer_Internal_AudioRenderer_Start_mCE86EBF2CD0C4BF634EA665D77380A69B73300E0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioRenderer_Internal_AudioRenderer_Start_mCE86EBF2CD0C4BF634EA665D77380A69B73300E0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioRenderer::Internal_AudioRenderer_Start()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioRenderer_Internal_AudioRenderer_Stop_mE5058A6788AB5F599D1628FD8B22ABB673CF0DCE (const RuntimeMethod* method) 
{
	typedef bool (*AudioRenderer_Internal_AudioRenderer_Stop_mE5058A6788AB5F599D1628FD8B22ABB673CF0DCE_ftn) ();
	static AudioRenderer_Internal_AudioRenderer_Stop_mE5058A6788AB5F599D1628FD8B22ABB673CF0DCE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioRenderer_Internal_AudioRenderer_Stop_mE5058A6788AB5F599D1628FD8B22ABB673CF0DCE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioRenderer::Internal_AudioRenderer_Stop()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioRenderer_Internal_AudioRenderer_GetSampleCountForCaptureFrame_m04AFD7EE530D8A61788927AAF565B0A9F088F6D9 (const RuntimeMethod* method) 
{
	typedef int32_t (*AudioRenderer_Internal_AudioRenderer_GetSampleCountForCaptureFrame_m04AFD7EE530D8A61788927AAF565B0A9F088F6D9_ftn) ();
	static AudioRenderer_Internal_AudioRenderer_GetSampleCountForCaptureFrame_m04AFD7EE530D8A61788927AAF565B0A9F088F6D9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioRenderer_Internal_AudioRenderer_GetSampleCountForCaptureFrame_m04AFD7EE530D8A61788927AAF565B0A9F088F6D9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioRenderer::Internal_AudioRenderer_GetSampleCountForCaptureFrame()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioRenderer_Internal_AudioRenderer_AddMixerGroupSink_m09D2301DB0F152CECFF48436ED175745EE2A49B9 (AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* ___0_mixerGroup, void* ___1_ptr, int32_t ___2_length, bool ___3_excludeFromMix, const RuntimeMethod* method) 
{
	typedef bool (*AudioRenderer_Internal_AudioRenderer_AddMixerGroupSink_m09D2301DB0F152CECFF48436ED175745EE2A49B9_ftn) (AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311*, void*, int32_t, bool);
	static AudioRenderer_Internal_AudioRenderer_AddMixerGroupSink_m09D2301DB0F152CECFF48436ED175745EE2A49B9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioRenderer_Internal_AudioRenderer_AddMixerGroupSink_m09D2301DB0F152CECFF48436ED175745EE2A49B9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioRenderer::Internal_AudioRenderer_AddMixerGroupSink(UnityEngine.Audio.AudioMixerGroup,System.Void*,System.Int32,System.Boolean)");
	bool icallRetVal = _il2cpp_icall_func(___0_mixerGroup, ___1_ptr, ___2_length, ___3_excludeFromMix);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioRenderer_Internal_AudioRenderer_Render_m17C449F516B4C0FFFC0F1D7A96705EFEBDE0799C (void* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	typedef bool (*AudioRenderer_Internal_AudioRenderer_Render_m17C449F516B4C0FFFC0F1D7A96705EFEBDE0799C_ftn) (void*, int32_t);
	static AudioRenderer_Internal_AudioRenderer_Render_m17C449F516B4C0FFFC0F1D7A96705EFEBDE0799C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioRenderer_Internal_AudioRenderer_Render_m17C449F516B4C0FFFC0F1D7A96705EFEBDE0799C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioRenderer::Internal_AudioRenderer_Render(System.Void*,System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(___0_ptr, ___1_length);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioRenderer__ctor_m3A3FF24C4440427230DE67F72FBBC64C4F242CF6 (AudioRenderer_t0AE73D979E98C81F302348B4BE76F88F717EA8DC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshal_pinvoke(const WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C& unmarshaled, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Name = il2cpp_codegen_marshal_string(unmarshaled.___m_Name);
	marshaled.___m_DepthCameraName = il2cpp_codegen_marshal_string(unmarshaled.___m_DepthCameraName);
	marshaled.___m_Flags = unmarshaled.___m_Flags;
	marshaled.___m_Kind = unmarshaled.___m_Kind;
	if (unmarshaled.___m_Resolutions != NULL)
	{
		il2cpp_array_size_t _unmarshaledm_Resolutions_Length = (unmarshaled.___m_Resolutions)->max_length;
		marshaled.___m_Resolutions = il2cpp_codegen_marshal_allocate_array<Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525>(_unmarshaledm_Resolutions_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledm_Resolutions_Length); i++)
		{
			(marshaled.___m_Resolutions)[i] = (unmarshaled.___m_Resolutions)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___m_Resolutions = NULL;
	}
}
IL2CPP_EXTERN_C void WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshal_pinvoke_back(const WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_pinvoke& marshaled, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___m_Name = il2cpp_codegen_marshal_string_result(marshaled.___m_Name);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Name), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_Name));
	unmarshaled.___m_DepthCameraName = il2cpp_codegen_marshal_string_result(marshaled.___m_DepthCameraName);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_DepthCameraName), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_DepthCameraName));
	int32_t unmarshaledm_Flags_temp_2 = 0;
	unmarshaledm_Flags_temp_2 = marshaled.___m_Flags;
	unmarshaled.___m_Flags = unmarshaledm_Flags_temp_2;
	int32_t unmarshaledm_Kind_temp_3 = 0;
	unmarshaledm_Kind_temp_3 = marshaled.___m_Kind;
	unmarshaled.___m_Kind = unmarshaledm_Kind_temp_3;
	if (marshaled.___m_Resolutions != NULL)
	{
		if (unmarshaled.___m_Resolutions == NULL)
		{
			unmarshaled.___m_Resolutions = reinterpret_cast<ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*>((ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*)SZArrayNew(ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Resolutions), (void*)reinterpret_cast<ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*>((ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*)SZArrayNew(ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___m_Resolutions)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___m_Resolutions)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___m_Resolutions)[i]);
		}
	}
}
IL2CPP_EXTERN_C void WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshal_pinvoke_cleanup(WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name);
	marshaled.___m_Name = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_DepthCameraName);
	marshaled.___m_DepthCameraName = NULL;
	if (marshaled.___m_Resolutions != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___m_Resolutions);
		marshaled.___m_Resolutions = NULL;
	}
}
IL2CPP_EXTERN_C void WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshal_com(const WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C& unmarshaled, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_com& marshaled)
{
	marshaled.___m_Name = il2cpp_codegen_marshal_bstring(unmarshaled.___m_Name);
	marshaled.___m_DepthCameraName = il2cpp_codegen_marshal_bstring(unmarshaled.___m_DepthCameraName);
	marshaled.___m_Flags = unmarshaled.___m_Flags;
	marshaled.___m_Kind = unmarshaled.___m_Kind;
	if (unmarshaled.___m_Resolutions != NULL)
	{
		il2cpp_array_size_t _unmarshaledm_Resolutions_Length = (unmarshaled.___m_Resolutions)->max_length;
		marshaled.___m_Resolutions = il2cpp_codegen_marshal_allocate_array<Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525>(_unmarshaledm_Resolutions_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledm_Resolutions_Length); i++)
		{
			(marshaled.___m_Resolutions)[i] = (unmarshaled.___m_Resolutions)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___m_Resolutions = NULL;
	}
}
IL2CPP_EXTERN_C void WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshal_com_back(const WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_com& marshaled, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___m_Name = il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Name), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name));
	unmarshaled.___m_DepthCameraName = il2cpp_codegen_marshal_bstring_result(marshaled.___m_DepthCameraName);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_DepthCameraName), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_DepthCameraName));
	int32_t unmarshaledm_Flags_temp_2 = 0;
	unmarshaledm_Flags_temp_2 = marshaled.___m_Flags;
	unmarshaled.___m_Flags = unmarshaledm_Flags_temp_2;
	int32_t unmarshaledm_Kind_temp_3 = 0;
	unmarshaledm_Kind_temp_3 = marshaled.___m_Kind;
	unmarshaled.___m_Kind = unmarshaledm_Kind_temp_3;
	if (marshaled.___m_Resolutions != NULL)
	{
		if (unmarshaled.___m_Resolutions == NULL)
		{
			unmarshaled.___m_Resolutions = reinterpret_cast<ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*>((ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*)SZArrayNew(ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Resolutions), (void*)reinterpret_cast<ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*>((ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*)SZArrayNew(ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___m_Resolutions)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___m_Resolutions)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___m_Resolutions)[i]);
		}
	}
}
IL2CPP_EXTERN_C void WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshal_com_cleanup(WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Name);
	marshaled.___m_Name = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_DepthCameraName);
	marshaled.___m_DepthCameraName = NULL;
	if (marshaled.___m_Resolutions != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___m_Resolutions);
		marshaled.___m_Resolutions = NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* WebCamTexture_get_devices_m57A8D669542CBDDB56B21C8DB62D703B7215EBFA (const RuntimeMethod* method) 
{
	typedef WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* (*WebCamTexture_get_devices_m57A8D669542CBDDB56B21C8DB62D703B7215EBFA_ftn) ();
	static WebCamTexture_get_devices_m57A8D669542CBDDB56B21C8DB62D703B7215EBFA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_devices_m57A8D669542CBDDB56B21C8DB62D703B7215EBFA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_devices()");
	WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture__ctor_mAF6018FD8752F8527E23C6A800A314C87322D1DD (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, String_t* ___0_deviceName, int32_t ___1_requestedWidth, int32_t ___2_requestedHeight, int32_t ___3_requestedFPS, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
		Texture__ctor_mC0C7974BEBD867CEB281409FEA15A78CD91B19CC(__this, NULL);
		String_t* L_0 = ___0_deviceName;
		int32_t L_1 = ___1_requestedWidth;
		int32_t L_2 = ___2_requestedHeight;
		int32_t L_3 = ___3_requestedFPS;
		WebCamTexture_Internal_CreateWebCamTexture_mE8B5E78C03DAD51A213D6D39D5A154919409BDD9(__this, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture__ctor_m8E716F7FBF6B0C63D60BEF8BF0C6A7EA819951A4 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, String_t* ___0_deviceName, int32_t ___1_requestedWidth, int32_t ___2_requestedHeight, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
		Texture__ctor_mC0C7974BEBD867CEB281409FEA15A78CD91B19CC(__this, NULL);
		String_t* L_0 = ___0_deviceName;
		int32_t L_1 = ___1_requestedWidth;
		int32_t L_2 = ___2_requestedHeight;
		WebCamTexture_Internal_CreateWebCamTexture_mE8B5E78C03DAD51A213D6D39D5A154919409BDD9(__this, L_0, L_1, L_2, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture__ctor_mD235321AAF77352551BBF18CB34AD6293FD62881 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, String_t* ___0_deviceName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
		Texture__ctor_mC0C7974BEBD867CEB281409FEA15A78CD91B19CC(__this, NULL);
		String_t* L_0 = ___0_deviceName;
		WebCamTexture_Internal_CreateWebCamTexture_mE8B5E78C03DAD51A213D6D39D5A154919409BDD9(__this, L_0, 0, 0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture__ctor_m75037ECD4778EE55F9987B9E56BD8AF8BC4A28CC (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, int32_t ___0_requestedWidth, int32_t ___1_requestedHeight, int32_t ___2_requestedFPS, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
		Texture__ctor_mC0C7974BEBD867CEB281409FEA15A78CD91B19CC(__this, NULL);
		int32_t L_0 = ___0_requestedWidth;
		int32_t L_1 = ___1_requestedHeight;
		int32_t L_2 = ___2_requestedFPS;
		WebCamTexture_Internal_CreateWebCamTexture_mE8B5E78C03DAD51A213D6D39D5A154919409BDD9(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture__ctor_mE75D56732766528D49F3975A45C09A9A96208E99 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, int32_t ___0_requestedWidth, int32_t ___1_requestedHeight, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
		Texture__ctor_mC0C7974BEBD867CEB281409FEA15A78CD91B19CC(__this, NULL);
		int32_t L_0 = ___0_requestedWidth;
		int32_t L_1 = ___1_requestedHeight;
		WebCamTexture_Internal_CreateWebCamTexture_mE8B5E78C03DAD51A213D6D39D5A154919409BDD9(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_0, L_1, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture__ctor_mCDCF373E41263EE323147C4A50609EBE9FA28269 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_il2cpp_TypeInfo_var);
		Texture__ctor_mC0C7974BEBD867CEB281409FEA15A78CD91B19CC(__this, NULL);
		WebCamTexture_Internal_CreateWebCamTexture_mE8B5E78C03DAD51A213D6D39D5A154919409BDD9(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 0, 0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Play_mAB313C6F98D5433C414DA31DD96316BDE8D19A26 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) 
{
	typedef void (*WebCamTexture_Play_mAB313C6F98D5433C414DA31DD96316BDE8D19A26_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*);
	static WebCamTexture_Play_mAB313C6F98D5433C414DA31DD96316BDE8D19A26_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_Play_mAB313C6F98D5433C414DA31DD96316BDE8D19A26_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::Play()");
	_il2cpp_icall_func(__this);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Pause_mF77809A7C7EFF3B0DCEBDC09A3E1B0758F050367 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) 
{
	typedef void (*WebCamTexture_Pause_mF77809A7C7EFF3B0DCEBDC09A3E1B0758F050367_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*);
	static WebCamTexture_Pause_mF77809A7C7EFF3B0DCEBDC09A3E1B0758F050367_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_Pause_mF77809A7C7EFF3B0DCEBDC09A3E1B0758F050367_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::Pause()");
	_il2cpp_icall_func(__this);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Stop_m6239B5D1E10C53B57BB30E124E3F541EBD46A184 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) 
{
	typedef void (*WebCamTexture_Stop_m6239B5D1E10C53B57BB30E124E3F541EBD46A184_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*);
	static WebCamTexture_Stop_m6239B5D1E10C53B57BB30E124E3F541EBD46A184_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_Stop_m6239B5D1E10C53B57BB30E124E3F541EBD46A184_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::Stop()");
	_il2cpp_icall_func(__this);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamTexture_get_isPlaying_mE53901F249CD5FFF9D1C31DDCC2FC331DCEA80CF (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) 
{
	typedef bool (*WebCamTexture_get_isPlaying_mE53901F249CD5FFF9D1C31DDCC2FC331DCEA80CF_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*);
	static WebCamTexture_get_isPlaying_mE53901F249CD5FFF9D1C31DDCC2FC331DCEA80CF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_isPlaying_mE53901F249CD5FFF9D1C31DDCC2FC331DCEA80CF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_isPlaying()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebCamTexture_get_deviceName_mE590B4CFECD04A12159BC99B5BE682882E5F8C55 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) 
{
	typedef String_t* (*WebCamTexture_get_deviceName_mE590B4CFECD04A12159BC99B5BE682882E5F8C55_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*);
	static WebCamTexture_get_deviceName_mE590B4CFECD04A12159BC99B5BE682882E5F8C55_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_deviceName_mE590B4CFECD04A12159BC99B5BE682882E5F8C55_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_deviceName()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_set_deviceName_mE98A9B0F7A93E4C1EF0DD5508E20F64CED31DF86 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*WebCamTexture_set_deviceName_mE98A9B0F7A93E4C1EF0DD5508E20F64CED31DF86_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*, String_t*);
	static WebCamTexture_set_deviceName_mE98A9B0F7A93E4C1EF0DD5508E20F64CED31DF86_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_set_deviceName_mE98A9B0F7A93E4C1EF0DD5508E20F64CED31DF86_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::set_deviceName(System.String)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WebCamTexture_get_requestedFPS_m3AA4E91B40A8F881E6530AEAF5103C0B198F3081 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) 
{
	typedef float (*WebCamTexture_get_requestedFPS_m3AA4E91B40A8F881E6530AEAF5103C0B198F3081_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*);
	static WebCamTexture_get_requestedFPS_m3AA4E91B40A8F881E6530AEAF5103C0B198F3081_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_requestedFPS_m3AA4E91B40A8F881E6530AEAF5103C0B198F3081_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_requestedFPS()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_set_requestedFPS_m1B942D1B9D351ECA5ED4D15B8EA6031BB39C3B3E (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*WebCamTexture_set_requestedFPS_m1B942D1B9D351ECA5ED4D15B8EA6031BB39C3B3E_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*, float);
	static WebCamTexture_set_requestedFPS_m1B942D1B9D351ECA5ED4D15B8EA6031BB39C3B3E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_set_requestedFPS_m1B942D1B9D351ECA5ED4D15B8EA6031BB39C3B3E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::set_requestedFPS(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebCamTexture_get_requestedWidth_m2A8C340F5E4ECFB144C31383997A17DF5CB7FE08 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*WebCamTexture_get_requestedWidth_m2A8C340F5E4ECFB144C31383997A17DF5CB7FE08_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*);
	static WebCamTexture_get_requestedWidth_m2A8C340F5E4ECFB144C31383997A17DF5CB7FE08_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_requestedWidth_m2A8C340F5E4ECFB144C31383997A17DF5CB7FE08_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_requestedWidth()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_set_requestedWidth_mF45C8D70FE7C22D84D86AC7CD81270067BF27D67 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*WebCamTexture_set_requestedWidth_mF45C8D70FE7C22D84D86AC7CD81270067BF27D67_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*, int32_t);
	static WebCamTexture_set_requestedWidth_mF45C8D70FE7C22D84D86AC7CD81270067BF27D67_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_set_requestedWidth_mF45C8D70FE7C22D84D86AC7CD81270067BF27D67_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::set_requestedWidth(System.Int32)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebCamTexture_get_requestedHeight_m0C02E5BB108C1808503A4B9468205BFBC8A7FDEC (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*WebCamTexture_get_requestedHeight_m0C02E5BB108C1808503A4B9468205BFBC8A7FDEC_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*);
	static WebCamTexture_get_requestedHeight_m0C02E5BB108C1808503A4B9468205BFBC8A7FDEC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_requestedHeight_m0C02E5BB108C1808503A4B9468205BFBC8A7FDEC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_requestedHeight()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_set_requestedHeight_m2216C94A7C59856727881B36974DD8E09BAB103C (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*WebCamTexture_set_requestedHeight_m2216C94A7C59856727881B36974DD8E09BAB103C_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*, int32_t);
	static WebCamTexture_set_requestedHeight_m2216C94A7C59856727881B36974DD8E09BAB103C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_set_requestedHeight_m2216C94A7C59856727881B36974DD8E09BAB103C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::set_requestedHeight(System.Int32)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebCamTexture_get_videoRotationAngle_m2BF420A1243F56415BEF82CC84AB4C7B342C991F (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*WebCamTexture_get_videoRotationAngle_m2BF420A1243F56415BEF82CC84AB4C7B342C991F_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*);
	static WebCamTexture_get_videoRotationAngle_m2BF420A1243F56415BEF82CC84AB4C7B342C991F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_videoRotationAngle_m2BF420A1243F56415BEF82CC84AB4C7B342C991F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_videoRotationAngle()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamTexture_get_videoVerticallyMirrored_mDC7525B796A2629927EF113DA199DDE200B1B52A (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) 
{
	typedef bool (*WebCamTexture_get_videoVerticallyMirrored_mDC7525B796A2629927EF113DA199DDE200B1B52A_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*);
	static WebCamTexture_get_videoVerticallyMirrored_mDC7525B796A2629927EF113DA199DDE200B1B52A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_videoVerticallyMirrored_mDC7525B796A2629927EF113DA199DDE200B1B52A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_videoVerticallyMirrored()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamTexture_get_didUpdateThisFrame_m3672350773BAA9131D648B886DFD4E3351F045BE (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) 
{
	typedef bool (*WebCamTexture_get_didUpdateThisFrame_m3672350773BAA9131D648B886DFD4E3351F045BE_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*);
	static WebCamTexture_get_didUpdateThisFrame_m3672350773BAA9131D648B886DFD4E3351F045BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_didUpdateThisFrame_m3672350773BAA9131D648B886DFD4E3351F045BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_didUpdateThisFrame()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F WebCamTexture_GetPixel_mFB7F5DCECD37AEE8CD1051292D22CEEC1B06D044 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		WebCamTexture_GetPixel_Injected_mE8B1CFDFB7ED72F53E74D906FAE89DC575039E94(__this, L_0, L_1, (&V_0), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* WebCamTexture_GetPixels_mA2B07D6D761AA724A6AB1ED04BE0FA195D830FDC (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) 
{
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_0 = NULL;
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(5, __this);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(7, __this);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_2;
		L_2 = WebCamTexture_GetPixels_mD30134473515AEA70C9DE43392F2ADD95747237A(__this, 0, 0, L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0018;
	}

IL_0018:
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* WebCamTexture_GetPixels_mD30134473515AEA70C9DE43392F2ADD95747237A (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_blockWidth, int32_t ___3_blockHeight, const RuntimeMethod* method) 
{
	typedef ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* (*WebCamTexture_GetPixels_mD30134473515AEA70C9DE43392F2ADD95747237A_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*, int32_t, int32_t, int32_t, int32_t);
	static WebCamTexture_GetPixels_mD30134473515AEA70C9DE43392F2ADD95747237A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_GetPixels_mD30134473515AEA70C9DE43392F2ADD95747237A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32)");
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* icallRetVal = _il2cpp_icall_func(__this, ___0_x, ___1_y, ___2_blockWidth, ___3_blockHeight);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* WebCamTexture_GetPixels32_mCB0ABCB9D7BCB7ECABF7BF911946DE25C8F26B58 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) 
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_0 = NULL;
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0;
		L_0 = WebCamTexture_GetPixels32_m7F4F302BE0E517451593C43E3F0D0D1B7840E39E(__this, (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)NULL, NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* WebCamTexture_GetPixels32_m7F4F302BE0E517451593C43E3F0D0D1B7840E39E (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_colors, const RuntimeMethod* method) 
{
	typedef Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* (*WebCamTexture_GetPixels32_m7F4F302BE0E517451593C43E3F0D0D1B7840E39E_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*);
	static WebCamTexture_GetPixels32_m7F4F302BE0E517451593C43E3F0D0D1B7840E39E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_GetPixels32_m7F4F302BE0E517451593C43E3F0D0D1B7840E39E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::GetPixels32(UnityEngine.Color32[])");
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* icallRetVal = _il2cpp_icall_func(__this, ___0_colors);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD WebCamTexture_get_autoFocusPoint_mC5C2256C72411BE5EB8FF7D31E1DC177220D0669 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = WebCamTexture_get_internalAutoFocusPoint_m481D9B757EE9EC40A5FD8E8FA69CE1A02699A555(__this, NULL);
		float L_1 = L_0.___x;
		if ((((float)L_1) < ((float)(0.0f))))
		{
			goto IL_0020;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = WebCamTexture_get_internalAutoFocusPoint_m481D9B757EE9EC40A5FD8E8FA69CE1A02699A555(__this, NULL);
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73((&L_3), L_2, Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		G_B3_0 = L_3;
		goto IL_0029;
	}

IL_0020:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD));
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_4 = V_0;
		G_B3_0 = L_4;
	}

IL_0029:
	{
		V_1 = G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_set_autoFocusPoint_mF3E35AAF12B1F3A88F08FA81EAE61A3E58D5BB0A (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* G_B2_0 = NULL;
	WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* G_B1_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* G_B3_1 = NULL;
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline((&___0_value), Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0014;
		}
		G_B1_0 = __this;
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7((&___0_value), Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0023;
	}

IL_0014:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), (-1.0f), (-1.0f), NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0023:
	{
		NullCheck(G_B3_1);
		WebCamTexture_set_internalAutoFocusPoint_m29347F6736F67D3DFA70DC89580C5443553BEF99(G_B3_1, G_B3_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 WebCamTexture_get_internalAutoFocusPoint_m481D9B757EE9EC40A5FD8E8FA69CE1A02699A555 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		WebCamTexture_get_internalAutoFocusPoint_Injected_m9ACB2C19E8240C26CA748D68358BE68D6D256ABE(__this, (&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_set_internalAutoFocusPoint_m29347F6736F67D3DFA70DC89580C5443553BEF99 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		WebCamTexture_set_internalAutoFocusPoint_Injected_m20952B51A9F862174DFF269D23BC8CFC53E709AC(__this, (&___0_value), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamTexture_get_isDepth_mDA89B25706EFB6F100AF30C68A905A7544AE364B (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) 
{
	typedef bool (*WebCamTexture_get_isDepth_mDA89B25706EFB6F100AF30C68A905A7544AE364B_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*);
	static WebCamTexture_get_isDepth_mDA89B25706EFB6F100AF30C68A905A7544AE364B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_isDepth_mDA89B25706EFB6F100AF30C68A905A7544AE364B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_isDepth()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Internal_CreateWebCamTexture_mE8B5E78C03DAD51A213D6D39D5A154919409BDD9 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* ___0_self, String_t* ___1_scriptingDevice, int32_t ___2_requestedWidth, int32_t ___3_requestedHeight, int32_t ___4_maxFramerate, const RuntimeMethod* method) 
{
	typedef void (*WebCamTexture_Internal_CreateWebCamTexture_mE8B5E78C03DAD51A213D6D39D5A154919409BDD9_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*, String_t*, int32_t, int32_t, int32_t);
	static WebCamTexture_Internal_CreateWebCamTexture_mE8B5E78C03DAD51A213D6D39D5A154919409BDD9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_Internal_CreateWebCamTexture_mE8B5E78C03DAD51A213D6D39D5A154919409BDD9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::Internal_CreateWebCamTexture(UnityEngine.WebCamTexture,System.String,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___0_self, ___1_scriptingDevice, ___2_requestedWidth, ___3_requestedHeight, ___4_maxFramerate);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_GetPixel_Injected_mE8B1CFDFB7ED72F53E74D906FAE89DC575039E94 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, int32_t ___0_x, int32_t ___1_y, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*WebCamTexture_GetPixel_Injected_mE8B1CFDFB7ED72F53E74D906FAE89DC575039E94_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*, int32_t, int32_t, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*);
	static WebCamTexture_GetPixel_Injected_mE8B1CFDFB7ED72F53E74D906FAE89DC575039E94_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_GetPixel_Injected_mE8B1CFDFB7ED72F53E74D906FAE89DC575039E94_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::GetPixel_Injected(System.Int32,System.Int32,UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___0_x, ___1_y, ___2_ret);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_get_internalAutoFocusPoint_Injected_m9ACB2C19E8240C26CA748D68358BE68D6D256ABE (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*WebCamTexture_get_internalAutoFocusPoint_Injected_m9ACB2C19E8240C26CA748D68358BE68D6D256ABE_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static WebCamTexture_get_internalAutoFocusPoint_Injected_m9ACB2C19E8240C26CA748D68358BE68D6D256ABE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_internalAutoFocusPoint_Injected_m9ACB2C19E8240C26CA748D68358BE68D6D256ABE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_internalAutoFocusPoint_Injected(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___0_ret);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_set_internalAutoFocusPoint_Injected_m20952B51A9F862174DFF269D23BC8CFC53E709AC (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*WebCamTexture_set_internalAutoFocusPoint_Injected_m20952B51A9F862174DFF269D23BC8CFC53E709AC_ftn) (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static WebCamTexture_set_internalAutoFocusPoint_Injected_m20952B51A9F862174DFF269D23BC8CFC53E709AC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_set_internalAutoFocusPoint_Injected_m20952B51A9F862174DFF269D23BC8CFC53E709AC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::set_internalAutoFocusPoint_Injected(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___0_value);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 AudioClipPlayable_Create_m0B42D1553D2752E7E98D10677B2A7DE8CE4DEFD8 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_clip, bool ___2_looping, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_SetDuration_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m67FC8BE5E310D54C91DB1D492F7393237401332E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___0_graph;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___1_clip;
		bool L_2 = ___2_looping;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_3;
		L_3 = AudioClipPlayable_CreateHandle_mD7CA217BC6DE899D586272C372456EBB7ED2A825(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_4 = V_0;
		AudioClipPlayable__ctor_m4E686B92CFA7C6A36AA794B1E8C36B1E60605751((&V_1), L_4, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = ___1_clip;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_002b;
		}
	}
	{
		AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 L_8 = V_1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = ___1_clip;
		NullCheck(L_9);
		float L_10;
		L_10 = AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D(L_9, NULL);
		PlayableExtensions_SetDuration_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m67FC8BE5E310D54C91DB1D492F7393237401332E(L_8, ((double)L_10), PlayableExtensions_SetDuration_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m67FC8BE5E310D54C91DB1D492F7393237401332E_RuntimeMethod_var);
	}

IL_002b:
	{
		AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 L_11 = V_1;
		V_3 = L_11;
		goto IL_002f;
	}

IL_002f:
	{
		AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_CreateHandle_mD7CA217BC6DE899D586272C372456EBB7ED2A825 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_clip, bool ___2_looping, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		V_0 = L_0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___1_clip;
		bool L_2 = ___2_looping;
		bool L_3;
		L_3 = AudioClipPlayable_InternalCreateAudioClipPlayable_mBDAA54F35207F6C62F87CAE268732072C7287616((&___0_graph), L_1, L_2, (&V_0), NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5;
		L_5 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		V_2 = L_5;
		goto IL_0025;
	}

IL_0021:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_6 = V_0;
		V_2 = L_6;
		goto IL_0025;
	}

IL_0025:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_7 = V_2;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable__ctor_m4E686B92CFA7C6A36AA794B1E8C36B1E60605751 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m95809D16DD3494AEB0E9E652B42E0CE3167BEE0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m95809D16DD3494AEB0E9E652B42E0CE3167BEE0E((&___0_handle), PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m95809D16DD3494AEB0E9E652B42E0CE3167BEE0E_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57186E11345D0E246E80500DE17B8C941EF8A38F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClipPlayable__ctor_m4E686B92CFA7C6A36AA794B1E8C36B1E60605751_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___0_handle;
		__this->___m_Handle = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AudioClipPlayable__ctor_m4E686B92CFA7C6A36AA794B1E8C36B1E60605751_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	AudioClipPlayable__ctor_m4E686B92CFA7C6A36AA794B1E8C36B1E60605751(_thisAdjusted, ___0_handle, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F AudioClipPlayable_op_Implicit_m49C31C8D61799E247CA509124B3E6E8F4009D237 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___0_playable, const RuntimeMethod* method) 
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44((&___0_playable), NULL);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4((&L_1), L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 AudioClipPlayable_op_Explicit_mA9B643768436960809DB09A469A0DF09B716446B (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8((&___0_playable), NULL);
		AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AudioClipPlayable__ctor_m4E686B92CFA7C6A36AA794B1E8C36B1E60605751((&L_1), L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83_AdjustorThunk (RuntimeObject* __this, AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___0_other, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	bool _returnValue;
	_returnValue = AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClipPlayable_GetClip_m009747EE98DE59A9C7F31A069EEE77EBAC0A5A6F (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) 
{
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1;
		L_1 = AudioClipPlayable_GetClipInternal_m0B594FA02A34EEFC4CAB34B778FF10CD538EDF71(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClipPlayable_GetClip_m009747EE98DE59A9C7F31A069EEE77EBAC0A5A6F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* _returnValue;
	_returnValue = AudioClipPlayable_GetClip_m009747EE98DE59A9C7F31A069EEE77EBAC0A5A6F(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetClip_mC1D588D0FB1D42630C2A76F82A1C2BDA61009926 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) 
{
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___0_value;
		AudioClipPlayable_SetClipInternal_mACA6B51D98C05266D1D0D05D86B5C675006C2DDD(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AudioClipPlayable_SetClip_mC1D588D0FB1D42630C2A76F82A1C2BDA61009926_AdjustorThunk (RuntimeObject* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	AudioClipPlayable_SetClip_mC1D588D0FB1D42630C2A76F82A1C2BDA61009926(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_GetLooped_m18E3568715253DAF09D74A3C08CBF25A07B54660 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		bool L_1;
		L_1 = AudioClipPlayable_GetLoopedInternal_m337CC96BD2CFEFCDB78AE704FD99AF8ED73B34FA(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool AudioClipPlayable_GetLooped_m18E3568715253DAF09D74A3C08CBF25A07B54660_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	bool _returnValue;
	_returnValue = AudioClipPlayable_GetLooped_m18E3568715253DAF09D74A3C08CBF25A07B54660(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetLooped_m7B0B25EC1369786D181CB8DF9BF31E5BFF81201B (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		bool L_1 = ___0_value;
		AudioClipPlayable_SetLoopedInternal_mB8FA25F4121BEA4638075D388C2EA66011236341(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AudioClipPlayable_SetLooped_m7B0B25EC1369786D181CB8DF9BF31E5BFF81201B_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	AudioClipPlayable_SetLooped_m7B0B25EC1369786D181CB8DF9BF31E5BFF81201B(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClipPlayable_GetVolume_mEB0C89F492CD12218C579365A1F9B07D96E7AE8B (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		float L_1;
		L_1 = AudioClipPlayable_GetVolumeInternal_m5ED28FAFC2B3077BAE2CA8F90612C9932C272FCE(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  float AudioClipPlayable_GetVolume_mEB0C89F492CD12218C579365A1F9B07D96E7AE8B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	float _returnValue;
	_returnValue = AudioClipPlayable_GetVolume_mEB0C89F492CD12218C579365A1F9B07D96E7AE8B(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetVolume_m3553EC43CBA43CA7802292710A1A284A6DEF8FCC (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___0_value;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_1 = ___0_value;
		G_B3_0 = ((((float)L_1) > ((float)(1.0f)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___0_value), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0574E31B2E15797E57C51DEC554AE14E00CCB9CC)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClipPlayable_SetVolume_m3553EC43CBA43CA7802292710A1A284A6DEF8FCC_RuntimeMethod_var)));
	}

IL_002f:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_6 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		float L_7 = ___0_value;
		AudioClipPlayable_SetVolumeInternal_m71EFEE49486AACBE4F9C936F4898448AB071B55F(L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AudioClipPlayable_SetVolume_m3553EC43CBA43CA7802292710A1A284A6DEF8FCC_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	AudioClipPlayable_SetVolume_m3553EC43CBA43CA7802292710A1A284A6DEF8FCC(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClipPlayable_GetStereoPan_mB766EBDC23718A7FDC8D3510FB9A2A0B2AA38E69 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		float L_1;
		L_1 = AudioClipPlayable_GetStereoPanInternal_mCC24F11786E25F26876873CCF6CE4B1368608244(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  float AudioClipPlayable_GetStereoPan_mB766EBDC23718A7FDC8D3510FB9A2A0B2AA38E69_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	float _returnValue;
	_returnValue = AudioClipPlayable_GetStereoPan_mB766EBDC23718A7FDC8D3510FB9A2A0B2AA38E69(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetStereoPan_mB8403E93B06B2ECCD0D4D6B0D55C151D0CCCC494 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___0_value;
		if ((((float)L_0) < ((float)(-1.0f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_1 = ___0_value;
		G_B3_0 = ((((float)L_1) > ((float)(1.0f)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___0_value), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FC2A6DFBAD242B7CE1A74ACA9D3224CE2E0163D)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClipPlayable_SetStereoPan_mB8403E93B06B2ECCD0D4D6B0D55C151D0CCCC494_RuntimeMethod_var)));
	}

IL_002f:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_6 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		float L_7 = ___0_value;
		AudioClipPlayable_SetStereoPanInternal_m206A1B777709E25F42C9EF0BEAF3A84D622D4A90(L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AudioClipPlayable_SetStereoPan_mB8403E93B06B2ECCD0D4D6B0D55C151D0CCCC494_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	AudioClipPlayable_SetStereoPan_mB8403E93B06B2ECCD0D4D6B0D55C151D0CCCC494(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClipPlayable_GetSpatialBlend_mB3479E606D27347E8AE9470A50FF13F567D1B5DA (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		float L_1;
		L_1 = AudioClipPlayable_GetSpatialBlendInternal_m588B81B3B008D87A79B2DA76494BF359B2AA8125(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  float AudioClipPlayable_GetSpatialBlend_mB3479E606D27347E8AE9470A50FF13F567D1B5DA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	float _returnValue;
	_returnValue = AudioClipPlayable_GetSpatialBlend_mB3479E606D27347E8AE9470A50FF13F567D1B5DA(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetSpatialBlend_m72F1B86E4E5940E8587C1EA32BB48463A00810BB (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___0_value;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_1 = ___0_value;
		G_B3_0 = ((((float)L_1) > ((float)(1.0f)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___0_value), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral706336A4F6F53F903F6BD416474754F528D2A13B)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClipPlayable_SetSpatialBlend_m72F1B86E4E5940E8587C1EA32BB48463A00810BB_RuntimeMethod_var)));
	}

IL_002f:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_6 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		float L_7 = ___0_value;
		AudioClipPlayable_SetSpatialBlendInternal_mBAE4A56ACEE90D4732C5D2C5D2D721C65B3DD55B(L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AudioClipPlayable_SetSpatialBlend_m72F1B86E4E5940E8587C1EA32BB48463A00810BB_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	AudioClipPlayable_SetSpatialBlend_m72F1B86E4E5940E8587C1EA32BB48463A00810BB(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_IsPlaying_mB24D86E9BA044A3CC82FB12866DC2EB61ADE238F (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = AudioClipPlayable_IsChannelPlaying_mA1C0DFAD142F4D43C5BB4EFE2929708CCE59EDA4(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool AudioClipPlayable_IsPlaying_mB24D86E9BA044A3CC82FB12866DC2EB61ADE238F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	bool _returnValue;
	_returnValue = AudioClipPlayable_IsPlaying_mB24D86E9BA044A3CC82FB12866DC2EB61ADE238F(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_IsChannelPlaying_mA1C0DFAD142F4D43C5BB4EFE2929708CCE59EDA4 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		bool L_1;
		L_1 = AudioClipPlayable_GetIsChannelPlayingInternal_mE3D91DB6102F7D166F4D495E22330B98A4B14721(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool AudioClipPlayable_IsChannelPlaying_mA1C0DFAD142F4D43C5BB4EFE2929708CCE59EDA4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	bool _returnValue;
	_returnValue = AudioClipPlayable_IsChannelPlaying_mA1C0DFAD142F4D43C5BB4EFE2929708CCE59EDA4(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AudioClipPlayable_GetStartDelay_m9C96B753369B9CDA1482CFBB76AFBE22DDED5E47 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		double L_1;
		L_1 = AudioClipPlayable_GetStartDelayInternal_m45F9633CF2D28DD344D68231443AEF11CA3B12F6(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		double L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  double AudioClipPlayable_GetStartDelay_m9C96B753369B9CDA1482CFBB76AFBE22DDED5E47_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	double _returnValue;
	_returnValue = AudioClipPlayable_GetStartDelay_m9C96B753369B9CDA1482CFBB76AFBE22DDED5E47(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetStartDelay_mD7F1860C6EAD27123871D6B95B9D2B1A21DA17C3 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		double L_1 = ___0_value;
		AudioClipPlayable_SetStartDelayInternal_m1A3816547BF61B7448654300EF078D464A5618CD(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AudioClipPlayable_SetStartDelay_mD7F1860C6EAD27123871D6B95B9D2B1A21DA17C3_AdjustorThunk (RuntimeObject* __this, double ___0_value, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	AudioClipPlayable_SetStartDelay_mD7F1860C6EAD27123871D6B95B9D2B1A21DA17C3(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AudioClipPlayable_GetPauseDelay_m402FFC47A9FA96C5015D1268A7B0063308A3724A (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		double L_1;
		L_1 = AudioClipPlayable_GetPauseDelayInternal_m0993546EFBB076183302FF7902815057D7A5A399(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		double L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  double AudioClipPlayable_GetPauseDelay_m402FFC47A9FA96C5015D1268A7B0063308A3724A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	double _returnValue;
	_returnValue = AudioClipPlayable_GetPauseDelay_m402FFC47A9FA96C5015D1268A7B0063308A3724A(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_GetPauseDelay_mAECC9DDE01CAFD50761079E4FBC1B00E8B9FE48C (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, double ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		double L_1;
		L_1 = AudioClipPlayable_GetPauseDelayInternal_m0993546EFBB076183302FF7902815057D7A5A399(L_0, NULL);
		V_0 = L_1;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_2 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = PlayableHandle_GetPlayState_m14547B804BB9B9B9E2B20B3F0975334CC99E778F(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0047;
		}
	}
	{
		double L_4 = ___0_value;
		if ((((double)L_4) < ((double)(0.050000000000000003))))
		{
			goto IL_0044;
		}
	}
	{
		double L_5 = V_0;
		if ((((double)L_5) == ((double)(0.0))))
		{
			goto IL_0041;
		}
	}
	{
		double L_6 = V_0;
		G_B5_0 = ((((double)L_6) < ((double)(0.050000000000000003)))? 1 : 0);
		goto IL_0042;
	}

IL_0041:
	{
		G_B5_0 = 0;
	}

IL_0042:
	{
		G_B7_0 = G_B5_0;
		goto IL_0045;
	}

IL_0044:
	{
		G_B7_0 = 1;
	}

IL_0045:
	{
		G_B9_0 = G_B7_0;
		goto IL_0048;
	}

IL_0047:
	{
		G_B9_0 = 0;
	}

IL_0048:
	{
		V_1 = (bool)G_B9_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0068;
		}
	}
	{
		String_t* L_8;
		L_8 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_0), NULL);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBBA43AB32D58B78D9EADF68C826FFB1393530223)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA30E3C82128EAFD5F248E826279F110DA15013C8)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClipPlayable_GetPauseDelay_mAECC9DDE01CAFD50761079E4FBC1B00E8B9FE48C_RuntimeMethod_var)));
	}

IL_0068:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_11 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		double L_12 = ___0_value;
		AudioClipPlayable_SetPauseDelayInternal_m803360EBD0BB692C31D31D620AAB9C8D0CD7A9D1(L_11, L_12, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AudioClipPlayable_GetPauseDelay_mAECC9DDE01CAFD50761079E4FBC1B00E8B9FE48C_AdjustorThunk (RuntimeObject* __this, double ___0_value, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	AudioClipPlayable_GetPauseDelay_mAECC9DDE01CAFD50761079E4FBC1B00E8B9FE48C(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_Seek_m9444B6B715ECAB55500E1BBD04A1B6BD22980ECD (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, double ___0_startTime, double ___1_startDelay, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_startTime;
		double L_1 = ___1_startDelay;
		AudioClipPlayable_Seek_m2AB327B535C677793BBADEA634B7AAC9442B1391(__this, L_0, L_1, (0.0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AudioClipPlayable_Seek_m9444B6B715ECAB55500E1BBD04A1B6BD22980ECD_AdjustorThunk (RuntimeObject* __this, double ___0_startTime, double ___1_startDelay, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	AudioClipPlayable_Seek_m9444B6B715ECAB55500E1BBD04A1B6BD22980ECD(_thisAdjusted, ___0_startTime, ___1_startDelay, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_Seek_m2AB327B535C677793BBADEA634B7AAC9442B1391 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, double ___0_startTime, double ___1_startDelay, double ___2_duration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	double V_1 = 0.0;
	bool V_2 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		double L_1 = ___1_startDelay;
		AudioClipPlayable_SetStartDelayInternal_m1A3816547BF61B7448654300EF078D464A5618CD(L_0, L_1, NULL);
		double L_2 = ___2_duration;
		V_0 = (bool)((((double)L_2) > ((double)(0.0)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0066;
		}
	}
	{
		double L_4 = ___1_startDelay;
		double L_5 = ___2_duration;
		V_1 = ((double)il2cpp_codegen_add(L_4, L_5));
		double L_6 = V_1;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_7 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		double L_8;
		L_8 = PlayableHandle_GetDuration_mE3CF9C12CA5A186288A7F1981A92F043100E02A7(L_7, NULL);
		V_2 = (bool)((((int32_t)((!(((double)L_6) >= ((double)L_8)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_10 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_SetDone_mE04197A8D1657035DC6C70AF7291715557A9FB49(L_10, (bool)1, NULL);
	}

IL_0045:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_11 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		double L_12 = ___2_duration;
		double L_13 = ___0_startTime;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_SetDuration_m4E07F9F3A90B2F3CE10325D9F405993F03CCA08B(L_11, ((double)il2cpp_codegen_add(L_12, L_13)), NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_14 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		double L_15 = ___1_startDelay;
		double L_16 = ___2_duration;
		AudioClipPlayable_SetPauseDelayInternal_m803360EBD0BB692C31D31D620AAB9C8D0CD7A9D1(L_14, ((double)il2cpp_codegen_add(L_15, L_16)), NULL);
		goto IL_009f;
	}

IL_0066:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_17 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_SetDone_mE04197A8D1657035DC6C70AF7291715557A9FB49(L_17, (bool)1, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_18 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		PlayableHandle_SetDuration_m4E07F9F3A90B2F3CE10325D9F405993F03CCA08B(L_18, (1.7976931348623157E+308), NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_19 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		AudioClipPlayable_SetPauseDelayInternal_m803360EBD0BB692C31D31D620AAB9C8D0CD7A9D1(L_19, (0.0), NULL);
	}

IL_009f:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_20 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		double L_21 = ___0_startTime;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_SetTime_m6D255AB6779F3DC278813F1C016FE4EBC9F4B1E4(L_20, L_21, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_22 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		PlayableHandle_Play_m1EF8E1105EB6A4A9B0D6638A57CDCBCEEDC6FB2D(L_22, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AudioClipPlayable_Seek_m2AB327B535C677793BBADEA634B7AAC9442B1391_AdjustorThunk (RuntimeObject* __this, double ___0_startTime, double ___1_startDelay, double ___2_duration, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	AudioClipPlayable_Seek_m2AB327B535C677793BBADEA634B7AAC9442B1391(_thisAdjusted, ___0_startTime, ___1_startDelay, ___2_duration, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClipPlayable_GetClipInternal_m0B594FA02A34EEFC4CAB34B778FF10CD538EDF71 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, const RuntimeMethod* method) 
{
	typedef AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* (*AudioClipPlayable_GetClipInternal_m0B594FA02A34EEFC4CAB34B778FF10CD538EDF71_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static AudioClipPlayable_GetClipInternal_m0B594FA02A34EEFC4CAB34B778FF10CD538EDF71_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_GetClipInternal_m0B594FA02A34EEFC4CAB34B778FF10CD538EDF71_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::GetClipInternal(UnityEngine.Playables.PlayableHandle&)");
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* icallRetVal = _il2cpp_icall_func(___0_hdl);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetClipInternal_mACA6B51D98C05266D1D0D05D86B5C675006C2DDD (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_clip, const RuntimeMethod* method) 
{
	typedef void (*AudioClipPlayable_SetClipInternal_mACA6B51D98C05266D1D0D05D86B5C675006C2DDD_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClipPlayable_SetClipInternal_mACA6B51D98C05266D1D0D05D86B5C675006C2DDD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_SetClipInternal_mACA6B51D98C05266D1D0D05D86B5C675006C2DDD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::SetClipInternal(UnityEngine.Playables.PlayableHandle&,UnityEngine.AudioClip)");
	_il2cpp_icall_func(___0_hdl, ___1_clip);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_GetLoopedInternal_m337CC96BD2CFEFCDB78AE704FD99AF8ED73B34FA (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, const RuntimeMethod* method) 
{
	typedef bool (*AudioClipPlayable_GetLoopedInternal_m337CC96BD2CFEFCDB78AE704FD99AF8ED73B34FA_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static AudioClipPlayable_GetLoopedInternal_m337CC96BD2CFEFCDB78AE704FD99AF8ED73B34FA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_GetLoopedInternal_m337CC96BD2CFEFCDB78AE704FD99AF8ED73B34FA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::GetLoopedInternal(UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___0_hdl);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetLoopedInternal_mB8FA25F4121BEA4638075D388C2EA66011236341 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, bool ___1_looped, const RuntimeMethod* method) 
{
	typedef void (*AudioClipPlayable_SetLoopedInternal_mB8FA25F4121BEA4638075D388C2EA66011236341_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, bool);
	static AudioClipPlayable_SetLoopedInternal_mB8FA25F4121BEA4638075D388C2EA66011236341_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_SetLoopedInternal_mB8FA25F4121BEA4638075D388C2EA66011236341_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::SetLoopedInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)");
	_il2cpp_icall_func(___0_hdl, ___1_looped);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClipPlayable_GetVolumeInternal_m5ED28FAFC2B3077BAE2CA8F90612C9932C272FCE (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, const RuntimeMethod* method) 
{
	typedef float (*AudioClipPlayable_GetVolumeInternal_m5ED28FAFC2B3077BAE2CA8F90612C9932C272FCE_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static AudioClipPlayable_GetVolumeInternal_m5ED28FAFC2B3077BAE2CA8F90612C9932C272FCE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_GetVolumeInternal_m5ED28FAFC2B3077BAE2CA8F90612C9932C272FCE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::GetVolumeInternal(UnityEngine.Playables.PlayableHandle&)");
	float icallRetVal = _il2cpp_icall_func(___0_hdl);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetVolumeInternal_m71EFEE49486AACBE4F9C936F4898448AB071B55F (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, float ___1_volume, const RuntimeMethod* method) 
{
	typedef void (*AudioClipPlayable_SetVolumeInternal_m71EFEE49486AACBE4F9C936F4898448AB071B55F_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, float);
	static AudioClipPlayable_SetVolumeInternal_m71EFEE49486AACBE4F9C936F4898448AB071B55F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_SetVolumeInternal_m71EFEE49486AACBE4F9C936F4898448AB071B55F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::SetVolumeInternal(UnityEngine.Playables.PlayableHandle&,System.Single)");
	_il2cpp_icall_func(___0_hdl, ___1_volume);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClipPlayable_GetStereoPanInternal_mCC24F11786E25F26876873CCF6CE4B1368608244 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, const RuntimeMethod* method) 
{
	typedef float (*AudioClipPlayable_GetStereoPanInternal_mCC24F11786E25F26876873CCF6CE4B1368608244_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static AudioClipPlayable_GetStereoPanInternal_mCC24F11786E25F26876873CCF6CE4B1368608244_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_GetStereoPanInternal_mCC24F11786E25F26876873CCF6CE4B1368608244_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::GetStereoPanInternal(UnityEngine.Playables.PlayableHandle&)");
	float icallRetVal = _il2cpp_icall_func(___0_hdl);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetStereoPanInternal_m206A1B777709E25F42C9EF0BEAF3A84D622D4A90 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, float ___1_stereoPan, const RuntimeMethod* method) 
{
	typedef void (*AudioClipPlayable_SetStereoPanInternal_m206A1B777709E25F42C9EF0BEAF3A84D622D4A90_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, float);
	static AudioClipPlayable_SetStereoPanInternal_m206A1B777709E25F42C9EF0BEAF3A84D622D4A90_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_SetStereoPanInternal_m206A1B777709E25F42C9EF0BEAF3A84D622D4A90_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::SetStereoPanInternal(UnityEngine.Playables.PlayableHandle&,System.Single)");
	_il2cpp_icall_func(___0_hdl, ___1_stereoPan);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClipPlayable_GetSpatialBlendInternal_m588B81B3B008D87A79B2DA76494BF359B2AA8125 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, const RuntimeMethod* method) 
{
	typedef float (*AudioClipPlayable_GetSpatialBlendInternal_m588B81B3B008D87A79B2DA76494BF359B2AA8125_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static AudioClipPlayable_GetSpatialBlendInternal_m588B81B3B008D87A79B2DA76494BF359B2AA8125_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_GetSpatialBlendInternal_m588B81B3B008D87A79B2DA76494BF359B2AA8125_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::GetSpatialBlendInternal(UnityEngine.Playables.PlayableHandle&)");
	float icallRetVal = _il2cpp_icall_func(___0_hdl);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetSpatialBlendInternal_mBAE4A56ACEE90D4732C5D2C5D2D721C65B3DD55B (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, float ___1_spatialBlend, const RuntimeMethod* method) 
{
	typedef void (*AudioClipPlayable_SetSpatialBlendInternal_mBAE4A56ACEE90D4732C5D2C5D2D721C65B3DD55B_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, float);
	static AudioClipPlayable_SetSpatialBlendInternal_mBAE4A56ACEE90D4732C5D2C5D2D721C65B3DD55B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_SetSpatialBlendInternal_mBAE4A56ACEE90D4732C5D2C5D2D721C65B3DD55B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::SetSpatialBlendInternal(UnityEngine.Playables.PlayableHandle&,System.Single)");
	_il2cpp_icall_func(___0_hdl, ___1_spatialBlend);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_GetIsChannelPlayingInternal_mE3D91DB6102F7D166F4D495E22330B98A4B14721 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, const RuntimeMethod* method) 
{
	typedef bool (*AudioClipPlayable_GetIsChannelPlayingInternal_mE3D91DB6102F7D166F4D495E22330B98A4B14721_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static AudioClipPlayable_GetIsChannelPlayingInternal_mE3D91DB6102F7D166F4D495E22330B98A4B14721_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_GetIsChannelPlayingInternal_mE3D91DB6102F7D166F4D495E22330B98A4B14721_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::GetIsChannelPlayingInternal(UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___0_hdl);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AudioClipPlayable_GetStartDelayInternal_m45F9633CF2D28DD344D68231443AEF11CA3B12F6 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, const RuntimeMethod* method) 
{
	typedef double (*AudioClipPlayable_GetStartDelayInternal_m45F9633CF2D28DD344D68231443AEF11CA3B12F6_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static AudioClipPlayable_GetStartDelayInternal_m45F9633CF2D28DD344D68231443AEF11CA3B12F6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_GetStartDelayInternal_m45F9633CF2D28DD344D68231443AEF11CA3B12F6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::GetStartDelayInternal(UnityEngine.Playables.PlayableHandle&)");
	double icallRetVal = _il2cpp_icall_func(___0_hdl);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetStartDelayInternal_m1A3816547BF61B7448654300EF078D464A5618CD (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, double ___1_delay, const RuntimeMethod* method) 
{
	typedef void (*AudioClipPlayable_SetStartDelayInternal_m1A3816547BF61B7448654300EF078D464A5618CD_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, double);
	static AudioClipPlayable_SetStartDelayInternal_m1A3816547BF61B7448654300EF078D464A5618CD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_SetStartDelayInternal_m1A3816547BF61B7448654300EF078D464A5618CD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::SetStartDelayInternal(UnityEngine.Playables.PlayableHandle&,System.Double)");
	_il2cpp_icall_func(___0_hdl, ___1_delay);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AudioClipPlayable_GetPauseDelayInternal_m0993546EFBB076183302FF7902815057D7A5A399 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, const RuntimeMethod* method) 
{
	typedef double (*AudioClipPlayable_GetPauseDelayInternal_m0993546EFBB076183302FF7902815057D7A5A399_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static AudioClipPlayable_GetPauseDelayInternal_m0993546EFBB076183302FF7902815057D7A5A399_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_GetPauseDelayInternal_m0993546EFBB076183302FF7902815057D7A5A399_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::GetPauseDelayInternal(UnityEngine.Playables.PlayableHandle&)");
	double icallRetVal = _il2cpp_icall_func(___0_hdl);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetPauseDelayInternal_m803360EBD0BB692C31D31D620AAB9C8D0CD7A9D1 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, double ___1_delay, const RuntimeMethod* method) 
{
	typedef void (*AudioClipPlayable_SetPauseDelayInternal_m803360EBD0BB692C31D31D620AAB9C8D0CD7A9D1_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, double);
	static AudioClipPlayable_SetPauseDelayInternal_m803360EBD0BB692C31D31D620AAB9C8D0CD7A9D1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_SetPauseDelayInternal_m803360EBD0BB692C31D31D620AAB9C8D0CD7A9D1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::SetPauseDelayInternal(UnityEngine.Playables.PlayableHandle&,System.Double)");
	_il2cpp_icall_func(___0_hdl, ___1_delay);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_InternalCreateAudioClipPlayable_mBDAA54F35207F6C62F87CAE268732072C7287616 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0_graph, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_clip, bool ___2_looping, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___3_handle, const RuntimeMethod* method) 
{
	typedef bool (*AudioClipPlayable_InternalCreateAudioClipPlayable_mBDAA54F35207F6C62F87CAE268732072C7287616_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, bool, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static AudioClipPlayable_InternalCreateAudioClipPlayable_mBDAA54F35207F6C62F87CAE268732072C7287616_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_InternalCreateAudioClipPlayable_mBDAA54F35207F6C62F87CAE268732072C7287616_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::InternalCreateAudioClipPlayable(UnityEngine.Playables.PlayableGraph&,UnityEngine.AudioClip,System.Boolean,UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___0_graph, ___1_clip, ___2_looping, ___3_handle);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_ValidateType_mA9D284B70B2086E4CA09CEC913D449F3195C891E (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, const RuntimeMethod* method) 
{
	typedef bool (*AudioClipPlayable_ValidateType_mA9D284B70B2086E4CA09CEC913D449F3195C891E_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static AudioClipPlayable_ValidateType_mA9D284B70B2086E4CA09CEC913D449F3195C891E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_ValidateType_mA9D284B70B2086E4CA09CEC913D449F3195C891E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::ValidateType(UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___0_hdl);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixer__ctor_m8BB9BFC96DB436EE4CECE0BECECD5DFC7559058D (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* AudioMixer_get_outputAudioMixerGroup_m0B5B993AB7FD678B15276E06B226B06B709C560C (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, const RuntimeMethod* method) 
{
	typedef AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* (*AudioMixer_get_outputAudioMixerGroup_m0B5B993AB7FD678B15276E06B226B06B709C560C_ftn) (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04*);
	static AudioMixer_get_outputAudioMixerGroup_m0B5B993AB7FD678B15276E06B226B06B709C560C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixer_get_outputAudioMixerGroup_m0B5B993AB7FD678B15276E06B226B06B709C560C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixer::get_outputAudioMixerGroup()");
	AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixer_set_outputAudioMixerGroup_m7362B6469DCAFB7D1A65BC20BDCF42AE76F90306 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioMixer_set_outputAudioMixerGroup_m7362B6469DCAFB7D1A65BC20BDCF42AE76F90306_ftn) (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04*, AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311*);
	static AudioMixer_set_outputAudioMixerGroup_m7362B6469DCAFB7D1A65BC20BDCF42AE76F90306_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixer_set_outputAudioMixerGroup_m7362B6469DCAFB7D1A65BC20BDCF42AE76F90306_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixer::set_outputAudioMixerGroup(UnityEngine.Audio.AudioMixerGroup)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* AudioMixer_FindSnapshot_m289C3F55A58E9DE4EEE456AEFE444ECA4D3496C5 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* (*AudioMixer_FindSnapshot_m289C3F55A58E9DE4EEE456AEFE444ECA4D3496C5_ftn) (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04*, String_t*);
	static AudioMixer_FindSnapshot_m289C3F55A58E9DE4EEE456AEFE444ECA4D3496C5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixer_FindSnapshot_m289C3F55A58E9DE4EEE456AEFE444ECA4D3496C5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixer::FindSnapshot(System.String)");
	AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* icallRetVal = _il2cpp_icall_func(__this, ___0_name);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixerGroupU5BU5D_t8FDE37A00A7E874EB75184A6133A160137D0532B* AudioMixer_FindMatchingGroups_m4541BE177FFA0225AF159156ABB5FE3F5F6CF2CF (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, String_t* ___0_subPath, const RuntimeMethod* method) 
{
	typedef AudioMixerGroupU5BU5D_t8FDE37A00A7E874EB75184A6133A160137D0532B* (*AudioMixer_FindMatchingGroups_m4541BE177FFA0225AF159156ABB5FE3F5F6CF2CF_ftn) (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04*, String_t*);
	static AudioMixer_FindMatchingGroups_m4541BE177FFA0225AF159156ABB5FE3F5F6CF2CF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixer_FindMatchingGroups_m4541BE177FFA0225AF159156ABB5FE3F5F6CF2CF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixer::FindMatchingGroups(System.String)");
	AudioMixerGroupU5BU5D_t8FDE37A00A7E874EB75184A6133A160137D0532B* icallRetVal = _il2cpp_icall_func(__this, ___0_subPath);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixer_TransitionToSnapshot_m308E8D50A4573EFDD381ED7DEC23162F8CD0EB5D (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* ___0_snapshot, float ___1_timeToReach, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* L_0 = ___0_snapshot;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9EAFE4F84FECC3407E28F6C22DC663D4A31C78D0)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioMixer_TransitionToSnapshot_m308E8D50A4573EFDD381ED7DEC23162F8CD0EB5D_RuntimeMethod_var)));
	}

IL_0027:
	{
		AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* L_6 = ___0_snapshot;
		NullCheck(L_6);
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_7;
		L_7 = AudioMixerSnapshot_get_audioMixer_mCC13199F7F9EBB2C5510DFA750A501747229CBF5(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, __this, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC01DE08865A1C5D9A0B7F1023D8CD55C8685904B)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* L_13 = ___0_snapshot;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_13, NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_12;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB1FAE4F904170535BC9DC23FF347B1D0603313EA)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		String_t* L_17;
		L_17 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_16;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)));
		String_t* L_19;
		L_19 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_18, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioMixer_TransitionToSnapshot_m308E8D50A4573EFDD381ED7DEC23162F8CD0EB5D_RuntimeMethod_var)));
	}

IL_0072:
	{
		AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* L_21 = ___0_snapshot;
		float L_22 = ___1_timeToReach;
		AudioMixer_TransitionToSnapshotInternal_m9D07330A3EF997CC4BB165829D8D2AD6187A8DD0(__this, L_21, L_22, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixer_TransitionToSnapshotInternal_m9D07330A3EF997CC4BB165829D8D2AD6187A8DD0 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* ___0_snapshot, float ___1_timeToReach, const RuntimeMethod* method) 
{
	typedef void (*AudioMixer_TransitionToSnapshotInternal_m9D07330A3EF997CC4BB165829D8D2AD6187A8DD0_ftn) (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04*, AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781*, float);
	static AudioMixer_TransitionToSnapshotInternal_m9D07330A3EF997CC4BB165829D8D2AD6187A8DD0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixer_TransitionToSnapshotInternal_m9D07330A3EF997CC4BB165829D8D2AD6187A8DD0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixer::TransitionToSnapshotInternal(UnityEngine.Audio.AudioMixerSnapshot,System.Single)");
	_il2cpp_icall_func(__this, ___0_snapshot, ___1_timeToReach);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixer_TransitionToSnapshots_m87D4E352A2696F6BF945EB1A519888A9B38BF7C6 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, AudioMixerSnapshotU5BU5D_tD41A94680B8A241063054F1931BDDC8B997D8382* ___0_snapshots, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_weights, float ___2_timeToReach, const RuntimeMethod* method) 
{
	typedef void (*AudioMixer_TransitionToSnapshots_m87D4E352A2696F6BF945EB1A519888A9B38BF7C6_ftn) (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04*, AudioMixerSnapshotU5BU5D_tD41A94680B8A241063054F1931BDDC8B997D8382*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, float);
	static AudioMixer_TransitionToSnapshots_m87D4E352A2696F6BF945EB1A519888A9B38BF7C6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixer_TransitionToSnapshots_m87D4E352A2696F6BF945EB1A519888A9B38BF7C6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixer::TransitionToSnapshots(UnityEngine.Audio.AudioMixerSnapshot[],System.Single[],System.Single)");
	_il2cpp_icall_func(__this, ___0_snapshots, ___1_weights, ___2_timeToReach);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioMixer_get_updateMode_mBA8246F84EE1B3F135D4E76B91128DB295CFE5F9 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioMixer_get_updateMode_mBA8246F84EE1B3F135D4E76B91128DB295CFE5F9_ftn) (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04*);
	static AudioMixer_get_updateMode_mBA8246F84EE1B3F135D4E76B91128DB295CFE5F9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixer_get_updateMode_mBA8246F84EE1B3F135D4E76B91128DB295CFE5F9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixer::get_updateMode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixer_set_updateMode_mA823193DD10F7737E036013BB63CEC2ED65E184F (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioMixer_set_updateMode_mA823193DD10F7737E036013BB63CEC2ED65E184F_ftn) (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04*, int32_t);
	static AudioMixer_set_updateMode_mA823193DD10F7737E036013BB63CEC2ED65E184F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixer_set_updateMode_mA823193DD10F7737E036013BB63CEC2ED65E184F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixer::set_updateMode(UnityEngine.Audio.AudioMixerUpdateMode)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) 
{
	typedef bool (*AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335_ftn) (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04*, String_t*, float);
	static AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixer::SetFloat(System.String,System.Single)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_name, ___1_value);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_ClearFloat_mD6FD7AE99760D83DA6ECBCCF9A0F07F10C12E665 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef bool (*AudioMixer_ClearFloat_mD6FD7AE99760D83DA6ECBCCF9A0F07F10C12E665_ftn) (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04*, String_t*);
	static AudioMixer_ClearFloat_mD6FD7AE99760D83DA6ECBCCF9A0F07F10C12E665_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixer_ClearFloat_mD6FD7AE99760D83DA6ECBCCF9A0F07F10C12E665_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixer::ClearFloat(System.String)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_name);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_GetFloat_mAED8D277AD30D0346292555CBF81D8961117AEC9 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, String_t* ___0_name, float* ___1_value, const RuntimeMethod* method) 
{
	typedef bool (*AudioMixer_GetFloat_mAED8D277AD30D0346292555CBF81D8961117AEC9_ftn) (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04*, String_t*, float*);
	static AudioMixer_GetFloat_mAED8D277AD30D0346292555CBF81D8961117AEC9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixer_GetFloat_mAED8D277AD30D0346292555CBF81D8961117AEC9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixer::GetFloat(System.String,System.Single&)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_name, ___1_value);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioMixer_GetAbsoluteAudibilityFromGroup_m109E7C4D1ECABCB80EB5F7C1952ACDD77986772D (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* ___0_group, const RuntimeMethod* method) 
{
	typedef float (*AudioMixer_GetAbsoluteAudibilityFromGroup_m109E7C4D1ECABCB80EB5F7C1952ACDD77986772D_ftn) (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04*, AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311*);
	static AudioMixer_GetAbsoluteAudibilityFromGroup_m109E7C4D1ECABCB80EB5F7C1952ACDD77986772D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixer_GetAbsoluteAudibilityFromGroup_m109E7C4D1ECABCB80EB5F7C1952ACDD77986772D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixer::GetAbsoluteAudibilityFromGroup(UnityEngine.Audio.AudioMixerGroup)");
	float icallRetVal = _il2cpp_icall_func(__this, ___0_group);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_HasValidSnapshots_m6FE4F3C6CE960C2366C2F2DF7957A4125A658A6D (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, const RuntimeMethod* method) 
{
	typedef bool (*AudioMixer_HasValidSnapshots_m6FE4F3C6CE960C2366C2F2DF7957A4125A658A6D_ftn) (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04*);
	static AudioMixer_HasValidSnapshots_m6FE4F3C6CE960C2366C2F2DF7957A4125A658A6D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixer_HasValidSnapshots_m6FE4F3C6CE960C2366C2F2DF7957A4125A658A6D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixer::HasValidSnapshots()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixerGroup__ctor_m0D3A84EDAC9B01AEC0B07AFB1F5B1807F74B9CB8 (AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* AudioMixerGroup_get_audioMixer_mFDEDBF17C3B84C6B777D2BF75CF40EECF4C889E4 (AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* __this, const RuntimeMethod* method) 
{
	typedef AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* (*AudioMixerGroup_get_audioMixer_mFDEDBF17C3B84C6B777D2BF75CF40EECF4C889E4_ftn) (AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311*);
	static AudioMixerGroup_get_audioMixer_mFDEDBF17C3B84C6B777D2BF75CF40EECF4C889E4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixerGroup_get_audioMixer_mFDEDBF17C3B84C6B777D2BF75CF40EECF4C889E4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixerGroup::get_audioMixer()");
	AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C AudioMixerPlayable_Create_m323B71EBE332DAF5B2632BAB657BEA33F5870E71 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, int32_t ___1_inputCount, bool ___2_normalizeInputVolumes, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___0_graph;
		int32_t L_1 = ___1_inputCount;
		bool L_2 = ___2_normalizeInputVolumes;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_3;
		L_3 = AudioMixerPlayable_CreateHandle_mCA2A6EF1CC490A8E59C8EE2020D3304D66B96852(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_4 = V_0;
		AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C L_5;
		memset((&L_5), 0, sizeof(L_5));
		AudioMixerPlayable__ctor_m2CDDE33FCE0B3F7D9EB482D76515FBF771285F47((&L_5), L_4, NULL);
		V_1 = L_5;
		goto IL_0013;
	}

IL_0013:
	{
		AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_CreateHandle_mCA2A6EF1CC490A8E59C8EE2020D3304D66B96852 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, int32_t ___1_inputCount, bool ___2_normalizeInputVolumes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		V_0 = L_0;
		bool L_1 = ___2_normalizeInputVolumes;
		bool L_2;
		L_2 = AudioMixerPlayable_CreateAudioMixerPlayableInternal_mB91DD585A6A2903F01F49719CA0045C8727B5AA9((&___0_graph), L_1, (&V_0), NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_4;
		L_4 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		V_2 = L_4;
		goto IL_002d;
	}

IL_0020:
	{
		int32_t L_5 = ___1_inputCount;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_SetInputCount_m6067CD3616C428F777903FCBFD789060A2185DEE((&V_0), L_5, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_6 = V_0;
		V_2 = L_6;
		goto IL_002d;
	}

IL_002d:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_7 = V_2;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixerPlayable__ctor_m2CDDE33FCE0B3F7D9EB482D76515FBF771285F47 (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C_m28F89BE3D7CCE69B28258CC5B1C7D4E814F48CAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C_m28F89BE3D7CCE69B28258CC5B1C7D4E814F48CAB((&___0_handle), PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C_m28F89BE3D7CCE69B28258CC5B1C7D4E814F48CAB_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC51F74D9F7385459B7E90865166418A267D9A62B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioMixerPlayable__ctor_m2CDDE33FCE0B3F7D9EB482D76515FBF771285F47_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___0_handle;
		__this->___m_Handle = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AudioMixerPlayable__ctor_m2CDDE33FCE0B3F7D9EB482D76515FBF771285F47_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C*>(__this + _offset);
	AudioMixerPlayable__ctor_m2CDDE33FCE0B3F7D9EB482D76515FBF771285F47(_thisAdjusted, ___0_handle, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F AudioMixerPlayable_op_Implicit_m479542341C4CAEE00B4F7DD0B68E39F8E4388974 (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___0_playable, const RuntimeMethod* method) 
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD((&___0_playable), NULL);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4((&L_1), L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C AudioMixerPlayable_op_Explicit_m5BFAA52FB8DF95288F7FD2DBEB0907687F98CD0B (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8((&___0_playable), NULL);
		AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C L_1;
		memset((&L_1), 0, sizeof(L_1));
		AudioMixerPlayable__ctor_m2CDDE33FCE0B3F7D9EB482D76515FBF771285F47((&L_1), L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57 (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57_AdjustorThunk (RuntimeObject* __this, AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___0_other, const RuntimeMethod* method)
{
	AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C*>(__this + _offset);
	bool _returnValue;
	_returnValue = AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_CreateAudioMixerPlayableInternal_mB91DD585A6A2903F01F49719CA0045C8727B5AA9 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0_graph, bool ___1_normalizeInputVolumes, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___2_handle, const RuntimeMethod* method) 
{
	typedef bool (*AudioMixerPlayable_CreateAudioMixerPlayableInternal_mB91DD585A6A2903F01F49719CA0045C8727B5AA9_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, bool, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static AudioMixerPlayable_CreateAudioMixerPlayableInternal_mB91DD585A6A2903F01F49719CA0045C8727B5AA9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixerPlayable_CreateAudioMixerPlayableInternal_mB91DD585A6A2903F01F49719CA0045C8727B5AA9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixerPlayable::CreateAudioMixerPlayableInternal(UnityEngine.Playables.PlayableGraph&,System.Boolean,UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___0_graph, ___1_normalizeInputVolumes, ___2_handle);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixerSnapshot__ctor_m68E824AB2B201928EABE2FFCDDC401EE905D2D06 (AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* AudioMixerSnapshot_get_audioMixer_mCC13199F7F9EBB2C5510DFA750A501747229CBF5 (AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* __this, const RuntimeMethod* method) 
{
	typedef AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* (*AudioMixerSnapshot_get_audioMixer_mCC13199F7F9EBB2C5510DFA750A501747229CBF5_ftn) (AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781*);
	static AudioMixerSnapshot_get_audioMixer_mCC13199F7F9EBB2C5510DFA750A501747229CBF5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixerSnapshot_get_audioMixer_mCC13199F7F9EBB2C5510DFA750A501747229CBF5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixerSnapshot::get_audioMixer()");
	AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixerSnapshot_TransitionTo_mABDDC418B89323A930A900E55336B5989CFD4AC8 (AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* __this, float ___0_timeToReach, const RuntimeMethod* method) 
{
	{
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_0;
		L_0 = AudioMixerSnapshot_get_audioMixer_mCC13199F7F9EBB2C5510DFA750A501747229CBF5(__this, NULL);
		float L_1 = ___0_timeToReach;
		NullCheck(L_0);
		AudioMixer_TransitionToSnapshot_m308E8D50A4573EFDD381ED7DEC23162F8CD0EB5D(L_0, __this, L_1, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 AudioPlayableBinding_Create_m4E506BD0649ADAB9D1C2D924D2767FBB0C63DACB (String_t* ___0_name, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioPlayableBinding_CreateAudioOutput_m2BE0EDC74ADA082B5CD6247ACD78EFCBDB85ADC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_name;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = ___1_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* L_4 = (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509*)il2cpp_codegen_object_new(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509_il2cpp_TypeInfo_var);
		CreateOutputMethod__ctor_m5A339017CD8ECB0140EB936FD2A5B589B20166B4(L_4, NULL, (intptr_t)((void*)AudioPlayableBinding_CreateAudioOutput_m2BE0EDC74ADA082B5CD6247ACD78EFCBDB85ADC3_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 L_5;
		L_5 = PlayableBinding_CreateInternal_m63C8C98E659B52725E0373019ECFCEC22167A47A(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0021;
	}

IL_0021:
	{
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 AudioPlayableBinding_CreateAudioOutput_m2BE0EDC74ADA082B5CD6247ACD78EFCBDB85ADC3 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method) 
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___0_graph;
		String_t* L_1 = ___1_name;
		AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 L_2;
		L_2 = AudioPlayableOutput_Create_m90DF38B28813932D4246094FD4DB6105572619D2(L_0, L_1, (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*)NULL, NULL);
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_3;
		L_3 = AudioPlayableOutput_op_Implicit_mD2D35763126BDE08E10CA74D8E8C49988477F428(L_2, NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioPlayableGraphExtensions_InternalCreateAudioOutput_m5EF8B18878AFFE0B462E615C8243C2433A3F5E78 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0_graph, String_t* ___1_name, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___2_handle, const RuntimeMethod* method) 
{
	typedef bool (*AudioPlayableGraphExtensions_InternalCreateAudioOutput_m5EF8B18878AFFE0B462E615C8243C2433A3F5E78_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, String_t*, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*);
	static AudioPlayableGraphExtensions_InternalCreateAudioOutput_m5EF8B18878AFFE0B462E615C8243C2433A3F5E78_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioPlayableGraphExtensions_InternalCreateAudioOutput_m5EF8B18878AFFE0B462E615C8243C2433A3F5E78_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioPlayableGraphExtensions::InternalCreateAudioOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___0_graph, ___1_name, ___2_handle);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 AudioPlayableOutput_Create_m90DF38B28813932D4246094FD4DB6105572619D2 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___2_target, const RuntimeMethod* method) 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		String_t* L_0 = ___1_name;
		bool L_1;
		L_1 = AudioPlayableGraphExtensions_InternalCreateAudioOutput_m5EF8B18878AFFE0B462E615C8243C2433A3F5E78((&___0_graph), L_0, (&V_0), NULL);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 L_3;
		L_3 = AudioPlayableOutput_get_Null_m8404386CE6506C8C0574B74023EB1BC17A45F205(NULL);
		V_3 = L_3;
		goto IL_002f;
	}

IL_001a:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_4 = V_0;
		AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409((&V_1), L_4, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = ___2_target;
		AudioPlayableOutput_SetTarget_m34EE86E5C2833F12993681ABE5AC85961836DE04((&V_1), L_5, NULL);
		AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 L_6 = V_1;
		V_3 = L_6;
		goto IL_002f;
	}

IL_002f:
	{
		AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 L_7 = V_3;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PlayableOutputHandle_IsValid_mA94C343D72B72C3B1C7636C93A8DB5EA71691312((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6((&___0_handle), PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD7EA9435CDE6F5B13E32FE646D502752ECCD43DD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_5 = ___0_handle;
		__this->___m_Handle = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409_AdjustorThunk (RuntimeObject* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method)
{
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20*>(__this + _offset);
	AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409(_thisAdjusted, ___0_handle, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 AudioPlayableOutput_get_Null_m8404386CE6506C8C0574B74023EB1BC17A45F205 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = PlayableOutputHandle_get_Null_m656E8D2549FA031DA8A2EA5B39CE3B33D75B69F8(NULL);
		AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409((&L_1), L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AudioPlayableOutput_GetHandle_m55153D572F8FB9BCFF3843402A20280273B934AE (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, const RuntimeMethod* method) 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = __this->___m_Handle;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AudioPlayableOutput_GetHandle_m55153D572F8FB9BCFF3843402A20280273B934AE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20*>(__this + _offset);
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 _returnValue;
	_returnValue = AudioPlayableOutput_GetHandle_m55153D572F8FB9BCFF3843402A20280273B934AE(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 AudioPlayableOutput_op_Implicit_mD2D35763126BDE08E10CA74D8E8C49988477F428 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 ___0_output, const RuntimeMethod* method) 
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = AudioPlayableOutput_GetHandle_m55153D572F8FB9BCFF3843402A20280273B934AE((&___0_output), NULL);
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_1;
		memset((&L_1), 0, sizeof(L_1));
		PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747((&L_1), L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 AudioPlayableOutput_op_Explicit_mC51D8736040715BAA8AC5FA22B6E89F9CDBF25C1 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___0_output, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF((&___0_output), NULL);
		AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409((&L_1), L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* AudioPlayableOutput_GetTarget_m2258506791A9E370329AFD2D4FE9FD7CD2D2DB48 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, const RuntimeMethod* method) 
{
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* V_0 = NULL;
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* L_0 = (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)(&__this->___m_Handle);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = AudioPlayableOutput_InternalGetTarget_m34CC5798C297222E92D216941F1A98E76BF55F47(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* AudioPlayableOutput_GetTarget_m2258506791A9E370329AFD2D4FE9FD7CD2D2DB48_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20*>(__this + _offset);
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* _returnValue;
	_returnValue = AudioPlayableOutput_GetTarget_m2258506791A9E370329AFD2D4FE9FD7CD2D2DB48(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_SetTarget_m34EE86E5C2833F12993681ABE5AC85961836DE04 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_value, const RuntimeMethod* method) 
{
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* L_0 = (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)(&__this->___m_Handle);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = ___0_value;
		AudioPlayableOutput_InternalSetTarget_m3A9912A00BC052FCEDEBB5EB75DCBE5B2B9DA86E(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AudioPlayableOutput_SetTarget_m34EE86E5C2833F12993681ABE5AC85961836DE04_AdjustorThunk (RuntimeObject* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_value, const RuntimeMethod* method)
{
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20*>(__this + _offset);
	AudioPlayableOutput_SetTarget_m34EE86E5C2833F12993681ABE5AC85961836DE04(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioPlayableOutput_GetEvaluateOnSeek_m23EF84B9C518CDB97E68214E2A2BD89A1FCD6F6E (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* L_0 = (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)(&__this->___m_Handle);
		bool L_1;
		L_1 = AudioPlayableOutput_InternalGetEvaluateOnSeek_m13F0BE232D32E1C4F6982CC22A386ACB3741560A(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool AudioPlayableOutput_GetEvaluateOnSeek_m23EF84B9C518CDB97E68214E2A2BD89A1FCD6F6E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20*>(__this + _offset);
	bool _returnValue;
	_returnValue = AudioPlayableOutput_GetEvaluateOnSeek_m23EF84B9C518CDB97E68214E2A2BD89A1FCD6F6E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_SetEvaluateOnSeek_mB3266A8A68E94933A82A0C431B7A2E7321929D92 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* L_0 = (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)(&__this->___m_Handle);
		bool L_1 = ___0_value;
		AudioPlayableOutput_InternalSetEvaluateOnSeek_m639F527A20B97D2617898E223B5CDC1DC8548804(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AudioPlayableOutput_SetEvaluateOnSeek_mB3266A8A68E94933A82A0C431B7A2E7321929D92_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20*>(__this + _offset);
	AudioPlayableOutput_SetEvaluateOnSeek_mB3266A8A68E94933A82A0C431B7A2E7321929D92(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* AudioPlayableOutput_InternalGetTarget_m34CC5798C297222E92D216941F1A98E76BF55F47 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_output, const RuntimeMethod* method) 
{
	typedef AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*AudioPlayableOutput_InternalGetTarget_m34CC5798C297222E92D216941F1A98E76BF55F47_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*);
	static AudioPlayableOutput_InternalGetTarget_m34CC5798C297222E92D216941F1A98E76BF55F47_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioPlayableOutput_InternalGetTarget_m34CC5798C297222E92D216941F1A98E76BF55F47_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioPlayableOutput::InternalGetTarget(UnityEngine.Playables.PlayableOutputHandle&)");
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* icallRetVal = _il2cpp_icall_func(___0_output);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_InternalSetTarget_m3A9912A00BC052FCEDEBB5EB75DCBE5B2B9DA86E (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_output, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___1_target, const RuntimeMethod* method) 
{
	typedef void (*AudioPlayableOutput_InternalSetTarget_m3A9912A00BC052FCEDEBB5EB75DCBE5B2B9DA86E_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioPlayableOutput_InternalSetTarget_m3A9912A00BC052FCEDEBB5EB75DCBE5B2B9DA86E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioPlayableOutput_InternalSetTarget_m3A9912A00BC052FCEDEBB5EB75DCBE5B2B9DA86E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.AudioSource)");
	_il2cpp_icall_func(___0_output, ___1_target);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioPlayableOutput_InternalGetEvaluateOnSeek_m13F0BE232D32E1C4F6982CC22A386ACB3741560A (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_output, const RuntimeMethod* method) 
{
	typedef bool (*AudioPlayableOutput_InternalGetEvaluateOnSeek_m13F0BE232D32E1C4F6982CC22A386ACB3741560A_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*);
	static AudioPlayableOutput_InternalGetEvaluateOnSeek_m13F0BE232D32E1C4F6982CC22A386ACB3741560A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioPlayableOutput_InternalGetEvaluateOnSeek_m13F0BE232D32E1C4F6982CC22A386ACB3741560A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioPlayableOutput::InternalGetEvaluateOnSeek(UnityEngine.Playables.PlayableOutputHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___0_output);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_InternalSetEvaluateOnSeek_m639F527A20B97D2617898E223B5CDC1DC8548804 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_output, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioPlayableOutput_InternalSetEvaluateOnSeek_m639F527A20B97D2617898E223B5CDC1DC8548804_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, bool);
	static AudioPlayableOutput_InternalSetEvaluateOnSeek_m639F527A20B97D2617898E223B5CDC1DC8548804_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioPlayableOutput_InternalSetEvaluateOnSeek_m639F527A20B97D2617898E223B5CDC1DC8548804_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioPlayableOutput::InternalSetEvaluateOnSeek(UnityEngine.Playables.PlayableOutputHandle&,System.Boolean)");
	_il2cpp_icall_func(___0_output, ___1_value);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AudioClipExtensionsInternal_Internal_CreateAudioClipSampleProvider_m6203311E8D9D969D6181DA9282898988A6FC7BB1 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_audioClip, uint64_t ___1_start, int64_t ___2_end, bool ___3_loop, bool ___4_allowDrop, bool ___5_loopPointIsStart, const RuntimeMethod* method) 
{
	typedef uint32_t (*AudioClipExtensionsInternal_Internal_CreateAudioClipSampleProvider_m6203311E8D9D969D6181DA9282898988A6FC7BB1_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, uint64_t, int64_t, bool, bool, bool);
	static AudioClipExtensionsInternal_Internal_CreateAudioClipSampleProvider_m6203311E8D9D969D6181DA9282898988A6FC7BB1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipExtensionsInternal_Internal_CreateAudioClipSampleProvider_m6203311E8D9D969D6181DA9282898988A6FC7BB1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioClipExtensionsInternal::Internal_CreateAudioClipSampleProvider(UnityEngine.AudioClip,System.UInt64,System.Int64,System.Boolean,System.Boolean,System.Boolean)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_audioClip, ___1_start, ___2_end, ___3_loop, ___4_allowDrop, ___5_loopPointIsStart);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* AudioSampleProvider_Lookup_mAC9B381D61BBC6504C62B6956FD0CE7BEA989BF7 (uint32_t ___0_providerId, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_ownerObj, uint16_t ___2_trackIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* V_0 = NULL;
	bool V_1 = false;
	AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		uint32_t L_0 = ___0_providerId;
		AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* L_1;
		L_1 = AudioSampleProvider_InternalGetScriptingPtr_mA1A158321BE37492A745702503F4233E234C1D62(L_0, NULL);
		V_0 = L_1;
		AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* L_2 = V_0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		uint32_t L_3 = ___0_providerId;
		bool L_4;
		L_4 = AudioSampleProvider_InternalIsValid_mCBDAABC4B1ED912B8F13D66AA587175BC549A548(L_3, NULL);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* L_6 = V_0;
		V_2 = L_6;
		goto IL_002a;
	}

IL_001f:
	{
		uint32_t L_7 = ___0_providerId;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_8 = ___1_ownerObj;
		uint16_t L_9 = ___2_trackIndex;
		AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* L_10 = (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*)il2cpp_codegen_object_new(AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2_il2cpp_TypeInfo_var);
		AudioSampleProvider__ctor_m83670597E1EBE98AC6468172D464C9129CFCE375(L_10, L_7, L_8, L_9, NULL);
		V_2 = L_10;
		goto IL_002a;
	}

IL_002a:
	{
		AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* AudioSampleProvider_Create_m8C52CB23AEF97E27E69F57440FA3D92650866B03 (uint16_t ___0_channelCount, uint32_t ___1_sampleRate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* V_2 = NULL;
	{
		uint16_t L_0 = ___0_channelCount;
		uint32_t L_1 = ___1_sampleRate;
		uint32_t L_2;
		L_2 = AudioSampleProvider_InternalCreateSampleProvider_m3BD26F837CD7D2ED547A0AE02AC079A72BEE998D(L_0, L_1, NULL);
		V_0 = L_2;
		uint32_t L_3 = V_0;
		bool L_4;
		L_4 = AudioSampleProvider_InternalIsValid_mCBDAABC4B1ED912B8F13D66AA587175BC549A548(L_3, NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001a;
		}
	}
	{
		V_2 = (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*)NULL;
		goto IL_0025;
	}

IL_001a:
	{
		uint32_t L_6 = V_0;
		AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* L_7 = (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*)il2cpp_codegen_object_new(AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2_il2cpp_TypeInfo_var);
		AudioSampleProvider__ctor_m83670597E1EBE98AC6468172D464C9129CFCE375(L_7, L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, (uint16_t)0, NULL);
		V_2 = L_7;
		goto IL_0025;
	}

IL_0025:
	{
		AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* L_8 = V_2;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider__ctor_m83670597E1EBE98AC6468172D464C9129CFCE375 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, uint32_t ___0_providerId, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_ownerObj, uint16_t ___2_trackIdx, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___1_ownerObj;
		AudioSampleProvider_set_owner_mD620FF3D0BC2188F48D2741102385358F0B8E71B_inline(__this, L_0, NULL);
		uint32_t L_1 = ___0_providerId;
		AudioSampleProvider_set_id_mA392A551DD19269C1C8C0134935E6CDAA51831A6_inline(__this, L_1, NULL);
		uint16_t L_2 = ___2_trackIdx;
		AudioSampleProvider_set_trackIndex_mC2EE9E4029DF0362F4EAC7FE4DA24C3BFC9AEBAB_inline(__this, L_2, NULL);
		intptr_t L_3;
		L_3 = AudioSampleProvider_InternalGetConsumeSampleFramesNativeFunctionPtr_m9F24D2DADDF9A36E4E81D16DE1F9C40A3A4FFE89(NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Delegate_t* L_6;
		L_6 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_3, L_5, NULL);
		__this->___m_ConsumeSampleFramesNativeFunction = ((ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE*)CastclassSealed((RuntimeObject*)L_6, ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ConsumeSampleFramesNativeFunction), (void*)((ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE*)CastclassSealed((RuntimeObject*)L_6, ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE_il2cpp_TypeInfo_var)));
		V_0 = (uint16_t)0;
		V_1 = 0;
		uint32_t L_7 = ___0_providerId;
		AudioSampleProvider_InternalGetFormatInfo_m8725A2417CD3304F009AA19328606EF2434FD703(L_7, (&V_0), (&V_1), NULL);
		uint16_t L_8 = V_0;
		AudioSampleProvider_set_channelCount_m32FE390F1DBCEF6483FA2B6DD80A1F7542B29DE5_inline(__this, L_8, NULL);
		uint32_t L_9 = V_1;
		AudioSampleProvider_set_sampleRate_m3F8E715867B01BF4238E9A6D0B5705BFB6CDEFC7_inline(__this, L_9, NULL);
		uint32_t L_10 = ___0_providerId;
		AudioSampleProvider_InternalSetScriptingPtr_m6FE4C028426BB46CC9648F66930324E2A708DEF8(L_10, __this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_Finalize_m21E41F1E30B94174C66C6BF4EE8F415BE773E9DB (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}
		});
		try
		{
			AudioSampleProvider_set_owner_mD620FF3D0BC2188F48D2741102385358F0B8E71B_inline(__this, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			AudioSampleProvider_Dispose_mD4D855AD77CF61F9BDF38BE79564E67BA4627E2A(__this, NULL);
			goto IL_001b;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_Dispose_mD4D855AD77CF61F9BDF38BE79564E67BA4627E2A (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		uint32_t L_0;
		L_0 = AudioSampleProvider_get_id_m54B9861281DA7D0B1BE31B01B4319986E649BAED_inline(__this, NULL);
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		uint32_t L_2;
		L_2 = AudioSampleProvider_get_id_m54B9861281DA7D0B1BE31B01B4319986E649BAED_inline(__this, NULL);
		AudioSampleProvider_InternalSetScriptingPtr_m6FE4C028426BB46CC9648F66930324E2A708DEF8(L_2, (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*)NULL, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = AudioSampleProvider_get_owner_mC8461FD790AEC7BACE00C8A3F1DE4D00E08EF1AC_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		uint32_t L_6;
		L_6 = AudioSampleProvider_get_id_m54B9861281DA7D0B1BE31B01B4319986E649BAED_inline(__this, NULL);
		AudioSampleProvider_InternalRemove_mBC651EF68D78CFB4310E3022002070ED2174BD24(L_6, NULL);
	}

IL_0038:
	{
		AudioSampleProvider_set_id_mA392A551DD19269C1C8C0134935E6CDAA51831A6_inline(__this, 0, NULL);
	}

IL_0041:
	{
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_get_id_m54B9861281DA7D0B1BE31B01B4319986E649BAED (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CidU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_set_id_mA392A551DD19269C1C8C0134935E6CDAA51831A6 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t AudioSampleProvider_get_trackIndex_m6F250872A4CFCFB1806466578BAFB9B0ED4F0BA6 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CtrackIndexU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_set_trackIndex_mC2EE9E4029DF0362F4EAC7FE4DA24C3BFC9AEBAB (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CtrackIndexU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* AudioSampleProvider_get_owner_mC8461FD790AEC7BACE00C8A3F1DE4D00E08EF1AC (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, const RuntimeMethod* method) 
{
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->___U3CownerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_set_owner_mD620FF3D0BC2188F48D2741102385358F0B8E71B (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_value, const RuntimeMethod* method) 
{
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___0_value;
		__this->___U3CownerU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CownerU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSampleProvider_get_valid_m777CC6D57DE2B2DB45C05A89566087C010569C4E (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		uint32_t L_0;
		L_0 = AudioSampleProvider_get_id_m54B9861281DA7D0B1BE31B01B4319986E649BAED_inline(__this, NULL);
		bool L_1;
		L_1 = AudioSampleProvider_InternalIsValid_mCBDAABC4B1ED912B8F13D66AA587175BC549A548(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t AudioSampleProvider_get_channelCount_m2E8B29584D96B878521E64400D6673C59E4A10B7 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CchannelCountU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_set_channelCount_m32FE390F1DBCEF6483FA2B6DD80A1F7542B29DE5 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CchannelCountU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_get_sampleRate_m75960A76B48C4686467E6C82C3A00F84B029BA57 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CsampleRateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_set_sampleRate_m3F8E715867B01BF4238E9A6D0B5705BFB6CDEFC7 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3CsampleRateU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_get_maxSampleFrameCount_m95D4731152161EB84944D54DC7CA3E36912CA53D (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0;
		L_0 = AudioSampleProvider_get_id_m54B9861281DA7D0B1BE31B01B4319986E649BAED_inline(__this, NULL);
		uint32_t L_1;
		L_1 = AudioSampleProvider_InternalGetMaxSampleFrameCount_m33AF5AF071B5354DC657C8521ACD6379094F8A79(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		uint32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_get_availableSampleFrameCount_m535089AFF861FEE5316943F2C521C3417F6F8595 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0;
		L_0 = AudioSampleProvider_get_id_m54B9861281DA7D0B1BE31B01B4319986E649BAED_inline(__this, NULL);
		uint32_t L_1;
		L_1 = AudioSampleProvider_InternalGetAvailableSampleFrameCount_mD9A3A290D03ADB2D14625A2F2DC56D6FFD6D1AA0(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		uint32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_get_freeSampleFrameCount_mD19F0C0EC75728D3A7F25D8622B2C760D19EAD68 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0;
		L_0 = AudioSampleProvider_get_id_m54B9861281DA7D0B1BE31B01B4319986E649BAED_inline(__this, NULL);
		uint32_t L_1;
		L_1 = AudioSampleProvider_InternalGetFreeSampleFrameCount_mF71ABBF38D3686A855500D81EBC91F209C91E989(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		uint32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_get_freeSampleFrameCountLowThreshold_m28080901615175FE3025DA6949C9791E991798D6 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0;
		L_0 = AudioSampleProvider_get_id_m54B9861281DA7D0B1BE31B01B4319986E649BAED_inline(__this, NULL);
		uint32_t L_1;
		L_1 = AudioSampleProvider_InternalGetFreeSampleFrameCountLowThreshold_m011436ED9F51F1BDB79C7D2C418971EB29ED8F6B(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		uint32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_set_freeSampleFrameCountLowThreshold_m3C7E8B327BA4894ECB1A010674E655E23FD3BDC1 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0;
		L_0 = AudioSampleProvider_get_id_m54B9861281DA7D0B1BE31B01B4319986E649BAED_inline(__this, NULL);
		uint32_t L_1 = ___0_value;
		AudioSampleProvider_InternalSetFreeSampleFrameCountLowThreshold_mD5788B7F4F5C2069F04AD6D343148ED9916E319B(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSampleProvider_get_enableSampleFramesAvailableEvents_mD1E0CAE084D82F2C8E565C1A7B9DD0AB366C1DB1 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		uint32_t L_0;
		L_0 = AudioSampleProvider_get_id_m54B9861281DA7D0B1BE31B01B4319986E649BAED_inline(__this, NULL);
		bool L_1;
		L_1 = AudioSampleProvider_InternalGetEnableSampleFramesAvailableEvents_m5828616745AD1EA4FC310DDE5001BBE5D3F5E62F(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_set_enableSampleFramesAvailableEvents_m80282D7581B9957520C418B3CC06AAA43F5F2237 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0;
		L_0 = AudioSampleProvider_get_id_m54B9861281DA7D0B1BE31B01B4319986E649BAED_inline(__this, NULL);
		bool L_1 = ___0_value;
		AudioSampleProvider_InternalSetEnableSampleFramesAvailableEvents_mB1F3F754FCD1952FC3C6B27EEAC27A961A30C66F(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSampleProvider_get_enableSilencePadding_m6A6C0E9625800FFFF6DE94A42214381E39556FC8 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		uint32_t L_0;
		L_0 = AudioSampleProvider_get_id_m54B9861281DA7D0B1BE31B01B4319986E649BAED_inline(__this, NULL);
		bool L_1;
		L_1 = AudioSampleProvider_InternalGetEnableSilencePadding_m8C2198276DCB909C7327096B728C5489F012E4ED(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_set_enableSilencePadding_mBD5BF4A0B01955991D54CE271B90BDEF405C2C50 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0;
		L_0 = AudioSampleProvider_get_id_m54B9861281DA7D0B1BE31B01B4319986E649BAED_inline(__this, NULL);
		bool L_1 = ___0_value;
		AudioSampleProvider_InternalSetEnableSilencePadding_m4B055B4F1E7877BDC67BB611BBA5390193171D3F(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_ConsumeSampleFrames_m7A8AC28A6C57F7FCEE30B82BFE4A3EC364A93A39 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___0_sampleFrames, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint32_t V_1 = 0;
	{
		uint16_t L_0;
		L_0 = AudioSampleProvider_get_channelCount_m2E8B29584D96B878521E64400D6673C59E4A10B7_inline(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_1 = 0;
		goto IL_003f;
	}

IL_0012:
	{
		ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE* L_2 = __this->___m_ConsumeSampleFramesNativeFunction;
		uint32_t L_3;
		L_3 = AudioSampleProvider_get_id_m54B9861281DA7D0B1BE31B01B4319986E649BAED_inline(__this, NULL);
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_4 = ___0_sampleFrames;
		void* L_5;
		L_5 = NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F(L_4, NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_RuntimeMethod_var);
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_5, NULL);
		int32_t L_7;
		L_7 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_sampleFrames))->___m_Length);
		uint16_t L_8;
		L_8 = AudioSampleProvider_get_channelCount_m2E8B29584D96B878521E64400D6673C59E4A10B7_inline(__this, NULL);
		NullCheck(L_2);
		uint32_t L_9;
		L_9 = ConsumeSampleFramesNativeFunction_Invoke_mBE5976A97FA5133DA1EFD35257CB184D71181B99_inline(L_2, L_3, L_6, ((int32_t)((uint32_t)(int32_t)L_7/(uint32_t)(int32_t)L_8)), NULL);
		V_1 = L_9;
		goto IL_003f;
	}

IL_003f:
	{
		uint32_t L_10 = V_1;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE* AudioSampleProvider_get_consumeSampleFramesNativeFunction_mA808F07ED91B5E6191BF7CEAF2395BE5643C0EF6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE* V_0 = NULL;
	{
		intptr_t L_0;
		L_0 = AudioSampleProvider_InternalGetConsumeSampleFramesNativeFunctionPtr_m9F24D2DADDF9A36E4E81D16DE1F9C40A3A4FFE89(NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Delegate_t* L_3;
		L_3 = Marshal_GetDelegateForFunctionPointer_mC8100D33A78463ADEEECC4D86AA17B5809FBB304(L_0, L_2, NULL);
		V_0 = ((ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE*)CastclassSealed((RuntimeObject*)L_3, ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE_il2cpp_TypeInfo_var));
		goto IL_001d;
	}

IL_001d:
	{
		ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_QueueSampleFrames_mBB5342E3C7839C39693046489E486D15154ADB96 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___0_sampleFrames, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m306C543FED06B697C9354420F4D95B2DCA99F67C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint32_t V_1 = 0;
	{
		uint16_t L_0;
		L_0 = AudioSampleProvider_get_channelCount_m2E8B29584D96B878521E64400D6673C59E4A10B7_inline(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_1 = 0;
		goto IL_0039;
	}

IL_0012:
	{
		uint32_t L_2;
		L_2 = AudioSampleProvider_get_id_m54B9861281DA7D0B1BE31B01B4319986E649BAED_inline(__this, NULL);
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_3 = ___0_sampleFrames;
		void* L_4;
		L_4 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m306C543FED06B697C9354420F4D95B2DCA99F67C(L_3, NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m306C543FED06B697C9354420F4D95B2DCA99F67C_RuntimeMethod_var);
		intptr_t L_5;
		L_5 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_4, NULL);
		int32_t L_6;
		L_6 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_sampleFrames))->___m_Length);
		uint16_t L_7;
		L_7 = AudioSampleProvider_get_channelCount_m2E8B29584D96B878521E64400D6673C59E4A10B7_inline(__this, NULL);
		uint32_t L_8;
		L_8 = AudioSampleProvider_InternalQueueSampleFrames_mDF93286C58F479F4FDBFF783D00B426F85C6624D(L_2, L_5, ((int32_t)(L_6/(int32_t)L_7)), NULL);
		V_1 = L_8;
		goto IL_0039;
	}

IL_0039:
	{
		uint32_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_add_sampleFramesAvailable_mF7D95C615AAD8767724B3001D3B82E0071083F78 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* V_0 = NULL;
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* V_1 = NULL;
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* V_2 = NULL;
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_0 = __this->___sampleFramesAvailable;
		V_0 = L_0;
	}

IL_0007:
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_1 = V_0;
		V_1 = L_1;
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_2 = V_1;
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)CastclassSealed((RuntimeObject*)L_4, SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30_il2cpp_TypeInfo_var));
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30** L_5 = (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30**)(&__this->___sampleFramesAvailable);
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_6 = V_2;
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_7 = V_1;
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_8;
		L_8 = InterlockedCompareExchangeImpl<SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*>(L_5, L_6, L_7);
		V_0 = L_8;
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_9 = V_0;
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_10 = V_1;
		if ((!(((RuntimeObject*)(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)L_9) == ((RuntimeObject*)(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_remove_sampleFramesAvailable_mCE2779B438F1696659C06596B6DA6884F617FB7E (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* V_0 = NULL;
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* V_1 = NULL;
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* V_2 = NULL;
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_0 = __this->___sampleFramesAvailable;
		V_0 = L_0;
	}

IL_0007:
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_1 = V_0;
		V_1 = L_1;
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_2 = V_1;
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)CastclassSealed((RuntimeObject*)L_4, SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30_il2cpp_TypeInfo_var));
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30** L_5 = (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30**)(&__this->___sampleFramesAvailable);
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_6 = V_2;
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_7 = V_1;
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_8;
		L_8 = InterlockedCompareExchangeImpl<SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*>(L_5, L_6, L_7);
		V_0 = L_8;
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_9 = V_0;
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_10 = V_1;
		if ((!(((RuntimeObject*)(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)L_9) == ((RuntimeObject*)(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_add_sampleFramesOverflow_m31D18E632926686F1A6190D5DF455714D82DBF63 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* V_0 = NULL;
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* V_1 = NULL;
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* V_2 = NULL;
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_0 = __this->___sampleFramesOverflow;
		V_0 = L_0;
	}

IL_0007:
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_1 = V_0;
		V_1 = L_1;
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_2 = V_1;
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)CastclassSealed((RuntimeObject*)L_4, SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30_il2cpp_TypeInfo_var));
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30** L_5 = (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30**)(&__this->___sampleFramesOverflow);
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_6 = V_2;
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_7 = V_1;
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_8;
		L_8 = InterlockedCompareExchangeImpl<SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*>(L_5, L_6, L_7);
		V_0 = L_8;
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_9 = V_0;
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_10 = V_1;
		if ((!(((RuntimeObject*)(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)L_9) == ((RuntimeObject*)(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_remove_sampleFramesOverflow_m833A07BC3B28DACE9DF51C76085BD0FE1443DB7D (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* V_0 = NULL;
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* V_1 = NULL;
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* V_2 = NULL;
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_0 = __this->___sampleFramesOverflow;
		V_0 = L_0;
	}

IL_0007:
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_1 = V_0;
		V_1 = L_1;
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_2 = V_1;
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)CastclassSealed((RuntimeObject*)L_4, SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30_il2cpp_TypeInfo_var));
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30** L_5 = (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30**)(&__this->___sampleFramesOverflow);
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_6 = V_2;
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_7 = V_1;
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_8;
		L_8 = InterlockedCompareExchangeImpl<SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*>(L_5, L_6, L_7);
		V_0 = L_8;
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_9 = V_0;
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_10 = V_1;
		if ((!(((RuntimeObject*)(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)L_9) == ((RuntimeObject*)(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_SetSampleFramesAvailableNativeHandler_mC18EFEC722D5014A0A84E09E6AF57A84F8DF24B0 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, SampleFramesEventNativeFunction_tCDAC7603B0833CEDC752346C2CE1B79DFAD40639* ___0_handler, intptr_t ___1_userData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_TisSampleFramesEventNativeFunction_tCDAC7603B0833CEDC752346C2CE1B79DFAD40639_mCC82AA3A7E3C114EFFE27AB8DF03A8CD8118A91A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = AudioSampleProvider_get_id_m54B9861281DA7D0B1BE31B01B4319986E649BAED_inline(__this, NULL);
		SampleFramesEventNativeFunction_tCDAC7603B0833CEDC752346C2CE1B79DFAD40639* L_1 = ___0_handler;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Marshal_GetFunctionPointerForDelegate_TisSampleFramesEventNativeFunction_tCDAC7603B0833CEDC752346C2CE1B79DFAD40639_mCC82AA3A7E3C114EFFE27AB8DF03A8CD8118A91A(L_1, Marshal_GetFunctionPointerForDelegate_TisSampleFramesEventNativeFunction_tCDAC7603B0833CEDC752346C2CE1B79DFAD40639_mCC82AA3A7E3C114EFFE27AB8DF03A8CD8118A91A_RuntimeMethod_var);
		intptr_t L_3 = ___1_userData;
		AudioSampleProvider_InternalSetSampleFramesAvailableNativeHandler_m76AD17D2A2B6F1387747538E681DC72EAC0A56A1(L_0, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_ClearSampleFramesAvailableNativeHandler_mB9DABA77DB0B942BBC688A9F0F2F2577264A9A28 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0;
		L_0 = AudioSampleProvider_get_id_m54B9861281DA7D0B1BE31B01B4319986E649BAED_inline(__this, NULL);
		AudioSampleProvider_InternalClearSampleFramesAvailableNativeHandler_m28838F1E2D5A6CE0910E1045A3EA27D1ADD311EA(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_SetSampleFramesOverflowNativeHandler_m43D40634FCD09DED46C3DAC7CB07319A9E4646EC (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, SampleFramesEventNativeFunction_tCDAC7603B0833CEDC752346C2CE1B79DFAD40639* ___0_handler, intptr_t ___1_userData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_TisSampleFramesEventNativeFunction_tCDAC7603B0833CEDC752346C2CE1B79DFAD40639_mCC82AA3A7E3C114EFFE27AB8DF03A8CD8118A91A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = AudioSampleProvider_get_id_m54B9861281DA7D0B1BE31B01B4319986E649BAED_inline(__this, NULL);
		SampleFramesEventNativeFunction_tCDAC7603B0833CEDC752346C2CE1B79DFAD40639* L_1 = ___0_handler;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Marshal_GetFunctionPointerForDelegate_TisSampleFramesEventNativeFunction_tCDAC7603B0833CEDC752346C2CE1B79DFAD40639_mCC82AA3A7E3C114EFFE27AB8DF03A8CD8118A91A(L_1, Marshal_GetFunctionPointerForDelegate_TisSampleFramesEventNativeFunction_tCDAC7603B0833CEDC752346C2CE1B79DFAD40639_mCC82AA3A7E3C114EFFE27AB8DF03A8CD8118A91A_RuntimeMethod_var);
		intptr_t L_3 = ___1_userData;
		AudioSampleProvider_InternalSetSampleFramesOverflowNativeHandler_mDEB472C3FBF948D64213C9D5C4748B819FFB08E3(L_0, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_ClearSampleFramesOverflowNativeHandler_mB26B477B3C19521F08CD3E730408C653C031E19C (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0;
		L_0 = AudioSampleProvider_get_id_m54B9861281DA7D0B1BE31B01B4319986E649BAED_inline(__this, NULL);
		AudioSampleProvider_InternalClearSampleFramesOverflowNativeHandler_m4C2BB3111C516BF7AD0ED0503FE77F15E6DA553B(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InvokeSampleFramesAvailable_mEB16F7230AB65A3576BF053AC5719F8E134FBCD4 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, int32_t ___0_sampleFrameCount, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_0 = __this->___sampleFramesAvailable;
		V_0 = (bool)((!(((RuntimeObject*)(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_2 = __this->___sampleFramesAvailable;
		int32_t L_3 = ___0_sampleFrameCount;
		NullCheck(L_2);
		SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline(L_2, __this, L_3, NULL);
	}

IL_001c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InvokeSampleFramesOverflow_m66593173A527981F5EB2A5EF77B0C9119DAB5E15 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, int32_t ___0_droppedSampleFrameCount, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_0 = __this->___sampleFramesOverflow;
		V_0 = (bool)((!(((RuntimeObject*)(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_2 = __this->___sampleFramesOverflow;
		int32_t L_3 = ___0_droppedSampleFrameCount;
		NullCheck(L_2);
		SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline(L_2, __this, L_3, NULL);
	}

IL_001c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_InternalCreateSampleProvider_m3BD26F837CD7D2ED547A0AE02AC079A72BEE998D (uint16_t ___0_channelCount, uint32_t ___1_sampleRate, const RuntimeMethod* method) 
{
	typedef uint32_t (*AudioSampleProvider_InternalCreateSampleProvider_m3BD26F837CD7D2ED547A0AE02AC079A72BEE998D_ftn) (uint16_t, uint32_t);
	static AudioSampleProvider_InternalCreateSampleProvider_m3BD26F837CD7D2ED547A0AE02AC079A72BEE998D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSampleProvider_InternalCreateSampleProvider_m3BD26F837CD7D2ED547A0AE02AC079A72BEE998D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSampleProvider::InternalCreateSampleProvider(System.UInt16,System.UInt32)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_channelCount, ___1_sampleRate);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InternalRemove_mBC651EF68D78CFB4310E3022002070ED2174BD24 (uint32_t ___0_providerId, const RuntimeMethod* method) 
{
	typedef void (*AudioSampleProvider_InternalRemove_mBC651EF68D78CFB4310E3022002070ED2174BD24_ftn) (uint32_t);
	static AudioSampleProvider_InternalRemove_mBC651EF68D78CFB4310E3022002070ED2174BD24_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSampleProvider_InternalRemove_mBC651EF68D78CFB4310E3022002070ED2174BD24_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSampleProvider::InternalRemove(System.UInt32)");
	_il2cpp_icall_func(___0_providerId);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InternalGetFormatInfo_m8725A2417CD3304F009AA19328606EF2434FD703 (uint32_t ___0_providerId, uint16_t* ___1_chCount, uint32_t* ___2_sRate, const RuntimeMethod* method) 
{
	typedef void (*AudioSampleProvider_InternalGetFormatInfo_m8725A2417CD3304F009AA19328606EF2434FD703_ftn) (uint32_t, uint16_t*, uint32_t*);
	static AudioSampleProvider_InternalGetFormatInfo_m8725A2417CD3304F009AA19328606EF2434FD703_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSampleProvider_InternalGetFormatInfo_m8725A2417CD3304F009AA19328606EF2434FD703_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSampleProvider::InternalGetFormatInfo(System.UInt32,System.UInt16&,System.UInt32&)");
	_il2cpp_icall_func(___0_providerId, ___1_chCount, ___2_sRate);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* AudioSampleProvider_InternalGetScriptingPtr_mA1A158321BE37492A745702503F4233E234C1D62 (uint32_t ___0_providerId, const RuntimeMethod* method) 
{
	typedef AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* (*AudioSampleProvider_InternalGetScriptingPtr_mA1A158321BE37492A745702503F4233E234C1D62_ftn) (uint32_t);
	static AudioSampleProvider_InternalGetScriptingPtr_mA1A158321BE37492A745702503F4233E234C1D62_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSampleProvider_InternalGetScriptingPtr_mA1A158321BE37492A745702503F4233E234C1D62_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSampleProvider::InternalGetScriptingPtr(System.UInt32)");
	AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* icallRetVal = _il2cpp_icall_func(___0_providerId);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InternalSetScriptingPtr_m6FE4C028426BB46CC9648F66930324E2A708DEF8 (uint32_t ___0_providerId, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___1_provider, const RuntimeMethod* method) 
{
	typedef void (*AudioSampleProvider_InternalSetScriptingPtr_m6FE4C028426BB46CC9648F66930324E2A708DEF8_ftn) (uint32_t, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*);
	static AudioSampleProvider_InternalSetScriptingPtr_m6FE4C028426BB46CC9648F66930324E2A708DEF8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSampleProvider_InternalSetScriptingPtr_m6FE4C028426BB46CC9648F66930324E2A708DEF8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSampleProvider::InternalSetScriptingPtr(System.UInt32,UnityEngine.Experimental.Audio.AudioSampleProvider)");
	_il2cpp_icall_func(___0_providerId, ___1_provider);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSampleProvider_InternalIsValid_mCBDAABC4B1ED912B8F13D66AA587175BC549A548 (uint32_t ___0_providerId, const RuntimeMethod* method) 
{
	typedef bool (*AudioSampleProvider_InternalIsValid_mCBDAABC4B1ED912B8F13D66AA587175BC549A548_ftn) (uint32_t);
	static AudioSampleProvider_InternalIsValid_mCBDAABC4B1ED912B8F13D66AA587175BC549A548_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSampleProvider_InternalIsValid_mCBDAABC4B1ED912B8F13D66AA587175BC549A548_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSampleProvider::InternalIsValid(System.UInt32)");
	bool icallRetVal = _il2cpp_icall_func(___0_providerId);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_InternalGetMaxSampleFrameCount_m33AF5AF071B5354DC657C8521ACD6379094F8A79 (uint32_t ___0_providerId, const RuntimeMethod* method) 
{
	typedef uint32_t (*AudioSampleProvider_InternalGetMaxSampleFrameCount_m33AF5AF071B5354DC657C8521ACD6379094F8A79_ftn) (uint32_t);
	static AudioSampleProvider_InternalGetMaxSampleFrameCount_m33AF5AF071B5354DC657C8521ACD6379094F8A79_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSampleProvider_InternalGetMaxSampleFrameCount_m33AF5AF071B5354DC657C8521ACD6379094F8A79_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSampleProvider::InternalGetMaxSampleFrameCount(System.UInt32)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_providerId);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_InternalGetAvailableSampleFrameCount_mD9A3A290D03ADB2D14625A2F2DC56D6FFD6D1AA0 (uint32_t ___0_providerId, const RuntimeMethod* method) 
{
	typedef uint32_t (*AudioSampleProvider_InternalGetAvailableSampleFrameCount_mD9A3A290D03ADB2D14625A2F2DC56D6FFD6D1AA0_ftn) (uint32_t);
	static AudioSampleProvider_InternalGetAvailableSampleFrameCount_mD9A3A290D03ADB2D14625A2F2DC56D6FFD6D1AA0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSampleProvider_InternalGetAvailableSampleFrameCount_mD9A3A290D03ADB2D14625A2F2DC56D6FFD6D1AA0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSampleProvider::InternalGetAvailableSampleFrameCount(System.UInt32)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_providerId);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_InternalGetFreeSampleFrameCount_mF71ABBF38D3686A855500D81EBC91F209C91E989 (uint32_t ___0_providerId, const RuntimeMethod* method) 
{
	typedef uint32_t (*AudioSampleProvider_InternalGetFreeSampleFrameCount_mF71ABBF38D3686A855500D81EBC91F209C91E989_ftn) (uint32_t);
	static AudioSampleProvider_InternalGetFreeSampleFrameCount_mF71ABBF38D3686A855500D81EBC91F209C91E989_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSampleProvider_InternalGetFreeSampleFrameCount_mF71ABBF38D3686A855500D81EBC91F209C91E989_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSampleProvider::InternalGetFreeSampleFrameCount(System.UInt32)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_providerId);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_InternalGetFreeSampleFrameCountLowThreshold_m011436ED9F51F1BDB79C7D2C418971EB29ED8F6B (uint32_t ___0_providerId, const RuntimeMethod* method) 
{
	typedef uint32_t (*AudioSampleProvider_InternalGetFreeSampleFrameCountLowThreshold_m011436ED9F51F1BDB79C7D2C418971EB29ED8F6B_ftn) (uint32_t);
	static AudioSampleProvider_InternalGetFreeSampleFrameCountLowThreshold_m011436ED9F51F1BDB79C7D2C418971EB29ED8F6B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSampleProvider_InternalGetFreeSampleFrameCountLowThreshold_m011436ED9F51F1BDB79C7D2C418971EB29ED8F6B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSampleProvider::InternalGetFreeSampleFrameCountLowThreshold(System.UInt32)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_providerId);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InternalSetFreeSampleFrameCountLowThreshold_mD5788B7F4F5C2069F04AD6D343148ED9916E319B (uint32_t ___0_providerId, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method) 
{
	typedef void (*AudioSampleProvider_InternalSetFreeSampleFrameCountLowThreshold_mD5788B7F4F5C2069F04AD6D343148ED9916E319B_ftn) (uint32_t, uint32_t);
	static AudioSampleProvider_InternalSetFreeSampleFrameCountLowThreshold_mD5788B7F4F5C2069F04AD6D343148ED9916E319B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSampleProvider_InternalSetFreeSampleFrameCountLowThreshold_mD5788B7F4F5C2069F04AD6D343148ED9916E319B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSampleProvider::InternalSetFreeSampleFrameCountLowThreshold(System.UInt32,System.UInt32)");
	_il2cpp_icall_func(___0_providerId, ___1_sampleFrameCount);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSampleProvider_InternalGetEnableSampleFramesAvailableEvents_m5828616745AD1EA4FC310DDE5001BBE5D3F5E62F (uint32_t ___0_providerId, const RuntimeMethod* method) 
{
	typedef bool (*AudioSampleProvider_InternalGetEnableSampleFramesAvailableEvents_m5828616745AD1EA4FC310DDE5001BBE5D3F5E62F_ftn) (uint32_t);
	static AudioSampleProvider_InternalGetEnableSampleFramesAvailableEvents_m5828616745AD1EA4FC310DDE5001BBE5D3F5E62F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSampleProvider_InternalGetEnableSampleFramesAvailableEvents_m5828616745AD1EA4FC310DDE5001BBE5D3F5E62F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSampleProvider::InternalGetEnableSampleFramesAvailableEvents(System.UInt32)");
	bool icallRetVal = _il2cpp_icall_func(___0_providerId);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InternalSetEnableSampleFramesAvailableEvents_mB1F3F754FCD1952FC3C6B27EEAC27A961A30C66F (uint32_t ___0_providerId, bool ___1_enable, const RuntimeMethod* method) 
{
	typedef void (*AudioSampleProvider_InternalSetEnableSampleFramesAvailableEvents_mB1F3F754FCD1952FC3C6B27EEAC27A961A30C66F_ftn) (uint32_t, bool);
	static AudioSampleProvider_InternalSetEnableSampleFramesAvailableEvents_mB1F3F754FCD1952FC3C6B27EEAC27A961A30C66F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSampleProvider_InternalSetEnableSampleFramesAvailableEvents_mB1F3F754FCD1952FC3C6B27EEAC27A961A30C66F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSampleProvider::InternalSetEnableSampleFramesAvailableEvents(System.UInt32,System.Boolean)");
	_il2cpp_icall_func(___0_providerId, ___1_enable);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InternalSetSampleFramesAvailableNativeHandler_m76AD17D2A2B6F1387747538E681DC72EAC0A56A1 (uint32_t ___0_providerId, intptr_t ___1_handler, intptr_t ___2_userData, const RuntimeMethod* method) 
{
	typedef void (*AudioSampleProvider_InternalSetSampleFramesAvailableNativeHandler_m76AD17D2A2B6F1387747538E681DC72EAC0A56A1_ftn) (uint32_t, intptr_t, intptr_t);
	static AudioSampleProvider_InternalSetSampleFramesAvailableNativeHandler_m76AD17D2A2B6F1387747538E681DC72EAC0A56A1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSampleProvider_InternalSetSampleFramesAvailableNativeHandler_m76AD17D2A2B6F1387747538E681DC72EAC0A56A1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSampleProvider::InternalSetSampleFramesAvailableNativeHandler(System.UInt32,System.IntPtr,System.IntPtr)");
	_il2cpp_icall_func(___0_providerId, ___1_handler, ___2_userData);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InternalClearSampleFramesAvailableNativeHandler_m28838F1E2D5A6CE0910E1045A3EA27D1ADD311EA (uint32_t ___0_providerId, const RuntimeMethod* method) 
{
	typedef void (*AudioSampleProvider_InternalClearSampleFramesAvailableNativeHandler_m28838F1E2D5A6CE0910E1045A3EA27D1ADD311EA_ftn) (uint32_t);
	static AudioSampleProvider_InternalClearSampleFramesAvailableNativeHandler_m28838F1E2D5A6CE0910E1045A3EA27D1ADD311EA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSampleProvider_InternalClearSampleFramesAvailableNativeHandler_m28838F1E2D5A6CE0910E1045A3EA27D1ADD311EA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSampleProvider::InternalClearSampleFramesAvailableNativeHandler(System.UInt32)");
	_il2cpp_icall_func(___0_providerId);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InternalSetSampleFramesOverflowNativeHandler_mDEB472C3FBF948D64213C9D5C4748B819FFB08E3 (uint32_t ___0_providerId, intptr_t ___1_handler, intptr_t ___2_userData, const RuntimeMethod* method) 
{
	typedef void (*AudioSampleProvider_InternalSetSampleFramesOverflowNativeHandler_mDEB472C3FBF948D64213C9D5C4748B819FFB08E3_ftn) (uint32_t, intptr_t, intptr_t);
	static AudioSampleProvider_InternalSetSampleFramesOverflowNativeHandler_mDEB472C3FBF948D64213C9D5C4748B819FFB08E3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSampleProvider_InternalSetSampleFramesOverflowNativeHandler_mDEB472C3FBF948D64213C9D5C4748B819FFB08E3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSampleProvider::InternalSetSampleFramesOverflowNativeHandler(System.UInt32,System.IntPtr,System.IntPtr)");
	_il2cpp_icall_func(___0_providerId, ___1_handler, ___2_userData);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InternalClearSampleFramesOverflowNativeHandler_m4C2BB3111C516BF7AD0ED0503FE77F15E6DA553B (uint32_t ___0_providerId, const RuntimeMethod* method) 
{
	typedef void (*AudioSampleProvider_InternalClearSampleFramesOverflowNativeHandler_m4C2BB3111C516BF7AD0ED0503FE77F15E6DA553B_ftn) (uint32_t);
	static AudioSampleProvider_InternalClearSampleFramesOverflowNativeHandler_m4C2BB3111C516BF7AD0ED0503FE77F15E6DA553B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSampleProvider_InternalClearSampleFramesOverflowNativeHandler_m4C2BB3111C516BF7AD0ED0503FE77F15E6DA553B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSampleProvider::InternalClearSampleFramesOverflowNativeHandler(System.UInt32)");
	_il2cpp_icall_func(___0_providerId);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSampleProvider_InternalGetEnableSilencePadding_m8C2198276DCB909C7327096B728C5489F012E4ED (uint32_t ___0_id, const RuntimeMethod* method) 
{
	typedef bool (*AudioSampleProvider_InternalGetEnableSilencePadding_m8C2198276DCB909C7327096B728C5489F012E4ED_ftn) (uint32_t);
	static AudioSampleProvider_InternalGetEnableSilencePadding_m8C2198276DCB909C7327096B728C5489F012E4ED_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSampleProvider_InternalGetEnableSilencePadding_m8C2198276DCB909C7327096B728C5489F012E4ED_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSampleProvider::InternalGetEnableSilencePadding(System.UInt32)");
	bool icallRetVal = _il2cpp_icall_func(___0_id);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InternalSetEnableSilencePadding_m4B055B4F1E7877BDC67BB611BBA5390193171D3F (uint32_t ___0_id, bool ___1_enabled, const RuntimeMethod* method) 
{
	typedef void (*AudioSampleProvider_InternalSetEnableSilencePadding_m4B055B4F1E7877BDC67BB611BBA5390193171D3F_ftn) (uint32_t, bool);
	static AudioSampleProvider_InternalSetEnableSilencePadding_m4B055B4F1E7877BDC67BB611BBA5390193171D3F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSampleProvider_InternalSetEnableSilencePadding_m4B055B4F1E7877BDC67BB611BBA5390193171D3F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSampleProvider::InternalSetEnableSilencePadding(System.UInt32,System.Boolean)");
	_il2cpp_icall_func(___0_id, ___1_enabled);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioSampleProvider_InternalGetConsumeSampleFramesNativeFunctionPtr_m9F24D2DADDF9A36E4E81D16DE1F9C40A3A4FFE89 (const RuntimeMethod* method) 
{
	typedef intptr_t (*AudioSampleProvider_InternalGetConsumeSampleFramesNativeFunctionPtr_m9F24D2DADDF9A36E4E81D16DE1F9C40A3A4FFE89_ftn) ();
	static AudioSampleProvider_InternalGetConsumeSampleFramesNativeFunctionPtr_m9F24D2DADDF9A36E4E81D16DE1F9C40A3A4FFE89_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSampleProvider_InternalGetConsumeSampleFramesNativeFunctionPtr_m9F24D2DADDF9A36E4E81D16DE1F9C40A3A4FFE89_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSampleProvider::InternalGetConsumeSampleFramesNativeFunctionPtr()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_InternalQueueSampleFrames_mDF93286C58F479F4FDBFF783D00B426F85C6624D (uint32_t ___0_id, intptr_t ___1_interleavedSampleFrames, uint32_t ___2_sampleFrameCount, const RuntimeMethod* method) 
{
	typedef uint32_t (*AudioSampleProvider_InternalQueueSampleFrames_mDF93286C58F479F4FDBFF783D00B426F85C6624D_ftn) (uint32_t, intptr_t, uint32_t);
	static AudioSampleProvider_InternalQueueSampleFrames_mDF93286C58F479F4FDBFF783D00B426F85C6624D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSampleProvider_InternalQueueSampleFrames_mDF93286C58F479F4FDBFF783D00B426F85C6624D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSampleProvider::InternalQueueSampleFrames(System.UInt32,System.IntPtr,System.UInt32)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_id, ___1_interleavedSampleFrames, ___2_sampleFrameCount);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
uint32_t ConsumeSampleFramesNativeFunction_Invoke_mBE5976A97FA5133DA1EFD35257CB184D71181B99_Multicast(ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE* __this, uint32_t ___0_providerId, intptr_t ___1_interleavedSampleFrames, uint32_t ___2_sampleFrameCount, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	uint32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE* currentDelegate = reinterpret_cast<ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE*>(delegatesToInvoke[i]);
		typedef uint32_t (*FunctionPointerType) (RuntimeObject*, uint32_t, intptr_t, uint32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_providerId, ___1_interleavedSampleFrames, ___2_sampleFrameCount, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
uint32_t ConsumeSampleFramesNativeFunction_Invoke_mBE5976A97FA5133DA1EFD35257CB184D71181B99_OpenInst(ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE* __this, uint32_t ___0_providerId, intptr_t ___1_interleavedSampleFrames, uint32_t ___2_sampleFrameCount, const RuntimeMethod* method)
{
	typedef uint32_t (*FunctionPointerType) (uint32_t, intptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_providerId, ___1_interleavedSampleFrames, ___2_sampleFrameCount, method);
}
uint32_t ConsumeSampleFramesNativeFunction_Invoke_mBE5976A97FA5133DA1EFD35257CB184D71181B99_OpenStatic(ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE* __this, uint32_t ___0_providerId, intptr_t ___1_interleavedSampleFrames, uint32_t ___2_sampleFrameCount, const RuntimeMethod* method)
{
	typedef uint32_t (*FunctionPointerType) (uint32_t, intptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_providerId, ___1_interleavedSampleFrames, ___2_sampleFrameCount, method);
}
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper_ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE (ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE* __this, uint32_t ___0_providerId, intptr_t ___1_interleavedSampleFrames, uint32_t ___2_sampleFrameCount, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc)(uint32_t, intptr_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	uint32_t returnValue = il2cppPInvokeFunc(___0_providerId, ___1_interleavedSampleFrames, ___2_sampleFrameCount);

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsumeSampleFramesNativeFunction__ctor_m32F2C9615F5256132FBF2EAD179A85B05E5B91B8 (ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&ConsumeSampleFramesNativeFunction_Invoke_mBE5976A97FA5133DA1EFD35257CB184D71181B99_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&ConsumeSampleFramesNativeFunction_Invoke_mBE5976A97FA5133DA1EFD35257CB184D71181B99_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConsumeSampleFramesNativeFunction_Invoke_mBE5976A97FA5133DA1EFD35257CB184D71181B99 (ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE* __this, uint32_t ___0_providerId, intptr_t ___1_interleavedSampleFrames, uint32_t ___2_sampleFrameCount, const RuntimeMethod* method) 
{
	typedef uint32_t (*FunctionPointerType) (RuntimeObject*, uint32_t, intptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_providerId, ___1_interleavedSampleFrames, ___2_sampleFrameCount, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_Multicast(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* currentDelegate = reinterpret_cast<SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_provider, ___1_sampleFrameCount, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInst(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	typedef void (*FunctionPointerType) (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_provider, ___1_sampleFrameCount, method);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenStatic(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_provider, ___1_sampleFrameCount, method);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenVirtual(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	VirtualActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_provider, ___1_sampleFrameCount);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInterface(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	InterfaceActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_provider, ___1_sampleFrameCount);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericVirtual(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	GenericVirtualActionInvoker1< uint32_t >::Invoke(method, ___0_provider, ___1_sampleFrameCount);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericInterface(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	GenericInterfaceActionInvoker1< uint32_t >::Invoke(method, ___0_provider, ___1_sampleFrameCount);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesHandler__ctor_m7DDE0BAD439CD80791140C7D42D661B598A7663A (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_provider, ___1_sampleFrameCount, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SampleFramesEventNativeFunction_Invoke_m8BB80F3A2283D82F99F79971A7C5E21D2BE2F3A8_Multicast(SampleFramesEventNativeFunction_tCDAC7603B0833CEDC752346C2CE1B79DFAD40639* __this, intptr_t ___0_userData, uint32_t ___1_providerId, uint32_t ___2_sampleFrameCount, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SampleFramesEventNativeFunction_tCDAC7603B0833CEDC752346C2CE1B79DFAD40639* currentDelegate = reinterpret_cast<SampleFramesEventNativeFunction_tCDAC7603B0833CEDC752346C2CE1B79DFAD40639*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t, uint32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_userData, ___1_providerId, ___2_sampleFrameCount, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SampleFramesEventNativeFunction_Invoke_m8BB80F3A2283D82F99F79971A7C5E21D2BE2F3A8_OpenInst(SampleFramesEventNativeFunction_tCDAC7603B0833CEDC752346C2CE1B79DFAD40639* __this, intptr_t ___0_userData, uint32_t ___1_providerId, uint32_t ___2_sampleFrameCount, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, uint32_t, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_userData, ___1_providerId, ___2_sampleFrameCount, method);
}
void SampleFramesEventNativeFunction_Invoke_m8BB80F3A2283D82F99F79971A7C5E21D2BE2F3A8_OpenStatic(SampleFramesEventNativeFunction_tCDAC7603B0833CEDC752346C2CE1B79DFAD40639* __this, intptr_t ___0_userData, uint32_t ___1_providerId, uint32_t ___2_sampleFrameCount, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, uint32_t, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_userData, ___1_providerId, ___2_sampleFrameCount, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SampleFramesEventNativeFunction_tCDAC7603B0833CEDC752346C2CE1B79DFAD40639 (SampleFramesEventNativeFunction_tCDAC7603B0833CEDC752346C2CE1B79DFAD40639* __this, intptr_t ___0_userData, uint32_t ___1_providerId, uint32_t ___2_sampleFrameCount, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, uint32_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_userData, ___1_providerId, ___2_sampleFrameCount);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesEventNativeFunction__ctor_m9950F1156D2F6C5BB6BD4E1A03305892C1073F6C (SampleFramesEventNativeFunction_tCDAC7603B0833CEDC752346C2CE1B79DFAD40639* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SampleFramesEventNativeFunction_Invoke_m8BB80F3A2283D82F99F79971A7C5E21D2BE2F3A8_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&SampleFramesEventNativeFunction_Invoke_m8BB80F3A2283D82F99F79971A7C5E21D2BE2F3A8_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesEventNativeFunction_Invoke_m8BB80F3A2283D82F99F79971A7C5E21D2BE2F3A8 (SampleFramesEventNativeFunction_tCDAC7603B0833CEDC752346C2CE1B79DFAD40639* __this, intptr_t ___0_userData, uint32_t ___1_providerId, uint32_t ___2_sampleFrameCount, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_userData, ___1_providerId, ___2_sampleFrameCount, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSampleProviderExtensionsInternal_GetSpeed_m334970FF8D1B37C55EA261B8E3D2F5EF37121261 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* L_0 = ___0_provider;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = AudioSampleProvider_get_id_m54B9861281DA7D0B1BE31B01B4319986E649BAED_inline(L_0, NULL);
		float L_2;
		L_2 = AudioSampleProviderExtensionsInternal_InternalGetAudioSampleProviderSpeed_m4B89D873E08293C6DDDADB795D061049EAFEEEA8(L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		float L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSampleProviderExtensionsInternal_InternalGetAudioSampleProviderSpeed_m4B89D873E08293C6DDDADB795D061049EAFEEEA8 (uint32_t ___0_providerId, const RuntimeMethod* method) 
{
	typedef float (*AudioSampleProviderExtensionsInternal_InternalGetAudioSampleProviderSpeed_m4B89D873E08293C6DDDADB795D061049EAFEEEA8_ftn) (uint32_t);
	static AudioSampleProviderExtensionsInternal_InternalGetAudioSampleProviderSpeed_m4B89D873E08293C6DDDADB795D061049EAFEEEA8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSampleProviderExtensionsInternal_InternalGetAudioSampleProviderSpeed_m4B89D873E08293C6DDDADB795D061049EAFEEEA8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSampleProviderExtensionsInternal::InternalGetAudioSampleProviderSpeed(System.UInt32)");
	float icallRetVal = _il2cpp_icall_func(___0_providerId);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSourceExtensionsInternal_RegisterSampleProvider_m082540DB541FF637B967212DA366A12F50B05978 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___1_provider, const RuntimeMethod* method) 
{
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___0_source;
		AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* L_1 = ___1_provider;
		NullCheck(L_1);
		uint32_t L_2;
		L_2 = AudioSampleProvider_get_id_m54B9861281DA7D0B1BE31B01B4319986E649BAED_inline(L_1, NULL);
		AudioSourceExtensionsInternal_Internal_RegisterSampleProviderWithAudioSource_m44FC79BA5403BE0101D7CA745089AD5A70362528(L_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSourceExtensionsInternal_UnregisterSampleProvider_m2E7741EB7338D32D4E47332CDAB2911DD524F4EB (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___1_provider, const RuntimeMethod* method) 
{
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___0_source;
		AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* L_1 = ___1_provider;
		NullCheck(L_1);
		uint32_t L_2;
		L_2 = AudioSampleProvider_get_id_m54B9861281DA7D0B1BE31B01B4319986E649BAED_inline(L_1, NULL);
		AudioSourceExtensionsInternal_Internal_UnregisterSampleProviderFromAudioSource_mE36C0772279DFEE17E6D9A07510D91C7058247D7(L_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSourceExtensionsInternal_Internal_RegisterSampleProviderWithAudioSource_m44FC79BA5403BE0101D7CA745089AD5A70362528 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, uint32_t ___1_providerId, const RuntimeMethod* method) 
{
	typedef void (*AudioSourceExtensionsInternal_Internal_RegisterSampleProviderWithAudioSource_m44FC79BA5403BE0101D7CA745089AD5A70362528_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, uint32_t);
	static AudioSourceExtensionsInternal_Internal_RegisterSampleProviderWithAudioSource_m44FC79BA5403BE0101D7CA745089AD5A70362528_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSourceExtensionsInternal_Internal_RegisterSampleProviderWithAudioSource_m44FC79BA5403BE0101D7CA745089AD5A70362528_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSourceExtensionsInternal::Internal_RegisterSampleProviderWithAudioSource(UnityEngine.AudioSource,System.UInt32)");
	_il2cpp_icall_func(___0_source, ___1_providerId);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSourceExtensionsInternal_Internal_UnregisterSampleProviderFromAudioSource_mE36C0772279DFEE17E6D9A07510D91C7058247D7 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, uint32_t ___1_providerId, const RuntimeMethod* method) 
{
	typedef void (*AudioSourceExtensionsInternal_Internal_UnregisterSampleProviderFromAudioSource_mE36C0772279DFEE17E6D9A07510D91C7058247D7_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, uint32_t);
	static AudioSourceExtensionsInternal_Internal_UnregisterSampleProviderFromAudioSource_mE36C0772279DFEE17E6D9A07510D91C7058247D7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSourceExtensionsInternal_Internal_UnregisterSampleProviderFromAudioSource_mE36C0772279DFEE17E6D9A07510D91C7058247D7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Audio.AudioSourceExtensionsInternal::Internal_UnregisterSampleProviderFromAudioSource(UnityEngine.AudioSource,System.UInt32)");
	_il2cpp_icall_func(___0_source, ___1_providerId);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_inline (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_deviceWasChanged, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___U3CmuteStateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mobile_set_muteState_m7C9A464BCA3762330E18CCAD79AF6C47B863CA02_inline (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___U3CmuteStateU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_inline (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_data, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_inline (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_position, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioSampleProvider_set_owner_mD620FF3D0BC2188F48D2741102385358F0B8E71B_inline (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_value, const RuntimeMethod* method) 
{
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___0_value;
		__this->___U3CownerU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CownerU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioSampleProvider_set_id_mA392A551DD19269C1C8C0134935E6CDAA51831A6_inline (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioSampleProvider_set_trackIndex_mC2EE9E4029DF0362F4EAC7FE4DA24C3BFC9AEBAB_inline (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CtrackIndexU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioSampleProvider_set_channelCount_m32FE390F1DBCEF6483FA2B6DD80A1F7542B29DE5_inline (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___U3CchannelCountU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioSampleProvider_set_sampleRate_m3F8E715867B01BF4238E9A6D0B5705BFB6CDEFC7_inline (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_value;
		__this->___U3CsampleRateU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t AudioSampleProvider_get_id_m54B9861281DA7D0B1BE31B01B4319986E649BAED_inline (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CidU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* AudioSampleProvider_get_owner_mC8461FD790AEC7BACE00C8A3F1DE4D00E08EF1AC_inline (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, const RuntimeMethod* method) 
{
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->___U3CownerU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t AudioSampleProvider_get_channelCount_m2E8B29584D96B878521E64400D6673C59E4A10B7_inline (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->___U3CchannelCountU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ConsumeSampleFramesNativeFunction_Invoke_mBE5976A97FA5133DA1EFD35257CB184D71181B99_inline (ConsumeSampleFramesNativeFunction_tEFEFD4F9990DC0C4806B21E0EB1CAFBE991D4EDE* __this, uint32_t ___0_providerId, intptr_t ___1_interleavedSampleFrames, uint32_t ___2_sampleFrameCount, const RuntimeMethod* method) 
{
	typedef uint32_t (*FunctionPointerType) (RuntimeObject*, uint32_t, intptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_providerId, ___1_interleavedSampleFrames, ___2_sampleFrameCount, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_provider, ___1_sampleFrameCount, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_gshared_inline (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue;
		return L_0;
	}
}
