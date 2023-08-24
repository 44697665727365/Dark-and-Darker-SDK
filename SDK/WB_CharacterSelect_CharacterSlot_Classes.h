#pragma once 
#include <WB_CharacterSelect_CharacterSlot_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_CharacterSelect_CharacterSlot.WB_CharacterSelect_CharacterSlot_C
// Size: 0x3F0(Inherited: 0x3A0)
struct UWB_CharacterSelect_CharacterSlot_C : UCharacterSelectCharSlotWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x3A0 (0x3A0)
	struct UImage* ClassIcon;  // 0x3A8 (0x3A8)
	struct UTextBlock* ClassText;  // 0x3B0 (0x3B0)
	struct UImage* Image_48;  // 0x3B8 (0x3B8)
	struct UImage* Image_138;  // 0x3C0 (0x3C0)
	struct UTextBlock* LevelText;  // 0x3C8 (0x3C8)
	struct UTextBlock* NicknameText;  // 0x3D0 (0x3D0)
	struct UWB_SelectedArrow_C* WB_SelectedArrow;  // 0x3D8 (0x3D8)
	struct FPrimaryAssetId Art Data;  // 0x3E0 (0x3E0)


	uint8_t GetCannotSelectableVisibility(); // Function WB_CharacterSelect_CharacterSlot.WB_CharacterSelect_CharacterSlot_C.GetCannotSelectableVisibility
	void OnCharacterSlot(struct FCharacterSlot& NewValue, struct FCharacterSlot& OldValue); // Function WB_CharacterSelect_CharacterSlot.WB_CharacterSelect_CharacterSlot_C.OnCharacterSlot
	void OnLoadArtData(struct UObject* InObjectLoaded); // Function WB_CharacterSelect_CharacterSlot.WB_CharacterSelect_CharacterSlot_C.OnLoadArtData
	void OnFMsgWidgetStreamingModeNotifyBlueprint(struct FMsgWidgetStreamingModeNotify& InMsg); // Function WB_CharacterSelect_CharacterSlot.WB_CharacterSelect_CharacterSlot_C.OnFMsgWidgetStreamingModeNotifyBlueprint
	void ExecuteUbergraph_WB_CharacterSelect_CharacterSlot(int32_t EntryPoint); // Function WB_CharacterSelect_CharacterSlot.WB_CharacterSelect_CharacterSlot_C.ExecuteUbergraph_WB_CharacterSelect_CharacterSlot
}; 
 
 


