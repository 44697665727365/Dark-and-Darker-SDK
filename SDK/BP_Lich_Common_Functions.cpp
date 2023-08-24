#include "pch.h"
#include "SDK.h"

void ABP_Lich_Common_C::Remove Frenzy(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lich_Common.BP_Lich_Common_C.Remove Frenzy");

	FRemove Frenzy parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Lich_Common_C::Send Signal Summonee To Die(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lich_Common.BP_Lich_Common_C.Send Signal Summonee To Die");

	FSend Signal Summonee To Die parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Lich_Common_C::Reset Variables(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lich_Common.BP_Lich_Common_C.Reset Variables");

	FReset Variables parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Lich_Common_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lich_Common.BP_Lich_Common_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Lich_Common_C::OnSetAI(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lich_Common.BP_Lich_Common_C.OnSetAI");

	FOnSetAI parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Lich_Common_C::BndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature(struct FObjectLinkRequestEvent& RecvEvent, struct UObjectLinkMetaDataBlueprint* SendEventParam){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lich_Common.BP_Lich_Common_C.BndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature");

	FBndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature parms{};	
	parms.RecvEvent = RecvEvent;
	parms.SendEventParam = SendEventParam;

	ProcessEvent(fn, &parms);
}

void ABP_Lich_Common_C::Comeback Event End(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lich_Common.BP_Lich_Common_C.Comeback Event End");

	FComeback Event End parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Lich_Common_C::OnBeforeDeath(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lich_Common.BP_Lich_Common_C.OnBeforeDeath");

	FOnBeforeDeath parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Lich_Common_C::Combat Activated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lich_Common.BP_Lich_Common_C.Combat Activated");

	FCombat Activated parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Lich_Common_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lich_Common.BP_Lich_Common_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_Lich_Common_C::ExecuteUbergraph_BP_Lich_Common(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lich_Common.BP_Lich_Common_C.ExecuteUbergraph_BP_Lich_Common");

	FExecuteUbergraph_BP_Lich_Common parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

