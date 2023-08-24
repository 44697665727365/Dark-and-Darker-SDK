#include "pch.h"
#include "SDK.h"

void ABP_Torch_C::Turnon0__FinishedFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Torch.BP_Torch_C.Turnon0__FinishedFunc");

	FTurnon0__FinishedFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Torch_C::Turnon0__UpdateFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Torch.BP_Torch_C.Turnon0__UpdateFunc");

	FTurnon0__UpdateFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Torch_C::Turnoff0__FinishedFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Torch.BP_Torch_C.Turnoff0__FinishedFunc");

	FTurnoff0__FinishedFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Torch_C::Turnoff0__UpdateFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Torch.BP_Torch_C.Turnoff0__UpdateFunc");

	FTurnoff0__UpdateFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Torch_C::Timeline_0__FinishedFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Torch.BP_Torch_C.Timeline_0__FinishedFunc");

	FTimeline_0__FinishedFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Torch_C::Timeline_0__UpdateFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Torch.BP_Torch_C.Timeline_0__UpdateFunc");

	FTimeline_0__UpdateFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Torch_C::Timeline_1__FinishedFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Torch.BP_Torch_C.Timeline_1__FinishedFunc");

	FTimeline_1__FinishedFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Torch_C::Timeline_1__UpdateFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Torch.BP_Torch_C.Timeline_1__UpdateFunc");

	FTimeline_1__UpdateFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Torch_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Torch.BP_Torch_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_Torch_C::OnAttachedSheathSocket(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Torch.BP_Torch_C.OnAttachedSheathSocket");

	FOnAttachedSheathSocket parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Torch_C::ExecuteUbergraph_BP_Torch(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Torch.BP_Torch_C.ExecuteUbergraph_BP_Torch");

	FExecuteUbergraph_BP_Torch parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

