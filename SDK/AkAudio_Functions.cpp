#include "pch.h"
#include "SDK.h"

struct FText UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToText(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText");

	FConv_FAkBoolPropertyToControlToText parms{};	
	parms.INAkBoolPropertyToControl = INAkBoolPropertyToControl;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToString(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString");

	FConv_FAkBoolPropertyToControlToString parms{};	
	parms.INAkBoolPropertyToControl = INAkBoolPropertyToControl;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAkItemBoolProperties::SetSearchText(struct FString newText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolProperties.SetSearchText");

	FSetSearchText parms{};	
	parms.newText = newText;

	ProcessEvent(fn, &parms);
}

struct FString UAkItemBoolProperties::GetSelectedProperty(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolProperties.GetSelectedProperty");

	FGetSelectedProperty parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UAkItemBoolProperties::GetSearchText(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolProperties.GetSearchText");

	FGetSearchText parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAkGameObject::Stop(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.Stop");

	FStop parms{};	

	ProcessEvent(fn, &parms);
}

void UAkGameObject::SetRTPCValue(struct UAkRtpc* RtpcValue, float Value, int32_t InterpolationTimeMs, struct FString Rtpc){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.SetRTPCValue");

	FSetRTPCValue parms{};	
	parms.RtpcValue = RtpcValue;
	parms.Value = Value;
	parms.InterpolationTimeMs = InterpolationTimeMs;
	parms.Rtpc = Rtpc;

	ProcessEvent(fn, &parms);
}

void UAkGameObject::PostAssociatedAkEventAsync(struct UObject* WorldContextObject, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct FLatentActionInfo LatentInfo, int32_t& PlayingID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.PostAssociatedAkEventAsync");

	FPostAssociatedAkEventAsync parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.CallbackMask = CallbackMask;
	parms.PostEventCallback = PostEventCallback;
	parms.LatentInfo = LatentInfo;
	parms.PlayingID = PlayingID;

	ProcessEvent(fn, &parms);
}

int32_t UAkGameObject::PostAssociatedAkEvent(int32_t CallbackMask, struct FDelegate& PostEventCallback){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.PostAssociatedAkEvent");

	FPostAssociatedAkEvent parms{};	
	parms.CallbackMask = CallbackMask;
	parms.PostEventCallback = PostEventCallback;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAkGameObject::PostAkEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, int32_t& PlayingID, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct FLatentActionInfo LatentInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.PostAkEventAsync");

	FPostAkEventAsync parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.AkEvent = AkEvent;
	parms.PlayingID = PlayingID;
	parms.CallbackMask = CallbackMask;
	parms.PostEventCallback = PostEventCallback;
	parms.LatentInfo = LatentInfo;

	ProcessEvent(fn, &parms);
}

int32_t UAkGameObject::PostAkEvent(struct UAkAudioEvent* AkEvent, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct FString InEventName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.PostAkEvent");

	FPostAkEvent parms{};	
	parms.AkEvent = AkEvent;
	parms.CallbackMask = CallbackMask;
	parms.PostEventCallback = PostEventCallback;
	parms.InEventName = InEventName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAkGameObject::GetRTPCValue(struct UAkRtpc* RtpcValue, uint8_t InputValueType, float& Value, uint8_t& OutputValueType, struct FString Rtpc, int32_t PlayingID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.GetRTPCValue");

	FGetRTPCValue parms{};	
	parms.RtpcValue = RtpcValue;
	parms.InputValueType = InputValueType;
	parms.Value = Value;
	parms.OutputValueType = OutputValueType;
	parms.Rtpc = Rtpc;
	parms.PlayingID = PlayingID;

	ProcessEvent(fn, &parms);
}

void AAkAmbientSound::StopAmbientSound(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkAmbientSound.StopAmbientSound");

	FStopAmbientSound parms{};	

	ProcessEvent(fn, &parms);
}

void AAkAmbientSound::StartAmbientSound(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkAmbientSound.StartAmbientSound");

	FStartAmbientSound parms{};	

	ProcessEvent(fn, &parms);
}

bool UAkPortalComponent::PortalPlacementValid(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkPortalComponent.PortalPlacementValid");

	FPortalPlacementValid parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAkPortalComponent::OpenPortal(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkPortalComponent.OpenPortal");

	FOpenPortal parms{};	

	ProcessEvent(fn, &parms);
}

struct UPrimitiveComponent* UAkPortalComponent::GetPrimitiveParent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkPortalComponent.GetPrimitiveParent");

	FGetPrimitiveParent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UAkPortalComponent::GetCurrentState(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkPortalComponent.GetCurrentState");

	FGetCurrentState parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAkPortalComponent::ClosePortal(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkPortalComponent.ClosePortal");

	FClosePortal parms{};	

	ProcessEvent(fn, &parms);
}

struct FText UAkItemPropertiesConv::Conv_FAkPropertyToControlToText(struct FAkPropertyToControl& INAkPropertyToControl){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText");

	FConv_FAkPropertyToControlToText parms{};	
	parms.INAkPropertyToControl = INAkPropertyToControl;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UAkItemPropertiesConv::Conv_FAkPropertyToControlToString(struct FAkPropertyToControl& INAkPropertyToControl){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString");

	FConv_FAkPropertyToControlToString parms{};	
	parms.INAkPropertyToControl = INAkPropertyToControl;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UAkAudioInputComponent::PostAssociatedAudioInputEvent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent");

	FPostAssociatedAudioInputEvent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAkComponent::UseReverbVolumes(bool inUseReverbVolumes){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkComponent.UseReverbVolumes");

	FUseReverbVolumes parms{};	
	parms.inUseReverbVolumes = inUseReverbVolumes;

	ProcessEvent(fn, &parms);
}

void UAkComponent::UseEarlyReflections(struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkComponent.UseEarlyReflections");

	FUseEarlyReflections parms{};	
	parms.AuxBus = AuxBus;
	parms.Order = Order;
	parms.BusSendGain = BusSendGain;
	parms.MaxPathLength = MaxPathLength;
	parms.SpotReflectors = SpotReflectors;
	parms.AuxBusName = AuxBusName;

	ProcessEvent(fn, &parms);
}

void UAkComponent::SetSwitch(struct UAkSwitchValue* SwitchValue, struct FString SwitchGroup, struct FString SwitchState){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetSwitch");

	FSetSwitch parms{};	
	parms.SwitchValue = SwitchValue;
	parms.SwitchGroup = SwitchGroup;
	parms.SwitchState = SwitchState;

	ProcessEvent(fn, &parms);
}

void UAkComponent::SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed");

	FSetStopWhenOwnerDestroyed parms{};	
	parms.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;

	ProcessEvent(fn, &parms);
}

void UAkComponent::SetOutputBusVolume(float BusVolume){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetOutputBusVolume");

	FSetOutputBusVolume parms{};	
	parms.BusVolume = BusVolume;

	ProcessEvent(fn, &parms);
}

void UAkComponent::SetListeners(struct TArray<struct UAkComponent*>& Listeners){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetListeners");

	FSetListeners parms{};	
	parms.Listeners = Listeners;

	ProcessEvent(fn, &parms);
}

void UAkComponent::SetGameObjectRadius(float in_outerRadius, float in_innerRadius){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetGameObjectRadius");

	FSetGameObjectRadius parms{};	
	parms.in_outerRadius = in_outerRadius;
	parms.in_innerRadius = in_innerRadius;

	ProcessEvent(fn, &parms);
}

void UAkComponent::SetEnableSpotReflectors(bool in_enable){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetEnableSpotReflectors");

	FSetEnableSpotReflectors parms{};	
	parms.in_enable = in_enable;

	ProcessEvent(fn, &parms);
}

void UAkComponent::SetEarlyReflectionsVolume(float SendVolume){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetEarlyReflectionsVolume");

	FSetEarlyReflectionsVolume parms{};	
	parms.SendVolume = SendVolume;

	ProcessEvent(fn, &parms);
}

void UAkComponent::SetEarlyReflectionsAuxBus(struct FString AuxBusName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus");

	FSetEarlyReflectionsAuxBus parms{};	
	parms.AuxBusName = AuxBusName;

	ProcessEvent(fn, &parms);
}

void UAkComponent::SetAttenuationScalingFactor(float Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetAttenuationScalingFactor");

	FSetAttenuationScalingFactor parms{};	
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void UAkComponent::PostTrigger(struct UAkTrigger* TriggerValue, struct FString Trigger){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostTrigger");

	FPostTrigger parms{};	
	parms.TriggerValue = TriggerValue;
	parms.Trigger = Trigger;

	ProcessEvent(fn, &parms);
}

void UAkComponent::PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, struct FLatentActionInfo LatentInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync");

	FPostAssociatedAkEventAndWaitForEndAsync parms{};	
	parms.PlayingID = PlayingID;
	parms.LatentInfo = LatentInfo;

	ProcessEvent(fn, &parms);
}

int32_t UAkComponent::PostAssociatedAkEventAndWaitForEnd(struct FLatentActionInfo LatentInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd");

	FPostAssociatedAkEventAndWaitForEnd parms{};	
	parms.LatentInfo = LatentInfo;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAkComponent::PostAkEventAndWaitForEndAsync(struct UAkAudioEvent* AkEvent, int32_t& PlayingID, struct FLatentActionInfo LatentInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync");

	FPostAkEventAndWaitForEndAsync parms{};	
	parms.AkEvent = AkEvent;
	parms.PlayingID = PlayingID;
	parms.LatentInfo = LatentInfo;

	ProcessEvent(fn, &parms);
}

int32_t UAkComponent::PostAkEventAndWaitForEnd(struct UAkAudioEvent* AkEvent, struct FString in_EventName, struct FLatentActionInfo LatentInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAkEventAndWaitForEnd");

	FPostAkEventAndWaitForEnd parms{};	
	parms.AkEvent = AkEvent;
	parms.in_EventName = in_EventName;
	parms.LatentInfo = LatentInfo;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

enum class ECollisionChannel UAkComponent::GetOcclusionCollisionChannel(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkComponent.GetOcclusionCollisionChannel");

	FGetOcclusionCollisionChannel parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UAkComponent::GetAttenuationRadius(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkComponent.GetAttenuationRadius");

	FGetAttenuationRadius parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void AAkAcousticPortal::OpenPortal(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.OpenPortal");

	FOpenPortal parms{};	

	ProcessEvent(fn, &parms);
}

uint8_t AAkAcousticPortal::GetCurrentState(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.GetCurrentState");

	FGetCurrentState parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void AAkAcousticPortal::ClosePortal(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.ClosePortal");

	FClosePortal parms{};	

	ProcessEvent(fn, &parms);
}

void UAkAudioType::UnloadData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkAudioType.UnloadData");

	FUnloadData parms{};	

	ProcessEvent(fn, &parms);
}

void UAkAudioType::LoadData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkAudioType.LoadData");

	FLoadData parms{};	

	ProcessEvent(fn, &parms);
}

int32_t UAkAudioType::GetWwiseShortID(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkAudioType.GetWwiseShortID");

	FGetWwiseShortID parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAkAndroidInitializationSettings::MigrateMultiCoreRendering(bool NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering");

	FMigrateMultiCoreRendering parms{};	
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

int32_t UAkAudioEvent::PostOnGameObjectAndWait(struct UAkGameObject* GameObject, struct FLatentActionInfo LatentActionInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkAudioEvent.PostOnGameObjectAndWait");

	FPostOnGameObjectAndWait parms{};	
	parms.GameObject = GameObject;
	parms.LatentActionInfo = LatentActionInfo;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UAkAudioEvent::PostOnGameObject(struct UAkGameObject* GameObject, struct FDelegate& Delegate, int32_t CallbackMask){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkAudioEvent.PostOnGameObject");

	FPostOnGameObject parms{};	
	parms.GameObject = GameObject;
	parms.Delegate = Delegate;
	parms.CallbackMask = CallbackMask;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UAkAudioEvent::PostOnComponentAndWait(struct UAkComponent* Component, bool bStopWhenAttachedObjectDestroyed, struct FLatentActionInfo LatentActionInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkAudioEvent.PostOnComponentAndWait");

	FPostOnComponentAndWait parms{};	
	parms.Component = Component;
	parms.bStopWhenAttachedObjectDestroyed = bStopWhenAttachedObjectDestroyed;
	parms.LatentActionInfo = LatentActionInfo;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UAkAudioEvent::PostOnComponent(struct UAkComponent* Component, struct FDelegate& Delegate, int32_t CallbackMask, bool bStopWhenAttachedObjectDestroyed){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkAudioEvent.PostOnComponent");

	FPostOnComponent parms{};	
	parms.Component = Component;
	parms.Delegate = Delegate;
	parms.CallbackMask = CallbackMask;
	parms.bStopWhenAttachedObjectDestroyed = bStopWhenAttachedObjectDestroyed;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UAkAudioEvent::PostOnActorAndWait(struct AActor* Actor, bool bStopWhenAttachedObjectDestroyed, struct FLatentActionInfo LatentActionInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkAudioEvent.PostOnActorAndWait");

	FPostOnActorAndWait parms{};	
	parms.Actor = Actor;
	parms.bStopWhenAttachedObjectDestroyed = bStopWhenAttachedObjectDestroyed;
	parms.LatentActionInfo = LatentActionInfo;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UAkAudioEvent::PostOnActor(struct AActor* Actor, struct FDelegate& Delegate, int32_t CallbackMask, bool bStopWhenAttachedObjectDestroyed){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkAudioEvent.PostOnActor");

	FPostOnActor parms{};	
	parms.Actor = Actor;
	parms.Delegate = Delegate;
	parms.CallbackMask = CallbackMask;
	parms.bStopWhenAttachedObjectDestroyed = bStopWhenAttachedObjectDestroyed;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UAkAudioEvent::PostAtLocation(struct FVector Location, struct FRotator Orientation, struct FDelegate& Callback, int32_t CallbackMask, struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkAudioEvent.PostAtLocation");

	FPostAtLocation parms{};	
	parms.Location = Location;
	parms.Orientation = Orientation;
	parms.Callback = Callback;
	parms.CallbackMask = CallbackMask;
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UAkAudioEvent::ExecuteAction(uint8_t ActionType, struct AActor* Actor, int32_t PlayingID, int32_t TransitionDuration, uint8_t FadeCurve){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkAudioEvent.ExecuteAction");

	FExecuteAction parms{};	
	parms.ActionType = ActionType;
	parms.Actor = Actor;
	parms.PlayingID = PlayingID;
	parms.TransitionDuration = TransitionDuration;
	parms.FadeCurve = FadeCurve;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAkCheckBox::SetIsChecked(bool InIsChecked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetIsChecked");

	FSetIsChecked parms{};	
	parms.InIsChecked = InIsChecked;

	ProcessEvent(fn, &parms);
}

void UAkCheckBox::SetCheckedState(uint8_t InCheckedState){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetCheckedState");

	FSetCheckedState parms{};	
	parms.InCheckedState = InCheckedState;

	ProcessEvent(fn, &parms);
}

void UAkCheckBox::SetAkItemId(struct FGuid& ItemId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetAkItemId");

	FSetAkItemId parms{};	
	parms.ItemId = ItemId;

	ProcessEvent(fn, &parms);
}

void UAkCheckBox::SetAkBoolProperty(struct FString ItemProperty){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetAkBoolProperty");

	FSetAkBoolProperty parms{};	
	parms.ItemProperty = ItemProperty;

	ProcessEvent(fn, &parms);
}

bool UAkCheckBox::IsPressed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.IsPressed");

	FIsPressed parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAkCheckBox::IsChecked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.IsChecked");

	FIsChecked parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UAkCheckBox::GetCheckedState(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.GetCheckedState");

	FGetCheckedState parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UAkCheckBox::GetAkProperty(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.GetAkProperty");

	FGetAkProperty parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGuid UAkCheckBox::GetAkItemId(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.GetAkItemId");

	FGetAkItemId parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAkWwiseTree::SetSearchText(struct FString newText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWwiseTree.SetSearchText");

	FSetSearchText parms{};	
	parms.newText = newText;

	ProcessEvent(fn, &parms);
}

struct FAkWwiseObjectDetails UAkWwiseTree::GetSelectedItem(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWwiseTree.GetSelectedItem");

	FGetSelectedItem parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UAkWwiseTree::GetSearchText(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWwiseTree.GetSearchText");

	FGetSearchText parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAkGameplayStatics::UseReverbVolumes(bool inUseReverbVolumes, struct AActor* Actor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UseReverbVolumes");

	FUseReverbVolumes parms{};	
	parms.inUseReverbVolumes = inUseReverbVolumes;
	parms.Actor = Actor;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::UseEarlyReflections(struct AActor* Actor, struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UseEarlyReflections");

	FUseEarlyReflections parms{};	
	parms.Actor = Actor;
	parms.AuxBus = AuxBus;
	parms.Order = Order;
	parms.BusSendGain = BusSendGain;
	parms.MaxPathLength = MaxPathLength;
	parms.SpotReflectors = SpotReflectors;
	parms.AuxBusName = AuxBusName;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::UnloadInitBank(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UnloadInitBank");

	FUnloadInitBank parms{};	

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::UnloadBankByName(struct FString BankName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UnloadBankByName");

	FUnloadBankByName parms{};	
	parms.BankName = BankName;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::StopProfilerCapture(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopProfilerCapture");

	FStopProfilerCapture parms{};	

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::StopOutputCapture(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopOutputCapture");

	FStopOutputCapture parms{};	

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::StopAllAmbientSounds(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopAllAmbientSounds");

	FStopAllAmbientSounds parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::StopAll(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopAll");

	FStopAll parms{};	

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::StopActor(struct AActor* Actor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopActor");

	FStopActor parms{};	
	parms.Actor = Actor;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::StartProfilerCapture(struct FString Filename){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StartProfilerCapture");

	FStartProfilerCapture parms{};	
	parms.Filename = Filename;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::StartOutputCapture(struct FString Filename){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StartOutputCapture");

	FStartOutputCapture parms{};	
	parms.Filename = Filename;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::StartAllAmbientSounds(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StartAllAmbientSounds");

	FStartAllAmbientSounds parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);
}

struct UAkComponent* UAkGameplayStatics::SpawnAkComponentAtLocation(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, bool AutoPost, struct FString EventName, bool AutoDestroy){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation");

	FSpawnAkComponentAtLocation parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.AkEvent = AkEvent;
	parms.Location = Location;
	parms.Orientation = Orientation;
	parms.AutoPost = AutoPost;
	parms.EventName = EventName;
	parms.AutoDestroy = AutoDestroy;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAkGameplayStatics::SetSwitch(struct UAkSwitchValue* SwitchValue, struct AActor* Actor, struct FName SwitchGroup, struct FName SwitchState){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetSwitch");

	FSetSwitch parms{};	
	parms.SwitchValue = SwitchValue;
	parms.Actor = Actor;
	parms.SwitchGroup = SwitchGroup;
	parms.SwitchState = SwitchState;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::SetState(struct UAkStateValue* StateValue, struct FName StateGroup, struct FName State){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetState");

	FSetState parms{};	
	parms.StateValue = StateValue;
	parms.StateGroup = StateGroup;
	parms.State = State;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::SetSpeakerAngles(struct TArray<float>& SpeakerAngles, float HeightAngle, struct FString DeviceShareSet){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetSpeakerAngles");

	FSetSpeakerAngles parms{};	
	parms.SpeakerAngles = SpeakerAngles;
	parms.HeightAngle = HeightAngle;
	parms.DeviceShareSet = DeviceShareSet;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::SetRTPCValue(struct UAkRtpc* RtpcValue, float Value, int32_t InterpolationTimeMs, struct AActor* Actor, struct FName Rtpc){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetRTPCValue");

	FSetRTPCValue parms{};	
	parms.RtpcValue = RtpcValue;
	parms.Value = Value;
	parms.InterpolationTimeMs = InterpolationTimeMs;
	parms.Actor = Actor;
	parms.Rtpc = Rtpc;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::SetReflectionsOrder(int32_t Order, bool RefreshPaths){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetReflectionsOrder");

	FSetReflectionsOrder parms{};	
	parms.Order = Order;
	parms.RefreshPaths = RefreshPaths;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::SetPortalToPortalObstruction(struct UAkPortalComponent* PortalComponent0, struct UAkPortalComponent* PortalComponent1, float ObstructionValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetPortalToPortalObstruction");

	FSetPortalToPortalObstruction parms{};	
	parms.PortalComponent0 = PortalComponent0;
	parms.PortalComponent1 = PortalComponent1;
	parms.ObstructionValue = ObstructionValue;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::SetPortalObstructionAndOcclusion(struct UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetPortalObstructionAndOcclusion");

	FSetPortalObstructionAndOcclusion parms{};	
	parms.PortalComponent = PortalComponent;
	parms.ObstructionValue = ObstructionValue;
	parms.OcclusionValue = OcclusionValue;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::SetPanningRule(uint8_t PanRule){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetPanningRule");

	FSetPanningRule parms{};	
	parms.PanRule = PanRule;

	ProcessEvent(fn, &parms);
}

bool UAkGameplayStatics::SetOutputDeviceEffect(struct FAkOutputDeviceID InDeviceID, int32_t InEffectIndex, struct UAkEffectShareSet* InEffectShareSet){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetOutputDeviceEffect");

	FSetOutputDeviceEffect parms{};	
	parms.InDeviceID = InDeviceID;
	parms.InEffectIndex = InEffectIndex;
	parms.InEffectShareSet = InEffectShareSet;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAkGameplayStatics::SetOutputBusVolume(float BusVolume, struct AActor* Actor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetOutputBusVolume");

	FSetOutputBusVolume parms{};	
	parms.BusVolume = BusVolume;
	parms.Actor = Actor;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::SetOcclusionRefreshInterval(float RefreshInterval, struct AActor* Actor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval");

	FSetOcclusionRefreshInterval parms{};	
	parms.RefreshInterval = RefreshInterval;
	parms.Actor = Actor;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::SetMultiplePositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FTransform> Positions, uint8_t MultiPositionType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetMultiplePositions");

	FSetMultiplePositions parms{};	
	parms.GameObjectAkComponent = GameObjectAkComponent;
	parms.Positions = Positions;
	parms.MultiPositionType = MultiPositionType;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::SetMultipleChannelMaskEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FAkChannelMask> ChannelMasks, struct TArray<struct FTransform> Positions, uint8_t MultiPositionType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions");

	FSetMultipleChannelMaskEmitterPositions parms{};	
	parms.GameObjectAkComponent = GameObjectAkComponent;
	parms.ChannelMasks = ChannelMasks;
	parms.Positions = Positions;
	parms.MultiPositionType = MultiPositionType;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::SetMultipleChannelEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<uint8_t> ChannelMasks, struct TArray<struct FTransform> Positions, uint8_t MultiPositionType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions");

	FSetMultipleChannelEmitterPositions parms{};	
	parms.GameObjectAkComponent = GameObjectAkComponent;
	parms.ChannelMasks = ChannelMasks;
	parms.Positions = Positions;
	parms.MultiPositionType = MultiPositionType;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::SetGameObjectToPortalObstruction(struct UAkComponent* GameObjectAkComponent, struct UAkPortalComponent* PortalComponent, float ObstructionValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetGameObjectToPortalObstruction");

	FSetGameObjectToPortalObstruction parms{};	
	parms.GameObjectAkComponent = GameObjectAkComponent;
	parms.PortalComponent = PortalComponent;
	parms.ObstructionValue = ObstructionValue;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::SetDistanceProbe(struct AActor* Listener, struct AActor* DistanceProbe){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetDistanceProbe");

	FSetDistanceProbe parms{};	
	parms.Listener = Listener;
	parms.DistanceProbe = DistanceProbe;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::SetCurrentAudioCultureAsync(struct FString AudioCulture, struct FDelegate& Completed){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync");

	FSetCurrentAudioCultureAsync parms{};	
	parms.AudioCulture = AudioCulture;
	parms.Completed = Completed;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::SetCurrentAudioCulture(struct FString AudioCulture, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture");

	FSetCurrentAudioCulture parms{};	
	parms.AudioCulture = AudioCulture;
	parms.LatentInfo = LatentInfo;
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);
}

bool UAkGameplayStatics::SetBusEffectByName(struct FString InBusName, int32_t InEffectIndex, struct UAkEffectShareSet* InEffectShareSet){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetBusEffectByName");

	FSetBusEffectByName parms{};	
	parms.InBusName = InBusName;
	parms.InEffectIndex = InEffectIndex;
	parms.InEffectShareSet = InEffectShareSet;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAkGameplayStatics::SetBusEffectByID(struct FAkUniqueID InBusID, int32_t InEffectIndex, struct UAkEffectShareSet* InEffectShareSet){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetBusEffectByID");

	FSetBusEffectByID parms{};	
	parms.InBusID = InBusID;
	parms.InEffectIndex = InEffectIndex;
	parms.InEffectShareSet = InEffectShareSet;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAkGameplayStatics::SetBusConfig(struct FString BusName, uint8_t ChannelConfiguration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetBusConfig");

	FSetBusConfig parms{};	
	parms.BusName = BusName;
	parms.ChannelConfiguration = ChannelConfiguration;

	ProcessEvent(fn, &parms);
}

bool UAkGameplayStatics::SetAuxBusEffect(struct UAkAuxBus* InAuxBus, int32_t InEffectIndex, struct UAkEffectShareSet* InEffectShareSet){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetAuxBusEffect");

	FSetAuxBusEffect parms{};	
	parms.InAuxBus = InAuxBus;
	parms.InEffectIndex = InEffectIndex;
	parms.InEffectShareSet = InEffectShareSet;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAkGameplayStatics::SetActorMixerEffect(struct FAkUniqueID InAudioNodeID, int32_t InEffectIndex, struct UAkEffectShareSet* InEffectShareSet){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetActorMixerEffect");

	FSetActorMixerEffect parms{};	
	parms.InAudioNodeID = InAudioNodeID;
	parms.InEffectIndex = InEffectIndex;
	parms.InEffectShareSet = InEffectShareSet;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAkGameplayStatics::ResetRTPCValue(struct UAkRtpc* RtpcValue, int32_t InterpolationTimeMs, struct AActor* Actor, struct FName Rtpc){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ResetRTPCValue");

	FResetRTPCValue parms{};	
	parms.RtpcValue = RtpcValue;
	parms.InterpolationTimeMs = InterpolationTimeMs;
	parms.Actor = Actor;
	parms.Rtpc = Rtpc;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::ReplaceMainOutput(struct FAkOutputSettings& MainOutputSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ReplaceMainOutput");

	FReplaceMainOutput parms{};	
	parms.MainOutputSettings = MainOutputSettings;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::PostTrigger(struct UAkTrigger* TriggerValue, struct AActor* Actor, struct FName Trigger){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostTrigger");

	FPostTrigger parms{};	
	parms.TriggerValue = TriggerValue;
	parms.Actor = Actor;
	parms.Trigger = Trigger;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::PostEventByName(struct FString EventName, struct AActor* Actor, bool bStopWhenAttachedToDestroyed){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventByName");

	FPostEventByName parms{};	
	parms.EventName = EventName;
	parms.Actor = Actor;
	parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::PostEventAtLocationByName(struct FString EventName, struct FVector Location, struct FRotator Orientation, struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventAtLocationByName");

	FPostEventAtLocationByName parms{};	
	parms.EventName = EventName;
	parms.Location = Location;
	parms.Orientation = Orientation;
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);
}

int32_t UAkGameplayStatics::PostEventAtLocation(struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, struct FString EventName, struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventAtLocation");

	FPostEventAtLocation parms{};	
	parms.AkEvent = AkEvent;
	parms.Location = Location;
	parms.Orientation = Orientation;
	parms.EventName = EventName;
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UAkGameplayStatics::PostEvent(struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, bool bStopWhenAttachedToDestroyed, struct FString EventName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEvent");

	FPostEvent parms{};	
	parms.AkEvent = AkEvent;
	parms.Actor = Actor;
	parms.CallbackMask = CallbackMask;
	parms.PostEventCallback = PostEventCallback;
	parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	parms.EventName = EventName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAkGameplayStatics::PostAndWaitForEndOfEventAsync(struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t& PlayingID, bool bStopWhenAttachedToDestroyed, struct FLatentActionInfo LatentInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync");

	FPostAndWaitForEndOfEventAsync parms{};	
	parms.AkEvent = AkEvent;
	parms.Actor = Actor;
	parms.PlayingID = PlayingID;
	parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	parms.LatentInfo = LatentInfo;

	ProcessEvent(fn, &parms);
}

int32_t UAkGameplayStatics::PostAndWaitForEndOfEvent(struct UAkAudioEvent* AkEvent, struct AActor* Actor, bool bStopWhenAttachedToDestroyed, struct FLatentActionInfo LatentInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent");

	FPostAndWaitForEndOfEvent parms{};	
	parms.AkEvent = AkEvent;
	parms.Actor = Actor;
	parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	parms.LatentInfo = LatentInfo;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAkGameplayStatics::LoadInitBank(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadInitBank");

	FLoadInitBank parms{};	

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::LoadBankByName(struct FString BankName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBankByName");

	FLoadBankByName parms{};	
	parms.BankName = BankName;

	ProcessEvent(fn, &parms);
}

bool UAkGameplayStatics::IsGame(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.IsGame");

	FIsGame parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAkGameplayStatics::IsEditor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.IsEditor");

	FIsEditor parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAkGameplayStatics::GetSpeakerAngles(struct TArray<float>& SpeakerAngles, float& HeightAngle, struct FString DeviceShareSet){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetSpeakerAngles");

	FGetSpeakerAngles parms{};	
	parms.SpeakerAngles = SpeakerAngles;
	parms.HeightAngle = HeightAngle;
	parms.DeviceShareSet = DeviceShareSet;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::GetRTPCValue(struct UAkRtpc* RtpcValue, int32_t PlayingID, uint8_t InputValueType, float& Value, uint8_t& OutputValueType, struct AActor* Actor, struct FName Rtpc){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetRTPCValue");

	FGetRTPCValue parms{};	
	parms.RtpcValue = RtpcValue;
	parms.PlayingID = PlayingID;
	parms.InputValueType = InputValueType;
	parms.Value = Value;
	parms.OutputValueType = OutputValueType;
	parms.Actor = Actor;
	parms.Rtpc = Rtpc;

	ProcessEvent(fn, &parms);
}

struct FString UAkGameplayStatics::GetCurrentAudioCulture(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture");

	FGetCurrentAudioCulture parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FString> UAkGameplayStatics::GetAvailableAudioCultures(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures");

	FGetAvailableAudioCultures parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAkComponent* UAkGameplayStatics::GetAkComponent(struct USceneComponent* AttachToComponent, bool& ComponentCreated, struct FName AttachPointName, struct FVector Location, enum class EAttachLocation LocationType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetAkComponent");

	FGetAkComponent parms{};	
	parms.AttachToComponent = AttachToComponent;
	parms.ComponentCreated = ComponentCreated;
	parms.AttachPointName = AttachPointName;
	parms.Location = Location;
	parms.LocationType = LocationType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UObject* UAkGameplayStatics::GetAkAudioTypeUserData(struct UAkAudioType* Instance, UObject* Type){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData");

	FGetAkAudioTypeUserData parms{};	
	parms.Instance = Instance;
	parms.Type = Type;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAkGameplayStatics::ExecuteActionOnPlayingID(uint8_t ActionType, int32_t PlayingID, int32_t TransitionDuration, uint8_t FadeCurve){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID");

	FExecuteActionOnPlayingID parms{};	
	parms.ActionType = ActionType;
	parms.PlayingID = PlayingID;
	parms.TransitionDuration = TransitionDuration;
	parms.FadeCurve = FadeCurve;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::ExecuteActionOnEvent(struct UAkAudioEvent* AkEvent, uint8_t ActionType, struct AActor* Actor, int32_t TransitionDuration, uint8_t FadeCurve, int32_t PlayingID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent");

	FExecuteActionOnEvent parms{};	
	parms.AkEvent = AkEvent;
	parms.ActionType = ActionType;
	parms.Actor = Actor;
	parms.TransitionDuration = TransitionDuration;
	parms.FadeCurve = FadeCurve;
	parms.PlayingID = PlayingID;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::ClearSoundBanksAndMedia(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ClearSoundBanksAndMedia");

	FClearSoundBanksAndMedia parms{};	

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::ClearBanks(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ClearBanks");

	FClearBanks parms{};	

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::CancelEventCallback(struct FDelegate& PostEventCallback){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.CancelEventCallback");

	FCancelEventCallback parms{};	
	parms.PostEventCallback = PostEventCallback;

	ProcessEvent(fn, &parms);
}

void UAkGameplayStatics::AddOutputCaptureMarker(struct FString MarkerText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker");

	FAddOutputCaptureMarker parms{};	
	parms.MarkerText = MarkerText;

	ProcessEvent(fn, &parms);
}

void UAkSurfaceReflectorSetComponent::UpdateSurfaceReflectorSet(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet");

	FUpdateSurfaceReflectorSet parms{};	

	ProcessEvent(fn, &parms);
}

void UAkSurfaceReflectorSetComponent::UpdateAcousticProperties(struct TArray<struct FAkSurfacePoly> in_AcousticPolys){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.UpdateAcousticProperties");

	FUpdateAcousticProperties parms{};	
	parms.in_AcousticPolys = in_AcousticPolys;

	ProcessEvent(fn, &parms);
}

void UAkSurfaceReflectorSetComponent::SendSurfaceReflectorSet(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet");

	FSendSurfaceReflectorSet parms{};	

	ProcessEvent(fn, &parms);
}

void UAkSurfaceReflectorSetComponent::RemoveSurfaceReflectorSet(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet");

	FRemoveSurfaceReflectorSet parms{};	

	ProcessEvent(fn, &parms);
}

uint8_t UAkMIDIEventCallbackInfo::GetType(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetType");

	FGetType parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAkMIDIEventCallbackInfo::GetProgramChange(struct FAkMidiProgramChange& AsProgramChange){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange");

	FGetProgramChange parms{};	
	parms.AsProgramChange = AsProgramChange;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAkMIDIEventCallbackInfo::GetPitchBend(struct FAkMidiPitchBend& AsPitchBend){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend");

	FGetPitchBend parms{};	
	parms.AsPitchBend = AsPitchBend;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAkMIDIEventCallbackInfo::GetNoteOn(struct FAkMidiNoteOnOff& AsNoteOn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn");

	FGetNoteOn parms{};	
	parms.AsNoteOn = AsNoteOn;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAkMIDIEventCallbackInfo::GetNoteOff(struct FAkMidiNoteOnOff& AsNoteOff){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff");

	FGetNoteOff parms{};	
	parms.AsNoteOff = AsNoteOff;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAkMIDIEventCallbackInfo::GetNoteAftertouch(struct FAkMidiNoteAftertouch& AsNoteAftertouch){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch");

	FGetNoteAftertouch parms{};	
	parms.AsNoteAftertouch = AsNoteAftertouch;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAkMIDIEventCallbackInfo::GetGeneric(struct FAkMidiGeneric& AsGeneric){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric");

	FGetGeneric parms{};	
	parms.AsGeneric = AsGeneric;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAkMIDIEventCallbackInfo::GetChannelAftertouch(struct FAkMidiChannelAftertouch& AsChannelAftertouch){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch");

	FGetChannelAftertouch parms{};	
	parms.AsChannelAftertouch = AsChannelAftertouch;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

char UAkMIDIEventCallbackInfo::GetChannel(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetChannel");

	FGetChannel parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAkMIDIEventCallbackInfo::GetCc(struct FAkMidiCc& AsCc){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetCc");

	FGetCc parms{};	
	parms.AsCc = AsCc;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAkGeometryComponent::UpdateGeometry(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGeometryComponent.UpdateGeometry");

	FUpdateGeometry parms{};	

	ProcessEvent(fn, &parms);
}

void UAkGeometryComponent::SendGeometry(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGeometryComponent.SendGeometry");

	FSendGeometry parms{};	

	ProcessEvent(fn, &parms);
}

void UAkGeometryComponent::RemoveGeometry(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGeometryComponent.RemoveGeometry");

	FRemoveGeometry parms{};	

	ProcessEvent(fn, &parms);
}

void UAkGeometryComponent::ConvertMesh(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkGeometryComponent.ConvertMesh");

	FConvertMesh parms{};	

	ProcessEvent(fn, &parms);
}

void UAkHololensInitializationSettings::MigrateMultiCoreRendering(bool NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering");

	FMigrateMultiCoreRendering parms{};	
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void UAkWindowsInitializationSettings::MigrateMultiCoreRendering(bool NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering");

	FMigrateMultiCoreRendering parms{};	
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void UAkRoomComponent::SetGeometryComponent(struct UAkAcousticTextureSetComponent* textureSetComponent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkRoomComponent.SetGeometryComponent");

	FSetGeometryComponent parms{};	
	parms.textureSetComponent = textureSetComponent;

	ProcessEvent(fn, &parms);
}

struct UPrimitiveComponent* UAkRoomComponent::GetPrimitiveParent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkRoomComponent.GetPrimitiveParent");

	FGetPrimitiveParent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAkItemProperties::SetSearchText(struct FString newText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkItemProperties.SetSearchText");

	FSetSearchText parms{};	
	parms.newText = newText;

	ProcessEvent(fn, &parms);
}

struct FString UAkItemProperties::GetSelectedProperty(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkItemProperties.GetSelectedProperty");

	FGetSelectedProperty parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UAkItemProperties::GetSearchText(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkItemProperties.GetSearchText");

	FGetSearchText parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAkLateReverbComponent::AssociateAkTextureSetComponent(struct UAkAcousticTextureSetComponent* textureSetComponent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent");

	FAssociateAkTextureSetComponent parms{};	
	parms.textureSetComponent = textureSetComponent;

	ProcessEvent(fn, &parms);
}

void UAkLinuxInitializationSettings::MigrateMultiCoreRendering(bool NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering");

	FMigrateMultiCoreRendering parms{};	
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void UAkMacInitializationSettings::MigrateMultiCoreRendering(bool NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering");

	FMigrateMultiCoreRendering parms{};	
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void UAkSlider::SetValue(float InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetValue");

	FSetValue parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UAkSlider::SetStepSize(float InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetStepSize");

	FSetStepSize parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UAkSlider::SetSliderHandleColor(struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetSliderHandleColor");

	FSetSliderHandleColor parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UAkSlider::SetSliderBarColor(struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetSliderBarColor");

	FSetSliderBarColor parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UAkSlider::SetLocked(bool InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetLocked");

	FSetLocked parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UAkSlider::SetIndentHandle(bool InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetIndentHandle");

	FSetIndentHandle parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UAkSlider::SetAkSliderItemProperty(struct FString ItemProperty){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetAkSliderItemProperty");

	FSetAkSliderItemProperty parms{};	
	parms.ItemProperty = ItemProperty;

	ProcessEvent(fn, &parms);
}

void UAkSlider::SetAkSliderItemId(struct FGuid& ItemId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetAkSliderItemId");

	FSetAkSliderItemId parms{};	
	parms.ItemId = ItemId;

	ProcessEvent(fn, &parms);
}

float UAkSlider::GetValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkSlider.GetValue");

	FGetValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UAkSlider::GetAkSliderItemProperty(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkSlider.GetAkSliderItemProperty");

	FGetAkSliderItemProperty parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGuid UAkSlider::GetAkSliderItemId(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkSlider.GetAkSliderItemId");

	FGetAkSliderItemId parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FAKWaapiJsonObject UAkWaapiCalls::Unsubscribe(struct FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.Unsubscribe");

	FUnsubscribe parms{};	
	parms.SubscriptionId = SubscriptionId;
	parms.UnsubscriptionDone = UnsubscriptionDone;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FAKWaapiJsonObject UAkWaapiCalls::SubscribeToWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiOptions, struct FDelegate& Callback, struct FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.SubscribeToWaapi");

	FSubscribeToWaapi parms{};	
	parms.WaapiUri = WaapiUri;
	parms.WaapiOptions = WaapiOptions;
	parms.Callback = Callback;
	parms.SubscriptionId = SubscriptionId;
	parms.SubscriptionDone = SubscriptionDone;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAkWaapiCalls::SetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription, int32_t ID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.SetSubscriptionID");

	FSetSubscriptionID parms{};	
	parms.Subscription = Subscription;
	parms.ID = ID;

	ProcessEvent(fn, &parms);
}

bool UAkWaapiCalls::RegisterWaapiProjectLoadedCallback(struct FDelegate& Callback){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback");

	FRegisterWaapiProjectLoadedCallback parms{};	
	parms.Callback = Callback;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAkWaapiCalls::RegisterWaapiConnectionLostCallback(struct FDelegate& Callback){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback");

	FRegisterWaapiConnectionLostCallback parms{};	
	parms.Callback = Callback;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UAkWaapiCalls::GetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.GetSubscriptionID");

	FGetSubscriptionID parms{};	
	parms.Subscription = Subscription;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToText(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText");

	FConv_FAkWaapiSubscriptionIdToText parms{};	
	parms.INAkWaapiSubscriptionId = INAkWaapiSubscriptionId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToString(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString");

	FConv_FAkWaapiSubscriptionIdToString parms{};	
	parms.INAkWaapiSubscriptionId = INAkWaapiSubscriptionId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FAKWaapiJsonObject UAkWaapiCalls::CallWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiArgs, struct FAKWaapiJsonObject& WaapiOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.CallWaapi");

	FCallWaapi parms{};	
	parms.WaapiUri = WaapiUri;
	parms.WaapiArgs = WaapiArgs;
	parms.WaapiOptions = WaapiOptions;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToText(struct FAkWaapiFieldNames& INAkWaapiFieldNames){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText");

	FConv_FAkWaapiFieldNamesToText parms{};	
	parms.INAkWaapiFieldNames = INAkWaapiFieldNames;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToString(struct FAkWaapiFieldNames& INAkWaapiFieldNames){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString");

	FConv_FAkWaapiFieldNamesToString parms{};	
	parms.INAkWaapiFieldNames = INAkWaapiFieldNames;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetStringField(struct FAkWaapiFieldNames& FieldName, struct FString FieldValue, struct FAKWaapiJsonObject Target){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetStringField");

	FSetStringField parms{};	
	parms.FieldName = FieldName;
	parms.FieldValue = FieldValue;
	parms.Target = Target;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject FieldValue, struct FAKWaapiJsonObject Target){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetObjectField");

	FSetObjectField parms{};	
	parms.FieldName = FieldName;
	parms.FieldValue = FieldValue;
	parms.Target = Target;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetNumberField(struct FAkWaapiFieldNames& FieldName, float FieldValue, struct FAKWaapiJsonObject Target){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetNumberField");

	FSetNumberField parms{};	
	parms.FieldName = FieldName;
	parms.FieldValue = FieldValue;
	parms.Target = Target;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetBoolField(struct FAkWaapiFieldNames& FieldName, bool FieldValue, struct FAKWaapiJsonObject Target){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetBoolField");

	FSetBoolField parms{};	
	parms.FieldName = FieldName;
	parms.FieldValue = FieldValue;
	parms.Target = Target;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetArrayStringFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FString>& FieldStringValues, struct FAKWaapiJsonObject Target){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetArrayStringFields");

	FSetArrayStringFields parms{};	
	parms.FieldName = FieldName;
	parms.FieldStringValues = FieldStringValues;
	parms.Target = Target;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetArrayObjectFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FAKWaapiJsonObject>& FieldObjectValues, struct FAKWaapiJsonObject Target){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields");

	FSetArrayObjectFields parms{};	
	parms.FieldName = FieldName;
	parms.FieldObjectValues = FieldObjectValues;
	parms.Target = Target;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UAkWaapiJsonManager::GetStringField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetStringField");

	FGetStringField parms{};	
	parms.FieldName = FieldName;
	parms.Target = Target;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FAKWaapiJsonObject UAkWaapiJsonManager::GetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetObjectField");

	FGetObjectField parms{};	
	parms.FieldName = FieldName;
	parms.Target = Target;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UAkWaapiJsonManager::GetNumberField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetNumberField");

	FGetNumberField parms{};	
	parms.FieldName = FieldName;
	parms.Target = Target;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UAkWaapiJsonManager::GetIntegerField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetIntegerField");

	FGetIntegerField parms{};	
	parms.FieldName = FieldName;
	parms.Target = Target;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAkWaapiJsonManager::GetBoolField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetBoolField");

	FGetBoolField parms{};	
	parms.FieldName = FieldName;
	parms.Target = Target;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FAKWaapiJsonObject> UAkWaapiJsonManager::GetArrayField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetArrayField");

	FGetArrayField parms{};	
	parms.FieldName = FieldName;
	parms.Target = Target;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToText(struct FAKWaapiJsonObject INAKWaapiJsonObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText");

	FConv_FAKWaapiJsonObjectToText parms{};	
	parms.INAKWaapiJsonObject = INAKWaapiJsonObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToString(struct FAKWaapiJsonObject INAKWaapiJsonObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString");

	FConv_FAKWaapiJsonObjectToString parms{};	
	parms.INAKWaapiJsonObject = INAKWaapiJsonObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UAkWaapiUriConv::Conv_FAkWaapiUriToText(struct FAkWaapiUri& INAkWaapiUri){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText");

	FConv_FAkWaapiUriToText parms{};	
	parms.INAkWaapiUri = INAkWaapiUri;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UAkWaapiUriConv::Conv_FAkWaapiUriToString(struct FAkWaapiUri& INAkWaapiUri){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString");

	FConv_FAkWaapiUriToString parms{};	
	parms.INAkWaapiUri = INAkWaapiUri;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UPostEventAsync* UPostEventAsync::PostEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, bool bStopWhenAttachedToDestroyed){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.PostEventAsync.PostEventAsync");

	FPostEventAsync parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.AkEvent = AkEvent;
	parms.Actor = Actor;
	parms.CallbackMask = CallbackMask;
	parms.PostEventCallback = PostEventCallback;
	parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UPostEventAsync::PollPostEventFuture(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.PostEventAsync.PollPostEventFuture");

	FPollPostEventFuture parms{};	

	ProcessEvent(fn, &parms);
}

struct UPostEventAtLocationAsync* UPostEventAtLocationAsync::PostEventAtLocationAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync");

	FPostEventAtLocationAsync parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.AkEvent = AkEvent;
	parms.Location = Location;
	parms.Orientation = Orientation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UPostEventAtLocationAsync::PollPostEventFuture(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture");

	FPollPostEventFuture parms{};	

	ProcessEvent(fn, &parms);
}

