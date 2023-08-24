#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_GiantDragonfly_Common.BP_GiantDragonfly_Common_C.ExecuteUbergraph_BP_GiantDragonfly_Common
struct FExecuteUbergraph_BP_GiantDragonfly_Common
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x5 (0x5)
	char pad_6[2];  // 0x6 (0x6)
	struct FMsgGASActorDieNotify K2Node_Event_InMsg;  // 0x8 (0x8)
	char pad_520_1 : 7;  // 0x208 (0x208)
	bool CallFunc_HasAuthority_ReturnValue_2 : 1;  // 0x208 (0x208)


}; 
 
 // Function BP_GiantDragonfly_Common.BP_GiantDragonfly_Common_C.OnFMsgGASActorDieNotifyBlueprint
// Size: 0x200(Inherited: 0x200)
struct FOnFMsgGASActorDieNotifyBlueprint : FOnFMsgGASActorDieNotifyBlueprint
{
	struct FMsgGASActorDieNotify InMsg;  // 0x0 (0x0)


}; 
 
 