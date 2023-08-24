#include "pch.h"
#include "SDK.h"

void ABP_ItemDispenserBase_C::InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ItemDispenserBase.BP_ItemDispenserBase_C.InteractSucceed");

	FInteractSucceed parms{};	
	parms.Interacter = Interacter;
	parms.StateTag = StateTag;
	parms.TriggerTag = TriggerTag;
	parms.HitResult = HitResult;

	ProcessEvent(fn, &parms);
}

void ABP_ItemDispenserBase_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ItemDispenserBase.BP_ItemDispenserBase_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_ItemDispenserBase_C::BndEvt__BP_Statue_ATM_ItemRandomGenerate_K2Node_ComponentBoundEvent_2_ItemGenerationFinishedSignature__DelegateSignature(struct TArray<struct FItemData>& ResultItems){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ItemDispenserBase.BP_ItemDispenserBase_C.BndEvt__BP_Statue_ATM_ItemRandomGenerate_K2Node_ComponentBoundEvent_2_ItemGenerationFinishedSignature__DelegateSignature");

	FBndEvt__BP_Statue_ATM_ItemRandomGenerate_K2Node_ComponentBoundEvent_2_ItemGenerationFinishedSignature__DelegateSignature parms{};	
	parms.ResultItems = ResultItems;

	ProcessEvent(fn, &parms);
}

void ABP_ItemDispenserBase_C::ExecuteUbergraph_BP_ItemDispenserBase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ItemDispenserBase.BP_ItemDispenserBase_C.ExecuteUbergraph_BP_ItemDispenserBase");

	FExecuteUbergraph_BP_ItemDispenserBase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

