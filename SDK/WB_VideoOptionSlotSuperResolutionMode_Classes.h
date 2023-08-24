#pragma once 
#include <WB_VideoOptionSlotSuperResolutionMode_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_VideoOptionSlotSuperResolutionMode.WB_VideoOptionSlotSuperResolutionMode_C
// Size: 0x398(Inherited: 0x360)
struct UWB_VideoOptionSlotSuperResolutionMode_C : UGameMenuOptionSlotWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x360 (0x360)
	struct UButton* Btn_Hovering;  // 0x368 (0x368)
	struct UTextBlock* Title;  // 0x370 (0x370)
	struct UWB_OptionCheckButton01_C* WB_OptionCheckButton01;  // 0x378 (0x378)
	struct UWB_OptionCheckButton01_C* WB_OptionCheckButton02;  // 0x380 (0x380)
	struct TArray<struct UWB_OptionCheckButton01_C*> Buttons;  // 0x388 (0x388)


	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function WB_VideoOptionSlotSuperResolutionMode.WB_VideoOptionSlotSuperResolutionMode_C.OnFocusReceived
	void OnVideoSettingChanged(int32_t QualitySetting); // Function WB_VideoOptionSlotSuperResolutionMode.WB_VideoOptionSlotSuperResolutionMode_C.OnVideoSettingChanged
	void OnInitialized(); // Function WB_VideoOptionSlotSuperResolutionMode.WB_VideoOptionSlotSuperResolutionMode_C.OnInitialized
	void OnSelectedSlotIdx(int32_t& NewValue, int32_t& OldValue); // Function WB_VideoOptionSlotSuperResolutionMode.WB_VideoOptionSlotSuperResolutionMode_C.OnSelectedSlotIdx
	void Construct(); // Function WB_VideoOptionSlotSuperResolutionMode.WB_VideoOptionSlotSuperResolutionMode_C.Construct
	void ExecuteUbergraph_WB_VideoOptionSlotSuperResolutionMode(int32_t EntryPoint); // Function WB_VideoOptionSlotSuperResolutionMode.WB_VideoOptionSlotSuperResolutionMode_C.ExecuteUbergraph_WB_VideoOptionSlotSuperResolutionMode
}; 
 
 


