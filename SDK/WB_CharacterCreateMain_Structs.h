#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.GetDescript
struct FGetDescript
{
	struct FPrimaryAssetId ID;  // 0x0 (0x0)
	struct FText Result;  // 0x10 (0x10)
	struct UDescData* CallFunc_GetDescData_ReturnValue;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x30 (0x30)


}; 
 
 // Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.Get_ClassName_FirstLetter
struct FGet_ClassName_FirstLetter
{
	struct FText ReturnValue;  // 0x0 (0x0)
	struct FString CallFunc_Conv_TextToString_ReturnValue;  // 0x18 (0x18)
	struct FString CallFunc_Left_ReturnValue;  // 0x28 (0x28)
	struct FText CallFunc_Conv_StringToText_ReturnValue;  // 0x38 (0x38)


}; 
 
 // Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.Get_WB_Btn_LaunchShopURL_Visibility
struct FGet_WB_Btn_LaunchShopURL_Visibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool CallFunc_CanLaunchRedstoneShardShop_ReturnValue : 1;  // 0x1 (0x1)


}; 
 
 // Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.ExecuteUbergraph_WB_CharacterCreateMain
struct FExecuteUbergraph_WB_CharacterCreateMain
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FText Temp_text_Variable;  // 0x8 (0x8)
	struct FText Temp_text_Variable_2;  // 0x20 (0x20)


}; 
 
 // Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.BP_GetDesiredFocusTarget
// Size: 0x8(Inherited: 0x8)
struct FBP_GetDesiredFocusTarget : FBP_GetDesiredFocusTarget
{
	struct UWidget* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.DoCustomNavigation
struct FDoCustomNavigation
{
	uint8_t Navigation;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct UWidget* ReturnValue;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool Temp_bool_True_if_break_was_hit_Variable : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	int32_t Temp_int_Array_Index_Variable;  // 0x14 (0x14)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x1C (0x1C)
	struct TArray<struct UUserWidget*> CallFunc_GetDisplayedEntryWidgets_ReturnValue;  // 0x20 (0x20)
	struct TArray<struct UObject*> CallFunc_GetListItems_ReturnValue;  // 0x30 (0x30)
	struct UUserWidget* CallFunc_Array_Get_Item;  // 0x40 (0x40)
	struct UObject* CallFunc_Array_Get_Item_2;  // 0x48 (0x48)
	struct UCharacterCreateClassItemWidgetData* K2Node_DynamicCast_AsCharacter_Create_Class_Item_Widget_Data;  // 0x50 (0x50)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x58 (0x58)
	char pad_89[3];  // 0x59 (0x59)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x5C (0x5C)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x60 (0x60)
	char pad_97_1 : 7;  // 0x61 (0x61)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x61 (0x61)
	char pad_98[2];  // 0x62 (0x62)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x64 (0x64)


}; 
 
 