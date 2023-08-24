#include "pch.h"
#include "SDK.h"

struct UWidget* UWidgetBinding::GetValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBinding.GetValue");

	FGetValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UUserWidget::UnregisterInputComponent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.UnregisterInputComponent");

	FUnregisterInputComponent parms{};	

	ProcessEvent(fn, &parms);
}

void UUserWidget::UnbindFromAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindFromAnimationStarted");

	FUnbindFromAnimationStarted parms{};	
	parms.Animation = Animation;
	parms.Delegate = Delegate;

	ProcessEvent(fn, &parms);
}

void UUserWidget::UnbindFromAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindFromAnimationFinished");

	FUnbindFromAnimationFinished parms{};	
	parms.Animation = Animation;
	parms.Delegate = Delegate;

	ProcessEvent(fn, &parms);
}

void UUserWidget::UnbindAllFromAnimationStarted(struct UWidgetAnimation* Animation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindAllFromAnimationStarted");

	FUnbindAllFromAnimationStarted parms{};	
	parms.Animation = Animation;

	ProcessEvent(fn, &parms);
}

void UUserWidget::UnbindAllFromAnimationFinished(struct UWidgetAnimation* Animation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindAllFromAnimationFinished");

	FUnbindAllFromAnimationFinished parms{};	
	parms.Animation = Animation;

	ProcessEvent(fn, &parms);
}

void UUserWidget::Tick(struct FGeometry MyGeometry, float InDeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.Tick");

	FTick parms{};	
	parms.MyGeometry = MyGeometry;
	parms.InDeltaTime = InDeltaTime;

	ProcessEvent(fn, &parms);
}

void UUserWidget::StopListeningForInputAction(struct FName ActionName, enum class EInputEvent EventType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.StopListeningForInputAction");

	FStopListeningForInputAction parms{};	
	parms.ActionName = ActionName;
	parms.EventType = EventType;

	ProcessEvent(fn, &parms);
}

void UUserWidget::StopListeningForAllInputActions(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.StopListeningForAllInputActions");

	FStopListeningForAllInputActions parms{};	

	ProcessEvent(fn, &parms);
}

void UUserWidget::StopAnimationsAndLatentActions(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAnimationsAndLatentActions");

	FStopAnimationsAndLatentActions parms{};	

	ProcessEvent(fn, &parms);
}

void UUserWidget::StopAnimation(struct UWidgetAnimation* InAnimation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAnimation");

	FStopAnimation parms{};	
	parms.InAnimation = InAnimation;

	ProcessEvent(fn, &parms);
}

void UUserWidget::StopAllAnimations(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAllAnimations");

	FStopAllAnimations parms{};	

	ProcessEvent(fn, &parms);
}

void UUserWidget::SetPositionInViewport(struct FVector2D Position, bool bRemoveDPIScale){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPositionInViewport");

	FSetPositionInViewport parms{};	
	parms.Position = Position;
	parms.bRemoveDPIScale = bRemoveDPIScale;

	ProcessEvent(fn, &parms);
}

void UUserWidget::SetPlaybackSpeed(struct UWidgetAnimation* InAnimation, float PlaybackSpeed){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPlaybackSpeed");

	FSetPlaybackSpeed parms{};	
	parms.InAnimation = InAnimation;
	parms.PlaybackSpeed = PlaybackSpeed;

	ProcessEvent(fn, &parms);
}

void UUserWidget::SetPadding(struct FMargin InPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPadding");

	FSetPadding parms{};	
	parms.InPadding = InPadding;

	ProcessEvent(fn, &parms);
}

void UUserWidget::SetOwningPlayer(struct APlayerController* LocalPlayerController){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.SetOwningPlayer");

	FSetOwningPlayer parms{};	
	parms.LocalPlayerController = LocalPlayerController;

	ProcessEvent(fn, &parms);
}

void UUserWidget::SetNumLoopsToPlay(struct UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.SetNumLoopsToPlay");

	FSetNumLoopsToPlay parms{};	
	parms.InAnimation = InAnimation;
	parms.NumLoopsToPlay = NumLoopsToPlay;

	ProcessEvent(fn, &parms);
}

void UUserWidget::SetInputActionPriority(int32_t NewPriority){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.SetInputActionPriority");

	FSetInputActionPriority parms{};	
	parms.NewPriority = NewPriority;

	ProcessEvent(fn, &parms);
}

void UUserWidget::SetInputActionBlocking(bool bShouldBlock){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.SetInputActionBlocking");

	FSetInputActionBlocking parms{};	
	parms.bShouldBlock = bShouldBlock;

	ProcessEvent(fn, &parms);
}

void UUserWidget::SetForegroundColor(struct FSlateColor InForegroundColor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.SetForegroundColor");

	FSetForegroundColor parms{};	
	parms.InForegroundColor = InForegroundColor;

	ProcessEvent(fn, &parms);
}

void UUserWidget::SetDesiredSizeInViewport(struct FVector2D Size){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.SetDesiredSizeInViewport");

	FSetDesiredSizeInViewport parms{};	
	parms.Size = Size;

	ProcessEvent(fn, &parms);
}

void UUserWidget::SetColorAndOpacity(struct FLinearColor InColorAndOpacity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.SetColorAndOpacity");

	FSetColorAndOpacity parms{};	
	parms.InColorAndOpacity = InColorAndOpacity;

	ProcessEvent(fn, &parms);
}

void UUserWidget::SetAnimationCurrentTime(struct UWidgetAnimation* InAnimation, float InTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.SetAnimationCurrentTime");

	FSetAnimationCurrentTime parms{};	
	parms.InAnimation = InAnimation;
	parms.InTime = InTime;

	ProcessEvent(fn, &parms);
}

void UUserWidget::SetAnchorsInViewport(struct FAnchors Anchors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.SetAnchorsInViewport");

	FSetAnchorsInViewport parms{};	
	parms.Anchors = Anchors;

	ProcessEvent(fn, &parms);
}

void UUserWidget::SetAlignmentInViewport(struct FVector2D Alignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.SetAlignmentInViewport");

	FSetAlignmentInViewport parms{};	
	parms.Alignment = Alignment;

	ProcessEvent(fn, &parms);
}

void UUserWidget::ReverseAnimation(struct UWidgetAnimation* InAnimation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.ReverseAnimation");

	FReverseAnimation parms{};	
	parms.InAnimation = InAnimation;

	ProcessEvent(fn, &parms);
}

void UUserWidget::RemoveFromViewport(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.RemoveFromViewport");

	FRemoveFromViewport parms{};	

	ProcessEvent(fn, &parms);
}

void UUserWidget::RemoveExtensions(UUserWidgetExtension* InExtensionType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.RemoveExtensions");

	FRemoveExtensions parms{};	
	parms.InExtensionType = InExtensionType;

	ProcessEvent(fn, &parms);
}

void UUserWidget::RemoveExtension(struct UUserWidgetExtension* InExtension){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.RemoveExtension");

	FRemoveExtension parms{};	
	parms.InExtension = InExtension;

	ProcessEvent(fn, &parms);
}

void UUserWidget::RegisterInputComponent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.RegisterInputComponent");

	FRegisterInputComponent parms{};	

	ProcessEvent(fn, &parms);
}

void UUserWidget::PreConstruct(bool IsDesignTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.PreConstruct");

	FPreConstruct parms{};	
	parms.IsDesignTime = IsDesignTime;

	ProcessEvent(fn, &parms);
}

void UUserWidget::PlaySound(struct USoundBase* SoundToPlay){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.PlaySound");

	FPlaySound parms{};	
	parms.SoundToPlay = SoundToPlay;

	ProcessEvent(fn, &parms);
}

struct UUMGSequencePlayer* UUserWidget::PlayAnimationTimeRange(struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimationTimeRange");

	FPlayAnimationTimeRange parms{};	
	parms.InAnimation = InAnimation;
	parms.StartAtTime = StartAtTime;
	parms.EndAtTime = EndAtTime;
	parms.NumLoopsToPlay = NumLoopsToPlay;
	parms.PlayMode = PlayMode;
	parms.PlaybackSpeed = PlaybackSpeed;
	parms.bRestoreState = bRestoreState;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UUMGSequencePlayer* UUserWidget::PlayAnimationReverse(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimationReverse");

	FPlayAnimationReverse parms{};	
	parms.InAnimation = InAnimation;
	parms.PlaybackSpeed = PlaybackSpeed;
	parms.bRestoreState = bRestoreState;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UUMGSequencePlayer* UUserWidget::PlayAnimationForward(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimationForward");

	FPlayAnimationForward parms{};	
	parms.InAnimation = InAnimation;
	parms.PlaybackSpeed = PlaybackSpeed;
	parms.bRestoreState = bRestoreState;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UUMGSequencePlayer* UUserWidget::PlayAnimation(struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimation");

	FPlayAnimation parms{};	
	parms.InAnimation = InAnimation;
	parms.StartAtTime = StartAtTime;
	parms.NumLoopsToPlay = NumLoopsToPlay;
	parms.PlayMode = PlayMode;
	parms.PlaybackSpeed = PlaybackSpeed;
	parms.bRestoreState = bRestoreState;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UUserWidget::PauseAnimation(struct UWidgetAnimation* InAnimation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.PauseAnimation");

	FPauseAnimation parms{};	
	parms.InAnimation = InAnimation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UUserWidget::OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchStarted");

	FOnTouchStarted parms{};	
	parms.MyGeometry = MyGeometry;
	parms.InTouchEvent = InTouchEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UUserWidget::OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchMoved");

	FOnTouchMoved parms{};	
	parms.MyGeometry = MyGeometry;
	parms.InTouchEvent = InTouchEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UUserWidget::OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent& GestureEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchGesture");

	FOnTouchGesture parms{};	
	parms.MyGeometry = MyGeometry;
	parms.GestureEvent = GestureEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UUserWidget::OnTouchForceChanged(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchForceChanged");

	FOnTouchForceChanged parms{};	
	parms.MyGeometry = MyGeometry;
	parms.InTouchEvent = InTouchEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UUserWidget::OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchEnded");

	FOnTouchEnded parms{};	
	parms.MyGeometry = MyGeometry;
	parms.InTouchEvent = InTouchEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UUserWidget::OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnRemovedFromFocusPath");

	FOnRemovedFromFocusPath parms{};	
	parms.InFocusEvent = InFocusEvent;

	ProcessEvent(fn, &parms);
}

struct FEventReply UUserWidget::OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPreviewMouseButtonDown");

	FOnPreviewMouseButtonDown parms{};	
	parms.MyGeometry = MyGeometry;
	parms.MouseEvent = MouseEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UUserWidget::OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPreviewKeyDown");

	FOnPreviewKeyDown parms{};	
	parms.MyGeometry = MyGeometry;
	parms.InKeyEvent = InKeyEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UUserWidget::OnPaint(struct FPaintContext& Context){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPaint");

	FOnPaint parms{};	
	parms.Context = Context;

	ProcessEvent(fn, &parms);
}

struct FEventReply UUserWidget::OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseWheel");

	FOnMouseWheel parms{};	
	parms.MyGeometry = MyGeometry;
	parms.MouseEvent = MouseEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UUserWidget::OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseMove");

	FOnMouseMove parms{};	
	parms.MyGeometry = MyGeometry;
	parms.MouseEvent = MouseEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UUserWidget::OnMouseLeave(struct FPointerEvent& MouseEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseLeave");

	FOnMouseLeave parms{};	
	parms.MouseEvent = MouseEvent;

	ProcessEvent(fn, &parms);
}

void UUserWidget::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseEnter");

	FOnMouseEnter parms{};	
	parms.MyGeometry = MyGeometry;
	parms.MouseEvent = MouseEvent;

	ProcessEvent(fn, &parms);
}

void UUserWidget::OnMouseCaptureLost(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseCaptureLost");

	FOnMouseCaptureLost parms{};	

	ProcessEvent(fn, &parms);
}

struct FEventReply UUserWidget::OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonUp");

	FOnMouseButtonUp parms{};	
	parms.MyGeometry = MyGeometry;
	parms.MouseEvent = MouseEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UUserWidget::OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonDown");

	FOnMouseButtonDown parms{};	
	parms.MyGeometry = MyGeometry;
	parms.MouseEvent = MouseEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UUserWidget::OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonDoubleClick");

	FOnMouseButtonDoubleClick parms{};	
	parms.InMyGeometry = InMyGeometry;
	parms.InMouseEvent = InMouseEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UUserWidget::OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMotionDetected");

	FOnMotionDetected parms{};	
	parms.MyGeometry = MyGeometry;
	parms.InMotionEvent = InMotionEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UUserWidget::OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyUp");

	FOnKeyUp parms{};	
	parms.MyGeometry = MyGeometry;
	parms.InKeyEvent = InKeyEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UUserWidget::OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyDown");

	FOnKeyDown parms{};	
	parms.MyGeometry = MyGeometry;
	parms.InKeyEvent = InKeyEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UUserWidget::OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyChar");

	FOnKeyChar parms{};	
	parms.MyGeometry = MyGeometry;
	parms.InCharacterEvent = InCharacterEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UUserWidget::OnInitialized(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnInitialized");

	FOnInitialized parms{};	

	ProcessEvent(fn, &parms);
}

struct FEventReply UUserWidget::OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnFocusReceived");

	FOnFocusReceived parms{};	
	parms.MyGeometry = MyGeometry;
	parms.InFocusEvent = InFocusEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UUserWidget::OnFocusLost(struct FFocusEvent InFocusEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnFocusLost");

	FOnFocusLost parms{};	
	parms.InFocusEvent = InFocusEvent;

	ProcessEvent(fn, &parms);
}

bool UUserWidget::OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDrop");

	FOnDrop parms{};	
	parms.MyGeometry = MyGeometry;
	parms.PointerEvent = PointerEvent;
	parms.Operation = Operation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UUserWidget::OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragOver");

	FOnDragOver parms{};	
	parms.MyGeometry = MyGeometry;
	parms.PointerEvent = PointerEvent;
	parms.Operation = Operation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UUserWidget::OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragLeave");

	FOnDragLeave parms{};	
	parms.PointerEvent = PointerEvent;
	parms.Operation = Operation;

	ProcessEvent(fn, &parms);
}

void UUserWidget::OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragEnter");

	FOnDragEnter parms{};	
	parms.MyGeometry = MyGeometry;
	parms.PointerEvent = PointerEvent;
	parms.Operation = Operation;

	ProcessEvent(fn, &parms);
}

void UUserWidget::OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragDetected");

	FOnDragDetected parms{};	
	parms.MyGeometry = MyGeometry;
	parms.PointerEvent = PointerEvent;
	parms.Operation = Operation;

	ProcessEvent(fn, &parms);
}

void UUserWidget::OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragCancelled");

	FOnDragCancelled parms{};	
	parms.PointerEvent = PointerEvent;
	parms.Operation = Operation;

	ProcessEvent(fn, &parms);
}

void UUserWidget::OnAnimationStarted(struct UWidgetAnimation* Animation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnimationStarted");

	FOnAnimationStarted parms{};	
	parms.Animation = Animation;

	ProcessEvent(fn, &parms);
}

void UUserWidget::OnAnimationFinished(struct UWidgetAnimation* Animation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnimationFinished");

	FOnAnimationFinished parms{};	
	parms.Animation = Animation;

	ProcessEvent(fn, &parms);
}

struct FEventReply UUserWidget::OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnalogValueChanged");

	FOnAnalogValueChanged parms{};	
	parms.MyGeometry = MyGeometry;
	parms.InAnalogInputEvent = InAnalogInputEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UUserWidget::OnAddedToFocusPath(struct FFocusEvent InFocusEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAddedToFocusPath");

	FOnAddedToFocusPath parms{};	
	parms.InFocusEvent = InFocusEvent;

	ProcessEvent(fn, &parms);
}

void UUserWidget::ListenForInputAction(struct FName ActionName, enum class EInputEvent EventType, bool bConsume, struct FDelegate Callback){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.ListenForInputAction");

	FListenForInputAction parms{};	
	parms.ActionName = ActionName;
	parms.EventType = EventType;
	parms.bConsume = bConsume;
	parms.Callback = Callback;

	ProcessEvent(fn, &parms);
}

bool UUserWidget::IsPlayingAnimation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.IsPlayingAnimation");

	FIsPlayingAnimation parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UUserWidget::IsListeningForInputAction(struct FName ActionName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.IsListeningForInputAction");

	FIsListeningForInputAction parms{};	
	parms.ActionName = ActionName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UUserWidget::IsInteractable(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.IsInteractable");

	FIsInteractable parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UUserWidget::IsAnyAnimationPlaying(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnyAnimationPlaying");

	FIsAnyAnimationPlaying parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UUserWidget::IsAnimationPlayingForward(struct UWidgetAnimation* InAnimation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnimationPlayingForward");

	FIsAnimationPlayingForward parms{};	
	parms.InAnimation = InAnimation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UUserWidget::IsAnimationPlaying(struct UWidgetAnimation* InAnimation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnimationPlaying");

	FIsAnimationPlaying parms{};	
	parms.InAnimation = InAnimation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct APawn* UUserWidget::GetOwningPlayerPawn(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.GetOwningPlayerPawn");

	FGetOwningPlayerPawn parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct APlayerCameraManager* UUserWidget::GetOwningPlayerCameraManager(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.GetOwningPlayerCameraManager");

	FGetOwningPlayerCameraManager parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UUserWidget::GetIsVisible(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.GetIsVisible");

	FGetIsVisible parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UUserWidgetExtension*> UUserWidget::GetExtensions(UUserWidgetExtension* ExtensionType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.GetExtensions");

	FGetExtensions parms{};	
	parms.ExtensionType = ExtensionType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UUserWidgetExtension* UUserWidget::GetExtension(UUserWidgetExtension* ExtensionType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.GetExtension");

	FGetExtension parms{};	
	parms.ExtensionType = ExtensionType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UUserWidget::GetAnimationCurrentTime(struct UWidgetAnimation* InAnimation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAnimationCurrentTime");

	FGetAnimationCurrentTime parms{};	
	parms.InAnimation = InAnimation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FAnchors UUserWidget::GetAnchorsInViewport(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAnchorsInViewport");

	FGetAnchorsInViewport parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D UUserWidget::GetAlignmentInViewport(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAlignmentInViewport");

	FGetAlignmentInViewport parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UUserWidget::FlushAnimations(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.FlushAnimations");

	FFlushAnimations parms{};	

	ProcessEvent(fn, &parms);
}

void UUserWidget::Destruct(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.Destruct");

	FDestruct parms{};	

	ProcessEvent(fn, &parms);
}

void UUserWidget::Construct(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.Construct");

	FConstruct parms{};	

	ProcessEvent(fn, &parms);
}

void UUserWidget::CancelLatentActions(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.CancelLatentActions");

	FCancelLatentActions parms{};	

	ProcessEvent(fn, &parms);
}

void UUserWidget::BindToAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.BindToAnimationStarted");

	FBindToAnimationStarted parms{};	
	parms.Animation = Animation;
	parms.Delegate = Delegate;

	ProcessEvent(fn, &parms);
}

void UUserWidget::BindToAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.BindToAnimationFinished");

	FBindToAnimationFinished parms{};	
	parms.Animation = Animation;
	parms.Delegate = Delegate;

	ProcessEvent(fn, &parms);
}

void UUserWidget::BindToAnimationEvent(struct UWidgetAnimation* Animation, struct FDelegate Delegate, uint8_t AnimationEvent, struct FName UserTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.BindToAnimationEvent");

	FBindToAnimationEvent parms{};	
	parms.Animation = Animation;
	parms.Delegate = Delegate;
	parms.AnimationEvent = AnimationEvent;
	parms.UserTag = UserTag;

	ProcessEvent(fn, &parms);
}

void UUserWidget::AddToViewport(int32_t ZOrder){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.AddToViewport");

	FAddToViewport parms{};	
	parms.ZOrder = ZOrder;

	ProcessEvent(fn, &parms);
}

bool UUserWidget::AddToPlayerScreen(int32_t ZOrder){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.AddToPlayerScreen");

	FAddToPlayerScreen parms{};	
	parms.ZOrder = ZOrder;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UUserWidgetExtension* UUserWidget::AddExtension(UUserWidgetExtension* InExtensionType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserWidget.AddExtension");

	FAddExtension parms{};	
	parms.InExtensionType = InExtensionType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void URichTextBlock::SetTextTransformPolicy(uint8_t InTransformPolicy){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetTextTransformPolicy");

	FSetTextTransformPolicy parms{};	
	parms.InTransformPolicy = InTransformPolicy;

	ProcessEvent(fn, &parms);
}

void URichTextBlock::SetTextStyleSet(struct UDataTable* NewTextStyleSet){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetTextStyleSet");

	FSetTextStyleSet parms{};	
	parms.NewTextStyleSet = NewTextStyleSet;

	ProcessEvent(fn, &parms);
}

void URichTextBlock::SetTextOverflowPolicy(uint8_t InOverflowPolicy){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetTextOverflowPolicy");

	FSetTextOverflowPolicy parms{};	
	parms.InOverflowPolicy = InOverflowPolicy;

	ProcessEvent(fn, &parms);
}

void URichTextBlock::SetText(struct FText& InText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetText");

	FSetText parms{};	
	parms.InText = InText;

	ProcessEvent(fn, &parms);
}

void URichTextBlock::SetMinDesiredWidth(float InMinDesiredWidth){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetMinDesiredWidth");

	FSetMinDesiredWidth parms{};	
	parms.InMinDesiredWidth = InMinDesiredWidth;

	ProcessEvent(fn, &parms);
}

void URichTextBlock::SetDefaultTextStyle(struct FTextBlockStyle& InDefaultTextStyle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultTextStyle");

	FSetDefaultTextStyle parms{};	
	parms.InDefaultTextStyle = InDefaultTextStyle;

	ProcessEvent(fn, &parms);
}

void URichTextBlock::SetDefaultStrikeBrush(struct FSlateBrush& InStrikeBrush){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultStrikeBrush");

	FSetDefaultStrikeBrush parms{};	
	parms.InStrikeBrush = InStrikeBrush;

	ProcessEvent(fn, &parms);
}

void URichTextBlock::SetDefaultShadowOffset(struct FVector2D InShadowOffset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultShadowOffset");

	FSetDefaultShadowOffset parms{};	
	parms.InShadowOffset = InShadowOffset;

	ProcessEvent(fn, &parms);
}

void URichTextBlock::SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity");

	FSetDefaultShadowColorAndOpacity parms{};	
	parms.InShadowColorAndOpacity = InShadowColorAndOpacity;

	ProcessEvent(fn, &parms);
}

void URichTextBlock::SetDefaultMaterial(struct UMaterialInterface* InMaterial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultMaterial");

	FSetDefaultMaterial parms{};	
	parms.InMaterial = InMaterial;

	ProcessEvent(fn, &parms);
}

void URichTextBlock::SetDefaultFont(struct FSlateFontInfo InFontInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultFont");

	FSetDefaultFont parms{};	
	parms.InFontInfo = InFontInfo;

	ProcessEvent(fn, &parms);
}

void URichTextBlock::SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultColorAndOpacity");

	FSetDefaultColorAndOpacity parms{};	
	parms.InColorAndOpacity = InColorAndOpacity;

	ProcessEvent(fn, &parms);
}

void URichTextBlock::SetDecorators(struct TArray<URichTextBlockDecorator*>& InDecoratorClasses){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDecorators");

	FSetDecorators parms{};	
	parms.InDecoratorClasses = InDecoratorClasses;

	ProcessEvent(fn, &parms);
}

void URichTextBlock::SetAutoWrapText(bool InAutoTextWrap){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetAutoWrapText");

	FSetAutoWrapText parms{};	
	parms.InAutoTextWrap = InAutoTextWrap;

	ProcessEvent(fn, &parms);
}

void URichTextBlock::RefreshTextLayout(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RichTextBlock.RefreshTextLayout");

	FRefreshTextLayout parms{};	

	ProcessEvent(fn, &parms);
}

struct UDataTable* URichTextBlock::GetTextStyleSet(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RichTextBlock.GetTextStyleSet");

	FGetTextStyleSet parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText URichTextBlock::GetText(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RichTextBlock.GetText");

	FGetText parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMaterialInstanceDynamic* URichTextBlock::GetDefaultDynamicMaterial(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RichTextBlock.GetDefaultDynamicMaterial");

	FGetDefaultDynamicMaterial parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct URichTextBlockDecorator* URichTextBlock::GetDecoratorByClass(URichTextBlockDecorator* DecoratorClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RichTextBlock.GetDecoratorByClass");

	FGetDecoratorByClass parms{};	
	parms.DecoratorClass = DecoratorClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void URichTextBlock::ClearAllDefaultStyleOverrides(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides");

	FClearAllDefaultStyleOverrides parms{};	

	ProcessEvent(fn, &parms);
}

void UWidget::SetVisibility(uint8_t Invisibility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.SetVisibility");

	FSetVisibility parms{};	
	parms.Invisibility = Invisibility;

	ProcessEvent(fn, &parms);
}

void UWidget::SetUserFocus(struct APlayerController* PlayerController){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.SetUserFocus");

	FSetUserFocus parms{};	
	parms.PlayerController = PlayerController;

	ProcessEvent(fn, &parms);
}

void UWidget::SetToolTipText(struct FText& InToolTipText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.SetToolTipText");

	FSetToolTipText parms{};	
	parms.InToolTipText = InToolTipText;

	ProcessEvent(fn, &parms);
}

void UWidget::SetToolTip(struct UWidget* Widget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.SetToolTip");

	FSetToolTip parms{};	
	parms.Widget = Widget;

	ProcessEvent(fn, &parms);
}

void UWidget::SetRenderTranslation(struct FVector2D Translation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTranslation");

	FSetRenderTranslation parms{};	
	parms.Translation = Translation;

	ProcessEvent(fn, &parms);
}

void UWidget::SetRenderTransformPivot(struct FVector2D Pivot){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransformPivot");

	FSetRenderTransformPivot parms{};	
	parms.Pivot = Pivot;

	ProcessEvent(fn, &parms);
}

void UWidget::SetRenderTransformAngle(float Angle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransformAngle");

	FSetRenderTransformAngle parms{};	
	parms.Angle = Angle;

	ProcessEvent(fn, &parms);
}

void UWidget::SetRenderTransform(struct FWidgetTransform InTransform){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransform");

	FSetRenderTransform parms{};	
	parms.InTransform = InTransform;

	ProcessEvent(fn, &parms);
}

void UWidget::SetRenderShear(struct FVector2D Shear){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderShear");

	FSetRenderShear parms{};	
	parms.Shear = Shear;

	ProcessEvent(fn, &parms);
}

void UWidget::SetRenderScale(struct FVector2D Scale){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderScale");

	FSetRenderScale parms{};	
	parms.Scale = Scale;

	ProcessEvent(fn, &parms);
}

void UWidget::SetRenderOpacity(float InOpacity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderOpacity");

	FSetRenderOpacity parms{};	
	parms.InOpacity = InOpacity;

	ProcessEvent(fn, &parms);
}

void UWidget::SetNavigationRuleExplicit(uint8_t Direction, struct UWidget* InWidget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleExplicit");

	FSetNavigationRuleExplicit parms{};	
	parms.Direction = Direction;
	parms.InWidget = InWidget;

	ProcessEvent(fn, &parms);
}

void UWidget::SetNavigationRuleCustomBoundary(uint8_t Direction, struct FDelegate InCustomDelegate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleCustomBoundary");

	FSetNavigationRuleCustomBoundary parms{};	
	parms.Direction = Direction;
	parms.InCustomDelegate = InCustomDelegate;

	ProcessEvent(fn, &parms);
}

void UWidget::SetNavigationRuleCustom(uint8_t Direction, struct FDelegate InCustomDelegate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleCustom");

	FSetNavigationRuleCustom parms{};	
	parms.Direction = Direction;
	parms.InCustomDelegate = InCustomDelegate;

	ProcessEvent(fn, &parms);
}

void UWidget::SetNavigationRuleBase(uint8_t Direction, uint8_t Rule){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleBase");

	FSetNavigationRuleBase parms{};	
	parms.Direction = Direction;
	parms.Rule = Rule;

	ProcessEvent(fn, &parms);
}

void UWidget::SetNavigationRule(uint8_t Direction, uint8_t Rule, struct FName WidgetToFocus){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRule");

	FSetNavigationRule parms{};	
	parms.Direction = Direction;
	parms.Rule = Rule;
	parms.WidgetToFocus = WidgetToFocus;

	ProcessEvent(fn, &parms);
}

void UWidget::SetKeyboardFocus(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.SetKeyboardFocus");

	FSetKeyboardFocus parms{};	

	ProcessEvent(fn, &parms);
}

void UWidget::SetIsEnabled(bool bInIsEnabled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.SetIsEnabled");

	FSetIsEnabled parms{};	
	parms.bInIsEnabled = bInIsEnabled;

	ProcessEvent(fn, &parms);
}

void UWidget::SetFocus(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.SetFocus");

	FSetFocus parms{};	

	ProcessEvent(fn, &parms);
}

void UWidget::SetCursor(enum class EMouseCursor InCursor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.SetCursor");

	FSetCursor parms{};	
	parms.InCursor = InCursor;

	ProcessEvent(fn, &parms);
}

void UWidget::SetClipping(uint8_t InClipping){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.SetClipping");

	FSetClipping parms{};	
	parms.InClipping = InClipping;

	ProcessEvent(fn, &parms);
}

void UWidget::SetAllNavigationRules(uint8_t Rule, struct FName WidgetToFocus){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.SetAllNavigationRules");

	FSetAllNavigationRules parms{};	
	parms.Rule = Rule;
	parms.WidgetToFocus = WidgetToFocus;

	ProcessEvent(fn, &parms);
}

void UWidget::ResetCursor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.ResetCursor");

	FResetCursor parms{};	

	ProcessEvent(fn, &parms);
}

void UWidget::RemoveFromParent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.RemoveFromParent");

	FRemoveFromParent parms{};	

	ProcessEvent(fn, &parms);
}

struct FEventReply UWidget::OnReply__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.OnReply__DelegateSignature");

	FOnReply__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UWidget::OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature");

	FOnPointerEvent__DelegateSignature parms{};	
	parms.MyGeometry = MyGeometry;
	parms.MouseEvent = MouseEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWidget::K2_RemoveFieldValueChangedDelegate(struct FFieldNotificationId FieldId, struct FDelegate Delegate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.K2_RemoveFieldValueChangedDelegate");

	FK2_RemoveFieldValueChangedDelegate parms{};	
	parms.FieldId = FieldId;
	parms.Delegate = Delegate;

	ProcessEvent(fn, &parms);
}

void UWidget::K2_BroadcastFieldValueChanged(struct FFieldNotificationId FieldId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.K2_BroadcastFieldValueChanged");

	FK2_BroadcastFieldValueChanged parms{};	
	parms.FieldId = FieldId;

	ProcessEvent(fn, &parms);
}

void UWidget::K2_AddFieldValueChangedDelegate(struct FFieldNotificationId FieldId, struct FDelegate Delegate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.K2_AddFieldValueChangedDelegate");

	FK2_AddFieldValueChangedDelegate parms{};	
	parms.FieldId = FieldId;
	parms.Delegate = Delegate;

	ProcessEvent(fn, &parms);
}

bool UWidget::IsVisible(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.IsVisible");

	FIsVisible parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWidget::IsRendered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.IsRendered");

	FIsRendered parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWidget::IsInViewport(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.IsInViewport");

	FIsInViewport parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWidget::IsHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.IsHovered");

	FIsHovered parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWidget::InvalidateLayoutAndVolatility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.InvalidateLayoutAndVolatility");

	FInvalidateLayoutAndVolatility parms{};	

	ProcessEvent(fn, &parms);
}

bool UWidget::HasUserFocusedDescendants(struct APlayerController* PlayerController){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.HasUserFocusedDescendants");

	FHasUserFocusedDescendants parms{};	
	parms.PlayerController = PlayerController;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWidget::HasUserFocus(struct APlayerController* PlayerController){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.HasUserFocus");

	FHasUserFocus parms{};	
	parms.PlayerController = PlayerController;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWidget::HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.HasMouseCaptureByUser");

	FHasMouseCaptureByUser parms{};	
	parms.UserIndex = UserIndex;
	parms.PointerIndex = PointerIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWidget::HasMouseCapture(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.HasMouseCapture");

	FHasMouseCapture parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWidget::HasKeyboardFocus(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.HasKeyboardFocus");

	FHasKeyboardFocus parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWidget::HasFocusedDescendants(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.HasFocusedDescendants");

	FHasFocusedDescendants parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWidget::HasAnyUserFocus(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.HasAnyUserFocus");

	FHasAnyUserFocus parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWidget* UWidget::GetWidget__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetWidget__DelegateSignature");

	FGetWidget__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UWidget::GetVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.GetVisibility");

	FGetVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGeometry UWidget::GetTickSpaceGeometry(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.GetTickSpaceGeometry");

	FGetTickSpaceGeometry parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UWidget::GetText__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetText__DelegateSignature");

	FGetText__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UWidget::GetSlateVisibility__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature");

	FGetSlateVisibility__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSlateColor UWidget::GetSlateColor__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature");

	FGetSlateColor__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSlateBrush UWidget::GetSlateBrush__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature");

	FGetSlateBrush__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UWidget::GetRenderTransformAngle(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.GetRenderTransformAngle");

	FGetRenderTransformAngle parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UWidget::GetRenderOpacity(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.GetRenderOpacity");

	FGetRenderOpacity parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UPanelWidget* UWidget::GetParent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.GetParent");

	FGetParent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGeometry UWidget::GetPaintSpaceGeometry(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.GetPaintSpaceGeometry");

	FGetPaintSpaceGeometry parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct APlayerController* UWidget::GetOwningPlayer(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.GetOwningPlayer");

	FGetOwningPlayer parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct ULocalPlayer* UWidget::GetOwningLocalPlayer(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.GetOwningLocalPlayer");

	FGetOwningLocalPlayer parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

enum class EMouseCursor UWidget::GetMouseCursor__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature");

	FGetMouseCursor__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FLinearColor UWidget::GetLinearColor__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature");

	FGetLinearColor__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWidget::GetIsEnabled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.GetIsEnabled");

	FGetIsEnabled parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UWidget::GetInt32__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetInt32__DelegateSignature");

	FGetInt32__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UGameInstance* UWidget::GetGameInstance(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.GetGameInstance");

	FGetGameInstance parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UWidget::GetFloat__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetFloat__DelegateSignature");

	FGetFloat__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D UWidget::GetDesiredSize(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.GetDesiredSize");

	FGetDesiredSize parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UWidget::GetClipping(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.GetClipping");

	FGetClipping parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UWidget::GetCheckBoxState__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature");

	FGetCheckBoxState__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGeometry UWidget::GetCachedGeometry(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.GetCachedGeometry");

	FGetCachedGeometry parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWidget::GetBool__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetBool__DelegateSignature");

	FGetBool__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UWidget::GetAccessibleText(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.GetAccessibleText");

	FGetAccessibleText parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UWidget::GetAccessibleSummaryText(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.GetAccessibleSummaryText");

	FGetAccessibleSummaryText parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWidget* UWidget::GenerateWidgetForString__DelegateSignature(struct FString Item){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature");

	FGenerateWidgetForString__DelegateSignature parms{};	
	parms.Item = Item;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWidget* UWidget::GenerateWidgetForObject__DelegateSignature(struct UObject* Item){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature");

	FGenerateWidgetForObject__DelegateSignature parms{};	
	parms.Item = Item;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWidget::ForceVolatile(bool bForce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.ForceVolatile");

	FForceVolatile parms{};	
	parms.bForce = bForce;

	ProcessEvent(fn, &parms);
}

void UWidget::ForceLayoutPrepass(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Widget.ForceLayoutPrepass");

	FForceLayoutPrepass parms{};	

	ProcessEvent(fn, &parms);
}

void UScaleBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetVerticalAlignment");

	FSetVerticalAlignment parms{};	
	parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(fn, &parms);
}

void UScaleBoxSlot::SetPadding(struct FMargin InPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetPadding");

	FSetPadding parms{};	
	parms.InPadding = InPadding;

	ProcessEvent(fn, &parms);
}

void UScaleBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetHorizontalAlignment");

	FSetHorizontalAlignment parms{};	
	parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(fn, &parms);
}

void USizeBox::SetWidthOverride(float InWidthOverride){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SizeBox.SetWidthOverride");

	FSetWidthOverride parms{};	
	parms.InWidthOverride = InWidthOverride;

	ProcessEvent(fn, &parms);
}

void USizeBox::SetMinDesiredWidth(float InMinDesiredWidth){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinDesiredWidth");

	FSetMinDesiredWidth parms{};	
	parms.InMinDesiredWidth = InMinDesiredWidth;

	ProcessEvent(fn, &parms);
}

void USizeBox::SetMinDesiredHeight(float InMinDesiredHeight){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinDesiredHeight");

	FSetMinDesiredHeight parms{};	
	parms.InMinDesiredHeight = InMinDesiredHeight;

	ProcessEvent(fn, &parms);
}

void USizeBox::SetMinAspectRatio(float InMinAspectRatio){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinAspectRatio");

	FSetMinAspectRatio parms{};	
	parms.InMinAspectRatio = InMinAspectRatio;

	ProcessEvent(fn, &parms);
}

void USizeBox::SetMaxDesiredWidth(float InMaxDesiredWidth){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxDesiredWidth");

	FSetMaxDesiredWidth parms{};	
	parms.InMaxDesiredWidth = InMaxDesiredWidth;

	ProcessEvent(fn, &parms);
}

void USizeBox::SetMaxDesiredHeight(float InMaxDesiredHeight){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxDesiredHeight");

	FSetMaxDesiredHeight parms{};	
	parms.InMaxDesiredHeight = InMaxDesiredHeight;

	ProcessEvent(fn, &parms);
}

void USizeBox::SetMaxAspectRatio(float InMaxAspectRatio){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxAspectRatio");

	FSetMaxAspectRatio parms{};	
	parms.InMaxAspectRatio = InMaxAspectRatio;

	ProcessEvent(fn, &parms);
}

void USizeBox::SetHeightOverride(float InHeightOverride){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SizeBox.SetHeightOverride");

	FSetHeightOverride parms{};	
	parms.InHeightOverride = InHeightOverride;

	ProcessEvent(fn, &parms);
}

void USizeBox::ClearWidthOverride(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearWidthOverride");

	FClearWidthOverride parms{};	

	ProcessEvent(fn, &parms);
}

void USizeBox::ClearMinDesiredWidth(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinDesiredWidth");

	FClearMinDesiredWidth parms{};	

	ProcessEvent(fn, &parms);
}

void USizeBox::ClearMinDesiredHeight(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinDesiredHeight");

	FClearMinDesiredHeight parms{};	

	ProcessEvent(fn, &parms);
}

void USizeBox::ClearMinAspectRatio(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinAspectRatio");

	FClearMinAspectRatio parms{};	

	ProcessEvent(fn, &parms);
}

void USizeBox::ClearMaxDesiredWidth(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxDesiredWidth");

	FClearMaxDesiredWidth parms{};	

	ProcessEvent(fn, &parms);
}

void USizeBox::ClearMaxDesiredHeight(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxDesiredHeight");

	FClearMaxDesiredHeight parms{};	

	ProcessEvent(fn, &parms);
}

void USizeBox::ClearMaxAspectRatio(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxAspectRatio");

	FClearMaxAspectRatio parms{};	

	ProcessEvent(fn, &parms);
}

void USizeBox::ClearHeightOverride(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearHeightOverride");

	FClearHeightOverride parms{};	

	ProcessEvent(fn, &parms);
}

void UBorder::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Border.SetVerticalAlignment");

	FSetVerticalAlignment parms{};	
	parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(fn, &parms);
}

void UBorder::SetShowEffectWhenDisabled(bool bInShowEffectWhenDisabled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Border.SetShowEffectWhenDisabled");

	FSetShowEffectWhenDisabled parms{};	
	parms.bInShowEffectWhenDisabled = bInShowEffectWhenDisabled;

	ProcessEvent(fn, &parms);
}

void UBorder::SetPadding(struct FMargin InPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Border.SetPadding");

	FSetPadding parms{};	
	parms.InPadding = InPadding;

	ProcessEvent(fn, &parms);
}

void UBorder::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Border.SetHorizontalAlignment");

	FSetHorizontalAlignment parms{};	
	parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(fn, &parms);
}

void UBorder::SetDesiredSizeScale(struct FVector2D InScale){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Border.SetDesiredSizeScale");

	FSetDesiredSizeScale parms{};	
	parms.InScale = InScale;

	ProcessEvent(fn, &parms);
}

void UBorder::SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Border.SetContentColorAndOpacity");

	FSetContentColorAndOpacity parms{};	
	parms.InContentColorAndOpacity = InContentColorAndOpacity;

	ProcessEvent(fn, &parms);
}

void UBorder::SetBrushFromTexture(struct UTexture2D* Texture){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromTexture");

	FSetBrushFromTexture parms{};	
	parms.Texture = Texture;

	ProcessEvent(fn, &parms);
}

void UBorder::SetBrushFromMaterial(struct UMaterialInterface* Material){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromMaterial");

	FSetBrushFromMaterial parms{};	
	parms.Material = Material;

	ProcessEvent(fn, &parms);
}

void UBorder::SetBrushFromAsset(struct USlateBrushAsset* Asset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromAsset");

	FSetBrushFromAsset parms{};	
	parms.Asset = Asset;

	ProcessEvent(fn, &parms);
}

void UBorder::SetBrushColor(struct FLinearColor InBrushColor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Border.SetBrushColor");

	FSetBrushColor parms{};	
	parms.InBrushColor = InBrushColor;

	ProcessEvent(fn, &parms);
}

void UBorder::SetBrush(struct FSlateBrush& InBrush){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Border.SetBrush");

	FSetBrush parms{};	
	parms.InBrush = InBrush;

	ProcessEvent(fn, &parms);
}

struct UMaterialInstanceDynamic* UBorder::GetDynamicMaterial(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Border.GetDynamicMaterial");

	FGetDynamicMaterial parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USlider::SetValue(float InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Slider.SetValue");

	FSetValue parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void USlider::SetStepSize(float InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Slider.SetStepSize");

	FSetStepSize parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void USlider::SetSliderHandleColor(struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Slider.SetSliderHandleColor");

	FSetSliderHandleColor parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void USlider::SetSliderBarColor(struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Slider.SetSliderBarColor");

	FSetSliderBarColor parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void USlider::SetMinValue(float InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Slider.SetMinValue");

	FSetMinValue parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void USlider::SetMaxValue(float InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Slider.SetMaxValue");

	FSetMaxValue parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void USlider::SetLocked(bool InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Slider.SetLocked");

	FSetLocked parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void USlider::SetIndentHandle(bool InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Slider.SetIndentHandle");

	FSetIndentHandle parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

float USlider::GetValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Slider.GetValue");

	FGetValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float USlider::GetNormalizedValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Slider.GetNormalizedValue");

	FGetNormalizedValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UUserListEntry::BP_OnItemSelectionChanged(bool bIsSelected){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserListEntry.BP_OnItemSelectionChanged");

	FBP_OnItemSelectionChanged parms{};	
	parms.bIsSelected = bIsSelected;

	ProcessEvent(fn, &parms);
}

void UUserListEntry::BP_OnItemExpansionChanged(bool bIsExpanded){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserListEntry.BP_OnItemExpansionChanged");

	FBP_OnItemExpansionChanged parms{};	
	parms.bIsExpanded = bIsExpanded;

	ProcessEvent(fn, &parms);
}

void UUserListEntry::BP_OnEntryReleased(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserListEntry.BP_OnEntryReleased");

	FBP_OnEntryReleased parms{};	

	ProcessEvent(fn, &parms);
}

bool UPanelWidget::RemoveChildAt(int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.PanelWidget.RemoveChildAt");

	FRemoveChildAt parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UPanelWidget::RemoveChild(struct UWidget* Content){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.PanelWidget.RemoveChild");

	FRemoveChild parms{};	
	parms.Content = Content;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UPanelWidget::HasChild(struct UWidget* Content){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.PanelWidget.HasChild");

	FHasChild parms{};	
	parms.Content = Content;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UPanelWidget::HasAnyChildren(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.PanelWidget.HasAnyChildren");

	FHasAnyChildren parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UPanelWidget::GetChildrenCount(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildrenCount");

	FGetChildrenCount parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UPanelWidget::GetChildIndex(struct UWidget* Content){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildIndex");

	FGetChildIndex parms{};	
	parms.Content = Content;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWidget* UPanelWidget::GetChildAt(int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildAt");

	FGetChildAt parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UWidget*> UPanelWidget::GetAllChildren(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetAllChildren");

	FGetAllChildren parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UPanelWidget::ClearChildren(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.PanelWidget.ClearChildren");

	FClearChildren parms{};	

	ProcessEvent(fn, &parms);
}

struct UPanelSlot* UPanelWidget::AddChild(struct UWidget* Content){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.PanelWidget.AddChild");

	FAddChild parms{};	
	parms.Content = Content;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWidgetSwitcher::SetActiveWidgetIndex(int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.SetActiveWidgetIndex");

	FSetActiveWidgetIndex parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);
}

void UWidgetSwitcher::SetActiveWidget(struct UWidget* Widget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.SetActiveWidget");

	FSetActiveWidget parms{};	
	parms.Widget = Widget;

	ProcessEvent(fn, &parms);
}

struct UWidget* UWidgetSwitcher::GetWidgetAtIndex(int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetWidgetAtIndex");

	FGetWidgetAtIndex parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UWidgetSwitcher::GetNumWidgets(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetNumWidgets");

	FGetNumWidgets parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UWidgetSwitcher::GetActiveWidgetIndex(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetActiveWidgetIndex");

	FGetActiveWidgetIndex parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWidget* UWidgetSwitcher::GetActiveWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetActiveWidget");

	FGetActiveWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UPanelSlot* UContentWidget::SetContent(struct UWidget* Content){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ContentWidget.SetContent");

	FSetContent parms{};	
	parms.Content = Content;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UPanelSlot* UContentWidget::GetContentSlot(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ContentWidget.GetContentSlot");

	FGetContentSlot parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWidget* UContentWidget::GetContent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ContentWidget.GetContent");

	FGetContent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UButton::SetTouchMethod(enum class EButtonTouchMethod InTouchMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Button.SetTouchMethod");

	FSetTouchMethod parms{};	
	parms.InTouchMethod = InTouchMethod;

	ProcessEvent(fn, &parms);
}

void UButton::SetStyle(struct FButtonStyle& InStyle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Button.SetStyle");

	FSetStyle parms{};	
	parms.InStyle = InStyle;

	ProcessEvent(fn, &parms);
}

void UButton::SetPressMethod(enum class EButtonPressMethod InPressMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Button.SetPressMethod");

	FSetPressMethod parms{};	
	parms.InPressMethod = InPressMethod;

	ProcessEvent(fn, &parms);
}

void UButton::SetColorAndOpacity(struct FLinearColor InColorAndOpacity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Button.SetColorAndOpacity");

	FSetColorAndOpacity parms{};	
	parms.InColorAndOpacity = InColorAndOpacity;

	ProcessEvent(fn, &parms);
}

void UButton::SetClickMethod(enum class EButtonClickMethod InClickMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Button.SetClickMethod");

	FSetClickMethod parms{};	
	parms.InClickMethod = InClickMethod;

	ProcessEvent(fn, &parms);
}

void UButton::SetBackgroundColor(struct FLinearColor InBackgroundColor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Button.SetBackgroundColor");

	FSetBackgroundColor parms{};	
	parms.InBackgroundColor = InBackgroundColor;

	ProcessEvent(fn, &parms);
}

bool UButton::IsPressed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Button.IsPressed");

	FIsPressed parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UFloatBinding::GetValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.FloatBinding.GetValue");

	FGetValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UTextLayoutWidget::SetJustification(enum class ETextJustify InJustification){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TextLayoutWidget.SetJustification");

	FSetJustification parms{};	
	parms.InJustification = InJustification;

	ProcessEvent(fn, &parms);
}

void UImage::SetOpacity(float InOpacity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Image.SetOpacity");

	FSetOpacity parms{};	
	parms.InOpacity = InOpacity;

	ProcessEvent(fn, &parms);
}

void UImage::SetDesiredSizeOverride(struct FVector2D DesiredSize){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Image.SetDesiredSizeOverride");

	FSetDesiredSizeOverride parms{};	
	parms.DesiredSize = DesiredSize;

	ProcessEvent(fn, &parms);
}

void UImage::SetColorAndOpacity(struct FLinearColor InColorAndOpacity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Image.SetColorAndOpacity");

	FSetColorAndOpacity parms{};	
	parms.InColorAndOpacity = InColorAndOpacity;

	ProcessEvent(fn, &parms);
}

void UImage::SetBrushTintColor(struct FSlateColor TintColor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Image.SetBrushTintColor");

	FSetBrushTintColor parms{};	
	parms.TintColor = TintColor;

	ProcessEvent(fn, &parms);
}

void UImage::SetBrushResourceObject(struct UObject* ResourceObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Image.SetBrushResourceObject");

	FSetBrushResourceObject parms{};	
	parms.ResourceObject = ResourceObject;

	ProcessEvent(fn, &parms);
}

void UImage::SetBrushFromTextureDynamic(struct UTexture2DDynamic* Texture, bool bMatchSize){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromTextureDynamic");

	FSetBrushFromTextureDynamic parms{};	
	parms.Texture = Texture;
	parms.bMatchSize = bMatchSize;

	ProcessEvent(fn, &parms);
}

void UImage::SetBrushFromTexture(struct UTexture2D* Texture, bool bMatchSize){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromTexture");

	FSetBrushFromTexture parms{};	
	parms.Texture = Texture;
	parms.bMatchSize = bMatchSize;

	ProcessEvent(fn, &parms);
}

void UImage::SetBrushFromSoftTexture(struct TSoftObjectPtr<UTexture2D> SoftTexture, bool bMatchSize){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromSoftTexture");

	FSetBrushFromSoftTexture parms{};	
	parms.SoftTexture = SoftTexture;
	parms.bMatchSize = bMatchSize;

	ProcessEvent(fn, &parms);
}

void UImage::SetBrushFromSoftMaterial(struct TSoftObjectPtr<UMaterialInterface> SoftMaterial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromSoftMaterial");

	FSetBrushFromSoftMaterial parms{};	
	parms.SoftMaterial = SoftMaterial;

	ProcessEvent(fn, &parms);
}

void UImage::SetBrushFromMaterial(struct UMaterialInterface* Material){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromMaterial");

	FSetBrushFromMaterial parms{};	
	parms.Material = Material;

	ProcessEvent(fn, &parms);
}

void UImage::SetBrushFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromAtlasInterface");

	FSetBrushFromAtlasInterface parms{};	
	parms.AtlasRegion = AtlasRegion;
	parms.bMatchSize = bMatchSize;

	ProcessEvent(fn, &parms);
}

void UImage::SetBrushFromAsset(struct USlateBrushAsset* Asset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromAsset");

	FSetBrushFromAsset parms{};	
	parms.Asset = Asset;

	ProcessEvent(fn, &parms);
}

void UImage::SetBrush(struct FSlateBrush& InBrush){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Image.SetBrush");

	FSetBrush parms{};	
	parms.InBrush = InBrush;

	ProcessEvent(fn, &parms);
}

struct UMaterialInstanceDynamic* UImage::GetDynamicMaterial(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Image.GetDynamicMaterial");

	FGetDynamicMaterial parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWidgetSwitcherSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetVerticalAlignment");

	FSetVerticalAlignment parms{};	
	parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(fn, &parms);
}

void UWidgetSwitcherSlot::SetPadding(struct FMargin InPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetPadding");

	FSetPadding parms{};	
	parms.InPadding = InPadding;

	ProcessEvent(fn, &parms);
}

void UWidgetSwitcherSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment");

	FSetHorizontalAlignment parms{};	
	parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(fn, &parms);
}

void UTextBlock::SetTextTransformPolicy(uint8_t InTransformPolicy){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TextBlock.SetTextTransformPolicy");

	FSetTextTransformPolicy parms{};	
	parms.InTransformPolicy = InTransformPolicy;

	ProcessEvent(fn, &parms);
}

void UTextBlock::SetTextOverflowPolicy(uint8_t InOverflowPolicy){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TextBlock.SetTextOverflowPolicy");

	FSetTextOverflowPolicy parms{};	
	parms.InOverflowPolicy = InOverflowPolicy;

	ProcessEvent(fn, &parms);
}

void UTextBlock::SetText(struct FText InText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TextBlock.SetText");

	FSetText parms{};	
	parms.InText = InText;

	ProcessEvent(fn, &parms);
}

void UTextBlock::SetStrikeBrush(struct FSlateBrush InStrikeBrush){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TextBlock.SetStrikeBrush");

	FSetStrikeBrush parms{};	
	parms.InStrikeBrush = InStrikeBrush;

	ProcessEvent(fn, &parms);
}

void UTextBlock::SetShadowOffset(struct FVector2D InShadowOffset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TextBlock.SetShadowOffset");

	FSetShadowOffset parms{};	
	parms.InShadowOffset = InShadowOffset;

	ProcessEvent(fn, &parms);
}

void UTextBlock::SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TextBlock.SetShadowColorAndOpacity");

	FSetShadowColorAndOpacity parms{};	
	parms.InShadowColorAndOpacity = InShadowColorAndOpacity;

	ProcessEvent(fn, &parms);
}

void UTextBlock::SetOpacity(float InOpacity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TextBlock.SetOpacity");

	FSetOpacity parms{};	
	parms.InOpacity = InOpacity;

	ProcessEvent(fn, &parms);
}

void UTextBlock::SetMinDesiredWidth(float InMinDesiredWidth){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TextBlock.SetMinDesiredWidth");

	FSetMinDesiredWidth parms{};	
	parms.InMinDesiredWidth = InMinDesiredWidth;

	ProcessEvent(fn, &parms);
}

void UTextBlock::SetFontOutlineMaterial(struct UMaterialInterface* InMaterial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TextBlock.SetFontOutlineMaterial");

	FSetFontOutlineMaterial parms{};	
	parms.InMaterial = InMaterial;

	ProcessEvent(fn, &parms);
}

void UTextBlock::SetFontMaterial(struct UMaterialInterface* InMaterial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TextBlock.SetFontMaterial");

	FSetFontMaterial parms{};	
	parms.InMaterial = InMaterial;

	ProcessEvent(fn, &parms);
}

void UTextBlock::SetFont(struct FSlateFontInfo InFontInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TextBlock.SetFont");

	FSetFont parms{};	
	parms.InFontInfo = InFontInfo;

	ProcessEvent(fn, &parms);
}

void UTextBlock::SetColorAndOpacity(struct FSlateColor InColorAndOpacity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TextBlock.SetColorAndOpacity");

	FSetColorAndOpacity parms{};	
	parms.InColorAndOpacity = InColorAndOpacity;

	ProcessEvent(fn, &parms);
}

void UTextBlock::SetAutoWrapText(bool InAutoTextWrap){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TextBlock.SetAutoWrapText");

	FSetAutoWrapText parms{};	
	parms.InAutoTextWrap = InAutoTextWrap;

	ProcessEvent(fn, &parms);
}

struct FText UTextBlock::GetText(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TextBlock.GetText");

	FGetText parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMaterialInstanceDynamic* UTextBlock::GetDynamicOutlineMaterial(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TextBlock.GetDynamicOutlineMaterial");

	FGetDynamicOutlineMaterial parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMaterialInstanceDynamic* UTextBlock::GetDynamicFontMaterial(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TextBlock.GetDynamicFontMaterial");

	FGetDynamicFontMaterial parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UScrollBox::SetWheelScrollMultiplier(float NewWheelScrollMultiplier){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetWheelScrollMultiplier");

	FSetWheelScrollMultiplier parms{};	
	parms.NewWheelScrollMultiplier = NewWheelScrollMultiplier;

	ProcessEvent(fn, &parms);
}

void UScrollBox::SetScrollWhenFocusChanges(uint8_t NewScrollWhenFocusChanges){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollWhenFocusChanges");

	FSetScrollWhenFocusChanges parms{};	
	parms.NewScrollWhenFocusChanges = NewScrollWhenFocusChanges;

	ProcessEvent(fn, &parms);
}

void UScrollBox::SetScrollOffset(float NewScrollOffset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollOffset");

	FSetScrollOffset parms{};	
	parms.NewScrollOffset = NewScrollOffset;

	ProcessEvent(fn, &parms);
}

void UScrollBox::SetScrollBarVisibility(uint8_t NewScrollBarVisibility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollBarVisibility");

	FSetScrollBarVisibility parms{};	
	parms.NewScrollBarVisibility = NewScrollBarVisibility;

	ProcessEvent(fn, &parms);
}

void UScrollBox::SetScrollbarThickness(struct FVector2D& NewScrollbarThickness){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollbarThickness");

	FSetScrollbarThickness parms{};	
	parms.NewScrollbarThickness = NewScrollbarThickness;

	ProcessEvent(fn, &parms);
}

void UScrollBox::SetScrollbarPadding(struct FMargin& NewScrollbarPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollbarPadding");

	FSetScrollbarPadding parms{};	
	parms.NewScrollbarPadding = NewScrollbarPadding;

	ProcessEvent(fn, &parms);
}

void UScrollBox::SetOrientation(enum class EOrientation NewOrientation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetOrientation");

	FSetOrientation parms{};	
	parms.NewOrientation = NewOrientation;

	ProcessEvent(fn, &parms);
}

void UScrollBox::SetNavigationDestination(uint8_t NewNavigationDestination){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetNavigationDestination");

	FSetNavigationDestination parms{};	
	parms.NewNavigationDestination = NewNavigationDestination;

	ProcessEvent(fn, &parms);
}

void UScrollBox::SetConsumeMouseWheel(uint8_t NewConsumeMouseWheel){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetConsumeMouseWheel");

	FSetConsumeMouseWheel parms{};	
	parms.NewConsumeMouseWheel = NewConsumeMouseWheel;

	ProcessEvent(fn, &parms);
}

void UScrollBox::SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAnimateWheelScrolling");

	FSetAnimateWheelScrolling parms{};	
	parms.bShouldAnimateWheelScrolling = bShouldAnimateWheelScrolling;

	ProcessEvent(fn, &parms);
}

void UScrollBox::SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAlwaysShowScrollbar");

	FSetAlwaysShowScrollbar parms{};	
	parms.NewAlwaysShowScrollbar = NewAlwaysShowScrollbar;

	ProcessEvent(fn, &parms);
}

void UScrollBox::SetAllowOverscroll(bool NewAllowOverscroll){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAllowOverscroll");

	FSetAllowOverscroll parms{};	
	parms.NewAllowOverscroll = NewAllowOverscroll;

	ProcessEvent(fn, &parms);
}

void UScrollBox::ScrollWidgetIntoView(struct UWidget* WidgetToFind, bool AnimateScroll, uint8_t ScrollDestination, float Padding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollWidgetIntoView");

	FScrollWidgetIntoView parms{};	
	parms.WidgetToFind = WidgetToFind;
	parms.AnimateScroll = AnimateScroll;
	parms.ScrollDestination = ScrollDestination;
	parms.Padding = Padding;

	ProcessEvent(fn, &parms);
}

void UScrollBox::ScrollToStart(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollToStart");

	FScrollToStart parms{};	

	ProcessEvent(fn, &parms);
}

void UScrollBox::ScrollToEnd(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollToEnd");

	FScrollToEnd parms{};	

	ProcessEvent(fn, &parms);
}

float UScrollBox::GetViewOffsetFraction(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetViewOffsetFraction");

	FGetViewOffsetFraction parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UScrollBox::GetViewFraction(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetViewFraction");

	FGetViewFraction parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UScrollBox::GetScrollOffsetOfEnd(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetScrollOffsetOfEnd");

	FGetScrollOffsetOfEnd parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UScrollBox::GetScrollOffset(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetScrollOffset");

	FGetScrollOffset parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UScrollBox::EndInertialScrolling(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScrollBox.EndInertialScrolling");

	FEndInertialScrolling parms{};	

	ProcessEvent(fn, &parms);
}

void UMultiLineEditableTextBox::SetTextStyle(struct FTextBlockStyle& InTextStyle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetTextStyle");

	FSetTextStyle parms{};	
	parms.InTextStyle = InTextStyle;

	ProcessEvent(fn, &parms);
}

void UMultiLineEditableTextBox::SetText(struct FText InText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetText");

	FSetText parms{};	
	parms.InText = InText;

	ProcessEvent(fn, &parms);
}

void UMultiLineEditableTextBox::SetIsReadOnly(bool bReadOnly){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetIsReadOnly");

	FSetIsReadOnly parms{};	
	parms.bReadOnly = bReadOnly;

	ProcessEvent(fn, &parms);
}

void UMultiLineEditableTextBox::SetHintText(struct FText InHintText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetHintText");

	FSetHintText parms{};	
	parms.InHintText = InHintText;

	ProcessEvent(fn, &parms);
}

void UMultiLineEditableTextBox::SetForegroundColor(struct FLinearColor Color){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetForegroundColor");

	FSetForegroundColor parms{};	
	parms.Color = Color;

	ProcessEvent(fn, &parms);
}

void UMultiLineEditableTextBox::SetError(struct FText InError){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetError");

	FSetError parms{};	
	parms.InError = InError;

	ProcessEvent(fn, &parms);
}

void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");

	FOnMultiLineEditableTextBoxCommittedEvent__DelegateSignature parms{};	
	parms.Text = Text;
	parms.CommitMethod = CommitMethod;

	ProcessEvent(fn, &parms);
}

void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	FOnMultiLineEditableTextBoxChangedEvent__DelegateSignature parms{};	
	parms.Text = Text;

	ProcessEvent(fn, &parms);
}

struct FText UMultiLineEditableTextBox::GetText(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.GetText");

	FGetText parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UMultiLineEditableTextBox::GetHintText(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.GetHintText");

	FGetHintText parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UListViewBase::SetWheelScrollMultiplier(float NewWheelScrollMultiplier){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListViewBase.SetWheelScrollMultiplier");

	FSetWheelScrollMultiplier parms{};	
	parms.NewWheelScrollMultiplier = NewWheelScrollMultiplier;

	ProcessEvent(fn, &parms);
}

void UListViewBase::SetScrollOffset(float InScrollOffset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListViewBase.SetScrollOffset");

	FSetScrollOffset parms{};	
	parms.InScrollOffset = InScrollOffset;

	ProcessEvent(fn, &parms);
}

void UListViewBase::SetScrollBarVisibility(uint8_t Invisibility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListViewBase.SetScrollBarVisibility");

	FSetScrollBarVisibility parms{};	
	parms.Invisibility = Invisibility;

	ProcessEvent(fn, &parms);
}

void UListViewBase::ScrollToTop(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListViewBase.ScrollToTop");

	FScrollToTop parms{};	

	ProcessEvent(fn, &parms);
}

void UListViewBase::ScrollToBottom(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListViewBase.ScrollToBottom");

	FScrollToBottom parms{};	

	ProcessEvent(fn, &parms);
}

void UListViewBase::RequestRefresh(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListViewBase.RequestRefresh");

	FRequestRefresh parms{};	

	ProcessEvent(fn, &parms);
}

void UListViewBase::RegenerateAllEntries(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListViewBase.RegenerateAllEntries");

	FRegenerateAllEntries parms{};	

	ProcessEvent(fn, &parms);
}

float UListViewBase::GetScrollOffset(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListViewBase.GetScrollOffset");

	FGetScrollOffset parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UUserWidget*> UListViewBase::GetDisplayedEntryWidgets(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListViewBase.GetDisplayedEntryWidgets");

	FGetDisplayedEntryWidgets parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UListView::SetSelectionMode(enum class ESelectionMode SelectionMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListView.SetSelectionMode");

	FSetSelectionMode parms{};	
	parms.SelectionMode = SelectionMode;

	ProcessEvent(fn, &parms);
}

void UListView::SetSelectedIndex(int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListView.SetSelectedIndex");

	FSetSelectedIndex parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);
}

void UListView::ScrollIndexIntoView(int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListView.ScrollIndexIntoView");

	FScrollIndexIntoView parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);
}

void UListView::RemoveItem(struct UObject* Item){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListView.RemoveItem");

	FRemoveItem parms{};	
	parms.Item = Item;

	ProcessEvent(fn, &parms);
}

void UListView::OnListItemOuterEndPlayed(struct AActor* ItemOuter, enum class EEndPlayReason EndPlayReason){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListView.OnListItemOuterEndPlayed");

	FOnListItemOuterEndPlayed parms{};	
	parms.ItemOuter = ItemOuter;
	parms.EndPlayReason = EndPlayReason;

	ProcessEvent(fn, &parms);
}

void UListView::OnListItemEndPlayed(struct AActor* Item, enum class EEndPlayReason EndPlayReason){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListView.OnListItemEndPlayed");

	FOnListItemEndPlayed parms{};	
	parms.Item = Item;
	parms.EndPlayReason = EndPlayReason;

	ProcessEvent(fn, &parms);
}

void UListView::NavigateToIndex(int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListView.NavigateToIndex");

	FNavigateToIndex parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);
}

bool UListView::IsRefreshPending(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListView.IsRefreshPending");

	FIsRefreshPending parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UListView::GetNumItems(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListView.GetNumItems");

	FGetNumItems parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UObject*> UListView::GetListItems(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListView.GetListItems");

	FGetListItems parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UObject* UListView::GetItemAt(int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListView.GetItemAt");

	FGetItemAt parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UListView::GetIndexForItem(struct UObject* Item){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListView.GetIndexForItem");

	FGetIndexForItem parms{};	
	parms.Item = Item;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UListView::ClearListItems(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListView.ClearListItems");

	FClearListItems parms{};	

	ProcessEvent(fn, &parms);
}

void UListView::BP_SetSelectedItem(struct UObject* Item){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListView.BP_SetSelectedItem");

	FBP_SetSelectedItem parms{};	
	parms.Item = Item;

	ProcessEvent(fn, &parms);
}

void UListView::BP_SetListItems(struct TArray<struct UObject*>& InListItems){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListView.BP_SetListItems");

	FBP_SetListItems parms{};	
	parms.InListItems = InListItems;

	ProcessEvent(fn, &parms);
}

void UListView::BP_SetItemSelection(struct UObject* Item, bool bSelected){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListView.BP_SetItemSelection");

	FBP_SetItemSelection parms{};	
	parms.Item = Item;
	parms.bSelected = bSelected;

	ProcessEvent(fn, &parms);
}

void UListView::BP_ScrollItemIntoView(struct UObject* Item){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListView.BP_ScrollItemIntoView");

	FBP_ScrollItemIntoView parms{};	
	parms.Item = Item;

	ProcessEvent(fn, &parms);
}

void UListView::BP_NavigateToItem(struct UObject* Item){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListView.BP_NavigateToItem");

	FBP_NavigateToItem parms{};	
	parms.Item = Item;

	ProcessEvent(fn, &parms);
}

bool UListView::BP_IsItemVisible(struct UObject* Item){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListView.BP_IsItemVisible");

	FBP_IsItemVisible parms{};	
	parms.Item = Item;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UListView::BP_GetSelectedItems(struct TArray<struct UObject*>& Items){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListView.BP_GetSelectedItems");

	FBP_GetSelectedItems parms{};	
	parms.Items = Items;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UObject* UListView::BP_GetSelectedItem(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListView.BP_GetSelectedItem");

	FBP_GetSelectedItem parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UListView::BP_GetNumItemsSelected(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListView.BP_GetNumItemsSelected");

	FBP_GetNumItemsSelected parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UListView::BP_ClearSelection(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListView.BP_ClearSelection");

	FBP_ClearSelection parms{};	

	ProcessEvent(fn, &parms);
}

void UListView::BP_CancelScrollIntoView(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListView.BP_CancelScrollIntoView");

	FBP_CancelScrollIntoView parms{};	

	ProcessEvent(fn, &parms);
}

void UListView::AddItem(struct UObject* Item){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ListView.AddItem");

	FAddItem parms{};	
	parms.Item = Item;

	ProcessEvent(fn, &parms);
}

struct FText UTextBinding::GetTextValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TextBinding.GetTextValue");

	FGetTextValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UTextBinding::GetStringValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TextBinding.GetStringValue");

	FGetStringValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSlateColor UColorBinding::GetSlateValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ColorBinding.GetSlateValue");

	FGetSlateValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FLinearColor UColorBinding::GetLinearValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ColorBinding.GetLinearValue");

	FGetLinearValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UTileView::SetEntryWidth(float NewWidth){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TileView.SetEntryWidth");

	FSetEntryWidth parms{};	
	parms.NewWidth = NewWidth;

	ProcessEvent(fn, &parms);
}

void UTileView::SetEntryHeight(float NewHeight){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TileView.SetEntryHeight");

	FSetEntryHeight parms{};	
	parms.NewHeight = NewHeight;

	ProcessEvent(fn, &parms);
}

float UTileView::GetEntryWidth(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TileView.GetEntryWidth");

	FGetEntryWidth parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UTileView::GetEntryHeight(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TileView.GetEntryHeight");

	FGetEntryHeight parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UTreeView::SetItemExpansion(struct UObject* Item, bool bExpandItem){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TreeView.SetItemExpansion");

	FSetItemExpansion parms{};	
	parms.Item = Item;
	parms.bExpandItem = bExpandItem;

	ProcessEvent(fn, &parms);
}

void UTreeView::ExpandAll(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TreeView.ExpandAll");

	FExpandAll parms{};	

	ProcessEvent(fn, &parms);
}

void UTreeView::CollapseAll(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.TreeView.CollapseAll");

	FCollapseAll parms{};	

	ProcessEvent(fn, &parms);
}

struct UAsyncTaskDownloadImage* UAsyncTaskDownloadImage::DownloadImage(struct FString URL){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.AsyncTaskDownloadImage.DownloadImage");

	FDownloadImage parms{};	
	parms.URL = URL;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UOverlaySlot* UOverlay::AddChildToOverlay(struct UWidget* Content){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Overlay.AddChildToOverlay");

	FAddChildToOverlay parms{};	
	parms.Content = Content;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UWidgetBlueprintLibrary::UnlockMouse(struct FEventReply& Reply){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.UnlockMouse");

	FUnlockMouse parms{};	
	parms.Reply = Reply;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UWidgetBlueprintLibrary::Unhandled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.Unhandled");

	FUnhandled parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWidgetBlueprintLibrary::SetWindowTitleBarState(struct UWidget* TitleBarContent, uint8_t Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState");

	FSetWindowTitleBarState parms{};	
	parms.TitleBarContent = TitleBarContent;
	parms.Mode = Mode;
	parms.bTitleBarDragEnabled = bTitleBarDragEnabled;
	parms.bWindowButtonsVisible = bWindowButtonsVisible;
	parms.bTitleBarVisible = bTitleBarVisible;

	ProcessEvent(fn, &parms);
}

void UWidgetBlueprintLibrary::SetWindowTitleBarOnCloseClickedDelegate(struct FDelegate Delegate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate");

	FSetWindowTitleBarOnCloseClickedDelegate parms{};	
	parms.Delegate = Delegate;

	ProcessEvent(fn, &parms);
}

void UWidgetBlueprintLibrary::SetWindowTitleBarCloseButtonActive(bool bActive){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive");

	FSetWindowTitleBarCloseButtonActive parms{};	
	parms.bActive = bActive;

	ProcessEvent(fn, &parms);
}

struct FEventReply UWidgetBlueprintLibrary::SetUserFocus(struct FEventReply& Reply, struct UWidget* FocusWidget, bool bInAllUsers){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetUserFocus");

	FSetUserFocus parms{};	
	parms.Reply = Reply;
	parms.FocusWidget = FocusWidget;
	parms.bInAllUsers = bInAllUsers;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UWidgetBlueprintLibrary::SetMousePosition(struct FEventReply& Reply, struct FVector2D NewMousePosition){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetMousePosition");

	FSetMousePosition parms{};	
	parms.Reply = Reply;
	parms.NewMousePosition = NewMousePosition;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, uint8_t InMouseLockMode, bool bFlushInput){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx");

	FSetInputMode_UIOnlyEx parms{};	
	parms.PlayerController = PlayerController;
	parms.InWidgetToFocus = InWidgetToFocus;
	parms.InMouseLockMode = InMouseLockMode;
	parms.bFlushInput = bFlushInput;

	ProcessEvent(fn, &parms);
}

void UWidgetBlueprintLibrary::SetInputMode_GameOnly(struct APlayerController* PlayerController, bool bFlushInput){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly");

	FSetInputMode_GameOnly parms{};	
	parms.PlayerController = PlayerController;
	parms.bFlushInput = bFlushInput;

	ProcessEvent(fn, &parms);
}

void UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, uint8_t InMouseLockMode, bool bHideCursorDuringCapture, bool bFlushInput){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx");

	FSetInputMode_GameAndUIEx parms{};	
	parms.PlayerController = PlayerController;
	parms.InWidgetToFocus = InWidgetToFocus;
	parms.InMouseLockMode = InMouseLockMode;
	parms.bHideCursorDuringCapture = bHideCursorDuringCapture;
	parms.bFlushInput = bFlushInput;

	ProcessEvent(fn, &parms);
}

bool UWidgetBlueprintLibrary::SetHardwareCursor(struct UObject* WorldContextObject, enum class EMouseCursor CursorShape, struct FName CursorName, struct FVector2D HotSpot){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetHardwareCursor");

	FSetHardwareCursor parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.CursorShape = CursorShape;
	parms.CursorName = CursorName;
	parms.HotSpot = HotSpot;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWidgetBlueprintLibrary::SetFocusToGameViewport(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport");

	FSetFocusToGameViewport parms{};	

	ProcessEvent(fn, &parms);
}

void UWidgetBlueprintLibrary::SetColorVisionDeficiencyType(uint8_t Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType");

	FSetColorVisionDeficiencyType parms{};	
	parms.Type = Type;
	parms.Severity = Severity;
	parms.CorrectDeficiency = CorrectDeficiency;
	parms.ShowCorrectionWithDeficiency = ShowCorrectionWithDeficiency;

	ProcessEvent(fn, &parms);
}

void UWidgetBlueprintLibrary::SetBrushResourceToTexture(struct FSlateBrush& Brush, struct UTexture2D* Texture){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture");

	FSetBrushResourceToTexture parms{};	
	parms.Brush = Brush;
	parms.Texture = Texture;

	ProcessEvent(fn, &parms);
}

void UWidgetBlueprintLibrary::SetBrushResourceToMaterial(struct FSlateBrush& Brush, struct UMaterialInterface* Material){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial");

	FSetBrushResourceToMaterial parms{};	
	parms.Brush = Brush;
	parms.Material = Material;

	ProcessEvent(fn, &parms);
}

void UWidgetBlueprintLibrary::RestorePreviousWindowTitleBarState(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState");

	FRestorePreviousWindowTitleBarState parms{};	

	ProcessEvent(fn, &parms);
}

struct FEventReply UWidgetBlueprintLibrary::ReleaseMouseCapture(struct FEventReply& Reply){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture");

	FReleaseMouseCapture parms{};	
	parms.Reply = Reply;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UWidgetBlueprintLibrary::ReleaseJoystickCapture(struct FEventReply& Reply, bool bInAllJoysticks){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture");

	FReleaseJoystickCapture parms{};	
	parms.Reply = Reply;
	parms.bInAllJoysticks = bInAllJoysticks;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWidgetBlueprintLibrary::OnGameWindowCloseButtonClickedDelegate__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature");

	FOnGameWindowCloseButtonClickedDelegate__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

struct FSlateBrush UWidgetBlueprintLibrary::NoResourceBrush(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.NoResourceBrush");

	FNoResourceBrush parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromTexture(struct UTexture2D* Texture, int32_t Width, int32_t Height){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture");

	FMakeBrushFromTexture parms{};	
	parms.Texture = Texture;
	parms.Width = Width;
	parms.Height = Height;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromMaterial(struct UMaterialInterface* Material, int32_t Width, int32_t Height){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial");

	FMakeBrushFromMaterial parms{};	
	parms.Material = Material;
	parms.Width = Width;
	parms.Height = Height;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromAsset(struct USlateBrushAsset* BrushAsset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset");

	FMakeBrushFromAsset parms{};	
	parms.BrushAsset = BrushAsset;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UWidgetBlueprintLibrary::LockMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.LockMouse");

	FLockMouse parms{};	
	parms.Reply = Reply;
	parms.CapturingWidget = CapturingWidget;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWidgetBlueprintLibrary::IsDragDropping(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.IsDragDropping");

	FIsDragDropping parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UWidgetBlueprintLibrary::Handled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.Handled");

	FHandled parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWidgetBlueprintLibrary::GetSafeZonePadding(struct UObject* WorldContextObject, struct FVector4& SafePadding, struct FVector2D& SafePaddingScale, struct FVector4& SpillOverPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding");

	FGetSafeZonePadding parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.SafePadding = SafePadding;
	parms.SafePaddingScale = SafePaddingScale;
	parms.SpillOverPadding = SpillOverPadding;

	ProcessEvent(fn, &parms);
}

struct FKeyEvent UWidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent& Event){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent");

	FGetKeyEventFromAnalogInputEvent parms{};	
	parms.Event = Event;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromPointerEvent(struct FPointerEvent& Event){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent");

	FGetInputEventFromPointerEvent parms{};	
	parms.Event = Event;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromNavigationEvent(struct FNavigationEvent& Event){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent");

	FGetInputEventFromNavigationEvent parms{};	
	parms.Event = Event;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromKeyEvent(struct FKeyEvent& Event){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent");

	FGetInputEventFromKeyEvent parms{};	
	parms.Event = Event;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent(struct FCharacterEvent& Event){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent");

	FGetInputEventFromCharacterEvent parms{};	
	parms.Event = Event;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMaterialInstanceDynamic* UWidgetBlueprintLibrary::GetDynamicMaterial(struct FSlateBrush& Brush){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial");

	FGetDynamicMaterial parms{};	
	parms.Brush = Brush;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UDragDropOperation* UWidgetBlueprintLibrary::GetDragDroppingContent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent");

	FGetDragDroppingContent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UTexture2D* UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(struct FSlateBrush& Brush){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D");

	FGetBrushResourceAsTexture2D parms{};	
	parms.Brush = Brush;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMaterialInterface* UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(struct FSlateBrush& Brush){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial");

	FGetBrushResourceAsMaterial parms{};	
	parms.Brush = Brush;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UObject* UWidgetBlueprintLibrary::GetBrushResource(struct FSlateBrush& Brush){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetBrushResource");

	FGetBrushResource parms{};	
	parms.Brush = Brush;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWidgetBlueprintLibrary::GetAllWidgetsWithInterface(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, UInterface* Interface, bool TopLevelOnly){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface");

	FGetAllWidgetsWithInterface parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.FoundWidgets = FoundWidgets;
	parms.Interface = Interface;
	parms.TopLevelOnly = TopLevelOnly;

	ProcessEvent(fn, &parms);
}

void UWidgetBlueprintLibrary::GetAllWidgetsOfClass(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, UUserWidget* WidgetClass, bool TopLevelOnly){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass");

	FGetAllWidgetsOfClass parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.FoundWidgets = FoundWidgets;
	parms.WidgetClass = WidgetClass;
	parms.TopLevelOnly = TopLevelOnly;

	ProcessEvent(fn, &parms);
}

struct FEventReply UWidgetBlueprintLibrary::EndDragDrop(struct FEventReply& Reply){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.EndDragDrop");

	FEndDragDrop parms{};	
	parms.Reply = Reply;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWidgetBlueprintLibrary::DrawTextFormatted(struct FPaintContext& Context, struct FText& Text, struct FVector2D Position, struct UFont* Font, int32_t FontSize, struct FName FontTypeFace, struct FLinearColor Tint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawTextFormatted");

	FDrawTextFormatted parms{};	
	parms.Context = Context;
	parms.Text = Text;
	parms.Position = Position;
	parms.Font = Font;
	parms.FontSize = FontSize;
	parms.FontTypeFace = FontTypeFace;
	parms.Tint = Tint;

	ProcessEvent(fn, &parms);
}

void UWidgetBlueprintLibrary::DrawText(struct FPaintContext& Context, struct FString InString, struct FVector2D Position, struct FLinearColor Tint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawText");

	FDrawText parms{};	
	parms.Context = Context;
	parms.InString = InString;
	parms.Position = Position;
	parms.Tint = Tint;

	ProcessEvent(fn, &parms);
}

void UWidgetBlueprintLibrary::DrawSpline(struct FPaintContext& Context, struct FVector2D Start, struct FVector2D StartDir, struct FVector2D End, struct FVector2D EndDir, struct FLinearColor Tint, float Thickness){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawSpline");

	FDrawSpline parms{};	
	parms.Context = Context;
	parms.Start = Start;
	parms.StartDir = StartDir;
	parms.End = End;
	parms.EndDir = EndDir;
	parms.Tint = Tint;
	parms.Thickness = Thickness;

	ProcessEvent(fn, &parms);
}

void UWidgetBlueprintLibrary::DrawLines(struct FPaintContext& Context, struct TArray<struct FVector2D>& Points, struct FLinearColor Tint, bool bAntiAlias, float Thickness){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawLines");

	FDrawLines parms{};	
	parms.Context = Context;
	parms.Points = Points;
	parms.Tint = Tint;
	parms.bAntiAlias = bAntiAlias;
	parms.Thickness = Thickness;

	ProcessEvent(fn, &parms);
}

void UWidgetBlueprintLibrary::DrawLine(struct FPaintContext& Context, struct FVector2D PositionA, struct FVector2D PositionB, struct FLinearColor Tint, bool bAntiAlias, float Thickness){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawLine");

	FDrawLine parms{};	
	parms.Context = Context;
	parms.PositionA = PositionA;
	parms.PositionB = PositionB;
	parms.Tint = Tint;
	parms.bAntiAlias = bAntiAlias;
	parms.Thickness = Thickness;

	ProcessEvent(fn, &parms);
}

void UWidgetBlueprintLibrary::DrawBox(struct FPaintContext& Context, struct FVector2D Position, struct FVector2D Size, struct USlateBrushAsset* Brush, struct FLinearColor Tint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawBox");

	FDrawBox parms{};	
	parms.Context = Context;
	parms.Position = Position;
	parms.Size = Size;
	parms.Brush = Brush;
	parms.Tint = Tint;

	ProcessEvent(fn, &parms);
}

void UWidgetBlueprintLibrary::DismissAllMenus(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DismissAllMenus");

	FDismissAllMenus parms{};	

	ProcessEvent(fn, &parms);
}

struct FEventReply UWidgetBlueprintLibrary::DetectDragIfPressed(struct FPointerEvent& PointerEvent, struct UWidget* WidgetDetectingDrag, struct FKey DragKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed");

	FDetectDragIfPressed parms{};	
	parms.PointerEvent = PointerEvent;
	parms.WidgetDetectingDrag = WidgetDetectingDrag;
	parms.DragKey = DragKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UWidgetBlueprintLibrary::DetectDrag(struct FEventReply& Reply, struct UWidget* WidgetDetectingDrag, struct FKey DragKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DetectDrag");

	FDetectDrag parms{};	
	parms.Reply = Reply;
	parms.WidgetDetectingDrag = WidgetDetectingDrag;
	parms.DragKey = DragKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UDragDropOperation* UWidgetBlueprintLibrary::CreateDragDropOperation(UDragDropOperation* OperationClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation");

	FCreateDragDropOperation parms{};	
	parms.OperationClass = OperationClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UUserWidget* UWidgetBlueprintLibrary::Create(struct UObject* WorldContextObject, UUserWidget* WidgetType, struct APlayerController* OwningPlayer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.Create");

	FCreate parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.WidgetType = WidgetType;
	parms.OwningPlayer = OwningPlayer;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UWidgetBlueprintLibrary::ClearUserFocus(struct FEventReply& Reply, bool bInAllUsers){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.ClearUserFocus");

	FClearUserFocus parms{};	
	parms.Reply = Reply;
	parms.bInAllUsers = bInAllUsers;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UWidgetBlueprintLibrary::CaptureMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CaptureMouse");

	FCaptureMouse parms{};	
	parms.Reply = Reply;
	parms.CapturingWidget = CapturingWidget;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UWidgetBlueprintLibrary::CaptureJoystick(struct FEventReply& Reply, struct UWidget* CapturingWidget, bool bInAllJoysticks){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CaptureJoystick");

	FCaptureJoystick parms{};	
	parms.Reply = Reply;
	parms.CapturingWidget = CapturingWidget;
	parms.bInAllJoysticks = bInAllJoysticks;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWidgetBlueprintLibrary::CancelDragDrop(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CancelDragDrop");

	FCancelDragDrop parms{};	

	ProcessEvent(fn, &parms);
}

void UOverlaySlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetVerticalAlignment");

	FSetVerticalAlignment parms{};	
	parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(fn, &parms);
}

void UOverlaySlot::SetPadding(struct FMargin InPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetPadding");

	FSetPadding parms{};	
	parms.InPadding = InPadding;

	ProcessEvent(fn, &parms);
}

void UOverlaySlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetHorizontalAlignment");

	FSetHorizontalAlignment parms{};	
	parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(fn, &parms);
}

void UDynamicEntryBoxBase::SetRadialSettings(struct FRadialBoxSettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.SetRadialSettings");

	FSetRadialSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void UDynamicEntryBoxBase::SetEntrySpacing(struct FVector2D& InEntrySpacing){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.SetEntrySpacing");

	FSetEntrySpacing parms{};	
	parms.InEntrySpacing = InEntrySpacing;

	ProcessEvent(fn, &parms);
}

int32_t UDynamicEntryBoxBase::GetNumEntries(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.GetNumEntries");

	FGetNumEntries parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UUserWidget*> UDynamicEntryBoxBase::GetAllEntries(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.GetAllEntries");

	FGetAllEntries parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWidgetAnimation::UnbindFromAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindFromAnimationStarted");

	FUnbindFromAnimationStarted parms{};	
	parms.Widget = Widget;
	parms.Delegate = Delegate;

	ProcessEvent(fn, &parms);
}

void UWidgetAnimation::UnbindFromAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindFromAnimationFinished");

	FUnbindFromAnimationFinished parms{};	
	parms.Widget = Widget;
	parms.Delegate = Delegate;

	ProcessEvent(fn, &parms);
}

void UWidgetAnimation::UnbindAllFromAnimationStarted(struct UUserWidget* Widget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted");

	FUnbindAllFromAnimationStarted parms{};	
	parms.Widget = Widget;

	ProcessEvent(fn, &parms);
}

void UWidgetAnimation::UnbindAllFromAnimationFinished(struct UUserWidget* Widget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished");

	FUnbindAllFromAnimationFinished parms{};	
	parms.Widget = Widget;

	ProcessEvent(fn, &parms);
}

float UWidgetAnimation::GetStartTime(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.GetStartTime");

	FGetStartTime parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UWidgetAnimation::GetEndTime(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.GetEndTime");

	FGetEndTime parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWidgetAnimation::BindToAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.BindToAnimationStarted");

	FBindToAnimationStarted parms{};	
	parms.Widget = Widget;
	parms.Delegate = Delegate;

	ProcessEvent(fn, &parms);
}

void UWidgetAnimation::BindToAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.BindToAnimationFinished");

	FBindToAnimationFinished parms{};	
	parms.Widget = Widget;
	parms.Delegate = Delegate;

	ProcessEvent(fn, &parms);
}

void UEditableText::SetTextOverflowPolicy(uint8_t InOverflowPolicy){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.EditableText.SetTextOverflowPolicy");

	FSetTextOverflowPolicy parms{};	
	parms.InOverflowPolicy = InOverflowPolicy;

	ProcessEvent(fn, &parms);
}

void UEditableText::SetText(struct FText InText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.EditableText.SetText");

	FSetText parms{};	
	parms.InText = InText;

	ProcessEvent(fn, &parms);
}

void UEditableText::SetMinimumDesiredWidth(float InMinDesiredWidth){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.EditableText.SetMinimumDesiredWidth");

	FSetMinimumDesiredWidth parms{};	
	parms.InMinDesiredWidth = InMinDesiredWidth;

	ProcessEvent(fn, &parms);
}

void UEditableText::SetJustification(enum class ETextJustify InJustification){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.EditableText.SetJustification");

	FSetJustification parms{};	
	parms.InJustification = InJustification;

	ProcessEvent(fn, &parms);
}

void UEditableText::SetIsReadOnly(bool InbIsReadyOnly){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.EditableText.SetIsReadOnly");

	FSetIsReadOnly parms{};	
	parms.InbIsReadyOnly = InbIsReadyOnly;

	ProcessEvent(fn, &parms);
}

void UEditableText::SetIsPassword(bool InbIsPassword){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.EditableText.SetIsPassword");

	FSetIsPassword parms{};	
	parms.InbIsPassword = InbIsPassword;

	ProcessEvent(fn, &parms);
}

void UEditableText::SetHintText(struct FText InHintText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.EditableText.SetHintText");

	FSetHintText parms{};	
	parms.InHintText = InHintText;

	ProcessEvent(fn, &parms);
}

void UEditableText::SetFontOutlineMaterial(struct UMaterialInterface* InMaterial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.EditableText.SetFontOutlineMaterial");

	FSetFontOutlineMaterial parms{};	
	parms.InMaterial = InMaterial;

	ProcessEvent(fn, &parms);
}

void UEditableText::SetFontMaterial(struct UMaterialInterface* InMaterial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.EditableText.SetFontMaterial");

	FSetFontMaterial parms{};	
	parms.InMaterial = InMaterial;

	ProcessEvent(fn, &parms);
}

void UEditableText::SetFont(struct FSlateFontInfo InFontInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.EditableText.SetFont");

	FSetFont parms{};	
	parms.InFontInfo = InFontInfo;

	ProcessEvent(fn, &parms);
}

void UEditableText::OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature");

	FOnEditableTextCommittedEvent__DelegateSignature parms{};	
	parms.Text = Text;
	parms.CommitMethod = CommitMethod;

	ProcessEvent(fn, &parms);
}

void UEditableText::OnEditableTextChangedEvent__DelegateSignature(struct FText& Text){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature");

	FOnEditableTextChangedEvent__DelegateSignature parms{};	
	parms.Text = Text;

	ProcessEvent(fn, &parms);
}

struct FText UEditableText::GetText(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.EditableText.GetText");

	FGetText parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

enum class ETextJustify UEditableText::GetJustification(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.EditableText.GetJustification");

	FGetJustification parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UEditableText::GetHintText(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.EditableText.GetHintText");

	FGetHintText parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSlateFontInfo UEditableText::GetFont(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.EditableText.GetFont");

	FGetFont parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UBackgroundBlurSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.BackgroundBlurSlot.SetVerticalAlignment");

	FSetVerticalAlignment parms{};	
	parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(fn, &parms);
}

void UBackgroundBlurSlot::SetPadding(struct FMargin InPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.BackgroundBlurSlot.SetPadding");

	FSetPadding parms{};	
	parms.InPadding = InPadding;

	ProcessEvent(fn, &parms);
}

void UBackgroundBlurSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.BackgroundBlurSlot.SetHorizontalAlignment");

	FSetHorizontalAlignment parms{};	
	parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(fn, &parms);
}

void UDragDropOperation::Drop(struct FPointerEvent& PointerEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.DragDropOperation.Drop");

	FDrop parms{};	
	parms.PointerEvent = PointerEvent;

	ProcessEvent(fn, &parms);
}

void UDragDropOperation::Dragged(struct FPointerEvent& PointerEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.DragDropOperation.Dragged");

	FDragged parms{};	
	parms.PointerEvent = PointerEvent;

	ProcessEvent(fn, &parms);
}

void UDragDropOperation::DragCancelled(struct FPointerEvent& PointerEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.DragDropOperation.DragCancelled");

	FDragCancelled parms{};	
	parms.PointerEvent = PointerEvent;

	ProcessEvent(fn, &parms);
}

uint8_t UVisibilityBinding::GetValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.VisibilityBinding.GetValue");

	FGetValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UInt32Binding::GetValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Int32Binding.GetValue");

	FGetValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWidgetComponent::SetWindowVisibility(uint8_t Invisibility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWindowVisibility");

	FSetWindowVisibility parms{};	
	parms.Invisibility = Invisibility;

	ProcessEvent(fn, &parms);
}

void UWidgetComponent::SetWindowFocusable(bool bInWindowFocusable){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWindowFocusable");

	FSetWindowFocusable parms{};	
	parms.bInWindowFocusable = bInWindowFocusable;

	ProcessEvent(fn, &parms);
}

void UWidgetComponent::SetWidgetSpace(uint8_t NewSpace){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWidgetSpace");

	FSetWidgetSpace parms{};	
	parms.NewSpace = NewSpace;

	ProcessEvent(fn, &parms);
}

void UWidgetComponent::SetWidget(struct UUserWidget* Widget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWidget");

	FSetWidget parms{};	
	parms.Widget = Widget;

	ProcessEvent(fn, &parms);
}

void UWidgetComponent::SetTwoSided(bool bWantTwoSided){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTwoSided");

	FSetTwoSided parms{};	
	parms.bWantTwoSided = bWantTwoSided;

	ProcessEvent(fn, &parms);
}

void UWidgetComponent::SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTintColorAndOpacity");

	FSetTintColorAndOpacity parms{};	
	parms.NewTintColorAndOpacity = NewTintColorAndOpacity;

	ProcessEvent(fn, &parms);
}

void UWidgetComponent::SetTickWhenOffscreen(bool bWantTickWhenOffscreen){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTickWhenOffscreen");

	FSetTickWhenOffscreen parms{};	
	parms.bWantTickWhenOffscreen = bWantTickWhenOffscreen;

	ProcessEvent(fn, &parms);
}

void UWidgetComponent::SetTickMode(uint8_t InTickMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTickMode");

	FSetTickMode parms{};	
	parms.InTickMode = InTickMode;

	ProcessEvent(fn, &parms);
}

void UWidgetComponent::SetRedrawTime(float InRedrawTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetRedrawTime");

	FSetRedrawTime parms{};	
	parms.InRedrawTime = InRedrawTime;

	ProcessEvent(fn, &parms);
}

void UWidgetComponent::SetPivot(struct FVector2D& InPivot){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetPivot");

	FSetPivot parms{};	
	parms.InPivot = InPivot;

	ProcessEvent(fn, &parms);
}

void UWidgetComponent::SetOwnerPlayer(struct ULocalPlayer* LocalPlayer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetOwnerPlayer");

	FSetOwnerPlayer parms{};	
	parms.LocalPlayer = LocalPlayer;

	ProcessEvent(fn, &parms);
}

void UWidgetComponent::SetManuallyRedraw(bool bUseManualRedraw){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetManuallyRedraw");

	FSetManuallyRedraw parms{};	
	parms.bUseManualRedraw = bUseManualRedraw;

	ProcessEvent(fn, &parms);
}

void UWidgetComponent::SetGeometryMode(uint8_t InGeometryMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetGeometryMode");

	FSetGeometryMode parms{};	
	parms.InGeometryMode = InGeometryMode;

	ProcessEvent(fn, &parms);
}

void UWidgetComponent::SetDrawSize(struct FVector2D Size){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetDrawSize");

	FSetDrawSize parms{};	
	parms.Size = Size;

	ProcessEvent(fn, &parms);
}

void UWidgetComponent::SetDrawAtDesiredSize(bool bInDrawAtDesiredSize){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetDrawAtDesiredSize");

	FSetDrawAtDesiredSize parms{};	
	parms.bInDrawAtDesiredSize = bInDrawAtDesiredSize;

	ProcessEvent(fn, &parms);
}

void UWidgetComponent::SetCylinderArcAngle(float InCylinderArcAngle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetCylinderArcAngle");

	FSetCylinderArcAngle parms{};	
	parms.InCylinderArcAngle = InCylinderArcAngle;

	ProcessEvent(fn, &parms);
}

void UWidgetComponent::SetBackgroundColor(struct FLinearColor NewBackgroundColor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetBackgroundColor");

	FSetBackgroundColor parms{};	
	parms.NewBackgroundColor = NewBackgroundColor;

	ProcessEvent(fn, &parms);
}

void UWidgetComponent::RequestRenderUpdate(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.RequestRenderUpdate");

	FRequestRenderUpdate parms{};	

	ProcessEvent(fn, &parms);
}

void UWidgetComponent::RequestRedraw(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.RequestRedraw");

	FRequestRedraw parms{};	

	ProcessEvent(fn, &parms);
}

bool UWidgetComponent::IsWidgetVisible(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.IsWidgetVisible");

	FIsWidgetVisible parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UWidgetComponent::GetWindowVisiblility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWindowVisiblility");

	FGetWindowVisiblility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWidgetComponent::GetWindowFocusable(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWindowFocusable");

	FGetWindowFocusable parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UWidgetComponent::GetWidgetSpace(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWidgetSpace");

	FGetWidgetSpace parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UUserWidget* UWidgetComponent::GetWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWidget");

	FGetWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UUserWidget* UWidgetComponent::GetUserWidgetObject(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetUserWidgetObject");

	FGetUserWidgetObject parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWidgetComponent::GetTwoSided(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetTwoSided");

	FGetTwoSided parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWidgetComponent::GetTickWhenOffscreen(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetTickWhenOffscreen");

	FGetTickWhenOffscreen parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UTextureRenderTarget2D* UWidgetComponent::GetRenderTarget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetRenderTarget");

	FGetRenderTarget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UWidgetComponent::GetRedrawTime(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetRedrawTime");

	FGetRedrawTime parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D UWidgetComponent::GetPivot(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetPivot");

	FGetPivot parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct ULocalPlayer* UWidgetComponent::GetOwnerPlayer(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetOwnerPlayer");

	FGetOwnerPlayer parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMaterialInstanceDynamic* UWidgetComponent::GetMaterialInstance(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetMaterialInstance");

	FGetMaterialInstance parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWidgetComponent::GetManuallyRedraw(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetManuallyRedraw");

	FGetManuallyRedraw parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UWidgetComponent::GetGeometryMode(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetGeometryMode");

	FGetGeometryMode parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D UWidgetComponent::GetDrawSize(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetDrawSize");

	FGetDrawSize parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWidgetComponent::GetDrawAtDesiredSize(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetDrawAtDesiredSize");

	FGetDrawAtDesiredSize parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UWidgetComponent::GetCylinderArcAngle(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetCylinderArcAngle");

	FGetCylinderArcAngle parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D UWidgetComponent::GetCurrentDrawSize(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetCurrentDrawSize");

	FGetCurrentDrawSize parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USpacer::SetSize(struct FVector2D InSize){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Spacer.SetSize");

	FSetSize parms{};	
	parms.InSize = InSize;

	ProcessEvent(fn, &parms);
}

void UUMGSequencePlayer::SetUserTag(struct FName InUserTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UMGSequencePlayer.SetUserTag");

	FSetUserTag parms{};	
	parms.InUserTag = InUserTag;

	ProcessEvent(fn, &parms);
}

struct FName UUMGSequencePlayer::GetUserTag(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UMGSequencePlayer.GetUserTag");

	FGetUserTag parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UProgressBar::SetPercent(float InPercent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetPercent");

	FSetPercent parms{};	
	parms.InPercent = InPercent;

	ProcessEvent(fn, &parms);
}

void UProgressBar::SetIsMarquee(bool InbIsMarquee){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetIsMarquee");

	FSetIsMarquee parms{};	
	parms.InbIsMarquee = InbIsMarquee;

	ProcessEvent(fn, &parms);
}

void UProgressBar::SetFillColorAndOpacity(struct FLinearColor InColor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetFillColorAndOpacity");

	FSetFillColorAndOpacity parms{};	
	parms.InColor = InColor;

	ProcessEvent(fn, &parms);
}

enum class EMouseCursor UMouseCursorBinding::GetValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MouseCursorBinding.GetValue");

	FGetValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UCheckedStateBinding::GetValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CheckedStateBinding.GetValue");

	FGetValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject");

	FCreatePlayAnimationTimeRangeProxyObject parms{};	
	parms.Result = Result;
	parms.Widget = Widget;
	parms.InAnimation = InAnimation;
	parms.StartAtTime = StartAtTime;
	parms.EndAtTime = EndAtTime;
	parms.NumLoopsToPlay = NumLoopsToPlay;
	parms.PlayMode = PlayMode;
	parms.PlaybackSpeed = PlaybackSpeed;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject");

	FCreatePlayAnimationProxyObject parms{};	
	parms.Result = Result;
	parms.Widget = Widget;
	parms.InAnimation = InAnimation;
	parms.StartAtTime = StartAtTime;
	parms.NumLoopsToPlay = NumLoopsToPlay;
	parms.PlayMode = PlayMode;
	parms.PlaybackSpeed = PlaybackSpeed;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSlateBrush UBrushBinding::GetValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.BrushBinding.GetValue");

	FGetValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBoolBinding::GetValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.BoolBinding.GetValue");

	FGetValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameViewportWidgetSlot UGameViewportSubsystem::SetWidgetSlotPosition(struct FGameViewportWidgetSlot Slot, struct UWidget* Widget, struct FVector2D Position, bool bRemoveDPIScale){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.GameViewportSubsystem.SetWidgetSlotPosition");

	FSetWidgetSlotPosition parms{};	
	parms.Slot = Slot;
	parms.Widget = Widget;
	parms.Position = Position;
	parms.bRemoveDPIScale = bRemoveDPIScale;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameViewportWidgetSlot UGameViewportSubsystem::SetWidgetSlotDesiredSize(struct FGameViewportWidgetSlot Slot, struct FVector2D Size){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.GameViewportSubsystem.SetWidgetSlotDesiredSize");

	FSetWidgetSlotDesiredSize parms{};	
	parms.Slot = Slot;
	parms.Size = Size;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameViewportSubsystem::SetWidgetSlot(struct UWidget* Widget, struct FGameViewportWidgetSlot Slot){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.GameViewportSubsystem.SetWidgetSlot");

	FSetWidgetSlot parms{};	
	parms.Widget = Widget;
	parms.Slot = Slot;

	ProcessEvent(fn, &parms);
}

void UGameViewportSubsystem::RemoveWidget(struct UWidget* Widget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.GameViewportSubsystem.RemoveWidget");

	FRemoveWidget parms{};	
	parms.Widget = Widget;

	ProcessEvent(fn, &parms);
}

bool UGameViewportSubsystem::IsWidgetAdded(struct UWidget* Widget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.GameViewportSubsystem.IsWidgetAdded");

	FIsWidgetAdded parms{};	
	parms.Widget = Widget;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameViewportWidgetSlot UGameViewportSubsystem::GetWidgetSlot(struct UWidget* Widget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.GameViewportSubsystem.GetWidgetSlot");

	FGetWidgetSlot parms{};	
	parms.Widget = Widget;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameViewportSubsystem::AddWidgetForPlayer(struct UWidget* Widget, struct ULocalPlayer* Player, struct FGameViewportWidgetSlot Slot){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.GameViewportSubsystem.AddWidgetForPlayer");

	FAddWidgetForPlayer parms{};	
	parms.Widget = Widget;
	parms.Player = Player;
	parms.Slot = Slot;

	ProcessEvent(fn, &parms);
}

void UGameViewportSubsystem::AddWidget(struct UWidget* Widget, struct FGameViewportWidgetSlot Slot){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.GameViewportSubsystem.AddWidget");

	FAddWidget parms{};	
	parms.Widget = Widget;
	parms.Slot = Slot;

	ProcessEvent(fn, &parms);
}

bool UUserListEntryLibrary::IsListItemSelected(struct TScriptInterface<IUserListEntry> UserListEntry){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserListEntryLibrary.IsListItemSelected");

	FIsListItemSelected parms{};	
	parms.UserListEntry = UserListEntry;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UUserListEntryLibrary::IsListItemExpanded(struct TScriptInterface<IUserListEntry> UserListEntry){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserListEntryLibrary.IsListItemExpanded");

	FIsListItemExpanded parms{};	
	parms.UserListEntry = UserListEntry;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UListViewBase* UUserListEntryLibrary::GetOwningListView(struct TScriptInterface<IUserListEntry> UserListEntry){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserListEntryLibrary.GetOwningListView");

	FGetOwningListView parms{};	
	parms.UserListEntry = UserListEntry;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UUserObjectListEntry::OnListItemObjectSet(struct UObject* ListItemObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserObjectListEntry.OnListItemObjectSet");

	FOnListItemObjectSet parms{};	
	parms.ListItemObject = ListItemObject;

	ProcessEvent(fn, &parms);
}

struct UObject* UUserObjectListEntryLibrary::GetListItemObject(struct TScriptInterface<IUserObjectListEntry> UserObjectListEntry){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UserObjectListEntryLibrary.GetListItemObject");

	FGetListItemObject parms{};	
	parms.UserObjectListEntry = UserObjectListEntry;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UBackgroundBlur::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetVerticalAlignment");

	FSetVerticalAlignment parms{};	
	parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(fn, &parms);
}

void UBackgroundBlur::SetPadding(struct FMargin InPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetPadding");

	FSetPadding parms{};	
	parms.InPadding = InPadding;

	ProcessEvent(fn, &parms);
}

void UBackgroundBlur::SetLowQualityFallbackBrush(struct FSlateBrush& InBrush){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetLowQualityFallbackBrush");

	FSetLowQualityFallbackBrush parms{};	
	parms.InBrush = InBrush;

	ProcessEvent(fn, &parms);
}

void UBackgroundBlur::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetHorizontalAlignment");

	FSetHorizontalAlignment parms{};	
	parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(fn, &parms);
}

void UBackgroundBlur::SetCornerRadius(struct FVector4 InCornerRadius){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetCornerRadius");

	FSetCornerRadius parms{};	
	parms.InCornerRadius = InCornerRadius;

	ProcessEvent(fn, &parms);
}

void UBackgroundBlur::SetBlurStrength(float InStrength){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetBlurStrength");

	FSetBlurStrength parms{};	
	parms.InStrength = InStrength;

	ProcessEvent(fn, &parms);
}

void UBackgroundBlur::SetBlurRadius(int32_t InBlurRadius){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetBlurRadius");

	FSetBlurRadius parms{};	
	parms.InBlurRadius = InBlurRadius;

	ProcessEvent(fn, &parms);
}

void UBackgroundBlur::SetApplyAlphaToBlur(bool bInApplyAlphaToBlur){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetApplyAlphaToBlur");

	FSetApplyAlphaToBlur parms{};	
	parms.bInApplyAlphaToBlur = bInApplyAlphaToBlur;

	ProcessEvent(fn, &parms);
}

void UBorderSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetVerticalAlignment");

	FSetVerticalAlignment parms{};	
	parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(fn, &parms);
}

void UBorderSlot::SetPadding(struct FMargin InPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetPadding");

	FSetPadding parms{};	
	parms.InPadding = InPadding;

	ProcessEvent(fn, &parms);
}

void UBorderSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetHorizontalAlignment");

	FSetHorizontalAlignment parms{};	
	parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(fn, &parms);
}

void UButtonSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetVerticalAlignment");

	FSetVerticalAlignment parms{};	
	parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(fn, &parms);
}

void UButtonSlot::SetPadding(struct FMargin InPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetPadding");

	FSetPadding parms{};	
	parms.InPadding = InPadding;

	ProcessEvent(fn, &parms);
}

void UButtonSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetHorizontalAlignment");

	FSetHorizontalAlignment parms{};	
	parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(fn, &parms);
}

struct UCanvasPanelSlot* UCanvasPanel::AddChildToCanvas(struct UWidget* Content){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CanvasPanel.AddChildToCanvas");

	FAddChildToCanvas parms{};	
	parms.Content = Content;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCanvasPanelSlot::SetZOrder(int32_t InZOrder){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetZOrder");

	FSetZOrder parms{};	
	parms.InZOrder = InZOrder;

	ProcessEvent(fn, &parms);
}

void UCanvasPanelSlot::SetSize(struct FVector2D InSize){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetSize");

	FSetSize parms{};	
	parms.InSize = InSize;

	ProcessEvent(fn, &parms);
}

void UCanvasPanelSlot::SetPosition(struct FVector2D InPosition){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetPosition");

	FSetPosition parms{};	
	parms.InPosition = InPosition;

	ProcessEvent(fn, &parms);
}

void UCanvasPanelSlot::SetOffsets(struct FMargin InOffset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetOffsets");

	FSetOffsets parms{};	
	parms.InOffset = InOffset;

	ProcessEvent(fn, &parms);
}

void UCanvasPanelSlot::SetMinimum(struct FVector2D InMinimumAnchors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetMinimum");

	FSetMinimum parms{};	
	parms.InMinimumAnchors = InMinimumAnchors;

	ProcessEvent(fn, &parms);
}

void UCanvasPanelSlot::SetMaximum(struct FVector2D InMaximumAnchors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetMaximum");

	FSetMaximum parms{};	
	parms.InMaximumAnchors = InMaximumAnchors;

	ProcessEvent(fn, &parms);
}

void UCanvasPanelSlot::SetLayout(struct FAnchorData& InLayoutData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetLayout");

	FSetLayout parms{};	
	parms.InLayoutData = InLayoutData;

	ProcessEvent(fn, &parms);
}

void UCanvasPanelSlot::SetAutoSize(bool InbAutoSize){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAutoSize");

	FSetAutoSize parms{};	
	parms.InbAutoSize = InbAutoSize;

	ProcessEvent(fn, &parms);
}

void UCanvasPanelSlot::SetAnchors(struct FAnchors InAnchors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAnchors");

	FSetAnchors parms{};	
	parms.InAnchors = InAnchors;

	ProcessEvent(fn, &parms);
}

void UCanvasPanelSlot::SetAlignment(struct FVector2D InAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAlignment");

	FSetAlignment parms{};	
	parms.InAlignment = InAlignment;

	ProcessEvent(fn, &parms);
}

int32_t UCanvasPanelSlot::GetZOrder(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetZOrder");

	FGetZOrder parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D UCanvasPanelSlot::GetSize(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetSize");

	FGetSize parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D UCanvasPanelSlot::GetPosition(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetPosition");

	FGetPosition parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FMargin UCanvasPanelSlot::GetOffsets(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetOffsets");

	FGetOffsets parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FAnchorData UCanvasPanelSlot::GetLayout(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetLayout");

	FGetLayout parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UCanvasPanelSlot::GetAutoSize(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAutoSize");

	FGetAutoSize parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FAnchors UCanvasPanelSlot::GetAnchors(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAnchors");

	FGetAnchors parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D UCanvasPanelSlot::GetAlignment(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAlignment");

	FGetAlignment parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCheckBox::SetTouchMethod(enum class EButtonTouchMethod InTouchMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CheckBox.SetTouchMethod");

	FSetTouchMethod parms{};	
	parms.InTouchMethod = InTouchMethod;

	ProcessEvent(fn, &parms);
}

void UCheckBox::SetPressMethod(enum class EButtonPressMethod InPressMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CheckBox.SetPressMethod");

	FSetPressMethod parms{};	
	parms.InPressMethod = InPressMethod;

	ProcessEvent(fn, &parms);
}

void UCheckBox::SetIsChecked(bool InIsChecked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CheckBox.SetIsChecked");

	FSetIsChecked parms{};	
	parms.InIsChecked = InIsChecked;

	ProcessEvent(fn, &parms);
}

void UCheckBox::SetClickMethod(enum class EButtonClickMethod InClickMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CheckBox.SetClickMethod");

	FSetClickMethod parms{};	
	parms.InClickMethod = InClickMethod;

	ProcessEvent(fn, &parms);
}

void UCheckBox::SetCheckedState(uint8_t InCheckedState){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CheckBox.SetCheckedState");

	FSetCheckedState parms{};	
	parms.InCheckedState = InCheckedState;

	ProcessEvent(fn, &parms);
}

bool UCheckBox::IsPressed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CheckBox.IsPressed");

	FIsPressed parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UCheckBox::IsChecked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CheckBox.IsChecked");

	FIsChecked parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UCheckBox::GetCheckedState(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CheckBox.GetCheckedState");

	FGetCheckedState parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCircularThrobber::SetRadius(float InRadius){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetRadius");

	FSetRadius parms{};	
	parms.InRadius = InRadius;

	ProcessEvent(fn, &parms);
}

void UCircularThrobber::SetPeriod(float InPeriod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetPeriod");

	FSetPeriod parms{};	
	parms.InPeriod = InPeriod;

	ProcessEvent(fn, &parms);
}

void UCircularThrobber::SetNumberOfPieces(int32_t InNumberOfPieces){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetNumberOfPieces");

	FSetNumberOfPieces parms{};	
	parms.InNumberOfPieces = InNumberOfPieces;

	ProcessEvent(fn, &parms);
}

void UWrapBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetVerticalAlignment");

	FSetVerticalAlignment parms{};	
	parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(fn, &parms);
}

void UWrapBoxSlot::SetPadding(struct FMargin InPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetPadding");

	FSetPadding parms{};	
	parms.InPadding = InPadding;

	ProcessEvent(fn, &parms);
}

void UWrapBoxSlot::SetNewLine(bool InForceNewLine){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetNewLine");

	FSetNewLine parms{};	
	parms.InForceNewLine = InForceNewLine;

	ProcessEvent(fn, &parms);
}

void UWrapBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetHorizontalAlignment");

	FSetHorizontalAlignment parms{};	
	parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(fn, &parms);
}

void UWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan");

	FSetFillSpanWhenLessThan parms{};	
	parms.InFillSpanWhenLessThan = InFillSpanWhenLessThan;

	ProcessEvent(fn, &parms);
}

void UWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetFillEmptySpace");

	FSetFillEmptySpace parms{};	
	parms.InbFillEmptySpace = InbFillEmptySpace;

	ProcessEvent(fn, &parms);
}

void UComboBoxKey::SetSelectedOption(struct FName Option){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ComboBoxKey.SetSelectedOption");

	FSetSelectedOption parms{};	
	parms.Option = Option;

	ProcessEvent(fn, &parms);
}

bool UComboBoxKey::RemoveOption(struct FName Option){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ComboBoxKey.RemoveOption");

	FRemoveOption parms{};	
	parms.Option = Option;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UComboBoxKey::OnSelectionChangedEvent__DelegateSignature(struct FName SelectedItem, enum class ESelectInfo SelectionType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.ComboBoxKey.OnSelectionChangedEvent__DelegateSignature");

	FOnSelectionChangedEvent__DelegateSignature parms{};	
	parms.SelectedItem = SelectedItem;
	parms.SelectionType = SelectionType;

	ProcessEvent(fn, &parms);
}

void UComboBoxKey::OnOpeningEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.ComboBoxKey.OnOpeningEvent__DelegateSignature");

	FOnOpeningEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

bool UComboBoxKey::IsOpen(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ComboBoxKey.IsOpen");

	FIsOpen parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FName UComboBoxKey::GetSelectedOption(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ComboBoxKey.GetSelectedOption");

	FGetSelectedOption parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWidget* UComboBoxKey::GenerateWidgetEvent__DelegateSignature(struct FName Item){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.ComboBoxKey.GenerateWidgetEvent__DelegateSignature");

	FGenerateWidgetEvent__DelegateSignature parms{};	
	parms.Item = Item;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UComboBoxKey::ClearSelection(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ComboBoxKey.ClearSelection");

	FClearSelection parms{};	

	ProcessEvent(fn, &parms);
}

void UComboBoxKey::ClearOptions(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ComboBoxKey.ClearOptions");

	FClearOptions parms{};	

	ProcessEvent(fn, &parms);
}

void UComboBoxKey::AddOption(struct FName Option){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ComboBoxKey.AddOption");

	FAddOption parms{};	
	parms.Option = Option;

	ProcessEvent(fn, &parms);
}

void UComboBoxString::SetSelectedOption(struct FString Option){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ComboBoxString.SetSelectedOption");

	FSetSelectedOption parms{};	
	parms.Option = Option;

	ProcessEvent(fn, &parms);
}

void UComboBoxString::SetSelectedIndex(int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ComboBoxString.SetSelectedIndex");

	FSetSelectedIndex parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);
}

bool UComboBoxString::RemoveOption(struct FString Option){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ComboBoxString.RemoveOption");

	FRemoveOption parms{};	
	parms.Option = Option;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UComboBoxString::RefreshOptions(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ComboBoxString.RefreshOptions");

	FRefreshOptions parms{};	

	ProcessEvent(fn, &parms);
}

void UComboBoxString::OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature");

	FOnSelectionChangedEvent__DelegateSignature parms{};	
	parms.SelectedItem = SelectedItem;
	parms.SelectionType = SelectionType;

	ProcessEvent(fn, &parms);
}

void UComboBoxString::OnOpeningEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature");

	FOnOpeningEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

bool UComboBoxString::IsOpen(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ComboBoxString.IsOpen");

	FIsOpen parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UComboBoxString::GetSelectedOption(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetSelectedOption");

	FGetSelectedOption parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UComboBoxString::GetSelectedIndex(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetSelectedIndex");

	FGetSelectedIndex parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UComboBoxString::GetOptionCount(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetOptionCount");

	FGetOptionCount parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UComboBoxString::GetOptionAtIndex(int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetOptionAtIndex");

	FGetOptionAtIndex parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UComboBoxString::FindOptionIndex(struct FString Option){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ComboBoxString.FindOptionIndex");

	FFindOptionIndex parms{};	
	parms.Option = Option;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UComboBoxString::ClearSelection(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ComboBoxString.ClearSelection");

	FClearSelection parms{};	

	ProcessEvent(fn, &parms);
}

void UComboBoxString::ClearOptions(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ComboBoxString.ClearOptions");

	FClearOptions parms{};	

	ProcessEvent(fn, &parms);
}

void UComboBoxString::AddOption(struct FString Option){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ComboBoxString.AddOption");

	FAddOption parms{};	
	parms.Option = Option;

	ProcessEvent(fn, &parms);
}

void UDynamicEntryBox::Reset(bool bDeleteWidgets){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.Reset");

	FReset parms{};	
	parms.bDeleteWidgets = bDeleteWidgets;

	ProcessEvent(fn, &parms);
}

void UDynamicEntryBox::RemoveEntry(struct UUserWidget* EntryWidget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.RemoveEntry");

	FRemoveEntry parms{};	
	parms.EntryWidget = EntryWidget;

	ProcessEvent(fn, &parms);
}

struct UUserWidget* UDynamicEntryBox::BP_CreateEntryOfClass(UUserWidget* EntryClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.BP_CreateEntryOfClass");

	FBP_CreateEntryOfClass parms{};	
	parms.EntryClass = EntryClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UUserWidget* UDynamicEntryBox::BP_CreateEntry(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.BP_CreateEntry");

	FBP_CreateEntry parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UEditableTextBox::SetTextOverflowPolicy(uint8_t InOverflowPolicy){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetTextOverflowPolicy");

	FSetTextOverflowPolicy parms{};	
	parms.InOverflowPolicy = InOverflowPolicy;

	ProcessEvent(fn, &parms);
}

void UEditableTextBox::SetText(struct FText InText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetText");

	FSetText parms{};	
	parms.InText = InText;

	ProcessEvent(fn, &parms);
}

void UEditableTextBox::SetJustification(enum class ETextJustify InJustification){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetJustification");

	FSetJustification parms{};	
	parms.InJustification = InJustification;

	ProcessEvent(fn, &parms);
}

void UEditableTextBox::SetIsReadOnly(bool bReadOnly){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetIsReadOnly");

	FSetIsReadOnly parms{};	
	parms.bReadOnly = bReadOnly;

	ProcessEvent(fn, &parms);
}

void UEditableTextBox::SetIsPassword(bool bIsPassword){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetIsPassword");

	FSetIsPassword parms{};	
	parms.bIsPassword = bIsPassword;

	ProcessEvent(fn, &parms);
}

void UEditableTextBox::SetHintText(struct FText InText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetHintText");

	FSetHintText parms{};	
	parms.InText = InText;

	ProcessEvent(fn, &parms);
}

void UEditableTextBox::SetForegroundColor(struct FLinearColor Color){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetForegroundColor");

	FSetForegroundColor parms{};	
	parms.Color = Color;

	ProcessEvent(fn, &parms);
}

void UEditableTextBox::SetError(struct FText InError){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetError");

	FSetError parms{};	
	parms.InError = InError;

	ProcessEvent(fn, &parms);
}

void UEditableTextBox::OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature");

	FOnEditableTextBoxCommittedEvent__DelegateSignature parms{};	
	parms.Text = Text;
	parms.CommitMethod = CommitMethod;

	ProcessEvent(fn, &parms);
}

void UEditableTextBox::OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature");

	FOnEditableTextBoxChangedEvent__DelegateSignature parms{};	
	parms.Text = Text;

	ProcessEvent(fn, &parms);
}

bool UEditableTextBox::HasError(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.EditableTextBox.HasError");

	FHasError parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UEditableTextBox::GetText(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.EditableTextBox.GetText");

	FGetText parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UEditableTextBox::ClearError(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.EditableTextBox.ClearError");

	FClearError parms{};	

	ProcessEvent(fn, &parms);
}

void UExpandableArea::SetIsExpanded_Animated(bool IsExpanded){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ExpandableArea.SetIsExpanded_Animated");

	FSetIsExpanded_Animated parms{};	
	parms.IsExpanded = IsExpanded;

	ProcessEvent(fn, &parms);
}

void UExpandableArea::SetIsExpanded(bool IsExpanded){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ExpandableArea.SetIsExpanded");

	FSetIsExpanded parms{};	
	parms.IsExpanded = IsExpanded;

	ProcessEvent(fn, &parms);
}

bool UExpandableArea::GetIsExpanded(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ExpandableArea.GetIsExpanded");

	FGetIsExpanded parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGridPanel::SetRowFill(int32_t RowIndex, float Coefficient){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.GridPanel.SetRowFill");

	FSetRowFill parms{};	
	parms.RowIndex = RowIndex;
	parms.Coefficient = Coefficient;

	ProcessEvent(fn, &parms);
}

void UGridPanel::SetColumnFill(int32_t ColumnIndex, float Coefficient){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.GridPanel.SetColumnFill");

	FSetColumnFill parms{};	
	parms.ColumnIndex = ColumnIndex;
	parms.Coefficient = Coefficient;

	ProcessEvent(fn, &parms);
}

struct UGridSlot* UGridPanel::AddChildToGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.GridPanel.AddChildToGrid");

	FAddChildToGrid parms{};	
	parms.Content = Content;
	parms.InRow = InRow;
	parms.InColumn = InColumn;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGridSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.GridSlot.SetVerticalAlignment");

	FSetVerticalAlignment parms{};	
	parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(fn, &parms);
}

void UGridSlot::SetRowSpan(int32_t InRowSpan){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.GridSlot.SetRowSpan");

	FSetRowSpan parms{};	
	parms.InRowSpan = InRowSpan;

	ProcessEvent(fn, &parms);
}

void UGridSlot::SetRow(int32_t InRow){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.GridSlot.SetRow");

	FSetRow parms{};	
	parms.InRow = InRow;

	ProcessEvent(fn, &parms);
}

void UGridSlot::SetPadding(struct FMargin InPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.GridSlot.SetPadding");

	FSetPadding parms{};	
	parms.InPadding = InPadding;

	ProcessEvent(fn, &parms);
}

void UGridSlot::SetNudge(struct FVector2D InNudge){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.GridSlot.SetNudge");

	FSetNudge parms{};	
	parms.InNudge = InNudge;

	ProcessEvent(fn, &parms);
}

void UGridSlot::SetLayer(int32_t InLayer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.GridSlot.SetLayer");

	FSetLayer parms{};	
	parms.InLayer = InLayer;

	ProcessEvent(fn, &parms);
}

void UGridSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.GridSlot.SetHorizontalAlignment");

	FSetHorizontalAlignment parms{};	
	parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(fn, &parms);
}

void UGridSlot::SetColumnSpan(int32_t InColumnSpan){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.GridSlot.SetColumnSpan");

	FSetColumnSpan parms{};	
	parms.InColumnSpan = InColumnSpan;

	ProcessEvent(fn, &parms);
}

void UGridSlot::SetColumn(int32_t InColumn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.GridSlot.SetColumn");

	FSetColumn parms{};	
	parms.InColumn = InColumn;

	ProcessEvent(fn, &parms);
}

struct UHorizontalBoxSlot* UHorizontalBox::AddChildToHorizontalBox(struct UWidget* Content){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.HorizontalBox.AddChildToHorizontalBox");

	FAddChildToHorizontalBox parms{};	
	parms.Content = Content;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UHorizontalBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetVerticalAlignment");

	FSetVerticalAlignment parms{};	
	parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(fn, &parms);
}

void UHorizontalBoxSlot::SetSize(struct FSlateChildSize InSize){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetSize");

	FSetSize parms{};	
	parms.InSize = InSize;

	ProcessEvent(fn, &parms);
}

void UHorizontalBoxSlot::SetPadding(struct FMargin InPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetPadding");

	FSetPadding parms{};	
	parms.InPadding = InPadding;

	ProcessEvent(fn, &parms);
}

void UHorizontalBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetHorizontalAlignment");

	FSetHorizontalAlignment parms{};	
	parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(fn, &parms);
}

void UInputKeySelector::SetTextBlockVisibility(uint8_t Invisibility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetTextBlockVisibility");

	FSetTextBlockVisibility parms{};	
	parms.Invisibility = Invisibility;

	ProcessEvent(fn, &parms);
}

void UInputKeySelector::SetSelectedKey(struct FInputChord& InSelectedKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetSelectedKey");

	FSetSelectedKey parms{};	
	parms.InSelectedKey = InSelectedKey;

	ProcessEvent(fn, &parms);
}

void UInputKeySelector::SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetNoKeySpecifiedText");

	FSetNoKeySpecifiedText parms{};	
	parms.InNoKeySpecifiedText = InNoKeySpecifiedText;

	ProcessEvent(fn, &parms);
}

void UInputKeySelector::SetKeySelectionText(struct FText InKeySelectionText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetKeySelectionText");

	FSetKeySelectionText parms{};	
	parms.InKeySelectionText = InKeySelectionText;

	ProcessEvent(fn, &parms);
}

void UInputKeySelector::SetEscapeKeys(struct TArray<struct FKey>& InKeys){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetEscapeKeys");

	FSetEscapeKeys parms{};	
	parms.InKeys = InKeys;

	ProcessEvent(fn, &parms);
}

void UInputKeySelector::SetAllowModifierKeys(bool bInAllowModifierKeys){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetAllowModifierKeys");

	FSetAllowModifierKeys parms{};	
	parms.bInAllowModifierKeys = bInAllowModifierKeys;

	ProcessEvent(fn, &parms);
}

void UInputKeySelector::SetAllowGamepadKeys(bool bInAllowGamepadKeys){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetAllowGamepadKeys");

	FSetAllowGamepadKeys parms{};	
	parms.bInAllowGamepadKeys = bInAllowGamepadKeys;

	ProcessEvent(fn, &parms);
}

void UInputKeySelector::OnKeySelected__DelegateSignature(struct FInputChord SelectedKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature");

	FOnKeySelected__DelegateSignature parms{};	
	parms.SelectedKey = SelectedKey;

	ProcessEvent(fn, &parms);
}

void UInputKeySelector::OnIsSelectingKeyChanged__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature");

	FOnIsSelectingKeyChanged__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

bool UInputKeySelector::GetIsSelectingKey(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.InputKeySelector.GetIsSelectingKey");

	FGetIsSelectingKey parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UInvalidationBox::SetCanCache(bool CanCache){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.InvalidationBox.SetCanCache");

	FSetCanCache parms{};	
	parms.CanCache = CanCache;

	ProcessEvent(fn, &parms);
}

void UInvalidationBox::InvalidateCache(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.InvalidationBox.InvalidateCache");

	FInvalidateCache parms{};	

	ProcessEvent(fn, &parms);
}

bool UInvalidationBox::GetCanCache(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.InvalidationBox.GetCanCache");

	FGetCanCache parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMenuAnchor::ToggleOpen(bool bFocusOnOpen){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MenuAnchor.ToggleOpen");

	FToggleOpen parms{};	
	parms.bFocusOnOpen = bFocusOnOpen;

	ProcessEvent(fn, &parms);
}

bool UMenuAnchor::ShouldOpenDueToClick(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MenuAnchor.ShouldOpenDueToClick");

	FShouldOpenDueToClick parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMenuAnchor::SetPlacement(enum class EMenuPlacement InPlacement){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MenuAnchor.SetPlacement");

	FSetPlacement parms{};	
	parms.InPlacement = InPlacement;

	ProcessEvent(fn, &parms);
}

void UMenuAnchor::Open(bool bFocusMenu){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MenuAnchor.Open");

	FOpen parms{};	
	parms.bFocusMenu = bFocusMenu;

	ProcessEvent(fn, &parms);
}

bool UMenuAnchor::IsOpen(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MenuAnchor.IsOpen");

	FIsOpen parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMenuAnchor::HasOpenSubMenus(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MenuAnchor.HasOpenSubMenus");

	FHasOpenSubMenus parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UUserWidget* UMenuAnchor::GetUserWidget__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature");

	FGetUserWidget__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D UMenuAnchor::GetMenuPosition(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MenuAnchor.GetMenuPosition");

	FGetMenuPosition parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMenuAnchor::FitInWindow(bool bFit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MenuAnchor.FitInWindow");

	FFitInWindow parms{};	
	parms.bFit = bFit;

	ProcessEvent(fn, &parms);
}

void UMenuAnchor::Close(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MenuAnchor.Close");

	FClose parms{};	

	ProcessEvent(fn, &parms);
}

void UMultiLineEditableText::SetWidgetStyle(struct FTextBlockStyle& InWidgetStyle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetWidgetStyle");

	FSetWidgetStyle parms{};	
	parms.InWidgetStyle = InWidgetStyle;

	ProcessEvent(fn, &parms);
}

void UMultiLineEditableText::SetText(struct FText InText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetText");

	FSetText parms{};	
	parms.InText = InText;

	ProcessEvent(fn, &parms);
}

void UMultiLineEditableText::SetIsReadOnly(bool bReadOnly){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetIsReadOnly");

	FSetIsReadOnly parms{};	
	parms.bReadOnly = bReadOnly;

	ProcessEvent(fn, &parms);
}

void UMultiLineEditableText::SetHintText(struct FText InHintText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetHintText");

	FSetHintText parms{};	
	parms.InHintText = InHintText;

	ProcessEvent(fn, &parms);
}

void UMultiLineEditableText::SetFontOutlineMaterial(struct UMaterialInterface* InMaterial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetFontOutlineMaterial");

	FSetFontOutlineMaterial parms{};	
	parms.InMaterial = InMaterial;

	ProcessEvent(fn, &parms);
}

void UMultiLineEditableText::SetFontMaterial(struct UMaterialInterface* InMaterial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetFontMaterial");

	FSetFontMaterial parms{};	
	parms.InMaterial = InMaterial;

	ProcessEvent(fn, &parms);
}

void UMultiLineEditableText::SetFont(struct FSlateFontInfo InFontInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetFont");

	FSetFont parms{};	
	parms.InFontInfo = InFontInfo;

	ProcessEvent(fn, &parms);
}

void UMultiLineEditableText::OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature");

	FOnMultiLineEditableTextCommittedEvent__DelegateSignature parms{};	
	parms.Text = Text;
	parms.CommitMethod = CommitMethod;

	ProcessEvent(fn, &parms);
}

void UMultiLineEditableText::OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText& Text){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature");

	FOnMultiLineEditableTextChangedEvent__DelegateSignature parms{};	
	parms.Text = Text;

	ProcessEvent(fn, &parms);
}

struct FText UMultiLineEditableText::GetText(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.GetText");

	FGetText parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UMultiLineEditableText::GetHintText(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.GetHintText");

	FGetHintText parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSlateFontInfo UMultiLineEditableText::GetFont(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.GetFont");

	FGetFont parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void URetainerBox::SetTextureParameter(struct FName TextureParameter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetTextureParameter");

	FSetTextureParameter parms{};	
	parms.TextureParameter = TextureParameter;

	ProcessEvent(fn, &parms);
}

void URetainerBox::SetRetainRendering(bool bInRetainRendering){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetRetainRendering");

	FSetRetainRendering parms{};	
	parms.bInRetainRendering = bInRetainRendering;

	ProcessEvent(fn, &parms);
}

void URetainerBox::SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetRenderingPhase");

	FSetRenderingPhase parms{};	
	parms.RenderPhase = RenderPhase;
	parms.TotalPhases = TotalPhases;

	ProcessEvent(fn, &parms);
}

void URetainerBox::SetEffectMaterial(struct UMaterialInterface* EffectMaterial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetEffectMaterial");

	FSetEffectMaterial parms{};	
	parms.EffectMaterial = EffectMaterial;

	ProcessEvent(fn, &parms);
}

void URetainerBox::RequestRender(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RetainerBox.RequestRender");

	FRequestRender parms{};	

	ProcessEvent(fn, &parms);
}

struct UMaterialInstanceDynamic* URetainerBox::GetEffectMaterial(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.RetainerBox.GetEffectMaterial");

	FGetEffectMaterial parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USafeZone::SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SafeZone.SetSidesToPad");

	FSetSidesToPad parms{};	
	parms.InPadLeft = InPadLeft;
	parms.InPadRight = InPadRight;
	parms.InPadTop = InPadTop;
	parms.InPadBottom = InPadBottom;

	ProcessEvent(fn, &parms);
}

void UScaleBox::SetUserSpecifiedScale(float InUserSpecifiedScale){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetUserSpecifiedScale");

	FSetUserSpecifiedScale parms{};	
	parms.InUserSpecifiedScale = InUserSpecifiedScale;

	ProcessEvent(fn, &parms);
}

void UScaleBox::SetStretchDirection(enum class EStretchDirection InStretchDirection){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetStretchDirection");

	FSetStretchDirection parms{};	
	parms.InStretchDirection = InStretchDirection;

	ProcessEvent(fn, &parms);
}

void UScaleBox::SetStretch(enum class EStretch InStretch){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetStretch");

	FSetStretch parms{};	
	parms.InStretch = InStretch;

	ProcessEvent(fn, &parms);
}

void UScaleBox::SetIgnoreInheritedScale(bool bInIgnoreInheritedScale){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetIgnoreInheritedScale");

	FSetIgnoreInheritedScale parms{};	
	parms.bInIgnoreInheritedScale = bInIgnoreInheritedScale;

	ProcessEvent(fn, &parms);
}

void UScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScrollBar.SetState");

	FSetState parms{};	
	parms.InOffsetFraction = InOffsetFraction;
	parms.InThumbSizeFraction = InThumbSizeFraction;

	ProcessEvent(fn, &parms);
}

void UScrollBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScrollBoxSlot.SetVerticalAlignment");

	FSetVerticalAlignment parms{};	
	parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(fn, &parms);
}

void UScrollBoxSlot::SetPadding(struct FMargin InPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScrollBoxSlot.SetPadding");

	FSetPadding parms{};	
	parms.InPadding = InPadding;

	ProcessEvent(fn, &parms);
}

void UScrollBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.ScrollBoxSlot.SetHorizontalAlignment");

	FSetHorizontalAlignment parms{};	
	parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(fn, &parms);
}

void USizeBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetVerticalAlignment");

	FSetVerticalAlignment parms{};	
	parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(fn, &parms);
}

void USizeBoxSlot::SetPadding(struct FMargin InPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetPadding");

	FSetPadding parms{};	
	parms.InPadding = InPadding;

	ProcessEvent(fn, &parms);
}

void USizeBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetHorizontalAlignment");

	FSetHorizontalAlignment parms{};	
	parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(fn, &parms);
}

void USpinBox::SetValue(float NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SpinBox.SetValue");

	FSetValue parms{};	
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void USpinBox::SetMinValue(float NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinValue");

	FSetMinValue parms{};	
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void USpinBox::SetMinSliderValue(float NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinSliderValue");

	FSetMinSliderValue parms{};	
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void USpinBox::SetMinFractionalDigits(int32_t NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinFractionalDigits");

	FSetMinFractionalDigits parms{};	
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void USpinBox::SetMaxValue(float NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxValue");

	FSetMaxValue parms{};	
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void USpinBox::SetMaxSliderValue(float NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxSliderValue");

	FSetMaxSliderValue parms{};	
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void USpinBox::SetMaxFractionalDigits(int32_t NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxFractionalDigits");

	FSetMaxFractionalDigits parms{};	
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void USpinBox::SetForegroundColor(struct FSlateColor InForegroundColor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SpinBox.SetForegroundColor");

	FSetForegroundColor parms{};	
	parms.InForegroundColor = InForegroundColor;

	ProcessEvent(fn, &parms);
}

void USpinBox::SetDelta(float NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SpinBox.SetDelta");

	FSetDelta parms{};	
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void USpinBox::SetAlwaysUsesDeltaSnap(bool bNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SpinBox.SetAlwaysUsesDeltaSnap");

	FSetAlwaysUsesDeltaSnap parms{};	
	parms.bNewValue = bNewValue;

	ProcessEvent(fn, &parms);
}

void USpinBox::OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature");

	FOnSpinBoxValueCommittedEvent__DelegateSignature parms{};	
	parms.InValue = InValue;
	parms.CommitMethod = CommitMethod;

	ProcessEvent(fn, &parms);
}

void USpinBox::OnSpinBoxValueChangedEvent__DelegateSignature(float InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature");

	FOnSpinBoxValueChangedEvent__DelegateSignature parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void USpinBox::OnSpinBoxBeginSliderMovement__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature");

	FOnSpinBoxBeginSliderMovement__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

float USpinBox::GetValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SpinBox.GetValue");

	FGetValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float USpinBox::GetMinValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinValue");

	FGetMinValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float USpinBox::GetMinSliderValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinSliderValue");

	FGetMinSliderValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t USpinBox::GetMinFractionalDigits(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinFractionalDigits");

	FGetMinFractionalDigits parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float USpinBox::GetMaxValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxValue");

	FGetMaxValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float USpinBox::GetMaxSliderValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxSliderValue");

	FGetMaxSliderValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t USpinBox::GetMaxFractionalDigits(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxFractionalDigits");

	FGetMaxFractionalDigits parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float USpinBox::GetDelta(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SpinBox.GetDelta");

	FGetDelta parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool USpinBox::GetAlwaysUsesDeltaSnap(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SpinBox.GetAlwaysUsesDeltaSnap");

	FGetAlwaysUsesDeltaSnap parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USpinBox::ClearMinValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMinValue");

	FClearMinValue parms{};	

	ProcessEvent(fn, &parms);
}

void USpinBox::ClearMinSliderValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMinSliderValue");

	FClearMinSliderValue parms{};	

	ProcessEvent(fn, &parms);
}

void USpinBox::ClearMaxValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMaxValue");

	FClearMaxValue parms{};	

	ProcessEvent(fn, &parms);
}

void USpinBox::ClearMaxSliderValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMaxSliderValue");

	FClearMaxSliderValue parms{};	

	ProcessEvent(fn, &parms);
}

struct UStackBoxSlot* UStackBox::AddChildToStackBox(struct UWidget* Content){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.StackBox.AddChildToStackBox");

	FAddChildToStackBox parms{};	
	parms.Content = Content;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UThrobber::SetNumberOfPieces(int32_t InNumberOfPieces){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Throbber.SetNumberOfPieces");

	FSetNumberOfPieces parms{};	
	parms.InNumberOfPieces = InNumberOfPieces;

	ProcessEvent(fn, &parms);
}

void UThrobber::SetAnimateVertically(bool bInAnimateVertically){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateVertically");

	FSetAnimateVertically parms{};	
	parms.bInAnimateVertically = bInAnimateVertically;

	ProcessEvent(fn, &parms);
}

void UThrobber::SetAnimateOpacity(bool bInAnimateOpacity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateOpacity");

	FSetAnimateOpacity parms{};	
	parms.bInAnimateOpacity = bInAnimateOpacity;

	ProcessEvent(fn, &parms);
}

void UThrobber::SetAnimateHorizontally(bool bInAnimateHorizontally){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateHorizontally");

	FSetAnimateHorizontally parms{};	
	parms.bInAnimateHorizontally = bInAnimateHorizontally;

	ProcessEvent(fn, &parms);
}

void UUniformGridPanel::SetSlotPadding(struct FMargin InSlotPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetSlotPadding");

	FSetSlotPadding parms{};	
	parms.InSlotPadding = InSlotPadding;

	ProcessEvent(fn, &parms);
}

void UUniformGridPanel::SetMinDesiredSlotWidth(float InMinDesiredSlotWidth){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetMinDesiredSlotWidth");

	FSetMinDesiredSlotWidth parms{};	
	parms.InMinDesiredSlotWidth = InMinDesiredSlotWidth;

	ProcessEvent(fn, &parms);
}

void UUniformGridPanel::SetMinDesiredSlotHeight(float InMinDesiredSlotHeight){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetMinDesiredSlotHeight");

	FSetMinDesiredSlotHeight parms{};	
	parms.InMinDesiredSlotHeight = InMinDesiredSlotHeight;

	ProcessEvent(fn, &parms);
}

struct UUniformGridSlot* UUniformGridPanel::AddChildToUniformGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.AddChildToUniformGrid");

	FAddChildToUniformGrid parms{};	
	parms.Content = Content;
	parms.InRow = InRow;
	parms.InColumn = InColumn;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UUniformGridSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetVerticalAlignment");

	FSetVerticalAlignment parms{};	
	parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(fn, &parms);
}

void UUniformGridSlot::SetRow(int32_t InRow){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetRow");

	FSetRow parms{};	
	parms.InRow = InRow;

	ProcessEvent(fn, &parms);
}

void UUniformGridSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetHorizontalAlignment");

	FSetHorizontalAlignment parms{};	
	parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(fn, &parms);
}

void UUniformGridSlot::SetColumn(int32_t InColumn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetColumn");

	FSetColumn parms{};	
	parms.InColumn = InColumn;

	ProcessEvent(fn, &parms);
}

struct UVerticalBoxSlot* UVerticalBox::AddChildToVerticalBox(struct UWidget* Content){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.VerticalBox.AddChildToVerticalBox");

	FAddChildToVerticalBox parms{};	
	parms.Content = Content;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UVerticalBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetVerticalAlignment");

	FSetVerticalAlignment parms{};	
	parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(fn, &parms);
}

void UVerticalBoxSlot::SetSize(struct FSlateChildSize InSize){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetSize");

	FSetSize parms{};	
	parms.InSize = InSize;

	ProcessEvent(fn, &parms);
}

void UVerticalBoxSlot::SetPadding(struct FMargin InPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetPadding");

	FSetPadding parms{};	
	parms.InPadding = InPadding;

	ProcessEvent(fn, &parms);
}

void UVerticalBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetHorizontalAlignment");

	FSetHorizontalAlignment parms{};	
	parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(fn, &parms);
}

struct AActor* UViewport::Spawn(AActor* ActorClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Viewport.Spawn");

	FSpawn parms{};	
	parms.ActorClass = ActorClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UViewport::SetViewRotation(struct FRotator Rotation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Viewport.SetViewRotation");

	FSetViewRotation parms{};	
	parms.Rotation = Rotation;

	ProcessEvent(fn, &parms);
}

void UViewport::SetViewLocation(struct FVector Location){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Viewport.SetViewLocation");

	FSetViewLocation parms{};	
	parms.Location = Location;

	ProcessEvent(fn, &parms);
}

struct FRotator UViewport::GetViewRotation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewRotation");

	FGetViewRotation parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWorld* UViewport::GetViewportWorld(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewportWorld");

	FGetViewportWorld parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector UViewport::GetViewLocation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewLocation");

	FGetViewLocation parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWidgetInteractionComponent::SetFocus(struct UWidget* FocusWidget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SetFocus");

	FSetFocus parms{};	
	parms.FocusWidget = FocusWidget;

	ProcessEvent(fn, &parms);
}

void UWidgetInteractionComponent::SetCustomHitResult(struct FHitResult& HitResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SetCustomHitResult");

	FSetCustomHitResult parms{};	
	parms.HitResult = HitResult;

	ProcessEvent(fn, &parms);
}

bool UWidgetInteractionComponent::SendKeyChar(struct FString Characters, bool bRepeat){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SendKeyChar");

	FSendKeyChar parms{};	
	parms.Characters = Characters;
	parms.bRepeat = bRepeat;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWidgetInteractionComponent::ScrollWheel(float ScrollDelta){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ScrollWheel");

	FScrollWheel parms{};	
	parms.ScrollDelta = ScrollDelta;

	ProcessEvent(fn, &parms);
}

void UWidgetInteractionComponent::ReleasePointerKey(struct FKey Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ReleasePointerKey");

	FReleasePointerKey parms{};	
	parms.Key = Key;

	ProcessEvent(fn, &parms);
}

bool UWidgetInteractionComponent::ReleaseKey(struct FKey Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ReleaseKey");

	FReleaseKey parms{};	
	parms.Key = Key;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWidgetInteractionComponent::PressPointerKey(struct FKey Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressPointerKey");

	FPressPointerKey parms{};	
	parms.Key = Key;

	ProcessEvent(fn, &parms);
}

bool UWidgetInteractionComponent::PressKey(struct FKey Key, bool bRepeat){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressKey");

	FPressKey parms{};	
	parms.Key = Key;
	parms.bRepeat = bRepeat;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWidgetInteractionComponent::PressAndReleaseKey(struct FKey Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressAndReleaseKey");

	FPressAndReleaseKey parms{};	
	parms.Key = Key;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWidgetInteractionComponent::IsOverInteractableWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverInteractableWidget");

	FIsOverInteractableWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWidgetInteractionComponent::IsOverHitTestVisibleWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget");

	FIsOverHitTestVisibleWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWidgetInteractionComponent::IsOverFocusableWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverFocusableWidget");

	FIsOverFocusableWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FHitResult UWidgetInteractionComponent::GetLastHitResult(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.GetLastHitResult");

	FGetLastHitResult parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWidgetComponent* UWidgetInteractionComponent::GetHoveredWidgetComponent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent");

	FGetHoveredWidgetComponent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D UWidgetInteractionComponent::Get2DHitLocation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.Get2DHitLocation");

	FGet2DHitLocation parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWindowTitleBarArea::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetVerticalAlignment");

	FSetVerticalAlignment parms{};	
	parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(fn, &parms);
}

void UWindowTitleBarArea::SetPadding(struct FMargin InPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetPadding");

	FSetPadding parms{};	
	parms.InPadding = InPadding;

	ProcessEvent(fn, &parms);
}

void UWindowTitleBarArea::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetHorizontalAlignment");

	FSetHorizontalAlignment parms{};	
	parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(fn, &parms);
}

void UWindowTitleBarAreaSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment");

	FSetVerticalAlignment parms{};	
	parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(fn, &parms);
}

void UWindowTitleBarAreaSlot::SetPadding(struct FMargin InPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetPadding");

	FSetPadding parms{};	
	parms.InPadding = InPadding;

	ProcessEvent(fn, &parms);
}

void UWindowTitleBarAreaSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment");

	FSetHorizontalAlignment parms{};	
	parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(fn, &parms);
}

void UWrapBox::SetInnerSlotPadding(struct FVector2D InPadding){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WrapBox.SetInnerSlotPadding");

	FSetInnerSlotPadding parms{};	
	parms.InPadding = InPadding;

	ProcessEvent(fn, &parms);
}

void UWrapBox::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WrapBox.SetHorizontalAlignment");

	FSetHorizontalAlignment parms{};	
	parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(fn, &parms);
}

struct UWrapBoxSlot* UWrapBox::AddChildToWrapBox(struct UWidget* Content){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WrapBox.AddChildToWrapBox");

	FAddChildToWrapBox parms{};	
	parms.Content = Content;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D USlateBlueprintLibrary::TransformVectorLocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalVector){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute");

	FTransformVectorLocalToAbsolute parms{};	
	parms.Geometry = Geometry;
	parms.LocalVector = LocalVector;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D USlateBlueprintLibrary::TransformVectorAbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteVector){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal");

	FTransformVectorAbsoluteToLocal parms{};	
	parms.Geometry = Geometry;
	parms.AbsoluteVector = AbsoluteVector;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float USlateBlueprintLibrary::TransformScalarLocalToAbsolute(struct FGeometry& Geometry, float LocalScalar){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute");

	FTransformScalarLocalToAbsolute parms{};	
	parms.Geometry = Geometry;
	parms.LocalScalar = LocalScalar;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float USlateBlueprintLibrary::TransformScalarAbsoluteToLocal(struct FGeometry& Geometry, float AbsoluteScalar){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal");

	FTransformScalarAbsoluteToLocal parms{};	
	parms.Geometry = Geometry;
	parms.AbsoluteScalar = AbsoluteScalar;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USlateBlueprintLibrary::ScreenToWidgetLocal(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D ScreenPosition, struct FVector2D& LocalCoordinate, bool bIncludeWindowPosition){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal");

	FScreenToWidgetLocal parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Geometry = Geometry;
	parms.ScreenPosition = ScreenPosition;
	parms.LocalCoordinate = LocalCoordinate;
	parms.bIncludeWindowPosition = bIncludeWindowPosition;

	ProcessEvent(fn, &parms);
}

void USlateBlueprintLibrary::ScreenToWidgetAbsolute(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute");

	FScreenToWidgetAbsolute parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.ScreenPosition = ScreenPosition;
	parms.AbsoluteCoordinate = AbsoluteCoordinate;
	parms.bIncludeWindowPosition = bIncludeWindowPosition;

	ProcessEvent(fn, &parms);
}

void USlateBlueprintLibrary::ScreenToViewport(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& ViewportPosition){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.ScreenToViewport");

	FScreenToViewport parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.ScreenPosition = ScreenPosition;
	parms.ViewportPosition = ViewportPosition;

	ProcessEvent(fn, &parms);
}

void USlateBlueprintLibrary::LocalToViewport(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D LocalCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.LocalToViewport");

	FLocalToViewport parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Geometry = Geometry;
	parms.LocalCoordinate = LocalCoordinate;
	parms.PixelPosition = PixelPosition;
	parms.ViewportPosition = ViewportPosition;

	ProcessEvent(fn, &parms);
}

struct FVector2D USlateBlueprintLibrary::LocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalCoordinate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.LocalToAbsolute");

	FLocalToAbsolute parms{};	
	parms.Geometry = Geometry;
	parms.LocalCoordinate = LocalCoordinate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool USlateBlueprintLibrary::IsUnderLocation(struct FGeometry& Geometry, struct FVector2D& AbsoluteCoordinate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.IsUnderLocation");

	FIsUnderLocation parms{};	
	parms.Geometry = Geometry;
	parms.AbsoluteCoordinate = AbsoluteCoordinate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D USlateBlueprintLibrary::GetLocalTopLeft(struct FGeometry& Geometry){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.GetLocalTopLeft");

	FGetLocalTopLeft parms{};	
	parms.Geometry = Geometry;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D USlateBlueprintLibrary::GetLocalSize(struct FGeometry& Geometry){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.GetLocalSize");

	FGetLocalSize parms{};	
	parms.Geometry = Geometry;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D USlateBlueprintLibrary::GetAbsoluteSize(struct FGeometry& Geometry){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.GetAbsoluteSize");

	FGetAbsoluteSize parms{};	
	parms.Geometry = Geometry;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool USlateBlueprintLibrary::EqualEqual_SlateBrush(struct FSlateBrush& A, struct FSlateBrush& B){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush");

	FEqualEqual_SlateBrush parms{};	
	parms.A = A;
	parms.B = B;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USlateBlueprintLibrary::AbsoluteToViewport(struct UObject* WorldContextObject, struct FVector2D AbsoluteDesktopCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.AbsoluteToViewport");

	FAbsoluteToViewport parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.AbsoluteDesktopCoordinate = AbsoluteDesktopCoordinate;
	parms.PixelPosition = PixelPosition;
	parms.ViewportPosition = ViewportPosition;

	ProcessEvent(fn, &parms);
}

struct FVector2D USlateBlueprintLibrary::AbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteCoordinate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.AbsoluteToLocal");

	FAbsoluteToLocal parms{};	
	parms.Geometry = Geometry;
	parms.AbsoluteCoordinate = AbsoluteCoordinate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWrapBoxSlot* UWidgetLayoutLibrary::SlotAsWrapBoxSlot(struct UWidget* Widget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot");

	FSlotAsWrapBoxSlot parms{};	
	parms.Widget = Widget;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWidgetSwitcherSlot* UWidgetLayoutLibrary::SlotAsWidgetSwitcherSlot(struct UWidget* Widget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot");

	FSlotAsWidgetSwitcherSlot parms{};	
	parms.Widget = Widget;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UVerticalBoxSlot* UWidgetLayoutLibrary::SlotAsVerticalBoxSlot(struct UWidget* Widget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot");

	FSlotAsVerticalBoxSlot parms{};	
	parms.Widget = Widget;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UUniformGridSlot* UWidgetLayoutLibrary::SlotAsUniformGridSlot(struct UWidget* Widget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot");

	FSlotAsUniformGridSlot parms{};	
	parms.Widget = Widget;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct USizeBoxSlot* UWidgetLayoutLibrary::SlotAsSizeBoxSlot(struct UWidget* Widget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot");

	FSlotAsSizeBoxSlot parms{};	
	parms.Widget = Widget;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UScrollBoxSlot* UWidgetLayoutLibrary::SlotAsScrollBoxSlot(struct UWidget* Widget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot");

	FSlotAsScrollBoxSlot parms{};	
	parms.Widget = Widget;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UScaleBoxSlot* UWidgetLayoutLibrary::SlotAsScaleBoxSlot(struct UWidget* Widget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot");

	FSlotAsScaleBoxSlot parms{};	
	parms.Widget = Widget;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct USafeZoneSlot* UWidgetLayoutLibrary::SlotAsSafeBoxSlot(struct UWidget* Widget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot");

	FSlotAsSafeBoxSlot parms{};	
	parms.Widget = Widget;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UOverlaySlot* UWidgetLayoutLibrary::SlotAsOverlaySlot(struct UWidget* Widget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot");

	FSlotAsOverlaySlot parms{};	
	parms.Widget = Widget;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UHorizontalBoxSlot* UWidgetLayoutLibrary::SlotAsHorizontalBoxSlot(struct UWidget* Widget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot");

	FSlotAsHorizontalBoxSlot parms{};	
	parms.Widget = Widget;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UGridSlot* UWidgetLayoutLibrary::SlotAsGridSlot(struct UWidget* Widget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsGridSlot");

	FSlotAsGridSlot parms{};	
	parms.Widget = Widget;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UCanvasPanelSlot* UWidgetLayoutLibrary::SlotAsCanvasSlot(struct UWidget* Widget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot");

	FSlotAsCanvasSlot parms{};	
	parms.Widget = Widget;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UBorderSlot* UWidgetLayoutLibrary::SlotAsBorderSlot(struct UWidget* Widget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot");

	FSlotAsBorderSlot parms{};	
	parms.Widget = Widget;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWidgetLayoutLibrary::RemoveAllWidgets(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.RemoveAllWidgets");

	FRemoveAllWidgets parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);
}

bool UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(struct APlayerController* PlayerController, struct FVector WorldLocation, struct FVector2D& ScreenPosition, bool bPlayerViewportRelative){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition");

	FProjectWorldLocationToWidgetPosition parms{};	
	parms.PlayerController = PlayerController;
	parms.WorldLocation = WorldLocation;
	parms.ScreenPosition = ScreenPosition;
	parms.bPlayerViewportRelative = bPlayerViewportRelative;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGeometry UWidgetLayoutLibrary::GetViewportWidgetGeometry(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry");

	FGetViewportWidgetGeometry parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D UWidgetLayoutLibrary::GetViewportSize(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetViewportSize");

	FGetViewportSize parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UWidgetLayoutLibrary::GetViewportScale(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetViewportScale");

	FGetViewportScale parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGeometry UWidgetLayoutLibrary::GetPlayerScreenWidgetGeometry(struct APlayerController* PlayerController){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry");

	FGetPlayerScreenWidgetGeometry parms{};	
	parms.PlayerController = PlayerController;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UWidgetLayoutLibrary::GetMousePositionScaledByDPI(struct APlayerController* Player, float& LocationX, float& LocationY){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI");

	FGetMousePositionScaledByDPI parms{};	
	parms.Player = Player;
	parms.LocationX = LocationX;
	parms.LocationY = LocationY;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D UWidgetLayoutLibrary::GetMousePositionOnViewport(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport");

	FGetMousePositionOnViewport parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D UWidgetLayoutLibrary::GetMousePositionOnPlatform(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform");

	FGetMousePositionOnPlatform parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

