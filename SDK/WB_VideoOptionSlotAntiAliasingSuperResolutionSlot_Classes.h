#pragma once 
#include <WB_VideoOptionSlotAntiAliasingSuperResolutionSlot_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_VideoOptionSlotAntiAliasingSuperResolutionSlot.WB_VideoOptionSlotAntiAliasingSuperResolutionSlot_C
// Size: 0x3C0(Inherited: 0x360)
struct UWB_VideoOptionSlotAntiAliasingSuperResolutionSlot_C : UGameMenuOptionSlotWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x360 (0x360)
	struct UButton* Btn_Hovering;  // 0x368 (0x368)
	struct UTextBlock* Title;  // 0x370 (0x370)
	struct UWB_OptionCheckButton01_C* WB_OptionCheckButton01;  // 0x378 (0x378)
	struct UWB_OptionCheckButton01_C* WB_OptionCheckButton02;  // 0x380 (0x380)
	struct UWB_OptionCheckButton01_C* WB_OptionCheckButton03;  // 0x388 (0x388)
	struct UWB_OptionCheckButton01_C* WB_OptionCheckButton04;  // 0x390 (0x390)
	struct UWB_OptionCheckButton01_C* WB_OptionCheckButton05;  // 0x398 (0x398)
	struct UWB_OptionCheckButton01_C* WB_OptionCheckButton06;  // 0x3A0 (0x3A0)
	struct UWB_OptionCheckButton01_C* WB_OptionCheckButton07;  // 0x3A8 (0x3A8)
	struct TArray<struct UWB_OptionCheckButton01_C*> Buttons;  // 0x3B0 (0x3B0)


	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function WB_VideoOptionSlotAntiAliasingSuperResolutionSlot.WB_VideoOptionSlotAntiAliasingSuperResolutionSlot_C.OnFocusReceived
	void OnInitialized(); // Function WB_VideoOptionSlotAntiAliasingSuperResolutionSlot.WB_VideoOptionSlotAntiAliasingSuperResolutionSlot_C.OnInitialized
	void OnSelectedSlotIdx(int32_t& NewValue, int32_t& OldValue); // Function WB_VideoOptionSlotAntiAliasingSuperResolutionSlot.WB_VideoOptionSlotAntiAliasingSuperResolutionSlot_C.OnSelectedSlotIdx
	void Construct(); // Function WB_VideoOptionSlotAntiAliasingSuperResolutionSlot.WB_VideoOptionSlotAntiAliasingSuperResolutionSlot_C.Construct
	void ExecuteUbergraph_WB_VideoOptionSlotAntiAliasingSuperResolutionSlot(int32_t EntryPoint); // Function WB_VideoOptionSlotAntiAliasingSuperResolutionSlot.WB_VideoOptionSlotAntiAliasingSuperResolutionSlot_C.ExecuteUbergraph_WB_VideoOptionSlotAntiAliasingSuperResolutionSlot
}; 
 
 


