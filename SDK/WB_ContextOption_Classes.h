#pragma once 
#include <WB_ContextOption_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_ContextOption.WB_ContextOption_C
// Size: 0x15B0(Inherited: 0x1590)
struct UWB_ContextOption_C : UContextOptionListEntryWidgetBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x1590 (0x1590)
	struct UWidgetSwitcher* Switcher_OnOff;  // 0x1598 (0x1598)
	struct UTextBlock* Text_Off;  // 0x15A0 (0x15A0)
	struct UTextBlock* Text_On;  // 0x15A8 (0x15A8)


	void BP_OnUnhovered(); // Function WB_ContextOption.WB_ContextOption_C.BP_OnUnhovered
	void BP_OnHovered(); // Function WB_ContextOption.WB_ContextOption_C.BP_OnHovered
	void ExecuteUbergraph_WB_ContextOption(int32_t EntryPoint); // Function WB_ContextOption.WB_ContextOption_C.ExecuteUbergraph_WB_ContextOption
}; 
 
 


