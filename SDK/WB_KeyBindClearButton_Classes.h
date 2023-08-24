#pragma once 
#include <WB_KeyBindClearButton_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_KeyBindClearButton.WB_KeyBindClearButton_C
// Size: 0x15A0(Inherited: 0x1580)
struct UWB_KeyBindClearButton_C : UDCCommonButtonBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x1580 (0x1580)
	struct UImage* Img_BtnBG;  // 0x1588 (0x1588)
	struct UImage* Img_Press;  // 0x1590 (0x1590)
	struct UTextBlock* Txt_Title;  // 0x1598 (0x1598)


	void BP_OnUnhovered(); // Function WB_KeyBindClearButton.WB_KeyBindClearButton_C.BP_OnUnhovered
	void BP_OnHovered(); // Function WB_KeyBindClearButton.WB_KeyBindClearButton_C.BP_OnHovered
	void BP_OnPressed(); // Function WB_KeyBindClearButton.WB_KeyBindClearButton_C.BP_OnPressed
	void BP_OnReleased(); // Function WB_KeyBindClearButton.WB_KeyBindClearButton_C.BP_OnReleased
	void ExecuteUbergraph_WB_KeyBindClearButton(int32_t EntryPoint); // Function WB_KeyBindClearButton.WB_KeyBindClearButton_C.ExecuteUbergraph_WB_KeyBindClearButton
}; 
 
 


