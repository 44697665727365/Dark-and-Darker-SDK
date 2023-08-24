#include "pch.h"
#include "SDK.h"

void UGA_WarSong_C::OnTargetActorOverlap_CC4DB50249EA1F0D6992769AAB7B262C(struct TArray<struct AActor*>& RadiusInActors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_WarSong.GA_WarSong_C.OnTargetActorOverlap_CC4DB50249EA1F0D6992769AAB7B262C");

	FOnTargetActorOverlap_CC4DB50249EA1F0D6992769AAB7B262C parms{};	
	parms.RadiusInActors = RadiusInActors;

	ProcessEvent(fn, &parms);
}

void UGA_WarSong_C::EventReceived_CEF90083460EE22CE5C347B6048DA36E(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_WarSong.GA_WarSong_C.EventReceived_CEF90083460EE22CE5C347B6048DA36E");

	FEventReceived_CEF90083460EE22CE5C347B6048DA36E parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_WarSong_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_WarSong.GA_WarSong_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_WarSong_C::ExecuteUbergraph_GA_WarSong(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_WarSong.GA_WarSong_C.ExecuteUbergraph_GA_WarSong");

	FExecuteUbergraph_GA_WarSong parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

