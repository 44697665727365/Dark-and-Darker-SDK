#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function CommonUI.CommonNumericTextBlock.GetTargetValue
struct FGetTargetValue
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction CommonUI.CommonActionCommited__DelegateSignature
struct FCommonActionCommited__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bPassThrough : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonDateTimeTextBlock.GetDateTime
struct FGetDateTime
{
	struct FDateTime ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTabListWidgetBase.DisableTabWithReason
struct FDisableTabWithReason
{
	struct FName TabNameID;  // 0x0 (0x0)
	struct FText Reason;  // 0x8 (0x8)


}; 
 
 // DelegateFunction CommonUI.CommonActionProgress__DelegateSignature
struct FCommonActionProgress__DelegateSignature
{
	float HeldPercent;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTextBlock.SetLineHeightPercentage
struct FSetLineHeightPercentage
{
	float InLineHeightPercentage;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.GetSelected
struct FGetSelected
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // DelegateFunction CommonUI.CommonActionProgressSingle__DelegateSignature
struct FCommonActionProgressSingle__DelegateSignature
{
	float HeldPercent;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTabListWidgetBase.RegisterTab
struct FRegisterTab
{
	struct FName TabNameID;  // 0x0 (0x0)
	UCommonButtonBase* ButtonWidgetType;  // 0x8 (0x8)
	struct UWidget* ContentWidget;  // 0x10 (0x10)
	int32_t TabIndex;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool ReturnValue : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)


}; 
 
 // DelegateFunction CommonUI.OnCurrentPageIndexChanged__DelegateSignature
struct FOnCurrentPageIndexChanged__DelegateSignature
{
	struct UCommonWidgetCarousel* CarouselWidget;  // 0x0 (0x0)
	int32_t CurrentPageIndex;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // DelegateFunction CommonUI.CommonButtonBaseClicked__DelegateSignature
struct FCommonButtonBaseClicked__DelegateSignature
{
	struct UCommonButtonBase* Button;  // 0x0 (0x0)


}; 
 
 // DelegateFunction CommonUI.CommonSelectedStateChangedBase__DelegateSignature
struct FCommonSelectedStateChangedBase__DelegateSignature
{
	struct UCommonButtonBase* Button;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Selected : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function CommonUI.CommonActionWidget.IsHeldAction
struct FIsHeldAction
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // DelegateFunction CommonUI.HardwareVisibilityTagsChangedDynamicEvent__DelegateSignature
struct FHardwareVisibilityTagsChangedDynamicEvent__DelegateSignature
{
	struct UCommonUIVisibilitySubsystem* TagSubsystem;  // 0x0 (0x0)


}; 
 
 // DelegateFunction CommonUI.OnItemClicked__DelegateSignature
struct FOnItemClicked__DelegateSignature
{
	struct UUserWidget* Widget;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
struct FSetDateTimeValue
{
	struct FDateTime InDateTime;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bShowAsCountdown : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	float InRefreshDelay;  // 0xC (0xC)


}; 
 
 // ScriptStruct CommonUI.CommonRegisteredTabInfo
struct FCommonRegisteredTabInfo
{
	int32_t TabIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UCommonButtonBase* TabButton;  // 0x8 (0x8)
	struct UWidget* ContentInstance;  // 0x10 (0x10)


}; 
 
 // DelegateFunction CommonUI.OnItemSelected__DelegateSignature
struct FOnItemSelected__DelegateSignature
{
	struct UUserWidget* Widget;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Selected : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // DelegateFunction CommonUI.OnLoadGuardStateChangedDynamic__DelegateSignature
struct FOnLoadGuardStateChangedDynamic__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsLoading : 1;  // 0x0 (0x0)


}; 
 
 // DelegateFunction CommonUI.OnRotated__DelegateSignature
struct FOnRotated__DelegateSignature
{
	int32_t Value;  // 0x0 (0x0)


}; 
 
 // DelegateFunction CommonUI.SimpleButtonBaseGroupDelegate__DelegateSignature
struct FSimpleButtonBaseGroupDelegate__DelegateSignature
{
	struct UCommonButtonBase* AssociatedButton;  // 0x0 (0x0)
	int32_t ButtonIndex;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // DelegateFunction CommonUI.CommonCustomNavigation.OnCustomNavigationEvent__DelegateSignature
struct FOnCustomNavigationEvent__DelegateSignature
{
	uint8_t NavigationType;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool ReturnValue : 1;  // 0x1 (0x1)


}; 
 
 // Function CommonUI.CommonButtonBase.IsInteractionEnabled
struct FIsInteractionEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonActionWidget.SetInputActions
struct FSetInputActions
{
	struct TArray<struct FDataTableRowHandle> NewInputActions;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonActionWidget.GetDisplayText
struct FGetDisplayText
{
	struct FText ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonActionWidget.GetIcon
struct FGetIcon
{
	struct FSlateBrush ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTabListWidgetBase.RemoveTab
struct FRemoveTab
{
	struct FName TabNameID;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function CommonUI.CommonTabListWidgetBase.SelectTabByID
struct FSelectTabByID
{
	struct FName TabNameID;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bSuppressClickFeedback : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool ReturnValue : 1;  // 0x9 (0x9)
	char pad_10[2];  // 0xA (0xA)


}; 
 
 // DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
struct FOnInputMethodChanged__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bUsingGamepad : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonUserWidget.SetConsumePointerInput
struct FSetConsumePointerInput
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInConsumePointerInput : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonActivatableWidget.SetBindVisibilities
struct FSetBindVisibilities
{
	uint8_t OnActivatedVisibility;  // 0x0 (0x0)
	uint8_t OnDeactivatedVisibility;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool bInAllActive : 1;  // 0x2 (0x2)


}; 
 
 // Function CommonUI.CommonButtonBase.SetStyle
struct FSetStyle
{
	UCommonButtonStyle* InStyle;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex
struct FGetTabIdAtIndex
{
	int32_t Index;  // 0x0 (0x0)
	struct FName ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function CommonUI.CommonActionWidget.SetIconRimBrush
struct FSetIconRimBrush
{
	struct FSlateBrush InIconRimBrush;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonActionWidget.SetInputAction
struct FSetInputAction
{
	struct FDataTableRowHandle InputActionRow;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected
struct FHandleTabButtonSelected
{
	struct UCommonButtonBase* SelectedTabButton;  // 0x0 (0x0)
	int32_t ButtonIndex;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus
struct FSetShouldSelectUponReceivingFocus
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInShouldSelectUponReceivingFocus : 1;  // 0x0 (0x0)


}; 
 
 // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature
struct FOnTabButtonRemoval__DelegateSignature
{
	struct FName TabId;  // 0x0 (0x0)
	struct UCommonButtonBase* TabButton;  // 0x8 (0x8)


}; 
 
 // Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
struct FBP_GuardAndLoadAsset
{
	struct TSoftObjectPtr<UObject> InLazyAsset;  // 0x0 (0x0)
	struct FDelegate OnAssetLoaded;  // 0x30 (0x30)


}; 
 
 // Function CommonUI.CommonNumericTextBlock.InterpolateToValue
struct FInterpolateToValue
{
	float TargetValue;  // 0x0 (0x0)
	float MaximumInterpolationDuration;  // 0x4 (0x4)
	float MinimumChangeRate;  // 0x8 (0x8)
	float OutroOffset;  // 0xC (0xC)


}; 
 
 // Function CommonUI.CommonTextStyle.GetFont
struct FGetFont
{
	struct FSlateFontInfo OutFont;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.SetIsInteractionEnabled
struct FSetIsInteractionEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInIsInteractionEnabled : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus
struct FGetShouldSelectUponReceivingFocus
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonLoadGuard.SetLoadingText
struct FSetLoadingText
{
	struct FText InLoadingText;  // 0x0 (0x0)


}; 
 
 // DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
struct FOnAssetLoaded__DelegateSignature
{
	struct UObject* Object;  // 0x0 (0x0)


}; 
 
 // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature
struct FOnTabButtonCreation__DelegateSignature
{
	struct FName TabId;  // 0x0 (0x0)
	struct UCommonButtonBase* TabButton;  // 0x8 (0x8)


}; 
 
 // Function CommonUI.CommonLazyWidget.IsLoading
struct FIsLoading
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonLoadGuard.SetIsLoading
struct FSetIsLoading
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInIsLoading : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTextStyle.GetMargin
struct FGetMargin
{
	struct FMargin OutMargin;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTextBlock.SetMargin
struct FSetMargin
{
	struct FMargin InMargin;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTabListWidgetBase.HandleTabCreation
struct FHandleTabCreation
{
	struct FName TabNameID;  // 0x0 (0x0)
	struct UCommonButtonBase* TabButton;  // 0x8 (0x8)


}; 
 
 // Function CommonUI.CommonActivatableWidget.BindVisibilityToActivation
struct FBindVisibilityToActivation
{
	struct UCommonActivatableWidget* ActivatableWidget;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonRichTextBlock.SetScrollingEnabled
struct FSetScrollingEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInIsScrollingEnabled : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTextBlock.SetTextCase
struct FSetTextCase
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bUseAllCaps : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTabListWidgetBase.GetActiveTab
struct FGetActiveTab
{
	struct FName ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTextBlock.SetWrapTextWidth
struct FSetWrapTextWidth
{
	int32_t InWrapTextAt;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
struct FIsInterpolatingNumericValue
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
struct FOnInterpolationEnded__DelegateSignature
{
	struct UCommonNumericTextBlock* NumericTextBlock;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool HadCompleted : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function CommonUI.CommonWidgetGroupBase.AddWidget
struct FAddWidget
{
	struct UWidget* InWidget;  // 0x0 (0x0)


}; 
 
 // ScriptStruct CommonUI.CommonNumberFormattingOptions
struct FCommonNumberFormattingOptions
{
	enum class ERoundingMode RoundingMode;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool UseGrouping : 1;  // 0x1 (0x1)
	char pad_2[2];  // 0x2 (0x2)
	int32_t MinimumIntegralDigits;  // 0x4 (0x4)
	int32_t MaximumIntegralDigits;  // 0x8 (0x8)
	int32_t MinimumFractionalDigits;  // 0xC (0xC)
	int32_t MaximumFractionalDigits;  // 0x10 (0x10)


}; 
 
 // Function CommonUI.CommonTabListWidgetBase.GetSelectedTabId
struct FGetSelectedTabId
{
	struct FName ReturnValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature
struct FOnInterpolationStarted__DelegateSignature
{
	struct UCommonNumericTextBlock* NumericTextBlock;  // 0x0 (0x0)


}; 
 
 // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature
struct FOnInterpolationUpdated__DelegateSignature
{
	struct UCommonNumericTextBlock* NumericTextBlock;  // 0x0 (0x0)
	float LastValue;  // 0x8 (0x8)
	float NewValue;  // 0xC (0xC)


}; 
 
 // DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
struct FOnOutro__DelegateSignature
{
	struct UCommonNumericTextBlock* NumericTextBlock;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonStyle.GetDisabledTextStyle
struct FGetDisabledTextStyle
{
	struct UCommonTextStyle* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonNumericTextBlock.SetCurrentValue
struct FSetCurrentValue
{
	float NewValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher
struct FGetLinkedSwitcher
{
	struct UCommonAnimatedSwitcher* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonNumericTextBlock.SetNumericType
struct FSetNumericType
{
	uint8_t InNumericType;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID
struct FGetTabButtonBaseByID
{
	struct FName TabNameID;  // 0x0 (0x0)
	struct UCommonButtonBase* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function CommonUI.UCommonVisibilityWidgetBase.GetRegisteredPlatforms
struct FGetRegisteredPlatforms
{
	struct TArray<struct FName> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTabListWidgetBase.GetTabCount
struct FGetTabCount
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction
struct FHandleNextTabInputAction
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bPassThrough : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction
struct FHandlePreviousTabInputAction
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bPassThrough : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTabListWidgetBase.HandleTabRemoval
struct FHandleTabRemoval
{
	struct FName TabNameID;  // 0x0 (0x0)
	struct UCommonButtonBase* TabButton;  // 0x8 (0x8)


}; 
 
 // Function CommonUI.CommonTabListWidgetBase.SetTabEnabled
struct FSetTabEnabled
{
	struct FName TabNameID;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bEnable : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature
struct FOnTabSelected__DelegateSignature
{
	struct FName TabId;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher
struct FSetLinkedSwitcher
{
	struct UCommonAnimatedSwitcher* CommonSwitcher;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTabListWidgetBase.SetListeningForInput
struct FSetListeningForInput
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bShouldListen : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.DisableButtonWithReason
struct FDisableButtonWithReason
{
	struct FText DisabledReason;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled
struct FSetTabInteractionEnabled
{
	struct FName TabNameID;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bEnable : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex
struct FGetHoveredButtonIndex
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTabListWidgetBase.SetTabVisibility
struct FSetTabVisibility
{
	struct FName TabNameID;  // 0x0 (0x0)
	uint8_t NewVisibility;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // ScriptStruct CommonUI.UITag
// Size: 0x8(Inherited: 0x8)
struct FUITag : FGameplayTag
{


}; 
 
 // ScriptStruct CommonUI.UIActionTag
// Size: 0x8(Inherited: 0x8)
struct FUIActionTag : FUITag
{


}; 
 
 // ScriptStruct CommonUI.CommonInputActionHandlerData
struct FCommonInputActionHandlerData
{
	struct FDataTableRowHandle InputActionRow;  // 0x0 (0x0)
	uint8_t State;  // 0x10 (0x10)
	char pad_17[15];  // 0x11 (0x11)


}; 
 
 // Function CommonUI.CommonButtonBase.SetIsLocked
struct FSetIsLocked
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInIsLocked : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct CommonUI.CommonButtonStyleOptionalSlateSound
struct FCommonButtonStyleOptionalSlateSound
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bHasSound : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FSlateSound Sound;  // 0x8 (0x8)


}; 
 
 // ScriptStruct CommonUI.RichTextIconData
// Size: 0x60(Inherited: 0x8)
struct FRichTextIconData : FTableRowBase
{
	struct FText DisplayName;  // 0x8 (0x8)
	struct TSoftObjectPtr<UObject> ResourceObject;  // 0x20 (0x20)
	struct FVector2D ImageSize;  // 0x50 (0x50)


}; 
 
 // Function CommonUI.CommonButtonBase.SetLockedPressedSoundOverride
struct FSetLockedPressedSoundOverride
{
	struct USoundBase* Sound;  // 0x0 (0x0)


}; 
 
 // ScriptStruct CommonUI.CommonInputTypeInfo
struct FCommonInputTypeInfo
{
	struct FKey Key;  // 0x0 (0x0)
	uint8_t OverrrideState;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool bActionRequiresHold : 1;  // 0x19 (0x19)
	char pad_26[2];  // 0x1A (0x1A)
	float HoldTime;  // 0x1C (0x1C)
	struct FSlateBrush OverrideBrush;  // 0x20 (0x20)


}; 
 
 // Function CommonUI.CommonButtonStyle.GetSelectedTextStyle
struct FGetSelectedTextStyle
{
	struct UCommonTextStyle* ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct CommonUI.CommonInputActionDataBase
// Size: 0x360(Inherited: 0x8)
struct FCommonInputActionDataBase : FTableRowBase
{
	struct FText DisplayName;  // 0x8 (0x8)
	struct FText HoldDisplayName;  // 0x20 (0x20)
	int32_t NavBarPriority;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)
	struct FCommonInputTypeInfo KeyboardInputTypeInfo;  // 0x40 (0x40)
	struct FCommonInputTypeInfo DefaultGamepadInputTypeInfo;  // 0x130 (0x130)
	struct TMap<struct FName, struct FCommonInputTypeInfo> GamepadInputOverrides;  // 0x220 (0x220)
	struct FCommonInputTypeInfo TouchInputTypeInfo;  // 0x270 (0x270)


}; 
 
 // Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
struct FGetWidgetAtIndex
{
	int32_t Index;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UWidget* ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct CommonUI.UIActionKeyMapping
struct FUIActionKeyMapping
{
	struct FKey Key;  // 0x0 (0x0)
	float HoldTime;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function CommonUI.CommonRotator.PopulateTextLabels
struct FPopulateTextLabels
{
	struct TArray<struct FText> Labels;  // 0x0 (0x0)


}; 
 
 // ScriptStruct CommonUI.UIInputAction
struct FUIInputAction
{
	struct FUIActionTag ActionTag;  // 0x0 (0x0)
	struct FText DefaultDisplayName;  // 0x8 (0x8)
	struct TArray<struct FUIActionKeyMapping> KeyMappings;  // 0x20 (0x20)


}; 
 
 // Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
struct FSetActiveWidgetIndex
{
	int32_t Index;  // 0x0 (0x0)


}; 
 
 // ScriptStruct CommonUI.CommonAnalogCursorSettings
struct FCommonAnalogCursorSettings
{
	int32_t PreprocessorPriority;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bEnableCursorAcceleration : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	float CursorAcceleration;  // 0x8 (0x8)
	float CursorMaxSpeed;  // 0xC (0xC)
	float CursorDeadZone;  // 0x10 (0x10)
	float HoverSlowdownFactor;  // 0x14 (0x14)
	float ScrollDeadZone;  // 0x18 (0x18)
	float ScrollUpdatePeriod;  // 0x1C (0x1C)
	float ScrollMultiplier;  // 0x20 (0x20)


}; 
 
 // Function CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget
struct FBP_GetDesiredFocusTarget
{
	struct UWidget* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonActivatableWidget.BP_OnHandleBackAction
struct FBP_OnHandleBackAction
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling
struct FBeginAutoScrolling
{
	float ScrollInterval;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.GetCurrentTextStyle
struct FGetCurrentTextStyle
{
	struct UCommonTextStyle* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonActivatableWidget.GetDesiredFocusTarget
struct FGetDesiredFocusTarget
{
	struct UWidget* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonActivatableWidget.IsActivated
struct FIsActivated
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonRotator.BP_OnOptionsPopulated
struct FBP_OnOptionsPopulated
{
	int32_t Count;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonAnimatedSwitcher.ActivateNextWidget
struct FActivateNextWidget
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bCanWrap : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget
struct FActivatePreviousWidget
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bCanWrap : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonAnimatedSwitcher.HasWidgets
struct FHasWidgets
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonAnimatedSwitcher.IsCurrentlySwitching
struct FIsCurrentlySwitching
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonAnimatedSwitcher.IsTransitionPlaying
struct FIsTransitionPlaying
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation
struct FSetDisableTransitionAnimation
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bDisableAnimation : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonBorderStyle.GetBackgroundBrush
struct FGetBackgroundBrush
{
	struct FSlateBrush Brush;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonStyle.GetButtonPadding
struct FGetButtonPadding
{
	struct FMargin OutButtonPadding;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonStyle.GetCustomPadding
struct FGetCustomPadding
{
	struct FMargin OutCustomPadding;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonStyle.GetDisabledBrush
struct FGetDisabledBrush
{
	struct FSlateBrush Brush;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonStyle.GetMaterialBrush
struct FGetMaterialBrush
{
	struct FSlateBrush Brush;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTextStyle.GetStrikeBrush
struct FGetStrikeBrush
{
	struct FSlateBrush OutStrikeBrush;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonStyle.GetNormalBaseBrush
struct FGetNormalBaseBrush
{
	struct FSlateBrush Brush;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush
struct FGetNormalHoveredBrush
{
	struct FSlateBrush Brush;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
struct FGetNormalHoveredTextStyle
{
	struct UCommonTextStyle* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonStyle.GetNormalPressedBrush
struct FGetNormalPressedBrush
{
	struct FSlateBrush Brush;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.SetMinDimensions
struct FSetMinDimensions
{
	int32_t InMinWidth;  // 0x0 (0x0)
	int32_t InMinHeight;  // 0x4 (0x4)


}; 
 
 // Function CommonUI.CommonButtonStyle.GetNormalTextStyle
struct FGetNormalTextStyle
{
	struct UCommonTextStyle* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush
struct FGetSelectedBaseBrush
{
	struct FSlateBrush Brush;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
struct FGetSelectedHoveredBrush
{
	struct FSlateBrush Brush;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
struct FGetSelectedHoveredTextStyle
{
	struct UCommonTextStyle* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonGroupBase.SelectPreviousButton
struct FSelectPreviousButton
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bAllowWrap : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush
struct FGetSelectedPressedBrush
{
	struct FSlateBrush Brush;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.BP_OnInputMethodChanged
struct FBP_OnInputMethodChanged
{
	uint8_t CurrentInputType;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.GetIsFocusable
struct FGetIsFocusable
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.BP_OnLockedChanged
struct FBP_OnLockedChanged
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsLocked : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonRotator.BP_OnOptionSelected
struct FBP_OnOptionSelected
{
	int32_t Index;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.GetLocked
struct FGetLocked
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.GetCurrentButtonPadding
struct FGetCurrentButtonPadding
{
	struct FMargin OutButtonPadding;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.GetCurrentCustomPadding
struct FGetCurrentCustomPadding
{
	struct FMargin OutCustomPadding;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.GetCurrentTextStyleClass
struct FGetCurrentTextStyleClass
{
	UCommonTextStyle* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.GetInputAction
struct FGetInputAction
{
	struct FDataTableRowHandle InputActionRow;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
struct FGetActiveWidgetIndex
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.GetSingleMaterialStyleMID
struct FGetSingleMaterialStyleMID
{
	struct UMaterialInstanceDynamic* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.GetStyle
struct FGetStyle
{
	struct UCommonButtonStyle* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.HandleTriggeringActionCommited
struct FHandleTriggeringActionCommited
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bPassThrough : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.IsPressed
struct FIsPressed
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.NativeOnActionProgress
struct FNativeOnActionProgress
{
	float HeldPercent;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.OnActionProgress
struct FOnActionProgress
{
	float HeldPercent;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.OnInputMethodChanged
struct FOnInputMethodChanged
{
	uint8_t CurrentInputType;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.OnTriggeredInputActionChanged
struct FOnTriggeredInputActionChanged
{
	struct FDataTableRowHandle NewTriggeredAction;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.OnTriggeringInputActionChanged
struct FOnTriggeringInputActionChanged
{
	struct FDataTableRowHandle NewTriggeredAction;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonGroupBase.OnButtonBaseHovered
struct FOnButtonBaseHovered
{
	struct UCommonButtonBase* BaseButton;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.SetClickMethod
struct FSetClickMethod
{
	enum class EButtonClickMethod InClickMethod;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.SetHideInputAction
struct FSetHideInputAction
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInHideInputAction : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.SetHoveredSoundOverride
struct FSetHoveredSoundOverride
{
	struct USoundBase* Sound;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.SetInputActionProgressMaterial
struct FSetInputActionProgressMaterial
{
	struct FSlateBrush InProgressMaterialBrush;  // 0x0 (0x0)
	struct FName InProgressMaterialParam;  // 0xD0 (0xD0)
	char pad_216[8];  // 0xD8 (0xD8)


}; 
 
 // Function CommonUI.CommonButtonBase.SetIsFocusable
struct FSetIsFocusable
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInIsFocusable : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.SetIsInteractableWhenSelected
struct FSetIsInteractableWhenSelected
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInInteractableWhenSelected : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonGroupBase.GetSelectedButtonBase
struct FGetSelectedButtonBase
{
	struct UCommonButtonBase* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.SetIsSelectable
struct FSetIsSelectable
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInIsSelectable : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.SetIsSelected
struct FSetIsSelected
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InSelected : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bGiveClickFeedback : 1;  // 0x1 (0x1)


}; 
 
 // Function CommonUI.CommonButtonBase.SetIsToggleable
struct FSetIsToggleable
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInIsToggleable : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.SetLockedHoveredSoundOverride
struct FSetLockedHoveredSoundOverride
{
	struct USoundBase* Sound;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.SetPressedSoundOverride
struct FSetPressedSoundOverride
{
	struct USoundBase* Sound;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.SetPressMethod
struct FSetPressMethod
{
	enum class EButtonPressMethod InPressMethod;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.SetSelectedHoveredSoundOverride
struct FSetSelectedHoveredSoundOverride
{
	struct USoundBase* Sound;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.SetSelectedInternal
struct FSetSelectedInternal
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInSelected : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bAllowSound : 1;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool bBroadcast : 1;  // 0x2 (0x2)


}; 
 
 // Function CommonUI.CommonButtonBase.SetSelectedPressedSoundOverride
struct FSetSelectedPressedSoundOverride
{
	struct USoundBase* Sound;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction
struct FSetShouldUseFallbackDefaultInputAction
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInShouldUseFallbackDefaultInputAction : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.SetTouchMethod
struct FSetTouchMethod
{
	enum class EButtonTouchMethod InTouchMethod;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.SetTriggeredInputAction
struct FSetTriggeredInputAction
{
	struct FDataTableRowHandle InputActionRow;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonBase.SetTriggeringInputAction
struct FSetTriggeringInputAction
{
	struct FDataTableRowHandle InputActionRow;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText
struct FSetCountDownCompletionText
{
	struct FText InCompletionText;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue
struct FSetTimespanValue
{
	struct FTimespan InTimespan;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
struct FSetBrushFromLazyDisplayAsset
{
	struct TSoftObjectPtr<UObject> LazyObject;  // 0x0 (0x0)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bMatchTextureSize : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
struct FSetBrushFromLazyMaterial
{
	struct TSoftObjectPtr<UMaterialInterface> LazyMaterial;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex
struct FGetSelectedButtonIndex
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture
struct FSetBrushFromLazyTexture
{
	struct TSoftObjectPtr<UTexture2D> LazyTexture;  // 0x0 (0x0)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bMatchSize : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // Function CommonUI.CommonLazyImage.SetMaterialTextureParamName
struct FSetMaterialTextureParamName
{
	struct FName TextureParamName;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonLazyWidget.GetContent
struct FGetContent
{
	struct UUserWidget* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.LoadGuardSlot.SetVerticalAlignment
struct FSetVerticalAlignment
{
	enum class EVerticalAlignment InVerticalAlignment;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonLazyWidget.SetLazyContent
struct FSetLazyContent
{
	struct TSoftClassPtr<UObject> SoftWidget;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonListView.SetEntrySpacing
struct FSetEntrySpacing
{
	float InEntrySpacing;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked
struct FOnHandleButtonBaseClicked
{
	struct UCommonButtonBase* BaseButton;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTextStyle.GetShadowOffset
struct FGetShadowOffset
{
	struct FVector2D OutShadowOffset;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.LoadGuardSlot.SetHorizontalAlignment
struct FSetHorizontalAlignment
{
	enum class EHorizontalAlignment InHorizontalAlignment;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.LoadGuardSlot.SetPadding
struct FSetPadding
{
	struct FMargin InPadding;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonRotator.GetSelectedIndex
struct FGetSelectedIndex
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonRotator.GetSelectedText
struct FGetSelectedText
{
	struct FText ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonRotator.SetSelectedItem
struct FSetSelectedItem
{
	int32_t InValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTextStyle.GetColor
struct FGetColor
{
	struct FLinearColor OutColor;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTextStyle.GetLineHeightPercentage
struct FGetLineHeightPercentage
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonTextStyle.GetShadowColor
struct FGetShadowColor
{
	struct FLinearColor OutColor;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonUILibrary.FindParentWidgetOfType
struct FFindParentWidgetOfType
{
	struct UWidget* StartingWidget;  // 0x0 (0x0)
	UWidget* Type;  // 0x8 (0x8)
	struct UWidget* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon
struct FGetInputActionButtonIcon
{
	struct FDataTableRowHandle InputActionRowHandle;  // 0x0 (0x0)
	uint8_t InputType;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	struct FName GamepadName;  // 0x14 (0x14)
	char pad_28[4];  // 0x1C (0x1C)
	struct FSlateBrush ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex
struct FDecrementActiveWidgetIndex
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bAllowWrapping : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget
struct FGetActiveWidget
{
	struct UCommonActivatableWidget* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex
struct FIncrementActiveWidgetIndex
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bAllowWrapping : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonWidgetCarousel.SetActiveWidget
struct FSetActiveWidget
{
	struct UWidget* Widget;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase
struct FOnSelectionStateChangedBase
{
	struct UCommonButtonBase* BaseButton;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bIsSelected : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked
struct FHandleButtonClicked
{
	struct UCommonButtonBase* AssociatedButton;  // 0x0 (0x0)
	int32_t ButtonIndex;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged
struct FHandlePageChanged
{
	struct UCommonWidgetCarousel* CommonCarousel;  // 0x0 (0x0)
	int32_t PageIndex;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel
struct FSetLinkedCarousel
{
	struct UCommonWidgetCarousel* CommonCarousel;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget
struct FRemoveWidget
{
	struct UCommonActivatableWidget* WidgetToRemove;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonGroupBase.FindButtonIndex
struct FFindButtonIndex
{
	struct UCommonButtonBase* ButtonToFind;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex
struct FGetButtonBaseAtIndex
{
	int32_t Index;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UCommonButtonBase* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function CommonUI.CommonButtonGroupBase.GetButtonCount
struct FGetButtonCount
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonGroupBase.HasAnyButtons
struct FHasAnyButtons
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered
struct FOnButtonBaseUnhovered
{
	struct UCommonButtonBase* BaseButton;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked
struct FOnHandleButtonBaseDoubleClicked
{
	struct UCommonButtonBase* BaseButton;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonGroupBase.SelectButtonAtIndex
struct FSelectButtonAtIndex
{
	int32_t ButtonIndex;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bAllowSound : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function CommonUI.CommonButtonGroupBase.SelectNextButton
struct FSelectNextButton
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bAllowWrap : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonButtonGroupBase.SetSelectionRequired
struct FSetSelectionRequired
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bRequireSelection : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly
struct FSetDisplayOwningPlayerActionsOnly
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bShouldOnlyDisplayOwningPlayerActions : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget
struct FBP_AddWidget
{
	UCommonActivatableWidget* ActivatableWidgetClass;  // 0x0 (0x0)
	struct UCommonActivatableWidget* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function CommonUI.CommonActivatableWidgetContainerBase.GetTransitionDuration
struct FGetTransitionDuration
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonUI.CommonActivatableWidgetContainerBase.SetTransitionDuration
struct FSetTransitionDuration
{
	float Duration;  // 0x0 (0x0)


}; 
 
 