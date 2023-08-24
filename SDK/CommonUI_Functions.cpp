#include "pch.h"
#include "SDK.h"

void UCommonLoadGuard::SetLoadingText(struct FText& InLoadingText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonLoadGuard.SetLoadingText");

	FSetLoadingText parms{};	
	parms.InLoadingText = InLoadingText;

	ProcessEvent(fn, &parms);
}

void UCommonLoadGuard::SetIsLoading(bool bInIsLoading){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonLoadGuard.SetIsLoading");

	FSetIsLoading parms{};	
	parms.bInIsLoading = bInIsLoading;

	ProcessEvent(fn, &parms);
}

void UCommonLoadGuard::OnAssetLoaded__DelegateSignature(struct UObject* Object){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature");

	FOnAssetLoaded__DelegateSignature parms{};	
	parms.Object = Object;

	ProcessEvent(fn, &parms);
}

bool UCommonLoadGuard::IsLoading(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonLoadGuard.IsLoading");

	FIsLoading parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonLoadGuard::BP_GuardAndLoadAsset(struct TSoftObjectPtr<UObject>& InLazyAsset, struct FDelegate& OnAssetLoaded){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset");

	FBP_GuardAndLoadAsset parms{};	
	parms.InLazyAsset = InLazyAsset;
	parms.OnAssetLoaded = OnAssetLoaded;

	ProcessEvent(fn, &parms);
}

void UCommonLazyImage::SetMaterialTextureParamName(struct FName TextureParamName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonLazyImage.SetMaterialTextureParamName");

	FSetMaterialTextureParamName parms{};	
	parms.TextureParamName = TextureParamName;

	ProcessEvent(fn, &parms);
}

void UCommonLazyImage::SetBrushFromLazyTexture(struct TSoftObjectPtr<UTexture2D>& LazyTexture, bool bMatchSize){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture");

	FSetBrushFromLazyTexture parms{};	
	parms.LazyTexture = LazyTexture;
	parms.bMatchSize = bMatchSize;

	ProcessEvent(fn, &parms);
}

void UCommonLazyImage::SetBrushFromLazyMaterial(struct TSoftObjectPtr<UMaterialInterface>& LazyMaterial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial");

	FSetBrushFromLazyMaterial parms{};	
	parms.LazyMaterial = LazyMaterial;

	ProcessEvent(fn, &parms);
}

void UCommonLazyImage::SetBrushFromLazyDisplayAsset(struct TSoftObjectPtr<UObject>& LazyObject, bool bMatchTextureSize){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset");

	FSetBrushFromLazyDisplayAsset parms{};	
	parms.LazyObject = LazyObject;
	parms.bMatchTextureSize = bMatchTextureSize;

	ProcessEvent(fn, &parms);
}

bool UCommonLazyImage::IsLoading(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonLazyImage.IsLoading");

	FIsLoading parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonButtonBase::StopDoubleClickPropagation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.StopDoubleClickPropagation");

	FStopDoubleClickPropagation parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::SetTriggeringInputAction(struct FDataTableRowHandle& InputActionRow){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.SetTriggeringInputAction");

	FSetTriggeringInputAction parms{};	
	parms.InputActionRow = InputActionRow;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::SetTriggeredInputAction(struct FDataTableRowHandle& InputActionRow){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.SetTriggeredInputAction");

	FSetTriggeredInputAction parms{};	
	parms.InputActionRow = InputActionRow;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::SetTouchMethod(enum class EButtonTouchMethod InTouchMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.SetTouchMethod");

	FSetTouchMethod parms{};	
	parms.InTouchMethod = InTouchMethod;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::SetStyle(UCommonButtonStyle* InStyle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.SetStyle");

	FSetStyle parms{};	
	parms.InStyle = InStyle;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction");

	FSetShouldUseFallbackDefaultInputAction parms{};	
	parms.bInShouldUseFallbackDefaultInputAction = bInShouldUseFallbackDefaultInputAction;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus");

	FSetShouldSelectUponReceivingFocus parms{};	
	parms.bInShouldSelectUponReceivingFocus = bInShouldSelectUponReceivingFocus;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::SetSelectedPressedSoundOverride(struct USoundBase* Sound){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.SetSelectedPressedSoundOverride");

	FSetSelectedPressedSoundOverride parms{};	
	parms.Sound = Sound;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.SetSelectedInternal");

	FSetSelectedInternal parms{};	
	parms.bInSelected = bInSelected;
	parms.bAllowSound = bAllowSound;
	parms.bBroadcast = bBroadcast;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::SetSelectedHoveredSoundOverride(struct USoundBase* Sound){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.SetSelectedHoveredSoundOverride");

	FSetSelectedHoveredSoundOverride parms{};	
	parms.Sound = Sound;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::SetPressMethod(enum class EButtonPressMethod InPressMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.SetPressMethod");

	FSetPressMethod parms{};	
	parms.InPressMethod = InPressMethod;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::SetPressedSoundOverride(struct USoundBase* Sound){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.SetPressedSoundOverride");

	FSetPressedSoundOverride parms{};	
	parms.Sound = Sound;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::SetMinDimensions(int32_t InMinWidth, int32_t InMinHeight){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.SetMinDimensions");

	FSetMinDimensions parms{};	
	parms.InMinWidth = InMinWidth;
	parms.InMinHeight = InMinHeight;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::SetLockedPressedSoundOverride(struct USoundBase* Sound){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.SetLockedPressedSoundOverride");

	FSetLockedPressedSoundOverride parms{};	
	parms.Sound = Sound;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::SetLockedHoveredSoundOverride(struct USoundBase* Sound){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.SetLockedHoveredSoundOverride");

	FSetLockedHoveredSoundOverride parms{};	
	parms.Sound = Sound;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::SetIsToggleable(bool bInIsToggleable){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.SetIsToggleable");

	FSetIsToggleable parms{};	
	parms.bInIsToggleable = bInIsToggleable;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::SetIsSelected(bool InSelected, bool bGiveClickFeedback){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.SetIsSelected");

	FSetIsSelected parms{};	
	parms.InSelected = InSelected;
	parms.bGiveClickFeedback = bGiveClickFeedback;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::SetIsSelectable(bool bInIsSelectable){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.SetIsSelectable");

	FSetIsSelectable parms{};	
	parms.bInIsSelectable = bInIsSelectable;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::SetIsLocked(bool bInIsLocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.SetIsLocked");

	FSetIsLocked parms{};	
	parms.bInIsLocked = bInIsLocked;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::SetIsInteractionEnabled(bool bInIsInteractionEnabled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.SetIsInteractionEnabled");

	FSetIsInteractionEnabled parms{};	
	parms.bInIsInteractionEnabled = bInIsInteractionEnabled;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::SetIsInteractableWhenSelected(bool bInInteractableWhenSelected){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.SetIsInteractableWhenSelected");

	FSetIsInteractableWhenSelected parms{};	
	parms.bInInteractableWhenSelected = bInInteractableWhenSelected;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::SetIsFocusable(bool bInIsFocusable){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.SetIsFocusable");

	FSetIsFocusable parms{};	
	parms.bInIsFocusable = bInIsFocusable;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::SetInputActionProgressMaterial(struct FSlateBrush& InProgressMaterialBrush, struct FName& InProgressMaterialParam){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.SetInputActionProgressMaterial");

	FSetInputActionProgressMaterial parms{};	
	parms.InProgressMaterialBrush = InProgressMaterialBrush;
	parms.InProgressMaterialParam = InProgressMaterialParam;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::SetHoveredSoundOverride(struct USoundBase* Sound){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.SetHoveredSoundOverride");

	FSetHoveredSoundOverride parms{};	
	parms.Sound = Sound;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::SetHideInputAction(bool bInHideInputAction){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.SetHideInputAction");

	FSetHideInputAction parms{};	
	parms.bInHideInputAction = bInHideInputAction;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::SetClickMethod(enum class EButtonClickMethod InClickMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.SetClickMethod");

	FSetClickMethod parms{};	
	parms.InClickMethod = InClickMethod;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::OnTriggeringInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.OnTriggeringInputActionChanged");

	FOnTriggeringInputActionChanged parms{};	
	parms.NewTriggeredAction = NewTriggeredAction;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.OnTriggeredInputActionChanged");

	FOnTriggeredInputActionChanged parms{};	
	parms.NewTriggeredAction = NewTriggeredAction;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::OnInputMethodChanged(uint8_t CurrentInputType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.OnInputMethodChanged");

	FOnInputMethodChanged parms{};	
	parms.CurrentInputType = CurrentInputType;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::OnCurrentTextStyleChanged(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.OnCurrentTextStyleChanged");

	FOnCurrentTextStyleChanged parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::OnActionProgress(float HeldPercent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.OnActionProgress");

	FOnActionProgress parms{};	
	parms.HeldPercent = HeldPercent;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::OnActionComplete(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.OnActionComplete");

	FOnActionComplete parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::NativeOnActionProgress(float HeldPercent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.NativeOnActionProgress");

	FNativeOnActionProgress parms{};	
	parms.HeldPercent = HeldPercent;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::NativeOnActionComplete(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.NativeOnActionComplete");

	FNativeOnActionComplete parms{};	

	ProcessEvent(fn, &parms);
}

bool UCommonButtonBase::IsPressed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.IsPressed");

	FIsPressed parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UCommonButtonBase::IsInteractionEnabled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.IsInteractionEnabled");

	FIsInteractionEnabled parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonButtonBase::HandleTriggeringActionCommited(bool& bPassThrough){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.HandleTriggeringActionCommited");

	FHandleTriggeringActionCommited parms{};	
	parms.bPassThrough = bPassThrough;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::HandleFocusReceived(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.HandleFocusReceived");

	FHandleFocusReceived parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::HandleFocusLost(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.HandleFocusLost");

	FHandleFocusLost parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::HandleButtonReleased(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.HandleButtonReleased");

	FHandleButtonReleased parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::HandleButtonPressed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.HandleButtonPressed");

	FHandleButtonPressed parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::HandleButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.HandleButtonClicked");

	FHandleButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

struct UCommonButtonStyle* UCommonButtonBase::GetStyle(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.GetStyle");

	FGetStyle parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMaterialInstanceDynamic* UCommonButtonBase::GetSingleMaterialStyleMID(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.GetSingleMaterialStyleMID");

	FGetSingleMaterialStyleMID parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UCommonButtonBase::GetShouldSelectUponReceivingFocus(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus");

	FGetShouldSelectUponReceivingFocus parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UCommonButtonBase::GetSelected(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.GetSelected");

	FGetSelected parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UCommonButtonBase::GetLocked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.GetLocked");

	FGetLocked parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UCommonButtonBase::GetIsFocusable(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.GetIsFocusable");

	FGetIsFocusable parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UCommonButtonBase::GetInputAction(struct FDataTableRowHandle& InputActionRow){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.GetInputAction");

	FGetInputAction parms{};	
	parms.InputActionRow = InputActionRow;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

UCommonTextStyle* UCommonButtonBase::GetCurrentTextStyleClass(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.GetCurrentTextStyleClass");

	FGetCurrentTextStyleClass parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UCommonTextStyle* UCommonButtonBase::GetCurrentTextStyle(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.GetCurrentTextStyle");

	FGetCurrentTextStyle parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonButtonBase::GetCurrentCustomPadding(struct FMargin& OutCustomPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.GetCurrentCustomPadding");

	FGetCurrentCustomPadding parms{};	
	parms.OutCustomPadding = OutCustomPadding;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::GetCurrentButtonPadding(struct FMargin& OutButtonPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.GetCurrentButtonPadding");

	FGetCurrentButtonPadding parms{};	
	parms.OutButtonPadding = OutButtonPadding;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::DisableButtonWithReason(struct FText& DisabledReason){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.DisableButtonWithReason");

	FDisableButtonWithReason parms{};	
	parms.DisabledReason = DisabledReason;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::ClearSelection(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.ClearSelection");

	FClearSelection parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::BP_OnUnhovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.BP_OnUnhovered");

	FBP_OnUnhovered parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::BP_OnSelected(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.BP_OnSelected");

	FBP_OnSelected parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::BP_OnReleased(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.BP_OnReleased");

	FBP_OnReleased parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::BP_OnPressed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.BP_OnPressed");

	FBP_OnPressed parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::BP_OnLockedChanged(bool bIsLocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.BP_OnLockedChanged");

	FBP_OnLockedChanged parms{};	
	parms.bIsLocked = bIsLocked;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::BP_OnLockDoubleClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.BP_OnLockDoubleClicked");

	FBP_OnLockDoubleClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::BP_OnLockClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.BP_OnLockClicked");

	FBP_OnLockClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::BP_OnInputMethodChanged(uint8_t CurrentInputType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.BP_OnInputMethodChanged");

	FBP_OnInputMethodChanged parms{};	
	parms.CurrentInputType = CurrentInputType;

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::BP_OnHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.BP_OnHovered");

	FBP_OnHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::BP_OnFocusReceived(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.BP_OnFocusReceived");

	FBP_OnFocusReceived parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::BP_OnFocusLost(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.BP_OnFocusLost");

	FBP_OnFocusLost parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::BP_OnEnabled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.BP_OnEnabled");

	FBP_OnEnabled parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::BP_OnDoubleClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.BP_OnDoubleClicked");

	FBP_OnDoubleClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::BP_OnDisabled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.BP_OnDisabled");

	FBP_OnDisabled parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::BP_OnDeselected(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.BP_OnDeselected");

	FBP_OnDeselected parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonButtonBase::BP_OnClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonBase.BP_OnClicked");

	FBP_OnClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonActionWidget::SetInputActions(struct TArray<struct FDataTableRowHandle> NewInputActions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonActionWidget.SetInputActions");

	FSetInputActions parms{};	
	parms.NewInputActions = NewInputActions;

	ProcessEvent(fn, &parms);
}

void UCommonActionWidget::SetInputAction(struct FDataTableRowHandle InputActionRow){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonActionWidget.SetInputAction");

	FSetInputAction parms{};	
	parms.InputActionRow = InputActionRow;

	ProcessEvent(fn, &parms);
}

void UCommonActionWidget::SetIconRimBrush(struct FSlateBrush InIconRimBrush){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonActionWidget.SetIconRimBrush");

	FSetIconRimBrush parms{};	
	parms.InIconRimBrush = InIconRimBrush;

	ProcessEvent(fn, &parms);
}

void UCommonActionWidget::OnInputMethodChanged__DelegateSignature(bool bUsingGamepad){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature");

	FOnInputMethodChanged__DelegateSignature parms{};	
	parms.bUsingGamepad = bUsingGamepad;

	ProcessEvent(fn, &parms);
}

bool UCommonActionWidget::IsHeldAction(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonActionWidget.IsHeldAction");

	FIsHeldAction parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSlateBrush UCommonActionWidget::GetIcon(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonActionWidget.GetIcon");

	FGetIcon parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UCommonActionWidget::GetDisplayText(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonActionWidget.GetDisplayText");

	FGetDisplayText parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UCommonTextStyle* UCommonButtonStyle::GetSelectedTextStyle(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetSelectedTextStyle");

	FGetSelectedTextStyle parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonButtonStyle::GetSelectedPressedBrush(struct FSlateBrush& Brush){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush");

	FGetSelectedPressedBrush parms{};	
	parms.Brush = Brush;

	ProcessEvent(fn, &parms);
}

struct UCommonTextStyle* UCommonButtonStyle::GetSelectedHoveredTextStyle(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle");

	FGetSelectedHoveredTextStyle parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonButtonStyle::GetSelectedHoveredBrush(struct FSlateBrush& Brush){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush");

	FGetSelectedHoveredBrush parms{};	
	parms.Brush = Brush;

	ProcessEvent(fn, &parms);
}

void UCommonButtonStyle::GetSelectedBaseBrush(struct FSlateBrush& Brush){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush");

	FGetSelectedBaseBrush parms{};	
	parms.Brush = Brush;

	ProcessEvent(fn, &parms);
}

struct UCommonTextStyle* UCommonButtonStyle::GetNormalTextStyle(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetNormalTextStyle");

	FGetNormalTextStyle parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonButtonStyle::GetNormalPressedBrush(struct FSlateBrush& Brush){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetNormalPressedBrush");

	FGetNormalPressedBrush parms{};	
	parms.Brush = Brush;

	ProcessEvent(fn, &parms);
}

struct UCommonTextStyle* UCommonButtonStyle::GetNormalHoveredTextStyle(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle");

	FGetNormalHoveredTextStyle parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonButtonStyle::GetNormalHoveredBrush(struct FSlateBrush& Brush){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush");

	FGetNormalHoveredBrush parms{};	
	parms.Brush = Brush;

	ProcessEvent(fn, &parms);
}

void UCommonButtonStyle::GetNormalBaseBrush(struct FSlateBrush& Brush){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetNormalBaseBrush");

	FGetNormalBaseBrush parms{};	
	parms.Brush = Brush;

	ProcessEvent(fn, &parms);
}

void UCommonButtonStyle::GetMaterialBrush(struct FSlateBrush& Brush){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetMaterialBrush");

	FGetMaterialBrush parms{};	
	parms.Brush = Brush;

	ProcessEvent(fn, &parms);
}

struct UCommonTextStyle* UCommonButtonStyle::GetDisabledTextStyle(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetDisabledTextStyle");

	FGetDisabledTextStyle parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonButtonStyle::GetDisabledBrush(struct FSlateBrush& Brush){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetDisabledBrush");

	FGetDisabledBrush parms{};	
	parms.Brush = Brush;

	ProcessEvent(fn, &parms);
}

void UCommonButtonStyle::GetCustomPadding(struct FMargin& OutCustomPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetCustomPadding");

	FGetCustomPadding parms{};	
	parms.OutCustomPadding = OutCustomPadding;

	ProcessEvent(fn, &parms);
}

void UCommonButtonStyle::GetButtonPadding(struct FMargin& OutButtonPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetButtonPadding");

	FGetButtonPadding parms{};	
	parms.OutButtonPadding = OutButtonPadding;

	ProcessEvent(fn, &parms);
}

void UCommonUserWidget::SetConsumePointerInput(bool bInConsumePointerInput){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonUserWidget.SetConsumePointerInput");

	FSetConsumePointerInput parms{};	
	parms.bInConsumePointerInput = bInConsumePointerInput;

	ProcessEvent(fn, &parms);
}

void UCommonBorderStyle::GetBackgroundBrush(struct FSlateBrush& Brush){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonBorderStyle.GetBackgroundBrush");

	FGetBackgroundBrush parms{};	
	parms.Brush = Brush;

	ProcessEvent(fn, &parms);
}

void UCommonActivatableWidget::SetBindVisibilities(uint8_t OnActivatedVisibility, uint8_t OnDeactivatedVisibility, bool bInAllActive){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidget.SetBindVisibilities");

	FSetBindVisibilities parms{};	
	parms.OnActivatedVisibility = OnActivatedVisibility;
	parms.OnDeactivatedVisibility = OnDeactivatedVisibility;
	parms.bInAllActive = bInAllActive;

	ProcessEvent(fn, &parms);
}

bool UCommonActivatableWidget::IsActivated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidget.IsActivated");

	FIsActivated parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWidget* UCommonActivatableWidget::GetDesiredFocusTarget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidget.GetDesiredFocusTarget");

	FGetDesiredFocusTarget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonActivatableWidget::DeactivateWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidget.DeactivateWidget");

	FDeactivateWidget parms{};	

	ProcessEvent(fn, &parms);
}

bool UCommonActivatableWidget::BP_OnHandleBackAction(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidget.BP_OnHandleBackAction");

	FBP_OnHandleBackAction parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonActivatableWidget::BP_OnDeactivated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidget.BP_OnDeactivated");

	FBP_OnDeactivated parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonActivatableWidget::BP_OnActivated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidget.BP_OnActivated");

	FBP_OnActivated parms{};	

	ProcessEvent(fn, &parms);
}

struct UWidget* UCommonActivatableWidget::BP_GetDesiredFocusTarget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget");

	FBP_GetDesiredFocusTarget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonActivatableWidget::BindVisibilityToActivation(struct UCommonActivatableWidget* ActivatableWidget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidget.BindVisibilityToActivation");

	FBindVisibilityToActivation parms{};	
	parms.ActivatableWidget = ActivatableWidget;

	ProcessEvent(fn, &parms);
}

void UCommonActivatableWidget::ActivateWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidget.ActivateWidget");

	FActivateWidget parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonAnimatedSwitcher::SetDisableTransitionAnimation(bool bDisableAnimation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation");

	FSetDisableTransitionAnimation parms{};	
	parms.bDisableAnimation = bDisableAnimation;

	ProcessEvent(fn, &parms);
}

bool UCommonAnimatedSwitcher::IsTransitionPlaying(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonAnimatedSwitcher.IsTransitionPlaying");

	FIsTransitionPlaying parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UCommonAnimatedSwitcher::IsCurrentlySwitching(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonAnimatedSwitcher.IsCurrentlySwitching");

	FIsCurrentlySwitching parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UCommonAnimatedSwitcher::HasWidgets(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonAnimatedSwitcher.HasWidgets");

	FHasWidgets parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonAnimatedSwitcher::ActivatePreviousWidget(bool bCanWrap){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget");

	FActivatePreviousWidget parms{};	
	parms.bCanWrap = bCanWrap;

	ProcessEvent(fn, &parms);
}

void UCommonAnimatedSwitcher::ActivateNextWidget(bool bCanWrap){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonAnimatedSwitcher.ActivateNextWidget");

	FActivateNextWidget parms{};	
	parms.bCanWrap = bCanWrap;

	ProcessEvent(fn, &parms);
}

void UCommonWidgetCarousel::SetActiveWidgetIndex(int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex");

	FSetActiveWidgetIndex parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);
}

void UCommonWidgetCarousel::SetActiveWidget(struct UWidget* Widget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarousel.SetActiveWidget");

	FSetActiveWidget parms{};	
	parms.Widget = Widget;

	ProcessEvent(fn, &parms);
}

void UCommonWidgetCarousel::PreviousPage(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarousel.PreviousPage");

	FPreviousPage parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonWidgetCarousel::NextPage(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarousel.NextPage");

	FNextPage parms{};	

	ProcessEvent(fn, &parms);
}

struct UWidget* UCommonWidgetCarousel::GetWidgetAtIndex(int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex");

	FGetWidgetAtIndex parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UCommonWidgetCarousel::GetActiveWidgetIndex(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex");

	FGetActiveWidgetIndex parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonWidgetCarousel::EndAutoScrolling(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarousel.EndAutoScrolling");

	FEndAutoScrolling parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonWidgetCarousel::BeginAutoScrolling(float ScrollInterval){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling");

	FBeginAutoScrolling parms{};	
	parms.ScrollInterval = ScrollInterval;

	ProcessEvent(fn, &parms);
}

void UCommonNumericTextBlock::SetNumericType(uint8_t InNumericType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonNumericTextBlock.SetNumericType");

	FSetNumericType parms{};	
	parms.InNumericType = InNumericType;

	ProcessEvent(fn, &parms);
}

void UCommonNumericTextBlock::SetCurrentValue(float NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonNumericTextBlock.SetCurrentValue");

	FSetCurrentValue parms{};	
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void UCommonNumericTextBlock::OnOutro__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature");

	FOnOutro__DelegateSignature parms{};	
	parms.NumericTextBlock = NumericTextBlock;

	ProcessEvent(fn, &parms);
}

void UCommonNumericTextBlock::OnInterpolationUpdated__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature");

	FOnInterpolationUpdated__DelegateSignature parms{};	
	parms.NumericTextBlock = NumericTextBlock;
	parms.LastValue = LastValue;
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void UCommonNumericTextBlock::OnInterpolationStarted__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature");

	FOnInterpolationStarted__DelegateSignature parms{};	
	parms.NumericTextBlock = NumericTextBlock;

	ProcessEvent(fn, &parms);
}

void UCommonNumericTextBlock::OnInterpolationEnded__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature");

	FOnInterpolationEnded__DelegateSignature parms{};	
	parms.NumericTextBlock = NumericTextBlock;
	parms.HadCompleted = HadCompleted;

	ProcessEvent(fn, &parms);
}

bool UCommonNumericTextBlock::IsInterpolatingNumericValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue");

	FIsInterpolatingNumericValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonNumericTextBlock::InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonNumericTextBlock.InterpolateToValue");

	FInterpolateToValue parms{};	
	parms.TargetValue = TargetValue;
	parms.MaximumInterpolationDuration = MaximumInterpolationDuration;
	parms.MinimumChangeRate = MinimumChangeRate;
	parms.OutroOffset = OutroOffset;

	ProcessEvent(fn, &parms);
}

float UCommonNumericTextBlock::GetTargetValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonNumericTextBlock.GetTargetValue");

	FGetTargetValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonDateTimeTextBlock::SetTimespanValue(struct FTimespan InTimespan){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue");

	FSetTimespanValue parms{};	
	parms.InTimespan = InTimespan;

	ProcessEvent(fn, &parms);
}

void UCommonDateTimeTextBlock::SetDateTimeValue(struct FDateTime InDateTime, bool bShowAsCountdown, float InRefreshDelay){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue");

	FSetDateTimeValue parms{};	
	parms.InDateTime = InDateTime;
	parms.bShowAsCountdown = bShowAsCountdown;
	parms.InRefreshDelay = InRefreshDelay;

	ProcessEvent(fn, &parms);
}

void UCommonDateTimeTextBlock::SetCountDownCompletionText(struct FText InCompletionText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText");

	FSetCountDownCompletionText parms{};	
	parms.InCompletionText = InCompletionText;

	ProcessEvent(fn, &parms);
}

struct FDateTime UCommonDateTimeTextBlock::GetDateTime(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonDateTimeTextBlock.GetDateTime");

	FGetDateTime parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonBorder::SetStyle(UCommonBorderStyle* InStyle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonBorder.SetStyle");

	FSetStyle parms{};	
	parms.InStyle = InStyle;

	ProcessEvent(fn, &parms);
}

void UCommonRichTextBlock::SetScrollingEnabled(bool bInIsScrollingEnabled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonRichTextBlock.SetScrollingEnabled");

	FSetScrollingEnabled parms{};	
	parms.bInIsScrollingEnabled = bInIsScrollingEnabled;

	ProcessEvent(fn, &parms);
}

void UCommonTextBlock::SetWrapTextWidth(int32_t InWrapTextAt){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTextBlock.SetWrapTextWidth");

	FSetWrapTextWidth parms{};	
	parms.InWrapTextAt = InWrapTextAt;

	ProcessEvent(fn, &parms);
}

void UCommonTextBlock::SetTextCase(bool bUseAllCaps){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTextBlock.SetTextCase");

	FSetTextCase parms{};	
	parms.bUseAllCaps = bUseAllCaps;

	ProcessEvent(fn, &parms);
}

void UCommonTextBlock::SetStyle(UCommonTextStyle* InStyle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTextBlock.SetStyle");

	FSetStyle parms{};	
	parms.InStyle = InStyle;

	ProcessEvent(fn, &parms);
}

void UCommonTextBlock::SetScrollingEnabled(bool bInIsScrollingEnabled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTextBlock.SetScrollingEnabled");

	FSetScrollingEnabled parms{};	
	parms.bInIsScrollingEnabled = bInIsScrollingEnabled;

	ProcessEvent(fn, &parms);
}

void UCommonTextBlock::SetMargin(struct FMargin& InMargin){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTextBlock.SetMargin");

	FSetMargin parms{};	
	parms.InMargin = InMargin;

	ProcessEvent(fn, &parms);
}

void UCommonTextBlock::SetLineHeightPercentage(float InLineHeightPercentage){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTextBlock.SetLineHeightPercentage");

	FSetLineHeightPercentage parms{};	
	parms.InLineHeightPercentage = InLineHeightPercentage;

	ProcessEvent(fn, &parms);
}

void UCommonTextBlock::ResetScrollState(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTextBlock.ResetScrollState");

	FResetScrollState parms{};	

	ProcessEvent(fn, &parms);
}

struct FMargin UCommonTextBlock::GetMargin(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTextBlock.GetMargin");

	FGetMargin parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FName> UUCommonVisibilityWidgetBase::GetRegisteredPlatforms(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.UCommonVisibilityWidgetBase.GetRegisteredPlatforms");

	FGetRegisteredPlatforms parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonLazyWidget::SetLazyContent(struct TSoftClassPtr<UObject> SoftWidget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonLazyWidget.SetLazyContent");

	FSetLazyContent parms{};	
	parms.SoftWidget = SoftWidget;

	ProcessEvent(fn, &parms);
}

bool UCommonLazyWidget::IsLoading(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonLazyWidget.IsLoading");

	FIsLoading parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UUserWidget* UCommonLazyWidget::GetContent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonLazyWidget.GetContent");

	FGetContent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonBoundActionButton::OnUpdateInputAction(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonBoundActionButton.OnUpdateInputAction");

	FOnUpdateInputAction parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonListView::SetEntrySpacing(float InEntrySpacing){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonListView.SetEntrySpacing");

	FSetEntrySpacing parms{};	
	parms.InEntrySpacing = InEntrySpacing;

	ProcessEvent(fn, &parms);
}

void ULoadGuardSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.LoadGuardSlot.SetVerticalAlignment");

	FSetVerticalAlignment parms{};	
	parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(fn, &parms);
}

void ULoadGuardSlot::SetPadding(struct FMargin InPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.LoadGuardSlot.SetPadding");

	FSetPadding parms{};	
	parms.InPadding = InPadding;

	ProcessEvent(fn, &parms);
}

void ULoadGuardSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.LoadGuardSlot.SetHorizontalAlignment");

	FSetHorizontalAlignment parms{};	
	parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(fn, &parms);
}

void UCommonPoolableWidgetInterface::OnReleaseToPool(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool");

	FOnReleaseToPool parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonPoolableWidgetInterface::OnAcquireFromPool(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool");

	FOnAcquireFromPool parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonRotator::ShiftTextRight(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonRotator.ShiftTextRight");

	FShiftTextRight parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonRotator::ShiftTextLeft(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonRotator.ShiftTextLeft");

	FShiftTextLeft parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonRotator::SetSelectedItem(int32_t InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonRotator.SetSelectedItem");

	FSetSelectedItem parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UCommonRotator::PopulateTextLabels(struct TArray<struct FText> Labels){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonRotator.PopulateTextLabels");

	FPopulateTextLabels parms{};	
	parms.Labels = Labels;

	ProcessEvent(fn, &parms);
}

struct FText UCommonRotator::GetSelectedText(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonRotator.GetSelectedText");

	FGetSelectedText parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UCommonRotator::GetSelectedIndex(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonRotator.GetSelectedIndex");

	FGetSelectedIndex parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonRotator::BP_OnOptionsPopulated(int32_t Count){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonRotator.BP_OnOptionsPopulated");

	FBP_OnOptionsPopulated parms{};	
	parms.Count = Count;

	ProcessEvent(fn, &parms);
}

void UCommonRotator::BP_OnOptionSelected(int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonRotator.BP_OnOptionSelected");

	FBP_OnOptionSelected parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);
}

void UCommonTabListWidgetBase::SetTabVisibility(struct FName TabNameID, uint8_t NewVisibility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidgetBase.SetTabVisibility");

	FSetTabVisibility parms{};	
	parms.TabNameID = TabNameID;
	parms.NewVisibility = NewVisibility;

	ProcessEvent(fn, &parms);
}

void UCommonTabListWidgetBase::SetTabInteractionEnabled(struct FName TabNameID, bool bEnable){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled");

	FSetTabInteractionEnabled parms{};	
	parms.TabNameID = TabNameID;
	parms.bEnable = bEnable;

	ProcessEvent(fn, &parms);
}

void UCommonTabListWidgetBase::SetTabEnabled(struct FName TabNameID, bool bEnable){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidgetBase.SetTabEnabled");

	FSetTabEnabled parms{};	
	parms.TabNameID = TabNameID;
	parms.bEnable = bEnable;

	ProcessEvent(fn, &parms);
}

void UCommonTabListWidgetBase::SetListeningForInput(bool bShouldListen){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidgetBase.SetListeningForInput");

	FSetListeningForInput parms{};	
	parms.bShouldListen = bShouldListen;

	ProcessEvent(fn, &parms);
}

void UCommonTabListWidgetBase::SetLinkedSwitcher(struct UCommonAnimatedSwitcher* CommonSwitcher){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher");

	FSetLinkedSwitcher parms{};	
	parms.CommonSwitcher = CommonSwitcher;

	ProcessEvent(fn, &parms);
}

bool UCommonTabListWidgetBase::SelectTabByID(struct FName TabNameID, bool bSuppressClickFeedback){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidgetBase.SelectTabByID");

	FSelectTabByID parms{};	
	parms.TabNameID = TabNameID;
	parms.bSuppressClickFeedback = bSuppressClickFeedback;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UCommonTabListWidgetBase::RemoveTab(struct FName TabNameID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidgetBase.RemoveTab");

	FRemoveTab parms{};	
	parms.TabNameID = TabNameID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonTabListWidgetBase::RemoveAllTabs(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidgetBase.RemoveAllTabs");

	FRemoveAllTabs parms{};	

	ProcessEvent(fn, &parms);
}

bool UCommonTabListWidgetBase::RegisterTab(struct FName TabNameID, UCommonButtonBase* ButtonWidgetType, struct UWidget* ContentWidget, int32_t TabIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidgetBase.RegisterTab");

	FRegisterTab parms{};	
	parms.TabNameID = TabNameID;
	parms.ButtonWidgetType = ButtonWidgetType;
	parms.ContentWidget = ContentWidget;
	parms.TabIndex = TabIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonTabListWidgetBase::OnTabSelected__DelegateSignature(struct FName TabId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature");

	FOnTabSelected__DelegateSignature parms{};	
	parms.TabId = TabId;

	ProcessEvent(fn, &parms);
}

void UCommonTabListWidgetBase::OnTabListRebuilt__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabListRebuilt__DelegateSignature");

	FOnTabListRebuilt__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonTabListWidgetBase::OnTabButtonRemoval__DelegateSignature(struct FName TabId, struct UCommonButtonBase* TabButton){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature");

	FOnTabButtonRemoval__DelegateSignature parms{};	
	parms.TabId = TabId;
	parms.TabButton = TabButton;

	ProcessEvent(fn, &parms);
}

void UCommonTabListWidgetBase::OnTabButtonCreation__DelegateSignature(struct FName TabId, struct UCommonButtonBase* TabButton){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature");

	FOnTabButtonCreation__DelegateSignature parms{};	
	parms.TabId = TabId;
	parms.TabButton = TabButton;

	ProcessEvent(fn, &parms);
}

void UCommonTabListWidgetBase::HandleTabRemoval(struct FName TabNameID, struct UCommonButtonBase* TabButton){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidgetBase.HandleTabRemoval");

	FHandleTabRemoval parms{};	
	parms.TabNameID = TabNameID;
	parms.TabButton = TabButton;

	ProcessEvent(fn, &parms);
}

void UCommonTabListWidgetBase::HandleTabCreation(struct FName TabNameID, struct UCommonButtonBase* TabButton){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidgetBase.HandleTabCreation");

	FHandleTabCreation parms{};	
	parms.TabNameID = TabNameID;
	parms.TabButton = TabButton;

	ProcessEvent(fn, &parms);
}

void UCommonTabListWidgetBase::HandleTabButtonSelected(struct UCommonButtonBase* SelectedTabButton, int32_t ButtonIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected");

	FHandleTabButtonSelected parms{};	
	parms.SelectedTabButton = SelectedTabButton;
	parms.ButtonIndex = ButtonIndex;

	ProcessEvent(fn, &parms);
}

void UCommonTabListWidgetBase::HandlePreviousTabInputAction(bool& bPassThrough){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction");

	FHandlePreviousTabInputAction parms{};	
	parms.bPassThrough = bPassThrough;

	ProcessEvent(fn, &parms);
}

void UCommonTabListWidgetBase::HandlePreLinkedSwitcherChanged_BP(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP");

	FHandlePreLinkedSwitcherChanged_BP parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonTabListWidgetBase::HandlePostLinkedSwitcherChanged_BP(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP");

	FHandlePostLinkedSwitcherChanged_BP parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonTabListWidgetBase::HandleNextTabInputAction(bool& bPassThrough){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction");

	FHandleNextTabInputAction parms{};	
	parms.bPassThrough = bPassThrough;

	ProcessEvent(fn, &parms);
}

struct FName UCommonTabListWidgetBase::GetTabIdAtIndex(int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex");

	FGetTabIdAtIndex parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UCommonTabListWidgetBase::GetTabCount(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidgetBase.GetTabCount");

	FGetTabCount parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UCommonButtonBase* UCommonTabListWidgetBase::GetTabButtonBaseByID(struct FName TabNameID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID");

	FGetTabButtonBaseByID parms{};	
	parms.TabNameID = TabNameID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FName UCommonTabListWidgetBase::GetSelectedTabId(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidgetBase.GetSelectedTabId");

	FGetSelectedTabId parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UCommonAnimatedSwitcher* UCommonTabListWidgetBase::GetLinkedSwitcher(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher");

	FGetLinkedSwitcher parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FName UCommonTabListWidgetBase::GetActiveTab(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidgetBase.GetActiveTab");

	FGetActiveTab parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonTabListWidgetBase::DisableTabWithReason(struct FName TabNameID, struct FText& Reason){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidgetBase.DisableTabWithReason");

	FDisableTabWithReason parms{};	
	parms.TabNameID = TabNameID;
	parms.Reason = Reason;

	ProcessEvent(fn, &parms);
}

void UCommonTextStyle::GetStrikeBrush(struct FSlateBrush& OutStrikeBrush){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTextStyle.GetStrikeBrush");

	FGetStrikeBrush parms{};	
	parms.OutStrikeBrush = OutStrikeBrush;

	ProcessEvent(fn, &parms);
}

void UCommonTextStyle::GetShadowOffset(struct FVector2D& OutShadowOffset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTextStyle.GetShadowOffset");

	FGetShadowOffset parms{};	
	parms.OutShadowOffset = OutShadowOffset;

	ProcessEvent(fn, &parms);
}

void UCommonTextStyle::GetShadowColor(struct FLinearColor& OutColor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTextStyle.GetShadowColor");

	FGetShadowColor parms{};	
	parms.OutColor = OutColor;

	ProcessEvent(fn, &parms);
}

void UCommonTextStyle::GetMargin(struct FMargin& OutMargin){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTextStyle.GetMargin");

	FGetMargin parms{};	
	parms.OutMargin = OutMargin;

	ProcessEvent(fn, &parms);
}

float UCommonTextStyle::GetLineHeightPercentage(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTextStyle.GetLineHeightPercentage");

	FGetLineHeightPercentage parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonTextStyle::GetFont(struct FSlateFontInfo& OutFont){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTextStyle.GetFont");

	FGetFont parms{};	
	parms.OutFont = OutFont;

	ProcessEvent(fn, &parms);
}

void UCommonTextStyle::GetColor(struct FLinearColor& OutColor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonTextStyle.GetColor");

	FGetColor parms{};	
	parms.OutColor = OutColor;

	ProcessEvent(fn, &parms);
}

struct UWidget* UCommonUILibrary::FindParentWidgetOfType(struct UWidget* StartingWidget, UWidget* Type){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonUILibrary.FindParentWidgetOfType");

	FFindParentWidgetOfType parms{};	
	parms.StartingWidget = StartingWidget;
	parms.Type = Type;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonVisibilitySwitcher::SetActiveWidgetIndex(int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex");

	FSetActiveWidgetIndex parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);
}

void UCommonVisibilitySwitcher::SetActiveWidget(struct UWidget* Widget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonVisibilitySwitcher.SetActiveWidget");

	FSetActiveWidget parms{};	
	parms.Widget = Widget;

	ProcessEvent(fn, &parms);
}

void UCommonVisibilitySwitcher::IncrementActiveWidgetIndex(bool bAllowWrapping){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex");

	FIncrementActiveWidgetIndex parms{};	
	parms.bAllowWrapping = bAllowWrapping;

	ProcessEvent(fn, &parms);
}

int32_t UCommonVisibilitySwitcher::GetActiveWidgetIndex(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex");

	FGetActiveWidgetIndex parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWidget* UCommonVisibilitySwitcher::GetActiveWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonVisibilitySwitcher.GetActiveWidget");

	FGetActiveWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonVisibilitySwitcher::DecrementActiveWidgetIndex(bool bAllowWrapping){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex");

	FDecrementActiveWidgetIndex parms{};	
	parms.bAllowWrapping = bAllowWrapping;

	ProcessEvent(fn, &parms);
}

void UCommonVisibilitySwitcher::DeactivateVisibleSlot(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot");

	FDeactivateVisibleSlot parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonVisibilitySwitcher::ActivateVisibleSlot(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot");

	FActivateVisibleSlot parms{};	

	ProcessEvent(fn, &parms);
}

struct FSlateBrush UCommonUISubsystemBase::GetInputActionButtonIcon(struct FDataTableRowHandle& InputActionRowHandle, uint8_t InputType, struct FName& GamepadName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon");

	FGetInputActionButtonIcon parms{};	
	parms.InputActionRowHandle = InputActionRowHandle;
	parms.InputType = InputType;
	parms.GamepadName = GamepadName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonWidgetCarouselNavBar::SetLinkedCarousel(struct UCommonWidgetCarousel* CommonCarousel){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel");

	FSetLinkedCarousel parms{};	
	parms.CommonCarousel = CommonCarousel;

	ProcessEvent(fn, &parms);
}

void UCommonWidgetCarouselNavBar::HandlePageChanged(struct UCommonWidgetCarousel* CommonCarousel, int32_t PageIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged");

	FHandlePageChanged parms{};	
	parms.CommonCarousel = CommonCarousel;
	parms.PageIndex = PageIndex;

	ProcessEvent(fn, &parms);
}

void UCommonWidgetCarouselNavBar::HandleButtonClicked(struct UCommonButtonBase* AssociatedButton, int32_t ButtonIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked");

	FHandleButtonClicked parms{};	
	parms.AssociatedButton = AssociatedButton;
	parms.ButtonIndex = ButtonIndex;

	ProcessEvent(fn, &parms);
}

void UCommonWidgetGroupBase::RemoveWidget(struct UWidget* InWidget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetGroupBase.RemoveWidget");

	FRemoveWidget parms{};	
	parms.InWidget = InWidget;

	ProcessEvent(fn, &parms);
}

void UCommonWidgetGroupBase::RemoveAll(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetGroupBase.RemoveAll");

	FRemoveAll parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonWidgetGroupBase::AddWidget(struct UWidget* InWidget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetGroupBase.AddWidget");

	FAddWidget parms{};	
	parms.InWidget = InWidget;

	ProcessEvent(fn, &parms);
}

void UCommonButtonGroupBase::SetSelectionRequired(bool bRequireSelection){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroupBase.SetSelectionRequired");

	FSetSelectionRequired parms{};	
	parms.bRequireSelection = bRequireSelection;

	ProcessEvent(fn, &parms);
}

void UCommonButtonGroupBase::SelectPreviousButton(bool bAllowWrap){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroupBase.SelectPreviousButton");

	FSelectPreviousButton parms{};	
	parms.bAllowWrap = bAllowWrap;

	ProcessEvent(fn, &parms);
}

void UCommonButtonGroupBase::SelectNextButton(bool bAllowWrap){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroupBase.SelectNextButton");

	FSelectNextButton parms{};	
	parms.bAllowWrap = bAllowWrap;

	ProcessEvent(fn, &parms);
}

void UCommonButtonGroupBase::SelectButtonAtIndex(int32_t ButtonIndex, bool bAllowSound){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroupBase.SelectButtonAtIndex");

	FSelectButtonAtIndex parms{};	
	parms.ButtonIndex = ButtonIndex;
	parms.bAllowSound = bAllowSound;

	ProcessEvent(fn, &parms);
}

void UCommonButtonGroupBase::OnSelectionStateChangedBase(struct UCommonButtonBase* BaseButton, bool bIsSelected){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase");

	FOnSelectionStateChangedBase parms{};	
	parms.BaseButton = BaseButton;
	parms.bIsSelected = bIsSelected;

	ProcessEvent(fn, &parms);
}

void UCommonButtonGroupBase::OnHandleButtonBaseDoubleClicked(struct UCommonButtonBase* BaseButton){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked");

	FOnHandleButtonBaseDoubleClicked parms{};	
	parms.BaseButton = BaseButton;

	ProcessEvent(fn, &parms);
}

void UCommonButtonGroupBase::OnHandleButtonBaseClicked(struct UCommonButtonBase* BaseButton){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked");

	FOnHandleButtonBaseClicked parms{};	
	parms.BaseButton = BaseButton;

	ProcessEvent(fn, &parms);
}

void UCommonButtonGroupBase::OnButtonBaseUnhovered(struct UCommonButtonBase* BaseButton){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered");

	FOnButtonBaseUnhovered parms{};	
	parms.BaseButton = BaseButton;

	ProcessEvent(fn, &parms);
}

void UCommonButtonGroupBase::OnButtonBaseHovered(struct UCommonButtonBase* BaseButton){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroupBase.OnButtonBaseHovered");

	FOnButtonBaseHovered parms{};	
	parms.BaseButton = BaseButton;

	ProcessEvent(fn, &parms);
}

bool UCommonButtonGroupBase::HasAnyButtons(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroupBase.HasAnyButtons");

	FHasAnyButtons parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UCommonButtonGroupBase::GetSelectedButtonIndex(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex");

	FGetSelectedButtonIndex parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UCommonButtonBase* UCommonButtonGroupBase::GetSelectedButtonBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroupBase.GetSelectedButtonBase");

	FGetSelectedButtonBase parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UCommonButtonGroupBase::GetHoveredButtonIndex(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex");

	FGetHoveredButtonIndex parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UCommonButtonGroupBase::GetButtonCount(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroupBase.GetButtonCount");

	FGetButtonCount parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UCommonButtonBase* UCommonButtonGroupBase::GetButtonBaseAtIndex(int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex");

	FGetButtonBaseAtIndex parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UCommonButtonGroupBase::FindButtonIndex(struct UCommonButtonBase* ButtonToFind){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroupBase.FindButtonIndex");

	FFindButtonIndex parms{};	
	parms.ButtonToFind = ButtonToFind;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonButtonGroupBase::DeselectAll(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroupBase.DeselectAll");

	FDeselectAll parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonBoundActionBar::SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly");

	FSetDisplayOwningPlayerActionsOnly parms{};	
	parms.bShouldOnlyDisplayOwningPlayerActions = bShouldOnlyDisplayOwningPlayerActions;

	ProcessEvent(fn, &parms);
}

void UCommonActivatableWidgetContainerBase::SetTransitionDuration(float Duration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidgetContainerBase.SetTransitionDuration");

	FSetTransitionDuration parms{};	
	parms.Duration = Duration;

	ProcessEvent(fn, &parms);
}

void UCommonActivatableWidgetContainerBase::RemoveWidget(struct UCommonActivatableWidget* WidgetToRemove){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget");

	FRemoveWidget parms{};	
	parms.WidgetToRemove = WidgetToRemove;

	ProcessEvent(fn, &parms);
}

float UCommonActivatableWidgetContainerBase::GetTransitionDuration(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidgetContainerBase.GetTransitionDuration");

	FGetTransitionDuration parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UCommonActivatableWidget* UCommonActivatableWidgetContainerBase::GetActiveWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget");

	FGetActiveWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonActivatableWidgetContainerBase::ClearWidgets(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets");

	FClearWidgets parms{};	

	ProcessEvent(fn, &parms);
}

struct UCommonActivatableWidget* UCommonActivatableWidgetContainerBase::BP_AddWidget(UCommonActivatableWidget* ActivatableWidgetClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget");

	FBP_AddWidget parms{};	
	parms.ActivatableWidgetClass = ActivatableWidgetClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

