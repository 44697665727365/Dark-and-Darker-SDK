#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WB_GameSystemMessage.WB_GameSystemMessage_C.ShowMessage
struct FShowMessage
{
	struct FText Text;  // 0x0 (0x0)
	double Duration;  // 0x18 (0x18)


}; 
 
 // Function WB_GameSystemMessage.WB_GameSystemMessage_C.GetLocalizedString
struct FGetLocalizedString
{
	struct FString Text;  // 0x0 (0x0)
	struct FString Namespace;  // 0x10 (0x10)
	struct FString Key;  // 0x20 (0x20)
	struct FString LocalizedString;  // 0x30 (0x30)
	struct FText CallFunc_FindTextInLocalizationTable_OutText;  // 0x40 (0x40)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool CallFunc_FindTextInLocalizationTable_ReturnValue : 1;  // 0x58 (0x58)
	char pad_89[7];  // 0x59 (0x59)
	struct FString CallFunc_Conv_TextToString_ReturnValue;  // 0x60 (0x60)


}; 
 
 // Function WB_GameSystemMessage.WB_GameSystemMessage_C.ExecuteUbergraph_WB_GameSystemMessage
struct FExecuteUbergraph_WB_GameSystemMessage
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FText K2Node_CustomEvent_Text;  // 0x8 (0x8)
	double K2Node_CustomEvent_Duration;  // 0x20 (0x20)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x28 (0x28)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x38 (0x38)
	struct UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue;  // 0x40 (0x40)
	struct UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2;  // 0x48 (0x48)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;  // 0x50 (0x50)


}; 
 
 