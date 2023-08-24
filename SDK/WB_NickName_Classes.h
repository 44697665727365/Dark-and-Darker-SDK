#pragma once 
#include <WB_NickName_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_NickName.WB_NickName_C
// Size: 0x360(Inherited: 0x338)
struct UWB_NickName_C : UNickNameWidgetBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x338 (0x338)
	struct URichTextBlock* NicknameText;  // 0x340 (0x340)
	struct FText NickNameFormatText;  // 0x348 (0x348)


	void OnNickNameStr(struct FString NewValue, struct FString OldValue); // Function WB_NickName.WB_NickName_C.OnNickNameStr
	void SetNickNameFormat(struct FText FormatText); // Function WB_NickName.WB_NickName_C.SetNickNameFormat
	void ExecuteUbergraph_WB_NickName(int32_t EntryPoint); // Function WB_NickName.WB_NickName_C.ExecuteUbergraph_WB_NickName
}; 
 
 


