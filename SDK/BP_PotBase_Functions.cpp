#include "pch.h"
#include "SDK.h"

void ABP_PotBase_C::OnImpactEnduranceExhausted(float ExhaustedTime, UGameplayEffect* GameplayEffectClass, struct FDCGameplayEffectContext EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PotBase.BP_PotBase_C.OnImpactEnduranceExhausted");

	FOnImpactEnduranceExhausted parms{};	
	parms.ExhaustedTime = ExhaustedTime;
	parms.GameplayEffectClass = GameplayEffectClass;
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);
}

void ABP_PotBase_C::BndEvt__BP_ChestBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature(struct TArray<struct FItemData>& ResultItems){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PotBase.BP_PotBase_C.BndEvt__BP_ChestBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature");

	FBndEvt__BP_ChestBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature parms{};	
	parms.ResultItems = ResultItems;

	ProcessEvent(fn, &parms);
}

void ABP_PotBase_C::ExecuteUbergraph_BP_PotBase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PotBase.BP_PotBase_C.ExecuteUbergraph_BP_PotBase");

	FExecuteUbergraph_BP_PotBase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

