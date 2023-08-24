#pragma once 
#include <WB_MenuOptionSlot_Slider_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C
// Size: 0x380(Inherited: 0x330)
struct UWB_MenuOptionSlot_Slider_C : UGameMenuOptionSliderWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x330 (0x330)
	struct UButton* Btn_Hovering;  // 0x338 (0x338)
	struct UAnalogSlider* Slider_Value;  // 0x340 (0x340)
	struct UWidgetSwitcher* Switcher_Selected;  // 0x348 (0x348)
	struct UEditableTextBox* Textbox_Value;  // 0x350 (0x350)
	char pad_856_1 : 7;  // 0x358 (0x358)
	bool OnChangeValueBroadcast : 1;  // 0x358 (0x358)
	char pad_857_1 : 7;  // 0x359 (0x359)
	bool CheckTextReinput : 1;  // 0x359 (0x359)
	char pad_858_1 : 7;  // 0x35A (0x35A)
	bool IsSliderValueInteger : 1;  // 0x35A (0x35A)
	char pad_859[1];  // 0x35B (0x35B)
	int32_t MinFactionalDigits;  // 0x35C (0x35C)
	int32_t MaxFactionalDigits;  // 0x360 (0x360)
	char pad_868[4];  // 0x364 (0x364)
	struct UWB_MenuOptionsControls_C* WB_MenuOptionsControls;  // 0x368 (0x368)
	struct UWB_MenuOptionsAudios_C* WB_MenuOptionsAudios;  // 0x370 (0x370)
	struct UWB_MenuOptionsVideos_C* WB_MenuOptionsVideos;  // 0x378 (0x378)


	struct UWidget* GetPrimaryGamepadFocusWidget(); // Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.GetPrimaryGamepadFocusWidget
	void Construct(); // Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.Construct
	void UpdateSliderValue(float NewValue); // Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.UpdateSliderValue
	void GetCurrentOptionValue(); // Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.GetCurrentOptionValue
	void GetCurrentOptionValueByPercent(); // Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.GetCurrentOptionValueByPercent
	void OnChangeSliderValue(float Value); // Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.OnChangeSliderValue
	void UpdateSliderMinMaxValue(); // Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.UpdateSliderMinMaxValue
	void OnTextCommited(struct FText& Text, enum class ETextCommit CommitMethod); // Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.OnTextCommited
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.OnMouseEnter
	void ExecuteUbergraph_WB_MenuOptionSlot_Slider(int32_t EntryPoint); // Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.ExecuteUbergraph_WB_MenuOptionSlot_Slider
}; 
 
 


