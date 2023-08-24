#pragma once 
#include <WB_OptionCheckButton01_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_OptionCheckButton01.WB_OptionCheckButton01_C
// Size: 0x2D0(Inherited: 0x278)
struct UWB_OptionCheckButton01_C : UUserWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x278 (0x278)
	struct UButton* Btn_Check;  // 0x280 (0x280)
	struct UImage* Img_BtnBG;  // 0x288 (0x288)
	struct UWidgetSwitcher* Switcher_OnOff;  // 0x290 (0x290)
	struct UTextBlock* Txt_Title_Off;  // 0x298 (0x298)
	struct UTextBlock* Txt_Title_On;  // 0x2A0 (0x2A0)
	struct FText BtnText;  // 0x2A8 (0x2A8)
	int32_t SlotIdx;  // 0x2C0 (0x2C0)
	char pad_708[4];  // 0x2C4 (0x2C4)
	struct UGameMenuOptionSlotWidget* GameMenuOptionSlotWidget;  // 0x2C8 (0x2C8)


	void UpdateButtonSize(double Scale X, double Scale Y); // Function WB_OptionCheckButton01.WB_OptionCheckButton01_C.UpdateButtonSize
	void Construct(); // Function WB_OptionCheckButton01.WB_OptionCheckButton01_C.Construct
	void BndEvt__WB_OptionCheckButton01_Btn_Check_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WB_OptionCheckButton01.WB_OptionCheckButton01_C.BndEvt__WB_OptionCheckButton01_Btn_Check_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__WB_OptionCheckButton01_Btn_Check_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WB_OptionCheckButton01.WB_OptionCheckButton01_C.BndEvt__WB_OptionCheckButton01_Btn_Check_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	void Init(struct UGameMenuOptionSlotWidget* InGameMenuOptionSlotWidget, int32_t InSlotIdx); // Function WB_OptionCheckButton01.WB_OptionCheckButton01_C.Init
	void OnClicked(); // Function WB_OptionCheckButton01.WB_OptionCheckButton01_C.OnClicked
	void ExecuteUbergraph_WB_OptionCheckButton01(int32_t EntryPoint); // Function WB_OptionCheckButton01.WB_OptionCheckButton01_C.ExecuteUbergraph_WB_OptionCheckButton01
}; 
 
 


