#include "pch.h"
#include "SDK.h"

void ABP_PlayerCharacter_C::OnPhantomize(bool IsActivate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnPhantomize");

	FOnPhantomize parms{};	
	parms.IsActivate = IsActivate;

	ProcessEvent(fn, &parms);
}

struct UCameraComponent* ABP_PlayerCharacter_C::GetPerspectiveCameraComponent(bool bFirstPersonPerspective){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetPerspectiveCameraComponent");

	FGetPerspectiveCameraComponent parms{};	
	parms.bFirstPersonPerspective = bFirstPersonPerspective;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UCameraComponent* ABP_PlayerCharacter_C::GetCameraComponent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCameraComponent");

	FGetCameraComponent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ABP_PlayerCharacter_C::HasLocalCurrentCharacterEnhancedHearing(bool& HasEnhancedHearing){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.HasLocalCurrentCharacterEnhancedHearing");

	FHasLocalCurrentCharacterEnhancedHearing parms{};	
	parms.HasEnhancedHearing = HasEnhancedHearing;

	ProcessEvent(fn, &parms);
}

void ABP_PlayerCharacter_C::SetRTPCValuePlayerSpeed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetRTPCValuePlayerSpeed");

	FSetRTPCValuePlayerSpeed parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_PlayerCharacter_C::OnMessageReceived_EA0BB1014365DB5602FF2A88319323AC(struct UMsgBaseNode* ProxyObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnMessageReceived_EA0BB1014365DB5602FF2A88319323AC");

	FOnMessageReceived_EA0BB1014365DB5602FF2A88319323AC parms{};	
	parms.ProxyObject = ProxyObject;

	ProcessEvent(fn, &parms);
}

void ABP_PlayerCharacter_C::OnMessageReceived_E32555534626CD303291009A607703E1(struct UMsgBaseNode* ProxyObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnMessageReceived_E32555534626CD303291009A607703E1");

	FOnMessageReceived_E32555534626CD303291009A607703E1 parms{};	
	parms.ProxyObject = ProxyObject;

	ProcessEvent(fn, &parms);
}

void ABP_PlayerCharacter_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_PlayerCharacter_C::EventFMsgGASAttributeNotify(struct FMsgGASAttributeNotify Msg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EventFMsgGASAttributeNotify");

	FEventFMsgGASAttributeNotify parms{};	
	parms.Msg = Msg;

	ProcessEvent(fn, &parms);
}

void ABP_PlayerCharacter_C::ReceivePreInitializeComponents(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceivePreInitializeComponents");

	FReceivePreInitializeComponents parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_PlayerCharacter_C::EventFMsgSoundEvent(struct FMsgSoundEvent Msg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EventFMsgSoundEvent");

	FEventFMsgSoundEvent parms{};	
	parms.Msg = Msg;

	ProcessEvent(fn, &parms);
}

void ABP_PlayerCharacter_C::InteractFound(struct AActor* Interacter, struct UPrimitiveComponent* InteractPart){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractFound");

	FInteractFound parms{};	
	parms.Interacter = Interacter;
	parms.InteractPart = InteractPart;

	ProcessEvent(fn, &parms);
}

void ABP_PlayerCharacter_C::InteractLost(struct AActor* Interacter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractLost");

	FInteractLost parms{};	
	parms.Interacter = Interacter;

	ProcessEvent(fn, &parms);
}

void ABP_PlayerCharacter_C::InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractSucceed");

	FInteractSucceed parms{};	
	parms.Interacter = Interacter;
	parms.StateTag = StateTag;
	parms.TriggerTag = TriggerTag;
	parms.HitResult = HitResult;

	ProcessEvent(fn, &parms);
}

void ABP_PlayerCharacter_C::OnSetRenderCustomDepth(bool bValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSetRenderCustomDepth");

	FOnSetRenderCustomDepth parms{};	
	parms.bValue = bValue;

	ProcessEvent(fn, &parms);
}

void ABP_PlayerCharacter_C::OnSetPerspective(struct APlayerController* InPlayerController, bool bInIsFirstPersonPerspective){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSetPerspective");

	FOnSetPerspective parms{};	
	parms.InPlayerController = InPlayerController;
	parms.bInIsFirstPersonPerspective = bInIsFirstPersonPerspective;

	ProcessEvent(fn, &parms);
}

void ABP_PlayerCharacter_C::OnCommemorativePlaqueText(struct FPrimaryAssetId ScriptAseetId, struct FVector Location){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCommemorativePlaqueText");

	FOnCommemorativePlaqueText parms{};	
	parms.ScriptAseetId = ScriptAseetId;
	parms.Location = Location;

	ProcessEvent(fn, &parms);
}

void ABP_PlayerCharacter_C::OnFMsgGASActorDieNotifyBlueprint(struct FMsgGASActorDieNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnFMsgGASActorDieNotifyBlueprint");

	FOnFMsgGASActorDieNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ABP_PlayerCharacter_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_PlayerCharacter_C::ExecuteUbergraph_BP_PlayerCharacter(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter");

	FExecuteUbergraph_BP_PlayerCharacter parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

