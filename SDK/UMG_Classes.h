#pragma once 
#include <UMG_Structs.h>
 
 
 
// Class UMG.WidgetBinding
// Size: 0x60(Inherited: 0x60)
struct UWidgetBinding : UPropertyBinding
{


	struct UWidget* GetValue(); // Function UMG.WidgetBinding.GetValue
}; 
 
 


// Class UMG.UserWidget
// Size: 0x278(Inherited: 0x150)
struct UUserWidget : UWidget
{
	char pad_336[8];  // 0x150 (0x150)
	struct FLinearColor ColorAndOpacity;  // 0x158 (0x158)
	struct FDelegate ColorAndOpacityDelegate;  // 0x168 (0x168)
	struct FSlateColor ForegroundColor;  // 0x178 (0x178)
	struct FDelegate ForegroundColorDelegate;  // 0x18C (0x18C)
	char pad_412[4];  // 0x19C (0x19C)
	struct FMulticastInlineDelegate OnVisibilityChanged;  // 0x1A0 (0x1A0)
	char pad_432[24];  // 0x1B0 (0x1B0)
	struct FMargin Padding;  // 0x1C8 (0x1C8)
	struct TArray<struct UUMGSequencePlayer*> ActiveSequencePlayers;  // 0x1D8 (0x1D8)
	struct UUMGSequenceTickManager* AnimationTickManager;  // 0x1E8 (0x1E8)
	struct TArray<struct UUMGSequencePlayer*> StoppedSequencePlayers;  // 0x1F0 (0x1F0)
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings;  // 0x200 (0x200)
	struct TArray<struct UUserWidgetExtension*> Extensions;  // 0x210 (0x210)
	struct UWidgetTree* WidgetTree;  // 0x220 (0x220)
	int32_t Priority;  // 0x228 (0x228)
	char bIsFocusable : 1;  // 0x22C (0x22C)
	char bStopAction : 1;  // 0x22C (0x22C)
	char bHasScriptImplementedTick : 1;  // 0x22C (0x22C)
	char bHasScriptImplementedPaint : 1;  // 0x22C (0x22C)
	char pad_556_1 : 4;  // 0x22C (0x22C)
	char pad_557[20];  // 0x22D (0x22D)
	uint8_t TickFrequency;  // 0x240 (0x240)
	char pad_577[7];  // 0x241 (0x241)
	struct UInputComponent* InputComponent;  // 0x248 (0x248)
	struct TArray<struct FAnimationEventBinding> AnimationCallbacks;  // 0x250 (0x250)
	char pad_608[24];  // 0x260 (0x260)


	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent
	void UnbindFromAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationStarted
	void UnbindFromAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationFinished
	void UnbindAllFromAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationStarted
	void UnbindAllFromAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationFinished
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG.UserWidget.Tick
	void StopListeningForInputAction(struct FName ActionName, enum class EInputEvent EventType); // Function UMG.UserWidget.StopListeningForInputAction
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions
	void StopAnimationsAndLatentActions(); // Function UMG.UserWidget.StopAnimationsAndLatentActions
	void StopAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.StopAnimation
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations
	void SetPositionInViewport(struct FVector2D Position, bool bRemoveDPIScale); // Function UMG.UserWidget.SetPositionInViewport
	void SetPlaybackSpeed(struct UWidgetAnimation* InAnimation, float PlaybackSpeed); // Function UMG.UserWidget.SetPlaybackSpeed
	void SetPadding(struct FMargin InPadding); // Function UMG.UserWidget.SetPadding
	void SetOwningPlayer(struct APlayerController* LocalPlayerController); // Function UMG.UserWidget.SetOwningPlayer
	void SetNumLoopsToPlay(struct UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay); // Function UMG.UserWidget.SetNumLoopsToPlay
	void SetInputActionPriority(int32_t NewPriority); // Function UMG.UserWidget.SetInputActionPriority
	void SetInputActionBlocking(bool bShouldBlock); // Function UMG.UserWidget.SetInputActionBlocking
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.UserWidget.SetForegroundColor
	void SetDesiredSizeInViewport(struct FVector2D Size); // Function UMG.UserWidget.SetDesiredSizeInViewport
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.UserWidget.SetColorAndOpacity
	void SetAnimationCurrentTime(struct UWidgetAnimation* InAnimation, float InTime); // Function UMG.UserWidget.SetAnimationCurrentTime
	void SetAnchorsInViewport(struct FAnchors Anchors); // Function UMG.UserWidget.SetAnchorsInViewport
	void SetAlignmentInViewport(struct FVector2D Alignment); // Function UMG.UserWidget.SetAlignmentInViewport
	void ReverseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.ReverseAnimation
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport
	void RemoveExtensions(UUserWidgetExtension* InExtensionType); // Function UMG.UserWidget.RemoveExtensions
	void RemoveExtension(struct UUserWidgetExtension* InExtension); // Function UMG.UserWidget.RemoveExtension
	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent
	void PreConstruct(bool IsDesignTime); // Function UMG.UserWidget.PreConstruct
	void PlaySound(struct USoundBase* SoundToPlay); // Function UMG.UserWidget.PlaySound
	struct UUMGSequencePlayer* PlayAnimationTimeRange(struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationTimeRange
	struct UUMGSequencePlayer* PlayAnimationReverse(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationReverse
	struct UUMGSequencePlayer* PlayAnimationForward(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationForward
	struct UUMGSequencePlayer* PlayAnimation(struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimation
	float PauseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.PauseAnimation
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchStarted
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchMoved
	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent& GestureEvent); // Function UMG.UserWidget.OnTouchGesture
	struct FEventReply OnTouchForceChanged(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchForceChanged
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchEnded
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnRemovedFromFocusPath
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnPreviewMouseButtonDown
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnPreviewKeyDown
	void OnPaint(struct FPaintContext& Context); // Function UMG.UserWidget.OnPaint
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseWheel
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseMove
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseLeave
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseEnter
	void OnMouseCaptureLost(); // Function UMG.UserWidget.OnMouseCaptureLost
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseButtonUp
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseButtonDown
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function UMG.UserWidget.OnMouseButtonDoubleClick
	struct FEventReply OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent); // Function UMG.UserWidget.OnMotionDetected
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyUp
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyDown
	struct FEventReply OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent); // Function UMG.UserWidget.OnKeyChar
	void OnInitialized(); // Function UMG.UserWidget.OnInitialized
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusReceived
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusLost
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDrop
	bool OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragOver
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragLeave
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragEnter
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function UMG.UserWidget.OnDragDetected
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragCancelled
	void OnAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationStarted
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationFinished
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function UMG.UserWidget.OnAnalogValueChanged
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnAddedToFocusPath
	void ListenForInputAction(struct FName ActionName, enum class EInputEvent EventType, bool bConsume, struct FDelegate Callback); // Function UMG.UserWidget.ListenForInputAction
	bool IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation
	bool IsListeningForInputAction(struct FName ActionName); // Function UMG.UserWidget.IsListeningForInputAction
	bool IsInteractable(); // Function UMG.UserWidget.IsInteractable
	bool IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying
	bool IsAnimationPlayingForward(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlayingForward
	bool IsAnimationPlaying(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlaying
	struct APawn* GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn
	struct APlayerCameraManager* GetOwningPlayerCameraManager(); // Function UMG.UserWidget.GetOwningPlayerCameraManager
	bool GetIsVisible(); // Function UMG.UserWidget.GetIsVisible
	struct TArray<struct UUserWidgetExtension*> GetExtensions(UUserWidgetExtension* ExtensionType); // Function UMG.UserWidget.GetExtensions
	struct UUserWidgetExtension* GetExtension(UUserWidgetExtension* ExtensionType); // Function UMG.UserWidget.GetExtension
	float GetAnimationCurrentTime(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.GetAnimationCurrentTime
	struct FAnchors GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport
	struct FVector2D GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport
	void FlushAnimations(); // Function UMG.UserWidget.FlushAnimations
	void Destruct(); // Function UMG.UserWidget.Destruct
	void Construct(); // Function UMG.UserWidget.Construct
	void CancelLatentActions(); // Function UMG.UserWidget.CancelLatentActions
	void BindToAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationStarted
	void BindToAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationFinished
	void BindToAnimationEvent(struct UWidgetAnimation* Animation, struct FDelegate Delegate, uint8_t AnimationEvent, struct FName UserTag); // Function UMG.UserWidget.BindToAnimationEvent
	void AddToViewport(int32_t ZOrder); // Function UMG.UserWidget.AddToViewport
	bool AddToPlayerScreen(int32_t ZOrder); // Function UMG.UserWidget.AddToPlayerScreen
	struct UUserWidgetExtension* AddExtension(UUserWidgetExtension* InExtensionType); // Function UMG.UserWidget.AddExtension
}; 
 
 


// Class UMG.RichTextBlock
// Size: 0x870(Inherited: 0x170)
struct URichTextBlock : UTextLayoutWidget
{
	struct FText Text;  // 0x170 (0x170)
	struct UDataTable* TextStyleSet;  // 0x188 (0x188)
	struct TArray<URichTextBlockDecorator*> DecoratorClasses;  // 0x190 (0x190)
	char pad_416_1 : 7;  // 0x1A0 (0x1A0)
	bool bOverrideDefaultStyle : 1;  // 0x1A0 (0x1A0)
	char pad_417[15];  // 0x1A1 (0x1A1)
	struct FTextBlockStyle DefaultTextStyleOverride;  // 0x1B0 (0x1B0)
	float MinDesiredWidth;  // 0x4F0 (0x4F0)
	uint8_t TextTransformPolicy;  // 0x4F4 (0x4F4)
	uint8_t TextOverflowPolicy;  // 0x4F5 (0x4F5)
	char pad_1270[10];  // 0x4F6 (0x4F6)
	struct FTextBlockStyle DefaultTextStyle;  // 0x500 (0x500)
	struct TArray<struct URichTextBlockDecorator*> InstanceDecorators;  // 0x840 (0x840)
	char pad_2128[32];  // 0x850 (0x850)


	void SetTextTransformPolicy(uint8_t InTransformPolicy); // Function UMG.RichTextBlock.SetTextTransformPolicy
	void SetTextStyleSet(struct UDataTable* NewTextStyleSet); // Function UMG.RichTextBlock.SetTextStyleSet
	void SetTextOverflowPolicy(uint8_t InOverflowPolicy); // Function UMG.RichTextBlock.SetTextOverflowPolicy
	void SetText(struct FText& InText); // Function UMG.RichTextBlock.SetText
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.RichTextBlock.SetMinDesiredWidth
	void SetDefaultTextStyle(struct FTextBlockStyle& InDefaultTextStyle); // Function UMG.RichTextBlock.SetDefaultTextStyle
	void SetDefaultStrikeBrush(struct FSlateBrush& InStrikeBrush); // Function UMG.RichTextBlock.SetDefaultStrikeBrush
	void SetDefaultShadowOffset(struct FVector2D InShadowOffset); // Function UMG.RichTextBlock.SetDefaultShadowOffset
	void SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
	void SetDefaultMaterial(struct UMaterialInterface* InMaterial); // Function UMG.RichTextBlock.SetDefaultMaterial
	void SetDefaultFont(struct FSlateFontInfo InFontInfo); // Function UMG.RichTextBlock.SetDefaultFont
	void SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultColorAndOpacity
	void SetDecorators(struct TArray<URichTextBlockDecorator*>& InDecoratorClasses); // Function UMG.RichTextBlock.SetDecorators
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.RichTextBlock.SetAutoWrapText
	void RefreshTextLayout(); // Function UMG.RichTextBlock.RefreshTextLayout
	struct UDataTable* GetTextStyleSet(); // Function UMG.RichTextBlock.GetTextStyleSet
	struct FText GetText(); // Function UMG.RichTextBlock.GetText
	struct UMaterialInstanceDynamic* GetDefaultDynamicMaterial(); // Function UMG.RichTextBlock.GetDefaultDynamicMaterial
	struct URichTextBlockDecorator* GetDecoratorByClass(URichTextBlockDecorator* DecoratorClass); // Function UMG.RichTextBlock.GetDecoratorByClass
	void ClearAllDefaultStyleOverrides(); // Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides
}; 
 
 


// Class UMG.Visual
// Size: 0x28(Inherited: 0x28)
struct UVisual : UObject
{


}; 
 
 


// Class UMG.Widget
// Size: 0x150(Inherited: 0x28)
struct UWidget : UVisual
{
	char pad_40[8];  // 0x28 (0x28)
	struct UPanelSlot* Slot;  // 0x30 (0x30)
	struct FDelegate bIsEnabledDelegate;  // 0x38 (0x38)
	struct FText ToolTipText;  // 0x48 (0x48)
	struct FDelegate ToolTipTextDelegate;  // 0x60 (0x60)
	struct UWidget* ToolTipWidget;  // 0x70 (0x70)
	struct FDelegate ToolTipWidgetDelegate;  // 0x78 (0x78)
	struct FDelegate VisibilityDelegate;  // 0x88 (0x88)
	struct FWidgetTransform RenderTransform;  // 0x98 (0x98)
	struct FVector2D RenderTransformPivot;  // 0xD0 (0xD0)
	uint8_t FlowDirectionPreference;  // 0xE0 (0xE0)
	char bIsVariable : 1;  // 0xE1 (0xE1)
	char bCreatedByConstructionScript : 1;  // 0xE1 (0xE1)
	char bIsEnabled : 1;  // 0xE1 (0xE1)
	char bOverride_Cursor : 1;  // 0xE1 (0xE1)
	char bIsVolatile : 1;  // 0xE1 (0xE1)
	char pad_225_1 : 3;  // 0xE1 (0xE1)
	enum class EMouseCursor Cursor;  // 0xE2 (0xE2)
	uint8_t Clipping;  // 0xE3 (0xE3)
	uint8_t Visibility;  // 0xE4 (0xE4)
	char pad_229[3];  // 0xE5 (0xE5)
	float RenderOpacity;  // 0xE8 (0xE8)
	char pad_236[4];  // 0xEC (0xEC)
	struct USlateAccessibleWidgetData* AccessibleWidgetData;  // 0xF0 (0xF0)
	struct UWidgetNavigation* Navigation;  // 0xF8 (0xF8)
	char pad_256[32];  // 0x100 (0x100)
	struct TArray<struct UPropertyBinding*> NativeBindings;  // 0x120 (0x120)
	char pad_304[32];  // 0x130 (0x130)


	void SetVisibility(uint8_t Invisibility); // Function UMG.Widget.SetVisibility
	void SetUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.SetUserFocus
	void SetToolTipText(struct FText& InToolTipText); // Function UMG.Widget.SetToolTipText
	void SetToolTip(struct UWidget* Widget); // Function UMG.Widget.SetToolTip
	void SetRenderTranslation(struct FVector2D Translation); // Function UMG.Widget.SetRenderTranslation
	void SetRenderTransformPivot(struct FVector2D Pivot); // Function UMG.Widget.SetRenderTransformPivot
	void SetRenderTransformAngle(float Angle); // Function UMG.Widget.SetRenderTransformAngle
	void SetRenderTransform(struct FWidgetTransform InTransform); // Function UMG.Widget.SetRenderTransform
	void SetRenderShear(struct FVector2D Shear); // Function UMG.Widget.SetRenderShear
	void SetRenderScale(struct FVector2D Scale); // Function UMG.Widget.SetRenderScale
	void SetRenderOpacity(float InOpacity); // Function UMG.Widget.SetRenderOpacity
	void SetNavigationRuleExplicit(uint8_t Direction, struct UWidget* InWidget); // Function UMG.Widget.SetNavigationRuleExplicit
	void SetNavigationRuleCustomBoundary(uint8_t Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustomBoundary
	void SetNavigationRuleCustom(uint8_t Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustom
	void SetNavigationRuleBase(uint8_t Direction, uint8_t Rule); // Function UMG.Widget.SetNavigationRuleBase
	void SetNavigationRule(uint8_t Direction, uint8_t Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetNavigationRule
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus
	void SetIsEnabled(bool bInIsEnabled); // Function UMG.Widget.SetIsEnabled
	void SetFocus(); // Function UMG.Widget.SetFocus
	void SetCursor(enum class EMouseCursor InCursor); // Function UMG.Widget.SetCursor
	void SetClipping(uint8_t InClipping); // Function UMG.Widget.SetClipping
	void SetAllNavigationRules(uint8_t Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetAllNavigationRules
	void ResetCursor(); // Function UMG.Widget.ResetCursor
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent
	struct FEventReply OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature
	struct FEventReply OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
	void K2_RemoveFieldValueChangedDelegate(struct FFieldNotificationId FieldId, struct FDelegate Delegate); // Function UMG.Widget.K2_RemoveFieldValueChangedDelegate
	void K2_BroadcastFieldValueChanged(struct FFieldNotificationId FieldId); // Function UMG.Widget.K2_BroadcastFieldValueChanged
	void K2_AddFieldValueChangedDelegate(struct FFieldNotificationId FieldId, struct FDelegate Delegate); // Function UMG.Widget.K2_AddFieldValueChangedDelegate
	bool IsVisible(); // Function UMG.Widget.IsVisible
	bool IsRendered(); // Function UMG.Widget.IsRendered
	bool IsInViewport(); // Function UMG.Widget.IsInViewport
	bool IsHovered(); // Function UMG.Widget.IsHovered
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility
	bool HasUserFocusedDescendants(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocusedDescendants
	bool HasUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocus
	bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex); // Function UMG.Widget.HasMouseCaptureByUser
	bool HasMouseCapture(); // Function UMG.Widget.HasMouseCapture
	bool HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus
	bool HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants
	bool HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus
	struct UWidget* GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature
	uint8_t GetVisibility(); // Function UMG.Widget.GetVisibility
	struct FGeometry GetTickSpaceGeometry(); // Function UMG.Widget.GetTickSpaceGeometry
	struct FText GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature
	uint8_t GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
	struct FSlateColor GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
	struct FSlateBrush GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
	float GetRenderTransformAngle(); // Function UMG.Widget.GetRenderTransformAngle
	float GetRenderOpacity(); // Function UMG.Widget.GetRenderOpacity
	struct UPanelWidget* GetParent(); // Function UMG.Widget.GetParent
	struct FGeometry GetPaintSpaceGeometry(); // Function UMG.Widget.GetPaintSpaceGeometry
	struct APlayerController* GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer
	struct ULocalPlayer* GetOwningLocalPlayer(); // Function UMG.Widget.GetOwningLocalPlayer
	enum class EMouseCursor GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
	struct FLinearColor GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
	bool GetIsEnabled(); // Function UMG.Widget.GetIsEnabled
	int32_t GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature
	struct UGameInstance* GetGameInstance(); // Function UMG.Widget.GetGameInstance
	float GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature
	struct FVector2D GetDesiredSize(); // Function UMG.Widget.GetDesiredSize
	uint8_t GetClipping(); // Function UMG.Widget.GetClipping
	uint8_t GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
	struct FGeometry GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry
	bool GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature
	struct FText GetAccessibleText(); // Function UMG.Widget.GetAccessibleText
	struct FText GetAccessibleSummaryText(); // Function UMG.Widget.GetAccessibleSummaryText
	struct UWidget* GenerateWidgetForString__DelegateSignature(struct FString Item); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
	struct UWidget* GenerateWidgetForObject__DelegateSignature(struct UObject* Item); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
	void ForceVolatile(bool bForce); // Function UMG.Widget.ForceVolatile
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass
}; 
 
 


// Class UMG.NotifyFieldValueChanged
// Size: 0x28(Inherited: 0x28)
struct UNotifyFieldValueChanged : UInterface
{


}; 
 
 


// Class UMG.ScaleBoxSlot
// Size: 0x50(Inherited: 0x38)
struct UScaleBoxSlot : UPanelSlot
{
	enum class EHorizontalAlignment HorizontalAlignment;  // 0x38 (0x38)
	enum class EVerticalAlignment VerticalAlignment;  // 0x39 (0x39)
	char pad_58[22];  // 0x3A (0x3A)


	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScaleBoxSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.ScaleBoxSlot.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScaleBoxSlot.SetHorizontalAlignment
}; 
 
 


// Class UMG.SizeBox
// Size: 0x1A0(Inherited: 0x168)
struct USizeBox : UContentWidget
{
	char pad_360[16];  // 0x168 (0x168)
	float WidthOverride;  // 0x178 (0x178)
	float HeightOverride;  // 0x17C (0x17C)
	float MinDesiredWidth;  // 0x180 (0x180)
	float MinDesiredHeight;  // 0x184 (0x184)
	float MaxDesiredWidth;  // 0x188 (0x188)
	float MaxDesiredHeight;  // 0x18C (0x18C)
	float MinAspectRatio;  // 0x190 (0x190)
	float MaxAspectRatio;  // 0x194 (0x194)
	char bOverride_WidthOverride : 1;  // 0x198 (0x198)
	char bOverride_HeightOverride : 1;  // 0x198 (0x198)
	char bOverride_MinDesiredWidth : 1;  // 0x198 (0x198)
	char bOverride_MinDesiredHeight : 1;  // 0x198 (0x198)
	char bOverride_MaxDesiredWidth : 1;  // 0x198 (0x198)
	char bOverride_MaxDesiredHeight : 1;  // 0x198 (0x198)
	char bOverride_MinAspectRatio : 1;  // 0x198 (0x198)
	char bOverride_MaxAspectRatio : 1;  // 0x198 (0x198)
	char pad_409[7];  // 0x199 (0x199)


	void SetWidthOverride(float InWidthOverride); // Function UMG.SizeBox.SetWidthOverride
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.SizeBox.SetMinDesiredWidth
	void SetMinDesiredHeight(float InMinDesiredHeight); // Function UMG.SizeBox.SetMinDesiredHeight
	void SetMinAspectRatio(float InMinAspectRatio); // Function UMG.SizeBox.SetMinAspectRatio
	void SetMaxDesiredWidth(float InMaxDesiredWidth); // Function UMG.SizeBox.SetMaxDesiredWidth
	void SetMaxDesiredHeight(float InMaxDesiredHeight); // Function UMG.SizeBox.SetMaxDesiredHeight
	void SetMaxAspectRatio(float InMaxAspectRatio); // Function UMG.SizeBox.SetMaxAspectRatio
	void SetHeightOverride(float InHeightOverride); // Function UMG.SizeBox.SetHeightOverride
	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride
	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight
	void ClearMinAspectRatio(); // Function UMG.SizeBox.ClearMinAspectRatio
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride
}; 
 
 


// Class UMG.Border
// Size: 0x310(Inherited: 0x168)
struct UBorder : UContentWidget
{
	enum class EHorizontalAlignment HorizontalAlignment;  // 0x168 (0x168)
	enum class EVerticalAlignment VerticalAlignment;  // 0x169 (0x169)
	char bShowEffectWhenDisabled : 1;  // 0x16A (0x16A)
	char pad_362_1 : 7;  // 0x16A (0x16A)
	char pad_363[2];  // 0x16B (0x16B)
	struct FLinearColor ContentColorAndOpacity;  // 0x16C (0x16C)
	struct FDelegate ContentColorAndOpacityDelegate;  // 0x17C (0x17C)
	struct FMargin Padding;  // 0x18C (0x18C)
	char pad_412[4];  // 0x19C (0x19C)
	struct FSlateBrush Background;  // 0x1A0 (0x1A0)
	struct FDelegate BackgroundDelegate;  // 0x270 (0x270)
	struct FLinearColor BrushColor;  // 0x280 (0x280)
	struct FDelegate BrushColorDelegate;  // 0x290 (0x290)
	struct FVector2D DesiredSizeScale;  // 0x2A0 (0x2A0)
	char pad_688_1 : 7;  // 0x2B0 (0x2B0)
	bool bFlipForRightToLeftFlowDirection : 1;  // 0x2B0 (0x2B0)
	char pad_689[3];  // 0x2B1 (0x2B1)
	struct FDelegate OnMouseButtonDownEvent;  // 0x2B4 (0x2B4)
	struct FDelegate OnMouseButtonUpEvent;  // 0x2C4 (0x2C4)
	struct FDelegate OnMouseMoveEvent;  // 0x2D4 (0x2D4)
	struct FDelegate OnMouseDoubleClickEvent;  // 0x2E4 (0x2E4)
	char pad_756[28];  // 0x2F4 (0x2F4)


	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.Border.SetVerticalAlignment
	void SetShowEffectWhenDisabled(bool bInShowEffectWhenDisabled); // Function UMG.Border.SetShowEffectWhenDisabled
	void SetPadding(struct FMargin InPadding); // Function UMG.Border.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.Border.SetHorizontalAlignment
	void SetDesiredSizeScale(struct FVector2D InScale); // Function UMG.Border.SetDesiredSizeScale
	void SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity); // Function UMG.Border.SetContentColorAndOpacity
	void SetBrushFromTexture(struct UTexture2D* Texture); // Function UMG.Border.SetBrushFromTexture
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Border.SetBrushFromMaterial
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Border.SetBrushFromAsset
	void SetBrushColor(struct FLinearColor InBrushColor); // Function UMG.Border.SetBrushColor
	void SetBrush(struct FSlateBrush& InBrush); // Function UMG.Border.SetBrush
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial
}; 
 
 


// Class UMG.Slider
// Size: 0x700(Inherited: 0x150)
struct USlider : UWidget
{
	float Value;  // 0x150 (0x150)
	struct FDelegate ValueDelegate;  // 0x154 (0x154)
	float MinValue;  // 0x164 (0x164)
	float MaxValue;  // 0x168 (0x168)
	char pad_364[4];  // 0x16C (0x16C)
	struct FSliderStyle WidgetStyle;  // 0x170 (0x170)
	enum class EOrientation Orientation;  // 0x670 (0x670)
	char pad_1649[3];  // 0x671 (0x671)
	struct FLinearColor SliderBarColor;  // 0x674 (0x674)
	struct FLinearColor SliderHandleColor;  // 0x684 (0x684)
	char pad_1684_1 : 7;  // 0x694 (0x694)
	bool IndentHandle : 1;  // 0x694 (0x694)
	char pad_1685_1 : 7;  // 0x695 (0x695)
	bool Locked : 1;  // 0x695 (0x695)
	char pad_1686_1 : 7;  // 0x696 (0x696)
	bool MouseUsesStep : 1;  // 0x696 (0x696)
	char pad_1687_1 : 7;  // 0x697 (0x697)
	bool RequiresControllerLock : 1;  // 0x697 (0x697)
	float StepSize;  // 0x698 (0x698)
	char pad_1692_1 : 7;  // 0x69C (0x69C)
	bool IsFocusable : 1;  // 0x69C (0x69C)
	char pad_1693[3];  // 0x69D (0x69D)
	struct FMulticastInlineDelegate OnMouseCaptureBegin;  // 0x6A0 (0x6A0)
	struct FMulticastInlineDelegate OnMouseCaptureEnd;  // 0x6B0 (0x6B0)
	struct FMulticastInlineDelegate OnControllerCaptureBegin;  // 0x6C0 (0x6C0)
	struct FMulticastInlineDelegate OnControllerCaptureEnd;  // 0x6D0 (0x6D0)
	struct FMulticastInlineDelegate OnValueChanged;  // 0x6E0 (0x6E0)
	char pad_1776[16];  // 0x6F0 (0x6F0)


	void SetValue(float InValue); // Function UMG.Slider.SetValue
	void SetStepSize(float InValue); // Function UMG.Slider.SetStepSize
	void SetSliderHandleColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderHandleColor
	void SetSliderBarColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderBarColor
	void SetMinValue(float InValue); // Function UMG.Slider.SetMinValue
	void SetMaxValue(float InValue); // Function UMG.Slider.SetMaxValue
	void SetLocked(bool InValue); // Function UMG.Slider.SetLocked
	void SetIndentHandle(bool InValue); // Function UMG.Slider.SetIndentHandle
	float GetValue(); // Function UMG.Slider.GetValue
	float GetNormalizedValue(); // Function UMG.Slider.GetNormalizedValue
}; 
 
 


// Class UMG.MovieSceneWidgetMaterialSystem
// Size: 0x128(Inherited: 0x40)
struct UMovieSceneWidgetMaterialSystem : UMovieSceneEntitySystem
{
	char pad_64[232];  // 0x40 (0x40)


}; 
 
 


// Class UMG.UserListEntry
// Size: 0x28(Inherited: 0x28)
struct UUserListEntry : UInterface
{


	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG.UserListEntry.BP_OnItemSelectionChanged
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UMG.UserListEntry.BP_OnItemExpansionChanged
	void BP_OnEntryReleased(); // Function UMG.UserListEntry.BP_OnEntryReleased
}; 
 
 


// Class UMG.MovieSceneMarginSection
// Size: 0x538(Inherited: 0xF0)
struct UMovieSceneMarginSection : UMovieSceneSection
{
	char pad_240[8];  // 0xF0 (0xF0)
	struct FMovieSceneFloatChannel TopCurve;  // 0xF8 (0xF8)
	struct FMovieSceneFloatChannel LeftCurve;  // 0x208 (0x208)
	struct FMovieSceneFloatChannel RightCurve;  // 0x318 (0x318)
	struct FMovieSceneFloatChannel BottomCurve;  // 0x428 (0x428)


}; 
 
 


// Class UMG.PanelWidget
// Size: 0x168(Inherited: 0x150)
struct UPanelWidget : UWidget
{
	struct TArray<struct UPanelSlot*> Slots;  // 0x150 (0x150)
	char pad_352[8];  // 0x160 (0x160)


	bool RemoveChildAt(int32_t Index); // Function UMG.PanelWidget.RemoveChildAt
	bool RemoveChild(struct UWidget* Content); // Function UMG.PanelWidget.RemoveChild
	bool HasChild(struct UWidget* Content); // Function UMG.PanelWidget.HasChild
	bool HasAnyChildren(); // Function UMG.PanelWidget.HasAnyChildren
	int32_t GetChildrenCount(); // Function UMG.PanelWidget.GetChildrenCount
	int32_t GetChildIndex(struct UWidget* Content); // Function UMG.PanelWidget.GetChildIndex
	struct UWidget* GetChildAt(int32_t Index); // Function UMG.PanelWidget.GetChildAt
	struct TArray<struct UWidget*> GetAllChildren(); // Function UMG.PanelWidget.GetAllChildren
	void ClearChildren(); // Function UMG.PanelWidget.ClearChildren
	struct UPanelSlot* AddChild(struct UWidget* Content); // Function UMG.PanelWidget.AddChild
}; 
 
 


// Class UMG.WidgetSwitcher
// Size: 0x180(Inherited: 0x168)
struct UWidgetSwitcher : UPanelWidget
{
	int32_t ActiveWidgetIndex;  // 0x168 (0x168)
	char pad_364[20];  // 0x16C (0x16C)


	void SetActiveWidgetIndex(int32_t Index); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex
	void SetActiveWidget(struct UWidget* Widget); // Function UMG.WidgetSwitcher.SetActiveWidget
	struct UWidget* GetWidgetAtIndex(int32_t Index); // Function UMG.WidgetSwitcher.GetWidgetAtIndex
	int32_t GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets
	int32_t GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex
	struct UWidget* GetActiveWidget(); // Function UMG.WidgetSwitcher.GetActiveWidget
}; 
 
 


// Class UMG.UserWidgetBlueprint
// Size: 0xA8(Inherited: 0xA8)
struct UUserWidgetBlueprint : UBlueprint
{


}; 
 
 


// Class UMG.ContentWidget
// Size: 0x168(Inherited: 0x168)
struct UContentWidget : UPanelWidget
{


	struct UPanelSlot* SetContent(struct UWidget* Content); // Function UMG.ContentWidget.SetContent
	struct UPanelSlot* GetContentSlot(); // Function UMG.ContentWidget.GetContentSlot
	struct UWidget* GetContent(); // Function UMG.ContentWidget.GetContent
}; 
 
 


// Class UMG.Button
// Size: 0x5F0(Inherited: 0x168)
struct UButton : UContentWidget
{
	char pad_360[8];  // 0x168 (0x168)
	struct FButtonStyle WidgetStyle;  // 0x170 (0x170)
	struct FLinearColor ColorAndOpacity;  // 0x560 (0x560)
	struct FLinearColor BackgroundColor;  // 0x570 (0x570)
	enum class EButtonClickMethod ClickMethod;  // 0x580 (0x580)
	enum class EButtonTouchMethod TouchMethod;  // 0x581 (0x581)
	enum class EButtonPressMethod PressMethod;  // 0x582 (0x582)
	char pad_1411_1 : 7;  // 0x583 (0x583)
	bool IsFocusable : 1;  // 0x583 (0x583)
	char pad_1412[4];  // 0x584 (0x584)
	struct FMulticastInlineDelegate OnClicked;  // 0x588 (0x588)
	struct FMulticastInlineDelegate OnPressed;  // 0x598 (0x598)
	struct FMulticastInlineDelegate OnReleased;  // 0x5A8 (0x5A8)
	struct FMulticastInlineDelegate OnHovered;  // 0x5B8 (0x5B8)
	struct FMulticastInlineDelegate OnUnhovered;  // 0x5C8 (0x5C8)
	char pad_1496[24];  // 0x5D8 (0x5D8)


	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function UMG.Button.SetTouchMethod
	void SetStyle(struct FButtonStyle& InStyle); // Function UMG.Button.SetStyle
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function UMG.Button.SetPressMethod
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Button.SetColorAndOpacity
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function UMG.Button.SetClickMethod
	void SetBackgroundColor(struct FLinearColor InBackgroundColor); // Function UMG.Button.SetBackgroundColor
	bool IsPressed(); // Function UMG.Button.IsPressed
}; 
 
 


// Class UMG.FloatBinding
// Size: 0x60(Inherited: 0x60)
struct UFloatBinding : UPropertyBinding
{


	float GetValue(); // Function UMG.FloatBinding.GetValue
}; 
 
 


// Class UMG.WidgetAnimationDelegateBinding
// Size: 0x38(Inherited: 0x28)
struct UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding
{
	struct TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings;  // 0x28 (0x28)


}; 
 
 


// Class UMG.UMGSequenceTickManager
// Size: 0xC0(Inherited: 0x28)
struct UUMGSequenceTickManager : UObject
{
	struct TMap<struct TWeakObjectPtr<UUserWidget>, struct FSequenceTickManagerWidgetData> WeakUserWidgetData;  // 0x28 (0x28)
	struct UMovieSceneEntitySystemLinker* Linker;  // 0x78 (0x78)
	char pad_128[64];  // 0x80 (0x80)


}; 
 
 


// Class UMG.TextLayoutWidget
// Size: 0x170(Inherited: 0x150)
struct UTextLayoutWidget : UWidget
{
	struct FShapedTextOptions ShapedTextOptions;  // 0x150 (0x150)
	enum class ETextJustify Justification;  // 0x153 (0x153)
	uint8_t WrappingPolicy;  // 0x154 (0x154)
	char AutoWrapText : 1;  // 0x155 (0x155)
	char pad_341_1 : 7;  // 0x155 (0x155)
	char pad_342[3];  // 0x156 (0x156)
	float WrapTextAt;  // 0x158 (0x158)
	struct FMargin Margin;  // 0x7FF7D3428690 (0x16FAD0 (0x7FF7D3428690 (0x16FAD03EBC0))
	float LineHeightPercentage;  // 0x16C (0x16C)


	void SetJustification(enum class ETextJustify InJustification); // Function UMG.TextLayoutWidget.SetJustification
}; 
 
 


// Class UMG.Image
// Size: 0x2B0(Inherited: 0x150)
struct UImage : UWidget
{
	struct FSlateBrush Brush;  // 0x150 (0x150)
	struct FDelegate BrushDelegate;  // 0x220 (0x220)
	struct FLinearColor ColorAndOpacity;  // 0x230 (0x230)
	struct FDelegate ColorAndOpacityDelegate;  // 0x240 (0x240)
	char pad_592_1 : 7;  // 0x250 (0x250)
	bool bFlipForRightToLeftFlowDirection : 1;  // 0x250 (0x250)
	char pad_593[3];  // 0x251 (0x251)
	struct FDelegate OnMouseButtonDownEvent;  // 0x254 (0x254)
	char pad_612[76];  // 0x264 (0x264)


	void SetOpacity(float InOpacity); // Function UMG.Image.SetOpacity
	void SetDesiredSizeOverride(struct FVector2D DesiredSize); // Function UMG.Image.SetDesiredSizeOverride
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Image.SetColorAndOpacity
	void SetBrushTintColor(struct FSlateColor TintColor); // Function UMG.Image.SetBrushTintColor
	void SetBrushResourceObject(struct UObject* ResourceObject); // Function UMG.Image.SetBrushResourceObject
	void SetBrushFromTextureDynamic(struct UTexture2DDynamic* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTextureDynamic
	void SetBrushFromTexture(struct UTexture2D* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTexture
	void SetBrushFromSoftTexture(struct TSoftObjectPtr<UTexture2D> SoftTexture, bool bMatchSize); // Function UMG.Image.SetBrushFromSoftTexture
	void SetBrushFromSoftMaterial(struct TSoftObjectPtr<UMaterialInterface> SoftMaterial); // Function UMG.Image.SetBrushFromSoftMaterial
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Image.SetBrushFromMaterial
	void SetBrushFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize); // Function UMG.Image.SetBrushFromAtlasInterface
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Image.SetBrushFromAsset
	void SetBrush(struct FSlateBrush& InBrush); // Function UMG.Image.SetBrush
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial
}; 
 
 


// Class UMG.WidgetSwitcherSlot
// Size: 0x58(Inherited: 0x38)
struct UWidgetSwitcherSlot : UPanelSlot
{
	char pad_56[8];  // 0x38 (0x38)
	struct FMargin Padding;  // 0x40 (0x40)
	enum class EHorizontalAlignment HorizontalAlignment;  // 0x50 (0x50)
	enum class EVerticalAlignment VerticalAlignment;  // 0x51 (0x51)
	char pad_82[6];  // 0x52 (0x52)


	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.WidgetSwitcherSlot.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
}; 
 
 


// Class UMG.TextBlock
// Size: 0x340(Inherited: 0x170)
struct UTextBlock : UTextLayoutWidget
{
	struct FText Text;  // 0x170 (0x170)
	struct FDelegate TextDelegate;  // 0x188 (0x188)
	struct FSlateColor ColorAndOpacity;  // 0x198 (0x198)
	struct FDelegate ColorAndOpacityDelegate;  // 0x1AC (0x1AC)
	char pad_444[4];  // 0x1BC (0x1BC)
	struct FSlateFontInfo Font;  // 0x1C0 (0x1C0)
	char pad_536[8];  // 0x218 (0x218)
	struct FSlateBrush StrikeBrush;  // 0x220 (0x220)
	struct FVector2D ShadowOffset;  // 0x2F0 (0x2F0)
	struct FLinearColor ShadowColorAndOpacity;  // 0x300 (0x300)
	struct FDelegate ShadowColorAndOpacityDelegate;  // 0x310 (0x310)
	float MinDesiredWidth;  // 0x320 (0x320)
	char pad_804_1 : 7;  // 0x324 (0x324)
	bool bWrapWithInvalidationPanel : 1;  // 0x324 (0x324)
	uint8_t TextTransformPolicy;  // 0x325 (0x325)
	uint8_t TextOverflowPolicy;  // 0x326 (0x326)
	char pad_807_1 : 7;  // 0x327 (0x327)
	bool bSimpleTextMode : 1;  // 0x327 (0x327)
	char pad_808[24];  // 0x328 (0x328)


	void SetTextTransformPolicy(uint8_t InTransformPolicy); // Function UMG.TextBlock.SetTextTransformPolicy
	void SetTextOverflowPolicy(uint8_t InOverflowPolicy); // Function UMG.TextBlock.SetTextOverflowPolicy
	void SetText(struct FText InText); // Function UMG.TextBlock.SetText
	void SetStrikeBrush(struct FSlateBrush InStrikeBrush); // Function UMG.TextBlock.SetStrikeBrush
	void SetShadowOffset(struct FVector2D InShadowOffset); // Function UMG.TextBlock.SetShadowOffset
	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.TextBlock.SetShadowColorAndOpacity
	void SetOpacity(float InOpacity); // Function UMG.TextBlock.SetOpacity
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.TextBlock.SetMinDesiredWidth
	void SetFontOutlineMaterial(struct UMaterialInterface* InMaterial); // Function UMG.TextBlock.SetFontOutlineMaterial
	void SetFontMaterial(struct UMaterialInterface* InMaterial); // Function UMG.TextBlock.SetFontMaterial
	void SetFont(struct FSlateFontInfo InFontInfo); // Function UMG.TextBlock.SetFont
	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.TextBlock.SetColorAndOpacity
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.TextBlock.SetAutoWrapText
	struct FText GetText(); // Function UMG.TextBlock.GetText
	struct UMaterialInstanceDynamic* GetDynamicOutlineMaterial(); // Function UMG.TextBlock.GetDynamicOutlineMaterial
	struct UMaterialInstanceDynamic* GetDynamicFontMaterial(); // Function UMG.TextBlock.GetDynamicFontMaterial
}; 
 
 


// Class UMG.PanelSlot
// Size: 0x38(Inherited: 0x28)
struct UPanelSlot : UVisual
{
	struct UPanelWidget* Parent;  // 0x28 (0x28)
	struct UWidget* Content;  // 0x30 (0x30)


}; 
 
 


// Class UMG.ScrollBox
// Size: 0xCA0(Inherited: 0x168)
struct UScrollBox : UPanelWidget
{
	char pad_360[8];  // 0x168 (0x168)
	struct FScrollBoxStyle WidgetStyle;  // 0x170 (0x170)
	struct FScrollBarStyle WidgetBarStyle;  // 0x4C0 (0x4C0)
	enum class EOrientation Orientation;  // 0xC30 (0xC30)
	uint8_t ScrollBarVisibility;  // 0xC31 (0xC31)
	uint8_t ConsumeMouseWheel;  // 0xC32 (0xC32)
	char pad_3123[5];  // 0xC33 (0xC33)
	struct FVector2D ScrollbarThickness;  // 0xC38 (0xC38)
	struct FMargin ScrollbarPadding;  // 0xC48 (0xC48)
	char pad_3160_1 : 7;  // 0xC58 (0xC58)
	bool AlwaysShowScrollbar : 1;  // 0xC58 (0xC58)
	char pad_3161_1 : 7;  // 0xC59 (0xC59)
	bool AlwaysShowScrollbarTrack : 1;  // 0xC59 (0xC59)
	char pad_3162_1 : 7;  // 0xC5A (0xC5A)
	bool AllowOverscroll : 1;  // 0xC5A (0xC5A)
	char pad_3163_1 : 7;  // 0xC5B (0xC5B)
	bool BackPadScrolling : 1;  // 0xC5B (0xC5B)
	char pad_3164_1 : 7;  // 0xC5C (0xC5C)
	bool FrontPadScrolling : 1;  // 0xC5C (0xC5C)
	char pad_3165_1 : 7;  // 0xC5D (0xC5D)
	bool bAnimateWheelScrolling : 1;  // 0xC5D (0xC5D)
	uint8_t NavigationDestination;  // 0xC5E (0xC5E)
	char pad_3167[1];  // 0xC5F (0xC5F)
	float NavigationScrollPadding;  // 0xC60 (0xC60)
	uint8_t ScrollWhenFocusChanges;  // 0xC64 (0xC64)
	char pad_3173_1 : 7;  // 0xC65 (0xC65)
	bool bAllowRightClickDragScrolling : 1;  // 0xC65 (0xC65)
	char pad_3174[2];  // 0xC66 (0xC66)
	float WheelScrollMultiplier;  // 0xC68 (0xC68)
	char pad_3180[4];  // 0xC6C (0xC6C)
	struct FMulticastInlineDelegate OnUserScrolled;  // 0xC70 (0xC70)
	char pad_3200[32];  // 0xC80 (0xC80)


	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ScrollBox.SetWheelScrollMultiplier
	void SetScrollWhenFocusChanges(uint8_t NewScrollWhenFocusChanges); // Function UMG.ScrollBox.SetScrollWhenFocusChanges
	void SetScrollOffset(float NewScrollOffset); // Function UMG.ScrollBox.SetScrollOffset
	void SetScrollBarVisibility(uint8_t NewScrollBarVisibility); // Function UMG.ScrollBox.SetScrollBarVisibility
	void SetScrollbarThickness(struct FVector2D& NewScrollbarThickness); // Function UMG.ScrollBox.SetScrollbarThickness
	void SetScrollbarPadding(struct FMargin& NewScrollbarPadding); // Function UMG.ScrollBox.SetScrollbarPadding
	void SetOrientation(enum class EOrientation NewOrientation); // Function UMG.ScrollBox.SetOrientation
	void SetNavigationDestination(uint8_t NewNavigationDestination); // Function UMG.ScrollBox.SetNavigationDestination
	void SetConsumeMouseWheel(uint8_t NewConsumeMouseWheel); // Function UMG.ScrollBox.SetConsumeMouseWheel
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling); // Function UMG.ScrollBox.SetAnimateWheelScrolling
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar); // Function UMG.ScrollBox.SetAlwaysShowScrollbar
	void SetAllowOverscroll(bool NewAllowOverscroll); // Function UMG.ScrollBox.SetAllowOverscroll
	void ScrollWidgetIntoView(struct UWidget* WidgetToFind, bool AnimateScroll, uint8_t ScrollDestination, float Padding); // Function UMG.ScrollBox.ScrollWidgetIntoView
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd
	float GetViewOffsetFraction(); // Function UMG.ScrollBox.GetViewOffsetFraction
	float GetViewFraction(); // Function UMG.ScrollBox.GetViewFraction
	float GetScrollOffsetOfEnd(); // Function UMG.ScrollBox.GetScrollOffsetOfEnd
	float GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset
	void EndInertialScrolling(); // Function UMG.ScrollBox.EndInertialScrolling
}; 
 
 


// Class UMG.MultiLineEditableTextBox
// Size: 0x1070(Inherited: 0x170)
struct UMultiLineEditableTextBox : UTextLayoutWidget
{
	struct FText Text;  // 0x170 (0x170)
	struct FText HintText;  // 0x188 (0x188)
	struct FDelegate HintTextDelegate;  // 0x1A0 (0x1A0)
	struct FEditableTextBoxStyle WidgetStyle;  // 0x1B0 (0x1B0)
	char pad_4144_1 : 7;  // 0x1030 (0x1030)
	bool bIsReadOnly : 1;  // 0x1030 (0x1030)
	char pad_4145_1 : 7;  // 0x1031 (0x1031)
	bool AllowContextMenu : 1;  // 0x1031 (0x1031)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions;  // 0x1032 (0x1032)
	uint8_t VirtualKeyboardDismissAction;  // 0x1033 (0x1033)
	char pad_4148[4];  // 0x1034 (0x1034)
	struct FMulticastInlineDelegate OnTextChanged;  // 0x1038 (0x1038)
	struct FMulticastInlineDelegate OnTextCommitted;  // 0x1048 (0x1048)
	char pad_4184[24];  // 0x1058 (0x1058)


	void SetTextStyle(struct FTextBlockStyle& InTextStyle); // Function UMG.MultiLineEditableTextBox.SetTextStyle
	void SetText(struct FText InText); // Function UMG.MultiLineEditableTextBox.SetText
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableTextBox.SetHintText
	void SetForegroundColor(struct FLinearColor Color); // Function UMG.MultiLineEditableTextBox.SetForegroundColor
	void SetError(struct FText InError); // Function UMG.MultiLineEditableTextBox.SetError
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	struct FText GetText(); // Function UMG.MultiLineEditableTextBox.GetText
	struct FText GetHintText(); // Function UMG.MultiLineEditableTextBox.GetHintText
}; 
 
 


// Class UMG.ListViewBase
// Size: 0x268(Inherited: 0x150)
struct UListViewBase : UWidget
{
	struct FMulticastInlineDelegate BP_OnEntryGenerated;  // 0x150 (0x150)
	char pad_352[16];  // 0x160 (0x160)
	UUserWidget* EntryWidgetClass;  // 0x170 (0x170)
	float WheelScrollMultiplier;  // 0x178 (0x178)
	char pad_380_1 : 7;  // 0x17C (0x17C)
	bool bEnableScrollAnimation : 1;  // 0x17C (0x17C)
	char pad_381_1 : 7;  // 0x17D (0x17D)
	bool AllowOverscroll : 1;  // 0x17D (0x17D)
	char pad_382_1 : 7;  // 0x17E (0x17E)
	bool bEnableRightClickScrolling : 1;  // 0x17E (0x17E)
	char pad_383_1 : 7;  // 0x17F (0x17F)
	bool bEnableFixedLineOffset : 1;  // 0x17F (0x17F)
	float FixedLineScrollOffset;  // 0x180 (0x180)
	char pad_388_1 : 7;  // 0x184 (0x184)
	bool bAllowDragging : 1;  // 0x184 (0x184)
	char pad_389[3];  // 0x185 (0x185)
	struct FMulticastInlineDelegate BP_OnEntryReleased;  // 0x188 (0x188)
	struct FUserWidgetPool EntryWidgetPool;  // 0x198 (0x198)
	char pad_544[72];  // 0x220 (0x220)


	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ListViewBase.SetWheelScrollMultiplier
	void SetScrollOffset(float InScrollOffset); // Function UMG.ListViewBase.SetScrollOffset
	void SetScrollBarVisibility(uint8_t Invisibility); // Function UMG.ListViewBase.SetScrollBarVisibility
	void ScrollToTop(); // Function UMG.ListViewBase.ScrollToTop
	void ScrollToBottom(); // Function UMG.ListViewBase.ScrollToBottom
	void RequestRefresh(); // Function UMG.ListViewBase.RequestRefresh
	void RegenerateAllEntries(); // Function UMG.ListViewBase.RegenerateAllEntries
	float GetScrollOffset(); // Function UMG.ListViewBase.GetScrollOffset
	struct TArray<struct UUserWidget*> GetDisplayedEntryWidgets(); // Function UMG.ListViewBase.GetDisplayedEntryWidgets
}; 
 
 


// Class UMG.ListView
// Size: 0xC20(Inherited: 0x268)
struct UListView : UListViewBase
{
	char pad_616[216];  // 0x268 (0x268)
	struct FTableViewStyle WidgetStyle;  // 0x340 (0x340)
	struct FScrollBarStyle ScrollBarStyle;  // 0x420 (0x420)
	enum class EOrientation Orientation;  // 0xB90 (0xB90)
	enum class ESelectionMode SelectionMode;  // 0xB91 (0xB91)
	uint8_t ConsumeMouseWheel;  // 0xB92 (0xB92)
	char pad_2963_1 : 7;  // 0xB93 (0xB93)
	bool bClearSelectionOnClick : 1;  // 0xB93 (0xB93)
	char pad_2964_1 : 7;  // 0xB94 (0xB94)
	bool bIsFocusable : 1;  // 0xB94 (0xB94)
	char pad_2965[3];  // 0xB95 (0xB95)
	float EntrySpacing;  // 0xB98 (0xB98)
	char pad_2972_1 : 7;  // 0xB9C (0xB9C)
	bool bReturnFocusToSelection : 1;  // 0xB9C (0xB9C)
	char pad_2973[3];  // 0xB9D (0xB9D)
	struct TArray<struct UObject*> ListItems;  // 0xBA0 (0xBA0)
	char pad_2992[16];  // 0xBB0 (0xBB0)
	struct FMulticastInlineDelegate BP_OnEntryInitialized;  // 0xBC0 (0xBC0)
	struct FMulticastInlineDelegate BP_OnItemClicked;  // 0xBD0 (0xBD0)
	struct FMulticastInlineDelegate BP_OnItemDoubleClicked;  // 0xBE0 (0xBE0)
	struct FMulticastInlineDelegate BP_OnItemIsHoveredChanged;  // 0xBF0 (0xBF0)
	struct FMulticastInlineDelegate BP_OnItemSelectionChanged;  // 0xC00 (0xC00)
	struct FMulticastInlineDelegate BP_OnItemScrolledIntoView;  // 0xC10 (0xC10)


	void SetSelectionMode(enum class ESelectionMode SelectionMode); // Function UMG.ListView.SetSelectionMode
	void SetSelectedIndex(int32_t Index); // Function UMG.ListView.SetSelectedIndex
	void ScrollIndexIntoView(int32_t Index); // Function UMG.ListView.ScrollIndexIntoView
	void RemoveItem(struct UObject* Item); // Function UMG.ListView.RemoveItem
	void OnListItemOuterEndPlayed(struct AActor* ItemOuter, enum class EEndPlayReason EndPlayReason); // Function UMG.ListView.OnListItemOuterEndPlayed
	void OnListItemEndPlayed(struct AActor* Item, enum class EEndPlayReason EndPlayReason); // Function UMG.ListView.OnListItemEndPlayed
	void NavigateToIndex(int32_t Index); // Function UMG.ListView.NavigateToIndex
	bool IsRefreshPending(); // Function UMG.ListView.IsRefreshPending
	int32_t GetNumItems(); // Function UMG.ListView.GetNumItems
	struct TArray<struct UObject*> GetListItems(); // Function UMG.ListView.GetListItems
	struct UObject* GetItemAt(int32_t Index); // Function UMG.ListView.GetItemAt
	int32_t GetIndexForItem(struct UObject* Item); // Function UMG.ListView.GetIndexForItem
	void ClearListItems(); // Function UMG.ListView.ClearListItems
	void BP_SetSelectedItem(struct UObject* Item); // Function UMG.ListView.BP_SetSelectedItem
	void BP_SetListItems(struct TArray<struct UObject*>& InListItems); // Function UMG.ListView.BP_SetListItems
	void BP_SetItemSelection(struct UObject* Item, bool bSelected); // Function UMG.ListView.BP_SetItemSelection
	void BP_ScrollItemIntoView(struct UObject* Item); // Function UMG.ListView.BP_ScrollItemIntoView
	void BP_NavigateToItem(struct UObject* Item); // Function UMG.ListView.BP_NavigateToItem
	bool BP_IsItemVisible(struct UObject* Item); // Function UMG.ListView.BP_IsItemVisible
	bool BP_GetSelectedItems(struct TArray<struct UObject*>& Items); // Function UMG.ListView.BP_GetSelectedItems
	struct UObject* BP_GetSelectedItem(); // Function UMG.ListView.BP_GetSelectedItem
	int32_t BP_GetNumItemsSelected(); // Function UMG.ListView.BP_GetNumItemsSelected
	void BP_ClearSelection(); // Function UMG.ListView.BP_ClearSelection
	void BP_CancelScrollIntoView(); // Function UMG.ListView.BP_CancelScrollIntoView
	void AddItem(struct UObject* Item); // Function UMG.ListView.AddItem
}; 
 
 


// Class UMG.TextBinding
// Size: 0x68(Inherited: 0x60)
struct UTextBinding : UPropertyBinding
{
	char pad_96[8];  // 0x60 (0x60)


	struct FText GetTextValue(); // Function UMG.TextBinding.GetTextValue
	struct FString GetStringValue(); // Function UMG.TextBinding.GetStringValue
}; 
 
 


// Class UMG.ColorBinding
// Size: 0x68(Inherited: 0x60)
struct UColorBinding : UPropertyBinding
{
	char pad_96[8];  // 0x60 (0x60)


	struct FSlateColor GetSlateValue(); // Function UMG.ColorBinding.GetSlateValue
	struct FLinearColor GetLinearValue(); // Function UMG.ColorBinding.GetLinearValue
}; 
 
 


// Class UMG.TileView
// Size: 0xC40(Inherited: 0xC20)
struct UTileView : UListView
{
	float EntryHeight;  // 0xC20 (0xC20)
	float EntryWidth;  // 0xC24 (0xC24)
	uint8_t TileAlignment;  // 0xC28 (0xC28)
	char pad_3113_1 : 7;  // 0xC29 (0xC29)
	bool bWrapHorizontalNavigation : 1;  // 0xC29 (0xC29)
	char pad_3114[22];  // 0xC2A (0xC2A)


	void SetEntryWidth(float NewWidth); // Function UMG.TileView.SetEntryWidth
	void SetEntryHeight(float NewHeight); // Function UMG.TileView.SetEntryHeight
	float GetEntryWidth(); // Function UMG.TileView.GetEntryWidth
	float GetEntryHeight(); // Function UMG.TileView.GetEntryHeight
}; 
 
 


// Class UMG.TreeView
// Size: 0xC80(Inherited: 0xC20)
struct UTreeView : UListView
{
	char pad_3104[16];  // 0xC20 (0xC20)
	struct FDelegate BP_OnGetItemChildren;  // 0xC30 (0xC30)
	struct FMulticastInlineDelegate BP_OnItemExpansionChanged;  // 0xC40 (0xC40)
	char pad_3152[48];  // 0xC50 (0xC50)


	void SetItemExpansion(struct UObject* Item, bool bExpandItem); // Function UMG.TreeView.SetItemExpansion
	void ExpandAll(); // Function UMG.TreeView.ExpandAll
	void CollapseAll(); // Function UMG.TreeView.CollapseAll
}; 
 
 


// Class UMG.AsyncTaskDownloadImage
// Size: 0x50(Inherited: 0x30)
struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30 (0x30)
	struct FMulticastInlineDelegate OnFail;  // 0x40 (0x40)


	struct UAsyncTaskDownloadImage* DownloadImage(struct FString URL); // Function UMG.AsyncTaskDownloadImage.DownloadImage
}; 
 
 


// Class UMG.Overlay
// Size: 0x178(Inherited: 0x168)
struct UOverlay : UPanelWidget
{
	char pad_360[16];  // 0x168 (0x168)


	struct UOverlaySlot* AddChildToOverlay(struct UWidget* Content); // Function UMG.Overlay.AddChildToOverlay
}; 
 
 


// Class UMG.WidgetBlueprintLibrary
// Size: 0x28(Inherited: 0x28)
struct UWidgetBlueprintLibrary : UBlueprintFunctionLibrary
{


	struct FEventReply UnlockMouse(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.UnlockMouse
	struct FEventReply Unhandled(); // Function UMG.WidgetBlueprintLibrary.Unhandled
	void SetWindowTitleBarState(struct UWidget* TitleBarContent, uint8_t Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
	void SetWindowTitleBarOnCloseClickedDelegate(struct FDelegate Delegate); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
	void SetWindowTitleBarCloseButtonActive(bool bActive); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
	struct FEventReply SetUserFocus(struct FEventReply& Reply, struct UWidget* FocusWidget, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.SetUserFocus
	struct FEventReply SetMousePosition(struct FEventReply& Reply, struct FVector2D NewMousePosition); // Function UMG.WidgetBlueprintLibrary.SetMousePosition
	void SetInputMode_UIOnlyEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, uint8_t InMouseLockMode, bool bFlushInput); // Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
	void SetInputMode_GameOnly(struct APlayerController* PlayerController, bool bFlushInput); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
	void SetInputMode_GameAndUIEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, uint8_t InMouseLockMode, bool bHideCursorDuringCapture, bool bFlushInput); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
	bool SetHardwareCursor(struct UObject* WorldContextObject, enum class EMouseCursor CursorShape, struct FName CursorName, struct FVector2D HotSpot); // Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
	void SetFocusToGameViewport(); // Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
	void SetColorVisionDeficiencyType(uint8_t Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency); // Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType
	void SetBrushResourceToTexture(struct FSlateBrush& Brush, struct UTexture2D* Texture); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
	void SetBrushResourceToMaterial(struct FSlateBrush& Brush, struct UMaterialInterface* Material); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
	void RestorePreviousWindowTitleBarState(); // Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState
	struct FEventReply ReleaseMouseCapture(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
	struct FEventReply ReleaseJoystickCapture(struct FEventReply& Reply, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature(); // DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature
	struct FSlateBrush NoResourceBrush(); // Function UMG.WidgetBlueprintLibrary.NoResourceBrush
	struct FSlateBrush MakeBrushFromTexture(struct UTexture2D* Texture, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
	struct FSlateBrush MakeBrushFromMaterial(struct UMaterialInterface* Material, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
	struct FSlateBrush MakeBrushFromAsset(struct USlateBrushAsset* BrushAsset); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
	struct FEventReply LockMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.LockMouse
	bool IsDragDropping(); // Function UMG.WidgetBlueprintLibrary.IsDragDropping
	struct FEventReply Handled(); // Function UMG.WidgetBlueprintLibrary.Handled
	void GetSafeZonePadding(struct UObject* WorldContextObject, struct FVector4& SafePadding, struct FVector2D& SafePaddingScale, struct FVector4& SpillOverPadding); // Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
	struct FKeyEvent GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
	struct FInputEvent GetInputEventFromPointerEvent(struct FPointerEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
	struct FInputEvent GetInputEventFromNavigationEvent(struct FNavigationEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
	struct FInputEvent GetInputEventFromKeyEvent(struct FKeyEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
	struct FInputEvent GetInputEventFromCharacterEvent(struct FCharacterEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
	struct UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
	struct UDragDropOperation* GetDragDroppingContent(); // Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
	struct UTexture2D* GetBrushResourceAsTexture2D(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
	struct UMaterialInterface* GetBrushResourceAsMaterial(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
	struct UObject* GetBrushResource(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResource
	void GetAllWidgetsWithInterface(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, UInterface* Interface, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
	void GetAllWidgetsOfClass(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, UUserWidget* WidgetClass, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
	struct FEventReply EndDragDrop(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.EndDragDrop
	void DrawTextFormatted(struct FPaintContext& Context, struct FText& Text, struct FVector2D Position, struct UFont* Font, int32_t FontSize, struct FName FontTypeFace, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
	void DrawText(struct FPaintContext& Context, struct FString InString, struct FVector2D Position, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawText
	void DrawSpline(struct FPaintContext& Context, struct FVector2D Start, struct FVector2D StartDir, struct FVector2D End, struct FVector2D EndDir, struct FLinearColor Tint, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawSpline
	void DrawLines(struct FPaintContext& Context, struct TArray<struct FVector2D>& Points, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLines
	void DrawLine(struct FPaintContext& Context, struct FVector2D PositionA, struct FVector2D PositionB, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLine
	void DrawBox(struct FPaintContext& Context, struct FVector2D Position, struct FVector2D Size, struct USlateBrushAsset* Brush, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawBox
	void DismissAllMenus(); // Function UMG.WidgetBlueprintLibrary.DismissAllMenus
	struct FEventReply DetectDragIfPressed(struct FPointerEvent& PointerEvent, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
	struct FEventReply DetectDrag(struct FEventReply& Reply, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDrag
	struct UDragDropOperation* CreateDragDropOperation(UDragDropOperation* OperationClass); // Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
	struct UUserWidget* Create(struct UObject* WorldContextObject, UUserWidget* WidgetType, struct APlayerController* OwningPlayer); // Function UMG.WidgetBlueprintLibrary.Create
	struct FEventReply ClearUserFocus(struct FEventReply& Reply, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.ClearUserFocus
	struct FEventReply CaptureMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.CaptureMouse
	struct FEventReply CaptureJoystick(struct FEventReply& Reply, struct UWidget* CapturingWidget, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.CaptureJoystick
	void CancelDragDrop(); // Function UMG.WidgetBlueprintLibrary.CancelDragDrop
}; 
 
 


// Class UMG.SlateAccessibleWidgetData
// Size: 0x80(Inherited: 0x28)
struct USlateAccessibleWidgetData : UObject
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bCanChildrenBeAccessible : 1;  // 0x28 (0x28)
	uint8_t AccessibleBehavior;  // 0x29 (0x29)
	uint8_t AccessibleSummaryBehavior;  // 0x2A (0x2A)
	char pad_43[5];  // 0x2B (0x2B)
	struct FText AccessibleText;  // 0x30 (0x30)
	struct FDelegate AccessibleTextDelegate;  // 0x48 (0x48)
	struct FText AccessibleSummaryText;  // 0x58 (0x58)
	struct FDelegate AccessibleSummaryTextDelegate;  // 0x70 (0x70)


}; 
 
 


// Class UMG.OverlaySlot
// Size: 0x58(Inherited: 0x38)
struct UOverlaySlot : UPanelSlot
{
	char pad_56[8];  // 0x38 (0x38)
	struct FMargin Padding;  // 0x40 (0x40)
	enum class EHorizontalAlignment HorizontalAlignment;  // 0x50 (0x50)
	enum class EVerticalAlignment VerticalAlignment;  // 0x51 (0x51)
	char pad_82[6];  // 0x52 (0x52)


	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.OverlaySlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.OverlaySlot.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.OverlaySlot.SetHorizontalAlignment
}; 
 
 


// Class UMG.DynamicEntryBoxBase
// Size: 0x230(Inherited: 0x150)
struct UDynamicEntryBoxBase : UWidget
{
	uint8_t EntryBoxType;  // 0x150 (0x150)
	char pad_337[7];  // 0x151 (0x151)
	struct FVector2D EntrySpacing;  // 0x158 (0x158)
	struct TArray<struct FVector2D> SpacingPattern;  // 0x168 (0x168)
	struct FSlateChildSize EntrySizeRule;  // 0x178 (0x178)
	enum class EHorizontalAlignment EntryHorizontalAlignment;  // 0x180 (0x180)
	enum class EVerticalAlignment EntryVerticalAlignment;  // 0x181 (0x181)
	char pad_386[2];  // 0x182 (0x182)
	int32_t MaxElementSize;  // 0x184 (0x184)
	struct FRadialBoxSettings RadialBoxSettings;  // 0x188 (0x188)
	char pad_408[16];  // 0x198 (0x198)
	struct FUserWidgetPool EntryWidgetPool;  // 0x1A8 (0x1A8)


	void SetRadialSettings(struct FRadialBoxSettings& InSettings); // Function UMG.DynamicEntryBoxBase.SetRadialSettings
	void SetEntrySpacing(struct FVector2D& InEntrySpacing); // Function UMG.DynamicEntryBoxBase.SetEntrySpacing
	int32_t GetNumEntries(); // Function UMG.DynamicEntryBoxBase.GetNumEntries
	struct TArray<struct UUserWidget*> GetAllEntries(); // Function UMG.DynamicEntryBoxBase.GetAllEntries
}; 
 
 


// Class UMG.WidgetAnimation
// Size: 0x98(Inherited: 0x68)
struct UWidgetAnimation : UMovieSceneSequence
{
	struct UMovieScene* MovieScene;  // 0x68 (0x68)
	struct TArray<struct FWidgetAnimationBinding> AnimationBindings;  // 0x70 (0x70)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool bLegacyFinishOnStop : 1;  // 0x80 (0x80)
	char pad_129[7];  // 0x81 (0x81)
	struct FString DisplayLabel;  // 0x88 (0x88)


	void UnbindFromAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationStarted
	void UnbindFromAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationFinished
	void UnbindAllFromAnimationStarted(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted
	void UnbindAllFromAnimationFinished(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished
	float GetStartTime(); // Function UMG.WidgetAnimation.GetStartTime
	float GetEndTime(); // Function UMG.WidgetAnimation.GetEndTime
	void BindToAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationStarted
	void BindToAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationFinished
}; 
 
 


// Class UMG.EditableText
// Size: 0x4E0(Inherited: 0x150)
struct UEditableText : UWidget
{
	struct FText Text;  // 0x150 (0x150)
	struct FDelegate TextDelegate;  // 0x168 (0x168)
	struct FText HintText;  // 0x178 (0x178)
	struct FDelegate HintTextDelegate;  // 0x190 (0x190)
	struct FEditableTextStyle WidgetStyle;  // 0x1A0 (0x1A0)
	char pad_1168_1 : 7;  // 0x490 (0x490)
	bool IsReadOnly : 1;  // 0x490 (0x490)
	char pad_1169_1 : 7;  // 0x491 (0x491)
	bool IsPassword : 1;  // 0x491 (0x491)
	char pad_1170[2];  // 0x492 (0x492)
	float MinimumDesiredWidth;  // 0x494 (0x494)
	char pad_1176_1 : 7;  // 0x498 (0x498)
	bool IsCaretMovedWhenGainFocus : 1;  // 0x498 (0x498)
	char pad_1177_1 : 7;  // 0x499 (0x499)
	bool SelectAllTextWhenFocused : 1;  // 0x499 (0x499)
	char pad_1178_1 : 7;  // 0x49A (0x49A)
	bool RevertTextOnEscape : 1;  // 0x49A (0x49A)
	char pad_1179_1 : 7;  // 0x49B (0x49B)
	bool ClearKeyboardFocusOnCommit : 1;  // 0x49B (0x49B)
	char pad_1180_1 : 7;  // 0x49C (0x49C)
	bool SelectAllTextOnCommit : 1;  // 0x49C (0x49C)
	char pad_1181_1 : 7;  // 0x49D (0x49D)
	bool AllowContextMenu : 1;  // 0x49D (0x49D)
	enum class EVirtualKeyboardType KeyboardType;  // 0x49E (0x49E)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions;  // 0x49F (0x49F)
	uint8_t VirtualKeyboardTrigger;  // 0x4A0 (0x4A0)
	uint8_t VirtualKeyboardDismissAction;  // 0x4A1 (0x4A1)
	enum class ETextJustify Justification;  // 0x4A2 (0x4A2)
	uint8_t OverflowPolicy;  // 0x4A3 (0x4A3)
	struct FShapedTextOptions ShapedTextOptions;  // 0x4A4 (0x4A4)
	char pad_1191[1];  // 0x4A7 (0x4A7)
	struct FMulticastInlineDelegate OnTextChanged;  // 0x4A8 (0x4A8)
	struct FMulticastInlineDelegate OnTextCommitted;  // 0x4B8 (0x4B8)
	char pad_1224[24];  // 0x4C8 (0x4C8)


	void SetTextOverflowPolicy(uint8_t InOverflowPolicy); // Function UMG.EditableText.SetTextOverflowPolicy
	void SetText(struct FText InText); // Function UMG.EditableText.SetText
	void SetMinimumDesiredWidth(float InMinDesiredWidth); // Function UMG.EditableText.SetMinimumDesiredWidth
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableText.SetJustification
	void SetIsReadOnly(bool InbIsReadyOnly); // Function UMG.EditableText.SetIsReadOnly
	void SetIsPassword(bool InbIsPassword); // Function UMG.EditableText.SetIsPassword
	void SetHintText(struct FText InHintText); // Function UMG.EditableText.SetHintText
	void SetFontOutlineMaterial(struct UMaterialInterface* InMaterial); // Function UMG.EditableText.SetFontOutlineMaterial
	void SetFontMaterial(struct UMaterialInterface* InMaterial); // Function UMG.EditableText.SetFontMaterial
	void SetFont(struct FSlateFontInfo InFontInfo); // Function UMG.EditableText.SetFont
	void OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
	void OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
	struct FText GetText(); // Function UMG.EditableText.GetText
	enum class ETextJustify GetJustification(); // Function UMG.EditableText.GetJustification
	struct FText GetHintText(); // Function UMG.EditableText.GetHintText
	struct FSlateFontInfo GetFont(); // Function UMG.EditableText.GetFont
}; 
 
 


// Class UMG.BackgroundBlurSlot
// Size: 0x60(Inherited: 0x38)
struct UBackgroundBlurSlot : UPanelSlot
{
	struct FMargin Padding;  // 0x38 (0x38)
	enum class EHorizontalAlignment HorizontalAlignment;  // 0x48 (0x48)
	enum class EVerticalAlignment VerticalAlignment;  // 0x49 (0x49)
	char pad_74[22];  // 0x4A (0x4A)


	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlurSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlurSlot.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
}; 
 
 


// Class UMG.DragDropOperation
// Size: 0x90(Inherited: 0x28)
struct UDragDropOperation : UObject
{
	struct FString Tag;  // 0x28 (0x28)
	struct UObject* Payload;  // 0x38 (0x38)
	struct UWidget* DefaultDragVisual;  // 0x40 (0x40)
	uint8_t Pivot;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)
	struct FVector2D Offset;  // 0x50 (0x50)
	struct FMulticastInlineDelegate OnDrop;  // 0x60 (0x60)
	struct FMulticastInlineDelegate OnDragCancelled;  // 0x70 (0x70)
	struct FMulticastInlineDelegate OnDragged;  // 0x80 (0x80)


	void Drop(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.Drop
	void Dragged(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.Dragged
	void DragCancelled(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.DragCancelled
}; 
 
 


// Class UMG.VisibilityBinding
// Size: 0x60(Inherited: 0x60)
struct UVisibilityBinding : UPropertyBinding
{


	uint8_t GetValue(); // Function UMG.VisibilityBinding.GetValue
}; 
 
 


// Class UMG.Int32Binding
// Size: 0x60(Inherited: 0x60)
struct UInt32Binding : UPropertyBinding
{


	int32_t GetValue(); // Function UMG.Int32Binding.GetValue
}; 
 
 


// Class UMG.WidgetComponent
// Size: 0x6B0(Inherited: 0x570)
struct UWidgetComponent : UMeshComponent
{
	uint8_t Space;  // 0x570 (0x570)
	uint8_t TimingPolicy;  // 0x571 (0x571)
	char pad_1394[6];  // 0x572 (0x572)
	UUserWidget* WidgetClass;  // 0x578 (0x578)
	struct FIntPoint DrawSize;  // 0x580 (0x580)
	char pad_1416_1 : 7;  // 0x588 (0x588)
	bool bManuallyRedraw : 1;  // 0x588 (0x588)
	char pad_1417_1 : 7;  // 0x589 (0x589)
	bool bRedrawRequested : 1;  // 0x589 (0x589)
	char pad_1418[2];  // 0x58A (0x58A)
	float RedrawTime;  // 0x58C (0x58C)
	char pad_1424[8];  // 0x590 (0x590)
	struct FIntPoint CurrentDrawSize;  // 0x598 (0x598)
	char pad_1440_1 : 7;  // 0x5A0 (0x5A0)
	bool bDrawAtDesiredSize : 1;  // 0x5A0 (0x5A0)
	char pad_1441[7];  // 0x5A1 (0x5A1)
	struct FVector2D Pivot;  // 0x5A8 (0x5A8)
	char pad_1464_1 : 7;  // 0x5B8 (0x5B8)
	bool bReceiveHardwareInput : 1;  // 0x5B8 (0x5B8)
	char pad_1465_1 : 7;  // 0x5B9 (0x5B9)
	bool bWindowFocusable : 1;  // 0x5B9 (0x5B9)
	uint8_t WindowVisibility;  // 0x5BA (0x5BA)
	char pad_1467_1 : 7;  // 0x5BB (0x5BB)
	bool bApplyGammaCorrection : 1;  // 0x5BB (0x5BB)
	char pad_1468[4];  // 0x5BC (0x5BC)
	struct ULocalPlayer* OwnerPlayer;  // 0x5C0 (0x5C0)
	struct FLinearColor BackgroundColor;  // 0x5C8 (0x5C8)
	struct FLinearColor TintColorAndOpacity;  // 0x5D8 (0x5D8)
	float OpacityFromTexture;  // 0x5E8 (0x5E8)
	uint8_t BlendMode;  // 0x5EC (0x5EC)
	char pad_1517_1 : 7;  // 0x5ED (0x5ED)
	bool bIsTwoSided : 1;  // 0x5ED (0x5ED)
	char pad_1518_1 : 7;  // 0x5EE (0x5EE)
	bool TickWhenOffscreen : 1;  // 0x5EE (0x5EE)
	char pad_1519[1];  // 0x5EF (0x5EF)
	struct UBodySetup* BodySetup;  // 0x5F0 (0x5F0)
	struct UMaterialInterface* TranslucentMaterial;  // 0x5F8 (0x5F8)
	struct UMaterialInterface* TranslucentMaterial_OneSided;  // 0x600 (0x600)
	struct UMaterialInterface* OpaqueMaterial;  // 0x608 (0x608)
	struct UMaterialInterface* OpaqueMaterial_OneSided;  // 0x610 (0x610)
	struct UMaterialInterface* MaskedMaterial;  // 0x618 (0x618)
	struct UMaterialInterface* MaskedMaterial_OneSided;  // 0x620 (0x620)
	struct UTextureRenderTarget2D* RenderTarget;  // 0x628 (0x628)
	struct UMaterialInstanceDynamic* MaterialInstance;  // 0x630 (0x630)
	char pad_1592_1 : 7;  // 0x638 (0x638)
	bool bAddedToScreen : 1;  // 0x638 (0x638)
	char pad_1593_1 : 7;  // 0x639 (0x639)
	bool bEditTimeUsable : 1;  // 0x639 (0x639)
	char pad_1594[2];  // 0x63A (0x63A)
	struct FName SharedLayerName;  // 0x63C (0x63C)
	int32_t LayerZOrder;  // 0x644 (0x644)
	uint8_t GeometryMode;  // 0x648 (0x648)
	char pad_1609[3];  // 0x649 (0x649)
	float CylinderArcAngle;  // 0x64C (0x64C)
	uint8_t TickMode;  // 0x650 (0x650)
	char pad_1617[47];  // 0x651 (0x651)
	struct UUserWidget* Widget;  // 0x680 (0x680)
	char pad_1672[40];  // 0x688 (0x688)


	void SetWindowVisibility(uint8_t Invisibility); // Function UMG.WidgetComponent.SetWindowVisibility
	void SetWindowFocusable(bool bInWindowFocusable); // Function UMG.WidgetComponent.SetWindowFocusable
	void SetWidgetSpace(uint8_t NewSpace); // Function UMG.WidgetComponent.SetWidgetSpace
	void SetWidget(struct UUserWidget* Widget); // Function UMG.WidgetComponent.SetWidget
	void SetTwoSided(bool bWantTwoSided); // Function UMG.WidgetComponent.SetTwoSided
	void SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity); // Function UMG.WidgetComponent.SetTintColorAndOpacity
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen); // Function UMG.WidgetComponent.SetTickWhenOffscreen
	void SetTickMode(uint8_t InTickMode); // Function UMG.WidgetComponent.SetTickMode
	void SetRedrawTime(float InRedrawTime); // Function UMG.WidgetComponent.SetRedrawTime
	void SetPivot(struct FVector2D& InPivot); // Function UMG.WidgetComponent.SetPivot
	void SetOwnerPlayer(struct ULocalPlayer* LocalPlayer); // Function UMG.WidgetComponent.SetOwnerPlayer
	void SetManuallyRedraw(bool bUseManualRedraw); // Function UMG.WidgetComponent.SetManuallyRedraw
	void SetGeometryMode(uint8_t InGeometryMode); // Function UMG.WidgetComponent.SetGeometryMode
	void SetDrawSize(struct FVector2D Size); // Function UMG.WidgetComponent.SetDrawSize
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize); // Function UMG.WidgetComponent.SetDrawAtDesiredSize
	void SetCylinderArcAngle(float InCylinderArcAngle); // Function UMG.WidgetComponent.SetCylinderArcAngle
	void SetBackgroundColor(struct FLinearColor NewBackgroundColor); // Function UMG.WidgetComponent.SetBackgroundColor
	void RequestRenderUpdate(); // Function UMG.WidgetComponent.RequestRenderUpdate
	void RequestRedraw(); // Function UMG.WidgetComponent.RequestRedraw
	bool IsWidgetVisible(); // Function UMG.WidgetComponent.IsWidgetVisible
	uint8_t GetWindowVisiblility(); // Function UMG.WidgetComponent.GetWindowVisiblility
	bool GetWindowFocusable(); // Function UMG.WidgetComponent.GetWindowFocusable
	uint8_t GetWidgetSpace(); // Function UMG.WidgetComponent.GetWidgetSpace
	struct UUserWidget* GetWidget(); // Function UMG.WidgetComponent.GetWidget
	struct UUserWidget* GetUserWidgetObject(); // Function UMG.WidgetComponent.GetUserWidgetObject
	bool GetTwoSided(); // Function UMG.WidgetComponent.GetTwoSided
	bool GetTickWhenOffscreen(); // Function UMG.WidgetComponent.GetTickWhenOffscreen
	struct UTextureRenderTarget2D* GetRenderTarget(); // Function UMG.WidgetComponent.GetRenderTarget
	float GetRedrawTime(); // Function UMG.WidgetComponent.GetRedrawTime
	struct FVector2D GetPivot(); // Function UMG.WidgetComponent.GetPivot
	struct ULocalPlayer* GetOwnerPlayer(); // Function UMG.WidgetComponent.GetOwnerPlayer
	struct UMaterialInstanceDynamic* GetMaterialInstance(); // Function UMG.WidgetComponent.GetMaterialInstance
	bool GetManuallyRedraw(); // Function UMG.WidgetComponent.GetManuallyRedraw
	uint8_t GetGeometryMode(); // Function UMG.WidgetComponent.GetGeometryMode
	struct FVector2D GetDrawSize(); // Function UMG.WidgetComponent.GetDrawSize
	bool GetDrawAtDesiredSize(); // Function UMG.WidgetComponent.GetDrawAtDesiredSize
	float GetCylinderArcAngle(); // Function UMG.WidgetComponent.GetCylinderArcAngle
	struct FVector2D GetCurrentDrawSize(); // Function UMG.WidgetComponent.GetCurrentDrawSize
}; 
 
 


// Class UMG.UserWidgetExtension
// Size: 0x28(Inherited: 0x28)
struct UUserWidgetExtension : UObject
{


}; 
 
 


// Class UMG.RichTextBlockDecorator
// Size: 0x28(Inherited: 0x28)
struct URichTextBlockDecorator : UObject
{


}; 
 
 


// Class UMG.Spacer
// Size: 0x170(Inherited: 0x150)
struct USpacer : UWidget
{
	struct FVector2D Size;  // 0x150 (0x150)
	char pad_352[16];  // 0x160 (0x160)


	void SetSize(struct FVector2D InSize); // Function UMG.Spacer.SetSize
}; 
 
 


// Class UMG.UMGSequencePlayer
// Size: 0x330(Inherited: 0x28)
struct UUMGSequencePlayer : UObject
{
	char pad_40[496];  // 0x28 (0x28)
	struct UWidgetAnimation* Animation;  // 0x218 (0x218)
	char pad_544[8];  // 0x220 (0x220)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;  // 0x228 (0x228)
	char pad_688[128];  // 0x2B0 (0x2B0)


	void SetUserTag(struct FName InUserTag); // Function UMG.UMGSequencePlayer.SetUserTag
	struct FName GetUserTag(); // Function UMG.UMGSequencePlayer.GetUserTag
}; 
 
 


// Class UMG.ProgressBar
// Size: 0x440(Inherited: 0x150)
struct UProgressBar : UWidget
{
	struct FProgressBarStyle WidgetStyle;  // 0x150 (0x150)
	float Percent;  // 0x3E0 (0x3E0)
	enum class EProgressBarFillType BarFillType;  // 0x3E4 (0x3E4)
	enum class EProgressBarFillStyle BarFillStyle;  // 0x3E5 (0x3E5)
	char pad_998_1 : 7;  // 0x3E6 (0x3E6)
	bool bIsMarquee : 1;  // 0x3E6 (0x3E6)
	char pad_999[1];  // 0x3E7 (0x3E7)
	struct FVector2D BorderPadding;  // 0x3E8 (0x3E8)
	struct FDelegate PercentDelegate;  // 0x3F8 (0x3F8)
	struct FLinearColor FillColorAndOpacity;  // 0x408 (0x408)
	struct FDelegate FillColorAndOpacityDelegate;  // 0x418 (0x418)
	char pad_1064[24];  // 0x428 (0x428)


	void SetPercent(float InPercent); // Function UMG.ProgressBar.SetPercent
	void SetIsMarquee(bool InbIsMarquee); // Function UMG.ProgressBar.SetIsMarquee
	void SetFillColorAndOpacity(struct FLinearColor InColor); // Function UMG.ProgressBar.SetFillColorAndOpacity
}; 
 
 


// Class UMG.ListViewDesignerPreviewItem
// Size: 0x28(Inherited: 0x28)
struct UListViewDesignerPreviewItem : UObject
{


}; 
 
 


// Class UMG.MouseCursorBinding
// Size: 0x60(Inherited: 0x60)
struct UMouseCursorBinding : UPropertyBinding
{


	enum class EMouseCursor GetValue(); // Function UMG.MouseCursorBinding.GetValue
}; 
 
 


// Class UMG.MovieSceneMarginPropertySystem
// Size: 0x58(Inherited: 0x58)
struct UMovieSceneMarginPropertySystem : UMovieScenePropertySystem
{


}; 
 
 


// Class UMG.WidgetBlueprintGeneratedClassExtension
// Size: 0x28(Inherited: 0x28)
struct UWidgetBlueprintGeneratedClassExtension : UObject
{


}; 
 
 


// Class UMG.WidgetFieldNotificationExtension
// Size: 0x40(Inherited: 0x28)
struct UWidgetFieldNotificationExtension : UUserWidgetExtension
{
	char pad_40[24];  // 0x28 (0x28)


}; 
 
 


// Class UMG.CheckedStateBinding
// Size: 0x68(Inherited: 0x60)
struct UCheckedStateBinding : UPropertyBinding
{
	char pad_96[8];  // 006031721] ted: 0x60)
 (006031721] Package Id_)


	uint8_t GetValue(); // Function UMG.CheckedStateBinding.GetValue
}; 
 
 


// Class UMG.WidgetNavigation
// Size: 0x100(Inherited: 0x28)
struct UWidgetNavigation : UObject
{
	struct FWidgetNavigationData Up;  // 0x28 (0x28)
	struct FWidgetNavigationData Down;  // 0x4C (0x4C)
	struct FWidgetNavigationData Left;  // 0x70 (0x70)
	struct FWidgetNavigationData Right;  // 0x94 (0x94)
	struct FWidgetNavigationData Next;  // 0xB8 (0xB8)
	struct FWidgetNavigationData Previous;  // 0xDC (0xDC)


}; 
 
 


// Class UMG.MovieScene2DTransformPropertySystem
// Size: 0x58(Inherited: 0x58)
struct UMovieScene2DTransformPropertySystem : UMovieScenePropertySystem
{


}; 
 
 


// Class UMG.WidgetAnimationPlayCallbackProxy
// Size: 0x40(Inherited: 0x28)
struct UWidgetAnimationPlayCallbackProxy : UObject
{
	struct FMulticastInlineDelegate Finished;  // 0x28 (0x28)
	char pad_56[8];  // 0x38 (0x38)


	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
}; 
 
 


// Class UMG.MovieScene2DTransformSection
// Size: 0x870(Inherited: 0xF0)
struct UMovieScene2DTransformSection : UMovieSceneSection
{
	char pad_240[8];  // 0xF0 (0xF0)
	struct FMovieScene2DTransformMask TransformMask;  // 0xF8 (0xF8)
	char pad_252[4];  // 0xFC (0xFC)
	struct FMovieSceneFloatChannel Translation[2];  // 0x100 (0x100)
	struct FMovieSceneFloatChannel Rotation;  // 0x320 (0x320)
	struct FMovieSceneFloatChannel Scale[2];  // 0x430 (0x430)
	struct FMovieSceneFloatChannel Shear[2];  // 0x650 (0x650)


}; 
 
 


// Class UMG.MovieScene2DTransformTrack
// Size: 0xC8(Inherited: 0xC8)
struct UMovieScene2DTransformTrack : UMovieScenePropertyTrack
{


}; 
 
 


// Class UMG.MovieSceneMarginTrack
// Size: 0xC8(Inherited: 0xC8)
struct UMovieSceneMarginTrack : UMovieScenePropertyTrack
{


}; 
 
 


// Class UMG.MovieSceneWidgetMaterialTrack
// Size: 0xD0(Inherited: 0xA8)
struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack
{
	char pad_168[16];  // 0xA8 (0xA8)
	struct TArray<struct FName> BrushPropertyNamePath;  // 0xB8 (0xB8)
	struct FName TrackName;  // 0xC8 (0xC8)


}; 
 
 


// Class UMG.PropertyBinding
// Size: 0x60(Inherited: 0x28)
struct UPropertyBinding : UObject
{
	struct TWeakObjectPtr<UObject> SourceObject;  // 0x28 (0x28)
	struct FDynamicPropertyPath SourcePath;  // 0x30 (0x30)
	struct FName DestinationProperty;  // 0x58 (0x58)


}; 
 
 


// Class UMG.BrushBinding
// Size: 0x68(Inherited: 0x60)
struct UBrushBinding : UPropertyBinding
{
	char pad_96[8];  // 0x60 (0x60)


	struct FSlateBrush GetValue(); // Function UMG.BrushBinding.GetValue
}; 
 
 


// Class UMG.BoolBinding
// Size: 0x60(Inherited: 0x60)
struct UBoolBinding : UPropertyBinding
{


	bool GetValue(); // Function UMG.BoolBinding.GetValue
}; 
 
 


// Class UMG.StackBoxSlot
// Size: 0x60(Inherited: 0x38)
struct UStackBoxSlot : UPanelSlot
{
	struct FMargin Padding;  // 0x38 (0x38)
	struct FSlateChildSize Size;  // 0x48 (0x48)
	enum class EHorizontalAlignment HorizontalAlignment;  // 0x50 (0x50)
	enum class EVerticalAlignment VerticalAlignment;  // 0x51 (0x51)
	char pad_82[14];  // 0x52 (0x52)


}; 
 
 


// Class UMG.GameViewportSubsystem
// Size: 0x80(Inherited: 0x30)
struct UGameViewportSubsystem : UGameInstanceSubsystem
{
	char pad_48[80];  // 0x30 (0x30)


	struct FGameViewportWidgetSlot SetWidgetSlotPosition(struct FGameViewportWidgetSlot Slot, struct UWidget* Widget, struct FVector2D Position, bool bRemoveDPIScale); // Function UMG.GameViewportSubsystem.SetWidgetSlotPosition
	struct FGameViewportWidgetSlot SetWidgetSlotDesiredSize(struct FGameViewportWidgetSlot Slot, struct FVector2D Size); // Function UMG.GameViewportSubsystem.SetWidgetSlotDesiredSize
	void SetWidgetSlot(struct UWidget* Widget, struct FGameViewportWidgetSlot Slot); // Function UMG.GameViewportSubsystem.SetWidgetSlot
	void RemoveWidget(struct UWidget* Widget); // Function UMG.GameViewportSubsystem.RemoveWidget
	bool IsWidgetAdded(struct UWidget* Widget); // Function UMG.GameViewportSubsystem.IsWidgetAdded
	struct FGameViewportWidgetSlot GetWidgetSlot(struct UWidget* Widget); // Function UMG.GameViewportSubsystem.GetWidgetSlot
	void AddWidgetForPlayer(struct UWidget* Widget, struct ULocalPlayer* Player, struct FGameViewportWidgetSlot Slot); // Function UMG.GameViewportSubsystem.AddWidgetForPlayer
	void AddWidget(struct UWidget* Widget, struct FGameViewportWidgetSlot Slot); // Function UMG.GameViewportSubsystem.AddWidget
}; 
 
 


// Class UMG.UserListEntryLibrary
// Size: 0x28(Inherited: 0x28)
struct UUserListEntryLibrary : UBlueprintFunctionLibrary
{


	bool IsListItemSelected(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemSelected
	bool IsListItemExpanded(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemExpanded
	struct UListViewBase* GetOwningListView(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.GetOwningListView
}; 
 
 


// Class UMG.UserObjectListEntry
// Size: 0x28(Inherited: 0x28)
struct UUserObjectListEntry : UUserListEntry
{


	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UMG.UserObjectListEntry.OnListItemObjectSet
}; 
 
 


// Class UMG.UserObjectListEntryLibrary
// Size: 0x28(Inherited: 0x28)
struct UUserObjectListEntryLibrary : UBlueprintFunctionLibrary
{


	struct UObject* GetListItemObject(struct TScriptInterface<IUserObjectListEntry> UserObjectListEntry); // Function UMG.UserObjectListEntryLibrary.GetListItemObject
}; 
 
 


// Class UMG.BackgroundBlur
// Size: 0x290(Inherited: 0x168)
struct UBackgroundBlur : UContentWidget
{
	struct FMargin Padding;  // 0x168 (0x168)
	enum class EHorizontalAlignment HorizontalAlignment;  // 0x178 (0x178)
	enum class EVerticalAlignment VerticalAlignment;  // 0x179 (0x179)
	char pad_378_1 : 7;  // 0x17A (0x17A)
	bool bApplyAlphaToBlur : 1;  // 0x17A (0x17A)
	char pad_379[1];  // 0x17B (0x17B)
	float BlurStrength;  // 0x17C (0x17C)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool bOverrideAutoRadiusCalculation : 1;  // 0x180 (0x180)
	char pad_385[3];  // 0x181 (0x181)
	int32_t BlurRadius;  // 0x184 (0x184)
	char pad_392[8];  // 0x188 (0x188)
	struct FVector4 CornerRadius;  // 0x190 (0x190)
	struct FSlateBrush LowQualityFallbackBrush;  // 0x1B0 (0x1B0)
	char pad_640[16];  // 0x280 (0x280)


	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlur.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlur.SetPadding
	void SetLowQualityFallbackBrush(struct FSlateBrush& InBrush); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlur.SetHorizontalAlignment
	void SetCornerRadius(struct FVector4 InCornerRadius); // Function UMG.BackgroundBlur.SetCornerRadius
	void SetBlurStrength(float InStrength); // Function UMG.BackgroundBlur.SetBlurStrength
	void SetBlurRadius(int32_t InBlurRadius); // Function UMG.BackgroundBlur.SetBlurRadius
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur
}; 
 
 


// Class UMG.BorderSlot
// Size: 0x60(Inherited: 0x38)
struct UBorderSlot : UPanelSlot
{
	struct FMargin Padding;  // 0x38 (0x38)
	enum class EHorizontalAlignment HorizontalAlignment;  // 0x48 (0x48)
	enum class EVerticalAlignment VerticalAlignment;  // 0x49 (0x49)
	char pad_74[22];  // 0x4A (0x4A)


	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BorderSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.BorderSlot.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BorderSlot.SetHorizontalAlignment
}; 
 
 


// Class UMG.ButtonSlot
// Size: 0x60(Inherited: 0x38)
struct UButtonSlot : UPanelSlot
{
	struct FMargin Padding;  // 0x38 (0x38)
	enum class EHorizontalAlignment HorizontalAlignment;  // 0x48 (0x48)
	enum class EVerticalAlignment VerticalAlignment;  // 0x49 (0x49)
	char pad_74[22];  // 0x4A (0x4A)


	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ButtonSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.ButtonSlot.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ButtonSlot.SetHorizontalAlignment
}; 
 
 


// Class UMG.CanvasPanel
// Size: 0x178(Inherited: 0x168)
struct UCanvasPanel : UPanelWidget
{
	char pad_360[16];  // 0x168 (0x168)


	struct UCanvasPanelSlot* AddChildToCanvas(struct UWidget* Content); // Function UMG.CanvasPanel.AddChildToCanvas
}; 
 
 


// Class UMG.CanvasPanelSlot
// Size: 0x88(Inherited: 0x38)
struct UCanvasPanelSlot : UPanelSlot
{
	struct FAnchorData LayoutData;  // 0x38 (0x38)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool bAutoSize : 1;  // 0x78 (0x78)
	char pad_121[3];  // 0x79 (0x79)
	int32_t ZOrder;  // 0x7C (0x7C)
	char pad_128[8];  // 0x80 (0x80)


	void SetZOrder(int32_t InZOrder); // Function UMG.CanvasPanelSlot.SetZOrder
	void SetSize(struct FVector2D InSize); // Function UMG.CanvasPanelSlot.SetSize
	void SetPosition(struct FVector2D InPosition); // Function UMG.CanvasPanelSlot.SetPosition
	void SetOffsets(struct FMargin InOffset); // Function UMG.CanvasPanelSlot.SetOffsets
	void SetMinimum(struct FVector2D InMinimumAnchors); // Function UMG.CanvasPanelSlot.SetMinimum
	void SetMaximum(struct FVector2D InMaximumAnchors); // Function UMG.CanvasPanelSlot.SetMaximum
	void SetLayout(struct FAnchorData& InLayoutData); // Function UMG.CanvasPanelSlot.SetLayout
	void SetAutoSize(bool InbAutoSize); // Function UMG.CanvasPanelSlot.SetAutoSize
	void SetAnchors(struct FAnchors InAnchors); // Function UMG.CanvasPanelSlot.SetAnchors
	void SetAlignment(struct FVector2D InAlignment); // Function UMG.CanvasPanelSlot.SetAlignment
	int32_t GetZOrder(); // Function UMG.CanvasPanelSlot.GetZOrder
	struct FVector2D GetSize(); // Function UMG.CanvasPanelSlot.GetSize
	struct FVector2D GetPosition(); // Function UMG.CanvasPanelSlot.GetPosition
	struct FMargin GetOffsets(); // Function UMG.CanvasPanelSlot.GetOffsets
	struct FAnchorData GetLayout(); // Function UMG.CanvasPanelSlot.GetLayout
	bool GetAutoSize(); // Function UMG.CanvasPanelSlot.GetAutoSize
	struct FAnchors GetAnchors(); // Function UMG.CanvasPanelSlot.GetAnchors
	struct FVector2D GetAlignment(); // Function UMG.CanvasPanelSlot.GetAlignment
}; 
 
 


// Class UMG.CheckBox
// Size: 0xC80(Inherited: 0x168)
struct UCheckBox : UContentWidget
{
	uint8_t CheckedState;  // 0x168 (0x168)
	char pad_361[3];  // 0x169 (0x169)
	struct FDelegate CheckedStateDelegate;  // 0x16C (0x16C)
	char pad_380[4];  // 0x17C (0x17C)
	struct FCheckBoxStyle WidgetStyle;  // 0x180 (0x180)
	enum class EHorizontalAlignment HorizontalAlignment;  // 0xC50 (0xC50)
	enum class EButtonClickMethod ClickMethod;  // 0xC51 (0xC51)
	enum class EButtonTouchMethod TouchMethod;  // 0xC52 (0xC52)
	enum class EButtonPressMethod PressMethod;  // 0xC53 (0xC53)
	char pad_3156_1 : 7;  // 0xC54 (0xC54)
	bool IsFocusable : 1;  // 0xC54 (0xC54)
	char pad_3157[3];  // 0xC55 (0xC55)
	struct FMulticastInlineDelegate OnCheckStateChanged;  // 0xC58 (0xC58)
	char pad_3176[24];  // 0xC68 (0xC68)


	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function UMG.CheckBox.SetTouchMethod
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function UMG.CheckBox.SetPressMethod
	void SetIsChecked(bool InIsChecked); // Function UMG.CheckBox.SetIsChecked
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function UMG.CheckBox.SetClickMethod
	void SetCheckedState(uint8_t InCheckedState); // Function UMG.CheckBox.SetCheckedState
	bool IsPressed(); // Function UMG.CheckBox.IsPressed
	bool IsChecked(); // Function UMG.CheckBox.IsChecked
	uint8_t GetCheckedState(); // Function UMG.CheckBox.GetCheckedState
}; 
 
 


// Class UMG.CircularThrobber
// Size: 0x250(Inherited: 0x150)
struct UCircularThrobber : UWidget
{
	int32_t NumberOfPieces;  // 0x150 (0x150)
	float Period;  // 0x154 (0x154)
	float Radius;  // 0x158 (0x158)
	char pad_348[4];  // 0x15C (0x15C)
	struct FSlateBrush Image;  // 0x160 (0x160)
	char pad_560_1 : 7;  // 0x230 (0x230)
	bool bEnableRadius : 1;  // 0x230 (0x230)
	char pad_561[31];  // 0x231 (0x231)


	void SetRadius(float InRadius); // Function UMG.CircularThrobber.SetRadius
	void SetPeriod(float InPeriod); // Function UMG.CircularThrobber.SetPeriod
	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.CircularThrobber.SetNumberOfPieces
}; 
 
 


// Class UMG.WrapBoxSlot
// Size: 0x58(Inherited: 0x38)
struct UWrapBoxSlot : UPanelSlot
{
	struct FMargin Padding;  // 0x38 (0x38)
	float FillSpanWhenLessThan;  // 0x48 (0x48)
	enum class EHorizontalAlignment HorizontalAlignment;  // 0x4C (0x4C)
	enum class EVerticalAlignment VerticalAlignment;  // 0x4D (0x4D)
	char pad_78_1 : 7;  // 0x4E (0x4E)
	bool bFillEmptySpace : 1;  // 0x4E (0x4E)
	char pad_79_1 : 7;  // 0x4F (0x4F)
	bool bForceNewLine : 1;  // 0x4F (0x4F)
	char pad_80[8];  // 0x50 (0x50)


	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WrapBoxSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.WrapBoxSlot.SetPadding
	void SetNewLine(bool InForceNewLine); // Function UMG.WrapBoxSlot.SetNewLine
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WrapBoxSlot.SetHorizontalAlignment
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan); // Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
	void SetFillEmptySpace(bool InbFillEmptySpace); // Function UMG.WrapBoxSlot.SetFillEmptySpace
}; 
 
 


// Class UMG.ComboBox
// Size: 0x188(Inherited: 0x150)
struct UComboBox : UWidget
{
	struct TArray<struct UObject*> Items;  // 0x150 (0x150)
	struct FDelegate OnGenerateWidgetEvent;  // 0x160 (0x160)
	char pad_368_1 : 7;  // 0x170 (0x170)
	bool bIsFocusable : 1;  // 0x170 (0x170)
	char pad_369[23];  // 0x171 (0x171)


}; 
 
 


// Class UMG.ComboBoxKey
// Size: 0x15B0(Inherited: 0x150)
struct UComboBoxKey : UWidget
{
	struct TArray<struct FName> Options;  // 0x150 (0x150)
	struct FName SelectedOption;  // 0x160 (0x160)
	char pad_360[8];  // 0x168 (0x168)
	struct FComboBoxStyle WidgetStyle;  // 0x170 (0x170)
	struct FTableRowStyle ItemStyle;  // 0x7D0 (0x7D0)
	struct FSlateColor ForegroundColor;  // 0x1520 (0x1520)
	struct FMargin ContentPadding;  // 0x1534 (0x1534)
	float MaxListHeight;  // 0x1544 (0x1544)
	char pad_5448_1 : 7;  // 0x1548 (0x1548)
	bool bHasDownArrow : 1;  // 0x1548 (0x1548)
	char pad_5449_1 : 7;  // 0x1549 (0x1549)
	bool bEnableGamepadNavigationMode : 1;  // 0x1549 (0x1549)
	char pad_5450_1 : 7;  // 0x154A (0x154A)
	bool bIsFocusable : 1;  // 0x154A (0x154A)
	char pad_5451[1];  // 0x154B (0x154B)
	struct FDelegate OnGenerateContentWidget;  // 0x154C (0x154C)
	struct FDelegate OnGenerateItemWidget;  // 0x155C (0x155C)
	char pad_5484[4];  // 0x156C (0x156C)
	struct FMulticastInlineDelegate OnSelectionChanged;  // 0x1570 (0x1570)
	struct FMulticastInlineDelegate OnOpening;  // 0x1580 (0x1580)
	char pad_5520[32];  // 0x1590 (0x1590)


	void SetSelectedOption(struct FName Option); // Function UMG.ComboBoxKey.SetSelectedOption
	bool RemoveOption(struct FName Option); // Function UMG.ComboBoxKey.RemoveOption
	void OnSelectionChangedEvent__DelegateSignature(struct FName SelectedItem, enum class ESelectInfo SelectionType); // DelegateFunction UMG.ComboBoxKey.OnSelectionChangedEvent__DelegateSignature
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxKey.OnOpeningEvent__DelegateSignature
	bool IsOpen(); // Function UMG.ComboBoxKey.IsOpen
	struct FName GetSelectedOption(); // Function UMG.ComboBoxKey.GetSelectedOption
	struct UWidget* GenerateWidgetEvent__DelegateSignature(struct FName Item); // DelegateFunction UMG.ComboBoxKey.GenerateWidgetEvent__DelegateSignature
	void ClearSelection(); // Function UMG.ComboBoxKey.ClearSelection
	void ClearOptions(); // Function UMG.ComboBoxKey.ClearOptions
	void AddOption(struct FName Option); // Function UMG.ComboBoxKey.AddOption
}; 
 
 


// Class UMG.ComboBoxString
// Size: 0x1630(Inherited: 0x150)
struct UComboBoxString : UWidget
{
	struct TArray<struct FString> DefaultOptions;  // 0x150 (0x150)
	struct FString SelectedOption;  // 0x160 (0x160)
	struct FComboBoxStyle WidgetStyle;  // 0x170 (0x170)
	struct FTableRowStyle ItemStyle;  // 0x7D0 (0x7D0)
	struct FMargin ContentPadding;  // 0x1520 (0x1520)
	float MaxListHeight;  // 0x1530 (0x1530)
	char pad_5428_1 : 7;  // 0x1534 (0x1534)
	bool HasDownArrow : 1;  // 0x1534 (0x1534)
	char pad_5429_1 : 7;  // 0x1535 (0x1535)
	bool EnableGamepadNavigationMode : 1;  // 0x1535 (0x1535)
	char pad_5430[2];  // 0x1536 (0x1536)
	struct FSlateFontInfo Font;  // 0x1538 (0x1538)
	struct FSlateColor ForegroundColor;  // 0x1590 (0x1590)
	char pad_5540_1 : 7;  // 0x15A4 (0x15A4)
	bool bIsFocusable : 1;  // 0x15A4 (0x15A4)
	char pad_5541[3];  // 0x15A5 (0x15A5)
	struct FDelegate OnGenerateWidgetEvent;  // 0x15A8 (0x15A8)
	struct FMulticastInlineDelegate OnSelectionChanged;  // 0x15B8 (0x15B8)
	struct FMulticastInlineDelegate OnOpening;  // 0x15C8 (0x15C8)
	char pad_5592[88];  // 0x15D8 (0x15D8)


	void SetSelectedOption(struct FString Option); // Function UMG.ComboBoxString.SetSelectedOption
	void SetSelectedIndex(int32_t Index); // Function UMG.ComboBoxString.SetSelectedIndex
	bool RemoveOption(struct FString Option); // Function UMG.ComboBoxString.RemoveOption
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions
	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
	bool IsOpen(); // Function UMG.ComboBoxString.IsOpen
	struct FString GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption
	int32_t GetSelectedIndex(); // Function UMG.ComboBoxString.GetSelectedIndex
	int32_t GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount
	struct FString GetOptionAtIndex(int32_t Index); // Function UMG.ComboBoxString.GetOptionAtIndex
	int32_t FindOptionIndex(struct FString Option); // Function UMG.ComboBoxString.FindOptionIndex
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions
	void AddOption(struct FString Option); // Function UMG.ComboBoxString.AddOption
}; 
 
 


// Class UMG.DynamicEntryBox
// Size: 0x238(Inherited: 0x230)
struct UDynamicEntryBox : UDynamicEntryBoxBase
{
	UUserWidget* EntryWidgetClass;  // 0x230 (0x230)


	void Reset(bool bDeleteWidgets); // Function UMG.DynamicEntryBox.Reset
	void RemoveEntry(struct UUserWidget* EntryWidget); // Function UMG.DynamicEntryBox.RemoveEntry
	struct UUserWidget* BP_CreateEntryOfClass(UUserWidget* EntryClass); // Function UMG.DynamicEntryBox.BP_CreateEntryOfClass
	struct UUserWidget* BP_CreateEntry(); // Function UMG.DynamicEntryBox.BP_CreateEntry
}; 
 
 


// Class UMG.EditableTextBox
// Size: 0x1070(Inherited: 0x150)
struct UEditableTextBox : UWidget
{
	struct FText Text;  // 0x150 (0x150)
	struct FDelegate TextDelegate;  // 0x168 (0x168)
	char pad_376[8];  // 0x178 (0x178)
	struct FEditableTextBoxStyle WidgetStyle;  // 0x180 (0x180)
	struct FText HintText;  // 0x1000 (0x1000)
	struct FDelegate HintTextDelegate;  // 0x1018 (0x1018)
	char pad_4136_1 : 7;  // 0x1028 (0x1028)
	bool IsReadOnly : 1;  // 0x1028 (0x1028)
	char pad_4137_1 : 7;  // 0x1029 (0x1029)
	bool IsPassword : 1;  // 0x1029 (0x1029)
	char pad_4138[2];  // 0x102A (0x102A)
	float MinimumDesiredWidth;  // 0x102C (0x102C)
	char pad_4144_1 : 7;  // 0x1030 (0x1030)
	bool IsCaretMovedWhenGainFocus : 1;  // 0x1030 (0x1030)
	char pad_4145_1 : 7;  // 0x1031 (0x1031)
	bool SelectAllTextWhenFocused : 1;  // 0x1031 (0x1031)
	char pad_4146_1 : 7;  // 0x1032 (0x1032)
	bool RevertTextOnEscape : 1;  // 0x1032 (0x1032)
	char pad_4147_1 : 7;  // 0x1033 (0x1033)
	bool ClearKeyboardFocusOnCommit : 1;  // 0x1033 (0x1033)
	char pad_4148_1 : 7;  // 0x1034 (0x1034)
	bool SelectAllTextOnCommit : 1;  // 0x1034 (0x1034)
	char pad_4149_1 : 7;  // 0x1035 (0x1035)
	bool AllowContextMenu : 1;  // 0x1035 (0x1035)
	enum class EVirtualKeyboardType KeyboardType;  // 0x1036 (0x1036)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions;  // 0x1037 (0x1037)
	uint8_t VirtualKeyboardTrigger;  // 0x1038 (0x1038)
	uint8_t VirtualKeyboardDismissAction;  // 0x1039 (0x1039)
	enum class ETextJustify Justification;  // 0x103A (0x103A)
	uint8_t OverflowPolicy;  // 0x103B (0x103B)
	struct FShapedTextOptions ShapedTextOptions;  // 0x103C (0x103C)
	char pad_4159[1];  // 0x103F (0x103F)
	struct FMulticastInlineDelegate OnTextChanged;  // 0x1040 (0x1040)
	struct FMulticastInlineDelegate OnTextCommitted;  // 0x1050 (0x1050)
	char pad_4192[16];  // 0x1060 (0x1060)


	void SetTextOverflowPolicy(uint8_t InOverflowPolicy); // Function UMG.EditableTextBox.SetTextOverflowPolicy
	void SetText(struct FText InText); // Function UMG.EditableTextBox.SetText
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableTextBox.SetJustification
	void SetIsReadOnly(bool bReadOnly); // Function UMG.EditableTextBox.SetIsReadOnly
	void SetIsPassword(bool bIsPassword); // Function UMG.EditableTextBox.SetIsPassword
	void SetHintText(struct FText InText); // Function UMG.EditableTextBox.SetHintText
	void SetForegroundColor(struct FLinearColor Color); // Function UMG.EditableTextBox.SetForegroundColor
	void SetError(struct FText InError); // Function UMG.EditableTextBox.SetError
	void OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
	void OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
	bool HasError(); // Function UMG.EditableTextBox.HasError
	struct FText GetText(); // Function UMG.EditableTextBox.GetText
	void ClearError(); // Function UMG.EditableTextBox.ClearError
}; 
 
 


// Class UMG.ExpandableArea
// Size: 0x460(Inherited: 0x150)
struct UExpandableArea : UWidget
{
	char pad_336[16];  // 0x150 (0x150)
	struct FExpandableAreaStyle Style;  // 0x160 (0x160)
	struct FSlateBrush BorderBrush;  // 0x320 (0x320)
	struct FSlateColor BorderColor;  // 0x3F0 (0x3F0)
	char pad_1028_1 : 7;  // 0x404 (0x404)
	bool bIsExpanded : 1;  // 0x404 (0x404)
	char pad_1029[3];  // 0x405 (0x405)
	float MaxHeight;  // 0x408 (0x408)
	struct FMargin HeaderPadding;  // 0x40C (0x40C)
	struct FMargin AreaPadding;  // 0x41C (0x41C)
	char pad_1068[4];  // 0x42C (0x42C)
	struct FMulticastInlineDelegate OnExpansionChanged;  // 0x430 (0x430)
	struct UWidget* HeaderContent;  // 0x440 (0x440)
	struct UWidget* BodyContent;  // 0x448 (0x448)
	char pad_1104[16];  // 0x450 (0x450)


	void SetIsExpanded_Animated(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded_Animated
	void SetIsExpanded(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded
	bool GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded
}; 
 
 


// Class UMG.GridPanel
// Size: 0x198(Inherited: 0x168)
struct UGridPanel : UPanelWidget
{
	struct TArray<float> ColumnFill;  // 0x168 (0x168)
	struct TArray<float> RowFill;  // 0x178 (0x178)
	char pad_392[16];  // 0x188 (0x188)


	void SetRowFill(int32_t RowIndex, float Coefficient); // Function UMG.GridPanel.SetRowFill
	void SetColumnFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetColumnFill
	struct UGridSlot* AddChildToGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.GridPanel.AddChildToGrid
}; 
 
 


// Class UMG.GridSlot
// Size: 0x78(Inherited: 0x38)
struct UGridSlot : UPanelSlot
{
	struct FMargin Padding;  // 0x38 (0x38)
	enum class EHorizontalAlignment HorizontalAlignment;  // 0x48 (0x48)
	enum class EVerticalAlignment VerticalAlignment;  // 0x49 (0x49)
	char pad_74[2];  // 0x4A (0x4A)
	int32_t Row;  // 0x4C (0x4C)
	int32_t RowSpan;  // 0x50 (0x50)
	int32_t column;  // 0x54 (0x54)
	int32_t ColumnSpan;  // 0x58 (0x58)
	int32_t Layer;  // 0x5C (0x5C)
	struct FVector2D Nudge;  // 0x60 (0x60)
	char pad_112[8];  // 0x70 (0x70)


	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.GridSlot.SetVerticalAlignment
	void SetRowSpan(int32_t InRowSpan); // Function UMG.GridSlot.SetRowSpan
	void SetRow(int32_t InRow); // Function UMG.GridSlot.SetRow
	void SetPadding(struct FMargin InPadding); // Function UMG.GridSlot.SetPadding
	void SetNudge(struct FVector2D InNudge); // Function UMG.GridSlot.SetNudge
	void SetLayer(int32_t InLayer); // Function UMG.GridSlot.SetLayer
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.GridSlot.SetHorizontalAlignment
	void SetColumnSpan(int32_t InColumnSpan); // Function UMG.GridSlot.SetColumnSpan
	void SetColumn(int32_t InColumn); // Function UMG.GridSlot.SetColumn
}; 
 
 


// Class UMG.HorizontalBox
// Size: 0x178(Inherited: 0x168)
struct UHorizontalBox : UPanelWidget
{
	char pad_360[16];  // 0x168 (0x168)


	struct UHorizontalBoxSlot* AddChildToHorizontalBox(struct UWidget* Content); // Function UMG.HorizontalBox.AddChildToHorizontalBox
}; 
 
 


// Class UMG.HorizontalBoxSlot
// Size: 0x60(Inherited: 0x38)
struct UHorizontalBoxSlot : UPanelSlot
{
	char pad_56[8];  // 0x38 (0x38)
	struct FSlateChildSize Size;  // 0x40 (0x40)
	struct FMargin Padding;  // 0x48 (0x48)
	enum class EHorizontalAlignment HorizontalAlignment;  // 0x58 (0x58)
	enum class EVerticalAlignment VerticalAlignment;  // 0x59 (0x59)
	char pad_90[6];  // 0x5A (0x5A)


	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.HorizontalBoxSlot.SetVerticalAlignment
	void SetSize(struct FSlateChildSize InSize); // Function UMG.HorizontalBoxSlot.SetSize
	void SetPadding(struct FMargin InPadding); // Function UMG.HorizontalBoxSlot.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
}; 
 
 


// Class UMG.InputKeySelector
// Size: 0x930(Inherited: 0x150)
struct UInputKeySelector : UWidget
{
	struct FButtonStyle WidgetStyle;  // 0x150 (0x150)
	struct FTextBlockStyle TextStyle;  // 0x540 (0x540)
	struct FInputChord SelectedKey;  // 0x880 (0x880)
	struct FMargin Margin;  // 0x8A0 (0x8A0)
	struct FText KeySelectionText;  // 0x8B0 (0x8B0)
	struct FText NoKeySpecifiedText;  // 0x8C8 (0x8C8)
	char pad_2272_1 : 7;  // 0x8E0 (0x8E0)
	bool bAllowModifierKeys : 1;  // 0x8E0 (0x8E0)
	char pad_2273_1 : 7;  // 0x8E1 (0x8E1)
	bool bAllowGamepadKeys : 1;  // 0x8E1 (0x8E1)
	char pad_2274[6];  // 0x8E2 (0x8E2)
	struct TArray<struct FKey> EscapeKeys;  // 0x8E8 (0x8E8)
	struct FMulticastInlineDelegate OnKeySelected;  // 0x8F8 (0x8F8)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged;  // 0x908 (0x908)
	char pad_2328[24];  // 0x918 (0x918)


	void SetTextBlockVisibility(uint8_t Invisibility); // Function UMG.InputKeySelector.SetTextBlockVisibility
	void SetSelectedKey(struct FInputChord& InSelectedKey); // Function UMG.InputKeySelector.SetSelectedKey
	void SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText); // Function UMG.InputKeySelector.SetNoKeySpecifiedText
	void SetKeySelectionText(struct FText InKeySelectionText); // Function UMG.InputKeySelector.SetKeySelectionText
	void SetEscapeKeys(struct TArray<struct FKey>& InKeys); // Function UMG.InputKeySelector.SetEscapeKeys
	void SetAllowModifierKeys(bool bInAllowModifierKeys); // Function UMG.InputKeySelector.SetAllowModifierKeys
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys); // Function UMG.InputKeySelector.SetAllowGamepadKeys
	void OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
	bool GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey
}; 
 
 


// Class UMG.InvalidationBox
// Size: 0x180(Inherited: 0x168)
struct UInvalidationBox : UContentWidget
{
	char pad_360_1 : 7;  // 0x168 (0x168)
	bool bCanCache : 1;  // 0x168 (0x168)
	char pad_361_1 : 7;  // 0x169 (0x169)
	bool CacheRelativeTransforms : 1;  // 0x169 (0x169)
	char pad_362[22];  // 0x16A (0x16A)


	void SetCanCache(bool CanCache); // Function UMG.InvalidationBox.SetCanCache
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache
	bool GetCanCache(); // Function UMG.InvalidationBox.GetCanCache
}; 
 
 


// Class UMG.MenuAnchor
// Size: 0x1B8(Inherited: 0x168)
struct UMenuAnchor : UContentWidget
{
	UUserWidget* MenuClass;  // 0x168 (0x168)
	struct FDelegate OnGetMenuContentEvent;  // 0x170 (0x170)
	struct FDelegate OnGetUserMenuContentEvent;  // 0x180 (0x180)
	enum class EMenuPlacement Placement;  // 0x190 (0x190)
	char pad_401_1 : 7;  // 0x191 (0x191)
	bool bFitInWindow : 1;  // 0x191 (0x191)
	char pad_402_1 : 7;  // 0x192 (0x192)
	bool ShouldDeferPaintingAfterWindowContent : 1;  // 0x192 (0x192)
	char pad_403_1 : 7;  // 0x193 (0x193)
	bool UseApplicationMenuStack : 1;  // 0x193 (0x193)
	char pad_404[4];  // 0x194 (0x194)
	struct FMulticastInlineDelegate OnMenuOpenChanged;  // 0x198 (0x198)
	char pad_424[16];  // 0x1A8 (0x1A8)


	void ToggleOpen(bool bFocusOnOpen); // Function UMG.MenuAnchor.ToggleOpen
	bool ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick
	void SetPlacement(enum class EMenuPlacement InPlacement); // Function UMG.MenuAnchor.SetPlacement
	void Open(bool bFocusMenu); // Function UMG.MenuAnchor.Open
	bool IsOpen(); // Function UMG.MenuAnchor.IsOpen
	bool HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus
	struct UUserWidget* GetUserWidget__DelegateSignature(); // DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature
	struct FVector2D GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition
	void FitInWindow(bool bFit); // Function UMG.MenuAnchor.FitInWindow
	void Close(); // Function UMG.MenuAnchor.Close
}; 
 
 


// Class UMG.MultiLineEditableText
// Size: 0x530(Inherited: 0x170)
struct UMultiLineEditableText : UTextLayoutWidget
{
	struct FText Text;  // 0x170 (0x170)
	struct FText HintText;  // 0x188 (0x188)
	struct FDelegate HintTextDelegate;  // 0x1A0 (0x1A0)
	struct FTextBlockStyle WidgetStyle;  // 0x1B0 (0x1B0)
	char pad_1264_1 : 7;  // 0x4F0 (0x4F0)
	bool bIsReadOnly : 1;  // 0x4F0 (0x4F0)
	char pad_1265_1 : 7;  // 0x4F1 (0x4F1)
	bool SelectAllTextWhenFocused : 1;  // 0x4F1 (0x4F1)
	char pad_1266_1 : 7;  // 0x4F2 (0x4F2)
	bool ClearTextSelectionOnFocusLoss : 1;  // 0x4F2 (0x4F2)
	char pad_1267_1 : 7;  // 0x4F3 (0x4F3)
	bool RevertTextOnEscape : 1;  // 0x4F3 (0x4F3)
	char pad_1268_1 : 7;  // 0x4F4 (0x4F4)
	bool ClearKeyboardFocusOnCommit : 1;  // 0x4F4 (0x4F4)
	char pad_1269_1 : 7;  // 0x4F5 (0x4F5)
	bool AllowContextMenu : 1;  // 0x4F5 (0x4F5)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions;  // 0x4F6 (0x4F6)
	uint8_t VirtualKeyboardDismissAction;  // 0x4F7 (0x4F7)
	struct FMulticastInlineDelegate OnTextChanged;  // 0x4F8 (0x4F8)
	struct FMulticastInlineDelegate OnTextCommitted;  // 0x508 (0x508)
	char pad_1304[24];  // 0x518 (0x518)


	void SetWidgetStyle(struct FTextBlockStyle& InWidgetStyle); // Function UMG.MultiLineEditableText.SetWidgetStyle
	void SetText(struct FText InText); // Function UMG.MultiLineEditableText.SetText
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableText.SetIsReadOnly
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableText.SetHintText
	void SetFontOutlineMaterial(struct UMaterialInterface* InMaterial); // Function UMG.MultiLineEditableText.SetFontOutlineMaterial
	void SetFontMaterial(struct UMaterialInterface* InMaterial); // Function UMG.MultiLineEditableText.SetFontMaterial
	void SetFont(struct FSlateFontInfo InFontInfo); // Function UMG.MultiLineEditableText.SetFont
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
	struct FText GetText(); // Function UMG.MultiLineEditableText.GetText
	struct FText GetHintText(); // Function UMG.MultiLineEditableText.GetHintText
	struct FSlateFontInfo GetFont(); // Function UMG.MultiLineEditableText.GetFont
}; 
 
 


// Class UMG.NamedSlot
// Size: 0x178(Inherited: 0x168)
struct UNamedSlot : UContentWidget
{
	char pad_360[16];  // 0x168 (0x168)


}; 
 
 


// Class UMG.NamedSlotInterface
// Size: 0x28(Inherited: 0x28)
struct UNamedSlotInterface : UInterface
{


}; 
 
 


// Class UMG.NativeWidgetHost
// Size: 0x160(Inherited: 0x150)
struct UNativeWidgetHost : UWidget
{
	char pad_336[16];  // 0x150 (0x150)


}; 
 
 


// Class UMG.RetainerBox
// Size: 0x198(Inherited: 0x168)
struct URetainerBox : UContentWidget
{
	char pad_360_1 : 7;  // 0x168 (0x168)
	bool bRetainRender : 1;  // 0x168 (0x168)
	char pad_361_1 : 7;  // 0x169 (0x169)
	bool RenderOnInvalidation : 1;  // 0x169 (0x169)
	char pad_362_1 : 7;  // 0x16A (0x16A)
	bool RenderOnPhase : 1;  // 0x16A (0x16A)
	char pad_363[1];  // 0x16B (0x16B)
	int32_t Phase;  // 0x16C (0x16C)
	int32_t PhaseCount;  // 0x170 (0x170)
	char pad_372[4];  // 0x174 (0x174)
	struct UMaterialInterface* EffectMaterial;  // 0x178 (0x178)
	struct FName TextureParameter;  // 0x180 (0x180)
	char pad_392[16];  // 0x188 (0x188)


	void SetTextureParameter(struct FName TextureParameter); // Function UMG.RetainerBox.SetTextureParameter
	void SetRetainRendering(bool bInRetainRendering); // Function UMG.RetainerBox.SetRetainRendering
	void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases); // Function UMG.RetainerBox.SetRenderingPhase
	void SetEffectMaterial(struct UMaterialInterface* EffectMaterial); // Function UMG.RetainerBox.SetEffectMaterial
	void RequestRender(); // Function UMG.RetainerBox.RequestRender
	struct UMaterialInstanceDynamic* GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial
}; 
 
 


// Class UMG.RichTextBlockImageDecorator
// Size: 0x30(Inherited: 0x28)
struct URichTextBlockImageDecorator : URichTextBlockDecorator
{
	struct UDataTable* ImageSet;  // 0x28 (0x28)


}; 
 
 


// Class UMG.SafeZone
// Size: 0x180(Inherited: 0x168)
struct USafeZone : UContentWidget
{
	char pad_360_1 : 7;  // 0x168 (0x168)
	bool PadLeft : 1;  // 0x168 (0x168)
	char pad_361_1 : 7;  // 0x169 (0x169)
	bool PadRight : 1;  // 0x169 (0x169)
	char pad_362_1 : 7;  // 0x16A (0x16A)
	bool PadTop : 1;  // 0x16A (0x16A)
	char pad_363_1 : 7;  // 0x16B (0x16B)
	bool PadBottom : 1;  // 0x16B (0x16B)
	char pad_364[20];  // 0x16C (0x16C)


	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom); // Function UMG.SafeZone.SetSidesToPad
}; 
 
 


// Class UMG.SafeZoneSlot
// Size: 0x60(Inherited: 0x38)
struct USafeZoneSlot : UPanelSlot
{
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bIsTitleSafe : 1;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)
	struct FMargin SafeAreaScale;  // 0x3C (0x3C)
	enum class EHorizontalAlignment HAlign;  // 0x4C (0x4C)
	enum class EVerticalAlignment VAlign;  // 0x4D (0x4D)
	char pad_78[2];  // 0x4E (0x4E)
	struct FMargin Padding;  // 0x50 (0x50)


}; 
 
 


// Class UMG.ScaleBox
// Size: 0x188(Inherited: 0x168)
struct UScaleBox : UContentWidget
{
	enum class EStretch Stretch;  // 0x168 (0x168)
	enum class EStretchDirection StretchDirection;  // 0x169 (0x169)
	char pad_362[2];  // 0x16A (0x16A)
	float UserSpecifiedScale;  // 0x16C (0x16C)
	char pad_368_1 : 7;  // 0x170 (0x170)
	bool IgnoreInheritedScale : 1;  // 0x170 (0x170)
	char pad_369[23];  // 0x171 (0x171)


	void SetUserSpecifiedScale(float InUserSpecifiedScale); // Function UMG.ScaleBox.SetUserSpecifiedScale
	void SetStretchDirection(enum class EStretchDirection InStretchDirection); // Function UMG.ScaleBox.SetStretchDirection
	void SetStretch(enum class EStretch InStretch); // Function UMG.ScaleBox.SetStretch
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale); // Function UMG.ScaleBox.SetIgnoreInheritedScale
}; 
 
 


// Class UMG.ScrollBar
// Size: 0x900(Inherited: 0x150)
struct UScrollBar : UWidget
{
	struct FScrollBarStyle WidgetStyle;  // 0x150 (0x150)
	char pad_2240_1 : 7;  // 0x8C0 (0x8C0)
	bool bAlwaysShowScrollbar : 1;  // 0x8C0 (0x8C0)
	char pad_2241_1 : 7;  // 0x8C1 (0x8C1)
	bool bAlwaysShowScrollbarTrack : 1;  // 0x8C1 (0x8C1)
	enum class EOrientation Orientation;  // 0x8C2 (0x8C2)
	char pad_2243[5];  // 0x8C3 (0x8C3)
	struct FVector2D Thickness;  // 0x8C8 (0x8C8)
	struct FMargin Padding;  // 0x8D8 (0x8D8)
	char pad_2280[24];  // 0x8E8 (0x8E8)


	void SetState(float InOffsetFraction, float InThumbSizeFraction); // Function UMG.ScrollBar.SetState
}; 
 
 


// Class UMG.ScrollBoxSlot
// Size: 0x58(Inherited: 0x38)
struct UScrollBoxSlot : UPanelSlot
{
	struct FMargin Padding;  // 0x38 (0x38)
	enum class EHorizontalAlignment HorizontalAlignment;  // 0x48 (0x48)
	enum class EVerticalAlignment VerticalAlignment;  // 0x49 (0x49)
	char pad_74[14];  // 0x4A (0x4A)


	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScrollBoxSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.ScrollBoxSlot.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScrollBoxSlot.SetHorizontalAlignment
}; 
 
 


// Class UMG.SizeBoxSlot
// Size: 0x60(Inherited: 0x38)
struct USizeBoxSlot : UPanelSlot
{
	struct FMargin Padding;  // 0x38 (0x38)
	char pad_72[16];  // 0x48 (0x48)
	enum class EHorizontalAlignment HorizontalAlignment;  // 0x58 (0x58)
	enum class EVerticalAlignment VerticalAlignment;  // 0x59 (0x59)
	char pad_90[6];  // 0x5A (0x5A)


	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.SizeBoxSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.SizeBoxSlot.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.SizeBoxSlot.SetHorizontalAlignment
}; 
 
 


// Class UMG.SpinBox
// Size: 0x870(Inherited: 0x150)
struct USpinBox : UWidget
{
	float Value;  // 0x150 (0x150)
	struct FDelegate ValueDelegate;  // 0x154 (0x154)
	char pad_356[12];  // 0x164 (0x164)
	struct FSpinBoxStyle WidgetStyle;  // 0x170 (0x170)
	int32_t MinFractionalDigits;  // 0x770 (0x770)
	int32_t MaxFractionalDigits;  // 0x774 (0x774)
	char pad_1912_1 : 7;  // 0x778 (0x778)
	bool bAlwaysUsesDeltaSnap : 1;  // 0x778 (0x778)
	char pad_1913_1 : 7;  // 0x779 (0x779)
	bool bEnableSlider : 1;  // 0x779 (0x779)
	char pad_1914[2];  // 0x77A (0x77A)
	float Delta;  // 0x77C (0x77C)
	float SliderExponent;  // 0x780 (0x780)
	char pad_1924[4];  // 0x784 (0x784)
	struct FSlateFontInfo Font;  // 0x788 (0x788)
	enum class ETextJustify Justification;  // 0x7E0 (0x7E0)
	char pad_2017[3];  // 0x7E1 (0x7E1)
	float MinDesiredWidth;  // 0x7E4 (0x7E4)
	enum class EVirtualKeyboardType KeyboardType;  // 0x7E8 (0x7E8)
	char pad_2025_1 : 7;  // 0x7E9 (0x7E9)
	bool ClearKeyboardFocusOnCommit : 1;  // 0x7E9 (0x7E9)
	char pad_2026_1 : 7;  // 0x7EA (0x7EA)
	bool SelectAllTextOnCommit : 1;  // 0x7EA (0x7EA)
	char pad_2027[1];  // 0x7EB (0x7EB)
	struct FSlateColor ForegroundColor;  // 0x7EC (0x7EC)
	struct FMulticastInlineDelegate OnValueChanged;  // 0x800 (0x800)
	struct FMulticastInlineDelegate OnValueCommitted;  // 0x810 (0x810)
	struct FMulticastInlineDelegate OnBeginSliderMovement;  // 0x820 (0x820)
	struct FMulticastInlineDelegate OnEndSliderMovement;  // 0x830 (0x830)
	char bOverride_MinValue : 1;  // 0x840 (0x840)
	char bOverride_MaxValue : 1;  // 0x840 (0x840)
	char bOverride_MinSliderValue : 1;  // 0x840 (0x840)
	char bOverride_MaxSliderValue : 1;  // 0x840 (0x840)
	char pad_2112_1 : 4;  // 0x840 (0x840)
	char pad_2113[4];  // 0x841 (0x841)
	float MinValue;  // 0x844 (0x844)
	float MaxValue;  // 0x848 (0x848)
	float MinSliderValue;  // 0x84C (0x84C)
	float MaxSliderValue;  // 0x850 (0x850)
	char pad_2132[28];  // 0x854 (0x854)


	void SetValue(float NewValue); // Function UMG.SpinBox.SetValue
	void SetMinValue(float NewValue); // Function UMG.SpinBox.SetMinValue
	void SetMinSliderValue(float NewValue); // Function UMG.SpinBox.SetMinSliderValue
	void SetMinFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMinFractionalDigits
	void SetMaxValue(float NewValue); // Function UMG.SpinBox.SetMaxValue
	void SetMaxSliderValue(float NewValue); // Function UMG.SpinBox.SetMaxSliderValue
	void SetMaxFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMaxFractionalDigits
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.SpinBox.SetForegroundColor
	void SetDelta(float NewValue); // Function UMG.SpinBox.SetDelta
	void SetAlwaysUsesDeltaSnap(bool bNewValue); // Function UMG.SpinBox.SetAlwaysUsesDeltaSnap
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
	float GetValue(); // Function UMG.SpinBox.GetValue
	float GetMinValue(); // Function UMG.SpinBox.GetMinValue
	float GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue
	int32_t GetMinFractionalDigits(); // Function UMG.SpinBox.GetMinFractionalDigits
	float GetMaxValue(); // Function UMG.SpinBox.GetMaxValue
	float GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue
	int32_t GetMaxFractionalDigits(); // Function UMG.SpinBox.GetMaxFractionalDigits
	float GetDelta(); // Function UMG.SpinBox.GetDelta
	bool GetAlwaysUsesDeltaSnap(); // Function UMG.SpinBox.GetAlwaysUsesDeltaSnap
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue
}; 
 
 


// Class UMG.StackBox
// Size: 0x180(Inherited: 0x168)
struct UStackBox : UPanelWidget
{
	enum class EOrientation Orientation;  // 0x168 (0x168)
	char pad_361[23];  // 0x169 (0x169)


	struct UStackBoxSlot* AddChildToStackBox(struct UWidget* Content); // Function UMG.StackBox.AddChildToStackBox
}; 
 
 


// Class UMG.Throbber
// Size: 0x240(Inherited: 0x150)
struct UThrobber : UWidget
{
	int32_t NumberOfPieces;  // 0x150 (0x150)
	char pad_340_1 : 7;  // 0x154 (0x154)
	bool bAnimateHorizontally : 1;  // 0x154 (0x154)
	char pad_341_1 : 7;  // 0x155 (0x155)
	bool bAnimateVertically : 1;  // 0x155 (0x155)
	char pad_342_1 : 7;  // 0x156 (0x156)
	bool bAnimateOpacity : 1;  // 0x156 (0x156)
	char pad_343[9];  // 0x157 (0x157)
	struct FSlateBrush Image;  // 0x160 (0x160)
	char pad_560[16];  // 0x230 (0x230)


	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.Throbber.SetNumberOfPieces
	void SetAnimateVertically(bool bInAnimateVertically); // Function UMG.Throbber.SetAnimateVertically
	void SetAnimateOpacity(bool bInAnimateOpacity); // Function UMG.Throbber.SetAnimateOpacity
	void SetAnimateHorizontally(bool bInAnimateHorizontally); // Function UMG.Throbber.SetAnimateHorizontally
}; 
 
 


// Class UMG.UniformGridPanel
// Size: 0x190(Inherited: 0x168)
struct UUniformGridPanel : UPanelWidget
{
	struct FMargin SlotPadding;  // 0x168 (0x168)
	float MinDesiredSlotWidth;  // 0x178 (0x178)
	float MinDesiredSlotHeight;  // 0x17C (0x17C)
	char pad_384[16];  // 0x180 (0x180)


	void SetSlotPadding(struct FMargin InSlotPadding); // Function UMG.UniformGridPanel.SetSlotPadding
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
	struct UUniformGridSlot* AddChildToUniformGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.UniformGridPanel.AddChildToUniformGrid
}; 
 
 


// Class UMG.UniformGridSlot
// Size: 0x50(Inherited: 0x38)
struct UUniformGridSlot : UPanelSlot
{
	enum class EHorizontalAlignment HorizontalAlignment;  // 0x38 (0x38)
	enum class EVerticalAlignment VerticalAlignment;  // 0x39 (0x39)
	char pad_58[2];  // 0x3A (0x3A)
	int32_t Row;  // 0x3C (0x3C)
	int32_t column;  // 0x40 (0x40)
	char pad_68[12];  // 0x44 (0x44)


	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.UniformGridSlot.SetVerticalAlignment
	void SetRow(int32_t InRow); // Function UMG.UniformGridSlot.SetRow
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.UniformGridSlot.SetHorizontalAlignment
	void SetColumn(int32_t InColumn); // Function UMG.UniformGridSlot.SetColumn
}; 
 
 


// Class UMG.VerticalBox
// Size: 0x178(Inherited: 0x168)
struct UVerticalBox : UPanelWidget
{
	char pad_360[16];  // 0x168 (0x168)


	struct UVerticalBoxSlot* AddChildToVerticalBox(struct UWidget* Content); // Function UMG.VerticalBox.AddChildToVerticalBox
}; 
 
 


// Class UMG.VerticalBoxSlot
// Size: 0x60(Inherited: 0x38)
struct UVerticalBoxSlot : UPanelSlot
{
	struct FSlateChildSize Size;  // 0x38 (0x38)
	struct FMargin Padding;  // 0x40 (0x40)
	enum class EHorizontalAlignment HorizontalAlignment;  // 0x50 (0x50)
	enum class EVerticalAlignment VerticalAlignment;  // 0x51 (0x51)
	char pad_82[14];  // 0x52 (0x52)


	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.VerticalBoxSlot.SetVerticalAlignment
	void SetSize(struct FSlateChildSize InSize); // Function UMG.VerticalBoxSlot.SetSize
	void SetPadding(struct FMargin InPadding); // Function UMG.VerticalBoxSlot.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.VerticalBoxSlot.SetHorizontalAlignment
}; 
 
 


// Class UMG.Viewport
// Size: 0x1B8(Inherited: 0x168)
struct UViewport : UContentWidget
{
	struct FLinearColor BackgroundColor;  // 0x168 (0x168)
	char pad_376[64];  // 0x178 (0x178)


	struct AActor* Spawn(AActor* ActorClass); // Function UMG.Viewport.Spawn
	void SetViewRotation(struct FRotator Rotation); // Function UMG.Viewport.SetViewRotation
	void SetViewLocation(struct FVector Location); // Function UMG.Viewport.SetViewLocation
	struct FRotator GetViewRotation(); // Function UMG.Viewport.GetViewRotation
	struct UWorld* GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld
	struct FVector GetViewLocation(); // Function UMG.Viewport.GetViewLocation
}; 
 
 


// Class UMG.WidgetInteractionComponent
// Size: 0x570(Inherited: 0x2A0)
struct UWidgetInteractionComponent : USceneComponent
{
	struct FMulticastInlineDelegate OnHoveredWidgetChanged;  // 0x2A0 (0x2A0)
	char pad_688[16];  // 0x2B0 (0x2B0)
	int32_t VirtualUserIndex;  // 0x2C0 (0x2C0)
	int32_t PointerIndex;  // 0x2C4 (0x2C4)
	enum class ECollisionChannel TraceChannel;  // 0x2C8 (0x2C8)
	char pad_713[3];  // 0x2C9 (0x2C9)
	float InteractionDistance;  // 0x2CC (0x2CC)
	uint8_t InteractionSource;  // 0x2D0 (0x2D0)
	char pad_721_1 : 7;  // 0x2D1 (0x2D1)
	bool bEnableHitTesting : 1;  // 0x2D1 (0x2D1)
	char pad_722_1 : 7;  // 0x2D2 (0x2D2)
	bool bShowDebug : 1;  // 0x2D2 (0x2D2)
	char pad_723[1];  // 0x2D3 (0x2D3)
	float DebugSphereLineThickness;  // 0x2D4 (0x2D4)
	float DebugLineThickness;  // 0x2D8 (0x2D8)
	struct FLinearColor DebugColor;  // 0x2DC (0x2DC)
	char pad_748[124];  // 0x2EC (0x2EC)
	struct FHitResult CustomHitResult;  // 0x368 (0x368)
	struct FVector2D LocalHitLocation;  // 0x450 (0x450)
	struct FVector2D LastLocalHitLocation;  // 0x460 (0x460)
	struct UWidgetComponent* HoveredWidgetComponent;  // 0x470 (0x470)
	struct FHitResult LastHitResult;  // 0x478 (0x478)
	char pad_1376_1 : 7;  // 0x560 (0x560)
	bool bIsHoveredWidgetInteractable : 1;  // 0x560 (0x560)
	char pad_1377_1 : 7;  // 0x561 (0x561)
	bool bIsHoveredWidgetFocusable : 1;  // 0x561 (0x561)
	char pad_1378_1 : 7;  // 0x562 (0x562)
	bool bIsHoveredWidgetHitTestVisible : 1;  // 0x562 (0x562)
	char pad_1379[13];  // 0x563 (0x563)


	void SetFocus(struct UWidget* FocusWidget); // Function UMG.WidgetInteractionComponent.SetFocus
	void SetCustomHitResult(struct FHitResult& HitResult); // Function UMG.WidgetInteractionComponent.SetCustomHitResult
	bool SendKeyChar(struct FString Characters, bool bRepeat); // Function UMG.WidgetInteractionComponent.SendKeyChar
	void ScrollWheel(float ScrollDelta); // Function UMG.WidgetInteractionComponent.ScrollWheel
	void ReleasePointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleasePointerKey
	bool ReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleaseKey
	void PressPointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressPointerKey
	bool PressKey(struct FKey Key, bool bRepeat); // Function UMG.WidgetInteractionComponent.PressKey
	bool PressAndReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressAndReleaseKey
	bool IsOverInteractableWidget(); // Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
	bool IsOverHitTestVisibleWidget(); // Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
	bool IsOverFocusableWidget(); // Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
	struct FHitResult GetLastHitResult(); // Function UMG.WidgetInteractionComponent.GetLastHitResult
	struct UWidgetComponent* GetHoveredWidgetComponent(); // Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
	struct FVector2D Get2DHitLocation(); // Function UMG.WidgetInteractionComponent.Get2DHitLocation
}; 
 
 


// Class UMG.WindowTitleBarArea
// Size: 0x188(Inherited: 0x168)
struct UWindowTitleBarArea : UContentWidget
{
	char pad_360_1 : 7;  // 0x168 (0x168)
	bool bWindowButtonsEnabled : 1;  // 0x168 (0x168)
	char pad_361_1 : 7;  // 0x169 (0x169)
	bool bDoubleClickTogglesFullscreen : 1;  // 0x169 (0x169)
	char pad_362[30];  // 0x16A (0x16A)


	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarArea.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarArea.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarArea.SetHorizontalAlignment
}; 
 
 


// Class UMG.WindowTitleBarAreaSlot
// Size: 0x60(Inherited: 0x38)
struct UWindowTitleBarAreaSlot : UPanelSlot
{
	struct FMargin Padding;  // 0x38 (0x38)
	enum class EHorizontalAlignment HorizontalAlignment;  // 0x48 (0x48)
	enum class EVerticalAlignment VerticalAlignment;  // 0x49 (0x49)
	char pad_74[22];  // 0x4A (0x4A)


	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarAreaSlot.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
}; 
 
 


// Class UMG.WrapBox
// Size: 0x190(Inherited: 0x168)
struct UWrapBox : UPanelWidget
{
	struct FVector2D InnerSlotPadding;  // 0x168 (0x168)
	float WrapSize;  // 0x178 (0x178)
	char pad_380_1 : 7;  // 0x17C (0x17C)
	bool bExplicitWrapSize : 1;  // 0x17C (0x17C)
	enum class EHorizontalAlignment HorizontalAlignment;  // 0x17D (0x17D)
	enum class EOrientation Orientation;  // 0x17E (0x17E)
	char pad_383[17];  // 0x17F (0x17F)


	void SetInnerSlotPadding(struct FVector2D InPadding); // Function UMG.WrapBox.SetInnerSlotPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WrapBox.SetHorizontalAlignment
	struct UWrapBoxSlot* AddChildToWrapBox(struct UWidget* Content); // Function UMG.WrapBox.AddChildToWrapBox
}; 
 
 


// Class UMG.SlateBlueprintLibrary
// Size: 0x28(Inherited: 0x28)
struct USlateBlueprintLibrary : UBlueprintFunctionLibrary
{


	struct FVector2D TransformVectorLocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalVector); // Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute
	struct FVector2D TransformVectorAbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteVector); // Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
	float TransformScalarLocalToAbsolute(struct FGeometry& Geometry, float LocalScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
	float TransformScalarAbsoluteToLocal(struct FGeometry& Geometry, float AbsoluteScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
	void ScreenToWidgetLocal(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D ScreenPosition, struct FVector2D& LocalCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
	void ScreenToWidgetAbsolute(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
	void ScreenToViewport(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.ScreenToViewport
	void LocalToViewport(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D LocalCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.LocalToViewport
	struct FVector2D LocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalCoordinate); // Function UMG.SlateBlueprintLibrary.LocalToAbsolute
	bool IsUnderLocation(struct FGeometry& Geometry, struct FVector2D& AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.IsUnderLocation
	struct FVector2D GetLocalTopLeft(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalTopLeft
	struct FVector2D GetLocalSize(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalSize
	struct FVector2D GetAbsoluteSize(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetAbsoluteSize
	bool EqualEqual_SlateBrush(struct FSlateBrush& A, struct FSlateBrush& B); // Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
	void AbsoluteToViewport(struct UObject* WorldContextObject, struct FVector2D AbsoluteDesktopCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
	struct FVector2D AbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
}; 
 
 


// Class UMG.SlateVectorArtData
// Size: 0x70(Inherited: 0x28)
struct USlateVectorArtData : UObject
{
	struct TArray<struct FSlateMeshVertex> VertexData;  // 0x28 (0x28)
	struct TArray<uint32_t> IndexData;  // 0x38 (0x38)
	struct UMaterialInterface* Material;  // 0x48 (0x48)
	struct FVector2D ExtentMin;  // 0x50 (0x50)
	struct FVector2D ExtentMax;  // 0x60 (0x60)


}; 
 
 


// Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x400(Inherited: 0x380)
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass
{
	struct UWidgetTree* WidgetTree;  // 0x380 (0x380)
	struct TArray<struct UWidgetBlueprintGeneratedClassExtension*> Extensions;  // 0x388 (0x388)
	struct TArray<struct FFieldNotificationId> FieldNotifyNames;  // 0x398 (0x398)
	char pad_936[4];  // 0x3A8 (0x3A8)
	char bClassRequiresNativeTick : 1;  // 0x3AC (0x3AC)
	char pad_940_1 : 7;  // 0x3AC (0x3AC)
	char pad_941[4];  // 0x3AD (0x3AD)
	struct TArray<struct FDelegateRuntimeBinding> Bindings;  // 0x3B0 (0x3B0)
	struct TArray<struct UWidgetAnimation*> Animations;  // 0x3C0 (0x3C0)
	struct TArray<struct FName> NamedSlots;  // 0x3D0 (0x3D0)
	struct TArray<struct FName> AvailableNamedSlots;  // 0x3E0 (0x3E0)
	struct TArray<struct FName> InstanceNamedSlots;  // 0x3F0 (0x3F0)


}; 
 
 


// Class UMG.WidgetLayoutLibrary
// Size: 0x28(Inherited: 0x28)
struct UWidgetLayoutLibrary : UBlueprintFunctionLibrary
{


	struct UWrapBoxSlot* SlotAsWrapBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot
	struct UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
	struct UVerticalBoxSlot* SlotAsVerticalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
	struct UUniformGridSlot* SlotAsUniformGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
	struct USizeBoxSlot* SlotAsSizeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
	struct UScrollBoxSlot* SlotAsScrollBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
	struct UScaleBoxSlot* SlotAsScaleBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
	struct USafeZoneSlot* SlotAsSafeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
	struct UOverlaySlot* SlotAsOverlaySlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
	struct UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
	struct UGridSlot* SlotAsGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
	struct UCanvasPanelSlot* SlotAsCanvasSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
	struct UBorderSlot* SlotAsBorderSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
	void RemoveAllWidgets(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
	bool ProjectWorldLocationToWidgetPosition(struct APlayerController* PlayerController, struct FVector WorldLocation, struct FVector2D& ScreenPosition, bool bPlayerViewportRelative); // Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
	struct FGeometry GetViewportWidgetGeometry(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
	struct FVector2D GetViewportSize(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportSize
	float GetViewportScale(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportScale
	struct FGeometry GetPlayerScreenWidgetGeometry(struct APlayerController* PlayerController); // Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
	bool GetMousePositionScaledByDPI(struct APlayerController* Player, float& LocationX, float& LocationY); // Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
	struct FVector2D GetMousePositionOnViewport(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
	struct FVector2D GetMousePositionOnPlatform(); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
}; 
 
 


// Class UMG.WidgetTree
// Size: 0x88(Inherited: 0x28)
struct UWidgetTree : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	struct UWidget* RootWidget;  // 0x30 (0x30)
	struct TMap<struct FName, struct UWidget*> NamedSlotBindings;  // 0x38 (0x38)


}; 
 
 


