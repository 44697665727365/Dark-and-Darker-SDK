#pragma once 
#include <WB_CommonPlusBtn_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_CommonPlusBtn.WB_CommonPlusBtn_C
// Size: 0x15A0(Inherited: 0x1580)
struct UWB_CommonPlusBtn_C : UDCCommonButtonBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x1580 (0x1580)
	struct UImage* Img_Hover;  // 0x1588 (0x1588)
	struct UImage* Img_Normal;  // 0x1590 (0x1590)
	struct UImage* Img_Press;  // 0x1598 (0x1598)


	void BP_OnHovered(); // Function WB_CommonPlusBtn.WB_CommonPlusBtn_C.BP_OnHovered
	void BP_OnUnhovered(); // Function WB_CommonPlusBtn.WB_CommonPlusBtn_C.BP_OnUnhovered
	void BP_OnPressed(); // Function WB_CommonPlusBtn.WB_CommonPlusBtn_C.BP_OnPressed
	void BP_OnReleased(); // Function WB_CommonPlusBtn.WB_CommonPlusBtn_C.BP_OnReleased
	void ExecuteUbergraph_WB_CommonPlusBtn(int32_t EntryPoint); // Function WB_CommonPlusBtn.WB_CommonPlusBtn_C.ExecuteUbergraph_WB_CommonPlusBtn
}; 
 
 


