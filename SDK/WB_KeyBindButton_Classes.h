#pragma once 
#include <WB_KeyBindButton_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_KeyBindButton.WB_KeyBindButton_C
// Size: 0x1598(Inherited: 0x1580)
struct UWB_KeyBindButton_C : UDCCommonButtonBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x1580 (0x1580)
	struct UImage* Img_BtnBG;  // 0x1588 (0x1588)
	struct UCommonTextBlock* Txt_Title;  // 0x1590 (0x1590)


	void BP_OnUnhovered(); // Function WB_KeyBindButton.WB_KeyBindButton_C.BP_OnUnhovered
	void BP_OnHovered(); // Function WB_KeyBindButton.WB_KeyBindButton_C.BP_OnHovered
	void ExecuteUbergraph_WB_KeyBindButton(int32_t EntryPoint); // Function WB_KeyBindButton.WB_KeyBindButton_C.ExecuteUbergraph_WB_KeyBindButton
}; 
 
 


