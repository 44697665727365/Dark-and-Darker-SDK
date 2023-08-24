#include "pch.h"
#include "SDK.h"

bool UGA_Hide_C::K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Hide.GA_Hide_C.K2_CanActivateAbility");

	FK2_CanActivateAbility parms{};	
	parms.ActorInfo = ActorInfo;
	parms.Handle = Handle;
	parms.RelevantTags = RelevantTags;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGA_Hide_C::EventReceived_4E31C2814B584A132D94CB837DF6501D(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Hide.GA_Hide_C.EventReceived_4E31C2814B584A132D94CB837DF6501D");

	FEventReceived_4E31C2814B584A132D94CB837DF6501D parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_Hide_C::Added_1ED887114F55437A29F67D82626B5D70(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Hide.GA_Hide_C.Added_1ED887114F55437A29F67D82626B5D70");

	FAdded_1ED887114F55437A29F67D82626B5D70 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Hide_C::Added_40502DB04EA0EDBB14D55C912E356636(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Hide.GA_Hide_C.Added_40502DB04EA0EDBB14D55C912E356636");

	FAdded_40502DB04EA0EDBB14D55C912E356636 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Hide_C::OnOverlap_3D5EB7E94BCEDEC27E42A881ABEFEC36(struct FGameplayAbilityTargetDataHandle& TargetData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Hide.GA_Hide_C.OnOverlap_3D5EB7E94BCEDEC27E42A881ABEFEC36");

	FOnOverlap_3D5EB7E94BCEDEC27E42A881ABEFEC36 parms{};	
	parms.TargetData = TargetData;

	ProcessEvent(fn, &parms);
}

void UGA_Hide_C::Added_6006FEFF4AFD4D44772019B0CAD4EAAD(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Hide.GA_Hide_C.Added_6006FEFF4AFD4D44772019B0CAD4EAAD");

	FAdded_6006FEFF4AFD4D44772019B0CAD4EAAD parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Hide_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Hide.GA_Hide_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_Hide_C::ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Hide.GA_Hide_C.ServerOnSkillActivate");

	FServerOnSkillActivate parms{};	
	parms.SkillTag = SkillTag;
	parms.CooldownTag = CooldownTag;

	ProcessEvent(fn, &parms);
}

void UGA_Hide_C::ExecuteUbergraph_GA_Hide(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Hide.GA_Hide_C.ExecuteUbergraph_GA_Hide");

	FExecuteUbergraph_GA_Hide parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

