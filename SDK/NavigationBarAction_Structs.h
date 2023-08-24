#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function NavigationBarAction.NavigationBarAction_C.UpdateSyleOnInputMethod
struct FUpdateSyleOnInputMethod
{
	uint8_t InputType;  // 0x0 (0x0)


}; 
 
 // Function NavigationBarAction.NavigationBarAction_C.ExecuteUbergraph_NavigationBarAction
struct FExecuteUbergraph_NavigationBarAction
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x10 (0x10)
	uint8_t K2Node_CustomEvent_bNewInputType;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	struct FSlateColor K2Node_MakeStruct_SlateColor;  // 0x24 (0x24)
	struct FSlateColor K2Node_MakeStruct_SlateColor_2;  // 0x38 (0x38)


}; 
 
 // Function NavigationBarAction.NavigationBarAction_C.EventInputMethodChanged
struct FEventInputMethodChanged
{
	uint8_t bNewInputType;  // 0x0 (0x0)


}; 
 
 