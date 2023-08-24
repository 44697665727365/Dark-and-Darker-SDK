#include "pch.h"
#include "SDK.h"

uint8_t UWB_CharacterSelectMain_C::Get_WB_Btn_LaunchShopURL_Visibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.Get_WB_Btn_LaunchShopURL_Visibility");

	FGet_WB_Btn_LaunchShopURL_Visibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UWB_CharacterSelectMain_C::Get_Overlay_Btn_Lobby_Visibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.Get_Overlay_Btn_Lobby_Visibility");

	FGet_Overlay_Btn_Lobby_Visibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWB_CharacterSelectMain_C::Get_WB_Btn_Lobby_bIsEnabled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.Get_WB_Btn_Lobby_bIsEnabled");

	FGet_WB_Btn_Lobby_bIsEnabled parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UWB_CharacterSelectMain_C::Get_VBox_ClassPurchase_Visibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.Get_VBox_ClassPurchase_Visibility");

	FGet_VBox_ClassPurchase_Visibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWidget* UWB_CharacterSelectMain_C::DoCustomNavigation(uint8_t Navigation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.DoCustomNavigation");

	FDoCustomNavigation parms{};	
	parms.Navigation = Navigation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWidget* UWB_CharacterSelectMain_C::BP_GetDesiredFocusTarget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.BP_GetDesiredFocusTarget");

	FBP_GetDesiredFocusTarget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWB_CharacterSelectMain_C::Construct(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.Construct");

	FConstruct parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CharacterSelectMain_C::ExitButtonClicked(struct UCommonButtonBase* Button){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.ExitButtonClicked");

	FExitButtonClicked parms{};	
	parms.Button = Button;

	ProcessEvent(fn, &parms);
}

void UWB_CharacterSelectMain_C::LobbyButtonClicked(struct UCommonButtonBase* Button){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.LobbyButtonClicked");

	FLobbyButtonClicked parms{};	
	parms.Button = Button;

	ProcessEvent(fn, &parms);
}

void UWB_CharacterSelectMain_C::OptionButtonClicked(struct UCommonButtonBase* Button){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.OptionButtonClicked");

	FOptionButtonClicked parms{};	
	parms.Button = Button;

	ProcessEvent(fn, &parms);
}

void UWB_CharacterSelectMain_C::CreditButtonClicked(struct UCommonButtonBase* Button){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.CreditButtonClicked");

	FCreditButtonClicked parms{};	
	parms.Button = Button;

	ProcessEvent(fn, &parms);
}

void UWB_CharacterSelectMain_C::ExecuteUbergraph_WB_CharacterSelectMain(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelectMain.WB_CharacterSelectMain_C.ExecuteUbergraph_WB_CharacterSelectMain");

	FExecuteUbergraph_WB_CharacterSelectMain parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

