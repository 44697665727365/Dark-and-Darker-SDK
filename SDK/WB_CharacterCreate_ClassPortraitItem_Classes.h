#pragma once 
#include <WB_CharacterCreate_ClassPortraitItem_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_CharacterCreate_ClassPortraitItem.WB_CharacterCreate_ClassPortraitItem_C
// Size: 0x380(Inherited: 0x338)
struct UWB_CharacterCreate_ClassPortraitItem_C : UCharacterCreateClassItemWidget
{
	struct UTextBlock* ClassName;  // 0x338 (0x338)
	struct UImage* ClassPortrait;  // 0x340 (0x340)
	struct UImage* Icon_Comingsoon;  // 0x348 (0x348)
	struct UImage* Img_Mark;  // 0x350 (0x350)
	struct UOverlay* Overlay_1;  // 0x358 (0x358)
	struct UOverlay* Overlay_Locked;  // 0x360 (0x360)
	struct UVerticalBox* Overlay_Selected;  // 0x368 (0x368)
	struct UTextBlock* SelectedClassName;  // 0x370 (0x370)
	struct UWB_SelectedArrow_C* WB_SelectedArrow;  // 0x378 (0x378)


	uint8_t GetWorkinprogressVisibility(); // Function WB_CharacterCreate_ClassPortraitItem.WB_CharacterCreate_ClassPortraitItem_C.GetWorkinprogressVisibility
	uint8_t GetLockedVisibility(); // Function WB_CharacterCreate_ClassPortraitItem.WB_CharacterCreate_ClassPortraitItem_C.GetLockedVisibility
	uint8_t GetVisibilityByClassCreatable(); // Function WB_CharacterCreate_ClassPortraitItem.WB_CharacterCreate_ClassPortraitItem_C.GetVisibilityByClassCreatable
	uint8_t GetClassAvailableVisibility(); // Function WB_CharacterCreate_ClassPortraitItem.WB_CharacterCreate_ClassPortraitItem_C.GetClassAvailableVisibility
	uint8_t IsVisibleIfSelected(); // Function WB_CharacterCreate_ClassPortraitItem.WB_CharacterCreate_ClassPortraitItem_C.IsVisibleIfSelected
}; 
 
 


