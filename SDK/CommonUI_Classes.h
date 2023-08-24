#pragma once 
#include <CommonUI_Structs.h>
 
 
 
// Class CommonUI.CommonLoadGuard
// Size: 0x2D0(Inherited: 0x168)
struct UCommonLoadGuard : UContentWidget
{
	char pad_360[8];  // 0x168 (0x168)
	struct FSlateBrush LoadingBackgroundBrush;  // 0x170 (0x170)
	enum class EHorizontalAlignment ThrobberAlignment;  // 0x240 (0x240)
	char pad_577[3];  // 0x241 (0x241)
	struct FMargin ThrobberPadding;  // 0x244 (0x244)
	char pad_596[4];  // 0x254 (0x254)
	struct FText LoadingText;  // 0x258 (0x258)
	UCommonTextStyle* TextStyle;  // 0x270 (0x270)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged;  // 0x278 (0x278)
	struct FSoftObjectPath SpinnerMaterialPath;  // 0x288 (0x288)
	char pad_680[40];  // 0x2A8 (0x2A8)


	void SetLoadingText(struct FText& InLoadingText); // Function CommonUI.CommonLoadGuard.SetLoadingText
	void SetIsLoading(bool bInIsLoading); // Function CommonUI.CommonLoadGuard.SetIsLoading
	void OnAssetLoaded__DelegateSignature(struct UObject* Object); // DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
	bool IsLoading(); // Function CommonUI.CommonLoadGuard.IsLoading
	void BP_GuardAndLoadAsset(struct TSoftObjectPtr<UObject>& InLazyAsset, struct FDelegate& OnAssetLoaded); // Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
}; 
 
 


// Class CommonUI.CommonButtonInternalBase
// Size: 0x660(Inherited: 0x5F0)
struct UCommonButtonInternalBase : UButton
{
	char pad_1520[8];  // 0x5F0 (0x5F0)
	struct FMulticastInlineDelegate OnDoubleClicked;  // 0x5F8 (0x5F8)
	char pad_1544[32];  // 0x608 (0x608)
	int32_t MinWidth;  // 0x628 (0x628)
	int32_t MinHeight;  // 0x62C (0x62C)
	char pad_1584_1 : 7;  // 0x630 (0x630)
	bool bButtonEnabled : 1;  // 0x630 (0x630)
	char pad_1585_1 : 7;  // 0x631 (0x631)
	bool bInteractionEnabled : 1;  // 0x631 (0x631)
	char pad_1586[46];  // 0x632 (0x632)


}; 
 
 


// Class CommonUI.CommonStyleSheetTypeFontLetterSpacing
// Size: 0x38(Inherited: 0x30)
struct UCommonStyleSheetTypeFontLetterSpacing : UCommonStyleSheetTypeBase
{
	int32_t LetterSpacing;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 


// Class CommonUI.CommonTreeView
// Size: 0xC80(Inherited: 0xC80)
struct UCommonTreeView : UTreeView
{


}; 
 
 


// Class CommonUI.CommonBoundActionButtonInterface
// Size: 0x28(Inherited: 0x28)
struct UCommonBoundActionButtonInterface : UInterface
{


}; 
 
 


// Class CommonUI.CommonTileView
// Size: 0xC40(Inherited: 0xC40)
struct UCommonTileView : UTileView
{


}; 
 
 


// Class CommonUI.CommonStyleSheetTypeFontSize
// Size: 0x38(Inherited: 0x30)
struct UCommonStyleSheetTypeFontSize : UCommonStyleSheetTypeBase
{
	int32_t Size;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 


// Class CommonUI.CommonStyleSheetTypeFontTypeface
// Size: 0x88(Inherited: 0x30)
struct UCommonStyleSheetTypeFontTypeface : UCommonStyleSheetTypeBase
{
	struct FSlateFontInfo Typeface;  // 0x30 (0x30)


}; 
 
 


// Class CommonUI.CommonLazyImage
// Size: 0x3C0(Inherited: 0x2B0)
struct UCommonLazyImage : UImage
{
	struct FSlateBrush LoadingBackgroundBrush;  // 0x2B0 (0x2B0)
	struct FName MaterialTextureParamName;  // 0x380 (0x380)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged;  // 0x388 (0x388)
	char pad_920[40];  // 0x398 (0x398)


	void SetMaterialTextureParamName(struct FName TextureParamName); // Function CommonUI.CommonLazyImage.SetMaterialTextureParamName
	void SetBrushFromLazyTexture(struct TSoftObjectPtr<UTexture2D>& LazyTexture, bool bMatchSize); // Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture
	void SetBrushFromLazyMaterial(struct TSoftObjectPtr<UMaterialInterface>& LazyMaterial); // Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
	void SetBrushFromLazyDisplayAsset(struct TSoftObjectPtr<UObject>& LazyObject, bool bMatchTextureSize); // Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
	bool IsLoading(); // Function CommonUI.CommonLazyImage.IsLoading
}; 
 
 


// Class CommonUI.CommonStyleSheetTypeBase
// Size: 0x30(Inherited: 0x28)
struct UCommonStyleSheetTypeBase : UObject
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bIsEnabled : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 


// Class CommonUI.CommonStyleSheetTypeLineHeightPercentage
// Size: 0x38(Inherited: 0x30)
struct UCommonStyleSheetTypeLineHeightPercentage : UCommonStyleSheetTypeBase
{
	float LineHeightPercentage;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 


// Class CommonUI.CommonStyleSheetTypeColor
// Size: 0x40(Inherited: 0x30)
struct UCommonStyleSheetTypeColor : UCommonStyleSheetTypeBase
{
	struct FLinearColor Color;  // 0x30 (0x30)


}; 
 
 


// Class CommonUI.CommonGenericInputActionDataTable
// Size: 0xB0(Inherited: 0xB0)
struct UCommonGenericInputActionDataTable : UDataTable
{


}; 
 
 


// Class CommonUI.CommonActivatableWidgetStack
// Size: 0x280(Inherited: 0x270)
struct UCommonActivatableWidgetStack : UCommonActivatableWidgetContainerBase
{
	UCommonActivatableWidget* RootContentWidgetClass;  // 0x270 (0x270)
	struct UCommonActivatableWidget* RootContentWidget;  // 0x278 (0x278)


}; 
 
 


// Class CommonUI.CommonHierarchicalScrollBox
// Size: 0xCA0(Inherited: 0xCA0)
struct UCommonHierarchicalScrollBox : UScrollBox
{


}; 
 
 


// Class CommonUI.CommonStyleSheetTypeOpacity
// Size: 0x38(Inherited: 0x30)
struct UCommonStyleSheetTypeOpacity : UCommonStyleSheetTypeBase
{
	float Opacity;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 


// Class CommonUI.CommonStyleSheetTypeMarginLeft
// Size: 0x38(Inherited: 0x30)
struct UCommonStyleSheetTypeMarginLeft : UCommonStyleSheetTypeBase
{
	float Left;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 


// Class CommonUI.CommonStyleSheetTypeMarginRight
// Size: 0x38(Inherited: 0x30)
struct UCommonStyleSheetTypeMarginRight : UCommonStyleSheetTypeBase
{
	float Right;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 


// Class CommonUI.CommonStyleSheetTypeMarginTop
// Size: 0x38(Inherited: 0x30)
struct UCommonStyleSheetTypeMarginTop : UCommonStyleSheetTypeBase
{
	float Top;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 


// Class CommonUI.CommonCustomNavigation
// Size: 0x320(Inherited: 0x310)
struct UCommonCustomNavigation : UBorder
{
	struct FDelegate OnNavigationEvent;  // 0x308 (0x308)


}; 
 
 


// Class CommonUI.CommonButtonBase
// Size: 0x14F0(Inherited: 0x2A0)
struct UCommonButtonBase : UCommonUserWidget
{
	int32_t MinWidth;  // 0x2A0 (0x2A0)
	int32_t MinHeight;  // 0x2A4 (0x2A4)
	UCommonButtonStyle* Style;  // 0x2A8 (0x2A8)
	char pad_688_1 : 7;  // 0x2B0 (0x2B0)
	bool bHideInputAction : 1;  // 0x2B0 (0x2B0)
	char pad_689[7];  // 0x2B1 (0x2B1)
	struct FSlateSound PressedSlateSoundOverride;  // 0x2B8 (0x2B8)
	struct FSlateSound HoveredSlateSoundOverride;  // 0x2D0 (0x2D0)
	struct FSlateSound SelectedPressedSlateSoundOverride;  // 0x2E8 (0x2E8)
	struct FSlateSound SelectedHoveredSlateSoundOverride;  // 0x300 (0x300)
	struct FSlateSound LockedPressedSlateSoundOverride;  // 0x318 (0x318)
	struct FSlateSound LockedHoveredSlateSoundOverride;  // 0x330 (0x330)
	char bApplyAlphaOnDisable : 1;  // 0x348 (0x348)
	char bLocked : 1;  // 0x348 (0x348)
	char bSelectable : 1;  // 0x348 (0x348)
	char bShouldSelectUponReceivingFocus : 1;  // 0x348 (0x348)
	char bInteractableWhenSelected : 1;  // 0x348 (0x348)
	char bToggleable : 1;  // 0x348 (0x348)
	char bTriggerClickedAfterSelection : 1;  // 0x348 (0x348)
	char bDisplayInputActionWhenNotInteractable : 1;  // 0x348 (0x348)
	char bHideInputActionWithKeyboard : 1;  // 0x349 (0x349)
	char bShouldUseFallbackDefaultInputAction : 1;  // 0x349 (0x349)
	char pad_841_1 : 6;  // 0x349 (0x349)
	enum class EButtonClickMethod ClickMethod;  // 0x34A (0x34A)
	enum class EButtonTouchMethod TouchMethod;  // 0x34B (0x34B)
	enum class EButtonPressMethod PressMethod;  // 0x34C (0x34C)
	char pad_845[3];  // 0x34D (0x34D)
	int32_t InputPriority;  // 0x350 (0x350)
	char pad_852[4];  // 0x354 (0x354)
	struct FDataTableRowHandle TriggeringInputAction;  // 0x358 (0x358)
	char pad_872[16];  // 0x368 (0x368)
	struct FMulticastInlineDelegate OnSelectedChangedBase;  // 0x378 (0x378)
	struct FMulticastInlineDelegate OnButtonBaseClicked;  // 0x388 (0x388)
	struct FMulticastInlineDelegate OnButtonBaseDoubleClicked;  // 0x398 (0x398)
	struct FMulticastInlineDelegate OnButtonBaseHovered;  // 0x3A8 (0x3A8)
	struct FMulticastInlineDelegate OnButtonBaseUnhovered;  // 0x3B8 (0x3B8)
	char pad_968[4];  // 0x3C8 (0x3C8)
	char pad_972_1 : 7;  // 0x3CC (0x3CC)
	bool bIsPersistentBinding : 1;  // 0x3CC (0x3CC)
	uint8_t InputModeOverride;  // 0x3CD (0x3CD)
	char pad_974[50];  // 0x3CE (0x3CE)
	struct UMaterialInstanceDynamic* SingleMaterialStyleMID;  // 0x400 (0x400)
	char pad_1032[8];  // 0x408 (0x408)
	struct FButtonStyle NormalStyle;  // 0x410 (0x410)
	struct FButtonStyle SelectedStyle;  // 0x800 (0x800)
	struct FButtonStyle DisabledStyle;  // 0xBF0 (0xBF0)
	struct FButtonStyle LockedStyle;  // 0xFE0 (0xFE0)
	char bStopDoubleClickPropagation : 1;  // 0x13D0 (0x13D0)
	char pad_5072_1 : 7;  // 0x13D0 (0x13D0)
	char pad_5073[280];  // 0x13D1 (0x13D1)
	struct UCommonActionWidget* InputActionWidget;  // 0x14E8 (0x14E8)


	void StopDoubleClickPropagation(); // Function CommonUI.CommonButtonBase.StopDoubleClickPropagation
	void SetTriggeringInputAction(struct FDataTableRowHandle& InputActionRow); // Function CommonUI.CommonButtonBase.SetTriggeringInputAction
	void SetTriggeredInputAction(struct FDataTableRowHandle& InputActionRow); // Function CommonUI.CommonButtonBase.SetTriggeredInputAction
	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function CommonUI.CommonButtonBase.SetTouchMethod
	void SetStyle(UCommonButtonStyle* InStyle); // Function CommonUI.CommonButtonBase.SetStyle
	void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction); // Function CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction
	void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus); // Function CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus
	void SetSelectedPressedSoundOverride(struct USoundBase* Sound); // Function CommonUI.CommonButtonBase.SetSelectedPressedSoundOverride
	void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast); // Function CommonUI.CommonButtonBase.SetSelectedInternal
	void SetSelectedHoveredSoundOverride(struct USoundBase* Sound); // Function CommonUI.CommonButtonBase.SetSelectedHoveredSoundOverride
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function CommonUI.CommonButtonBase.SetPressMethod
	void SetPressedSoundOverride(struct USoundBase* Sound); // Function CommonUI.CommonButtonBase.SetPressedSoundOverride
	void SetMinDimensions(int32_t InMinWidth, int32_t InMinHeight); // Function CommonUI.CommonButtonBase.SetMinDimensions
	void SetLockedPressedSoundOverride(struct USoundBase* Sound); // Function CommonUI.CommonButtonBase.SetLockedPressedSoundOverride
	void SetLockedHoveredSoundOverride(struct USoundBase* Sound); // Function CommonUI.CommonButtonBase.SetLockedHoveredSoundOverride
	void SetIsToggleable(bool bInIsToggleable); // Function CommonUI.CommonButtonBase.SetIsToggleable
	void SetIsSelected(bool InSelected, bool bGiveClickFeedback); // Function CommonUI.CommonButtonBase.SetIsSelected
	void SetIsSelectable(bool bInIsSelectable); // Function CommonUI.CommonButtonBase.SetIsSelectable
	void SetIsLocked(bool bInIsLocked); // Function CommonUI.CommonButtonBase.SetIsLocked
	void SetIsInteractionEnabled(bool bInIsInteractionEnabled); // Function CommonUI.CommonButtonBase.SetIsInteractionEnabled
	void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected); // Function CommonUI.CommonButtonBase.SetIsInteractableWhenSelected
	void SetIsFocusable(bool bInIsFocusable); // Function CommonUI.CommonButtonBase.SetIsFocusable
	void SetInputActionProgressMaterial(struct FSlateBrush& InProgressMaterialBrush, struct FName& InProgressMaterialParam); // Function CommonUI.CommonButtonBase.SetInputActionProgressMaterial
	void SetHoveredSoundOverride(struct USoundBase* Sound); // Function CommonUI.CommonButtonBase.SetHoveredSoundOverride
	void SetHideInputAction(bool bInHideInputAction); // Function CommonUI.CommonButtonBase.SetHideInputAction
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function CommonUI.CommonButtonBase.SetClickMethod
	void OnTriggeringInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function CommonUI.CommonButtonBase.OnTriggeringInputActionChanged
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function CommonUI.CommonButtonBase.OnTriggeredInputActionChanged
	void OnInputMethodChanged(uint8_t CurrentInputType); // Function CommonUI.CommonButtonBase.OnInputMethodChanged
	void OnCurrentTextStyleChanged(); // Function CommonUI.CommonButtonBase.OnCurrentTextStyleChanged
	void OnActionProgress(float HeldPercent); // Function CommonUI.CommonButtonBase.OnActionProgress
	void OnActionComplete(); // Function CommonUI.CommonButtonBase.OnActionComplete
	void NativeOnActionProgress(float HeldPercent); // Function CommonUI.CommonButtonBase.NativeOnActionProgress
	void NativeOnActionComplete(); // Function CommonUI.CommonButtonBase.NativeOnActionComplete
	bool IsPressed(); // Function CommonUI.CommonButtonBase.IsPressed
	bool IsInteractionEnabled(); // Function CommonUI.CommonButtonBase.IsInteractionEnabled
	void HandleTriggeringActionCommited(bool& bPassThrough); // Function CommonUI.CommonButtonBase.HandleTriggeringActionCommited
	void HandleFocusReceived(); // Function CommonUI.CommonButtonBase.HandleFocusReceived
	void HandleFocusLost(); // Function CommonUI.CommonButtonBase.HandleFocusLost
	void HandleButtonReleased(); // Function CommonUI.CommonButtonBase.HandleButtonReleased
	void HandleButtonPressed(); // Function CommonUI.CommonButtonBase.HandleButtonPressed
	void HandleButtonClicked(); // Function CommonUI.CommonButtonBase.HandleButtonClicked
	struct UCommonButtonStyle* GetStyle(); // Function CommonUI.CommonButtonBase.GetStyle
	struct UMaterialInstanceDynamic* GetSingleMaterialStyleMID(); // Function CommonUI.CommonButtonBase.GetSingleMaterialStyleMID
	bool GetShouldSelectUponReceivingFocus(); // Function CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus
	bool GetSelected(); // Function CommonUI.CommonButtonBase.GetSelected
	bool GetLocked(); // Function CommonUI.CommonButtonBase.GetLocked
	bool GetIsFocusable(); // Function CommonUI.CommonButtonBase.GetIsFocusable
	bool GetInputAction(struct FDataTableRowHandle& InputActionRow); // Function CommonUI.CommonButtonBase.GetInputAction
	UCommonTextStyle* GetCurrentTextStyleClass(); // Function CommonUI.CommonButtonBase.GetCurrentTextStyleClass
	struct UCommonTextStyle* GetCurrentTextStyle(); // Function CommonUI.CommonButtonBase.GetCurrentTextStyle
	void GetCurrentCustomPadding(struct FMargin& OutCustomPadding); // Function CommonUI.CommonButtonBase.GetCurrentCustomPadding
	void GetCurrentButtonPadding(struct FMargin& OutButtonPadding); // Function CommonUI.CommonButtonBase.GetCurrentButtonPadding
	void DisableButtonWithReason(struct FText& DisabledReason); // Function CommonUI.CommonButtonBase.DisableButtonWithReason
	void ClearSelection(); // Function CommonUI.CommonButtonBase.ClearSelection
	void BP_OnUnhovered(); // Function CommonUI.CommonButtonBase.BP_OnUnhovered
	void BP_OnSelected(); // Function CommonUI.CommonButtonBase.BP_OnSelected
	void BP_OnReleased(); // Function CommonUI.CommonButtonBase.BP_OnReleased
	void BP_OnPressed(); // Function CommonUI.CommonButtonBase.BP_OnPressed
	void BP_OnLockedChanged(bool bIsLocked); // Function CommonUI.CommonButtonBase.BP_OnLockedChanged
	void BP_OnLockDoubleClicked(); // Function CommonUI.CommonButtonBase.BP_OnLockDoubleClicked
	void BP_OnLockClicked(); // Function CommonUI.CommonButtonBase.BP_OnLockClicked
	void BP_OnInputMethodChanged(uint8_t CurrentInputType); // Function CommonUI.CommonButtonBase.BP_OnInputMethodChanged
	void BP_OnHovered(); // Function CommonUI.CommonButtonBase.BP_OnHovered
	void BP_OnFocusReceived(); // Function CommonUI.CommonButtonBase.BP_OnFocusReceived
	void BP_OnFocusLost(); // Function CommonUI.CommonButtonBase.BP_OnFocusLost
	void BP_OnEnabled(); // Function CommonUI.CommonButtonBase.BP_OnEnabled
	void BP_OnDoubleClicked(); // Function CommonUI.CommonButtonBase.BP_OnDoubleClicked
	void BP_OnDisabled(); // Function CommonUI.CommonButtonBase.BP_OnDisabled
	void BP_OnDeselected(); // Function CommonUI.CommonButtonBase.BP_OnDeselected
	void BP_OnClicked(); // Function CommonUI.CommonButtonBase.BP_OnClicked
}; 
 
 


// Class CommonUI.CommonStyleSheetTypeMarginBottom
// Size: 0x38(Inherited: 0x30)
struct UCommonStyleSheetTypeMarginBottom : UCommonStyleSheetTypeBase
{
	float Bottom;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 


// Class CommonUI.AnalogSlider
// Size: 0x720(Inherited: 0x700)
struct UAnalogSlider : USlider
{
	struct FMulticastInlineDelegate OnAnalogCapture;  // 0x700 (0x700)
	char pad_1808[16];  // 0x710 (0x710)


}; 
 
 


// Class CommonUI.CommonActionHandlerInterface
// Size: 0x28(Inherited: 0x28)
struct UCommonActionHandlerInterface : UInterface
{


}; 
 
 


// Class CommonUI.CommonActionWidget
// Size: 0x450(Inherited: 0x150)
struct UCommonActionWidget : UWidget
{
	struct FMulticastInlineDelegate OnInputMethodChanged;  // 0x150 (0x150)
	struct FSlateBrush ProgressMaterialBrush;  // 0x160 (0x160)
	struct FName ProgressMaterialParam;  // 0x230 (0x230)
	char pad_568[8];  // 0x238 (0x238)
	struct FSlateBrush IconRimBrush;  // 0x240 (0x240)
	struct TArray<struct FDataTableRowHandle> InputActions;  // 0x310 (0x310)
	char pad_800[8];  // 0x320 (0x320)
	struct UMaterialInstanceDynamic* ProgressDynamicMaterial;  // 0x328 (0x328)
	char pad_816[288];  // 0x330 (0x330)


	void SetInputActions(struct TArray<struct FDataTableRowHandle> NewInputActions); // Function CommonUI.CommonActionWidget.SetInputActions
	void SetInputAction(struct FDataTableRowHandle InputActionRow); // Function CommonUI.CommonActionWidget.SetInputAction
	void SetIconRimBrush(struct FSlateBrush InIconRimBrush); // Function CommonUI.CommonActionWidget.SetIconRimBrush
	void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
	bool IsHeldAction(); // Function CommonUI.CommonActionWidget.IsHeldAction
	struct FSlateBrush GetIcon(); // Function CommonUI.CommonActionWidget.GetIcon
	struct FText GetDisplayText(); // Function CommonUI.CommonActionWidget.GetDisplayText
}; 
 
 


// Class CommonUI.CommonButtonStyle
// Size: 0x7B0(Inherited: 0x28)
struct UCommonButtonStyle : UObject
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bSingleMaterial : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct FSlateBrush SingleMaterialBrush;  // 0x30 (0x30)
	struct FSlateBrush NormalBase;  // 0x100 (0x100)
	struct FSlateBrush NormalHovered;  // 0x1D0 (0x1D0)
	struct FSlateBrush NormalPressed;  // 0x2A0 (0x2A0)
	struct FSlateBrush SelectedBase;  // 0x370 (0x370)
	struct FSlateBrush SelectedHovered;  // 0x440 (0x440)
	struct FSlateBrush SelectedPressed;  // 0x510 (0x510)
	struct FSlateBrush Disabled;  // 0x5E0 (0x5E0)
	struct FMargin ButtonPadding;  // 0x6B0 (0x6B0)
	struct FMargin CustomPadding;  // 0x6C0 (0x6C0)
	int32_t MinWidth;  // 0x6D0 (0x6D0)
	int32_t MinHeight;  // 0x6D4 (0x6D4)
	UCommonTextStyle* NormalTextStyle;  // 0x6D8 (0x6D8)
	UCommonTextStyle* NormalHoveredTextStyle;  // 0x6E0 (0x6E0)
	UCommonTextStyle* SelectedTextStyle;  // 0x6E8 (0x6E8)
	UCommonTextStyle* SelectedHoveredTextStyle;  // 0x6F0 (0x6F0)
	UCommonTextStyle* DisabledTextStyle;  // 0x6F8 (0x6F8)
	struct FSlateSound PressedSlateSound;  // 0x700 (0x700)
	struct FCommonButtonStyleOptionalSlateSound SelectedPressedSlateSound;  // 0x718 (0x718)
	struct FCommonButtonStyleOptionalSlateSound LockedPressedSlateSound;  // 0x738 (0x738)
	struct FSlateSound HoveredSlateSound;  // 0x758 (0x758)
	struct FCommonButtonStyleOptionalSlateSound SelectedHoveredSlateSound;  // 0x770 (0x770)
	struct FCommonButtonStyleOptionalSlateSound LockedHoveredSlateSound;  // 0x790 (0x790)


	struct UCommonTextStyle* GetSelectedTextStyle(); // Function CommonUI.CommonButtonStyle.GetSelectedTextStyle
	void GetSelectedPressedBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush
	struct UCommonTextStyle* GetSelectedHoveredTextStyle(); // Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
	void GetSelectedHoveredBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
	void GetSelectedBaseBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush
	struct UCommonTextStyle* GetNormalTextStyle(); // Function CommonUI.CommonButtonStyle.GetNormalTextStyle
	void GetNormalPressedBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetNormalPressedBrush
	struct UCommonTextStyle* GetNormalHoveredTextStyle(); // Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
	void GetNormalHoveredBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush
	void GetNormalBaseBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetNormalBaseBrush
	void GetMaterialBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetMaterialBrush
	struct UCommonTextStyle* GetDisabledTextStyle(); // Function CommonUI.CommonButtonStyle.GetDisabledTextStyle
	void GetDisabledBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetDisabledBrush
	void GetCustomPadding(struct FMargin& OutCustomPadding); // Function CommonUI.CommonButtonStyle.GetCustomPadding
	void GetButtonPadding(struct FMargin& OutButtonPadding); // Function CommonUI.CommonButtonStyle.GetButtonPadding
}; 
 
 


// Class CommonUI.CommonUserWidget
// Size: 0x2A0(Inherited: 0x278)
struct UCommonUserWidget : UUserWidget
{
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool bDisplayInActionBar : 1;  // 0x278 (0x278)
	char pad_633_1 : 7;  // 0x279 (0x279)
	bool bConsumePointerInput : 1;  // 0x279 (0x279)
	char pad_634[38];  // 0x27A (0x27A)


	void SetConsumePointerInput(bool bInConsumePointerInput); // Function CommonUI.CommonUserWidget.SetConsumePointerInput
}; 
 
 


// Class CommonUI.CommonBorderStyle
// Size: 0x100(Inherited: 0x28)
struct UCommonBorderStyle : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	struct FSlateBrush Background;  // 0x30 (0x30)


	void GetBackgroundBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonBorderStyle.GetBackgroundBrush
}; 
 
 


// Class CommonUI.CommonActivatableWidget
// Size: 0x3C8(Inherited: 0x2A0)
struct UCommonActivatableWidget : UCommonUserWidget
{
	char pad_672_1 : 7;  // 0x2A0 (0x2A0)
	bool bIsBackHandler : 1;  // 0x2A0 (0x2A0)
	char pad_673_1 : 7;  // 0x2A1 (0x2A1)
	bool bIsBackActionDisplayedInActionBar : 1;  // 0x2A1 (0x2A1)
	char pad_674_1 : 7;  // 0x2A2 (0x2A2)
	bool bAutoActivate : 1;  // 0x2A2 (0x2A2)
	char pad_675_1 : 7;  // 0x2A3 (0x2A3)
	bool bSupportsActivationFocus : 1;  // 0x2A3 (0x2A3)
	char pad_676_1 : 7;  // 0x2A4 (0x2A4)
	bool bIsModal : 1;  // 0x2A4 (0x2A4)
	char pad_677_1 : 7;  // 0x2A5 (0x2A5)
	bool bAutoRestoreFocus : 1;  // 0x2A5 (0x2A5)
	char pad_678_1 : 7;  // 0x2A6 (0x2A6)
	bool bOverrideActionDomain : 1;  // 0x2A6 (0x2A6)
	char pad_679[1];  // 0x2A7 (0x2A7)
	struct TSoftObjectPtr<UCommonInputActionDomain> ActionDomainOverride;  // 0x2A8 (0x2A8)
	struct FMulticastInlineDelegate BP_OnWidgetActivated;  // 0x2D8 (0x2D8)
	struct FMulticastInlineDelegate BP_OnWidgetDeactivated;  // 0x2E8 (0x2E8)
	char pad_760_1 : 7;  // 0x2F8 (0x2F8)
	bool bIsActive : 1;  // 0x2F8 (0x2F8)
	char pad_761[7];  // 0x2F9 (0x2F9)
	struct TArray<struct TWeakObjectPtr<UCommonActivatableWidget>> VisibilityBoundWidgets;  // 0x300 (0x300)
	char pad_784[176];  // 0x310 (0x310)
	char pad_960_1 : 7;  // 0x3C0 (0x3C0)
	bool bSetVisibilityOnActivated : 1;  // 0x3C0 (0x3C0)
	uint8_t ActivatedVisibility;  // 0x3C1 (0x3C1)
	char pad_962_1 : 7;  // 0x3C2 (0x3C2)
	bool bSetVisibilityOnDeactivated : 1;  // 0x3C2 (0x3C2)
	uint8_t DeactivatedVisibility;  // 0x3C3 (0x3C3)
	char pad_964[4];  // 0x3C4 (0x3C4)


	void SetBindVisibilities(uint8_t OnActivatedVisibility, uint8_t OnDeactivatedVisibility, bool bInAllActive); // Function CommonUI.CommonActivatableWidget.SetBindVisibilities
	bool IsActivated(); // Function CommonUI.CommonActivatableWidget.IsActivated
	struct UWidget* GetDesiredFocusTarget(); // Function CommonUI.CommonActivatableWidget.GetDesiredFocusTarget
	void DeactivateWidget(); // Function CommonUI.CommonActivatableWidget.DeactivateWidget
	bool BP_OnHandleBackAction(); // Function CommonUI.CommonActivatableWidget.BP_OnHandleBackAction
	void BP_OnDeactivated(); // Function CommonUI.CommonActivatableWidget.BP_OnDeactivated
	void BP_OnActivated(); // Function CommonUI.CommonActivatableWidget.BP_OnActivated
	struct UWidget* BP_GetDesiredFocusTarget(); // Function CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget
	void BindVisibilityToActivation(struct UCommonActivatableWidget* ActivatableWidget); // Function CommonUI.CommonActivatableWidget.BindVisibilityToActivation
	void ActivateWidget(); // Function CommonUI.CommonActivatableWidget.ActivateWidget
}; 
 
 


// Class CommonUI.CommonAnimatedSwitcher
// Size: 0x1F0(Inherited: 0x180)
struct UCommonAnimatedSwitcher : UWidgetSwitcher
{
	char pad_384[48];  // 0x180 (0x180)
	uint8_t TransitionType;  // 0x1B0 (0x1B0)
	uint8_t TransitionCurveType;  // 0x1B1 (0x1B1)
	char pad_434[2];  // 0x1B2 (0x1B2)
	float TransitionDuration;  // 0x1B4 (0x1B4)
	char pad_440[56];  // 0x1B8 (0x1B8)


	void SetDisableTransitionAnimation(bool bDisableAnimation); // Function CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation
	bool IsTransitionPlaying(); // Function CommonUI.CommonAnimatedSwitcher.IsTransitionPlaying
	bool IsCurrentlySwitching(); // Function CommonUI.CommonAnimatedSwitcher.IsCurrentlySwitching
	bool HasWidgets(); // Function CommonUI.CommonAnimatedSwitcher.HasWidgets
	void ActivatePreviousWidget(bool bCanWrap); // Function CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget
	void ActivateNextWidget(bool bCanWrap); // Function CommonUI.CommonAnimatedSwitcher.ActivateNextWidget
}; 
 
 


// Class CommonUI.CommonGameViewportClient
// Size: 0x3E0(Inherited: 0x3A0)
struct UCommonGameViewportClient : UGameViewportClient
{
	char pad_928[64];  // 0x3A0 (0x3A0)


}; 
 
 


// Class CommonUI.CommonActivatableWidgetSwitcher
// Size: 0x200(Inherited: 0x1F0)
struct UCommonActivatableWidgetSwitcher : UCommonAnimatedSwitcher
{
	char pad_496[16];  // 0x1F0 (0x1F0)


}; 
 
 


// Class CommonUI.CommonWidgetCarousel
// Size: 0x1B0(Inherited: 0x168)
struct UCommonWidgetCarousel : UPanelWidget
{
	int32_t ActiveWidgetIndex;  // 0x0 (0x0)
	char pad_364[4];  // 0x16C (0x16C)
	struct FMulticastInlineDelegate OnCurrentPageIndexChanged;  // 0x0 (0x0)
	char pad_384[48];  // 0x180 (0x180)


	void SetActiveWidgetIndex(int32_t Index); // Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
	void SetActiveWidget(struct UWidget* Widget); // Function CommonUI.CommonWidgetCarousel.SetActiveWidget
	void PreviousPage(); // Function CommonUI.CommonWidgetCarousel.PreviousPage
	void NextPage(); // Function CommonUI.CommonWidgetCarousel.NextPage
	struct UWidget* GetWidgetAtIndex(int32_t Index); // Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
	int32_t GetActiveWidgetIndex(); // Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
	void EndAutoScrolling(); // Function CommonUI.CommonWidgetCarousel.EndAutoScrolling
	void BeginAutoScrolling(float ScrollInterval); // Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling
}; 
 
 


// Class CommonUI.CommonNumericTextBlock
// Size: 0x410(Inherited: 0x370)
struct UCommonNumericTextBlock : UCommonTextBlock
{
	struct FMulticastInlineDelegate OnInterpolationStartedEvent;  // 0x368 (0x368)
	struct FMulticastInlineDelegate OnInterpolationUpdatedEvent;  // 0x378 (0x378)
	struct FMulticastInlineDelegate OnOutroEvent;  // 0x388 (0x388)
	struct FMulticastInlineDelegate OnInterpolationEndedEvent;  // 0x398 (0x398)
	float CurrentNumericValue;  // 0x3A8 (0x3A8)
	uint8_t NumericType;  // 0x3AC (0x3AC)
	struct FCommonNumberFormattingOptions FormattingSpecification;  // 0x3B0 (0x3B0)
	float EaseOutInterpolationExponent;  // 0x3C4 (0x3C4)
	float InterpolationUpdateInterval;  // 0x3C8 (0x3C8)
	float PostInterpolationShrinkDuration;  // 0x3CC (0x3CC)
	char pad_981_1 : 7;  // 0x3D5 (0x3D5)
	bool PerformSizeInterpolation : 1;  // 0x3D0 (0x3D0)
	char pad_982_1 : 7;  // 0x3D6 (0x3D6)
	bool IsPercentage : 1;  // 0x3D1 (0x3D1)
	char pad_983[57];  // 0x3D7 (0x3D7)


	void SetNumericType(uint8_t InNumericType); // Function CommonUI.CommonNumericTextBlock.SetNumericType
	void SetCurrentValue(float NewValue); // Function CommonUI.CommonNumericTextBlock.SetCurrentValue
	void OnOutro__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock); // DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
	void OnInterpolationUpdated__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue); // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature
	void OnInterpolationStarted__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock); // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature
	void OnInterpolationEnded__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted); // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
	bool IsInterpolatingNumericValue(); // Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
	void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset); // Function CommonUI.CommonNumericTextBlock.InterpolateToValue
	float GetTargetValue(); // Function CommonUI.CommonNumericTextBlock.GetTargetValue
}; 
 
 


// Class CommonUI.CommonDateTimeTextBlock
// Size: 0x3C0(Inherited: 0x370)
struct UCommonDateTimeTextBlock : UCommonTextBlock
{
	char pad_880[80];  // 0x370 (0x370)


	void SetTimespanValue(struct FTimespan InTimespan); // Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue
	void SetDateTimeValue(struct FDateTime InDateTime, bool bShowAsCountdown, float InRefreshDelay); // Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
	void SetCountDownCompletionText(struct FText InCompletionText); // Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText
	struct FDateTime GetDateTime(); // Function CommonUI.CommonDateTimeTextBlock.GetDateTime
}; 
 
 


// Class CommonUI.CommonBorder
// Size: 0x330(Inherited: 0x310)
struct UCommonBorder : UBorder
{
	UCommonBorderStyle* Style;  // 0x308 (0x308)
	char pad_792_1 : 7;  // 0x318 (0x318)
	bool bReducePaddingBySafezone : 1;  // 0x310 (0x310)
	struct FMargin MinimumPadding;  // 0x314 (0x314)
	char pad_809[7];  // 0x329 (0x329)


	void SetStyle(UCommonBorderStyle* InStyle); // Function CommonUI.CommonBorder.SetStyle
}; 
 
 


// Class CommonUI.CommonRichTextBlock
// Size: 0x8B0(Inherited: 0x870)
struct UCommonRichTextBlock : URichTextBlock
{
	uint8_t InlineIconDisplayMode;  // 0x870 (0x870)
	char pad_2161_1 : 7;  // 0x871 (0x871)
	bool bTintInlineIcon : 1;  // 0x871 (0x871)
	char pad_2162[6];  // 0x872 (0x872)
	UCommonTextStyle* DefaultTextStyleOverrideClass;  // 0x878 (0x878)
	float MobileTextBlockScale;  // 0x880 (0x880)
	char pad_2180[4];  // 0x884 (0x884)
	UCommonTextScrollStyle* ScrollStyle;  // 0x888 (0x888)
	char pad_2192_1 : 7;  // 0x890 (0x890)
	bool bIsScrollingEnabled : 1;  // 0x890 (0x890)
	char pad_2193_1 : 7;  // 0x891 (0x891)
	bool bDisplayAllCaps : 1;  // 0x891 (0x891)
	char pad_2194_1 : 7;  // 0x892 (0x892)
	bool bAutoCollapseWithEmptyText : 1;  // 0x892 (0x892)
	char pad_2195[29];  // 0x893 (0x893)


	void SetScrollingEnabled(bool bInIsScrollingEnabled); // Function CommonUI.CommonRichTextBlock.SetScrollingEnabled
}; 
 
 


// Class CommonUI.CommonTextBlock
// Size: 0x370(Inherited: 0x340)
struct UCommonTextBlock : UTextBlock
{
	UCommonTextStyle* Style;  // 0x338 (0x338)
	UCommonTextScrollStyle* ScrollStyle;  // 0x340 (0x340)
	struct UCommonStyleSheet* StyleSheet;  // 0x348 (0x348)
	char pad_856_1 : 7;  // 0x358 (0x358)
	bool bIsScrollingEnabled : 1;  // 0x350 (0x350)
	char pad_857_1 : 7;  // 0x359 (0x359)
	bool bDisplayAllCaps : 1;  // 0x351 (0x351)
	char pad_858_1 : 7;  // 0x35A (0x35A)
	bool bAutoCollapseWithEmptyText : 1;  // 0x352 (0x352)
	float MobileFontSizeMultiplier;  // 0x354 (0x354)
	char pad_863[17];  // 0x35F (0x35F)


	void SetWrapTextWidth(int32_t InWrapTextAt); // Function CommonUI.CommonTextBlock.SetWrapTextWidth
	void SetTextCase(bool bUseAllCaps); // Function CommonUI.CommonTextBlock.SetTextCase
	void SetStyle(UCommonTextStyle* InStyle); // Function CommonUI.CommonTextBlock.SetStyle
	void SetScrollingEnabled(bool bInIsScrollingEnabled); // Function CommonUI.CommonTextBlock.SetScrollingEnabled
	void SetMargin(struct FMargin& InMargin); // Function CommonUI.CommonTextBlock.SetMargin
	void SetLineHeightPercentage(float InLineHeightPercentage); // Function CommonUI.CommonTextBlock.SetLineHeightPercentage
	void ResetScrollState(); // Function CommonUI.CommonTextBlock.ResetScrollState
	struct FMargin GetMargin(); // Function CommonUI.CommonTextBlock.GetMargin
}; 
 
 


// Class CommonUI.UCommonVisibilityWidgetBase
// Size: 0x380(Inherited: 0x330)
struct UUCommonVisibilityWidgetBase : UCommonBorder
{
	struct TMap<struct FName, bool> VisibilityControls;  // 0x328 (0x328)
	char pad_896_1 : 7;  // 0x380 (0x380)
	bool bShowForGamepad : 1;  // 0x378 (0x378)
	char pad_897_1 : 7;  // 0x381 (0x381)
	bool bShowForMouseAndKeyboard : 1;  // 0x379 (0x379)
	char pad_898_1 : 7;  // 0x382 (0x382)
	bool bShowForTouch : 1;  // 0x37A (0x37A)
	uint8_t VisibleType;  // 0x37B (0x37B)
	uint8_t HiddenType;  // 0x37C (0x37C)


	struct TArray<struct FName> GetRegisteredPlatforms(); // Function CommonUI.UCommonVisibilityWidgetBase.GetRegisteredPlatforms
}; 
 
 


// Class CommonUI.CommonHardwareVisibilityBorder
// Size: 0x380(Inherited: 0x330)
struct UCommonHardwareVisibilityBorder : UCommonBorder
{
	struct FGameplayTagQuery VisibilityQuery;  // 0x328 (0x328)
	uint8_t VisibleType;  // 0x370 (0x370)
	uint8_t HiddenType;  // 0x371 (0x371)
	char pad_890[6];  // 0x37A (0x37A)


}; 
 
 


// Class CommonUI.CommonLazyWidget
// Size: 0x2B0(Inherited: 0x150)
struct UCommonLazyWidget : UWidget
{
	struct FSlateBrush LoadingBackgroundBrush;  // 0x150 (0x150)
	struct UUserWidget* Content;  // 0x220 (0x220)
	char pad_552[48];  // 0x228 (0x228)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged;  // 0x258 (0x258)
	char pad_616[72];  // 0x268 (0x268)


	void SetLazyContent(struct TSoftClassPtr<UObject> SoftWidget); // Function CommonUI.CommonLazyWidget.SetLazyContent
	bool IsLoading(); // Function CommonUI.CommonLazyWidget.IsLoading
	struct UUserWidget* GetContent(); // Function CommonUI.CommonLazyWidget.GetContent
}; 
 
 


// Class CommonUI.CommonBoundActionButton
// Size: 0x1510(Inherited: 0x14F0)
struct UCommonBoundActionButton : UCommonButtonBase
{
	char pad_5360[8];  // 0x14F0 (0x14F0)
	struct UCommonTextBlock* Text_ActionName;  // 0x14F8 (0x14F8)
	char pad_5376[16];  // 0x1500 (0x1500)


	void OnUpdateInputAction(); // Function CommonUI.CommonBoundActionButton.OnUpdateInputAction
}; 
 
 


// Class CommonUI.CommonListView
// Size: 0xC20(Inherited: 0xC20)
struct UCommonListView : UListView
{


	void SetEntrySpacing(float InEntrySpacing); // Function CommonUI.CommonListView.SetEntrySpacing
}; 
 
 


// Class CommonUI.LoadGuardSlot
// Size: 0x60(Inherited: 0x38)
struct ULoadGuardSlot : UPanelSlot
{
	struct FMargin Padding;  // 0x38 (0x38)
	enum class EHorizontalAlignment HorizontalAlignment;  // 0x48 (0x48)
	enum class EVerticalAlignment VerticalAlignment;  // 0x49 (0x49)
	char pad_74[22];  // 0x4A (0x4A)


	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function CommonUI.LoadGuardSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function CommonUI.LoadGuardSlot.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function CommonUI.LoadGuardSlot.SetHorizontalAlignment
}; 
 
 


// Class CommonUI.CommonPoolableWidgetInterface
// Size: 0x28(Inherited: 0x28)
struct UCommonPoolableWidgetInterface : UInterface
{


	void OnReleaseToPool(); // Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool
	void OnAcquireFromPool(); // Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool
}; 
 
 


// Class CommonUI.CommonRotator
// Size: 0x1550(Inherited: 0x14F0)
struct UCommonRotator : UCommonButtonBase
{
	char pad_5360[16];  // 0x14F0 (0x14F0)
	struct FMulticastInlineDelegate OnRotated;  // 0x1500 (0x1500)
	char pad_5392[24];  // 0x1510 (0x1510)
	struct UCommonTextBlock* MyText;  // 0x1528 (0x1528)
	char pad_5424[32];  // 0x1530 (0x1530)


	void ShiftTextRight(); // Function CommonUI.CommonRotator.ShiftTextRight
	void ShiftTextLeft(); // Function CommonUI.CommonRotator.ShiftTextLeft
	void SetSelectedItem(int32_t InValue); // Function CommonUI.CommonRotator.SetSelectedItem
	void PopulateTextLabels(struct TArray<struct FText> Labels); // Function CommonUI.CommonRotator.PopulateTextLabels
	struct FText GetSelectedText(); // Function CommonUI.CommonRotator.GetSelectedText
	int32_t GetSelectedIndex(); // Function CommonUI.CommonRotator.GetSelectedIndex
	void BP_OnOptionsPopulated(int32_t Count); // Function CommonUI.CommonRotator.BP_OnOptionsPopulated
	void BP_OnOptionSelected(int32_t Index); // Function CommonUI.CommonRotator.BP_OnOptionSelected
}; 
 
 


// Class CommonUI.CommonTabListWidgetBase
// Size: 0x388(Inherited: 0x2A0)
struct UCommonTabListWidgetBase : UCommonUserWidget
{
	struct FMulticastInlineDelegate OnTabSelected;  // 0x2A0 (0x2A0)
	struct FMulticastInlineDelegate OnTabButtonCreation;  // 0x2B0 (0x2B0)
	struct FMulticastInlineDelegate OnTabButtonRemoval;  // 0x2C0 (0x2C0)
	struct FMulticastInlineDelegate OnTabListRebuilt;  // 0x2D0 (0x2D0)
	struct FDataTableRowHandle NextTabInputActionData;  // 0x2E0 (0x2E0)
	struct FDataTableRowHandle PreviousTabInputActionData;  // 0x2F0 (0x2F0)
	char pad_768_1 : 7;  // 0x300 (0x300)
	bool bAutoListenForInput : 1;  // 0x300 (0x300)
	char pad_769_1 : 7;  // 0x301 (0x301)
	bool bDeferRebuildingTabList : 1;  // 0x301 (0x301)
	char pad_770[2];  // 0x302 (0x302)
	struct TWeakObjectPtr<UCommonAnimatedSwitcher> LinkedSwitcher;  // 0x304 (0x304)
	char pad_780[4];  // 0x30C (0x30C)
	struct UCommonButtonGroupBase* TabButtonGroup;  // 0x310 (0x310)
	char pad_792[8];  // 0x318 (0x318)
	struct TMap<struct FName, struct FCommonRegisteredTabInfo> RegisteredTabsByID;  // 0x320 (0x320)
	char pad_880[24];  // 0x370 (0x370)


	void SetTabVisibility(struct FName TabNameID, uint8_t NewVisibility); // Function CommonUI.CommonTabListWidgetBase.SetTabVisibility
	void SetTabInteractionEnabled(struct FName TabNameID, bool bEnable); // Function CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled
	void SetTabEnabled(struct FName TabNameID, bool bEnable); // Function CommonUI.CommonTabListWidgetBase.SetTabEnabled
	void SetListeningForInput(bool bShouldListen); // Function CommonUI.CommonTabListWidgetBase.SetListeningForInput
	void SetLinkedSwitcher(struct UCommonAnimatedSwitcher* CommonSwitcher); // Function CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher
	bool SelectTabByID(struct FName TabNameID, bool bSuppressClickFeedback); // Function CommonUI.CommonTabListWidgetBase.SelectTabByID
	bool RemoveTab(struct FName TabNameID); // Function CommonUI.CommonTabListWidgetBase.RemoveTab
	void RemoveAllTabs(); // Function CommonUI.CommonTabListWidgetBase.RemoveAllTabs
	bool RegisterTab(struct FName TabNameID, UCommonButtonBase* ButtonWidgetType, struct UWidget* ContentWidget, int32_t TabIndex); // Function CommonUI.CommonTabListWidgetBase.RegisterTab
	void OnTabSelected__DelegateSignature(struct FName TabId); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature
	void OnTabListRebuilt__DelegateSignature(); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabListRebuilt__DelegateSignature
	void OnTabButtonRemoval__DelegateSignature(struct FName TabId, struct UCommonButtonBase* TabButton); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature
	void OnTabButtonCreation__DelegateSignature(struct FName TabId, struct UCommonButtonBase* TabButton); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature
	void HandleTabRemoval(struct FName TabNameID, struct UCommonButtonBase* TabButton); // Function CommonUI.CommonTabListWidgetBase.HandleTabRemoval
	void HandleTabCreation(struct FName TabNameID, struct UCommonButtonBase* TabButton); // Function CommonUI.CommonTabListWidgetBase.HandleTabCreation
	void HandleTabButtonSelected(struct UCommonButtonBase* SelectedTabButton, int32_t ButtonIndex); // Function CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected
	void HandlePreviousTabInputAction(bool& bPassThrough); // Function CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction
	void HandlePreLinkedSwitcherChanged_BP(); // Function CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP
	void HandlePostLinkedSwitcherChanged_BP(); // Function CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP
	void HandleNextTabInputAction(bool& bPassThrough); // Function CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction
	struct FName GetTabIdAtIndex(int32_t Index); // Function CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex
	int32_t GetTabCount(); // Function CommonUI.CommonTabListWidgetBase.GetTabCount
	struct UCommonButtonBase* GetTabButtonBaseByID(struct FName TabNameID); // Function CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID
	struct FName GetSelectedTabId(); // Function CommonUI.CommonTabListWidgetBase.GetSelectedTabId
	struct UCommonAnimatedSwitcher* GetLinkedSwitcher(); // Function CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher
	struct FName GetActiveTab(); // Function CommonUI.CommonTabListWidgetBase.GetActiveTab
	void DisableTabWithReason(struct FName TabNameID, struct FText& Reason); // Function CommonUI.CommonTabListWidgetBase.DisableTabWithReason
}; 
 
 


// Class CommonUI.CommonUIEditorSettings
// Size: 0xC0(Inherited: 0x28)
struct UCommonUIEditorSettings : UObject
{
	struct TSoftClassPtr<UObject> TemplateTextStyle;  // 0x28 (0x28)
	struct TSoftClassPtr<UObject> TemplateButtonStyle;  // 0x58 (0x58)
	struct TSoftClassPtr<UObject> TemplateBorderStyle;  // 0x88 (0x88)
	char pad_184[8];  // 0xB8 (0xB8)


}; 
 
 


// Class CommonUI.CommonTextStyle
// Size: 0x1B0(Inherited: 0x28)
struct UCommonTextStyle : UObject
{
	struct FSlateFontInfo Font;  // 0x28 (0x28)
	struct FLinearColor Color;  // 0x80 (0x80)
	char pad_144_1 : 7;  // 0x90 (0x90)
	bool bUsesDropShadow : 1;  // 0x90 (0x90)
	char pad_145[7];  // 0x91 (0x91)
	struct FVector2D ShadowOffset;  // 0x98 (0x98)
	struct FLinearColor ShadowColor;  // 0xA8 (0xA8)
	struct FMargin Margin;  // 0xB8 (0xB8)
	char pad_200[8];  // 0xC8 (0xC8)
	struct FSlateBrush StrikeBrush;  // 0xD0 (0xD0)
	float LineHeightPercentage;  // 0x1A0 (0x1A0)
	char pad_420[12];  // 0x1A4 (0x1A4)


	void GetStrikeBrush(struct FSlateBrush& OutStrikeBrush); // Function CommonUI.CommonTextStyle.GetStrikeBrush
	void GetShadowOffset(struct FVector2D& OutShadowOffset); // Function CommonUI.CommonTextStyle.GetShadowOffset
	void GetShadowColor(struct FLinearColor& OutColor); // Function CommonUI.CommonTextStyle.GetShadowColor
	void GetMargin(struct FMargin& OutMargin); // Function CommonUI.CommonTextStyle.GetMargin
	float GetLineHeightPercentage(); // Function CommonUI.CommonTextStyle.GetLineHeightPercentage
	void GetFont(struct FSlateFontInfo& OutFont); // Function CommonUI.CommonTextStyle.GetFont
	void GetColor(struct FLinearColor& OutColor); // Function CommonUI.CommonTextStyle.GetColor
}; 
 
 


// Class CommonUI.CommonTextScrollStyle
// Size: 0x40(Inherited: 0x28)
struct UCommonTextScrollStyle : UObject
{
	float Speed;  // 0x28 (0x28)
	float StartDelay;  // 0x2C (0x2C)
	float EndDelay;  // 0x30 (0x30)
	float FadeInDelay;  // 0x34 (0x34)
	float FadeOutDelay;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 


// Class CommonUI.CommonUILibrary
// Size: 0x28(Inherited: 0x28)
struct UCommonUILibrary : UBlueprintFunctionLibrary
{


	struct UWidget* FindParentWidgetOfType(struct UWidget* StartingWidget, UWidget* Type); // Function CommonUI.CommonUILibrary.FindParentWidgetOfType
}; 
 
 


// Class CommonUI.CommonUIActionRouterBase
// Size: 0x158(Inherited: 0x30)
struct UCommonUIActionRouterBase : ULocalPlayerSubsystem
{
	char pad_48[296];  // 0x30 (0x30)


}; 
 
 


// Class CommonUI.CommonVisibilitySwitcherSlot
// Size: 0x68(Inherited: 0x58)
struct UCommonVisibilitySwitcherSlot : UOverlaySlot
{
	char pad_88[16];  // 0x58 (0x58)


}; 
 
 


// Class CommonUI.CommonVisibilitySwitcher
// Size: 0x1A0(Inherited: 0x178)
struct UCommonVisibilitySwitcher : UOverlay
{
	uint8_t ShownVisibility;  // 0x178 (0x178)
	char pad_377[3];  // 0x179 (0x179)
	int32_t ActiveWidgetIndex;  // 0x17C (0x17C)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool bAutoActivateSlot : 1;  // 0x180 (0x180)
	char pad_385_1 : 7;  // 0x181 (0x181)
	bool bActivateFirstSlotOnAdding : 1;  // 0x181 (0x181)
	char pad_386[30];  // 0x182 (0x182)


	void SetActiveWidgetIndex(int32_t Index); // Function CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex
	void SetActiveWidget(struct UWidget* Widget); // Function CommonUI.CommonVisibilitySwitcher.SetActiveWidget
	void IncrementActiveWidgetIndex(bool bAllowWrapping); // Function CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex
	int32_t GetActiveWidgetIndex(); // Function CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex
	struct UWidget* GetActiveWidget(); // Function CommonUI.CommonVisibilitySwitcher.GetActiveWidget
	void DecrementActiveWidgetIndex(bool bAllowWrapping); // Function CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex
	void DeactivateVisibleSlot(); // Function CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot
	void ActivateVisibleSlot(); // Function CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot
}; 
 
 


// Class CommonUI.CommonUIRichTextData
// Size: 0x30(Inherited: 0x28)
struct UCommonUIRichTextData : UObject
{
	struct UDataTable* InlineIconSet;  // 0x28 (0x28)


}; 
 
 


// Class CommonUI.CommonUISettings
// Size: 0x1F0(Inherited: 0x28)
struct UCommonUISettings : UObject
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bAutoLoadData : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct TSoftObjectPtr<UObject> DefaultImageResourceObject;  // 0x30 (0x30)
	struct TSoftObjectPtr<UMaterialInterface> DefaultThrobberMaterial;  // 0x60 (0x60)
	struct TSoftClassPtr<UObject> DefaultRichTextDataClass;  // 0x90 (0x90)
	struct TArray<struct FGameplayTag> PlatformTraits;  // 0xC0 (0xC0)
	char pad_208[40];  // 0xD0 (0xD0)
	struct UObject* DefaultImageResourceObjectInstance;  // 0xF8 (0xF8)
	struct UMaterialInterface* DefaultThrobberMaterialInstance;  // 0x100 (0x100)
	char pad_264[8];  // 0x108 (0x108)
	struct FSlateBrush DefaultThrobberBrush;  // 0x110 (0x110)
	struct UCommonUIRichTextData* RichTextDataInstance;  // 0x1E0 (0x1E0)
	char pad_488[8];  // 0x1E8 (0x1E8)


}; 
 
 


// Class CommonUI.CommonUIVisibilitySubsystem
// Size: 0x88(Inherited: 0x30)
struct UCommonUIVisibilitySubsystem : ULocalPlayerSubsystem
{
	char pad_48[88];  // 0x30 (0x30)


}; 
 
 


// Class CommonUI.CommonUISubsystemBase
// Size: 0x40(Inherited: 0x30)
struct UCommonUISubsystemBase : UGameInstanceSubsystem
{
	char pad_48[16];  // 0x30 (0x30)


	struct FSlateBrush GetInputActionButtonIcon(struct FDataTableRowHandle& InputActionRowHandle, uint8_t InputType, struct FName& GamepadName); // Function CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon
}; 
 
 


// Class CommonUI.CommonVideoPlayer
// Size: 0x2B0(Inherited: 0x150)
struct UCommonVideoPlayer : UWidget
{
	struct UMediaSource* Video;  // 0x150 (0x150)
	struct UMediaPlayer* MediaPlayer;  // 0x158 (0x158)
	struct UMediaTexture* MediaTexture;  // 0x160 (0x160)
	struct UMaterial* VideoMaterial;  // 0x168 (0x168)
	struct UMediaSoundComponent* SoundComponent;  // 0x170 (0x170)
	char pad_376[8];  // 0x178 (0x178)
	struct FSlateBrush VideoBrush;  // 0x180 (0x180)
	char pad_592[96];  // 0x250 (0x250)


}; 
 
 


// Class CommonUI.CommonInputActionDataProcessor
// Size: 0x28(Inherited: 0x28)
struct UCommonInputActionDataProcessor : UObject
{


}; 
 
 


// Class CommonUI.CommonVisualAttachment
// Size: 0x1C0(Inherited: 0x1A0)
struct UCommonVisualAttachment : USizeBox
{
	struct FVector2D ContentAnchor;  // 0x1A0 (0x1A0)
	char pad_432[16];  // 0x1B0 (0x1B0)


}; 
 
 


// Class CommonUI.CommonWidgetCarouselNavBar
// Size: 0x198(Inherited: 0x150)
struct UCommonWidgetCarouselNavBar : UWidget
{
	UCommonButtonBase* ButtonWidgetType;  // 0x150 (0x150)
	struct FMargin ButtonPadding;  // 0x158 (0x158)
	char pad_360[16];  // 0x168 (0x168)
	struct UCommonWidgetCarousel* LinkedCarousel;  // 0x178 (0x178)
	struct UCommonButtonGroupBase* ButtonGroup;  // 0x180 (0x180)
	struct TArray<struct UCommonButtonBase*> Buttons;  // 0x188 (0x188)


	void SetLinkedCarousel(struct UCommonWidgetCarousel* CommonCarousel); // Function CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel
	void HandlePageChanged(struct UCommonWidgetCarousel* CommonCarousel, int32_t PageIndex); // Function CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged
	void HandleButtonClicked(struct UCommonButtonBase* AssociatedButton, int32_t ButtonIndex); // Function CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked
}; 
 
 


// Class CommonUI.CommonWidgetGroupBase
// Size: 0x28(Inherited: 0x28)
struct UCommonWidgetGroupBase : UObject
{


	void RemoveWidget(struct UWidget* InWidget); // Function CommonUI.CommonWidgetGroupBase.RemoveWidget
	void RemoveAll(); // Function CommonUI.CommonWidgetGroupBase.RemoveAll
	void AddWidget(struct UWidget* InWidget); // Function CommonUI.CommonWidgetGroupBase.AddWidget
}; 
 
 


// Class CommonUI.CommonButtonGroupBase
// Size: 0x110(Inherited: 0x28)
struct UCommonButtonGroupBase : UCommonWidgetGroupBase
{
	struct FMulticastInlineDelegate OnSelectedButtonBaseChanged;  // 0x28 (0x28)
	char pad_56[24];  // 0x38 (0x38)
	struct FMulticastInlineDelegate OnHoveredButtonBaseChanged;  // 0x50 (0x50)
	char pad_96[24];  // 0x60 (0x60)
	struct FMulticastInlineDelegate OnButtonBaseClicked;  // 0x78 (0x78)
	char pad_136[24];  // 0x88 (0x88)
	struct FMulticastInlineDelegate OnButtonBaseDoubleClicked;  // 0xA0 (0xA0)
	char pad_176[24];  // 0xB0 (0xB0)
	struct FMulticastInlineDelegate OnSelectionCleared;  // 0xC8 (0xC8)
	char pad_216[24];  // 0xD8 (0xD8)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool bSelectionRequired : 1;  // 0xF0 (0xF0)
	char pad_241[31];  // 0xF1 (0xF1)


	void SetSelectionRequired(bool bRequireSelection); // Function CommonUI.CommonButtonGroupBase.SetSelectionRequired
	void SelectPreviousButton(bool bAllowWrap); // Function CommonUI.CommonButtonGroupBase.SelectPreviousButton
	void SelectNextButton(bool bAllowWrap); // Function CommonUI.CommonButtonGroupBase.SelectNextButton
	void SelectButtonAtIndex(int32_t ButtonIndex, bool bAllowSound); // Function CommonUI.CommonButtonGroupBase.SelectButtonAtIndex
	void OnSelectionStateChangedBase(struct UCommonButtonBase* BaseButton, bool bIsSelected); // Function CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase
	void OnHandleButtonBaseDoubleClicked(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked
	void OnHandleButtonBaseClicked(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked
	void OnButtonBaseUnhovered(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered
	void OnButtonBaseHovered(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnButtonBaseHovered
	bool HasAnyButtons(); // Function CommonUI.CommonButtonGroupBase.HasAnyButtons
	int32_t GetSelectedButtonIndex(); // Function CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex
	struct UCommonButtonBase* GetSelectedButtonBase(); // Function CommonUI.CommonButtonGroupBase.GetSelectedButtonBase
	int32_t GetHoveredButtonIndex(); // Function CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex
	int32_t GetButtonCount(); // Function CommonUI.CommonButtonGroupBase.GetButtonCount
	struct UCommonButtonBase* GetButtonBaseAtIndex(int32_t Index); // Function CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex
	int32_t FindButtonIndex(struct UCommonButtonBase* ButtonToFind); // Function CommonUI.CommonButtonGroupBase.FindButtonIndex
	void DeselectAll(); // Function CommonUI.CommonButtonGroupBase.DeselectAll
}; 
 
 


// Class CommonUI.CommonBoundActionBar
// Size: 0x240(Inherited: 0x230)
struct UCommonBoundActionBar : UDynamicEntryBoxBase
{
	UCommonButtonBase* ActionButtonClass;  // 0x230 (0x230)
	char pad_568_1 : 7;  // 0x238 (0x238)
	bool bDisplayOwningPlayerActionsOnly : 1;  // 0x238 (0x238)
	char pad_569_1 : 7;  // 0x239 (0x239)
	bool bIgnoreDuplicateActions : 1;  // 0x239 (0x239)
	char pad_570[6];  // 0x23A (0x23A)


	void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions); // Function CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly
}; 
 
 


// Class CommonUI.CommonUIInputSettings
// Size: 0x78(Inherited: 0x28)
struct UCommonUIInputSettings : UObject
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bLinkCursorToGamepadFocus : 1;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	int32_t UIActionProcessingPriority;  // 0x2C (0x2C)
	struct TArray<struct FUIInputAction> InputActions;  // 0x30 (0x30)
	struct TArray<struct FUIInputAction> ActionOverrides;  // 0x40 (0x40)
	struct FCommonAnalogCursorSettings AnalogCursorSettings;  // 0x50 (0x50)
	char pad_116[4];  // 0x74 (0x74)


}; 
 
 


// Class CommonUI.CommonStyleSheet
// Size: 0x58(Inherited: 0x30)
struct UCommonStyleSheet : UDataAsset
{
	struct TArray<struct UCommonStyleSheetTypeBase*> Properties;  // 0x30 (0x30)
	struct TArray<struct UCommonStyleSheet*> ImportedStyleSheets;  // 0x40 (0x40)
	char pad_80[8];  // 0x50 (0x50)


}; 
 
 


// Class CommonUI.CommonActivatableWidgetContainerBase
// Size: 0x270(Inherited: 0x150)
struct UCommonActivatableWidgetContainerBase : UWidget
{
	char pad_336[24];  // 0x150 (0x150)
	uint8_t TransitionType;  // 0x168 (0x168)
	uint8_t TransitionCurveType;  // 0x169 (0x169)
	char pad_362[2];  // 0x16A (0x16A)
	float TransitionDuration;  // 0x16C (0x16C)
	struct TArray<struct UCommonActivatableWidget*> WidgetList;  // 0x170 (0x170)
	struct UCommonActivatableWidget* DisplayedWidget;  // 0x180 (0x180)
	struct FUserWidgetPool GeneratedWidgetsPool;  // 0x188 (0x188)
	char pad_528[96];  // 0x210 (0x210)


	void SetTransitionDuration(float Duration); // Function CommonUI.CommonActivatableWidgetContainerBase.SetTransitionDuration
	void RemoveWidget(struct UCommonActivatableWidget* WidgetToRemove); // Function CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget
	float GetTransitionDuration(); // Function CommonUI.CommonActivatableWidgetContainerBase.GetTransitionDuration
	struct UCommonActivatableWidget* GetActiveWidget(); // Function CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget
	void ClearWidgets(); // Function CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets
	struct UCommonActivatableWidget* BP_AddWidget(UCommonActivatableWidget* ActivatableWidgetClass); // Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget
}; 
 
 


// Class CommonUI.CommonActivatableWidgetQueue
// Size: 0x270(Inherited: 0x270)
struct UCommonActivatableWidgetQueue : UCommonActivatableWidgetContainerBase
{


}; 
 
 


