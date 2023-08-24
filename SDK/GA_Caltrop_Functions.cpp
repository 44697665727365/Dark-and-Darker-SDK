#include "pch.h"
#include "SDK.h"

void UGA_Caltrop_C::BroadcastReason(uint8_t Reason){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Caltrop.GA_Caltrop_C.BroadcastReason");

	FBroadcastReason parms{};	
	parms.Reason = Reason;

	ProcessEvent(fn, &parms);
}

void UGA_Caltrop_C::Find Installable Location(struct FVector& FoundInstallLocation, uint8_t& SkillActivatableType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Caltrop.GA_Caltrop_C.Find Installable Location");

	FFind Installable Location parms{};	
	parms.FoundInstallLocation = FoundInstallLocation;
	parms.SkillActivatableType = SkillActivatableType;

	ProcessEvent(fn, &parms);
}

bool UGA_Caltrop_C::K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Caltrop.GA_Caltrop_C.K2_CanActivateAbility");

	FK2_CanActivateAbility parms{};	
	parms.ActorInfo = ActorInfo;
	parms.Handle = Handle;
	parms.RelevantTags = RelevantTags;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGA_Caltrop_C::ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Caltrop.GA_Caltrop_C.ServerOnSkillActivate");

	FServerOnSkillActivate parms{};	
	parms.SkillTag = SkillTag;
	parms.CooldownTag = CooldownTag;

	ProcessEvent(fn, &parms);
}

void UGA_Caltrop_C::ExecuteUbergraph_GA_Caltrop(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Caltrop.GA_Caltrop_C.ExecuteUbergraph_GA_Caltrop");

	FExecuteUbergraph_GA_Caltrop parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

