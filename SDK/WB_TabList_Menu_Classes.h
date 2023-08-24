#pragma once 
#include <WB_TabList_Menu_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_TabList_Menu.WB_TabList_Menu_C
// Size: 0x3E4(Inherited: 0x388)
struct UWB_TabList_Menu_C : UCommonTabListWidgetBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x388 (0x388)
	struct UCommonActionWidget* NextTabAction;  // 0x390 (0x390)
	struct UCommonActionWidget* PreviousTabAction;  // 0x398 (0x398)
	struct UHorizontalBox* TabButtonBox;  // 0x3A0 (0x3A0)
	struct TArray<struct FText> TabEntries_Text;  // 0x3A8 (0x3A8)
	struct TArray<struct FName> TabEntries_Name;  // 0x3B8 (0x3B8)
	struct TArray<struct UCommonActivatableWidget*> TabEntries;  // 0x3C8 (0x3C8)
	struct UCommonAnimatedSwitcher* LinkedSwitcherWidget;  // 0x3D8 (0x3D8)
	int32_t I;  // 0x3E0 (0x3E0)


	void Construct(); // Function WB_TabList_Menu.WB_TabList_Menu_C.Construct
	void EventOnTabSelected(struct FName TabId); // Function WB_TabList_Menu.WB_TabList_Menu_C.EventOnTabSelected
	void ExecuteUbergraph_WB_TabList_Menu(int32_t EntryPoint); // Function WB_TabList_Menu.WB_TabList_Menu_C.ExecuteUbergraph_WB_TabList_Menu
}; 
 
 


