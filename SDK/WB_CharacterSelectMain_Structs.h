#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.ExecuteUbergraph_WB_CharacterSelectMain
struct FExecuteUbergraph_WB_CharacterSelectMain
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x14 (0x14)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x24 (0x24)
	char pad_52[4];  // 0x34 (0x34)
	struct FText Temp_text_Variable;  // 0x38 (0x38)
	struct FText Temp_text_Variable_2;  // 0x50 (0x50)
	struct FText Temp_text_Variable_3;  // 0x68 (0x68)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x80 (0x80)
	struct FText Temp_text_Variable_4;  // 0x90 (0x90)
	struct UCommonButtonBase* K2Node_CustomEvent_Button_4;  // 0xA8 (0xA8)
	struct UCommonButtonBase* K2Node_CustomEvent_Button_3;  // 0xB0 (0xB0)
	struct UCommonButtonBase* K2Node_CustomEvent_Button_2;  // 0xB8 (0xB8)
	struct UCommonButtonBase* K2Node_CustomEvent_Button;  // 0xC0 (0xC0)


}; 
 
 // Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.OptionButtonClicked
struct FOptionButtonClicked
{
	struct UCommonButtonBase* Button;  // 0x0 (0x0)


}; 
 
 // Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.LobbyButtonClicked
struct FLobbyButtonClicked
{
	struct UCommonButtonBase* Button;  // 0x0 (0x0)


}; 
 
 // Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.Get_Overlay_Btn_Lobby_Visibility
struct FGet_Overlay_Btn_Lobby_Visibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool CallFunc_IsNeedPurchase_ReturnValue : 1;  // 0x1 (0x1)


}; 
 
 // Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.Get_WB_Btn_Lobby_bIsEnabled
struct FGet_WB_Btn_Lobby_bIsEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool CallFunc_CanEnterLobby_ReturnValue : 1;  // 0x1 (0x1)


}; 
 
 // Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.Get_WB_Btn_LaunchShopURL_Visibility
struct FGet_WB_Btn_LaunchShopURL_Visibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool CallFunc_CanLaunchRedstoneShardShop_ReturnValue : 1;  // 0x1 (0x1)


}; 
 
 // Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.Get_VBox_ClassPurchase_Visibility
struct FGet_VBox_ClassPurchase_Visibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool CallFunc_IsNeedPurchase_ReturnValue : 1;  // 0x1 (0x1)


}; 
 
 // Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.ExitButtonClicked
struct FExitButtonClicked
{
	struct UCommonButtonBase* Button;  // 0x0 (0x0)


}; 
 
 // Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.BP_GetDesiredFocusTarget
// Size: 0x8(Inherited: 0x8)
struct FBP_GetDesiredFocusTarget : FBP_GetDesiredFocusTarget
{
	struct UWidget* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.DoCustomNavigation
struct FDoCustomNavigation
{
	uint8_t Navigation;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct UWidget* ReturnValue;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct UWB_CharacterSelect_CharacterList_C* K2Node_DynamicCast_AsWB_Character_Select_Character_List;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x20 (0x20)


}; 
 
 // Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.CreditButtonClicked
struct FCreditButtonClicked
{
	struct UCommonButtonBase* Button;  // 0x0 (0x0)


}; 
 
 