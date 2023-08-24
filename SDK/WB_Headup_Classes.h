#pragma once 
#include <WB_Headup_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_Headup.WB_Headup_C
// Size: 0x388(Inherited: 0x370)
struct UWB_Headup_C : UGameHeadupAccountWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x370 (0x370)
	struct UHorizontalBox* HorizontalBox_1;  // 0x378 (0x378)
	struct UTextBlock* NicknameText;  // 0x380 (0x380)


	struct FSlateBrush GetCharacterClassIconTexture(); // Function WB_Headup.WB_Headup_C.GetCharacterClassIconTexture
	uint8_t Get Visibility(); // Function WB_Headup.WB_Headup_C.Get Visibility
	void OnRefreshNickname(); // Function WB_Headup.WB_Headup_C.OnRefreshNickname
	void ExecuteUbergraph_WB_Headup(int32_t EntryPoint); // Function WB_Headup.WB_Headup_C.ExecuteUbergraph_WB_Headup
}; 
 
 


