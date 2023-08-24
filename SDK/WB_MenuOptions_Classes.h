#pragma once 
#include <WB_MenuOptions_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_MenuOptions.WB_MenuOptions_C
// Size: 0x7FF7CE0B0110struct UWB_MenuOptions_C : UGameMenuOptionsWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x7FF7CCAA9AC0 (0x7FF7CCAA9AC0)
	struct UTextBlock* Txt_Audio;  // 0x478 (0x478)
	struct UTextBlock* Txt_control;  // 0x480 (0x480)
	struct UTextBlock* Txt_Gameplay;  // 0x0 (0x0)
	struct UTextBlock* Txt_Input;  // 0x490 (0x490)
	struct UTextBlock* Txt_Video;  // 0x498 (0x498)
	struct UWB_MenuOptionsAudios_C* WB_MenuOptionsAudios;  // 0x4A0 (0x4A0)
	struct UWB_MenuOptionsControls_C* WB_MenuOptionsControls;  // 0x4A8 (0x4A8)
	struct UWB_MenuOptionsInput_C* WB_MenuOptionsInput;  // 0x4B0 (0x4B0)
	struct UWB_MenuOptionsVideos_C* WB_MenuOptionsVideos;  // 0x4B8 (0x4B8)
	struct UWB_TabList_Menu_C* WB_TabList_Menu;  // 0x4C0 (0x4C0)
	int32_t I;  // 0x4C8 (0x4C8)


	struct UWidget* BP_GetDesiredFocusTarget(); // Function WB_MenuOptions.WB_MenuOptions_C.BP_GetDesiredFocusTarget
	uint8_t Get_ControlsCheckBox_CheckedState_1(); // Function WB_MenuOptions.WB_MenuOptions_C.Get_ControlsCheckBox_CheckedState_1
	void BP_OnActivated(); // Function WB_MenuOptions.WB_MenuOptions_C.BP_OnActivated
	void Construct(); // Function WB_MenuOptions.WB_MenuOptions_C.Construct
	void (uint8_t Invisibility); // Function WB_MenuOptions.WB_MenuOptions_C.
	void BP_OnDeactivated(); // Function WB_MenuOptions.WB_MenuOptions_C.BP_OnDeactivated
	void ExecuteUbergraph_WB_MenuOptions(int32_t EntryPoint); // Function WB_MenuOptions.WB_MenuOptions_C.ExecuteUbergraph_WB_MenuOptions
}; 
 
 


