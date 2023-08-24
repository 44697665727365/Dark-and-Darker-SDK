#include "pch.h"
#include "SDK.h"

void UABP_PlayerCharacterCapture_C::AnimGraph(struct FPoseLink& AnimGraph){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C.AnimGraph");

	FAnimGraph parms{};	
	parms.AnimGraph = AnimGraph;

	ProcessEvent(fn, &parms);
}

void UABP_PlayerCharacterCapture_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C.BlueprintThreadSafeUpdateAnimation");

	FBlueprintThreadSafeUpdateAnimation parms{};	
	parms.DeltaTime = DeltaTime;

	ProcessEvent(fn, &parms);
}

void UABP_PlayerCharacterCapture_C::OnChangedStandIdle(struct UAnimSequence* ItemStandIdleAnimation, struct FGameplayTag ItemHandType, struct FGameplayTag ItemSlotType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C.OnChangedStandIdle");

	FOnChangedStandIdle parms{};	
	parms.ItemStandIdleAnimation = ItemStandIdleAnimation;
	parms.ItemHandType = ItemHandType;
	parms.ItemSlotType = ItemSlotType;

	ProcessEvent(fn, &parms);
}

void UABP_PlayerCharacterCapture_C::ExecuteUbergraph_ABP_PlayerCharacterCapture(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C.ExecuteUbergraph_ABP_PlayerCharacterCapture");

	FExecuteUbergraph_ABP_PlayerCharacterCapture parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

