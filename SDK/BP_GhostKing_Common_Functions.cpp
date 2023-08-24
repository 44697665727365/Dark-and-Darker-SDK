#include "pch.h"
#include "SDK.h"

void ABP_GhostKing_Common_C::Add Soulstolen Tag After Comeback(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GhostKing_Common.BP_GhostKing_Common_C.Add Soulstolen Tag After Comeback");

	FAdd Soulstolen Tag After Comeback parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GhostKing_Common_C::Check Combat To Comeback(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GhostKing_Common.BP_GhostKing_Common_C.Check Combat To Comeback");

	FCheck Combat To Comeback parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GhostKing_Common_C::Remove Curse(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GhostKing_Common.BP_GhostKing_Common_C.Remove Curse");

	FRemove Curse parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GhostKing_Common_C::Reset Variables(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GhostKing_Common.BP_GhostKing_Common_C.Reset Variables");

	FReset Variables parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GhostKing_Common_C::OnMessageReceived_75F8964240716405A440888646BEC122(struct UMsgBaseNode* ProxyObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GhostKing_Common.BP_GhostKing_Common_C.OnMessageReceived_75F8964240716405A440888646BEC122");

	FOnMessageReceived_75F8964240716405A440888646BEC122 parms{};	
	parms.ProxyObject = ProxyObject;

	ProcessEvent(fn, &parms);
}

void ABP_GhostKing_Common_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GhostKing_Common.BP_GhostKing_Common_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_GhostKing_Common_C::OnSetAI(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GhostKing_Common.BP_GhostKing_Common_C.OnSetAI");

	FOnSetAI parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GhostKing_Common_C::Comeback Event End(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GhostKing_Common.BP_GhostKing_Common_C.Comeback Event End");

	FComeback Event End parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GhostKing_Common_C::BndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature(struct FObjectLinkRequestEvent& RecvEvent, struct UObjectLinkMetaDataBlueprint* SendEventParam){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GhostKing_Common.BP_GhostKing_Common_C.BndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature");

	FBndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature parms{};	
	parms.RecvEvent = RecvEvent;
	parms.SendEventParam = SendEventParam;

	ProcessEvent(fn, &parms);
}

void ABP_GhostKing_Common_C::Combat Activated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GhostKing_Common.BP_GhostKing_Common_C.Combat Activated");

	FCombat Activated parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GhostKing_Common_C::Comeback Activated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GhostKing_Common.BP_GhostKing_Common_C.Comeback Activated");

	FComeback Activated parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GhostKing_Common_C::Summon SmallGhost(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GhostKing_Common.BP_GhostKing_Common_C.Summon SmallGhost");

	FSummon SmallGhost parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GhostKing_Common_C::Summonee All Dead(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GhostKing_Common.BP_GhostKing_Common_C.Summonee All Dead");

	FSummonee All Dead parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GhostKing_Common_C::ExecuteUbergraph_BP_GhostKing_Common(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GhostKing_Common.BP_GhostKing_Common_C.ExecuteUbergraph_BP_GhostKing_Common");

	FExecuteUbergraph_BP_GhostKing_Common parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

