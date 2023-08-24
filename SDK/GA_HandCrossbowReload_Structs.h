#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_HandCrossbowReload.GA_HandCrossbowReload_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_HandCrossbowReload.GA_HandCrossbowReload_C.ExecuteUbergraph_GA_HandCrossbowReload
struct FExecuteUbergraph_GA_HandCrossbowReload
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool K2Node_Event_bWasCancelled : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x8 (0x8)


}; 
 
 // Function GA_HandCrossbowReload.GA_HandCrossbowReload_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_HandCrossbowReload.GA_HandCrossbowReload_C.SetEquippedItemsHidden
struct FSetEquippedItemsHidden
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsHide : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool CallFunc_IsLocallyControlled_ReturnValue : 1;  // 0x1 (0x1)
	char pad_2[6];  // 0x2 (0x2)
	struct FMsgSetEquippedWeaponsVisibility K2Node_MakeStruct_MsgSetEquippedWeaponsVisibility;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x48 (0x48)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface;  // 0x50 (0x50)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x60 (0x60)


}; 
 
 