#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tCC519CABEDAEB613734AF73009C6330BE9E186E4 
{
};
struct Binding_t4175ACCDA50512713728ADA73FFBB161A0B2C496  : public RuntimeObject
{
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
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
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
struct unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80 
{
	uint32_t ___role;
	uint32_t ___state;
	uint32_t ___handshakeState;
	intptr_t ___ctx;
	unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* ___config;
	intptr_t ___internalCtx;
};
struct unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 
{
	uint8_t* ___dataPtr;
	uintptr_t ___dataLen;
};
struct unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F 
{
	unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 ___caPEM;
	unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 ___serverPEM;
	unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 ___privateKeyPEM;
	uint32_t ___clientAuth;
	uint32_t ___transportProtocol;
	unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 ___psk;
	unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 ___pskIdentity;
	intptr_t ___onDataCB;
	intptr_t ___dataSendCB;
	intptr_t ___dataReceiveCB;
	intptr_t ___dataReceiveTimeoutCB;
	intptr_t ___transportUserData;
	intptr_t ___applicationUserData;
	int32_t ___handshakeReturnsOnStep;
	int32_t ___handshakeReturnsIfWouldBlock;
	uint32_t ___ssl_read_timeout_ms;
	uint8_t* ___hostname;
	uint32_t ___tracelevel;
	intptr_t ___logCallback;
	uint32_t ___ssl_handshake_timeout_min;
	uint32_t ___ssl_handshake_timeout_max;
	uint16_t ___mtu;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
};
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_send_data_m5086C52FA8F5F51D6A764CDF277FFFBCBA6D1928 (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, uint8_t* ___1_data, uintptr_t ___2_dataLen, const RuntimeMethod* method) 
{
	typedef uint32_t (*Binding_unitytls_client_send_data_m5086C52FA8F5F51D6A764CDF277FFFBCBA6D1928_ftn) (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80*, uint8_t*, uintptr_t);
	static Binding_unitytls_client_send_data_m5086C52FA8F5F51D6A764CDF277FFFBCBA6D1928_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_send_data_m5086C52FA8F5F51D6A764CDF277FFFBCBA6D1928_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_send_data(Unity.TLS.LowLevel.Binding/unitytls_client*,System.Byte*,System.UIntPtr)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_clientInstance, ___1_data, ___2_dataLen);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_read_data_mF232A9B9C2DB17E25ACB540144CB2C4CD3D67C2F (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, uint8_t* ___1_buffer, uintptr_t ___2_bufferLen, uintptr_t* ___3_bytesRead, const RuntimeMethod* method) 
{
	typedef uint32_t (*Binding_unitytls_client_read_data_mF232A9B9C2DB17E25ACB540144CB2C4CD3D67C2F_ftn) (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80*, uint8_t*, uintptr_t, uintptr_t*);
	static Binding_unitytls_client_read_data_mF232A9B9C2DB17E25ACB540144CB2C4CD3D67C2F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_read_data_mF232A9B9C2DB17E25ACB540144CB2C4CD3D67C2F_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_read_data(Unity.TLS.LowLevel.Binding/unitytls_client*,System.Byte*,System.UIntPtr,System.UIntPtr*)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_clientInstance, ___1_buffer, ___2_bufferLen, ___3_bytesRead);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Binding_unitytls_client_add_ciphersuite_m84984570244F915AA13080689DB22C9E07D67F9D (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, uint32_t ___1_suite, const RuntimeMethod* method) 
{
	typedef void (*Binding_unitytls_client_add_ciphersuite_m84984570244F915AA13080689DB22C9E07D67F9D_ftn) (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80*, uint32_t);
	static Binding_unitytls_client_add_ciphersuite_m84984570244F915AA13080689DB22C9E07D67F9D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_add_ciphersuite_m84984570244F915AA13080689DB22C9E07D67F9D_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_add_ciphersuite(Unity.TLS.LowLevel.Binding/unitytls_client*,System.UInt32)");
	_il2cpp_icall_func(___0_clientInstance, ___1_suite);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_get_ciphersuite_mC97F9B45F0437090A710FCB23ED5A6B32782196D (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, int32_t ___1_ndx, const RuntimeMethod* method) 
{
	typedef uint32_t (*Binding_unitytls_client_get_ciphersuite_mC97F9B45F0437090A710FCB23ED5A6B32782196D_ftn) (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80*, int32_t);
	static Binding_unitytls_client_get_ciphersuite_mC97F9B45F0437090A710FCB23ED5A6B32782196D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_get_ciphersuite_mC97F9B45F0437090A710FCB23ED5A6B32782196D_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_get_ciphersuite(Unity.TLS.LowLevel.Binding/unitytls_client*,System.Int32)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_clientInstance, ___1_ndx);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Binding_unitytls_client_get_ciphersuite_cnt_m747F87B3AB85A453C6D41FCFC220F79FE7172A03 (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, const RuntimeMethod* method) 
{
	typedef int32_t (*Binding_unitytls_client_get_ciphersuite_cnt_m747F87B3AB85A453C6D41FCFC220F79FE7172A03_ftn) (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80*);
	static Binding_unitytls_client_get_ciphersuite_cnt_m747F87B3AB85A453C6D41FCFC220F79FE7172A03_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_get_ciphersuite_cnt_m747F87B3AB85A453C6D41FCFC220F79FE7172A03_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_get_ciphersuite_cnt(Unity.TLS.LowLevel.Binding/unitytls_client*)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_clientInstance);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Binding_unitytls_client_init_config_m82074495EA2A17758484F4A7FF1C6BB2EFE198B5 (unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* ___0_config, const RuntimeMethod* method) 
{
	typedef void (*Binding_unitytls_client_init_config_m82074495EA2A17758484F4A7FF1C6BB2EFE198B5_ftn) (unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F*);
	static Binding_unitytls_client_init_config_m82074495EA2A17758484F4A7FF1C6BB2EFE198B5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_init_config_m82074495EA2A17758484F4A7FF1C6BB2EFE198B5_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_init_config(Unity.TLS.LowLevel.Binding/unitytls_client_config*)");
	_il2cpp_icall_func(___0_config);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* Binding_unitytls_client_create_mA830787311EBD55A7ACAA925541EE3A28F398026 (uint32_t ___0_role, unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* ___1_config, const RuntimeMethod* method) 
{
	typedef unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* (*Binding_unitytls_client_create_mA830787311EBD55A7ACAA925541EE3A28F398026_ftn) (uint32_t, unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F*);
	static Binding_unitytls_client_create_mA830787311EBD55A7ACAA925541EE3A28F398026_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_create_mA830787311EBD55A7ACAA925541EE3A28F398026_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_create(System.UInt32,Unity.TLS.LowLevel.Binding/unitytls_client_config*)");
	unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* icallRetVal = _il2cpp_icall_func(___0_role, ___1_config);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Binding_unitytls_client_destroy_m3454EE8424B3F530183F2FB04DE935EFA0D4CE0B (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, const RuntimeMethod* method) 
{
	typedef void (*Binding_unitytls_client_destroy_m3454EE8424B3F530183F2FB04DE935EFA0D4CE0B_ftn) (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80*);
	static Binding_unitytls_client_destroy_m3454EE8424B3F530183F2FB04DE935EFA0D4CE0B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_destroy_m3454EE8424B3F530183F2FB04DE935EFA0D4CE0B_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_destroy(Unity.TLS.LowLevel.Binding/unitytls_client*)");
	_il2cpp_icall_func(___0_clientInstance);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Binding_unitytls_client_init_m4A2D0AEC37B2EEAFFF7793ECE1C27B52E718C9AA (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, const RuntimeMethod* method) 
{
	typedef int32_t (*Binding_unitytls_client_init_m4A2D0AEC37B2EEAFFF7793ECE1C27B52E718C9AA_ftn) (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80*);
	static Binding_unitytls_client_init_m4A2D0AEC37B2EEAFFF7793ECE1C27B52E718C9AA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_init_m4A2D0AEC37B2EEAFFF7793ECE1C27B52E718C9AA_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_init(Unity.TLS.LowLevel.Binding/unitytls_client*)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_clientInstance);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_handshake_mD90B620858219D8DF2E01747ED7DEFE6CF944F46 (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, const RuntimeMethod* method) 
{
	typedef uint32_t (*Binding_unitytls_client_handshake_mD90B620858219D8DF2E01747ED7DEFE6CF944F46_ftn) (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80*);
	static Binding_unitytls_client_handshake_mD90B620858219D8DF2E01747ED7DEFE6CF944F46_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_handshake_mD90B620858219D8DF2E01747ED7DEFE6CF944F46_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_handshake(Unity.TLS.LowLevel.Binding/unitytls_client*)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_clientInstance);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_set_cookie_info_mF05314AE268C13A32F3E0C8C39FD3AA5F6D1FD97 (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, uint8_t* ___1_peerIdDataPtr, int32_t ___2_peerIdDataLen, const RuntimeMethod* method) 
{
	typedef uint32_t (*Binding_unitytls_client_set_cookie_info_mF05314AE268C13A32F3E0C8C39FD3AA5F6D1FD97_ftn) (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80*, uint8_t*, int32_t);
	static Binding_unitytls_client_set_cookie_info_mF05314AE268C13A32F3E0C8C39FD3AA5F6D1FD97_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_set_cookie_info_mF05314AE268C13A32F3E0C8C39FD3AA5F6D1FD97_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_set_cookie_info(Unity.TLS.LowLevel.Binding/unitytls_client*,System.Byte*,System.Int32)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_clientInstance, ___1_peerIdDataPtr, ___2_peerIdDataLen);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_get_handshake_state_m5DCB8B5E8841F1BCF2CC2E52310B30CCE0EB2199 (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, const RuntimeMethod* method) 
{
	typedef uint32_t (*Binding_unitytls_client_get_handshake_state_m5DCB8B5E8841F1BCF2CC2E52310B30CCE0EB2199_ftn) (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80*);
	static Binding_unitytls_client_get_handshake_state_m5DCB8B5E8841F1BCF2CC2E52310B30CCE0EB2199_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_get_handshake_state_m5DCB8B5E8841F1BCF2CC2E52310B30CCE0EB2199_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_get_handshake_state(Unity.TLS.LowLevel.Binding/unitytls_client*)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_clientInstance);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_get_errorsState_m7452878361ADEBEC32111BC8087D2C61F370505F (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, uint64_t* ___1_reserved, const RuntimeMethod* method) 
{
	typedef uint32_t (*Binding_unitytls_client_get_errorsState_m7452878361ADEBEC32111BC8087D2C61F370505F_ftn) (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80*, uint64_t*);
	static Binding_unitytls_client_get_errorsState_m7452878361ADEBEC32111BC8087D2C61F370505F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_get_errorsState_m7452878361ADEBEC32111BC8087D2C61F370505F_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_get_errorsState(Unity.TLS.LowLevel.Binding/unitytls_client*,System.UInt64*)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_clientInstance, ___1_reserved);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_get_state_mFA36FD1C48800D3B88D142ED9E1FFFC65F196B0F (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, const RuntimeMethod* method) 
{
	typedef uint32_t (*Binding_unitytls_client_get_state_mFA36FD1C48800D3B88D142ED9E1FFFC65F196B0F_ftn) (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80*);
	static Binding_unitytls_client_get_state_mFA36FD1C48800D3B88D142ED9E1FFFC65F196B0F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_get_state_mFA36FD1C48800D3B88D142ED9E1FFFC65F196B0F_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_get_state(Unity.TLS.LowLevel.Binding/unitytls_client*)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_clientInstance);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_get_role_m1F838334033B29D9251DDD0153303DEE21B6C8EB (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, const RuntimeMethod* method) 
{
	typedef uint32_t (*Binding_unitytls_client_get_role_m1F838334033B29D9251DDD0153303DEE21B6C8EB_ftn) (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80*);
	static Binding_unitytls_client_get_role_m1F838334033B29D9251DDD0153303DEE21B6C8EB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_get_role_m1F838334033B29D9251DDD0153303DEE21B6C8EB_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_get_role(Unity.TLS.LowLevel.Binding/unitytls_client*)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_clientInstance);
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
