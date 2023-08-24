#include "pch.h"
#include "SDK.h"

void ABP_SkeletonArcher_Summoned_C::Removed_D1ED25CE4EBD66C72A2FD5AFD7565609(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonArcher_Summoned.BP_SkeletonArcher_Summoned_C.Removed_D1ED25CE4EBD66C72A2FD5AFD7565609");

	FRemoved_D1ED25CE4EBD66C72A2FD5AFD7565609 parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonArcher_Summoned_C::OnFail_8D09AD2E484E08C0DD93AA832ABA2A1F(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonArcher_Summoned.BP_SkeletonArcher_Summoned_C.OnFail_8D09AD2E484E08C0DD93AA832ABA2A1F");

	FOnFail_8D09AD2E484E08C0DD93AA832ABA2A1F parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonArcher_Summoned_C::OnSuccess_8D09AD2E484E08C0DD93AA832ABA2A1F(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonArcher_Summoned.BP_SkeletonArcher_Summoned_C.OnSuccess_8D09AD2E484E08C0DD93AA832ABA2A1F");

	FOnSuccess_8D09AD2E484E08C0DD93AA832ABA2A1F parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonArcher_Summoned_C::Removed_F87A86004DE042EE99594DA67940F420(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonArcher_Summoned.BP_SkeletonArcher_Summoned_C.Removed_F87A86004DE042EE99594DA67940F420");

	FRemoved_F87A86004DE042EE99594DA67940F420 parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonArcher_Summoned_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonArcher_Summoned.BP_SkeletonArcher_Summoned_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonArcher_Summoned_C::OnBeforeDeath(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonArcher_Summoned.BP_SkeletonArcher_Summoned_C.OnBeforeDeath");

	FOnBeforeDeath parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonArcher_Summoned_C::OnSetAI(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonArcher_Summoned.BP_SkeletonArcher_Summoned_C.OnSetAI");

	FOnSetAI parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonArcher_Summoned_C::BndEvt__BP_SkeletonArcher_Summoned_DCGameObjectLink_K2Node_ComponentBoundEvent_2_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature(struct FObjectLinkRequestEvent& RecvEvent, struct UObjectLinkMetaDataBlueprint* SendEventParam){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonArcher_Summoned.BP_SkeletonArcher_Summoned_C.BndEvt__BP_SkeletonArcher_Summoned_DCGameObjectLink_K2Node_ComponentBoundEvent_2_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature");

	FBndEvt__BP_SkeletonArcher_Summoned_DCGameObjectLink_K2Node_ComponentBoundEvent_2_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature parms{};	
	parms.RecvEvent = RecvEvent;
	parms.SendEventParam = SendEventParam;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonArcher_Summoned_C::OnFMsgGASAttributeNotifyBlueprint(struct FMsgGASAttributeNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonArcher_Summoned.BP_SkeletonArcher_Summoned_C.OnFMsgGASAttributeNotifyBlueprint");

	FOnFMsgGASAttributeNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonArcher_Summoned_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonArcher_Summoned.BP_SkeletonArcher_Summoned_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonArcher_Summoned_C::MoveFailTimeOut(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonArcher_Summoned.BP_SkeletonArcher_Summoned_C.MoveFailTimeOut");

	FMoveFailTimeOut parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonArcher_Summoned_C::ExecuteUbergraph_BP_SkeletonArcher_Summoned(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonArcher_Summoned.BP_SkeletonArcher_Summoned_C.ExecuteUbergraph_BP_SkeletonArcher_Summoned");

	FExecuteUbergraph_BP_SkeletonArcher_Summoned parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

