#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_ActivateItem.GA_ActivateItem_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_ActivateItem.GA_ActivateItem_C.ExecuteUbergraph_GA_ActivateItem
struct FExecuteUbergraph_GA_ActivateItem
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FMsgWidgetInitCrossHairNotify K2Node_MakeStruct_MsgWidgetInitCrossHairNotify;  // 0x8 (0x8)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x20 (0x20)
	struct APlayerController* CallFunc_GetPlayerController_ReturnValue;  // 0xD0 (0xD0)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface;  // 0xD8 (0xD8)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xE8 (0xE8)


}; 
 
 