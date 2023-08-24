#include "pch.h"
#include "SDK.h"

void UGA_SkeletonWarlord_Order_PositionChange_C::EventReceived_83C55BE449DAD0B3E25BBEA000F573A2(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Order_PositionChange.GA_SkeletonWarlord_Order_PositionChange_C.EventReceived_83C55BE449DAD0B3E25BBEA000F573A2");

	FEventReceived_83C55BE449DAD0B3E25BBEA000F573A2 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_Order_PositionChange_C::EventReceived_44DD460049DA934061B4F6814A425E85(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Order_PositionChange.GA_SkeletonWarlord_Order_PositionChange_C.EventReceived_44DD460049DA934061B4F6814A425E85");

	FEventReceived_44DD460049DA934061B4F6814A425E85 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_Order_PositionChange_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Order_PositionChange.GA_SkeletonWarlord_Order_PositionChange_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_Order_PositionChange_C::ExecuteUbergraph_GA_SkeletonWarlord_Order_PositionChange(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Order_PositionChange.GA_SkeletonWarlord_Order_PositionChange_C.ExecuteUbergraph_GA_SkeletonWarlord_Order_PositionChange");

	FExecuteUbergraph_GA_SkeletonWarlord_Order_PositionChange parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

