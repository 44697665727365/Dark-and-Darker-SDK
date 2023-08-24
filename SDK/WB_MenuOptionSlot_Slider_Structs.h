#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.UpdateSliderValue
// Size: 0x4(Inherited: 0x4)
struct FUpdateSliderValue : FUpdateSliderValue
{
	float NewValue;  // 0x0 (0x0)


}; 
 
 // Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.OnTextCommited
struct FOnTextCommited
{
	struct FText Text;  // 0x0 (0x0)
	enum class ETextCommit CommitMethod;  // 0x18 (0x18)


}; 
 
 // Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.ExecuteUbergraph_WB_MenuOptionSlot_Slider
struct FExecuteUbergraph_WB_MenuOptionSlot_Slider
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	float K2Node_CustomEvent_Value;  // 0x14 (0x14)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x18 (0x18)
	struct FText K2Node_CustomEvent_Text;  // 0x28 (0x28)
	enum class ETextCommit K2Node_CustomEvent_CommitMethod;  // 0x40 (0x40)
	char pad_65_1 : 7;  // 0x41 (0x41)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x41 (0x41)
	char pad_66[6];  // 0x42 (0x42)
	struct FString CallFunc_Conv_TextToString_ReturnValue;  // 0x48 (0x48)
	struct FString CallFunc_ExtractOnlyNumberics_ReturnValue;  // 0x58 (0x58)
	double CallFunc_Conv_StringToDouble_ReturnValue;  // 0x68 (0x68)
	float CallFunc_GetValue_ReturnValue;  // 0x70 (0x70)
	char pad_116[4];  // 0x74 (0x74)
	double CallFunc_MapRangeClamped_ReturnValue;  // 0x78 (0x78)
	struct FText CallFunc_Conv_DoubleToText_ReturnValue;  // 0x80 (0x80)
	struct FGeometry K2Node_Event_MyGeometry;  // 0x98 (0x98)
	struct FPointerEvent K2Node_Event_MouseEvent;  // 0xD8 (0xD8)
	char pad_368_1 : 7;  // 0x170 (0x170)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x170 (0x170)
	char pad_369_1 : 7;  // 0x171 (0x171)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x171 (0x171)
	char pad_370_1 : 7;  // 0x172 (0x172)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x172 (0x172)
	char pad_371[5];  // 0x173 (0x173)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x178 (0x178)
	double CallFunc_MapRangeClamped_ReturnValue_2;  // 0x180 (0x180)
	double CallFunc_MapRangeClamped_ReturnValue_3;  // 0x188 (0x188)
	double CallFunc_Divide_DoubleDouble_ReturnValue;  // 0x190 (0x190)
	float K2Node_Event_NewValue;  // 0x198 (0x198)
	char pad_412[4];  // 0x19C (0x19C)
	double CallFunc_FClamp_ReturnValue;  // 0x1A0 (0x1A0)
	struct FText CallFunc_Conv_DoubleToText_ReturnValue_2;  // 0x1A8 (0x1A8)
	double CallFunc_FClamp_Min_ImplicitCast;  // 0x1C0 (0x1C0)
	double CallFunc_MapRangeClamped_Value_ImplicitCast;  // 0x1C8 (0x1C8)
	double CallFunc_Divide_DoubleDouble_B_ImplicitCast;  // 0x1D0 (0x1D0)
	double CallFunc_MapRangeClamped_Value_ImplicitCast_2;  // 0x1D8 (0x1D8)
	double CallFunc_MapRangeClamped_OutRangeA_ImplicitCast;  // 0x1E0 (0x1E0)
	double CallFunc_MapRangeClamped_OutRangeB_ImplicitCast;  // 0x1E8 (0x1E8)
	double CallFunc_MapRangeClamped_InRangeA_ImplicitCast;  // 0x1F0 (0x1F0)
	float K2Node_CallDelegate_SliderValue_ImplicitCast;  // 0x1F8 (0x1F8)
	char pad_508[4];  // 0x1FC (0x1FC)
	double CallFunc_MapRangeClamped_InRangeB_ImplicitCast;  // 0x200 (0x200)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast;  // 0x208 (0x208)
	double CallFunc_Add_DoubleDouble_B_ImplicitCast;  // 0x210 (0x210)
	double CallFunc_MapRangeClamped_OutRangeA_ImplicitCast_2;  // 0x218 (0x218)
	double CallFunc_MapRangeClamped_OutRangeB_ImplicitCast_2;  // 0x220 (0x220)
	float CallFunc_SetStepSize_InValue_ImplicitCast;  // 0x228 (0x228)
	float K2Node_VariableSet_CurValue_ImplicitCast;  // 0x22C (0x22C)
	float K2Node_VariableSet_CurPerValue_ImplicitCast;  // 0x230 (0x230)
	char pad_564[4];  // 0x234 (0x234)
	double CallFunc_FClamp_Max_ImplicitCast;  // 0x238 (0x238)
	float K2Node_CallDelegate_SliderValue_ImplicitCast_2;  // 0x240 (0x240)
	float K2Node_CallDelegate_SliderValue_ImplicitCast_3;  // 0x244 (0x244)
	float CallFunc_SetOptionValue_InValue_ImplicitCast;  // 0x248 (0x248)


}; 
 
 // Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.OnMouseEnter
// Size: 0xD8(Inherited: 0xD8)
struct FOnMouseEnter : FOnMouseEnter
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FPointerEvent MouseEvent;  // 0x40 (0x40)


}; 
 
 // Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.OnChangeSliderValue
struct FOnChangeSliderValue
{
	float Value;  // 0x0 (0x0)


}; 
 
 // Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.GetPrimaryGamepadFocusWidget
// Size: 0xB(Inherited: 0x8)
struct FGetPrimaryGamepadFocusWidget : FGetPrimaryGamepadFocusWidget
{
	struct UWidget* ReturnValue;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x8 (0x8)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x9 (0x9)
	char pad_18_1 : 7;  // 0x12 (0x12)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0xA (0xA)


}; 
 
 