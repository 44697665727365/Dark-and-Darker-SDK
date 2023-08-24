#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WB_Menu.WB_Menu_C.BP_GetDesiredFocusTarget
// Size: 0x8(Inherited: 0x8)
struct FBP_GetDesiredFocusTarget : FBP_GetDesiredFocusTarget
{
	struct UWidget* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function WB_Menu.WB_Menu_C.OnSendMsgVideoDisplayApplyNotify
struct FOnSendMsgVideoDisplayApplyNotify
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsApplyed : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct TScriptInterface<IBaseInterface> CallFunc_GetOwningBaseInterfaceBlueprint_ReturnValue;  // 0x8 (0x8)
	struct FMsgWidgetOptionVideoDisplayApplyedNotify K2Node_MakeStruct_MsgWidgetOptionVideoDisplayApplyedNotify;  // 0x18 (0x18)
	struct UObject* CallFunc_Conv_InterfaceToObject_ReturnValue;  // 0x38 (0x38)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x40 (0x40)


}; 
 
 // Function WB_Menu.WB_Menu_C.OnApplyClicked
struct FOnApplyClicked
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsApply : 1;  // 0x0 (0x0)


}; 
 
 // Function WB_Menu.WB_Menu_C.ExecuteUbergraph_WB_Menu
struct FExecuteUbergraph_WB_Menu
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool K2Node_CustomEvent_IsApply : 1;  // 0x5 (0x5)
	char pad_6[2];  // 0x6 (0x6)
	struct UWB_MenuOptionPopup_C* K2Node_DynamicCast_AsWB_Menu_Option_Popup;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x14 (0x14)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x18 (0x18)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x28 (0x28)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x30 (0x30)


}; 
 
 