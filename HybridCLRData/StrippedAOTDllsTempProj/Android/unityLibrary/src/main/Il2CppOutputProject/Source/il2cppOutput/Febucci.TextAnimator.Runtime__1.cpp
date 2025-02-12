#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8;
struct TagParserBaseU5BU5D_t23DEE28576FDD3E92C247136FF64F5D45DA54908;
struct ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE;
struct String_t;
struct StringBuilder_t;
struct TagParserBase_t21BF58DA27ADCBC5978693D5DE105A4AA8EB05C2;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral14EDC32F985F126F2A318052C89098F4BCEECD9A;
IL2CPP_EXTERN_C String_t* _stringLiteral3A50733D1FFE99A5ACF4FF018DF6656DC294AD07;
IL2CPP_EXTERN_C String_t* _stringLiteral800D136FB568368848160585EB115AE5A1A8B531;
IL2CPP_EXTERN_C String_t* _stringLiteralB8AE5545D3E5F6375E79706006E03AC3E0C936A8;
IL2CPP_EXTERN_C String_t* _stringLiteralE53B502B0381C8369A8AC454128EAB24C9C73723;
struct ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE;;
struct ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshaled_com;
struct ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshaled_com;;
struct ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshaled_pinvoke;
struct ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshaled_pinvoke;;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8;
struct TagParserBaseU5BU5D_t23DEE28576FDD3E92C247136FF64F5D45DA54908;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CPrivateImplementationDetailsU3E_t5A09EE416FCF651DF3A67BE92433C9710140E2C6  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct TagParserBase_t21BF58DA27ADCBC5978693D5DE105A4AA8EB05C2  : public RuntimeObject
{
	Il2CppChar ___startSymbol;
	Il2CppChar ___endSymbol;
	Il2CppChar ___closingSymbol;
};
struct TextParser_t306E5BB07C97A397E8038946C43065489D6521C7  : public RuntimeObject
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
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE 
{
	String_t* ___name;
	float ___value;
};
struct ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshaled_pinvoke
{
	char* ___name;
	float ___value;
};
struct ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshaled_com
{
	Il2CppChar* ___name;
	float ___value;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D3074_t3EB8687CCC9C2A61D84D55A9C482C14E43201EA9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3074_t3EB8687CCC9C2A61D84D55A9C482C14E43201EA9__padding[3074];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D8164_t5469ABEE287D63502270CFF53D1565CA89DFB028 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D8164_t5469ABEE287D63502270CFF53D1565CA89DFB028__padding[8164];
	};
};
#pragma pack(pop, tp)
struct U3CU3Ec__DisplayClass0_0_t64218273963D10BBC0CBC03898AEE9FAF7FE963C 
{
	bool ___foundTag;
	StringBuilder_t* ___result;
	String_t* ___fullTag;
};
struct U3CU3Ec__DisplayClass0_1_tD6C6E6504DD7FBF73A48024EBBA3A91EFD433F9F 
{
	int32_t ___textIndex;
};
struct U3CU3Ec__DisplayClass0_2_tD46D21E0EBF52F7540BBFBB87908B31F4102AC47 
{
	int32_t ___closeIndex;
};
struct TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3 
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___indexes;
	ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8* ___modifiers;
};
struct TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3_marshaled_pinvoke
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___indexes;
	ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshaled_pinvoke* ___modifiers;
};
struct TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3_marshaled_com
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___indexes;
	ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshaled_com* ___modifiers;
};
struct U3CPrivateImplementationDetailsU3E_t5A09EE416FCF651DF3A67BE92433C9710140E2C6_StaticFields
{
	__StaticArrayInitTypeSizeU3D8164_t5469ABEE287D63502270CFF53D1565CA89DFB028 ___A5225EB3B7C027AF1FD309AB7615EAA14379B9D2B6F456C7AB89A9228945C8CE;
	__StaticArrayInitTypeSizeU3D3074_t3EB8687CCC9C2A61D84D55A9C482C14E43201EA9 ___D2A744B19C52B44679030B2355ED620F31832E3E2C27D99C782A7541F75E89F8;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8  : public RuntimeArray
{
	ALIGN_FIELD (8) ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE m_Items[1];

	inline ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
	}
	inline ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
	}
};
struct TagParserBaseU5BU5D_t23DEE28576FDD3E92C247136FF64F5D45DA54908  : public RuntimeArray
{
	ALIGN_FIELD (8) TagParserBase_t21BF58DA27ADCBC5978693D5DE105A4AA8EB05C2* m_Items[1];

	inline TagParserBase_t21BF58DA27ADCBC5978693D5DE105A4AA8EB05C2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TagParserBase_t21BF58DA27ADCBC5978693D5DE105A4AA8EB05C2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TagParserBase_t21BF58DA27ADCBC5978693D5DE105A4AA8EB05C2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TagParserBase_t21BF58DA27ADCBC5978693D5DE105A4AA8EB05C2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TagParserBase_t21BF58DA27ADCBC5978693D5DE105A4AA8EB05C2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TagParserBase_t21BF58DA27ADCBC5978693D5DE105A4AA8EB05C2* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshal_pinvoke(const ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE& unmarshaled, ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshal_pinvoke_back(const ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshaled_pinvoke& marshaled, ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE& unmarshaled);
IL2CPP_EXTERN_C void ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshal_pinvoke_cleanup(ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshal_com(const ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE& unmarshaled, ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshaled_com& marshaled);
IL2CPP_EXTERN_C void ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshal_com_back(const ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshaled_com& marshaled, ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE& unmarshaled);
IL2CPP_EXTERN_C void ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshal_com_cleanup(ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshaled_com& marshaled);


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TagRange__ctor_m7141A375C2E7FB7676B3C8EE311A968C6A9BEEFD (TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_indexes, ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8* ___1_modifiers, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TagRange_ToString_mFFDDBC0A59D0BECC9D6D5DD3D5854B27B78AF935 (TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TagParserBase_Initialize_m66FC7EE5FB35DC890F458E45E831199004F56CEB (TagParserBase_t21BF58DA27ADCBC5978693D5DE105A4AA8EB05C2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4 (String_t* __this, Il2CppChar ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextParser_U3CParseTextU3Eg__PasteTagToTextU7C0_0_m549E86D538C116EDA976FF16BA8D72F29C8AD5D2 (U3CU3Ec__DisplayClass0_0_t64218273963D10BBC0CBC03898AEE9FAF7FE963C* ___0_p, U3CU3Ec__DisplayClass0_1_tD6C6E6504DD7FBF73A48024EBBA3A91EFD433F9F* ___1_p, U3CU3Ec__DisplayClass0_2_tD46D21E0EBF52F7540BBFBB87908B31F4102AC47* ___2_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


IL2CPP_EXTERN_C void TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3_marshal_pinvoke(const TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3& unmarshaled, TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3_marshaled_pinvoke& marshaled)
{
	marshaled.___indexes = unmarshaled.___indexes;
	if (unmarshaled.___modifiers != NULL)
	{
		il2cpp_array_size_t _unmarshaledmodifiers_Length = (unmarshaled.___modifiers)->max_length;
		marshaled.___modifiers = il2cpp_codegen_marshal_allocate_array<ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshaled_pinvoke>(_unmarshaledmodifiers_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledmodifiers_Length); i++)
		{
			ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshal_pinvoke((unmarshaled.___modifiers)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___modifiers)[i]);
		}
	}
	else
	{
		marshaled.___modifiers = NULL;
	}
}
IL2CPP_EXTERN_C void TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3_marshal_pinvoke_back(const TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3_marshaled_pinvoke& marshaled, TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A unmarshaledindexes_temp_0;
	memset((&unmarshaledindexes_temp_0), 0, sizeof(unmarshaledindexes_temp_0));
	unmarshaledindexes_temp_0 = marshaled.___indexes;
	unmarshaled.___indexes = unmarshaledindexes_temp_0;
	if (marshaled.___modifiers != NULL)
	{
		if (unmarshaled.___modifiers == NULL)
		{
			unmarshaled.___modifiers = reinterpret_cast<ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8*>((ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8*)SZArrayNew(ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___modifiers), (void*)reinterpret_cast<ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8*>((ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8*)SZArrayNew(ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___modifiers)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE _marshaled____modifiers_i__unmarshaled;
			memset((&_marshaled____modifiers_i__unmarshaled), 0, sizeof(_marshaled____modifiers_i__unmarshaled));
			ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshal_pinvoke_back((marshaled.___modifiers)[i], _marshaled____modifiers_i__unmarshaled);
			(unmarshaled.___modifiers)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____modifiers_i__unmarshaled);
		}
	}
}
IL2CPP_EXTERN_C void TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3_marshal_pinvoke_cleanup(TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3_marshaled_pinvoke& marshaled)
{
	if (marshaled.___modifiers != NULL)
	{
		const il2cpp_array_size_t marshaled____modifiers_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____modifiers_CleanupLoopCount); i++)
		{
			ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshal_pinvoke_cleanup((marshaled.___modifiers)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___modifiers);
		marshaled.___modifiers = NULL;
	}
}


IL2CPP_EXTERN_C void TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3_marshal_com(const TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3& unmarshaled, TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3_marshaled_com& marshaled)
{
	marshaled.___indexes = unmarshaled.___indexes;
	if (unmarshaled.___modifiers != NULL)
	{
		il2cpp_array_size_t _unmarshaledmodifiers_Length = (unmarshaled.___modifiers)->max_length;
		marshaled.___modifiers = il2cpp_codegen_marshal_allocate_array<ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshaled_com>(_unmarshaledmodifiers_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledmodifiers_Length); i++)
		{
			ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshal_com((unmarshaled.___modifiers)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___modifiers)[i]);
		}
	}
	else
	{
		marshaled.___modifiers = NULL;
	}
}
IL2CPP_EXTERN_C void TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3_marshal_com_back(const TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3_marshaled_com& marshaled, TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A unmarshaledindexes_temp_0;
	memset((&unmarshaledindexes_temp_0), 0, sizeof(unmarshaledindexes_temp_0));
	unmarshaledindexes_temp_0 = marshaled.___indexes;
	unmarshaled.___indexes = unmarshaledindexes_temp_0;
	if (marshaled.___modifiers != NULL)
	{
		if (unmarshaled.___modifiers == NULL)
		{
			unmarshaled.___modifiers = reinterpret_cast<ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8*>((ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8*)SZArrayNew(ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___modifiers), (void*)reinterpret_cast<ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8*>((ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8*)SZArrayNew(ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___modifiers)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE _marshaled____modifiers_i__unmarshaled;
			memset((&_marshaled____modifiers_i__unmarshaled), 0, sizeof(_marshaled____modifiers_i__unmarshaled));
			ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshal_com_back((marshaled.___modifiers)[i], _marshaled____modifiers_i__unmarshaled);
			(unmarshaled.___modifiers)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____modifiers_i__unmarshaled);
		}
	}
}
IL2CPP_EXTERN_C void TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3_marshal_com_cleanup(TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3_marshaled_com& marshaled)
{
	if (marshaled.___modifiers != NULL)
	{
		const il2cpp_array_size_t marshaled____modifiers_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____modifiers_CleanupLoopCount); i++)
		{
			ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_marshal_com_cleanup((marshaled.___modifiers)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___modifiers);
		marshaled.___modifiers = NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TagRange__ctor_m7141A375C2E7FB7676B3C8EE311A968C6A9BEEFD (TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_indexes, ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8* ___1_modifiers, const RuntimeMethod* method) 
{
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ___0_indexes;
		__this->___indexes = L_0;
		ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8* L_1 = ___1_modifiers;
		__this->___modifiers = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___modifiers), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void TagRange__ctor_m7141A375C2E7FB7676B3C8EE311A968C6A9BEEFD_AdjustorThunk (RuntimeObject* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_indexes, ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8* ___1_modifiers, const RuntimeMethod* method)
{
	TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3*>(__this + _offset);
	TagRange__ctor_m7141A375C2E7FB7676B3C8EE311A968C6A9BEEFD(_thisAdjusted, ___0_indexes, ___1_modifiers, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TagRange_ToString_mFFDDBC0A59D0BECC9D6D5DD3D5854B27B78AF935 (TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14EDC32F985F126F2A318052C89098F4BCEECD9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8AE5545D3E5F6375E79706006E03AC3E0C936A8);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	String_t* V_4 = NULL;
	int32_t G_B3_0 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteralB8AE5545D3E5F6375E79706006E03AC3E0C936A8, NULL);
		StringBuilder_t* L_3 = V_0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_4 = __this->___indexes;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_5 = L_4;
		RuntimeObject* L_6 = Box(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_3, L_6, NULL);
		ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8* L_8 = __this->___modifiers;
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8* L_9 = __this->___modifiers;
		NullCheck(L_9);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_9)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_003a;
	}

IL_0039:
	{
		G_B3_0 = 1;
	}

IL_003a:
	{
		V_1 = (bool)G_B3_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_004c;
		}
	}
	{
		StringBuilder_t* L_11 = V_0;
		NullCheck(L_11);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, _stringLiteral14EDC32F985F126F2A318052C89098F4BCEECD9A, NULL);
		goto IL_0091;
	}

IL_004c:
	{
		V_2 = 0;
		goto IL_0081;
	}

IL_0051:
	{
		StringBuilder_t* L_13 = V_0;
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, ((int32_t)10), NULL);
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, ((int32_t)45), NULL);
		StringBuilder_t* L_17 = V_0;
		ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8* L_18 = __this->___modifiers;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE L_22 = L_21;
		RuntimeObject* L_23 = Box(ModifierInfo_t43A2AC1ED19521FFEFD28599A50DAA014F51D2CE_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_17);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_17, L_23, NULL);
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0081:
	{
		int32_t L_26 = V_2;
		ModifierInfoU5BU5D_tBBA8481F821F549F8656A9F8239699601C94F8C8* L_27 = __this->___modifiers;
		NullCheck(L_27);
		V_3 = (bool)((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))? 1 : 0);
		bool L_28 = V_3;
		if (L_28)
		{
			goto IL_0051;
		}
	}
	{
	}

IL_0091:
	{
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_29);
		V_4 = L_30;
		goto IL_009b;
	}

IL_009b:
	{
		String_t* L_31 = V_4;
		return L_31;
	}
}
IL2CPP_EXTERN_C  String_t* TagRange_ToString_mFFDDBC0A59D0BECC9D6D5DD3D5854B27B78AF935_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TagRange_t88F7686D4A8AA21DE7964B0ABA65406AF22D7EC3*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = TagRange_ToString_mFFDDBC0A59D0BECC9D6D5DD3D5854B27B78AF935(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextParser_ParseText_mCF1211B868BDE5F8532ABE57E1CBAE19DCA593A8 (String_t* ___0_text, TagParserBaseU5BU5D_t23DEE28576FDD3E92C247136FF64F5D45DA54908* ___1_rules, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A50733D1FFE99A5ACF4FF018DF6656DC294AD07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral800D136FB568368848160585EB115AE5A1A8B531);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE53B502B0381C8369A8AC454128EAB24C9C73723);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_t64218273963D10BBC0CBC03898AEE9FAF7FE963C V_0;
	memset((&V_0), 0, sizeof(V_0));
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = NULL;
	TagParserBaseU5BU5D_t23DEE28576FDD3E92C247136FF64F5D45DA54908* V_6 = NULL;
	int32_t V_7 = 0;
	TagParserBase_t21BF58DA27ADCBC5978693D5DE105A4AA8EB05C2* V_8 = NULL;
	U3CU3Ec__DisplayClass0_1_tD6C6E6504DD7FBF73A48024EBBA3A91EFD433F9F V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	bool V_11 = false;
	U3CU3Ec__DisplayClass0_2_tD46D21E0EBF52F7540BBFBB87908B31F4102AC47 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	int32_t V_14 = 0;
	String_t* V_15 = NULL;
	String_t* V_16 = NULL;
	bool V_17 = false;
	TagParserBaseU5BU5D_t23DEE28576FDD3E92C247136FF64F5D45DA54908* V_18 = NULL;
	int32_t V_19 = 0;
	TagParserBase_t21BF58DA27ADCBC5978693D5DE105A4AA8EB05C2* V_20 = NULL;
	bool V_21 = false;
	int32_t V_22 = 0;
	bool V_23 = false;
	bool V_24 = false;
	int32_t V_25 = 0;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	int32_t V_30 = 0;
	bool V_31 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B37_0 = 0;
	{
		TagParserBaseU5BU5D_t23DEE28576FDD3E92C247136FF64F5D45DA54908* L_0 = ___1_rules;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		TagParserBaseU5BU5D_t23DEE28576FDD3E92C247136FF64F5D45DA54908* L_1 = ___1_rules;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_4 = (bool)G_B3_0;
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralE53B502B0381C8369A8AC454128EAB24C9C73723, NULL);
		String_t* L_3 = ___0_text;
		V_5 = L_3;
		goto IL_02b8;
	}

IL_0026:
	{
		TagParserBaseU5BU5D_t23DEE28576FDD3E92C247136FF64F5D45DA54908* L_4 = ___1_rules;
		V_6 = L_4;
		V_7 = 0;
		goto IL_0046;
	}

IL_002f:
	{
		TagParserBaseU5BU5D_t23DEE28576FDD3E92C247136FF64F5D45DA54908* L_5 = V_6;
		int32_t L_6 = V_7;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		TagParserBase_t21BF58DA27ADCBC5978693D5DE105A4AA8EB05C2* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_8 = L_8;
		TagParserBase_t21BF58DA27ADCBC5978693D5DE105A4AA8EB05C2* L_9 = V_8;
		NullCheck(L_9);
		TagParserBase_Initialize_m66FC7EE5FB35DC890F458E45E831199004F56CEB(L_9, NULL);
		int32_t L_10 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0046:
	{
		int32_t L_11 = V_7;
		TagParserBaseU5BU5D_t23DEE28576FDD3E92C247136FF64F5D45DA54908* L_12 = V_6;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_002f;
		}
	}
	{
		StringBuilder_t* L_13 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_13, NULL);
		(&V_0)->___result = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___result), (void*)L_13);
		String_t* L_14 = ___0_text;
		NullCheck(L_14);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15;
		L_15 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_14, NULL);
		V_1 = L_15;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = V_1;
		NullCheck(L_16);
		V_2 = ((int32_t)(((RuntimeArray*)L_16)->max_length));
		V_3 = (bool)1;
		(&V_9)->___textIndex = 0;
		V_10 = 0;
		goto IL_0296;
	}

IL_0077:
	{
		(&V_0)->___foundTag = (bool)0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = V_1;
		U3CU3Ec__DisplayClass0_1_tD6C6E6504DD7FBF73A48024EBBA3A91EFD433F9F L_18 = V_9;
		int32_t L_19 = L_18.___textIndex;
		NullCheck(L_17);
		int32_t L_20 = L_19;
		uint16_t L_21 = (uint16_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_11 = (bool)((((int32_t)L_21) == ((int32_t)((int32_t)60)))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_013b;
		}
	}
	{
		String_t* L_23 = ___0_text;
		U3CU3Ec__DisplayClass0_1_tD6C6E6504DD7FBF73A48024EBBA3A91EFD433F9F L_24 = V_9;
		int32_t L_25 = L_24.___textIndex;
		NullCheck(L_23);
		int32_t L_26;
		L_26 = String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4(L_23, ((int32_t)62), ((int32_t)il2cpp_codegen_add(L_25, 1)), NULL);
		(&V_12)->___closeIndex = L_26;
		U3CU3Ec__DisplayClass0_2_tD46D21E0EBF52F7540BBFBB87908B31F4102AC47 L_27 = V_12;
		int32_t L_28 = L_27.___closeIndex;
		V_13 = (bool)((((int32_t)L_28) > ((int32_t)0))? 1 : 0);
		bool L_29 = V_13;
		if (!L_29)
		{
			goto IL_013a;
		}
	}
	{
		U3CU3Ec__DisplayClass0_2_tD46D21E0EBF52F7540BBFBB87908B31F4102AC47 L_30 = V_12;
		int32_t L_31 = L_30.___closeIndex;
		U3CU3Ec__DisplayClass0_1_tD6C6E6504DD7FBF73A48024EBBA3A91EFD433F9F L_32 = V_9;
		int32_t L_33 = L_32.___textIndex;
		V_14 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_31, L_33)), 1));
		String_t* L_34 = ___0_text;
		U3CU3Ec__DisplayClass0_1_tD6C6E6504DD7FBF73A48024EBBA3A91EFD433F9F L_35 = V_9;
		int32_t L_36 = L_35.___textIndex;
		int32_t L_37 = V_14;
		NullCheck(L_34);
		String_t* L_38;
		L_38 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_34, L_36, L_37, NULL);
		(&V_0)->___fullTag = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___fullTag), (void*)L_38);
		U3CU3Ec__DisplayClass0_0_t64218273963D10BBC0CBC03898AEE9FAF7FE963C L_39 = V_0;
		String_t* L_40 = L_39.___fullTag;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_40, NULL);
		V_16 = L_41;
		String_t* L_42 = V_16;
		V_15 = L_42;
		String_t* L_43 = V_15;
		bool L_44;
		L_44 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_43, _stringLiteral800D136FB568368848160585EB115AE5A1A8B531, NULL);
		if (L_44)
		{
			goto IL_0119;
		}
	}
	{
		String_t* L_45 = V_15;
		bool L_46;
		L_46 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_45, _stringLiteral3A50733D1FFE99A5ACF4FF018DF6656DC294AD07, NULL);
		if (L_46)
		{
			goto IL_0129;
		}
	}
	{
		goto IL_0139;
	}

IL_0119:
	{
		V_3 = (bool)0;
		TextParser_U3CParseTextU3Eg__PasteTagToTextU7C0_0_m549E86D538C116EDA976FF16BA8D72F29C8AD5D2((&V_0), (&V_9), (&V_12), NULL);
		goto IL_0139;
	}

IL_0129:
	{
		V_3 = (bool)1;
		TextParser_U3CParseTextU3Eg__PasteTagToTextU7C0_0_m549E86D538C116EDA976FF16BA8D72F29C8AD5D2((&V_0), (&V_9), (&V_12), NULL);
		goto IL_0139;
	}

IL_0139:
	{
	}

IL_013a:
	{
	}

IL_013b:
	{
		bool L_47 = V_3;
		if (!L_47)
		{
			goto IL_0149;
		}
	}
	{
		U3CU3Ec__DisplayClass0_0_t64218273963D10BBC0CBC03898AEE9FAF7FE963C L_48 = V_0;
		bool L_49 = L_48.___foundTag;
		G_B21_0 = ((((int32_t)L_49) == ((int32_t)0))? 1 : 0);
		goto IL_014a;
	}

IL_0149:
	{
		G_B21_0 = 0;
	}

IL_014a:
	{
		V_17 = (bool)G_B21_0;
		bool L_50 = V_17;
		if (!L_50)
		{
			goto IL_0255;
		}
	}
	{
		TagParserBaseU5BU5D_t23DEE28576FDD3E92C247136FF64F5D45DA54908* L_51 = ___1_rules;
		V_18 = L_51;
		V_19 = 0;
		goto IL_0249;
	}

IL_0160:
	{
		TagParserBaseU5BU5D_t23DEE28576FDD3E92C247136FF64F5D45DA54908* L_52 = V_18;
		int32_t L_53 = V_19;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		TagParserBase_t21BF58DA27ADCBC5978693D5DE105A4AA8EB05C2* L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_20 = L_55;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_56 = V_1;
		U3CU3Ec__DisplayClass0_1_tD6C6E6504DD7FBF73A48024EBBA3A91EFD433F9F L_57 = V_9;
		int32_t L_58 = L_57.___textIndex;
		NullCheck(L_56);
		int32_t L_59 = L_58;
		uint16_t L_60 = (uint16_t)(L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		TagParserBase_t21BF58DA27ADCBC5978693D5DE105A4AA8EB05C2* L_61 = V_20;
		NullCheck(L_61);
		Il2CppChar L_62 = L_61->___startSymbol;
		V_21 = (bool)((((int32_t)L_60) == ((int32_t)L_62))? 1 : 0);
		bool L_63 = V_21;
		if (!L_63)
		{
			goto IL_0242;
		}
	}
	{
		U3CU3Ec__DisplayClass0_1_tD6C6E6504DD7FBF73A48024EBBA3A91EFD433F9F L_64 = V_9;
		int32_t L_65 = L_64.___textIndex;
		V_22 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		goto IL_0227;
	}

IL_0194:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_66 = V_1;
		int32_t L_67 = V_22;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		uint16_t L_69 = (uint16_t)(L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		TagParserBase_t21BF58DA27ADCBC5978693D5DE105A4AA8EB05C2* L_70 = V_20;
		NullCheck(L_70);
		Il2CppChar L_71 = L_70->___startSymbol;
		V_23 = (bool)((((int32_t)L_69) == ((int32_t)L_71))? 1 : 0);
		bool L_72 = V_23;
		if (!L_72)
		{
			goto IL_01ad;
		}
	}
	{
		goto IL_0241;
	}

IL_01ad:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_73 = V_1;
		int32_t L_74 = V_22;
		NullCheck(L_73);
		int32_t L_75 = L_74;
		uint16_t L_76 = (uint16_t)(L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		TagParserBase_t21BF58DA27ADCBC5978693D5DE105A4AA8EB05C2* L_77 = V_20;
		NullCheck(L_77);
		Il2CppChar L_78 = L_77->___endSymbol;
		V_24 = (bool)((((int32_t)L_76) == ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_24;
		if (!L_79)
		{
			goto IL_0220;
		}
	}
	{
		int32_t L_80 = V_22;
		U3CU3Ec__DisplayClass0_1_tD6C6E6504DD7FBF73A48024EBBA3A91EFD433F9F L_81 = V_9;
		int32_t L_82 = L_81.___textIndex;
		V_25 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_80, L_82)), 1));
		int32_t L_83 = V_25;
		V_26 = (bool)((((int32_t)L_83) == ((int32_t)0))? 1 : 0);
		bool L_84 = V_26;
		if (!L_84)
		{
			goto IL_01dc;
		}
	}
	{
		goto IL_0241;
	}

IL_01dc:
	{
		TagParserBase_t21BF58DA27ADCBC5978693D5DE105A4AA8EB05C2* L_85 = V_20;
		String_t* L_86 = ___0_text;
		U3CU3Ec__DisplayClass0_1_tD6C6E6504DD7FBF73A48024EBBA3A91EFD433F9F L_87 = V_9;
		int32_t L_88 = L_87.___textIndex;
		int32_t L_89 = V_25;
		NullCheck(L_86);
		String_t* L_90;
		L_90 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_86, ((int32_t)il2cpp_codegen_add(L_88, 1)), L_89, NULL);
		int32_t L_91 = V_25;
		U3CU3Ec__DisplayClass0_0_t64218273963D10BBC0CBC03898AEE9FAF7FE963C L_92 = V_0;
		StringBuilder_t* L_93 = L_92.___result;
		U3CU3Ec__DisplayClass0_1_tD6C6E6504DD7FBF73A48024EBBA3A91EFD433F9F L_94 = V_9;
		int32_t L_95 = L_94.___textIndex;
		NullCheck(L_85);
		bool L_96;
		L_96 = VirtualFuncInvoker5< bool, String_t*, int32_t, int32_t*, StringBuilder_t*, int32_t >::Invoke(4, L_85, L_90, L_91, (&V_10), L_93, L_95);
		V_27 = L_96;
		bool L_97 = V_27;
		if (!L_97)
		{
			goto IL_021f;
		}
	}
	{
		(&V_0)->___foundTag = (bool)1;
		int32_t L_98 = V_22;
		(&V_9)->___textIndex = L_98;
		goto IL_0241;
	}

IL_021f:
	{
	}

IL_0220:
	{
		int32_t L_99 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_99, 1));
	}

IL_0227:
	{
		int32_t L_100 = V_22;
		int32_t L_101 = V_2;
		if ((((int32_t)L_100) >= ((int32_t)L_101)))
		{
			goto IL_0237;
		}
	}
	{
		U3CU3Ec__DisplayClass0_0_t64218273963D10BBC0CBC03898AEE9FAF7FE963C L_102 = V_0;
		bool L_103 = L_102.___foundTag;
		G_B37_0 = ((((int32_t)L_103) == ((int32_t)0))? 1 : 0);
		goto IL_0238;
	}

IL_0237:
	{
		G_B37_0 = 0;
	}

IL_0238:
	{
		V_28 = (bool)G_B37_0;
		bool L_104 = V_28;
		if (L_104)
		{
			goto IL_0194;
		}
	}

IL_0241:
	{
	}

IL_0242:
	{
		int32_t L_105 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_105, 1));
	}

IL_0249:
	{
		int32_t L_106 = V_19;
		TagParserBaseU5BU5D_t23DEE28576FDD3E92C247136FF64F5D45DA54908* L_107 = V_18;
		NullCheck(L_107);
		if ((((int32_t)L_106) < ((int32_t)((int32_t)(((RuntimeArray*)L_107)->max_length)))))
		{
			goto IL_0160;
		}
	}
	{
	}

IL_0255:
	{
		U3CU3Ec__DisplayClass0_0_t64218273963D10BBC0CBC03898AEE9FAF7FE963C L_108 = V_0;
		bool L_109 = L_108.___foundTag;
		V_29 = (bool)((((int32_t)L_109) == ((int32_t)0))? 1 : 0);
		bool L_110 = V_29;
		if (!L_110)
		{
			goto IL_0281;
		}
	}
	{
		U3CU3Ec__DisplayClass0_0_t64218273963D10BBC0CBC03898AEE9FAF7FE963C L_111 = V_0;
		StringBuilder_t* L_112 = L_111.___result;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_113 = V_1;
		U3CU3Ec__DisplayClass0_1_tD6C6E6504DD7FBF73A48024EBBA3A91EFD433F9F L_114 = V_9;
		int32_t L_115 = L_114.___textIndex;
		NullCheck(L_113);
		int32_t L_116 = L_115;
		uint16_t L_117 = (uint16_t)(L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		NullCheck(L_112);
		StringBuilder_t* L_118;
		L_118 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_112, L_117, NULL);
		int32_t L_119 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_119, 1));
	}

IL_0281:
	{
		U3CU3Ec__DisplayClass0_1_tD6C6E6504DD7FBF73A48024EBBA3A91EFD433F9F L_120 = V_9;
		int32_t L_121 = L_120.___textIndex;
		V_30 = L_121;
		int32_t L_122 = V_30;
		(&V_9)->___textIndex = ((int32_t)il2cpp_codegen_add(L_122, 1));
	}

IL_0296:
	{
		U3CU3Ec__DisplayClass0_1_tD6C6E6504DD7FBF73A48024EBBA3A91EFD433F9F L_123 = V_9;
		int32_t L_124 = L_123.___textIndex;
		int32_t L_125 = V_2;
		V_31 = (bool)((((int32_t)L_124) < ((int32_t)L_125))? 1 : 0);
		bool L_126 = V_31;
		if (L_126)
		{
			goto IL_0077;
		}
	}
	{
		U3CU3Ec__DisplayClass0_0_t64218273963D10BBC0CBC03898AEE9FAF7FE963C L_127 = V_0;
		StringBuilder_t* L_128 = L_127.___result;
		NullCheck(L_128);
		String_t* L_129;
		L_129 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_128);
		V_5 = L_129;
		goto IL_02b8;
	}

IL_02b8:
	{
		String_t* L_130 = V_5;
		return L_130;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextParser_U3CParseTextU3Eg__PasteTagToTextU7C0_0_m549E86D538C116EDA976FF16BA8D72F29C8AD5D2 (U3CU3Ec__DisplayClass0_0_t64218273963D10BBC0CBC03898AEE9FAF7FE963C* ___0_p, U3CU3Ec__DisplayClass0_1_tD6C6E6504DD7FBF73A48024EBBA3A91EFD433F9F* ___1_p, U3CU3Ec__DisplayClass0_2_tD46D21E0EBF52F7540BBFBB87908B31F4102AC47* ___2_p, const RuntimeMethod* method) 
{
	{
		U3CU3Ec__DisplayClass0_0_t64218273963D10BBC0CBC03898AEE9FAF7FE963C* L_0 = ___0_p;
		L_0->___foundTag = (bool)1;
		U3CU3Ec__DisplayClass0_0_t64218273963D10BBC0CBC03898AEE9FAF7FE963C* L_1 = ___0_p;
		StringBuilder_t* L_2 = L_1->___result;
		U3CU3Ec__DisplayClass0_0_t64218273963D10BBC0CBC03898AEE9FAF7FE963C* L_3 = ___0_p;
		String_t* L_4 = L_3->___fullTag;
		NullCheck(L_2);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, L_4, NULL);
		U3CU3Ec__DisplayClass0_1_tD6C6E6504DD7FBF73A48024EBBA3A91EFD433F9F* L_6 = ___1_p;
		U3CU3Ec__DisplayClass0_2_tD46D21E0EBF52F7540BBFBB87908B31F4102AC47* L_7 = ___2_p;
		int32_t L_8 = L_7->___closeIndex;
		L_6->___textIndex = L_8;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TagParserBase__ctor_m863DBE0F74A3D6B4B777B3D0C5FB535452ECC7A0 (TagParserBase_t21BF58DA27ADCBC5978693D5DE105A4AA8EB05C2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TagParserBase__ctor_mE2D33F2904CD4A80998AD13CE8AEA121F615556E (TagParserBase_t21BF58DA27ADCBC5978693D5DE105A4AA8EB05C2* __this, Il2CppChar ___0_startSymbol, Il2CppChar ___1_closingSymbol, Il2CppChar ___2_endSymbol, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Il2CppChar L_0 = ___0_startSymbol;
		__this->___startSymbol = L_0;
		Il2CppChar L_1 = ___1_closingSymbol;
		__this->___closingSymbol = L_1;
		Il2CppChar L_2 = ___2_endSymbol;
		__this->___endSymbol = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TagParserBase_Initialize_m66FC7EE5FB35DC890F458E45E831199004F56CEB (TagParserBase_t21BF58DA27ADCBC5978693D5DE105A4AA8EB05C2* __this, const RuntimeMethod* method) 
{
	{
		VirtualActionInvoker0::Invoke(5, __this);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TagParserBase_OnInitialize_mA661229B98CE5E28849136C34D0A17B97311D157 (TagParserBase_t21BF58DA27ADCBC5978693D5DE105A4AA8EB05C2* __this, const RuntimeMethod* method) 
{
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
