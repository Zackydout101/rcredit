#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<System.Action>
struct Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<UnityEngine.Purchasing.Product>
struct Action_1_tA1980BF879FC3C2BEF14A6B79268F3DBBB7EB865;
// System.Action`2<System.Boolean,System.String>
struct Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3;
// System.Action`2<UnityEngine.Purchasing.Models.IGoogleBillingResult,System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>
struct Action_2_t3FCCB9520841190A6A1B12DC655BF1CD7D82D02F;
// System.Action`2<System.Object,System.Object>
struct Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D;
// System.Collections.Generic.Dictionary`2<UnityEngine.Purchasing.AppStore,System.String>
struct Dictionary_2_t44560DF978B3A19D443806371A881CDCB3BB0308;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.ValueTuple`2<UnityEngine.Purchasing.Models.IGoogleBillingResult,System.Collections.Generic.IEnumerable`1<UnityEngine.AndroidJavaObject>>,System.Collections.Generic.IEnumerable`1<UnityEngine.AndroidJavaObject>>
struct Func_2_t606423AEDD160D7C58CD771399323F7AA893EC51;
// System.Func`2<System.ValueTuple`2<UnityEngine.Purchasing.Models.IGoogleBillingResult,System.Collections.Generic.IEnumerable`1<UnityEngine.AndroidJavaObject>>,System.Boolean>
struct Func_2_tBE41AF6F1AD6F17DD891D60517652DCB4105073E;
// System.Func`2<System.ValueTuple`2<UnityEngine.Purchasing.Models.IGoogleBillingResult,System.Collections.Generic.IEnumerable`1<UnityEngine.AndroidJavaObject>>,UnityEngine.Purchasing.Models.IGoogleBillingResult>
struct Func_2_t8B7332CAC5E7BE3570D81E13FD4C0EA5A8E3CBB3;
// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean>
struct Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851;
// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.String>
struct Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06;
// System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription>
struct Func_2_t26F79FEEAFC83C364423428EC9E72457BDC04366;
// System.Collections.Generic.IEnumerable`1<UnityEngine.AndroidJavaObject>
struct IEnumerable_1_t3B196C34018EC0DF831C14FD0889DA6E12397D9C;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<UnityEngine.Purchasing.ProductDefinition>
struct IList_1_tDC1792FC74233BD232D090860F9B0FBC88301C34;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>
struct List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t458734AF850139150AB40DFB2B5D1BCE23178235;
// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>
struct List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>
struct List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Product>
struct List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF;
// System.Collections.Generic.List`1<UnityEngine.RuntimePlatform>
struct List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Purchasing.Product[]
struct ProductU5BU5D_t1202CB7487EB88A76294BF6E7F42E297D74B8062;
// UnityEngine.Purchasing.Extension.ProductDescription[]
struct ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// UnityEngine.Purchasing.ExponentialRetryPolicy
struct ExponentialRetryPolicy_t259DF2B027844A356C64A74136CCDBE4F90F9D37;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// UnityEngine.Purchasing.Models.GoogleBillingResult
struct GoogleBillingResult_t7A633E3EF045BC4657A02A94719F1C5A138AEF03;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.Purchasing.Models.IGoogleBillingResult
struct IGoogleBillingResult_t7969FA71619EE8FFD00594D8A95B33477D484DDE;
// UnityEngine.ILogger
struct ILogger_t25627AC5B51863702868D31972297B7D633B4583;
// UnityEngine.Purchasing.INativeStore
struct INativeStore_t6A2307166DFCEFE4F61714DFAF42A231759E9851;
// UnityEngine.Purchasing.INativeStoreProvider
struct INativeStoreProvider_t82BBF516CDF9E0AF2FF8488ED0CFA71F1207C783;
// UnityEngine.Purchasing.INativeUDPStore
struct INativeUDPStore_tBEDB9A06199F713C1A02FA49086EB0D8BF40FFBA;
// UnityEngine.Purchasing.Extension.IPurchasingBinder
struct IPurchasingBinder_t55347A5ACE1DB3892EEB13D922FD591E238B75E1;
// UnityEngine.Purchasing.Extension.IStore
struct IStore_tCEF0F12ABAEB669C05EFD4FA40A31BAAC6F4B51E;
// UnityEngine.Purchasing.Extension.IStoreCallback
struct IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F;
// UnityEngine.Purchasing.Telemetry.ITelemetryDiagnosticsInstanceWrapper
struct ITelemetryDiagnosticsInstanceWrapper_tC33E4E6D25BFB202AA78776D58B4AC0D9571DF02;
// UnityEngine.Purchasing.Telemetry.ITelemetryMetricsInstanceWrapper
struct ITelemetryMetricsInstanceWrapper_tBA55BAFCE218F79996E757616214360254A6FE06;
// UnityEngine.Purchasing.IUnityCallback
struct IUnityCallback_t30DEA3747BDB4858449EF9C033D67B5C19856C55;
// Uniject.IUtil
struct IUtil_t6D8EF68B604857A8398E5FEF4F042B1CC1EDEC40;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Purchasing.Product
struct Product_t8D04681E6E43F5FBB6065B70408B9B0F13B5797E;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572;
// UnityEngine.Purchasing.Extension.PurchaseFailureDescription
struct PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Purchasing.ScriptingStoreCallback
struct ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288;
// UnityEngine.Purchasing.ScriptingUnityCallback
struct ScriptingUnityCallback_tC9375469A489B48C41A433AE8E70E2C92688A28B;
// UnityEngine.Purchasing.SkuDetailsResponseListener
struct SkuDetailsResponseListener_t81E031C7B43FAF59CA2593FC977A56DA8F7BBC97;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// UnityEngine.Purchasing.StandardPurchasingModule
struct StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Type
struct Type_t;
// UnityEngine.Purchasing.UDPImpl
struct UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1;
// UnityEngine.Purchasing.Extension.UnityUtil
struct UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.Purchasing.Default.WinProductDescription
struct WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829;
// UnityEngine.Purchasing.WinRTStore
struct WinRTStore_t8CDB879BD9F0D28D831A5A89912DCD4966B95326;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C;
// UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D;
// UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t859087A14AE95FD9CA3137ED6A5AD2B5AD954E2D;
// UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t35E59837B7A8D9A9033DF940B833CA8E375F5974;
// UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t807EC72F490C70CEB518B7C7199B43D6E9AA54F1;
// UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tC875F56D08FF4FFE51B8B881279B402786BA4210;
// UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t8E9729856B67388D808F413A54BC9473455A39E4;
// UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t90113C5AD2C2F802FFFDC7C20741B5A27875F266;
// UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tEF82BC14FD968A3C437E1CC7E4C108819E022D43;
// UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tE225EAD07BBB4B788560A475B5806E9FC1F24B3D;
// UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tC9B5DE02A07173655F9C329B4D7934C41D058365;
// UnityEngine.Purchasing.SkuDetailsQueryResponse/<>c
struct U3CU3Ec_tFD3976FDD96338F9F0BE078B997DD4378845C9C4;
// UnityEngine.Purchasing.SkuDetailsResponseListener/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t300A8A8DF7C9D0E68C0CA0FE8C269A2E5A2356BD;
// UnityEngine.Purchasing.StandardPurchasingModule/MicrosoftConfiguration
struct MicrosoftConfiguration_t72E7005BD172865A7745C2935D2880DEFA88317D;
// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance
struct StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tB18ED9C2044158C2044A084B4D6829E404E0F236;
// UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tA52647570260163D1D5F8C1FDA00B24D12D032FA;
// UnityEngine.Purchasing.UDPReflectionUtils/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tFC02CD6F9A7EFE0BD5EE8356D40FD5373E0DC90D;
// UnityEngine.Purchasing.UIFakeStore/<>c
struct U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372;
// UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48
struct U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C;
// UnityEngine.Purchasing.WinRTStore/<>c
struct U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleBillingResult_t7A633E3EF045BC4657A02A94719F1C5A138AEF03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGoogleBillingResult_t7969FA71619EE8FFD00594D8A95B33477D484DDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INativeUDPStore_tBEDB9A06199F713C1A02FA49086EB0D8BF40FFBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityCallback_t30DEA3747BDB4858449EF9C033D67B5C19856C55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tFD3976FDD96338F9F0BE078B997DD4378845C9C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0E62453B16F3139996684F414345A0A54FA64728;
IL2CPP_EXTERN_C String_t* _stringLiteral1F129F58A8DCA2BAC1980E37CE73EDC57F778345;
IL2CPP_EXTERN_C String_t* _stringLiteral283A5E2C7FF2F98F76268C8CFB12CA428D08EF99;
IL2CPP_EXTERN_C String_t* _stringLiteral3BA59C4AA7C2F6DD8728F78A4194DD324111ABC1;
IL2CPP_EXTERN_C String_t* _stringLiteral4B410F5F43A4714AE6474DB2282523C7FBE75CD1;
IL2CPP_EXTERN_C String_t* _stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C;
IL2CPP_EXTERN_C String_t* _stringLiteral6102B784A4463F5BB7820485F8B488B85D030E83;
IL2CPP_EXTERN_C String_t* _stringLiteral74320907E0EFDCA8532E8CBD2C1A2910BB8C42D7;
IL2CPP_EXTERN_C String_t* _stringLiteral7FF9A5D883AC2EEA2F31FEECA02D6C53D5F533B1;
IL2CPP_EXTERN_C String_t* _stringLiteral8C99461589CBC42FE28D0A29D20F63D0EE7E6E00;
IL2CPP_EXTERN_C String_t* _stringLiteral9783048DDA4A8100EAD15B60BE4922DE458E77F8;
IL2CPP_EXTERN_C String_t* _stringLiteralC0FB8B944A767E1AACE82F930D95E69ED912ADAD;
IL2CPP_EXTERN_C String_t* _stringLiteralC4FD5B06A6B7174802B6D991C7560C98FB781820;
IL2CPP_EXTERN_C String_t* _stringLiteralD07477ECD3017EFC4D04A75EB58245BE024730D9;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mA71DB51F315AA7EAFFAD4898A0D73FFDD073AE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m64DE9643DE1F193ECA196D32631CA952427B2720_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObjectExtensions_Enumerate_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_m42E7E1EBF674EB219C3CF961F44EDACCEF3145F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_t71CF0A37D081E4DE9DD2897FF8CB6A853728F7D2_m8E8A8BEEBD905CC27E1955381046C3039E22F325_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CInvokeU3Eg__RetryU7C0U3Ed_tCEAE898505D478F1042857B461814D0C72D5BDCF_m2A49116C5807A98EC391DD8824DCB215E30E0B21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_m318614E8B85E8FF3D89144F7F27E40A877F77C31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayedCoroutineU3Ed__48_System_Collections_IEnumerator_Reset_m89C455992E8BC0F988D97894649B211833E2A406_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CInvokeU3Eg__RetryU7C0_m559D6EEE92E75EA9E4B65A055CB9D001D49D42C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
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
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>
struct List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B, ____items_1)); }
	inline AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* get__items_1() const { return ____items_1; }
	inline AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B_StaticFields, ____emptyArray_5)); }
	inline AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.Product>
struct List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ProductU5BU5D_t1202CB7487EB88A76294BF6E7F42E297D74B8062* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA, ____items_1)); }
	inline ProductU5BU5D_t1202CB7487EB88A76294BF6E7F42E297D74B8062* get__items_1() const { return ____items_1; }
	inline ProductU5BU5D_t1202CB7487EB88A76294BF6E7F42E297D74B8062** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ProductU5BU5D_t1202CB7487EB88A76294BF6E7F42E297D74B8062* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ProductU5BU5D_t1202CB7487EB88A76294BF6E7F42E297D74B8062* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA_StaticFields, ____emptyArray_5)); }
	inline ProductU5BU5D_t1202CB7487EB88A76294BF6E7F42E297D74B8062* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ProductU5BU5D_t1202CB7487EB88A76294BF6E7F42E297D74B8062** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ProductU5BU5D_t1202CB7487EB88A76294BF6E7F42E297D74B8062* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF, ____items_1)); }
	inline ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79* get__items_1() const { return ____items_1; }
	inline ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF_StaticFields, ____emptyArray_5)); }
	inline ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ProductDescriptionU5BU5D_t2A77BC327A51622FB3EB0927656D980A1A10EB79* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// UnityEngine.Purchasing.Extension.AbstractPurchasingModule
struct AbstractPurchasingModule_tE97233CECF61E1D47FE937203B395835774FBB04  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Extension.IPurchasingBinder UnityEngine.Purchasing.Extension.AbstractPurchasingModule::m_Binder
	RuntimeObject* ___m_Binder_0;

public:
	inline static int32_t get_offset_of_m_Binder_0() { return static_cast<int32_t>(offsetof(AbstractPurchasingModule_tE97233CECF61E1D47FE937203B395835774FBB04, ___m_Binder_0)); }
	inline RuntimeObject* get_m_Binder_0() const { return ___m_Binder_0; }
	inline RuntimeObject** get_address_of_m_Binder_0() { return &___m_Binder_0; }
	inline void set_m_Binder_0(RuntimeObject* value)
	{
		___m_Binder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Binder_0), (void*)value);
	}
};


// UnityEngine.Purchasing.Extension.AbstractStore
struct AbstractStore_tB0FD374A2E9858EB3A2DC721CBA280409F9485C0  : public RuntimeObject
{
public:

public:
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


// UnityEngine.Purchasing.ExponentialRetryPolicy
struct ExponentialRetryPolicy_t259DF2B027844A356C64A74136CCDBE4F90F9D37  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Purchasing.ExponentialRetryPolicy::m_BaseRetryDelay
	int32_t ___m_BaseRetryDelay_0;
	// System.Int32 UnityEngine.Purchasing.ExponentialRetryPolicy::m_MaxRetryDelay
	int32_t ___m_MaxRetryDelay_1;
	// System.Int32 UnityEngine.Purchasing.ExponentialRetryPolicy::m_ExponentialFactor
	int32_t ___m_ExponentialFactor_2;

public:
	inline static int32_t get_offset_of_m_BaseRetryDelay_0() { return static_cast<int32_t>(offsetof(ExponentialRetryPolicy_t259DF2B027844A356C64A74136CCDBE4F90F9D37, ___m_BaseRetryDelay_0)); }
	inline int32_t get_m_BaseRetryDelay_0() const { return ___m_BaseRetryDelay_0; }
	inline int32_t* get_address_of_m_BaseRetryDelay_0() { return &___m_BaseRetryDelay_0; }
	inline void set_m_BaseRetryDelay_0(int32_t value)
	{
		___m_BaseRetryDelay_0 = value;
	}

	inline static int32_t get_offset_of_m_MaxRetryDelay_1() { return static_cast<int32_t>(offsetof(ExponentialRetryPolicy_t259DF2B027844A356C64A74136CCDBE4F90F9D37, ___m_MaxRetryDelay_1)); }
	inline int32_t get_m_MaxRetryDelay_1() const { return ___m_MaxRetryDelay_1; }
	inline int32_t* get_address_of_m_MaxRetryDelay_1() { return &___m_MaxRetryDelay_1; }
	inline void set_m_MaxRetryDelay_1(int32_t value)
	{
		___m_MaxRetryDelay_1 = value;
	}

	inline static int32_t get_offset_of_m_ExponentialFactor_2() { return static_cast<int32_t>(offsetof(ExponentialRetryPolicy_t259DF2B027844A356C64A74136CCDBE4F90F9D37, ___m_ExponentialFactor_2)); }
	inline int32_t get_m_ExponentialFactor_2() const { return ___m_ExponentialFactor_2; }
	inline int32_t* get_address_of_m_ExponentialFactor_2() { return &___m_ExponentialFactor_2; }
	inline void set_m_ExponentialFactor_2(int32_t value)
	{
		___m_ExponentialFactor_2 = value;
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Purchasing.ScriptingStoreCallback
struct ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Extension.IStoreCallback UnityEngine.Purchasing.ScriptingStoreCallback::m_ForwardTo
	RuntimeObject* ___m_ForwardTo_0;
	// Uniject.IUtil UnityEngine.Purchasing.ScriptingStoreCallback::m_Util
	RuntimeObject* ___m_Util_1;

public:
	inline static int32_t get_offset_of_m_ForwardTo_0() { return static_cast<int32_t>(offsetof(ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288, ___m_ForwardTo_0)); }
	inline RuntimeObject* get_m_ForwardTo_0() const { return ___m_ForwardTo_0; }
	inline RuntimeObject** get_address_of_m_ForwardTo_0() { return &___m_ForwardTo_0; }
	inline void set_m_ForwardTo_0(RuntimeObject* value)
	{
		___m_ForwardTo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ForwardTo_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Util_1() { return static_cast<int32_t>(offsetof(ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288, ___m_Util_1)); }
	inline RuntimeObject* get_m_Util_1() const { return ___m_Util_1; }
	inline RuntimeObject** get_address_of_m_Util_1() { return &___m_Util_1; }
	inline void set_m_Util_1(RuntimeObject* value)
	{
		___m_Util_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Util_1), (void*)value);
	}
};


// UnityEngine.Purchasing.ScriptingUnityCallback
struct ScriptingUnityCallback_tC9375469A489B48C41A433AE8E70E2C92688A28B  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.IUnityCallback UnityEngine.Purchasing.ScriptingUnityCallback::forwardTo
	RuntimeObject* ___forwardTo_0;
	// Uniject.IUtil UnityEngine.Purchasing.ScriptingUnityCallback::util
	RuntimeObject* ___util_1;

public:
	inline static int32_t get_offset_of_forwardTo_0() { return static_cast<int32_t>(offsetof(ScriptingUnityCallback_tC9375469A489B48C41A433AE8E70E2C92688A28B, ___forwardTo_0)); }
	inline RuntimeObject* get_forwardTo_0() const { return ___forwardTo_0; }
	inline RuntimeObject** get_address_of_forwardTo_0() { return &___forwardTo_0; }
	inline void set_forwardTo_0(RuntimeObject* value)
	{
		___forwardTo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___forwardTo_0), (void*)value);
	}

	inline static int32_t get_offset_of_util_1() { return static_cast<int32_t>(offsetof(ScriptingUnityCallback_tC9375469A489B48C41A433AE8E70E2C92688A28B, ___util_1)); }
	inline RuntimeObject* get_util_1() const { return ___util_1; }
	inline RuntimeObject** get_address_of_util_1() { return &___util_1; }
	inline void set_util_1(RuntimeObject* value)
	{
		___util_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___util_1), (void*)value);
	}
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D  : public RuntimeObject
{
public:
	// System.Action UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0::onRetryAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onRetryAction_0;
	// System.Int32 UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0::currentRetryDelay
	int32_t ___currentRetryDelay_1;
	// UnityEngine.Purchasing.ExponentialRetryPolicy UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0::<>4__this
	ExponentialRetryPolicy_t259DF2B027844A356C64A74136CCDBE4F90F9D37 * ___U3CU3E4__this_2;
	// System.Action`1<System.Action> UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0::actionToTry
	Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * ___actionToTry_3;

public:
	inline static int32_t get_offset_of_onRetryAction_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D, ___onRetryAction_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onRetryAction_0() const { return ___onRetryAction_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onRetryAction_0() { return &___onRetryAction_0; }
	inline void set_onRetryAction_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onRetryAction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRetryAction_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentRetryDelay_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D, ___currentRetryDelay_1)); }
	inline int32_t get_currentRetryDelay_1() const { return ___currentRetryDelay_1; }
	inline int32_t* get_address_of_currentRetryDelay_1() { return &___currentRetryDelay_1; }
	inline void set_currentRetryDelay_1(int32_t value)
	{
		___currentRetryDelay_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D, ___U3CU3E4__this_2)); }
	inline ExponentialRetryPolicy_t259DF2B027844A356C64A74136CCDBE4F90F9D37 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ExponentialRetryPolicy_t259DF2B027844A356C64A74136CCDBE4F90F9D37 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ExponentialRetryPolicy_t259DF2B027844A356C64A74136CCDBE4F90F9D37 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_actionToTry_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D, ___actionToTry_3)); }
	inline Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * get_actionToTry_3() const { return ___actionToTry_3; }
	inline Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC ** get_address_of_actionToTry_3() { return &___actionToTry_3; }
	inline void set_actionToTry_3(Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * value)
	{
		___actionToTry_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionToTry_3), (void*)value);
	}
};


// UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t35E59837B7A8D9A9033DF940B833CA8E375F5974  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ScriptingStoreCallback UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass6_0::<>4__this
	ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * ___U3CU3E4__this_0;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription> UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass6_0::products
	List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * ___products_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t35E59837B7A8D9A9033DF940B833CA8E375F5974, ___U3CU3E4__this_0)); }
	inline ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_products_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t35E59837B7A8D9A9033DF940B833CA8E375F5974, ___products_1)); }
	inline List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * get_products_1() const { return ___products_1; }
	inline List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF ** get_address_of_products_1() { return &___products_1; }
	inline void set_products_1(List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * value)
	{
		___products_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___products_1), (void*)value);
	}
};


// UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t807EC72F490C70CEB518B7C7199B43D6E9AA54F1  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ScriptingStoreCallback UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass7_0::<>4__this
	ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * ___U3CU3E4__this_0;
	// System.String UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass7_0::id
	String_t* ___id_1;
	// System.String UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass7_0::receipt
	String_t* ___receipt_2;
	// System.String UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass7_0::transactionID
	String_t* ___transactionID_3;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t807EC72F490C70CEB518B7C7199B43D6E9AA54F1, ___U3CU3E4__this_0)); }
	inline ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t807EC72F490C70CEB518B7C7199B43D6E9AA54F1, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_1), (void*)value);
	}

	inline static int32_t get_offset_of_receipt_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t807EC72F490C70CEB518B7C7199B43D6E9AA54F1, ___receipt_2)); }
	inline String_t* get_receipt_2() const { return ___receipt_2; }
	inline String_t** get_address_of_receipt_2() { return &___receipt_2; }
	inline void set_receipt_2(String_t* value)
	{
		___receipt_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receipt_2), (void*)value);
	}

	inline static int32_t get_offset_of_transactionID_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t807EC72F490C70CEB518B7C7199B43D6E9AA54F1, ___transactionID_3)); }
	inline String_t* get_transactionID_3() const { return ___transactionID_3; }
	inline String_t** get_address_of_transactionID_3() { return &___transactionID_3; }
	inline void set_transactionID_3(String_t* value)
	{
		___transactionID_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transactionID_3), (void*)value);
	}
};


// UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tC875F56D08FF4FFE51B8B881279B402786BA4210  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ScriptingStoreCallback UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass8_0::<>4__this
	ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * ___U3CU3E4__this_0;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass8_0::purchasedProducts
	List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA * ___purchasedProducts_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tC875F56D08FF4FFE51B8B881279B402786BA4210, ___U3CU3E4__this_0)); }
	inline ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_purchasedProducts_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tC875F56D08FF4FFE51B8B881279B402786BA4210, ___purchasedProducts_1)); }
	inline List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA * get_purchasedProducts_1() const { return ___purchasedProducts_1; }
	inline List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA ** get_address_of_purchasedProducts_1() { return &___purchasedProducts_1; }
	inline void set_purchasedProducts_1(List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA * value)
	{
		___purchasedProducts_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___purchasedProducts_1), (void*)value);
	}
};


// UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t8E9729856B67388D808F413A54BC9473455A39E4  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ScriptingStoreCallback UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass9_0::<>4__this
	ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * ___U3CU3E4__this_0;
	// UnityEngine.Purchasing.Extension.PurchaseFailureDescription UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass9_0::desc
	PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * ___desc_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t8E9729856B67388D808F413A54BC9473455A39E4, ___U3CU3E4__this_0)); }
	inline ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_desc_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t8E9729856B67388D808F413A54BC9473455A39E4, ___desc_1)); }
	inline PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * get_desc_1() const { return ___desc_1; }
	inline PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 ** get_address_of_desc_1() { return &___desc_1; }
	inline void set_desc_1(PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * value)
	{
		___desc_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___desc_1), (void*)value);
	}
};


// UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t90113C5AD2C2F802FFFDC7C20741B5A27875F266  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ScriptingUnityCallback UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass3_0::<>4__this
	ScriptingUnityCallback_tC9375469A489B48C41A433AE8E70E2C92688A28B * ___U3CU3E4__this_0;
	// System.String UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass3_0::json
	String_t* ___json_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t90113C5AD2C2F802FFFDC7C20741B5A27875F266, ___U3CU3E4__this_0)); }
	inline ScriptingUnityCallback_tC9375469A489B48C41A433AE8E70E2C92688A28B * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ScriptingUnityCallback_tC9375469A489B48C41A433AE8E70E2C92688A28B ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ScriptingUnityCallback_tC9375469A489B48C41A433AE8E70E2C92688A28B * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_json_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t90113C5AD2C2F802FFFDC7C20741B5A27875F266, ___json_1)); }
	inline String_t* get_json_1() const { return ___json_1; }
	inline String_t** get_address_of_json_1() { return &___json_1; }
	inline void set_json_1(String_t* value)
	{
		___json_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_1), (void*)value);
	}
};


// UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tEF82BC14FD968A3C437E1CC7E4C108819E022D43  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ScriptingUnityCallback UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass4_0::<>4__this
	ScriptingUnityCallback_tC9375469A489B48C41A433AE8E70E2C92688A28B * ___U3CU3E4__this_0;
	// System.String UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass4_0::json
	String_t* ___json_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tEF82BC14FD968A3C437E1CC7E4C108819E022D43, ___U3CU3E4__this_0)); }
	inline ScriptingUnityCallback_tC9375469A489B48C41A433AE8E70E2C92688A28B * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ScriptingUnityCallback_tC9375469A489B48C41A433AE8E70E2C92688A28B ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ScriptingUnityCallback_tC9375469A489B48C41A433AE8E70E2C92688A28B * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_json_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tEF82BC14FD968A3C437E1CC7E4C108819E022D43, ___json_1)); }
	inline String_t* get_json_1() const { return ___json_1; }
	inline String_t** get_address_of_json_1() { return &___json_1; }
	inline void set_json_1(String_t* value)
	{
		___json_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_1), (void*)value);
	}
};


// UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tE225EAD07BBB4B788560A475B5806E9FC1F24B3D  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ScriptingUnityCallback UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass5_0::<>4__this
	ScriptingUnityCallback_tC9375469A489B48C41A433AE8E70E2C92688A28B * ___U3CU3E4__this_0;
	// System.String UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass5_0::id
	String_t* ___id_1;
	// System.String UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass5_0::receipt
	String_t* ___receipt_2;
	// System.String UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass5_0::transactionID
	String_t* ___transactionID_3;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tE225EAD07BBB4B788560A475B5806E9FC1F24B3D, ___U3CU3E4__this_0)); }
	inline ScriptingUnityCallback_tC9375469A489B48C41A433AE8E70E2C92688A28B * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ScriptingUnityCallback_tC9375469A489B48C41A433AE8E70E2C92688A28B ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ScriptingUnityCallback_tC9375469A489B48C41A433AE8E70E2C92688A28B * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tE225EAD07BBB4B788560A475B5806E9FC1F24B3D, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_1), (void*)value);
	}

	inline static int32_t get_offset_of_receipt_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tE225EAD07BBB4B788560A475B5806E9FC1F24B3D, ___receipt_2)); }
	inline String_t* get_receipt_2() const { return ___receipt_2; }
	inline String_t** get_address_of_receipt_2() { return &___receipt_2; }
	inline void set_receipt_2(String_t* value)
	{
		___receipt_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receipt_2), (void*)value);
	}

	inline static int32_t get_offset_of_transactionID_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tE225EAD07BBB4B788560A475B5806E9FC1F24B3D, ___transactionID_3)); }
	inline String_t* get_transactionID_3() const { return ___transactionID_3; }
	inline String_t** get_address_of_transactionID_3() { return &___transactionID_3; }
	inline void set_transactionID_3(String_t* value)
	{
		___transactionID_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transactionID_3), (void*)value);
	}
};


// UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tC9B5DE02A07173655F9C329B4D7934C41D058365  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ScriptingUnityCallback UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass6_0::<>4__this
	ScriptingUnityCallback_tC9375469A489B48C41A433AE8E70E2C92688A28B * ___U3CU3E4__this_0;
	// System.String UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass6_0::json
	String_t* ___json_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tC9B5DE02A07173655F9C329B4D7934C41D058365, ___U3CU3E4__this_0)); }
	inline ScriptingUnityCallback_tC9375469A489B48C41A433AE8E70E2C92688A28B * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ScriptingUnityCallback_tC9375469A489B48C41A433AE8E70E2C92688A28B ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ScriptingUnityCallback_tC9375469A489B48C41A433AE8E70E2C92688A28B * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_json_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tC9B5DE02A07173655F9C329B4D7934C41D058365, ___json_1)); }
	inline String_t* get_json_1() const { return ___json_1; }
	inline String_t** get_address_of_json_1() { return &___json_1; }
	inline void set_json_1(String_t* value)
	{
		___json_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_1), (void*)value);
	}
};


// UnityEngine.Purchasing.SkuDetailsQueryResponse/<>c
struct U3CU3Ec_tFD3976FDD96338F9F0BE078B997DD4378845C9C4  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tFD3976FDD96338F9F0BE078B997DD4378845C9C4_StaticFields
{
public:
	// UnityEngine.Purchasing.SkuDetailsQueryResponse/<>c UnityEngine.Purchasing.SkuDetailsQueryResponse/<>c::<>9
	U3CU3Ec_tFD3976FDD96338F9F0BE078B997DD4378845C9C4 * ___U3CU3E9_0;
	// System.Func`2<System.ValueTuple`2<UnityEngine.Purchasing.Models.IGoogleBillingResult,System.Collections.Generic.IEnumerable`1<UnityEngine.AndroidJavaObject>>,System.Boolean> UnityEngine.Purchasing.SkuDetailsQueryResponse/<>c::<>9__2_0
	Func_2_tBE41AF6F1AD6F17DD891D60517652DCB4105073E * ___U3CU3E9__2_0_1;
	// System.Func`2<System.ValueTuple`2<UnityEngine.Purchasing.Models.IGoogleBillingResult,System.Collections.Generic.IEnumerable`1<UnityEngine.AndroidJavaObject>>,System.Collections.Generic.IEnumerable`1<UnityEngine.AndroidJavaObject>> UnityEngine.Purchasing.SkuDetailsQueryResponse/<>c::<>9__2_1
	Func_2_t606423AEDD160D7C58CD771399323F7AA893EC51 * ___U3CU3E9__2_1_2;
	// System.Func`2<System.ValueTuple`2<UnityEngine.Purchasing.Models.IGoogleBillingResult,System.Collections.Generic.IEnumerable`1<UnityEngine.AndroidJavaObject>>,UnityEngine.Purchasing.Models.IGoogleBillingResult> UnityEngine.Purchasing.SkuDetailsQueryResponse/<>c::<>9__3_0
	Func_2_t8B7332CAC5E7BE3570D81E13FD4C0EA5A8E3CBB3 * ___U3CU3E9__3_0_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFD3976FDD96338F9F0BE078B997DD4378845C9C4_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tFD3976FDD96338F9F0BE078B997DD4378845C9C4 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tFD3976FDD96338F9F0BE078B997DD4378845C9C4 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tFD3976FDD96338F9F0BE078B997DD4378845C9C4 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFD3976FDD96338F9F0BE078B997DD4378845C9C4_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Func_2_tBE41AF6F1AD6F17DD891D60517652DCB4105073E * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Func_2_tBE41AF6F1AD6F17DD891D60517652DCB4105073E ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Func_2_tBE41AF6F1AD6F17DD891D60517652DCB4105073E * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFD3976FDD96338F9F0BE078B997DD4378845C9C4_StaticFields, ___U3CU3E9__2_1_2)); }
	inline Func_2_t606423AEDD160D7C58CD771399323F7AA893EC51 * get_U3CU3E9__2_1_2() const { return ___U3CU3E9__2_1_2; }
	inline Func_2_t606423AEDD160D7C58CD771399323F7AA893EC51 ** get_address_of_U3CU3E9__2_1_2() { return &___U3CU3E9__2_1_2; }
	inline void set_U3CU3E9__2_1_2(Func_2_t606423AEDD160D7C58CD771399323F7AA893EC51 * value)
	{
		___U3CU3E9__2_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFD3976FDD96338F9F0BE078B997DD4378845C9C4_StaticFields, ___U3CU3E9__3_0_3)); }
	inline Func_2_t8B7332CAC5E7BE3570D81E13FD4C0EA5A8E3CBB3 * get_U3CU3E9__3_0_3() const { return ___U3CU3E9__3_0_3; }
	inline Func_2_t8B7332CAC5E7BE3570D81E13FD4C0EA5A8E3CBB3 ** get_address_of_U3CU3E9__3_0_3() { return &___U3CU3E9__3_0_3; }
	inline void set_U3CU3E9__3_0_3(Func_2_t8B7332CAC5E7BE3570D81E13FD4C0EA5A8E3CBB3 * value)
	{
		___U3CU3E9__3_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_3), (void*)value);
	}
};


// UnityEngine.Purchasing.SkuDetailsResponseListener/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t300A8A8DF7C9D0E68C0CA0FE8C269A2E5A2356BD  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaObject UnityEngine.Purchasing.SkuDetailsResponseListener/<>c__DisplayClass4_0::skuDetails
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___skuDetails_0;
	// UnityEngine.Purchasing.SkuDetailsResponseListener UnityEngine.Purchasing.SkuDetailsResponseListener/<>c__DisplayClass4_0::<>4__this
	SkuDetailsResponseListener_t81E031C7B43FAF59CA2593FC977A56DA8F7BBC97 * ___U3CU3E4__this_1;
	// UnityEngine.AndroidJavaObject UnityEngine.Purchasing.SkuDetailsResponseListener/<>c__DisplayClass4_0::billingResult
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___billingResult_2;

public:
	inline static int32_t get_offset_of_skuDetails_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t300A8A8DF7C9D0E68C0CA0FE8C269A2E5A2356BD, ___skuDetails_0)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_skuDetails_0() const { return ___skuDetails_0; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_skuDetails_0() { return &___skuDetails_0; }
	inline void set_skuDetails_0(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___skuDetails_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skuDetails_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t300A8A8DF7C9D0E68C0CA0FE8C269A2E5A2356BD, ___U3CU3E4__this_1)); }
	inline SkuDetailsResponseListener_t81E031C7B43FAF59CA2593FC977A56DA8F7BBC97 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline SkuDetailsResponseListener_t81E031C7B43FAF59CA2593FC977A56DA8F7BBC97 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(SkuDetailsResponseListener_t81E031C7B43FAF59CA2593FC977A56DA8F7BBC97 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}

	inline static int32_t get_offset_of_billingResult_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t300A8A8DF7C9D0E68C0CA0FE8C269A2E5A2356BD, ___billingResult_2)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_billingResult_2() const { return ___billingResult_2; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_billingResult_2() { return &___billingResult_2; }
	inline void set_billingResult_2(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___billingResult_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___billingResult_2), (void*)value);
	}
};


// UnityEngine.Purchasing.StandardPurchasingModule/MicrosoftConfiguration
struct MicrosoftConfiguration_t72E7005BD172865A7745C2935D2880DEFA88317D  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule/MicrosoftConfiguration::module
	StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * ___module_0;

public:
	inline static int32_t get_offset_of_module_0() { return static_cast<int32_t>(offsetof(MicrosoftConfiguration_t72E7005BD172865A7745C2935D2880DEFA88317D, ___module_0)); }
	inline StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * get_module_0() const { return ___module_0; }
	inline StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 ** get_address_of_module_0() { return &___module_0; }
	inline void set_module_0(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * value)
	{
		___module_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_0), (void*)value);
	}
};


// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance
struct StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance::<storeName>k__BackingField
	String_t* ___U3CstoreNameU3Ek__BackingField_0;
	// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance::<instance>k__BackingField
	RuntimeObject* ___U3CinstanceU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CstoreNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA, ___U3CstoreNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CstoreNameU3Ek__BackingField_0() const { return ___U3CstoreNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CstoreNameU3Ek__BackingField_0() { return &___U3CstoreNameU3Ek__BackingField_0; }
	inline void set_U3CstoreNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CstoreNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstoreNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA, ___U3CinstanceU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CinstanceU3Ek__BackingField_1() const { return ___U3CinstanceU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CinstanceU3Ek__BackingField_1() { return &___U3CinstanceU3Ek__BackingField_1; }
	inline void set_U3CinstanceU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CinstanceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tB18ED9C2044158C2044A084B4D6829E404E0F236  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.UDPImpl UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass10_0::<>4__this
	UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * ___U3CU3E4__this_0;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass10_0::products
	ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 * ___products_1;
	// System.Action`2<System.Boolean,System.String> UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass10_0::retrieveCallback
	Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * ___retrieveCallback_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tB18ED9C2044158C2044A084B4D6829E404E0F236, ___U3CU3E4__this_0)); }
	inline UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_products_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tB18ED9C2044158C2044A084B4D6829E404E0F236, ___products_1)); }
	inline ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 * get_products_1() const { return ___products_1; }
	inline ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 ** get_address_of_products_1() { return &___products_1; }
	inline void set_products_1(ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 * value)
	{
		___products_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___products_1), (void*)value);
	}

	inline static int32_t get_offset_of_retrieveCallback_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tB18ED9C2044158C2044A084B4D6829E404E0F236, ___retrieveCallback_2)); }
	inline Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * get_retrieveCallback_2() const { return ___retrieveCallback_2; }
	inline Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 ** get_address_of_retrieveCallback_2() { return &___retrieveCallback_2; }
	inline void set_retrieveCallback_2(Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * value)
	{
		___retrieveCallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___retrieveCallback_2), (void*)value);
	}
};


// UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tA52647570260163D1D5F8C1FDA00B24D12D032FA  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass11_0::product
	ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___product_0;
	// UnityEngine.Purchasing.UDPImpl UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass11_0::<>4__this
	UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_product_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tA52647570260163D1D5F8C1FDA00B24D12D032FA, ___product_0)); }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * get_product_0() const { return ___product_0; }
	inline ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 ** get_address_of_product_0() { return &___product_0; }
	inline void set_product_0(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * value)
	{
		___product_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___product_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tA52647570260163D1D5F8C1FDA00B24D12D032FA, ___U3CU3E4__this_1)); }
	inline UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// UnityEngine.Purchasing.UDPReflectionUtils/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tFC02CD6F9A7EFE0BD5EE8356D40FD5373E0DC90D  : public RuntimeObject
{
public:
	// System.Reflection.Assembly UnityEngine.Purchasing.UDPReflectionUtils/<>c__DisplayClass6_0::assembly
	Assembly_t * ___assembly_0;

public:
	inline static int32_t get_offset_of_assembly_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tFC02CD6F9A7EFE0BD5EE8356D40FD5373E0DC90D, ___assembly_0)); }
	inline Assembly_t * get_assembly_0() const { return ___assembly_0; }
	inline Assembly_t ** get_address_of_assembly_0() { return &___assembly_0; }
	inline void set_assembly_0(Assembly_t * value)
	{
		___assembly_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_0), (void*)value);
	}
};


// UnityEngine.Purchasing.UIFakeStore/<>c
struct U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372_StaticFields
{
public:
	// UnityEngine.Purchasing.UIFakeStore/<>c UnityEngine.Purchasing.UIFakeStore/<>c::<>9
	U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.String> UnityEngine.Purchasing.UIFakeStore/<>c::<>9__20_0
	Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * ___U3CU3E9__20_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372_StaticFields, ___U3CU3E9__20_0_1)); }
	inline Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * get_U3CU3E9__20_0_1() const { return ___U3CU3E9__20_0_1; }
	inline Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 ** get_address_of_U3CU3E9__20_0_1() { return &___U3CU3E9__20_0_1; }
	inline void set_U3CU3E9__20_0_1(Func_2_tAB10861D99AA807AE21941AC819229F13C65AE06 * value)
	{
		___U3CU3E9__20_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_0_1), (void*)value);
	}
};


// UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48
struct U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48::delay
	int32_t ___delay_2;
	// UnityEngine.Purchasing.Extension.UnityUtil UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48::<>4__this
	UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172 * ___U3CU3E4__this_3;
	// System.Collections.IEnumerator UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48::coroutine
	RuntimeObject* ___coroutine_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C, ___delay_2)); }
	inline int32_t get_delay_2() const { return ___delay_2; }
	inline int32_t* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(int32_t value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C, ___U3CU3E4__this_3)); }
	inline UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_coroutine_4() { return static_cast<int32_t>(offsetof(U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C, ___coroutine_4)); }
	inline RuntimeObject* get_coroutine_4() const { return ___coroutine_4; }
	inline RuntimeObject** get_address_of_coroutine_4() { return &___coroutine_4; }
	inline void set_coroutine_4(RuntimeObject* value)
	{
		___coroutine_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coroutine_4), (void*)value);
	}
};


// UnityEngine.Purchasing.WinRTStore/<>c
struct U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D_StaticFields
{
public:
	// UnityEngine.Purchasing.WinRTStore/<>c UnityEngine.Purchasing.WinRTStore/<>c::<>9
	U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean> UnityEngine.Purchasing.WinRTStore/<>c::<>9__8_0
	Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * ___U3CU3E9__8_0_1;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription> UnityEngine.Purchasing.WinRTStore/<>c::<>9__8_1
	Func_2_t26F79FEEAFC83C364423428EC9E72457BDC04366 * ___U3CU3E9__8_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D_StaticFields, ___U3CU3E9__8_0_1)); }
	inline Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * get_U3CU3E9__8_0_1() const { return ___U3CU3E9__8_0_1; }
	inline Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 ** get_address_of_U3CU3E9__8_0_1() { return &___U3CU3E9__8_0_1; }
	inline void set_U3CU3E9__8_0_1(Func_2_t2F3D631795CE97DFD1F4F32CA7BA9B506C483851 * value)
	{
		___U3CU3E9__8_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D_StaticFields, ___U3CU3E9__8_1_2)); }
	inline Func_2_t26F79FEEAFC83C364423428EC9E72457BDC04366 * get_U3CU3E9__8_1_2() const { return ___U3CU3E9__8_1_2; }
	inline Func_2_t26F79FEEAFC83C364423428EC9E72457BDC04366 ** get_address_of_U3CU3E9__8_1_2() { return &___U3CU3E9__8_1_2; }
	inline void set_U3CU3E9__8_1_2(Func_2_t26F79FEEAFC83C364423428EC9E72457BDC04366 * value)
	{
		___U3CU3E9__8_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_1_2), (void*)value);
	}
};


// System.ValueTuple`2<UnityEngine.Purchasing.Models.IGoogleBillingResult,System.Collections.Generic.IEnumerable`1<UnityEngine.AndroidJavaObject>>
struct ValueTuple_2_t6CF608365E2E53BC8202C71688CEFD7643043255 
{
public:
	// T1 System.ValueTuple`2::Item1
	RuntimeObject* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject* ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t6CF608365E2E53BC8202C71688CEFD7643043255, ___Item1_0)); }
	inline RuntimeObject* get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject* value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t6CF608365E2E53BC8202C71688CEFD7643043255, ___Item2_1)); }
	inline RuntimeObject* get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject* value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Decimal
struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
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


// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
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


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_task_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___javaInterface_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___proxyObject_1)); }
	inline intptr_t get_proxyObject_1() const { return ___proxyObject_1; }
	inline intptr_t* get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(intptr_t value)
	{
		___proxyObject_1 = value;
	}
};

struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_JavaLangSystemClass_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};


// UnityEngine.Purchasing.AppStore
struct AppStore_t0DC87570FC5B5AA50F2B2BFF4860C452BE702904 
{
public:
	// System.Int32 UnityEngine.Purchasing.AppStore::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AppStore_t0DC87570FC5B5AA50F2B2BFF4860C452BE702904, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
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


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Purchasing.FakeStoreUIMode
struct FakeStoreUIMode_tE679DB350441225A22E631E8E8ADBB8B6C74C2F8 
{
public:
	// System.Int32 UnityEngine.Purchasing.FakeStoreUIMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FakeStoreUIMode_tE679DB350441225A22E631E8E8ADBB8B6C74C2F8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.Models.GoogleBillingResponseCode
struct GoogleBillingResponseCode_tF7E56F47FBEC5E601AA07854CC11ADA618B17E32 
{
public:
	// System.Int32 UnityEngine.Purchasing.Models.GoogleBillingResponseCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GoogleBillingResponseCode_tF7E56F47FBEC5E601AA07854CC11ADA618B17E32, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.InitializationFailureReason
struct InitializationFailureReason_t63D9BE9105494C8AB7836A61F07115B84654837B 
{
public:
	// System.Int32 UnityEngine.Purchasing.InitializationFailureReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitializationFailureReason_t63D9BE9105494C8AB7836A61F07115B84654837B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.LogType
struct LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.Purchasing.ProductType
struct ProductType_tBF332314E0B8C2094184DDA4751FDB3518A79D5A 
{
public:
	// System.Int32 UnityEngine.Purchasing.ProductType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProductType_tBF332314E0B8C2094184DDA4751FDB3518A79D5A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.PurchaseFailureReason
struct PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5 
{
public:
	// System.Int32 UnityEngine.Purchasing.PurchaseFailureReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5, ___value___2)); }
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


// UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode
struct StoreSpecificPurchaseErrorCode_t7BF6EC79694664A957BAAC28379CA3920FBE2B53 
{
public:
	// System.Int32 UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StoreSpecificPurchaseErrorCode_t7BF6EC79694664A957BAAC28379CA3920FBE2B53, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// UnityEngine.Purchasing.Default.WinProductDescription
struct WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<platformSpecificID>k__BackingField
	String_t* ___U3CplatformSpecificIDU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<price>k__BackingField
	String_t* ___U3CpriceU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<title>k__BackingField
	String_t* ___U3CtitleU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<description>k__BackingField
	String_t* ___U3CdescriptionU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<ISOCurrencyCode>k__BackingField
	String_t* ___U3CISOCurrencyCodeU3Ek__BackingField_4;
	// System.Decimal UnityEngine.Purchasing.Default.WinProductDescription::<priceDecimal>k__BackingField
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___U3CpriceDecimalU3Ek__BackingField_5;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_6;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Purchasing.Default.WinProductDescription::<consumable>k__BackingField
	bool ___U3CconsumableU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CplatformSpecificIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829, ___U3CplatformSpecificIDU3Ek__BackingField_0)); }
	inline String_t* get_U3CplatformSpecificIDU3Ek__BackingField_0() const { return ___U3CplatformSpecificIDU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CplatformSpecificIDU3Ek__BackingField_0() { return &___U3CplatformSpecificIDU3Ek__BackingField_0; }
	inline void set_U3CplatformSpecificIDU3Ek__BackingField_0(String_t* value)
	{
		___U3CplatformSpecificIDU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CplatformSpecificIDU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpriceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829, ___U3CpriceU3Ek__BackingField_1)); }
	inline String_t* get_U3CpriceU3Ek__BackingField_1() const { return ___U3CpriceU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CpriceU3Ek__BackingField_1() { return &___U3CpriceU3Ek__BackingField_1; }
	inline void set_U3CpriceU3Ek__BackingField_1(String_t* value)
	{
		___U3CpriceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpriceU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtitleU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829, ___U3CtitleU3Ek__BackingField_2)); }
	inline String_t* get_U3CtitleU3Ek__BackingField_2() const { return ___U3CtitleU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CtitleU3Ek__BackingField_2() { return &___U3CtitleU3Ek__BackingField_2; }
	inline void set_U3CtitleU3Ek__BackingField_2(String_t* value)
	{
		___U3CtitleU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtitleU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdescriptionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829, ___U3CdescriptionU3Ek__BackingField_3)); }
	inline String_t* get_U3CdescriptionU3Ek__BackingField_3() const { return ___U3CdescriptionU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CdescriptionU3Ek__BackingField_3() { return &___U3CdescriptionU3Ek__BackingField_3; }
	inline void set_U3CdescriptionU3Ek__BackingField_3(String_t* value)
	{
		___U3CdescriptionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdescriptionU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CISOCurrencyCodeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829, ___U3CISOCurrencyCodeU3Ek__BackingField_4)); }
	inline String_t* get_U3CISOCurrencyCodeU3Ek__BackingField_4() const { return ___U3CISOCurrencyCodeU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CISOCurrencyCodeU3Ek__BackingField_4() { return &___U3CISOCurrencyCodeU3Ek__BackingField_4; }
	inline void set_U3CISOCurrencyCodeU3Ek__BackingField_4(String_t* value)
	{
		___U3CISOCurrencyCodeU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CISOCurrencyCodeU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpriceDecimalU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829, ___U3CpriceDecimalU3Ek__BackingField_5)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_U3CpriceDecimalU3Ek__BackingField_5() const { return ___U3CpriceDecimalU3Ek__BackingField_5; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_U3CpriceDecimalU3Ek__BackingField_5() { return &___U3CpriceDecimalU3Ek__BackingField_5; }
	inline void set_U3CpriceDecimalU3Ek__BackingField_5(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___U3CpriceDecimalU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CreceiptU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829, ___U3CreceiptU3Ek__BackingField_6)); }
	inline String_t* get_U3CreceiptU3Ek__BackingField_6() const { return ___U3CreceiptU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CreceiptU3Ek__BackingField_6() { return &___U3CreceiptU3Ek__BackingField_6; }
	inline void set_U3CreceiptU3Ek__BackingField_6(String_t* value)
	{
		___U3CreceiptU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreceiptU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransactionIDU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829, ___U3CtransactionIDU3Ek__BackingField_7)); }
	inline String_t* get_U3CtransactionIDU3Ek__BackingField_7() const { return ___U3CtransactionIDU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CtransactionIDU3Ek__BackingField_7() { return &___U3CtransactionIDU3Ek__BackingField_7; }
	inline void set_U3CtransactionIDU3Ek__BackingField_7(String_t* value)
	{
		___U3CtransactionIDU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransactionIDU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CconsumableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829, ___U3CconsumableU3Ek__BackingField_8)); }
	inline bool get_U3CconsumableU3Ek__BackingField_8() const { return ___U3CconsumableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CconsumableU3Ek__BackingField_8() { return &___U3CconsumableU3Ek__BackingField_8; }
	inline void set_U3CconsumableU3Ek__BackingField_8(bool value)
	{
		___U3CconsumableU3Ek__BackingField_8 = value;
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_com
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Purchasing.Models.GoogleBillingResult
struct GoogleBillingResult_t7A633E3EF045BC4657A02A94719F1C5A138AEF03  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Models.GoogleBillingResponseCode UnityEngine.Purchasing.Models.GoogleBillingResult::<responseCode>k__BackingField
	int32_t ___U3CresponseCodeU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Models.GoogleBillingResult::<debugMessage>k__BackingField
	String_t* ___U3CdebugMessageU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CresponseCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GoogleBillingResult_t7A633E3EF045BC4657A02A94719F1C5A138AEF03, ___U3CresponseCodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CresponseCodeU3Ek__BackingField_0() const { return ___U3CresponseCodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresponseCodeU3Ek__BackingField_0() { return &___U3CresponseCodeU3Ek__BackingField_0; }
	inline void set_U3CresponseCodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CresponseCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CdebugMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GoogleBillingResult_t7A633E3EF045BC4657A02A94719F1C5A138AEF03, ___U3CdebugMessageU3Ek__BackingField_1)); }
	inline String_t* get_U3CdebugMessageU3Ek__BackingField_1() const { return ___U3CdebugMessageU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CdebugMessageU3Ek__BackingField_1() { return &___U3CdebugMessageU3Ek__BackingField_1; }
	inline void set_U3CdebugMessageU3Ek__BackingField_1(String_t* value)
	{
		___U3CdebugMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdebugMessageU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Purchasing.JSONStore
struct JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B  : public AbstractStore_tB0FD374A2E9858EB3A2DC721CBA280409F9485C0
{
public:
	// UnityEngine.Purchasing.Extension.IStoreCallback UnityEngine.Purchasing.JSONStore::unity
	RuntimeObject* ___unity_0;
	// UnityEngine.Purchasing.INativeStore UnityEngine.Purchasing.JSONStore::m_Store
	RuntimeObject* ___m_Store_1;
	// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.JSONStore::m_Module
	StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * ___m_Module_2;
	// UnityEngine.ILogger UnityEngine.Purchasing.JSONStore::m_Logger
	RuntimeObject* ___m_Logger_3;
	// UnityEngine.Purchasing.Extension.PurchaseFailureDescription UnityEngine.Purchasing.JSONStore::m_LastPurchaseFailureDescription
	PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * ___m_LastPurchaseFailureDescription_4;
	// UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode UnityEngine.Purchasing.JSONStore::m_LastPurchaseErrorCode
	int32_t ___m_LastPurchaseErrorCode_5;

public:
	inline static int32_t get_offset_of_unity_0() { return static_cast<int32_t>(offsetof(JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B, ___unity_0)); }
	inline RuntimeObject* get_unity_0() const { return ___unity_0; }
	inline RuntimeObject** get_address_of_unity_0() { return &___unity_0; }
	inline void set_unity_0(RuntimeObject* value)
	{
		___unity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unity_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Store_1() { return static_cast<int32_t>(offsetof(JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B, ___m_Store_1)); }
	inline RuntimeObject* get_m_Store_1() const { return ___m_Store_1; }
	inline RuntimeObject** get_address_of_m_Store_1() { return &___m_Store_1; }
	inline void set_m_Store_1(RuntimeObject* value)
	{
		___m_Store_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Store_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Module_2() { return static_cast<int32_t>(offsetof(JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B, ___m_Module_2)); }
	inline StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * get_m_Module_2() const { return ___m_Module_2; }
	inline StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 ** get_address_of_m_Module_2() { return &___m_Module_2; }
	inline void set_m_Module_2(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * value)
	{
		___m_Module_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Module_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Logger_3() { return static_cast<int32_t>(offsetof(JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B, ___m_Logger_3)); }
	inline RuntimeObject* get_m_Logger_3() const { return ___m_Logger_3; }
	inline RuntimeObject** get_address_of_m_Logger_3() { return &___m_Logger_3; }
	inline void set_m_Logger_3(RuntimeObject* value)
	{
		___m_Logger_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Logger_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastPurchaseFailureDescription_4() { return static_cast<int32_t>(offsetof(JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B, ___m_LastPurchaseFailureDescription_4)); }
	inline PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * get_m_LastPurchaseFailureDescription_4() const { return ___m_LastPurchaseFailureDescription_4; }
	inline PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 ** get_address_of_m_LastPurchaseFailureDescription_4() { return &___m_LastPurchaseFailureDescription_4; }
	inline void set_m_LastPurchaseFailureDescription_4(PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * value)
	{
		___m_LastPurchaseFailureDescription_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LastPurchaseFailureDescription_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastPurchaseErrorCode_5() { return static_cast<int32_t>(offsetof(JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B, ___m_LastPurchaseErrorCode_5)); }
	inline int32_t get_m_LastPurchaseErrorCode_5() const { return ___m_LastPurchaseErrorCode_5; }
	inline int32_t* get_address_of_m_LastPurchaseErrorCode_5() { return &___m_LastPurchaseErrorCode_5; }
	inline void set_m_LastPurchaseErrorCode_5(int32_t value)
	{
		___m_LastPurchaseErrorCode_5 = value;
	}
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

// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductDefinition::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.ProductDefinition::<storeSpecificId>k__BackingField
	String_t* ___U3CstoreSpecificIdU3Ek__BackingField_1;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductDefinition::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_2;
	// System.Boolean UnityEngine.Purchasing.ProductDefinition::<enabled>k__BackingField
	bool ___U3CenabledU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition> UnityEngine.Purchasing.ProductDefinition::m_Payouts
	List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 * ___m_Payouts_4;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstoreSpecificIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572, ___U3CstoreSpecificIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CstoreSpecificIdU3Ek__BackingField_1() const { return ___U3CstoreSpecificIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CstoreSpecificIdU3Ek__BackingField_1() { return &___U3CstoreSpecificIdU3Ek__BackingField_1; }
	inline void set_U3CstoreSpecificIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CstoreSpecificIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstoreSpecificIdU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572, ___U3CtypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_2() const { return ___U3CtypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_2() { return &___U3CtypeU3Ek__BackingField_2; }
	inline void set_U3CtypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CenabledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572, ___U3CenabledU3Ek__BackingField_3)); }
	inline bool get_U3CenabledU3Ek__BackingField_3() const { return ___U3CenabledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CenabledU3Ek__BackingField_3() { return &___U3CenabledU3Ek__BackingField_3; }
	inline void set_U3CenabledU3Ek__BackingField_3(bool value)
	{
		___U3CenabledU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_m_Payouts_4() { return static_cast<int32_t>(offsetof(ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572, ___m_Payouts_4)); }
	inline List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 * get_m_Payouts_4() const { return ___m_Payouts_4; }
	inline List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 ** get_address_of_m_Payouts_4() { return &___m_Payouts_4; }
	inline void set_m_Payouts_4(List_1_tA412B3BCF33761A8E1663DFE231E9FB84169A4B5 * value)
	{
		___m_Payouts_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Payouts_4), (void*)value);
	}
};


// UnityEngine.Purchasing.Extension.PurchaseFailureDescription
struct PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Extension.PurchaseFailureDescription::<productId>k__BackingField
	String_t* ___U3CproductIdU3Ek__BackingField_0;
	// UnityEngine.Purchasing.PurchaseFailureReason UnityEngine.Purchasing.Extension.PurchaseFailureDescription::<reason>k__BackingField
	int32_t ___U3CreasonU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Extension.PurchaseFailureDescription::<message>k__BackingField
	String_t* ___U3CmessageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CproductIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8, ___U3CproductIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CproductIdU3Ek__BackingField_0() const { return ___U3CproductIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CproductIdU3Ek__BackingField_0() { return &___U3CproductIdU3Ek__BackingField_0; }
	inline void set_U3CproductIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CproductIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproductIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreasonU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8, ___U3CreasonU3Ek__BackingField_1)); }
	inline int32_t get_U3CreasonU3Ek__BackingField_1() const { return ___U3CreasonU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CreasonU3Ek__BackingField_1() { return &___U3CreasonU3Ek__BackingField_1; }
	inline void set_U3CreasonU3Ek__BackingField_1(int32_t value)
	{
		___U3CreasonU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8, ___U3CmessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CmessageU3Ek__BackingField_2() const { return ___U3CmessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CmessageU3Ek__BackingField_2() { return &___U3CmessageU3Ek__BackingField_2; }
	inline void set_U3CmessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CmessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmessageU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.Purchasing.SkuDetailsResponseListener
struct SkuDetailsResponseListener_t81E031C7B43FAF59CA2593FC977A56DA8F7BBC97  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// System.Action`2<UnityEngine.Purchasing.Models.IGoogleBillingResult,System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>> UnityEngine.Purchasing.SkuDetailsResponseListener::m_OnSkuDetailsResponse
	Action_2_t3FCCB9520841190A6A1B12DC655BF1CD7D82D02F * ___m_OnSkuDetailsResponse_5;
	// Uniject.IUtil UnityEngine.Purchasing.SkuDetailsResponseListener::m_Util
	RuntimeObject* ___m_Util_6;

public:
	inline static int32_t get_offset_of_m_OnSkuDetailsResponse_5() { return static_cast<int32_t>(offsetof(SkuDetailsResponseListener_t81E031C7B43FAF59CA2593FC977A56DA8F7BBC97, ___m_OnSkuDetailsResponse_5)); }
	inline Action_2_t3FCCB9520841190A6A1B12DC655BF1CD7D82D02F * get_m_OnSkuDetailsResponse_5() const { return ___m_OnSkuDetailsResponse_5; }
	inline Action_2_t3FCCB9520841190A6A1B12DC655BF1CD7D82D02F ** get_address_of_m_OnSkuDetailsResponse_5() { return &___m_OnSkuDetailsResponse_5; }
	inline void set_m_OnSkuDetailsResponse_5(Action_2_t3FCCB9520841190A6A1B12DC655BF1CD7D82D02F * value)
	{
		___m_OnSkuDetailsResponse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSkuDetailsResponse_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Util_6() { return static_cast<int32_t>(offsetof(SkuDetailsResponseListener_t81E031C7B43FAF59CA2593FC977A56DA8F7BBC97, ___m_Util_6)); }
	inline RuntimeObject* get_m_Util_6() const { return ___m_Util_6; }
	inline RuntimeObject** get_address_of_m_Util_6() { return &___m_Util_6; }
	inline void set_m_Util_6(RuntimeObject* value)
	{
		___m_Util_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Util_6), (void*)value);
	}
};


// UnityEngine.Purchasing.StandardPurchasingModule
struct StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6  : public AbstractPurchasingModule_tE97233CECF61E1D47FE937203B395835774FBB04
{
public:
	// System.String UnityEngine.Purchasing.StandardPurchasingModule::k_Version
	String_t* ___k_Version_1;
	// UnityEngine.Purchasing.AppStore UnityEngine.Purchasing.StandardPurchasingModule::m_AppStorePlatform
	int32_t ___m_AppStorePlatform_2;
	// UnityEngine.Purchasing.INativeStoreProvider UnityEngine.Purchasing.StandardPurchasingModule::m_NativeStoreProvider
	RuntimeObject* ___m_NativeStoreProvider_3;
	// UnityEngine.RuntimePlatform UnityEngine.Purchasing.StandardPurchasingModule::m_RuntimePlatform
	int32_t ___m_RuntimePlatform_4;
	// Uniject.IUtil UnityEngine.Purchasing.StandardPurchasingModule::<util>k__BackingField
	RuntimeObject* ___U3CutilU3Ek__BackingField_6;
	// UnityEngine.ILogger UnityEngine.Purchasing.StandardPurchasingModule::<logger>k__BackingField
	RuntimeObject* ___U3CloggerU3Ek__BackingField_7;
	// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance UnityEngine.Purchasing.StandardPurchasingModule::<storeInstance>k__BackingField
	StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA * ___U3CstoreInstanceU3Ek__BackingField_8;
	// UnityEngine.Purchasing.Telemetry.ITelemetryMetricsInstanceWrapper UnityEngine.Purchasing.StandardPurchasingModule::<telemetryMetricsInstanceWrapper>k__BackingField
	RuntimeObject* ___U3CtelemetryMetricsInstanceWrapperU3Ek__BackingField_9;
	// UnityEngine.Purchasing.Telemetry.ITelemetryDiagnosticsInstanceWrapper UnityEngine.Purchasing.StandardPurchasingModule::<telemetryDiagnosticsInstanceWrapper>k__BackingField
	RuntimeObject* ___U3CtelemetryDiagnosticsInstanceWrapperU3Ek__BackingField_10;
	// UnityEngine.Purchasing.FakeStoreUIMode UnityEngine.Purchasing.StandardPurchasingModule::<useFakeStoreUIMode>k__BackingField
	int32_t ___U3CuseFakeStoreUIModeU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::<useFakeStoreAlways>k__BackingField
	bool ___U3CuseFakeStoreAlwaysU3Ek__BackingField_13;
	// UnityEngine.Purchasing.WinRTStore UnityEngine.Purchasing.StandardPurchasingModule::windowsStore
	WinRTStore_t8CDB879BD9F0D28D831A5A89912DCD4966B95326 * ___windowsStore_14;

public:
	inline static int32_t get_offset_of_k_Version_1() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___k_Version_1)); }
	inline String_t* get_k_Version_1() const { return ___k_Version_1; }
	inline String_t** get_address_of_k_Version_1() { return &___k_Version_1; }
	inline void set_k_Version_1(String_t* value)
	{
		___k_Version_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Version_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_AppStorePlatform_2() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___m_AppStorePlatform_2)); }
	inline int32_t get_m_AppStorePlatform_2() const { return ___m_AppStorePlatform_2; }
	inline int32_t* get_address_of_m_AppStorePlatform_2() { return &___m_AppStorePlatform_2; }
	inline void set_m_AppStorePlatform_2(int32_t value)
	{
		___m_AppStorePlatform_2 = value;
	}

	inline static int32_t get_offset_of_m_NativeStoreProvider_3() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___m_NativeStoreProvider_3)); }
	inline RuntimeObject* get_m_NativeStoreProvider_3() const { return ___m_NativeStoreProvider_3; }
	inline RuntimeObject** get_address_of_m_NativeStoreProvider_3() { return &___m_NativeStoreProvider_3; }
	inline void set_m_NativeStoreProvider_3(RuntimeObject* value)
	{
		___m_NativeStoreProvider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NativeStoreProvider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_RuntimePlatform_4() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___m_RuntimePlatform_4)); }
	inline int32_t get_m_RuntimePlatform_4() const { return ___m_RuntimePlatform_4; }
	inline int32_t* get_address_of_m_RuntimePlatform_4() { return &___m_RuntimePlatform_4; }
	inline void set_m_RuntimePlatform_4(int32_t value)
	{
		___m_RuntimePlatform_4 = value;
	}

	inline static int32_t get_offset_of_U3CutilU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___U3CutilU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CutilU3Ek__BackingField_6() const { return ___U3CutilU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CutilU3Ek__BackingField_6() { return &___U3CutilU3Ek__BackingField_6; }
	inline void set_U3CutilU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CutilU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CutilU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CloggerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___U3CloggerU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CloggerU3Ek__BackingField_7() const { return ___U3CloggerU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CloggerU3Ek__BackingField_7() { return &___U3CloggerU3Ek__BackingField_7; }
	inline void set_U3CloggerU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CloggerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CloggerU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstoreInstanceU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___U3CstoreInstanceU3Ek__BackingField_8)); }
	inline StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA * get_U3CstoreInstanceU3Ek__BackingField_8() const { return ___U3CstoreInstanceU3Ek__BackingField_8; }
	inline StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA ** get_address_of_U3CstoreInstanceU3Ek__BackingField_8() { return &___U3CstoreInstanceU3Ek__BackingField_8; }
	inline void set_U3CstoreInstanceU3Ek__BackingField_8(StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA * value)
	{
		___U3CstoreInstanceU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstoreInstanceU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtelemetryMetricsInstanceWrapperU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___U3CtelemetryMetricsInstanceWrapperU3Ek__BackingField_9)); }
	inline RuntimeObject* get_U3CtelemetryMetricsInstanceWrapperU3Ek__BackingField_9() const { return ___U3CtelemetryMetricsInstanceWrapperU3Ek__BackingField_9; }
	inline RuntimeObject** get_address_of_U3CtelemetryMetricsInstanceWrapperU3Ek__BackingField_9() { return &___U3CtelemetryMetricsInstanceWrapperU3Ek__BackingField_9; }
	inline void set_U3CtelemetryMetricsInstanceWrapperU3Ek__BackingField_9(RuntimeObject* value)
	{
		___U3CtelemetryMetricsInstanceWrapperU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtelemetryMetricsInstanceWrapperU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtelemetryDiagnosticsInstanceWrapperU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___U3CtelemetryDiagnosticsInstanceWrapperU3Ek__BackingField_10)); }
	inline RuntimeObject* get_U3CtelemetryDiagnosticsInstanceWrapperU3Ek__BackingField_10() const { return ___U3CtelemetryDiagnosticsInstanceWrapperU3Ek__BackingField_10; }
	inline RuntimeObject** get_address_of_U3CtelemetryDiagnosticsInstanceWrapperU3Ek__BackingField_10() { return &___U3CtelemetryDiagnosticsInstanceWrapperU3Ek__BackingField_10; }
	inline void set_U3CtelemetryDiagnosticsInstanceWrapperU3Ek__BackingField_10(RuntimeObject* value)
	{
		___U3CtelemetryDiagnosticsInstanceWrapperU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtelemetryDiagnosticsInstanceWrapperU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseFakeStoreUIModeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___U3CuseFakeStoreUIModeU3Ek__BackingField_12)); }
	inline int32_t get_U3CuseFakeStoreUIModeU3Ek__BackingField_12() const { return ___U3CuseFakeStoreUIModeU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CuseFakeStoreUIModeU3Ek__BackingField_12() { return &___U3CuseFakeStoreUIModeU3Ek__BackingField_12; }
	inline void set_U3CuseFakeStoreUIModeU3Ek__BackingField_12(int32_t value)
	{
		___U3CuseFakeStoreUIModeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CuseFakeStoreAlwaysU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___U3CuseFakeStoreAlwaysU3Ek__BackingField_13)); }
	inline bool get_U3CuseFakeStoreAlwaysU3Ek__BackingField_13() const { return ___U3CuseFakeStoreAlwaysU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CuseFakeStoreAlwaysU3Ek__BackingField_13() { return &___U3CuseFakeStoreAlwaysU3Ek__BackingField_13; }
	inline void set_U3CuseFakeStoreAlwaysU3Ek__BackingField_13(bool value)
	{
		___U3CuseFakeStoreAlwaysU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_windowsStore_14() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6, ___windowsStore_14)); }
	inline WinRTStore_t8CDB879BD9F0D28D831A5A89912DCD4966B95326 * get_windowsStore_14() const { return ___windowsStore_14; }
	inline WinRTStore_t8CDB879BD9F0D28D831A5A89912DCD4966B95326 ** get_address_of_windowsStore_14() { return &___windowsStore_14; }
	inline void set_windowsStore_14(WinRTStore_t8CDB879BD9F0D28D831A5A89912DCD4966B95326 * value)
	{
		___windowsStore_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___windowsStore_14), (void*)value);
	}
};

struct StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6_StaticFields
{
public:
	// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::ModuleInstance
	StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * ___ModuleInstance_5;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Purchasing.AppStore,System.String> UnityEngine.Purchasing.StandardPurchasingModule::AndroidStoreNameMap
	Dictionary_2_t44560DF978B3A19D443806371A881CDCB3BB0308 * ___AndroidStoreNameMap_11;

public:
	inline static int32_t get_offset_of_ModuleInstance_5() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6_StaticFields, ___ModuleInstance_5)); }
	inline StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * get_ModuleInstance_5() const { return ___ModuleInstance_5; }
	inline StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 ** get_address_of_ModuleInstance_5() { return &___ModuleInstance_5; }
	inline void set_ModuleInstance_5(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * value)
	{
		___ModuleInstance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ModuleInstance_5), (void*)value);
	}

	inline static int32_t get_offset_of_AndroidStoreNameMap_11() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6_StaticFields, ___AndroidStoreNameMap_11)); }
	inline Dictionary_2_t44560DF978B3A19D443806371A881CDCB3BB0308 * get_AndroidStoreNameMap_11() const { return ___AndroidStoreNameMap_11; }
	inline Dictionary_2_t44560DF978B3A19D443806371A881CDCB3BB0308 ** get_address_of_AndroidStoreNameMap_11() { return &___AndroidStoreNameMap_11; }
	inline void set_AndroidStoreNameMap_11(Dictionary_2_t44560DF978B3A19D443806371A881CDCB3BB0308 * value)
	{
		___AndroidStoreNameMap_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AndroidStoreNameMap_11), (void*)value);
	}
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


// UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t859087A14AE95FD9CA3137ED6A5AD2B5AD954E2D  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ScriptingStoreCallback UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass5_0::<>4__this
	ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * ___U3CU3E4__this_0;
	// UnityEngine.Purchasing.InitializationFailureReason UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass5_0::reason
	int32_t ___reason_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t859087A14AE95FD9CA3137ED6A5AD2B5AD954E2D, ___U3CU3E4__this_0)); }
	inline ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_reason_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t859087A14AE95FD9CA3137ED6A5AD2B5AD954E2D, ___reason_1)); }
	inline int32_t get_reason_1() const { return ___reason_1; }
	inline int32_t* get_address_of_reason_1() { return &___reason_1; }
	inline void set_reason_1(int32_t value)
	{
		___reason_1 = value;
	}
};


// UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0/<<Invoke>g__Retry|0>d
struct U3CU3CInvokeU3Eg__RetryU7C0U3Ed_tCEAE898505D478F1042857B461814D0C72D5BDCF 
{
public:
	// System.Int32 UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0/<<Invoke>g__Retry|0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0/<<Invoke>g__Retry|0>d::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0 UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0/<<Invoke>g__Retry|0>d::<>4__this
	U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0/<<Invoke>g__Retry|0>d::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CInvokeU3Eg__RetryU7C0U3Ed_tCEAE898505D478F1042857B461814D0C72D5BDCF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CInvokeU3Eg__RetryU7C0U3Ed_tCEAE898505D478F1042857B461814D0C72D5BDCF, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3CInvokeU3Eg__RetryU7C0U3Ed_tCEAE898505D478F1042857B461814D0C72D5BDCF, ___U3CU3E4__this_2)); }
	inline U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CU3CInvokeU3Eg__RetryU7C0U3Ed_tCEAE898505D478F1042857B461814D0C72D5BDCF, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// System.Action`1<System.Action>
struct Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.Purchasing.Product>
struct Action_1_tA1980BF879FC3C2BEF14A6B79268F3DBBB7EB865  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Boolean,System.String>
struct Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<UnityEngine.Purchasing.Models.IGoogleBillingResult,System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>
struct Action_2_t3FCCB9520841190A6A1B12DC655BF1CD7D82D02F  : public MulticastDelegate_t
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


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Purchasing.UDPImpl
struct UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1  : public JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B
{
public:
	// UnityEngine.Purchasing.INativeUDPStore UnityEngine.Purchasing.UDPImpl::m_Bindings
	RuntimeObject* ___m_Bindings_6;
	// System.Object UnityEngine.Purchasing.UDPImpl::m_UserInfo
	RuntimeObject * ___m_UserInfo_7;
	// System.String UnityEngine.Purchasing.UDPImpl::m_LastInitError
	String_t* ___m_LastInitError_8;
	// System.Boolean UnityEngine.Purchasing.UDPImpl::m_Initialized
	bool ___m_Initialized_9;
	// System.Action`1<UnityEngine.Purchasing.Product> UnityEngine.Purchasing.UDPImpl::m_DeferredCallback
	Action_1_tA1980BF879FC3C2BEF14A6B79268F3DBBB7EB865 * ___m_DeferredCallback_10;

public:
	inline static int32_t get_offset_of_m_Bindings_6() { return static_cast<int32_t>(offsetof(UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1, ___m_Bindings_6)); }
	inline RuntimeObject* get_m_Bindings_6() const { return ___m_Bindings_6; }
	inline RuntimeObject** get_address_of_m_Bindings_6() { return &___m_Bindings_6; }
	inline void set_m_Bindings_6(RuntimeObject* value)
	{
		___m_Bindings_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Bindings_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_UserInfo_7() { return static_cast<int32_t>(offsetof(UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1, ___m_UserInfo_7)); }
	inline RuntimeObject * get_m_UserInfo_7() const { return ___m_UserInfo_7; }
	inline RuntimeObject ** get_address_of_m_UserInfo_7() { return &___m_UserInfo_7; }
	inline void set_m_UserInfo_7(RuntimeObject * value)
	{
		___m_UserInfo_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UserInfo_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastInitError_8() { return static_cast<int32_t>(offsetof(UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1, ___m_LastInitError_8)); }
	inline String_t* get_m_LastInitError_8() const { return ___m_LastInitError_8; }
	inline String_t** get_address_of_m_LastInitError_8() { return &___m_LastInitError_8; }
	inline void set_m_LastInitError_8(String_t* value)
	{
		___m_LastInitError_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LastInitError_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Initialized_9() { return static_cast<int32_t>(offsetof(UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1, ___m_Initialized_9)); }
	inline bool get_m_Initialized_9() const { return ___m_Initialized_9; }
	inline bool* get_address_of_m_Initialized_9() { return &___m_Initialized_9; }
	inline void set_m_Initialized_9(bool value)
	{
		___m_Initialized_9 = value;
	}

	inline static int32_t get_offset_of_m_DeferredCallback_10() { return static_cast<int32_t>(offsetof(UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1, ___m_DeferredCallback_10)); }
	inline Action_1_tA1980BF879FC3C2BEF14A6B79268F3DBBB7EB865 * get_m_DeferredCallback_10() const { return ___m_DeferredCallback_10; }
	inline Action_1_tA1980BF879FC3C2BEF14A6B79268F3DBBB7EB865 ** get_address_of_m_DeferredCallback_10() { return &___m_DeferredCallback_10; }
	inline void set_m_DeferredCallback_10(Action_1_tA1980BF879FC3C2BEF14A6B79268F3DBBB7EB865 * value)
	{
		___m_DeferredCallback_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeferredCallback_10), (void*)value);
	}
};


// UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0/<<Invoke>g__WaitAndRetry|1>d
struct U3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_t71CF0A37D081E4DE9DD2897FF8CB6A853728F7D2 
{
public:
	// System.Int32 UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0/<<Invoke>g__WaitAndRetry|1>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0/<<Invoke>g__WaitAndRetry|1>d::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0 UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0/<<Invoke>g__WaitAndRetry|1>d::<>4__this
	U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0/<<Invoke>g__WaitAndRetry|1>d::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_t71CF0A37D081E4DE9DD2897FF8CB6A853728F7D2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_t71CF0A37D081E4DE9DD2897FF8CB6A853728F7D2, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_t71CF0A37D081E4DE9DD2897FF8CB6A853728F7D2, ___U3CU3E4__this_2)); }
	inline U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_t71CF0A37D081E4DE9DD2897FF8CB6A853728F7D2, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Purchasing.Extension.UnityUtil
struct UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> UnityEngine.Purchasing.Extension.UnityUtil::pauseListeners
	List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * ___pauseListeners_7;

public:
	inline static int32_t get_offset_of_pauseListeners_7() { return static_cast<int32_t>(offsetof(UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172, ___pauseListeners_7)); }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * get_pauseListeners_7() const { return ___pauseListeners_7; }
	inline List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 ** get_address_of_pauseListeners_7() { return &___pauseListeners_7; }
	inline void set_pauseListeners_7(List_1_t74EFE92A1FFCE19915CF92B949BF2321170FA0B0 * value)
	{
		___pauseListeners_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseListeners_7), (void*)value);
	}
};

struct UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Action> UnityEngine.Purchasing.Extension.UnityUtil::s_Callbacks
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * ___s_Callbacks_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngine.Purchasing.Extension.UnityUtil::s_CallbacksPending
	bool ___s_CallbacksPending_5;
	// System.Collections.Generic.List`1<UnityEngine.RuntimePlatform> UnityEngine.Purchasing.Extension.UnityUtil::s_PcControlledPlatforms
	List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E * ___s_PcControlledPlatforms_6;

public:
	inline static int32_t get_offset_of_s_Callbacks_4() { return static_cast<int32_t>(offsetof(UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172_StaticFields, ___s_Callbacks_4)); }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * get_s_Callbacks_4() const { return ___s_Callbacks_4; }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 ** get_address_of_s_Callbacks_4() { return &___s_Callbacks_4; }
	inline void set_s_Callbacks_4(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * value)
	{
		___s_Callbacks_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Callbacks_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_CallbacksPending_5() { return static_cast<int32_t>(offsetof(UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172_StaticFields, ___s_CallbacksPending_5)); }
	inline bool get_s_CallbacksPending_5() const { return ___s_CallbacksPending_5; }
	inline bool* get_address_of_s_CallbacksPending_5() { return &___s_CallbacksPending_5; }
	inline void set_s_CallbacksPending_5(bool value)
	{
		___s_CallbacksPending_5 = value;
	}

	inline static int32_t get_offset_of_s_PcControlledPlatforms_6() { return static_cast<int32_t>(offsetof(UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172_StaticFields, ___s_PcControlledPlatforms_6)); }
	inline List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E * get_s_PcControlledPlatforms_6() const { return ___s_PcControlledPlatforms_6; }
	inline List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E ** get_address_of_s_PcControlledPlatforms_6() { return &___s_PcControlledPlatforms_6; }
	inline void set_s_PcControlledPlatforms_6(List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E * value)
	{
		___s_PcControlledPlatforms_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PcControlledPlatforms_6), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Collections.Generic.IEnumerable`1<T> UnityEngine.Purchasing.Models.AndroidJavaObjectExtensions::Enumerate<System.Object>(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObjectExtensions_Enumerate_TisRuntimeObject_m3784AB581DCCC112307D413BB6F9B088E9B524DD_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___androidJavaList0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Enumerable_ToList_TisRuntimeObject_m3AB0AB30DAC385C2DF8A16D5CB8D3D41F62C751F_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_mD20361F54064D4A745FAC10AD4D9C52E1C63BB6D_gshared (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mCABABA5D0FA017D2D54BE4FA6256C51518274116_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA8F31A10EE1129768E13ACC4DC847B05EAD2A055_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mF3BA34126DA8AFA32D1E5285D842C5955C698F0D_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0/<<Invoke>g__Retry|0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CInvokeU3Eg__RetryU7C0U3Ed_tCEAE898505D478F1042857B461814D0C72D5BDCF_m2A49116C5807A98EC391DD8824DCB215E30E0B21_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CU3CInvokeU3Eg__RetryU7C0U3Ed_tCEAE898505D478F1042857B461814D0C72D5BDCF * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0/<<Invoke>g__WaitAndRetry|1>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_t71CF0A37D081E4DE9DD2897FF8CB6A853728F7D2_m8E8A8BEEBD905CC27E1955381046C3039E22F325_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_t71CF0A37D081E4DE9DD2897FF8CB6A853728F7D2 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mAAE01A16F138CEC8E1965D322EFB6A7045FE76F2_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.SkuDetailsQueryResponse/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m698C313D43AB5BF7B604AE2771689F49280446D4 (U3CU3Ec_tFD3976FDD96338F9F0BE078B997DD4378845C9C4 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<T> UnityEngine.Purchasing.Models.AndroidJavaObjectExtensions::Enumerate<UnityEngine.AndroidJavaObject>(UnityEngine.AndroidJavaObject)
inline RuntimeObject* AndroidJavaObjectExtensions_Enumerate_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_m42E7E1EBF674EB219C3CF961F44EDACCEF3145F0 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___androidJavaList0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, const RuntimeMethod*))AndroidJavaObjectExtensions_Enumerate_TisRuntimeObject_m3784AB581DCCC112307D413BB6F9B088E9B524DD_gshared)(___androidJavaList0, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UnityEngine.AndroidJavaObject>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * Enumerable_ToList_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_m318614E8B85E8FF3D89144F7F27E40A877F77C31 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m3AB0AB30DAC385C2DF8A16D5CB8D3D41F62C751F_gshared)(___source0, method);
}
// System.Void UnityEngine.Purchasing.Models.GoogleBillingResult::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleBillingResult__ctor_mCDFC599FEFC5587BF76860304F2A328FF8DB30AA (GoogleBillingResult_t7A633E3EF045BC4657A02A94719F1C5A138AEF03 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___billingResult0, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.Purchasing.Models.IGoogleBillingResult,System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>::Invoke(!0,!1)
inline void Action_2_Invoke_m64DE9643DE1F193ECA196D32631CA952427B2720 (Action_2_t3FCCB9520841190A6A1B12DC655BF1CD7D82D02F * __this, RuntimeObject* ___arg10, List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t3FCCB9520841190A6A1B12DC655BF1CD7D82D02F *, RuntimeObject*, List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B *, const RuntimeMethod*))Action_2_Invoke_mD20361F54064D4A745FAC10AD4D9C52E1C63BB6D_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.LoggerExtensions::LogIAPWarning(UnityEngine.ILogger,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogIAPWarning_mC93A91B870290BDCFC465775F4E57BCFA6E3EBC0 (RuntimeObject* ___logger0, String_t* ___message1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::HashtableFromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * MiniJsonExtensions_HashtableFromJson_mF62FD90708401AEC2F5E00953A70C0238EAF6D10 (String_t* ___json0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_mCABABA5D0FA017D2D54BE4FA6256C51518274116_gshared)(__this, ___key0, method);
}
// System.Type UnityEngine.Purchasing.UserInfoInterface::GetClassType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * UserInfoInterface_GetClassType_mB701D105CEF8B249596C7E3C89F5EC4305870FA9 (const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UDPImpl::DictionaryToStringProperty(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_DictionaryToStringProperty_m13F9AB77048F8D075E9AAC1D1DD0406475BA2767 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dic0, RuntimeObject * ___info1, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::GetString(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJsonExtensions_GetString_m47B48C267428E4CDA3D2A88B85C5BF6F7DFC1FEC (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dic0, String_t* ___key1, String_t* ___defaultValue2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mA8F31A10EE1129768E13ACC4DC847B05EAD2A055_gshared)(__this, ___key0, ___value1, method);
}
// System.String UnityEngine.Purchasing.ProductDefinition::get_storeSpecificId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline (ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::toJson(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJsonExtensions_toJson_m99A5F4BE1C27D0D36F94D05BB282755D94836771 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___obj0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mF3BA34126DA8AFA32D1E5285D842C5955C698F0D_gshared)(__this, ___key0, method);
}
// System.Int32 System.Convert::ToInt32(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mFFEDED67681E3EC8705BCA890BBC206514431B4A (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UDPImpl::OnPurchaseDeferred(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_OnPurchaseDeferred_mA86F125DC2AEADE2B9ED1E820810C3CEB1DBE7D7 (UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * __this, String_t* ___productId0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Object System.Enum::Parse(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enum_Parse_m6601224637A9CF40F77358805956C2EE757EAF68 (Type_t * ___enumType0, String_t* ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::.ctor(System.String,UnityEngine.Purchasing.PurchaseFailureReason,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseFailureDescription__ctor_m82E2FF9C0415A1D1001A8C0F80016441A08140D5 (PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * __this, String_t* ___productId0, int32_t ___reason1, String_t* ___message2, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UIFakeStore/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m23C15A3F8354919E9739152CF9ADA508304A6F20 (U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductDefinition::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_id_m36316F5B3DCDF8110AF71C3F6E3F0E28AFC831E8_inline (ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.WinRTStore/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA06C6FA2819A9B484B8560E97F64FD2D1E8C1223 (U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D * __this, const RuntimeMethod* method);
// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductDefinition::get_type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ProductDefinition_get_type_m54E16B91196F7553460DEFE3701E9867F126AB42_inline (ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * __this, const RuntimeMethod* method);
// System.Void System.Decimal::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decimal__ctor_mB9DFF414FB23863B982F9D863D6E57867995C7F3 (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * __this, int32_t ___lo0, int32_t ___mid1, int32_t ___hi2, bool ___isNegative3, uint8_t ___scale4, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::.ctor(System.String,System.String,System.String,System.String,System.String,System.Decimal,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription__ctor_m9255456F4AA2925A63870208AF1D7166DE90CAF9 (WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829 * __this, String_t* ___id0, String_t* ___price1, String_t* ___title2, String_t* ___description3, String_t* ___isoCode4, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___priceD5, String_t* ___receipt6, String_t* ___transactionId7, bool ___consumable8, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0::<Invoke>g__WaitAndRetry|1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * U3CU3Ec__DisplayClass4_0_U3CInvokeU3Eg__WaitAndRetryU7C1_m7AB41C25631B98930EB9B1A2FE482D13B3190582 (U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0/<<Invoke>g__Retry|0>d>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CInvokeU3Eg__RetryU7C0U3Ed_tCEAE898505D478F1042857B461814D0C72D5BDCF_m2A49116C5807A98EC391DD8824DCB215E30E0B21 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CU3CInvokeU3Eg__RetryU7C0U3Ed_tCEAE898505D478F1042857B461814D0C72D5BDCF * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CU3CInvokeU3Eg__RetryU7C0U3Ed_tCEAE898505D478F1042857B461814D0C72D5BDCF *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CInvokeU3Eg__RetryU7C0U3Ed_tCEAE898505D478F1042857B461814D0C72D5BDCF_m2A49116C5807A98EC391DD8824DCB215E30E0B21_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0/<<Invoke>g__Retry|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CInvokeU3Eg__RetryU7C0U3Ed_MoveNext_m0FB90877E78FF45A34C21C46B3167457B053B033 (U3CU3CInvokeU3Eg__RetryU7C0U3Ed_tCEAE898505D478F1042857B461814D0C72D5BDCF * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0/<<Invoke>g__Retry|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CInvokeU3Eg__RetryU7C0U3Ed_SetStateMachine_m832828DF511F6F49E98B3D8E188F1ADE1337CB14 (U3CU3CInvokeU3Eg__RetryU7C0U3Ed_tCEAE898505D478F1042857B461814D0C72D5BDCF * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_Delay_mD54722DBAF22507493263E9B1167A7F77EDDF80E (int32_t ___millisecondsDelay0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0/<<Invoke>g__WaitAndRetry|1>d>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_t71CF0A37D081E4DE9DD2897FF8CB6A853728F7D2_m8E8A8BEEBD905CC27E1955381046C3039E22F325 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_t71CF0A37D081E4DE9DD2897FF8CB6A853728F7D2 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_t71CF0A37D081E4DE9DD2897FF8CB6A853728F7D2 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_t71CF0A37D081E4DE9DD2897FF8CB6A853728F7D2_m8E8A8BEEBD905CC27E1955381046C3039E22F325_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Int32 UnityEngine.Purchasing.ExponentialRetryPolicy::AdjustDelay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExponentialRetryPolicy_AdjustDelay_mF86423DEB5F30EAAE5E43CE604756F1DF8AA22B6 (ExponentialRetryPolicy_t259DF2B027844A356C64A74136CCDBE4F90F9D37 * __this, int32_t ___delay0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Action>::Invoke(!0)
inline void Action_1_Invoke_mA71DB51F315AA7EAFFAD4898A0D73FFDD073AE5D (Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))Action_1_Invoke_mAAE01A16F138CEC8E1965D322EFB6A7045FE76F2_gshared)(__this, ___obj0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0/<<Invoke>g__WaitAndRetry|1>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_MoveNext_mEC0AD9BBF8A51FD4C7E554FAC805CC6A7CB848FE (U3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_t71CF0A37D081E4DE9DD2897FF8CB6A853728F7D2 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0/<<Invoke>g__WaitAndRetry|1>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_SetStateMachine_m383A43C189BE116A879D660E48E2D06F03D605C8 (U3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_t71CF0A37D081E4DE9DD2897FF8CB6A853728F7D2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mE387727259F6D2F543A8608F8DC32C0915B6FD91 (U3CU3Ec__DisplayClass5_0_t859087A14AE95FD9CA3137ED6A5AD2B5AD954E2D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass5_0::<OnSetupFailed>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COnSetupFailedU3Eb__0_m705B8933ED8A2EC47BC25DB243F1D5036F95294A (U3CU3Ec__DisplayClass5_0_t859087A14AE95FD9CA3137ED6A5AD2B5AD954E2D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Util.RunOnMainThread(() => m_ForwardTo.OnSetupFailed(reason));
		ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_m_ForwardTo_0();
		int32_t L_2 = __this->get_reason_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnSetupFailed(UnityEngine.Purchasing.InitializationFailureReason) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m55269682A6C13B3546D9A803190ACD0BCB5924FD (U3CU3Ec__DisplayClass6_0_t35E59837B7A8D9A9033DF940B833CA8E375F5974 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass6_0::<OnProductsRetrieved>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3COnProductsRetrievedU3Eb__0_m57C2AEE412D3B934991BE315D5EADBE38633CDE5 (U3CU3Ec__DisplayClass6_0_t35E59837B7A8D9A9033DF940B833CA8E375F5974 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Util.RunOnMainThread(() => m_ForwardTo.OnProductsRetrieved(products));
		ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_m_ForwardTo_0();
		List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * L_2 = __this->get_products_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< List_1_t293A9B62DF9E931D44BF8E69475D79D308B627FF * >::Invoke(2 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnProductsRetrieved(System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mF34A36B5B6EB5A1C31CE9448D9328C62878B0F23 (U3CU3Ec__DisplayClass7_0_t807EC72F490C70CEB518B7C7199B43D6E9AA54F1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass7_0::<OnPurchaseSucceeded>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3COnPurchaseSucceededU3Eb__0_m474A5CEDE4D23CC99C2B96258C4D41EBC8C3AED4 (U3CU3Ec__DisplayClass7_0_t807EC72F490C70CEB518B7C7199B43D6E9AA54F1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Util.RunOnMainThread(() => m_ForwardTo.OnPurchaseSucceeded(id, receipt, transactionID));
		ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_m_ForwardTo_0();
		String_t* L_2 = __this->get_id_1();
		String_t* L_3 = __this->get_receipt_2();
		String_t* L_4 = __this->get_transactionID_3();
		NullCheck(L_1);
		InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(3 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnPurchaseSucceeded(System.String,System.String,System.String) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
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
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m926BD1FDC6A3CA1333EF84D4DC3B9D67A4E0CB98 (U3CU3Ec__DisplayClass8_0_tC875F56D08FF4FFE51B8B881279B402786BA4210 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass8_0::<OnAllPurchasesRetrieved>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3COnAllPurchasesRetrievedU3Eb__0_mE447E547703A6D633F9259704B48D24C5F0AC806 (U3CU3Ec__DisplayClass8_0_tC875F56D08FF4FFE51B8B881279B402786BA4210 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Util.RunOnMainThread(() => m_ForwardTo.OnAllPurchasesRetrieved(purchasedProducts));
		ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_m_ForwardTo_0();
		List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA * L_2 = __this->get_purchasedProducts_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< List_1_tD6CD4E5E39E75EE330B0C6DB8A7A0AEE4966D8AA * >::Invoke(4 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnAllPurchasesRetrieved(System.Collections.Generic.List`1<UnityEngine.Purchasing.Product>) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m6DC11B9054DF8EFCF3C9C239389F233DC70FDC5C (U3CU3Ec__DisplayClass9_0_t8E9729856B67388D808F413A54BC9473455A39E4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ScriptingStoreCallback/<>c__DisplayClass9_0::<OnPurchaseFailed>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3COnPurchaseFailedU3Eb__0_mAA2DBD2328E8BE1A4AA023C8E81B5D2800689FD7 (U3CU3Ec__DisplayClass9_0_t8E9729856B67388D808F413A54BC9473455A39E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Util.RunOnMainThread(() => m_ForwardTo.OnPurchaseFailed(desc));
		ScriptingStoreCallback_t201741301803D50F8E0881C5805639CE2F7CB288 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_m_ForwardTo_0();
		PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * L_2 = __this->get_desc_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * >::Invoke(5 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m0709B6A006A98850340C5842C05474159AAFA130 (U3CU3Ec__DisplayClass3_0_t90113C5AD2C2F802FFFDC7C20741B5A27875F266 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass3_0::<OnSetupFailed>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3COnSetupFailedU3Eb__0_m6F5DB866C58EF42F8DE23F6A46F6E660306990D7 (U3CU3Ec__DisplayClass3_0_t90113C5AD2C2F802FFFDC7C20741B5A27875F266 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityCallback_t30DEA3747BDB4858449EF9C033D67B5C19856C55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// util.RunOnMainThread(() => forwardTo.OnSetupFailed(json));
		ScriptingUnityCallback_tC9375469A489B48C41A433AE8E70E2C92688A28B * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_forwardTo_0();
		String_t* L_2 = __this->get_json_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void UnityEngine.Purchasing.IUnityCallback::OnSetupFailed(System.String) */, IUnityCallback_t30DEA3747BDB4858449EF9C033D67B5C19856C55_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m8219D81CF6AF53D8FC928EEA569E5C6AFCD6328E (U3CU3Ec__DisplayClass4_0_tEF82BC14FD968A3C437E1CC7E4C108819E022D43 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass4_0::<OnProductsRetrieved>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3COnProductsRetrievedU3Eb__0_m10B90080C69C53516E48920A2E075268F656472E (U3CU3Ec__DisplayClass4_0_tEF82BC14FD968A3C437E1CC7E4C108819E022D43 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityCallback_t30DEA3747BDB4858449EF9C033D67B5C19856C55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// util.RunOnMainThread(() => forwardTo.OnProductsRetrieved(json));
		ScriptingUnityCallback_tC9375469A489B48C41A433AE8E70E2C92688A28B * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_forwardTo_0();
		String_t* L_2 = __this->get_json_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void UnityEngine.Purchasing.IUnityCallback::OnProductsRetrieved(System.String) */, IUnityCallback_t30DEA3747BDB4858449EF9C033D67B5C19856C55_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mD48E96864A94FB873DC34040D95A80DB7C0FC63D (U3CU3Ec__DisplayClass5_0_tE225EAD07BBB4B788560A475B5806E9FC1F24B3D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass5_0::<OnPurchaseSucceeded>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COnPurchaseSucceededU3Eb__0_mBAFD5C4E41AFCD53CBDCCCC08FBF733E72D41F49 (U3CU3Ec__DisplayClass5_0_tE225EAD07BBB4B788560A475B5806E9FC1F24B3D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityCallback_t30DEA3747BDB4858449EF9C033D67B5C19856C55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// util.RunOnMainThread(() => forwardTo.OnPurchaseSucceeded(id, receipt, transactionID));
		ScriptingUnityCallback_tC9375469A489B48C41A433AE8E70E2C92688A28B * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_forwardTo_0();
		String_t* L_2 = __this->get_id_1();
		String_t* L_3 = __this->get_receipt_2();
		String_t* L_4 = __this->get_transactionID_3();
		NullCheck(L_1);
		InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(2 /* System.Void UnityEngine.Purchasing.IUnityCallback::OnPurchaseSucceeded(System.String,System.String,System.String) */, IUnityCallback_t30DEA3747BDB4858449EF9C033D67B5C19856C55_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
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
// System.Void UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mE4C4057626EEA54F1F5B806BAB1776CDCE050E55 (U3CU3Ec__DisplayClass6_0_tC9B5DE02A07173655F9C329B4D7934C41D058365 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ScriptingUnityCallback/<>c__DisplayClass6_0::<OnPurchaseFailed>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3COnPurchaseFailedU3Eb__0_m9D688FD82EF8A25C0C9BCFDA1B313624ADA964C8 (U3CU3Ec__DisplayClass6_0_tC9B5DE02A07173655F9C329B4D7934C41D058365 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityCallback_t30DEA3747BDB4858449EF9C033D67B5C19856C55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// util.RunOnMainThread(() => forwardTo.OnPurchaseFailed(json));
		ScriptingUnityCallback_tC9375469A489B48C41A433AE8E70E2C92688A28B * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_forwardTo_0();
		String_t* L_2 = __this->get_json_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void UnityEngine.Purchasing.IUnityCallback::OnPurchaseFailed(System.String) */, IUnityCallback_t30DEA3747BDB4858449EF9C033D67B5C19856C55_il2cpp_TypeInfo_var, L_1, L_2);
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
// System.Void UnityEngine.Purchasing.SkuDetailsQueryResponse/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB97CB94A8B3563B140B4FAEF78422C3B2C3BB240 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFD3976FDD96338F9F0BE078B997DD4378845C9C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tFD3976FDD96338F9F0BE078B997DD4378845C9C4 * L_0 = (U3CU3Ec_tFD3976FDD96338F9F0BE078B997DD4378845C9C4 *)il2cpp_codegen_object_new(U3CU3Ec_tFD3976FDD96338F9F0BE078B997DD4378845C9C4_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m698C313D43AB5BF7B604AE2771689F49280446D4(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tFD3976FDD96338F9F0BE078B997DD4378845C9C4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD3976FDD96338F9F0BE078B997DD4378845C9C4_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.SkuDetailsQueryResponse/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m698C313D43AB5BF7B604AE2771689F49280446D4 (U3CU3Ec_tFD3976FDD96338F9F0BE078B997DD4378845C9C4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.SkuDetailsQueryResponse/<>c::<SkuDetails>b__2_0(System.ValueTuple`2<UnityEngine.Purchasing.Models.IGoogleBillingResult,System.Collections.Generic.IEnumerable`1<UnityEngine.AndroidJavaObject>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CSkuDetailsU3Eb__2_0_mF7CB43BE2B674C45B231B5840FB9CE3B04519F0D (U3CU3Ec_tFD3976FDD96338F9F0BE078B997DD4378845C9C4 * __this, ValueTuple_2_t6CF608365E2E53BC8202C71688CEFD7643043255  ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGoogleBillingResult_t7969FA71619EE8FFD00594D8A95B33477D484DDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_Responses.Where(response => response.Item1.responseCode == GoogleBillingResponseCode.Ok)
		ValueTuple_2_t6CF608365E2E53BC8202C71688CEFD7643043255  L_0 = ___response0;
		RuntimeObject* L_1 = L_0.get_Item1_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* UnityEngine.Purchasing.Models.GoogleBillingResponseCode UnityEngine.Purchasing.Models.IGoogleBillingResult::get_responseCode() */, IGoogleBillingResult_t7969FA71619EE8FFD00594D8A95B33477D484DDE_il2cpp_TypeInfo_var, L_1);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.AndroidJavaObject> UnityEngine.Purchasing.SkuDetailsQueryResponse/<>c::<SkuDetails>b__2_1(System.ValueTuple`2<UnityEngine.Purchasing.Models.IGoogleBillingResult,System.Collections.Generic.IEnumerable`1<UnityEngine.AndroidJavaObject>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CSkuDetailsU3Eb__2_1_mB4145CDB16D2562DBEDED6DA1330FAECE7784B90 (U3CU3Ec_tFD3976FDD96338F9F0BE078B997DD4378845C9C4 * __this, ValueTuple_2_t6CF608365E2E53BC8202C71688CEFD7643043255  ___response0, const RuntimeMethod* method)
{
	{
		// .SelectMany(response => response.Item2).ToList();
		ValueTuple_2_t6CF608365E2E53BC8202C71688CEFD7643043255  L_0 = ___response0;
		RuntimeObject* L_1 = L_0.get_Item2_1();
		return L_1;
	}
}
// UnityEngine.Purchasing.Models.IGoogleBillingResult UnityEngine.Purchasing.SkuDetailsQueryResponse/<>c::<IsRecoverable>b__3_0(System.ValueTuple`2<UnityEngine.Purchasing.Models.IGoogleBillingResult,System.Collections.Generic.IEnumerable`1<UnityEngine.AndroidJavaObject>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CIsRecoverableU3Eb__3_0_mC6F08EA24586CE59D5B530210D9A20B838A1D842 (U3CU3Ec_tFD3976FDD96338F9F0BE078B997DD4378845C9C4 * __this, ValueTuple_2_t6CF608365E2E53BC8202C71688CEFD7643043255  ___response0, const RuntimeMethod* method)
{
	{
		// return m_Responses.Select(response => response.Item1).Any(IsRecoverable);
		ValueTuple_2_t6CF608365E2E53BC8202C71688CEFD7643043255  L_0 = ___response0;
		RuntimeObject* L_1 = L_0.get_Item1_0();
		return L_1;
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
// System.Void UnityEngine.Purchasing.SkuDetailsResponseListener/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mAE7C4A70319589EFCA9A49A558CE25E580EAB809 (U3CU3Ec__DisplayClass4_0_t300A8A8DF7C9D0E68C0CA0FE8C269A2E5A2356BD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.SkuDetailsResponseListener/<>c__DisplayClass4_0::<onSkuDetailsResponse>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3ConSkuDetailsResponseU3Eb__0_mA48B669B5E7EDF3D45E36079C311E6C92B74EB21 (U3CU3Ec__DisplayClass4_0_t300A8A8DF7C9D0E68C0CA0FE8C269A2E5A2356BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m64DE9643DE1F193ECA196D32631CA952427B2720_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectExtensions_Enumerate_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_m42E7E1EBF674EB219C3CF961F44EDACCEF3145F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_m318614E8B85E8FF3D89144F7F27E40A877F77C31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleBillingResult_t7A633E3EF045BC4657A02A94719F1C5A138AEF03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * V_0 = NULL;
	{
		// var skuDetailsList = skuDetails.Enumerate<AndroidJavaObject>().ToList();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_skuDetails_0();
		RuntimeObject* L_1;
		L_1 = AndroidJavaObjectExtensions_Enumerate_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_m42E7E1EBF674EB219C3CF961F44EDACCEF3145F0(L_0, /*hidden argument*/AndroidJavaObjectExtensions_Enumerate_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_m42E7E1EBF674EB219C3CF961F44EDACCEF3145F0_RuntimeMethod_var);
		List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * L_2;
		L_2 = Enumerable_ToList_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_m318614E8B85E8FF3D89144F7F27E40A877F77C31(L_1, /*hidden argument*/Enumerable_ToList_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_m318614E8B85E8FF3D89144F7F27E40A877F77C31_RuntimeMethod_var);
		V_0 = L_2;
		// m_OnSkuDetailsResponse(new GoogleBillingResult(billingResult), skuDetailsList);
		SkuDetailsResponseListener_t81E031C7B43FAF59CA2593FC977A56DA8F7BBC97 * L_3 = __this->get_U3CU3E4__this_1();
		NullCheck(L_3);
		Action_2_t3FCCB9520841190A6A1B12DC655BF1CD7D82D02F * L_4 = L_3->get_m_OnSkuDetailsResponse_5();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_5 = __this->get_billingResult_2();
		GoogleBillingResult_t7A633E3EF045BC4657A02A94719F1C5A138AEF03 * L_6 = (GoogleBillingResult_t7A633E3EF045BC4657A02A94719F1C5A138AEF03 *)il2cpp_codegen_object_new(GoogleBillingResult_t7A633E3EF045BC4657A02A94719F1C5A138AEF03_il2cpp_TypeInfo_var);
		GoogleBillingResult__ctor_mCDFC599FEFC5587BF76860304F2A328FF8DB30AA(L_6, L_5, /*hidden argument*/NULL);
		List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * L_7 = V_0;
		NullCheck(L_4);
		Action_2_Invoke_m64DE9643DE1F193ECA196D32631CA952427B2720(L_4, L_6, L_7, /*hidden argument*/Action_2_Invoke_m64DE9643DE1F193ECA196D32631CA952427B2720_RuntimeMethod_var);
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
// System.Void UnityEngine.Purchasing.StandardPurchasingModule/MicrosoftConfiguration::.ctor(UnityEngine.Purchasing.StandardPurchasingModule)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrosoftConfiguration__ctor_m2C2AE79B7E5D9829EC31FA6C6DDF7134290F9873 (MicrosoftConfiguration_t72E7005BD172865A7745C2935D2880DEFA88317D * __this, StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * ___module0, const RuntimeMethod* method)
{
	{
		// public MicrosoftConfiguration(StandardPurchasingModule module)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.module = module;
		StandardPurchasingModule_t46866896DA828EA4F1EBF9C38C5E3B89FF1E91B6 * L_0 = ___module0;
		__this->set_module_0(L_0);
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
// System.String UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance::get_storeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StoreInstance_get_storeName_m7A7F2EE1CD7F22AA77086D0C9A5ED0B667305204 (StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA * __this, const RuntimeMethod* method)
{
	{
		// internal string storeName { get; }
		String_t* L_0 = __this->get_U3CstoreNameU3Ek__BackingField_0();
		return L_0;
	}
}
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StoreInstance_get_instance_m72B030056C3098C02181F2B6C38034DA5AB560B4 (StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA * __this, const RuntimeMethod* method)
{
	{
		// internal IStore instance { get; }
		RuntimeObject* L_0 = __this->get_U3CinstanceU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance::.ctor(System.String,UnityEngine.Purchasing.Extension.IStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreInstance__ctor_mC359EB778980CBA12E43762487819602B38C0C4D (StoreInstance_t7777C1EA2116BC0443B2557EC19229DD2BFAFDBA * __this, String_t* ___name0, RuntimeObject* ___instance1, const RuntimeMethod* method)
{
	{
		// internal StoreInstance(string name, IStore instance)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.storeName = name;
		String_t* L_0 = ___name0;
		__this->set_U3CstoreNameU3Ek__BackingField_0(L_0);
		// this.instance = instance;
		RuntimeObject* L_1 = ___instance1;
		__this->set_U3CinstanceU3Ek__BackingField_1(L_1);
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
// System.Void UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m9D28909E1010465C2CF9BD9F5211B6400D36E0F0 (U3CU3Ec__DisplayClass10_0_tB18ED9C2044158C2044A084B4D6829E404E0F236 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass10_0::<RetrieveProducts>b__0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CRetrieveProductsU3Eb__0_m5D9089565F70BF79D2B684F2C37ACFB3AAFEB4CB (U3CU3Ec__DisplayClass10_0_tB18ED9C2044158C2044A084B4D6829E404E0F236 * __this, bool ___success0, String_t* ___json1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F129F58A8DCA2BAC1980E37CE73EDC57F778345);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (success && !string.IsNullOrEmpty(json))
		bool L_0 = ___success0;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1 = ___json1;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		// OnProductsRetrieved(json);
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_3 = __this->get_U3CU3E4__this_0();
		String_t* L_4 = ___json1;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(17 /* System.Void UnityEngine.Purchasing.JSONStore::OnProductsRetrieved(System.String) */, L_3, L_4);
		// }
		return;
	}

IL_0018:
	{
		// m_Logger.LogIAPWarning("RetrieveProducts failed: " + json);
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_5 = __this->get_U3CU3E4__this_0();
		NullCheck(L_5);
		RuntimeObject* L_6 = ((JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B *)L_5)->get_m_Logger_3();
		String_t* L_7 = ___json1;
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1F129F58A8DCA2BAC1980E37CE73EDC57F778345, L_7, /*hidden argument*/NULL);
		LoggerExtensions_LogIAPWarning_mC93A91B870290BDCFC465775F4E57BCFA6E3EBC0(L_6, L_8, /*hidden argument*/NULL);
		// };
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass10_0::<RetrieveProducts>b__1(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CRetrieveProductsU3Eb__1_m0199708B45BF6016375EA675869338846634D033 (U3CU3Ec__DisplayClass10_0_tB18ED9C2044158C2044A084B4D6829E404E0F236 * __this, bool ___success0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeUDPStore_tBEDB9A06199F713C1A02FA49086EB0D8BF40FFBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FF9A5D883AC2EEA2F31FEECA02D6C53D5F533B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	Type_t * V_1 = NULL;
	{
		// m_LastInitError = "";
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		L_0->set_m_LastInitError_8(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// m_UserInfo = null;
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_1 = __this->get_U3CU3E4__this_0();
		NullCheck(L_1);
		L_1->set_m_UserInfo_7(NULL);
		// if (success)
		bool L_2 = ___success0;
		if (!L_2)
		{
			goto IL_0095;
		}
	}
	{
		// if (!string.IsNullOrEmpty(message))
		String_t* L_3 = ___message1;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_006c;
		}
	}
	{
		// var dic = message.HashtableFromJson();
		String_t* L_5 = ___message1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_6;
		L_6 = MiniJsonExtensions_HashtableFromJson_mF62FD90708401AEC2F5E00953A70C0238EAF6D10(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// if (dic.ContainsKey("Channel"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_7, _stringLiteral7FF9A5D883AC2EEA2F31FEECA02D6C53D5F533B1, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_006c;
		}
	}
	{
		// Type udpUserInfo = UserInfoInterface.GetClassType();
		Type_t * L_9;
		L_9 = UserInfoInterface_GetClassType_mB701D105CEF8B249596C7E3C89F5EC4305870FA9(/*hidden argument*/NULL);
		V_1 = L_9;
		// if (udpUserInfo != null)
		Type_t * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_10, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006c;
		}
	}
	{
		// m_UserInfo = Activator.CreateInstance(udpUserInfo);
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_12 = __this->get_U3CU3E4__this_0();
		Type_t * L_13 = V_1;
		RuntimeObject * L_14;
		L_14 = Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_m_UserInfo_7(L_14);
		// DictionaryToStringProperty(dic, m_UserInfo);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_15 = V_0;
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_16 = __this->get_U3CU3E4__this_0();
		NullCheck(L_16);
		RuntimeObject * L_17 = L_16->get_m_UserInfo_7();
		UDPImpl_DictionaryToStringProperty_m13F9AB77048F8D075E9AAC1D1DD0406475BA2767(L_15, L_17, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// m_Initialized = true;
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_18 = __this->get_U3CU3E4__this_0();
		NullCheck(L_18);
		L_18->set_m_Initialized_9((bool)1);
		// m_Bindings.RetrieveProducts(products, retrieveCallback);
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_19 = __this->get_U3CU3E4__this_0();
		NullCheck(L_19);
		RuntimeObject* L_20 = L_19->get_m_Bindings_6();
		ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 * L_21 = __this->get_products_1();
		Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_22 = __this->get_retrieveCallback_2();
		NullCheck(L_20);
		InterfaceActionInvoker2< ReadOnlyCollection_1_tA17CC77D8AB24DD29DF396C7B3CC305302C189C3 *, Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * >::Invoke(2 /* System.Void UnityEngine.Purchasing.INativeUDPStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`2<System.Boolean,System.String>) */, INativeUDPStore_tBEDB9A06199F713C1A02FA49086EB0D8BF40FFBA_il2cpp_TypeInfo_var, L_20, L_21, L_22);
		// }
		return;
	}

IL_0095:
	{
		// m_LastInitError = message;
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_23 = __this->get_U3CU3E4__this_0();
		String_t* L_24 = ___message1;
		NullCheck(L_23);
		L_23->set_m_LastInitError_8(L_24);
		// unity.OnSetupFailed(InitializationFailureReason.AppNotKnown);
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_25 = __this->get_U3CU3E4__this_0();
		NullCheck(L_25);
		RuntimeObject* L_26 = ((JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B *)L_25)->get_unity_0();
		NullCheck(L_26);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnSetupFailed(UnityEngine.Purchasing.InitializationFailureReason) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_26, 2);
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
// System.Void UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m8AF81BE0D6CF6B7BA1E6B16DEAE7D42E86D401EE (U3CU3Ec__DisplayClass11_0_tA52647570260163D1D5F8C1FDA00B24D12D032FA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass11_0::<Purchase>b__0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CPurchaseU3Eb__0_mCD1D93ED4F3650F7F8D36DF786D7C88E271F28AA (U3CU3Ec__DisplayClass11_0_tA52647570260163D1D5F8C1FDA00B24D12D032FA * __this, bool ___success0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E62453B16F3139996684F414345A0A54FA64728);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BA59C4AA7C2F6DD8728F78A4194DD324111ABC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B410F5F43A4714AE6474DB2282523C7FBE75CD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6102B784A4463F5BB7820485F8B488B85D030E83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9783048DDA4A8100EAD15B60BE4922DE458E77F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4FD5B06A6B7174802B6D991C7560C98FB781820);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD07477ECD3017EFC4D04A75EB58245BE024730D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_6 = NULL;
	PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * V_7 = NULL;
	{
		// var dic = message.HashtableFromJson();
		String_t* L_0 = ___message1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_1;
		L_1 = MiniJsonExtensions_HashtableFromJson_mF62FD90708401AEC2F5E00953A70C0238EAF6D10(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (success)
		bool L_2 = ___success0;
		if (!L_2)
		{
			goto IL_00bd;
		}
	}
	{
		// var transactionId = dic.GetString("GameOrderId");
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_3 = V_0;
		String_t* L_4;
		L_4 = MiniJsonExtensions_GetString_m47B48C267428E4CDA3D2A88B85C5BF6F7DFC1FEC(L_3, _stringLiteralD07477ECD3017EFC4D04A75EB58245BE024730D9, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_1 = L_4;
		// var storeSpecificId = dic.GetString("ProductId");
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_5 = V_0;
		String_t* L_6;
		L_6 = MiniJsonExtensions_GetString_m47B48C267428E4CDA3D2A88B85C5BF6F7DFC1FEC(L_5, _stringLiteral0E62453B16F3139996684F414345A0A54FA64728, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_2 = L_6;
		// if (!string.IsNullOrEmpty(transactionId))
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0043;
		}
	}
	{
		// dic["transactionId"] = transactionId;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_9 = V_0;
		String_t* L_10 = V_1;
		NullCheck(L_9);
		Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144(L_9, _stringLiteral4B410F5F43A4714AE6474DB2282523C7FBE75CD1, L_10, /*hidden argument*/Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144_RuntimeMethod_var);
	}

IL_0043:
	{
		// if (!string.IsNullOrEmpty(storeSpecificId))
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0057;
		}
	}
	{
		// dic["storeSpecificId"] = storeSpecificId;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_13 = V_0;
		String_t* L_14 = V_2;
		NullCheck(L_13);
		Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144(L_13, _stringLiteralC4FD5B06A6B7174802B6D991C7560C98FB781820, L_14, /*hidden argument*/Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144_RuntimeMethod_var);
	}

IL_0057:
	{
		// if (!product.storeSpecificId.Equals(storeSpecificId))
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_15 = __this->get_product_0();
		NullCheck(L_15);
		String_t* L_16;
		L_16 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_15, /*hidden argument*/NULL);
		String_t* L_17 = V_2;
		NullCheck(L_16);
		bool L_18;
		L_18 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_16, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0098;
		}
	}
	{
		// m_Logger.LogFormat(LogType.Error,
		//     "UDPImpl received mismatching product Id for purchase. Expected {0}, received {1}",
		//     product.storeSpecificId, storeSpecificId);
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_19 = __this->get_U3CU3E4__this_1();
		NullCheck(L_19);
		RuntimeObject* L_20 = ((JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B *)L_19)->get_m_Logger_3();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_21;
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_23 = __this->get_product_0();
		NullCheck(L_23);
		String_t* L_24;
		L_24 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_24);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = L_22;
		String_t* L_26 = V_2;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_26);
		NullCheck(L_20);
		InterfaceActionInvoker3< int32_t, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(8 /* System.Void UnityEngine.ILogger::LogFormat(UnityEngine.LogType,System.String,System.Object[]) */, ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var, L_20, 0, _stringLiteral9783048DDA4A8100EAD15B60BE4922DE458E77F8, L_25);
	}

IL_0098:
	{
		// var data = dic.toJson();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_27 = V_0;
		String_t* L_28;
		L_28 = MiniJsonExtensions_toJson_m99A5F4BE1C27D0D36F94D05BB282755D94836771(L_27, /*hidden argument*/NULL);
		V_3 = L_28;
		// unity.OnPurchaseSucceeded(product.storeSpecificId, data, transactionId);
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_29 = __this->get_U3CU3E4__this_1();
		NullCheck(L_29);
		RuntimeObject* L_30 = ((JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B *)L_29)->get_unity_0();
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_31 = __this->get_product_0();
		NullCheck(L_31);
		String_t* L_32;
		L_32 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_31, /*hidden argument*/NULL);
		String_t* L_33 = V_3;
		String_t* L_34 = V_1;
		NullCheck(L_30);
		InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(3 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnPurchaseSucceeded(System.String,System.String,System.String) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_30, L_32, L_33, L_34);
		// }
		return;
	}

IL_00bd:
	{
		// if (dic.ContainsKey(k_Errorcode) && Convert.ToInt32(dic[k_Errorcode]) == PURCHASE_PENDING_CODE)
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_35 = V_0;
		NullCheck(L_35);
		bool L_36;
		L_36 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_35, _stringLiteral3BA59C4AA7C2F6DD8728F78A4194DD324111ABC1, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_36)
		{
			goto IL_0105;
		}
	}
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_37 = V_0;
		NullCheck(L_37);
		RuntimeObject * L_38;
		L_38 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_37, _stringLiteral3BA59C4AA7C2F6DD8728F78A4194DD324111ABC1, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_39;
		L_39 = Convert_ToInt32_mFFEDED67681E3EC8705BCA890BBC206514431B4A(L_38, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)-303)))))
		{
			goto IL_0105;
		}
	}
	{
		// if (null != m_DeferredCallback)
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_40 = __this->get_U3CU3E4__this_1();
		NullCheck(L_40);
		Action_1_tA1980BF879FC3C2BEF14A6B79268F3DBBB7EB865 * L_41 = L_40->get_m_DeferredCallback_10();
		if (!L_41)
		{
			goto IL_0104;
		}
	}
	{
		// OnPurchaseDeferred(product.storeSpecificId);
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_42 = __this->get_U3CU3E4__this_1();
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_43 = __this->get_product_0();
		NullCheck(L_43);
		String_t* L_44;
		L_44 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_43, /*hidden argument*/NULL);
		NullCheck(L_42);
		UDPImpl_OnPurchaseDeferred_mA86F125DC2AEADE2B9ED1E820810C3CEB1DBE7D7(L_42, L_44, /*hidden argument*/NULL);
	}

IL_0104:
	{
		// return;
		return;
	}

IL_0105:
	{
		// PurchaseFailureReason reason = (PurchaseFailureReason)Enum.Parse(typeof(PurchaseFailureReason),
		//     k_Unknown);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46;
		L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_45, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_47;
		L_47 = Enum_Parse_m6601224637A9CF40F77358805956C2EE757EAF68(L_46, _stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C, /*hidden argument*/NULL);
		V_4 = ((*(int32_t*)((int32_t*)UnBox(L_47, PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5_il2cpp_TypeInfo_var))));
		// var reasonString = reason.ToString();
		RuntimeObject * L_48 = Box(PurchaseFailureReason_t92D34AB6DC07828C5204898759640EDFB9336BA5_il2cpp_TypeInfo_var, (&V_4));
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_48);
		V_4 = *(int32_t*)UnBox(L_48);
		V_5 = L_49;
		// var errDic = new Dictionary<string, object> { ["error"] = reasonString };
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_50 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_50, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_51 = L_50;
		String_t* L_52 = V_5;
		NullCheck(L_51);
		Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144(L_51, _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2, L_52, /*hidden argument*/Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144_RuntimeMethod_var);
		V_6 = L_51;
		// if (dic.ContainsKey("purchaseInfo"))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_53 = V_0;
		NullCheck(L_53);
		bool L_54;
		L_54 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_53, _stringLiteral6102B784A4463F5BB7820485F8B488B85D030E83, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_54)
		{
			goto IL_0167;
		}
	}
	{
		// errDic["purchaseInfo"] = dic["purchaseInfo"];
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_55 = V_6;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_56 = V_0;
		NullCheck(L_56);
		RuntimeObject * L_57;
		L_57 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_56, _stringLiteral6102B784A4463F5BB7820485F8B488B85D030E83, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_55);
		Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144(L_55, _stringLiteral6102B784A4463F5BB7820485F8B488B85D030E83, L_57, /*hidden argument*/Dictionary_2_set_Item_m012F321188703DCCB5C4F99C5A5AA2FA31A98144_RuntimeMethod_var);
	}

IL_0167:
	{
		// var errData = errDic.toJson();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_58 = V_6;
		String_t* L_59;
		L_59 = MiniJsonExtensions_toJson_m99A5F4BE1C27D0D36F94D05BB282755D94836771(L_58, /*hidden argument*/NULL);
		// var pfd = new PurchaseFailureDescription(product.storeSpecificId, reason, message);
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_60 = __this->get_product_0();
		NullCheck(L_60);
		String_t* L_61;
		L_61 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_60, /*hidden argument*/NULL);
		int32_t L_62 = V_4;
		String_t* L_63 = ___message1;
		PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * L_64 = (PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 *)il2cpp_codegen_object_new(PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8_il2cpp_TypeInfo_var);
		PurchaseFailureDescription__ctor_m82E2FF9C0415A1D1001A8C0F80016441A08140D5(L_64, L_61, L_62, L_63, /*hidden argument*/NULL);
		V_7 = L_64;
		// unity.OnPurchaseFailed(pfd);
		UDPImpl_t10D6EBBCE4EF9B6215CB108BDF04F75E404277F1 * L_65 = __this->get_U3CU3E4__this_1();
		NullCheck(L_65);
		RuntimeObject* L_66 = ((JSONStore_tE5F9992486087BC106BD9B47F9B371AF218E400B *)L_65)->get_unity_0();
		PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * L_67 = V_7;
		NullCheck(L_66);
		InterfaceActionInvoker1< PurchaseFailureDescription_tF5204FF61912DF603166BB79C4A10BA5727FBFD8 * >::Invoke(5 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription) */, IStoreCallback_t3176FA3F472DF5F252CDB5D87E60B2538A44C05F_il2cpp_TypeInfo_var, L_66, L_67);
		// }, developerPayload);
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
// System.Void UnityEngine.Purchasing.UDPReflectionUtils/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mC661124F0973651F39A475CA357FA3E5D91A1599 (U3CU3Ec__DisplayClass6_0_tFC02CD6F9A7EFE0BD5EE8356D40FD5373E0DC90D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.UDPReflectionUtils/<>c__DisplayClass6_0::<GetTypeByName>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass6_0_U3CGetTypeByNameU3Eb__0_mAF4F9E30DC6488CBCEB0F9830F9393B0000DBB90 (U3CU3Ec__DisplayClass6_0_tFC02CD6F9A7EFE0BD5EE8356D40FD5373E0DC90D * __this, String_t* ___x0, const RuntimeMethod* method)
{
	{
		// if (Array.Exists(k_whiteListedAssemblies, x => assembly.FullName.StartsWith(x)))
		Assembly_t * L_0 = __this->get_assembly_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Reflection.Assembly::get_FullName() */, L_0);
		String_t* L_2 = ___x0;
		NullCheck(L_1);
		bool L_3;
		L_3 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void UnityEngine.Purchasing.UIFakeStore/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6D8979D59E6F585AF09B0297D4E94680B98C07EB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372 * L_0 = (U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372 *)il2cpp_codegen_object_new(U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m23C15A3F8354919E9739152CF9ADA508304A6F20(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m23C15A3F8354919E9739152CF9ADA508304A6F20 (U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Purchasing.UIFakeStore/<>c::<CreateRetrieveProductsQuestion>b__20_0(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCreateRetrieveProductsQuestionU3Eb__20_0_m6EF18D9572970CAEC1DE7239C90269C7227B3F03 (U3CU3Ec_t4C01EB1EC5B633A6C269CEF322D5F130DD02C372 * __this, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___pid0, const RuntimeMethod* method)
{
	{
		// title += string.Join(", ", definitions.Take(RetrieveProductsDescriptionCount).Select(pid => pid.id).ToArray());
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_0 = ___pid0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ProductDefinition_get_id_m36316F5B3DCDF8110AF71C3F6E3F0E28AFC831E8_inline(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedCoroutineU3Ed__48__ctor_mCA7240CCDB552FFD4F6F22501E8D496F2B1110FF (U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedCoroutineU3Ed__48_System_IDisposable_Dispose_m09D0EB5286F9AAE96CBE6D94E3FF7F9FE076F638 (U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayedCoroutineU3Ed__48_MoveNext_mFDAC216FC6D4C280BB6939EB4755F94BC513CA8F (U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(delay);
		int32_t L_4 = __this->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, ((float)((float)L_4)), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// StartCoroutine(coroutine);
		UnityUtil_t889EAFBFB8290CE278044818482339ED03EA4172 * L_6 = V_1;
		RuntimeObject* L_7 = __this->get_coroutine_4();
		NullCheck(L_6);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_8;
		L_8 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_6, L_7, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayedCoroutineU3Ed__48_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6B80CAC790FB28E868113F0982289D017AC9DD82 (U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedCoroutineU3Ed__48_System_Collections_IEnumerator_Reset_m89C455992E8BC0F988D97894649B211833E2A406 (U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayedCoroutineU3Ed__48_System_Collections_IEnumerator_Reset_m89C455992E8BC0F988D97894649B211833E2A406_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.Purchasing.Extension.UnityUtil/<DelayedCoroutine>d__48::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayedCoroutineU3Ed__48_System_Collections_IEnumerator_get_Current_m034F0433A3F327BD88FCD115D4D645FC187A3C1D (U3CDelayedCoroutineU3Ed__48_tC4749091BA348052BE31023A7D2F5000281F024C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void UnityEngine.Purchasing.WinRTStore/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD2B80949D14EEF36931F6934374DE094C4904F33 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D * L_0 = (U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D *)il2cpp_codegen_object_new(U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA06C6FA2819A9B484B8560E97F64FD2D1E8C1223(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA06C6FA2819A9B484B8560E97F64FD2D1E8C1223 (U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.WinRTStore/<>c::<RetrieveProducts>b__8_0(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CRetrieveProductsU3Eb__8_0_m4BB06CE83E9F7A6CA273C9378B8D95079A39652B (U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D * __this, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___def0, const RuntimeMethod* method)
{
	{
		// where def.type != ProductType.Subscription
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_0 = ___def0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ProductDefinition_get_type_m54E16B91196F7553460DEFE3701E9867F126AB42_inline(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Purchasing.Default.WinProductDescription UnityEngine.Purchasing.WinRTStore/<>c::<RetrieveProducts>b__8_1(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829 * U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_m39F67050779E7FED3B6DB386FAFB220B909CF4FD (U3CU3Ec_t114F9247D6420894D3A5B1652CCBE81140258A1D * __this, ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * ___def0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral283A5E2C7FF2F98F76268C8CFB12CA428D08EF99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74320907E0EFDCA8532E8CBD2C1A2910BB8C42D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C99461589CBC42FE28D0A29D20F63D0EE7E6E00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0FB8B944A767E1AACE82F930D95E69ED912ADAD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// select new WinProductDescription(
		//     def.storeSpecificId, "$0.01",
		//     "Fake title - " + def.storeSpecificId,
		//     "Fake description - " + def.storeSpecificId,
		//     "USD", 0.01m, null, null, def.type == ProductType.Consumable);
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_0 = ___def0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_0, /*hidden argument*/NULL);
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_2 = ___def0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8C99461589CBC42FE28D0A29D20F63D0EE7E6E00, L_3, /*hidden argument*/NULL);
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_5 = ___def0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline(L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral74320907E0EFDCA8532E8CBD2C1A2910BB8C42D7, L_6, /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Decimal__ctor_mB9DFF414FB23863B982F9D863D6E57867995C7F3((&L_8), 1, 0, 0, (bool)0, (uint8_t)2, /*hidden argument*/NULL);
		ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * L_9 = ___def0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = ProductDefinition_get_type_m54E16B91196F7553460DEFE3701E9867F126AB42_inline(L_9, /*hidden argument*/NULL);
		WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829 * L_11 = (WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829 *)il2cpp_codegen_object_new(WinProductDescription_tA1CEDA6F11485CE9F301415C989ECF6A3A8B4829_il2cpp_TypeInfo_var);
		WinProductDescription__ctor_m9255456F4AA2925A63870208AF1D7166DE90CAF9(L_11, L_1, _stringLiteral283A5E2C7FF2F98F76268C8CFB12CA428D08EF99, L_4, L_7, _stringLiteralC0FB8B944A767E1AACE82F930D95E69ED912ADAD, L_8, (String_t*)NULL, (String_t*)NULL, (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return L_11;
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
// System.Void UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0/<<Invoke>g__Retry|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CInvokeU3Eg__RetryU7C0U3Ed_MoveNext_m0FB90877E78FF45A34C21C46B3167457B053B033 (U3CU3CInvokeU3Eg__RetryU7C0U3Ed_tCEAE898505D478F1042857B461814D0C72D5BDCF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CInvokeU3Eg__RetryU7C0U3Ed_tCEAE898505D478F1042857B461814D0C72D5BDCF_m2A49116C5807A98EC391DD8824DCB215E30E0B21_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B4_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B3_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0057;
			}
		}

IL_0011:
		{
			// onRetryAction?.Invoke();
			U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D * L_3 = V_1;
			NullCheck(L_3);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = L_3->get_onRetryAction_0();
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = L_4;
			G_B3_0 = L_5;
			if (L_5)
			{
				G_B4_0 = L_5;
				goto IL_001d;
			}
		}

IL_001a:
		{
			goto IL_0022;
		}

IL_001d:
		{
			NullCheck(G_B4_0);
			Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B4_0, /*hidden argument*/NULL);
		}

IL_0022:
		{
			// await WaitAndRetry();
			U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D * L_6 = V_1;
			NullCheck(L_6);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
			L_7 = U3CU3Ec__DisplayClass4_0_U3CInvokeU3Eg__WaitAndRetryU7C1_m7AB41C25631B98930EB9B1A2FE482D13B3190582(L_6, /*hidden argument*/NULL);
			NullCheck(L_7);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_8;
			L_8 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_7, /*hidden argument*/NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_9)
			{
				goto IL_0073;
			}
		}

IL_0037:
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11 = V_2;
			__this->set_U3CU3Eu__1_3(L_11);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_12 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CInvokeU3Eg__RetryU7C0U3Ed_tCEAE898505D478F1042857B461814D0C72D5BDCF_m2A49116C5807A98EC391DD8824DCB215E30E0B21((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_12, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CU3CInvokeU3Eg__RetryU7C0U3Ed_tCEAE898505D478F1042857B461814D0C72D5BDCF *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CInvokeU3Eg__RetryU7C0U3Ed_tCEAE898505D478F1042857B461814D0C72D5BDCF_m2A49116C5807A98EC391DD8824DCB215E30E0B21_RuntimeMethod_var);
			goto IL_00a6;
		}

IL_0057:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_13 = __this->get_U3CU3Eu__1_3();
			V_2 = L_13;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_14 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_14, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->set_U3CU3E1__state_0(L_15);
		}

IL_0073:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			goto IL_0093;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007c;
		}
		throw e;
	}

CATCH_007c:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_16 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_17 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_16, L_17, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a6;
	}// end catch (depth: 1)

IL_0093:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_18, /*hidden argument*/NULL);
	}

IL_00a6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CInvokeU3Eg__RetryU7C0U3Ed_MoveNext_m0FB90877E78FF45A34C21C46B3167457B053B033_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CU3CInvokeU3Eg__RetryU7C0U3Ed_tCEAE898505D478F1042857B461814D0C72D5BDCF * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CInvokeU3Eg__RetryU7C0U3Ed_tCEAE898505D478F1042857B461814D0C72D5BDCF *>(__this + _offset);
	U3CU3CInvokeU3Eg__RetryU7C0U3Ed_MoveNext_m0FB90877E78FF45A34C21C46B3167457B053B033(_thisAdjusted, method);
}
// System.Void UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0/<<Invoke>g__Retry|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CInvokeU3Eg__RetryU7C0U3Ed_SetStateMachine_m832828DF511F6F49E98B3D8E188F1ADE1337CB14 (U3CU3CInvokeU3Eg__RetryU7C0U3Ed_tCEAE898505D478F1042857B461814D0C72D5BDCF * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CInvokeU3Eg__RetryU7C0U3Ed_SetStateMachine_m832828DF511F6F49E98B3D8E188F1ADE1337CB14_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CU3CInvokeU3Eg__RetryU7C0U3Ed_tCEAE898505D478F1042857B461814D0C72D5BDCF * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CInvokeU3Eg__RetryU7C0U3Ed_tCEAE898505D478F1042857B461814D0C72D5BDCF *>(__this + _offset);
	U3CU3CInvokeU3Eg__RetryU7C0U3Ed_SetStateMachine_m832828DF511F6F49E98B3D8E188F1ADE1337CB14(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0/<<Invoke>g__WaitAndRetry|1>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_MoveNext_mEC0AD9BBF8A51FD4C7E554FAC805CC6A7CB848FE (U3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_t71CF0A37D081E4DE9DD2897FF8CB6A853728F7D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mA71DB51F315AA7EAFFAD4898A0D73FFDD073AE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_t71CF0A37D081E4DE9DD2897FF8CB6A853728F7D2_m8E8A8BEEBD905CC27E1955381046C3039E22F325_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CInvokeU3Eg__RetryU7C0_m559D6EEE92E75EA9E4B65A055CB9D001D49D42C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004b;
			}
		}

IL_0011:
		{
			// await Task.Delay(currentRetryDelay);
			U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D * L_3 = V_1;
			NullCheck(L_3);
			int32_t L_4 = L_3->get_currentRetryDelay_1();
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
			L_5 = Task_Delay_mD54722DBAF22507493263E9B1167A7F77EDDF80E(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_6;
			L_6 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_5, /*hidden argument*/NULL);
			V_2 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_0067;
			}
		}

IL_002b:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_9 = V_2;
			__this->set_U3CU3Eu__1_3(L_9);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_t71CF0A37D081E4DE9DD2897FF8CB6A853728F7D2_m8E8A8BEEBD905CC27E1955381046C3039E22F325((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_10, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_t71CF0A37D081E4DE9DD2897FF8CB6A853728F7D2 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_t71CF0A37D081E4DE9DD2897FF8CB6A853728F7D2_m8E8A8BEEBD905CC27E1955381046C3039E22F325_RuntimeMethod_var);
			goto IL_00c8;
		}

IL_004b:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11 = __this->get_U3CU3Eu__1_3();
			V_2 = L_11;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_12 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_0067:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			// currentRetryDelay = AdjustDelay(currentRetryDelay);
			U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D * L_14 = V_1;
			U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D * L_15 = V_1;
			NullCheck(L_15);
			ExponentialRetryPolicy_t259DF2B027844A356C64A74136CCDBE4F90F9D37 * L_16 = L_15->get_U3CU3E4__this_2();
			U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D * L_17 = V_1;
			NullCheck(L_17);
			int32_t L_18 = L_17->get_currentRetryDelay_1();
			NullCheck(L_16);
			int32_t L_19;
			L_19 = ExponentialRetryPolicy_AdjustDelay_mF86423DEB5F30EAAE5E43CE604756F1DF8AA22B6(L_16, L_18, /*hidden argument*/NULL);
			NullCheck(L_14);
			L_14->set_currentRetryDelay_1(L_19);
			// actionToTry(Retry);
			U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D * L_20 = V_1;
			NullCheck(L_20);
			Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * L_21 = L_20->get_actionToTry_3();
			U3CU3Ec__DisplayClass4_0_t77F9655343176E614203FC88345BFEF39CEC252D * L_22 = V_1;
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_23 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
			Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_23, L_22, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3CInvokeU3Eg__RetryU7C0_m559D6EEE92E75EA9E4B65A055CB9D001D49D42C8_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_21);
			Action_1_Invoke_mA71DB51F315AA7EAFFAD4898A0D73FFDD073AE5D(L_21, L_23, /*hidden argument*/Action_1_Invoke_mA71DB51F315AA7EAFFAD4898A0D73FFDD073AE5D_RuntimeMethod_var);
			goto IL_00b5;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009e;
		}
		throw e;
	}

CATCH_009e:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_24 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_25 = V_3;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_24, L_25, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c8;
	}// end catch (depth: 1)

IL_00b5:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_26 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_26, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_MoveNext_mEC0AD9BBF8A51FD4C7E554FAC805CC6A7CB848FE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_t71CF0A37D081E4DE9DD2897FF8CB6A853728F7D2 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_t71CF0A37D081E4DE9DD2897FF8CB6A853728F7D2 *>(__this + _offset);
	U3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_MoveNext_mEC0AD9BBF8A51FD4C7E554FAC805CC6A7CB848FE(_thisAdjusted, method);
}
// System.Void UnityEngine.Purchasing.ExponentialRetryPolicy/<>c__DisplayClass4_0/<<Invoke>g__WaitAndRetry|1>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_SetStateMachine_m383A43C189BE116A879D660E48E2D06F03D605C8 (U3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_t71CF0A37D081E4DE9DD2897FF8CB6A853728F7D2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_SetStateMachine_m383A43C189BE116A879D660E48E2D06F03D605C8_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_t71CF0A37D081E4DE9DD2897FF8CB6A853728F7D2 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_t71CF0A37D081E4DE9DD2897FF8CB6A853728F7D2 *>(__this + _offset);
	U3CU3CInvokeU3Eg__WaitAndRetryU7C1U3Ed_SetStateMachine_m383A43C189BE116A879D660E48E2D06F03D605C8(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_storeSpecificId_m32204A00FC4A55334ABC8336509E4B57A6CD50B6_inline (ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * __this, const RuntimeMethod* method)
{
	{
		// public string storeSpecificId { get; private set; }
		String_t* L_0 = __this->get_U3CstoreSpecificIdU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_id_m36316F5B3DCDF8110AF71C3F6E3F0E28AFC831E8_inline (ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; private set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ProductDefinition_get_type_m54E16B91196F7553460DEFE3701E9867F126AB42_inline (ProductDefinition_tD15185D43FAFB5711540CA3DEB1E600F7FE08572 * __this, const RuntimeMethod* method)
{
	{
		// public ProductType type { get; private set; }
		int32_t L_0 = __this->get_U3CtypeU3Ek__BackingField_2();
		return L_0;
	}
}
