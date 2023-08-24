#pragma once 
#include <WB_MenuOptionsAudios_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_MenuOptionsAudios.WB_MenuOptionsAudios_C
// Size: 0x520(Inherited: 0x4C0)
struct UWB_MenuOptionsAudios_C : UGameMenuOptionsAudioWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4C0 (0x4C0)
	struct UTextBlock* AudioOptionDetailDesc;  // 0x4C8 (0x4C8)
	struct UTextBlock* AudioOptionDetailTitle;  // 0x4D0 (0x4D0)
	struct UWB_MenuOptionSlot_Slider_C* TotalVolume;  // 0x4D8 (0x4D8)
	struct UWB_MenuOptionSlot_Slider_C* EffectVolume;  // 0x4E0 (0x4E0)
	struct UWB_MenuOptionSlot_Slider_C* MusicVolume;  // 0x4E8 (0x4E8)
	struct UWB_MenuOptionToggleSwitchSlot_C* BackgroundVolume;  // 0x4F0 (0x4F0)
	struct UWB_MenuOptionToggleSwitchSlot_C* VoipOnOff;  // 0x4F8 (0x4F8)
	struct UWB_MenuOptionToggleSwitchSlot_C* VoipMode;  // 0x500 (0x500)
	struct UWB_MenuOptionSlot_Slider_C* VoipInputVolume;  // 0x508 (0x508)
	struct UWB_MenuOptionSlot_Slider_C* VoipOutputVolume;  // 0x510 (0x510)
	struct UWB_MenuOptionToggleSwitchSlot_C* VoipSendMode;  // 0x518 (0x518)


	void InitOptionWidgetBinding(); // Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.InitOptionWidgetBinding
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.BP_GetDesiredFocusTarget
	void SetActivateSlotHoverDetailText(struct FText Title, struct FText Descript); // Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.SetActivateSlotHoverDetailText
	void Set Activate Slot Hover(struct UWidgetSwitcher* ActivateSwitcherSelected); // Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.Set Activate Slot Hover
	void OnTotalVolumeHovered(); // Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnTotalVolumeHovered
	void OnEffectVolumeHovered(); // Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnEffectVolumeHovered
	void OnMusicVolumeHovered(); // Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnMusicVolumeHovered
	void OnBackgroundVolumeHovered(); // Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnBackgroundVolumeHovered
	void UpdateWindowFocusChanged(bool IsFocus, bool IsBackgroundOption, float TotalVolume); // Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.UpdateWindowFocusChanged
	void OnVoipOnOffHovered(); // Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnVoipOnOffHovered
	void OnVoipModeHovered(); // Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnVoipModeHovered
	void OnVoipInputVolumeHovered(); // Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnVoipInputVolumeHovered
	void OnVoipOutputVolumeHovered(); // Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnVoipOutputVolumeHovered
	void OnVoipSendModeHovered(); // Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnVoipSendModeHovered
	void Construct(); // Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.Construct
	void OnSliderHovered(struct UWB_MenuOptionSlot_Slider_C* Slider); // Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnSliderHovered
	void OnGameUserSettingAudiosChanged(struct FGameUserSettingAudios& InGameUserSettingAudios, struct FGameUserSettingAudios& InOldGameUserSettingAudios, bool bInForce); // Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnGameUserSettingAudiosChanged
	void ExecuteUbergraph_WB_MenuOptionsAudios(int32_t EntryPoint); // Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.ExecuteUbergraph_WB_MenuOptionsAudios
}; 
 
 


