#pragma once 
#include <WB_Menu_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_Menu.WB_Menu_C
// Size: 0x4F8(Inherited: 0x490)
struct UWB_Menu_C : UGameMenuWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x490 (0x490)
	struct UButton* CreditButton;  // 0x498 (0x498)
	struct UWidgetSwitcher* Switcher_CharacterSelectBtnOnOff;  // 0x4A0 (0x4A0)
	struct UWidgetSwitcher* Switcher_ContinueBtnOnOff;  // 0x4A8 (0x4A8)
	struct UWidgetSwitcher* Switcher_CreditBtnOff;  // 0x4B0 (0x4B0)
	struct UWidgetSwitcher* Switcher_ExitBtnOnOff;  // 0x4B8 (0x4B8)
	struct UWidgetSwitcher* Switcher_LobbyBtnOnOff;  // 0x4C0 (0x4C0)
	struct UWidgetSwitcher* Switcher_OptionBtnOnOff;  // 0x4C8 (0x4C8)
	struct UWB_Credit_C* WB_Credit;  // 0x4D0 (0x4D0)
	struct UWB_QuickVoiceSetting_C* WB_QuickVoiceSetting;  // 0x4D8 (0x4D8)
	int32_t RemainTime;  // 0x4E0 (0x4E0)
	char pad_1252[4];  // 0x4E4 (0x4E4)
	struct UWB_MenuOptionPopup_C* DisplayPopupWnd;  // 0x4E8 (0x4E8)
	struct FTimerHandle PopupTimerHandle;  // 0x4F0 (0x4F0)


	struct UWidget* BP_GetDesiredFocusTarget(); // Function WB_Menu.WB_Menu_C.BP_GetDesiredFocusTarget
	void OnSendMsgVideoDisplayApplyNotify(bool IsApplyed); // Function WB_Menu.WB_Menu_C.OnSendMsgVideoDisplayApplyNotify
	void Construct(); // Function WB_Menu.WB_Menu_C.Construct
	void OnMenuPop(); // Function WB_Menu.WB_Menu_C.OnMenuPop
	void BndEvt__WB_Menu_OptionsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WB_Menu.WB_Menu_C.BndEvt__WB_Menu_OptionsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void OnApplyClicked(bool IsApply); // Function WB_Menu.WB_Menu_C.OnApplyClicked
	void OnDisplayOptionApplyPopup(); // Function WB_Menu.WB_Menu_C.OnDisplayOptionApplyPopup
	void UpdatePopupText(); // Function WB_Menu.WB_Menu_C.UpdatePopupText
	void BndEvt__WB_Menu_CreditButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WB_Menu.WB_Menu_C.BndEvt__WB_Menu_CreditButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	void BP_OnActivated(); // Function WB_Menu.WB_Menu_C.BP_OnActivated
	void BP_OnDeactivated(); // Function WB_Menu.WB_Menu_C.BP_OnDeactivated
	void ExecuteUbergraph_WB_Menu(int32_t EntryPoint); // Function WB_Menu.WB_Menu_C.ExecuteUbergraph_WB_Menu
}; 
 
 


