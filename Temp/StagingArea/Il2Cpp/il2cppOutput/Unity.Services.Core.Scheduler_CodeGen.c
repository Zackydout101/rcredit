#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Int32 Unity.Services.Core.Scheduler.Internal.ScheduledInvocation::CompareTo(Unity.Services.Core.Scheduler.Internal.ScheduledInvocation)
extern void ScheduledInvocation_CompareTo_m88537CEABE2CF844F66AE6E3EA58BB5159E5B621 (void);
// 0x00000002 System.Void Unity.Services.Core.Scheduler.Internal.ScheduledInvocation::.ctor()
extern void ScheduledInvocation__ctor_m49922FA7BB6D7217CDCD5F95A71C6E3E1F926250 (void);
// 0x00000003 System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::.ctor()
extern void ActionScheduler__ctor_mC8BA8182CF542DD52F483013A225109AE31C3C69 (void);
// 0x00000004 System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::.ctor(Unity.Services.Core.Scheduler.Internal.ITimeProvider)
extern void ActionScheduler__ctor_m5D0DBDE8AC20F7F77699A567C5E6D69234FB30D9 (void);
// 0x00000005 System.Int64 Unity.Services.Core.Scheduler.Internal.ActionScheduler::ScheduleAction(System.Action,System.Double)
extern void ActionScheduler_ScheduleAction_m090D311F4A11AF05F2B5CDD09DBFC7F6ECB1A3B3 (void);
// 0x00000006 System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::CancelAction(System.Int64)
extern void ActionScheduler_CancelAction_m8A27A1FB387CB6C1D88FC1F4565168BDA1DC0CB0 (void);
// 0x00000007 System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::ExecuteExpiredActions()
extern void ActionScheduler_ExecuteExpiredActions_m62B1254D68CFDB79EC2B356E748023F827E6A876 (void);
// 0x00000008 System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::UpdateSubSystemList(System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystem>,UnityEngine.LowLevel.PlayerLoopSystem)
extern void ActionScheduler_UpdateSubSystemList_mDC291CDF8B20D68D3914E682FA9301C6F9707245 (void);
// 0x00000009 System.Void Unity.Services.Core.Scheduler.Internal.ActionScheduler::JoinPlayerLoopSystem()
extern void ActionScheduler_JoinPlayerLoopSystem_m9B613FA4B93AFD4C9C32AF4B691DC8B7C1178F85 (void);
// 0x0000000A System.Int32 Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::get_Count()
// 0x0000000B T Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::get_Min()
// 0x0000000C System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::.ctor(System.Int32)
// 0x0000000D System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::Insert(T)
// 0x0000000E System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::IncreaseHeapCapacityWhenFull()
// 0x0000000F System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::Remove(T)
// 0x00000010 T Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::ExtractMin()
// 0x00000011 System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::DecreaseHeapCapacityWhenSpare()
// 0x00000012 System.Int32 Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::GetKey(T)
// 0x00000013 System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::MinHeapify(System.Int32)
// 0x00000014 System.Void Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::Swap(T&,T&)
// 0x00000015 System.Int32 Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::Parent(System.Int32)
// 0x00000016 System.Int32 Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::LeftChild(System.Int32)
// 0x00000017 System.Int32 Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1::RightChild(System.Int32)
// 0x00000018 System.DateTime Unity.Services.Core.Scheduler.Internal.ITimeProvider::get_Now()
// 0x00000019 System.DateTime Unity.Services.Core.Scheduler.Internal.UtcTimeProvider::get_Now()
extern void UtcTimeProvider_get_Now_m00EAD0028FF56C5830D548E6467E53B9377666DF (void);
// 0x0000001A System.Void Unity.Services.Core.Scheduler.Internal.UtcTimeProvider::.ctor()
extern void UtcTimeProvider__ctor_m873764D6B4573888A6E0A63AC1CFF321EDC5E78E (void);
static Il2CppMethodPointer s_methodPointers[26] = 
{
	ScheduledInvocation_CompareTo_m88537CEABE2CF844F66AE6E3EA58BB5159E5B621,
	ScheduledInvocation__ctor_m49922FA7BB6D7217CDCD5F95A71C6E3E1F926250,
	ActionScheduler__ctor_mC8BA8182CF542DD52F483013A225109AE31C3C69,
	ActionScheduler__ctor_m5D0DBDE8AC20F7F77699A567C5E6D69234FB30D9,
	ActionScheduler_ScheduleAction_m090D311F4A11AF05F2B5CDD09DBFC7F6ECB1A3B3,
	ActionScheduler_CancelAction_m8A27A1FB387CB6C1D88FC1F4565168BDA1DC0CB0,
	ActionScheduler_ExecuteExpiredActions_m62B1254D68CFDB79EC2B356E748023F827E6A876,
	ActionScheduler_UpdateSubSystemList_mDC291CDF8B20D68D3914E682FA9301C6F9707245,
	ActionScheduler_JoinPlayerLoopSystem_m9B613FA4B93AFD4C9C32AF4B691DC8B7C1178F85,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	UtcTimeProvider_get_Now_m00EAD0028FF56C5830D548E6467E53B9377666DF,
	UtcTimeProvider__ctor_m873764D6B4573888A6E0A63AC1CFF321EDC5E78E,
};
static const int32_t s_InvokerIndices[26] = 
{
	1662,
	2850,
	2850,
	2335,
	959,
	2322,
	2850,
	4066,
	2850,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	2747,
	2747,
	2850,
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x02000004, { 0, 15 } },
};
extern const uint32_t g_rgctx_TU5BU5D_t3A683A278EB0FD9C50108004921E7EB698B8A442;
extern const uint32_t g_rgctx_MinimumBinaryHeap_1_IncreaseHeapCapacityWhenFull_m30F290E4130F7B5ED9B8988A4362C32C12DB39AB;
extern const uint32_t g_rgctx_MinimumBinaryHeap_1_Parent_m8C2298C43477B03D0DA5A26C67A755AD63A31238;
extern const uint32_t g_rgctx_MinimumBinaryHeap_1_t98E71E9F1F8BB855881CB4EE0C5B80CE0B3CD595;
extern const uint32_t g_rgctx_MinimumBinaryHeap_1_Swap_m8C30F743A5A1336A25183811C9086712A620F28D;
extern const uint32_t g_rgctx_T_tEE748A5E74ED2E97E8D6C4D57D8F7AC5605767FA;
extern const uint32_t g_rgctx_IComparable_1_tD3F6D8E0390C65165FA9F969F154BA355B932917;
extern const uint32_t g_rgctx_IComparable_1_CompareTo_mB845D13182FBF88811A39EF4C676AC77249509BC;
extern const uint32_t g_rgctx_MinimumBinaryHeap_1_get_Count_mD89C2CED894D5887BCECF23AA822A34597748598;
extern const uint32_t g_rgctx_MinimumBinaryHeap_1_GetKey_mE24BC00E302A708B948357CEAA8D474E81E48AE3;
extern const uint32_t g_rgctx_MinimumBinaryHeap_1_ExtractMin_m42C4733C3167FAD05C9BADEF5758F014270E97C7;
extern const uint32_t g_rgctx_MinimumBinaryHeap_1_MinHeapify_mF73BB7DC46675646A78323417957446662C972B1;
extern const uint32_t g_rgctx_MinimumBinaryHeap_1_DecreaseHeapCapacityWhenSpare_m9C8E102AA72BF011A0B1BC5AF75C92D1D9511C3F;
extern const uint32_t g_rgctx_MinimumBinaryHeap_1_LeftChild_mAF895DE31411EEC82482734F22559181615B4FD9;
extern const uint32_t g_rgctx_MinimumBinaryHeap_1_RightChild_mCF2CFD3A9B1E57C50C064CDA0CA76D163AE8C442;
static const Il2CppRGCTXDefinition s_rgctxValues[15] = 
{
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TU5BU5D_t3A683A278EB0FD9C50108004921E7EB698B8A442 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_MinimumBinaryHeap_1_IncreaseHeapCapacityWhenFull_m30F290E4130F7B5ED9B8988A4362C32C12DB39AB },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_MinimumBinaryHeap_1_Parent_m8C2298C43477B03D0DA5A26C67A755AD63A31238 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_MinimumBinaryHeap_1_t98E71E9F1F8BB855881CB4EE0C5B80CE0B3CD595 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_MinimumBinaryHeap_1_Swap_m8C30F743A5A1336A25183811C9086712A620F28D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_T_tEE748A5E74ED2E97E8D6C4D57D8F7AC5605767FA },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IComparable_1_tD3F6D8E0390C65165FA9F969F154BA355B932917 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IComparable_1_CompareTo_mB845D13182FBF88811A39EF4C676AC77249509BC },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_MinimumBinaryHeap_1_get_Count_mD89C2CED894D5887BCECF23AA822A34597748598 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_MinimumBinaryHeap_1_GetKey_mE24BC00E302A708B948357CEAA8D474E81E48AE3 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_MinimumBinaryHeap_1_ExtractMin_m42C4733C3167FAD05C9BADEF5758F014270E97C7 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_MinimumBinaryHeap_1_MinHeapify_mF73BB7DC46675646A78323417957446662C972B1 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_MinimumBinaryHeap_1_DecreaseHeapCapacityWhenSpare_m9C8E102AA72BF011A0B1BC5AF75C92D1D9511C3F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_MinimumBinaryHeap_1_LeftChild_mAF895DE31411EEC82482734F22559181615B4FD9 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_MinimumBinaryHeap_1_RightChild_mCF2CFD3A9B1E57C50C064CDA0CA76D163AE8C442 },
};
extern const CustomAttributesCacheGenerator g_Unity_Services_Core_Scheduler_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Services_Core_Scheduler_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Services_Core_Scheduler_CodeGenModule = 
{
	"Unity.Services.Core.Scheduler.dll",
	26,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	1,
	s_rgctxIndices,
	15,
	s_rgctxValues,
	NULL,
	g_Unity_Services_Core_Scheduler_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
