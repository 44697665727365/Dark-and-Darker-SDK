#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_DeathBeetle_Common.BP_DeathBeetle_Common_C.ExecuteUbergraph_BP_DeathBeetle_Common
struct FExecuteUbergraph_BP_DeathBeetle_Common
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x5 (0x5)
	char pad_6[2];  // 0x6 (0x6)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool CallFunc_HasAuthority_ReturnValue_2 : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct UAbilityAsync_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAddToActor_ReturnValue;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct FMsgGASActorDieNotify K2Node_Event_InMsg;  // 0x30 (0x30)


}; 
 
 // Function BP_DeathBeetle_Common.BP_DeathBeetle_Common_C.OnFMsgGASActorDieNotifyBlueprint
// Size: 0x200(Inherited: 0x200)
struct FOnFMsgGASActorDieNotifyBlueprint : FOnFMsgGASActorDieNotifyBlueprint
{
	struct FMsgGASActorDieNotify InMsg;  // 0x0 (0x0)


}; 
 
 