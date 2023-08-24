#include "pch.h"
#include "SDK.h"

void ABP_DCMonsterBaseWithOptions_C::OnRep_Blackboard TargetActor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnRep_Blackboard TargetActor");

	FOnRep_Blackboard TargetActor parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::Trigger Out Overlap NPT Area(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger Out Overlap NPT Area");

	FTrigger Out Overlap NPT Area parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::Trigger In Overlap NPT Area(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger In Overlap NPT Area");

	FTrigger In Overlap NPT Area parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;
	parms.bFromSweep = bFromSweep;
	parms.SweepResult = SweepResult;

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::Move Fail Timeout(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Move Fail Timeout");

	FMove Fail Timeout parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::Check Peace To Combat(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Check Peace To Combat");

	FCheck Peace To Combat parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::Check Combat To Comeback(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Check Combat To Comeback");

	FCheck Combat To Comeback parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::Trigger Out Recog Area(struct AActor* OverlappedActor, struct AActor* OtherActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger Out Recog Area");

	FTrigger Out Recog Area parms{};	
	parms.OverlappedActor = OverlappedActor;
	parms.OtherActor = OtherActor;

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::Trigger In Recog Area(struct AActor* OverlappedActor, struct AActor* OtherActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger In Recog Area");

	FTrigger In Recog Area parms{};	
	parms.OverlappedActor = OverlappedActor;
	parms.OtherActor = OtherActor;

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::Trigger Out Combat Area(struct AActor* OverlappedActor, struct AActor* OtherActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger Out Combat Area");

	FTrigger Out Combat Area parms{};	
	parms.OverlappedActor = OverlappedActor;
	parms.OtherActor = OtherActor;

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::Trigger In Combat Area(struct AActor* OverlappedActor, struct AActor* OtherActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger In Combat Area");

	FTrigger In Combat Area parms{};	
	parms.OverlappedActor = OverlappedActor;
	parms.OtherActor = OtherActor;

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::Spawn Box for Area Check(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Spawn Box for Area Check");

	FSpawn Box for Area Check parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::SetActivityArea(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.SetActivityArea");

	FSetActivityArea parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::GetBBTargetActorToCharacterBase(bool& Result, struct ADCCharacterBase*& As DCCharacter Base){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GetBBTargetActorToCharacterBase");

	FGetBBTargetActorToCharacterBase parms{};	
	parms.Result = Result;
	parms.As DCCharacter Base = As DCCharacter Base;

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::GetBBTargetActorToMonsterBase(bool& Result, struct ABP_DCMonsterBaseWithOptions_C*& DCMonsterBaseWithOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GetBBTargetActorToMonsterBase");

	FGetBBTargetActorToMonsterBase parms{};	
	parms.Result = Result;
	parms.DCMonsterBaseWithOptions = DCMonsterBaseWithOptions;

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::GetBBTargetActor(bool& Result, struct UObject*& Return Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GetBBTargetActor");

	FGetBBTargetActor parms{};	
	parms.Result = Result;
	parms.Return Value = Return Value;

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::IgnoreSignalFromMe(struct UDCGameObjectLinkComponent* DCGame Link Object, struct FObjectLinkRequestEvent Recv Event, struct UObjectLinkMetaDataBlueprint* Send Event Param, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.IgnoreSignalFromMe");

	FIgnoreSignalFromMe parms{};	
	parms.DCGame Link Object = DCGame Link Object;
	parms.Recv Event = Recv Event;
	parms.Send Event Param = Send Event Param;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::GetLinkedMonsters(struct FObjectLinkRequestEvent Recv Event, struct UObjectLinkMetaDataBlueprint* Send Event Param){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GetLinkedMonsters");

	FGetLinkedMonsters parms{};	
	parms.Recv Event = Recv Event;
	parms.Send Event Param = Send Event Param;

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::LinkEventBase(struct UDCGameObjectLinkComponent* DCGame Link Object, struct FObjectLinkRequestEvent Recv Event, struct UObjectLinkMetaDataBlueprint* Send Event Param, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.LinkEventBase");

	FLinkEventBase parms{};	
	parms.DCGame Link Object = DCGame Link Object;
	parms.Recv Event = Recv Event;
	parms.Send Event Param = Send Event Param;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::OnApplied_227A852046B3B9DACFFBA5ABA7D2A95E(struct AActor* Source, struct FGameplayEffectSpecHandle SpecHandle, struct FActiveGameplayEffectHandle ActiveHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnApplied_227A852046B3B9DACFFBA5ABA7D2A95E");

	FOnApplied_227A852046B3B9DACFFBA5ABA7D2A95E parms{};	
	parms.Source = Source;
	parms.SpecHandle = SpecHandle;
	parms.ActiveHandle = ActiveHandle;

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::Removed_CE0B13EA482C4B99CB7832A70FAC7611(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Removed_CE0B13EA482C4B99CB7832A70FAC7611");

	FRemoved_CE0B13EA482C4B99CB7832A70FAC7611 parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::OnFail_21CEDD05472CF8AA4A07758D48F80F14(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnFail_21CEDD05472CF8AA4A07758D48F80F14");

	FOnFail_21CEDD05472CF8AA4A07758D48F80F14 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::OnSuccess_21CEDD05472CF8AA4A07758D48F80F14(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnSuccess_21CEDD05472CF8AA4A07758D48F80F14");

	FOnSuccess_21CEDD05472CF8AA4A07758D48F80F14 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::OnFail_801A2F7E484A71F27AD0278F8B82FB99(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnFail_801A2F7E484A71F27AD0278F8B82FB99");

	FOnFail_801A2F7E484A71F27AD0278F8B82FB99 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::OnSuccess_801A2F7E484A71F27AD0278F8B82FB99(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnSuccess_801A2F7E484A71F27AD0278F8B82FB99");

	FOnSuccess_801A2F7E484A71F27AD0278F8B82FB99 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::OnSetAI(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnSetAI");

	FOnSetAI parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::BndEvt__BP_DCMonsterBaseWithOptions_Impactable_K2Node_ComponentBoundEvent_0_ImpactEnduranceExhausted__DelegateSignature(float ExhaustedTime, UGameplayEffect* GameplayEffectClass, struct FDCGameplayEffectContext EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.BndEvt__BP_DCMonsterBaseWithOptions_Impactable_K2Node_ComponentBoundEvent_0_ImpactEnduranceExhausted__DelegateSignature");

	FBndEvt__BP_DCMonsterBaseWithOptions_Impactable_K2Node_ComponentBoundEvent_0_ImpactEnduranceExhausted__DelegateSignature parms{};	
	parms.ExhaustedTime = ExhaustedTime;
	parms.GameplayEffectClass = GameplayEffectClass;
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::ReceivePossessed(struct AController* NewController){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.ReceivePossessed");

	FReceivePossessed parms{};	
	parms.NewController = NewController;

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::Comeback Event Start(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Comeback Event Start");

	FComeback Event Start parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::Comeback Event End(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Comeback Event End");

	FComeback Event End parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::OnFMsgGASAttributeNotifyBlueprint(struct FMsgGASAttributeNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnFMsgGASAttributeNotifyBlueprint");

	FOnFMsgGASAttributeNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::OnBeforeDeath(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnBeforeDeath");

	FOnBeforeDeath parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::BndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature(struct FObjectLinkRequestEvent& RecvEvent, struct UObjectLinkMetaDataBlueprint* SendEventParam){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.BndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature");

	FBndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature parms{};	
	parms.RecvEvent = RecvEvent;
	parms.SendEventParam = SendEventParam;

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::OnNewTarget(struct ADCCharacterBase* InTarget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnNewTarget");

	FOnNewTarget parms{};	
	parms.InTarget = InTarget;

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::Comeback Activated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Comeback Activated");

	FComeback Activated parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::Peace Activated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Peace Activated");

	FPeace Activated parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::Combat Activated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Combat Activated");

	FCombat Activated parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::ExecuteUbergraph_BP_DCMonsterBaseWithOptions(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.ExecuteUbergraph_BP_DCMonsterBaseWithOptions");

	FExecuteUbergraph_BP_DCMonsterBaseWithOptions parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::Comeback Activated Event Dispatcher__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Comeback Activated Event Dispatcher__DelegateSignature");

	FComeback Activated Event Dispatcher__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::Peace Activated Event Dispatcher__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Peace Activated Event Dispatcher__DelegateSignature");

	FPeace Activated Event Dispatcher__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCMonsterBaseWithOptions_C::Combat Activated Event Dispatcher__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Combat Activated Event Dispatcher__DelegateSignature");

	FCombat Activated Event Dispatcher__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

