#include "pch.h"
#include "SDK.h"

void ABP_BossReward_DoubleStoneDoor_C::InteractTargetInfoRarity(struct FGameplayTag& RarityTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_BossReward_DoubleStoneDoor.BP_BossReward_DoubleStoneDoor_C.InteractTargetInfoRarity");

	FInteractTargetInfoRarity parms{};	
	parms.RarityTag = RarityTag;

	ProcessEvent(fn, &parms);
}

void ABP_BossReward_DoubleStoneDoor_C::BndEvt__BP_DoorBase_DCGameObjectLink_K2Node_ComponentBoundEvent_1_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature(struct FObjectLinkRequestEvent& RecvEvent, struct UObjectLinkMetaDataBlueprint* SendEventParam){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_BossReward_DoubleStoneDoor.BP_BossReward_DoubleStoneDoor_C.BndEvt__BP_DoorBase_DCGameObjectLink_K2Node_ComponentBoundEvent_1_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature");

	FBndEvt__BP_DoorBase_DCGameObjectLink_K2Node_ComponentBoundEvent_1_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature parms{};	
	parms.RecvEvent = RecvEvent;
	parms.SendEventParam = SendEventParam;

	ProcessEvent(fn, &parms);
}

void ABP_BossReward_DoubleStoneDoor_C::ExecuteUbergraph_BP_BossReward_DoubleStoneDoor(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_BossReward_DoubleStoneDoor.BP_BossReward_DoubleStoneDoor_C.ExecuteUbergraph_BP_BossReward_DoubleStoneDoor");

	FExecuteUbergraph_BP_BossReward_DoubleStoneDoor parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

