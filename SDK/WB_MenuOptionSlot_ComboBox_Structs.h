#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WB_MenuOptionSlot_ComboBox.WB_MenuOptionSlot_ComboBox_C.OnSelectedChanged
struct FOnSelectedChanged
{
	struct FString SelectedItem;  // 0x0 (0x0)
	enum class ESelectInfo SelectionType;  // 0x10 (0x10)


}; 
 
 // Function WB_MenuOptionSlot_ComboBox.WB_MenuOptionSlot_ComboBox_C.OnMouseEnter
// Size: 0xD8(Inherited: 0xD8)
struct FOnMouseEnter : FOnMouseEnter
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FPointerEvent MouseEvent;  // 0x40 (0x40)


}; 
 
 // Function WB_MenuOptionSlot_ComboBox.WB_MenuOptionSlot_ComboBox_C.GetPrimaryGamepadFocusWidget
// Size: 0x9(Inherited: 0x8)
struct FGetPrimaryGamepadFocusWidget : FGetPrimaryGamepadFocusWidget
{
	struct UWidget* ReturnValue;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x8 (0x8)


}; 
 
 // Function WB_MenuOptionSlot_ComboBox.WB_MenuOptionSlot_ComboBox_C.ExecuteUbergraph_WB_MenuOptionSlot_ComboBox
struct FExecuteUbergraph_WB_MenuOptionSlot_ComboBox
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	char pad_20[4];  // 0x14 (0x14)
	struct FString K2Node_CustomEvent_SelectedItem;  // 0x18 (0x18)
	enum class ESelectInfo K2Node_CustomEvent_SelectionType;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	int32_t CallFunc_FindOptionIndex_ReturnValue;  // 0x2C (0x2C)
	struct FGeometry K2Node_Event_MyGeometry;  // 0x30 (0x30)
	struct FPointerEvent K2Node_Event_MouseEvent;  // 0x70 (0x70)
	char pad_264_1 : 7;  // 0x108 (0x108)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x108 (0x108)


}; 
 
 