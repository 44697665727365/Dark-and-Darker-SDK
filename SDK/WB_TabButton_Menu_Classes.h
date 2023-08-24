#pragma once 
#include <WB_TabButton_Menu_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_TabButton_Menu.WB_TabButton_Menu_C
// Size: 0x1518(Inherited: 0x14F0)
struct UWB_TabButton_Menu_C : UCommonButtonBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x14F0 (0x14F0)
	struct UCommonTextBlock* CommonTextBlock;  // 0x14F8 (0x14F8)
	struct FText ButtonText;  // 0x1500 (0x1500)


	void Set Tab Text(struct FText DisplayTabText); // Function WB_TabButton_Menu.WB_TabButton_Menu_C.Set Tab Text
	void PreConstruct(bool IsDesignTime); // Function WB_TabButton_Menu.WB_TabButton_Menu_C.PreConstruct
	void ExecuteUbergraph_WB_TabButton_Menu(int32_t EntryPoint); // Function WB_TabButton_Menu.WB_TabButton_Menu_C.ExecuteUbergraph_WB_TabButton_Menu
}; 
 
 


