#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Action`1<UniWebViewNativeResultPayload>
struct Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>
struct Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383;
// System.Collections.Generic.Dictionary`2<System.String,System.Action>
struct Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.Dictionary`2<System.String,UniWebViewNativeListener>
struct Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`1<UniWebViewNativeResultPayload>>
struct KeyCollection_t08AF50C8BA2CDA47D0535F24DE06C2B052FE83C5;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action>
struct KeyCollection_tCF2C788D65B897FF4830D3CCA198FA03C9BD2858;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UniWebViewNativeListener>
struct KeyCollection_tCB28B0BD20F3A003F4D6F192E3BA766BB79B72DB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`1<UniWebViewNativeResultPayload>>
struct ValueCollection_tF2AA1F069C7E783CB0C5FB557089F7793475C736;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action>
struct ValueCollection_tC9CE6B6C0B3EBB3FCCC18FF2BCA2AAE0F93334AB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UniWebViewNativeListener>
struct ValueCollection_tB3BCA9C75EA82680D3822153A6022677BE2984D9;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`1<UniWebViewNativeResultPayload>>[]
struct EntryU5BU5D_tF87BEB7116997FF6A373BBBB2B989303478391AA;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action>[]
struct EntryU5BU5D_t7EF7B0E4EFBF69FAE459DF10156B025C7D8402F5;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UniWebViewNativeListener>[]
struct EntryU5BU5D_t0F5E3232EC569657D1C97197B017F562507FAAAB;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t89E8276D3076D97BEC4E4A0051D68814BAFD967D;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t4B19E717B056B6C1BA6EB0333BFA76CC2E2D3F7E;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UniWebView
struct UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D;
// UniWebViewAndroidStaticListener
struct UniWebViewAndroidStaticListener_t9D8197E1377AE3EDE6A3E60402B6817082F80CB5;
// UniWebViewHelper
struct UniWebViewHelper_tDA871B44E18414C60705DA46DA31AE333C99649C;
// UniWebViewInterface
struct UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6;
// UniWebViewLogger
struct UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42;
// UniWebViewNativeListener
struct UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6;
// UniWebViewNativeResultPayload
struct UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F;
// UniWebViewSafeBrowingComponent
struct UniWebViewSafeBrowingComponent_tBA0A33F011EBE1BD20764B1B92F10A0459A74312;
// UniWebViewSafeBrowsing
struct UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// UniWebView/<>c__DisplayClass147_0
struct U3CU3Ec__DisplayClass147_0_t22B9F896525CEE39A0E34637FEC8801CE13D1CC7;
// UniWebView/CaptureSnapshotFinished
struct CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3;
// UniWebView/FileDownloadFinished
struct FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307;
// UniWebView/FileDownloadStarted
struct FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33;
// UniWebView/KeyCodeReceivedDelegate
struct KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185;
// UniWebView/MessageReceivedDelegate
struct MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B;
// UniWebView/MultipleWindowClosedDelegate
struct MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4;
// UniWebView/MultipleWindowOpenedDelegate
struct MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B;
// UniWebView/OnWebContentProcessTerminatedDelegate
struct OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE;
// UniWebView/OrientationChangedDelegate
struct OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A;
// UniWebView/PageErrorReceivedDelegate
struct PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1;
// UniWebView/PageFinishedDelegate
struct PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA;
// UniWebView/PageProgressChangedDelegate
struct PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037;
// UniWebView/PageStartedDelegate
struct PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC;
// UniWebView/ShouldCloseDelegate
struct ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8;
// UniWebViewSafeBrowsing/OnSafeBrowsingFinishedDelegate
struct OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Level_tD002D406F2D92F96FA68FF18FB57DC381F3EA5C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScreenOrientation_tDD9EF2729A0D580721770597532935B0A7ADE020_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass147_0_t22B9F896525CEE39A0E34637FEC8801CE13D1CC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral029E36FE6D3C7D0CD9D986C1E8AE6547739A749E;
IL2CPP_EXTERN_C String_t* _stringLiteral03D5DA6E4D76C515B2D2D891E3D49E2CD56AC621;
IL2CPP_EXTERN_C String_t* _stringLiteral0537E826CEC4233BE28552114535F51A3D777943;
IL2CPP_EXTERN_C String_t* _stringLiteral061A8010D4205A1D21073716210E2F8428BD5E14;
IL2CPP_EXTERN_C String_t* _stringLiteral06F202F9CA9A342E04166C9B0B1536FA0A6D0D72;
IL2CPP_EXTERN_C String_t* _stringLiteral1073EDD32EA0B0FD3BCAF9C644DE00B100741265;
IL2CPP_EXTERN_C String_t* _stringLiteral1172A1CEF3378DA89DA639BD09ED58C07EE90C7E;
IL2CPP_EXTERN_C String_t* _stringLiteral11F8F3AD91743D3DBFBCCB6118C2EE0BA9D432D6;
IL2CPP_EXTERN_C String_t* _stringLiteral1A2B081AE1D8E7C26E7F45F730E331D5BE655471;
IL2CPP_EXTERN_C String_t* _stringLiteral1B427C9375E8A39E06270E0F15A74777D8215AD9;
IL2CPP_EXTERN_C String_t* _stringLiteral1B49369FB3D81533ACCE4CC50C7A93DE8EE95FBB;
IL2CPP_EXTERN_C String_t* _stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E;
IL2CPP_EXTERN_C String_t* _stringLiteral201BBE82FF73DFCCE02EF3047E980480E054DF3A;
IL2CPP_EXTERN_C String_t* _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral22E046D5EAA69E6183B74E3ADD1F2A965C25CCAB;
IL2CPP_EXTERN_C String_t* _stringLiteral2A1B34F4E0F4F3FF85FE2672E1618493EC7BF962;
IL2CPP_EXTERN_C String_t* _stringLiteral2D138BB75B176FF5113F46C50CFC104D0B972CC7;
IL2CPP_EXTERN_C String_t* _stringLiteral304D400932589AB6698AC3233B263A5EF8C1BE0A;
IL2CPP_EXTERN_C String_t* _stringLiteral31D307275CC464AFDCC4A193A3D0DADE7D308F81;
IL2CPP_EXTERN_C String_t* _stringLiteral33EB4DD410972BEFE9F0A67F8A7FCD8A235E01B7;
IL2CPP_EXTERN_C String_t* _stringLiteral37DD53F3C91602BAB84363C053188A81B762168F;
IL2CPP_EXTERN_C String_t* _stringLiteral395ECB59DB769072648B57BDAF32B2A495C441DF;
IL2CPP_EXTERN_C String_t* _stringLiteral3A92C3780BFB8E4337E1F918B9736D7E62AC5DAB;
IL2CPP_EXTERN_C String_t* _stringLiteral3BDBF19BEE52D0F6D468D06193E3655A9A4DF9F5;
IL2CPP_EXTERN_C String_t* _stringLiteral3C42779679BDC28CFAB9F9AA08B6EDF9C575B154;
IL2CPP_EXTERN_C String_t* _stringLiteral3DD62E04D9C08A1A20E499E6C090334BDCBB140A;
IL2CPP_EXTERN_C String_t* _stringLiteral3E404FE03936D628606B7DF9E734BAF95D344182;
IL2CPP_EXTERN_C String_t* _stringLiteral3F2E2E820A878C46D32D963317798EEE3BE34403;
IL2CPP_EXTERN_C String_t* _stringLiteral4093128DE4F5C95C1AE42C92BE048800C32CA595;
IL2CPP_EXTERN_C String_t* _stringLiteral4204A6CCA8578136B4A25CA2537C7C3C31BD1AC4;
IL2CPP_EXTERN_C String_t* _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192;
IL2CPP_EXTERN_C String_t* _stringLiteral433BD28268DDF7A851125C0EA573CB011A17DE0F;
IL2CPP_EXTERN_C String_t* _stringLiteral449E90EA94A719309FD246952C6B4621E65F159A;
IL2CPP_EXTERN_C String_t* _stringLiteral44BBEAE09912D601CF961A5326005AF34AA2C3A4;
IL2CPP_EXTERN_C String_t* _stringLiteral46235E42561BC75195410C8FD01B7026927BA27E;
IL2CPP_EXTERN_C String_t* _stringLiteral47A1F293CBA4EB0AA9AD617D6BB2A7C2D8CEECF2;
IL2CPP_EXTERN_C String_t* _stringLiteral4982677CA430F6BEEBF6DE62DB068943C678A403;
IL2CPP_EXTERN_C String_t* _stringLiteral4A6EB1DA1F4B3316972BF1771C95A00AC23DD8A3;
IL2CPP_EXTERN_C String_t* _stringLiteral4EA2CB2B0D1C6D82BFCABA78C7EBE25AE1254CFD;
IL2CPP_EXTERN_C String_t* _stringLiteral4EBDA72250283979F1A464C506665274601F2A0C;
IL2CPP_EXTERN_C String_t* _stringLiteral4EE85B87204B902A0E1E3E81167C944BE6A0C184;
IL2CPP_EXTERN_C String_t* _stringLiteral518BD63F7EC12F584B7692F39A21657A70FB44CA;
IL2CPP_EXTERN_C String_t* _stringLiteral521BA50AE923A8AA765D9A160E356FC0058FADA4;
IL2CPP_EXTERN_C String_t* _stringLiteral52F373B73A2B66DC4990D649FA0DA946AB9A6A10;
IL2CPP_EXTERN_C String_t* _stringLiteral54293F2D54AE4537D84592735A6CFC7A384FEBA1;
IL2CPP_EXTERN_C String_t* _stringLiteral5886CC8EB4F8A781BD0FD273284D9412CD0EC0EA;
IL2CPP_EXTERN_C String_t* _stringLiteral5A736AD385143771CC7BE3FD81F63BDA24D69631;
IL2CPP_EXTERN_C String_t* _stringLiteral5DB433FA1CA23852AD151D359F13726ACC32A782;
IL2CPP_EXTERN_C String_t* _stringLiteral5DE79C2CD63575AC9ECB35E88C658273A77D75C6;
IL2CPP_EXTERN_C String_t* _stringLiteral6033B666C1911ABDF46C78670D40C8F32780B560;
IL2CPP_EXTERN_C String_t* _stringLiteral64F055D7E61FBC80ABEE468986D2A24466198A9D;
IL2CPP_EXTERN_C String_t* _stringLiteral6531E410A254E705B3486A18962DF55BBAA92F7F;
IL2CPP_EXTERN_C String_t* _stringLiteral6646AEF6383BB084D7AF1DBC36DE3B99CB7D5096;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A;
IL2CPP_EXTERN_C String_t* _stringLiteral6B26F376A2CF6E95830794F6706E4612161CC407;
IL2CPP_EXTERN_C String_t* _stringLiteral6D0FB6A57B014AF249173AD2C602950C4A35AF80;
IL2CPP_EXTERN_C String_t* _stringLiteral6FA865AA2F7454A02C1711C57C6D21DB3891BF95;
IL2CPP_EXTERN_C String_t* _stringLiteral710CA85CF56FB6B6924F6875619A9086DFD91F22;
IL2CPP_EXTERN_C String_t* _stringLiteral7174781ACA1FA077C93755E54C155E9C90186CFC;
IL2CPP_EXTERN_C String_t* _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
IL2CPP_EXTERN_C String_t* _stringLiteral7B7D33323BA93D25E3749ABC98725558724ACFB3;
IL2CPP_EXTERN_C String_t* _stringLiteral7C18CF1B37B49917E6D8058AC143814D191A0E21;
IL2CPP_EXTERN_C String_t* _stringLiteral7CB52D6F4A9943E8A23A1AA0CBB183BDE4AC2E7B;
IL2CPP_EXTERN_C String_t* _stringLiteral7D5A1BC658DA7223D5B3A37EDE7E9A3F1C60C984;
IL2CPP_EXTERN_C String_t* _stringLiteral7E2CDB796AC0AE13882E39A6F26B9DF2B27D6A30;
IL2CPP_EXTERN_C String_t* _stringLiteral7EF67CAF3681E05C484A06FDBC22B44C14E1963A;
IL2CPP_EXTERN_C String_t* _stringLiteral7FB065FC47DDCF8134948800A310281E12F058C7;
IL2CPP_EXTERN_C String_t* _stringLiteral8228F26A547DD52F870220D24F4F243E35286F25;
IL2CPP_EXTERN_C String_t* _stringLiteral845163A85B4BECE047C59BD2EB47E4514ABB7EB2;
IL2CPP_EXTERN_C String_t* _stringLiteral848E244106FAAF80CBD208A47B17E360C4FAA789;
IL2CPP_EXTERN_C String_t* _stringLiteral84F1DBEFF9F154BEB8FDC3E83BF705C0C602A763;
IL2CPP_EXTERN_C String_t* _stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF;
IL2CPP_EXTERN_C String_t* _stringLiteral8B68C1399A90D4E6E6DAFEAE7DA08343E2346DFF;
IL2CPP_EXTERN_C String_t* _stringLiteral8C56C4E22347BBB0FE3C2050A1C6964821D2E096;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteral8D352394D321D77D5B5C61F342DAB35C989C220B;
IL2CPP_EXTERN_C String_t* _stringLiteral93B204B4CDC241356AD725235A5C0966C643FAF8;
IL2CPP_EXTERN_C String_t* _stringLiteral95A5D8F8216FEF6AB6DA124B8556B99686008921;
IL2CPP_EXTERN_C String_t* _stringLiteral996FFF30D4EC57E5E421FFBFD6250F0BC3FFE8D8;
IL2CPP_EXTERN_C String_t* _stringLiteral9A86A622B347650DFF5FD90343DE9EAE977A4022;
IL2CPP_EXTERN_C String_t* _stringLiteral9D79C985DF4F73247A0EA6C97EA17838838770DF;
IL2CPP_EXTERN_C String_t* _stringLiteral9E6CABDC4F759622270ECC237B019B4E14689CEB;
IL2CPP_EXTERN_C String_t* _stringLiteral9F0E0B1C4FE73607CBBE0A93116CEA4E3B3C5E98;
IL2CPP_EXTERN_C String_t* _stringLiteralA1738FA234DD23984A6C35D65687B65D92536008;
IL2CPP_EXTERN_C String_t* _stringLiteralA1D7DF7FCDFC442F5402FE6C9E7DA92ACC2E6A4A;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DB671BED62CD86E812C71F3652AB2E471465EA;
IL2CPP_EXTERN_C String_t* _stringLiteralA82D23700F6B0488E16EC900CE9C012B8B8D5EF5;
IL2CPP_EXTERN_C String_t* _stringLiteralA83A925538F3CF2C8C3F376EE41897EBDE39B11A;
IL2CPP_EXTERN_C String_t* _stringLiteralA86C50F4B1AF6D3E1A77D83ECBCA14EBF7A7317C;
IL2CPP_EXTERN_C String_t* _stringLiteralAA87EF6D24F8EDBD189F60E8FAE8346868873324;
IL2CPP_EXTERN_C String_t* _stringLiteralAF86D7EC622B6AE932581F530BC9EAE6B3A4BEAF;
IL2CPP_EXTERN_C String_t* _stringLiteralB036D1A4504D6BE029CD2101E1DC9042111887D4;
IL2CPP_EXTERN_C String_t* _stringLiteralB0D5E7C91F6A2B19CACBDBA3D85F48CDC24A51E8;
IL2CPP_EXTERN_C String_t* _stringLiteralB4B0363E97F5C708A44E3F0E479DA7A612B280F4;
IL2CPP_EXTERN_C String_t* _stringLiteralB8204672E3B98F5C38D20D9B5A097E06317E9CCB;
IL2CPP_EXTERN_C String_t* _stringLiteralB8A3E57D6C0E3D6E5792B76D2BE42E5545BD556A;
IL2CPP_EXTERN_C String_t* _stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476;
IL2CPP_EXTERN_C String_t* _stringLiteralBA589491DB924192C93098407D4F8B9B7EEF76D2;
IL2CPP_EXTERN_C String_t* _stringLiteralBAA5A3EA71ED89EC8F8D5755DC9EFFB906291550;
IL2CPP_EXTERN_C String_t* _stringLiteralBC6EBD9A055FC3B845472AB3361F0A61570C0D41;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC2FAA96F1CF4242C66CF32B08B785D1BC27649DD;
IL2CPP_EXTERN_C String_t* _stringLiteralC4CC144598BD145E00CD6F81EDD805EA5BBA24E6;
IL2CPP_EXTERN_C String_t* _stringLiteralC8958CD955E48DB95A49B82386149ED32A9DD59B;
IL2CPP_EXTERN_C String_t* _stringLiteralC89C610EB715737B1E54BE9F8381DDD2A0330595;
IL2CPP_EXTERN_C String_t* _stringLiteralC8B901F66CF2B99391DC4E891559A18A028D71D4;
IL2CPP_EXTERN_C String_t* _stringLiteralCCC81426293B91F35B234307120A0683A8E8468A;
IL2CPP_EXTERN_C String_t* _stringLiteralD0261650E60CCD4DB8E943AFD94028507D700FA6;
IL2CPP_EXTERN_C String_t* _stringLiteralD0B15CD4BA910CF8A2015DE9963A3CB48505CFB3;
IL2CPP_EXTERN_C String_t* _stringLiteralD2199E4A06060B44700618DF6B43A85D47E229DF;
IL2CPP_EXTERN_C String_t* _stringLiteralD266A18472019B973EDB918EFBE306F0D0D9413C;
IL2CPP_EXTERN_C String_t* _stringLiteralD3FCE46B907FCCFB1380979FD158061B0542D64D;
IL2CPP_EXTERN_C String_t* _stringLiteralD6BB3661E0B8AF7D91E3EB869BE4036AE1C39321;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDEEA4904CA12EBD798D6DE754E4F996AE77368DC;
IL2CPP_EXTERN_C String_t* _stringLiteralE1564FAE4D046D79DE761266060204AEEDC4BB21;
IL2CPP_EXTERN_C String_t* _stringLiteralE18B612F2CEC49FD22137D4676C2F419D6CF46D5;
IL2CPP_EXTERN_C String_t* _stringLiteralE1FD7533D578834C52F955AF663C262434D950DE;
IL2CPP_EXTERN_C String_t* _stringLiteralED16F9589E28E51337A6B35399688F5187808BD2;
IL2CPP_EXTERN_C String_t* _stringLiteralED6AE4548C7A75D64077C9E1530452184FF92182;
IL2CPP_EXTERN_C String_t* _stringLiteralF03D4C9423969F49E57441A7021C07D475E7DEED;
IL2CPP_EXTERN_C String_t* _stringLiteralF21A93EC208F504071591F17D29A4DFF8618C40D;
IL2CPP_EXTERN_C String_t* _stringLiteralF4353B18CB89F76878CA8731D22DC482A64B7206;
IL2CPP_EXTERN_C String_t* _stringLiteralF8D6B5E5D1A349370529FE8E7793F6F40FEB98F6;
IL2CPP_EXTERN_C String_t* _stringLiteralFADAFC4A16312377BF957856DCCD59A61D85AB62;
IL2CPP_EXTERN_C String_t* _stringLiteralFF07018CB5269D45FB2053AE059DB7FC9C54FFCF;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m7FD4BCCE3B594A86994AF02F773EDBD3E8C855FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mFEA53F543E097D36BFEEF4744D8CBBD15D5A42B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1FB614EE7BD90855AEEE4C310F647B8AEBD86F5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_m208681393026F647A5B2E188EB994206FB0FA67F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mC1A1DF8460F0743F0BC86D9EEFA74621EF489848_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m107138FF128B1AF906D4A9F96930F2950EAB7E2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m9DA106042D6B828B008BECD1B176FC9CF2025073_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mD3F3FF95D32D4B473461AB4F39A254F3115C8B42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m608577A5AF450760A657AA9EE6A096E5A59DA1B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m3C0571CBE36334C381F50B70493444AC902950DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m91F9C013C61837D39B5C237F12F0F6B30EB9BA6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m9433D5C61A3FDBCC815B81514A5C4047081A1733_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m077627631DE1E79894B3B1557F16F883C24E690C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m10B0146D3E18B57525BE9D67DA2CBE236181DC7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m7780B2017AA17250A077A690CAB507AC59B42D41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6D590EC94EE7F0732585591D62D5086056BF01B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAB26B178197E25C427201DADB4B06019B0C82D7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC446DE0A4ADE6CCB3DEBE59BA4BBF4F64040305B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m1ACD9DE86340A7CA50E97B170F973A5A09160DCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUniWebViewAndroidStaticListener_t9D8197E1377AE3EDE6A3E60402B6817082F80CB5_m6FBD4D6A1FA445517C3B0CCDA6EC26AA33056AF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_mE8CF5E1FE32B12548C419E21C43C489BFDB4901D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F_m09FF9E0AE4A163AEB7F29A25AD3398B25F76BEF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass147_0_U3CGetHTMLContentU3Eb__0_m375269303B0D63DAA65203CBF95357F33F731E7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t68B1C6D9F68C51B4A570260836260AA102F26E99 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>
struct Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tF87BEB7116997FF6A373BBBB2B989303478391AA* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t08AF50C8BA2CDA47D0535F24DE06C2B052FE83C5 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tF2AA1F069C7E783CB0C5FB557089F7793475C736 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383, ___entries_1)); }
	inline EntryU5BU5D_tF87BEB7116997FF6A373BBBB2B989303478391AA* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tF87BEB7116997FF6A373BBBB2B989303478391AA** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tF87BEB7116997FF6A373BBBB2B989303478391AA* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383, ___keys_7)); }
	inline KeyCollection_t08AF50C8BA2CDA47D0535F24DE06C2B052FE83C5 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t08AF50C8BA2CDA47D0535F24DE06C2B052FE83C5 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t08AF50C8BA2CDA47D0535F24DE06C2B052FE83C5 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383, ___values_8)); }
	inline ValueCollection_tF2AA1F069C7E783CB0C5FB557089F7793475C736 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tF2AA1F069C7E783CB0C5FB557089F7793475C736 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tF2AA1F069C7E783CB0C5FB557089F7793475C736 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Action>
struct Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7EF7B0E4EFBF69FAE459DF10156B025C7D8402F5* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tCF2C788D65B897FF4830D3CCA198FA03C9BD2858 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tC9CE6B6C0B3EBB3FCCC18FF2BCA2AAE0F93334AB * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC, ___entries_1)); }
	inline EntryU5BU5D_t7EF7B0E4EFBF69FAE459DF10156B025C7D8402F5* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7EF7B0E4EFBF69FAE459DF10156B025C7D8402F5** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7EF7B0E4EFBF69FAE459DF10156B025C7D8402F5* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC, ___keys_7)); }
	inline KeyCollection_tCF2C788D65B897FF4830D3CCA198FA03C9BD2858 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tCF2C788D65B897FF4830D3CCA198FA03C9BD2858 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tCF2C788D65B897FF4830D3CCA198FA03C9BD2858 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC, ___values_8)); }
	inline ValueCollection_tC9CE6B6C0B3EBB3FCCC18FF2BCA2AAE0F93334AB * get_values_8() const { return ___values_8; }
	inline ValueCollection_tC9CE6B6C0B3EBB3FCCC18FF2BCA2AAE0F93334AB ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tC9CE6B6C0B3EBB3FCCC18FF2BCA2AAE0F93334AB * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UniWebViewNativeListener>
struct Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0F5E3232EC569657D1C97197B017F562507FAAAB* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tCB28B0BD20F3A003F4D6F192E3BA766BB79B72DB * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB3BCA9C75EA82680D3822153A6022677BE2984D9 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710, ___entries_1)); }
	inline EntryU5BU5D_t0F5E3232EC569657D1C97197B017F562507FAAAB* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0F5E3232EC569657D1C97197B017F562507FAAAB** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0F5E3232EC569657D1C97197B017F562507FAAAB* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710, ___keys_7)); }
	inline KeyCollection_tCB28B0BD20F3A003F4D6F192E3BA766BB79B72DB * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tCB28B0BD20F3A003F4D6F192E3BA766BB79B72DB ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tCB28B0BD20F3A003F4D6F192E3BA766BB79B72DB * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710, ___values_8)); }
	inline ValueCollection_tB3BCA9C75EA82680D3822153A6022677BE2984D9 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB3BCA9C75EA82680D3822153A6022677BE2984D9 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB3BCA9C75EA82680D3822153A6022677BE2984D9 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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


// UniWebViewHelper
struct UniWebViewHelper_tDA871B44E18414C60705DA46DA31AE333C99649C  : public RuntimeObject
{
public:

public:
};


// UniWebViewInterface
struct UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6  : public RuntimeObject
{
public:

public:
};

struct UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields
{
public:
	// UnityEngine.AndroidJavaClass UniWebViewInterface::plugin
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___plugin_0;
	// System.Boolean UniWebViewInterface::correctPlatform
	bool ___correctPlatform_1;

public:
	inline static int32_t get_offset_of_plugin_0() { return static_cast<int32_t>(offsetof(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields, ___plugin_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_plugin_0() const { return ___plugin_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_plugin_0() { return &___plugin_0; }
	inline void set_plugin_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___plugin_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___plugin_0), (void*)value);
	}

	inline static int32_t get_offset_of_correctPlatform_1() { return static_cast<int32_t>(offsetof(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields, ___correctPlatform_1)); }
	inline bool get_correctPlatform_1() const { return ___correctPlatform_1; }
	inline bool* get_address_of_correctPlatform_1() { return &___correctPlatform_1; }
	inline void set_correctPlatform_1(bool value)
	{
		___correctPlatform_1 = value;
	}
};


// UniWebViewNativeResultPayload
struct UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F  : public RuntimeObject
{
public:
	// System.String UniWebViewNativeResultPayload::identifier
	String_t* ___identifier_0;
	// System.String UniWebViewNativeResultPayload::resultCode
	String_t* ___resultCode_1;
	// System.String UniWebViewNativeResultPayload::data
	String_t* ___data_2;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___identifier_0), (void*)value);
	}

	inline static int32_t get_offset_of_resultCode_1() { return static_cast<int32_t>(offsetof(UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F, ___resultCode_1)); }
	inline String_t* get_resultCode_1() const { return ___resultCode_1; }
	inline String_t** get_address_of_resultCode_1() { return &___resultCode_1; }
	inline void set_resultCode_1(String_t* value)
	{
		___resultCode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultCode_1), (void*)value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F, ___data_2)); }
	inline String_t* get_data_2() const { return ___data_2; }
	inline String_t** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(String_t* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_2), (void*)value);
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

// UniWebView/<>c__DisplayClass147_0
struct U3CU3Ec__DisplayClass147_0_t22B9F896525CEE39A0E34637FEC8801CE13D1CC7  : public RuntimeObject
{
public:
	// System.Action`1<System.String> UniWebView/<>c__DisplayClass147_0::handler
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___handler_0;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass147_0_t22B9F896525CEE39A0E34637FEC8801CE13D1CC7, ___handler_0)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_handler_0() const { return ___handler_0; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handler_0), (void*)value);
	}
};


// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

public:
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
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

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t4B19E717B056B6C1BA6EB0333BFA76CC2E2D3F7E  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UniWebViewMessage
struct UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC 
{
public:
	// System.String UniWebViewMessage::<RawMessage>k__BackingField
	String_t* ___U3CRawMessageU3Ek__BackingField_0;
	// System.String UniWebViewMessage::<Scheme>k__BackingField
	String_t* ___U3CSchemeU3Ek__BackingField_1;
	// System.String UniWebViewMessage::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UniWebViewMessage::<Args>k__BackingField
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CArgsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CRawMessageU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC, ___U3CRawMessageU3Ek__BackingField_0)); }
	inline String_t* get_U3CRawMessageU3Ek__BackingField_0() const { return ___U3CRawMessageU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CRawMessageU3Ek__BackingField_0() { return &___U3CRawMessageU3Ek__BackingField_0; }
	inline void set_U3CRawMessageU3Ek__BackingField_0(String_t* value)
	{
		___U3CRawMessageU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRawMessageU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSchemeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC, ___U3CSchemeU3Ek__BackingField_1)); }
	inline String_t* get_U3CSchemeU3Ek__BackingField_1() const { return ___U3CSchemeU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CSchemeU3Ek__BackingField_1() { return &___U3CSchemeU3Ek__BackingField_1; }
	inline void set_U3CSchemeU3Ek__BackingField_1(String_t* value)
	{
		___U3CSchemeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSchemeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPathU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC, ___U3CPathU3Ek__BackingField_2)); }
	inline String_t* get_U3CPathU3Ek__BackingField_2() const { return ___U3CPathU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CPathU3Ek__BackingField_2() { return &___U3CPathU3Ek__BackingField_2; }
	inline void set_U3CPathU3Ek__BackingField_2(String_t* value)
	{
		___U3CPathU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPathU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CArgsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC, ___U3CArgsU3Ek__BackingField_3)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_U3CArgsU3Ek__BackingField_3() const { return ___U3CArgsU3Ek__BackingField_3; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_U3CArgsU3Ek__BackingField_3() { return &___U3CArgsU3Ek__BackingField_3; }
	inline void set_U3CArgsU3Ek__BackingField_3(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___U3CArgsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CArgsU3Ek__BackingField_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UniWebViewMessage
struct UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_marshaled_pinvoke
{
	char* ___U3CRawMessageU3Ek__BackingField_0;
	char* ___U3CSchemeU3Ek__BackingField_1;
	char* ___U3CPathU3Ek__BackingField_2;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CArgsU3Ek__BackingField_3;
};
// Native definition for COM marshalling of UniWebViewMessage
struct UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_marshaled_com
{
	Il2CppChar* ___U3CRawMessageU3Ek__BackingField_0;
	Il2CppChar* ___U3CSchemeU3Ek__BackingField_1;
	Il2CppChar* ___U3CPathU3Ek__BackingField_2;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CArgsU3Ek__BackingField_3;
};

// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
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


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RenderMode
struct RenderMode_tFF8E9ABC771ACEBD5ACC2D9DFB02264E0EA6CDBF 
{
public:
	// System.Int32 UnityEngine.RenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderMode_tFF8E9ABC771ACEBD5ACC2D9DFB02264E0EA6CDBF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.ScreenOrientation
struct ScreenOrientation_tDD9EF2729A0D580721770597532935B0A7ADE020 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenOrientation_tDD9EF2729A0D580721770597532935B0A7ADE020, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.StringSplitOptions
struct StringSplitOptions_tCBE57E9DF0385CEE90AEE9C25D18BD20E30D29D3 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringSplitOptions_tCBE57E9DF0385CEE90AEE9C25D18BD20E30D29D3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UniWebViewContentInsetAdjustmentBehavior
struct UniWebViewContentInsetAdjustmentBehavior_tE3D45431A5A3D26E1E5214CD9FD59F43B54B61DA 
{
public:
	// System.Int32 UniWebViewContentInsetAdjustmentBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UniWebViewContentInsetAdjustmentBehavior_tE3D45431A5A3D26E1E5214CD9FD59F43B54B61DA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UniWebViewToolbarPosition
struct UniWebViewToolbarPosition_t057CF9AD24E84BB2F75EDC3E6F53179E68C4B907 
{
public:
	// System.Int32 UniWebViewToolbarPosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UniWebViewToolbarPosition_t057CF9AD24E84BB2F75EDC3E6F53179E68C4B907, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UniWebViewTransitionEdge
struct UniWebViewTransitionEdge_t16DAFE720E3B6E36B10F38F813777B6986E3B6D1 
{
public:
	// System.Int32 UniWebViewTransitionEdge::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UniWebViewTransitionEdge_t16DAFE720E3B6E36B10F38F813777B6986E3B6D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UniWebViewLogger/Level
struct Level_tD002D406F2D92F96FA68FF18FB57DC381F3EA5C6 
{
public:
	// System.Int32 UniWebViewLogger/Level::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Level_tD002D406F2D92F96FA68FF18FB57DC381F3EA5C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UniWebViewLogger
struct UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42  : public RuntimeObject
{
public:
	// UniWebViewLogger/Level UniWebViewLogger::level
	int32_t ___level_1;

public:
	inline static int32_t get_offset_of_level_1() { return static_cast<int32_t>(offsetof(UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42, ___level_1)); }
	inline int32_t get_level_1() const { return ___level_1; }
	inline int32_t* get_address_of_level_1() { return &___level_1; }
	inline void set_level_1(int32_t value)
	{
		___level_1 = value;
	}
};

struct UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42_StaticFields
{
public:
	// UniWebViewLogger UniWebViewLogger::instance
	UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42_StaticFields, ___instance_0)); }
	inline UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * get_instance_0() const { return ___instance_0; }
	inline UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
};


// UniWebViewSafeBrowsing
struct UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UniWebViewSafeBrowsing/OnSafeBrowsingFinishedDelegate UniWebViewSafeBrowsing::OnSafeBrowsingFinished
	OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * ___OnSafeBrowsingFinished_4;
	// System.String UniWebViewSafeBrowsing::id
	String_t* ___id_5;
	// UniWebViewNativeListener UniWebViewSafeBrowsing::listener
	UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * ___listener_6;
	// System.String UniWebViewSafeBrowsing::url
	String_t* ___url_7;

public:
	inline static int32_t get_offset_of_OnSafeBrowsingFinished_4() { return static_cast<int32_t>(offsetof(UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD, ___OnSafeBrowsingFinished_4)); }
	inline OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * get_OnSafeBrowsingFinished_4() const { return ___OnSafeBrowsingFinished_4; }
	inline OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB ** get_address_of_OnSafeBrowsingFinished_4() { return &___OnSafeBrowsingFinished_4; }
	inline void set_OnSafeBrowsingFinished_4(OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * value)
	{
		___OnSafeBrowsingFinished_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSafeBrowsingFinished_4), (void*)value);
	}

	inline static int32_t get_offset_of_id_5() { return static_cast<int32_t>(offsetof(UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD, ___id_5)); }
	inline String_t* get_id_5() const { return ___id_5; }
	inline String_t** get_address_of_id_5() { return &___id_5; }
	inline void set_id_5(String_t* value)
	{
		___id_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_5), (void*)value);
	}

	inline static int32_t get_offset_of_listener_6() { return static_cast<int32_t>(offsetof(UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD, ___listener_6)); }
	inline UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * get_listener_6() const { return ___listener_6; }
	inline UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 ** get_address_of_listener_6() { return &___listener_6; }
	inline void set_listener_6(UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * value)
	{
		___listener_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_6), (void*)value);
	}

	inline static int32_t get_offset_of_url_7() { return static_cast<int32_t>(offsetof(UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD, ___url_7)); }
	inline String_t* get_url_7() const { return ___url_7; }
	inline String_t** get_address_of_url_7() { return &___url_7; }
	inline void set_url_7(String_t* value)
	{
		___url_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_7), (void*)value);
	}
};


// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UniWebViewNativeResultPayload>
struct Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UniWebView/CaptureSnapshotFinished
struct CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3  : public MulticastDelegate_t
{
public:

public:
};


// UniWebView/FileDownloadFinished
struct FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307  : public MulticastDelegate_t
{
public:

public:
};


// UniWebView/FileDownloadStarted
struct FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33  : public MulticastDelegate_t
{
public:

public:
};


// UniWebView/KeyCodeReceivedDelegate
struct KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185  : public MulticastDelegate_t
{
public:

public:
};


// UniWebView/MessageReceivedDelegate
struct MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B  : public MulticastDelegate_t
{
public:

public:
};


// UniWebView/MultipleWindowClosedDelegate
struct MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4  : public MulticastDelegate_t
{
public:

public:
};


// UniWebView/MultipleWindowOpenedDelegate
struct MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B  : public MulticastDelegate_t
{
public:

public:
};


// UniWebView/OnWebContentProcessTerminatedDelegate
struct OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE  : public MulticastDelegate_t
{
public:

public:
};


// UniWebView/OrientationChangedDelegate
struct OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A  : public MulticastDelegate_t
{
public:

public:
};


// UniWebView/PageErrorReceivedDelegate
struct PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1  : public MulticastDelegate_t
{
public:

public:
};


// UniWebView/PageFinishedDelegate
struct PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA  : public MulticastDelegate_t
{
public:

public:
};


// UniWebView/PageProgressChangedDelegate
struct PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037  : public MulticastDelegate_t
{
public:

public:
};


// UniWebView/PageStartedDelegate
struct PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC  : public MulticastDelegate_t
{
public:

public:
};


// UniWebView/ShouldCloseDelegate
struct ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8  : public MulticastDelegate_t
{
public:

public:
};


// UniWebViewSafeBrowsing/OnSafeBrowsingFinishedDelegate
struct OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_preWillRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___preWillRenderCanvases_4)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_preWillRenderCanvases_4() const { return ___preWillRenderCanvases_4; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_preWillRenderCanvases_4() { return &___preWillRenderCanvases_4; }
	inline void set_preWillRenderCanvases_4(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___preWillRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preWillRenderCanvases_4), (void*)value);
	}

	inline static int32_t get_offset_of_willRenderCanvases_5() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___willRenderCanvases_5)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_willRenderCanvases_5() const { return ___willRenderCanvases_5; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_willRenderCanvases_5() { return &___willRenderCanvases_5; }
	inline void set_willRenderCanvases_5(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___willRenderCanvases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexternBeginRenderOverlaysU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_U3CexternBeginRenderOverlaysU3Ek__BackingField_6() const { return ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_U3CexternBeginRenderOverlaysU3Ek__BackingField_6() { return &___U3CexternBeginRenderOverlaysU3Ek__BackingField_6; }
	inline void set_U3CexternBeginRenderOverlaysU3Ek__BackingField_6(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___U3CexternBeginRenderOverlaysU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexternBeginRenderOverlaysU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexternRenderOverlaysBeforeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7)); }
	inline Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * get_U3CexternRenderOverlaysBeforeU3Ek__BackingField_7() const { return ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7; }
	inline Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 ** get_address_of_U3CexternRenderOverlaysBeforeU3Ek__BackingField_7() { return &___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7; }
	inline void set_U3CexternRenderOverlaysBeforeU3Ek__BackingField_7(Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * value)
	{
		___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexternEndRenderOverlaysU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___U3CexternEndRenderOverlaysU3Ek__BackingField_8)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_U3CexternEndRenderOverlaysU3Ek__BackingField_8() const { return ___U3CexternEndRenderOverlaysU3Ek__BackingField_8; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_U3CexternEndRenderOverlaysU3Ek__BackingField_8() { return &___U3CexternEndRenderOverlaysU3Ek__BackingField_8; }
	inline void set_U3CexternEndRenderOverlaysU3Ek__BackingField_8(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___U3CexternEndRenderOverlaysU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexternEndRenderOverlaysU3Ek__BackingField_8), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UniWebView
struct UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UniWebView/PageStartedDelegate UniWebView::OnPageStarted
	PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * ___OnPageStarted_4;
	// UniWebView/PageFinishedDelegate UniWebView::OnPageFinished
	PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * ___OnPageFinished_5;
	// UniWebView/PageErrorReceivedDelegate UniWebView::OnPageErrorReceived
	PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * ___OnPageErrorReceived_6;
	// UniWebView/PageProgressChangedDelegate UniWebView::OnPageProgressChanged
	PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * ___OnPageProgressChanged_7;
	// UniWebView/MessageReceivedDelegate UniWebView::OnMessageReceived
	MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * ___OnMessageReceived_8;
	// UniWebView/ShouldCloseDelegate UniWebView::OnShouldClose
	ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * ___OnShouldClose_9;
	// UniWebView/OrientationChangedDelegate UniWebView::OnOrientationChanged
	OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * ___OnOrientationChanged_10;
	// UniWebView/OnWebContentProcessTerminatedDelegate UniWebView::OnWebContentProcessTerminated
	OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * ___OnWebContentProcessTerminated_11;
	// UniWebView/FileDownloadStarted UniWebView::OnFileDownloadStarted
	FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * ___OnFileDownloadStarted_12;
	// UniWebView/FileDownloadFinished UniWebView::OnFileDownloadFinished
	FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * ___OnFileDownloadFinished_13;
	// UniWebView/CaptureSnapshotFinished UniWebView::OnCaptureSnapshotFinished
	CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * ___OnCaptureSnapshotFinished_14;
	// UniWebView/MultipleWindowOpenedDelegate UniWebView::OnMultipleWindowOpened
	MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * ___OnMultipleWindowOpened_15;
	// UniWebView/MultipleWindowClosedDelegate UniWebView::OnMultipleWindowClosed
	MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * ___OnMultipleWindowClosed_16;
	// System.String UniWebView::id
	String_t* ___id_17;
	// UniWebViewNativeListener UniWebView::listener
	UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * ___listener_18;
	// System.Boolean UniWebView::isPortrait
	bool ___isPortrait_19;
	// System.String UniWebView::urlOnStart
	String_t* ___urlOnStart_20;
	// System.Boolean UniWebView::showOnStart
	bool ___showOnStart_21;
	// System.Boolean UniWebView::fullScreen
	bool ___fullScreen_22;
	// System.Boolean UniWebView::useToolbar
	bool ___useToolbar_23;
	// UniWebViewToolbarPosition UniWebView::toolbarPosition
	int32_t ___toolbarPosition_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> UniWebView::actions
	Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * ___actions_25;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>> UniWebView::payloadActions
	Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383 * ___payloadActions_26;
	// UnityEngine.Rect UniWebView::frame
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___frame_27;
	// UnityEngine.RectTransform UniWebView::referenceRectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___referenceRectTransform_28;
	// System.Boolean UniWebView::started
	bool ___started_29;
	// System.Boolean UniWebView::backButtonEnabled
	bool ___backButtonEnabled_30;
	// UnityEngine.Color UniWebView::backgroundColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___backgroundColor_31;
	// UniWebView/KeyCodeReceivedDelegate UniWebView::OnKeyCodeReceived
	KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * ___OnKeyCodeReceived_32;

public:
	inline static int32_t get_offset_of_OnPageStarted_4() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___OnPageStarted_4)); }
	inline PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * get_OnPageStarted_4() const { return ___OnPageStarted_4; }
	inline PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC ** get_address_of_OnPageStarted_4() { return &___OnPageStarted_4; }
	inline void set_OnPageStarted_4(PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * value)
	{
		___OnPageStarted_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPageStarted_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnPageFinished_5() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___OnPageFinished_5)); }
	inline PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * get_OnPageFinished_5() const { return ___OnPageFinished_5; }
	inline PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA ** get_address_of_OnPageFinished_5() { return &___OnPageFinished_5; }
	inline void set_OnPageFinished_5(PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * value)
	{
		___OnPageFinished_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPageFinished_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnPageErrorReceived_6() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___OnPageErrorReceived_6)); }
	inline PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * get_OnPageErrorReceived_6() const { return ___OnPageErrorReceived_6; }
	inline PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 ** get_address_of_OnPageErrorReceived_6() { return &___OnPageErrorReceived_6; }
	inline void set_OnPageErrorReceived_6(PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * value)
	{
		___OnPageErrorReceived_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPageErrorReceived_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnPageProgressChanged_7() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___OnPageProgressChanged_7)); }
	inline PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * get_OnPageProgressChanged_7() const { return ___OnPageProgressChanged_7; }
	inline PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 ** get_address_of_OnPageProgressChanged_7() { return &___OnPageProgressChanged_7; }
	inline void set_OnPageProgressChanged_7(PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * value)
	{
		___OnPageProgressChanged_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPageProgressChanged_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnMessageReceived_8() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___OnMessageReceived_8)); }
	inline MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * get_OnMessageReceived_8() const { return ___OnMessageReceived_8; }
	inline MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B ** get_address_of_OnMessageReceived_8() { return &___OnMessageReceived_8; }
	inline void set_OnMessageReceived_8(MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * value)
	{
		___OnMessageReceived_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMessageReceived_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnShouldClose_9() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___OnShouldClose_9)); }
	inline ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * get_OnShouldClose_9() const { return ___OnShouldClose_9; }
	inline ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 ** get_address_of_OnShouldClose_9() { return &___OnShouldClose_9; }
	inline void set_OnShouldClose_9(ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * value)
	{
		___OnShouldClose_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnShouldClose_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnOrientationChanged_10() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___OnOrientationChanged_10)); }
	inline OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * get_OnOrientationChanged_10() const { return ___OnOrientationChanged_10; }
	inline OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A ** get_address_of_OnOrientationChanged_10() { return &___OnOrientationChanged_10; }
	inline void set_OnOrientationChanged_10(OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * value)
	{
		___OnOrientationChanged_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOrientationChanged_10), (void*)value);
	}

	inline static int32_t get_offset_of_OnWebContentProcessTerminated_11() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___OnWebContentProcessTerminated_11)); }
	inline OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * get_OnWebContentProcessTerminated_11() const { return ___OnWebContentProcessTerminated_11; }
	inline OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE ** get_address_of_OnWebContentProcessTerminated_11() { return &___OnWebContentProcessTerminated_11; }
	inline void set_OnWebContentProcessTerminated_11(OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * value)
	{
		___OnWebContentProcessTerminated_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnWebContentProcessTerminated_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnFileDownloadStarted_12() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___OnFileDownloadStarted_12)); }
	inline FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * get_OnFileDownloadStarted_12() const { return ___OnFileDownloadStarted_12; }
	inline FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 ** get_address_of_OnFileDownloadStarted_12() { return &___OnFileDownloadStarted_12; }
	inline void set_OnFileDownloadStarted_12(FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * value)
	{
		___OnFileDownloadStarted_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFileDownloadStarted_12), (void*)value);
	}

	inline static int32_t get_offset_of_OnFileDownloadFinished_13() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___OnFileDownloadFinished_13)); }
	inline FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * get_OnFileDownloadFinished_13() const { return ___OnFileDownloadFinished_13; }
	inline FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 ** get_address_of_OnFileDownloadFinished_13() { return &___OnFileDownloadFinished_13; }
	inline void set_OnFileDownloadFinished_13(FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * value)
	{
		___OnFileDownloadFinished_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFileDownloadFinished_13), (void*)value);
	}

	inline static int32_t get_offset_of_OnCaptureSnapshotFinished_14() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___OnCaptureSnapshotFinished_14)); }
	inline CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * get_OnCaptureSnapshotFinished_14() const { return ___OnCaptureSnapshotFinished_14; }
	inline CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 ** get_address_of_OnCaptureSnapshotFinished_14() { return &___OnCaptureSnapshotFinished_14; }
	inline void set_OnCaptureSnapshotFinished_14(CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * value)
	{
		___OnCaptureSnapshotFinished_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCaptureSnapshotFinished_14), (void*)value);
	}

	inline static int32_t get_offset_of_OnMultipleWindowOpened_15() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___OnMultipleWindowOpened_15)); }
	inline MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * get_OnMultipleWindowOpened_15() const { return ___OnMultipleWindowOpened_15; }
	inline MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B ** get_address_of_OnMultipleWindowOpened_15() { return &___OnMultipleWindowOpened_15; }
	inline void set_OnMultipleWindowOpened_15(MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * value)
	{
		___OnMultipleWindowOpened_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMultipleWindowOpened_15), (void*)value);
	}

	inline static int32_t get_offset_of_OnMultipleWindowClosed_16() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___OnMultipleWindowClosed_16)); }
	inline MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * get_OnMultipleWindowClosed_16() const { return ___OnMultipleWindowClosed_16; }
	inline MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 ** get_address_of_OnMultipleWindowClosed_16() { return &___OnMultipleWindowClosed_16; }
	inline void set_OnMultipleWindowClosed_16(MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * value)
	{
		___OnMultipleWindowClosed_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMultipleWindowClosed_16), (void*)value);
	}

	inline static int32_t get_offset_of_id_17() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___id_17)); }
	inline String_t* get_id_17() const { return ___id_17; }
	inline String_t** get_address_of_id_17() { return &___id_17; }
	inline void set_id_17(String_t* value)
	{
		___id_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_17), (void*)value);
	}

	inline static int32_t get_offset_of_listener_18() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___listener_18)); }
	inline UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * get_listener_18() const { return ___listener_18; }
	inline UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 ** get_address_of_listener_18() { return &___listener_18; }
	inline void set_listener_18(UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * value)
	{
		___listener_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_18), (void*)value);
	}

	inline static int32_t get_offset_of_isPortrait_19() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___isPortrait_19)); }
	inline bool get_isPortrait_19() const { return ___isPortrait_19; }
	inline bool* get_address_of_isPortrait_19() { return &___isPortrait_19; }
	inline void set_isPortrait_19(bool value)
	{
		___isPortrait_19 = value;
	}

	inline static int32_t get_offset_of_urlOnStart_20() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___urlOnStart_20)); }
	inline String_t* get_urlOnStart_20() const { return ___urlOnStart_20; }
	inline String_t** get_address_of_urlOnStart_20() { return &___urlOnStart_20; }
	inline void set_urlOnStart_20(String_t* value)
	{
		___urlOnStart_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___urlOnStart_20), (void*)value);
	}

	inline static int32_t get_offset_of_showOnStart_21() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___showOnStart_21)); }
	inline bool get_showOnStart_21() const { return ___showOnStart_21; }
	inline bool* get_address_of_showOnStart_21() { return &___showOnStart_21; }
	inline void set_showOnStart_21(bool value)
	{
		___showOnStart_21 = value;
	}

	inline static int32_t get_offset_of_fullScreen_22() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___fullScreen_22)); }
	inline bool get_fullScreen_22() const { return ___fullScreen_22; }
	inline bool* get_address_of_fullScreen_22() { return &___fullScreen_22; }
	inline void set_fullScreen_22(bool value)
	{
		___fullScreen_22 = value;
	}

	inline static int32_t get_offset_of_useToolbar_23() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___useToolbar_23)); }
	inline bool get_useToolbar_23() const { return ___useToolbar_23; }
	inline bool* get_address_of_useToolbar_23() { return &___useToolbar_23; }
	inline void set_useToolbar_23(bool value)
	{
		___useToolbar_23 = value;
	}

	inline static int32_t get_offset_of_toolbarPosition_24() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___toolbarPosition_24)); }
	inline int32_t get_toolbarPosition_24() const { return ___toolbarPosition_24; }
	inline int32_t* get_address_of_toolbarPosition_24() { return &___toolbarPosition_24; }
	inline void set_toolbarPosition_24(int32_t value)
	{
		___toolbarPosition_24 = value;
	}

	inline static int32_t get_offset_of_actions_25() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___actions_25)); }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * get_actions_25() const { return ___actions_25; }
	inline Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC ** get_address_of_actions_25() { return &___actions_25; }
	inline void set_actions_25(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * value)
	{
		___actions_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actions_25), (void*)value);
	}

	inline static int32_t get_offset_of_payloadActions_26() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___payloadActions_26)); }
	inline Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383 * get_payloadActions_26() const { return ___payloadActions_26; }
	inline Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383 ** get_address_of_payloadActions_26() { return &___payloadActions_26; }
	inline void set_payloadActions_26(Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383 * value)
	{
		___payloadActions_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payloadActions_26), (void*)value);
	}

	inline static int32_t get_offset_of_frame_27() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___frame_27)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_frame_27() const { return ___frame_27; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_frame_27() { return &___frame_27; }
	inline void set_frame_27(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___frame_27 = value;
	}

	inline static int32_t get_offset_of_referenceRectTransform_28() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___referenceRectTransform_28)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_referenceRectTransform_28() const { return ___referenceRectTransform_28; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_referenceRectTransform_28() { return &___referenceRectTransform_28; }
	inline void set_referenceRectTransform_28(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___referenceRectTransform_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___referenceRectTransform_28), (void*)value);
	}

	inline static int32_t get_offset_of_started_29() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___started_29)); }
	inline bool get_started_29() const { return ___started_29; }
	inline bool* get_address_of_started_29() { return &___started_29; }
	inline void set_started_29(bool value)
	{
		___started_29 = value;
	}

	inline static int32_t get_offset_of_backButtonEnabled_30() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___backButtonEnabled_30)); }
	inline bool get_backButtonEnabled_30() const { return ___backButtonEnabled_30; }
	inline bool* get_address_of_backButtonEnabled_30() { return &___backButtonEnabled_30; }
	inline void set_backButtonEnabled_30(bool value)
	{
		___backButtonEnabled_30 = value;
	}

	inline static int32_t get_offset_of_backgroundColor_31() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___backgroundColor_31)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_backgroundColor_31() const { return ___backgroundColor_31; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_backgroundColor_31() { return &___backgroundColor_31; }
	inline void set_backgroundColor_31(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___backgroundColor_31 = value;
	}

	inline static int32_t get_offset_of_OnKeyCodeReceived_32() { return static_cast<int32_t>(offsetof(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D, ___OnKeyCodeReceived_32)); }
	inline KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * get_OnKeyCodeReceived_32() const { return ___OnKeyCodeReceived_32; }
	inline KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 ** get_address_of_OnKeyCodeReceived_32() { return &___OnKeyCodeReceived_32; }
	inline void set_OnKeyCodeReceived_32(KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * value)
	{
		___OnKeyCodeReceived_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnKeyCodeReceived_32), (void*)value);
	}
};


// UniWebViewAndroidStaticListener
struct UniWebViewAndroidStaticListener_t9D8197E1377AE3EDE6A3E60402B6817082F80CB5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UniWebViewNativeListener
struct UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UniWebView UniWebViewNativeListener::webView
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView_5;
	// UniWebViewSafeBrowsing UniWebViewNativeListener::safeBrowsing
	UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * ___safeBrowsing_6;

public:
	inline static int32_t get_offset_of_webView_5() { return static_cast<int32_t>(offsetof(UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6, ___webView_5)); }
	inline UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * get_webView_5() const { return ___webView_5; }
	inline UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D ** get_address_of_webView_5() { return &___webView_5; }
	inline void set_webView_5(UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * value)
	{
		___webView_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webView_5), (void*)value);
	}

	inline static int32_t get_offset_of_safeBrowsing_6() { return static_cast<int32_t>(offsetof(UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6, ___safeBrowsing_6)); }
	inline UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * get_safeBrowsing_6() const { return ___safeBrowsing_6; }
	inline UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD ** get_address_of_safeBrowsing_6() { return &___safeBrowsing_6; }
	inline void set_safeBrowsing_6(UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * value)
	{
		___safeBrowsing_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeBrowsing_6), (void*)value);
	}
};

struct UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UniWebViewNativeListener> UniWebViewNativeListener::listeners
	Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710 * ___listeners_4;

public:
	inline static int32_t get_offset_of_listeners_4() { return static_cast<int32_t>(offsetof(UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_StaticFields, ___listeners_4)); }
	inline Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710 * get_listeners_4() const { return ___listeners_4; }
	inline Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710 ** get_address_of_listeners_4() { return &___listeners_4; }
	inline void set_listeners_4(Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710 * value)
	{
		___listeners_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listeners_4), (void*)value);
	}
};


// UniWebViewSafeBrowingComponent
struct UniWebViewSafeBrowingComponent_tBA0A33F011EBE1BD20764B1B92F10A0459A74312  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String UniWebViewSafeBrowingComponent::url
	String_t* ___url_4;

public:
	inline static int32_t get_offset_of_url_4() { return static_cast<int32_t>(offsetof(UniWebViewSafeBrowingComponent_tBA0A33F011EBE1BD20764B1B92F10A0459A74312, ___url_4)); }
	inline String_t* get_url_4() const { return ___url_4; }
	inline String_t** get_address_of_url_4() { return &___url_4; }
	inline void set_url_4(String_t* value)
	{
		___url_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_m318722AF88298242B0822DB6715D00FABDDA3113_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mF5562A0C81CEDFE1C295F7E16FC6904B5057CB2D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m1D9CF8FA99A277EE49BC3002FDEAACDCDB29803B_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE985A35FC727FA9F519564063C5C5063209ADDA8_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m45DB5340BC5312349874253DD3239546CB025D21_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mAAE01A16F138CEC8E1965D322EFB6A7045FE76F2_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_m6489EA6ECBD1AEA0121CD0D82576F1312503149C_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Single>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject_CallStatic_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1FB614EE7BD90855AEEE4C310F647B8AEBD86F5B_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mCABABA5D0FA017D2D54BE4FA6256C51518274116_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mF3BA34126DA8AFA32D1E5285D842C5955C698F0D_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA8F31A10EE1129768E13ACC4DC847B05EAD2A055_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m1F74BC3B29E63392FBC9312D0AE74CC7B1C143A5_gshared (String_t* ___json0, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void UniWebView::UpdateFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_UpdateFrame_m737DA86EB26270271478542ADFD805BA1BCCF37C (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method);
// System.String UniWebViewNativeListener::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * __this, const RuntimeMethod* method);
// System.String UniWebViewInterface::GetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetUrl_m502FA510221DBF46C6AA46918790E2BF0D119178 (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Rect UniWebView::NextFrameRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  UniWebView_NextFrameRect_mF78AF2048989B01E16BD797C6E06FEBD9E22095B (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetFrame(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetFrame_m274F30611B296904B7F6D7195DFAFF27AB17C8BE (String_t* ___name0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UniWebViewLogger UniWebViewLogger::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6 (const RuntimeMethod* method);
// System.Void UniWebViewLogger::Info(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Info_m40005F715E0F43924AFA4AAB3AAB8FCB6BC0F385 (UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::GetWorldCorners(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_GetWorldCorners_m5351A825540654FFDBD0837AC37D2139F64A4FD8 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___fourCornersArray0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mC1A1DF8460F0743F0BC86D9EEFA74621EF489848 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m318722AF88298242B0822DB6715D00FABDDA3113_gshared)(__this, method);
}
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_mAEC8A341577CC74EC89D5890E6D6E4A82B03574D (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Canvas_get_worldCamera_mFE4C9FDA7996FE20AC5CA3CB45B4190C40122D51 (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, const RuntimeMethod* method);
// System.Void UniWebViewLogger::Critical(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Critical_m9E5DC408B6A2006BD4A3DCDA9349DCB55E44B096 (UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Single UniWebViewInterface::NativeScreenWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_NativeScreenWidth_m89DCA1E22C2F022EB4834379400AA25FAA844A97 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Single UniWebViewInterface::NativeScreenHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_NativeScreenHeight_m23A5BBA09FB984630324E5277D1325D9E87C39DB (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UniWebViewNativeListener>()
inline UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * GameObject_AddComponent_TisUniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_mE8CF5E1FE32B12548C419E21C43C489BFDB4901D (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mF5562A0C81CEDFE1C295F7E16FC6904B5057CB2D_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Void UniWebViewNativeListener::AddListener(UniWebViewNativeListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_AddListener_m8F02DC28D1F8C723366B266BD9844AA283E231EA (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * ___target0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::Init(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Init_m4677F77E4C0FA5B86480BEB625138BF2ADA173CF (String_t* ___name0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, const RuntimeMethod* method);
// System.Boolean UniWebView::Show(System.Boolean,UniWebViewTransitionEdge,System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView_Show_m9DA0F0B1E4BB7DB96E2D1774B405AF2922E52CF8 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___fade0, int32_t ___edge1, float ___duration2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___completionHandler3, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void UniWebView::Load(System.String,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_Load_mD1C68D8D4A960C2E3F0A2D8DF9E383C0252AB272 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___url0, bool ___skipEncoding1, String_t* ___readAccessURL2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UniWebView/OrientationChangedDelegate::Invoke(UniWebView,UnityEngine.ScreenOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrientationChangedDelegate_Invoke_m836E9F443DA23D568B80D40FF01BF176A0BF7ABF (OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, int32_t ___orientation1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F (int32_t ___key0, const RuntimeMethod* method);
// System.Boolean UniWebView::get_CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView_get_CanGoBack_mFE0488DC5FA2DC73206B6721856FA34B152D72D3 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method);
// System.Void UniWebView::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_GoBack_mB2C1D7DE62A2FD8FD5030EA55ED5727D135C38E7 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnShouldClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnShouldClose_mCA5EFB924EAE488F69E3720BD1E562D6EEDC8B8A (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method);
// System.Boolean UniWebView::Hide(System.Boolean,UniWebViewTransitionEdge,System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView_Hide_m7F93206A3FFFD79E7796756E60513AAB3EDCCFE7 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___fade0, int32_t ___edge1, float ___duration2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___completionHandler3, const RuntimeMethod* method);
// System.Void UniWebViewInterface::Load(System.String,System.String,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Load_mB5DDAE3A94607307F02F52B2CCAB124C4D7CA216 (String_t* ___name0, String_t* ___url1, bool ___skipEncoding2, String_t* ___readAccessURL3, const RuntimeMethod* method);
// System.Void UniWebViewInterface::LoadHTMLString(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_LoadHTMLString_m2A3FBDA02B16E995181776DF8F7675BBC5FA3F51 (String_t* ___name0, String_t* ___html1, String_t* ___baseUrl2, bool ___skipEncoding3, const RuntimeMethod* method);
// System.Void UniWebViewInterface::Reload(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Reload_m3DE8C46B7D2FBCF8783F0CB08D2552C0C7894A00 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::Stop(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Stop_mD9E8A77DBAB7461EB60B8A7FCDC6D9D3734BFDA8 (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UniWebViewInterface::CanGoBack(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_CanGoBack_mE9B320BA8FC8A2B3F33A64A61BE8B33CB41CA2AA (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UniWebViewInterface::CanGoForward(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_CanGoForward_m8714EECA9004CD362F167336812B5C7B9793A36E (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::GoBack(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_GoBack_m865844D0CFC589608EBE2C94167371B0178B6CBE (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::GoForward(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_GoForward_m34001F0D8B9CA968CB4F59388FC5CE6056043F0A (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetOpenLinksInExternalBrowser(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetOpenLinksInExternalBrowser_m14EAEF286298221E80E845BC2E8A24618A406E4C (String_t* ___name0, bool ___flag1, const RuntimeMethod* method);
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0 (const RuntimeMethod* method);
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75 (Guid_t * __this, const RuntimeMethod* method);
// System.Boolean UniWebViewInterface::Show(System.String,System.Boolean,System.Int32,System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_Show_m18F4D9BA0E6AE5E787D591263A59CACEBA32F2A8 (String_t* ___name0, bool ___fade1, int32_t ___edge2, float ___duration3, String_t* ___identifier4, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action>::Add(!0,!1)
inline void Dictionary_2_Add_m107138FF128B1AF906D4A9F96930F2950EAB7E2D (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * __this, String_t* ___key0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *, String_t*, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))Dictionary_2_Add_m1D9CF8FA99A277EE49BC3002FDEAACDCDB29803B_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void UniWebView::SetShowToolbar(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetShowToolbar_m60E94DF31354955AAA4354B0B94720827ADE4C9B (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___show0, bool ___animated1, bool ___onTop2, bool ___adjustInset3, const RuntimeMethod* method);
// System.Boolean UniWebViewInterface::Hide(System.String,System.Boolean,System.Int32,System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_Hide_m24755AC4B2521922BC932C7ECC3491F14B7DC9F8 (String_t* ___name0, bool ___fade1, int32_t ___edge2, float ___duration3, String_t* ___identifier4, const RuntimeMethod* method);
// System.Boolean UniWebViewInterface::AnimateTo(System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Single,System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_AnimateTo_m0FA13440C9BF5A742DBB29270ACCD95BB62A809B (String_t* ___name0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, float ___duration5, float ___delay6, String_t* ___identifier7, const RuntimeMethod* method);
// System.Void UniWebViewInterface::AddJavaScript(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddJavaScript_mAE08E18566AB28B010DDB246789DD41DC9251304 (String_t* ___name0, String_t* ___jsString1, String_t* ___identifier2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>::Add(!0,!1)
inline void Dictionary_2_Add_m9DA106042D6B828B008BECD1B176FC9CF2025073 (Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383 * __this, String_t* ___key0, Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383 *, String_t*, Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8 *, const RuntimeMethod*))Dictionary_2_Add_m1D9CF8FA99A277EE49BC3002FDEAACDCDB29803B_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UniWebViewInterface::EvaluateJavaScript(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_EvaluateJavaScript_m26F782D9D3BB2D160159DE505C5F9BDDB8FCDD96 (String_t* ___name0, String_t* ___jsString1, String_t* ___identifier2, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::AddUrlScheme(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddUrlScheme_mA13C597314E486CBE69D8156A7E7FF6ACF3AC0E3 (String_t* ___name0, String_t* ___scheme1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::RemoveUrlScheme(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveUrlScheme_mEC03AD788B6552C3DB8235FC896F87F7E23BFD0D (String_t* ___name0, String_t* ___scheme1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::AddSslExceptionDomain(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddSslExceptionDomain_m414AD19DF117F6276C96CCAE283C87E84D94B262 (String_t* ___name0, String_t* ___domain1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::RemoveSslExceptionDomain(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveSslExceptionDomain_m80211BF5ECAAAFAF019A403FB84240729273F04C (String_t* ___name0, String_t* ___domain1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetHeaderField(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetHeaderField_m06CC84E4568E033CBE71FE14F5CE779031D398CC (String_t* ___name0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetUserAgent(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetUserAgent_mD74FE5C6D5CBF6D18E50B2D46A80DAB281585ACA (String_t* ___name0, String_t* ___userAgent1, const RuntimeMethod* method);
// System.String UniWebViewInterface::GetUserAgent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetUserAgent_mE4316BCAE934C23E60EC6727FC4718CA55EC4407 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetAllowAutoPlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowAutoPlay_mE612D2338A1FC37CB4BA4F72B47C351EE68B1406 (bool ___flag0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetAllowFileAccess(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowFileAccess_mD59D2F8584829A8E21041D04235B70D13CF12CCD (String_t* ___name0, bool ___flag1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetAllowFileAccessFromFileURLs(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowFileAccessFromFileURLs_m8E151F4EB89CD2F22C310B1C2C946733EACAA25B (String_t* ___name0, bool ___flag1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetAllowUniversalAccessFromFileURLs(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowUniversalAccessFromFileURLs_mD1F0FF911FB6F4E35865DA2FFA82DC0E60E6956B (bool ___flag0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetJavaScriptEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetJavaScriptEnabled_mBEB708FBE7370C21C2236B983952EF9288CDDEDF (bool ___enabled0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetAllowJavaScriptOpenWindow(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowJavaScriptOpenWindow_mEEBFA4F20C0DE92B97C7B6DC8BDBBFC920F0D122 (bool ___flag0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::CleanCache(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_CleanCache_m6F6AC63596B39970CCF284894D83ED0889CCB956 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::ClearCookies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ClearCookies_m174FBFCC182937884A0EED6BEA25C13FB8843576 (const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetCookie(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetCookie_m2AD3F8585F1F3F95F78F0199D587641E97AE2562 (String_t* ___url0, String_t* ___cookie1, bool ___skipEncoding2, const RuntimeMethod* method);
// System.String UniWebViewInterface::GetCookie(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetCookie_m0E0CB963CA0628BE880CEBD2C117D6393DC5F8CA (String_t* ___url0, String_t* ___key1, bool ___skipEncoding2, const RuntimeMethod* method);
// System.Void UniWebViewInterface::RemoveCookies(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveCookies_m0201B410ACED36F66127F291EB31EEF833FE75A9 (String_t* ___url0, bool ___skipEncoding1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::RemoveCookie(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveCookie_m494FA76248EC3AAD25CC5E5732CB8046FC395BF1 (String_t* ___url0, String_t* ___key1, bool ___skipEncoding2, const RuntimeMethod* method);
// System.Void UniWebViewInterface::ClearHttpAuthUsernamePassword(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ClearHttpAuthUsernamePassword_mD14BDF155EE31E42B704B88AD743ADBC4224A589 (String_t* ___host0, String_t* ___realm1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetBackgroundColor(System.String,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetBackgroundColor_mD7892432297CB0BA50CFD6C752EF2C7B22D42A0F (String_t* ___name0, float ___r1, float ___g2, float ___b3, float ___a4, const RuntimeMethod* method);
// System.Single UniWebViewInterface::GetWebViewAlpha(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_GetWebViewAlpha_m3F0C9265270A3171F4C74B85D88AB23258A64345 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetWebViewAlpha(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetWebViewAlpha_m2FD8A56031913E27FD0478CC890D6ABF56C9DD5D (String_t* ___name0, float ___alpha1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetShowSpinnerWhileLoading(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetShowSpinnerWhileLoading_m64ACB6D8B878A1D26C165167E069852E6D8D0496 (String_t* ___name0, bool ___show1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetSpinnerText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetSpinnerText_m989E0B03B5F8337C1BD7F076F71695CB59A75FD4 (String_t* ___name0, String_t* ___text1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetHorizontalScrollBarEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetHorizontalScrollBarEnabled_m69DA8E83949EA69F09F1FEEA8839F9DAD4CAD331 (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetVerticalScrollBarEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetVerticalScrollBarEnabled_m36B6C595438FD45B7B48EFDD986A3D9B324C1877 (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetBouncesEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetBouncesEnabled_m870D52004480D1D338E6E9F4E909B55651DCFFAB (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetZoomEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetZoomEnabled_mB567F875230E32991A50974B3F85D958E77432E0 (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::AddPermissionTrustDomain(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddPermissionTrustDomain_m4B4E4B62B362C33B0D574E063DD70B4D294F0D19 (String_t* ___name0, String_t* ___domain1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::RemovePermissionTrustDomain(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemovePermissionTrustDomain_m55AFA1F4A95DD24CFDEA4CBF1D9573E0B6D18BF5 (String_t* ___name0, String_t* ___domain1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetUseWideViewPort(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetUseWideViewPort_m4220599F4A8710265E67C6E4497D8E84DF460FA1 (String_t* ___name0, bool ___use1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetLoadWithOverviewMode(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetLoadWithOverviewMode_m5A6C144DE328D7C6B80E68D5DC73865066A41A3F (String_t* ___name0, bool ___overview1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetUserInteractionEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetUserInteractionEnabled_m9DD938B6029F28C58F0D8BEB32BD48AE9761F619 (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetWebContentsDebuggingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetWebContentsDebuggingEnabled_mE7362540B11E5A7855875FCF66B5B1C4D94E3ABB (bool ___enabled0, const RuntimeMethod* method);
// System.Void UniWebView/<>c__DisplayClass147_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass147_0__ctor_m48494B1C68F023B9629F1CB7C91AB1D03F87E12D (U3CU3Ec__DisplayClass147_0_t22B9F896525CEE39A0E34637FEC8801CE13D1CC7 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UniWebViewNativeResultPayload>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mFEA53F543E097D36BFEEF4744D8CBBD15D5A42B3 (Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UniWebView::EvaluateJavaScript(System.String,System.Action`1<UniWebViewNativeResultPayload>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_EvaluateJavaScript_m7110F09B56421EE6A66A4211329C813BFF5BBD03 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___jsString0, Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8 * ___completionHandler1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetAllowHTTPAuthPopUpWindow(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowHTTPAuthPopUpWindow_mBA82256009CB9EE7A2D88EA3D60E4A26A36444F2 (String_t* ___name0, bool ___flag1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetCalloutEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetCalloutEnabled_mBD2F744FA45335697BF7EEEBA779C4420444604E (String_t* ___name0, bool ___flag1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetSupportMultipleWindows(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetSupportMultipleWindows_m1DB49B0DB842BE6B5FDEB8BDD54352ACD04FEDF6 (String_t* ___name0, bool ___flag1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetDefaultFontSize(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetDefaultFontSize_m92653953667F78DD34F3587C380133CBB35C5C5E (String_t* ___name0, int32_t ___size1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetTextZoom(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetTextZoom_m4636D0279A078AB35345810F9AFCFABF237B835E (String_t* ___name0, int32_t ___textZoom1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::Print(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Print_m7EDE4F940A2A5A15F85741CC00A998042938A21C (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::CaptureSnapshot(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_CaptureSnapshot_mEBD6AEA2FEADBD455A353BD21DFFBBA89CDEE4C9 (String_t* ___name0, String_t* ___filename1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::ScrollTo(System.String,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ScrollTo_m01D85E8C053299774A0AB7C60F5A0C29FB0D3E08 (String_t* ___name0, int32_t ___x1, int32_t ___y2, bool ___animated3, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetDownloadEventForContextMenuEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetDownloadEventForContextMenuEnabled_m51340BF487B141158FA8766E005746F49C5235EE (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method);
// System.Void UniWebViewNativeListener::RemoveListener(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_RemoveListener_mCB997D0B90F62CDACDACC472381EA9C7FEFDE77D (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::Destroy(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Destroy_mDD96291A0C75B4FAA7767D95D0491F1DAE34A2C8 (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m077627631DE1E79894B3B1557F16F883C24E690C (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * __this, String_t* ___key0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *, String_t*, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **, const RuntimeMethod*))Dictionary_2_TryGetValue_mE985A35FC727FA9F519564063C5C5063209ADDA8_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action>::Remove(!0)
inline bool Dictionary_2_Remove_m9433D5C61A3FDBCC815B81514A5C4047081A1733 (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m45DB5340BC5312349874253DD3239546CB025D21_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m7780B2017AA17250A077A690CAB507AC59B42D41 (Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383 * __this, String_t* ___key0, Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383 *, String_t*, Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8 **, const RuntimeMethod*))Dictionary_2_TryGetValue_mE985A35FC727FA9F519564063C5C5063209ADDA8_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Action`1<UniWebViewNativeResultPayload>::Invoke(!0)
inline void Action_1_Invoke_m7FD4BCCE3B594A86994AF02F773EDBD3E8C855FA (Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8 * __this, UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8 *, UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F *, const RuntimeMethod*))Action_1_Invoke_mAAE01A16F138CEC8E1965D322EFB6A7045FE76F2_gshared)(__this, ___obj0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>::Remove(!0)
inline bool Dictionary_2_Remove_m91F9C013C61837D39B5C237F12F0F6B30EB9BA6C (Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m45DB5340BC5312349874253DD3239546CB025D21_gshared)(__this, ___key0, method);
}
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method);
// System.Void UniWebView/PageFinishedDelegate::Invoke(UniWebView,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageFinishedDelegate_Invoke_mF649F376FBB890D9CFB948732D510CEEA405ADB6 (PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, int32_t ___statusCode1, String_t* ___url2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UniWebView/PageStartedDelegate::Invoke(UniWebView,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageStartedDelegate_Invoke_mFE74C8CD1858C2368AC8F336A2903F97F57F6E5F (PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, String_t* ___url1, const RuntimeMethod* method);
// System.Void UniWebView/PageErrorReceivedDelegate::Invoke(UniWebView,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageErrorReceivedDelegate_Invoke_mBA8063297A0D58C38D1272F1E1866B10E99BBF3E (PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, int32_t ___errorCode1, String_t* ___errorMessage2, const RuntimeMethod* method);
// System.Void UniWebView/PageProgressChangedDelegate::Invoke(UniWebView,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageProgressChangedDelegate_Invoke_m631C4300E4E5F355A4CE188EDC0BFF9B4589AE96 (PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, float ___progress1, const RuntimeMethod* method);
// System.Void UniWebViewMessage::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewMessage__ctor_mE2E221E85B18399A604EF466D9E9A9228E309170 (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, String_t* ___rawMessage0, const RuntimeMethod* method);
// System.Void UniWebView/MessageReceivedDelegate::Invoke(UniWebView,UniWebViewMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedDelegate_Invoke_mD469364495B240D58B3D77DBF647A62DE9E9F397 (MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC  ___message1, const RuntimeMethod* method);
// System.Boolean UniWebView/ShouldCloseDelegate::Invoke(UniWebView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShouldCloseDelegate_Invoke_m0A62F2058438FBA4343F3A51D70088794FBE0D7A (ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, const RuntimeMethod* method);
// System.Void UniWebView/OnWebContentProcessTerminatedDelegate::Invoke(UniWebView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnWebContentProcessTerminatedDelegate_Invoke_m5C6BB033CF8D2871BCA4E9D3360AE62F8422468C (OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, const RuntimeMethod* method);
// System.Void UniWebView/MultipleWindowOpenedDelegate::Invoke(UniWebView,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleWindowOpenedDelegate_Invoke_m3183DC9417F5EF4A721A341D1E414D10B96114A7 (MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, String_t* ___multipleWindowId1, const RuntimeMethod* method);
// System.Void UniWebView/MultipleWindowClosedDelegate::Invoke(UniWebView,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleWindowClosedDelegate_Invoke_mF13967F9006AE565AFC93DCDE631C5D1A7F3C0DC (MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, String_t* ___multipleWindowId1, const RuntimeMethod* method);
// System.Void UniWebView/FileDownloadStarted::Invoke(UniWebView,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDownloadStarted_Invoke_mDBCB7B796F3769B973B94C2C93E5842878D98D0A (FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, String_t* ___remoteUrl1, String_t* ___fileName2, const RuntimeMethod* method);
// System.Void UniWebView/FileDownloadFinished::Invoke(UniWebView,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDownloadFinished_Invoke_m0BEF0FE390BBED00C1B7D807E4170DAB61A6CAD9 (FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, int32_t ___errorCode1, String_t* ___remoteUrl2, String_t* ___diskPath3, const RuntimeMethod* method);
// System.Void UniWebView/CaptureSnapshotFinished::Invoke(UniWebView,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureSnapshotFinished_Invoke_m98A4592BB0B657340815D963212F5E9D8D2F6D30 (CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, int32_t ___errorCode1, String_t* ___diskPath2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action>::.ctor()
inline void Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6 (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>::.ctor()
inline void Dictionary_2__ctor_mAB26B178197E25C427201DADB4B06019B0C82D7A (Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UniWebViewNativeListener UniWebViewNativeListener::GetListener(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * UniWebViewNativeListener_GetListener_m6B7D0D84EB4814AAC6EAC1BF4DB70396DA3C25BF (String_t* ___name0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_mDD47332AAF3036AAFC4C6626A999A452E7143DCF (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_mC78C53FBCEF409A2EBD689D6781D23C62E6161F2 (MethodInfo_t * ___left0, MethodInfo_t * ___right1, const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8846EB11F0A221BDE237DE041D17764B36065404 (String_t* ___separator0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value1, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UniWebViewAndroidStaticListener>()
inline UniWebViewAndroidStaticListener_t9D8197E1377AE3EDE6A3E60402B6817082F80CB5 * GameObject_AddComponent_TisUniWebViewAndroidStaticListener_t9D8197E1377AE3EDE6A3E60402B6817082F80CB5_m6FBD4D6A1FA445517C3B0CCDA6EC26AA33056AF1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  UniWebViewAndroidStaticListener_t9D8197E1377AE3EDE6A3E60402B6817082F80CB5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mF5562A0C81CEDFE1C295F7E16FC6904B5057CB2D_gshared)(__this, method);
}
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::CheckPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16 (const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_m208681393026F647A5B2E188EB994206FB0FA67F (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m6489EA6ECBD1AEA0121CD0D82576F1312503149C_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Single>(System.String,System.Object[])
inline float AndroidJavaObject_CallStatic_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1FB614EE7BD90855AEEE4C310F647B8AEBD86F5B (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  float (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1FB614EE7BD90855AEEE4C310F647B8AEBD86F5B_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UniWebViewLogger::Log(UniWebViewLogger/Level,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Log_mBB70AA0855F067B604273FA2EBA03A7CF40D50F2 (UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * __this, int32_t ___level0, String_t* ___message1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetLogLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetLogLevel_m0642B197237E7F0ECE0555FB3D3623833213A6FD (int32_t ___level0, const RuntimeMethod* method);
// System.Void UniWebViewLogger::.ctor(UniWebViewLogger/Level)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger__ctor_mAC4A701D75FB7E12C0BE89B6CBC8B11F76C4A7C9 (UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * __this, int32_t ___level0, const RuntimeMethod* method);
// UniWebViewLogger/Level UniWebViewLogger::get_LogLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniWebViewLogger_get_LogLevel_mA5BBF466DBC81D16BEB0F02A873953BC6CEF0E1E_inline (UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * __this, const RuntimeMethod* method);
// System.String UniWebViewMessage::get_RawMessage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_RawMessage_m19FAD7EFE68623EA8F3F707A8A89F1C1DF70E09D_inline (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, const RuntimeMethod* method);
// System.Void UniWebViewMessage::set_RawMessage(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniWebViewMessage_set_RawMessage_mE16E8B64FF787A83CFDD3D8B87C1A37D79F469BE_inline (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UniWebViewMessage::get_Scheme()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_Scheme_mEE66730B22BBC5667A649200EE7252B91935C6DA_inline (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, const RuntimeMethod* method);
// System.Void UniWebViewMessage::set_Scheme(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Scheme_m492CC65C3EEA256F70D776658D1008328932A2D6_inline (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UniWebViewMessage::get_Path()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_Path_mB5F1D6C5958D5114D3ED7294392E2444D58ACA32_inline (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, const RuntimeMethod* method);
// System.Void UniWebViewMessage::set_Path(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Path_m7B32AA816651D1DC8B7F7352CC75A144738154E1_inline (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> UniWebViewMessage::get_Args()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * UniWebViewMessage_get_Args_mABDBE768100A9408C644B7478411B04FD7BFD8AC_inline (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, const RuntimeMethod* method);
// System.Void UniWebViewMessage::set_Args(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Args_mA03F442CD6BE845D3AB05DEB4BB8CACC6E67B9F9_inline (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___value0, const RuntimeMethod* method);
// System.Void UniWebViewLogger::Debug(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Debug_m5B231F3715D584026C3C56E58C9F4204FDC13033 (UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD (String_t* __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___separator0, int32_t ___options1, const RuntimeMethod* method);
// System.Void UniWebViewLogger::Verbose(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Verbose_mFB8101EC0561801F7B59E9DC5B2E49727BE3E39D (UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String System.String::TrimEnd(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimEnd_mA98B5B9C45CCAB016F32F1C8BBE29A215B9D277E (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___trimChars0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::UnEscapeURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_UnEscapeURL_mE7BC5219759DCFBFD1327FDBFF633F2945E1C76C (String_t* ___s0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m608577A5AF450760A657AA9EE6A096E5A59DA1B8 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_mCABABA5D0FA017D2D54BE4FA6256C51518274116_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0)
inline String_t* Dictionary_2_get_Item_mC446DE0A4ADE6CCB3DEBE59BA4BBF4F64040305B (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mF3BA34126DA8AFA32D1E5285D842C5955C698F0D_gshared)(__this, ___key0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m1ACD9DE86340A7CA50E97B170F973A5A09160DCE (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_mA8F31A10EE1129768E13ACC4DC847B05EAD2A055_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UniWebViewNativeListener>::Add(!0,!1)
inline void Dictionary_2_Add_mD3F3FF95D32D4B473461AB4F39A254F3115C8B42 (Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710 * __this, String_t* ___key0, UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710 *, String_t*, UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 *, const RuntimeMethod*))Dictionary_2_Add_m1D9CF8FA99A277EE49BC3002FDEAACDCDB29803B_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UniWebViewNativeListener>::Remove(!0)
inline bool Dictionary_2_Remove_m3C0571CBE36334C381F50B70493444AC902950DB (Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m45DB5340BC5312349874253DD3239546CB025D21_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UniWebViewNativeListener>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m10B0146D3E18B57525BE9D67DA2CBE236181DC7F (Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710 * __this, String_t* ___key0, UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710 *, String_t*, UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 **, const RuntimeMethod*))Dictionary_2_TryGetValue_mE985A35FC727FA9F519564063C5C5063209ADDA8_gshared)(__this, ___key0, ___value1, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnPageStarted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageStarted_m6CFF7B32BCCF12446DAE75C70CAD97FF9CA5E399 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___url0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<UniWebViewNativeResultPayload>(System.String)
inline UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F_m09FF9E0AE4A163AEB7F29A25AD3398B25F76BEF5 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m1F74BC3B29E63392FBC9312D0AE74CC7B1C143A5_gshared)(___json0, method);
}
// System.Void UniWebView::InternalOnPageFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageFinished_mE2974A0B41A120A76FB7A612AE9CF4E2A387A5FD (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * ___payload0, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnPageErrorReceived(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageErrorReceived_m04D0B828D3B7AA5E19B9DAE47EA73458DC338644 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * ___payload0, const RuntimeMethod* method);
// System.Boolean System.Single::TryParse(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mC2E0086EAB164A81380FD03BDE671C574F52E373 (String_t* ___s0, float* ___result1, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnPageProgressChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageProgressChanged_mC778758DD36AEAF3BF4F70F7BB6402AE6F1B4693 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, float ___progress0, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnShowTransitionFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnShowTransitionFinished_m55B96E16E81414073E97D3E8CCD858AE73BF4C7A (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___identifier0, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnHideTransitionFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnHideTransitionFinished_m11B0DD78DB7D4A24408F74EC5EDFCDDCF1342448 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___identifier0, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnAnimateToFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnAnimateToFinished_mDECF0D498F11EE3C2AE468BAA980C4911636562E (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___identifier0, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnAddJavaScriptFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnAddJavaScriptFinished_mD4E1CB64277796B210DD970B38C12FD5C99ED1D9 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * ___payload0, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnEvalJavaScriptFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnEvalJavaScriptFinished_m7F41AE45F97DDA851397CA49CFE9B6A6C35BBDBA (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * ___payload0, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnMessageReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnMessageReceived_mE9500C929F1B622F3A24490BC235108F586B5B7C (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___result0, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnWebContentProcessDidTerminate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnWebContentProcessDidTerminate_m45DD9D1F5E94244F10CD474CED3366D3191430F6 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method);
// System.Void UniWebViewSafeBrowsing::InternalSafeBrowsingFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_InternalSafeBrowsingFinished_m88546E0A7E35AFEBAA131F6B286F413FA4DDAB9A (UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * __this, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnMultipleWindowOpened(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnMultipleWindowOpened_mAEDD5DAEE70B25FC188B7FAF9221ED9832C65036 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___multiWindowId0, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnMultipleWindowClosed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnMultipleWindowClosed_m13A3EDF356C5D44359ABDC0692BD7F37AFDAB71D (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___multiWindowId0, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnFileDownloadStarted(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnFileDownloadStarted_mD776361E69C9B8E9AEAC8DD8DAAF1BB4B8F5B735 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * ___payload0, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnFileDownloadFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnFileDownloadFinished_mAE01165D0EE2524EC9167598267ABF99B61620BB (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * ___payload0, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnCaptureSnapshotFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnCaptureSnapshotFinished_mF8B11C916CD448A50566713B4E8AAF5BE31FFDA3 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * ___payload0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UniWebViewNativeListener>::.ctor()
inline void Dictionary_2__ctor_m6D590EC94EE7F0732585591D62D5086056BF01B6 (Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// UniWebViewSafeBrowsing UniWebViewSafeBrowsing::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * UniWebViewSafeBrowsing_Create_m3DEFA0DE155230C91FE42B8371C9B04053105A27 (String_t* ___url0, const RuntimeMethod* method);
// System.Void UniWebViewSafeBrowsing::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_Show_mF7254B28D372491B0866560A010FA21FD672B122 (UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * __this, const RuntimeMethod* method);
// System.Boolean UniWebViewInterface::IsSafeBrowsingSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_IsSafeBrowsingSupported_m37B9A883980CF88BAC8364A1A9BD6A05ED7D4C38 (const RuntimeMethod* method);
// System.Void UniWebViewSafeBrowsing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing__ctor_m744A9A55BB26BC5558C3F17E9DDF91F56B9B1CF2 (UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * __this, const RuntimeMethod* method);
// System.Boolean UniWebViewHelper::get_IsEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewHelper_get_IsEditor_m263D366CDCD483F5684AAFF210843D31AE6620F8 (const RuntimeMethod* method);
// System.Void UniWebViewSafeBrowsing::Init(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_Init_m58830FB373330C60FC6BC2314F46973E531B8D5A (UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * __this, String_t* ___url0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E (String_t* ___url0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SafeBrowsingShow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingShow_m39CDEC608E514DB9439FECFCE1EFE54229B2D66C (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SafeBrowsingSetToolbarColor(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingSetToolbarColor_mBDBABEC75D5644402BEDA2729E8070B6D80C19A3 (String_t* ___name0, float ___r1, float ___g2, float ___b3, const RuntimeMethod* method);
// System.Void UnityEngine.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m4DCF5CDB32C2C69290894101A81F473865169279 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SafeBrowsingInit(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingInit_mA977AE101B6F704B4A865ADA1FED7CDC8E8608BD (String_t* ___name0, String_t* ___url1, const RuntimeMethod* method);
// System.Void UniWebViewSafeBrowsing/OnSafeBrowsingFinishedDelegate::Invoke(UniWebViewSafeBrowsing)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSafeBrowsingFinishedDelegate_Invoke_mB2336421B012150582D4A0F9DC9423A71E60AE65 (OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * __this, UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * ___browsing0, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, String_t*, const RuntimeMethod*))Action_1_Invoke_mAAE01A16F138CEC8E1965D322EFB6A7045FE76F2_gshared)(__this, ___obj0, method);
}
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m4A78786786CEB8310CADB95682FCE27EE5BAD8AB (EmbeddedAttribute_t89E8276D3076D97BEC4E4A0051D68814BAFD967D * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m550CE99F8EBFC67DA3C3BC6780F1A9FCB877ECC9 (IsReadOnlyAttribute_t4B19E717B056B6C1BA6EB0333BFA76CC2E2D3F7E * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void UniWebView::add_OnPageStarted(UniWebView/PageStartedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnPageStarted_m0A772944ECBF553260091FC2F92B7A52F4BEC897 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * V_0 = NULL;
	PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * V_1 = NULL;
	PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * V_2 = NULL;
	{
		PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * L_0 = __this->get_OnPageStarted_4();
		V_0 = L_0;
	}

IL_0007:
	{
		PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * L_1 = V_0;
		V_1 = L_1;
		PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * L_2 = V_1;
		PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC *)CastclassSealed((RuntimeObject*)L_4, PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC_il2cpp_TypeInfo_var));
		PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC ** L_5 = __this->get_address_of_OnPageStarted_4();
		PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * L_6 = V_2;
		PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * L_7 = V_1;
		PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * L_8;
		L_8 = InterlockedCompareExchangeImpl<PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC *>((PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC **)L_5, L_6, L_7);
		V_0 = L_8;
		PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * L_9 = V_0;
		PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * L_10 = V_1;
		if ((!(((RuntimeObject*)(PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC *)L_9) == ((RuntimeObject*)(PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnPageStarted(UniWebView/PageStartedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnPageStarted_m3ED97FEF5DD95E990B08EC91617F8624F6350421 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * V_0 = NULL;
	PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * V_1 = NULL;
	PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * V_2 = NULL;
	{
		PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * L_0 = __this->get_OnPageStarted_4();
		V_0 = L_0;
	}

IL_0007:
	{
		PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * L_1 = V_0;
		V_1 = L_1;
		PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * L_2 = V_1;
		PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC *)CastclassSealed((RuntimeObject*)L_4, PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC_il2cpp_TypeInfo_var));
		PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC ** L_5 = __this->get_address_of_OnPageStarted_4();
		PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * L_6 = V_2;
		PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * L_7 = V_1;
		PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * L_8;
		L_8 = InterlockedCompareExchangeImpl<PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC *>((PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC **)L_5, L_6, L_7);
		V_0 = L_8;
		PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * L_9 = V_0;
		PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * L_10 = V_1;
		if ((!(((RuntimeObject*)(PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC *)L_9) == ((RuntimeObject*)(PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnPageFinished(UniWebView/PageFinishedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnPageFinished_mA345BDA8B1E345B4217580F467DEF3F2F75B6D66 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * V_0 = NULL;
	PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * V_1 = NULL;
	PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * V_2 = NULL;
	{
		PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * L_0 = __this->get_OnPageFinished_5();
		V_0 = L_0;
	}

IL_0007:
	{
		PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * L_1 = V_0;
		V_1 = L_1;
		PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * L_2 = V_1;
		PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA *)CastclassSealed((RuntimeObject*)L_4, PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA_il2cpp_TypeInfo_var));
		PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA ** L_5 = __this->get_address_of_OnPageFinished_5();
		PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * L_6 = V_2;
		PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * L_7 = V_1;
		PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * L_8;
		L_8 = InterlockedCompareExchangeImpl<PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA *>((PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA **)L_5, L_6, L_7);
		V_0 = L_8;
		PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * L_9 = V_0;
		PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * L_10 = V_1;
		if ((!(((RuntimeObject*)(PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA *)L_9) == ((RuntimeObject*)(PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnPageFinished(UniWebView/PageFinishedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnPageFinished_mC6481665D55698B616F7C113B15C2700556ADBEE (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * V_0 = NULL;
	PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * V_1 = NULL;
	PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * V_2 = NULL;
	{
		PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * L_0 = __this->get_OnPageFinished_5();
		V_0 = L_0;
	}

IL_0007:
	{
		PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * L_1 = V_0;
		V_1 = L_1;
		PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * L_2 = V_1;
		PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA *)CastclassSealed((RuntimeObject*)L_4, PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA_il2cpp_TypeInfo_var));
		PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA ** L_5 = __this->get_address_of_OnPageFinished_5();
		PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * L_6 = V_2;
		PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * L_7 = V_1;
		PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * L_8;
		L_8 = InterlockedCompareExchangeImpl<PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA *>((PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA **)L_5, L_6, L_7);
		V_0 = L_8;
		PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * L_9 = V_0;
		PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * L_10 = V_1;
		if ((!(((RuntimeObject*)(PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA *)L_9) == ((RuntimeObject*)(PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnPageErrorReceived(UniWebView/PageErrorReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnPageErrorReceived_m41FBFA182ACEF59D4B0DF7A59EC62FFC10DA6FFC (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * V_0 = NULL;
	PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * V_1 = NULL;
	PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * V_2 = NULL;
	{
		PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * L_0 = __this->get_OnPageErrorReceived_6();
		V_0 = L_0;
	}

IL_0007:
	{
		PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * L_1 = V_0;
		V_1 = L_1;
		PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * L_2 = V_1;
		PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 *)CastclassSealed((RuntimeObject*)L_4, PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1_il2cpp_TypeInfo_var));
		PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 ** L_5 = __this->get_address_of_OnPageErrorReceived_6();
		PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * L_6 = V_2;
		PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * L_7 = V_1;
		PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * L_8;
		L_8 = InterlockedCompareExchangeImpl<PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 *>((PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 **)L_5, L_6, L_7);
		V_0 = L_8;
		PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * L_9 = V_0;
		PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * L_10 = V_1;
		if ((!(((RuntimeObject*)(PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 *)L_9) == ((RuntimeObject*)(PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnPageErrorReceived(UniWebView/PageErrorReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnPageErrorReceived_mDA762EB4F7AFE313E7E2C9E9EAE03F6686E6B1B3 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * V_0 = NULL;
	PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * V_1 = NULL;
	PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * V_2 = NULL;
	{
		PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * L_0 = __this->get_OnPageErrorReceived_6();
		V_0 = L_0;
	}

IL_0007:
	{
		PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * L_1 = V_0;
		V_1 = L_1;
		PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * L_2 = V_1;
		PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 *)CastclassSealed((RuntimeObject*)L_4, PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1_il2cpp_TypeInfo_var));
		PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 ** L_5 = __this->get_address_of_OnPageErrorReceived_6();
		PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * L_6 = V_2;
		PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * L_7 = V_1;
		PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * L_8;
		L_8 = InterlockedCompareExchangeImpl<PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 *>((PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 **)L_5, L_6, L_7);
		V_0 = L_8;
		PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * L_9 = V_0;
		PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * L_10 = V_1;
		if ((!(((RuntimeObject*)(PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 *)L_9) == ((RuntimeObject*)(PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnPageProgressChanged(UniWebView/PageProgressChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnPageProgressChanged_m143968411BBAF2D9D181A7C5CBD7444D177DB6D8 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * V_0 = NULL;
	PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * V_1 = NULL;
	PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * V_2 = NULL;
	{
		PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * L_0 = __this->get_OnPageProgressChanged_7();
		V_0 = L_0;
	}

IL_0007:
	{
		PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * L_1 = V_0;
		V_1 = L_1;
		PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * L_2 = V_1;
		PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 *)CastclassSealed((RuntimeObject*)L_4, PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037_il2cpp_TypeInfo_var));
		PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 ** L_5 = __this->get_address_of_OnPageProgressChanged_7();
		PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * L_6 = V_2;
		PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * L_7 = V_1;
		PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * L_8;
		L_8 = InterlockedCompareExchangeImpl<PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 *>((PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 **)L_5, L_6, L_7);
		V_0 = L_8;
		PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * L_9 = V_0;
		PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * L_10 = V_1;
		if ((!(((RuntimeObject*)(PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 *)L_9) == ((RuntimeObject*)(PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnPageProgressChanged(UniWebView/PageProgressChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnPageProgressChanged_m9650FBF07628D94F0C3E58361CA5FEFA8BC11ED6 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * V_0 = NULL;
	PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * V_1 = NULL;
	PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * V_2 = NULL;
	{
		PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * L_0 = __this->get_OnPageProgressChanged_7();
		V_0 = L_0;
	}

IL_0007:
	{
		PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * L_1 = V_0;
		V_1 = L_1;
		PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * L_2 = V_1;
		PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 *)CastclassSealed((RuntimeObject*)L_4, PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037_il2cpp_TypeInfo_var));
		PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 ** L_5 = __this->get_address_of_OnPageProgressChanged_7();
		PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * L_6 = V_2;
		PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * L_7 = V_1;
		PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * L_8;
		L_8 = InterlockedCompareExchangeImpl<PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 *>((PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 **)L_5, L_6, L_7);
		V_0 = L_8;
		PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * L_9 = V_0;
		PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * L_10 = V_1;
		if ((!(((RuntimeObject*)(PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 *)L_9) == ((RuntimeObject*)(PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnMessageReceived(UniWebView/MessageReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnMessageReceived_mA5C0F5E5A7468C50F4BC270BA8352FF8DB8717E3 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * V_0 = NULL;
	MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * V_1 = NULL;
	MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * V_2 = NULL;
	{
		MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * L_0 = __this->get_OnMessageReceived_8();
		V_0 = L_0;
	}

IL_0007:
	{
		MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * L_1 = V_0;
		V_1 = L_1;
		MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * L_2 = V_1;
		MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B *)CastclassSealed((RuntimeObject*)L_4, MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B_il2cpp_TypeInfo_var));
		MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B ** L_5 = __this->get_address_of_OnMessageReceived_8();
		MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * L_6 = V_2;
		MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * L_7 = V_1;
		MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B *>((MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B **)L_5, L_6, L_7);
		V_0 = L_8;
		MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * L_9 = V_0;
		MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B *)L_9) == ((RuntimeObject*)(MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnMessageReceived(UniWebView/MessageReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnMessageReceived_mCA3339A50ADE5D2EF3D732F6C7EEF459ABCD57C1 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * V_0 = NULL;
	MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * V_1 = NULL;
	MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * V_2 = NULL;
	{
		MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * L_0 = __this->get_OnMessageReceived_8();
		V_0 = L_0;
	}

IL_0007:
	{
		MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * L_1 = V_0;
		V_1 = L_1;
		MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * L_2 = V_1;
		MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B *)CastclassSealed((RuntimeObject*)L_4, MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B_il2cpp_TypeInfo_var));
		MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B ** L_5 = __this->get_address_of_OnMessageReceived_8();
		MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * L_6 = V_2;
		MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * L_7 = V_1;
		MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B *>((MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B **)L_5, L_6, L_7);
		V_0 = L_8;
		MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * L_9 = V_0;
		MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B *)L_9) == ((RuntimeObject*)(MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnShouldClose(UniWebView/ShouldCloseDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnShouldClose_mE169B06B9E462946608C632B0B36AE652A5901AD (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * V_0 = NULL;
	ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * V_1 = NULL;
	ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * V_2 = NULL;
	{
		ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * L_0 = __this->get_OnShouldClose_9();
		V_0 = L_0;
	}

IL_0007:
	{
		ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * L_1 = V_0;
		V_1 = L_1;
		ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * L_2 = V_1;
		ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 *)CastclassSealed((RuntimeObject*)L_4, ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8_il2cpp_TypeInfo_var));
		ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 ** L_5 = __this->get_address_of_OnShouldClose_9();
		ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * L_6 = V_2;
		ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * L_7 = V_1;
		ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * L_8;
		L_8 = InterlockedCompareExchangeImpl<ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 *>((ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 **)L_5, L_6, L_7);
		V_0 = L_8;
		ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * L_9 = V_0;
		ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * L_10 = V_1;
		if ((!(((RuntimeObject*)(ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 *)L_9) == ((RuntimeObject*)(ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnShouldClose(UniWebView/ShouldCloseDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnShouldClose_mDAE45818A95BAFE5F40131035991FC4531E8996A (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * V_0 = NULL;
	ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * V_1 = NULL;
	ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * V_2 = NULL;
	{
		ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * L_0 = __this->get_OnShouldClose_9();
		V_0 = L_0;
	}

IL_0007:
	{
		ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * L_1 = V_0;
		V_1 = L_1;
		ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * L_2 = V_1;
		ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 *)CastclassSealed((RuntimeObject*)L_4, ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8_il2cpp_TypeInfo_var));
		ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 ** L_5 = __this->get_address_of_OnShouldClose_9();
		ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * L_6 = V_2;
		ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * L_7 = V_1;
		ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * L_8;
		L_8 = InterlockedCompareExchangeImpl<ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 *>((ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 **)L_5, L_6, L_7);
		V_0 = L_8;
		ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * L_9 = V_0;
		ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * L_10 = V_1;
		if ((!(((RuntimeObject*)(ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 *)L_9) == ((RuntimeObject*)(ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnOrientationChanged(UniWebView/OrientationChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnOrientationChanged_mE64B49CE720AFB307028C1DBDB87C124C8299D2F (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * V_0 = NULL;
	OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * V_1 = NULL;
	OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * V_2 = NULL;
	{
		OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * L_0 = __this->get_OnOrientationChanged_10();
		V_0 = L_0;
	}

IL_0007:
	{
		OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * L_1 = V_0;
		V_1 = L_1;
		OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * L_2 = V_1;
		OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A *)CastclassSealed((RuntimeObject*)L_4, OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A_il2cpp_TypeInfo_var));
		OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A ** L_5 = __this->get_address_of_OnOrientationChanged_10();
		OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * L_6 = V_2;
		OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * L_7 = V_1;
		OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * L_8;
		L_8 = InterlockedCompareExchangeImpl<OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A *>((OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A **)L_5, L_6, L_7);
		V_0 = L_8;
		OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * L_9 = V_0;
		OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * L_10 = V_1;
		if ((!(((RuntimeObject*)(OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A *)L_9) == ((RuntimeObject*)(OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnOrientationChanged(UniWebView/OrientationChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnOrientationChanged_m71412DBA4BADEADFD20A40603F2BCB8FD5E11BDB (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * V_0 = NULL;
	OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * V_1 = NULL;
	OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * V_2 = NULL;
	{
		OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * L_0 = __this->get_OnOrientationChanged_10();
		V_0 = L_0;
	}

IL_0007:
	{
		OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * L_1 = V_0;
		V_1 = L_1;
		OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * L_2 = V_1;
		OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A *)CastclassSealed((RuntimeObject*)L_4, OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A_il2cpp_TypeInfo_var));
		OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A ** L_5 = __this->get_address_of_OnOrientationChanged_10();
		OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * L_6 = V_2;
		OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * L_7 = V_1;
		OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * L_8;
		L_8 = InterlockedCompareExchangeImpl<OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A *>((OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A **)L_5, L_6, L_7);
		V_0 = L_8;
		OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * L_9 = V_0;
		OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * L_10 = V_1;
		if ((!(((RuntimeObject*)(OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A *)L_9) == ((RuntimeObject*)(OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnWebContentProcessTerminated(UniWebView/OnWebContentProcessTerminatedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnWebContentProcessTerminated_m31140BA578EFFCC1ED44B309C41C5D571E96AF58 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * V_0 = NULL;
	OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * V_1 = NULL;
	OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * V_2 = NULL;
	{
		OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * L_0 = __this->get_OnWebContentProcessTerminated_11();
		V_0 = L_0;
	}

IL_0007:
	{
		OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * L_1 = V_0;
		V_1 = L_1;
		OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * L_2 = V_1;
		OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE *)CastclassSealed((RuntimeObject*)L_4, OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE_il2cpp_TypeInfo_var));
		OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE ** L_5 = __this->get_address_of_OnWebContentProcessTerminated_11();
		OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * L_6 = V_2;
		OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * L_7 = V_1;
		OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * L_8;
		L_8 = InterlockedCompareExchangeImpl<OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE *>((OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE **)L_5, L_6, L_7);
		V_0 = L_8;
		OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * L_9 = V_0;
		OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE *)L_9) == ((RuntimeObject*)(OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnWebContentProcessTerminated(UniWebView/OnWebContentProcessTerminatedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnWebContentProcessTerminated_m0002121A90DCECFE3690108C0E57887C4C996846 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * V_0 = NULL;
	OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * V_1 = NULL;
	OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * V_2 = NULL;
	{
		OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * L_0 = __this->get_OnWebContentProcessTerminated_11();
		V_0 = L_0;
	}

IL_0007:
	{
		OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * L_1 = V_0;
		V_1 = L_1;
		OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * L_2 = V_1;
		OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE *)CastclassSealed((RuntimeObject*)L_4, OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE_il2cpp_TypeInfo_var));
		OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE ** L_5 = __this->get_address_of_OnWebContentProcessTerminated_11();
		OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * L_6 = V_2;
		OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * L_7 = V_1;
		OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * L_8;
		L_8 = InterlockedCompareExchangeImpl<OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE *>((OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE **)L_5, L_6, L_7);
		V_0 = L_8;
		OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * L_9 = V_0;
		OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE *)L_9) == ((RuntimeObject*)(OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnFileDownloadStarted(UniWebView/FileDownloadStarted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnFileDownloadStarted_m95005889C52B03ABF058797012830839675FFA18 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * V_0 = NULL;
	FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * V_1 = NULL;
	FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * V_2 = NULL;
	{
		FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * L_0 = __this->get_OnFileDownloadStarted_12();
		V_0 = L_0;
	}

IL_0007:
	{
		FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * L_1 = V_0;
		V_1 = L_1;
		FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * L_2 = V_1;
		FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 *)CastclassSealed((RuntimeObject*)L_4, FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33_il2cpp_TypeInfo_var));
		FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 ** L_5 = __this->get_address_of_OnFileDownloadStarted_12();
		FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * L_6 = V_2;
		FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * L_7 = V_1;
		FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * L_8;
		L_8 = InterlockedCompareExchangeImpl<FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 *>((FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 **)L_5, L_6, L_7);
		V_0 = L_8;
		FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * L_9 = V_0;
		FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * L_10 = V_1;
		if ((!(((RuntimeObject*)(FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 *)L_9) == ((RuntimeObject*)(FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnFileDownloadStarted(UniWebView/FileDownloadStarted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnFileDownloadStarted_m447A519F9C6F0C319A62E7D259DB118428F17FED (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * V_0 = NULL;
	FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * V_1 = NULL;
	FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * V_2 = NULL;
	{
		FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * L_0 = __this->get_OnFileDownloadStarted_12();
		V_0 = L_0;
	}

IL_0007:
	{
		FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * L_1 = V_0;
		V_1 = L_1;
		FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * L_2 = V_1;
		FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 *)CastclassSealed((RuntimeObject*)L_4, FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33_il2cpp_TypeInfo_var));
		FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 ** L_5 = __this->get_address_of_OnFileDownloadStarted_12();
		FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * L_6 = V_2;
		FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * L_7 = V_1;
		FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * L_8;
		L_8 = InterlockedCompareExchangeImpl<FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 *>((FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 **)L_5, L_6, L_7);
		V_0 = L_8;
		FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * L_9 = V_0;
		FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * L_10 = V_1;
		if ((!(((RuntimeObject*)(FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 *)L_9) == ((RuntimeObject*)(FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnFileDownloadFinished(UniWebView/FileDownloadFinished)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnFileDownloadFinished_m60C9D58E250BE6650354D26C895F9EF2DEA26974 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * V_0 = NULL;
	FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * V_1 = NULL;
	FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * V_2 = NULL;
	{
		FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * L_0 = __this->get_OnFileDownloadFinished_13();
		V_0 = L_0;
	}

IL_0007:
	{
		FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * L_1 = V_0;
		V_1 = L_1;
		FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * L_2 = V_1;
		FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 *)CastclassSealed((RuntimeObject*)L_4, FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307_il2cpp_TypeInfo_var));
		FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 ** L_5 = __this->get_address_of_OnFileDownloadFinished_13();
		FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * L_6 = V_2;
		FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * L_7 = V_1;
		FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * L_8;
		L_8 = InterlockedCompareExchangeImpl<FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 *>((FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 **)L_5, L_6, L_7);
		V_0 = L_8;
		FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * L_9 = V_0;
		FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * L_10 = V_1;
		if ((!(((RuntimeObject*)(FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 *)L_9) == ((RuntimeObject*)(FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnFileDownloadFinished(UniWebView/FileDownloadFinished)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnFileDownloadFinished_mCCADAA0A6B2E01D56FB5C7188C21A42B606113AF (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * V_0 = NULL;
	FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * V_1 = NULL;
	FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * V_2 = NULL;
	{
		FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * L_0 = __this->get_OnFileDownloadFinished_13();
		V_0 = L_0;
	}

IL_0007:
	{
		FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * L_1 = V_0;
		V_1 = L_1;
		FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * L_2 = V_1;
		FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 *)CastclassSealed((RuntimeObject*)L_4, FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307_il2cpp_TypeInfo_var));
		FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 ** L_5 = __this->get_address_of_OnFileDownloadFinished_13();
		FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * L_6 = V_2;
		FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * L_7 = V_1;
		FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * L_8;
		L_8 = InterlockedCompareExchangeImpl<FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 *>((FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 **)L_5, L_6, L_7);
		V_0 = L_8;
		FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * L_9 = V_0;
		FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * L_10 = V_1;
		if ((!(((RuntimeObject*)(FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 *)L_9) == ((RuntimeObject*)(FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnCaptureSnapshotFinished(UniWebView/CaptureSnapshotFinished)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnCaptureSnapshotFinished_m0D2C47DEFF2FC1C38C96443BE04F7C4FE8F1FAA9 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * V_0 = NULL;
	CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * V_1 = NULL;
	CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * V_2 = NULL;
	{
		CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * L_0 = __this->get_OnCaptureSnapshotFinished_14();
		V_0 = L_0;
	}

IL_0007:
	{
		CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * L_1 = V_0;
		V_1 = L_1;
		CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * L_2 = V_1;
		CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 *)CastclassSealed((RuntimeObject*)L_4, CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3_il2cpp_TypeInfo_var));
		CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 ** L_5 = __this->get_address_of_OnCaptureSnapshotFinished_14();
		CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * L_6 = V_2;
		CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * L_7 = V_1;
		CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * L_8;
		L_8 = InterlockedCompareExchangeImpl<CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 *>((CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 **)L_5, L_6, L_7);
		V_0 = L_8;
		CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * L_9 = V_0;
		CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * L_10 = V_1;
		if ((!(((RuntimeObject*)(CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 *)L_9) == ((RuntimeObject*)(CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnCaptureSnapshotFinished(UniWebView/CaptureSnapshotFinished)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnCaptureSnapshotFinished_m788EF3DC81F717FBCBFBC6181CB6945F9AF64C38 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * V_0 = NULL;
	CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * V_1 = NULL;
	CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * V_2 = NULL;
	{
		CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * L_0 = __this->get_OnCaptureSnapshotFinished_14();
		V_0 = L_0;
	}

IL_0007:
	{
		CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * L_1 = V_0;
		V_1 = L_1;
		CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * L_2 = V_1;
		CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 *)CastclassSealed((RuntimeObject*)L_4, CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3_il2cpp_TypeInfo_var));
		CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 ** L_5 = __this->get_address_of_OnCaptureSnapshotFinished_14();
		CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * L_6 = V_2;
		CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * L_7 = V_1;
		CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * L_8;
		L_8 = InterlockedCompareExchangeImpl<CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 *>((CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 **)L_5, L_6, L_7);
		V_0 = L_8;
		CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * L_9 = V_0;
		CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * L_10 = V_1;
		if ((!(((RuntimeObject*)(CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 *)L_9) == ((RuntimeObject*)(CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnMultipleWindowOpened(UniWebView/MultipleWindowOpenedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnMultipleWindowOpened_mC2A813940DC60B43023CD0700D284C478557096E (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * V_0 = NULL;
	MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * V_1 = NULL;
	MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * V_2 = NULL;
	{
		MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * L_0 = __this->get_OnMultipleWindowOpened_15();
		V_0 = L_0;
	}

IL_0007:
	{
		MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * L_1 = V_0;
		V_1 = L_1;
		MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * L_2 = V_1;
		MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B *)CastclassSealed((RuntimeObject*)L_4, MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B_il2cpp_TypeInfo_var));
		MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B ** L_5 = __this->get_address_of_OnMultipleWindowOpened_15();
		MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * L_6 = V_2;
		MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * L_7 = V_1;
		MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * L_8;
		L_8 = InterlockedCompareExchangeImpl<MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B *>((MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B **)L_5, L_6, L_7);
		V_0 = L_8;
		MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * L_9 = V_0;
		MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * L_10 = V_1;
		if ((!(((RuntimeObject*)(MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B *)L_9) == ((RuntimeObject*)(MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnMultipleWindowOpened(UniWebView/MultipleWindowOpenedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnMultipleWindowOpened_m452681CF5178D4242A573C30BD4CF0BE80A92477 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * V_0 = NULL;
	MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * V_1 = NULL;
	MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * V_2 = NULL;
	{
		MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * L_0 = __this->get_OnMultipleWindowOpened_15();
		V_0 = L_0;
	}

IL_0007:
	{
		MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * L_1 = V_0;
		V_1 = L_1;
		MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * L_2 = V_1;
		MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B *)CastclassSealed((RuntimeObject*)L_4, MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B_il2cpp_TypeInfo_var));
		MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B ** L_5 = __this->get_address_of_OnMultipleWindowOpened_15();
		MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * L_6 = V_2;
		MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * L_7 = V_1;
		MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * L_8;
		L_8 = InterlockedCompareExchangeImpl<MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B *>((MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B **)L_5, L_6, L_7);
		V_0 = L_8;
		MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * L_9 = V_0;
		MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * L_10 = V_1;
		if ((!(((RuntimeObject*)(MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B *)L_9) == ((RuntimeObject*)(MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnMultipleWindowClosed(UniWebView/MultipleWindowClosedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnMultipleWindowClosed_m6DF712E8E3A26E09F3CA83577A89D9D2CE8E719E (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * V_0 = NULL;
	MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * V_1 = NULL;
	MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * V_2 = NULL;
	{
		MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * L_0 = __this->get_OnMultipleWindowClosed_16();
		V_0 = L_0;
	}

IL_0007:
	{
		MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * L_1 = V_0;
		V_1 = L_1;
		MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * L_2 = V_1;
		MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 *)CastclassSealed((RuntimeObject*)L_4, MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4_il2cpp_TypeInfo_var));
		MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 ** L_5 = __this->get_address_of_OnMultipleWindowClosed_16();
		MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * L_6 = V_2;
		MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * L_7 = V_1;
		MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * L_8;
		L_8 = InterlockedCompareExchangeImpl<MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 *>((MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 **)L_5, L_6, L_7);
		V_0 = L_8;
		MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * L_9 = V_0;
		MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 *)L_9) == ((RuntimeObject*)(MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnMultipleWindowClosed(UniWebView/MultipleWindowClosedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnMultipleWindowClosed_m793044DECADBD0F3B425B8CB29B6AD858058CB03 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * V_0 = NULL;
	MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * V_1 = NULL;
	MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * V_2 = NULL;
	{
		MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * L_0 = __this->get_OnMultipleWindowClosed_16();
		V_0 = L_0;
	}

IL_0007:
	{
		MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * L_1 = V_0;
		V_1 = L_1;
		MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * L_2 = V_1;
		MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 *)CastclassSealed((RuntimeObject*)L_4, MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4_il2cpp_TypeInfo_var));
		MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 ** L_5 = __this->get_address_of_OnMultipleWindowClosed_16();
		MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * L_6 = V_2;
		MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * L_7 = V_1;
		MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * L_8;
		L_8 = InterlockedCompareExchangeImpl<MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 *>((MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 **)L_5, L_6, L_7);
		V_0 = L_8;
		MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * L_9 = V_0;
		MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 *)L_9) == ((RuntimeObject*)(MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// UnityEngine.Rect UniWebView::get_Frame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  UniWebView_get_Frame_m31C97B528A020164C6FB512BB2DF5728924C708F (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method)
{
	{
		// get { return frame; }
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_0 = __this->get_frame_27();
		return L_0;
	}
}
// System.Void UniWebView::set_Frame(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_set_Frame_mA83FC87FC8AFD8C1C4CE514788589637CAFACE27 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___value0, const RuntimeMethod* method)
{
	{
		// frame = value;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_0 = ___value0;
		__this->set_frame_27(L_0);
		// UpdateFrame();
		UniWebView_UpdateFrame_m737DA86EB26270271478542ADFD805BA1BCCF37C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.RectTransform UniWebView::get_ReferenceRectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * UniWebView_get_ReferenceRectTransform_m5B446AAF1F807CB2DEF0B238C659B29B08566BE1 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method)
{
	{
		// return referenceRectTransform;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_referenceRectTransform_28();
		return L_0;
	}
}
// System.Void UniWebView::set_ReferenceRectTransform(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_set_ReferenceRectTransform_m14D36E71CA5FF755242F620344901DC30FCF07DC (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___value0, const RuntimeMethod* method)
{
	{
		// referenceRectTransform = value;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ___value0;
		__this->set_referenceRectTransform_28(L_0);
		// UpdateFrame();
		UniWebView_UpdateFrame_m737DA86EB26270271478542ADFD805BA1BCCF37C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String UniWebView::get_Url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebView_get_Url_mAAB27EEB062C2FAF61D6D512D8E196EF33C7CA16 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return UniWebViewInterface.GetUrl(listener.Name); }
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = UniWebViewInterface_GetUrl_m502FA510221DBF46C6AA46918790E2BF0D119178(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UniWebView::UpdateFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_UpdateFrame_m737DA86EB26270271478542ADFD805BA1BCCF37C (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Rect rect = NextFrameRect();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_0;
		L_0 = UniWebView_NextFrameRect_mF78AF2048989B01E16BD797C6E06FEBD9E22095B(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// UniWebViewInterface.SetFrame(listener.Name, (int)rect.x, (int)rect.y, (int)rect.width, (int)rect.height);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_1 = __this->get_listener_18();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_1, /*hidden argument*/NULL);
		float L_3;
		L_3 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		float L_4;
		L_4 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		float L_5;
		L_5 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		float L_6;
		L_6 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetFrame_m274F30611B296904B7F6D7195DFAFF27AB17C8BE(L_2, il2cpp_codegen_cast_double_to_int<int32_t>(L_3), il2cpp_codegen_cast_double_to_int<int32_t>(L_4), il2cpp_codegen_cast_double_to_int<int32_t>(L_5), il2cpp_codegen_cast_double_to_int<int32_t>(L_6), /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Rect UniWebView::NextFrameRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  UniWebView_NextFrameRect_mF78AF2048989B01E16BD797C6E06FEBD9E22095B (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mC1A1DF8460F0743F0BC86D9EEFA74621EF489848_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5A1BC658DA7223D5B3A37EDE7E9A3F1C60C984);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAA5A3EA71ED89EC8F8D5755DC9EFFB906291550);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0261650E60CCD4DB8E943AFD94028507D700FA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED6AE4548C7A75D64077C9E1530452184FF92182);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * V_5 = NULL;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * V_11 = NULL;
	int32_t V_12 = 0;
	{
		// if (referenceRectTransform == null) {
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_referenceRectTransform_28();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// UniWebViewLogger.Instance.Info("Using Frame setting to determine web view frame.");
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_2;
		L_2 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		NullCheck(L_2);
		UniWebViewLogger_Info_m40005F715E0F43924AFA4AAB3AAB8FCB6BC0F385(L_2, _stringLiteral7D5A1BC658DA7223D5B3A37EDE7E9A3F1C60C984, /*hidden argument*/NULL);
		// return frame;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3 = __this->get_frame_27();
		return L_3;
	}

IL_0024:
	{
		// UniWebViewLogger.Instance.Info("Using reference RectTransform to determine web view frame.");
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_4;
		L_4 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		NullCheck(L_4);
		UniWebViewLogger_Info_m40005F715E0F43924AFA4AAB3AAB8FCB6BC0F385(L_4, _stringLiteralD0261650E60CCD4DB8E943AFD94028507D700FA6, /*hidden argument*/NULL);
		// var worldCorners = new Vector3[4];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_5 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_5;
		// referenceRectTransform.GetWorldCorners(worldCorners);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_6 = __this->get_referenceRectTransform_28();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_7 = V_0;
		NullCheck(L_6);
		RectTransform_GetWorldCorners_m5351A825540654FFDBD0837AC37D2139F64A4FD8(L_6, L_7, /*hidden argument*/NULL);
		// var bottomLeft = worldCorners[0];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		// var topLeft = worldCorners[1];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = 1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_2 = L_13;
		// var topRight = worldCorners[2];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = 2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_3 = L_16;
		// var bottomRight = worldCorners[3];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = 3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = L_19;
		// var canvas = referenceRectTransform.GetComponentInParent<Canvas>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_20 = __this->get_referenceRectTransform_28();
		NullCheck(L_20);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_21;
		L_21 = Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mC1A1DF8460F0743F0BC86D9EEFA74621EF489848(L_20, /*hidden argument*/Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mC1A1DF8460F0743F0BC86D9EEFA74621EF489848_RuntimeMethod_var);
		V_5 = L_21;
		// if (canvas == null) {
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_22 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0085;
		}
	}
	{
		// return frame;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_24 = __this->get_frame_27();
		return L_24;
	}

IL_0085:
	{
		// switch (canvas.renderMode) {
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_25 = V_5;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = Canvas_get_renderMode_mAEC8A341577CC74EC89D5890E6D6E4A82B03574D(L_25, /*hidden argument*/NULL);
		V_12 = L_26;
		int32_t L_27 = V_12;
		if (!L_27)
		{
			goto IL_00f2;
		}
	}
	{
		int32_t L_28 = V_12;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1))) <= ((uint32_t)1))))
		{
			goto IL_00f2;
		}
	}
	{
		// var camera = canvas.worldCamera;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_29 = V_5;
		NullCheck(L_29);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_30;
		L_30 = Canvas_get_worldCamera_mFE4C9FDA7996FE20AC5CA3CB45B4190C40122D51(L_29, /*hidden argument*/NULL);
		V_11 = L_30;
		// if (camera == null) {
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_31 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_31, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00cc;
		}
	}
	{
		// UniWebViewLogger.Instance.Critical(@"You need a render camera
		// or event camera to use RectTransform to determine correct
		// frame for UniWebView.");
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_33;
		L_33 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		NullCheck(L_33);
		UniWebViewLogger_Critical_m9E5DC408B6A2006BD4A3DCDA9349DCB55E44B096(L_33, _stringLiteralED6AE4548C7A75D64077C9E1530452184FF92182, /*hidden argument*/NULL);
		// UniWebViewLogger.Instance.Info("No camera found. Fall back to ScreenSpaceOverlay mode.");
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_34;
		L_34 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		NullCheck(L_34);
		UniWebViewLogger_Info_m40005F715E0F43924AFA4AAB3AAB8FCB6BC0F385(L_34, _stringLiteralBAA5A3EA71ED89EC8F8D5755DC9EFFB906291550, /*hidden argument*/NULL);
		// } else {
		goto IL_00f2;
	}

IL_00cc:
	{
		// bottomLeft = camera.WorldToScreenPoint(bottomLeft);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_35 = V_11;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = V_1;
		NullCheck(L_35);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C(L_35, L_36, /*hidden argument*/NULL);
		V_1 = L_37;
		// topLeft = camera.WorldToScreenPoint(topLeft);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_38 = V_11;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = V_2;
		NullCheck(L_38);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C(L_38, L_39, /*hidden argument*/NULL);
		V_2 = L_40;
		// topRight = camera.WorldToScreenPoint(topRight);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_41 = V_11;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42 = V_3;
		NullCheck(L_41);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C(L_41, L_42, /*hidden argument*/NULL);
		V_3 = L_43;
		// bottomRight = camera.WorldToScreenPoint(bottomRight);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_44 = V_11;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = V_4;
		NullCheck(L_44);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C(L_44, L_45, /*hidden argument*/NULL);
		V_4 = L_46;
	}

IL_00f2:
	{
		// float widthFactor = (float)UniWebViewInterface.NativeScreenWidth() / (float)Screen.width;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		float L_47;
		L_47 = UniWebViewInterface_NativeScreenWidth_m89DCA1E22C2F022EB4834379400AA25FAA844A97(/*hidden argument*/NULL);
		int32_t L_48;
		L_48 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		V_6 = ((float)((float)((float)((float)L_47))/(float)((float)((float)L_48))));
		// float heightFactor = (float)UniWebViewInterface.NativeScreenHeight() / (float)Screen.height;
		float L_49;
		L_49 = UniWebViewInterface_NativeScreenHeight_m23A5BBA09FB984630324E5277D1325D9E87C39DB(/*hidden argument*/NULL);
		int32_t L_50;
		L_50 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		V_7 = ((float)((float)((float)((float)L_49))/(float)((float)((float)L_50))));
		// float x = topLeft.x * widthFactor;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51 = V_2;
		float L_52 = L_51.get_x_2();
		float L_53 = V_6;
		// float y = (Screen.height - topLeft.y) * heightFactor;
		int32_t L_54;
		L_54 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55 = V_2;
		float L_56 = L_55.get_y_3();
		float L_57 = V_7;
		V_8 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)((float)((float)L_54)), (float)L_56)), (float)L_57));
		// float width = (bottomRight.x - topLeft.x) * widthFactor;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58 = V_4;
		float L_59 = L_58.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60 = V_2;
		float L_61 = L_60.get_x_2();
		float L_62 = V_6;
		V_9 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_59, (float)L_61)), (float)L_62));
		// float height = (topLeft.y - bottomRight.y) * heightFactor;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = V_2;
		float L_64 = L_63.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65 = V_4;
		float L_66 = L_65.get_y_3();
		float L_67 = V_7;
		V_10 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_64, (float)L_66)), (float)L_67));
		// return new Rect(x, y, width, height);
		float L_68 = V_8;
		float L_69 = V_9;
		float L_70 = V_10;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_71;
		memset((&L_71), 0, sizeof(L_71));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_71), ((float)il2cpp_codegen_multiply((float)L_52, (float)L_53)), L_68, L_69, L_70, /*hidden argument*/NULL);
		return L_71;
	}
}
// System.Void UniWebView::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_Awake_mA13F4FE197F803EC919787D319788AF0637B74F1 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_mE8CF5E1FE32B12548C419E21C43C489BFDB4901D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var listenerObject = new GameObject(id);
		String_t* L_0 = __this->get_id_17();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// listener = listenerObject.AddComponent<UniWebViewNativeListener>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = V_0;
		NullCheck(L_2);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_3;
		L_3 = GameObject_AddComponent_TisUniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_mE8CF5E1FE32B12548C419E21C43C489BFDB4901D(L_2, /*hidden argument*/GameObject_AddComponent_TisUniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_mE8CF5E1FE32B12548C419E21C43C489BFDB4901D_RuntimeMethod_var);
		__this->set_listener_18(L_3);
		// listenerObject.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = V_0;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_5, L_6, /*hidden argument*/NULL);
		// listener.webView = this;
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_7 = __this->get_listener_18();
		NullCheck(L_7);
		L_7->set_webView_5(__this);
		// UniWebViewNativeListener.AddListener(listener);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_8 = __this->get_listener_18();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_il2cpp_TypeInfo_var);
		UniWebViewNativeListener_AddListener_m8F02DC28D1F8C723366B266BD9844AA283E231EA(L_8, /*hidden argument*/NULL);
		// if (fullScreen) {
		bool L_9 = __this->get_fullScreen_22();
		if (!L_9)
		{
			goto IL_0067;
		}
	}
	{
		// rect = new Rect(0, 0, Screen.width, Screen.height);
		int32_t L_10;
		L_10 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), (0.0f), (0.0f), ((float)((float)L_10)), ((float)((float)L_11)), /*hidden argument*/NULL);
		// } else {
		goto IL_006e;
	}

IL_0067:
	{
		// rect = NextFrameRect();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_12;
		L_12 = UniWebView_NextFrameRect_mF78AF2048989B01E16BD797C6E06FEBD9E22095B(__this, /*hidden argument*/NULL);
		V_1 = L_12;
	}

IL_006e:
	{
		// UniWebViewInterface.Init(listener.Name, (int)rect.x, (int)rect. y, (int)rect.width, (int)rect.height);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_13 = __this->get_listener_18();
		NullCheck(L_13);
		String_t* L_14;
		L_14 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_13, /*hidden argument*/NULL);
		float L_15;
		L_15 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		float L_16;
		L_16 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		float L_17;
		L_17 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		float L_18;
		L_18 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_Init_m4677F77E4C0FA5B86480BEB625138BF2ADA173CF(L_14, il2cpp_codegen_cast_double_to_int<int32_t>(L_15), il2cpp_codegen_cast_double_to_int<int32_t>(L_16), il2cpp_codegen_cast_double_to_int<int32_t>(L_17), il2cpp_codegen_cast_double_to_int<int32_t>(L_18), /*hidden argument*/NULL);
		// isPortrait = Screen.height >= Screen.width;
		int32_t L_19;
		L_19 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		int32_t L_20;
		L_20 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		__this->set_isPortrait_19((bool)((((int32_t)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		// }
		return;
	}
}
// System.Void UniWebView::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_Start_m187BDAF7FBF2E1824F9340D344F61C6F9B14BC56 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (showOnStart) {
		bool L_0 = __this->get_showOnStart_21();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// Show();
		bool L_1;
		L_1 = UniWebView_Show_m9DA0F0B1E4BB7DB96E2D1774B405AF2922E52CF8(__this, (bool)0, 0, (0.400000006f), (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// if (!string.IsNullOrEmpty(urlOnStart)) {
		String_t* L_2 = __this->get_urlOnStart_20();
		bool L_3;
		L_3 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		// Load(urlOnStart);
		String_t* L_4 = __this->get_urlOnStart_20();
		UniWebView_Load_mD1C68D8D4A960C2E3F0A2D8DF9E383C0252AB272(__this, L_4, (bool)0, (String_t*)NULL, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// started = true;
		__this->set_started_29((bool)1);
		// if (referenceRectTransform != null) {
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5 = __this->get_referenceRectTransform_28();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		// UpdateFrame();
		UniWebView_UpdateFrame_m737DA86EB26270271478542ADFD805BA1BCCF37C(__this, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void UniWebView::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_Update_mC985C6195625CD2FDBB8627A927A217C44A0047C (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED16F9589E28E51337A6B35399688F5187808BD2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * G_B4_0 = NULL;
	OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * G_B4_1 = NULL;
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * G_B3_0 = NULL;
	OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * G_B5_1 = NULL;
	OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * G_B5_2 = NULL;
	{
		// var newIsPortrait = Screen.height >= Screen.width;
		int32_t L_0;
		L_0 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// if (isPortrait != newIsPortrait) {
		bool L_2 = __this->get_isPortrait_19();
		bool L_3 = V_0;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0054;
		}
	}
	{
		// isPortrait = newIsPortrait;
		bool L_4 = V_0;
		__this->set_isPortrait_19(L_4);
		// if (OnOrientationChanged != null) {
		OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * L_5 = __this->get_OnOrientationChanged_10();
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		// OnOrientationChanged(this, isPortrait ? ScreenOrientation.Portrait : ScreenOrientation.Landscape);
		OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * L_6 = __this->get_OnOrientationChanged_10();
		bool L_7 = __this->get_isPortrait_19();
		G_B3_0 = __this;
		G_B3_1 = L_6;
		if (L_7)
		{
			G_B4_0 = __this;
			G_B4_1 = L_6;
			goto IL_003a;
		}
	}
	{
		G_B5_0 = 3;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_003b;
	}

IL_003a:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_003b:
	{
		NullCheck(G_B5_2);
		OrientationChangedDelegate_Invoke_m836E9F443DA23D568B80D40FF01BF176A0BF7ABF(G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/NULL);
	}

IL_0040:
	{
		// if (referenceRectTransform != null) {
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_8 = __this->get_referenceRectTransform_28();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		// UpdateFrame();
		UniWebView_UpdateFrame_m737DA86EB26270271478542ADFD805BA1BCCF37C(__this, /*hidden argument*/NULL);
	}

IL_0054:
	{
		// if (backButtonEnabled && Input.GetKeyUp(KeyCode.Escape)) {
		bool L_10 = __this->get_backButtonEnabled_30();
		if (!L_10)
		{
			goto IL_0089;
		}
	}
	{
		bool L_11;
		L_11 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)27), /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		// UniWebViewLogger.Instance.Info("Received Back button, handling GoBack or close web view.");
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_12;
		L_12 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		NullCheck(L_12);
		UniWebViewLogger_Info_m40005F715E0F43924AFA4AAB3AAB8FCB6BC0F385(L_12, _stringLiteralED16F9589E28E51337A6B35399688F5187808BD2, /*hidden argument*/NULL);
		// if (CanGoBack) {
		bool L_13;
		L_13 = UniWebView_get_CanGoBack_mFE0488DC5FA2DC73206B6721856FA34B152D72D3(__this, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0083;
		}
	}
	{
		// GoBack();
		UniWebView_GoBack_mB2C1D7DE62A2FD8FD5030EA55ED5727D135C38E7(__this, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0083:
	{
		// InternalOnShouldClose();
		UniWebView_InternalOnShouldClose_mCA5EFB924EAE488F69E3720BD1E562D6EEDC8B8A(__this, /*hidden argument*/NULL);
	}

IL_0089:
	{
		// }
		return;
	}
}
// System.Void UniWebView::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_OnEnable_m1A31168B57EABA2B10F89A3349679D1D3D70CF8B (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method)
{
	{
		// if (started) {
		bool L_0 = __this->get_started_29();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// Show();
		bool L_1;
		L_1 = UniWebView_Show_m9DA0F0B1E4BB7DB96E2D1774B405AF2922E52CF8(__this, (bool)0, 0, (0.400000006f), (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniWebView::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_OnDisable_m5D100A64F05199B265E83C318559FAB0AA6A0967 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method)
{
	{
		// if (started) {
		bool L_0 = __this->get_started_29();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// Hide();
		bool L_1;
		L_1 = UniWebView_Hide_m7F93206A3FFFD79E7796756E60513AAB3EDCCFE7(__this, (bool)0, 0, (0.400000006f), (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)NULL, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniWebView::Load(System.String,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_Load_mD1C68D8D4A960C2E3F0A2D8DF9E383C0252AB272 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___url0, bool ___skipEncoding1, String_t* ___readAccessURL2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.Load(listener.Name, url, skipEncoding, readAccessURL);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___url0;
		bool L_3 = ___skipEncoding1;
		String_t* L_4 = ___readAccessURL2;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_Load_mB5DDAE3A94607307F02F52B2CCAB124C4D7CA216(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::LoadHTMLString(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_LoadHTMLString_mDBF9CA26B556C9D96651631D2C83EBECFF6EBD11 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___htmlString0, String_t* ___baseUrl1, bool ___skipEncoding2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.LoadHTMLString(listener.Name, htmlString, baseUrl, skipEncoding);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___htmlString0;
		String_t* L_3 = ___baseUrl1;
		bool L_4 = ___skipEncoding2;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_LoadHTMLString_m2A3FBDA02B16E995181776DF8F7675BBC5FA3F51(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_Reload_m66135CFEA598744E224857F57A52ACAB23FB0684 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.Reload(listener.Name);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_Reload_m3DE8C46B7D2FBCF8783F0CB08D2552C0C7894A00(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_Stop_m17DAF22220927A0F4179BF665E759F4A18D25E23 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.Stop(listener.Name);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_Stop_mD9E8A77DBAB7461EB60B8A7FCDC6D9D3734BFDA8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UniWebView::get_CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView_get_CanGoBack_mFE0488DC5FA2DC73206B6721856FA34B152D72D3 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UniWebViewInterface.CanGoBack(listener.Name);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = UniWebViewInterface_CanGoBack_mE9B320BA8FC8A2B3F33A64A61BE8B33CB41CA2AA(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UniWebView::get_CanGoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView_get_CanGoForward_mC410A70B572DD067C68529F87A18E5065964B26F (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UniWebViewInterface.CanGoForward(listener.Name);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = UniWebViewInterface_CanGoForward_m8714EECA9004CD362F167336812B5C7B9793A36E(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UniWebView::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_GoBack_mB2C1D7DE62A2FD8FD5030EA55ED5727D135C38E7 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.GoBack(listener.Name);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_GoBack_m865844D0CFC589608EBE2C94167371B0178B6CBE(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_GoForward_m88F3C388952A0B920149C72041BF95CD5C63B0B1 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.GoForward(listener.Name);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_GoForward_m34001F0D8B9CA968CB4F59388FC5CE6056043F0A(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetOpenLinksInExternalBrowser(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetOpenLinksInExternalBrowser_mA1658887B2D22D42E1EDD752258204698E8E8095 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetOpenLinksInExternalBrowser(listener.Name, flag);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		bool L_2 = ___flag0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetOpenLinksInExternalBrowser_m14EAEF286298221E80E845BC2E8A24618A406E4C(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UniWebView::Show(System.Boolean,UniWebViewTransitionEdge,System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView_Show_m9DA0F0B1E4BB7DB96E2D1774B405AF2922E52CF8 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___fade0, int32_t ___edge1, float ___duration2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___completionHandler3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m107138FF128B1AF906D4A9F96930F2950EAB7E2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool G_B8_0 = false;
	bool G_B1_0 = false;
	bool G_B2_0 = false;
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	int32_t G_B5_0 = 0;
	bool G_B5_1 = false;
	bool G_B7_0 = false;
	bool G_B6_0 = false;
	bool G_B11_0 = false;
	bool G_B9_0 = false;
	bool G_B10_0 = false;
	{
		// var identifier = Guid.NewGuid().ToString();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0;
		L_0 = Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0(/*hidden argument*/NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
		// var showStarted = UniWebViewInterface.Show(listener.Name, fade, (int)edge, duration, identifier);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_2 = __this->get_listener_18();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_2, /*hidden argument*/NULL);
		bool L_4 = ___fade0;
		int32_t L_5 = ___edge1;
		float L_6 = ___duration2;
		String_t* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = UniWebViewInterface_Show_m18F4D9BA0E6AE5E787D591263A59CACEBA32F2A8(L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		// if (showStarted && completionHandler != null) {
		bool L_9 = L_8;
		G_B1_0 = L_9;
		if (!L_9)
		{
			G_B8_0 = L_9;
			goto IL_0052;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = ___completionHandler3;
		G_B2_0 = G_B1_0;
		if (!L_10)
		{
			G_B8_0 = G_B1_0;
			goto IL_0052;
		}
	}
	{
		// var hasAnimation = (fade || edge != UniWebViewTransitionEdge.None);
		bool L_11 = ___fade0;
		G_B3_0 = G_B2_0;
		if (L_11)
		{
			G_B4_0 = G_B2_0;
			goto IL_0038;
		}
	}
	{
		int32_t L_12 = ___edge1;
		G_B5_0 = ((!(((uint32_t)L_12) <= ((uint32_t)0)))? 1 : 0);
		G_B5_1 = G_B3_0;
		goto IL_0039;
	}

IL_0038:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0039:
	{
		// if (hasAnimation) {
		G_B6_0 = G_B5_1;
		if (!G_B5_0)
		{
			G_B7_0 = G_B5_1;
			goto IL_004b;
		}
	}
	{
		// actions.Add(identifier, completionHandler);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_13 = __this->get_actions_25();
		String_t* L_14 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_15 = ___completionHandler3;
		NullCheck(L_13);
		Dictionary_2_Add_m107138FF128B1AF906D4A9F96930F2950EAB7E2D(L_13, L_14, L_15, /*hidden argument*/Dictionary_2_Add_m107138FF128B1AF906D4A9F96930F2950EAB7E2D_RuntimeMethod_var);
		// } else {
		G_B8_0 = G_B6_0;
		goto IL_0052;
	}

IL_004b:
	{
		// completionHandler();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_16 = ___completionHandler3;
		NullCheck(L_16);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_16, /*hidden argument*/NULL);
		G_B8_0 = G_B7_0;
	}

IL_0052:
	{
		// if (showStarted && useToolbar) {
		bool L_17 = G_B8_0;
		G_B9_0 = L_17;
		if (!L_17)
		{
			G_B11_0 = L_17;
			goto IL_0076;
		}
	}
	{
		bool L_18 = __this->get_useToolbar_23();
		G_B10_0 = G_B9_0;
		if (!L_18)
		{
			G_B11_0 = G_B9_0;
			goto IL_0076;
		}
	}
	{
		// var top = (toolbarPosition == UniWebViewToolbarPosition.Top);
		int32_t L_19 = __this->get_toolbarPosition_24();
		V_2 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		// SetShowToolbar(true, false, top, fullScreen);
		bool L_20 = V_2;
		bool L_21 = __this->get_fullScreen_22();
		UniWebView_SetShowToolbar_m60E94DF31354955AAA4354B0B94720827ADE4C9B(__this, (bool)1, (bool)0, L_20, L_21, /*hidden argument*/NULL);
		G_B11_0 = G_B10_0;
	}

IL_0076:
	{
		// return showStarted;
		return G_B11_0;
	}
}
// System.Boolean UniWebView::Hide(System.Boolean,UniWebViewTransitionEdge,System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView_Hide_m7F93206A3FFFD79E7796756E60513AAB3EDCCFE7 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___fade0, int32_t ___edge1, float ___duration2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___completionHandler3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m107138FF128B1AF906D4A9F96930F2950EAB7E2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool G_B8_0 = false;
	bool G_B1_0 = false;
	bool G_B2_0 = false;
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	int32_t G_B5_0 = 0;
	bool G_B5_1 = false;
	bool G_B7_0 = false;
	bool G_B6_0 = false;
	bool G_B11_0 = false;
	bool G_B9_0 = false;
	bool G_B10_0 = false;
	{
		// var identifier = Guid.NewGuid().ToString();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0;
		L_0 = Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0(/*hidden argument*/NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
		// var hideStarted = UniWebViewInterface.Hide(listener.Name, fade, (int)edge, duration, identifier);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_2 = __this->get_listener_18();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_2, /*hidden argument*/NULL);
		bool L_4 = ___fade0;
		int32_t L_5 = ___edge1;
		float L_6 = ___duration2;
		String_t* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = UniWebViewInterface_Hide_m24755AC4B2521922BC932C7ECC3491F14B7DC9F8(L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		// if (hideStarted && completionHandler != null) {
		bool L_9 = L_8;
		G_B1_0 = L_9;
		if (!L_9)
		{
			G_B8_0 = L_9;
			goto IL_0052;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = ___completionHandler3;
		G_B2_0 = G_B1_0;
		if (!L_10)
		{
			G_B8_0 = G_B1_0;
			goto IL_0052;
		}
	}
	{
		// var hasAnimation = (fade || edge != UniWebViewTransitionEdge.None);
		bool L_11 = ___fade0;
		G_B3_0 = G_B2_0;
		if (L_11)
		{
			G_B4_0 = G_B2_0;
			goto IL_0038;
		}
	}
	{
		int32_t L_12 = ___edge1;
		G_B5_0 = ((!(((uint32_t)L_12) <= ((uint32_t)0)))? 1 : 0);
		G_B5_1 = G_B3_0;
		goto IL_0039;
	}

IL_0038:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0039:
	{
		// if (hasAnimation) {
		G_B6_0 = G_B5_1;
		if (!G_B5_0)
		{
			G_B7_0 = G_B5_1;
			goto IL_004b;
		}
	}
	{
		// actions.Add(identifier, completionHandler);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_13 = __this->get_actions_25();
		String_t* L_14 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_15 = ___completionHandler3;
		NullCheck(L_13);
		Dictionary_2_Add_m107138FF128B1AF906D4A9F96930F2950EAB7E2D(L_13, L_14, L_15, /*hidden argument*/Dictionary_2_Add_m107138FF128B1AF906D4A9F96930F2950EAB7E2D_RuntimeMethod_var);
		// } else {
		G_B8_0 = G_B6_0;
		goto IL_0052;
	}

IL_004b:
	{
		// completionHandler();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_16 = ___completionHandler3;
		NullCheck(L_16);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_16, /*hidden argument*/NULL);
		G_B8_0 = G_B7_0;
	}

IL_0052:
	{
		// if (hideStarted && useToolbar) {
		bool L_17 = G_B8_0;
		G_B9_0 = L_17;
		if (!L_17)
		{
			G_B11_0 = L_17;
			goto IL_0076;
		}
	}
	{
		bool L_18 = __this->get_useToolbar_23();
		G_B10_0 = G_B9_0;
		if (!L_18)
		{
			G_B11_0 = G_B9_0;
			goto IL_0076;
		}
	}
	{
		// var top = (toolbarPosition == UniWebViewToolbarPosition.Top);
		int32_t L_19 = __this->get_toolbarPosition_24();
		V_2 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		// SetShowToolbar(false, false, top, fullScreen);
		bool L_20 = V_2;
		bool L_21 = __this->get_fullScreen_22();
		UniWebView_SetShowToolbar_m60E94DF31354955AAA4354B0B94720827ADE4C9B(__this, (bool)0, (bool)0, L_20, L_21, /*hidden argument*/NULL);
		G_B11_0 = G_B10_0;
	}

IL_0076:
	{
		// return hideStarted;
		return G_B11_0;
	}
}
// System.Boolean UniWebView::AnimateTo(UnityEngine.Rect,System.Single,System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView_AnimateTo_m3468962B42A0ACB5A38FF81035BF2A9E9CC7C43B (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___frame0, float ___duration1, float ___delay2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___completionHandler3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m107138FF128B1AF906D4A9F96930F2950EAB7E2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool G_B3_0 = false;
	bool G_B1_0 = false;
	bool G_B2_0 = false;
	{
		// var identifier = Guid.NewGuid().ToString();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0;
		L_0 = Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0(/*hidden argument*/NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
		// var animationStarted = UniWebViewInterface.AnimateTo(listener.Name,
		//             (int)frame.x, (int)frame.y, (int)frame.width, (int)frame.height, duration, delay, identifier);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_2 = __this->get_listener_18();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_2, /*hidden argument*/NULL);
		float L_4;
		L_4 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___frame0), /*hidden argument*/NULL);
		float L_5;
		L_5 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___frame0), /*hidden argument*/NULL);
		float L_6;
		L_6 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___frame0), /*hidden argument*/NULL);
		float L_7;
		L_7 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___frame0), /*hidden argument*/NULL);
		float L_8 = ___duration1;
		float L_9 = ___delay2;
		String_t* L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = UniWebViewInterface_AnimateTo_m0FA13440C9BF5A742DBB29270ACCD95BB62A809B(L_3, il2cpp_codegen_cast_double_to_int<int32_t>(L_4), il2cpp_codegen_cast_double_to_int<int32_t>(L_5), il2cpp_codegen_cast_double_to_int<int32_t>(L_6), il2cpp_codegen_cast_double_to_int<int32_t>(L_7), L_8, L_9, L_10, /*hidden argument*/NULL);
		// if (animationStarted) {
		bool L_12 = L_11;
		G_B1_0 = L_12;
		if (!L_12)
		{
			G_B3_0 = L_12;
			goto IL_0063;
		}
	}
	{
		// this.frame = frame;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_13 = ___frame0;
		__this->set_frame_27(L_13);
		// if (completionHandler != null) {
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_14 = ___completionHandler3;
		G_B2_0 = G_B1_0;
		if (!L_14)
		{
			G_B3_0 = G_B1_0;
			goto IL_0063;
		}
	}
	{
		// actions.Add(identifier, completionHandler);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_15 = __this->get_actions_25();
		String_t* L_16 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_17 = ___completionHandler3;
		NullCheck(L_15);
		Dictionary_2_Add_m107138FF128B1AF906D4A9F96930F2950EAB7E2D(L_15, L_16, L_17, /*hidden argument*/Dictionary_2_Add_m107138FF128B1AF906D4A9F96930F2950EAB7E2D_RuntimeMethod_var);
		G_B3_0 = G_B2_0;
	}

IL_0063:
	{
		// return animationStarted;
		return G_B3_0;
	}
}
// System.Void UniWebView::AddJavaScript(System.String,System.Action`1<UniWebViewNativeResultPayload>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_AddJavaScript_m571303D38464412BE158F5A783FC1B03A2EA4E75 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___jsString0, Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8 * ___completionHandler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m9DA106042D6B828B008BECD1B176FC9CF2025073_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var identifier = Guid.NewGuid().ToString();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0;
		L_0 = Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0(/*hidden argument*/NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
		// UniWebViewInterface.AddJavaScript(listener.Name, jsString, identifier);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_2 = __this->get_listener_18();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_2, /*hidden argument*/NULL);
		String_t* L_4 = ___jsString0;
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_AddJavaScript_mAE08E18566AB28B010DDB246789DD41DC9251304(L_3, L_4, L_5, /*hidden argument*/NULL);
		// if (completionHandler != null) {
		Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8 * L_6 = ___completionHandler1;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		// payloadActions.Add(identifier, completionHandler);
		Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383 * L_7 = __this->get_payloadActions_26();
		String_t* L_8 = V_0;
		Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8 * L_9 = ___completionHandler1;
		NullCheck(L_7);
		Dictionary_2_Add_m9DA106042D6B828B008BECD1B176FC9CF2025073(L_7, L_8, L_9, /*hidden argument*/Dictionary_2_Add_m9DA106042D6B828B008BECD1B176FC9CF2025073_RuntimeMethod_var);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void UniWebView::EvaluateJavaScript(System.String,System.Action`1<UniWebViewNativeResultPayload>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_EvaluateJavaScript_m7110F09B56421EE6A66A4211329C813BFF5BBD03 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___jsString0, Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8 * ___completionHandler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m9DA106042D6B828B008BECD1B176FC9CF2025073_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var identifier = Guid.NewGuid().ToString();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0;
		L_0 = Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0(/*hidden argument*/NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
		// UniWebViewInterface.EvaluateJavaScript(listener.Name, jsString, identifier);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_2 = __this->get_listener_18();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_2, /*hidden argument*/NULL);
		String_t* L_4 = ___jsString0;
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_EvaluateJavaScript_m26F782D9D3BB2D160159DE505C5F9BDDB8FCDD96(L_3, L_4, L_5, /*hidden argument*/NULL);
		// if (completionHandler != null) {
		Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8 * L_6 = ___completionHandler1;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		// payloadActions.Add(identifier, completionHandler);
		Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383 * L_7 = __this->get_payloadActions_26();
		String_t* L_8 = V_0;
		Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8 * L_9 = ___completionHandler1;
		NullCheck(L_7);
		Dictionary_2_Add_m9DA106042D6B828B008BECD1B176FC9CF2025073(L_7, L_8, L_9, /*hidden argument*/Dictionary_2_Add_m9DA106042D6B828B008BECD1B176FC9CF2025073_RuntimeMethod_var);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void UniWebView::AddUrlScheme(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_AddUrlScheme_mD806DD6E391536B77BACC05C5AEB694BE4E4E262 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___scheme0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CB52D6F4A9943E8A23A1AA0CBB183BDE4AC2E7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3FCE46B907FCCFB1380979FD158061B0542D64D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (scheme == null) {
		String_t* L_0 = ___scheme0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// UniWebViewLogger.Instance.Critical("The scheme should not be null.");
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_1;
		L_1 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		NullCheck(L_1);
		UniWebViewLogger_Critical_m9E5DC408B6A2006BD4A3DCDA9349DCB55E44B096(L_1, _stringLiteralD3FCE46B907FCCFB1380979FD158061B0542D64D, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// if (scheme.Contains("://")) {
		String_t* L_2 = ___scheme0;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// UniWebViewLogger.Instance.Critical("The scheme should not include invalid characters '://'");
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_4;
		L_4 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		NullCheck(L_4);
		UniWebViewLogger_Critical_m9E5DC408B6A2006BD4A3DCDA9349DCB55E44B096(L_4, _stringLiteral7CB52D6F4A9943E8A23A1AA0CBB183BDE4AC2E7B, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0030:
	{
		// UniWebViewInterface.AddUrlScheme(listener.Name, scheme);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_5 = __this->get_listener_18();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___scheme0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_AddUrlScheme_mA13C597314E486CBE69D8156A7E7FF6ACF3AC0E3(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::RemoveUrlScheme(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_RemoveUrlScheme_mED967FBACD29B0A47B8285BCF8981BC30F501183 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___scheme0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CB52D6F4A9943E8A23A1AA0CBB183BDE4AC2E7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3FCE46B907FCCFB1380979FD158061B0542D64D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (scheme == null) {
		String_t* L_0 = ___scheme0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// UniWebViewLogger.Instance.Critical("The scheme should not be null.");
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_1;
		L_1 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		NullCheck(L_1);
		UniWebViewLogger_Critical_m9E5DC408B6A2006BD4A3DCDA9349DCB55E44B096(L_1, _stringLiteralD3FCE46B907FCCFB1380979FD158061B0542D64D, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// if (scheme.Contains("://")) {
		String_t* L_2 = ___scheme0;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// UniWebViewLogger.Instance.Critical("The scheme should not include invalid characters '://'");
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_4;
		L_4 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		NullCheck(L_4);
		UniWebViewLogger_Critical_m9E5DC408B6A2006BD4A3DCDA9349DCB55E44B096(L_4, _stringLiteral7CB52D6F4A9943E8A23A1AA0CBB183BDE4AC2E7B, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0030:
	{
		// UniWebViewInterface.RemoveUrlScheme(listener.Name, scheme);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_5 = __this->get_listener_18();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___scheme0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_RemoveUrlScheme_mEC03AD788B6552C3DB8235FC896F87F7E23BFD0D(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::AddSslExceptionDomain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_AddSslExceptionDomain_mCED8D32E81C87F9DF7C6E39D6950E5A8F710B677 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___domain0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1172A1CEF3378DA89DA639BD09ED58C07EE90C7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33EB4DD410972BEFE9F0A67F8A7FCD8A235E01B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (domain == null) {
		String_t* L_0 = ___domain0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// UniWebViewLogger.Instance.Critical("The domain should not be null.");
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_1;
		L_1 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		NullCheck(L_1);
		UniWebViewLogger_Critical_m9E5DC408B6A2006BD4A3DCDA9349DCB55E44B096(L_1, _stringLiteral1172A1CEF3378DA89DA639BD09ED58C07EE90C7E, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// if (domain.Contains("://")) {
		String_t* L_2 = ___domain0;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// UniWebViewLogger.Instance.Critical("The domain should not include invalid characters '://'");
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_4;
		L_4 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		NullCheck(L_4);
		UniWebViewLogger_Critical_m9E5DC408B6A2006BD4A3DCDA9349DCB55E44B096(L_4, _stringLiteral33EB4DD410972BEFE9F0A67F8A7FCD8A235E01B7, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0030:
	{
		// UniWebViewInterface.AddSslExceptionDomain(listener.Name, domain);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_5 = __this->get_listener_18();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___domain0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_AddSslExceptionDomain_m414AD19DF117F6276C96CCAE283C87E84D94B262(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::RemoveSslExceptionDomain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_RemoveSslExceptionDomain_mD02B33EDAD8B3634A06FEA10C986258BFC58F37C (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___domain0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1172A1CEF3378DA89DA639BD09ED58C07EE90C7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33EB4DD410972BEFE9F0A67F8A7FCD8A235E01B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (domain == null) {
		String_t* L_0 = ___domain0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// UniWebViewLogger.Instance.Critical("The domain should not be null.");
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_1;
		L_1 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		NullCheck(L_1);
		UniWebViewLogger_Critical_m9E5DC408B6A2006BD4A3DCDA9349DCB55E44B096(L_1, _stringLiteral1172A1CEF3378DA89DA639BD09ED58C07EE90C7E, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// if (domain.Contains("://")) {
		String_t* L_2 = ___domain0;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// UniWebViewLogger.Instance.Critical("The domain should not include invalid characters '://'");
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_4;
		L_4 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		NullCheck(L_4);
		UniWebViewLogger_Critical_m9E5DC408B6A2006BD4A3DCDA9349DCB55E44B096(L_4, _stringLiteral33EB4DD410972BEFE9F0A67F8A7FCD8A235E01B7, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0030:
	{
		// UniWebViewInterface.RemoveSslExceptionDomain(listener.Name, domain);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_5 = __this->get_listener_18();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___domain0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_RemoveSslExceptionDomain_m80211BF5ECAAAFAF019A403FB84240729273F04C(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetHeaderField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetHeaderField_m50C30D708EAC985E903042C0B21073DF34A3E551 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93B204B4CDC241356AD725235A5C0966C643FAF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (key == null) {
		String_t* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// UniWebViewLogger.Instance.Critical("Header key should not be null.");
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_1;
		L_1 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		NullCheck(L_1);
		UniWebViewLogger_Critical_m9E5DC408B6A2006BD4A3DCDA9349DCB55E44B096(L_1, _stringLiteral93B204B4CDC241356AD725235A5C0966C643FAF8, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// UniWebViewInterface.SetHeaderField(listener.Name, key, value);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_2 = __this->get_listener_18();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_2, /*hidden argument*/NULL);
		String_t* L_4 = ___key0;
		String_t* L_5 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetHeaderField_m06CC84E4568E033CBE71FE14F5CE779031D398CC(L_3, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetUserAgent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetUserAgent_m1FBBECBC9ED5EAC024B6C836621DF30548E0DCDA (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___agent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetUserAgent(listener.Name, agent);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___agent0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetUserAgent_mD74FE5C6D5CBF6D18E50B2D46A80DAB281585ACA(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String UniWebView::GetUserAgent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebView_GetUserAgent_m834BF28ECF684E337858B9396CB2CCC479EC7EBF (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UniWebViewInterface.GetUserAgent(listener.Name);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = UniWebViewInterface_GetUserAgent_mE4316BCAE934C23E60EC6727FC4718CA55EC4407(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UniWebView::SetContentInsetAdjustmentBehavior(UniWebViewContentInsetAdjustmentBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetContentInsetAdjustmentBehavior_m4863A73356E4930EC98045E2179DFFDEA48DF8D4 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, int32_t ___behavior0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetAllowAutoPlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowAutoPlay_m7626805D76373FC21213251EC3058AFAF2AB8782 (bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetAllowAutoPlay(flag);
		bool L_0 = ___flag0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowAutoPlay_mE612D2338A1FC37CB4BA4F72B47C351EE68B1406(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetAllowInlinePlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowInlinePlay_mAA1FA8BABC82374781B3CAFDEB29098715D2D86A (bool ___flag0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetAllowFileAccess(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowFileAccess_m7E8C32C7F3B0749632A180DC90395ED59D1C6EF0 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetAllowFileAccess(listener.Name, flag);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		bool L_2 = ___flag0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowFileAccess_mD59D2F8584829A8E21041D04235B70D13CF12CCD(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetAllowFileAccessFromFileURLs(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowFileAccessFromFileURLs_m7E64D3B238AD92B37B8A49FA1CDB9EA75DDC9A4C (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetAllowFileAccessFromFileURLs(listener.Name, flag);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		bool L_2 = ___flag0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowFileAccessFromFileURLs_m8E151F4EB89CD2F22C310B1C2C946733EACAA25B(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetAllowUniversalAccessFromFileURLs(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowUniversalAccessFromFileURLs_m01F62E6C1F0F6C414A1D567FE9EBA91710D64300 (bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetAllowUniversalAccessFromFileURLs(flag);
		bool L_0 = ___flag0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowUniversalAccessFromFileURLs_mD1F0FF911FB6F4E35865DA2FFA82DC0E60E6956B(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetJavaScriptEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetJavaScriptEnabled_m3743A7461F18C6638987A4F2B5824B12A93C6B51 (bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetJavaScriptEnabled(enabled);
		bool L_0 = ___enabled0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetJavaScriptEnabled_mBEB708FBE7370C21C2236B983952EF9288CDDEDF(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetAllowJavaScriptOpenWindow(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowJavaScriptOpenWindow_m0A90669F074733087B1850C18C15595FDED6E743 (bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetAllowJavaScriptOpenWindow(flag);
		bool L_0 = ___flag0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowJavaScriptOpenWindow_mEEBFA4F20C0DE92B97C7B6DC8BDBBFC920F0D122(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::CleanCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_CleanCache_m4287D018AD321D1ADA4A4DB9B4AC86BD6E614FB5 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.CleanCache(listener.Name);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CleanCache_m6F6AC63596B39970CCF284894D83ED0889CCB956(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::ClearCookies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_ClearCookies_m4DBBF452FBCF22DCA791C7712D422EAA75F6A292 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.ClearCookies();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_ClearCookies_m174FBFCC182937884A0EED6BEA25C13FB8843576(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetCookie(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetCookie_m3228FBC4402D3A75F982061F4C56D4FA275C19E1 (String_t* ___url0, String_t* ___cookie1, bool ___skipEncoding2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetCookie(url, cookie, skipEncoding);
		String_t* L_0 = ___url0;
		String_t* L_1 = ___cookie1;
		bool L_2 = ___skipEncoding2;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetCookie_m2AD3F8585F1F3F95F78F0199D587641E97AE2562(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String UniWebView::GetCookie(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebView_GetCookie_mA2471E4B46638F5935586FC1288CE5093B92C25B (String_t* ___url0, String_t* ___key1, bool ___skipEncoding2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UniWebViewInterface.GetCookie(url, key, skipEncoding);
		String_t* L_0 = ___url0;
		String_t* L_1 = ___key1;
		bool L_2 = ___skipEncoding2;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = UniWebViewInterface_GetCookie_m0E0CB963CA0628BE880CEBD2C117D6393DC5F8CA(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void UniWebView::RemoveCookies(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_RemoveCookies_m4E9785FE0EFB1AE5AC419ED07F6BE46C4D8BA4C8 (String_t* ___url0, bool ___skipEncoding1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.RemoveCookies(url, skipEncoding);
		String_t* L_0 = ___url0;
		bool L_1 = ___skipEncoding1;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_RemoveCookies_m0201B410ACED36F66127F291EB31EEF833FE75A9(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::RemoveCooke(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_RemoveCooke_m644B2518BC1E048A0F5AB5170500EDD6879CCC56 (String_t* ___url0, String_t* ___key1, bool ___skipEncoding2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.RemoveCookie(url, key, skipEncoding);
		String_t* L_0 = ___url0;
		String_t* L_1 = ___key1;
		bool L_2 = ___skipEncoding2;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_RemoveCookie_m494FA76248EC3AAD25CC5E5732CB8046FC395BF1(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::ClearHttpAuthUsernamePassword(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_ClearHttpAuthUsernamePassword_m4D418E3248ACD6CE289519E9D21F15C4F007DEAB (String_t* ___host0, String_t* ___realm1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.ClearHttpAuthUsernamePassword(host, realm);
		String_t* L_0 = ___host0;
		String_t* L_1 = ___realm1;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_ClearHttpAuthUsernamePassword_mD14BDF155EE31E42B704B88AD743ADBC4224A589(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Color UniWebView::get_BackgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  UniWebView_get_BackgroundColor_mA40C20F7F7177A24FB8C2EEA61757454AB7D70FA (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method)
{
	{
		// return backgroundColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_backgroundColor_31();
		return L_0;
	}
}
// System.Void UniWebView::set_BackgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_set_BackgroundColor_m4F2769D85ED6772F472D96E0156CE838E09384A4 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// backgroundColor = value;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___value0;
		__this->set_backgroundColor_31(L_0);
		// UniWebViewInterface.SetBackgroundColor(listener.Name, value.r, value.g, value.b, value.a);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_1 = __this->get_listener_18();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_1, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = ___value0;
		float L_4 = L_3.get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = ___value0;
		float L_6 = L_5.get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = ___value0;
		float L_8 = L_7.get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = ___value0;
		float L_10 = L_9.get_a_3();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetBackgroundColor_mD7892432297CB0BA50CFD6C752EF2C7B22D42A0F(L_2, L_4, L_6, L_8, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single UniWebView::get_Alpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebView_get_Alpha_mECE6B611269CBEC0A83CB8D71C9FB23E7A0C3584 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UniWebViewInterface.GetWebViewAlpha(listener.Name);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = UniWebViewInterface_GetWebViewAlpha_m3F0C9265270A3171F4C74B85D88AB23258A64345(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UniWebView::set_Alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_set_Alpha_mE29D5640738EC970DCF71E162B8EFDB70F6F750C (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetWebViewAlpha(listener.Name, value);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		float L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetWebViewAlpha_m2FD8A56031913E27FD0478CC890D6ABF56C9DD5D(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetShowSpinnerWhileLoading(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetShowSpinnerWhileLoading_m8E751CC864195FFCC69BB07ADBCFFA6122E37CF2 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetShowSpinnerWhileLoading(listener.Name, flag);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		bool L_2 = ___flag0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetShowSpinnerWhileLoading_m64ACB6D8B878A1D26C165167E069852E6D8D0496(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetSpinnerText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetSpinnerText_m8D094822ADAA0143398D05EE13774D8491438B94 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetSpinnerText(listener.Name, text);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetSpinnerText_m989E0B03B5F8337C1BD7F076F71695CB59A75FD4(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetHorizontalScrollBarEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetHorizontalScrollBarEnabled_m1F82ED9F96B4813A80F2090015525CF2D4DF572F (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetHorizontalScrollBarEnabled(listener.Name, enabled);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		bool L_2 = ___enabled0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetHorizontalScrollBarEnabled_m69DA8E83949EA69F09F1FEEA8839F9DAD4CAD331(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetVerticalScrollBarEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetVerticalScrollBarEnabled_m67FB21D6A84145B2B367B6D90F5CE6A5A757BF8E (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetVerticalScrollBarEnabled(listener.Name, enabled);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		bool L_2 = ___enabled0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetVerticalScrollBarEnabled_m36B6C595438FD45B7B48EFDD986A3D9B324C1877(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetBouncesEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetBouncesEnabled_mAA70D977F348A4F83044038FD41A4B6AC09FC20F (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetBouncesEnabled(listener.Name, enabled);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		bool L_2 = ___enabled0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetBouncesEnabled_m870D52004480D1D338E6E9F4E909B55651DCFFAB(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetZoomEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetZoomEnabled_m3A977A300BD7ECE16A8D8554F3B8812C59294D6D (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetZoomEnabled(listener.Name, enabled);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		bool L_2 = ___enabled0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetZoomEnabled_mB567F875230E32991A50974B3F85D958E77432E0(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::AddPermissionTrustDomain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_AddPermissionTrustDomain_m0DD16414F89B814936DCE984C25B38996CBEF489 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___domain0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.AddPermissionTrustDomain(listener.Name, domain);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___domain0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_AddPermissionTrustDomain_m4B4E4B62B362C33B0D574E063DD70B4D294F0D19(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::RemovePermissionTrustDomain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_RemovePermissionTrustDomain_m29E8D0E1E2CDCB8FBA2C3696F056BE583E8B3277 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___domain0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.RemovePermissionTrustDomain(listener.Name, domain);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___domain0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_RemovePermissionTrustDomain_m55AFA1F4A95DD24CFDEA4CBF1D9573E0B6D18BF5(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetBackButtonEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetBackButtonEnabled_m45F3823773E76FD877088649FFFC4323C391CF1B (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___enabled0, const RuntimeMethod* method)
{
	{
		// this.backButtonEnabled = enabled;
		bool L_0 = ___enabled0;
		__this->set_backButtonEnabled_30(L_0);
		// }
		return;
	}
}
// System.Void UniWebView::SetUseWideViewPort(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetUseWideViewPort_m789CD62463500CC62E93FF97FCF4CC2EEF3E5052 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetUseWideViewPort(listener.Name, flag);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		bool L_2 = ___flag0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetUseWideViewPort_m4220599F4A8710265E67C6E4497D8E84DF460FA1(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetLoadWithOverviewMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetLoadWithOverviewMode_m575536858EA0F918B2C221F01921AE37A4F59125 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetLoadWithOverviewMode(listener.Name, flag);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		bool L_2 = ___flag0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetLoadWithOverviewMode_m5A6C144DE328D7C6B80E68D5DC73865066A41A3F(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetShowToolbar(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetShowToolbar_m60E94DF31354955AAA4354B0B94720827ADE4C9B (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___show0, bool ___animated1, bool ___onTop2, bool ___adjustInset3, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetToolbarDoneButtonText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetToolbarDoneButtonText_mF339E572CAEF9BBA04C35789F11C6273EB4387B6 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___text0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetToolbarGoBackButtonText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetToolbarGoBackButtonText_mDA1CFB8F5EDCC219BDB61B1E644677C259F6020B (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___text0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetToolbarGoForwardButtonText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetToolbarGoForwardButtonText_mA59FD581A04256BFF78D9C64124C6019833ADF51 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___text0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetToolbarTintColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetToolbarTintColor_m22EC8EE6EB59241201EA37E1B397A72FC502B865 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetToolbarTextColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetToolbarTextColor_mE272C01143EF7DE5697DCA13D34F0B40F4B4A475 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetShowToolbarNavigationButtons(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetShowToolbarNavigationButtons_m115D13C045823D15B85C1A903EB8556A2496ADA2 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___show0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetUserInteractionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetUserInteractionEnabled_m4475323F1BA79A67804CB89E663240B17E9CB5BB (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetUserInteractionEnabled(listener.Name, enabled);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		bool L_2 = ___enabled0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetUserInteractionEnabled_m9DD938B6029F28C58F0D8BEB32BD48AE9761F619(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetWebContentsDebuggingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetWebContentsDebuggingEnabled_mFF1B9CA5002B2AD6D423614DC9A9DEFD1F754A00 (bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetWebContentsDebuggingEnabled(enabled);
		bool L_0 = ___enabled0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetWebContentsDebuggingEnabled_mE7362540B11E5A7855875FCF66B5B1C4D94E3ABB(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetWindowUserResizeEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetWindowUserResizeEnabled_m894B96262664648B65A7EF48BD4FC82DF4038C8F (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___enabled0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::GetHTMLContent(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_GetHTMLContent_m4F9DD9BFD8A0D9F968404DBD806424401EDDAF9A (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mFEA53F543E097D36BFEEF4744D8CBBD15D5A42B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass147_0_U3CGetHTMLContentU3Eb__0_m375269303B0D63DAA65203CBF95357F33F731E7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass147_0_t22B9F896525CEE39A0E34637FEC8801CE13D1CC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7174781ACA1FA077C93755E54C155E9C90186CFC);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass147_0_t22B9F896525CEE39A0E34637FEC8801CE13D1CC7 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass147_0_t22B9F896525CEE39A0E34637FEC8801CE13D1CC7 * L_0 = (U3CU3Ec__DisplayClass147_0_t22B9F896525CEE39A0E34637FEC8801CE13D1CC7 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass147_0_t22B9F896525CEE39A0E34637FEC8801CE13D1CC7_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass147_0__ctor_m48494B1C68F023B9629F1CB7C91AB1D03F87E12D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass147_0_t22B9F896525CEE39A0E34637FEC8801CE13D1CC7 * L_1 = V_0;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_2 = ___handler0;
		NullCheck(L_1);
		L_1->set_handler_0(L_2);
		// EvaluateJavaScript("document.documentElement.outerHTML", payload => {
		//     if (handler != null) {
		//         handler(payload.data);
		//     }
		// });
		U3CU3Ec__DisplayClass147_0_t22B9F896525CEE39A0E34637FEC8801CE13D1CC7 * L_3 = V_0;
		Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8 * L_4 = (Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8 *)il2cpp_codegen_object_new(Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8_il2cpp_TypeInfo_var);
		Action_1__ctor_mFEA53F543E097D36BFEEF4744D8CBBD15D5A42B3(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass147_0_U3CGetHTMLContentU3Eb__0_m375269303B0D63DAA65203CBF95357F33F731E7B_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mFEA53F543E097D36BFEEF4744D8CBBD15D5A42B3_RuntimeMethod_var);
		UniWebView_EvaluateJavaScript_m7110F09B56421EE6A66A4211329C813BFF5BBD03(__this, _stringLiteral7174781ACA1FA077C93755E54C155E9C90186CFC, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetAllowBackForwardNavigationGestures(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowBackForwardNavigationGestures_m4FF6C8182B05C1589DAA02EE839C6E77D0B62AD7 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___flag0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetAllowHTTPAuthPopUpWindow(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowHTTPAuthPopUpWindow_m6816230E9EA06006FE1EDB7EFE071D534F4314AB (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetAllowHTTPAuthPopUpWindow(listener.Name, flag);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		bool L_2 = ___flag0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowHTTPAuthPopUpWindow_mBA82256009CB9EE7A2D88EA3D60E4A26A36444F2(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetCalloutEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetCalloutEnabled_m62D999D13DC12E8A4838F6980F4AFEC7B1479969 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetCalloutEnabled(listener.Name, enabled);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		bool L_2 = ___enabled0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetCalloutEnabled_mBD2F744FA45335697BF7EEEBA779C4420444604E(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetSupportMultipleWindows(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetSupportMultipleWindows_m0EBBE6D4E3BFD99BB9FD72EFBCAE6101BAC5C7E1 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetSupportMultipleWindows(listener.Name, enabled);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		bool L_2 = ___enabled0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetSupportMultipleWindows_m1DB49B0DB842BE6B5FDEB8BDD54352ACD04FEDF6(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetDefaultFontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetDefaultFontSize_mB6A78CD7BC567AD8B1BD0ED9858593E317580847 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetDefaultFontSize(listener.Name, size);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___size0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetDefaultFontSize_m92653953667F78DD34F3587C380133CBB35C5C5E(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetTextZoom(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetTextZoom_m7F4463977B9F17F4BCA16E21B9CB1C4D2111A412 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, int32_t ___textZoom0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetTextZoom(listener.Name, textZoom);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___textZoom0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetTextZoom_m4636D0279A078AB35345810F9AFCFABF237B835E(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetDragInteractionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetDragInteractionEnabled_m7F659B67F41E4D1D830DCE745BEE8C4BC0085E0C (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___enabled0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::Print()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_Print_m5F573A3E230A938A3D876A94B27FD9570C56C9FD (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.Print(listener.Name);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_Print_m7EDE4F940A2A5A15F85741CC00A998042938A21C(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::CaptureSnapshot(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_CaptureSnapshot_m3F06B891968F9C32E035BB4962A71FEAB2934D48 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___fileName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.CaptureSnapshot(listener.Name, fileName);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___fileName0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CaptureSnapshot_mEBD6AEA2FEADBD455A353BD21DFFBBA89CDEE4C9(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::ScrollTo(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_ScrollTo_m1B8B2BBDF5A084B0E6291F6340913301A6A29D1A (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, int32_t ___x0, int32_t ___y1, bool ___animated2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.ScrollTo(listener.Name, x, y, animated);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___x0;
		int32_t L_3 = ___y1;
		bool L_4 = ___animated2;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_ScrollTo_m01D85E8C053299774A0AB7C60F5A0C29FB0D3E08(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::AddDownloadURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_AddDownloadURL_mA4AF88A4E25315834DC84CB3EF5DDA3D287D8EEF (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___urlString0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::RemoveDownloadURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_RemoveDownloadURL_mE06A39309F09962DD46BC12E5EB54F72826F28F7 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___urlString0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::AddDownloadMIMEType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_AddDownloadMIMEType_mE2813AAC65D718909FC89A2F992AFD1AE790C953 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___MIMEType0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::RemoveDownloadMIMETypes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_RemoveDownloadMIMETypes_m916792275936B8B12B0B9908C67FB3D68CB22E12 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___MIMEType0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetAllowUserChooseActionAfterDownloading(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowUserChooseActionAfterDownloading_mC0C99F857D693CF7321C5E453A33662AA21E736C (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___allowed0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetDownloadEventForContextMenuEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetDownloadEventForContextMenuEnabled_mE49A7DC4C2CFFBF3669B607601E894D69A435FA5 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetDownloadEventForContextMenuEnabled(listener.Name, enabled);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		bool L_2 = ___enabled0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetDownloadEventForContextMenuEnabled_m51340BF487B141158FA8766E005746F49C5235EE(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_OnDestroy_m0B5F5A3419D699AD2579B055678A6AE52EF8F67E (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewNativeListener.RemoveListener(listener.Name);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_18();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_il2cpp_TypeInfo_var);
		UniWebViewNativeListener_RemoveListener_mCB997D0B90F62CDACDACC472381EA9C7FEFDE77D(L_1, /*hidden argument*/NULL);
		// UniWebViewInterface.Destroy(listener.Name);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_2 = __this->get_listener_18();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_Destroy_mDD96291A0C75B4FAA7767D95D0491F1DAE34A2C8(L_3, /*hidden argument*/NULL);
		// Destroy(listener.gameObject);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_4 = __this->get_listener_18();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnShowTransitionFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnShowTransitionFinished_m55B96E16E81414073E97D3E8CCD858AE73BF4C7A (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___identifier0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m9433D5C61A3FDBCC815B81514A5C4047081A1733_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m077627631DE1E79894B3B1557F16F883C24E690C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	{
		// if (actions.TryGetValue(identifier, out action)) {
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = __this->get_actions_25();
		String_t* L_1 = ___identifier0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m077627631DE1E79894B3B1557F16F883C24E690C(L_0, L_1, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m077627631DE1E79894B3B1557F16F883C24E690C_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// action();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = V_0;
		NullCheck(L_3);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_3, /*hidden argument*/NULL);
		// actions.Remove(identifier);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_4 = __this->get_actions_25();
		String_t* L_5 = ___identifier0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_Remove_m9433D5C61A3FDBCC815B81514A5C4047081A1733(L_4, L_5, /*hidden argument*/Dictionary_2_Remove_m9433D5C61A3FDBCC815B81514A5C4047081A1733_RuntimeMethod_var);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnHideTransitionFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnHideTransitionFinished_m11B0DD78DB7D4A24408F74EC5EDFCDDCF1342448 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___identifier0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m9433D5C61A3FDBCC815B81514A5C4047081A1733_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m077627631DE1E79894B3B1557F16F883C24E690C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	{
		// if (actions.TryGetValue(identifier, out action)) {
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = __this->get_actions_25();
		String_t* L_1 = ___identifier0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m077627631DE1E79894B3B1557F16F883C24E690C(L_0, L_1, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m077627631DE1E79894B3B1557F16F883C24E690C_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// action();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = V_0;
		NullCheck(L_3);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_3, /*hidden argument*/NULL);
		// actions.Remove(identifier);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_4 = __this->get_actions_25();
		String_t* L_5 = ___identifier0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_Remove_m9433D5C61A3FDBCC815B81514A5C4047081A1733(L_4, L_5, /*hidden argument*/Dictionary_2_Remove_m9433D5C61A3FDBCC815B81514A5C4047081A1733_RuntimeMethod_var);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnAnimateToFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnAnimateToFinished_mDECF0D498F11EE3C2AE468BAA980C4911636562E (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___identifier0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m9433D5C61A3FDBCC815B81514A5C4047081A1733_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m077627631DE1E79894B3B1557F16F883C24E690C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	{
		// if (actions.TryGetValue(identifier, out action)) {
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_0 = __this->get_actions_25();
		String_t* L_1 = ___identifier0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m077627631DE1E79894B3B1557F16F883C24E690C(L_0, L_1, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m077627631DE1E79894B3B1557F16F883C24E690C_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// action();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = V_0;
		NullCheck(L_3);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_3, /*hidden argument*/NULL);
		// actions.Remove(identifier);
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_4 = __this->get_actions_25();
		String_t* L_5 = ___identifier0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_Remove_m9433D5C61A3FDBCC815B81514A5C4047081A1733(L_4, L_5, /*hidden argument*/Dictionary_2_Remove_m9433D5C61A3FDBCC815B81514A5C4047081A1733_RuntimeMethod_var);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnAddJavaScriptFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnAddJavaScriptFinished_mD4E1CB64277796B210DD970B38C12FD5C99ED1D9 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * ___payload0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m7FD4BCCE3B594A86994AF02F773EDBD3E8C855FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m91F9C013C61837D39B5C237F12F0F6B30EB9BA6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m7780B2017AA17250A077A690CAB507AC59B42D41_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8 * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// var identifier = payload.identifier;
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_0 = ___payload0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_identifier_0();
		V_1 = L_1;
		// if (payloadActions.TryGetValue(identifier, out action)) {
		Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383 * L_2 = __this->get_payloadActions_26();
		String_t* L_3 = V_1;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m7780B2017AA17250A077A690CAB507AC59B42D41(L_2, L_3, (Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m7780B2017AA17250A077A690CAB507AC59B42D41_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// action(payload);
		Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8 * L_5 = V_0;
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_6 = ___payload0;
		NullCheck(L_5);
		Action_1_Invoke_m7FD4BCCE3B594A86994AF02F773EDBD3E8C855FA(L_5, L_6, /*hidden argument*/Action_1_Invoke_m7FD4BCCE3B594A86994AF02F773EDBD3E8C855FA_RuntimeMethod_var);
		// payloadActions.Remove(identifier);
		Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383 * L_7 = __this->get_payloadActions_26();
		String_t* L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_m91F9C013C61837D39B5C237F12F0F6B30EB9BA6C(L_7, L_8, /*hidden argument*/Dictionary_2_Remove_m91F9C013C61837D39B5C237F12F0F6B30EB9BA6C_RuntimeMethod_var);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnEvalJavaScriptFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnEvalJavaScriptFinished_m7F41AE45F97DDA851397CA49CFE9B6A6C35BBDBA (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * ___payload0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m7FD4BCCE3B594A86994AF02F773EDBD3E8C855FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m91F9C013C61837D39B5C237F12F0F6B30EB9BA6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m7780B2017AA17250A077A690CAB507AC59B42D41_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8 * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// var identifier = payload.identifier;
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_0 = ___payload0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_identifier_0();
		V_1 = L_1;
		// if (payloadActions.TryGetValue(identifier, out action)) {
		Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383 * L_2 = __this->get_payloadActions_26();
		String_t* L_3 = V_1;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m7780B2017AA17250A077A690CAB507AC59B42D41(L_2, L_3, (Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m7780B2017AA17250A077A690CAB507AC59B42D41_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// action(payload);
		Action_1_tA0E50FF8C98D16026B1E42E9663CA0A799A22ED8 * L_5 = V_0;
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_6 = ___payload0;
		NullCheck(L_5);
		Action_1_Invoke_m7FD4BCCE3B594A86994AF02F773EDBD3E8C855FA(L_5, L_6, /*hidden argument*/Action_1_Invoke_m7FD4BCCE3B594A86994AF02F773EDBD3E8C855FA_RuntimeMethod_var);
		// payloadActions.Remove(identifier);
		Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383 * L_7 = __this->get_payloadActions_26();
		String_t* L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_m91F9C013C61837D39B5C237F12F0F6B30EB9BA6C(L_7, L_8, /*hidden argument*/Dictionary_2_Remove_m91F9C013C61837D39B5C237F12F0F6B30EB9BA6C_RuntimeMethod_var);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnPageFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageFinished_mE2974A0B41A120A76FB7A612AE9CF4E2A387A5FD (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * ___payload0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4CC144598BD145E00CD6F81EDD805EA5BBA24E6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (OnPageFinished != null) {
		PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * L_0 = __this->get_OnPageFinished_5();
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		// int code = -1;
		V_0 = (-1);
		// if (int.TryParse(payload.resultCode, out code)) {
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_1 = ___payload0;
		NullCheck(L_1);
		String_t* L_2 = L_1->get_resultCode_1();
		bool L_3;
		L_3 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_2, (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// OnPageFinished(this, code, payload.data);
		PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * L_4 = __this->get_OnPageFinished_5();
		int32_t L_5 = V_0;
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_6 = ___payload0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_data_2();
		NullCheck(L_4);
		PageFinishedDelegate_Invoke_mF649F376FBB890D9CFB948732D510CEEA405ADB6(L_4, __this, L_5, L_7, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_002d:
	{
		// UniWebViewLogger.Instance.Critical("Invalid status code received: " + payload.resultCode);
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_8;
		L_8 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_9 = ___payload0;
		NullCheck(L_9);
		String_t* L_10 = L_9->get_resultCode_1();
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralC4CC144598BD145E00CD6F81EDD805EA5BBA24E6, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		UniWebViewLogger_Critical_m9E5DC408B6A2006BD4A3DCDA9349DCB55E44B096(L_8, L_11, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnPageStarted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageStarted_m6CFF7B32BCCF12446DAE75C70CAD97FF9CA5E399 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___url0, const RuntimeMethod* method)
{
	{
		// if (OnPageStarted != null) {
		PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * L_0 = __this->get_OnPageStarted_4();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// OnPageStarted(this, url);
		PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * L_1 = __this->get_OnPageStarted_4();
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		PageStartedDelegate_Invoke_mFE74C8CD1858C2368AC8F336A2903F97F57F6E5F(L_1, __this, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnPageErrorReceived(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageErrorReceived_m04D0B828D3B7AA5E19B9DAE47EA73458DC338644 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * ___payload0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2199E4A06060B44700618DF6B43A85D47E229DF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (OnPageErrorReceived != null) {
		PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * L_0 = __this->get_OnPageErrorReceived_6();
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		// int code = -1;
		V_0 = (-1);
		// if (int.TryParse(payload.resultCode, out code)) {
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_1 = ___payload0;
		NullCheck(L_1);
		String_t* L_2 = L_1->get_resultCode_1();
		bool L_3;
		L_3 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_2, (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// OnPageErrorReceived(this, code, payload.data);
		PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * L_4 = __this->get_OnPageErrorReceived_6();
		int32_t L_5 = V_0;
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_6 = ___payload0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_data_2();
		NullCheck(L_4);
		PageErrorReceivedDelegate_Invoke_mBA8063297A0D58C38D1272F1E1866B10E99BBF3E(L_4, __this, L_5, L_7, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_002d:
	{
		// UniWebViewLogger.Instance.Critical("Invalid error code received: " + payload.resultCode);
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_8;
		L_8 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_9 = ___payload0;
		NullCheck(L_9);
		String_t* L_10 = L_9->get_resultCode_1();
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralD2199E4A06060B44700618DF6B43A85D47E229DF, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		UniWebViewLogger_Critical_m9E5DC408B6A2006BD4A3DCDA9349DCB55E44B096(L_8, L_11, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnPageProgressChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageProgressChanged_mC778758DD36AEAF3BF4F70F7BB6402AE6F1B4693 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, float ___progress0, const RuntimeMethod* method)
{
	{
		// if (OnPageProgressChanged != null) {
		PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * L_0 = __this->get_OnPageProgressChanged_7();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// OnPageProgressChanged(this, progress);
		PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * L_1 = __this->get_OnPageProgressChanged_7();
		float L_2 = ___progress0;
		NullCheck(L_1);
		PageProgressChangedDelegate_Invoke_m631C4300E4E5F355A4CE188EDC0BFF9B4589AE96(L_1, __this, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnMessageReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnMessageReceived_mE9500C929F1B622F3A24490BC235108F586B5B7C (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___result0, const RuntimeMethod* method)
{
	UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (OnMessageReceived != null) {
		MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * L_0 = __this->get_OnMessageReceived_8();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// var message = new UniWebViewMessage(result);
		String_t* L_1 = ___result0;
		UniWebViewMessage__ctor_mE2E221E85B18399A604EF466D9E9A9228E309170((UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC *)(&V_0), L_1, /*hidden argument*/NULL);
		// OnMessageReceived(this, message);
		MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * L_2 = __this->get_OnMessageReceived_8();
		UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC  L_3 = V_0;
		NullCheck(L_2);
		MessageReceivedDelegate_Invoke_mD469364495B240D58B3D77DBF647A62DE9E9F397(L_2, __this, L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnShouldClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnShouldClose_mCA5EFB924EAE488F69E3720BD1E562D6EEDC8B8A (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnShouldClose != null) {
		ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * L_0 = __this->get_OnShouldClose_9();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// var shouldClose = OnShouldClose(this);
		ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * L_1 = __this->get_OnShouldClose_9();
		NullCheck(L_1);
		bool L_2;
		L_2 = ShouldCloseDelegate_Invoke_m0A62F2058438FBA4343F3A51D70088794FBE0D7A(L_1, __this, /*hidden argument*/NULL);
		// if (shouldClose) {
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// Destroy(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_001d:
	{
		// Destroy(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnWebContentProcessDidTerminate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnWebContentProcessDidTerminate_m45DD9D1F5E94244F10CD474CED3366D3191430F6 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method)
{
	{
		// if (OnWebContentProcessTerminated != null) {
		OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * L_0 = __this->get_OnWebContentProcessTerminated_11();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// OnWebContentProcessTerminated(this);
		OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * L_1 = __this->get_OnWebContentProcessTerminated_11();
		NullCheck(L_1);
		OnWebContentProcessTerminatedDelegate_Invoke_m5C6BB033CF8D2871BCA4E9D3360AE62F8422468C(L_1, __this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnMultipleWindowOpened(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnMultipleWindowOpened_mAEDD5DAEE70B25FC188B7FAF9221ED9832C65036 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___multiWindowId0, const RuntimeMethod* method)
{
	{
		// if (OnMultipleWindowOpened != null) {
		MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * L_0 = __this->get_OnMultipleWindowOpened_15();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// OnMultipleWindowOpened(this, multiWindowId);
		MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * L_1 = __this->get_OnMultipleWindowOpened_15();
		String_t* L_2 = ___multiWindowId0;
		NullCheck(L_1);
		MultipleWindowOpenedDelegate_Invoke_m3183DC9417F5EF4A721A341D1E414D10B96114A7(L_1, __this, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnMultipleWindowClosed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnMultipleWindowClosed_m13A3EDF356C5D44359ABDC0692BD7F37AFDAB71D (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, String_t* ___multiWindowId0, const RuntimeMethod* method)
{
	{
		// if (OnMultipleWindowClosed != null) {
		MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * L_0 = __this->get_OnMultipleWindowClosed_16();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// OnMultipleWindowClosed(this, multiWindowId);
		MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * L_1 = __this->get_OnMultipleWindowClosed_16();
		String_t* L_2 = ___multiWindowId0;
		NullCheck(L_1);
		MultipleWindowClosedDelegate_Invoke_mF13967F9006AE565AFC93DCDE631C5D1A7F3C0DC(L_1, __this, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnFileDownloadStarted(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnFileDownloadStarted_mD776361E69C9B8E9AEAC8DD8DAAF1BB4B8F5B735 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * ___payload0, const RuntimeMethod* method)
{
	{
		// if (OnFileDownloadStarted != null) {
		FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * L_0 = __this->get_OnFileDownloadStarted_12();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// OnFileDownloadStarted(this, payload.identifier, payload.data);
		FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * L_1 = __this->get_OnFileDownloadStarted_12();
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_2 = ___payload0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_identifier_0();
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_4 = ___payload0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_data_2();
		NullCheck(L_1);
		FileDownloadStarted_Invoke_mDBCB7B796F3769B973B94C2C93E5842878D98D0A(L_1, __this, L_3, L_5, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnFileDownloadFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnFileDownloadFinished_mAE01165D0EE2524EC9167598267ABF99B61620BB (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * ___payload0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		// if (OnFileDownloadFinished != null) {
		FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * L_0 = __this->get_OnFileDownloadFinished_13();
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		// int errorCode = int.TryParse(payload.resultCode, out errorCode) ? errorCode : -1;
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_1 = ___payload0;
		NullCheck(L_1);
		String_t* L_2 = L_1->get_resultCode_1();
		bool L_3;
		L_3 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_2, (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		G_B4_0 = (-1);
		goto IL_001b;
	}

IL_001a:
	{
		int32_t L_4 = V_0;
		G_B4_0 = L_4;
	}

IL_001b:
	{
		V_0 = G_B4_0;
		// OnFileDownloadFinished(this, errorCode, payload.identifier, payload.data);
		FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * L_5 = __this->get_OnFileDownloadFinished_13();
		int32_t L_6 = V_0;
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_7 = ___payload0;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_identifier_0();
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_9 = ___payload0;
		NullCheck(L_9);
		String_t* L_10 = L_9->get_data_2();
		NullCheck(L_5);
		FileDownloadFinished_Invoke_m0BEF0FE390BBED00C1B7D807E4170DAB61A6CAD9(L_5, __this, L_6, L_8, L_10, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnCaptureSnapshotFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnCaptureSnapshotFinished_mF8B11C916CD448A50566713B4E8AAF5BE31FFDA3 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * ___payload0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		// if (OnCaptureSnapshotFinished != null) {
		CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * L_0 = __this->get_OnCaptureSnapshotFinished_14();
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		// int errorCode = int.TryParse(payload.resultCode, out errorCode) ? errorCode : -1;
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_1 = ___payload0;
		NullCheck(L_1);
		String_t* L_2 = L_1->get_resultCode_1();
		bool L_3;
		L_3 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_2, (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		G_B4_0 = (-1);
		goto IL_001b;
	}

IL_001a:
	{
		int32_t L_4 = V_0;
		G_B4_0 = L_4;
	}

IL_001b:
	{
		V_0 = G_B4_0;
		// OnCaptureSnapshotFinished(this, errorCode,  payload.data);
		CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * L_5 = __this->get_OnCaptureSnapshotFinished_14();
		int32_t L_6 = V_0;
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_7 = ___payload0;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_data_2();
		NullCheck(L_5);
		CaptureSnapshotFinished_Invoke_m98A4592BB0B657340815D963212F5E9D8D2F6D30(L_5, __this, L_6, L_8, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetImmersiveModeEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetImmersiveModeEnabled_m3BC1BD2A5AB65D40AEA3D426BC9B6B0337942B77 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFADAFC4A16312377BF957856DCCD59A61D85AB62);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(
		//     "SetImmersiveModeEnabled is removed in UniWebView 4." +
		//     "Now UniWebView always respect navigation bar/status bar settings from Unity."
		// );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralFADAFC4A16312377BF957856DCCD59A61D85AB62, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebView::add_OnKeyCodeReceived(UniWebView/KeyCodeReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnKeyCodeReceived_m9CF7723C5C85CB256AE5409C4EC02D59F6F572F9 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * V_0 = NULL;
	KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * V_1 = NULL;
	KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * V_2 = NULL;
	{
		KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * L_0 = __this->get_OnKeyCodeReceived_32();
		V_0 = L_0;
	}

IL_0007:
	{
		KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * L_1 = V_0;
		V_1 = L_1;
		KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * L_2 = V_1;
		KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 *)CastclassSealed((RuntimeObject*)L_4, KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185_il2cpp_TypeInfo_var));
		KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 ** L_5 = __this->get_address_of_OnKeyCodeReceived_32();
		KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * L_6 = V_2;
		KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * L_7 = V_1;
		KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * L_8;
		L_8 = InterlockedCompareExchangeImpl<KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 *>((KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 **)L_5, L_6, L_7);
		V_0 = L_8;
		KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * L_9 = V_0;
		KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * L_10 = V_1;
		if ((!(((RuntimeObject*)(KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 *)L_9) == ((RuntimeObject*)(KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnKeyCodeReceived(UniWebView/KeyCodeReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnKeyCodeReceived_mF6A25CDD916E899244A2B6B4494DC2A7561EDAA5 (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * V_0 = NULL;
	KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * V_1 = NULL;
	KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * V_2 = NULL;
	{
		KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * L_0 = __this->get_OnKeyCodeReceived_32();
		V_0 = L_0;
	}

IL_0007:
	{
		KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * L_1 = V_0;
		V_1 = L_1;
		KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * L_2 = V_1;
		KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 *)CastclassSealed((RuntimeObject*)L_4, KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185_il2cpp_TypeInfo_var));
		KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 ** L_5 = __this->get_address_of_OnKeyCodeReceived_32();
		KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * L_6 = V_2;
		KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * L_7 = V_1;
		KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * L_8;
		L_8 = InterlockedCompareExchangeImpl<KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 *>((KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 **)L_5, L_6, L_7);
		V_0 = L_8;
		KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * L_9 = V_0;
		KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * L_10 = V_1;
		if ((!(((RuntimeObject*)(KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 *)L_9) == ((RuntimeObject*)(KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView__ctor_m6C05C53D4E91CE65EBC242DAA289FBAC44BC9BCC (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAB26B178197E25C427201DADB4B06019B0C82D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// private string id = Guid.NewGuid().ToString();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0;
		L_0 = Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_0), /*hidden argument*/NULL);
		__this->set_id_17(L_1);
		// private Dictionary<String, Action> actions = new Dictionary<String, Action>();
		Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC * L_2 = (Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC *)il2cpp_codegen_object_new(Dictionary_2_t1175EC6736CA8F8531A7C51EC340BB3FE9B19DCC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6(L_2, /*hidden argument*/Dictionary_2__ctor_m9E76E07E586452835FC536F747039C5531016ED6_RuntimeMethod_var);
		__this->set_actions_25(L_2);
		// private Dictionary<String, Action<UniWebViewNativeResultPayload>> payloadActions = new Dictionary<String, Action<UniWebViewNativeResultPayload>>();
		Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383 * L_3 = (Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383 *)il2cpp_codegen_object_new(Dictionary_2_t65EF87FC3FDE4CEBA515F0CFB5444946EF970383_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mAB26B178197E25C427201DADB4B06019B0C82D7A(L_3, /*hidden argument*/Dictionary_2__ctor_mAB26B178197E25C427201DADB4B06019B0C82D7A_RuntimeMethod_var);
		__this->set_payloadActions_26(L_3);
		// private bool backButtonEnabled = true;
		__this->set_backButtonEnabled_30((bool)1);
		// private Color backgroundColor = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		__this->set_backgroundColor_31(L_4);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UniWebViewAndroidStaticListener::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewAndroidStaticListener_Awake_m685AF5A72F1D57E516CD27F35D7D11AD5088F3E6 (UniWebViewAndroidStaticListener_t9D8197E1377AE3EDE6A3E60402B6817082F80CB5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewAndroidStaticListener::OnJavaMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewAndroidStaticListener_OnJavaMessage_m6E20E748B881C867DDB076B45D47AA114ACD6FB6 (UniWebViewAndroidStaticListener_t9D8197E1377AE3EDE6A3E60402B6817082F80CB5 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A92C3780BFB8E4337E1F918B9736D7E62AC5DAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5886CC8EB4F8A781BD0FD273284D9412CD0EC0EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * V_1 = NULL;
	MethodInfo_t * V_2 = NULL;
	int32_t V_3 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// string[] parts = message.Split("@"[0]);
		String_t* L_0 = ___message0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		NullCheck(_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476);
		Il2CppChar L_3;
		L_3 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476, 0, /*hidden argument*/NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)L_3);
		NullCheck(L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4;
		L_4 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (parts.Length < 3) {
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = V_0;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))) >= ((int32_t)3)))
		{
			goto IL_002c;
		}
	}
	{
		// Debug.Log("Not enough parts for receiving a message.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral5886CC8EB4F8A781BD0FD273284D9412CD0EC0EA, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_002c:
	{
		// var listener = UniWebViewNativeListener.GetListener(parts[0]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_il2cpp_TypeInfo_var);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_9;
		L_9 = UniWebViewNativeListener_GetListener_m6B7D0D84EB4814AAC6EAC1BF4DB70396DA3C25BF(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// if (listener == null) {
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_003f;
		}
	}
	{
		// return;
		return;
	}

IL_003f:
	{
		// MethodInfo methodInfo = typeof(UniWebViewNativeListener).GetMethod(parts[1]);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_12 = { reinterpret_cast<intptr_t> (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13;
		L_13 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_12, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = 1;
		String_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_13);
		MethodInfo_t * L_17;
		L_17 = Type_GetMethod_mDD47332AAF3036AAFC4C6626A999A452E7143DCF(L_13, L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		// if (methodInfo == null) {
		MethodInfo_t * L_18 = V_2;
		bool L_19;
		L_19 = MethodInfo_op_Equality_mC78C53FBCEF409A2EBD689D6781D23C62E6161F2(L_18, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_006d;
		}
	}
	{
		// Debug.Log("Cannot find correct method to invoke: " + parts[1]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		String_t* L_23;
		L_23 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3A92C3780BFB8E4337E1F918B9736D7E62AC5DAB, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_23, /*hidden argument*/NULL);
	}

IL_006d:
	{
		// var leftLength = parts.Length - 2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = V_0;
		NullCheck(L_24);
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))), (int32_t)2));
		// var left = new string[leftLength];
		int32_t L_25 = V_3;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_25);
		V_4 = L_26;
		// for (int i = 0; i < leftLength; i++) {
		V_5 = 0;
		goto IL_0091;
	}

IL_0080:
	{
		// left[i] = parts[i + 2];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = V_4;
		int32_t L_28 = V_5;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)2));
		String_t* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_32);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (String_t*)L_32);
		// for (int i = 0; i < leftLength; i++) {
		int32_t L_33 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_0091:
	{
		// for (int i = 0; i < leftLength; i++) {
		int32_t L_34 = V_5;
		int32_t L_35 = V_3;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0080;
		}
	}
	{
		// methodInfo.Invoke(listener, new object[] { String.Join("@", left) });
		MethodInfo_t * L_36 = V_2;
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_37 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_38 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_39 = L_38;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = V_4;
		String_t* L_41;
		L_41 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476, L_40, /*hidden argument*/NULL);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_41);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_41);
		NullCheck(L_36);
		RuntimeObject * L_42;
		L_42 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_36, L_37, L_39, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewAndroidStaticListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewAndroidStaticListener__ctor_mB9C5918A185263A34493CEBE48C46837602657AA (UniWebViewAndroidStaticListener_t9D8197E1377AE3EDE6A3E60402B6817082F80CB5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.String UniWebViewHelper::StreamingAssetURLForPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewHelper_StreamingAssetURLForPath_m2048A37ED45CFE236593BF957BADC1A37ED855F5 (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EA2CB2B0D1C6D82BFCABA78C7EBE25AE1254CFD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Path.Combine("file:///android_asset/", path);
		String_t* L_0 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(_stringLiteral4EA2CB2B0D1C6D82BFCABA78C7EBE25AE1254CFD, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String UniWebViewHelper::PersistentDataURLForPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewHelper_PersistentDataURLForPath_mDF9164665140BEF3D9C1EFEDA8343509883670DC (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Path.Combine("file://" + Application.persistentDataPath, path);
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UniWebViewHelper::get_IsEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewHelper_get_IsEditor_m263D366CDCD483F5684AAFF210843D31AE6620F8 (const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UniWebViewHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewHelper__ctor_m38EB68BDDFA2CE486DFAB70529FEAA8590FEDF9E (UniWebViewHelper_tDA871B44E18414C60705DA46DA31AE333C99649C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UniWebViewInterface::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface__cctor_mE15AA3D47034D87ED18A5A12114E4F84E8AB4035 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUniWebViewAndroidStaticListener_t9D8197E1377AE3EDE6A3E60402B6817082F80CB5_m6FBD4D6A1FA445517C3B0CCDA6EC26AA33056AF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral449E90EA94A719309FD246952C6B4621E65F159A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4982677CA430F6BEEBF6DE62DB068943C678A403);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D352394D321D77D5B5C61F342DAB35C989C220B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool correctPlatform = Application.platform == RuntimePlatform.Android;
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->set_correctPlatform_1((bool)((((int32_t)L_0) == ((int32_t)((int32_t)11)))? 1 : 0));
		// var go = new GameObject("UniWebViewAndroidStaticListener");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_1, _stringLiteral4982677CA430F6BEEBF6DE62DB068943C678A403, /*hidden argument*/NULL);
		// go.AddComponent<UniWebViewAndroidStaticListener>();
		NullCheck(L_1);
		UniWebViewAndroidStaticListener_t9D8197E1377AE3EDE6A3E60402B6817082F80CB5 * L_2;
		L_2 = GameObject_AddComponent_TisUniWebViewAndroidStaticListener_t9D8197E1377AE3EDE6A3E60402B6817082F80CB5_m6FBD4D6A1FA445517C3B0CCDA6EC26AA33056AF1(L_1, /*hidden argument*/GameObject_AddComponent_TisUniWebViewAndroidStaticListener_t9D8197E1377AE3EDE6A3E60402B6817082F80CB5_m6FBD4D6A1FA445517C3B0CCDA6EC26AA33056AF1_RuntimeMethod_var);
		// plugin = new AndroidJavaClass("com.onevcat.uniwebview.UniWebViewInterface");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_3 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_3, _stringLiteral8D352394D321D77D5B5C61F342DAB35C989C220B, /*hidden argument*/NULL);
		((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->set_plugin_0(L_3);
		// CheckPlatform();
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("prepare");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_4 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5;
		L_5 = Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		NullCheck(L_4);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_4, _stringLiteral449E90EA94A719309FD246952C6B4621E65F159A, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetLogLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetLogLevel_m0642B197237E7F0ECE0555FB3D3623833213A6FD (int32_t ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6646AEF6383BB084D7AF1DBC36DE3B99CB7D5096);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setLogLevel", level);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		int32_t L_3 = ___level0;
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral6646AEF6383BB084D7AF1DBC36DE3B99CB7D5096, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::Init(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Init_m4677F77E4C0FA5B86480BEB625138BF2ADA173CF (String_t* ___name0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("init", name, x, y, width, height);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		int32_t L_5 = ___x1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_4;
		int32_t L_9 = ___y2;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_8;
		int32_t L_13 = ___width3;
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_12;
		int32_t L_17 = ___height4;
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_19);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::Destroy(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Destroy_mDD96291A0C75B4FAA7767D95D0491F1DAE34A2C8 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("destroy", name);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::Load(System.String,System.String,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Load_mB5DDAE3A94607307F02F52B2CCAB124C4D7CA216 (String_t* ___name0, String_t* ___url1, bool ___skipEncoding2, String_t* ___readAccessURL3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D0FB6A57B014AF249173AD2C602950C4A35AF80);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("load", name, url);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___url1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral6D0FB6A57B014AF249173AD2C602950C4A35AF80, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::LoadHTMLString(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_LoadHTMLString_m2A3FBDA02B16E995181776DF8F7675BBC5FA3F51 (String_t* ___name0, String_t* ___html1, String_t* ___baseUrl2, bool ___skipEncoding3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B26F376A2CF6E95830794F6706E4612161CC407);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("loadHTMLString", name, html, baseUrl);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___html1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
		String_t* L_7 = ___baseUrl2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral6B26F376A2CF6E95830794F6706E4612161CC407, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::Reload(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Reload_m3DE8C46B7D2FBCF8783F0CB08D2552C0C7894A00 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE18B612F2CEC49FD22137D4676C2F419D6CF46D5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("reload", name);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralE18B612F2CEC49FD22137D4676C2F419D6CF46D5, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::Stop(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Stop_mD9E8A77DBAB7461EB60B8A7FCDC6D9D3734BFDA8 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FB065FC47DDCF8134948800A310281E12F058C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("stop", name);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral7FB065FC47DDCF8134948800A310281E12F058C7, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String UniWebViewInterface::GetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetUrl_m502FA510221DBF46C6AA46918790E2BF0D119178 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m208681393026F647A5B2E188EB994206FB0FA67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1738FA234DD23984A6C35D65687B65D92536008);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// return plugin.CallStatic<string>("getUrl", name);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		String_t* L_4;
		L_4 = AndroidJavaObject_CallStatic_TisString_t_m208681393026F647A5B2E188EB994206FB0FA67F(L_0, _stringLiteralA1738FA234DD23984A6C35D65687B65D92536008, L_2, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m208681393026F647A5B2E188EB994206FB0FA67F_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void UniWebViewInterface::SetFrame(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetFrame_m274F30611B296904B7F6D7195DFAFF27AB17C8BE (String_t* ___name0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1564FAE4D046D79DE761266060204AEEDC4BB21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setFrame", name, x, y, width, height);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		int32_t L_5 = ___x1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_4;
		int32_t L_9 = ___y2;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_8;
		int32_t L_13 = ___width3;
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_12;
		int32_t L_17 = ___height4;
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_19);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralE1564FAE4D046D79DE761266060204AEEDC4BB21, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetPosition(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetPosition_mA4B5345245B66250F23AA6E2BEA060E3C2F233DA (String_t* ___name0, int32_t ___x1, int32_t ___y2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C42779679BDC28CFAB9F9AA08B6EDF9C575B154);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setPosition", name, x, y);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		int32_t L_5 = ___x1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_4;
		int32_t L_9 = ___y2;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral3C42779679BDC28CFAB9F9AA08B6EDF9C575B154, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetSize(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetSize_m5812F4AC48A2BED16DB34DF34A2E227AD432D634 (String_t* ___name0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4204A6CCA8578136B4A25CA2537C7C3C31BD1AC4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setSize", name, width, height);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		int32_t L_5 = ___width1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_4;
		int32_t L_9 = ___height2;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral4204A6CCA8578136B4A25CA2537C7C3C31BD1AC4, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UniWebViewInterface::Show(System.String,System.Boolean,System.Int32,System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_Show_m18F4D9BA0E6AE5E787D591263A59CACEBA32F2A8 (String_t* ___name0, bool ___fade1, int32_t ___edge2, float ___duration3, String_t* ___identifier4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// return plugin.CallStatic<bool>("show", name, fade, edge, duration, identifier);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		bool L_5 = ___fade1;
		bool L_6 = L_5;
		RuntimeObject * L_7 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_4;
		int32_t L_9 = ___edge2;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_8;
		float L_13 = ___duration3;
		float L_14 = L_13;
		RuntimeObject * L_15 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_12;
		String_t* L_17 = ___identifier4;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_17);
		NullCheck(L_0);
		bool L_18;
		L_18 = AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF(L_0, _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192, L_16, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF_RuntimeMethod_var);
		return L_18;
	}
}
// System.Boolean UniWebViewInterface::Hide(System.String,System.Boolean,System.Int32,System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_Hide_m24755AC4B2521922BC932C7ECC3491F14B7DC9F8 (String_t* ___name0, bool ___fade1, int32_t ___edge2, float ___duration3, String_t* ___identifier4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31D307275CC464AFDCC4A193A3D0DADE7D308F81);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// return plugin.CallStatic<bool>("hide", name, fade, edge, duration, identifier);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		bool L_5 = ___fade1;
		bool L_6 = L_5;
		RuntimeObject * L_7 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_4;
		int32_t L_9 = ___edge2;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_8;
		float L_13 = ___duration3;
		float L_14 = L_13;
		RuntimeObject * L_15 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_12;
		String_t* L_17 = ___identifier4;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_17);
		NullCheck(L_0);
		bool L_18;
		L_18 = AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF(L_0, _stringLiteral31D307275CC464AFDCC4A193A3D0DADE7D308F81, L_16, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF_RuntimeMethod_var);
		return L_18;
	}
}
// System.Boolean UniWebViewInterface::AnimateTo(System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Single,System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_AnimateTo_m0FA13440C9BF5A742DBB29270ACCD95BB62A809B (String_t* ___name0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, float ___duration5, float ___delay6, String_t* ___identifier7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B68C1399A90D4E6E6DAFEAE7DA08343E2346DFF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// return plugin.CallStatic<bool>("animateTo", name, x, y, width, height, duration, delay, identifier);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		int32_t L_5 = ___x1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_4;
		int32_t L_9 = ___y2;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_8;
		int32_t L_13 = ___width3;
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_12;
		int32_t L_17 = ___height4;
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_19);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_16;
		float L_21 = ___duration5;
		float L_22 = L_21;
		RuntimeObject * L_23 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_23);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = L_20;
		float L_25 = ___delay6;
		float L_26 = L_25;
		RuntimeObject * L_27 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_27);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = L_24;
		String_t* L_29 = ___identifier7;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_29);
		NullCheck(L_0);
		bool L_30;
		L_30 = AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF(L_0, _stringLiteral8B68C1399A90D4E6E6DAFEAE7DA08343E2346DFF, L_28, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF_RuntimeMethod_var);
		return L_30;
	}
}
// System.Void UniWebViewInterface::AddJavaScript(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddJavaScript_mAE08E18566AB28B010DDB246789DD41DC9251304 (String_t* ___name0, String_t* ___jsString1, String_t* ___identifier2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF07018CB5269D45FB2053AE059DB7FC9C54FFCF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("addJavaScript", name, jsString, identifier);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___jsString1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
		String_t* L_7 = ___identifier2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralFF07018CB5269D45FB2053AE059DB7FC9C54FFCF, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::EvaluateJavaScript(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_EvaluateJavaScript_m26F782D9D3BB2D160159DE505C5F9BDDB8FCDD96 (String_t* ___name0, String_t* ___jsString1, String_t* ___identifier2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DE79C2CD63575AC9ECB35E88C658273A77D75C6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("evaluateJavaScript", name, jsString, identifier);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___jsString1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
		String_t* L_7 = ___identifier2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral5DE79C2CD63575AC9ECB35E88C658273A77D75C6, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::AddUrlScheme(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddUrlScheme_mA13C597314E486CBE69D8156A7E7FF6ACF3AC0E3 (String_t* ___name0, String_t* ___scheme1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A1B34F4E0F4F3FF85FE2672E1618493EC7BF962);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("addUrlScheme", name, scheme);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___scheme1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral2A1B34F4E0F4F3FF85FE2672E1618493EC7BF962, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::RemoveUrlScheme(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveUrlScheme_mEC03AD788B6552C3DB8235FC896F87F7E23BFD0D (String_t* ___name0, String_t* ___scheme1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA86C50F4B1AF6D3E1A77D83ECBCA14EBF7A7317C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("removeUrlScheme", name, scheme);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___scheme1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralA86C50F4B1AF6D3E1A77D83ECBCA14EBF7A7317C, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::AddSslExceptionDomain(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddSslExceptionDomain_m414AD19DF117F6276C96CCAE283C87E84D94B262 (String_t* ___name0, String_t* ___domain1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22E046D5EAA69E6183B74E3ADD1F2A965C25CCAB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("addSslExceptionDomain", name, domain);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___domain1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral22E046D5EAA69E6183B74E3ADD1F2A965C25CCAB, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::RemoveSslExceptionDomain(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveSslExceptionDomain_m80211BF5ECAAAFAF019A403FB84240729273F04C (String_t* ___name0, String_t* ___domain1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4353B18CB89F76878CA8731D22DC482A64B7206);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("removeSslExceptionDomain", name, domain);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___domain1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralF4353B18CB89F76878CA8731D22DC482A64B7206, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::AddPermissionTrustDomain(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddPermissionTrustDomain_m4B4E4B62B362C33B0D574E063DD70B4D294F0D19 (String_t* ___name0, String_t* ___domain1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4093128DE4F5C95C1AE42C92BE048800C32CA595);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("addPermissionTrustDomain", name, domain);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___domain1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral4093128DE4F5C95C1AE42C92BE048800C32CA595, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::RemovePermissionTrustDomain(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemovePermissionTrustDomain_m55AFA1F4A95DD24CFDEA4CBF1D9573E0B6D18BF5 (String_t* ___name0, String_t* ___domain1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06F202F9CA9A342E04166C9B0B1536FA0A6D0D72);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("removePermissionTrustDomain", name, domain);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___domain1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral06F202F9CA9A342E04166C9B0B1536FA0A6D0D72, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetHeaderField(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetHeaderField_m06CC84E4568E033CBE71FE14F5CE779031D398CC (String_t* ___name0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A736AD385143771CC7BE3FD81F63BDA24D69631);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setHeaderField", name, key, value);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___key1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
		String_t* L_7 = ___value2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral5A736AD385143771CC7BE3FD81F63BDA24D69631, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetUserAgent(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetUserAgent_mD74FE5C6D5CBF6D18E50B2D46A80DAB281585ACA (String_t* ___name0, String_t* ___userAgent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E404FE03936D628606B7DF9E734BAF95D344182);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setUserAgent", name, userAgent);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___userAgent1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral3E404FE03936D628606B7DF9E734BAF95D344182, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String UniWebViewInterface::GetUserAgent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetUserAgent_mE4316BCAE934C23E60EC6727FC4718CA55EC4407 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m208681393026F647A5B2E188EB994206FB0FA67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0B15CD4BA910CF8A2015DE9963A3CB48505CFB3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// return plugin.CallStatic<string>("getUserAgent", name);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		String_t* L_4;
		L_4 = AndroidJavaObject_CallStatic_TisString_t_m208681393026F647A5B2E188EB994206FB0FA67F(L_0, _stringLiteralD0B15CD4BA910CF8A2015DE9963A3CB48505CFB3, L_2, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m208681393026F647A5B2E188EB994206FB0FA67F_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void UniWebViewInterface::SetAllowAutoPlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowAutoPlay_mE612D2338A1FC37CB4BA4F72B47C351EE68B1406 (bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA87EF6D24F8EDBD189F60E8FAE8346868873324);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setAllowAutoPlay", flag);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		bool L_3 = ___flag0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralAA87EF6D24F8EDBD189F60E8FAE8346868873324, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetAllowJavaScriptOpenWindow(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowJavaScriptOpenWindow_mEEBFA4F20C0DE92B97C7B6DC8BDBBFC920F0D122 (bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6033B666C1911ABDF46C78670D40C8F32780B560);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setAllowJavaScriptOpenWindow", flag);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		bool L_3 = ___flag0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral6033B666C1911ABDF46C78670D40C8F32780B560, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetAllowFileAccess(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowFileAccess_mD59D2F8584829A8E21041D04235B70D13CF12CCD (String_t* ___name0, bool ___flag1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral029E36FE6D3C7D0CD9D986C1E8AE6547739A749E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setAllowFileAccess", name, flag);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		bool L_5 = ___flag1;
		bool L_6 = L_5;
		RuntimeObject * L_7 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral029E36FE6D3C7D0CD9D986C1E8AE6547739A749E, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetAllowFileAccessFromFileURLs(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowFileAccessFromFileURLs_m8E151F4EB89CD2F22C310B1C2C946733EACAA25B (String_t* ___name0, bool ___flag1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E6CABDC4F759622270ECC237B019B4E14689CEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setAllowFileAccessFromFileURLs", name, flag);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		bool L_5 = ___flag1;
		bool L_6 = L_5;
		RuntimeObject * L_7 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral9E6CABDC4F759622270ECC237B019B4E14689CEB, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetAllowUniversalAccessFromFileURLs(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowUniversalAccessFromFileURLs_mD1F0FF911FB6F4E35865DA2FFA82DC0E60E6956B (bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DB433FA1CA23852AD151D359F13726ACC32A782);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setAllowUniversalAccessFromFileURLs", flag);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		bool L_3 = ___flag0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral5DB433FA1CA23852AD151D359F13726ACC32A782, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetJavaScriptEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetJavaScriptEnabled_mBEB708FBE7370C21C2236B983952EF9288CDDEDF (bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral395ECB59DB769072648B57BDAF32B2A495C441DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setJavaScriptEnabled", enabled);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		bool L_3 = ___enabled0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral395ECB59DB769072648B57BDAF32B2A495C441DF, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::CleanCache(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_CleanCache_m6F6AC63596B39970CCF284894D83ED0889CCB956 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DB671BED62CD86E812C71F3652AB2E471465EA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("cleanCache", name);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralA3DB671BED62CD86E812C71F3652AB2E471465EA, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::ClearCookies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ClearCookies_m174FBFCC182937884A0EED6BEA25C13FB8843576 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC89C610EB715737B1E54BE9F8381DDD2A0330595);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("clearCookies");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralC89C610EB715737B1E54BE9F8381DDD2A0330595, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetCookie(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetCookie_m2AD3F8585F1F3F95F78F0199D587641E97AE2562 (String_t* ___url0, String_t* ___cookie1, bool ___skipEncoding2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DD53F3C91602BAB84363C053188A81B762168F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setCookie", url, cookie);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___url0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___cookie1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral37DD53F3C91602BAB84363C053188A81B762168F, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String UniWebViewInterface::GetCookie(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetCookie_m0E0CB963CA0628BE880CEBD2C117D6393DC5F8CA (String_t* ___url0, String_t* ___key1, bool ___skipEncoding2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m208681393026F647A5B2E188EB994206FB0FA67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral433BD28268DDF7A851125C0EA573CB011A17DE0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// return plugin.CallStatic<string>("getCookie", url, key);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___url0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___key1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		NullCheck(L_0);
		String_t* L_6;
		L_6 = AndroidJavaObject_CallStatic_TisString_t_m208681393026F647A5B2E188EB994206FB0FA67F(L_0, _stringLiteral433BD28268DDF7A851125C0EA573CB011A17DE0F, L_4, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m208681393026F647A5B2E188EB994206FB0FA67F_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void UniWebViewInterface::RemoveCookies(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveCookies_m0201B410ACED36F66127F291EB31EEF833FE75A9 (String_t* ___url0, bool ___skipEncoding1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03D5DA6E4D76C515B2D2D891E3D49E2CD56AC621);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("removeCookies", url);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___url0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral03D5DA6E4D76C515B2D2D891E3D49E2CD56AC621, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::RemoveCookie(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveCookie_m494FA76248EC3AAD25CC5E5732CB8046FC395BF1 (String_t* ___url0, String_t* ___key1, bool ___skipEncoding2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0537E826CEC4233BE28552114535F51A3D777943);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("removeCookie", url, key);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___url0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___key1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral0537E826CEC4233BE28552114535F51A3D777943, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::ClearHttpAuthUsernamePassword(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ClearHttpAuthUsernamePassword_mD14BDF155EE31E42B704B88AD743ADBC4224A589 (String_t* ___host0, String_t* ___realm1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B427C9375E8A39E06270E0F15A74777D8215AD9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("clearHttpAuthUsernamePassword", host, realm);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___host0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___realm1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral1B427C9375E8A39E06270E0F15A74777D8215AD9, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetBackgroundColor(System.String,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetBackgroundColor_mD7892432297CB0BA50CFD6C752EF2C7B22D42A0F (String_t* ___name0, float ___r1, float ___g2, float ___b3, float ___a4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1073EDD32EA0B0FD3BCAF9C644DE00B100741265);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setBackgroundColor", name, r, g, b, a);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		float L_5 = ___r1;
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_4;
		float L_9 = ___g2;
		float L_10 = L_9;
		RuntimeObject * L_11 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_8;
		float L_13 = ___b3;
		float L_14 = L_13;
		RuntimeObject * L_15 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_12;
		float L_17 = ___a4;
		float L_18 = L_17;
		RuntimeObject * L_19 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_19);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral1073EDD32EA0B0FD3BCAF9C644DE00B100741265, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetWebViewAlpha(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetWebViewAlpha_m2FD8A56031913E27FD0478CC890D6ABF56C9DD5D (String_t* ___name0, float ___alpha1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11F8F3AD91743D3DBFBCCB6118C2EE0BA9D432D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setWebViewAlpha", name, alpha);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		float L_5 = ___alpha1;
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral11F8F3AD91743D3DBFBCCB6118C2EE0BA9D432D6, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single UniWebViewInterface::GetWebViewAlpha(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_GetWebViewAlpha_m3F0C9265270A3171F4C74B85D88AB23258A64345 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1FB614EE7BD90855AEEE4C310F647B8AEBD86F5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8A3E57D6C0E3D6E5792B76D2BE42E5545BD556A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// return plugin.CallStatic<float>("getWebViewAlpha", name);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		float L_4;
		L_4 = AndroidJavaObject_CallStatic_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1FB614EE7BD90855AEEE4C310F647B8AEBD86F5B(L_0, _stringLiteralB8A3E57D6C0E3D6E5792B76D2BE42E5545BD556A, L_2, /*hidden argument*/AndroidJavaObject_CallStatic_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1FB614EE7BD90855AEEE4C310F647B8AEBD86F5B_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void UniWebViewInterface::SetShowSpinnerWhileLoading(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetShowSpinnerWhileLoading_m64ACB6D8B878A1D26C165167E069852E6D8D0496 (String_t* ___name0, bool ___show1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46235E42561BC75195410C8FD01B7026927BA27E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setShowSpinnerWhileLoading", name, show);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		bool L_5 = ___show1;
		bool L_6 = L_5;
		RuntimeObject * L_7 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral46235E42561BC75195410C8FD01B7026927BA27E, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetSpinnerText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetSpinnerText_m989E0B03B5F8337C1BD7F076F71695CB59A75FD4 (String_t* ___name0, String_t* ___text1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8B901F66CF2B99391DC4E891559A18A028D71D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setSpinnerText", name, text);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___text1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralC8B901F66CF2B99391DC4E891559A18A028D71D4, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UniWebViewInterface::CanGoBack(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_CanGoBack_mE9B320BA8FC8A2B3F33A64A61BE8B33CB41CA2AA (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral710CA85CF56FB6B6924F6875619A9086DFD91F22);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// return plugin.CallStatic<bool>("canGoBack", name);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		bool L_4;
		L_4 = AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF(L_0, _stringLiteral710CA85CF56FB6B6924F6875619A9086DFD91F22, L_2, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF_RuntimeMethod_var);
		return L_4;
	}
}
// System.Boolean UniWebViewInterface::CanGoForward(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_CanGoForward_m8714EECA9004CD362F167336812B5C7B9793A36E (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F2E2E820A878C46D32D963317798EEE3BE34403);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// return plugin.CallStatic<bool>("canGoForward", name);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		bool L_4;
		L_4 = AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF(L_0, _stringLiteral3F2E2E820A878C46D32D963317798EEE3BE34403, L_2, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void UniWebViewInterface::GoBack(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_GoBack_m865844D0CFC589608EBE2C94167371B0178B6CBE (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB036D1A4504D6BE029CD2101E1DC9042111887D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("goBack", name);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralB036D1A4504D6BE029CD2101E1DC9042111887D4, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::GoForward(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_GoForward_m34001F0D8B9CA968CB4F59388FC5CE6056043F0A (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A6EB1DA1F4B3316972BF1771C95A00AC23DD8A3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("goForward", name);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral4A6EB1DA1F4B3316972BF1771C95A00AC23DD8A3, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetOpenLinksInExternalBrowser(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetOpenLinksInExternalBrowser_m14EAEF286298221E80E845BC2E8A24618A406E4C (String_t* ___name0, bool ___flag1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D138BB75B176FF5113F46C50CFC104D0B972CC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setOpenLinksInExternalBrowser", name, flag);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		bool L_5 = ___flag1;
		bool L_6 = L_5;
		RuntimeObject * L_7 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral2D138BB75B176FF5113F46C50CFC104D0B972CC7, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetHorizontalScrollBarEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetHorizontalScrollBarEnabled_m69DA8E83949EA69F09F1FEEA8839F9DAD4CAD331 (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F0E0B1C4FE73607CBBE0A93116CEA4E3B3C5E98);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setHorizontalScrollBarEnabled", name, enabled);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		bool L_5 = ___enabled1;
		bool L_6 = L_5;
		RuntimeObject * L_7 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral9F0E0B1C4FE73607CBBE0A93116CEA4E3B3C5E98, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetVerticalScrollBarEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetVerticalScrollBarEnabled_m36B6C595438FD45B7B48EFDD986A3D9B324C1877 (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC6EBD9A055FC3B845472AB3361F0A61570C0D41);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setVerticalScrollBarEnabled", name, enabled);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		bool L_5 = ___enabled1;
		bool L_6 = L_5;
		RuntimeObject * L_7 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralBC6EBD9A055FC3B845472AB3361F0A61570C0D41, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetBouncesEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetBouncesEnabled_m870D52004480D1D338E6E9F4E909B55651DCFFAB (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A86A622B347650DFF5FD90343DE9EAE977A4022);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setBouncesEnabled", name, enabled);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		bool L_5 = ___enabled1;
		bool L_6 = L_5;
		RuntimeObject * L_7 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral9A86A622B347650DFF5FD90343DE9EAE977A4022, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetZoomEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetZoomEnabled_mB567F875230E32991A50974B3F85D958E77432E0 (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral521BA50AE923A8AA765D9A160E356FC0058FADA4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setZoomEnabled", name, enabled);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		bool L_5 = ___enabled1;
		bool L_6 = L_5;
		RuntimeObject * L_7 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral521BA50AE923A8AA765D9A160E356FC0058FADA4, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetUseWideViewPort(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetUseWideViewPort_m4220599F4A8710265E67C6E4497D8E84DF460FA1 (String_t* ___name0, bool ___use1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D79C985DF4F73247A0EA6C97EA17838838770DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setUseWideViewPort", name, use);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		bool L_5 = ___use1;
		bool L_6 = L_5;
		RuntimeObject * L_7 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral9D79C985DF4F73247A0EA6C97EA17838838770DF, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetLoadWithOverviewMode(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetLoadWithOverviewMode_m5A6C144DE328D7C6B80E68D5DC73865066A41A3F (String_t* ___name0, bool ___overview1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral845163A85B4BECE047C59BD2EB47E4514ABB7EB2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setLoadWithOverviewMode", name, overview);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		bool L_5 = ___overview1;
		bool L_6 = L_5;
		RuntimeObject * L_7 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral845163A85B4BECE047C59BD2EB47E4514ABB7EB2, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetImmersiveModeEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetImmersiveModeEnabled_m72945036C3F105155C1BC1C76401550985B6372D (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1FD7533D578834C52F955AF663C262434D950DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setImmersiveModeEnabled", name, enabled);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		bool L_5 = ___enabled1;
		bool L_6 = L_5;
		RuntimeObject * L_7 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralE1FD7533D578834C52F955AF663C262434D950DE, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetUserInteractionEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetUserInteractionEnabled_m9DD938B6029F28C58F0D8BEB32BD48AE9761F619 (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF21A93EC208F504071591F17D29A4DFF8618C40D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setUserInteractionEnabled", name, enabled);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		bool L_5 = ___enabled1;
		bool L_6 = L_5;
		RuntimeObject * L_7 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralF21A93EC208F504071591F17D29A4DFF8618C40D, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetWebContentsDebuggingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetWebContentsDebuggingEnabled_mE7362540B11E5A7855875FCF66B5B1C4D94E3ABB (bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8228F26A547DD52F870220D24F4F243E35286F25);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setWebContentsDebuggingEnabled", enabled);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		bool L_3 = ___enabled0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral8228F26A547DD52F870220D24F4F243E35286F25, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetAllowHTTPAuthPopUpWindow(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowHTTPAuthPopUpWindow_mBA82256009CB9EE7A2D88EA3D60E4A26A36444F2 (String_t* ___name0, bool ___flag1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA589491DB924192C93098407D4F8B9B7EEF76D2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setAllowHTTPAuthPopUpWindow", name, flag);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		bool L_5 = ___flag1;
		bool L_6 = L_5;
		RuntimeObject * L_7 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralBA589491DB924192C93098407D4F8B9B7EEF76D2, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::Print(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Print_m7EDE4F940A2A5A15F85741CC00A998042938A21C (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B0363E97F5C708A44E3F0E479DA7A612B280F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("print", name);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralB4B0363E97F5C708A44E3F0E479DA7A612B280F4, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::CaptureSnapshot(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_CaptureSnapshot_mEBD6AEA2FEADBD455A353BD21DFFBBA89CDEE4C9 (String_t* ___name0, String_t* ___filename1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EE85B87204B902A0E1E3E81167C944BE6A0C184);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("captureSnapshot", name, filename);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___filename1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral4EE85B87204B902A0E1E3E81167C944BE6A0C184, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::ScrollTo(System.String,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ScrollTo_m01D85E8C053299774A0AB7C60F5A0C29FB0D3E08 (String_t* ___name0, int32_t ___x1, int32_t ___y2, bool ___animated3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FA865AA2F7454A02C1711C57C6D21DB3891BF95);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("scrollTo", name, x, y, animated);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		int32_t L_5 = ___x1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_4;
		int32_t L_9 = ___y2;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_8;
		bool L_13 = ___animated3;
		bool L_14 = L_13;
		RuntimeObject * L_15 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral6FA865AA2F7454A02C1711C57C6D21DB3891BF95, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetCalloutEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetCalloutEnabled_mBD2F744FA45335697BF7EEEBA779C4420444604E (String_t* ___name0, bool ___flag1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2FAA96F1CF4242C66CF32B08B785D1BC27649DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setCalloutEnabled", name, flag);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		bool L_5 = ___flag1;
		bool L_6 = L_5;
		RuntimeObject * L_7 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralC2FAA96F1CF4242C66CF32B08B785D1BC27649DD, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetSupportMultipleWindows(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetSupportMultipleWindows_m1DB49B0DB842BE6B5FDEB8BDD54352ACD04FEDF6 (String_t* ___name0, bool ___flag1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996FFF30D4EC57E5E421FFBFD6250F0BC3FFE8D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setSupportMultipleWindows", name, flag);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		bool L_5 = ___flag1;
		bool L_6 = L_5;
		RuntimeObject * L_7 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral996FFF30D4EC57E5E421FFBFD6250F0BC3FFE8D8, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetDefaultFontSize(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetDefaultFontSize_m92653953667F78DD34F3587C380133CBB35C5C5E (String_t* ___name0, int32_t ___size1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44BBEAE09912D601CF961A5326005AF34AA2C3A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setDefaultFontSize", name, size);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		int32_t L_5 = ___size1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral44BBEAE09912D601CF961A5326005AF34AA2C3A4, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetTextZoom(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetTextZoom_m4636D0279A078AB35345810F9AFCFABF237B835E (String_t* ___name0, int32_t ___textZoom1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A1F293CBA4EB0AA9AD617D6BB2A7C2D8CEECF2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setTextZoom", name, textZoom);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		int32_t L_5 = ___textZoom1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral47A1F293CBA4EB0AA9AD617D6BB2A7C2D8CEECF2, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single UniWebViewInterface::NativeScreenWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_NativeScreenWidth_m89DCA1E22C2F022EB4834379400AA25FAA844A97 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1FB614EE7BD90855AEEE4C310F647B8AEBD86F5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95A5D8F8216FEF6AB6DA124B8556B99686008921);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// return plugin.CallStatic<float>("screenWidth");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		NullCheck(L_0);
		float L_2;
		L_2 = AndroidJavaObject_CallStatic_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1FB614EE7BD90855AEEE4C310F647B8AEBD86F5B(L_0, _stringLiteral95A5D8F8216FEF6AB6DA124B8556B99686008921, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1FB614EE7BD90855AEEE4C310F647B8AEBD86F5B_RuntimeMethod_var);
		return L_2;
	}
}
// System.Single UniWebViewInterface::NativeScreenHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_NativeScreenHeight_m23A5BBA09FB984630324E5277D1325D9E87C39DB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1FB614EE7BD90855AEEE4C310F647B8AEBD86F5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E244106FAAF80CBD208A47B17E360C4FAA789);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// return plugin.CallStatic<float>("screenHeight");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		NullCheck(L_0);
		float L_2;
		L_2 = AndroidJavaObject_CallStatic_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1FB614EE7BD90855AEEE4C310F647B8AEBD86F5B(L_0, _stringLiteral848E244106FAAF80CBD208A47B17E360C4FAA789, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m1FB614EE7BD90855AEEE4C310F647B8AEBD86F5B_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UniWebViewInterface::SetDownloadEventForContextMenuEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetDownloadEventForContextMenuEnabled_m51340BF487B141158FA8766E005746F49C5235EE (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C56C4E22347BBB0FE3C2050A1C6964821D2E096);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("setDownloadEventForContextMenuEnabled", name, enabled);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		bool L_5 = ___enabled1;
		bool L_6 = L_5;
		RuntimeObject * L_7 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral8C56C4E22347BBB0FE3C2050A1C6964821D2E096, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UniWebViewInterface::IsSafeBrowsingSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_IsSafeBrowsingSupported_m37B9A883980CF88BAC8364A1A9BD6A05ED7D4C38 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1D7DF7FCDFC442F5402FE6C9E7DA92ACC2E6A4A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// return plugin.CallStatic<bool>("isSafeBrowsingSupported");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF(L_0, _stringLiteralA1D7DF7FCDFC442F5402FE6C9E7DA92ACC2E6A4A, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m4AA284A03F0D5D003114D60C705B8A54274C74DF_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UniWebViewInterface::SafeBrowsingInit(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingInit_mA977AE101B6F704B4A865ADA1FED7CDC8E8608BD (String_t* ___name0, String_t* ___url1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF03D4C9423969F49E57441A7021C07D475E7DEED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("safeBrowsingInit", name, url);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		String_t* L_5 = ___url1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralF03D4C9423969F49E57441A7021C07D475E7DEED, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SafeBrowsingSetToolbarColor(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingSetToolbarColor_mBDBABEC75D5644402BEDA2729E8070B6D80C19A3 (String_t* ___name0, float ___r1, float ___g2, float ___b3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8204672E3B98F5C38D20D9B5A097E06317E9CCB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("safeBrowsingSetToolbarColor", name, r, g, b);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		float L_5 = ___r1;
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_4;
		float L_9 = ___g2;
		float L_10 = L_9;
		RuntimeObject * L_11 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_8;
		float L_13 = ___b3;
		float L_14 = L_13;
		RuntimeObject * L_15 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralB8204672E3B98F5C38D20D9B5A097E06317E9CCB, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SafeBrowsingShow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingShow_m39CDEC608E514DB9439FECFCE1EFE54229B2D66C (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84F1DBEFF9F154BEB8FDC3E83BF705C0C602A763);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16(/*hidden argument*/NULL);
		// plugin.CallStatic("safeBrowsingShow", name);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_plugin_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral84F1DBEFF9F154BEB8FDC3E83BF705C0C602A763, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::CheckPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!correctPlatform) {
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		bool L_0 = ((UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var))->get_correctPlatform_1();
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// throw new System.InvalidOperationException("Method can only be performed on Android.");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDEEA4904CA12EBD798D6DE754E4F996AE77368DC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniWebViewInterface_CheckPlatform_m20433280F3D3982AAF97061CAB9E9FFD40EADB16_RuntimeMethod_var)));
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void UniWebViewInterface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface__ctor_m9DF5423E090B8B89F5A972818C4725B6B40FA5CD (UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// UniWebViewLogger/Level UniWebViewLogger::get_LogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UniWebViewLogger_get_LogLevel_mA5BBF466DBC81D16BEB0F02A873953BC6CEF0E1E (UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * __this, const RuntimeMethod* method)
{
	{
		// get { return level; }
		int32_t L_0 = __this->get_level_1();
		return L_0;
	}
}
// System.Void UniWebViewLogger::set_LogLevel(UniWebViewLogger/Level)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_set_LogLevel_m617A69B7C237BF9B90C047E784DEC965F9BD1F82 (UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level_tD002D406F2D92F96FA68FF18FB57DC381F3EA5C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54293F2D54AE4537D84592735A6CFC7A384FEBA1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Log(Level.Off, "Setting UniWebView logger level to: " + value);
		RuntimeObject * L_0 = Box(Level_tD002D406F2D92F96FA68FF18FB57DC381F3EA5C6_il2cpp_TypeInfo_var, (&___value0));
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___value0 = *(int32_t*)UnBox(L_0);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral54293F2D54AE4537D84592735A6CFC7A384FEBA1, L_1, /*hidden argument*/NULL);
		UniWebViewLogger_Log_mBB70AA0855F067B604273FA2EBA03A7CF40D50F2(__this, ((int32_t)99), L_2, /*hidden argument*/NULL);
		// level = value;
		int32_t L_3 = ___value0;
		__this->set_level_1(L_3);
		// UniWebViewInterface.SetLogLevel((int)value);
		int32_t L_4 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetLogLevel_m0642B197237E7F0ECE0555FB3D3623833213A6FD(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewLogger::.ctor(UniWebViewLogger/Level)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger__ctor_mAC4A701D75FB7E12C0BE89B6CBC8B11F76C4A7C9 (UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * __this, int32_t ___level0, const RuntimeMethod* method)
{
	{
		// private UniWebViewLogger(Level level) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.level = level;
		int32_t L_0 = ___level0;
		__this->set_level_1(L_0);
		// }
		return;
	}
}
// UniWebViewLogger UniWebViewLogger::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null) {
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_0 = ((UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42_il2cpp_TypeInfo_var))->get_instance_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// instance = new UniWebViewLogger(Level.Critical);
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_1 = (UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 *)il2cpp_codegen_object_new(UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42_il2cpp_TypeInfo_var);
		UniWebViewLogger__ctor_mAC4A701D75FB7E12C0BE89B6CBC8B11F76C4A7C9(L_1, ((int32_t)80), /*hidden argument*/NULL);
		((UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42_il2cpp_TypeInfo_var))->set_instance_0(L_1);
	}

IL_0013:
	{
		// return instance;
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_2 = ((UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42_il2cpp_TypeInfo_var))->get_instance_0();
		return L_2;
	}
}
// System.Void UniWebViewLogger::Verbose(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Verbose_mFB8101EC0561801F7B59E9DC5B2E49727BE3E39D (UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// public void Verbose(string message) { Log(Level.Verbose, message); }
		String_t* L_0 = ___message0;
		UniWebViewLogger_Log_mBB70AA0855F067B604273FA2EBA03A7CF40D50F2(__this, 0, L_0, /*hidden argument*/NULL);
		// public void Verbose(string message) { Log(Level.Verbose, message); }
		return;
	}
}
// System.Void UniWebViewLogger::Debug(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Debug_m5B231F3715D584026C3C56E58C9F4204FDC13033 (UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// public void Debug(string message) { Log(Level.Debug, message); }
		String_t* L_0 = ___message0;
		UniWebViewLogger_Log_mBB70AA0855F067B604273FA2EBA03A7CF40D50F2(__this, ((int32_t)10), L_0, /*hidden argument*/NULL);
		// public void Debug(string message) { Log(Level.Debug, message); }
		return;
	}
}
// System.Void UniWebViewLogger::Info(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Info_m40005F715E0F43924AFA4AAB3AAB8FCB6BC0F385 (UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// public void Info(string message) { Log(Level.Info, message); }
		String_t* L_0 = ___message0;
		UniWebViewLogger_Log_mBB70AA0855F067B604273FA2EBA03A7CF40D50F2(__this, ((int32_t)20), L_0, /*hidden argument*/NULL);
		// public void Info(string message) { Log(Level.Info, message); }
		return;
	}
}
// System.Void UniWebViewLogger::Critical(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Critical_m9E5DC408B6A2006BD4A3DCDA9349DCB55E44B096 (UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// public void Critical(string message) { Log(Level.Critical, message); }
		String_t* L_0 = ___message0;
		UniWebViewLogger_Log_mBB70AA0855F067B604273FA2EBA03A7CF40D50F2(__this, ((int32_t)80), L_0, /*hidden argument*/NULL);
		// public void Critical(string message) { Log(Level.Critical, message); }
		return;
	}
}
// System.Void UniWebViewLogger::Log(UniWebViewLogger/Level,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Log_mBB70AA0855F067B604273FA2EBA03A7CF40D50F2 (UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * __this, int32_t ___level0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8D6B5E5D1A349370529FE8E7793F6F40FEB98F6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (level >= this.LogLevel) {
		int32_t L_0 = ___level0;
		int32_t L_1;
		L_1 = UniWebViewLogger_get_LogLevel_mA5BBF466DBC81D16BEB0F02A873953BC6CEF0E1E_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0027;
		}
	}
	{
		// var logMessage = "<UniWebView> " + message;
		String_t* L_2 = ___message1;
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralF8D6B5E5D1A349370529FE8E7793F6F40FEB98F6, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (level == Level.Critical) {
		int32_t L_4 = ___level0;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)80)))))
		{
			goto IL_0021;
		}
	}
	{
		// UnityEngine.Debug.LogError(logMessage);
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_5, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0021:
	{
		// UnityEngine.Debug.Log(logMessage);
		String_t* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_6, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
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
// Conversion methods for marshalling of: UniWebViewMessage
IL2CPP_EXTERN_C void UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_marshal_pinvoke(const UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC& unmarshaled, UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CArgsU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Args>k__BackingField' of type 'UniWebViewMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CArgsU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_marshal_pinvoke_back(const UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_marshaled_pinvoke& marshaled, UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC& unmarshaled)
{
	Exception_t* ___U3CArgsU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Args>k__BackingField' of type 'UniWebViewMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CArgsU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UniWebViewMessage
IL2CPP_EXTERN_C void UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_marshal_pinvoke_cleanup(UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UniWebViewMessage
IL2CPP_EXTERN_C void UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_marshal_com(const UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC& unmarshaled, UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_marshaled_com& marshaled)
{
	Exception_t* ___U3CArgsU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Args>k__BackingField' of type 'UniWebViewMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CArgsU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_marshal_com_back(const UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_marshaled_com& marshaled, UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC& unmarshaled)
{
	Exception_t* ___U3CArgsU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Args>k__BackingField' of type 'UniWebViewMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CArgsU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UniWebViewMessage
IL2CPP_EXTERN_C void UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_marshal_com_cleanup(UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_marshaled_com& marshaled)
{
}
// System.String UniWebViewMessage::get_RawMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_RawMessage_m19FAD7EFE68623EA8F3F707A8A89F1C1DF70E09D (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, const RuntimeMethod* method)
{
	{
		// public string RawMessage {get; private set;}
		String_t* L_0 = __this->get_U3CRawMessageU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* UniWebViewMessage_get_RawMessage_m19FAD7EFE68623EA8F3F707A8A89F1C1DF70E09D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = UniWebViewMessage_get_RawMessage_m19FAD7EFE68623EA8F3F707A8A89F1C1DF70E09D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UniWebViewMessage::set_RawMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewMessage_set_RawMessage_mE16E8B64FF787A83CFDD3D8B87C1A37D79F469BE (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string RawMessage {get; private set;}
		String_t* L_0 = ___value0;
		__this->set_U3CRawMessageU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void UniWebViewMessage_set_RawMessage_mE16E8B64FF787A83CFDD3D8B87C1A37D79F469BE_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC *>(__this + _offset);
	UniWebViewMessage_set_RawMessage_mE16E8B64FF787A83CFDD3D8B87C1A37D79F469BE_inline(_thisAdjusted, ___value0, method);
}
// System.String UniWebViewMessage::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_Scheme_mEE66730B22BBC5667A649200EE7252B91935C6DA (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, const RuntimeMethod* method)
{
	{
		// public string Scheme {get; private set;}
		String_t* L_0 = __this->get_U3CSchemeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* UniWebViewMessage_get_Scheme_mEE66730B22BBC5667A649200EE7252B91935C6DA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = UniWebViewMessage_get_Scheme_mEE66730B22BBC5667A649200EE7252B91935C6DA_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UniWebViewMessage::set_Scheme(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Scheme_m492CC65C3EEA256F70D776658D1008328932A2D6 (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Scheme {get; private set;}
		String_t* L_0 = ___value0;
		__this->set_U3CSchemeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void UniWebViewMessage_set_Scheme_m492CC65C3EEA256F70D776658D1008328932A2D6_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC *>(__this + _offset);
	UniWebViewMessage_set_Scheme_m492CC65C3EEA256F70D776658D1008328932A2D6_inline(_thisAdjusted, ___value0, method);
}
// System.String UniWebViewMessage::get_Path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_Path_mB5F1D6C5958D5114D3ED7294392E2444D58ACA32 (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, const RuntimeMethod* method)
{
	{
		// public string Path {get; private set;}
		String_t* L_0 = __this->get_U3CPathU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* UniWebViewMessage_get_Path_mB5F1D6C5958D5114D3ED7294392E2444D58ACA32_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = UniWebViewMessage_get_Path_mB5F1D6C5958D5114D3ED7294392E2444D58ACA32_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UniWebViewMessage::set_Path(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Path_m7B32AA816651D1DC8B7F7352CC75A144738154E1 (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Path {get; private set;}
		String_t* L_0 = ___value0;
		__this->set_U3CPathU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void UniWebViewMessage_set_Path_m7B32AA816651D1DC8B7F7352CC75A144738154E1_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC *>(__this + _offset);
	UniWebViewMessage_set_Path_m7B32AA816651D1DC8B7F7352CC75A144738154E1_inline(_thisAdjusted, ___value0, method);
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UniWebViewMessage::get_Args()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * UniWebViewMessage_get_Args_mABDBE768100A9408C644B7478411B04FD7BFD8AC (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, string> Args{get; private set;}
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_U3CArgsU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * UniWebViewMessage_get_Args_mABDBE768100A9408C644B7478411B04FD7BFD8AC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC *>(__this + _offset);
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * _returnValue;
	_returnValue = UniWebViewMessage_get_Args_mABDBE768100A9408C644B7478411B04FD7BFD8AC_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UniWebViewMessage::set_Args(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Args_mA03F442CD6BE845D3AB05DEB4BB8CACC6E67B9F9 (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___value0, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, string> Args{get; private set;}
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = ___value0;
		__this->set_U3CArgsU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void UniWebViewMessage_set_Args_mA03F442CD6BE845D3AB05DEB4BB8CACC6E67B9F9_AdjustorThunk (RuntimeObject * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___value0, const RuntimeMethod* method)
{
	UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC *>(__this + _offset);
	UniWebViewMessage_set_Args_mA03F442CD6BE845D3AB05DEB4BB8CACC6E67B9F9_inline(_thisAdjusted, ___value0, method);
}
// System.Void UniWebViewMessage::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewMessage__ctor_mE2E221E85B18399A604EF466D9E9A9228E309170 (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, String_t* ___rawMessage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m608577A5AF450760A657AA9EE6A096E5A59DA1B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC446DE0A4ADE6CCB3DEBE59BA4BBF4F64040305B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1ACD9DE86340A7CA50E97B170F973A5A09160DCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral061A8010D4205A1D21073716210E2F8428BD5E14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B49369FB3D81533ACCE4CC50C7A93DE8EE95FBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral518BD63F7EC12F584B7692F39A21657A70FB44CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64F055D7E61FBC80ABEE468986D2A24466198A9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C18CF1B37B49917E6D8058AC143814D191A0E21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8958CD955E48DB95A49B82386149ED32A9DD59B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_3 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_4 = NULL;
	int32_t V_5 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		// public UniWebViewMessage(string rawMessage): this() {
		il2cpp_codegen_initobj(__this, sizeof(UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC ));
		// UniWebViewLogger.Instance.Debug("Try to parse raw message: " + rawMessage);
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_0;
		L_0 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		String_t* L_1 = ___rawMessage0;
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral518BD63F7EC12F584B7692F39A21657A70FB44CA, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Debug_m5B231F3715D584026C3C56E58C9F4204FDC13033(L_0, L_2, /*hidden argument*/NULL);
		// this.RawMessage = rawMessage;
		String_t* L_3 = ___rawMessage0;
		UniWebViewMessage_set_RawMessage_mE16E8B64FF787A83CFDD3D8B87C1A37D79F469BE_inline((UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC *)__this, L_3, /*hidden argument*/NULL);
		// string[] schemeSplit = rawMessage.Split(new string[] {"://"}, System.StringSplitOptions.None);
		String_t* L_4 = ___rawMessage0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		NullCheck(L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7;
		L_7 = String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD(L_4, L_6, 0, /*hidden argument*/NULL);
		V_0 = L_7;
		// if (schemeSplit.Length >= 2) {
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))) < ((int32_t)2)))
		{
			goto IL_01d2;
		}
	}
	{
		// this.Scheme = schemeSplit[0];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 0;
		String_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		UniWebViewMessage_set_Scheme_m492CC65C3EEA256F70D776658D1008328932A2D6_inline((UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC *)__this, L_11, /*hidden argument*/NULL);
		// UniWebViewLogger.Instance.Debug("Get scheme: " + this.Scheme);
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_12;
		L_12 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		String_t* L_13;
		L_13 = UniWebViewMessage_get_Scheme_mEE66730B22BBC5667A649200EE7252B91935C6DA_inline((UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC *)__this, /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral64F055D7E61FBC80ABEE468986D2A24466198A9D, L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		UniWebViewLogger_Debug_m5B231F3715D584026C3C56E58C9F4204FDC13033(L_12, L_14, /*hidden argument*/NULL);
		// string pathAndArgsString = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// int index = 1;
		V_2 = 1;
		goto IL_007d;
	}

IL_006f:
	{
		// pathAndArgsString = string.Concat(pathAndArgsString, schemeSplit[index]);
		String_t* L_15 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = V_0;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		String_t* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		String_t* L_20;
		L_20 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_15, L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		// index++;
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_007d:
	{
		// while (index < schemeSplit.Length) {
		int32_t L_22 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = V_0;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))))
		{
			goto IL_006f;
		}
	}
	{
		// UniWebViewLogger.Instance.Verbose("Build path and args string: " + pathAndArgsString);
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_24;
		L_24 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		String_t* L_25 = V_1;
		String_t* L_26;
		L_26 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral061A8010D4205A1D21073716210E2F8428BD5E14, L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		UniWebViewLogger_Verbose_mFB8101EC0561801F7B59E9DC5B2E49727BE3E39D(L_24, L_26, /*hidden argument*/NULL);
		// string[] split = pathAndArgsString.Split("?"[0]);
		String_t* L_27 = V_1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_28 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_29 = L_28;
		NullCheck(_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		Il2CppChar L_30;
		L_30 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900, 0, /*hidden argument*/NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)L_30);
		NullCheck(L_27);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31;
		L_31 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_27, L_29, /*hidden argument*/NULL);
		V_3 = L_31;
		// this.Path = Net.UnEscapeURL(split[0].TrimEnd('/'));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = V_3;
		NullCheck(L_32);
		int32_t L_33 = 0;
		String_t* L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_35 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_36 = L_35;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)47));
		NullCheck(L_34);
		String_t* L_37;
		L_37 = String_TrimEnd_mA98B5B9C45CCAB016F32F1C8BBE29A215B9D277E(L_34, L_36, /*hidden argument*/NULL);
		String_t* L_38;
		L_38 = UnityWebRequest_UnEscapeURL_mE7BC5219759DCFBFD1327FDBFF633F2945E1C76C(L_37, /*hidden argument*/NULL);
		UniWebViewMessage_set_Path_m7B32AA816651D1DC8B7F7352CC75A144738154E1_inline((UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC *)__this, L_38, /*hidden argument*/NULL);
		// this.Args = new Dictionary<string, string>();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_39 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_39, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		UniWebViewMessage_set_Args_mA03F442CD6BE845D3AB05DEB4BB8CACC6E67B9F9_inline((UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC *)__this, L_39, /*hidden argument*/NULL);
		// if (split.Length > 1) {
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = V_3;
		NullCheck(L_40);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_01e7;
		}
	}
	{
		// foreach (string pair in split[1].Split("&"[0])) {
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41 = V_3;
		NullCheck(L_41);
		int32_t L_42 = 1;
		String_t* L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_44 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_45 = L_44;
		NullCheck(_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		Il2CppChar L_46;
		L_46 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E, 0, /*hidden argument*/NULL);
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)L_46);
		NullCheck(L_43);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_47;
		L_47 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_43, L_45, /*hidden argument*/NULL);
		V_4 = L_47;
		V_5 = 0;
		goto IL_01c6;
	}

IL_010b:
	{
		// foreach (string pair in split[1].Split("&"[0])) {
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_48 = V_4;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		String_t* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		// string[] elems = pair.Split("="[0]);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_52 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_53 = L_52;
		NullCheck(_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		Il2CppChar L_54;
		L_54 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E, 0, /*hidden argument*/NULL);
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)L_54);
		NullCheck(L_51);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_55;
		L_55 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_51, L_53, /*hidden argument*/NULL);
		V_6 = L_55;
		// if (elems.Length > 1) {
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_56 = V_6;
		NullCheck(L_56);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_01c0;
		}
	}
	{
		// var key = Net.UnEscapeURL(elems[0]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_57 = V_6;
		NullCheck(L_57);
		int32_t L_58 = 0;
		String_t* L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		String_t* L_60;
		L_60 = UnityWebRequest_UnEscapeURL_mE7BC5219759DCFBFD1327FDBFF633F2945E1C76C(L_59, /*hidden argument*/NULL);
		V_7 = L_60;
		// if (Args.ContainsKey(key)) {
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_61;
		L_61 = UniWebViewMessage_get_Args_mABDBE768100A9408C644B7478411B04FD7BFD8AC_inline((UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC *)__this, /*hidden argument*/NULL);
		String_t* L_62 = V_7;
		NullCheck(L_61);
		bool L_63;
		L_63 = Dictionary_2_ContainsKey_m608577A5AF450760A657AA9EE6A096E5A59DA1B8(L_61, L_62, /*hidden argument*/Dictionary_2_ContainsKey_m608577A5AF450760A657AA9EE6A096E5A59DA1B8_RuntimeMethod_var);
		if (!L_63)
		{
			goto IL_0182;
		}
	}
	{
		// var existingValue = Args[key];
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_64;
		L_64 = UniWebViewMessage_get_Args_mABDBE768100A9408C644B7478411B04FD7BFD8AC_inline((UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC *)__this, /*hidden argument*/NULL);
		String_t* L_65 = V_7;
		NullCheck(L_64);
		String_t* L_66;
		L_66 = Dictionary_2_get_Item_mC446DE0A4ADE6CCB3DEBE59BA4BBF4F64040305B(L_64, L_65, /*hidden argument*/Dictionary_2_get_Item_mC446DE0A4ADE6CCB3DEBE59BA4BBF4F64040305B_RuntimeMethod_var);
		V_8 = L_66;
		// Args[key] = existingValue + "," + Net.UnEscapeURL(elems[1]);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_67;
		L_67 = UniWebViewMessage_get_Args_mABDBE768100A9408C644B7478411B04FD7BFD8AC_inline((UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC *)__this, /*hidden argument*/NULL);
		String_t* L_68 = V_7;
		String_t* L_69 = V_8;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_70 = V_6;
		NullCheck(L_70);
		int32_t L_71 = 1;
		String_t* L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		String_t* L_73;
		L_73 = UnityWebRequest_UnEscapeURL_mE7BC5219759DCFBFD1327FDBFF633F2945E1C76C(L_72, /*hidden argument*/NULL);
		String_t* L_74;
		L_74 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_69, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_73, /*hidden argument*/NULL);
		NullCheck(L_67);
		Dictionary_2_set_Item_m1ACD9DE86340A7CA50E97B170F973A5A09160DCE(L_67, L_68, L_74, /*hidden argument*/Dictionary_2_set_Item_m1ACD9DE86340A7CA50E97B170F973A5A09160DCE_RuntimeMethod_var);
		// } else {
		goto IL_0198;
	}

IL_0182:
	{
		// Args[key] = Net.UnEscapeURL(elems[1]);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_75;
		L_75 = UniWebViewMessage_get_Args_mABDBE768100A9408C644B7478411B04FD7BFD8AC_inline((UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC *)__this, /*hidden argument*/NULL);
		String_t* L_76 = V_7;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_77 = V_6;
		NullCheck(L_77);
		int32_t L_78 = 1;
		String_t* L_79 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		String_t* L_80;
		L_80 = UnityWebRequest_UnEscapeURL_mE7BC5219759DCFBFD1327FDBFF633F2945E1C76C(L_79, /*hidden argument*/NULL);
		NullCheck(L_75);
		Dictionary_2_set_Item_m1ACD9DE86340A7CA50E97B170F973A5A09160DCE(L_75, L_76, L_80, /*hidden argument*/Dictionary_2_set_Item_m1ACD9DE86340A7CA50E97B170F973A5A09160DCE_RuntimeMethod_var);
	}

IL_0198:
	{
		// UniWebViewLogger.Instance.Debug("Get arg, key: " + key + " value: " + Args[key]);
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_81;
		L_81 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		String_t* L_82 = V_7;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_83;
		L_83 = UniWebViewMessage_get_Args_mABDBE768100A9408C644B7478411B04FD7BFD8AC_inline((UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC *)__this, /*hidden argument*/NULL);
		String_t* L_84 = V_7;
		NullCheck(L_83);
		String_t* L_85;
		L_85 = Dictionary_2_get_Item_mC446DE0A4ADE6CCB3DEBE59BA4BBF4F64040305B(L_83, L_84, /*hidden argument*/Dictionary_2_get_Item_mC446DE0A4ADE6CCB3DEBE59BA4BBF4F64040305B_RuntimeMethod_var);
		String_t* L_86;
		L_86 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral7C18CF1B37B49917E6D8058AC143814D191A0E21, L_82, _stringLiteralC8958CD955E48DB95A49B82386149ED32A9DD59B, L_85, /*hidden argument*/NULL);
		NullCheck(L_81);
		UniWebViewLogger_Debug_m5B231F3715D584026C3C56E58C9F4204FDC13033(L_81, L_86, /*hidden argument*/NULL);
	}

IL_01c0:
	{
		int32_t L_87 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1));
	}

IL_01c6:
	{
		// foreach (string pair in split[1].Split("&"[0])) {
		int32_t L_88 = V_5;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_89 = V_4;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length))))))
		{
			goto IL_010b;
		}
	}
	{
		// } else {
		return;
	}

IL_01d2:
	{
		// UniWebViewLogger.Instance.Critical("Bad url scheme. Can not be parsed to UniWebViewMessage: " + rawMessage);
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_90;
		L_90 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		String_t* L_91 = ___rawMessage0;
		String_t* L_92;
		L_92 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B49369FB3D81533ACCE4CC50C7A93DE8EE95FBB, L_91, /*hidden argument*/NULL);
		NullCheck(L_90);
		UniWebViewLogger_Critical_m9E5DC408B6A2006BD4A3DCDA9349DCB55E44B096(L_90, L_92, /*hidden argument*/NULL);
	}

IL_01e7:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void UniWebViewMessage__ctor_mE2E221E85B18399A604EF466D9E9A9228E309170_AdjustorThunk (RuntimeObject * __this, String_t* ___rawMessage0, const RuntimeMethod* method)
{
	UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC *>(__this + _offset);
	UniWebViewMessage__ctor_mE2E221E85B18399A604EF466D9E9A9228E309170(_thisAdjusted, ___rawMessage0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebViewNativeListener::AddListener(UniWebViewNativeListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_AddListener_m8F02DC28D1F8C723366B266BD9844AA283E231EA (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mD3F3FF95D32D4B473461AB4F39A254F3115C8B42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// listeners.Add(target.Name, target);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_il2cpp_TypeInfo_var);
		Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710 * L_0 = ((UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_il2cpp_TypeInfo_var))->get_listeners_4();
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_1 = ___target0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_1, /*hidden argument*/NULL);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_3 = ___target0;
		NullCheck(L_0);
		Dictionary_2_Add_mD3F3FF95D32D4B473461AB4F39A254F3115C8B42(L_0, L_2, L_3, /*hidden argument*/Dictionary_2_Add_mD3F3FF95D32D4B473461AB4F39A254F3115C8B42_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::RemoveListener(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_RemoveListener_mCB997D0B90F62CDACDACC472381EA9C7FEFDE77D (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m3C0571CBE36334C381F50B70493444AC902950DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// listeners.Remove(name);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_il2cpp_TypeInfo_var);
		Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710 * L_0 = ((UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_il2cpp_TypeInfo_var))->get_listeners_4();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_Remove_m3C0571CBE36334C381F50B70493444AC902950DB(L_0, L_1, /*hidden argument*/Dictionary_2_Remove_m3C0571CBE36334C381F50B70493444AC902950DB_RuntimeMethod_var);
		// }
		return;
	}
}
// UniWebViewNativeListener UniWebViewNativeListener::GetListener(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * UniWebViewNativeListener_GetListener_m6B7D0D84EB4814AAC6EAC1BF4DB70396DA3C25BF (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m10B0146D3E18B57525BE9D67DA2CBE236181DC7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * V_0 = NULL;
	{
		// UniWebViewNativeListener result = null;
		V_0 = (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 *)NULL;
		// if (listeners.TryGetValue(name, out result)) {
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_il2cpp_TypeInfo_var);
		Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710 * L_0 = ((UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_il2cpp_TypeInfo_var))->get_listeners_4();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m10B0146D3E18B57525BE9D67DA2CBE236181DC7F(L_0, L_1, (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m10B0146D3E18B57525BE9D67DA2CBE236181DC7F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return result;
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_3 = V_0;
		return L_3;
	}

IL_0013:
	{
		// return null;
		return (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 *)NULL;
	}
}
// System.String UniWebViewNativeListener::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * __this, const RuntimeMethod* method)
{
	{
		// return gameObject.name;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UniWebViewNativeListener::PageStarted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_PageStarted_mCB79DDC2B9DA2A5318488D8E87C57ED82BC61B67 (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA82D23700F6B0488E16EC900CE9C012B8B8D5EF5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewLogger.Instance.Info("Page Started Event. Url: " + url);
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_0;
		L_0 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		String_t* L_1 = ___url0;
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralA82D23700F6B0488E16EC900CE9C012B8B8D5EF5, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m40005F715E0F43924AFA4AAB3AAB8FCB6BC0F385(L_0, L_2, /*hidden argument*/NULL);
		// webView.InternalOnPageStarted(url);
		UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * L_3 = __this->get_webView_5();
		String_t* L_4 = ___url0;
		NullCheck(L_3);
		UniWebView_InternalOnPageStarted_m6CFF7B32BCCF12446DAE75C70CAD97FF9CA5E399(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::PageFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_PageFinished_m28AFD9F41FE4F6F50D6856F077B5D66777B21821 (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * __this, String_t* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F_m09FF9E0AE4A163AEB7F29A25AD3398B25F76BEF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCC81426293B91F35B234307120A0683A8E8468A);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * V_0 = NULL;
	{
		// UniWebViewLogger.Instance.Info("Page Finished Event. Url: " + result);
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_0;
		L_0 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		String_t* L_1 = ___result0;
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralCCC81426293B91F35B234307120A0683A8E8468A, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m40005F715E0F43924AFA4AAB3AAB8FCB6BC0F385(L_0, L_2, /*hidden argument*/NULL);
		// var payload = JsonUtility.FromJson<UniWebViewNativeResultPayload>(result);
		String_t* L_3 = ___result0;
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F_m09FF9E0AE4A163AEB7F29A25AD3398B25F76BEF5(L_3, /*hidden argument*/JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F_m09FF9E0AE4A163AEB7F29A25AD3398B25F76BEF5_RuntimeMethod_var);
		V_0 = L_4;
		// webView.InternalOnPageFinished(payload);
		UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * L_5 = __this->get_webView_5();
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnPageFinished_mE2974A0B41A120A76FB7A612AE9CF4E2A387A5FD(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::PageErrorReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_PageErrorReceived_m633B9C4E1885CEE292EF5C4C2ABED479E1265C9C (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * __this, String_t* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F_m09FF9E0AE4A163AEB7F29A25AD3398B25F76BEF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6BB3661E0B8AF7D91E3EB869BE4036AE1C39321);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * V_0 = NULL;
	{
		// UniWebViewLogger.Instance.Info("Page Error Received Event. Result: " + result);
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_0;
		L_0 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		String_t* L_1 = ___result0;
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralD6BB3661E0B8AF7D91E3EB869BE4036AE1C39321, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m40005F715E0F43924AFA4AAB3AAB8FCB6BC0F385(L_0, L_2, /*hidden argument*/NULL);
		// var payload = JsonUtility.FromJson<UniWebViewNativeResultPayload>(result);
		String_t* L_3 = ___result0;
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F_m09FF9E0AE4A163AEB7F29A25AD3398B25F76BEF5(L_3, /*hidden argument*/JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F_m09FF9E0AE4A163AEB7F29A25AD3398B25F76BEF5_RuntimeMethod_var);
		V_0 = L_4;
		// webView.InternalOnPageErrorReceived(payload);
		UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * L_5 = __this->get_webView_5();
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnPageErrorReceived_m04D0B828D3B7AA5E19B9DAE47EA73458DC338644(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::PageProgressChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_PageProgressChanged_mDDEBB3EE6938C6DFA504FBD290B943FF2F1DDF11 (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * __this, String_t* ___result0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// if (float.TryParse(result, out progress)) {
		String_t* L_0 = ___result0;
		bool L_1;
		L_1 = Single_TryParse_mC2E0086EAB164A81380FD03BDE671C574F52E373(L_0, (float*)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// webView.InternalOnPageProgressChanged(progress);
		UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * L_2 = __this->get_webView_5();
		float L_3 = V_0;
		NullCheck(L_2);
		UniWebView_InternalOnPageProgressChanged_mC778758DD36AEAF3BF4F70F7BB6402AE6F1B4693(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::ShowTransitionFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_ShowTransitionFinished_mF6F53F1D8DAC13A95C414E282EACEB438183AD4C (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * __this, String_t* ___identifer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral304D400932589AB6698AC3233B263A5EF8C1BE0A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewLogger.Instance.Info("Show Transition Finished Event. Identifier: " + identifer);
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_0;
		L_0 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		String_t* L_1 = ___identifer0;
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral304D400932589AB6698AC3233B263A5EF8C1BE0A, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m40005F715E0F43924AFA4AAB3AAB8FCB6BC0F385(L_0, L_2, /*hidden argument*/NULL);
		// webView.InternalOnShowTransitionFinished(identifer);
		UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * L_3 = __this->get_webView_5();
		String_t* L_4 = ___identifer0;
		NullCheck(L_3);
		UniWebView_InternalOnShowTransitionFinished_m55B96E16E81414073E97D3E8CCD858AE73BF4C7A(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::HideTransitionFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_HideTransitionFinished_m3798FD918D5D6ED2B42745A070415CD74D752EA1 (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * __this, String_t* ___identifer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BDBF19BEE52D0F6D468D06193E3655A9A4DF9F5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewLogger.Instance.Info("Hide Transition Finished Event. Identifier: " + identifer);
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_0;
		L_0 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		String_t* L_1 = ___identifer0;
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3BDBF19BEE52D0F6D468D06193E3655A9A4DF9F5, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m40005F715E0F43924AFA4AAB3AAB8FCB6BC0F385(L_0, L_2, /*hidden argument*/NULL);
		// webView.InternalOnHideTransitionFinished(identifer);
		UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * L_3 = __this->get_webView_5();
		String_t* L_4 = ___identifer0;
		NullCheck(L_3);
		UniWebView_InternalOnHideTransitionFinished_m11B0DD78DB7D4A24408F74EC5EDFCDDCF1342448(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::AnimateToFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_AnimateToFinished_m6051EDEEE3A3A17694BFCA87DC0716ED4E58444C (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * __this, String_t* ___identifer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E2CDB796AC0AE13882E39A6F26B9DF2B27D6A30);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewLogger.Instance.Info("Animate To Finished Event. Identifier: " + identifer);
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_0;
		L_0 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		String_t* L_1 = ___identifer0;
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral7E2CDB796AC0AE13882E39A6F26B9DF2B27D6A30, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m40005F715E0F43924AFA4AAB3AAB8FCB6BC0F385(L_0, L_2, /*hidden argument*/NULL);
		// webView.InternalOnAnimateToFinished(identifer);
		UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * L_3 = __this->get_webView_5();
		String_t* L_4 = ___identifer0;
		NullCheck(L_3);
		UniWebView_InternalOnAnimateToFinished_mDECF0D498F11EE3C2AE468BAA980C4911636562E(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::AddJavaScriptFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_AddJavaScriptFinished_m043C5C33569601AF950B511F798C6B94FD9595C9 (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * __this, String_t* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F_m09FF9E0AE4A163AEB7F29A25AD3398B25F76BEF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0D5E7C91F6A2B19CACBDBA3D85F48CDC24A51E8);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * V_0 = NULL;
	{
		// UniWebViewLogger.Instance.Info("Add JavaScript Finished Event. Result: " + result);
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_0;
		L_0 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		String_t* L_1 = ___result0;
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralB0D5E7C91F6A2B19CACBDBA3D85F48CDC24A51E8, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m40005F715E0F43924AFA4AAB3AAB8FCB6BC0F385(L_0, L_2, /*hidden argument*/NULL);
		// var payload = JsonUtility.FromJson<UniWebViewNativeResultPayload>(result);
		String_t* L_3 = ___result0;
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F_m09FF9E0AE4A163AEB7F29A25AD3398B25F76BEF5(L_3, /*hidden argument*/JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F_m09FF9E0AE4A163AEB7F29A25AD3398B25F76BEF5_RuntimeMethod_var);
		V_0 = L_4;
		// webView.InternalOnAddJavaScriptFinished(payload);
		UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * L_5 = __this->get_webView_5();
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnAddJavaScriptFinished_mD4E1CB64277796B210DD970B38C12FD5C99ED1D9(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::EvalJavaScriptFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_EvalJavaScriptFinished_mA4CA905A01A70D4400C251B170C56EC0C6A3E9FD (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * __this, String_t* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F_m09FF9E0AE4A163AEB7F29A25AD3398B25F76BEF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EBDA72250283979F1A464C506665274601F2A0C);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * V_0 = NULL;
	{
		// UniWebViewLogger.Instance.Info("Eval JavaScript Finished Event. Result: " + result);
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_0;
		L_0 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		String_t* L_1 = ___result0;
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral4EBDA72250283979F1A464C506665274601F2A0C, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m40005F715E0F43924AFA4AAB3AAB8FCB6BC0F385(L_0, L_2, /*hidden argument*/NULL);
		// var payload = JsonUtility.FromJson<UniWebViewNativeResultPayload>(result);
		String_t* L_3 = ___result0;
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F_m09FF9E0AE4A163AEB7F29A25AD3398B25F76BEF5(L_3, /*hidden argument*/JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F_m09FF9E0AE4A163AEB7F29A25AD3398B25F76BEF5_RuntimeMethod_var);
		V_0 = L_4;
		// webView.InternalOnEvalJavaScriptFinished(payload);
		UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * L_5 = __this->get_webView_5();
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnEvalJavaScriptFinished_m7F41AE45F97DDA851397CA49CFE9B6A6C35BBDBA(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::MessageReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_MessageReceived_m81A57F79E137D74AF55039FE7D3966B27ABE47BC (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * __this, String_t* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B7D33323BA93D25E3749ABC98725558724ACFB3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewLogger.Instance.Info("Message Received Event. Result: " + result);
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_0;
		L_0 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		String_t* L_1 = ___result0;
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral7B7D33323BA93D25E3749ABC98725558724ACFB3, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m40005F715E0F43924AFA4AAB3AAB8FCB6BC0F385(L_0, L_2, /*hidden argument*/NULL);
		// webView.InternalOnMessageReceived(result);
		UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * L_3 = __this->get_webView_5();
		String_t* L_4 = ___result0;
		NullCheck(L_3);
		UniWebView_InternalOnMessageReceived_mE9500C929F1B622F3A24490BC235108F586B5B7C(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::WebViewDone(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_WebViewDone_m07ECDBF7F3027EBBBDEB5C4B87D59ACC182B0B28 (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * __this, String_t* ___param0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EF67CAF3681E05C484A06FDBC22B44C14E1963A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewLogger.Instance.Info("Web View Done Event.");
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_0;
		L_0 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m40005F715E0F43924AFA4AAB3AAB8FCB6BC0F385(L_0, _stringLiteral7EF67CAF3681E05C484A06FDBC22B44C14E1963A, /*hidden argument*/NULL);
		// webView.InternalOnShouldClose();
		UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * L_1 = __this->get_webView_5();
		NullCheck(L_1);
		UniWebView_InternalOnShouldClose_mCA5EFB924EAE488F69E3720BD1E562D6EEDC8B8A(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::WebContentProcessDidTerminate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_WebContentProcessDidTerminate_m06FF95FE821AB58C1142AC491E6D93F69EC791B9 (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * __this, String_t* ___param0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6531E410A254E705B3486A18962DF55BBAA92F7F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewLogger.Instance.Info("Web Content Process Terminate Event.");
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_0;
		L_0 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m40005F715E0F43924AFA4AAB3AAB8FCB6BC0F385(L_0, _stringLiteral6531E410A254E705B3486A18962DF55BBAA92F7F, /*hidden argument*/NULL);
		// webView.InternalOnWebContentProcessDidTerminate();
		UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * L_1 = __this->get_webView_5();
		NullCheck(L_1);
		UniWebView_InternalOnWebContentProcessDidTerminate_m45DD9D1F5E94244F10CD474CED3366D3191430F6(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::SafeBrowsingFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_SafeBrowsingFinished_m4EA3A6B3F30596F962F2424B218A327A2E444104 (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * __this, String_t* ___param0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A2B081AE1D8E7C26E7F45F730E331D5BE655471);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewLogger.Instance.Info("Safe Browsing Finished.");
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_0;
		L_0 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m40005F715E0F43924AFA4AAB3AAB8FCB6BC0F385(L_0, _stringLiteral1A2B081AE1D8E7C26E7F45F730E331D5BE655471, /*hidden argument*/NULL);
		// safeBrowsing.InternalSafeBrowsingFinished();
		UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * L_1 = __this->get_safeBrowsing_6();
		NullCheck(L_1);
		UniWebViewSafeBrowsing_InternalSafeBrowsingFinished_m88546E0A7E35AFEBAA131F6B286F413FA4DDAB9A(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::MultipleWindowOpened(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_MultipleWindowOpened_m13972793ECFEAF254946912E16D6228CC21F4A3C (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * __this, String_t* ___param0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF86D7EC622B6AE932581F530BC9EAE6B3A4BEAF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewLogger.Instance.Info("MultipleWindowOpened Event. Multi Window: " + param);
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_0;
		L_0 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		String_t* L_1 = ___param0;
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralAF86D7EC622B6AE932581F530BC9EAE6B3A4BEAF, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m40005F715E0F43924AFA4AAB3AAB8FCB6BC0F385(L_0, L_2, /*hidden argument*/NULL);
		// webView.InternalOnMultipleWindowOpened(param);
		UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * L_3 = __this->get_webView_5();
		String_t* L_4 = ___param0;
		NullCheck(L_3);
		UniWebView_InternalOnMultipleWindowOpened_mAEDD5DAEE70B25FC188B7FAF9221ED9832C65036(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::MultipleWindowClosed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_MultipleWindowClosed_m08EE0CD125799AD18A1DC2EECBAF07B361CA3BAD (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * __this, String_t* ___param0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52F373B73A2B66DC4990D649FA0DA946AB9A6A10);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewLogger.Instance.Info("MultipleWindowClose Event. Multi Window: " + param);
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_0;
		L_0 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		String_t* L_1 = ___param0;
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral52F373B73A2B66DC4990D649FA0DA946AB9A6A10, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m40005F715E0F43924AFA4AAB3AAB8FCB6BC0F385(L_0, L_2, /*hidden argument*/NULL);
		// webView.InternalOnMultipleWindowClosed(param);
		UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * L_3 = __this->get_webView_5();
		String_t* L_4 = ___param0;
		NullCheck(L_3);
		UniWebView_InternalOnMultipleWindowClosed_m13A3EDF356C5D44359ABDC0692BD7F37AFDAB71D(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::FileDownloadStarted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_FileDownloadStarted_m8BF11F8F7268498CEDB2ADD94EF759116DFF42E4 (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * __this, String_t* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F_m09FF9E0AE4A163AEB7F29A25AD3398B25F76BEF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral201BBE82FF73DFCCE02EF3047E980480E054DF3A);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * V_0 = NULL;
	{
		// UniWebViewLogger.Instance.Info("FileDownloadStarted Event. Result: " + result);
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_0;
		L_0 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		String_t* L_1 = ___result0;
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral201BBE82FF73DFCCE02EF3047E980480E054DF3A, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m40005F715E0F43924AFA4AAB3AAB8FCB6BC0F385(L_0, L_2, /*hidden argument*/NULL);
		// var payload = JsonUtility.FromJson<UniWebViewNativeResultPayload>(result);
		String_t* L_3 = ___result0;
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F_m09FF9E0AE4A163AEB7F29A25AD3398B25F76BEF5(L_3, /*hidden argument*/JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F_m09FF9E0AE4A163AEB7F29A25AD3398B25F76BEF5_RuntimeMethod_var);
		V_0 = L_4;
		// webView.InternalOnFileDownloadStarted(payload);
		UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * L_5 = __this->get_webView_5();
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnFileDownloadStarted_mD776361E69C9B8E9AEAC8DD8DAAF1BB4B8F5B735(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::FileDownloadFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_FileDownloadFinished_m3DE354518C17B8BD70FC7B5752191D362813EF7D (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * __this, String_t* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F_m09FF9E0AE4A163AEB7F29A25AD3398B25F76BEF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD266A18472019B973EDB918EFBE306F0D0D9413C);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * V_0 = NULL;
	{
		// UniWebViewLogger.Instance.Info("FileDownloadFinished Event. Result: " + result);
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_0;
		L_0 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		String_t* L_1 = ___result0;
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralD266A18472019B973EDB918EFBE306F0D0D9413C, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m40005F715E0F43924AFA4AAB3AAB8FCB6BC0F385(L_0, L_2, /*hidden argument*/NULL);
		// var payload = JsonUtility.FromJson<UniWebViewNativeResultPayload>(result);
		String_t* L_3 = ___result0;
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F_m09FF9E0AE4A163AEB7F29A25AD3398B25F76BEF5(L_3, /*hidden argument*/JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F_m09FF9E0AE4A163AEB7F29A25AD3398B25F76BEF5_RuntimeMethod_var);
		V_0 = L_4;
		// webView.InternalOnFileDownloadFinished(payload);
		UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * L_5 = __this->get_webView_5();
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnFileDownloadFinished_mAE01165D0EE2524EC9167598267ABF99B61620BB(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::CaptureSnapshotFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_CaptureSnapshotFinished_m1017C1738D68D4335EFBD4A3FD1B608B3C96EE1A (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * __this, String_t* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F_m09FF9E0AE4A163AEB7F29A25AD3398B25F76BEF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DD62E04D9C08A1A20E499E6C090334BDCBB140A);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * V_0 = NULL;
	{
		// UniWebViewLogger.Instance.Info("CaptureSnapshotFinished Event. Result: " + result);
		UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * L_0;
		L_0 = UniWebViewLogger_get_Instance_mC5347DA197AC286ABE6E368339990803CC7BA5A6(/*hidden argument*/NULL);
		String_t* L_1 = ___result0;
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3DD62E04D9C08A1A20E499E6C090334BDCBB140A, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m40005F715E0F43924AFA4AAB3AAB8FCB6BC0F385(L_0, L_2, /*hidden argument*/NULL);
		// var payload = JsonUtility.FromJson<UniWebViewNativeResultPayload>(result);
		String_t* L_3 = ___result0;
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F_m09FF9E0AE4A163AEB7F29A25AD3398B25F76BEF5(L_3, /*hidden argument*/JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F_m09FF9E0AE4A163AEB7F29A25AD3398B25F76BEF5_RuntimeMethod_var);
		V_0 = L_4;
		// webView.InternalOnCaptureSnapshotFinished(payload);
		UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * L_5 = __this->get_webView_5();
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnCaptureSnapshotFinished_mF8B11C916CD448A50566713B4E8AAF5BE31FFDA3(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener__ctor_m3DBA71672560BB67B077C043415DCCA2CAA96F68 (UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebViewNativeListener::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener__cctor_mBBBBFE27FC70C31369AE65855822BE664CE3E303 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6D590EC94EE7F0732585591D62D5086056BF01B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<String, UniWebViewNativeListener> listeners = new Dictionary<String, UniWebViewNativeListener>();
		Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710 * L_0 = (Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710 *)il2cpp_codegen_object_new(Dictionary_2_tD63000896146FF22EE26AF1302DCFCB68B814710_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6D590EC94EE7F0732585591D62D5086056BF01B6(L_0, /*hidden argument*/Dictionary_2__ctor_m6D590EC94EE7F0732585591D62D5086056BF01B6_RuntimeMethod_var);
		((UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_il2cpp_TypeInfo_var))->set_listeners_4(L_0);
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
// System.Void UniWebViewNativeResultPayload::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeResultPayload__ctor_m15F6DD8ABCE00A8A71A4A5CD8A5105B24ED2AFEB (UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UniWebViewSafeBrowingComponent::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowingComponent_Start_mAF53A046DA3D8577BD58C8DB9605A7A2825B2182 (UniWebViewSafeBrowingComponent_tBA0A33F011EBE1BD20764B1B92F10A0459A74312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA83A925538F3CF2C8C3F376EE41897EBDE39B11A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(url)) {
		String_t* L_0 = __this->get_url_4();
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.LogError("The `url` is empty or null. Set a valid url in the prefab before you initialize it.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralA83A925538F3CF2C8C3F376EE41897EBDE39B11A, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0018:
	{
		// var safeBrowsing = UniWebViewSafeBrowsing.Create(url);
		String_t* L_2 = __this->get_url_4();
		UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * L_3;
		L_3 = UniWebViewSafeBrowsing_Create_m3DEFA0DE155230C91FE42B8371C9B04053105A27(L_2, /*hidden argument*/NULL);
		// safeBrowsing.Show();
		NullCheck(L_3);
		UniWebViewSafeBrowsing_Show_mF7254B28D372491B0866560A010FA21FD672B122(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewSafeBrowingComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowingComponent__ctor_mCB74302841CEEFA3E8FDF04E682927048D42950C (UniWebViewSafeBrowingComponent_tBA0A33F011EBE1BD20764B1B92F10A0459A74312 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UniWebViewSafeBrowsing::add_OnSafeBrowsingFinished(UniWebViewSafeBrowsing/OnSafeBrowsingFinishedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_add_OnSafeBrowsingFinished_m5F6A7E9D94FCF87E47DB15B6FED0BC66E1038D3B (UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * __this, OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * V_0 = NULL;
	OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * V_1 = NULL;
	OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * V_2 = NULL;
	{
		OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * L_0 = __this->get_OnSafeBrowsingFinished_4();
		V_0 = L_0;
	}

IL_0007:
	{
		OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * L_1 = V_0;
		V_1 = L_1;
		OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * L_2 = V_1;
		OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB *)CastclassSealed((RuntimeObject*)L_4, OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB_il2cpp_TypeInfo_var));
		OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB ** L_5 = __this->get_address_of_OnSafeBrowsingFinished_4();
		OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * L_6 = V_2;
		OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * L_7 = V_1;
		OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * L_8;
		L_8 = InterlockedCompareExchangeImpl<OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB *>((OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB **)L_5, L_6, L_7);
		V_0 = L_8;
		OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * L_9 = V_0;
		OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB *)L_9) == ((RuntimeObject*)(OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebViewSafeBrowsing::remove_OnSafeBrowsingFinished(UniWebViewSafeBrowsing/OnSafeBrowsingFinishedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_remove_OnSafeBrowsingFinished_m62E8A6664C378A5FDB8882CCD3BD97014FF76EA6 (UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * __this, OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * V_0 = NULL;
	OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * V_1 = NULL;
	OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * V_2 = NULL;
	{
		OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * L_0 = __this->get_OnSafeBrowsingFinished_4();
		V_0 = L_0;
	}

IL_0007:
	{
		OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * L_1 = V_0;
		V_1 = L_1;
		OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * L_2 = V_1;
		OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB *)CastclassSealed((RuntimeObject*)L_4, OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB_il2cpp_TypeInfo_var));
		OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB ** L_5 = __this->get_address_of_OnSafeBrowsingFinished_4();
		OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * L_6 = V_2;
		OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * L_7 = V_1;
		OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * L_8;
		L_8 = InterlockedCompareExchangeImpl<OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB *>((OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB **)L_5, L_6, L_7);
		V_0 = L_8;
		OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * L_9 = V_0;
		OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB *)L_9) == ((RuntimeObject*)(OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean UniWebViewSafeBrowsing::get_IsSafeBrowsingSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewSafeBrowsing_get_IsSafeBrowsingSupported_m07E7B7D971B3EF0793FE9D2FD6BDD129FBEA1D2E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UniWebViewInterface.IsSafeBrowsingSupported();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = UniWebViewInterface_IsSafeBrowsingSupported_m37B9A883980CF88BAC8364A1A9BD6A05ED7D4C38(/*hidden argument*/NULL);
		return L_0;
	}
}
// UniWebViewSafeBrowsing UniWebViewSafeBrowsing::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * UniWebViewSafeBrowsing_Create_m3DEFA0DE155230C91FE42B8371C9B04053105A27 (String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * V_0 = NULL;
	{
		// var safeBrowsing = new UniWebViewSafeBrowsing();
		UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * L_0 = (UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD *)il2cpp_codegen_object_new(UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD_il2cpp_TypeInfo_var);
		UniWebViewSafeBrowsing__ctor_m744A9A55BB26BC5558C3F17E9DDF91F56B9B1CF2(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (!UniWebViewHelper.IsEditor) {
		bool L_1;
		L_1 = UniWebViewHelper_get_IsEditor_m263D366CDCD483F5684AAFF210843D31AE6620F8(/*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		// safeBrowsing.listener.safeBrowsing = safeBrowsing;
		UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * L_2 = V_0;
		NullCheck(L_2);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_3 = L_2->get_listener_6();
		UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * L_4 = V_0;
		NullCheck(L_3);
		L_3->set_safeBrowsing_6(L_4);
		// safeBrowsing.Init(url);
		UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * L_5 = V_0;
		String_t* L_6 = ___url0;
		NullCheck(L_5);
		UniWebViewSafeBrowsing_Init_m58830FB373330C60FC6BC2314F46973E531B8D5A(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// safeBrowsing.url = url;
		UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * L_7 = V_0;
		String_t* L_8 = ___url0;
		NullCheck(L_7);
		L_7->set_url_7(L_8);
		// return safeBrowsing;
		UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * L_9 = V_0;
		return L_9;
	}
}
// System.Void UniWebViewSafeBrowsing::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_Show_mF7254B28D372491B0866560A010FA21FD672B122 (UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UniWebViewHelper.IsEditor) {
		bool L_0;
		L_0 = UniWebViewHelper_get_IsEditor_m263D366CDCD483F5684AAFF210843D31AE6620F8(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Application.OpenURL(url);
		String_t* L_1 = __this->get_url_7();
		Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E(L_1, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0013:
	{
		// UniWebViewInterface.SafeBrowsingShow(listener.Name);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_2 = __this->get_listener_6();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SafeBrowsingShow_m39CDEC608E514DB9439FECFCE1EFE54229B2D66C(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewSafeBrowsing::Dismiss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_Dismiss_m0E633800AD858D1C4E1CC95F17D6A9EC8FA195ED (UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UniWebViewSafeBrowsing::SetToolbarColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_SetToolbarColor_m989970943F48143B708E23DA309A96D6D38B0D69 (UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!UniWebViewHelper.IsEditor) {
		bool L_0;
		L_0 = UniWebViewHelper_get_IsEditor_m263D366CDCD483F5684AAFF210843D31AE6620F8(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		// UniWebViewInterface.SafeBrowsingSetToolbarColor(listener.Name, color.r, color.g, color.b);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_1 = __this->get_listener_6();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_1, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = ___color0;
		float L_4 = L_3.get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = ___color0;
		float L_6 = L_5.get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = ___color0;
		float L_8 = L_7.get_b_2();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SafeBrowsingSetToolbarColor_mBDBABEC75D5644402BEDA2729E8070B6D80C19A3(L_2, L_4, L_6, L_8, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void UniWebViewSafeBrowsing::SetToolbarItemColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_SetToolbarItemColor_mDAD42BCF65818520360972874EFE1B36CED344DD (UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UniWebViewSafeBrowsing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing__ctor_m744A9A55BB26BC5558C3F17E9DDF91F56B9B1CF2 (UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_mE8CF5E1FE32B12548C419E21C43C489BFDB4901D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	{
		// private string id = Guid.NewGuid().ToString();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0;
		L_0 = Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_0), /*hidden argument*/NULL);
		__this->set_id_5(L_1);
		// private UniWebViewSafeBrowsing() {
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object__ctor_m4DCF5CDB32C2C69290894101A81F473865169279(__this, /*hidden argument*/NULL);
		// if (!UniWebViewHelper.IsEditor) {
		bool L_2;
		L_2 = UniWebViewHelper_get_IsEditor_m263D366CDCD483F5684AAFF210843D31AE6620F8(/*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		// var listenerObject = new GameObject(id);
		String_t* L_3 = __this->get_id_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_4, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// listener = listenerObject.AddComponent<UniWebViewNativeListener>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_1;
		NullCheck(L_5);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_6;
		L_6 = GameObject_AddComponent_TisUniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_mE8CF5E1FE32B12548C419E21C43C489BFDB4901D(L_5, /*hidden argument*/GameObject_AddComponent_TisUniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_mE8CF5E1FE32B12548C419E21C43C489BFDB4901D_RuntimeMethod_var);
		__this->set_listener_6(L_6);
		// UniWebViewNativeListener.AddListener(listener);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_7 = __this->get_listener_6();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_il2cpp_TypeInfo_var);
		UniWebViewNativeListener_AddListener_m8F02DC28D1F8C723366B266BD9844AA283E231EA(L_7, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void UniWebViewSafeBrowsing::Init(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_Init_m58830FB373330C60FC6BC2314F46973E531B8D5A (UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SafeBrowsingInit(listener.Name, url);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_0 = __this->get_listener_6();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___url0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE140702F769E507F495D23EFC00AB7AD1A22FDF6_il2cpp_TypeInfo_var);
		UniWebViewInterface_SafeBrowsingInit_mA977AE101B6F704B4A865ADA1FED7CDC8E8608BD(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniWebViewSafeBrowsing::InternalSafeBrowsingFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_InternalSafeBrowsingFinished_m88546E0A7E35AFEBAA131F6B286F413FA4DDAB9A (UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnSafeBrowsingFinished != null) {
		OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * L_0 = __this->get_OnSafeBrowsingFinished_4();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// OnSafeBrowsingFinished(this);
		OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * L_1 = __this->get_OnSafeBrowsingFinished_4();
		NullCheck(L_1);
		OnSafeBrowsingFinishedDelegate_Invoke_mB2336421B012150582D4A0F9DC9423A71E60AE65(L_1, __this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// UniWebViewNativeListener.RemoveListener(listener.Name);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_2 = __this->get_listener_6();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UniWebViewNativeListener_get_Name_m4E984BC5AC74A860AA0111249FE4067FED24E74C(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6_il2cpp_TypeInfo_var);
		UniWebViewNativeListener_RemoveListener_mCB997D0B90F62CDACDACC472381EA9C7FEFDE77D(L_3, /*hidden argument*/NULL);
		// Destroy(listener.gameObject);
		UniWebViewNativeListener_t6214D418C491E79EAD6688D9994681BB6BDC42F6 * L_4 = __this->get_listener_6();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
		// }
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
// System.Void UniWebView/<>c__DisplayClass147_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass147_0__ctor_m48494B1C68F023B9629F1CB7C91AB1D03F87E12D (U3CU3Ec__DisplayClass147_0_t22B9F896525CEE39A0E34637FEC8801CE13D1CC7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView/<>c__DisplayClass147_0::<GetHTMLContent>b__0(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass147_0_U3CGetHTMLContentU3Eb__0_m375269303B0D63DAA65203CBF95357F33F731E7B (U3CU3Ec__DisplayClass147_0_t22B9F896525CEE39A0E34637FEC8801CE13D1CC7 * __this, UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * ___payload0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (handler != null) {
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_handler_0();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// handler(payload.data);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = __this->get_handler_0();
		UniWebViewNativeResultPayload_t946FE401F5FAFCD5F260A655469366FE0A7EE32F * L_2 = ___payload0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_data_2();
		NullCheck(L_1);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_1, L_3, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
	}

IL_0019:
	{
		// });
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
// System.Void UniWebView/CaptureSnapshotFinished::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureSnapshotFinished__ctor_m87782D043FCAAE60121111D75F7EEAE288F04392 (CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UniWebView/CaptureSnapshotFinished::Invoke(UniWebView,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureSnapshotFinished_Invoke_m98A4592BB0B657340815D963212F5E9D8D2F6D30 (CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, int32_t ___errorCode1, String_t* ___diskPath2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___errorCode1, ___diskPath2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___errorCode1, ___diskPath2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, ___webView0, ___errorCode1, ___diskPath2);
					else
						GenericVirtualActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, ___webView0, ___errorCode1, ___diskPath2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___errorCode1, ___diskPath2);
					else
						VirtualActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___errorCode1, ___diskPath2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___errorCode1, ___diskPath2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___errorCode1, ___diskPath2, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___errorCode1, ___diskPath2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UniWebView/CaptureSnapshotFinished::BeginInvoke(UniWebView,System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CaptureSnapshotFinished_BeginInvoke_m1A302C382FD42F1764C81DB4B39EE83EBAA2550B (CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, int32_t ___errorCode1, String_t* ___diskPath2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___webView0;
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___errorCode1);
	__d_args[2] = ___diskPath2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void UniWebView/CaptureSnapshotFinished::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureSnapshotFinished_EndInvoke_m7FAEFC7D043B90BEE942F079B9E8E16707FEB5E3 (CaptureSnapshotFinished_tDBD25EFF1449A7BE98F81B60007457FA3B0A83F3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebView/FileDownloadFinished::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDownloadFinished__ctor_m5986585808EE10032A9509D51B0869B9C1360A72 (FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UniWebView/FileDownloadFinished::Invoke(UniWebView,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDownloadFinished_Invoke_m0BEF0FE390BBED00C1B7D807E4170DAB61A6CAD9 (FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, int32_t ___errorCode1, String_t* ___remoteUrl2, String_t* ___diskPath3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___errorCode1, ___remoteUrl2, ___diskPath3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___errorCode1, ___remoteUrl2, ___diskPath3, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, String_t*, String_t* >::Invoke(targetMethod, ___webView0, ___errorCode1, ___remoteUrl2, ___diskPath3);
					else
						GenericVirtualActionInvoker3< int32_t, String_t*, String_t* >::Invoke(targetMethod, ___webView0, ___errorCode1, ___remoteUrl2, ___diskPath3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___errorCode1, ___remoteUrl2, ___diskPath3);
					else
						VirtualActionInvoker3< int32_t, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___errorCode1, ___remoteUrl2, ___diskPath3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___errorCode1, ___remoteUrl2, ___diskPath3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___errorCode1, ___remoteUrl2, ___diskPath3, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___errorCode1, ___remoteUrl2, ___diskPath3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UniWebView/FileDownloadFinished::BeginInvoke(UniWebView,System.Int32,System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileDownloadFinished_BeginInvoke_m769D3086F32C25ACE2E7458FFB877AE215FC8919 (FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, int32_t ___errorCode1, String_t* ___remoteUrl2, String_t* ___diskPath3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___webView0;
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___errorCode1);
	__d_args[2] = ___remoteUrl2;
	__d_args[3] = ___diskPath3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void UniWebView/FileDownloadFinished::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDownloadFinished_EndInvoke_mF89B8AD0DEAC10EB58090B41A929E1F2B8343A2F (FileDownloadFinished_t3E4EAFA865F9BD134BC95593C61FBBB52B26C307 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebView/FileDownloadStarted::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDownloadStarted__ctor_m7AA8BE13241823FF967428D3064B74258EDAD582 (FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UniWebView/FileDownloadStarted::Invoke(UniWebView,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDownloadStarted_Invoke_mDBCB7B796F3769B973B94C2C93E5842878D98D0A (FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, String_t* ___remoteUrl1, String_t* ___fileName2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___remoteUrl1, ___fileName2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___remoteUrl1, ___fileName2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, ___webView0, ___remoteUrl1, ___fileName2);
					else
						GenericVirtualActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, ___webView0, ___remoteUrl1, ___fileName2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___remoteUrl1, ___fileName2);
					else
						VirtualActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___remoteUrl1, ___fileName2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___remoteUrl1, ___fileName2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___remoteUrl1, ___fileName2, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___remoteUrl1, ___fileName2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UniWebView/FileDownloadStarted::BeginInvoke(UniWebView,System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileDownloadStarted_BeginInvoke_mE076421065A0BD586E9AAE1A72377764C79E8C1B (FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, String_t* ___remoteUrl1, String_t* ___fileName2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___webView0;
	__d_args[1] = ___remoteUrl1;
	__d_args[2] = ___fileName2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void UniWebView/FileDownloadStarted::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDownloadStarted_EndInvoke_mDD8BF14C7E17A23DB189E6EA96DFA6B56AA01633 (FileDownloadStarted_t08EE26A39FCFCF48A7C725ED1AB4A724B3AD7A33 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebView/KeyCodeReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCodeReceivedDelegate__ctor_mCBE1506943FFBF2EDE5FE1ED730373B38087A26D (KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UniWebView/KeyCodeReceivedDelegate::Invoke(UniWebView,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCodeReceivedDelegate_Invoke_m36F8FD77273245F1936F2ACDCBFB09842F91881D (KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, int32_t ___keyCode1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___keyCode1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___keyCode1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___webView0, ___keyCode1);
					else
						GenericVirtualActionInvoker1< int32_t >::Invoke(targetMethod, ___webView0, ___keyCode1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___keyCode1);
					else
						VirtualActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___keyCode1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___keyCode1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___keyCode1, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___keyCode1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UniWebView/KeyCodeReceivedDelegate::BeginInvoke(UniWebView,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeyCodeReceivedDelegate_BeginInvoke_m7E67C4B9E836453433CC028890078D304767BEF7 (KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, int32_t ___keyCode1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___webView0;
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___keyCode1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UniWebView/KeyCodeReceivedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCodeReceivedDelegate_EndInvoke_mF03DB5FA5AF8F600538D7AA9D400A25365FB447E (KeyCodeReceivedDelegate_tEE5792AB5014E5DA00FA71D3D99BC8603A950185 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebView/MessageReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedDelegate__ctor_mEB7F81B3635B3D8B928D335082B9FADC5A7EC68C (MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UniWebView/MessageReceivedDelegate::Invoke(UniWebView,UniWebViewMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedDelegate_Invoke_mD469364495B240D58B3D77DBF647A62DE9E9F397 (MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC  ___message1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___message1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___message1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC  >::Invoke(targetMethod, ___webView0, ___message1);
					else
						GenericVirtualActionInvoker1< UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC  >::Invoke(targetMethod, ___webView0, ___message1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___message1);
					else
						VirtualActionInvoker1< UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___message1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___message1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___message1, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___message1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UniWebView/MessageReceivedDelegate::BeginInvoke(UniWebView,UniWebViewMessage,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageReceivedDelegate_BeginInvoke_m98E336491CA424B69F6999BDB80FA9D8B72C4F03 (MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC  ___message1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___webView0;
	__d_args[1] = Box(UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC_il2cpp_TypeInfo_var, &___message1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UniWebView/MessageReceivedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedDelegate_EndInvoke_m59A7947957711B27E0B35F342AA58F7E2FF7D850 (MessageReceivedDelegate_t420D20C44FAF41EE61088630F4C1D295B8FC325B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebView/MultipleWindowClosedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleWindowClosedDelegate__ctor_mCE50A9C77121BC4C17309D4BEBDC89922BD11EFE (MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UniWebView/MultipleWindowClosedDelegate::Invoke(UniWebView,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleWindowClosedDelegate_Invoke_mF13967F9006AE565AFC93DCDE631C5D1A7F3C0DC (MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, String_t* ___multipleWindowId1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___multipleWindowId1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___multipleWindowId1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___webView0, ___multipleWindowId1);
					else
						GenericVirtualActionInvoker1< String_t* >::Invoke(targetMethod, ___webView0, ___multipleWindowId1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___multipleWindowId1);
					else
						VirtualActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___multipleWindowId1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___multipleWindowId1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___multipleWindowId1, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___multipleWindowId1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UniWebView/MultipleWindowClosedDelegate::BeginInvoke(UniWebView,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MultipleWindowClosedDelegate_BeginInvoke_mA9B7C663A783004AD0FB7D50D71565EF3F50B19A (MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, String_t* ___multipleWindowId1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___webView0;
	__d_args[1] = ___multipleWindowId1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UniWebView/MultipleWindowClosedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleWindowClosedDelegate_EndInvoke_mD0FC7A7AA471CCCCD16120E949CDB0B8E926B274 (MultipleWindowClosedDelegate_t665A2D9619CCD8345B8206627A6884507CA2E8A4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebView/MultipleWindowOpenedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleWindowOpenedDelegate__ctor_mA0396447B7D7F86562ECF9BC3AD0D345D961B87E (MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UniWebView/MultipleWindowOpenedDelegate::Invoke(UniWebView,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleWindowOpenedDelegate_Invoke_m3183DC9417F5EF4A721A341D1E414D10B96114A7 (MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, String_t* ___multipleWindowId1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___multipleWindowId1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___multipleWindowId1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___webView0, ___multipleWindowId1);
					else
						GenericVirtualActionInvoker1< String_t* >::Invoke(targetMethod, ___webView0, ___multipleWindowId1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___multipleWindowId1);
					else
						VirtualActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___multipleWindowId1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___multipleWindowId1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___multipleWindowId1, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___multipleWindowId1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UniWebView/MultipleWindowOpenedDelegate::BeginInvoke(UniWebView,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MultipleWindowOpenedDelegate_BeginInvoke_m11804E191CE9103C9C7D81D5BF872F7E690441DE (MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, String_t* ___multipleWindowId1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___webView0;
	__d_args[1] = ___multipleWindowId1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UniWebView/MultipleWindowOpenedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleWindowOpenedDelegate_EndInvoke_mD4983F65F210347B58D56D89A87ED556D38BE3EC (MultipleWindowOpenedDelegate_tCE48F86EAB343D007C942BF40D5A35EBB23AC67B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebView/OnWebContentProcessTerminatedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnWebContentProcessTerminatedDelegate__ctor_mD74E09656F3957C5CD7948630C0FA459ED1C6AD0 (OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UniWebView/OnWebContentProcessTerminatedDelegate::Invoke(UniWebView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnWebContentProcessTerminatedDelegate_Invoke_m5C6BB033CF8D2871BCA4E9D3360AE62F8422468C (OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___webView0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___webView0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UniWebView/OnWebContentProcessTerminatedDelegate::BeginInvoke(UniWebView,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnWebContentProcessTerminatedDelegate_BeginInvoke_mB45468351E4B6A75A53E0B412AD1D0E757A637B6 (OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___webView0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UniWebView/OnWebContentProcessTerminatedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnWebContentProcessTerminatedDelegate_EndInvoke_m0234A55DFAC6421792EA108F82F5CE5DA4480E95 (OnWebContentProcessTerminatedDelegate_t4527CC0116942989564C82C451A075807177DEFE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebView/OrientationChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrientationChangedDelegate__ctor_m8BA00303520EAEAEF6E27325389707D0418B9B63 (OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UniWebView/OrientationChangedDelegate::Invoke(UniWebView,UnityEngine.ScreenOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrientationChangedDelegate_Invoke_m836E9F443DA23D568B80D40FF01BF176A0BF7ABF (OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, int32_t ___orientation1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___orientation1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___orientation1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___webView0, ___orientation1);
					else
						GenericVirtualActionInvoker1< int32_t >::Invoke(targetMethod, ___webView0, ___orientation1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___orientation1);
					else
						VirtualActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___orientation1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___orientation1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___orientation1, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___orientation1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UniWebView/OrientationChangedDelegate::BeginInvoke(UniWebView,UnityEngine.ScreenOrientation,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrientationChangedDelegate_BeginInvoke_m3D1D27F7C83FEC1F5A5553BB54ED676E9037C836 (OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, int32_t ___orientation1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScreenOrientation_tDD9EF2729A0D580721770597532935B0A7ADE020_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___webView0;
	__d_args[1] = Box(ScreenOrientation_tDD9EF2729A0D580721770597532935B0A7ADE020_il2cpp_TypeInfo_var, &___orientation1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UniWebView/OrientationChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrientationChangedDelegate_EndInvoke_m7C9322FE1A3CE6DFC09360E799C39E2C0171DB71 (OrientationChangedDelegate_tF45305C03F09A66EA8DCAD7A2C9DD65F5D73539A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebView/PageErrorReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageErrorReceivedDelegate__ctor_m4B7B4B0C481CF4453FE76A033756EC63C00D3AEF (PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UniWebView/PageErrorReceivedDelegate::Invoke(UniWebView,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageErrorReceivedDelegate_Invoke_mBA8063297A0D58C38D1272F1E1866B10E99BBF3E (PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, int32_t ___errorCode1, String_t* ___errorMessage2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___errorCode1, ___errorMessage2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___errorCode1, ___errorMessage2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, ___webView0, ___errorCode1, ___errorMessage2);
					else
						GenericVirtualActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, ___webView0, ___errorCode1, ___errorMessage2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___errorCode1, ___errorMessage2);
					else
						VirtualActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___errorCode1, ___errorMessage2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___errorCode1, ___errorMessage2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___errorCode1, ___errorMessage2, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___errorCode1, ___errorMessage2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UniWebView/PageErrorReceivedDelegate::BeginInvoke(UniWebView,System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PageErrorReceivedDelegate_BeginInvoke_mC35EE67E93C4406B9E503F48C97E1AAAFC0A2EB1 (PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, int32_t ___errorCode1, String_t* ___errorMessage2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___webView0;
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___errorCode1);
	__d_args[2] = ___errorMessage2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void UniWebView/PageErrorReceivedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageErrorReceivedDelegate_EndInvoke_m4A77365A1B4AC93362232AB776BBC5DE089550EB (PageErrorReceivedDelegate_tA1E702FBC6225B131E7E8BBABDBCB2530698DFC1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebView/PageFinishedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageFinishedDelegate__ctor_mFB98A0B36E3B4984FCBF5CE42AF184173E2085B8 (PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UniWebView/PageFinishedDelegate::Invoke(UniWebView,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageFinishedDelegate_Invoke_mF649F376FBB890D9CFB948732D510CEEA405ADB6 (PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, int32_t ___statusCode1, String_t* ___url2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___statusCode1, ___url2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___statusCode1, ___url2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, ___webView0, ___statusCode1, ___url2);
					else
						GenericVirtualActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, ___webView0, ___statusCode1, ___url2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___statusCode1, ___url2);
					else
						VirtualActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___statusCode1, ___url2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___statusCode1, ___url2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___statusCode1, ___url2, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___statusCode1, ___url2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UniWebView/PageFinishedDelegate::BeginInvoke(UniWebView,System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PageFinishedDelegate_BeginInvoke_m109A756E0D9406779FCFDF8FB07A89156C8EA6A3 (PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, int32_t ___statusCode1, String_t* ___url2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___webView0;
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___statusCode1);
	__d_args[2] = ___url2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void UniWebView/PageFinishedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageFinishedDelegate_EndInvoke_mFA34163DB4C2A7B9B1AB4D2B69EDC0A592632273 (PageFinishedDelegate_tCB6FACB3B5D607F76AAF1B477F46E8CC1A54DAFA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebView/PageProgressChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageProgressChangedDelegate__ctor_mC548A4DEE1A6579F0D94646349AD66BBA78E3827 (PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UniWebView/PageProgressChangedDelegate::Invoke(UniWebView,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageProgressChangedDelegate_Invoke_m631C4300E4E5F355A4CE188EDC0BFF9B4589AE96 (PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, float ___progress1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___progress1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___progress1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< float >::Invoke(targetMethod, ___webView0, ___progress1);
					else
						GenericVirtualActionInvoker1< float >::Invoke(targetMethod, ___webView0, ___progress1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___progress1);
					else
						VirtualActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___progress1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___progress1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___progress1, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___progress1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UniWebView/PageProgressChangedDelegate::BeginInvoke(UniWebView,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PageProgressChangedDelegate_BeginInvoke_m761BB5C71DF8A70C43CD83C8165193D8695EA86F (PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, float ___progress1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___webView0;
	__d_args[1] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___progress1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UniWebView/PageProgressChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageProgressChangedDelegate_EndInvoke_m6A98BAC055587F7C36BA9C60DC30A63871B51107 (PageProgressChangedDelegate_tDC04F43108F5626D91497C4900A9E7B9CE8FD037 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebView/PageStartedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageStartedDelegate__ctor_m6B3FA8AC58D7BF6E0196D83E536A829231C27380 (PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UniWebView/PageStartedDelegate::Invoke(UniWebView,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageStartedDelegate_Invoke_mFE74C8CD1858C2368AC8F336A2903F97F57F6E5F (PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, String_t* ___url1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___url1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___url1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___webView0, ___url1);
					else
						GenericVirtualActionInvoker1< String_t* >::Invoke(targetMethod, ___webView0, ___url1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___url1);
					else
						VirtualActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___url1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___url1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___url1, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___url1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UniWebView/PageStartedDelegate::BeginInvoke(UniWebView,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PageStartedDelegate_BeginInvoke_m46664ECFECCAD522538051D6BA4FD6C2979CB4A1 (PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, String_t* ___url1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___webView0;
	__d_args[1] = ___url1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UniWebView/PageStartedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageStartedDelegate_EndInvoke_mF74F69A8BB1D7B4AB119F3D9E2C4F18495D92469 (PageStartedDelegate_t131FE1C6DFA227E1B7FDFEFE714D77286CEC76EC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebView/ShouldCloseDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShouldCloseDelegate__ctor_m439CC692DE225D61994CDDAFE3621E90E7A15749 (ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean UniWebView/ShouldCloseDelegate::Invoke(UniWebView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShouldCloseDelegate_Invoke_m0A62F2058438FBA4343F3A51D70088794FBE0D7A (ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___webView0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, ___webView0);
					else
						result = GenericVirtualFuncInvoker0< bool >::Invoke(targetMethod, ___webView0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0);
					else
						result = VirtualFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___webView0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef bool (*FunctionPointerType) (UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___webView0, targetMethod);
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UniWebView/ShouldCloseDelegate::BeginInvoke(UniWebView,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShouldCloseDelegate_BeginInvoke_m027126144BB21FEB988D0561B03D4BB1550D3C31 (ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * __this, UniWebView_tD1282B79CFD329F2E0DD46CAEF5749C675DB8E1D * ___webView0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___webView0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Boolean UniWebView/ShouldCloseDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShouldCloseDelegate_EndInvoke_mB0807C2A664CF3DA2157A26FA0A107B2E8A2831B (ShouldCloseDelegate_t2DB1FE4805E63B5B1810F18F991320C49DBE16C8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
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
// System.Void UniWebViewSafeBrowsing/OnSafeBrowsingFinishedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSafeBrowsingFinishedDelegate__ctor_m7EEA8F7D165A9C2E41989B109C20BC690E171D8D (OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UniWebViewSafeBrowsing/OnSafeBrowsingFinishedDelegate::Invoke(UniWebViewSafeBrowsing)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSafeBrowsingFinishedDelegate_Invoke_mB2336421B012150582D4A0F9DC9423A71E60AE65 (OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * __this, UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * ___browsing0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___browsing0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___browsing0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___browsing0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___browsing0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___browsing0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___browsing0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___browsing0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___browsing0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___browsing0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UniWebViewSafeBrowsing/OnSafeBrowsingFinishedDelegate::BeginInvoke(UniWebViewSafeBrowsing,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnSafeBrowsingFinishedDelegate_BeginInvoke_mB9FEA8BFE88B7F93F41BDB8EC6B81CDFE5A81A59 (OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * __this, UniWebViewSafeBrowsing_t47752D5613536B9CC0EA8C919BAC74EF703F93FD * ___browsing0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___browsing0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UniWebViewSafeBrowsing/OnSafeBrowsingFinishedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSafeBrowsingFinishedDelegate_EndInvoke_m067E66CBB1E66ACAAE900665FCBB0FD1A5873D36 (OnSafeBrowsingFinishedDelegate_t91A9F46F2F1A73175A17F95761C206E719FD5EEB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniWebViewLogger_get_LogLevel_mA5BBF466DBC81D16BEB0F02A873953BC6CEF0E1E_inline (UniWebViewLogger_t46635270B0C1E24091062F8A9BE197BE4C317B42 * __this, const RuntimeMethod* method)
{
	{
		// get { return level; }
		int32_t L_0 = __this->get_level_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_RawMessage_m19FAD7EFE68623EA8F3F707A8A89F1C1DF70E09D_inline (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, const RuntimeMethod* method)
{
	{
		// public string RawMessage {get; private set;}
		String_t* L_0 = __this->get_U3CRawMessageU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniWebViewMessage_set_RawMessage_mE16E8B64FF787A83CFDD3D8B87C1A37D79F469BE_inline (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string RawMessage {get; private set;}
		String_t* L_0 = ___value0;
		__this->set_U3CRawMessageU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_Scheme_mEE66730B22BBC5667A649200EE7252B91935C6DA_inline (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, const RuntimeMethod* method)
{
	{
		// public string Scheme {get; private set;}
		String_t* L_0 = __this->get_U3CSchemeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Scheme_m492CC65C3EEA256F70D776658D1008328932A2D6_inline (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Scheme {get; private set;}
		String_t* L_0 = ___value0;
		__this->set_U3CSchemeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_Path_mB5F1D6C5958D5114D3ED7294392E2444D58ACA32_inline (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, const RuntimeMethod* method)
{
	{
		// public string Path {get; private set;}
		String_t* L_0 = __this->get_U3CPathU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Path_m7B32AA816651D1DC8B7F7352CC75A144738154E1_inline (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Path {get; private set;}
		String_t* L_0 = ___value0;
		__this->set_U3CPathU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * UniWebViewMessage_get_Args_mABDBE768100A9408C644B7478411B04FD7BFD8AC_inline (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, string> Args{get; private set;}
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_U3CArgsU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Args_mA03F442CD6BE845D3AB05DEB4BB8CACC6E67B9F9_inline (UniWebViewMessage_t2763DB3686AB31BB4929BCA13F863744D0B893DC * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___value0, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, string> Args{get; private set;}
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = ___value0;
		__this->set_U3CArgsU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
