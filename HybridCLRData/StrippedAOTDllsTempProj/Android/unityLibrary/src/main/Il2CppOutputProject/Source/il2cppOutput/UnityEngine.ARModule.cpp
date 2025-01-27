#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t965419817007A0833FFDB0294A6EEB4A9833FB56 
{
};
struct TangoInputTracking_t2414FC3BF78F0EF05EDD48C4223EB75E965F43F0  : public RuntimeObject
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
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
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
struct PoseStatus_t134625663BB7D2D0065F7AB3CDA4438D65185463 
{
	int32_t ___value__;
};
struct PoseData_t50F35DDE09AD0711D1477EA62E5ED2C232285C24 
{
	double ___orientation_x;
	double ___orientation_y;
	double ___orientation_z;
	double ___orientation_w;
	double ___translation_x;
	double ___translation_y;
	double ___translation_z;
	int32_t ___statusCode;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TangoInputTracking_Internal_TryGetPoseAtTime_m0AD46B35FDD35A1F12D069BC6D5F2EC33D403A54 (PoseData_t50F35DDE09AD0711D1477EA62E5ED2C232285C24* ___0_pose, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TangoInputTracking_Internal_TryGetPoseAtTime_m0AD46B35FDD35A1F12D069BC6D5F2EC33D403A54 (PoseData_t50F35DDE09AD0711D1477EA62E5ED2C232285C24* ___0_pose, const RuntimeMethod* method) 
{
	typedef bool (*TangoInputTracking_Internal_TryGetPoseAtTime_m0AD46B35FDD35A1F12D069BC6D5F2EC33D403A54_ftn) (PoseData_t50F35DDE09AD0711D1477EA62E5ED2C232285C24*);
	static TangoInputTracking_Internal_TryGetPoseAtTime_m0AD46B35FDD35A1F12D069BC6D5F2EC33D403A54_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TangoInputTracking_Internal_TryGetPoseAtTime_m0AD46B35FDD35A1F12D069BC6D5F2EC33D403A54_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.Tango.TangoInputTracking::Internal_TryGetPoseAtTime(UnityEngine.XR.Tango.PoseData&)");
	bool icallRetVal = _il2cpp_icall_func(___0_pose);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TangoInputTracking_TryGetPoseAtTime_m5BCF0745A286DFC34FB215B24CDD0A2E76073CA6 (PoseData_t50F35DDE09AD0711D1477EA62E5ED2C232285C24* ___0_pose, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		PoseData_t50F35DDE09AD0711D1477EA62E5ED2C232285C24* L_0 = ___0_pose;
		bool L_1;
		L_1 = TangoInputTracking_Internal_TryGetPoseAtTime_m0AD46B35FDD35A1F12D069BC6D5F2EC33D403A54(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
