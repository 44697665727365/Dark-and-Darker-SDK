#pragma once 
#include <WB_GameSystemMessage_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_GameSystemMessage.WB_GameSystemMessage_C
// Size: 0x330(Inherited: 0x300)
struct UWB_GameSystemMessage_C : UDCWidgetBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x300 (0x300)
	struct UWidgetAnimation* Slide_Out;  // 0x308 (0x308)
	struct UWidgetAnimation* Slide_In;  // 0x310 (0x310)
	struct UOverlay* Overlay_SystemMessage;  // 0x318 (0x318)
	struct UTextBlock* SystemMessageText;  // 0x320 (0x320)
	struct FTimerHandle MessageTimerHandle;  // 0x328 (0x328)


	void GetLocalizedString(struct FString Text, struct FString Namespace, struct FString Key, struct FString& LocalizedString); // Function WB_GameSystemMessage.WB_GameSystemMessage_C.GetLocalizedString
	void OnAnnounceEnd(); // Function WB_GameSystemMessage.WB_GameSystemMessage_C.OnAnnounceEnd
	void ShowMessage(struct FText Text, double Duration); // Function WB_GameSystemMessage.WB_GameSystemMessage_C.ShowMessage
	void ExecuteUbergraph_WB_GameSystemMessage(int32_t EntryPoint); // Function WB_GameSystemMessage.WB_GameSystemMessage_C.ExecuteUbergraph_WB_GameSystemMessage
}; 
 
 


