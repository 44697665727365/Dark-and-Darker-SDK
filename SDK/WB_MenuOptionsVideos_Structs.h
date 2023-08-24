#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayModeSelected
struct FOnDisplayModeSelected
{
	int32_t SelIndex;  // 0x0 (0x0)


}; 
 
 // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnSliderHovered
struct FOnSliderHovered
{
	struct UWB_MenuOptionSlot_Slider_C* Slider;  // 0x0 (0x0)


}; 
 
 // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.SetPopupText
struct FSetPopupText
{
	int32_t RemainTime;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FString CallFunc_Conv_IntToString_ReturnValue;  // 0x8 (0x8)
	struct FString CallFunc_Concat_StrStr_ReturnValue;  // 0x18 (0x18)
	struct FString CallFunc_Concat_StrStr_ReturnValue_2;  // 0x28 (0x28)
	struct FText CallFunc_Conv_StringToText_ReturnValue;  // 0x38 (0x38)


}; 
 
 // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnOptionHovered
struct FOnOptionHovered
{
	struct UGameMenuOptionBaseWidget* InHoveredWidget;  // 0x0 (0x0)


}; 
 
 // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.SetActivateHover
struct FSetActivateHover
{
	struct UWidgetSwitcher* ActivateHoveer;  // 0x0 (0x0)
	struct FText Title;  // 0x8 (0x8)
	struct FText DetailDesc;  // 0x20 (0x20)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x38 (0x38)
	int32_t Temp_int_Array_Index_Variable;  // 0x3C (0x3C)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)
	struct UWidgetSwitcher* CallFunc_Array_Get_Item;  // 0x48 (0x48)
	int32_t CallFunc_Max_ReturnValue;  // 0x50 (0x50)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x54 (0x54)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_2;  // 0x58 (0x58)
	char pad_92_1 : 7;  // 0x5C (0x5C)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x5C (0x5C)


}; 
 
 // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.BP_GetDesiredFocusTarget
// Size: 0x8(Inherited: 0x8)
struct FBP_GetDesiredFocusTarget : FBP_GetDesiredFocusTarget
{
	struct UWidget* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnQualityLevelInitialized
struct FOnQualityLevelInitialized
{
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x0 (0x0)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x10 (0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x14 (0x14)
	int32_t CallFunc_Array_AddUnique_ReturnValue_2;  // 0x24 (0x24)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x28 (0x28)
	int32_t CallFunc_Array_AddUnique_ReturnValue_3;  // 0x38 (0x38)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x3C (0x3C)
	int32_t CallFunc_Array_AddUnique_ReturnValue_4;  // 0x4C (0x4C)


}; 
 
 // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnMessageReceived_E792FD8C4A9CB0949DDA36A51D3D5965
struct FOnMessageReceived_E792FD8C4A9CB0949DDA36A51D3D5965
{
	struct UMsgBaseNode* ProxyObject;  // 0x0 (0x0)


}; 
 
 // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayOptionInitialized
struct FOnDisplayOptionInitialized
{
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x10 (0x10)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x20 (0x20)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x24 (0x24)
	int32_t CallFunc_Array_AddUnique_ReturnValue_2;  // 0x34 (0x34)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x38 (0x38)
	int32_t CallFunc_Array_AddUnique_ReturnValue_3;  // 0x48 (0x48)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_5;  // 0x4C (0x4C)
	int32_t CallFunc_Array_AddUnique_ReturnValue_4;  // 0x5C (0x5C)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_6;  // 0x60 (0x60)
	int32_t CallFunc_Array_AddUnique_ReturnValue_5;  // 0x70 (0x70)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_7;  // 0x74 (0x74)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_8;  // 0x84 (0x84)
	char pad_148[4];  // 0x94 (0x94)
	struct UWB_MenuOptionSlot_Slider_C* K2Node_DynamicCast_AsWB_Menu_Option_Slot_Slider;  // 0x98 (0x98)
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xA0 (0xA0)
	char pad_161[7];  // 0xA1 (0xA1)
	struct UWB_MenuOptionSlot_ComboBox_C* K2Node_DynamicCast_AsWB_Menu_Option_Slot_Combo_Box;  // 0xA8 (0xA8)
	char pad_176_1 : 7;  // 0xB0 (0xB0)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0xB0 (0xB0)
	char pad_177[7];  // 0xB1 (0xB1)
	struct UWB_MenuOptionSlot_Slider_C* K2Node_DynamicCast_AsWB_Menu_Option_Slot_Slider_2;  // 0xB8 (0xB8)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0xC0 (0xC0)
	char pad_193[7];  // 0xC1 (0xC1)
	struct UWB_MenuOptionSlot_Slider_C* K2Node_DynamicCast_AsWB_Menu_Option_Slot_Slider_3;  // 0xC8 (0xC8)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool K2Node_DynamicCast_bSuccess_4 : 1;  // 0xD0 (0xD0)
	char pad_209[3];  // 0xD1 (0xD1)
	int32_t CallFunc_Array_AddUnique_ReturnValue_6;  // 0xD4 (0xD4)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_9;  // 0xD8 (0xD8)
	struct UWB_MenuOptionSlot_Slider_C* K2Node_DynamicCast_AsWB_Menu_Option_Slot_Slider_4;  // 0xE8 (0xE8)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool K2Node_DynamicCast_bSuccess_5 : 1;  // 0xF0 (0xF0)
	char pad_241[3];  // 0xF1 (0xF1)
	int32_t CallFunc_Array_AddUnique_ReturnValue_7;  // 0xF4 (0xF4)
	int32_t CallFunc_Array_AddUnique_ReturnValue_8;  // 0xF8 (0xF8)
	int32_t CallFunc_Array_AddUnique_ReturnValue_9;  // 0xFC (0xFC)
	int32_t CallFunc_Array_AddUnique_ReturnValue_10;  // 0x100 (0x100)
	int32_t CallFunc_Array_AddUnique_ReturnValue_11;  // 0x104 (0x104)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_10;  // 0x108 (0x108)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_11;  // 0x118 (0x118)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_12;  // 0x128 (0x128)
	struct UWB_MenuOptionSlot_ComboBox_C* K2Node_DynamicCast_AsWB_Menu_Option_Slot_Combo_Box_2;  // 0x138 (0x138)
	char pad_320_1 : 7;  // 0x140 (0x140)
	bool K2Node_DynamicCast_bSuccess_6 : 1;  // 0x140 (0x140)


}; 
 
 // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnComboHovered
struct FOnComboHovered
{
	struct UWB_MenuOptionSlot_ComboBox_C* Combo;  // 0x0 (0x0)


}; 
 
 // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnChangeGammaValue
struct FOnChangeGammaValue
{
	float SliderValue;  // 0x0 (0x0)


}; 
 
 // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.ExecuteUbergraph_WB_MenuOptionsVideos
struct FExecuteUbergraph_WB_MenuOptionsVideos
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FMsgWidgetOptionVideoDisplayApplyedNotify Temp_struct_Variable;  // 0x8 (0x8)
	struct UMsgBaseNode* Temp_object_Variable;  // 0x28 (0x28)
	int32_t K2Node_CustomEvent_SelIndex;  // 0x30 (0x30)
	float K2Node_CustomEvent_SliderValue;  // 0x34 (0x34)
	struct FMsgWidgetOptionVideoDisplayApplyedNotify K2Node_CustomEvent_Msg;  // 0x38 (0x38)
	struct TScriptInterface<IBaseInterface> CallFunc_GetOwningBaseInterfaceBlueprint_ReturnValue;  // 0x58 (0x58)
	struct UBindMsgNode* CallFunc_BindMsgNode_ReturnValue;  // 0x68 (0x68)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x70 (0x70)
	char pad_113[7];  // 0x71 (0x71)
	struct UObject* CallFunc_Conv_InterfaceToObject_ReturnValue;  // 0x78 (0x78)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x80 (0x80)
	char pad_129[7];  // 0x81 (0x81)
	struct UMsgBaseNode* K2Node_CustomEvent_ProxyObject;  // 0x88 (0x88)
	struct TScriptInterface<IBaseInterface> CallFunc_GetOwningBaseInterfaceBlueprint_ReturnValue_2;  // 0x90 (0x90)
	struct UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_2;  // 0xA0 (0xA0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xA8 (0xA8)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0xB8 (0xB8)
	char pad_185[7];  // 0xB9 (0xB9)
	struct FMsgWidgetShowVideoDisplayApplyAlarmWndNotity K2Node_MakeStruct_MsgWidgetShowVideoDisplayApplyAlarmWndNotity;  // 0xC0 (0xC0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0xD8 (0xD8)
	struct UGameMenuOptionBaseWidget* K2Node_CustomEvent_InHoveredWidget;  // 0xE8 (0xE8)
	struct UWB_MenuOptionSlot_Slider_C* K2Node_CustomEvent_Slider;  // 0xF0 (0xF0)
	struct FMsgWidgetOptionVideoDisplayApplyedNotify Temp_struct_Variable_2;  // 0xF8 (0xF8)
	char pad_280_1 : 7;  // 0x118 (0x118)
	bool CallFunc_GetPayload_ReturnValue : 1;  // 0x118 (0x118)
	char pad_281_1 : 7;  // 0x119 (0x119)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0x119 (0x119)
	char pad_282_1 : 7;  // 0x11A (0x11A)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2 : 1;  // 0x11A (0x11A)
	char pad_283_1 : 7;  // 0x11B (0x11B)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3 : 1;  // 0x11B (0x11B)
	char pad_284[4];  // 0x11C (0x11C)
	struct UWB_MenuOptionSlot_ComboBox_C* K2Node_CustomEvent_Combo;  // 0x120 (0x120)
	char pad_296_1 : 7;  // 0x128 (0x128)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_4 : 1;  // 0x128 (0x128)
	char pad_297_1 : 7;  // 0x129 (0x129)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_5 : 1;  // 0x129 (0x129)
	char pad_298_1 : 7;  // 0x12A (0x12A)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_6 : 1;  // 0x12A (0x12A)
	char pad_299[1];  // 0x12B (0x12B)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x12C (0x12C)


}; 
 
 // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.EventFMsgWidgetOptionVideoDisplayApplyedNotify
struct FEventFMsgWidgetOptionVideoDisplayApplyedNotify
{
	struct FMsgWidgetOptionVideoDisplayApplyedNotify Msg;  // 0x0 (0x0)


}; 
 
 