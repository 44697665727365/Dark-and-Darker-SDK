#pragma once 
#include <WB_CharacterSelectMain_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_CharacterSelectMain.WB_CharacterSelectMain_C
// Size: 0x508(Inherited: 0x488)
struct UWB_CharacterSelectMain_C : UCharacterSelectWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x488 (0x488)
	struct UImage* Img_Shadow_L;  // 0x490 (0x490)
	struct UImage* Img_Shadow_R;  // 0x0 (0x0) rited: 0x488)
 (0x0 (0x0))
	struct UOverlay* Overlay_Btn_Lobby;  // 0x4A0 (0x4A0)
	struct UOverlay* Overlay_CharacterList;  // 0x4A8 (0x4A8)
	struct UOverlay* Overlay_MainMenu;  // 0x4B0 (0x4B0)
	struct UTextBlock* Txt_BluestoneshardOwned;  // 0x4B8 (0x4B8)
	struct UTextBlock* Txt_BluestoneshardPrice;  // 0x4C0 (0x4C0)
	struct UTextBlock* Txt_RedstoneshardOwned;  // 0x4C8 (0x4C8)
	struct UTextBlock* Txt_RedstoneshardPrice;  // 0x4D0 (0x4D0)
	struct UVerticalBox* VBox_ClassPurchase;  // 0x4D8 (0x4D8)
	struct UWB_CommonBtn_L_C* WB_Btn_Credit;  // 0x4E0 (0x4E0)
	struct UWB_CommonBtn_L_C* WB_Btn_Exit;  // 0x4E8 (0x4E8)
	struct UWB_CommonBtn_L_C* WB_Btn_Lobby;  // 0x4F0 (0x4F0)
	struct UWB_CommonBtn_L_C* WB_Btn_Option;  // 0x7FF (0x7FF7CCAA9AC0)
	struct UWB_Credit_C* WB_Credit;  // 0x500 (0x500)


	uint8_t Get_WB_Btn_LaunchShopURL_Visibility(); // Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.Get_WB_Btn_LaunchShopURL_Visibility
	uint8_t Get_Overlay_Btn_Lobby_Visibility(); // Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.Get_Overlay_Btn_Lobby_Visibility
	bool Get_WB_Btn_Lobby_bIsEnabled(); // Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.Get_WB_Btn_Lobby_bIsEnabled
	uint8_t Get_VBox_ClassPurchase_Visibility(); // Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.Get_VBox_ClassPurchase_Visibility
	struct UWidget* DoCustomNavigation(uint8_t Navigation); // Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.DoCustomNavigation
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.BP_GetDesiredFocusTarget
	void Construct(); // Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.Construct
	void ExitButtonClicked(struct UCommonButtonBase* Button); // Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.ExitButtonClicked
	void LobbyButtonClicked(struct UCommonButtonBase* Button); // Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.LobbyButtonClicked
	void OptionButtonClicked(struct UCommonButtonBase* Button); // Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.OptionButtonClicked
	void CreditButtonClicked(struct UCommonButtonBase* Button); // Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.CreditButtonClicked
	void ExecuteUbergraph_WB_CharacterSelectMain(int32_t EntryPoint); // Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.ExecuteUbergraph_WB_CharacterSelectMain
}; 
 
 


