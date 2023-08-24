#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function UMG.Widget.IsInViewport
struct FIsInViewport
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserListEntry.BP_OnItemSelectionChanged
struct FBP_OnItemSelectionChanged
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsSelected : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.TextBlock.SetShadowOffset
struct FSetShadowOffset
{
	struct FVector2D InShadowOffset;  // 0x0 (0x0)


}; 
 
 // Function UMG.GameViewportSubsystem.AddWidget
struct FAddWidget
{
	struct UWidget* Widget;  // 0x0 (0x0)
	struct FGameViewportWidgetSlot Slot;  // 0x8 (0x8)


}; 
 
 // Function UMG.Widget.ForceVolatile
struct FForceVolatile
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bForce : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.CaptureJoystick
struct FCaptureJoystick
{
	struct FEventReply Reply;  // 0x0 (0x0)
	struct UWidget* CapturingWidget;  // 0xB8 (0xB8)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool bInAllJoysticks : 1;  // 0xC0 (0xC0)
	char pad_193[7];  // 0xC1 (0xC1)
	struct FEventReply ReturnValue;  // 0xC8 (0xC8)


}; 
 
 // Function UMG.Viewport.GetViewportWorld
struct FGetViewportWorld
{
	struct UWorld* ReturnValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
struct FGenerateWidgetForObject__DelegateSignature
{
	struct UObject* Item;  // 0x0 (0x0)
	struct UWidget* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.Widget.GetCachedGeometry
struct FGetCachedGeometry
{
	struct FGeometry ReturnValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
struct FGenerateWidgetForString__DelegateSignature
{
	struct FString Item;  // 0x0 (0x0)
	struct UWidget* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function UMG.Widget.SetIsEnabled
struct FSetIsEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInIsEnabled : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.Widget.HasMouseCapture
struct FHasMouseCapture
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.TextBlock.GetDynamicFontMaterial
struct FGetDynamicFontMaterial
{
	struct UMaterialInstanceDynamic* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.RetainerBox.SetRenderingPhase
struct FSetRenderingPhase
{
	int32_t RenderPhase;  // 0x0 (0x0)
	int32_t TotalPhases;  // 0x4 (0x4)


}; 
 
 // DelegateFunction UMG.Widget.GetBool__DelegateSignature
struct FGetBool__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
struct FGetCheckBoxState__DelegateSignature
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.Widget.GetAccessibleSummaryText
struct FGetAccessibleSummaryText
{
	struct FText ReturnValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.OnItemIsHoveredChangedDynamic__DelegateSignature
struct FOnItemIsHoveredChangedDynamic__DelegateSignature
{
	struct UObject* Item;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bIsHovered : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function UMG.Widget.GetAccessibleText
struct FGetAccessibleText
{
	struct FText ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct UMG.FieldNotificationId
struct FFieldNotificationId
{
	struct FName FieldName;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
struct FGetSlateVisibility__DelegateSignature
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.Widget.GetClipping
struct FGetClipping
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
struct FGetAllWidgetsOfClass
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct TArray<struct UUserWidget*> FoundWidgets;  // 0x8 (0x8)
	UUserWidget* WidgetClass;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool TopLevelOnly : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function UMG.Widget.GetDesiredSize
struct FGetDesiredSize
{
	struct FVector2D ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.ComboBoxString.RemoveOption
struct FRemoveOption
{
	struct FString Option;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // DelegateFunction UMG.OnFloatValueChangedEvent__DelegateSignature
struct FOnFloatValueChangedEvent__DelegateSignature
{
	float Value;  // 0x0 (0x0)


}; 
 
 // Function UMG.Widget.IsRendered
struct FIsRendered
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.Widget.GetFloat__DelegateSignature
struct FGetFloat__DelegateSignature
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
struct FMakeBrushFromTexture
{
	struct UTexture2D* Texture;  // 0x0 (0x0)
	int32_t Width;  // 0x8 (0x8)
	int32_t Height;  // 0xC (0xC)
	struct FSlateBrush ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function UMG.GameViewportSubsystem.SetWidgetSlotPosition
struct FSetWidgetSlotPosition
{
	struct FGameViewportWidgetSlot Slot;  // 0x0 (0x0)
	struct UWidget* Widget;  // 0x48 (0x48)
	struct FVector2D Position;  // 0x50 (0x50)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool bRemoveDPIScale : 1;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)
	struct FGameViewportWidgetSlot ReturnValue;  // 0x68 (0x68)


}; 
 
 // Function UMG.Widget.GetGameInstance
struct FGetGameInstance
{
	struct UGameInstance* ReturnValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.Widget.GetInt32__DelegateSignature
struct FGetInt32__DelegateSignature
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.ScrollBox.SetScrollbarPadding
struct FSetScrollbarPadding
{
	struct FMargin NewScrollbarPadding;  // 0x0 (0x0)


}; 
 
 // Function UMG.Widget.HasUserFocus
struct FHasUserFocus
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function UMG.Widget.GetIsEnabled
struct FGetIsEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.SizeBox.SetMinAspectRatio
struct FSetMinAspectRatio
{
	float InMinAspectRatio;  // 0x0 (0x0)


}; 
 
 // Function UMG.Widget.SetNavigationRuleCustomBoundary
struct FSetNavigationRuleCustomBoundary
{
	uint8_t Direction;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FDelegate InCustomDelegate;  // 0x4 (0x4)


}; 
 
 // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
struct FGetLinearColor__DelegateSignature
{
	struct FLinearColor ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.Widget.SetCursor
struct FSetCursor
{
	enum class EMouseCursor InCursor;  // 0x0 (0x0)


}; 
 
 // ScriptStruct UMG.SlateMeshVertex
struct FSlateMeshVertex
{
	struct FVector2f Position;  // 0x0 (0x0)
	struct FColor Color;  // 0x8 (0x8)
	struct FVector2f UV0;  // 0xC (0xC)
	struct FVector2f UV1;  // 0x14 (0x14)
	struct FVector2f UV2;  // 0x1C (0x1C)
	struct FVector2f UV3;  // 0x24 (0x24)
	struct FVector2f UV4;  // 0x2C (0x2C)
	struct FVector2f UV5;  // 0x34 (0x34)


}; 
 
 // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
struct FGetMouseCursor__DelegateSignature
{
	enum class EMouseCursor ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.LockMouse
struct FLockMouse
{
	struct FEventReply Reply;  // 0x0 (0x0)
	struct UWidget* CapturingWidget;  // 0xB8 (0xB8)
	struct FEventReply ReturnValue;  // 0xC0 (0xC0)


}; 
 
 // Function UMG.Widget.GetOwningLocalPlayer
struct FGetOwningLocalPlayer
{
	struct ULocalPlayer* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.PanelWidget.GetChildrenCount
struct FGetChildrenCount
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.Widget.SetRenderScale
struct FSetRenderScale
{
	struct FVector2D Scale;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.FieldValueChangedDynamicDelegate__DelegateSignature
struct FFieldValueChangedDynamicDelegate__DelegateSignature
{
	struct UObject* Object;  // 0x0 (0x0)
	struct FFieldNotificationId Field;  // 0x8 (0x8)


}; 
 
 // Function UMG.SpinBox.GetDelta
struct FGetDelta
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.RichTextBlock.SetTextStyleSet
struct FSetTextStyleSet
{
	struct UDataTable* NewTextStyleSet;  // 0x0 (0x0)


}; 
 
 // Function UMG.Widget.GetOwningPlayer
struct FGetOwningPlayer
{
	struct APlayerController* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.GetAnchorsInViewport
struct FGetAnchorsInViewport
{
	struct FAnchors ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.Widget.GetPaintSpaceGeometry
struct FGetPaintSpaceGeometry
{
	struct FGeometry ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.Widget.GetParent
struct FGetParent
{
	struct UPanelWidget* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetComponent.GetWindowVisiblility
struct FGetWindowVisiblility
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserListEntryLibrary.IsListItemExpanded
struct FIsListItemExpanded
{
	struct TScriptInterface<IUserListEntry> UserListEntry;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function UMG.Image.SetOpacity
struct FSetOpacity
{
	float InOpacity;  // 0x0 (0x0)


}; 
 
 // Function UMG.Widget.GetRenderOpacity
struct FGetRenderOpacity
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
struct FDrawTextFormatted
{
	struct FPaintContext Context;  // 0x0 (0x0)
	struct FText Text;  // 0x30 (0x30)
	struct FVector2D Position;  // 0x48 (0x48)
	struct UFont* Font;  // 0x58 (0x58)
	int32_t FontSize;  // 0x60 (0x60)
	struct FName FontTypeFace;  // 0x64 (0x64)
	struct FLinearColor Tint;  // 0x6C (0x6C)
	char pad_124[4];  // 0x7C (0x7C)


}; 
 
 // Function UMG.TextBlock.SetShadowColorAndOpacity
struct FSetShadowColorAndOpacity
{
	struct FLinearColor InShadowColorAndOpacity;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.GetExtension
struct FGetExtension
{
	UUserWidgetExtension* ExtensionType;  // 0x0 (0x0)
	struct UUserWidgetExtension* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.Widget.K2_AddFieldValueChangedDelegate
struct FK2_AddFieldValueChangedDelegate
{
	struct FFieldNotificationId FieldId;  // 0x0 (0x0)
	struct FDelegate Delegate;  // 0x8 (0x8)


}; 
 
 // Function UMG.Widget.GetRenderTransformAngle
struct FGetRenderTransformAngle
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.Widget.IsVisible
struct FIsVisible
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.MenuAnchor.ToggleOpen
struct FToggleOpen
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bFocusOnOpen : 1;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
struct FGetSlateBrush__DelegateSignature
{
	struct FSlateBrush ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetComponent.SetTickMode
struct FSetTickMode
{
	uint8_t InTickMode;  // 0x0 (0x0)


}; 
 
 // Function UMG.SpinBox.SetMinFractionalDigits
struct FSetMinFractionalDigits
{
	int32_t NewValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.ScaleBox.SetUserSpecifiedScale
struct FSetUserSpecifiedScale
{
	float InUserSpecifiedScale;  // 0x0 (0x0)


}; 
 
 // Function UMG.Widget.HasFocusedDescendants
struct FHasFocusedDescendants
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.Widget.GetWidget__DelegateSignature
struct FGetWidget__DelegateSignature
{
	struct UWidget* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.ScaleBox.SetStretch
struct FSetStretch
{
	enum class EStretch InStretch;  // 0x0 (0x0)


}; 
 
 // Function UMG.Widget.GetTickSpaceGeometry
struct FGetTickSpaceGeometry
{
	struct FGeometry ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetAnimation.BindToAnimationStarted
struct FBindToAnimationStarted
{
	struct UUserWidget* Widget;  // 0x0 (0x0)
	struct FDelegate Delegate;  // 0x8 (0x8)


}; 
 
 // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
struct FGetSlateColor__DelegateSignature
{
	struct FSlateColor ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.Widget.SetClipping
struct FSetClipping
{
	uint8_t InClipping;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.SlateAccessibleWidgetData.GetText__DelegateSignature
struct FGetText__DelegateSignature
{
	struct FText ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserListEntryLibrary.IsListItemSelected
struct FIsListItemSelected
{
	struct TScriptInterface<IUserListEntry> UserListEntry;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function UMG.Widget.GetVisibility
struct FGetVisibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.Widget.HasAnyUserFocus
struct FHasAnyUserFocus
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.Slider.SetValue
struct FSetValue
{
	float InValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.Widget.HasMouseCaptureByUser
struct FHasMouseCaptureByUser
{
	int32_t UserIndex;  // 0x0 (0x0)
	int32_t PointerIndex;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
struct FGetInputEventFromKeyEvent
{
	struct FKeyEvent Event;  // 0x0 (0x0)
	struct FInputEvent ReturnValue;  // 0x40 (0x40)


}; 
 
 // Function UMG.ListView.BP_GetSelectedItem
struct FBP_GetSelectedItem
{
	struct UObject* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.GameViewportSubsystem.AddWidgetForPlayer
struct FAddWidgetForPlayer
{
	struct UWidget* Widget;  // 0x0 (0x0)
	struct ULocalPlayer* Player;  // 0x8 (0x8)
	struct FGameViewportWidgetSlot Slot;  // 0x10 (0x10)


}; 
 
 // Function UMG.Widget.HasKeyboardFocus
struct FHasKeyboardFocus
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.Widget.HasUserFocusedDescendants
struct FHasUserFocusedDescendants
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function UMG.WidgetLayoutLibrary.GetViewportSize
struct FGetViewportSize
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FVector2D ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.Widget.SetRenderOpacity
struct FSetRenderOpacity
{
	float InOpacity;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBinding.GetValue
struct FGetValue
{
	struct UWidget* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.GetOwningPlayerPawn
struct FGetOwningPlayerPawn
{
	struct APawn* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.Widget.IsHovered
struct FIsHovered
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.ListView.BP_SetListItems
struct FBP_SetListItems
{
	struct TArray<struct UObject*> InListItems;  // [00031722] Package Id_Projectile_SkeletonRoyalGuard_Dagger ([00031722] Package Id_Projectile_SkeletonRoyalGuard_Dagger)


}; 
 
 // Function UMG.Widget.K2_BroadcastFieldValueChanged
struct FK2_BroadcastFieldValueChanged
{
	struct FFieldNotificationId FieldId;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
struct FOnSpinBoxValueChangedEvent__DelegateSignature
{
	float InValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.Widget.K2_RemoveFieldValueChangedDelegate
struct FK2_RemoveFieldValueChangedDelegate
{
	struct FFieldNotificationId FieldId;  // 0x0 (0x0)
	struct FDelegate Delegate;  // 0x8 (0x8)


}; 
 
 // Function UMG.WidgetComponent.GetUserWidgetObject
struct FGetUserWidgetObject
{
	struct UUserWidget* ReturnValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
struct FOnPointerEvent__DelegateSignature
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FPointerEvent MouseEvent;  // 0x40 (0x40)
	struct FEventReply ReturnValue;  // 0xD8 (0xD8)


}; 
 
 // ScriptStruct UMG.EventReply
struct FEventReply
{
	char pad_0[184];  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
struct FReleaseMouseCapture
{
	struct FEventReply Reply;  // 0x0 (0x0)
	struct FEventReply ReturnValue;  // 0xB8 (0xB8)


}; 
 
 // Function UMG.Widget.SetRenderTransform
struct FSetRenderTransform
{
	struct FWidgetTransform InTransform;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.OnTouchEnded
struct FOnTouchEnded
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FPointerEvent InTouchEvent;  // 0x40 (0x40)
	struct FEventReply ReturnValue;  // 0xD8 (0xD8)


}; 
 
 // DelegateFunction UMG.Widget.OnReply__DelegateSignature
struct FOnReply__DelegateSignature
{
	struct FEventReply ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.InputKeySelector.SetKeySelectionText
struct FSetKeySelectionText
{
	struct FText InKeySelectionText;  // 0x0 (0x0)


}; 
 
 // Function UMG.Widget.SetNavigationRule
struct FSetNavigationRule
{
	uint8_t Direction;  // 0x0 (0x0)
	uint8_t Rule;  // 0x1 (0x1)
	char pad_2[2];  // 0x2 (0x2)
	struct FName WidgetToFocus;  // 0x4 (0x4)


}; 
 
 // Function UMG.Widget.SetAllNavigationRules
struct FSetAllNavigationRules
{
	uint8_t Rule;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FName WidgetToFocus;  // 0x4 (0x4)


}; 
 
 // Function UMG.UserWidget.OnMouseButtonDoubleClick
struct FOnMouseButtonDoubleClick
{
	struct FGeometry InMyGeometry;  // 0x0 (0x0)
	struct FPointerEvent InMouseEvent;  // 0x40 (0x40)
	struct FEventReply ReturnValue;  // 0xD8 (0xD8)


}; 
 
 // Function UMG.Widget.SetNavigationRuleBase
struct FSetNavigationRuleBase
{
	uint8_t Direction;  // 0x0 (0x0)
	uint8_t Rule;  // 0x1 (0x1)


}; 
 
 // Function UMG.Widget.SetNavigationRuleCustom
struct FSetNavigationRuleCustom
{
	uint8_t Direction;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FDelegate InCustomDelegate;  // 0x4 (0x4)


}; 
 
 // Function UMG.DynamicEntryBox.BP_CreateEntry
struct FBP_CreateEntry
{
	struct UUserWidget* ReturnValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.CustomWidgetNavigationDelegate__DelegateSignature
struct FCustomWidgetNavigationDelegate__DelegateSignature
{
	uint8_t Navigation;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct UWidget* ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct UMG.WidgetTransform
struct FWidgetTransform
{
	struct FVector2D Translation;  // 0x0 (0x0)
	struct FVector2D Scale;  // 0x10 (0x10)
	struct FVector2D Shear;  // 0x20 (0x20)
	float Angle;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // ScriptStruct UMG.WidgetNavigationData
struct FWidgetNavigationData
{
	uint8_t Rule;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FName WidgetToFocus;  // 0x4 (0x4)
	struct TWeakObjectPtr<UWidget> Widget;  // 0xC (0xC)
	struct FDelegate CustomDelegate;  // 0x14 (0x14)


}; 
 
 // Function UMG.Widget.SetNavigationRuleExplicit
struct FSetNavigationRuleExplicit
{
	uint8_t Direction;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct UWidget* InWidget;  // 0x8 (0x8)


}; 
 
 // Function UMG.Widget.SetRenderShear
struct FSetRenderShear
{
	struct FVector2D Shear;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.OnTouchStarted
struct FOnTouchStarted
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FPointerEvent InTouchEvent;  // 0x40 (0x40)
	struct FEventReply ReturnValue;  // 0xD8 (0xD8)


}; 
 
 // Function UMG.Widget.SetRenderTransformAngle
struct FSetRenderTransformAngle
{
	float Angle;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.OnExpandableAreaExpansionChanged__DelegateSignature
struct FOnExpandableAreaExpansionChanged__DelegateSignature
{
	struct UExpandableArea* Area;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bIsExpanded : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function UMG.Widget.SetRenderTransformPivot
struct FSetRenderTransformPivot
{
	struct FVector2D Pivot;  // 0x0 (0x0)


}; 
 
 // Function UMG.Widget.SetRenderTranslation
struct FSetRenderTranslation
{
	struct FVector2D Translation;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetSwitcher.GetWidgetAtIndex
struct FGetWidgetAtIndex
{
	int32_t Index;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UWidget* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
struct FSetWindowTitleBarCloseButtonActive
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bActive : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct UMG.RadialBoxSettings
struct FRadialBoxSettings
{
	float StartingAngle;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bDistributeItemsEvenly : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	float AngleBetweenItems;  // 0x8 (0x8)
	float SectorCentralAngle;  // 0xC (0xC)


}; 
 
 // ScriptStruct UMG.WidgetAnimationBinding
struct FWidgetAnimationBinding
{
	struct FName WidgetName;  // 0x0 (0x0)
	struct FName SlotWidgetName;  // 0x8 (0x8)
	struct FGuid AnimationGuid;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bIsRootWidget : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)


}; 
 
 // Function UMG.Widget.SetToolTip
struct FSetToolTip
{
	struct UWidget* Widget;  // 0x0 (0x0)


}; 
 
 // Function UMG.Widget.SetToolTipText
struct FSetToolTipText
{
	struct FText InToolTipText;  // 0x0 (0x0)


}; 
 
 // Function UMG.ListView.BP_GetNumItemsSelected
struct FBP_GetNumItemsSelected
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.SetUserFocus
struct FSetUserFocus
{
	struct FEventReply Reply;  // 0x0 (0x0)
	struct UWidget* FocusWidget;  // 0xB8 (0xB8)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool bInAllUsers : 1;  // 0xC0 (0xC0)
	char pad_193[7];  // 0xC1 (0xC1)
	struct FEventReply ReturnValue;  // 0xC8 (0xC8)


}; 
 
 // Function UMG.ListView.SetSelectionMode
struct FSetSelectionMode
{
	enum class ESelectionMode SelectionMode;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted
struct FUnbindAllFromAnimationStarted
{
	struct UUserWidget* Widget;  // 0x0 (0x0)


}; 
 
 // Function UMG.Widget.SetVisibility
struct FSetVisibility
{
	uint8_t Invisibility;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
struct FOnSelectionChangedEvent__DelegateSignature
{
	struct FString SelectedItem;  // 0x0 (0x0)
	enum class ESelectInfo SelectionType;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function UMG.ComboBoxString.AddOption
struct FAddOption
{
	struct FString Option;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.ComboBoxKey.GenerateWidgetEvent__DelegateSignature
struct FGenerateWidgetEvent__DelegateSignature
{
	struct FName Item;  // 0x0 (0x0)
	struct UWidget* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.WidgetComponent.GetDrawAtDesiredSize
struct FGetDrawAtDesiredSize
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.Throbber.SetAnimateVertically
struct FSetAnimateVertically
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInAnimateVertically : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.SetInputActionPriority
struct FSetInputActionPriority
{
	int32_t NewPriority;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.SetNumLoopsToPlay
struct FSetNumLoopsToPlay
{
	struct UWidgetAnimation* InAnimation;  // 0x0 (0x0)
	int32_t NumLoopsToPlay;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function UMG.GridPanel.AddChildToGrid
struct FAddChildToGrid
{
	struct UWidget* Content;  // 0x0 (0x0)
	int32_t InRow;  // 0x8 (0x8)
	int32_t InColumn;  // 0xC (0xC)
	struct UGridSlot* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function UMG.ComboBoxString.GetSelectedOption
struct FGetSelectedOption
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
struct FScreenToWidgetAbsolute
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FVector2D ScreenPosition;  // 0x8 (0x8)
	struct FVector2D AbsoluteCoordinate;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bIncludeWindowPosition : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // Function UMG.MenuAnchor.IsOpen
struct FIsOpen
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.ComboBoxString.SetSelectedOption
struct FSetSelectedOption
{
	struct FString Option;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.OnMouseButtonDown
struct FOnMouseButtonDown
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FPointerEvent MouseEvent;  // 0x40 (0x40)
	struct FEventReply ReturnValue;  // 0xD8 (0xD8)


}; 
 
 // Function UMG.ListView.OnListItemEndPlayed
struct FOnListItemEndPlayed
{
	struct AActor* Item;  // 0x0 (0x0)
	enum class EEndPlayReason EndPlayReason;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function UMG.ComboBoxString.FindOptionIndex
struct FFindOptionIndex
{
	struct FString Option;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function UMG.ComboBoxString.GetOptionAtIndex
struct FGetOptionAtIndex
{
	int32_t Index;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FString ReturnValue;  // 0x8 (0x8)


}; 
 
 // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
struct FOnSpinBoxValueCommittedEvent__DelegateSignature
{
	float InValue;  // 0x0 (0x0)
	enum class ETextCommit CommitMethod;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function UMG.RichTextBlock.SetDecorators
struct FSetDecorators
{
	struct TArray<URichTextBlockDecorator*> InDecoratorClasses;  // 0x0 (0x0)


}; 
 
 // Function UMG.ComboBoxString.GetOptionCount
struct FGetOptionCount
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.ComboBoxString.GetSelectedIndex
struct FGetSelectedIndex
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.ListView.SetSelectedIndex
struct FSetSelectedIndex
{
	int32_t Index;  // 0x0 (0x0)


}; 
 
 // Function UMG.MultiLineEditableText.GetFont
struct FGetFont
{
	struct FSlateFontInfo ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetInteractionComponent.ReleaseKey
struct FReleaseKey
{
	struct FKey Key;  // 0x0 (0x0)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function UMG.MultiLineEditableTextBox.GetHintText
struct FGetHintText
{
	struct FText ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.EditableText.GetJustification
struct FGetJustification
{
	enum class ETextJustify ReturnValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.OnCheckBoxComponentStateChanged__DelegateSignature
struct FOnCheckBoxComponentStateChanged__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsChecked : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct UMG.SequenceTickManagerWidgetData
struct FSequenceTickManagerWidgetData
{
	char pad_0[3];  // 0x0 (0x0)


}; 
 
 // Function UMG.RichTextBlock.GetText
struct FGetText
{
	struct FText ReturnValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
struct FOnEditableTextChangedEvent__DelegateSignature
{
	struct FText Text;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
struct FOnEditableTextCommittedEvent__DelegateSignature
{
	struct FText Text;  // 0x0 (0x0)
	enum class ETextCommit CommitMethod;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function UMG.DynamicEntryBoxBase.GetAllEntries
struct FGetAllEntries
{
	struct TArray<struct UUserWidget*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.TextBlock.SetFont
struct FSetFont
{
	struct FSlateFontInfo InFontInfo;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.OnAddedToFocusPath
struct FOnAddedToFocusPath
{
	struct FFocusEvent InFocusEvent;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.OnKeyUp
struct FOnKeyUp
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FKeyEvent InKeyEvent;  // 0x40 (0x40)
	struct FEventReply ReturnValue;  // 0x80 (0x80)


}; 
 
 // Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
struct FSlotAsBorderSlot
{
	struct UWidget* Widget;  // 0x0 (0x0)
	struct UBorderSlot* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.TextBlock.SetFontMaterial
struct FSetFontMaterial
{
	struct UMaterialInterface* InMaterial;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.OnPreviewKeyDown
struct FOnPreviewKeyDown
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FKeyEvent InKeyEvent;  // 0x40 (0x40)
	struct FEventReply ReturnValue;  // 0x80 (0x80)


}; 
 
 // Function UMG.WidgetComponent.GetManuallyRedraw
struct FGetManuallyRedraw
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetAnimation.GetEndTime
struct FGetEndTime
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.TextBlock.SetFontOutlineMaterial
struct FSetFontOutlineMaterial
{
	struct UMaterialInterface* InMaterial;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.IsListeningForInputAction
struct FIsListeningForInputAction
{
	struct FName ActionName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function UMG.WidgetComponent.GetMaterialInstance
struct FGetMaterialInstance
{
	struct UMaterialInstanceDynamic* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.MultiLineEditableTextBox.SetHintText
struct FSetHintText
{
	struct FText InHintText;  // 0x0 (0x0)


}; 
 
 // Function UMG.EditableTextBox.SetIsPassword
struct FSetIsPassword
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsPassword : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
struct FCreatePlayAnimationTimeRangeProxyObject
{
	struct UUMGSequencePlayer* Result;  // 0x0 (0x0)
	struct UUserWidget* Widget;  // 0x8 (0x8)
	struct UWidgetAnimation* InAnimation;  // 0x10 (0x10)
	float StartAtTime;  // 0x18 (0x18)
	float EndAtTime;  // 0x1C (0x1C)
	int32_t NumLoopsToPlay;  // 0x20 (0x20)
	enum class EUMGSequencePlayMode PlayMode;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	float PlaybackSpeed;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct UWidgetAnimationPlayCallbackProxy* ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function UMG.UserWidget.IsAnyAnimationPlaying
struct FIsAnyAnimationPlaying
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.MultiLineEditableTextBox.SetIsReadOnly
struct FSetIsReadOnly
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bReadOnly : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.TextLayoutWidget.SetJustification
struct FSetJustification
{
	enum class ETextJustify InJustification;  // 0x0 (0x0)


}; 
 
 // Function UMG.EditableText.SetMinimumDesiredWidth
struct FSetMinimumDesiredWidth
{
	float InMinDesiredWidth;  // 0x0 (0x0)


}; 
 
 // Function UMG.ListView.BP_GetSelectedItems
struct FBP_GetSelectedItems
{
	struct TArray<struct UObject*> Items;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function UMG.RichTextBlock.SetText
struct FSetText
{
	struct FText InText;  // 0x0 (0x0)


}; 
 
 // Function UMG.RichTextBlock.SetTextOverflowPolicy
struct FSetTextOverflowPolicy
{
	uint8_t InOverflowPolicy;  // 0x0 (0x0)


}; 
 
 // Function UMG.SpinBox.GetMaxValue
struct FGetMaxValue
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct UMG.ShapedTextOptions
struct FShapedTextOptions
{
	char bOverride_TextShapingMethod : 1;  // 0x0 (0x0)
	char bOverride_TextFlowDirection : 1;  // 0x0 (0x0)
	char pad_0_1 : 6;  // 0x0 (0x0)
	uint8_t TextShapingMethod;  // 0x1 (0x1)
	uint8_t TextFlowDirection;  // 0x2 (0x2)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.ClearUserFocus
struct FClearUserFocus
{
	struct FEventReply Reply;  // 0x0 (0x0)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool bInAllUsers : 1;  // 0xB8 (0xB8)
	char pad_185[7];  // 0xB9 (0xB9)
	struct FEventReply ReturnValue;  // 0xC0 (0xC0)


}; 
 
 // Function UMG.UserWidget.AddToViewport
struct FAddToViewport
{
	int32_t ZOrder;  // 0x0 (0x0)


}; 
 
 // Function UMG.TextBinding.GetStringValue
struct FGetStringValue
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.EditableTextBox.HasError
struct FHasError
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.SpinBox.SetMaxSliderValue
struct FSetMaxSliderValue
{
	float NewValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.GetAnimationCurrentTime
struct FGetAnimationCurrentTime
{
	struct UWidgetAnimation* InAnimation;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
struct FOnEditableTextBoxChangedEvent__DelegateSignature
{
	struct FText Text;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
struct FOnEditableTextBoxCommittedEvent__DelegateSignature
{
	struct FText Text;  // 0x0 (0x0)
	enum class ETextCommit CommitMethod;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function UMG.UserWidget.RemoveExtensions
struct FRemoveExtensions
{
	UUserWidgetExtension* InExtensionType;  // 0x0 (0x0)


}; 
 
 // Function UMG.MultiLineEditableTextBox.SetError
struct FSetError
{
	struct FText InError;  // 0x0 (0x0)


}; 
 
 // Function UMG.CheckBox.IsPressed
struct FIsPressed
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.SetForegroundColor
struct FSetForegroundColor
{
	struct FSlateColor InForegroundColor;  // 0x0 (0x0)


}; 
 
 // Function UMG.PanelWidget.GetAllChildren
struct FGetAllChildren
{
	struct TArray<struct UWidget*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.Create
struct FCreate
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	UUserWidget* WidgetType;  // 0x8 (0x8)
	struct APlayerController* OwningPlayer;  // 0x10 (0x10)
	struct UUserWidget* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function UMG.InputKeySelector.GetIsSelectingKey
struct FGetIsSelectingKey
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetComponent.SetGeometryMode
struct FSetGeometryMode
{
	uint8_t InGeometryMode;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetComponent.SetWidgetSpace
struct FSetWidgetSpace
{
	uint8_t NewSpace;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
struct FOnKeySelected__DelegateSignature
{
	struct FInputChord SelectedKey;  // 0x0 (0x0)


}; 
 
 // Function UMG.InputKeySelector.SetAllowGamepadKeys
struct FSetAllowGamepadKeys
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInAllowGamepadKeys : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
struct FCreateDragDropOperation
{
	UDragDropOperation* OperationClass;  // 0x0 (0x0)
	struct UDragDropOperation* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.InputKeySelector.SetAllowModifierKeys
struct FSetAllowModifierKeys
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInAllowModifierKeys : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.StopListeningForInputAction
struct FStopListeningForInputAction
{
	struct FName ActionName;  // 0x0 (0x0)
	enum class EInputEvent EventType;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function UMG.UserWidget.IsAnimationPlaying
struct FIsAnimationPlaying
{
	struct UWidgetAnimation* InAnimation;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function UMG.InputKeySelector.SetEscapeKeys
struct FSetEscapeKeys
{
	struct TArray<struct FKey> InKeys;  // 0x0 (0x0)


}; 
 
 // Function UMG.SlateBlueprintLibrary.GetLocalTopLeft
struct FGetLocalTopLeft
{
	struct FGeometry Geometry;  // 0x0 (0x0)
	struct FVector2D ReturnValue;  // 0x40 (0x40)


}; 
 
 // Function UMG.InputKeySelector.SetNoKeySpecifiedText
struct FSetNoKeySpecifiedText
{
	struct FText InNoKeySpecifiedText;  // 0x0 (0x0)


}; 
 
 // Function UMG.BackgroundBlur.SetBlurRadius
struct FSetBlurRadius
{
	int32_t InBlurRadius;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetComponent.SetPivot
struct FSetPivot
{
	struct FVector2D InPivot;  // 0x0 (0x0)


}; 
 
 // Function UMG.InputKeySelector.SetSelectedKey
struct FSetSelectedKey
{
	struct FInputChord InSelectedKey;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetInteractionComponent.SetFocus
struct FSetFocus
{
	struct UWidget* FocusWidget;  // 0x0 (0x0)


}; 
 
 // Function UMG.InputKeySelector.SetTextBlockVisibility
struct FSetTextBlockVisibility
{
	uint8_t Invisibility;  // 0x0 (0x0)


}; 
 
 // ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
struct FBlueprintWidgetAnimationDelegateBinding
{
	uint8_t Action;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FName AnimationToBind;  // 0x4 (0x4)
	struct FName FunctionNameToBind;  // 0xC (0xC)
	struct FName UserTag;  // 0x14 (0x14)


}; 
 
 // Function UMG.WidgetInteractionComponent.SendKeyChar
struct FSendKeyChar
{
	struct FString Characters;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bRepeat : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool ReturnValue : 1;  // 0x11 (0x11)
	char pad_18[6];  // 0x12 (0x12)


}; 
 
 // Function UMG.PanelWidget.AddChild
struct FAddChild
{
	struct UWidget* Content;  // 0x0 (0x0)
	struct UPanelSlot* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.UserWidget.RemoveExtension
struct FRemoveExtension
{
	struct UUserWidgetExtension* InExtension;  // 0x0 (0x0)


}; 
 
 // Function UMG.PanelWidget.GetChildAt
struct FGetChildAt
{
	int32_t Index;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UWidget* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.WidgetInteractionComponent.PressAndReleaseKey
struct FPressAndReleaseKey
{
	struct FKey Key;  // 0x0 (0x0)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function UMG.CheckBox.GetCheckedState
struct FGetCheckedState
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.PanelWidget.GetChildIndex
struct FGetChildIndex
{
	struct UWidget* Content;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.GetBrushResource
struct FGetBrushResource
{
	struct FSlateBrush Brush;  // 0x0 (0x0)
	struct UObject* ReturnValue;  // 0xD0 (0xD0)
	char pad_216[8];  // 0xD8 (0xD8)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.Handled
struct FHandled
{
	struct FEventReply ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WrapBoxSlot.SetHorizontalAlignment
struct FSetHorizontalAlignment
{
	enum class EHorizontalAlignment InHorizontalAlignment;  // 0x0 (0x0)


}; 
 
 // Function UMG.PanelWidget.HasAnyChildren
struct FHasAnyChildren
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.PanelWidget.HasChild
struct FHasChild
{
	struct UWidget* Content;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function UMG.PanelWidget.RemoveChild
struct FRemoveChild
{
	struct UWidget* Content;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function UMG.PanelWidget.RemoveChildAt
struct FRemoveChildAt
{
	int32_t Index;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function UMG.CheckBox.SetIsChecked
struct FSetIsChecked
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InIsChecked : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.ContentWidget.GetContent
struct FGetContent
{
	struct UWidget* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.SpinBox.GetMinFractionalDigits
struct FGetMinFractionalDigits
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.Button.SetStyle
struct FSetStyle
{
	struct FButtonStyle InStyle;  // 0x0 (0x0)


}; 
 
 // Function UMG.ContentWidget.GetContentSlot
struct FGetContentSlot
{
	struct UPanelSlot* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.ContentWidget.SetContent
struct FSetContent
{
	struct UWidget* Content;  // 0x0 (0x0)
	struct UPanelSlot* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.MenuAnchor.FitInWindow
struct FFitInWindow
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bFit : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.Slider.SetSliderHandleColor
struct FSetSliderHandleColor
{
	struct FLinearColor InValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.MenuAnchor.GetMenuPosition
struct FGetMenuPosition
{
	struct FVector2D ReturnValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature
struct FGetUserWidget__DelegateSignature
{
	struct UUserWidget* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.MenuAnchor.HasOpenSubMenus
struct FHasOpenSubMenus
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.MenuAnchor.Open
struct FOpen
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bFocusMenu : 1;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.OnVisibilityChangedEvent__DelegateSignature
struct FOnVisibilityChangedEvent__DelegateSignature
{
	uint8_t Invisibility;  // 0x0 (0x0)


}; 
 
 // Function UMG.CircularThrobber.SetPeriod
struct FSetPeriod
{
	float InPeriod;  // 0x0 (0x0)


}; 
 
 // Function UMG.MenuAnchor.SetPlacement
struct FSetPlacement
{
	enum class EMenuPlacement InPlacement;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.IsAnimationPlayingForward
struct FIsAnimationPlayingForward
{
	struct UWidgetAnimation* InAnimation;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function UMG.MenuAnchor.ShouldOpenDueToClick
struct FShouldOpenDueToClick
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.RichTextBlock.GetDefaultDynamicMaterial
struct FGetDefaultDynamicMaterial
{
	struct UMaterialInstanceDynamic* ReturnValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.OnMenuOpenChangedEvent__DelegateSignature
struct FOnMenuOpenChangedEvent__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsOpen : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.NoResourceBrush
struct FNoResourceBrush
{
	struct FSlateBrush ReturnValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.DownloadImageDelegate__DelegateSignature
struct FDownloadImageDelegate__DelegateSignature
{
	struct UTexture2DDynamic* Texture;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.OnDragDropMulticast__DelegateSignature
struct FOnDragDropMulticast__DelegateSignature
{
	struct UDragDropOperation* Operation;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.OnTouchGesture
struct FOnTouchGesture
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FPointerEvent GestureEvent;  // 0x40 (0x40)
	struct FEventReply ReturnValue;  // 0xD8 (0xD8)


}; 
 
 // DelegateFunction UMG.OnGetItemChildrenDynamic__DelegateSignature
struct FOnGetItemChildrenDynamic__DelegateSignature
{
	struct UObject* Item;  // 0x0 (0x0)
	struct TArray<struct UObject*> Children;  // 0x8 (0x8)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
struct FSetInputMode_UIOnlyEx
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)
	struct UWidget* InWidgetToFocus;  // 0x8 (0x8)
	uint8_t InMouseLockMode;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool bFlushInput : 1;  // 0x11 (0x11)
	char pad_18[6];  // 0x12 (0x12)


}; 
 
 // Function UMG.DragDropOperation.DragCancelled
struct FDragCancelled
{
	struct FPointerEvent PointerEvent;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.OnHoveredWidgetChanged__DelegateSignature
struct FOnHoveredWidgetChanged__DelegateSignature
{
	struct UWidgetComponent* WidgetComponent;  // 0x0 (0x0)
	struct UWidgetComponent* PreviousWidgetComponent;  // 0x8 (0x8)


}; 
 
 // DelegateFunction UMG.OnItemExpansionChangedDynamic__DelegateSignature
struct FOnItemExpansionChangedDynamic__DelegateSignature
{
	struct UObject* Item;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bIsExpanded : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // DelegateFunction UMG.OnListEntryGeneratedDynamic__DelegateSignature
struct FOnListEntryGeneratedDynamic__DelegateSignature
{
	struct UUserWidget* Widget;  // 0x0 (0x0)


}; 
 
 // Function UMG.ScrollBox.SetNavigationDestination
struct FSetNavigationDestination
{
	uint8_t NewNavigationDestination;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.OnListEntryInitializedDynamic__DelegateSignature
struct FOnListEntryInitializedDynamic__DelegateSignature
{
	struct UObject* Item;  // 0x0 (0x0)
	struct UUserWidget* Widget;  // 0x8 (0x8)


}; 
 
 // DelegateFunction UMG.OnListEntryReleasedDynamic__DelegateSignature
struct FOnListEntryReleasedDynamic__DelegateSignature
{
	struct UUserWidget* Widget;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.OnListItemScrolledIntoViewDynamic__DelegateSignature
struct FOnListItemScrolledIntoViewDynamic__DelegateSignature
{
	struct UObject* Item;  // 0x0 (0x0)
	struct UUserWidget* Widget;  // 0x8 (0x8)


}; 
 
 // ScriptStruct UMG.PaintContext
struct FPaintContext
{
	char pad_0[48];  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.OnListItemSelectionChangedDynamic__DelegateSignature
struct FOnListItemSelectionChangedDynamic__DelegateSignature
{
	struct UObject* Item;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bIsSelected : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function UMG.ListView.BP_IsItemVisible
struct FBP_IsItemVisible
{
	struct UObject* Item;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // DelegateFunction UMG.OnUserScrolledEvent__DelegateSignature
struct FOnUserScrolledEvent__DelegateSignature
{
	float CurrentOffset;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.SimpleListItemEventDynamic__DelegateSignature
struct FSimpleListItemEventDynamic__DelegateSignature
{
	struct UObject* Item;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
struct FOnMultiLineEditableTextChangedEvent__DelegateSignature
{
	struct FText Text;  // 0x0 (0x0)


}; 
 
 // Function UMG.ListView.BP_NavigateToItem
struct FBP_NavigateToItem
{
	struct UObject* Item;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.PauseAnimation
struct FPauseAnimation
{
	struct UWidgetAnimation* InAnimation;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function UMG.WidgetComponent.GetWidget
struct FGetWidget
{
	struct UUserWidget* ReturnValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
struct FOnMultiLineEditableTextCommittedEvent__DelegateSignature
{
	struct FText Text;  // 0x0 (0x0)
	enum class ETextCommit CommitMethod;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function UMG.MultiLineEditableText.SetWidgetStyle
struct FSetWidgetStyle
{
	struct FTextBlockStyle InWidgetStyle;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
struct FOnMultiLineEditableTextBoxChangedEvent__DelegateSignature
{
	struct FText Text;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetComponent.GetGeometryMode
struct FGetGeometryMode
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
struct FOnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
{
	struct FText Text;  // 0x0 (0x0)
	enum class ETextCommit CommitMethod;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function UMG.UserWidget.SetPlaybackSpeed
struct FSetPlaybackSpeed
{
	struct UWidgetAnimation* InAnimation;  // 0x0 (0x0)
	float PlaybackSpeed;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function UMG.MultiLineEditableTextBox.SetTextStyle
struct FSetTextStyle
{
	struct FTextBlockStyle InTextStyle;  // 0x0 (0x0)


}; 
 
 // Function UMG.SpinBox.GetAlwaysUsesDeltaSnap
struct FGetAlwaysUsesDeltaSnap
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.SpinBox.GetMaxFractionalDigits
struct FGetMaxFractionalDigits
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.SpinBox.GetMaxSliderValue
struct FGetMaxSliderValue
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.BackgroundBlur.SetBlurStrength
struct FSetBlurStrength
{
	float InStrength;  // 0x0 (0x0)


}; 
 
 // Function UMG.ColorBinding.GetSlateValue
struct FGetSlateValue
{
	struct FSlateColor ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.SpinBox.GetMinSliderValue
struct FGetMinSliderValue
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
struct FTransformScalarAbsoluteToLocal
{
	struct FGeometry Geometry;  // 0x0 (0x0)
	float AbsoluteScalar;  // 0x40 (0x40)
	float ReturnValue;  // 0x44 (0x44)


}; 
 
 // Function UMG.SpinBox.GetMinValue
struct FGetMinValue
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
struct FGetBrushResourceAsMaterial
{
	struct FSlateBrush Brush;  // 0x0 (0x0)
	struct UMaterialInterface* ReturnValue;  // 0xD0 (0xD0)
	char pad_216[8];  // 0xD8 (0xD8)


}; 
 
 // Function UMG.SpinBox.SetAlwaysUsesDeltaSnap
struct FSetAlwaysUsesDeltaSnap
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bNewValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetInteractionComponent.PressKey
struct FPressKey
{
	struct FKey Key;  // 0x0 (0x0)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bRepeat : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool ReturnValue : 1;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)


}; 
 
 // Function UMG.ListView.BP_SetItemSelection
struct FBP_SetItemSelection
{
	struct UObject* Item;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bSelected : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function UMG.SpinBox.SetDelta
struct FSetDelta
{
	float NewValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.SpinBox.SetMaxFractionalDigits
struct FSetMaxFractionalDigits
{
	int32_t NewValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.Slider.SetMaxValue
struct FSetMaxValue
{
	float InValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.SpinBox.SetMinSliderValue
struct FSetMinSliderValue
{
	float NewValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.Slider.SetMinValue
struct FSetMinValue
{
	float InValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.CaptureMouse
struct FCaptureMouse
{
	struct FEventReply Reply;  // 0x0 (0x0)
	struct UWidget* CapturingWidget;  // 0xB8 (0xB8)
	struct FEventReply ReturnValue;  // 0xC0 (0xC0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
struct FMakeBrushFromMaterial
{
	struct UMaterialInterface* Material;  // 0x0 (0x0)
	int32_t Width;  // 0x8 (0x8)
	int32_t Height;  // 0xC (0xC)
	struct FSlateBrush ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function UMG.UniformGridPanel.SetSlotPadding
struct FSetSlotPadding
{
	struct FMargin InSlotPadding;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.DetectDrag
struct FDetectDrag
{
	struct FEventReply Reply;  // 0x0 (0x0)
	struct UWidget* WidgetDetectingDrag;  // 0xB8 (0xB8)
	struct FKey DragKey;  // 0xC0 (0xC0)
	struct FEventReply ReturnValue;  // 0xD8 (0xD8)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
struct FDetectDragIfPressed
{
	struct FPointerEvent PointerEvent;  // 0x0 (0x0)
	struct UWidget* WidgetDetectingDrag;  // 0x98 (0x98)
	struct FKey DragKey;  // 0xA0 (0xA0)
	struct FEventReply ReturnValue;  // 0xB8 (0xB8)


}; 
 
 // Function UMG.ScrollBox.ScrollWidgetIntoView
struct FScrollWidgetIntoView
{
	struct UWidget* WidgetToFind;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool AnimateScroll : 1;  // 0x8 (0x8)
	uint8_t ScrollDestination;  // 0x9 (0x9)
	char pad_10[2];  // 0xA (0xA)
	float Padding;  // 0xC (0xC)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.DrawBox
struct FDrawBox
{
	struct FPaintContext Context;  // 0x0 (0x0)
	struct FVector2D Position;  // 0x30 (0x30)
	struct FVector2D Size;  // 0x40 (0x40)
	struct USlateBrushAsset* Brush;  // 0x50 (0x50)
	struct FLinearColor Tint;  // 0x58 (0x58)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.DrawLine
struct FDrawLine
{
	struct FPaintContext Context;  // 0x0 (0x0)
	struct FVector2D PositionA;  // 0x30 (0x30)
	struct FVector2D PositionB;  // 0x40 (0x40)
	struct FLinearColor Tint;  // 0x50 (0x50)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool bAntiAlias : 1;  // 0x60 (0x60)
	char pad_97[3];  // 0x61 (0x61)
	float Thickness;  // 0x64 (0x64)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.DrawLines
struct FDrawLines
{
	struct FPaintContext Context;  // 0x0 (0x0)
	struct TArray<struct FVector2D> Points;  // 0x30 (0x30)
	struct FLinearColor Tint;  // 0x40 (0x40)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool bAntiAlias : 1;  // 0x50 (0x50)
	char pad_81[3];  // 0x51 (0x51)
	float Thickness;  // 0x54 (0x54)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.DrawSpline
struct FDrawSpline
{
	struct FPaintContext Context;  // 0x0 (0x0)
	struct FVector2D Start;  // 0x30 (0x30)
	struct FVector2D StartDir;  // 0x40 (0x40)
	struct FVector2D End;  // 0x50 (0x50)
	struct FVector2D EndDir;  // 0x60 (0x60)
	struct FLinearColor Tint;  // 0x70 (0x70)
	float Thickness;  // 0x80 (0x80)
	char pad_132[4];  // 0x84 (0x84)


}; 
 
 // Function UMG.SizeBox.SetMaxAspectRatio
struct FSetMaxAspectRatio
{
	float InMaxAspectRatio;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.DrawText
struct FDrawText
{
	struct FPaintContext Context;  // 0x0 (0x0)
	struct FString InString;  // 0x30 (0x30)
	struct FVector2D Position;  // 0x40 (0x40)
	struct FLinearColor Tint;  // 0x50 (0x50)


}; 
 
 // Function UMG.CanvasPanelSlot.SetAutoSize
struct FSetAutoSize
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InbAutoSize : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.EndDragDrop
struct FEndDragDrop
{
	struct FEventReply Reply;  // 0x0 (0x0)
	struct FEventReply ReturnValue;  // 0xB8 (0xB8)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
struct FGetAllWidgetsWithInterface
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct TArray<struct UUserWidget*> FoundWidgets;  // 0x8 (0x8)
	UInterface* Interface;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool TopLevelOnly : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
struct FGetBrushResourceAsTexture2D
{
	struct FSlateBrush Brush;  // 0x0 (0x0)
	struct UTexture2D* ReturnValue;  // 0xD0 (0xD0)
	char pad_216[8];  // 0xD8 (0xD8)


}; 
 
 // Function UMG.Border.SetContentColorAndOpacity
struct FSetContentColorAndOpacity
{
	struct FLinearColor InContentColorAndOpacity;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
struct FGetDragDroppingContent
{
	struct UDragDropOperation* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
struct FSetHardwareCursor
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	enum class EMouseCursor CursorShape;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	struct FName CursorName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct FVector2D HotSpot;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool ReturnValue : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // Function UMG.ListView.GetItemAt
struct FGetItemAt
{
	int32_t Index;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UObject* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.Image.GetDynamicMaterial
struct FGetDynamicMaterial
{
	struct UMaterialInstanceDynamic* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
struct FGetInputEventFromCharacterEvent
{
	struct FCharacterEvent Event;  // 0x0 (0x0)
	struct FInputEvent ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function UMG.UserWidget.OnTouchMoved
struct FOnTouchMoved
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FPointerEvent InTouchEvent;  // 0x40 (0x40)
	struct FEventReply ReturnValue;  // 0xD8 (0xD8)


}; 
 
 // Function UMG.SizeBox.SetMinDesiredWidth
struct FSetMinDesiredWidth
{
	float InMinDesiredWidth;  // 0x0 (0x0)


}; 
 
 // Function UMG.ScrollBox.SetAlwaysShowScrollbar
struct FSetAlwaysShowScrollbar
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool NewAlwaysShowScrollbar : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
struct FGetInputEventFromNavigationEvent
{
	struct FNavigationEvent Event;  // 0x0 (0x0)
	struct FInputEvent ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function UMG.UserWidget.OnAnimationStarted
struct FOnAnimationStarted
{
	struct UWidgetAnimation* Animation;  // 0x0 (0x0)


}; 
 
 // Function UMG.BackgroundBlur.SetCornerRadius
struct FSetCornerRadius
{
	struct FVector4 InCornerRadius;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
struct FGetInputEventFromPointerEvent
{
	struct FPointerEvent Event;  // 0x0 (0x0)
	struct FInputEvent ReturnValue;  // 0x98 (0x98)


}; 
 
 // Function UMG.SlateBlueprintLibrary.ScreenToViewport
struct FScreenToViewport
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FVector2D ScreenPosition;  // 0x8 (0x8)
	struct FVector2D ViewportPosition;  // 0x18 (0x18)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
struct FGetKeyEventFromAnalogInputEvent
{
	struct FAnalogInputEvent Event;  // 0x0 (0x0)
	struct FKeyEvent ReturnValue;  // 0x48 (0x48)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
struct FGetSafeZonePadding
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FVector4 SafePadding;  // 0x10 (0x10)
	struct FVector2D SafePaddingScale;  // 0x30 (0x30)
	struct FVector4 SpillOverPadding;  // 0x40 (0x40)


}; 
 
 // Function UMG.ListView.NavigateToIndex
struct FNavigateToIndex
{
	int32_t Index;  // 0x0 (0x0)


}; 
 
 // Function UMG.Image.SetBrushFromTextureDynamic
struct FSetBrushFromTextureDynamic
{
	struct UTexture2DDynamic* Texture;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bMatchSize : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.IsDragDropping
struct FIsDragDropping
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
struct FMakeBrushFromAsset
{
	struct USlateBrushAsset* BrushAsset;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FSlateBrush ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
struct FReleaseJoystickCapture
{
	struct FEventReply Reply;  // 0x0 (0x0)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool bInAllJoysticks : 1;  // 0xB8 (0xB8)
	char pad_185[7];  // 0xB9 (0xB9)
	struct FEventReply ReturnValue;  // 0xC0 (0xC0)


}; 
 
 // Function UMG.TileView.SetEntryHeight
struct FSetEntryHeight
{
	float NewHeight;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
struct FSetBrushResourceToMaterial
{
	struct FSlateBrush Brush;  // 0x0 (0x0)
	struct UMaterialInterface* Material;  // 0xD0 (0xD0)
	char pad_216[8];  // 0xD8 (0xD8)


}; 
 
 // Function UMG.Image.SetBrushFromAtlasInterface
struct FSetBrushFromAtlasInterface
{
	struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bMatchSize : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
struct FSetBrushResourceToTexture
{
	struct FSlateBrush Brush;  // 0x0 (0x0)
	struct UTexture2D* Texture;  // 0xD0 (0xD0)
	char pad_216[8];  // 0xD8 (0xD8)


}; 
 
 // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
struct FSetMinDesiredSlotWidth
{
	float InMinDesiredSlotWidth;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType
struct FSetColorVisionDeficiencyType
{
	uint8_t Type;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float Severity;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool CorrectDeficiency : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool ShowCorrectionWithDeficiency : 1;  // 0x9 (0x9)
	char pad_10[2];  // 0xA (0xA)


}; 
 
 // Function UMG.DynamicEntryBoxBase.GetNumEntries
struct FGetNumEntries
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.TextBinding.GetTextValue
struct FGetTextValue
{
	struct FText ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
struct FSetInputMode_GameAndUIEx
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)
	struct UWidget* InWidgetToFocus;  // 0x8 (0x8)
	uint8_t InMouseLockMode;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool bHideCursorDuringCapture : 1;  // 0x11 (0x11)
	char pad_18_1 : 7;  // 0x12 (0x12)
	bool bFlushInput : 1;  // 0x12 (0x12)
	char pad_19[5];  // 0x13 (0x13)


}; 
 
 // Function UMG.WidgetComponent.SetTickWhenOffscreen
struct FSetTickWhenOffscreen
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bWantTickWhenOffscreen : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
struct FSetInputMode_GameOnly
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bFlushInput : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.SetMousePosition
struct FSetMousePosition
{
	struct FEventReply Reply;  // 0x0 (0x0)
	struct FVector2D NewMousePosition;  // 0xB8 (0xB8)
	struct FEventReply ReturnValue;  // 0xC8 (0xC8)


}; 
 
 // Function UMG.WidgetSwitcher.SetActiveWidgetIndex
struct FSetActiveWidgetIndex
{
	int32_t Index;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
struct FSetWindowTitleBarOnCloseClickedDelegate
{
	struct FDelegate Delegate;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
struct FSetWindowTitleBarState
{
	struct UWidget* TitleBarContent;  // 0x0 (0x0)
	uint8_t Mode;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool bTitleBarDragEnabled : 1;  // 0x9 (0x9)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool bWindowButtonsVisible : 1;  // 0xA (0xA)
	char pad_11_1 : 7;  // 0xB (0xB)
	bool bTitleBarVisible : 1;  // 0xB (0xB)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.Unhandled
struct FUnhandled
{
	struct FEventReply ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct UMG.AnchorData
struct FAnchorData
{
	struct FMargin Offsets;  // 0x0 (0x0)
	struct FAnchors Anchors;  // 0x10 (0x10)
	struct FVector2D Alignment;  // 0x30 (0x30)


}; 
 
 // Function UMG.WidgetInteractionComponent.PressPointerKey
struct FPressPointerKey
{
	struct FKey Key;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetBlueprintLibrary.UnlockMouse
struct FUnlockMouse
{
	struct FEventReply Reply;  // 0x0 (0x0)
	struct FEventReply ReturnValue;  // 0xB8 (0xB8)


}; 
 
 // Function UMG.Image.SetBrush
struct FSetBrush
{
	struct FSlateBrush InBrush;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserListEntry.BP_OnItemExpansionChanged
struct FBP_OnItemExpansionChanged
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsExpanded : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.ScrollBox.GetScrollOffsetOfEnd
struct FGetScrollOffsetOfEnd
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.RichTextBlock.SetDefaultTextStyle
struct FSetDefaultTextStyle
{
	struct FTextBlockStyle InDefaultTextStyle;  // 0x0 (0x0)


}; 
 
 // Function UMG.Border.SetBrushColor
struct FSetBrushColor
{
	struct FLinearColor InBrushColor;  // 0x0 (0x0)


}; 
 
 // Function UMG.Image.SetBrushFromAsset
struct FSetBrushFromAsset
{
	struct USlateBrushAsset* Asset;  // 0x0 (0x0)


}; 
 
 // Function UMG.Image.SetBrushFromMaterial
struct FSetBrushFromMaterial
{
	struct UMaterialInterface* Material;  // 0x0 (0x0)


}; 
 
 // Function UMG.ListViewBase.SetWheelScrollMultiplier
struct FSetWheelScrollMultiplier
{
	float NewWheelScrollMultiplier;  // 0x0 (0x0)


}; 
 
 // Function UMG.Image.SetBrushFromTexture
struct FSetBrushFromTexture
{
	struct UTexture2D* Texture;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bMatchSize : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function UMG.UserWidget.OnDragOver
struct FOnDragOver
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FPointerEvent PointerEvent;  // 0x40 (0x40)
	struct UDragDropOperation* Operation;  // 0xD8 (0xD8)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool ReturnValue : 1;  // 0xE0 (0xE0)
	char pad_225[7];  // 0xE1 (0xE1)


}; 
 
 // Function UMG.WidgetInteractionComponent.SetCustomHitResult
struct FSetCustomHitResult
{
	struct FHitResult HitResult;  // 0x0 (0x0)


}; 
 
 // Function UMG.Border.SetDesiredSizeScale
struct FSetDesiredSizeScale
{
	struct FVector2D InScale;  // 0x0 (0x0)


}; 
 
 // Function UMG.WrapBoxSlot.SetPadding
struct FSetPadding
{
	struct FMargin InPadding;  // 0x0 (0x0)


}; 
 
 // Function UMG.Border.SetShowEffectWhenDisabled
struct FSetShowEffectWhenDisabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInShowEffectWhenDisabled : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.ListView.GetNumItems
struct FGetNumItems
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WrapBoxSlot.SetVerticalAlignment
struct FSetVerticalAlignment
{
	enum class EVerticalAlignment InVerticalAlignment;  // 0x0 (0x0)


}; 
 
 // Function UMG.TextBlock.GetDynamicOutlineMaterial
struct FGetDynamicOutlineMaterial
{
	struct UMaterialInstanceDynamic* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.RichTextBlock.SetAutoWrapText
struct FSetAutoWrapText
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InAutoTextWrap : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.Image.SetColorAndOpacity
struct FSetColorAndOpacity
{
	struct FLinearColor InColorAndOpacity;  // 0x0 (0x0)


}; 
 
 // Function UMG.RichTextBlock.GetDecoratorByClass
struct FGetDecoratorByClass
{
	URichTextBlockDecorator* DecoratorClass;  // 0x0 (0x0)
	struct URichTextBlockDecorator* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.TextBlock.SetStrikeBrush
struct FSetStrikeBrush
{
	struct FSlateBrush InStrikeBrush;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.PreConstruct
struct FPreConstruct
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsDesignTime : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.WrapBox.SetInnerSlotPadding
struct FSetInnerSlotPadding
{
	struct FVector2D InPadding;  // 0x0 (0x0)


}; 
 
 // Function UMG.RichTextBlock.SetTextTransformPolicy
struct FSetTextTransformPolicy
{
	uint8_t InTransformPolicy;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.AddExtension
struct FAddExtension
{
	UUserWidgetExtension* InExtensionType;  // 0x0 (0x0)
	struct UUserWidgetExtension* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.UserWidget.AddToPlayerScreen
struct FAddToPlayerScreen
{
	int32_t ZOrder;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function UMG.UserWidget.BindToAnimationEvent
struct FBindToAnimationEvent
{
	struct UWidgetAnimation* Animation;  // 0x0 (0x0)
	struct FDelegate Delegate;  // 0x8 (0x8)
	uint8_t AnimationEvent;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	struct FName UserTag;  // 0x1C (0x1C)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function UMG.WidgetComponent.SetRedrawTime
struct FSetRedrawTime
{
	float InRedrawTime;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetAnimation.BindToAnimationFinished
struct FBindToAnimationFinished
{
	struct UUserWidget* Widget;  // 0x0 (0x0)
	struct FDelegate Delegate;  // 0x8 (0x8)


}; 
 
 // Function UMG.UserWidget.GetAlignmentInViewport
struct FGetAlignmentInViewport
{
	struct FVector2D ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.GetExtensions
struct FGetExtensions
{
	UUserWidgetExtension* ExtensionType;  // 0x0 (0x0)
	struct TArray<struct UUserWidgetExtension*> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.RetainerBox.GetEffectMaterial
struct FGetEffectMaterial
{
	struct UMaterialInstanceDynamic* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.CanvasPanelSlot.GetAnchors
struct FGetAnchors
{
	struct FAnchors ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.GetIsVisible
struct FGetIsVisible
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.GetOwningPlayerCameraManager
struct FGetOwningPlayerCameraManager
{
	struct APlayerCameraManager* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.IsInteractable
struct FIsInteractable
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.IsPlayingAnimation
struct FIsPlayingAnimation
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.ListenForInputAction
struct FListenForInputAction
{
	struct FName ActionName;  // 0x0 (0x0)
	enum class EInputEvent EventType;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool bConsume : 1;  // 0x9 (0x9)
	char pad_10[2];  // 0xA (0xA)
	struct FDelegate Callback;  // 0xC (0xC)


}; 
 
 // Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
struct FSlotAsUniformGridSlot
{
	struct UWidget* Widget;  // 0x0 (0x0)
	struct UUniformGridSlot* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.UserWidget.OnAnalogValueChanged
struct FOnAnalogValueChanged
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FAnalogInputEvent InAnalogInputEvent;  // 0x40 (0x40)
	struct FEventReply ReturnValue;  // 0x88 (0x88)


}; 
 
 // Function UMG.Image.SetBrushTintColor
struct FSetBrushTintColor
{
	struct FSlateColor TintColor;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.OnAnimationFinished
struct FOnAnimationFinished
{
	struct UWidgetAnimation* Animation;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.OnDragCancelled
struct FOnDragCancelled
{
	struct FPointerEvent PointerEvent;  // 0x0 (0x0)
	struct UDragDropOperation* Operation;  // 0x98 (0x98)


}; 
 
 // Function UMG.UserWidget.OnDragDetected
struct FOnDragDetected
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FPointerEvent PointerEvent;  // 0x40 (0x40)
	struct UDragDropOperation* Operation;  // 0xD8 (0xD8)


}; 
 
 // Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
struct FSlotAsVerticalBoxSlot
{
	struct UWidget* Widget;  // 0x0 (0x0)
	struct UVerticalBoxSlot* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.ScrollBox.SetAnimateWheelScrolling
struct FSetAnimateWheelScrolling
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bShouldAnimateWheelScrolling : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.GridSlot.SetLayer
struct FSetLayer
{
	int32_t InLayer;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.OnDragEnter
struct FOnDragEnter
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FPointerEvent PointerEvent;  // 0x40 (0x40)
	struct UDragDropOperation* Operation;  // 0xD8 (0xD8)


}; 
 
 // Function UMG.UserWidget.OnDragLeave
struct FOnDragLeave
{
	struct FPointerEvent PointerEvent;  // 0x0 (0x0)
	struct UDragDropOperation* Operation;  // 0x98 (0x98)


}; 
 
 // Function UMG.WidgetComponent.GetRedrawTime
struct FGetRedrawTime
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.ListView.GetListItems
struct FGetListItems
{
	struct TArray<struct UObject*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.OnDrop
struct FOnDrop
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FPointerEvent PointerEvent;  // 0x40 (0x40)
	struct UDragDropOperation* Operation;  // 0xD8 (0xD8)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool ReturnValue : 1;  // 0xE0 (0xE0)
	char pad_225[7];  // 0xE1 (0xE1)


}; 
 
 // Function UMG.CanvasPanelSlot.GetAutoSize
struct FGetAutoSize
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.OnFocusLost
struct FOnFocusLost
{
	struct FFocusEvent InFocusEvent;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.OnFocusReceived
struct FOnFocusReceived
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FFocusEvent InFocusEvent;  // 0x40 (0x40)
	struct FEventReply ReturnValue;  // 0x48 (0x48)


}; 
 
 // Function UMG.UserWidget.OnKeyChar
struct FOnKeyChar
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FCharacterEvent InCharacterEvent;  // 0x40 (0x40)
	struct FEventReply ReturnValue;  // 0x68 (0x68)


}; 
 
 // Function UMG.UserWidget.OnKeyDown
struct FOnKeyDown
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FKeyEvent InKeyEvent;  // 0x40 (0x40)
	struct FEventReply ReturnValue;  // 0x80 (0x80)


}; 
 
 // Function UMG.UserWidget.OnMotionDetected
struct FOnMotionDetected
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FMotionEvent InMotionEvent;  // 0x40 (0x40)
	struct FEventReply ReturnValue;  // 0xC0 (0xC0)


}; 
 
 // Function UMG.WidgetComponent.SetBackgroundColor
struct FSetBackgroundColor
{
	struct FLinearColor NewBackgroundColor;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.OnMouseButtonUp
struct FOnMouseButtonUp
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FPointerEvent MouseEvent;  // 0x40 (0x40)
	struct FEventReply ReturnValue;  // 0xD8 (0xD8)


}; 
 
 // Function UMG.WidgetComponent.SetOwnerPlayer
struct FSetOwnerPlayer
{
	struct ULocalPlayer* LocalPlayer;  // 0x0 (0x0)


}; 
 
 // Function UMG.BackgroundBlur.SetApplyAlphaToBlur
struct FSetApplyAlphaToBlur
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInApplyAlphaToBlur : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.OnMouseEnter
struct FOnMouseEnter
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FPointerEvent MouseEvent;  // 0x40 (0x40)


}; 
 
 // Function UMG.UserWidget.OnMouseLeave
struct FOnMouseLeave
{
	struct FPointerEvent MouseEvent;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetComponent.GetRenderTarget
struct FGetRenderTarget
{
	struct UTextureRenderTarget2D* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.OnMouseMove
struct FOnMouseMove
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FPointerEvent MouseEvent;  // 0x40 (0x40)
	struct FEventReply ReturnValue;  // 0xD8 (0xD8)


}; 
 
 // Function UMG.UserWidget.OnMouseWheel
struct FOnMouseWheel
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FPointerEvent MouseEvent;  // 0x40 (0x40)
	struct FEventReply ReturnValue;  // 0xD8 (0xD8)


}; 
 
 // Function UMG.Slider.SetSliderBarColor
struct FSetSliderBarColor
{
	struct FLinearColor InValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.UMGSequencePlayer.GetUserTag
struct FGetUserTag
{
	struct FName ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.OnPaint
struct FOnPaint
{
	struct FPaintContext Context;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetComponent.SetTintColorAndOpacity
struct FSetTintColorAndOpacity
{
	struct FLinearColor NewTintColorAndOpacity;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.OnPreviewMouseButtonDown
struct FOnPreviewMouseButtonDown
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FPointerEvent MouseEvent;  // 0x40 (0x40)
	struct FEventReply ReturnValue;  // 0xD8 (0xD8)


}; 
 
 // Function UMG.UserWidget.OnRemovedFromFocusPath
struct FOnRemovedFromFocusPath
{
	struct FFocusEvent InFocusEvent;  // 0x0 (0x0)


}; 
 
 // Function UMG.ListView.AddItem
struct FAddItem
{
	struct UObject* Item;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.OnTouchForceChanged
struct FOnTouchForceChanged
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FPointerEvent InTouchEvent;  // 0x40 (0x40)
	struct FEventReply ReturnValue;  // 0xD8 (0xD8)


}; 
 
 // Function UMG.UserWidget.PlayAnimation
struct FPlayAnimation
{
	struct UWidgetAnimation* InAnimation;  // 0x0 (0x0)
	float StartAtTime;  // 0x8 (0x8)
	int32_t NumLoopsToPlay;  // 0xC (0xC)
	enum class EUMGSequencePlayMode PlayMode;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	float PlaybackSpeed;  // 0x14 (0x14)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bRestoreState : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct UUMGSequencePlayer* ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function UMG.UserWidget.PlayAnimationForward
struct FPlayAnimationForward
{
	struct UWidgetAnimation* InAnimation;  // 0x0 (0x0)
	float PlaybackSpeed;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bRestoreState : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	struct UUMGSequencePlayer* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function UMG.CanvasPanelSlot.GetAlignment
struct FGetAlignment
{
	struct FVector2D ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.PlayAnimationReverse
struct FPlayAnimationReverse
{
	struct UWidgetAnimation* InAnimation;  // 0x0 (0x0)
	float PlaybackSpeed;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bRestoreState : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	struct UUMGSequencePlayer* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function UMG.UserWidget.PlayAnimationTimeRange
struct FPlayAnimationTimeRange
{
	struct UWidgetAnimation* InAnimation;  // 0x0 (0x0)
	float StartAtTime;  // 0x8 (0x8)
	float EndAtTime;  // 0xC (0xC)
	int32_t NumLoopsToPlay;  // 0x10 (0x10)
	enum class EUMGSequencePlayMode PlayMode;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	float PlaybackSpeed;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool bRestoreState : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct UUMGSequencePlayer* ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot
struct FSlotAsWrapBoxSlot
{
	struct UWidget* Widget;  // 0x0 (0x0)
	struct UWrapBoxSlot* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.UserWidget.PlaySound
struct FPlaySound
{
	struct USoundBase* SoundToPlay;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.ReverseAnimation
struct FReverseAnimation
{
	struct UWidgetAnimation* InAnimation;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.SetAlignmentInViewport
struct FSetAlignmentInViewport
{
	struct FVector2D Alignment;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetComponent.IsWidgetVisible
struct FIsWidgetVisible
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct UMG.MovieScene2DTransformMask
struct FMovieScene2DTransformMask
{
	uint32_t Mask;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.SetAnchorsInViewport
struct FSetAnchorsInViewport
{
	struct FAnchors Anchors;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.SetAnimationCurrentTime
struct FSetAnimationCurrentTime
{
	struct UWidgetAnimation* InAnimation;  // 0x0 (0x0)
	float InTime;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function UMG.SizeBox.SetWidthOverride
struct FSetWidthOverride
{
	float InWidthOverride;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.SetDesiredSizeInViewport
struct FSetDesiredSizeInViewport
{
	struct FVector2D Size;  // 0x0 (0x0)


}; 
 
 // Function UMG.GridPanel.SetColumnFill
struct FSetColumnFill
{
	int32_t ColumnIndex;  // 0x0 (0x0)
	float Coefficient;  // 0x4 (0x4)


}; 
 
 // Function UMG.UserWidget.SetInputActionBlocking
struct FSetInputActionBlocking
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bShouldBlock : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.SetOwningPlayer
struct FSetOwningPlayer
{
	struct APlayerController* LocalPlayerController;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.SetPositionInViewport
struct FSetPositionInViewport
{
	struct FVector2D Position;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bRemoveDPIScale : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function UMG.UserWidget.StopAnimation
struct FStopAnimation
{
	struct UWidgetAnimation* InAnimation;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserWidget.Tick
struct FTick
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	float InDeltaTime;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)


}; 
 
 // Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished
struct FUnbindAllFromAnimationFinished
{
	struct UUserWidget* Widget;  // 0x0 (0x0)


}; 
 
 // Function UMG.InvalidationBox.GetCanCache
struct FGetCanCache
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetAnimation.UnbindFromAnimationFinished
struct FUnbindFromAnimationFinished
{
	struct UUserWidget* Widget;  // 0x0 (0x0)
	struct FDelegate Delegate;  // 0x8 (0x8)


}; 
 
 // ScriptStruct UMG.DelegateRuntimeBinding
struct FDelegateRuntimeBinding
{
	struct FString ObjectName;  // 0x0 (0x0)
	struct FName PropertyName;  // 0x10 (0x10)
	struct FName FunctionName;  // 0x18 (0x18)
	struct FDynamicPropertyPath SourcePath;  // 0x20 (0x20)
	uint8_t Kind;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)


}; 
 
 // Function UMG.WidgetAnimation.UnbindFromAnimationStarted
struct FUnbindFromAnimationStarted
{
	struct UUserWidget* Widget;  // 0x0 (0x0)
	struct FDelegate Delegate;  // 0x8 (0x8)


}; 
 
 // ScriptStruct UMG.AnimationEventBinding
struct FAnimationEventBinding
{
	struct UWidgetAnimation* Animation;  // 0x0 (0x0)
	struct FDelegate Delegate;  // 0x8 (0x8)
	uint8_t AnimationEvent;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	struct FName UserTag;  // 0x1C (0x1C)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function UMG.GameViewportSubsystem.SetWidgetSlot
struct FSetWidgetSlot
{
	struct UWidget* Widget;  // 0x0 (0x0)
	struct FGameViewportWidgetSlot Slot;  // 0x8 (0x8)


}; 
 
 // ScriptStruct UMG.NamedSlotBinding
struct FNamedSlotBinding
{
	struct FName Name;  // 0x0 (0x0)
	struct UWidget* Content;  // 0x8 (0x8)


}; 
 
 // ScriptStruct UMG.SlateChildSize
struct FSlateChildSize
{
	float Value;  // 0x0 (0x0)
	enum class ESlateSizeRule SizeRule;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function UMG.WrapBox.AddChildToWrapBox
struct FAddChildToWrapBox
{
	struct UWidget* Content;  // 0x0 (0x0)
	struct UWrapBoxSlot* ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct UMG.DynamicPropertyPath
// Size: 0x28(Inherited: 0x28)
struct FDynamicPropertyPath : FCachedPropertyPath
{


}; 
 
 // Function UMG.CircularThrobber.SetRadius
struct FSetRadius
{
	float InRadius;  // 0x0 (0x0)


}; 
 
 // Function UMG.RichTextBlock.SetDefaultColorAndOpacity
struct FSetDefaultColorAndOpacity
{
	struct FSlateColor InColorAndOpacity;  // 0x0 (0x0)


}; 
 
 // ScriptStruct UMG.GameViewportWidgetSlot
struct FGameViewportWidgetSlot
{
	struct FAnchors Anchors;  // 0x0 (0x0)
	struct FMargin Offsets;  // 0x20 (0x20)
	struct FVector2D Alignment;  // 0x30 (0x30)
	int32_t ZOrder;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)


}; 
 
 // Function UMG.CanvasPanelSlot.GetPosition
struct FGetPosition
{
	struct FVector2D ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.UserObjectListEntry.OnListItemObjectSet
struct FOnListItemObjectSet
{
	struct UObject* ListItemObject;  // 0x0 (0x0)


}; 
 
 // ScriptStruct UMG.UserWidgetPool
struct FUserWidgetPool
{
	struct TArray<struct UUserWidget*> ActiveWidgets;  // 0x0 (0x0)
	struct TArray<struct UUserWidget*> InactiveWidgets;  // 0x10 (0x10)
	char pad_32[104];  // 0x20 (0x20)


}; 
 
 // Function UMG.WidgetComponent.GetDrawSize
struct FGetDrawSize
{
	struct FVector2D ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct UMG.RichTextStyleRow
// Size: 0x350(Inherited: 0x8)
struct FRichTextStyleRow : FTableRowBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTextBlockStyle TextStyle;  // 0x10 (0x10)


}; 
 
 // ScriptStruct UMG.RichImageRow
// Size: 0xE0(Inherited: 0x8)
struct FRichImageRow : FTableRowBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FSlateBrush Brush;  // 0x10 (0x10)


}; 
 
 // ScriptStruct UMG.WidgetComponentInstanceData
// Size: 0xC8(Inherited: 0xB8)
struct FWidgetComponentInstanceData : FSceneComponentInstanceData
{
	char pad_184[16];  // 0xB8 (0xB8)


}; 
 
 // Function UMG.Slider.GetNormalizedValue
struct FGetNormalizedValue
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.ListView.ScrollIndexIntoView
struct FScrollIndexIntoView
{
	int32_t Index;  // 0x0 (0x0)


}; 
 
 // Function UMG.Slider.SetIndentHandle
struct FSetIndentHandle
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.ListViewBase.SetScrollBarVisibility
struct FSetScrollBarVisibility
{
	uint8_t Invisibility;  // 0x0 (0x0)


}; 
 
 // Function UMG.Slider.SetLocked
struct FSetLocked
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.Slider.SetStepSize
struct FSetStepSize
{
	float InValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetSwitcher.GetActiveWidget
struct FGetActiveWidget
{
	struct UWidget* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetSwitcher.GetActiveWidgetIndex
struct FGetActiveWidgetIndex
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetSwitcher.GetNumWidgets
struct FGetNumWidgets
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetSwitcher.SetActiveWidget
struct FSetActiveWidget
{
	struct UWidget* Widget;  // 0x0 (0x0)


}; 
 
 // Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
struct FAbsoluteToLocal
{
	struct FGeometry Geometry;  // 0x0 (0x0)
	struct FVector2D AbsoluteCoordinate;  // 0x40 (0x40)
	struct FVector2D ReturnValue;  // 0x50 (0x50)


}; 
 
 // Function UMG.Viewport.GetViewRotation
struct FGetViewRotation
{
	struct FRotator ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.ScrollBox.GetViewFraction
struct FGetViewFraction
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.CheckBox.SetClickMethod
struct FSetClickMethod
{
	enum class EButtonClickMethod InClickMethod;  // 0x0 (0x0)


}; 
 
 // Function UMG.CheckBox.SetPressMethod
struct FSetPressMethod
{
	enum class EButtonPressMethod InPressMethod;  // 0x0 (0x0)


}; 
 
 // Function UMG.CheckBox.SetTouchMethod
struct FSetTouchMethod
{
	enum class EButtonTouchMethod InTouchMethod;  // 0x0 (0x0)


}; 
 
 // Function UMG.ListViewBase.GetScrollOffset
struct FGetScrollOffset
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.ScrollBox.GetViewOffsetFraction
struct FGetViewOffsetFraction
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.ScrollBox.SetAllowOverscroll
struct FSetAllowOverscroll
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool NewAllowOverscroll : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.ScrollBox.SetConsumeMouseWheel
struct FSetConsumeMouseWheel
{
	uint8_t NewConsumeMouseWheel;  // 0x0 (0x0)


}; 
 
 // Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
struct FSetDefaultShadowColorAndOpacity
{
	struct FLinearColor InShadowColorAndOpacity;  // 0x0 (0x0)


}; 
 
 // Function UMG.ScrollBox.SetOrientation
struct FSetOrientation
{
	enum class EOrientation NewOrientation;  // 0x0 (0x0)


}; 
 
 // Function UMG.ScrollBox.SetScrollbarThickness
struct FSetScrollbarThickness
{
	struct FVector2D NewScrollbarThickness;  // 0x0 (0x0)


}; 
 
 // Function UMG.ListViewBase.SetScrollOffset
struct FSetScrollOffset
{
	float InScrollOffset;  // 0x0 (0x0)


}; 
 
 // Function UMG.ScrollBox.SetScrollWhenFocusChanges
struct FSetScrollWhenFocusChanges
{
	uint8_t NewScrollWhenFocusChanges;  // 0x0 (0x0)


}; 
 
 // Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
struct FSetFillSpanWhenLessThan
{
	float InFillSpanWhenLessThan;  // 0x0 (0x0)


}; 
 
 // Function UMG.Image.SetBrushFromSoftMaterial
struct FSetBrushFromSoftMaterial
{
	struct TSoftObjectPtr<UMaterialInterface> SoftMaterial;  // 0x0 (0x0)


}; 
 
 // Function UMG.Image.SetBrushFromSoftTexture
struct FSetBrushFromSoftTexture
{
	struct TSoftObjectPtr<UTexture2D> SoftTexture;  // 0x0 (0x0)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bMatchSize : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // Function UMG.Image.SetBrushResourceObject
struct FSetBrushResourceObject
{
	struct UObject* ResourceObject;  // 0x0 (0x0)


}; 
 
 // Function UMG.Image.SetDesiredSizeOverride
struct FSetDesiredSizeOverride
{
	struct FVector2D DesiredSize;  // 0x0 (0x0)


}; 
 
 // Function UMG.RichTextBlock.SetDefaultStrikeBrush
struct FSetDefaultStrikeBrush
{
	struct FSlateBrush InStrikeBrush;  // 0x0 (0x0)


}; 
 
 // Function UMG.ListViewBase.GetDisplayedEntryWidgets
struct FGetDisplayedEntryWidgets
{
	struct TArray<struct UUserWidget*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetComponent.GetWidgetSpace
struct FGetWidgetSpace
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.CanvasPanel.AddChildToCanvas
struct FAddChildToCanvas
{
	struct UWidget* Content;  // 0x0 (0x0)
	struct UCanvasPanelSlot* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.ListView.BP_ScrollItemIntoView
struct FBP_ScrollItemIntoView
{
	struct UObject* Item;  // 0x0 (0x0)


}; 
 
 // Function UMG.ListView.BP_SetSelectedItem
struct FBP_SetSelectedItem
{
	struct UObject* Item;  // 0x0 (0x0)


}; 
 
 // Function UMG.ListView.GetIndexForItem
struct FGetIndexForItem
{
	struct UObject* Item;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function UMG.ListView.IsRefreshPending
struct FIsRefreshPending
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.TileView.SetEntryWidth
struct FSetEntryWidth
{
	float NewWidth;  // 0x0 (0x0)


}; 
 
 // Function UMG.ListView.OnListItemOuterEndPlayed
struct FOnListItemOuterEndPlayed
{
	struct AActor* ItemOuter;  // 0x0 (0x0)
	enum class EEndPlayReason EndPlayReason;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function UMG.ListView.RemoveItem
struct FRemoveItem
{
	struct UObject* Item;  // 0x0 (0x0)


}; 
 
 // Function UMG.RichTextBlock.GetTextStyleSet
struct FGetTextStyleSet
{
	struct UDataTable* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.RichTextBlock.SetDefaultFont
struct FSetDefaultFont
{
	struct FSlateFontInfo InFontInfo;  // 0x0 (0x0)


}; 
 
 // Function UMG.RichTextBlock.SetDefaultMaterial
struct FSetDefaultMaterial
{
	struct UMaterialInterface* InMaterial;  // 0x0 (0x0)


}; 
 
 // Function UMG.RichTextBlock.SetDefaultShadowOffset
struct FSetDefaultShadowOffset
{
	struct FVector2D InShadowOffset;  // 0x0 (0x0)


}; 
 
 // Function UMG.TileView.GetEntryHeight
struct FGetEntryHeight
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.TileView.GetEntryWidth
struct FGetEntryWidth
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
struct FIsOverFocusableWidget
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.TreeView.SetItemExpansion
struct FSetItemExpansion
{
	struct UObject* Item;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bExpandItem : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function UMG.Viewport.SetViewLocation
struct FSetViewLocation
{
	struct FVector Location;  // 0x0 (0x0)


}; 
 
 // Function UMG.Overlay.AddChildToOverlay
struct FAddChildToOverlay
{
	struct UWidget* Content;  // 0x0 (0x0)
	struct UOverlaySlot* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.SizeBox.SetHeightOverride
struct FSetHeightOverride
{
	float InHeightOverride;  // 0x0 (0x0)


}; 
 
 // Function UMG.SlateBlueprintLibrary.LocalToAbsolute
struct FLocalToAbsolute
{
	struct FGeometry Geometry;  // 0x0 (0x0)
	struct FVector2D LocalCoordinate;  // 0x40 (0x40)
	struct FVector2D ReturnValue;  // 0x50 (0x50)


}; 
 
 // Function UMG.SizeBox.SetMaxDesiredHeight
struct FSetMaxDesiredHeight
{
	float InMaxDesiredHeight;  // 0x0 (0x0)


}; 
 
 // Function UMG.SizeBox.SetMaxDesiredWidth
struct FSetMaxDesiredWidth
{
	float InMaxDesiredWidth;  // 0x0 (0x0)


}; 
 
 // Function UMG.SizeBox.SetMinDesiredHeight
struct FSetMinDesiredHeight
{
	float InMinDesiredHeight;  // 0x0 (0x0)


}; 
 
 // Function UMG.DynamicEntryBoxBase.SetEntrySpacing
struct FSetEntrySpacing
{
	struct FVector2D InEntrySpacing;  // 0x0 (0x0)


}; 
 
 // Function UMG.DynamicEntryBoxBase.SetRadialSettings
struct FSetRadialSettings
{
	struct FRadialBoxSettings InSettings;  // 0x0 (0x0)


}; 
 
 // Function UMG.DragDropOperation.Dragged
struct FDragged
{
	struct FPointerEvent PointerEvent;  // 0x0 (0x0)


}; 
 
 // Function UMG.DragDropOperation.Drop
struct FDrop
{
	struct FPointerEvent PointerEvent;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetComponent.GetCurrentDrawSize
struct FGetCurrentDrawSize
{
	struct FVector2D ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.VerticalBoxSlot.SetSize
struct FSetSize
{
	struct FSlateChildSize InSize;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetComponent.GetCylinderArcAngle
struct FGetCylinderArcAngle
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetComponent.GetOwnerPlayer
struct FGetOwnerPlayer
{
	struct ULocalPlayer* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetComponent.SetWidget
struct FSetWidget
{
	struct UUserWidget* Widget;  // 0x0 (0x0)


}; 
 
 // Function UMG.ColorBinding.GetLinearValue
struct FGetLinearValue
{
	struct FLinearColor ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetComponent.GetPivot
struct FGetPivot
{
	struct FVector2D ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetComponent.GetTickWhenOffscreen
struct FGetTickWhenOffscreen
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetComponent.GetTwoSided
struct FGetTwoSided
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetComponent.GetWindowFocusable
struct FGetWindowFocusable
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetComponent.SetCylinderArcAngle
struct FSetCylinderArcAngle
{
	float InCylinderArcAngle;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetComponent.SetDrawAtDesiredSize
struct FSetDrawAtDesiredSize
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInDrawAtDesiredSize : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetComponent.SetDrawSize
struct FSetDrawSize
{
	struct FVector2D Size;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetComponent.SetManuallyRedraw
struct FSetManuallyRedraw
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bUseManualRedraw : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetComponent.SetTwoSided
struct FSetTwoSided
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bWantTwoSided : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetComponent.SetWindowFocusable
struct FSetWindowFocusable
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInWindowFocusable : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetComponent.SetWindowVisibility
struct FSetWindowVisibility
{
	uint8_t Invisibility;  // 0x0 (0x0)


}; 
 
 // Function UMG.UMGSequencePlayer.SetUserTag
struct FSetUserTag
{
	struct FName InUserTag;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetAnimation.GetStartTime
struct FGetStartTime
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
struct FCreatePlayAnimationProxyObject
{
	struct UUMGSequencePlayer* Result;  // 0x0 (0x0)
	struct UUserWidget* Widget;  // 0x8 (0x8)
	struct UWidgetAnimation* InAnimation;  // 0x10 (0x10)
	float StartAtTime;  // 0x18 (0x18)
	int32_t NumLoopsToPlay;  // 0x1C (0x1C)
	enum class EUMGSequencePlayMode PlayMode;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	float PlaybackSpeed;  // 0x24 (0x24)
	struct UWidgetAnimationPlayCallbackProxy* ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function UMG.AsyncTaskDownloadImage.DownloadImage
struct FDownloadImage
{
	struct FString URL;  // 0x0 (0x0)
	struct UAsyncTaskDownloadImage* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function UMG.GameViewportSubsystem.GetWidgetSlot
struct FGetWidgetSlot
{
	struct UWidget* Widget;  // 0x0 (0x0)
	struct FGameViewportWidgetSlot ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.GridSlot.SetRowSpan
struct FSetRowSpan
{
	int32_t InRowSpan;  // 0x0 (0x0)


}; 
 
 // Function UMG.GameViewportSubsystem.IsWidgetAdded
struct FIsWidgetAdded
{
	struct UWidget* Widget;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function UMG.GameViewportSubsystem.RemoveWidget
struct FRemoveWidget
{
	struct UWidget* Widget;  // 0x0 (0x0)


}; 
 
 // Function UMG.GameViewportSubsystem.SetWidgetSlotDesiredSize
struct FSetWidgetSlotDesiredSize
{
	struct FGameViewportWidgetSlot Slot;  // 0x0 (0x0)
	struct FVector2D Size;  // 0x48 (0x48)
	struct FGameViewportWidgetSlot ReturnValue;  // 0x58 (0x58)


}; 
 
 // Function UMG.UserListEntryLibrary.GetOwningListView
struct FGetOwningListView
{
	struct TScriptInterface<IUserListEntry> UserListEntry;  // 0x0 (0x0)
	struct UListViewBase* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function UMG.UserObjectListEntryLibrary.GetListItemObject
struct FGetListItemObject
{
	struct TScriptInterface<IUserObjectListEntry> UserObjectListEntry;  // 0x0 (0x0)
	struct UObject* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
struct FSetMinDesiredSlotHeight
{
	float InMinDesiredSlotHeight;  // 0x0 (0x0)


}; 
 
 // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
struct FSetLowQualityFallbackBrush
{
	struct FSlateBrush InBrush;  // 0x0 (0x0)


}; 
 
 // Function UMG.CanvasPanelSlot.GetLayout
struct FGetLayout
{
	struct FAnchorData ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.CanvasPanelSlot.GetOffsets
struct FGetOffsets
{
	struct FMargin ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.CanvasPanelSlot.GetSize
struct FGetSize
{
	struct FVector2D ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.CanvasPanelSlot.SetLayout
struct FSetLayout
{
	struct FAnchorData InLayoutData;  // 0x0 (0x0)


}; 
 
 // Function UMG.CanvasPanelSlot.GetZOrder
struct FGetZOrder
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.CanvasPanelSlot.SetAlignment
struct FSetAlignment
{
	struct FVector2D InAlignment;  // 0x0 (0x0)


}; 
 
 // Function UMG.CanvasPanelSlot.SetAnchors
struct FSetAnchors
{
	struct FAnchors InAnchors;  // 0x0 (0x0)


}; 
 
 // Function UMG.CanvasPanelSlot.SetMaximum
struct FSetMaximum
{
	struct FVector2D InMaximumAnchors;  // 0x0 (0x0)


}; 
 
 // Function UMG.CanvasPanelSlot.SetMinimum
struct FSetMinimum
{
	struct FVector2D InMinimumAnchors;  // 0x0 (0x0)


}; 
 
 // Function UMG.CanvasPanelSlot.SetOffsets
struct FSetOffsets
{
	struct FMargin InOffset;  // 0x0 (0x0)


}; 
 
 // Function UMG.CanvasPanelSlot.SetPosition
struct FSetPosition
{
	struct FVector2D InPosition;  // 0x0 (0x0)


}; 
 
 // Function UMG.CanvasPanelSlot.SetZOrder
struct FSetZOrder
{
	int32_t InZOrder;  // 0x0 (0x0)


}; 
 
 // Function UMG.CheckBox.IsChecked
struct FIsChecked
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.CheckBox.SetCheckedState
struct FSetCheckedState
{
	uint8_t InCheckedState;  // 0x0 (0x0)


}; 
 
 // Function UMG.Throbber.SetNumberOfPieces
struct FSetNumberOfPieces
{
	int32_t InNumberOfPieces;  // 0x0 (0x0)


}; 
 
 // Function UMG.DynamicEntryBox.BP_CreateEntryOfClass
struct FBP_CreateEntryOfClass
{
	UUserWidget* EntryClass;  // 0x0 (0x0)
	struct UUserWidget* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.DynamicEntryBox.RemoveEntry
struct FRemoveEntry
{
	struct UUserWidget* EntryWidget;  // 0x0 (0x0)


}; 
 
 // Function UMG.DynamicEntryBox.Reset
struct FReset
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bDeleteWidgets : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.ExpandableArea.GetIsExpanded
struct FGetIsExpanded
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.StackBox.AddChildToStackBox
struct FAddChildToStackBox
{
	struct UWidget* Content;  // 0x0 (0x0)
	struct UStackBoxSlot* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.ExpandableArea.SetIsExpanded
struct FSetIsExpanded
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsExpanded : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.ExpandableArea.SetIsExpanded_Animated
struct FSetIsExpanded_Animated
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsExpanded : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.GridPanel.SetRowFill
struct FSetRowFill
{
	int32_t RowIndex;  // 0x0 (0x0)
	float Coefficient;  // 0x4 (0x4)


}; 
 
 // Function UMG.UniformGridSlot.SetColumn
struct FSetColumn
{
	int32_t InColumn;  // 0x0 (0x0)


}; 
 
 // Function UMG.GridSlot.SetColumnSpan
struct FSetColumnSpan
{
	int32_t InColumnSpan;  // 0x0 (0x0)


}; 
 
 // Function UMG.GridSlot.SetNudge
struct FSetNudge
{
	struct FVector2D InNudge;  // 0x0 (0x0)


}; 
 
 // Function UMG.UniformGridSlot.SetRow
struct FSetRow
{
	int32_t InRow;  // 0x0 (0x0)


}; 
 
 // Function UMG.HorizontalBox.AddChildToHorizontalBox
struct FAddChildToHorizontalBox
{
	struct UWidget* Content;  // 0x0 (0x0)
	struct UHorizontalBoxSlot* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.InvalidationBox.SetCanCache
struct FSetCanCache
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool CanCache : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.ProgressBar.SetFillColorAndOpacity
struct FSetFillColorAndOpacity
{
	struct FLinearColor InColor;  // 0x0 (0x0)


}; 
 
 // Function UMG.ProgressBar.SetIsMarquee
struct FSetIsMarquee
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InbIsMarquee : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.ProgressBar.SetPercent
struct FSetPercent
{
	float InPercent;  // 0x0 (0x0)


}; 
 
 // Function UMG.RetainerBox.SetEffectMaterial
struct FSetEffectMaterial
{
	struct UMaterialInterface* EffectMaterial;  // 0x0 (0x0)


}; 
 
 // Function UMG.RetainerBox.SetRetainRendering
struct FSetRetainRendering
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInRetainRendering : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.RetainerBox.SetTextureParameter
struct FSetTextureParameter
{
	struct FName TextureParameter;  // 0x0 (0x0)


}; 
 
 // Function UMG.SafeZone.SetSidesToPad
struct FSetSidesToPad
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InPadLeft : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool InPadRight : 1;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool InPadTop : 1;  // 0x2 (0x2)
	char pad_3_1 : 7;  // 0x3 (0x3)
	bool InPadBottom : 1;  // 0x3 (0x3)


}; 
 
 // Function UMG.ScaleBox.SetIgnoreInheritedScale
struct FSetIgnoreInheritedScale
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInIgnoreInheritedScale : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.ScaleBox.SetStretchDirection
struct FSetStretchDirection
{
	enum class EStretchDirection InStretchDirection;  // 0x0 (0x0)


}; 
 
 // Function UMG.ScrollBar.SetState
struct FSetState
{
	float InOffsetFraction;  // 0x0 (0x0)
	float InThumbSizeFraction;  // 0x4 (0x4)


}; 
 
 // Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
struct FEqualEqual_SlateBrush
{
	struct FSlateBrush A;  // 0x0 (0x0)
	struct FSlateBrush B;  // 0xD0 (0xD0)
	char pad_416_1 : 7;  // 0x1A0 (0x1A0)
	bool ReturnValue : 1;  // 0x1A0 (0x1A0)
	char pad_417[15];  // 0x1A1 (0x1A1)


}; 
 
 // Function UMG.Throbber.SetAnimateHorizontally
struct FSetAnimateHorizontally
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInAnimateHorizontally : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.Throbber.SetAnimateOpacity
struct FSetAnimateOpacity
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInAnimateOpacity : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.UniformGridPanel.AddChildToUniformGrid
struct FAddChildToUniformGrid
{
	struct UWidget* Content;  // 0x0 (0x0)
	int32_t InRow;  // 0x8 (0x8)
	int32_t InColumn;  // 0xC (0xC)
	struct UUniformGridSlot* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function UMG.VerticalBox.AddChildToVerticalBox
struct FAddChildToVerticalBox
{
	struct UWidget* Content;  // 0x0 (0x0)
	struct UVerticalBoxSlot* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.Viewport.GetViewLocation
struct FGetViewLocation
{
	struct FVector ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.Viewport.SetViewRotation
struct FSetViewRotation
{
	struct FRotator Rotation;  // 0x0 (0x0)


}; 
 
 // Function UMG.Viewport.Spawn
struct FSpawn
{
	AActor* ActorClass;  // 0x0 (0x0)
	struct AActor* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.WidgetInteractionComponent.Get2DHitLocation
struct FGet2DHitLocation
{
	struct FVector2D ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
struct FGetHoveredWidgetComponent
{
	struct UWidgetComponent* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetInteractionComponent.GetLastHitResult
struct FGetLastHitResult
{
	struct FHitResult ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
struct FIsOverHitTestVisibleWidget
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
struct FIsOverInteractableWidget
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetInteractionComponent.ReleasePointerKey
struct FReleasePointerKey
{
	struct FKey Key;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetInteractionComponent.ScrollWheel
struct FScrollWheel
{
	float ScrollDelta;  // 0x0 (0x0)


}; 
 
 // Function UMG.WrapBoxSlot.SetFillEmptySpace
struct FSetFillEmptySpace
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InbFillEmptySpace : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.WrapBoxSlot.SetNewLine
struct FSetNewLine
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InForceNewLine : 1;  // 0x0 (0x0)


}; 
 
 // Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
struct FAbsoluteToViewport
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FVector2D AbsoluteDesktopCoordinate;  // 0x8 (0x8)
	struct FVector2D PixelPosition;  // 0x18 (0x18)
	struct FVector2D ViewportPosition;  // 0x28 (0x28)


}; 
 
 // Function UMG.SlateBlueprintLibrary.GetAbsoluteSize
struct FGetAbsoluteSize
{
	struct FGeometry Geometry;  // 0x0 (0x0)
	struct FVector2D ReturnValue;  // 0x40 (0x40)


}; 
 
 // Function UMG.SlateBlueprintLibrary.GetLocalSize
struct FGetLocalSize
{
	struct FGeometry Geometry;  // 0x0 (0x0)
	struct FVector2D ReturnValue;  // 0x40 (0x40)


}; 
 
 // Function UMG.SlateBlueprintLibrary.IsUnderLocation
struct FIsUnderLocation
{
	struct FGeometry Geometry;  // 0x0 (0x0)
	struct FVector2D AbsoluteCoordinate;  // 0x40 (0x40)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool ReturnValue : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)


}; 
 
 // Function UMG.SlateBlueprintLibrary.LocalToViewport
struct FLocalToViewport
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FGeometry Geometry;  // 0x8 (0x8)
	struct FVector2D LocalCoordinate;  // 0x48 (0x48)
	struct FVector2D PixelPosition;  // 0x58 (0x58)
	struct FVector2D ViewportPosition;  // 0x68 (0x68)


}; 
 
 // Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
struct FScreenToWidgetLocal
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FGeometry Geometry;  // 0x8 (0x8)
	struct FVector2D ScreenPosition;  // 0x48 (0x48)
	struct FVector2D LocalCoordinate;  // 0x58 (0x58)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool bIncludeWindowPosition : 1;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)


}; 
 
 // Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
struct FTransformScalarLocalToAbsolute
{
	struct FGeometry Geometry;  // 0x0 (0x0)
	float LocalScalar;  // 0x40 (0x40)
	float ReturnValue;  // 0x44 (0x44)


}; 
 
 // Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
struct FTransformVectorAbsoluteToLocal
{
	struct FGeometry Geometry;  // 0x0 (0x0)
	struct FVector2D AbsoluteVector;  // 0x40 (0x40)
	struct FVector2D ReturnValue;  // 0x50 (0x50)


}; 
 
 // Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
struct FProjectWorldLocationToWidgetPosition
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)
	struct FVector WorldLocation;  // 0x8 (0x8)
	struct FVector2D ScreenPosition;  // 0x20 (0x20)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bPlayerViewportRelative : 1;  // 0x30 (0x30)
	char pad_49_1 : 7;  // 0x31 (0x31)
	bool ReturnValue : 1;  // 0x31 (0x31)
	char pad_50[6];  // 0x32 (0x32)


}; 
 
 // Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute
struct FTransformVectorLocalToAbsolute
{
	struct FGeometry Geometry;  // 0x0 (0x0)
	struct FVector2D LocalVector;  // 0x40 (0x40)
	struct FVector2D ReturnValue;  // 0x50 (0x50)


}; 
 
 // Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
struct FGetMousePositionOnPlatform
{
	struct FVector2D ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
struct FGetMousePositionOnViewport
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FVector2D ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
struct FSlotAsSizeBoxSlot
{
	struct UWidget* Widget;  // 0x0 (0x0)
	struct USizeBoxSlot* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
struct FGetMousePositionScaledByDPI
{
	struct APlayerController* Player;  // 0x0 (0x0)
	float LocationX;  // 0x8 (0x8)
	float LocationY;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
struct FGetPlayerScreenWidgetGeometry
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)
	struct FGeometry ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.WidgetLayoutLibrary.GetViewportScale
struct FGetViewportScale
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
struct FGetViewportWidgetGeometry
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FGeometry ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
struct FRemoveAllWidgets
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)


}; 
 
 // Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
struct FSlotAsCanvasSlot
{
	struct UWidget* Widget;  // 0x0 (0x0)
	struct UCanvasPanelSlot* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
struct FSlotAsGridSlot
{
	struct UWidget* Widget;  // 0x0 (0x0)
	struct UGridSlot* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
struct FSlotAsHorizontalBoxSlot
{
	struct UWidget* Widget;  // 0x0 (0x0)
	struct UHorizontalBoxSlot* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
struct FSlotAsOverlaySlot
{
	struct UWidget* Widget;  // 0x0 (0x0)
	struct UOverlaySlot* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
struct FSlotAsSafeBoxSlot
{
	struct UWidget* Widget;  // 0x0 (0x0)
	struct USafeZoneSlot* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
struct FSlotAsScaleBoxSlot
{
	struct UWidget* Widget;  // 0x0 (0x0)
	struct UScaleBoxSlot* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
struct FSlotAsScrollBoxSlot
{
	struct UWidget* Widget;  // 0x0 (0x0)
	struct UScrollBoxSlot* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
struct FSlotAsWidgetSwitcherSlot
{
	struct UWidget* Widget;  // 0x0 (0x0)
	struct UWidgetSwitcherSlot* ReturnValue;  // 0x8 (0x8)


}; 
 
 