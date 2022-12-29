#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t89E8276D3076D97BEC4E4A0051D68814BAFD967D;
// UnityEngine.HideInInspector
struct HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t4B19E717B056B6C1BA6EB0333BFA76CC2E2D3F7E;
// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25;
// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t89E8276D3076D97BEC4E4A0051D68814BAFD967D  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// UnityEngine.HideInInspector
struct HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t4B19E717B056B6C1BA6EB0333BFA76CC2E2D3F7E  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_0), (void*)value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
	}
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m4A78786786CEB8310CADB95682FCE27EE5BAD8AB (EmbeddedAttribute_t89E8276D3076D97BEC4E4A0051D68814BAFD967D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SerializeField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3 (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * __this, const RuntimeMethod* method);
// System.Void System.ObsoleteAttribute::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsoleteAttribute__ctor_m058D2B798E9AB7E7778A6DB04C3FE7011C660F4C (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * __this, String_t* ___message0, bool ___error1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m550CE99F8EBFC67DA3C3BC6780F1A9FCB877ECC9 (IsReadOnlyAttribute_t4B19E717B056B6C1BA6EB0333BFA76CC2E2D3F7E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.HideInInspector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9 (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * __this, const RuntimeMethod* method);
static void UniWebViewU2DCSharp_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[0];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[1];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[2];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
}
static void EmbeddedAttribute_t89E8276D3076D97BEC4E4A0051D68814BAFD967D_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		EmbeddedAttribute_t89E8276D3076D97BEC4E4A0051D68814BAFD967D * tmp = (EmbeddedAttribute_t89E8276D3076D97BEC4E4A0051D68814BAFD967D *)cache->attributes[1];
		EmbeddedAttribute__ctor_m4A78786786CEB8310CADB95682FCE27EE5BAD8AB(tmp, NULL);
	}
}
static void IsReadOnlyAttribute_t4B19E717B056B6C1BA6EB0333BFA76CC2E2D3F7E_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		EmbeddedAttribute_t89E8276D3076D97BEC4E4A0051D68814BAFD967D * tmp = (EmbeddedAttribute_t89E8276D3076D97BEC4E4A0051D68814BAFD967D *)cache->attributes[0];
		EmbeddedAttribute__ctor_m4A78786786CEB8310CADB95682FCE27EE5BAD8AB(tmp, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnPageStarted(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnPageFinished(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnPageErrorReceived(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnPageProgressChanged(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnMessageReceived(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnShouldClose(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnOrientationChanged(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnWebContentProcessTerminated(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnFileDownloadStarted(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnFileDownloadFinished(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnCaptureSnapshotFinished(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnMultipleWindowOpened(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnMultipleWindowClosed(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_urlOnStart(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_showOnStart(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_fullScreen(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_useToolbar(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_toolbarPosition(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_frame(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_referenceRectTransform(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnKeyCodeReceived(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnPageStarted_m0A772944ECBF553260091FC2F92B7A52F4BEC897(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnPageStarted_m3ED97FEF5DD95E990B08EC91617F8624F6350421(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnPageFinished_mA345BDA8B1E345B4217580F467DEF3F2F75B6D66(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnPageFinished_mC6481665D55698B616F7C113B15C2700556ADBEE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnPageErrorReceived_m41FBFA182ACEF59D4B0DF7A59EC62FFC10DA6FFC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnPageErrorReceived_mDA762EB4F7AFE313E7E2C9E9EAE03F6686E6B1B3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnPageProgressChanged_m143968411BBAF2D9D181A7C5CBD7444D177DB6D8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnPageProgressChanged_m9650FBF07628D94F0C3E58361CA5FEFA8BC11ED6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnMessageReceived_mA5C0F5E5A7468C50F4BC270BA8352FF8DB8717E3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnMessageReceived_mCA3339A50ADE5D2EF3D732F6C7EEF459ABCD57C1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnShouldClose_mE169B06B9E462946608C632B0B36AE652A5901AD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnShouldClose_mDAE45818A95BAFE5F40131035991FC4531E8996A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnOrientationChanged_mE64B49CE720AFB307028C1DBDB87C124C8299D2F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnOrientationChanged_m71412DBA4BADEADFD20A40603F2BCB8FD5E11BDB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnWebContentProcessTerminated_m31140BA578EFFCC1ED44B309C41C5D571E96AF58(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnWebContentProcessTerminated_m0002121A90DCECFE3690108C0E57887C4C996846(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnFileDownloadStarted_m95005889C52B03ABF058797012830839675FFA18(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnFileDownloadStarted_m447A519F9C6F0C319A62E7D259DB118428F17FED(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnFileDownloadFinished_m60C9D58E250BE6650354D26C895F9EF2DEA26974(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnFileDownloadFinished_mCCADAA0A6B2E01D56FB5C7188C21A42B606113AF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnCaptureSnapshotFinished_m0D2C47DEFF2FC1C38C96443BE04F7C4FE8F1FAA9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnCaptureSnapshotFinished_m788EF3DC81F717FBCBFBC6181CB6945F9AF64C38(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnMultipleWindowOpened_mC2A813940DC60B43023CD0700D284C478557096E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnMultipleWindowOpened_m452681CF5178D4242A573C30BD4CF0BE80A92477(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnMultipleWindowClosed_m6DF712E8E3A26E09F3CA83577A89D9D2CE8E719E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnMultipleWindowClosed_m793044DECADBD0F3B425B8CB29B6AD858058CB03(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_SetImmersiveModeEnabled_m3BC1BD2A5AB65D40AEA3D426BC9B6B0337942B77(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m058D2B798E9AB7E7778A6DB04C3FE7011C660F4C(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x74\x49\x6D\x6D\x65\x72\x73\x69\x76\x65\x4D\x6F\x64\x65\x45\x6E\x61\x62\x6C\x65\x64\x20\x69\x73\x20\x64\x65\x70\x72\x65\x63\x61\x74\x65\x64\x2E\x20\x4E\x6F\x77\x20\x55\x6E\x69\x57\x65\x62\x56\x69\x65\x77\x20\x61\x6C\x77\x61\x79\x73\x20\x72\x65\x73\x70\x65\x63\x74\x20\x6E\x61\x76\x69\x67\x61\x74\x69\x6F\x6E\x20\x62\x61\x72\x2F\x73\x74\x61\x74\x75\x73\x20\x62\x61\x72\x20\x73\x65\x74\x74\x69\x6E\x67\x73\x20\x66\x72\x6F\x6D\x20\x55\x6E\x69\x74\x79\x2E"), false, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnKeyCodeReceived_m9CF7723C5C85CB256AE5409C4EC02D59F6F572F9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnKeyCodeReceived_mF6A25CDD916E899244A2B6B4494DC2A7561EDAA5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D____OnKeyCodeReceived_EventInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m058D2B798E9AB7E7778A6DB04C3FE7011C660F4C(tmp, il2cpp_codegen_string_new_wrapper("\x4F\x6E\x4B\x65\x79\x43\x6F\x64\x65\x52\x65\x63\x65\x69\x76\x65\x64\x20\x69\x73\x20\x64\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x61\x6E\x64\x20\x6E\x65\x76\x65\x72\x20\x63\x61\x6C\x6C\x65\x64\x2E\x20\x4E\x6F\x77\x20\x55\x6E\x69\x57\x65\x62\x56\x69\x65\x77\x20\x6E\x65\x76\x65\x72\x20\x69\x6E\x74\x65\x72\x63\x65\x70\x74\x73\x20\x64\x65\x76\x69\x63\x65\x20\x6B\x65\x79\x20\x63\x6F\x64\x65\x20\x65\x76\x65\x6E\x74\x73\x2E\x20\x43\x68\x65\x63\x6B\x20\x60\x49\x6E\x70\x75\x74\x2E\x47\x65\x74\x4B\x65\x79\x55\x70\x60\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), false, NULL);
	}
}
static void KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m058D2B798E9AB7E7778A6DB04C3FE7011C660F4C(tmp, il2cpp_codegen_string_new_wrapper("\x4B\x65\x79\x43\x6F\x64\x65\x52\x65\x63\x65\x69\x76\x65\x64\x44\x65\x6C\x65\x67\x61\x74\x65\x20\x69\x73\x20\x64\x65\x70\x72\x65\x63\x61\x74\x65\x64\x2E\x20\x4E\x6F\x77\x20\x55\x6E\x69\x57\x65\x62\x56\x69\x65\x77\x20\x6E\x65\x76\x65\x72\x20\x69\x6E\x74\x65\x72\x63\x65\x70\x74\x73\x20\x64\x65\x76\x69\x63\x65\x20\x6B\x65\x79\x20\x63\x6F\x64\x65\x20\x65\x76\x65\x6E\x74\x73\x2E\x20\x43\x68\x65\x63\x6B\x20\x60\x49\x6E\x70\x75\x74\x2E\x47\x65\x74\x4B\x65\x79\x55\x70\x60\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), false, NULL);
	}
}
static void U3CU3Ec__DisplayClass147_0_t22B9F896525CEE39A0E34637FEC8801CE13D1CC7_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_CustomAttributesCacheGenerator_U3CRawMessageU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_CustomAttributesCacheGenerator_U3CSchemeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_CustomAttributesCacheGenerator_U3CPathU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_CustomAttributesCacheGenerator_U3CArgsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_CustomAttributesCacheGenerator_UniWebViewMessage_get_RawMessage_m19FAD7EFE68623EA8F3F707A8A89F1C1DF70E09D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_t4B19E717B056B6C1BA6EB0333BFA76CC2E2D3F7E * tmp = (IsReadOnlyAttribute_t4B19E717B056B6C1BA6EB0333BFA76CC2E2D3F7E *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m550CE99F8EBFC67DA3C3BC6780F1A9FCB877ECC9(tmp, NULL);
	}
}
static void UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_CustomAttributesCacheGenerator_UniWebViewMessage_set_RawMessage_mE16E8B64FF787A83CFDD3D8B87C1A37D79F469BE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_CustomAttributesCacheGenerator_UniWebViewMessage_get_Scheme_mEE66730B22BBC5667A649200EE7252B91935C6DA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_t4B19E717B056B6C1BA6EB0333BFA76CC2E2D3F7E * tmp = (IsReadOnlyAttribute_t4B19E717B056B6C1BA6EB0333BFA76CC2E2D3F7E *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m550CE99F8EBFC67DA3C3BC6780F1A9FCB877ECC9(tmp, NULL);
	}
}
static void UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_CustomAttributesCacheGenerator_UniWebViewMessage_set_Scheme_m492CC65C3EEA256F70D776658D1008328932A2D6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_CustomAttributesCacheGenerator_UniWebViewMessage_get_Path_mB5F1D6C5958D5114D3ED7294392E2444D58ACA32(CustomAttributesCache* cache)
{
	{
		IsReadOnlyAttribute_t4B19E717B056B6C1BA6EB0333BFA76CC2E2D3F7E * tmp = (IsReadOnlyAttribute_t4B19E717B056B6C1BA6EB0333BFA76CC2E2D3F7E *)cache->attributes[0];
		IsReadOnlyAttribute__ctor_m550CE99F8EBFC67DA3C3BC6780F1A9FCB877ECC9(tmp, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_CustomAttributesCacheGenerator_UniWebViewMessage_set_Path_m7B32AA816651D1DC8B7F7352CC75A144738154E1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_CustomAttributesCacheGenerator_UniWebViewMessage_get_Args_mABDBE768100A9408C644B7478411B04FD7BFD8AC(CustomAttributesCache* cache)
{
	{
		IsReadOnlyAttribute_t4B19E717B056B6C1BA6EB0333BFA76CC2E2D3F7E * tmp = (IsReadOnlyAttribute_t4B19E717B056B6C1BA6EB0333BFA76CC2E2D3F7E *)cache->attributes[0];
		IsReadOnlyAttribute__ctor_m550CE99F8EBFC67DA3C3BC6780F1A9FCB877ECC9(tmp, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_CustomAttributesCacheGenerator_UniWebViewMessage_set_Args_mA03F442CD6BE845D3AB05DEB4BB8CACC6E67B9F9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_CustomAttributesCacheGenerator_webView(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_CustomAttributesCacheGenerator_safeBrowsing(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void UniWebViewSafeBrowingComponent_tBA0A33F011EBE1BD20764B1B92F10A0459A74312_CustomAttributesCacheGenerator_url(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD_CustomAttributesCacheGenerator_OnSafeBrowsingFinished(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD_CustomAttributesCacheGenerator_UniWebViewSafeBrowsing_add_OnSafeBrowsingFinished_m5F6A7E9D94FCF87E47DB15B6FED0BC66E1038D3B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD_CustomAttributesCacheGenerator_UniWebViewSafeBrowsing_remove_OnSafeBrowsingFinished_m62E8A6664C378A5FDB8882CCD3BD97014FF76EA6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_UniWebViewU2DCSharp_AttributeGenerators[];
const CustomAttributesCacheGenerator g_UniWebViewU2DCSharp_AttributeGenerators[74] = 
{
	EmbeddedAttribute_t89E8276D3076D97BEC4E4A0051D68814BAFD967D_CustomAttributesCacheGenerator,
	IsReadOnlyAttribute_t4B19E717B056B6C1BA6EB0333BFA76CC2E2D3F7E_CustomAttributesCacheGenerator,
	KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass147_0_t22B9F896525CEE39A0E34637FEC8801CE13D1CC7_CustomAttributesCacheGenerator,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnPageStarted,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnPageFinished,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnPageErrorReceived,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnPageProgressChanged,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnMessageReceived,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnShouldClose,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnOrientationChanged,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnWebContentProcessTerminated,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnFileDownloadStarted,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnFileDownloadFinished,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnCaptureSnapshotFinished,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnMultipleWindowOpened,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnMultipleWindowClosed,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_urlOnStart,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_showOnStart,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_fullScreen,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_useToolbar,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_toolbarPosition,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_frame,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_referenceRectTransform,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_OnKeyCodeReceived,
	UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_CustomAttributesCacheGenerator_U3CRawMessageU3Ek__BackingField,
	UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_CustomAttributesCacheGenerator_U3CSchemeU3Ek__BackingField,
	UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_CustomAttributesCacheGenerator_U3CPathU3Ek__BackingField,
	UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_CustomAttributesCacheGenerator_U3CArgsU3Ek__BackingField,
	UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_CustomAttributesCacheGenerator_webView,
	UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_CustomAttributesCacheGenerator_safeBrowsing,
	UniWebViewSafeBrowingComponent_tBA0A33F011EBE1BD20764B1B92F10A0459A74312_CustomAttributesCacheGenerator_url,
	UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD_CustomAttributesCacheGenerator_OnSafeBrowsingFinished,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnPageStarted_m0A772944ECBF553260091FC2F92B7A52F4BEC897,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnPageStarted_m3ED97FEF5DD95E990B08EC91617F8624F6350421,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnPageFinished_mA345BDA8B1E345B4217580F467DEF3F2F75B6D66,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnPageFinished_mC6481665D55698B616F7C113B15C2700556ADBEE,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnPageErrorReceived_m41FBFA182ACEF59D4B0DF7A59EC62FFC10DA6FFC,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnPageErrorReceived_mDA762EB4F7AFE313E7E2C9E9EAE03F6686E6B1B3,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnPageProgressChanged_m143968411BBAF2D9D181A7C5CBD7444D177DB6D8,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnPageProgressChanged_m9650FBF07628D94F0C3E58361CA5FEFA8BC11ED6,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnMessageReceived_mA5C0F5E5A7468C50F4BC270BA8352FF8DB8717E3,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnMessageReceived_mCA3339A50ADE5D2EF3D732F6C7EEF459ABCD57C1,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnShouldClose_mE169B06B9E462946608C632B0B36AE652A5901AD,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnShouldClose_mDAE45818A95BAFE5F40131035991FC4531E8996A,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnOrientationChanged_mE64B49CE720AFB307028C1DBDB87C124C8299D2F,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnOrientationChanged_m71412DBA4BADEADFD20A40603F2BCB8FD5E11BDB,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnWebContentProcessTerminated_m31140BA578EFFCC1ED44B309C41C5D571E96AF58,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnWebContentProcessTerminated_m0002121A90DCECFE3690108C0E57887C4C996846,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnFileDownloadStarted_m95005889C52B03ABF058797012830839675FFA18,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnFileDownloadStarted_m447A519F9C6F0C319A62E7D259DB118428F17FED,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnFileDownloadFinished_m60C9D58E250BE6650354D26C895F9EF2DEA26974,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnFileDownloadFinished_mCCADAA0A6B2E01D56FB5C7188C21A42B606113AF,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnCaptureSnapshotFinished_m0D2C47DEFF2FC1C38C96443BE04F7C4FE8F1FAA9,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnCaptureSnapshotFinished_m788EF3DC81F717FBCBFBC6181CB6945F9AF64C38,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnMultipleWindowOpened_mC2A813940DC60B43023CD0700D284C478557096E,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnMultipleWindowOpened_m452681CF5178D4242A573C30BD4CF0BE80A92477,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnMultipleWindowClosed_m6DF712E8E3A26E09F3CA83577A89D9D2CE8E719E,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnMultipleWindowClosed_m793044DECADBD0F3B425B8CB29B6AD858058CB03,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_SetImmersiveModeEnabled_m3BC1BD2A5AB65D40AEA3D426BC9B6B0337942B77,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_add_OnKeyCodeReceived_m9CF7723C5C85CB256AE5409C4EC02D59F6F572F9,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_remove_OnKeyCodeReceived_mF6A25CDD916E899244A2B6B4494DC2A7561EDAA5,
	UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_CustomAttributesCacheGenerator_UniWebViewMessage_get_RawMessage_m19FAD7EFE68623EA8F3F707A8A89F1C1DF70E09D,
	UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_CustomAttributesCacheGenerator_UniWebViewMessage_set_RawMessage_mE16E8B64FF787A83CFDD3D8B87C1A37D79F469BE,
	UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_CustomAttributesCacheGenerator_UniWebViewMessage_get_Scheme_mEE66730B22BBC5667A649200EE7252B91935C6DA,
	UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_CustomAttributesCacheGenerator_UniWebViewMessage_set_Scheme_m492CC65C3EEA256F70D776658D1008328932A2D6,
	UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_CustomAttributesCacheGenerator_UniWebViewMessage_get_Path_mB5F1D6C5958D5114D3ED7294392E2444D58ACA32,
	UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_CustomAttributesCacheGenerator_UniWebViewMessage_set_Path_m7B32AA816651D1DC8B7F7352CC75A144738154E1,
	UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_CustomAttributesCacheGenerator_UniWebViewMessage_get_Args_mABDBE768100A9408C644B7478411B04FD7BFD8AC,
	UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_CustomAttributesCacheGenerator_UniWebViewMessage_set_Args_mA03F442CD6BE845D3AB05DEB4BB8CACC6E67B9F9,
	UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD_CustomAttributesCacheGenerator_UniWebViewSafeBrowsing_add_OnSafeBrowsingFinished_m5F6A7E9D94FCF87E47DB15B6FED0BC66E1038D3B,
	UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD_CustomAttributesCacheGenerator_UniWebViewSafeBrowsing_remove_OnSafeBrowsingFinished_m62E8A6664C378A5FDB8882CCD3BD97014FF76EA6,
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D_CustomAttributesCacheGenerator_UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D____OnKeyCodeReceived_EventInfo,
	UniWebViewU2DCSharp_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
