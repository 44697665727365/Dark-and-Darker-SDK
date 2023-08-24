#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.UpdateRadialDirectionWithMousePosition
struct FUpdateRadialDirectionWithMousePosition
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x8 (0x8)
	struct FVector2D Direction;  // 0x10 (0x10)
	struct FPrimaryAssetId CallFunc_GetPrimaryAssetIdFromObject_ReturnValue;  // 0x20 (0x20)
	float CallFunc_GetViewportScale_ReturnValue;  // 0x30 (0x30)
	float CallFunc_GetConstantFloat_ReturnValue;  // 0x34 (0x34)
	struct FVector2D CallFunc_GetViewportSize_ReturnValue;  // 0x38 (0x38)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x48 (0x48)
	double CallFunc_BreakVector2D_X;  // 0x50 (0x50)
	double CallFunc_BreakVector2D_Y;  // 0x58 (0x58)
	struct FVector2D CallFunc_Divide_Vector2DFloat_ReturnValue;  // 0x60 (0x60)
	float CallFunc_GetViewportScale_ReturnValue_2;  // 0x70 (0x70)
	char pad_116[4];  // 0x74 (0x74)
	struct FVector2D CallFunc_GetMousePositionOnViewport_ReturnValue;  // 0x78 (0x78)
	struct FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue;  // 0x88 (0x88)
	struct FVector2D CallFunc_Add_Vector2DVector2D_ReturnValue;  // 0x98 (0x98)
	double CallFunc_BreakVector2D_X_2;  // 0xA8 (0xA8)
	double CallFunc_BreakVector2D_Y_2;  // 0xB0 (0xB0)
	double CallFunc_Divide_DoubleDouble_ReturnValue;  // 0xB8 (0xB8)
	double CallFunc_Divide_DoubleDouble_ReturnValue_2;  // 0xC0 (0xC0)
	struct FVector2D CallFunc_MakeVector2D_ReturnValue;  // 0xC8 (0xC8)
	double CallFunc_VSize2D_ReturnValue;  // 0xD8 (0xD8)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0xE0 (0xE0)
	char pad_225[7];  // 0xE1 (0xE1)
	double CallFunc_Multiply_DoubleDouble_B_ImplicitCast;  // 0xE8 (0xE8)
	double CallFunc_Multiply_DoubleDouble_A_ImplicitCast;  // 0xF0 (0xF0)
	double CallFunc_Multiply_Vector2DFloat_B_ImplicitCast;  // 0xF8 (0xF8)


}; 
 
 // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetSpellTypeColor
struct FGetSpellTypeColor
{
	struct FGameplayTag SpellSourceType;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x8 (0x8)
	struct FSlateColor OutlineColor;  // 0x10 (0x10)
	char pad_36[4];  // 0x24 (0x24)
	struct TMap<struct FGameplayTag, struct FSlateColor> ColorMap;  // 0x28 (0x28)
	struct TMap<struct FGameplayTag, struct FSlateColor> K2Node_MakeVariable_MakeVariableOutput;  // 0x78 (0x78)
	struct FSlateColor CallFunc_Map_Find_Value;  // 0xC8 (0xC8)
	char pad_220_1 : 7;  // 0xDC (0xDC)
	bool CallFunc_Map_Find_ReturnValue : 1;  // 0xDC (0xDC)
	char pad_221[3];  // 0xDD (0xDD)
	struct FSlateColor K2Node_MakeStruct_SlateColor;  // 0xE0 (0xE0)


}; 
 
 // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetSemicircleSelectedIndexByInputDirection
struct FGetSemicircleSelectedIndexByInputDirection
{
	struct FVector2D Direction;  // 0x0 (0x0)
	double SectionDegreeSize;  // 0x10 (0x10)
	struct UObject* __WorldContext;  // 0x18 (0x18)
	int32_t RadialIndex;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct FVector2D CallFunc_Normal2D_ReturnValue;  // 0x28 (0x28)
	double CallFunc_DegAtan2_ReturnValue;  // 0x38 (0x38)
	struct FVector2D CallFunc_NormalSafe2D_ReturnValue;  // 0x40 (0x40)
	struct FVector CallFunc_Conv_Vector2DToVector_ReturnValue;  // 0x50 (0x50)
	double CallFunc_BreakVector2D_X;  // 0x68 (0x68)
	double CallFunc_BreakVector2D_Y;  // 0x70 (0x70)
	struct FVector CallFunc_RotateAngleAxis_ReturnValue;  // 0x78 (0x78)
	char pad_144_1 : 7;  // 0x90 (0x90)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0x90 (0x90)
	char pad_145[7];  // 0x91 (0x91)
	struct FVector2D CallFunc_Conv_VectorToVector2D_ReturnValue;  // 0x98 (0x98)
	double CallFunc_BreakVector2D_X_2;  // 0xA8 (0xA8)
	double CallFunc_BreakVector2D_Y_2;  // 0xB0 (0xB0)
	double CallFunc_DegAtan2_ReturnValue_2;  // 0xB8 (0xB8)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0xC0 (0xC0)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0xC8 (0xC8)
	double CallFunc_Divide_DoubleDouble_ReturnValue;  // 0xD0 (0xD0)
	int32_t CallFunc_FTrunc_ReturnValue;  // 0xD8 (0xD8)


}; 
 
 // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetRadialSelectedIndexByInputDirection
struct FGetRadialSelectedIndexByInputDirection
{
	struct FVector2D Direction;  // 0x0 (0x0)
	double SectionDegreeSize;  // 0x10 (0x10)
	struct UObject* __WorldContext;  // 0x18 (0x18)
	int32_t RadialIndex;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct FVector2D CallFunc_Normal2D_ReturnValue;  // 0x28 (0x28)
	double CallFunc_Divide_DoubleDouble_ReturnValue;  // 0x38 (0x38)
	struct FVector2D CallFunc_NormalSafe2D_ReturnValue;  // 0x40 (0x40)
	struct FVector CallFunc_Conv_Vector2DToVector_ReturnValue;  // 0x50 (0x50)
	double CallFunc_DegAtan2_ReturnValue;  // 0x68 (0x68)
	struct FVector CallFunc_RotateAngleAxis_ReturnValue;  // 0x70 (0x70)
	struct FVector2D CallFunc_Conv_VectorToVector2D_ReturnValue;  // 0x88 (0x88)
	double CallFunc_BreakVector2D_X;  // 0x98 (0x98)
	double CallFunc_BreakVector2D_Y;  // 0xA0 (0xA0)
	double CallFunc_DegAtan2_ReturnValue_2;  // 0xA8 (0xA8)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0xB0 (0xB0)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0xB8 (0xB8)
	double CallFunc_Divide_DoubleDouble_ReturnValue_2;  // 0xC0 (0xC0)
	int32_t CallFunc_FTrunc_ReturnValue;  // 0xC8 (0xC8)
	float CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast;  // 0xCC (0xCC)


}; 
 
 // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetPlayerCharacterEffectTypeText
struct FGetPlayerCharacterEffectTypeText
{
	struct FGameplayTag GameplayTag;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x8 (0x8)
	struct FText Text;  // 0x10 (0x10)
	struct TMap<struct FGameplayTag, struct FText> TextMap;  // 0x28 (0x28)
	struct TMap<struct FGameplayTag, struct FText> K2Node_MakeVariable_MakeVariableOutput;  // 0x78 (0x78)
	struct FText CallFunc_Map_Find_Value;  // 0xC8 (0xC8)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool CallFunc_Map_Find_ReturnValue : 1;  // 0xE0 (0xE0)


}; 
 
 // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetItemWeaponTypeText
struct FGetItemWeaponTypeText
{
	struct FGameplayTag GameplayTag;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x8 (0x8)
	struct FText Text;  // 0x10 (0x10)
	struct TMap<struct FGameplayTag, struct FText> CallFunc_GetItemWeaponTypeTextMap_ReturnValue;  // 0x28 (0x28)
	struct FText CallFunc_Map_Find_Value;  // 0x78 (0x78)
	char pad_144_1 : 7;  // 0x90 (0x90)
	bool CallFunc_Map_Find_ReturnValue : 1;  // 0x90 (0x90)


}; 
 
 // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetItemRaritySlateColor
struct FGetItemRaritySlateColor
{
	struct FGameplayTag Rarity;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x8 (0x8)
	struct FSlateColor SlateColor;  // 0x10 (0x10)
	char pad_36[4];  // 0x24 (0x24)
	struct TMap<struct FGameplayTag, struct FSlateColor> SlateColorMap;  // 0x28 (0x28)
	struct TMap<struct FGameplayTag, struct FSlateColor> K2Node_MakeVariable_MakeVariableOutput;  // 0x78 (0x78)
	struct FSlateColor K2Node_MakeStruct_SlateColor;  // 0xC8 (0xC8)
	struct FSlateColor CallFunc_Map_Find_Value;  // 0xDC (0xDC)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool CallFunc_Map_Find_ReturnValue : 1;  // 0xF0 (0xF0)


}; 
 
 // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetItemSlotTypeText
struct FGetItemSlotTypeText
{
	struct FGameplayTag GameplayTag;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x8 (0x8)
	struct FText Text;  // 0x10 (0x10)
	struct TMap<struct FGameplayTag, struct FText> CallFunc_GetItemSlotTypeTextMap_ReturnValue;  // 0x28 (0x28)
	struct FText CallFunc_Map_Find_Value;  // 0x78 (0x78)
	char pad_144_1 : 7;  // 0x90 (0x90)
	bool CallFunc_Map_Find_ReturnValue : 1;  // 0x90 (0x90)


}; 
 
 // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetItemHandTypeText
struct FGetItemHandTypeText
{
	struct FGameplayTag GameplayTag;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x8 (0x8)
	struct FText Text;  // 0x10 (0x10)
	struct TMap<struct FGameplayTag, struct FText> CallFunc_GetItemHandTypeTextMap_ReturnValue;  // 0x28 (0x28)
	struct FText CallFunc_Map_Find_Value;  // 0x78 (0x78)
	char pad_144_1 : 7;  // 0x90 (0x90)
	bool CallFunc_Map_Find_ReturnValue : 1;  // 0x90 (0x90)


}; 
 
 // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetItemEffectValueText
struct FGetItemEffectValueText
{
	struct FGameplayTag EffectTag;  // 0x0 (0x0)
	int32_t EffectValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct UObject* __WorldContext;  // 0x10 (0x10)
	struct FText EffectValueText;  // 0x18 (0x18)
	int32_t Value;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)
	int64_t CallFunc_Conv_IntToInt64_ReturnValue;  // 0x38 (0x38)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	struct FFormatArgumentData K2Node_MakeStruct_FormatArgumentData;  // 0x48 (0x48)
	struct TArray<struct FFormatArgumentData> K2Node_MakeArray_Array;  // 0x98 (0x98)
	float CallFunc_Conv_IntToFloat_ReturnValue;  // 0xA8 (0xA8)
	char pad_172[4];  // 0xAC (0xAC)
	struct FText CallFunc_Format_ReturnValue;  // 0xB0 (0xB0)
	double CallFunc_Divide_DoubleDouble_ReturnValue;  // 0xC8 (0xC8)
	struct FText CallFunc_Conv_DoubleToText_ReturnValue;  // 0xD0 (0xD0)
	struct FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2;  // 0xE8 (0xE8)
	float CallFunc_Conv_IntToFloat_ReturnValue_2;  // 0x138 (0x138)
	char pad_316[4];  // 0x13C (0x13C)
	struct TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2;  // 0x140 (0x140)
	double CallFunc_Divide_DoubleDouble_ReturnValue_2;  // 0x150 (0x150)
	struct FText CallFunc_Format_ReturnValue_2;  // 0x158 (0x158)
	struct FText CallFunc_Conv_DoubleToText_ReturnValue_2;  // 0x170 (0x170)
	struct FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3;  // 0x188 (0x188)
	struct TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3;  // 0x1D8 (0x1D8)
	struct FText CallFunc_Format_ReturnValue_3;  // 0x1E8 (0x1E8)
	double CallFunc_Divide_DoubleDouble_A_ImplicitCast;  // 0x200 (0x200)
	double CallFunc_Divide_DoubleDouble_A_ImplicitCast_2;  // 0x208 (0x208)


}; 
 
 // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetItemEffectTypeText
struct FGetItemEffectTypeText
{
	struct FGameplayTag GameplayTag;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x8 (0x8)
	struct FText Text;  // 0x10 (0x10)
	struct TMap<struct FGameplayTag, struct FText> CallFunc_GetItemEffectTypeTextMap_ReturnValue;  // 0x28 (0x28)
	struct FText CallFunc_Map_Find_Value;  // 0x78 (0x78)
	char pad_144_1 : 7;  // 0x90 (0x90)
	bool CallFunc_Map_Find_ReturnValue : 1;  // 0x90 (0x90)


}; 
 
 // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetItemArmorTypeText
struct FGetItemArmorTypeText
{
	struct FGameplayTag GameplayTag;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x8 (0x8)
	struct FText Text;  // 0x10 (0x10)
	struct TMap<struct FGameplayTag, struct FText> CallFunc_GetItemArmorTypeTextMap_ReturnValue;  // 0x28 (0x28)
	struct FText CallFunc_Map_Find_Value;  // 0x78 (0x78)
	char pad_144_1 : 7;  // 0x90 (0x90)
	bool CallFunc_Map_Find_ReturnValue : 1;  // 0x90 (0x90)


}; 
 
 // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetItemUtilityTypeText
struct FGetItemUtilityTypeText
{
	struct FGameplayTag GameplayTag;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x8 (0x8)
	struct FText Text;  // 0x10 (0x10)
	struct TMap<struct FGameplayTag, struct FText> CallFunc_GetItemUtilityTypeTextMap_ReturnValue;  // 0x28 (0x28)
	struct FText CallFunc_Map_Find_Value;  // 0x78 (0x78)
	char pad_144_1 : 7;  // 0x90 (0x90)
	bool CallFunc_Map_Find_ReturnValue : 1;  // 0x90 (0x90)


}; 
 
 // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetGamepadButtonImage
struct FGetGamepadButtonImage
{
	struct FKey Key;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x18 (0x18)
	struct UTexture2D* Image;  // 0x20 (0x20)
	struct TMap<struct FKey, struct UTexture2D*> ImageMapByKey;  // 0x28 (0x28)
	struct TMap<struct FKey, struct UTexture2D*> K2Node_MakeVariable_MakeVariableOutput;  // 0x78 (0x78)
	struct UTexture2D* CallFunc_Map_Find_Value;  // 0xC8 (0xC8)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool CallFunc_Map_Find_ReturnValue : 1;  // 0xD0 (0xD0)


}; 
 
 // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetFirstKeyByInputAction
struct FGetFirstKeyByInputAction
{
	struct UInputAction* InputAction;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x8 (0x8)
	struct FText KeyDisplayName;  // 0x10 (0x10)
	struct FKey CallFunc_GetFirstMappedKeyFromRegisteredInputToAction_ReturnValue;  // 0x28 (0x28)
	struct FText CallFunc_Key_GetDisplayName_ReturnValue;  // 0x40 (0x40)
	struct FText CallFunc_Key_GetDisplayName_ReturnValue_2;  // 0x58 (0x58)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool CallFunc_TextIsEmpty_ReturnValue : 1;  // 0x70 (0x70)
	char pad_113_1 : 7;  // 0x71 (0x71)
	bool CallFunc_TextIsEmpty_ReturnValue_2 : 1;  // 0x71 (0x71)
	char pad_114_1 : 7;  // 0x72 (0x72)
	bool CallFunc_Key_IsGamepadKey_ReturnValue : 1;  // 0x72 (0x72)
	char pad_115_1 : 7;  // 0x73 (0x73)
	bool CallFunc_Key_IsKeyboardKey_ReturnValue : 1;  // 0x73 (0x73)
	char pad_116_1 : 7;  // 0x74 (0x74)
	bool CallFunc_Key_IsMouseButton_ReturnValue : 1;  // 0x74 (0x74)
	char pad_117_1 : 7;  // 0x75 (0x75)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x75 (0x75)
	char pad_118_1 : 7;  // 0x76 (0x76)
	bool CallFunc_BooleanOR_ReturnValue : 1;  // 0x76 (0x76)


}; 
 
 // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetAttributeTextColor_OverloadedValue
struct FGetAttributeTextColor_OverloadedValue
{
	double BaseValue;  // 0x0 (0x0)
	double CurrentValue;  // 0x8 (0x8)
	struct UObject* __WorldContext;  // 0x10 (0x10)
	struct FSlateColor SlateColor;  // 0x18 (0x18)
	struct FSlateColor K2Node_MakeStruct_SlateColor;  // 0x2C (0x2C)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0x40 (0x40)
	char pad_65_1 : 7;  // 0x41 (0x41)
	bool CallFunc_NearlyEqual_FloatFloat_ReturnValue : 1;  // 0x41 (0x41)
	char pad_66[2];  // 0x42 (0x42)
	struct FSlateColor K2Node_MakeStruct_SlateColor_2;  // 0x44 (0x44)


}; 
 
 // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetAttributeTextColor
struct FGetAttributeTextColor
{
	struct FGameplayAttributeData GameplayAttributeData;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x10 (0x10)
	struct FSlateColor SlateColor;  // 0x18 (0x18)
	struct FSlateColor K2Node_MakeStruct_SlateColor;  // 0x2C (0x2C)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0x40 (0x40)
	char pad_65_1 : 7;  // 0x41 (0x41)
	bool CallFunc_NearlyEqual_FloatFloat_ReturnValue : 1;  // 0x41 (0x41)
	char pad_66[2];  // 0x42 (0x42)
	struct FSlateColor K2Node_MakeStruct_SlateColor_2;  // 0x44 (0x44)
	struct FSlateColor K2Node_MakeStruct_SlateColor_3;  // 0x58 (0x58)
	char pad_108[4];  // 0x6C (0x6C)
	double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;  // 0x70 (0x70)
	double CallFunc_Less_DoubleDouble_A_ImplicitCast;  // 0x78 (0x78)
	double CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast;  // 0x80 (0x80)
	double CallFunc_Less_DoubleDouble_B_ImplicitCast;  // 0x88 (0x88)


}; 
 
 // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.Get Item Name And Color
struct FGet Item Name And Color
{
	struct FItemData ItemData;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0xA0 (0xA0)
	struct FText Name;  // 0xA8 (0xA8)
	struct FSlateColor Color;  // 0xC0 (0xC0)
	struct FSlateColor K2Node_MakeStruct_SlateColor;  // 0xD4 (0xD4)
	struct FDesignDataItem CallFunc_GetDesignDataItem_ReturnValue;  // 0xE8 (0xE8)
	char pad_624_1 : 7;  // 0x270 (0x270)
	bool CallFunc_IsValidPrimaryAssetId_ReturnValue : 1;  // 0x270 (0x270)
	char pad_625[3];  // 0x271 (0x271)
	struct FSlateColor CallFunc_GetItemRaritySlateColor_SlateColor;  // 0x274 (0x274)


}; 
 
 