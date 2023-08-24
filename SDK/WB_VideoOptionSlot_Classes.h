#pragma once 
#include <WB_VideoOptionSlot_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_VideoOptionSlot.WB_VideoOptionSlot_C
// Size: 0x3A8(Inherited: 0x360)
struct UWB_VideoOptionSlot_C : UGameMenuOptionSlotWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x360 (0x360)
	struct UButton* Btn_Hovering;  // 0x368 (0x368)
	struct UTextBlock* Title;  // 0x370 (0x370)
	struct UWB_OptionCheckButton01_C* WB_OptionCheckButton01;  // 0x378 (0x378)
	struct UWB_OptionCheckButton01_C* WB_OptionCheckButton02;  // 0x380 (0x380)
	struct UWB_OptionCheckButton01_C* WB_OptionCheckButton03;  // 0x388 (0x388)
	struct UWB_OptionCheckButton01_C* WB_OptionCheckButton04;  // 0x390 (0x390)
	struct TArray<struct UWB_OptionCheckButton01_C*> Buttons;  // 0x398 (0x398)


	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function WB_VideoOptionSlot.WB_VideoOptionSlot_C.OnFocusReceived
	void OnVideoSettingChanged(int32_t QualitySetting); // Function WB_VideoOptionSlot.WB_VideoOptionSlot_C.OnVideoSettingChanged
	void OnInitialized(); // Function WB_VideoOptionSlot.WB_VideoOptionSlot_C.OnInitialized
	void OnSelectedSlotIdx(int32_t& NewValue, int32_t& OldValue); // Function WB_VideoOptionSlot.WB_VideoOptionSlot_C.OnSelectedSlotIdx
	void Construct(); // Function WB_VideoOptionSlot.WB_VideoOptionSlot_C.Construct
	void ExecuteUbergraph_WB_VideoOptionSlot(int32_t EntryPoint); // Function WB_VideoOptionSlot.WB_VideoOptionSlot_C.ExecuteUbergraph_WB_VideoOptionSlot
}; 
 
 


