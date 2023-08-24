#pragma once 
#include <WB_MenuOptionSlot_ComboBox_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_MenuOptionSlot_ComboBox.WB_MenuOptionSlot_ComboBox_C
// Size: 0x340(Inherited: 0x320)
struct UWB_MenuOptionSlot_ComboBox_C : UGameMenuOptionComboBoxWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x320 (0x320)
	struct UButton* Btn_Hovering;  // 0x328 (0x328)
	struct UWidgetSwitcher* Switcher_Selected;  // 0x330 (0x330)
	struct UWB_MenuOptionsVideos_C* WB_MenuOptionsVideos;  // 0x338 (0x338)


	struct UWidget* GetPrimaryGamepadFocusWidget(); // Function WB_MenuOptionSlot_ComboBox.WB_MenuOptionSlot_ComboBox_C.GetPrimaryGamepadFocusWidget
	void Construct(); // Function WB_MenuOptionSlot_ComboBox.WB_MenuOptionSlot_ComboBox_C.Construct
	void OnSelectedChanged(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function WB_MenuOptionSlot_ComboBox.WB_MenuOptionSlot_ComboBox_C.OnSelectedChanged
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WB_MenuOptionSlot_ComboBox.WB_MenuOptionSlot_ComboBox_C.OnMouseEnter
	void ExecuteUbergraph_WB_MenuOptionSlot_ComboBox(int32_t EntryPoint); // Function WB_MenuOptionSlot_ComboBox.WB_MenuOptionSlot_ComboBox_C.ExecuteUbergraph_WB_MenuOptionSlot_ComboBox
}; 
 
 


