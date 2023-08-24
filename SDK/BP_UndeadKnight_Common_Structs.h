#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_UndeadKnight_Common.BP_UndeadKnight_Common_C.ExecuteUbergraph_BP_UndeadKnight_Common
struct FExecuteUbergraph_BP_UndeadKnight_Common
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FMsgGASActorDieNotify K2Node_Event_InMsg;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x208 (0x208)
	struct UAbilityAsync_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAddToActor_ReturnValue;  // 0x218 (0x218)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x220 (0x220)
	char pad_560_1 : 7;  // 0x230 (0x230)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x230 (0x230)
	char pad_561[7];  // 0x231 (0x231)
	struct UAbilityAsync_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAddToActor_ReturnValue_2;  // 0x238 (0x238)
	char pad_576_1 : 7;  // 0x240 (0x240)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x240 (0x240)
	char pad_577[7];  // 0x241 (0x241)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x248 (0x248)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x250 (0x250)
	struct TArray<struct FPrimaryAssetId> K2Node_MakeArray_Array;  // 0x258 (0x258)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue;  // 0x268 (0x268)


}; 
 
 // Function BP_UndeadKnight_Common.BP_UndeadKnight_Common_C.OnFMsgGASActorDieNotifyBlueprint
// Size: 0x200(Inherited: 0x200)
struct FOnFMsgGASActorDieNotifyBlueprint : FOnFMsgGASActorDieNotifyBlueprint
{
	struct FMsgGASActorDieNotify InMsg;  // 0x0 (0x0)


}; 
 
 