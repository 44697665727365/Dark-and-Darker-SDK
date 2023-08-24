#include "pch.h"
#include "SDK.h"

void ABP_TriggerBase_C::InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TriggerBase.BP_TriggerBase_C.InteractSucceed");

	FInteractSucceed parms{};	
	parms.Interacter = Interacter;
	parms.StateTag = StateTag;
	parms.TriggerTag = TriggerTag;
	parms.HitResult = HitResult;

	ProcessEvent(fn, &parms);
}

void ABP_TriggerBase_C::BndEvt__BP_Portcullis_DCGameObjectLink_K2Node_ComponentBoundEvent_0_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature(struct FObjectLinkRequestEvent& RecvEvent, struct UObjectLinkMetaDataBlueprint* SendEventParam){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TriggerBase.BP_TriggerBase_C.BndEvt__BP_Portcullis_DCGameObjectLink_K2Node_ComponentBoundEvent_0_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature");

	FBndEvt__BP_Portcullis_DCGameObjectLink_K2Node_ComponentBoundEvent_0_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature parms{};	
	parms.RecvEvent = RecvEvent;
	parms.SendEventParam = SendEventParam;

	ProcessEvent(fn, &parms);
}

void ABP_TriggerBase_C::ExecuteUbergraph_BP_TriggerBase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TriggerBase.BP_TriggerBase_C.ExecuteUbergraph_BP_TriggerBase");

	FExecuteUbergraph_BP_TriggerBase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

