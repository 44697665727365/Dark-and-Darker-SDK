#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WB_TabList_Menu.WB_TabList_Menu_C.ExecuteUbergraph_WB_TabList_Menu
struct FExecuteUbergraph_WB_TabList_Menu
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Array_Index_Variable;  // 0x4 (0x4)
	int32_t Temp_int_Variable;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct UCommonActivatableWidget* CallFunc_Array_Get_Item;  // 0x10 (0x10)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x18 (0x18)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x1C (0x1C)
	int32_t CallFunc_Array_AddUnique_ReturnValue_2;  // 0x20 (0x20)
	struct FMargin K2Node_MakeStruct_Margin;  // 0x24 (0x24)
	struct FSlateColor K2Node_MakeStruct_SlateColor;  // 0x34 (0x34)
	struct FSlateColor K2Node_MakeStruct_SlateColor_2;  // 0x48 (0x48)
	struct FName K2Node_CustomEvent_TabId;  // 0x5C (0x5C)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x64 (0x64)
	char pad_116_1 : 7;  // 0x74 (0x74)
	bool CallFunc_EqualEqual_NameName_ReturnValue : 1;  // 0x74 (0x74)
	char pad_117[3];  // 0x75 (0x75)
	struct FSlateColor K2Node_MakeStruct_SlateColor_3;  // 0x78 (0x78)
	int32_t CallFunc_GetTabCount_ReturnValue;  // 0x8C (0x8C)
	char pad_144_1 : 7;  // 0x90 (0x90)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x90 (0x90)
	char pad_145[3];  // 0x91 (0x91)
	struct FName CallFunc_GetTabIdAtIndex_ReturnValue;  // 0x94 (0x94)
	char pad_156[4];  // 0x9C (0x9C)
	struct UCommonButtonBase* CallFunc_GetTabButtonBaseByID_ReturnValue;  // 0xA0 (0xA0)
	struct FSlateColor K2Node_MakeStruct_SlateColor_4;  // 0xA8 (0xA8)
	char pad_188[4];  // 0xBC (0xBC)
	struct UWB_TabButton_Menu_C* K2Node_DynamicCast_AsWB_Tab_Button_Menu;  // 0xC0 (0xC0)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xC8 (0xC8)
	char pad_201[3];  // 0xC9 (0xC9)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0xCC (0xCC)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool CallFunc_GetSelected_ReturnValue : 1;  // 0xD0 (0xD0)
	char pad_209[3];  // 0xD1 (0xD1)
	int32_t CallFunc_GetTabCount_ReturnValue_2;  // 0xD4 (0xD4)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool CallFunc_RegisterTab_ReturnValue : 1;  // 0xD8 (0xD8)
	char pad_217_1 : 7;  // 0xD9 (0xD9)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0xD9 (0xD9)
	char pad_218_1 : 7;  // 0xDA (0xDA)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0xDA (0xDA)
	char pad_219[5];  // 0xDB (0xDB)
	struct UCommonButtonBase* CallFunc_GetTabButtonBaseByID_ReturnValue_2;  // 0xE0 (0xE0)
	struct UWB_TabButton_Menu_C* K2Node_DynamicCast_AsWB_Tab_Button_Menu_2;  // 0xE8 (0xE8)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0xF0 (0xF0)
	char pad_241[7];  // 0xF1 (0xF1)
	struct UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue;  // 0xF8 (0xF8)
	char pad_256_1 : 7;  // 0x100 (0x100)
	bool CallFunc_GetSelected_ReturnValue_2 : 1;  // 0x100 (0x100)
	char pad_257[7];  // 0x101 (0x101)
	struct FString CallFunc_Conv_NameToString_ReturnValue;  // 0x108 (0x108)
	struct FString CallFunc_Concat_StrStr_ReturnValue;  // 0x118 (0x118)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x128 (0x128)
	char pad_300_1 : 7;  // 0x12C (0x12C)
	bool CallFunc_Less_IntInt_ReturnValue_2 : 1;  // 0x12C (0x12C)
	char pad_301[3];  // 0x12D (0x12D)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x130 (0x130)


}; 
 
 // Function WB_TabList_Menu.WB_TabList_Menu_C.EventOnTabSelected
struct FEventOnTabSelected
{
	struct FName TabId;  // 0x0 (0x0)


}; 
 
 