#pragma once 
#include <WB_MenuOptionsVideos_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_MenuOptionsVideos.WB_MenuOptionsVideos_C
// Size: 0x578(Inherited: 0x4F8)
struct UWB_MenuOptionsVideos_C : UGameMenuOptionsVideoWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4F8 (0x4F8)
	struct UTextBlock* VideoOptionDetailDesc;  // 0x500 (0x500)
	struct UTextBlock* VideoOptionDetailTitle;  // 0x508 (0x508)
	struct UWB_MenuOptionSlot_ComboBox_C* DisplayMode;  // 0x510 (0x510)
	struct UWB_MenuOptionSlot_ComboBox_C* DisplayResolusion;  // 0x518 (0x518)
	struct UWB_MenuOptionSlot_Slider_C* MaxFrameRateLimit;  // 0x520 (0x520)
	struct UWB_MenuOptionSlot_Slider_C* MaxFrameRateLimitMeta;  // 0x528 (0x528)
	struct UWB_MenuOptionToggleSwitchSlot_C* FrameRateOption;  // 0x530 (0x530)
	struct UWB_MenuOptionPopup_C* DisplayPopup;  // 0x538 (0x538)
	int32_t RemainTime;  // 0x540 (0x540)
	char pad_1348[4];  // 0x544 (0x544)
	struct FTimerHandle PopupTimerHandle;  // 0x548 (0x548)
	struct UWB_MenuOptionSlot_Slider_C* Brightness;  // 0x550 (0x550)
	struct UWB_VideoOptionSlot_C* ResolutionQuality;  // 0x558 (0x558)
	struct TArray<struct UWidgetSwitcher*> HoveredList;  // 0x560 (0x560)
	struct UWB_MenuOptionSlot_Slider_C* RenderScale;  // 0x570 (0x570)


	struct UWidget* BP_GetDesiredFocusTarget(); // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.BP_GetDesiredFocusTarget
	void SetPopupText(int32_t RemainTime); // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.SetPopupText
	void SetActivateHover(struct UWidgetSwitcher* ActivateHoveer, struct FText Title, struct FText DetailDesc); // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.SetActivateHover
	void OnDisplayOptionInitialized(); // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayOptionInitialized
	void OnQualityLevelInitialized(); // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnQualityLevelInitialized
	void OnMessageReceived_E792FD8C4A9CB0949DDA36A51D3D5965(struct UMsgBaseNode* ProxyObject); // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnMessageReceived_E792FD8C4A9CB0949DDA36A51D3D5965
	void OnEffectHovered(); // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnEffectHovered
	void OnTextureHovered(); // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnTextureHovered
	void OnShadowHovered(); // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnShadowHovered
	void OnPostProcessHovered(); // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnPostProcessHovered
	void OnDisplayModeHovered(); // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayModeHovered
	void OnDisplayResolusionHovered(); // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayResolusionHovered
	void OnFrameRateLimitHovered(); // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnFrameRateLimitHovered
	void OnDisplayModeSelected(int32_t SelIndex); // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayModeSelected
	void OnDisplayOptionChangePopup(); // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayOptionChangePopup
	void OnBrighthnessHovered(); // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnBrighthnessHovered
	void OnChangeGammaValue(float SliderValue); // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnChangeGammaValue
	void EventFMsgWidgetOptionVideoDisplayApplyedNotify(struct FMsgWidgetOptionVideoDisplayApplyedNotify Msg); // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.EventFMsgWidgetOptionVideoDisplayApplyedNotify
	void OnRenderScaleHovered(); // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnRenderScaleHovered
	void Construct(); // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.Construct
	void OnOptionHovered(struct UGameMenuOptionBaseWidget* InHoveredWidget); // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnOptionHovered
	void OnSliderHovered(struct UWB_MenuOptionSlot_Slider_C* Slider); // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnSliderHovered
	void OnComboHovered(struct UWB_MenuOptionSlot_ComboBox_C* Combo); // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnComboHovered
	void OnFrameRateLimitLobbyHovered(); // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnFrameRateLimitLobbyHovered
	void ExecuteUbergraph_WB_MenuOptionsVideos(int32_t EntryPoint); // Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.ExecuteUbergraph_WB_MenuOptionsVideos
}; 
 
 


