#pragma once 
#include <WB_CharacterCreateMain_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_CharacterCreateMain.WB_CharacterCreateMain_C
// Size: 0x598(Inherited: 0x4E8)
struct UWB_CharacterCreateMain_C : UCharacterCreateWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4E8 (0x4E8)
	struct UWB_CommonBtn_Arrow_C* Btn_Arrow_L;  // 0x4F0 (0x4F0)
	struct UWB_CommonBtn_Arrow_C* Btn_Arrow_R;  // 0x4F8 (0x4F8)
	struct UButton* Btn_Gender_Man;  // 0x500 (0x500)
	struct UButton* Btn_Gender_Woman;  // 0x508 (0x508)
	struct UTextBlock* ClassName;  // 0x510 (0x510)
	struct UTextBlock* ClassName_FirstLetter;  // 0x518 (0x518)
	struct UTextBlock* CurrentPage;  // 0x520 (0x520)
	struct UTextBlock* Dialog_Text;  // 0x528 (0x528)
	struct UTextBlock* MaxPage;  // 0x530 (0x530)
	struct UOverlay* Overlay_Name;  // 0x538 (0x538)
	struct USizeBox* SizeBox_1;  // 0x540 (0x540)
	struct UWidgetSwitcher* Switcher_GenderBtn_Man_OnOff;  // 0x548 (0x548)
	struct UWidgetSwitcher* Switcher_GenderBtn_Woman_OnOff;  // 0x550 (0x550)
	struct UTextBlock* Txt_BluestoneshardOwned;  // 0x558 (0x558)
	struct UTextBlock* Txt_BluestoneshardPrice;  // 0x560 (0x560)
	struct UTextBlock* Txt_ClassDesc_01;  // 0x568 (0x568)
	struct UTextBlock* Txt_RedstoneshardOwned;  // 0x570 (0x570)
	struct UTextBlock* Txt_RedstoneshardPrice;  // 0x578 (0x578)
	struct UVerticalBox* VBox_ClassPurchase;  // 0x580 (0x580)
	struct UWB_CommonBtn_L_C* WB_Btn_Confirm;  // 0x588 (0x588)
	struct UWB_CommonBtn_L_C* WB_Btn_Exit;  // 0x590 (0x590)


	uint8_t Get_WB_Btn_LaunchShopURL_Visibility(); // Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.Get_WB_Btn_LaunchShopURL_Visibility
	struct UWidget* DoCustomNavigation(uint8_t Navigation); // Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.DoCustomNavigation
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.BP_GetDesiredFocusTarget
	struct FText Get_ClassName_FirstLetter(); // Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.Get_ClassName_FirstLetter
	void GetDescript(struct FPrimaryAssetId ID, struct FText& Result); // Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.GetDescript
	void Construct(); // Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.Construct
	void BndEvt__WB_CharacterCreate_Btn_Gender_Man_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.BndEvt__WB_CharacterCreate_Btn_Gender_Man_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__WB_CharacterCreate_Btn_Gender_Woman_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.BndEvt__WB_CharacterCreate_Btn_Gender_Woman_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	void BndEvt__WB_CharacterCreateMain_WB_Btn_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.BndEvt__WB_CharacterCreateMain_WB_Btn_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	void BndEvt__WB_CharacterCreateMain_WB_Btn_Confirm_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.BndEvt__WB_CharacterCreateMain_WB_Btn_Confirm_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	void ExecuteUbergraph_WB_CharacterCreateMain(int32_t EntryPoint); // Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.ExecuteUbergraph_WB_CharacterCreateMain
}; 
 
 


