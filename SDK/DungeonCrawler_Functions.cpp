#include "pch.h"
#include "SDK.h"

bool USkillComponent::UpdateSkillCount(struct FGameplayTag SkillTag, int32_t Count){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillComponent.UpdateSkillCount");

	FUpdateSkillCount parms{};	
	parms.SkillTag = SkillTag;
	parms.Count = Count;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USkillComponent::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillComponent.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void USkillComponent::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillComponent.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void USkillComponent::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillComponent.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void USkillComponent::SetCooldownForDebug_Server(bool bNoCooldownTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillComponent.SetCooldownForDebug_Server");

	FSetCooldownForDebug_Server parms{};	
	parms.bNoCooldownTime = bNoCooldownTime;

	ProcessEvent(fn, &parms);
}

void USkillComponent::OnRep_SkillDataList(struct TArray<struct FSkillDataInfo>& OldSkillDataList){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillComponent.OnRep_SkillDataList");

	FOnRep_SkillDataList parms{};	
	parms.OldSkillDataList = OldSkillDataList;

	ProcessEvent(fn, &parms);
}

void USkillComponent::OnRep_SkillActorList(struct TArray<struct ASkillActor*>& OldSkillActors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillComponent.OnRep_SkillActorList");

	FOnRep_SkillActorList parms{};	
	parms.OldSkillActors = OldSkillActors;

	ProcessEvent(fn, &parms);
}

void USkillComponent::InitSkillData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillComponent.InitSkillData");

	FInitSkillData parms{};	

	ProcessEvent(fn, &parms);
}

void USkillComponent::HandleSkillInput(struct FGameplayTag InputTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillComponent.HandleSkillInput");

	FHandleSkillInput parms{};	
	parms.InputTag = InputTag;

	ProcessEvent(fn, &parms);
}

struct FSkillData USkillComponent::GetSkillDataByTriggerTag(struct FGameplayTag TriggerTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillComponent.GetSkillDataByTriggerTag");

	FGetSkillDataByTriggerTag parms{};	
	parms.TriggerTag = TriggerTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSkillData USkillComponent::GetSkillDataByIndex(uint8_t SkillIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillComponent.GetSkillDataByIndex");

	FGetSkillDataByIndex parms{};	
	parms.SkillIndex = SkillIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USkillComponent::GetSkillAllCurrentSkillData(struct TArray<struct FSkillData>& SkillDataList, struct TArray<float>& MaxDurationList, struct TArray<float>& RemainDurationList){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillComponent.GetSkillAllCurrentSkillData");

	FGetSkillAllCurrentSkillData parms{};	
	parms.SkillDataList = SkillDataList;
	parms.MaxDurationList = MaxDurationList;
	parms.RemainDurationList = RemainDurationList;

	ProcessEvent(fn, &parms);
}

struct ASkillActor* USkillComponent::GetSkillActor(struct FGameplayTag SkillTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillComponent.GetSkillActor");

	FGetSkillActor parms{};	
	parms.SkillTag = SkillTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t USkillComponent::GetSkillActivatabilityByTriggerTag(struct FGameplayTag TriggerTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillComponent.GetSkillActivatabilityByTriggerTag");

	FGetSkillActivatabilityByTriggerTag parms{};	
	parms.TriggerTag = TriggerTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USkillComponent::GameplayEffectStackChanged(struct FGameplayTag EffectGameplayTag, struct FActiveGameplayEffectHandle EffectHandle, int32_t NewStackCount, int32_t PreviousStackCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillComponent.GameplayEffectStackChanged");

	FGameplayEffectStackChanged parms{};	
	parms.EffectGameplayTag = EffectGameplayTag;
	parms.EffectHandle = EffectHandle;
	parms.NewStackCount = NewStackCount;
	parms.PreviousStackCount = PreviousStackCount;

	ProcessEvent(fn, &parms);
}

bool USkillComponent::CheckSkillReduceCount(struct FGameplayTag SkillTag, float ReduceCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillComponent.CheckSkillReduceCount");

	FCheckSkillReduceCount parms{};	
	parms.SkillTag = SkillTag;
	parms.ReduceCount = ReduceCount;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float USkillComponent::CalSkillCooldownRemainTime(float StartTime, float RemainDuration, float MaxDuration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillComponent.CalSkillCooldownRemainTime");

	FCalSkillCooldownRemainTime parms{};	
	parms.StartTime = StartTime;
	parms.RemainDuration = RemainDuration;
	parms.MaxDuration = MaxDuration;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USkillComponent::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillComponent.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGA_ProjectileCollision::UpdateIgnoreActors(struct AActor* InCheckActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ProjectileCollision.UpdateIgnoreActors");

	FUpdateIgnoreActors parms{};	
	parms.InCheckActor = InCheckActor;

	ProcessEvent(fn, &parms);
}

void UGA_ProjectileCollision::TargetDataReceived(struct FHitResult& Hit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ProjectileCollision.TargetDataReceived");

	FTargetDataReceived parms{};	
	parms.Hit = Hit;

	ProcessEvent(fn, &parms);
}

void UGA_ProjectileCollision::ReceivedTargetData(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ProjectileCollision.ReceivedTargetData");

	FReceivedTargetData parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_ProjectileCollision::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ProjectileCollision.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void ULobbyGroupTradeChannelWidget::OnReadRulesButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LobbyGroupTradeChannelWidget.OnReadRulesButtonClicked");

	FOnReadRulesButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void ULobbyGroupTradeChannelWidget::OnLeaveChannelButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LobbyGroupTradeChannelWidget.OnLeaveChannelButtonClicked");

	FOnLeaveChannelButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UCharacterCreateWidget::OnTextChangedNickName(struct FText& InNickName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterCreateWidget.OnTextChangedNickName");

	FOnTextChangedNickName parms{};	
	parms.InNickName = InNickName;

	ProcessEvent(fn, &parms);
}

void UCharacterCreateWidget::OnPurchaseButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterCreateWidget.OnPurchaseButtonClicked");

	FOnPurchaseButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UCharacterCreateWidget::OnLaunchShopURLButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterCreateWidget.OnLaunchShopURLButtonClicked");

	FOnLaunchShopURLButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UCharacterCreateWidget::OnGenderClicked(uint8_t Gender){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterCreateWidget.OnGenderClicked");

	FOnGenderClicked parms{};	
	parms.Gender = Gender;

	ProcessEvent(fn, &parms);
}

void UCharacterCreateWidget::OnClassSelectTileViewItemSelectionChanged(struct UObject* InItem){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterCreateWidget.OnClassSelectTileViewItemSelectionChanged");

	FOnClassSelectTileViewItemSelectionChanged parms{};	
	parms.InItem = InItem;

	ProcessEvent(fn, &parms);
}

void UCharacterCreateWidget::HandleExitButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterCreateWidget.HandleExitButtonClicked");

	FHandleExitButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UCharacterCreateWidget::HandleConfirmButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterCreateWidget.HandleConfirmButtonClicked");

	FHandleConfirmButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

int32_t UCharacterCreateWidget::GetPrice(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterCreateWidget.GetPrice");

	FGetPrice parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UCharacterCreateWidget::GetCashPrice(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterCreateWidget.GetCashPrice");

	FGetCashPrice parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UCharacterCreateWidget::GetCannotCreateVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterCreateWidget.GetCannotCreateVisibility");

	FGetCannotCreateVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UCharacterCreateWidget::GetCanCreateVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterCreateWidget.GetCanCreateVisibility");

	FGetCanCreateVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UCharacterCreateWidget::CanLaunchRedstoneShardShop(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterCreateWidget.CanLaunchRedstoneShardShop");

	FCanLaunchRedstoneShardShop parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCMerchantPageWidget::OnServiceTypeChanged(uint8_t ServiceType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMerchantPageWidget.OnServiceTypeChanged");

	FOnServiceTypeChanged parms{};	
	parms.ServiceType = ServiceType;

	ProcessEvent(fn, &parms);
}

void UDCMerchantPageWidget::OnServiceTabSelected(struct FName TabId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMerchantPageWidget.OnServiceTabSelected");

	FOnServiceTabSelected parms{};	
	parms.TabId = TabId;

	ProcessEvent(fn, &parms);
}

void UDCMerchantPageWidget::OnCategoryTabSelected(struct FName TabId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMerchantPageWidget.OnCategoryTabSelected");

	FOnCategoryTabSelected parms{};	
	parms.TabId = TabId;

	ProcessEvent(fn, &parms);
}

void UDCMerchantPageWidget::OnButtonBack(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMerchantPageWidget.OnButtonBack");

	FOnButtonBack parms{};	

	ProcessEvent(fn, &parms);
}

void UAccountLink::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AccountLink.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UAccountLink::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AccountLink.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UAccountLink::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AccountLink.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UAccountLink::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AccountLink.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGameMiniMapWidget::OnMiniMapName(struct FString NewMiniMapName, struct FString OldMiniMapName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMiniMapWidget.OnMiniMapName");

	FOnMiniMapName parms{};	
	parms.NewMiniMapName = NewMiniMapName;
	parms.OldMiniMapName = OldMiniMapName;

	ProcessEvent(fn, &parms);
}

void UGameMiniMapWidget::OnMiniMapDeathSwarmData(struct FMiniMapDeathSwarmData& NewValue, struct FMiniMapDeathSwarmData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMiniMapWidget.OnMiniMapDeathSwarmData");

	FOnMiniMapDeathSwarmData parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UAccountLinkAll::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AccountLinkAll.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UAccountLinkAll::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AccountLinkAll.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UAccountLinkAll::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AccountLinkAll.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UAccountLinkAll::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AccountLinkAll.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGameMusicPlayBarWidget::OnMusicPlaySucceed(uint8_t Judge){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMusicPlayBarWidget.OnMusicPlaySucceed");

	FOnMusicPlaySucceed parms{};	
	parms.Judge = Judge;

	ProcessEvent(fn, &parms);
}

void UGameMusicPlayBarWidget::OnMusicPlayStart(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMusicPlayBarWidget.OnMusicPlayStart");

	FOnMusicPlayStart parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMusicPlayBarWidget::OnMusicPlayEnd(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMusicPlayBarWidget.OnMusicPlayEnd");

	FOnMusicPlayEnd parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMusicPlayBarWidget::OnMusicJudgeNotify(uint8_t Judge, float PastSectionRatio, float NextSectionRatio, float JudgePositionRatio){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMusicPlayBarWidget.OnMusicJudgeNotify");

	FOnMusicJudgeNotify parms{};	
	parms.Judge = Judge;
	parms.PastSectionRatio = PastSectionRatio;
	parms.NextSectionRatio = NextSectionRatio;
	parms.JudgePositionRatio = JudgePositionRatio;

	ProcessEvent(fn, &parms);
}

void UGameMusicPlayBarWidget::OnMusicChannelingStart(uint8_t Judge){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMusicPlayBarWidget.OnMusicChannelingStart");

	FOnMusicChannelingStart parms{};	
	parms.Judge = Judge;

	ProcessEvent(fn, &parms);
}

void UGameMusicPlayBarWidget::OnMusicChannelingEnd(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMusicPlayBarWidget.OnMusicChannelingEnd");

	FOnMusicChannelingEnd parms{};	

	ProcessEvent(fn, &parms);
}

void UInteractableTargetComponent::UnregisterInteracter(struct AActor* InteractingActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InteractableTargetComponent.UnregisterInteracter");

	FUnregisterInteracter parms{};	
	parms.InteractingActor = InteractingActor;

	ProcessEvent(fn, &parms);
}

void UInteractableTargetComponent::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InteractableTargetComponent.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UInteractableTargetComponent::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InteractableTargetComponent.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UInteractableTargetComponent::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InteractableTargetComponent.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

bool UInteractableTargetComponent::ShouldCancelOthersWhenInteractSucceed(struct FGameplayTag StateTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InteractableTargetComponent.ShouldCancelOthersWhenInteractSucceed");

	FShouldCancelOthersWhenInteractSucceed parms{};	
	parms.StateTag = StateTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UInteractableTargetComponent::SetInteractionData(struct FDesignDataPropsInteract& InteractionData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InteractableTargetComponent.SetInteractionData");

	FSetInteractionData parms{};	
	parms.InteractionData = InteractionData;

	ProcessEvent(fn, &parms);
}

void UInteractableTargetComponent::RegisterInteracter(struct AActor* InteractingActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InteractableTargetComponent.RegisterInteracter");

	FRegisterInteracter parms{};	
	parms.InteractingActor = InteractingActor;

	ProcessEvent(fn, &parms);
}

bool UInteractableTargetComponent::IsDetectable(struct AActor* Interacter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InteractableTargetComponent.IsDetectable");

	FIsDetectable parms{};	
	parms.Interacter = Interacter;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UInteractableTargetComponent::InteractSucceed(struct AActor* InteractingActor, struct FGameplayTag TriggerTag, struct FGameplayTag StateTag, struct FHitResult HitResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InteractableTargetComponent.InteractSucceed");

	FInteractSucceed parms{};	
	parms.InteractingActor = InteractingActor;
	parms.TriggerTag = TriggerTag;
	parms.StateTag = StateTag;
	parms.HitResult = HitResult;

	ProcessEvent(fn, &parms);
}

void UInteractableTargetComponent::InteractFailed(struct AActor* InteractingActor, struct FGameplayTag TriggerTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InteractableTargetComponent.InteractFailed");

	FInteractFailed parms{};	
	parms.InteractingActor = InteractingActor;
	parms.TriggerTag = TriggerTag;

	ProcessEvent(fn, &parms);
}

struct FGameplayTag UInteractableTargetComponent::GetStateTag(struct FGameplayTag TriggerTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InteractableTargetComponent.GetStateTag");

	FGetStateTag parms{};	
	parms.TriggerTag = TriggerTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FInteractTargetData UInteractableTargetComponent::GetInteractTargetData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InteractableTargetComponent.GetInteractTargetData");

	FGetInteractTargetData parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TMap<struct FGameplayTag, struct FInteractionData> UInteractableTargetComponent::GetInteractableDataByStateMap(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InteractableTargetComponent.GetInteractableDataByStateMap");

	FGetInteractableDataByStateMap parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UInteractableTargetComponent::GetInteractability(struct AActor* Interacter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InteractableTargetComponent.GetInteractability");

	FGetInteractability parms{};	
	parms.Interacter = Interacter;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FInteractionData UInteractableTargetComponent::GetData(struct FGameplayTag StateTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InteractableTargetComponent.GetData");

	FGetData parms{};	
	parms.StateTag = StateTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UInteractableTargetComponent::CanInteract(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InteractableTargetComponent.CanInteract");

	FCanInteract parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UInteractableTargetComponent::CancelAllInteractions(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InteractableTargetComponent.CancelAllInteractions");

	FCancelAllInteractions parms{};	

	ProcessEvent(fn, &parms);
}

void UInteractableTargetComponent::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InteractableTargetComponent.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UAccountSession::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AccountSession.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UAccountSession::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AccountSession.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UAccountSession::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AccountSession.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UAccountSession::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AccountSession.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

bool UDCMonsterAISystemBlueprintLibrary::SubAggro(struct ADCMonsterBase*& DCMonsterBase, struct ADCCharacterBase*& Target, float Point){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SubAggro");

	FSubAggro parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.Target = Target;
	parms.Point = Point;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct ADCCharacterBase* UDCMonsterAISystemBlueprintLibrary::SpawnSlave(struct ADCMonsterBase*& DCMonsterBase, ADCMonsterBase* SlaveClass, float XYRange, bool& bSuccessfully){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SpawnSlave");

	FSpawnSlave parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.SlaveClass = SlaveClass;
	parms.XYRange = XYRange;
	parms.bSuccessfully = bSuccessfully;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::SortTargetsByZRange(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, uint8_t MonsterFilterSortingType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SortTargetsByZRange");

	FSortTargetsByZRange parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.TargetArray = TargetArray;
	parms.MonsterFilterSortingType = MonsterFilterSortingType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::SortTargetsByXYRange(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, uint8_t MonsterFilterSortingType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SortTargetsByXYRange");

	FSortTargetsByXYRange parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.TargetArray = TargetArray;
	parms.MonsterFilterSortingType = MonsterFilterSortingType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct ADCCharacterBase* UDCMonsterAISystemBlueprintLibrary::SortTargetsByDistanceAndPickTarget(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, uint8_t MonsterFilterSortingType, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SortTargetsByDistanceAndPickTarget");

	FSortTargetsByDistanceAndPickTarget parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.TargetArray = TargetArray;
	parms.MonsterFilterSortingType = MonsterFilterSortingType;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::SortTargetsByDistance(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, uint8_t MonsterFilterSortingType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SortTargetsByDistance");

	FSortTargetsByDistance parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.TargetArray = TargetArray;
	parms.MonsterFilterSortingType = MonsterFilterSortingType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::SortTargetsByAggro(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, uint8_t MonsterFilterSortingType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SortTargetsByAggro");

	FSortTargetsByAggro parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.TargetArray = TargetArray;
	parms.MonsterFilterSortingType = MonsterFilterSortingType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::SetAggroRate(struct ADCCharacterBase*& DCCharacterBase, float Time, float Rate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SetAggroRate");

	FSetAggroRate parms{};	
	parms.DCCharacterBase = DCCharacterBase;
	parms.Time = Time;
	parms.Rate = Rate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::SetAggro(struct ADCMonsterBase*& DCMonsterBase, struct ADCCharacterBase*& Target, float Point){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SetAggro");

	FSetAggro parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.Target = Target;
	parms.Point = Point;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::RemoveAggroAll(struct ADCCharacterBase* DCCharacterBase){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.RemoveAggroAll");

	FRemoveAggroAll parms{};	
	parms.DCCharacterBase = DCCharacterBase;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::RemoveAggro(struct ADCMonsterBase*& DCMonsterBase, struct ADCCharacterBase*& Target){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.RemoveAggro");

	FRemoveAggro parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.Target = Target;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct ADCCharacterBase* UDCMonsterAISystemBlueprintLibrary::PickTopAggroTarget(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.PickTopAggroTarget");

	FPickTopAggroTarget parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.TargetArray = TargetArray;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct ADCCharacterBase* UDCMonsterAISystemBlueprintLibrary::PickTarget(struct TArray<struct ADCCharacterBase*>& TargetArray, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.PickTarget");

	FPickTarget parms{};	
	parms.TargetArray = TargetArray;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct ADCCharacterBase* UDCMonsterAISystemBlueprintLibrary::PickRandomTarget(struct TArray<struct ADCCharacterBase*>& TargetArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.PickRandomTarget");

	FPickRandomTarget parms{};	
	parms.TargetArray = TargetArray;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::MulAggro(struct ADCMonsterBase*& DCMonsterBase, struct ADCCharacterBase*& Target, float Point){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.MulAggro");

	FMulAggro parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.Target = Target;
	parms.Point = Point;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::JumpToLocation(struct ADCCharacterBase*& DCCharacterBase, struct FVector DstLocation, float Power, bool bFavorHighArc){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.JumpToLocation");

	FJumpToLocation parms{};	
	parms.DCCharacterBase = DCCharacterBase;
	parms.DstLocation = DstLocation;
	parms.Power = Power;
	parms.bFavorHighArc = bFavorHighArc;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::JumpToActor(struct ADCCharacterBase*& DCCharacterBase, struct AActor*& DstActor, float Power, bool bFavorHighArc){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.JumpToActor");

	FJumpToActor parms{};	
	parms.DCCharacterBase = DCCharacterBase;
	parms.DstActor = DstActor;
	parms.Power = Power;
	parms.bFavorHighArc = bFavorHighArc;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::IsAvailablePath(struct ADCMonsterBase*& DCMonsterBase, struct FVector DstLocation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.IsAvailablePath");

	FIsAvailablePath parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.DstLocation = DstLocation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UDCMonsterAISystemBlueprintLibrary::GetSlaveCount(struct ADCMonsterBase*& DCMonsterBase){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetSlaveCount");

	FGetSlaveCount parms{};	
	parms.DCMonsterBase = DCMonsterBase;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::GetSightTargetArray(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetSightTargetArray");

	FGetSightTargetArray parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.TargetArray = TargetArray;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::GetHearingTargetArray(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetHearingTargetArray");

	FGetHearingTargetArray parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.TargetArray = TargetArray;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::GetDamageTargetArray(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetDamageTargetArray");

	FGetDamageTargetArray parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.TargetArray = TargetArray;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UDCMonsterAISystemBlueprintLibrary::GetCurrentAttributeValue(struct ADCCharacterBase*& DCCharacterBase, struct FGameplayAttribute GameplayAttribute, bool& bSuccessfully){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetCurrentAttributeValue");

	FGetCurrentAttributeValue parms{};	
	parms.DCCharacterBase = DCCharacterBase;
	parms.GameplayAttribute = GameplayAttribute;
	parms.bSuccessfully = bSuccessfully;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UDCMonsterAISystemBlueprintLibrary::GetBaseAttributeValue(struct ADCCharacterBase*& DCCharacterBase, struct FGameplayAttribute GameplayAttribute, bool& bSuccessfully){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetBaseAttributeValue");

	FGetBaseAttributeValue parms{};	
	parms.DCCharacterBase = DCCharacterBase;
	parms.GameplayAttribute = GameplayAttribute;
	parms.bSuccessfully = bSuccessfully;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::GetAllTargetArray(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetAllTargetArray");

	FGetAllTargetArray parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.TargetArray = TargetArray;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UDCMonsterAISystemBlueprintLibrary::GetAggroPoint(struct ADCMonsterBase*& DCMonsterBase, struct ADCCharacterBase*& Target, bool& bSuccessfully){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetAggroPoint");

	FGetAggroPoint parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.Target = Target;
	parms.bSuccessfully = bSuccessfully;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::GetAggroMonster(struct ADCCharacterBase* DCCharacterBase, struct TArray<struct ADCMonsterBase*>& TargetArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetAggroMonster");

	FGetAggroMonster parms{};	
	parms.DCCharacterBase = DCCharacterBase;
	parms.TargetArray = TargetArray;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::FilterUnTagedTargets(struct TArray<struct ADCCharacterBase*>& TargetArray, struct FGameplayTag GameplayTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterUnTagedTargets");

	FFilterUnTagedTargets parms{};	
	parms.TargetArray = TargetArray;
	parms.GameplayTag = GameplayTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::FilterTargetsWithinZRange(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, float ZRange){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsWithinZRange");

	FFilterTargetsWithinZRange parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.TargetArray = TargetArray;
	parms.ZRange = ZRange;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::FilterTargetsWithinXYRangeAndZRangeAndDirectionalAngleAndAllowedAngle(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, float XYRange, float ZRange, float DirectionalAngle, float AllowedAngle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsWithinXYRangeAndZRangeAndDirectionalAngleAndAllowedAngle");

	FFilterTargetsWithinXYRangeAndZRangeAndDirectionalAngleAndAllowedAngle parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.TargetArray = TargetArray;
	parms.XYRange = XYRange;
	parms.ZRange = ZRange;
	parms.DirectionalAngle = DirectionalAngle;
	parms.AllowedAngle = AllowedAngle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::FilterTargetsWithinXYRange(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, float XYRange){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsWithinXYRange");

	FFilterTargetsWithinXYRange parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.TargetArray = TargetArray;
	parms.XYRange = XYRange;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::FilterTargetsWithinDistanceAndDirectionalAngleAndAllowedAngle(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, float Distance, float DirectionalAngle, float AllowedAngle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsWithinDistanceAndDirectionalAngleAndAllowedAngle");

	FFilterTargetsWithinDistanceAndDirectionalAngleAndAllowedAngle parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.TargetArray = TargetArray;
	parms.Distance = Distance;
	parms.DirectionalAngle = DirectionalAngle;
	parms.AllowedAngle = AllowedAngle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::FilterTargetsWithinDistance(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, float Distance){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsWithinDistance");

	FFilterTargetsWithinDistance parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.TargetArray = TargetArray;
	parms.Distance = Distance;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::FilterTargetsWithinDirectionAngleAndAllowedAngle(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, float DirectionalAngle, float AllowedAngle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsWithinDirectionAngleAndAllowedAngle");

	FFilterTargetsWithinDirectionAngleAndAllowedAngle parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.TargetArray = TargetArray;
	parms.DirectionalAngle = DirectionalAngle;
	parms.AllowedAngle = AllowedAngle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::FilterTargetsOverZRange(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, float ZRange){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsOverZRange");

	FFilterTargetsOverZRange parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.TargetArray = TargetArray;
	parms.ZRange = ZRange;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::FilterTargetsOverXYRange(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, float XYRange){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsOverXYRange");

	FFilterTargetsOverXYRange parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.TargetArray = TargetArray;
	parms.XYRange = XYRange;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::FilterTargetsOverDistance(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, float Distance){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsOverDistance");

	FFilterTargetsOverDistance parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.TargetArray = TargetArray;
	parms.Distance = Distance;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMonsterAISystemBlueprintLibrary::FilterTagedTargets(struct TArray<struct ADCCharacterBase*>& TargetArray, struct FGameplayTag GameplayTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTagedTargets");

	FFilterTagedTargets parms{};	
	parms.TargetArray = TargetArray;
	parms.GameplayTag = GameplayTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCMonsterAISystemBlueprintLibrary::FilterPlayerCharacterTargets(struct TArray<struct ADCCharacterBase*>& TargetArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterPlayerCharacterTargets");

	FFilterPlayerCharacterTargets parms{};	
	parms.TargetArray = TargetArray;

	ProcessEvent(fn, &parms);
}

bool UDCMonsterAISystemBlueprintLibrary::FilterMonsterTargetsByID(struct TArray<struct ADCCharacterBase*>& TargetArray, struct FPrimaryAssetId ID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterMonsterTargetsByID");

	FFilterMonsterTargetsByID parms{};	
	parms.TargetArray = TargetArray;
	parms.ID = ID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCMonsterAISystemBlueprintLibrary::FilterMonsterTargets(struct TArray<struct ADCCharacterBase*>& TargetArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterMonsterTargets");

	FFilterMonsterTargets parms{};	
	parms.TargetArray = TargetArray;

	ProcessEvent(fn, &parms);
}

bool UDCMonsterAISystemBlueprintLibrary::AddAggro(struct ADCMonsterBase*& DCMonsterBase, struct ADCCharacterBase*& Target, float Point){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.AddAggro");

	FAddAggro parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.Target = Target;
	parms.Point = Point;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameMusicSlotWidget::SelectionChange(bool bIsSelected){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMusicSlotWidget.SelectionChange");

	FSelectionChange parms{};	
	parms.bIsSelected = bIsSelected;

	ProcessEvent(fn, &parms);
}

void UGameMusicSlotWidget::OnSelectionChanged(bool bIsSelected){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMusicSlotWidget.OnSelectionChanged");

	FOnSelectionChanged parms{};	
	parms.bIsSelected = bIsSelected;

	ProcessEvent(fn, &parms);
}

void UChatSetWidgetBase::SetChatKeyboardFocus(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ChatSetWidgetBase.SetChatKeyboardFocus");

	FSetChatKeyboardFocus parms{};	

	ProcessEvent(fn, &parms);
}

void UChatSetWidgetBase::OnChatEditFocus(bool InbFocus){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ChatSetWidgetBase.OnChatEditFocus");

	FOnChatEditFocus parms{};	
	parms.InbFocus = InbFocus;

	ProcessEvent(fn, &parms);
}

bool UChatSetWidgetBase::OnChatDataCommitted(struct FChatData& InChatData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ChatSetWidgetBase.OnChatDataCommitted");

	FOnChatDataCommitted parms{};	
	parms.InChatData = InChatData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UChatSetWidgetBase::OnChatDataChanged(struct FText& InText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ChatSetWidgetBase.OnChatDataChanged");

	FOnChatDataChanged parms{};	
	parms.InText = InText;

	ProcessEvent(fn, &parms);
}

void UChatSetWidgetBase::ChatScrollToBottom(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ChatSetWidgetBase.ChatScrollToBottom");

	FChatScrollToBottom parms{};	

	ProcessEvent(fn, &parms);
}

void UChatSetWidgetBase::AddSystemChatItemLinkDesc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ChatSetWidgetBase.AddSystemChatItemLinkDesc");

	FAddSystemChatItemLinkDesc parms{};	

	ProcessEvent(fn, &parms);
}

void UDCCustomizeActionSkinListWidget::OnSetActionSkinInfoArray(struct TArray<struct FDCActionSkinInfo> ActionSkinInfoArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCustomizeActionSkinListWidget.OnSetActionSkinInfoArray");

	FOnSetActionSkinInfoArray parms{};	
	parms.ActionSkinInfoArray = ActionSkinInfoArray;

	ProcessEvent(fn, &parms);
}

void USpellSlotWidgetBase::SetSpellData(struct FSpellData& InSpellData, struct FDesignDataSpell& InDesignDataSpell){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SpellSlotWidgetBase.SetSpellData");

	FSetSpellData parms{};	
	parms.InSpellData = InSpellData;
	parms.InDesignDataSpell = InDesignDataSpell;

	ProcessEvent(fn, &parms);
}

void USpellSlotWidgetBase::Reset(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SpellSlotWidgetBase.Reset");

	FReset parms{};	

	ProcessEvent(fn, &parms);
}

void USpellSlotWidgetBase::OnSpellDataChanged(struct FSpellData& InSpellData, struct FDesignDataSpell& InDesignDataSpell){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SpellSlotWidgetBase.OnSpellDataChanged");

	FOnSpellDataChanged parms{};	
	parms.InSpellData = InSpellData;
	parms.InDesignDataSpell = InDesignDataSpell;

	ProcessEvent(fn, &parms);
}

void USpellSlotWidgetBase::OnSetSpellArtData(struct UArtDataSpell* InArtSpellData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SpellSlotWidgetBase.OnSetSpellArtData");

	FOnSetSpellArtData parms{};	
	parms.InArtSpellData = InArtSpellData;

	ProcessEvent(fn, &parms);
}

void USpellSlotWidgetBase::OnReset(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SpellSlotWidgetBase.OnReset");

	FOnReset parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsWidget::OnWidgetToggleNotify(uint8_t Invisibility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsWidget.OnWidgetToggleNotify");

	FOnWidgetToggleNotify parms{};	
	parms.Invisibility = Invisibility;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsWidget::OnVideoButtonChecked(bool bIsChecked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsWidget.OnVideoButtonChecked");

	FOnVideoButtonChecked parms{};	
	parms.bIsChecked = bIsChecked;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsWidget::OnToggled(uint8_t Invisibility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsWidget.OnToggled");

	FOnToggled parms{};	
	parms.Invisibility = Invisibility;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsWidget::OnInputButtonChecked(bool bIsChecked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsWidget.OnInputButtonChecked");

	FOnInputButtonChecked parms{};	
	parms.bIsChecked = bIsChecked;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsWidget::OnGameplayButtonChecked(bool bIsChecked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsWidget.OnGameplayButtonChecked");

	FOnGameplayButtonChecked parms{};	
	parms.bIsChecked = bIsChecked;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsWidget::OnControlsButtonChecked(bool bIsChecked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsWidget.OnControlsButtonChecked");

	FOnControlsButtonChecked parms{};	
	parms.bIsChecked = bIsChecked;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsWidget::OnAudioButtonChecked(bool bIsChecked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsWidget.OnAudioButtonChecked");

	FOnAudioButtonChecked parms{};	
	parms.bIsChecked = bIsChecked;

	ProcessEvent(fn, &parms);
}

void UDCCommonActivatableWidgetBase::UnbindMsgOwner(struct UScriptStruct* InMsgType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommonActivatableWidgetBase.UnbindMsgOwner");

	FUnbindMsgOwner parms{};	
	parms.InMsgType = InMsgType;

	ProcessEvent(fn, &parms);
}

void UDCCommonActivatableWidgetBase::UnbindMsgAllOwner(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommonActivatableWidgetBase.UnbindMsgAllOwner");

	FUnbindMsgAllOwner parms{};	

	ProcessEvent(fn, &parms);
}

void UDCCommonActivatableWidgetBase::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommonActivatableWidgetBase.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UDCCommonActivatableWidgetBase::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommonActivatableWidgetBase.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UDCCommonActivatableWidgetBase::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommonActivatableWidgetBase.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

bool UDCCommonActivatableWidgetBase::IsSpectating(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommonActivatableWidgetBase.IsSpectating");

	FIsSpectating parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TScriptInterface<IBaseInterface> UDCCommonActivatableWidgetBase::GetOwningBaseInterfaceBlueprint(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommonActivatableWidgetBase.GetOwningBaseInterfaceBlueprint");

	FGetOwningBaseInterfaceBlueprint parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCCommonActivatableWidgetBase::EnableVirtualCursor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommonActivatableWidgetBase.EnableVirtualCursor");

	FEnableVirtualCursor parms{};	

	ProcessEvent(fn, &parms);
}

void UDCCommonActivatableWidgetBase::DisableVirtualCursor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommonActivatableWidgetBase.DisableVirtualCursor");

	FDisableVirtualCursor parms{};	

	ProcessEvent(fn, &parms);
}

void UDCCommonActivatableWidgetBase::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommonActivatableWidgetBase.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UDCCommonActivatableWidgetBase::BindMsgOwner(struct UScriptStruct* InMsgType, struct UBindMsgNode* InMsgDynamicDelegate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommonActivatableWidgetBase.BindMsgOwner");

	FBindMsgOwner parms{};	
	parms.InMsgType = InMsgType;
	parms.InMsgDynamicDelegate = InMsgDynamicDelegate;

	ProcessEvent(fn, &parms);
}

void UDCLoadingScreenWidget::OnUpdated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCLoadingScreenWidget.OnUpdated");

	FOnUpdated parms{};	

	ProcessEvent(fn, &parms);
}

int32_t UDCLoadingScreenWidget::GetNumImages(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCLoadingScreenWidget.GetNumImages");

	FGetNumImages parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UDCLoadingScreenWidget::GetNumDescs(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCLoadingScreenWidget.GetNumDescs");

	FGetNumDescs parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UContainerInventoryGroupWidget::ResetContainerInventoryWidgets(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ContainerInventoryGroupWidget.ResetContainerInventoryWidgets");

	FResetContainerInventoryWidgets parms{};	

	ProcessEvent(fn, &parms);
}

void UContainerInventoryGroupWidget::OnPopItemSelectWidget(struct FItemData& ItemData, struct FVector2D& DropScreenPos, struct AActor* OldOwnerActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ContainerInventoryGroupWidget.OnPopItemSelectWidget");

	FOnPopItemSelectWidget parms{};	
	parms.ItemData = ItemData;
	parms.DropScreenPos = DropScreenPos;
	parms.OldOwnerActor = OldOwnerActor;

	ProcessEvent(fn, &parms);
}

void UContainerInventoryGroupWidget::OnItemDropDetected(struct FItemData& ItemData, struct FVector2D& DropScreenPos, struct AActor* OldOwnerActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ContainerInventoryGroupWidget.OnItemDropDetected");

	FOnItemDropDetected parms{};	
	parms.ItemData = ItemData;
	parms.DropScreenPos = DropScreenPos;
	parms.OldOwnerActor = OldOwnerActor;

	ProcessEvent(fn, &parms);
}

void UBTDecorator_DCGameBlackboard::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.BTDecorator_DCGameBlackboard.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UBTDecorator_DCGameBlackboard::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.BTDecorator_DCGameBlackboard.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UBTDecorator_DCGameBlackboard::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.BTDecorator_DCGameBlackboard.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UBTDecorator_DCGameBlackboard::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.BTDecorator_DCGameBlackboard.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void AFloorPortalScrollBase::ClosePortalScroll(struct ADCPlayerCharacterBase* Character){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.FloorPortalScrollBase.ClosePortalScroll");

	FClosePortalScroll parms{};	
	parms.Character = Character;

	ProcessEvent(fn, &parms);
}

void UGA_ReversibleChangeIdle::OnCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ReversibleChangeIdle.OnCompleted");

	FOnCompleted parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ReversibleChangeIdle::OnBlendOut(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ReversibleChangeIdle.OnBlendOut");

	FOnBlendOut parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ReversibleChangeIdle::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ReversibleChangeIdle.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UDCDataComponent::OnRep_AssetId(struct FPrimaryAssetId PrevAssetId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataComponent.OnRep_AssetId");

	FOnRep_AssetId parms{};	
	parms.PrevAssetId = PrevAssetId;

	ProcessEvent(fn, &parms);
}

void ADCCharacterLobbyCapture::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterLobbyCapture.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCCharacterLobbyCapture::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterLobbyCapture.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCCharacterLobbyCapture::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterLobbyCapture.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void ADCCharacterLobbyCapture::OnLobbyPoseSkinChanged(struct UDCActionSkinDataAsset* ActionSkinData, bool bIsEquipped){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterLobbyCapture.OnLobbyPoseSkinChanged");

	FOnLobbyPoseSkinChanged parms{};	
	parms.ActionSkinData = ActionSkinData;
	parms.bIsEquipped = bIsEquipped;

	ProcessEvent(fn, &parms);
}

uint8_t ADCCharacterLobbyCapture::GetPartyLocation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterLobbyCapture.GetPartyLocation");

	FGetPartyLocation parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FNickname ADCCharacterLobbyCapture::GetNickname(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterLobbyCapture.GetNickname");

	FGetNickname parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ADCCharacterLobbyCapture::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterLobbyCapture.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

struct UDCAT_WaitForInputAction* UDCAT_WaitForInputAction::WaitForInputAction(struct UGameplayAbility* OwningAbility, struct UInputAction* InInputAction, bool OnlyTriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitForInputAction.WaitForInputAction");

	FWaitForInputAction parms{};	
	parms.OwningAbility = OwningAbility;
	parms.InInputAction = InInputAction;
	parms.OnlyTriggerOnce = OnlyTriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UDCAT_TargetActorRadius* UDCAT_TargetActorRadius::TargetActorRadius(struct UGameplayAbility* OwningAbility, float Radius, enum class ECollisionChannel CollisionChannel, UObject* TargetingClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_TargetActorRadius.TargetActorRadius");

	FTargetActorRadius parms{};	
	parms.OwningAbility = OwningAbility;
	parms.Radius = Radius;
	parms.CollisionChannel = CollisionChannel;
	parms.TargetingClass = TargetingClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCharacterSelectCharSlotWidget::OnFMsgWidgetStreamingModeNotifyBlueprint(struct FMsgWidgetStreamingModeNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterSelectCharSlotWidget.OnFMsgWidgetStreamingModeNotifyBlueprint");

	FOnFMsgWidgetStreamingModeNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UCharacterSelectCharSlotWidget::OnCharacterSlot(struct FCharacterSlot& NewValue, struct FCharacterSlot& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterSelectCharSlotWidget.OnCharacterSlot");

	FOnCharacterSlot parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

bool UCharacterSelectCharSlotWidget::CanSelect(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterSelectCharSlotWidget.CanSelect");

	FCanSelect parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FObjectLinkResponeEvent> UDCGameObjectLinkComponent::RequestToLinkers(struct FObjectLinkRequestEvent& ObjectLinkRequestEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameObjectLinkComponent.RequestToLinkers");

	FRequestToLinkers parms{};	
	parms.ObjectLinkRequestEvent = ObjectLinkRequestEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCUpdateRateOptimizeManagerComponent::SetFreezeIdle(bool bInFreezeIdle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCUpdateRateOptimizeManagerComponent.SetFreezeIdle");

	FSetFreezeIdle parms{};	
	parms.bInFreezeIdle = bInFreezeIdle;

	ProcessEvent(fn, &parms);
}

void UBTT_BlueprintBase::OnTaskFinished(struct AAIController* OwnerController, struct APawn* ControlledPawn, enum class EBTNodeResult TaskResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.BTT_BlueprintBase.OnTaskFinished");

	FOnTaskFinished parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;
	parms.TaskResult = TaskResult;

	ProcessEvent(fn, &parms);
}

void UClassMusicListWidget::OnShowEquippableSlot(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassMusicListWidget.OnShowEquippableSlot");

	FOnShowEquippableSlot parms{};	

	ProcessEvent(fn, &parms);
}

void UClassMusicListWidget::OnHideEquippableSlot(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassMusicListWidget.OnHideEquippableSlot");

	FOnHideEquippableSlot parms{};	

	ProcessEvent(fn, &parms);
}

struct UDCAT_WaitDelayPausable* UDCAT_WaitDelayPausable::WaitDelay(struct UGameplayAbility* OwningAbility, float Duration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitDelayPausable.WaitDelay");

	FWaitDelay parms{};	
	parms.OwningAbility = OwningAbility;
	parms.Duration = Duration;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAT_WaitDelayPausable::ResumeTimer(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitDelayPausable.ResumeTimer");

	FResumeTimer parms{};	

	ProcessEvent(fn, &parms);
}

void UDCAT_WaitDelayPausable::PauseTimer(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitDelayPausable.PauseTimer");

	FPauseTimer parms{};	

	ProcessEvent(fn, &parms);
}

float UDCAT_WaitDelayPausable::GetElapsedTime(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitDelayPausable.GetElapsedTime");

	FGetElapsedTime parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAT_WaitDelayPausable::AddTimerElapsedTimeRatio(float AdditionalRatio){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitDelayPausable.AddTimerElapsedTimeRatio");

	FAddTimerElapsedTimeRatio parms{};	
	parms.AdditionalRatio = AdditionalRatio;

	ProcessEvent(fn, &parms);
}

void UNickNameWidgetBase::SetNickName(struct FNickname& InNickName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.NickNameWidgetBase.SetNickName");

	FSetNickName parms{};	
	parms.InNickName = InNickName;

	ProcessEvent(fn, &parms);
}

void UNickNameWidgetBase::OnNickNameStr(struct FString NewValue, struct FString OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.NickNameWidgetBase.OnNickNameStr");

	FOnNickNameStr parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void ADCPlayerCharacterBase::ShowHitDirectionUIMessage(struct AActor* SourceActor, struct FVector HitDirection){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerCharacterBase.ShowHitDirectionUIMessage");

	FShowHitDirectionUIMessage parms{};	
	parms.SourceActor = SourceActor;
	parms.HitDirection = HitDirection;

	ProcessEvent(fn, &parms);
}

void ADCPlayerCharacterBase::OnRep_OwnedSkillIdArray(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerCharacterBase.OnRep_OwnedSkillIdArray");

	FOnRep_OwnedSkillIdArray parms{};	

	ProcessEvent(fn, &parms);
}

void ADCPlayerCharacterBase::OnRep_OwnedPerkIdArray(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerCharacterBase.OnRep_OwnedPerkIdArray");

	FOnRep_OwnedPerkIdArray parms{};	

	ProcessEvent(fn, &parms);
}

void ADCPlayerCharacterBase::OnActionSkinChanged(struct UDCActionSkinDataAsset* ActionSkinData, bool bIsEquipped){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerCharacterBase.OnActionSkinChanged");

	FOnActionSkinChanged parms{};	
	parms.ActionSkinData = ActionSkinData;
	parms.bIsEquipped = bIsEquipped;

	ProcessEvent(fn, &parms);
}

void ADCPlayerCharacterBase::InitInventory_Server(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerCharacterBase.InitInventory_Server");

	FInitInventory_Server parms{};	

	ProcessEvent(fn, &parms);
}

struct UDCPerkDataComponent* ADCPlayerCharacterBase::GetPerkDataComponent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerCharacterBase.GetPerkDataComponent");

	FGetPerkDataComponent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t ADCPlayerCharacterBase::GetGender(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerCharacterBase.GetGender");

	FGetGender parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ADCPlayerCharacterBase::ClientShowSystemMessage(struct FText MessageText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerCharacterBase.ClientShowSystemMessage");

	FClientShowSystemMessage parms{};	
	parms.MessageText = MessageText;

	ProcessEvent(fn, &parms);
}

void ADCPlayerCharacterBase::ChangeGender_Server(uint8_t Gender){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerCharacterBase.ChangeGender_Server");

	FChangeGender_Server parms{};	
	parms.Gender = Gender;

	ProcessEvent(fn, &parms);
}

void USpellComponent::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SpellComponent.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void USpellComponent::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SpellComponent.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void USpellComponent::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SpellComponent.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void USpellComponent::ServerSetCurrentSpell(struct FGameplayTag SpellTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SpellComponent.ServerSetCurrentSpell");

	FServerSetCurrentSpell parms{};	
	parms.SpellTag = SpellTag;

	ProcessEvent(fn, &parms);
}

void USpellComponent::OnRep_SpellActors(struct TArray<struct ASpellActor*>& OldASpellActors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SpellComponent.OnRep_SpellActors");

	FOnRep_SpellActors parms{};	
	parms.OldASpellActors = OldASpellActors;

	ProcessEvent(fn, &parms);
}

void USpellComponent::OnRep_CurrentSpellTag(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SpellComponent.OnRep_CurrentSpellTag");

	FOnRep_CurrentSpellTag parms{};	

	ProcessEvent(fn, &parms);
}

void USpellComponent::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SpellComponent.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

bool UDCBagItemWidget::IsGold(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCBagItemWidget.IsGold");

	FIsGold parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UBTService_DCGameBase::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.BTService_DCGameBase.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UBTService_DCGameBase::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.BTService_DCGameBase.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UBTService_DCGameBase::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.BTService_DCGameBase.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UBTService_DCGameBase::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.BTService_DCGameBase.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

struct UAsyncTaskAttributeChanged* UAsyncTaskAttributeChanged::ListenForAttributesChange(struct UAbilitySystemComponent* AbilitySystemComponent, struct TArray<struct FGameplayAttribute> Attributes){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AsyncTaskAttributeChanged.ListenForAttributesChange");

	FListenForAttributesChange parms{};	
	parms.AbilitySystemComponent = AbilitySystemComponent;
	parms.Attributes = Attributes;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAsyncTaskAttributeChanged* UAsyncTaskAttributeChanged::ListenForAttributeChange(struct UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayAttribute Attribute){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AsyncTaskAttributeChanged.ListenForAttributeChange");

	FListenForAttributeChange parms{};	
	parms.AbilitySystemComponent = AbilitySystemComponent;
	parms.Attribute = Attribute;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAsyncTaskAttributeChanged::EndTask(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AsyncTaskAttributeChanged.EndTask");

	FEndTask parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ItemInstallBase::OnVelocityChange(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ItemInstallBase.OnVelocityChange");

	FOnVelocityChange parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ItemInstallBase::OnNetSync(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ItemInstallBase.OnNetSync");

	FOnNetSync parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ItemInstallBase::OnFinishConsume(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ItemInstallBase.OnFinishConsume");

	FOnFinishConsume parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ItemInstallBase::OnDistanceChanged(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ItemInstallBase.OnDistanceChanged");

	FOnDistanceChanged parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ItemInstallBase::OnAimDirectionChange(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ItemInstallBase.OnAimDirectionChange");

	FOnAimDirectionChange parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ItemInstallBase::EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ItemInstallBase.EventReceived");

	FEventReceived parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

struct UAsyncTaskCooldownChanged* UAsyncTaskCooldownChanged::ListenForCooldownChange(struct UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayTagContainer CooldownTags, bool UseServerCooldown){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AsyncTaskCooldownChanged.ListenForCooldownChange");

	FListenForCooldownChange parms{};	
	parms.AbilitySystemComponent = AbilitySystemComponent;
	parms.CooldownTags = CooldownTags;
	parms.UseServerCooldown = UseServerCooldown;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAsyncTaskCooldownChanged::EndTask(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AsyncTaskCooldownChanged.EndTask");

	FEndTask parms{};	

	ProcessEvent(fn, &parms);
}

struct UAsyncTaskEffectInhibitionChanged* UAsyncTaskEffectInhibitionChanged::ListenForGameplayInhibitionChange(struct UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayTag EffectGameplayTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AsyncTaskEffectInhibitionChanged.ListenForGameplayInhibitionChange");

	FListenForGameplayInhibitionChange parms{};	
	parms.AbilitySystemComponent = AbilitySystemComponent;
	parms.EffectGameplayTag = EffectGameplayTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAsyncTaskEffectInhibitionChanged::EndTask(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AsyncTaskEffectInhibitionChanged.EndTask");

	FEndTask parms{};	

	ProcessEvent(fn, &parms);
}

void UTopTitleWidgetBase::SetTitleText(struct FText& TitleText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TopTitleWidgetBase.SetTitleText");

	FSetTitleText parms{};	
	parms.TitleText = TitleText;

	ProcessEvent(fn, &parms);
}

void UTopTitleWidgetBase::SetRightButtonText(struct FText& ButtonText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TopTitleWidgetBase.SetRightButtonText");

	FSetRightButtonText parms{};	
	parms.ButtonText = ButtonText;

	ProcessEvent(fn, &parms);
}

void UTopTitleWidgetBase::SetLeftButtonText(struct FText& ButtonText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TopTitleWidgetBase.SetLeftButtonText");

	FSetLeftButtonText parms{};	
	parms.ButtonText = ButtonText;

	ProcessEvent(fn, &parms);
}

void ADCItemActor::OnRep_ItemInfo(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCItemActor.OnRep_ItemInfo");

	FOnRep_ItemInfo parms{};	

	ProcessEvent(fn, &parms);
}

struct UAsyncTaskEffectStackChanged* UAsyncTaskEffectStackChanged::ListenForGameplayEffectStackChange(struct UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayTag EffectGameplayTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AsyncTaskEffectStackChanged.ListenForGameplayEffectStackChange");

	FListenForGameplayEffectStackChange parms{};	
	parms.AbilitySystemComponent = AbilitySystemComponent;
	parms.EffectGameplayTag = EffectGameplayTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAsyncTaskEffectStackChanged::EndTask(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AsyncTaskEffectStackChanged.EndTask");

	FEndTask parms{};	

	ProcessEvent(fn, &parms);
}

struct UAsyncTaskWaitGAActivated* UAsyncTaskWaitGAActivated::WaitForAbilityActivateWithTagRequirements(struct AActor* TargetActor, struct FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AsyncTaskWaitGAActivated.WaitForAbilityActivateWithTagRequirements");

	FWaitForAbilityActivateWithTagRequirements parms{};	
	parms.TargetActor = TargetActor;
	parms.TagRequirements = TagRequirements;
	parms.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	parms.TriggerOnce = TriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAsyncTaskWaitGAActivated* UAsyncTaskWaitGAActivated::WaitForAbilityActivate_Query(struct AActor* TargetActor, struct FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AsyncTaskWaitGAActivated.WaitForAbilityActivate_Query");

	FWaitForAbilityActivate_Query parms{};	
	parms.TargetActor = TargetActor;
	parms.Query = Query;
	parms.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	parms.TriggerOnce = TriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAsyncTaskWaitGAActivated* UAsyncTaskWaitGAActivated::WaitForAbilityActivate(struct AActor* TargetActor, struct FGameplayTag WithTag, struct FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AsyncTaskWaitGAActivated.WaitForAbilityActivate");

	FWaitForAbilityActivate parms{};	
	parms.TargetActor = TargetActor;
	parms.WithTag = WithTag;
	parms.WithoutTag = WithoutTag;
	parms.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	parms.TriggerOnce = TriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAsyncTaskWaitGAActivated::OnAbilityActivate(struct UGameplayAbility* ActivatedAbility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AsyncTaskWaitGAActivated.OnAbilityActivate");

	FOnAbilityActivate parms{};	
	parms.ActivatedAbility = ActivatedAbility;

	ProcessEvent(fn, &parms);
}

struct UAsyncTaskWaitGAEnded* UAsyncTaskWaitGAEnded::WaitForAbilityEndWithTagRequirements(struct AActor* TargetActor, struct FGameplayTagRequirements TagRequirements, bool TriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AsyncTaskWaitGAEnded.WaitForAbilityEndWithTagRequirements");

	FWaitForAbilityEndWithTagRequirements parms{};	
	parms.TargetActor = TargetActor;
	parms.TagRequirements = TagRequirements;
	parms.TriggerOnce = TriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAsyncTaskWaitGAEnded* UAsyncTaskWaitGAEnded::WaitForAbilityEnd_Query(struct AActor* TargetActor, struct FGameplayTagQuery Query, bool TriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AsyncTaskWaitGAEnded.WaitForAbilityEnd_Query");

	FWaitForAbilityEnd_Query parms{};	
	parms.TargetActor = TargetActor;
	parms.Query = Query;
	parms.TriggerOnce = TriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAsyncTaskWaitGAEnded* UAsyncTaskWaitGAEnded::WaitForAbilityEnd(struct AActor* TargetActor, struct FGameplayTag WithTag, struct FGameplayTag WithoutTag, bool TriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AsyncTaskWaitGAEnded.WaitForAbilityEnd");

	FWaitForAbilityEnd parms{};	
	parms.TargetActor = TargetActor;
	parms.WithTag = WithTag;
	parms.WithoutTag = WithoutTag;
	parms.TriggerOnce = TriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAsyncTaskWaitGAEnded::OnAbilityEnded(struct FAbilityEndedData& AbilityEndedData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AsyncTaskWaitGAEnded.OnAbilityEnded");

	FOnAbilityEnded parms{};	
	parms.AbilityEndedData = AbilityEndedData;

	ProcessEvent(fn, &parms);
}

struct UAsyncTaskWaitGameplayEvent* UAsyncTaskWaitGameplayEvent::WaitGameplayEventToActor(struct AActor* TargetActor, struct FGameplayTag EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AsyncTaskWaitGameplayEvent.WaitGameplayEventToActor");

	FWaitGameplayEventToActor parms{};	
	parms.TargetActor = TargetActor;
	parms.EventTag = EventTag;
	parms.OnlyTriggerOnce = OnlyTriggerOnce;
	parms.OnlyMatchExact = OnlyMatchExact;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAsyncTaskWaitGameplayEvent::EventReceivedDelegate__DelegateSignature(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction DungeonCrawler.AsyncTaskWaitGameplayEvent.EventReceivedDelegate__DelegateSignature");

	FEventReceivedDelegate__DelegateSignature parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_CharacterJump::OnMovementModeChange(enum class EMovementMode MovementMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_CharacterJump.OnMovementModeChange");

	FOnMovementModeChange parms{};	
	parms.MovementMode = MovementMode;

	ProcessEvent(fn, &parms);
}

void UGA_CharacterJump::EventReceived(struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_CharacterJump.EventReceived");

	FEventReceived parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UDCWidgetBase::UnbindMsgOwner(struct UScriptStruct* InMsgType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCWidgetBase.UnbindMsgOwner");

	FUnbindMsgOwner parms{};	
	parms.InMsgType = InMsgType;

	ProcessEvent(fn, &parms);
}

void UDCWidgetBase::UnbindMsgAllOwner(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCWidgetBase.UnbindMsgAllOwner");

	FUnbindMsgAllOwner parms{};	

	ProcessEvent(fn, &parms);
}

void UDCWidgetBase::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCWidgetBase.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UDCWidgetBase::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCWidgetBase.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UDCWidgetBase::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCWidgetBase.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

bool UDCWidgetBase::IsSpectating(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCWidgetBase.IsSpectating");

	FIsSpectating parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TScriptInterface<IBaseInterface> UDCWidgetBase::GetOwningBaseInterfaceBlueprint(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCWidgetBase.GetOwningBaseInterfaceBlueprint");

	FGetOwningBaseInterfaceBlueprint parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCWidgetBase::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCWidgetBase.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UDCWidgetBase::BindMsgOwner(struct UScriptStruct* InMsgType, struct UBindMsgNode* InMsgDynamicDelegate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCWidgetBase.BindMsgOwner");

	FBindMsgOwner parms{};	
	parms.InMsgType = InMsgType;
	parms.InMsgDynamicDelegate = InMsgDynamicDelegate;

	ProcessEvent(fn, &parms);
}

struct UDCAT_WaitDistChangeFromView* UDCAT_WaitDistChangeFromView::WaitDistanceChange(struct UGameplayAbility* OwningAbility, struct AActor* TargetActor, struct FVector TargetLocation, float MaximumDistance, float CollisionRadius, enum class ECollisionChannel CollisionChannel){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitDistChangeFromView.WaitDistanceChange");

	FWaitDistanceChange parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TargetActor = TargetActor;
	parms.TargetLocation = TargetLocation;
	parms.MaximumDistance = MaximumDistance;
	parms.CollisionRadius = CollisionRadius;
	parms.CollisionChannel = CollisionChannel;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAttackInputManagerComponent::SetAttackEnabled(bool bIsAttackEnabled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AttackInputManagerComponent.SetAttackEnabled");

	FSetAttackEnabled parms{};	
	parms.bIsAttackEnabled = bIsAttackEnabled;

	ProcessEvent(fn, &parms);
}

void UAttackInputManagerComponent::OnAbilityEnded(struct FAbilityEndedData& AbilityEndedData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AttackInputManagerComponent.OnAbilityEnded");

	FOnAbilityEnded parms{};	
	parms.AbilityEndedData = AbilityEndedData;

	ProcessEvent(fn, &parms);
}

void UAttackInputManagerComponent::OnAbilityActivate(struct UGameplayAbility* ActivatedAbility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AttackInputManagerComponent.OnAbilityActivate");

	FOnAbilityActivate parms{};	
	parms.ActivatedAbility = ActivatedAbility;

	ProcessEvent(fn, &parms);
}

void UAttackInputManagerComponent::HandleAttackInput(struct FGameplayTag InputTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AttackInputManagerComponent.HandleAttackInput");

	FHandleAttackInput parms{};	
	parms.InputTag = InputTag;

	ProcessEvent(fn, &parms);
}

struct FGameplayTag UAttackInputManagerComponent::GetCurrentTriggerTag(struct FGameplayTag TriggerTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AttackInputManagerComponent.GetCurrentTriggerTag");

	FGetCurrentTriggerTag parms{};	
	parms.TriggerTag = TriggerTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAttackInputManagerComponent::EventReceived(struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.AttackInputManagerComponent.EventReceived");

	FEventReceived parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UDCCharacterSkinListEntryWidget::OnRightClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterSkinListEntryWidget.OnRightClicked");

	FOnRightClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UBTTask_DCGameBase::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.BTTask_DCGameBase.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UBTTask_DCGameBase::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.BTTask_DCGameBase.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UBTTask_DCGameBase::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.BTTask_DCGameBase.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UBTTask_DCGameBase::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.BTTask_DCGameBase.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

bool UDCEquipmentSlotWidget::IsWeapon(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEquipmentSlotWidget.IsWeapon");

	FIsWeapon parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCEquipmentSlotWidget::IsTwoHandedWeapon(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEquipmentSlotWidget.IsTwoHandedWeapon");

	FIsTwoHandedWeapon parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCEquipmentSlotWidget::IsPairSlot(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEquipmentSlotWidget.IsPairSlot");

	FIsPairSlot parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCPerkDataComponent::RemoveWearableWeaponList(struct FGameplayTagContainer& InWeaponList){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPerkDataComponent.RemoveWearableWeaponList");

	FRemoveWearableWeaponList parms{};	
	parms.InWeaponList = InWeaponList;

	ProcessEvent(fn, &parms);
}

void UDCPerkDataComponent::RemoveRestrictedItemList(struct FGameplayTagContainer& InItemList){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPerkDataComponent.RemoveRestrictedItemList");

	FRemoveRestrictedItemList parms{};	
	parms.InItemList = InItemList;

	ProcessEvent(fn, &parms);
}

void UDCPerkDataComponent::AddWearableWeaponList(struct FGameplayTagContainer& InWeaponList){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPerkDataComponent.AddWearableWeaponList");

	FAddWearableWeaponList parms{};	
	parms.InWeaponList = InWeaponList;

	ProcessEvent(fn, &parms);
}

void UDCPerkDataComponent::AddRestrictedItemList(struct FGameplayTagContainer& InItemList){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPerkDataComponent.AddRestrictedItemList");

	FAddRestrictedItemList parms{};	
	parms.InItemList = InItemList;

	ProcessEvent(fn, &parms);
}

struct UDCAT_WaitGenericGameplayTagEvent* UDCAT_WaitGenericGameplayTagEvent::WaitGenericGameplayTagEvent(struct UGameplayAbility* OwningAbility, struct AActor* InOptionalExternalTarget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitGenericGameplayTagEvent.WaitGenericGameplayTagEvent");

	FWaitGenericGameplayTagEvent parms{};	
	parms.OwningAbility = OwningAbility;
	parms.InOptionalExternalTarget = InOptionalExternalTarget;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCharacterSelectCharListWidget::OnSelectedCharacterId(struct FString CharacterId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterSelectCharListWidget.OnSelectedCharacterId");

	FOnSelectedCharacterId parms{};	
	parms.CharacterId = CharacterId;

	ProcessEvent(fn, &parms);
}

void UCharacterSelectCharListWidget::OnPageNumber(int32_t CurrentPage, int32_t MaxPage){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterSelectCharListWidget.OnPageNumber");

	FOnPageNumber parms{};	
	parms.CurrentPage = CurrentPage;
	parms.MaxPage = MaxPage;

	ProcessEvent(fn, &parms);
}

void UCharacterSelectCharListWidget::OnListRightButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterSelectCharListWidget.OnListRightButtonClicked");

	FOnListRightButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UCharacterSelectCharListWidget::OnListLeftButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterSelectCharListWidget.OnListLeftButtonClicked");

	FOnListLeftButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UCharacterSelectCharListWidget::OnCharacterSlotListViewItemClicked(struct UObject* Obj){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterSelectCharListWidget.OnCharacterSlotListViewItemClicked");

	FOnCharacterSlotListViewItemClicked parms{};	
	parms.Obj = Obj;

	ProcessEvent(fn, &parms);
}

void UCharacterSelectCharListWidget::OnCharacterSlotData(struct FCharacterSlotData& NewValue, struct FCharacterSlotData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterSelectCharListWidget.OnCharacterSlotData");

	FOnCharacterSlotData parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterSelectCharListWidget::HandleCharacterDeleteClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterSelectCharListWidget.HandleCharacterDeleteClicked");

	FHandleCharacterDeleteClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UCharacterSelectCharListWidget::HandleCharacterCreateClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterSelectCharListWidget.HandleCharacterCreateClicked");

	FHandleCharacterCreateClicked parms{};	

	ProcessEvent(fn, &parms);
}

struct UCharacterSelectCharacterSlotWidgetData* UCharacterSelectCharListWidget::GetSelectedCharacterWidgetData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterSelectCharListWidget.GetSelectedCharacterWidgetData");

	FGetSelectedCharacterWidgetData parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UCharacterSelectCharListWidget::GetPageArrowVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterSelectCharListWidget.GetPageArrowVisibility");

	FGetPageArrowVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCCharacterPartsComponent::OnItemUnequipEvent(struct FDCItemId ItemId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterPartsComponent.OnItemUnequipEvent");

	FOnItemUnequipEvent parms{};	
	parms.ItemId = ItemId;

	ProcessEvent(fn, &parms);
}

void UDCCharacterPartsComponent::OnItemEquipEvent(struct FDCItemInfo& ItemInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterPartsComponent.OnItemEquipEvent");

	FOnItemEquipEvent parms{};	
	parms.ItemInfo = ItemInfo;

	ProcessEvent(fn, &parms);
}

void UGameHeadupAccountWidget::OnRefreshNickname(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameHeadupAccountWidget.OnRefreshNickname");

	FOnRefreshNickname parms{};	

	ProcessEvent(fn, &parms);
}

void UDCReportPlayerChecklistSlotWidget::HandleChangedCheckState(bool bNewState){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCReportPlayerChecklistSlotWidget.HandleChangedCheckState");

	FHandleChangedCheckState parms{};	
	parms.bNewState = bNewState;

	ProcessEvent(fn, &parms);
}

uint8_t UDCReportPlayerChecklistSlotWidget::GetReportedCategoryVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCReportPlayerChecklistSlotWidget.GetReportedCategoryVisibility");

	FGetReportedCategoryVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCGlitterComponent::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGlitterComponent.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UDCGlitterComponent::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGlitterComponent.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UDCGlitterComponent::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGlitterComponent.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UDCGlitterComponent::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGlitterComponent.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGA_MusicBase::OnApplied(struct AActor* InTarget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MusicBase.OnApplied");

	FOnApplied parms{};	
	parms.InTarget = InTarget;

	ProcessEvent(fn, &parms);
}

float UGA_MusicBase::GetRange(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MusicBase.GetRange");

	FGetRange parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGA_MusicBase::ApplyToTarget(struct FHitResult& HitResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MusicBase.ApplyToTarget");

	FApplyToTarget parms{};	
	parms.HitResult = HitResult;

	ProcessEvent(fn, &parms);
}

void UGA_MusicBase::ApplyToSelf(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MusicBase.ApplyToSelf");

	FApplyToSelf parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_MusicBase::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MusicBase.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UCommonButtonXLWidget::SetAllText(struct FText TextTitle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CommonButtonXLWidget.SetAllText");

	FSetAllText parms{};	
	parms.TextTitle = TextTitle;

	ProcessEvent(fn, &parms);
}

void UCharacterSelectWidget::OnPurchaseButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterSelectWidget.OnPurchaseButtonClicked");

	FOnPurchaseButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UCharacterSelectWidget::OnLaunchShopURLButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterSelectWidget.OnLaunchShopURLButtonClicked");

	FOnLaunchShopURLButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

bool UCharacterSelectWidget::IsNeedPurchase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterSelectWidget.IsNeedPurchase");

	FIsNeedPurchase parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCharacterSelectWidget::HandleOptionButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterSelectWidget.HandleOptionButtonClicked");

	FHandleOptionButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UCharacterSelectWidget::HandleLobbyButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterSelectWidget.HandleLobbyButtonClicked");

	FHandleLobbyButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UCharacterSelectWidget::HandleExitButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterSelectWidget.HandleExitButtonClicked");

	FHandleExitButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

int32_t UCharacterSelectWidget::GetPrice(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterSelectWidget.GetPrice");

	FGetPrice parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UCharacterSelectWidget::GetCashPrice(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterSelectWidget.GetCashPrice");

	FGetCashPrice parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UCharacterSelectWidget::CanLaunchRedstoneShardShop(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterSelectWidget.CanLaunchRedstoneShardShop");

	FCanLaunchRedstoneShardShop parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UCharacterSelectWidget::CanEnterLobby(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterSelectWidget.CanEnterLobby");

	FCanEnterLobby parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCharacterStatusDetailWidget::OnWill(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnWill");

	FOnWill parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnWeightLimitMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnWeightLimitMod");

	FOnWeightLimitMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnWeightLimitBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnWeightLimitBase");

	FOnWeightLimitBase parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnWeightLimitAdd(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnWeightLimitAdd");

	FOnWeightLimitAdd parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnWeightLimit(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnWeightLimit");

	FOnWeightLimit parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnWeight(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnWeight");

	FOnWeight parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnWaterMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnWaterMagicResistance");

	FOnWaterMagicResistance parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnWaterMagicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnWaterMagicalReductionMod");

	FOnWaterMagicalReductionMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnWaterMagicalReductionMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnWaterMagicalReductionMagicResistance");

	FOnWaterMagicalReductionMagicResistance parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnWaterMagicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnWaterMagicalReduction");

	FOnWaterMagicalReduction parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnUtilityEffectivenessMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnUtilityEffectivenessMod");

	FOnUtilityEffectivenessMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnUtilityEffectivenessBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnUtilityEffectivenessBase");

	FOnUtilityEffectivenessBase parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnUtilityEffectivenessAdd(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnUtilityEffectivenessAdd");

	FOnUtilityEffectivenessAdd parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnUtilityEffectiveness(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnUtilityEffectiveness");

	FOnUtilityEffectiveness parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnStrength(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnStrength");

	FOnStrength parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnSpiritMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnSpiritMagicResistance");

	FOnSpiritMagicResistance parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnSpiritMagicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnSpiritMagicalReductionMod");

	FOnSpiritMagicalReductionMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnSpiritMagicalReductionMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnSpiritMagicalReductionMagicResistance");

	FOnSpiritMagicalReductionMagicResistance parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnSpiritMagicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnSpiritMagicalReduction");

	FOnSpiritMagicalReduction parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnSpellPayload(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnSpellPayload");

	FOnSpellPayload parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnSpellCastingSpeed(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnSpellCastingSpeed");

	FOnSpellCastingSpeed parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnSpellCapacityMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnSpellCapacityMod");

	FOnSpellCapacityMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnSpellCapacityBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnSpellCapacityBase");

	FOnSpellCapacityBase parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnSpellCapacityAdd(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnSpellCapacityAdd");

	FOnSpellCapacityAdd parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnSpellCapacity(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnSpellCapacity");

	FOnSpellCapacity parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnSecondaryWeaponImpactPower(float& NewValue, float& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnSecondaryWeaponImpactPower");

	FOnSecondaryWeaponImpactPower parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnSecondaryAbilityWidgetArray(struct TArray<struct UItemTooltipStatWidgetData*>& NewValue, struct TArray<struct UItemTooltipStatWidgetData*>& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnSecondaryAbilityWidgetArray");

	FOnSecondaryAbilityWidgetArray parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnResourcefulness(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnResourcefulness");

	FOnResourcefulness parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnRegularInteractionSpeedBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnRegularInteractionSpeedBase");

	FOnRegularInteractionSpeedBase parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnRegularInteractionSpeed(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnRegularInteractionSpeed");

	FOnRegularInteractionSpeed parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnProjectileReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnProjectileReductionMod");

	FOnProjectileReductionMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnPrimaryWeaponImpactPower(float& NewValue, float& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnPrimaryWeaponImpactPower");

	FOnPrimaryWeaponImpactPower parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnPrimaryAbilityWidgetArray(struct TArray<struct UItemTooltipStatWidgetData*>& NewValue, struct TArray<struct UItemTooltipStatWidgetData*>& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnPrimaryAbilityWidgetArray");

	FOnPrimaryAbilityWidgetArray parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnPhysicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalReductionMod");

	FOnPhysicalReductionMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnPhysicalReductionBonus(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalReductionBonus");

	FOnPhysicalReductionBonus parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnPhysicalReductionArmorRating(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalReductionArmorRating");

	FOnPhysicalReductionArmorRating parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnPhysicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalReduction");

	FOnPhysicalReduction parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnPhysicalPower(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalPower");

	FOnPhysicalPower parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnPhysicalHealMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalHealMod");

	FOnPhysicalHealMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnPhysicalHealBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalHealBase");

	FOnPhysicalHealBase parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnPhysicalHeadshotPenetration(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalHeadshotPenetration");

	FOnPhysicalHeadshotPenetration parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnPhysicalDamageWeaponSecondary(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageWeaponSecondary");

	FOnPhysicalDamageWeaponSecondary parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnPhysicalDamageWeaponPrimary(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageWeaponPrimary");

	FOnPhysicalDamageWeaponPrimary parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnPhysicalDamageTrue(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageTrue");

	FOnPhysicalDamageTrue parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnPhysicalDamageModPhysicalPower(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageModPhysicalPower");

	FOnPhysicalDamageModPhysicalPower parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnPhysicalDamageModBonus(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageModBonus");

	FOnPhysicalDamageModBonus parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnPhysicalDamageMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageMod");

	FOnPhysicalDamageMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnPhysicalDamageBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageBase");

	FOnPhysicalDamageBase parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnPhysicalDamageAdd(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageAdd");

	FOnPhysicalDamageAdd parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnMoveSpeedWithModifier(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnMoveSpeedWithModifier");

	FOnMoveSpeedWithModifier parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnMoveSpeedMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnMoveSpeedMod");

	FOnMoveSpeedMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnMoveSpeedBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnMoveSpeedBase");

	FOnMoveSpeedBase parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnMoveSpeedAdd(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnMoveSpeedAdd");

	FOnMoveSpeedAdd parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnMoveSpeed(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnMoveSpeed");

	FOnMoveSpeed parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnMaxHealthMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnMaxHealthMod");

	FOnMaxHealthMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnMaxHealthBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnMaxHealthBase");

	FOnMaxHealthBase parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnMaxHealthAdd(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnMaxHealthAdd");

	FOnMaxHealthAdd parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnMaxHealth(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnMaxHealth");

	FOnMaxHealth parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicResistance");

	FOnMagicResistance parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnMagicPenetration(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicPenetration");

	FOnMagicPenetration parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnMagicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalReductionMod");

	FOnMagicalReductionMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnMagicalReductionMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalReductionMagicResistance");

	FOnMagicalReductionMagicResistance parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnMagicalReductionBonus(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalReductionBonus");

	FOnMagicalReductionBonus parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnMagicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalReduction");

	FOnMagicalReduction parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnMagicalPower(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalPower");

	FOnMagicalPower parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnMagicalInteractionSpeed(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalInteractionSpeed");

	FOnMagicalInteractionSpeed parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnMagicalHealMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalHealMod");

	FOnMagicalHealMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnMagicalHealBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalHealBase");

	FOnMagicalHealBase parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnMagicalDamageTrue(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalDamageTrue");

	FOnMagicalDamageTrue parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnMagicalDamageModMagicalPower(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalDamageModMagicalPower");

	FOnMagicalDamageModMagicalPower parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnMagicalDamageModBonus(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalDamageModBonus");

	FOnMagicalDamageModBonus parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnMagicalDamageMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalDamageMod");

	FOnMagicalDamageMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnMagicalDamageBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalDamageBase");

	FOnMagicalDamageBase parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnMagicalDamageAdd(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalDamageAdd");

	FOnMagicalDamageAdd parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnLuck(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnLuck");

	FOnLuck parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnLightningMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnLightningMagicResistance");

	FOnLightningMagicResistance parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnLightningMagicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnLightningMagicalReductionMod");

	FOnLightningMagicalReductionMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnLightningMagicalReductionMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnLightningMagicalReductionMagicResistance");

	FOnLightningMagicalReductionMagicResistance parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnLightningMagicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnLightningMagicalReduction");

	FOnLightningMagicalReduction parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnLightMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnLightMagicResistance");

	FOnLightMagicResistance parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnLightMagicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnLightMagicalReductionMod");

	FOnLightMagicalReductionMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnLightMagicalReductionMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnLightMagicalReductionMagicResistance");

	FOnLightMagicalReductionMagicResistance parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnLightMagicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnLightMagicalReduction");

	FOnLightMagicalReduction parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnKnowledge(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnKnowledge");

	FOnKnowledge parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnItemEquipSpeed(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnItemEquipSpeed");

	FOnItemEquipSpeed parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnImpactPower(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnImpactPower");

	FOnImpactPower parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnHealth(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnHealth");

	FOnHealth parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnHeadshotReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnHeadshotReductionMod");

	FOnHeadshotReductionMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnFireMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnFireMagicResistance");

	FOnFireMagicResistance parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnFireMagicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnFireMagicalReductionMod");

	FOnFireMagicalReductionMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnFireMagicalReductionMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnFireMagicalReductionMagicResistance");

	FOnFireMagicalReductionMagicResistance parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnFireMagicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnFireMagicalReduction");

	FOnFireMagicalReduction parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnEvilMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnEvilMagicResistance");

	FOnEvilMagicResistance parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnEvilMagicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnEvilMagicalReductionMod");

	FOnEvilMagicalReductionMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnEvilMagicalReductionMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnEvilMagicalReductionMagicResistance");

	FOnEvilMagicalReductionMagicResistance parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnEvilMagicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnEvilMagicalReduction");

	FOnEvilMagicalReduction parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnEarthMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnEarthMagicResistance");

	FOnEarthMagicResistance parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnEarthMagicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnEarthMagicalReductionMod");

	FOnEarthMagicalReductionMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnEarthMagicalReductionMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnEarthMagicalReductionMagicResistance");

	FOnEarthMagicalReductionMagicResistance parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnEarthMagicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnEarthMagicalReduction");

	FOnEarthMagicalReduction parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnDivineMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnDivineMagicResistance");

	FOnDivineMagicResistance parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnDivineMagicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnDivineMagicalReductionMod");

	FOnDivineMagicalReductionMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnDivineMagicalReductionMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnDivineMagicalReductionMagicResistance");

	FOnDivineMagicalReductionMagicResistance parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnDivineMagicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnDivineMagicalReduction");

	FOnDivineMagicalReduction parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnDebuffDurationMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnDebuffDurationMod");

	FOnDebuffDurationMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnDarkMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnDarkMagicResistance");

	FOnDarkMagicResistance parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnDarkMagicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnDarkMagicalReductionMod");

	FOnDarkMagicalReductionMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnDarkMagicalReductionMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnDarkMagicalReductionMagicResistance");

	FOnDarkMagicalReductionMagicResistance parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnDarkMagicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnDarkMagicalReduction");

	FOnDarkMagicalReduction parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnBuffDurationMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnBuffDurationMod");

	FOnBuffDurationMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnArmorRating(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnArmorRating");

	FOnArmorRating parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnArmorPenetration(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnArmorPenetration");

	FOnArmorPenetration parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnArcaneMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnArcaneMagicResistance");

	FOnArcaneMagicResistance parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnArcaneMagicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnArcaneMagicalReductionMod");

	FOnArcaneMagicalReductionMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnArcaneMagicalReductionMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnArcaneMagicalReductionMagicResistance");

	FOnArcaneMagicalReductionMagicResistance parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnArcaneMagicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnArcaneMagicalReduction");

	FOnArcaneMagicalReduction parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnAirMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnAirMagicResistance");

	FOnAirMagicResistance parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnAirMagicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnAirMagicalReductionMod");

	FOnAirMagicalReductionMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnAirMagicalReductionMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnAirMagicalReductionMagicResistance");

	FOnAirMagicalReductionMagicResistance parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnAirMagicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnAirMagicalReduction");

	FOnAirMagicalReduction parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnAgility(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnAgility");

	FOnAgility parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusDetailWidget::OnActionSpeed(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusDetailWidget.OnActionSpeed");

	FOnActionSpeed parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UGA_MusicInstantBase::OnTargetActorOverlap(struct TArray<struct AActor*>& InTargetActors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MusicInstantBase.OnTargetActorOverlap");

	FOnTargetActorOverlap parms{};	
	parms.InTargetActors = InTargetActors;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusWidget::OnWill(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusWidget.OnWill");

	FOnWill parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusWidget::OnWeightLimitMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusWidget.OnWeightLimitMod");

	FOnWeightLimitMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusWidget::OnWeightLimitBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusWidget.OnWeightLimitBase");

	FOnWeightLimitBase parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusWidget::OnWeightLimitAdd(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusWidget.OnWeightLimitAdd");

	FOnWeightLimitAdd parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusWidget::OnWeightLimit(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusWidget.OnWeightLimit");

	FOnWeightLimit parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusWidget::OnWeight(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusWidget.OnWeight");

	FOnWeight parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusWidget::OnUtilityEffectivenessMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusWidget.OnUtilityEffectivenessMod");

	FOnUtilityEffectivenessMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusWidget::OnUtilityEffectivenessBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusWidget.OnUtilityEffectivenessBase");

	FOnUtilityEffectivenessBase parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusWidget::OnUtilityEffectivenessAdd(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusWidget.OnUtilityEffectivenessAdd");

	FOnUtilityEffectivenessAdd parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusWidget::OnUtilityEffectiveness(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusWidget.OnUtilityEffectiveness");

	FOnUtilityEffectiveness parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusWidget::OnStrength(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusWidget.OnStrength");

	FOnStrength parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusWidget::OnSpellPayload(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusWidget.OnSpellPayload");

	FOnSpellPayload parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusWidget::OnSpellCapacityMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusWidget.OnSpellCapacityMod");

	FOnSpellCapacityMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusWidget::OnSpellCapacityBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusWidget.OnSpellCapacityBase");

	FOnSpellCapacityBase parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusWidget::OnSpellCapacityAdd(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusWidget.OnSpellCapacityAdd");

	FOnSpellCapacityAdd parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusWidget::OnSpellCapacity(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusWidget.OnSpellCapacity");

	FOnSpellCapacity parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusWidget::OnResourcefulness(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusWidget.OnResourcefulness");

	FOnResourcefulness parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusWidget::OnMaxHealthMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusWidget.OnMaxHealthMod");

	FOnMaxHealthMod parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusWidget::OnMaxHealthBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusWidget.OnMaxHealthBase");

	FOnMaxHealthBase parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusWidget::OnMaxHealthAdd(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusWidget.OnMaxHealthAdd");

	FOnMaxHealthAdd parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusWidget::OnMaxHealth(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusWidget.OnMaxHealth");

	FOnMaxHealth parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusWidget::OnKnowledge(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusWidget.OnKnowledge");

	FOnKnowledge parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusWidget::OnHealth(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusWidget.OnHealth");

	FOnHealth parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UCharacterStatusWidget::OnAgility(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CharacterStatusWidget.OnAgility");

	FOnAgility parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

struct UDCAT_RotateToActor* UDCAT_RotateToActor::RotateToActor(struct UGameplayAbility* OwningAbility, struct AActor* Actor, uint8_t HitBox, float Speed, bool WithoutPitch){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_RotateToActor.RotateToActor");

	FRotateToActor parms{};	
	parms.OwningAbility = OwningAbility;
	parms.Actor = Actor;
	parms.HitBox = HitBox;
	parms.Speed = Speed;
	parms.WithoutPitch = WithoutPitch;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UChatEditWidgetBase::OnTextCommitted(struct FText& InText, enum class ETextCommit InCommitMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ChatEditWidgetBase.OnTextCommitted");

	FOnTextCommitted parms{};	
	parms.InText = InText;
	parms.InCommitMethod = InCommitMethod;

	ProcessEvent(fn, &parms);
}

void UChatEditWidgetBase::OnTextChanged(struct FText& InText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ChatEditWidgetBase.OnTextChanged");

	FOnTextChanged parms{};	
	parms.InText = InText;

	ProcessEvent(fn, &parms);
}

void UChatFilterListEntryWidget::OnCheckStateChanged(bool bIsChecked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ChatFilterListEntryWidget.OnCheckStateChanged");

	FOnCheckStateChanged parms{};	
	parms.bIsChecked = bIsChecked;

	ProcessEvent(fn, &parms);
}

void UChatFilterWidget::SetChatFilterListVisible(bool InbVisible){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ChatFilterWidget.SetChatFilterListVisible");

	FSetChatFilterListVisible parms{};	
	parms.InbVisible = InbVisible;

	ProcessEvent(fn, &parms);
}

void UChatFilterWidget::ResetChatFilter(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ChatFilterWidget.ResetChatFilter");

	FResetChatFilter parms{};	

	ProcessEvent(fn, &parms);
}

void UChatFilterWidget::RegenerateListItems(struct FText& FindFilter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ChatFilterWidget.RegenerateListItems");

	FRegenerateListItems parms{};	
	parms.FindFilter = FindFilter;

	ProcessEvent(fn, &parms);
}

void UClassSelectWidget::OnPlayerCharacterId(struct FPrimaryAssetId& NewValue, struct FPrimaryAssetId& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassSelectWidget.OnPlayerCharacterId");

	FOnPlayerCharacterId parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UClassSelectWidget::OnClassSelectButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassSelectWidget.OnClassSelectButtonClicked");

	FOnClassSelectButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UChatWidgetBase::OnRightClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ChatWidgetBase.OnRightClicked");

	FOnRightClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UChatWidgetBase::OnChatRecordData(struct FChatRecord& NewValue, struct FChatRecord& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ChatWidgetBase.OnChatRecordData");

	FOnChatRecordData parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

struct FString UChatWidgetBase::FilterStreamingMode(struct FString OriginalStr){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ChatWidgetBase.FilterStreamingMode");

	FFilterStreamingMode parms{};	
	parms.OriginalStr = OriginalStr;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UItemTooltipWidget::SetItemData(struct FItemData& NewItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemTooltipWidget.SetItemData");

	FSetItemData parms{};	
	parms.NewItemData = NewItemData;

	ProcessEvent(fn, &parms);
}

void UItemTooltipWidget::OnRefreshItemName(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemTooltipWidget.OnRefreshItemName");

	FOnRefreshItemName parms{};	

	ProcessEvent(fn, &parms);
}

void UItemTooltipWidget::OnItemData(struct FItemData& NewItemData, struct FItemData& OldItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemTooltipWidget.OnItemData");

	FOnItemData parms{};	
	parms.NewItemData = NewItemData;
	parms.OldItemData = OldItemData;

	ProcessEvent(fn, &parms);
}

void UContainerInventoryWidget::UpdateItemCanBeSet(struct FItemData& InItemData, int32_t SlotId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ContainerInventoryWidget.UpdateItemCanBeSet");

	FUpdateItemCanBeSet parms{};	
	parms.InItemData = InItemData;
	parms.SlotId = SlotId;

	ProcessEvent(fn, &parms);
}

void UContainerInventoryWidget::OnRemoveItem(struct FItemData& InItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ContainerInventoryWidget.OnRemoveItem");

	FOnRemoveItem parms{};	
	parms.InItemData = InItemData;

	ProcessEvent(fn, &parms);
}

void UContainerInventoryWidget::OnMoveItem(struct FItemData& OldItemData, struct FItemData& NewItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ContainerInventoryWidget.OnMoveItem");

	FOnMoveItem parms{};	
	parms.OldItemData = OldItemData;
	parms.NewItemData = NewItemData;

	ProcessEvent(fn, &parms);
}

void UContainerInventoryWidget::OnItemWidgetDropOrLeave(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ContainerInventoryWidget.OnItemWidgetDropOrLeave");

	FOnItemWidgetDropOrLeave parms{};	

	ProcessEvent(fn, &parms);
}

void UContainerInventoryWidget::OnItemDragDetected(struct FItemData& ItemData, struct FVector2D& DragScreenPos){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ContainerInventoryWidget.OnItemDragDetected");

	FOnItemDragDetected parms{};	
	parms.ItemData = ItemData;
	parms.DragScreenPos = DragScreenPos;

	ProcessEvent(fn, &parms);
}

struct UItemWidget* UContainerInventoryWidget::OnAddItem(struct FItemData& InItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ContainerInventoryWidget.OnAddItem");

	FOnAddItem parms{};	
	parms.InItemData = InItemData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UContainerInventoryWidget::InitializeContainerInventoryWidget(struct UInventoryComponent* InInventoryComponent, struct UAccountLink* InAccountLink){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ContainerInventoryWidget.InitializeContainerInventoryWidget");

	FInitializeContainerInventoryWidget parms{};	
	parms.InInventoryComponent = InInventoryComponent;
	parms.InAccountLink = InAccountLink;

	ProcessEvent(fn, &parms);
}

int32_t UContainerInventoryWidget::GetSlotIdByScreenPosition(struct FVector2D& ScreenPos){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ContainerInventoryWidget.GetSlotIdByScreenPosition");

	FGetSlotIdByScreenPosition parms{};	
	parms.ScreenPos = ScreenPos;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UContainerInventoryWidget::CanSetItemAt(struct FItemData& ItemData, int32_t SlotId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ContainerInventoryWidget.CanSetItemAt");

	FCanSetItemAt parms{};	
	parms.ItemData = ItemData;
	parms.SlotId = SlotId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UClassIconWidget::OnClickedClassIconButton(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassIconWidget.OnClickedClassIconButton");

	FOnClickedClassIconButton parms{};	

	ProcessEvent(fn, &parms);
}

void UDCCustomizeWidgetBase::OnCustomizeWidgetOpen(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCustomizeWidgetBase.OnCustomizeWidgetOpen");

	FOnCustomizeWidgetOpen parms{};	

	ProcessEvent(fn, &parms);
}

void UDCCustomizeWidgetBase::OnCustomizeWidgetClose(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCustomizeWidgetBase.OnCustomizeWidgetClose");

	FOnCustomizeWidgetClose parms{};	

	ProcessEvent(fn, &parms);
}

void UDCCustomizeWidgetBase::AnyTabButtonSelected(struct FName InTabButtonId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCustomizeWidgetBase.AnyTabButtonSelected");

	FAnyTabButtonSelected parms{};	
	parms.InTabButtonId = InTabButtonId;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionSliderWidget::UpdateSliderValue(float NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionSliderWidget.UpdateSliderValue");

	FUpdateSliderValue parms{};	
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionSliderWidget::UpdateSliderMinMaxValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionSliderWidget.UpdateSliderMinMaxValue");

	FUpdateSliderMinMaxValue parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionSliderWidget::SetTitle(struct FText InText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionSliderWidget.SetTitle");

	FSetTitle parms{};	
	parms.InText = InText;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionSliderWidget::SetSliderMinMaxValue(float InMinValue, float InMaxValue, float InStepSize){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionSliderWidget.SetSliderMinMaxValue");

	FSetSliderMinMaxValue parms{};	
	parms.InMinValue = InMinValue;
	parms.InMaxValue = InMaxValue;
	parms.InStepSize = InStepSize;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionSliderWidget::SetOptionValue(float InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionSliderWidget.SetOptionValue");

	FSetOptionValue parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

struct UWidget* UGameMenuOptionSliderWidget::GetPrimaryGamepadFocusWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionSliderWidget.GetPrimaryGamepadFocusWidget");

	FGetPrimaryGamepadFocusWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UGameMenuOptionSliderWidget::GetOptionValuePercent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionSliderWidget.GetOptionValuePercent");

	FGetOptionValuePercent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UGameMenuOptionSliderWidget::GetOptionValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionSliderWidget.GetOptionValue");

	FGetOptionValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameMenuOptionSliderWidget::GetCurrentOptionValueByPercent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionSliderWidget.GetCurrentOptionValueByPercent");

	FGetCurrentOptionValueByPercent parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionSliderWidget::GetCurrentOptionValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionSliderWidget.GetCurrentOptionValue");

	FGetCurrentOptionValue parms{};	

	ProcessEvent(fn, &parms);
}

struct FString UGameMenuOptionSliderWidget::ExtractOnlyNumberics(struct FString Message, bool IsInteger){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionSliderWidget.ExtractOnlyNumberics");

	FExtractOnlyNumberics parms{};	
	parms.Message = Message;
	parms.IsInteger = IsInteger;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameGroupWidgetBase::OnVisible(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameGroupWidgetBase.OnVisible");

	FOnVisible parms{};	

	ProcessEvent(fn, &parms);
}

void UGameGroupWidgetBase::OnHidden(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameGroupWidgetBase.OnHidden");

	FOnHidden parms{};	

	ProcessEvent(fn, &parms);
}

void UGameGroupWidgetBase::OnGroupWidgetVisibilityChanged(uint8_t NewVisibility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameGroupWidgetBase.OnGroupWidgetVisibilityChanged");

	FOnGroupWidgetVisibilityChanged parms{};	
	parms.NewVisibility = NewVisibility;

	ProcessEvent(fn, &parms);
}

struct UDCPerkDataComponent* ADCCharacterV2::GetPerkDataComponent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterV2.GetPerkDataComponent");

	FGetPerkDataComponent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGA_PickUp::OnStartSync(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PickUp.OnStartSync");

	FOnStartSync parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PickUp::OnPickedUp(struct AActor* ItemHolderToPickUp, bool bShouldDestroy){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PickUp.OnPickedUp");

	FOnPickedUp parms{};	
	parms.ItemHolderToPickUp = ItemHolderToPickUp;
	parms.bShouldDestroy = bShouldDestroy;

	ProcessEvent(fn, &parms);
}

void UClassPerkListWidgetBase::SetSelectedSlotIndex(int32_t InSlotIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassPerkListWidgetBase.SetSelectedSlotIndex");

	FSetSelectedSlotIndex parms{};	
	parms.InSlotIndex = InSlotIndex;

	ProcessEvent(fn, &parms);
}

void UClassPerkListWidgetBase::OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint(struct FMsgWidgetClassSlotUnLockLevelNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassPerkListWidgetBase.OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint");

	FOnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UClassPerkListWidgetBase::OnFMsgWidgetClassLevelNotifyBlueprint(struct FMsgWidgetClassLevelNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassPerkListWidgetBase.OnFMsgWidgetClassLevelNotifyBlueprint");

	FOnFMsgWidgetClassLevelNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UClassPerkListWidgetBase::OnFMsgWidgetClassEquipablePerkEmptySlotsMarkNotifyBlueprint(struct FMsgWidgetClassEquipablePerkEmptySlotsMarkNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassPerkListWidgetBase.OnFMsgWidgetClassEquipablePerkEmptySlotsMarkNotifyBlueprint");

	FOnFMsgWidgetClassEquipablePerkEmptySlotsMarkNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

struct FPrimaryAssetId UClassPerkListWidgetBase::GetSelectedSlotPerkId(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassPerkListWidgetBase.GetSelectedSlotPerkId");

	FGetSelectedSlotPerkId parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UClassPerkListWidgetBase::GetSelectedSlotIndex(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassPerkListWidgetBase.GetSelectedSlotIndex");

	FGetSelectedSlotIndex parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCCustomizeLobbyEmoteListWidget::OnSetLobbyEmoteIdArray(struct TArray<struct FDCLobbyEmoteInfo> LobbyEmoteIdArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCustomizeLobbyEmoteListWidget.OnSetLobbyEmoteIdArray");

	FOnSetLobbyEmoteIdArray parms{};	
	parms.LobbyEmoteIdArray = LobbyEmoteIdArray;

	ProcessEvent(fn, &parms);
}

void UClassSpellListWidget::OnShowEquippableSlot(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassSpellListWidget.OnShowEquippableSlot");

	FOnShowEquippableSlot parms{};	

	ProcessEvent(fn, &parms);
}

void UClassSpellListWidget::OnHideEquippableSlot(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassSpellListWidget.OnHideEquippableSlot");

	FOnHideEquippableSlot parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMusicPlayBase::ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMusicPlayBase.ReceivedEvent");

	FReceivedEvent parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMusicPlayBase::OnPlayFinishSucceed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMusicPlayBase.OnPlayFinishSucceed");

	FOnPlayFinishSucceed parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMusicPlayBase::OnPlayFinishFailed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMusicPlayBase.OnPlayFinishFailed");

	FOnPlayFinishFailed parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMusicPlayBase::OnPlayFinish(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMusicPlayBase.OnPlayFinish");

	FOnPlayFinish parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMusicPlayBase::OnPerfect(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMusicPlayBase.OnPerfect");

	FOnPerfect parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMusicPlayBase::OnMiss(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMusicPlayBase.OnMiss");

	FOnMiss parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMusicPlayBase::OnGood(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMusicPlayBase.OnGood");

	FOnGood parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMusicPlayBase::OnChannelingStartSync(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMusicPlayBase.OnChannelingStartSync");

	FOnChannelingStartSync parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMusicPlayBase::OnChannelingSectionFinish(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMusicPlayBase.OnChannelingSectionFinish");

	FOnChannelingSectionFinish parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMusicPlayBase::OnChannelingFinish(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMusicPlayBase.OnChannelingFinish");

	FOnChannelingFinish parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMusicPlayBase::OnChannelingAction(int32_t ActionCounter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMusicPlayBase.OnChannelingAction");

	FOnChannelingAction parms{};	
	parms.ActionCounter = ActionCounter;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMusicPlayBase::OnBad(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMusicPlayBase.OnBad");

	FOnBad parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMusicPlayBase::EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMusicPlayBase.EventReceived");

	FEventReceived parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMusicPlayBase::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMusicPlayBase.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UDCLobbyEmoteListEntryWidget::OnRightClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCLobbyEmoteListEntryWidget.OnRightClicked");

	FOnRightClicked parms{};	

	ProcessEvent(fn, &parms);
}

uint8_t UDCLobbyEmoteListEntryWidget::GetSelectedVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCLobbyEmoteListEntryWidget.GetSelectedVisibility");

	FGetSelectedVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameCrossHairWidget::OnPlayShootCrossHair(float Rate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameCrossHairWidget.OnPlayShootCrossHair");

	FOnPlayShootCrossHair parms{};	
	parms.Rate = Rate;

	ProcessEvent(fn, &parms);
}

void UGameCrossHairWidget::OnPlayPullingCrossHair(float Rate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameCrossHairWidget.OnPlayPullingCrossHair");

	FOnPlayPullingCrossHair parms{};	
	parms.Rate = Rate;

	ProcessEvent(fn, &parms);
}

void UGameCrossHairWidget::OnInitCrossHair(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameCrossHairWidget.OnInitCrossHair");

	FOnInitCrossHair parms{};	

	ProcessEvent(fn, &parms);
}

void UGameCrossHairWidget::OnCrossHairVisability(bool IsVisablile, bool SetDefault){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameCrossHairWidget.OnCrossHairVisability");

	FOnCrossHairVisability parms{};	
	parms.IsVisablile = IsVisablile;
	parms.SetDefault = SetDefault;

	ProcessEvent(fn, &parms);
}

void UGameCrossHairWidget::OnChangeWeaponCrossHair(struct FGameplayTag WeaponTypeTag, struct FGameplayTag ItemUtilityTag, struct FGameplayTag ItemSlotTypeTags, bool IsAttackEnable){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameCrossHairWidget.OnChangeWeaponCrossHair");

	FOnChangeWeaponCrossHair parms{};	
	parms.WeaponTypeTag = WeaponTypeTag;
	parms.ItemUtilityTag = ItemUtilityTag;
	parms.ItemSlotTypeTags = ItemSlotTypeTags;
	parms.IsAttackEnable = IsAttackEnable;

	ProcessEvent(fn, &parms);
}

void UGameCrossHairWidget::OnChangeToRangeCrossHairAndPullAction(struct FGameplayTag WeaponTypeTag, struct FGameplayTag ItemUtilityTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameCrossHairWidget.OnChangeToRangeCrossHairAndPullAction");

	FOnChangeToRangeCrossHairAndPullAction parms{};	
	parms.WeaponTypeTag = WeaponTypeTag;
	parms.ItemUtilityTag = ItemUtilityTag;

	ProcessEvent(fn, &parms);
}

void UGameCrossHairWidget::OnChangeCrossHairInfo(struct FGameplayTag WeaponTypeTag, float ChangeAngle, bool IsPinPoint, float RotateTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameCrossHairWidget.OnChangeCrossHairInfo");

	FOnChangeCrossHairInfo parms{};	
	parms.WeaponTypeTag = WeaponTypeTag;
	parms.ChangeAngle = ChangeAngle;
	parms.IsPinPoint = IsPinPoint;
	parms.RotateTime = RotateTime;

	ProcessEvent(fn, &parms);
}

void UGameCrossHairWidget::OnActivateSpellCrossHair(bool IsActivate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameCrossHairWidget.OnActivateSpellCrossHair");

	FOnActivateSpellCrossHair parms{};	
	parms.IsActivate = IsActivate;

	ProcessEvent(fn, &parms);
}

void UClassSkillListWidgetBase::SetSelectedSlotIndex(int32_t InSlotIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassSkillListWidgetBase.SetSelectedSlotIndex");

	FSetSelectedSlotIndex parms{};	
	parms.InSlotIndex = InSlotIndex;

	ProcessEvent(fn, &parms);
}

void UClassSkillListWidgetBase::OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint(struct FMsgWidgetClassSlotUnLockLevelNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassSkillListWidgetBase.OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint");

	FOnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UClassSkillListWidgetBase::OnFMsgWidgetClassLevelNotifyBlueprint(struct FMsgWidgetClassLevelNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassSkillListWidgetBase.OnFMsgWidgetClassLevelNotifyBlueprint");

	FOnFMsgWidgetClassLevelNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UClassSkillListWidgetBase::OnFMsgWidgetClassEquipableSkillEmptySlotsMarkNotifyBlueprint(struct FMsgWidgetClassEquipableSkillEmptySlotsMarkNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassSkillListWidgetBase.OnFMsgWidgetClassEquipableSkillEmptySlotsMarkNotifyBlueprint");

	FOnFMsgWidgetClassEquipableSkillEmptySlotsMarkNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

struct FPrimaryAssetId UClassSkillListWidgetBase::GetSelectedSlotSkillId(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassSkillListWidgetBase.GetSelectedSlotSkillId");

	FGetSelectedSlotSkillId parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UClassSkillListWidgetBase::GetSelectedSlotIndex(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassSkillListWidgetBase.GetSelectedSlotIndex");

	FGetSelectedSlotIndex parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UDCAT_PlayMontageAndWaitForEvent* UDCAT_PlayMontageAndWaitForEvent::PlayMontageAndWaitForEvent(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct UAnimMontage* MontageToPlay, struct FGameplayTagContainer EventTags, float Rate, struct FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_PlayMontageAndWaitForEvent.PlayMontageAndWaitForEvent");

	FPlayMontageAndWaitForEvent parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TaskInstanceName = TaskInstanceName;
	parms.MontageToPlay = MontageToPlay;
	parms.EventTags = EventTags;
	parms.Rate = Rate;
	parms.StartSection = StartSection;
	parms.bStopWhenAbilityEnds = bStopWhenAbilityEnds;
	parms.AnimRootMotionTranslationScale = AnimRootMotionTranslationScale;
	parms.StartTimeSeconds = StartTimeSeconds;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USpellCapacityWidgetBase::OnSpellCapacityChanged(float InSpellCurrentCapacity, float InSpellMaxCapacity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SpellCapacityWidgetBase.OnSpellCapacityChanged");

	FOnSpellCapacityChanged parms{};	
	parms.InSpellCurrentCapacity = InSpellCurrentCapacity;
	parms.InSpellMaxCapacity = InSpellMaxCapacity;

	ProcessEvent(fn, &parms);
}

void APropsActorBase::UpdateInteractDepthValue(int32_t DepthValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PropsActorBase.UpdateInteractDepthValue");

	FUpdateInteractDepthValue parms{};	
	parms.DepthValue = DepthValue;

	ProcessEvent(fn, &parms);
}

void APropsActorBase::SetPropsId(struct FPrimaryAssetId& InPropsId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PropsActorBase.SetPropsId");

	FSetPropsId parms{};	
	parms.InPropsId = InPropsId;

	ProcessEvent(fn, &parms);
}

void APropsActorBase::OnImpactEnduranceExhausted(float ExhaustedTime, UGameplayEffect* GameplayEffectClass, struct FDCGameplayEffectContext EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PropsActorBase.OnImpactEnduranceExhausted");

	FOnImpactEnduranceExhausted parms{};	
	parms.ExhaustedTime = ExhaustedTime;
	parms.GameplayEffectClass = GameplayEffectClass;
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);
}

struct FPrimaryAssetId APropsActorBase::GetPropsId(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PropsActorBase.GetPropsId");

	FGetPropsId parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FDesignDataProps APropsActorBase::GetDesignDataProps(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PropsActorBase.GetDesignDataProps");

	FGetDesignDataProps parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UDesignDataAssetProps* APropsActorBase::GetDesignDataAssetProps(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PropsActorBase.GetDesignDataAssetProps");

	FGetDesignDataAssetProps parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void APropsActorBase::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PropsActorBase.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void UClassSpellCapacityWidget::OnSpellListChanged(struct TArray<struct FSpellData>& InSpellDataArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassSpellCapacityWidget.OnSpellListChanged");

	FOnSpellListChanged parms{};	
	parms.InSpellDataArray = InSpellDataArray;

	ProcessEvent(fn, &parms);
}

void UClassSpellSkillListWidgetBase::OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint(struct FMsgWidgetClassSlotUnLockLevelNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassSpellSkillListWidgetBase.OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint");

	FOnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UClassSpellSkillListWidgetBase::OnFMsgWidgetClassLevelNotifyBlueprint(struct FMsgWidgetClassLevelNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassSpellSkillListWidgetBase.OnFMsgWidgetClassLevelNotifyBlueprint");

	FOnFMsgWidgetClassLevelNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ADCMetaPlayerController::UpdateGameState(struct FGameStateData& InGameStateData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMetaPlayerController.UpdateGameState");

	FUpdateGameState parms{};	
	parms.InGameStateData = InGameStateData;

	ProcessEvent(fn, &parms);
}

void ADCMetaPlayerController::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMetaPlayerController.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCMetaPlayerController::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMetaPlayerController.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCMetaPlayerController::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMetaPlayerController.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void ADCMetaPlayerController::OnExitConfirmed(uint8_t PopupResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMetaPlayerController.OnExitConfirmed");

	FOnExitConfirmed parms{};	
	parms.PopupResult = PopupResult;

	ProcessEvent(fn, &parms);
}

void ADCMetaPlayerController::OnExitClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMetaPlayerController.OnExitClicked");

	FOnExitClicked parms{};	

	ProcessEvent(fn, &parms);
}

void ADCMetaPlayerController::Gm(struct FString InCmd){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMetaPlayerController.Gm");

	FGm parms{};	
	parms.InCmd = InCmd;

	ProcessEvent(fn, &parms);
}

struct FAccountSessionData ADCMetaPlayerController::GetAccountSessionData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMetaPlayerController.GetAccountSessionData");

	FGetAccountSessionData parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ADCMetaPlayerController::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMetaPlayerController.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UClassTabMenuWidget::OnLobbyCharacterInfoUpdated_BP(struct TArray<struct FGameplayTag>& CharacterClassType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassTabMenuWidget.OnLobbyCharacterInfoUpdated_BP");

	FOnLobbyCharacterInfoUpdated_BP parms{};	
	parms.CharacterClassType = CharacterClassType;

	ProcessEvent(fn, &parms);
}

void UClassTabMenuWidget::OnLobbyCharacterInfoUpdated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassTabMenuWidget.OnLobbyCharacterInfoUpdated");

	FOnLobbyCharacterInfoUpdated parms{};	

	ProcessEvent(fn, &parms);
}

struct UDCAT_WaitDistChangeFromLocation* UDCAT_WaitDistChangeFromLocation::WaitDistanceChange(struct UGameplayAbility* OwningAbility, struct FVector TargetLocation, float MaximumDistance){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitDistChangeFromLocation.WaitDistanceChange");

	FWaitDistanceChange parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TargetLocation = TargetLocation;
	parms.MaximumDistance = MaximumDistance;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct APawn* UDCPlayerBlueprintFunctionLibrary::GetCurrentPlayerPawn(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerBlueprintFunctionLibrary.GetCurrentPlayerPawn");

	FGetCurrentPlayerPawn parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct USkeletalMesh* UDCPlayerCharacterInterface::GetPartHeadMeshAsset(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerCharacterInterface.GetPartHeadMeshAsset");

	FGetPartHeadMeshAsset parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ADCMonsterBase::SetMonsterId(struct FPrimaryAssetId& InMonsterId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.SetMonsterId");

	FSetMonsterId parms{};	
	parms.InMonsterId = InMonsterId;

	ProcessEvent(fn, &parms);
}

void ADCMonsterBase::OnStuckByShield(struct ADCCharacterBase* InInstigator, struct AActor* InEffectCauser){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.OnStuckByShield");

	FOnStuckByShield parms{};	
	parms.InInstigator = InInstigator;
	parms.InEffectCauser = InEffectCauser;

	ProcessEvent(fn, &parms);
}

void ADCMonsterBase::OnSetAI(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.OnSetAI");

	FOnSetAI parms{};	

	ProcessEvent(fn, &parms);
}

void ADCMonsterBase::OnRep_PauseAnims(char& OldPauseAnims){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.OnRep_PauseAnims");

	FOnRep_PauseAnims parms{};	
	parms.OldPauseAnims = OldPauseAnims;

	ProcessEvent(fn, &parms);
}

void ADCMonsterBase::OnRep_OrientRotationToMovement(char& OldOrientRotationToMovement){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.OnRep_OrientRotationToMovement");

	FOnRep_OrientRotationToMovement parms{};	
	parms.OldOrientRotationToMovement = OldOrientRotationToMovement;

	ProcessEvent(fn, &parms);
}

void ADCMonsterBase::OnRep_MonsterId(struct FPrimaryAssetId& InOldMonsterId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.OnRep_MonsterId");

	FOnRep_MonsterId parms{};	
	parms.InOldMonsterId = InOldMonsterId;

	ProcessEvent(fn, &parms);
}

void ADCMonsterBase::OnRep_MonsterCollisionProfile(char& OldMonsterCollisionProfile){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.OnRep_MonsterCollisionProfile");

	FOnRep_MonsterCollisionProfile parms{};	
	parms.OldMonsterCollisionProfile = OldMonsterCollisionProfile;

	ProcessEvent(fn, &parms);
}

void ADCMonsterBase::OnRep_bIsRepRootMotionActive(bool InOldbIsRepRootMotionActive){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.OnRep_bIsRepRootMotionActive");

	FOnRep_bIsRepRootMotionActive parms{};	
	parms.InOldbIsRepRootMotionActive = InOldbIsRepRootMotionActive;

	ProcessEvent(fn, &parms);
}

void ADCMonsterBase::OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.OnOverlapEnd");

	FOnOverlapEnd parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;

	ProcessEvent(fn, &parms);
}

void ADCMonsterBase::OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.OnOverlapBegin");

	FOnOverlapBegin parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;
	parms.bFromSweep = bFromSweep;
	parms.SweepResult = SweepResult;

	ProcessEvent(fn, &parms);
}

void ADCMonsterBase::OnNewTarget(struct ADCCharacterBase* InTarget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.OnNewTarget");

	FOnNewTarget parms{};	
	parms.InTarget = InTarget;

	ProcessEvent(fn, &parms);
}

void ADCMonsterBase::OnLostTarget(struct ADCCharacterBase* InTarget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.OnLostTarget");

	FOnLostTarget parms{};	
	parms.InTarget = InTarget;

	ProcessEvent(fn, &parms);
}

void ADCMonsterBase::OnFMsgGASAttributeNotifyBlueprint(struct FMsgGASAttributeNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.OnFMsgGASAttributeNotifyBlueprint");

	FOnFMsgGASAttributeNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ADCMonsterBase::OnDamaged(struct ADCCharacterBase* DCCharacterBase){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.OnDamaged");

	FOnDamaged parms{};	
	parms.DCCharacterBase = DCCharacterBase;

	ProcessEvent(fn, &parms);
}

void ADCMonsterBase::OnBeforeDeath(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.OnBeforeDeath");

	FOnBeforeDeath parms{};	

	ProcessEvent(fn, &parms);
}

void ADCMonsterBase::OnAfterDeath(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.OnAfterDeath");

	FOnAfterDeath parms{};	

	ProcessEvent(fn, &parms);
}

bool ADCMonsterBase::Normal(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.Normal");

	FNormal parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool ADCMonsterBase::InteractableWithoutHit(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.InteractableWithoutHit");

	FInteractableWithoutHit parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool ADCMonsterBase::InteractableOnly(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.InteractableOnly");

	FInteractableOnly parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool ADCMonsterBase::Interactable(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.Interactable");

	FInteractable parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FPrimaryAssetId ADCMonsterBase::GetMonsterId(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.GetMonsterId");

	FGetMonsterId parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FDesignDataMonster ADCMonsterBase::GetDesignDataMonster(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.GetDesignDataMonster");

	FGetDesignDataMonster parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool ADCMonsterBase::Fly(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.Fly");

	FFly parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool ADCMonsterBase::Death(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.Death");

	FDeath parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ADCMonsterBase::ChangePauseAnims(char Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.ChangePauseAnims");

	FChangePauseAnims parms{};	
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void ADCMonsterBase::ChangeOrientRotationToMovement(char Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.ChangeOrientRotationToMovement");

	FChangeOrientRotationToMovement parms{};	
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

bool ADCMonsterBase::Burrow(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.Burrow");

	FBurrow parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool ADCMonsterBase::BeforeDeath(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterBase.BeforeDeath");

	FBeforeDeath parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UClassUnEquipmentPerkandSkillListWidget::OnSetCompletedSkillTileView(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassUnEquipmentPerkandSkillListWidget.OnSetCompletedSkillTileView");

	FOnSetCompletedSkillTileView parms{};	

	ProcessEvent(fn, &parms);
}

void UClassUnEquipmentPerkandSkillListWidget::OnSetCompletedPerkTileView(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassUnEquipmentPerkandSkillListWidget.OnSetCompletedPerkTileView");

	FOnSetCompletedPerkTileView parms{};	

	ProcessEvent(fn, &parms);
}

void UClassUnEquipmentPerkandSkillListWidget::OnCompletedSkillTileViewRegenerateAllEntries(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassUnEquipmentPerkandSkillListWidget.OnCompletedSkillTileViewRegenerateAllEntries");

	FOnCompletedSkillTileViewRegenerateAllEntries parms{};	

	ProcessEvent(fn, &parms);
}

void UClassUnEquipmentPerkandSkillListWidget::OnCompletedPerkTileViewRegenerateAllEntries(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassUnEquipmentPerkandSkillListWidget.OnCompletedPerkTileViewRegenerateAllEntries");

	FOnCompletedPerkTileViewRegenerateAllEntries parms{};	

	ProcessEvent(fn, &parms);
}

struct FPrimaryAssetId UClassUnEquipmentPerkandSkillListWidget::GetSelectedSkillId(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassUnEquipmentPerkandSkillListWidget.GetSelectedSkillId");

	FGetSelectedSkillId parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FPrimaryAssetId UClassUnEquipmentPerkandSkillListWidget::GetSelectedPerkId(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClassUnEquipmentPerkandSkillListWidget.GetSelectedPerkId");

	FGetSelectedPerkId parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UDCAT_WaitGameplayEffectAdd* UDCAT_WaitGameplayEffectAdd::WaitGameplayEffectAdded(struct UGameplayAbility* OwningAbility, bool TriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitGameplayEffectAdd.WaitGameplayEffectAdded");

	FWaitGameplayEffectAdded parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TriggerOnce = TriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAT_WaitGameplayEffectAdd::OnApplyGameplayEffectCallback(struct UAbilitySystemComponent* Target, struct FGameplayEffectSpec& SpecApplied, struct FActiveGameplayEffectHandle ActiveHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitGameplayEffectAdd.OnApplyGameplayEffectCallback");

	FOnApplyGameplayEffectCallback parms{};	
	parms.Target = Target;
	parms.SpecApplied = SpecApplied;
	parms.ActiveHandle = ActiveHandle;

	ProcessEvent(fn, &parms);
}

struct ADCAoeBase* UDCAoeSystemBlueprintLibrary::SpawnAoeDeferred(struct ADCCharacterBase*& DCCharacterBase, ADCAoeBase* AoeClass, struct UDCGameplayAbilityBase* DCGameplayAbilityBase, struct FGameplayEventData EventData, bool& bSuccessfully){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeSystemBlueprintLibrary.SpawnAoeDeferred");

	FSpawnAoeDeferred parms{};	
	parms.DCCharacterBase = DCCharacterBase;
	parms.AoeClass = AoeClass;
	parms.DCGameplayAbilityBase = DCGameplayAbilityBase;
	parms.EventData = EventData;
	parms.bSuccessfully = bSuccessfully;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct ADCAoeBase* UDCAoeSystemBlueprintLibrary::SpawnAoe(struct ADCCharacterBase*& DCCharacterBase, ADCAoeBase* AoeClass, struct FVector Location, struct UDCGameplayAbilityBase* DCGameplayAbilityBase, struct FGameplayEventData EventData, bool& bSuccessfully){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeSystemBlueprintLibrary.SpawnAoe");

	FSpawnAoe parms{};	
	parms.DCCharacterBase = DCCharacterBase;
	parms.AoeClass = AoeClass;
	parms.Location = Location;
	parms.DCGameplayAbilityBase = DCGameplayAbilityBase;
	parms.EventData = EventData;
	parms.bSuccessfully = bSuccessfully;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct ADCCharacterBase* UDCAoeSystemBlueprintLibrary::SortTargetsByDistanceAndPickTarget(struct ADCAoeBase*& DCAoeBase, struct TArray<struct ADCCharacterBase*>& TargetArray, uint8_t AoeFilterSortingType, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeSystemBlueprintLibrary.SortTargetsByDistanceAndPickTarget");

	FSortTargetsByDistanceAndPickTarget parms{};	
	parms.DCAoeBase = DCAoeBase;
	parms.TargetArray = TargetArray;
	parms.AoeFilterSortingType = AoeFilterSortingType;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCAoeSystemBlueprintLibrary::SortTargetsByDistance(struct ADCAoeBase*& DCAoeBase, struct TArray<struct ADCCharacterBase*>& TargetArray, uint8_t AoeFilterSortingType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeSystemBlueprintLibrary.SortTargetsByDistance");

	FSortTargetsByDistance parms{};	
	parms.DCAoeBase = DCAoeBase;
	parms.TargetArray = TargetArray;
	parms.AoeFilterSortingType = AoeFilterSortingType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct ADCCharacterBase* UDCAoeSystemBlueprintLibrary::PickTarget(struct TArray<struct ADCCharacterBase*>& TargetArray, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeSystemBlueprintLibrary.PickTarget");

	FPickTarget parms{};	
	parms.TargetArray = TargetArray;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct ADCCharacterBase* UDCAoeSystemBlueprintLibrary::PickRandomTarget(struct TArray<struct ADCCharacterBase*>& TargetArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeSystemBlueprintLibrary.PickRandomTarget");

	FPickRandomTarget parms{};	
	parms.TargetArray = TargetArray;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCAoeSystemBlueprintLibrary::GetTargetArray(struct ADCAoeBase*& DCAoeBase, struct TArray<struct ADCCharacterBase*>& TargetArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeSystemBlueprintLibrary.GetTargetArray");

	FGetTargetArray parms{};	
	parms.DCAoeBase = DCAoeBase;
	parms.TargetArray = TargetArray;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCAoeSystemBlueprintLibrary::FilterUnTagedTargets(struct TArray<struct ADCCharacterBase*>& TargetArray, struct FGameplayTag GameplayTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeSystemBlueprintLibrary.FilterUnTagedTargets");

	FFilterUnTagedTargets parms{};	
	parms.TargetArray = TargetArray;
	parms.GameplayTag = GameplayTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCAoeSystemBlueprintLibrary::FilterTargetsWithinDistance(struct ADCAoeBase*& DCAoeBase, struct TArray<struct ADCCharacterBase*>& TargetArray, float Distance){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeSystemBlueprintLibrary.FilterTargetsWithinDistance");

	FFilterTargetsWithinDistance parms{};	
	parms.DCAoeBase = DCAoeBase;
	parms.TargetArray = TargetArray;
	parms.Distance = Distance;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCAoeSystemBlueprintLibrary::FilterTargetsWithinDirectionAngleAndAllowedAngle(struct ADCAoeBase*& DCAoeBase, struct TArray<struct ADCCharacterBase*>& TargetArray, float DirectionalAngle, float AllowedAngle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeSystemBlueprintLibrary.FilterTargetsWithinDirectionAngleAndAllowedAngle");

	FFilterTargetsWithinDirectionAngleAndAllowedAngle parms{};	
	parms.DCAoeBase = DCAoeBase;
	parms.TargetArray = TargetArray;
	parms.DirectionalAngle = DirectionalAngle;
	parms.AllowedAngle = AllowedAngle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCAoeSystemBlueprintLibrary::FilterTargetsOverDistance(struct ADCAoeBase*& DCAoeBase, struct TArray<struct ADCCharacterBase*>& TargetArray, float Distance){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeSystemBlueprintLibrary.FilterTargetsOverDistance");

	FFilterTargetsOverDistance parms{};	
	parms.DCAoeBase = DCAoeBase;
	parms.TargetArray = TargetArray;
	parms.Distance = Distance;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCAoeSystemBlueprintLibrary::FilterTagedTargets(struct TArray<struct ADCCharacterBase*>& TargetArray, struct FGameplayTag GameplayTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeSystemBlueprintLibrary.FilterTagedTargets");

	FFilterTagedTargets parms{};	
	parms.TargetArray = TargetArray;
	parms.GameplayTag = GameplayTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAoeSystemBlueprintLibrary::FilterPlayerCharacterTargets(struct TArray<struct ADCCharacterBase*>& TargetArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeSystemBlueprintLibrary.FilterPlayerCharacterTargets");

	FFilterPlayerCharacterTargets parms{};	
	parms.TargetArray = TargetArray;

	ProcessEvent(fn, &parms);
}

void UDCAoeSystemBlueprintLibrary::FilterMonsterTargets(struct TArray<struct ADCCharacterBase*>& TargetArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeSystemBlueprintLibrary.FilterMonsterTargets");

	FFilterMonsterTargets parms{};	
	parms.TargetArray = TargetArray;

	ProcessEvent(fn, &parms);
}

void UDCAoeSystemBlueprintLibrary::DespawnAoeWithinDistance(struct ADCCharacterBase*& DCCharacterBase, struct FVector Location, float Distance){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeSystemBlueprintLibrary.DespawnAoeWithinDistance");

	FDespawnAoeWithinDistance parms{};	
	parms.DCCharacterBase = DCCharacterBase;
	parms.Location = Location;
	parms.Distance = Distance;

	ProcessEvent(fn, &parms);
}

void UDCAoeSystemBlueprintLibrary::DespawnAoeByPrimaryAssetIdWithinDistance(struct ADCCharacterBase*& DCCharacterBase, struct FPrimaryAssetId PrimaryAssetId, struct FVector Location, float Distance){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeSystemBlueprintLibrary.DespawnAoeByPrimaryAssetIdWithinDistance");

	FDespawnAoeByPrimaryAssetIdWithinDistance parms{};	
	parms.DCCharacterBase = DCCharacterBase;
	parms.PrimaryAssetId = PrimaryAssetId;
	parms.Location = Location;
	parms.Distance = Distance;

	ProcessEvent(fn, &parms);
}

void UDCAoeSystemBlueprintLibrary::DespawnAoeByPrimaryAssetId(struct ADCCharacterBase*& DCCharacterBase, struct FPrimaryAssetId PrimaryAssetId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeSystemBlueprintLibrary.DespawnAoeByPrimaryAssetId");

	FDespawnAoeByPrimaryAssetId parms{};	
	parms.DCCharacterBase = DCCharacterBase;
	parms.PrimaryAssetId = PrimaryAssetId;

	ProcessEvent(fn, &parms);
}

void UDCAoeSystemBlueprintLibrary::DespawnAoeAll(struct ADCCharacterBase* DCCharacterBase){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeSystemBlueprintLibrary.DespawnAoeAll");

	FDespawnAoeAll parms{};	
	parms.DCCharacterBase = DCCharacterBase;

	ProcessEvent(fn, &parms);
}

void UDCAoeSystemBlueprintLibrary::DeferredAoeFinish(struct ADCCharacterBase*& DCCharacterBase, struct ADCAoeBase* Aoe, struct FTransform Transform, struct FGameplayEventData EventData, bool& bSuccessfully){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeSystemBlueprintLibrary.DeferredAoeFinish");

	FDeferredAoeFinish parms{};	
	parms.DCCharacterBase = DCCharacterBase;
	parms.Aoe = Aoe;
	parms.Transform = Transform;
	parms.EventData = EventData;
	parms.bSuccessfully = bSuccessfully;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsVideosSlotWidget::SetTitle(struct FText InTitle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.SetTitle");

	FSetTitle parms{};	
	parms.InTitle = InTitle;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsVideosSlotWidget::SetQualityLevel(int32_t InQualityLevel){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.SetQualityLevel");

	FSetQualityLevel parms{};	
	parms.InQualityLevel = InQualityLevel;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsVideosSlotWidget::OnQualityLevel(int32_t& NewValue, int32_t& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.OnQualityLevel");

	FOnQualityLevel parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsVideosSlotWidget::OnMediumButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.OnMediumButtonClicked");

	FOnMediumButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsVideosSlotWidget::OnLowButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.OnLowButtonClicked");

	FOnLowButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsVideosSlotWidget::OnHighButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.OnHighButtonClicked");

	FOnHighButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsVideosSlotWidget::OnExtraButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.OnExtraButtonClicked");

	FOnExtraButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsVideosSlotWidget::OnEpicButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.OnEpicButtonClicked");

	FOnEpicButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

int32_t UGameMenuOptionsVideosSlotWidget::GetQualityLevel(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.GetQualityLevel");

	FGetQualityLevel parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UClientAccountSubsystem::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClientAccountSubsystem.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UClientAccountSubsystem::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClientAccountSubsystem.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UClientAccountSubsystem::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClientAccountSubsystem.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UClientAccountSubsystem::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClientAccountSubsystem.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ADCAkSpatialAudioVolume::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAkSpatialAudioVolume.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCAkSpatialAudioVolume::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAkSpatialAudioVolume.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCAkSpatialAudioVolume::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAkSpatialAudioVolume.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void ADCAkSpatialAudioVolume::OnTargetPlayerPawnExitVolume(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAkSpatialAudioVolume.OnTargetPlayerPawnExitVolume");

	FOnTargetPlayerPawnExitVolume parms{};	

	ProcessEvent(fn, &parms);
}

void ADCAkSpatialAudioVolume::OnTargetPlayerPawnEnterVolume(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAkSpatialAudioVolume.OnTargetPlayerPawnEnterVolume");

	FOnTargetPlayerPawnEnterVolume parms{};	

	ProcessEvent(fn, &parms);
}

void ADCAkSpatialAudioVolume::OnOverlapEnd(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAkSpatialAudioVolume.OnOverlapEnd");

	FOnOverlapEnd parms{};	
	parms.OverlappedComp = OverlappedComp;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;

	ProcessEvent(fn, &parms);
}

void ADCAkSpatialAudioVolume::OnOverlapBegin(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAkSpatialAudioVolume.OnOverlapBegin");

	FOnOverlapBegin parms{};	
	parms.OverlappedComp = OverlappedComp;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;
	parms.bFromSweep = bFromSweep;
	parms.SweepResult = SweepResult;

	ProcessEvent(fn, &parms);
}

void ADCAkSpatialAudioVolume::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAkSpatialAudioVolume.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UClientPartySubsystem::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClientPartySubsystem.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UClientPartySubsystem::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClientPartySubsystem.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UClientPartySubsystem::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClientPartySubsystem.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UClientPartySubsystem::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClientPartySubsystem.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UClientShopSubsystem::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClientShopSubsystem.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UClientShopSubsystem::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClientShopSubsystem.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UClientShopSubsystem::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClientShopSubsystem.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UClientShopSubsystem::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ClientShopSubsystem.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UCommemorativePlaqueTextWidget::UpdateCommenorativePlaqueText(struct TArray<struct FText>& InText, struct FVector Location){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CommemorativePlaqueTextWidget.UpdateCommenorativePlaqueText");

	FUpdateCommenorativePlaqueText parms{};	
	parms.InText = InText;
	parms.Location = Location;

	ProcessEvent(fn, &parms);
}

void UCommemorativePlaqueTextWidget::SnedWidgetToggleMsg(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CommemorativePlaqueTextWidget.SnedWidgetToggleMsg");

	FSnedWidgetToggleMsg parms{};	

	ProcessEvent(fn, &parms);
}

void UCommemorativePlaqueTextWidget::SetCommemorativePlaqueText(struct FPrimaryAssetId ScriptId, struct FVector Location){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CommemorativePlaqueTextWidget.SetCommemorativePlaqueText");

	FSetCommemorativePlaqueText parms{};	
	parms.ScriptId = ScriptId;
	parms.Location = Location;

	ProcessEvent(fn, &parms);
}

struct UDCAT_WaitAimDirChangedFromLoc* UDCAT_WaitAimDirChangedFromLoc::WaitAimDirectionChangedFromLocation(struct UGameplayAbility* OwningAbility, struct FVector InitialAimTargetLocation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitAimDirChangedFromLoc.WaitAimDirectionChangedFromLocation");

	FWaitAimDirectionChangedFromLocation parms{};	
	parms.OwningAbility = OwningAbility;
	parms.InitialAimTargetLocation = InitialAimTargetLocation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCContextComponent::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCContextComponent.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UDCContextComponent::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCContextComponent.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UDCContextComponent::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCContextComponent.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UDCContextComponent::OnContextMenuHolderVisibilityChaned(uint8_t Visibility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCContextComponent.OnContextMenuHolderVisibilityChaned");

	FOnContextMenuHolderVisibilityChaned parms{};	
	parms.Visibility = Visibility;

	ProcessEvent(fn, &parms);
}

void UDCContextComponent::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCContextComponent.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UDCCommonButtonBase::UnbindMsgOwner(struct UScriptStruct* InMsgType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommonButtonBase.UnbindMsgOwner");

	FUnbindMsgOwner parms{};	
	parms.InMsgType = InMsgType;

	ProcessEvent(fn, &parms);
}

void UDCCommonButtonBase::UnbindMsgAllOwner(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommonButtonBase.UnbindMsgAllOwner");

	FUnbindMsgAllOwner parms{};	

	ProcessEvent(fn, &parms);
}

void UDCCommonButtonBase::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommonButtonBase.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UDCCommonButtonBase::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommonButtonBase.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UDCCommonButtonBase::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommonButtonBase.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UDCCommonButtonBase::SetButtonText(struct FText& InButtonText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommonButtonBase.SetButtonText");

	FSetButtonText parms{};	
	parms.InButtonText = InButtonText;

	ProcessEvent(fn, &parms);
}

void UDCCommonButtonBase::PlayClickSound(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommonButtonBase.PlayClickSound");

	FPlayClickSound parms{};	

	ProcessEvent(fn, &parms);
}

void UDCCommonButtonBase::OnCommonButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommonButtonBase.OnCommonButtonClicked");

	FOnCommonButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

struct TScriptInterface<IBaseInterface> UDCCommonButtonBase::GetOwningBaseInterfaceBlueprint(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommonButtonBase.GetOwningBaseInterfaceBlueprint");

	FGetOwningBaseInterfaceBlueprint parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCCommonButtonBase::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommonButtonBase.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UDCCommonButtonBase::BindMsgOwner(struct UScriptStruct* InMsgType, struct UBindMsgNode* InMsgDynamicDelegate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommonButtonBase.BindMsgOwner");

	FBindMsgOwner parms{};	
	parms.InMsgType = InMsgType;
	parms.InMsgDynamicDelegate = InMsgDynamicDelegate;

	ProcessEvent(fn, &parms);
}

void UCommonButtonLWidget::SetSwitchOn(bool bSetOn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CommonButtonLWidget.SetSwitchOn");

	FSetSwitchOn parms{};	
	parms.bSetOn = bSetOn;

	ProcessEvent(fn, &parms);
}

void UCommonButtonLWidget::SetAllText(struct FText TextTitle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CommonButtonLWidget.SetAllText");

	FSetAllText parms{};	
	parms.TextTitle = TextTitle;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionBaseWidget::OnHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionBaseWidget.OnHovered");

	FOnHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonButtonMWidget::SetAllText(struct FText TextTitle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CommonButtonMWidget.SetAllText");

	FSetAllText parms{};	
	parms.TextTitle = TextTitle;

	ProcessEvent(fn, &parms);
}

void UCommonButtonPopupWidget::SetAllText(struct FText TextTitle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CommonButtonPopupWidget.SetAllText");

	FSetAllText parms{};	
	parms.TextTitle = TextTitle;

	ProcessEvent(fn, &parms);
}

void UCommonButtonSWidget::SetAllText(struct FText TextTitle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CommonButtonSWidget.SetAllText");

	FSetAllText parms{};	
	parms.TextTitle = TextTitle;

	ProcessEvent(fn, &parms);
}

void ADCCharacterBase::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCCharacterBase::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCCharacterBase::TogglePerspective(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.TogglePerspective");

	FTogglePerspective parms{};	

	ProcessEvent(fn, &parms);
}

void ADCCharacterBase::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void ADCCharacterBase::SetIsDead(bool IsDead){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.SetIsDead");

	FSetIsDead parms{};	
	parms.IsDead = IsDead;

	ProcessEvent(fn, &parms);
}

void ADCCharacterBase::SetGenericTeamId(struct FGenericTeamId& TeamID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.SetGenericTeamId");

	FSetGenericTeamId parms{};	
	parms.TeamID = TeamID;

	ProcessEvent(fn, &parms);
}

void ADCCharacterBase::ServerSetRemoteViewYaw(char InRemoteViewYaw){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.ServerSetRemoteViewYaw");

	FServerSetRemoteViewYaw parms{};	
	parms.InRemoteViewYaw = InRemoteViewYaw;

	ProcessEvent(fn, &parms);
}

void ADCCharacterBase::RemoveAllLocalStateTags(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.RemoveAllLocalStateTags");

	FRemoveAllLocalStateTags parms{};	

	ProcessEvent(fn, &parms);
}

void ADCCharacterBase::ReceivePreInitializeComponents(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.ReceivePreInitializeComponents");

	FReceivePreInitializeComponents parms{};	

	ProcessEvent(fn, &parms);
}

void ADCCharacterBase::OnUpdateTeammateState(bool bIsTeammateWithLocalPlayer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.OnUpdateTeammateState");

	FOnUpdateTeammateState parms{};	
	parms.bIsTeammateWithLocalPlayer = bIsTeammateWithLocalPlayer;

	ProcessEvent(fn, &parms);
}

void ADCCharacterBase::OnSetPerspective(struct APlayerController* InPlayerController, bool bInIsFirstPersonPerspective){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.OnSetPerspective");

	FOnSetPerspective parms{};	
	parms.InPlayerController = InPlayerController;
	parms.bInIsFirstPersonPerspective = bInIsFirstPersonPerspective;

	ProcessEvent(fn, &parms);
}

void ADCCharacterBase::OnRep_AccountId(struct FString InOldAccountId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.OnRep_AccountId");

	FOnRep_AccountId parms{};	
	parms.InOldAccountId = InOldAccountId;

	ProcessEvent(fn, &parms);
}

void ADCCharacterBase::OnQuickSlotClicked(uint8_t SlotType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.OnQuickSlotClicked");

	FOnQuickSlotClicked parms{};	
	parms.SlotType = SlotType;

	ProcessEvent(fn, &parms);
}

void ADCCharacterBase::OnGameState(struct FGameStateData& InGameStateData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.OnGameState");

	FOnGameState parms{};	
	parms.InGameStateData = InGameStateData;

	ProcessEvent(fn, &parms);
}

void ADCCharacterBase::OnFMsgGASActorDieNotifyBlueprint(struct FMsgGASActorDieNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.OnFMsgGASActorDieNotifyBlueprint");

	FOnFMsgGASActorDieNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ADCCharacterBase::OnCharacterMoved(float InDeltaSeconds, struct FVector InOldLocation, struct FVector InOldVelocity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.OnCharacterMoved");

	FOnCharacterMoved parms{};	
	parms.InDeltaSeconds = InDeltaSeconds;
	parms.InOldLocation = InOldLocation;
	parms.InOldVelocity = InOldVelocity;

	ProcessEvent(fn, &parms);
}

bool ADCCharacterBase::IsSameTeam(struct FString PartyId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.IsSameTeam");

	FIsSameTeam parms{};	
	parms.PartyId = PartyId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool ADCCharacterBase::IsInFirstPersonPerspective(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.IsInFirstPersonPerspective");

	FIsInFirstPersonPerspective parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool ADCCharacterBase::IsDead(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.IsDead");

	FIsDead parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ADCCharacterBase::InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.InteractSucceed");

	FInteractSucceed parms{};	
	parms.Interacter = Interacter;
	parms.StateTag = StateTag;
	parms.TriggerTag = TriggerTag;
	parms.HitResult = HitResult;

	ProcessEvent(fn, &parms);
}

void ADCCharacterBase::InteractLost(struct AActor* Interacter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.InteractLost");

	FInteractLost parms{};	
	parms.Interacter = Interacter;

	ProcessEvent(fn, &parms);
}

void ADCCharacterBase::InteractFound(struct AActor* Interacter, struct UPrimitiveComponent* InteractPart){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.InteractFound");

	FInteractFound parms{};	
	parms.Interacter = Interacter;
	parms.InteractPart = InteractPart;

	ProcessEvent(fn, &parms);
}

struct UCameraComponent* ADCCharacterBase::GetPerspectiveCameraComponent(bool bFirstPersonPerspective){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.GetPerspectiveCameraComponent");

	FGetPerspectiveCameraComponent parms{};	
	parms.bFirstPersonPerspective = bFirstPersonPerspective;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString ADCCharacterBase::GetPartyId(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.GetPartyId");

	FGetPartyId parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FNickname ADCCharacterBase::GetNickNameCached(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.GetNickNameCached");

	FGetNickNameCached parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool ADCCharacterBase::GetHitBoxLocation(uint8_t HitBoxType, struct FVector& Location){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.GetHitBoxLocation");

	FGetHitBoxLocation parms{};	
	parms.HitBoxType = HitBoxType;
	parms.Location = Location;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGenericTeamId ADCCharacterBase::GetGenericTeamId(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.GetGenericTeamId");

	FGetGenericTeamId parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector ADCCharacterBase::GetCapsuleTopLocation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.GetCapsuleTopLocation");

	FGetCapsuleTopLocation parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector ADCCharacterBase::GetCapsuleBottomLocation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.GetCapsuleBottomLocation");

	FGetCapsuleBottomLocation parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UCameraComponent* ADCCharacterBase::GetCameraComponent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.GetCameraComponent");

	FGetCameraComponent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString ADCCharacterBase::GetAccountId(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.GetAccountId");

	FGetAccountId parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ADCCharacterBase::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ADCCharacterBase::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterBase.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UDCTradeBoxWidget::SetReady(bool bState){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCTradeBoxWidget.SetReady");

	FSetReady parms{};	
	parms.bState = bState;

	ProcessEvent(fn, &parms);
}

bool UDCTradeBoxWidget::IsEnableCheckBox(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCTradeBoxWidget.IsEnableCheckBox");

	FIsEnableCheckBox parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UPopupDataSWidget::Cancel(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PopupDataSWidget.Cancel");

	FCancel parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UEquipmentSlotWidget::SetPreviewItemWidget(struct FPrimaryAssetId& ItemId, float Duration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentSlotWidget.SetPreviewItemWidget");

	FSetPreviewItemWidget parms{};	
	parms.ItemId = ItemId;
	parms.Duration = Duration;

	ProcessEvent(fn, &parms);
}

void UEquipmentSlotWidget::SetActiveHoverImage(bool bActivate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentSlotWidget.SetActiveHoverImage");

	FSetActiveHoverImage parms{};	
	parms.bActivate = bActivate;

	ProcessEvent(fn, &parms);
}

void UEquipmentSlotWidget::RemovePreviewItemWidget(bool bSetItem){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentSlotWidget.RemovePreviewItemWidget");

	FRemovePreviewItemWidget parms{};	
	parms.bSetItem = bSetItem;

	ProcessEvent(fn, &parms);
}

void UEquipmentSlotWidget::OnRemoveItem(struct FItemData& InItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentSlotWidget.OnRemoveItem");

	FOnRemoveItem parms{};	
	parms.InItemData = InItemData;

	ProcessEvent(fn, &parms);
}

void UEquipmentSlotWidget::OnOverlapItemWidget(struct FPrimaryAssetId& ItemId, bool bValidSlot, bool bCanEquip){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentSlotWidget.OnOverlapItemWidget");

	FOnOverlapItemWidget parms{};	
	parms.ItemId = ItemId;
	parms.bValidSlot = bValidSlot;
	parms.bCanEquip = bCanEquip;

	ProcessEvent(fn, &parms);
}

void UEquipmentSlotWidget::OnLeaveItemWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentSlotWidget.OnLeaveItemWidget");

	FOnLeaveItemWidget parms{};	

	ProcessEvent(fn, &parms);
}

void UEquipmentSlotWidget::OnItemSlotActivate(bool bActivate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentSlotWidget.OnItemSlotActivate");

	FOnItemSlotActivate parms{};	
	parms.bActivate = bActivate;

	ProcessEvent(fn, &parms);
}

void UEquipmentSlotWidget::OnFinishedItemDataSet(struct FItemData& InItemData, struct FGameplayTag HandType, struct FGameplayTag SlotType, struct FItemInventorySize& InventorySize){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentSlotWidget.OnFinishedItemDataSet");

	FOnFinishedItemDataSet parms{};	
	parms.InItemData = InItemData;
	parms.HandType = HandType;
	parms.SlotType = SlotType;
	parms.InventorySize = InventorySize;

	ProcessEvent(fn, &parms);
}

uint8_t UEquipmentSlotWidget::GetEquipmentSlotIndex(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentSlotWidget.GetEquipmentSlotIndex");

	FGetEquipmentSlotIndex parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UEquipmentSlotWidget::CheckAndSetActiveHoverImage(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentSlotWidget.CheckAndSetActiveHoverImage");

	FCheckAndSetActiveHoverImage parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonPopupSWidget::OnRemovePopup(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CommonPopupSWidget.OnRemovePopup");

	FOnRemovePopup parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonPopupSWidget::OnCreatePopup(struct FPopupSWidgetData& PopupSWidgetData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CommonPopupSWidget.OnCreatePopup");

	FOnCreatePopup parms{};	
	parms.PopupSWidgetData = PopupSWidgetData;

	ProcessEvent(fn, &parms);
}

void UCommonPopupSWidget::HandleSingleButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CommonPopupSWidget.HandleSingleButtonClicked");

	FHandleSingleButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonPopupSWidget::HandleRightDeleteCharacterButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CommonPopupSWidget.HandleRightDeleteCharacterButtonClicked");

	FHandleRightDeleteCharacterButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonPopupSWidget::HandleRightButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CommonPopupSWidget.HandleRightButtonClicked");

	FHandleRightButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonPopupSWidget::HandleLeftDeleteCharacterButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CommonPopupSWidget.HandleLeftDeleteCharacterButtonClicked");

	FHandleLeftDeleteCharacterButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UCommonPopupSWidget::HandleLeftButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.CommonPopupSWidget.HandleLeftButtonClicked");

	FHandleLeftButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UContainerSlotWidget::OnSetNewItem(bool bFullfilledAll){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ContainerSlotWidget.OnSetNewItem");

	FOnSetNewItem parms{};	
	parms.bFullfilledAll = bFullfilledAll;

	ProcessEvent(fn, &parms);
}

void UContainerSlotWidget::OnRemoveItem(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ContainerSlotWidget.OnRemoveItem");

	FOnRemoveItem parms{};	

	ProcessEvent(fn, &parms);
}

void UContainerSlotWidget::OnOverlapItemWidget(bool bCanSetItem){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ContainerSlotWidget.OnOverlapItemWidget");

	FOnOverlapItemWidget parms{};	
	parms.bCanSetItem = bCanSetItem;

	ProcessEvent(fn, &parms);
}

void UContainerSlotWidget::OnLeaveItemWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ContainerSlotWidget.OnLeaveItemWidget");

	FOnLeaveItemWidget parms{};	

	ProcessEvent(fn, &parms);
}

void UContextMenuHolderInterface::OnRightClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ContextMenuHolderInterface.OnRightClicked");

	FOnRightClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UContextMenuWidgetBase::SetContextMenuWidgetPosition(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ContextMenuWidgetBase.SetContextMenuWidgetPosition");

	FSetContextMenuWidgetPosition parms{};	

	ProcessEvent(fn, &parms);
}

void UContextMenuWidgetBase::RequestCloseMenu(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ContextMenuWidgetBase.RequestCloseMenu");

	FRequestCloseMenu parms{};	

	ProcessEvent(fn, &parms);
}

int64_t UDCDataBlueprintLibrary::MakeUniqueId(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.MakeUniqueId");

	FMakeUniqueId parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UDCDataBlueprintLibrary::MakePrimaryAssetIdStr(struct FPrimaryAssetId& PrimaryAssetId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.MakePrimaryAssetIdStr");

	FMakePrimaryAssetIdStr parms{};	
	parms.PrimaryAssetId = PrimaryAssetId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FPrimaryAssetId UDCDataBlueprintLibrary::MakePrimaryAssetId(struct FString PrimaryAssetIdStr){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.MakePrimaryAssetId");

	FMakePrimaryAssetId parms{};	
	parms.PrimaryAssetIdStr = PrimaryAssetIdStr;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCDataBlueprintLibrary::LoadPrimaryAsset(struct FPrimaryAssetId InPrimaryAssetId, struct FDelegate& InOnComplete){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.LoadPrimaryAsset");

	FLoadPrimaryAsset parms{};	
	parms.InPrimaryAssetId = InPrimaryAssetId;
	parms.InOnComplete = InOnComplete;

	ProcessEvent(fn, &parms);
}

struct TArray<struct UObject*> UDCDataBlueprintLibrary::LoadObjectLibrary(struct FString Path, UObject* ObjectClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.LoadObjectLibrary");

	FLoadObjectLibrary parms{};	
	parms.Path = Path;
	parms.ObjectClass = ObjectClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCDataBlueprintLibrary::IsStreamingMode(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.IsStreamingMode");

	FIsStreamingMode parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCDataBlueprintLibrary::IsAvailableInteractionWithDCCharacterBase(struct ADCPlayerCharacterBase* Interacter, struct ADCCharacterBase* DstActor, float& OutXYDistance){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.IsAvailableInteractionWithDCCharacterBase");

	FIsAvailableInteractionWithDCCharacterBase parms{};	
	parms.Interacter = Interacter;
	parms.DstActor = DstActor;
	parms.OutXYDistance = OutXYDistance;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCDataBlueprintLibrary::IsAvailableInteraction(struct ADCPlayerCharacterBase* Interacter, struct AActor* DstActor, struct FHitResult& InHitResult, float& OutDistance){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.IsAvailableInteraction");

	FIsAvailableInteraction parms{};	
	parms.Interacter = Interacter;
	parms.DstActor = DstActor;
	parms.InHitResult = InHitResult;
	parms.OutDistance = OutDistance;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FLinearColor UDCDataBlueprintLibrary::GetViewNicknameColor(struct FNickname& Nickname){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetViewNicknameColor");

	FGetViewNicknameColor parms{};	
	parms.Nickname = Nickname;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UDCDataBlueprintLibrary::GetViewNickname(struct FNickname& Nickname){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetViewNickname");

	FGetViewNickname parms{};	
	parms.Nickname = Nickname;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FPrimaryAssetId UDCDataBlueprintLibrary::GetRandomDesignDataItemId(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetRandomDesignDataItemId");

	FGetRandomDesignDataItemId parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UPrimaryDataAsset* UDCDataBlueprintLibrary::GetPrimaryAssetSync(struct FPrimaryAssetId& PrimaryAssetId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetPrimaryAssetSync");

	FGetPrimaryAssetSync parms{};	
	parms.PrimaryAssetId = PrimaryAssetId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCDataBlueprintLibrary::GetLobbyEmoteIdArray(struct TArray<struct FPrimaryAssetId>& OutLobbyEmoteIdArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetLobbyEmoteIdArray");

	FGetLobbyEmoteIdArray parms{};	
	parms.OutLobbyEmoteIdArray = OutLobbyEmoteIdArray;

	ProcessEvent(fn, &parms);
}

struct TMap<struct FGameplayTag, struct FText> UDCDataBlueprintLibrary::GetItemWeaponTypeTextMap(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetItemWeaponTypeTextMap");

	FGetItemWeaponTypeTextMap parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TMap<struct FGameplayTag, struct FText> UDCDataBlueprintLibrary::GetItemUtilityTypeTextMap(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetItemUtilityTypeTextMap");

	FGetItemUtilityTypeTextMap parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UDCDataBlueprintLibrary::GetItemTypeText(struct FGameplayTag& InTypeTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetItemTypeText");

	FGetItemTypeText parms{};	
	parms.InTypeTag = InTypeTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCDataBlueprintLibrary::GetItemTypeChatFilterTagContainerMaps(struct UDCChatRoomDataAsset* InChatRoomData, struct TMap<struct FGameplayTag, struct FGameplayTagContainer>& OutTypeIdTagChatFilterTagContainerMap, struct TMap<struct FGameplayTag, struct FGameplayTagContainer>& OutTypeRarityChatFilterTagContainerMap, struct TMap<struct FGameplayTag, struct FGameplayTagContainer>& OutPropertyChatFilterTagContainerMap){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetItemTypeChatFilterTagContainerMaps");

	FGetItemTypeChatFilterTagContainerMaps parms{};	
	parms.InChatRoomData = InChatRoomData;
	parms.OutTypeIdTagChatFilterTagContainerMap = OutTypeIdTagChatFilterTagContainerMap;
	parms.OutTypeRarityChatFilterTagContainerMap = OutTypeRarityChatFilterTagContainerMap;
	parms.OutPropertyChatFilterTagContainerMap = OutPropertyChatFilterTagContainerMap;

	ProcessEvent(fn, &parms);
}

struct TMap<struct FGameplayTag, struct FText> UDCDataBlueprintLibrary::GetItemSlotTypeTextMap(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetItemSlotTypeTextMap");

	FGetItemSlotTypeTextMap parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCDataBlueprintLibrary::GetItemSkinIdArray(struct TArray<struct FPrimaryAssetId>& OutItemSkinIdArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetItemSkinIdArray");

	FGetItemSkinIdArray parms{};	
	parms.OutItemSkinIdArray = OutItemSkinIdArray;

	ProcessEvent(fn, &parms);
}

struct TMap<struct FGameplayTag, struct FText> UDCDataBlueprintLibrary::GetItemRarityTypeTextMap(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetItemRarityTypeTextMap");

	FGetItemRarityTypeTextMap parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UDCDataBlueprintLibrary::GetItemRarityText(struct FGameplayTag& InItemRarityTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetItemRarityText");

	FGetItemRarityText parms{};	
	parms.InItemRarityTag = InItemRarityTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TMap<struct FGameplayTag, struct FText> UDCDataBlueprintLibrary::GetItemPropertyTypeTextMap(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetItemPropertyTypeTextMap");

	FGetItemPropertyTypeTextMap parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UDCDataBlueprintLibrary::GetItemPropertyTypeText(struct FGameplayTag& InItemPropertyTypeTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetItemPropertyTypeText");

	FGetItemPropertyTypeText parms{};	
	parms.InItemPropertyTypeTag = InItemPropertyTypeTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FPrimaryAssetId UDCDataBlueprintLibrary::GetItemPropertyTypeId_Unidentified(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetItemPropertyTypeId_Unidentified");

	FGetItemPropertyTypeId_Unidentified parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TMap<struct FGameplayTag, struct FText> UDCDataBlueprintLibrary::GetItemMiscTypeTextMap(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetItemMiscTypeTextMap");

	FGetItemMiscTypeTextMap parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UDCDataBlueprintLibrary::GetItemIdTagText(struct FGameplayTag& InIdTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetItemIdTagText");

	FGetItemIdTagText parms{};	
	parms.InIdTag = InIdTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TMap<struct FGameplayTag, struct FText> UDCDataBlueprintLibrary::GetItemHandTypeTextMap(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetItemHandTypeTextMap");

	FGetItemHandTypeTextMap parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TMap<struct FGameplayTag, struct FText> UDCDataBlueprintLibrary::GetItemEffectTypeTextMap(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetItemEffectTypeTextMap");

	FGetItemEffectTypeTextMap parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UArtDataItem* UDCDataBlueprintLibrary::GetItemArtData(struct FItemData& ItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetItemArtData");

	FGetItemArtData parms{};	
	parms.ItemData = ItemData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TMap<struct FGameplayTag, struct FText> UDCDataBlueprintLibrary::GetItemArmorTypeTextMap(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetItemArmorTypeTextMap");

	FGetItemArmorTypeTextMap parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

AItemActor* UDCDataBlueprintLibrary::GetItemActorClass(struct AActor* OwnerActor, struct FItemData& ItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetItemActorClass");

	FGetItemActorClass parms{};	
	parms.OwnerActor = OwnerActor;
	parms.ItemData = ItemData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TMap<struct FGameplayTag, struct FText> UDCDataBlueprintLibrary::GetItemAccessoryTypeTextMap(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetItemAccessoryTypeTextMap");

	FGetItemAccessoryTypeTextMap parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCDataBlueprintLibrary::GetEmoteIdArray(struct TArray<struct FPrimaryAssetId>& OutEmoteIdArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetEmoteIdArray");

	FGetEmoteIdArray parms{};	
	parms.OutEmoteIdArray = OutEmoteIdArray;

	ProcessEvent(fn, &parms);
}

void UDCDataBlueprintLibrary::GetDesignDataSpellMap(struct TMap<struct FPrimaryAssetId, struct FDesignDataSpell>& OutDesignDataSpellMap){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataSpellMap");

	FGetDesignDataSpellMap parms{};	
	parms.OutDesignDataSpellMap = OutDesignDataSpellMap;

	ProcessEvent(fn, &parms);
}

struct FDesignDataSpell UDCDataBlueprintLibrary::GetDesignDataSpell(struct FPrimaryAssetId& InId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataSpell");

	FGetDesignDataSpell parms{};	
	parms.InId = InId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCDataBlueprintLibrary::GetDesignDataSkillMap(struct TMap<struct FPrimaryAssetId, struct FDesignDataSkill>& OutDesignDataSkillMap){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataSkillMap");

	FGetDesignDataSkillMap parms{};	
	parms.OutDesignDataSkillMap = OutDesignDataSkillMap;

	ProcessEvent(fn, &parms);
}

struct FDesignDataSkill UDCDataBlueprintLibrary::GetDesignDataSkill(struct FPrimaryAssetId& InId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataSkill");

	FGetDesignDataSkill parms{};	
	parms.InId = InId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FDesignDataPropsSkillCheck UDCDataBlueprintLibrary::GetDesignDataPropsSkillCheck(struct FPrimaryAssetId& InId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataPropsSkillCheck");

	FGetDesignDataPropsSkillCheck parms{};	
	parms.InId = InId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FDesignDataPropsInteract UDCDataBlueprintLibrary::GetDesignDataPropsInteract(struct FPrimaryAssetId& InId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataPropsInteract");

	FGetDesignDataPropsInteract parms{};	
	parms.InId = InId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FDesignDataProps UDCDataBlueprintLibrary::GetDesignDataProps(struct FPrimaryAssetId& InId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataProps");

	FGetDesignDataProps parms{};	
	parms.InId = InId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCDataBlueprintLibrary::GetDesignDataPlayerCharacterMap(struct TMap<struct FPrimaryAssetId, struct FDesignDataPlayerCharacter>& OutDesignDataPlayerCharacterMap){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataPlayerCharacterMap");

	FGetDesignDataPlayerCharacterMap parms{};	
	parms.OutDesignDataPlayerCharacterMap = OutDesignDataPlayerCharacterMap;

	ProcessEvent(fn, &parms);
}

struct FDesignDataPlayerCharacter UDCDataBlueprintLibrary::GetDesignDataPlayerCharacter(struct FPrimaryAssetId& InId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataPlayerCharacter");

	FGetDesignDataPlayerCharacter parms{};	
	parms.InId = InId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCDataBlueprintLibrary::GetDesignDataPerkMap(struct TMap<struct FPrimaryAssetId, struct FDesignDataPerk>& OutDesignDataPerkMap){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataPerkMap");

	FGetDesignDataPerkMap parms{};	
	parms.OutDesignDataPerkMap = OutDesignDataPerkMap;

	ProcessEvent(fn, &parms);
}

struct FDesignDataPerk UDCDataBlueprintLibrary::GetDesignDataPerk(struct FPrimaryAssetId& InId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataPerk");

	FGetDesignDataPerk parms{};	
	parms.InId = InId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCDataBlueprintLibrary::GetDesignDataMusicMap(struct TMap<struct FPrimaryAssetId, struct FDesignDataMusic>& OutDesignDataMusicMap){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataMusicMap");

	FGetDesignDataMusicMap parms{};	
	parms.OutDesignDataMusicMap = OutDesignDataMusicMap;

	ProcessEvent(fn, &parms);
}

struct FDesignDataMusic UDCDataBlueprintLibrary::GetDesignDataMusic(struct FPrimaryAssetId& InId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataMusic");

	FGetDesignDataMusic parms{};	
	parms.InId = InId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FDesignDataMovementModifier UDCDataBlueprintLibrary::GetDesignDataMovementModifier(struct FPrimaryAssetId& InId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataMovementModifier");

	FGetDesignDataMovementModifier parms{};	
	parms.InId = InId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FDesignDataMonster UDCDataBlueprintLibrary::GetDesignDataMonster(struct FPrimaryAssetId& InId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataMonster");

	FGetDesignDataMonster parms{};	
	parms.InId = InId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FDesignDataMeleeAttack UDCDataBlueprintLibrary::GetDesignDataMeleeAttack(struct FPrimaryAssetId& InId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataMeleeAttack");

	FGetDesignDataMeleeAttack parms{};	
	parms.InId = InId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FDesignDataItemRequirement UDCDataBlueprintLibrary::GetDesignDataItemRequirement(struct FPrimaryAssetId& InId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItemRequirement");

	FGetDesignDataItemRequirement parms{};	
	parms.InId = InId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FDesignDataItemPropertyType UDCDataBlueprintLibrary::GetDesignDataItemPropertyType(struct FPrimaryAssetId& InId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItemPropertyType");

	FGetDesignDataItemPropertyType parms{};	
	parms.InId = InId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FDesignDataItemProperty UDCDataBlueprintLibrary::GetDesignDataItemProperty(struct FPrimaryAssetId& InId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItemProperty");

	FGetDesignDataItemProperty parms{};	
	parms.InId = InId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FPrimaryAssetId> UDCDataBlueprintLibrary::GetDesignDataItemIdsByGameplayTag(struct FGameplayTag ItemGameplayTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItemIdsByGameplayTag");

	FGetDesignDataItemIdsByGameplayTag parms{};	
	parms.ItemGameplayTag = ItemGameplayTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FDesignDataItemContainer UDCDataBlueprintLibrary::GetDesignDataItemContainer(struct FPrimaryAssetId& InId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItemContainer");

	FGetDesignDataItemContainer parms{};	
	parms.InId = InId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FDesignDataItemConsume UDCDataBlueprintLibrary::GetDesignDataItemConsume(struct FPrimaryAssetId& InId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItemConsume");

	FGetDesignDataItemConsume parms{};	
	parms.InId = InId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FDesignDataItem UDCDataBlueprintLibrary::GetDesignDataItem(struct FPrimaryAssetId& InId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItem");

	FGetDesignDataItem parms{};	
	parms.InId = InId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FDesignDataIdTagGroup UDCDataBlueprintLibrary::GetDesignDataIdTagGroup(struct FPrimaryAssetId& InId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataIdTagGroup");

	FGetDesignDataIdTagGroup parms{};	
	parms.InId = InId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FDesignDataGameplayEffect UDCDataBlueprintLibrary::GetDesignDataGameplayEffect(struct FPrimaryAssetId& InId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataGameplayEffect");

	FGetDesignDataGameplayEffect parms{};	
	parms.InId = InId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FDesignDataGameplayAbility UDCDataBlueprintLibrary::GetDesignDataGameplayAbility(struct FPrimaryAssetId& InId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataGameplayAbility");

	FGetDesignDataGameplayAbility parms{};	
	parms.InId = InId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FDesignDataEmote UDCDataBlueprintLibrary::GetDesignDataEmote(struct FPrimaryAssetId& InId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataEmote");

	FGetDesignDataEmote parms{};	
	parms.InId = InId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FDesignDataBaseItem UDCDataBlueprintLibrary::GetDesignDataBaseItem(struct FPrimaryAssetId& InId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataBaseItem");

	FGetDesignDataBaseItem parms{};	
	parms.InId = InId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UDesignDataAssetItemRequirement* UDCDataBlueprintLibrary::GetDesignDataAssetItemRequirement(struct FPrimaryAssetId& InId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataAssetItemRequirement");

	FGetDesignDataAssetItemRequirement parms{};	
	parms.InId = InId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UDescData* UDCDataBlueprintLibrary::GetDescData(struct FPrimaryAssetId& InId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetDescData");

	FGetDescData parms{};	
	parms.InId = InId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UDCDataBlueprintLibrary::GetConstantInt32(struct FPrimaryAssetId& InConstantId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetConstantInt32");

	FGetConstantInt32 parms{};	
	parms.InConstantId = InConstantId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UDCDataBlueprintLibrary::GetConstantFloat(struct FPrimaryAssetId& InConstantId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetConstantFloat");

	FGetConstantFloat parms{};	
	parms.InConstantId = InConstantId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCDataBlueprintLibrary::GetCharacterSkinIdArray(struct TArray<struct FPrimaryAssetId>& OutCharacterSkinIdArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetCharacterSkinIdArray");

	FGetCharacterSkinIdArray parms{};	
	parms.OutCharacterSkinIdArray = OutCharacterSkinIdArray;

	ProcessEvent(fn, &parms);
}

void UDCDataBlueprintLibrary::GetCharacterBaseItemMap(struct FPrimaryAssetId& InId, struct TMap<struct FPrimaryAssetId, int32_t>& BaseItemMap){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetCharacterBaseItemMap");

	FGetCharacterBaseItemMap parms{};	
	parms.InId = InId;
	parms.BaseItemMap = BaseItemMap;

	ProcessEvent(fn, &parms);
}

void UDCDataBlueprintLibrary::GetActionSkinIdArray(struct TArray<struct FPrimaryAssetId>& OutActionSkinIdArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDataBlueprintLibrary.GetActionSkinIdArray");

	FGetActionSkinIdArray parms{};	
	parms.OutActionSkinIdArray = OutActionSkinIdArray;

	ProcessEvent(fn, &parms);
}

void UContextOptionListEntryWidgetBase::OnSelect(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ContextOptionListEntryWidgetBase.OnSelect");

	FOnSelect parms{};	

	ProcessEvent(fn, &parms);
}

struct UUserWidget* UDCShopItemSlotWidget::GetTooltipWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCShopItemSlotWidget.GetTooltipWidget");

	FGetTooltipWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UItemWidget::SetItemOwnerActor(struct AActor* InItemOwnedActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemWidget.SetItemOwnerActor");

	FSetItemOwnerActor parms{};	
	parms.InItemOwnedActor = InItemOwnedActor;

	ProcessEvent(fn, &parms);
}

void UItemWidget::SetItemIcon(struct UTexture2D* ItemIconTexture, struct FItemInventorySize& ItemInventorySize){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemWidget.SetItemIcon");

	FSetItemIcon parms{};	
	parms.ItemIconTexture = ItemIconTexture;
	parms.ItemInventorySize = ItemInventorySize;

	ProcessEvent(fn, &parms);
}

void UItemWidget::SetItemData(struct FItemData& NewItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemWidget.SetItemData");

	FSetItemData parms{};	
	parms.NewItemData = NewItemData;

	ProcessEvent(fn, &parms);
}

void UItemWidget::OnSetItemRequirementsFulfilledStatus(bool bFufilled, struct FPrimaryAssetId& PlayerCharacterId, struct UDCAttributeSet* AttributeSet, struct TArray<struct FPrimaryAssetId>& PerkIdArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemWidget.OnSetItemRequirementsFulfilledStatus");

	FOnSetItemRequirementsFulfilledStatus parms{};	
	parms.bFufilled = bFufilled;
	parms.PlayerCharacterId = PlayerCharacterId;
	parms.AttributeSet = AttributeSet;
	parms.PerkIdArray = PerkIdArray;

	ProcessEvent(fn, &parms);
}

void UItemWidget::OnItemData(struct FItemData& NewItemData, struct FItemData& OldItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemWidget.OnItemData");

	FOnItemData parms{};	
	parms.NewItemData = NewItemData;
	parms.OldItemData = OldItemData;

	ProcessEvent(fn, &parms);
}

struct UImage* UItemWidget::GetItemIconImage(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemWidget.GetItemIconImage");

	FGetItemIconImage parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FItemData UItemWidget::GetItemData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemWidget.GetItemData");

	FGetItemData parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UControllableItemWidget::QuickMoveItem(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ControllableItemWidget.QuickMoveItem");

	FQuickMoveItem parms{};	

	ProcessEvent(fn, &parms);
}

struct FEventReply UControllableItemWidget::OnRightMouseButtonDown(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool bInventoryDropButtonPressed, bool bInventorySplitButtonPressed){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ControllableItemWidget.OnRightMouseButtonDown");

	FOnRightMouseButtonDown parms{};	
	parms.MyGeometry = MyGeometry;
	parms.MouseEvent = MouseEvent;
	parms.bInventoryDropButtonPressed = bInventoryDropButtonPressed;
	parms.bInventorySplitButtonPressed = bInventorySplitButtonPressed;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UControllableItemWidget::OnLeftMouseButtonDown(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ControllableItemWidget.OnLeftMouseButtonDown");

	FOnLeftMouseButtonDown parms{};	
	parms.MyGeometry = MyGeometry;
	parms.MouseEvent = MouseEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEventReply UControllableItemWidget::OnLeftMouseButtonDoubleClick(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ControllableItemWidget.OnLeftMouseButtonDoubleClick");

	FOnLeftMouseButtonDoubleClick parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UControllableItemWidget::DropOneItem(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ControllableItemWidget.DropOneItem");

	FDropOneItem parms{};	

	ProcessEvent(fn, &parms);
}

void UControllableItemWidget::DropAllItem(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ControllableItemWidget.DropAllItem");

	FDropAllItem parms{};	

	ProcessEvent(fn, &parms);
}

void ADCActorBase::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCActorBase.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCActorBase::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCActorBase.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCActorBase::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCActorBase.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void ADCActorBase::ReceivePreInitializeComponents(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCActorBase.ReceivePreInitializeComponents");

	FReceivePreInitializeComponents parms{};	

	ProcessEvent(fn, &parms);
}

void ADCActorBase::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCActorBase.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UEquipmentWeaponSlotSetWidget::SetActiveSecondaryHoverImage(bool bActivate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentWeaponSlotSetWidget.SetActiveSecondaryHoverImage");

	FSetActiveSecondaryHoverImage parms{};	
	parms.bActivate = bActivate;

	ProcessEvent(fn, &parms);
}

void UEquipmentWeaponSlotSetWidget::SetActivePrimaryHoverImage(bool bActivate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentWeaponSlotSetWidget.SetActivePrimaryHoverImage");

	FSetActivePrimaryHoverImage parms{};	
	parms.bActivate = bActivate;

	ProcessEvent(fn, &parms);
}

void UEquipmentWeaponSlotSetWidget::CheckAndSetActiveHoverImageBySlot(struct UWidget* SlotUnderPointerPosition){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentWeaponSlotSetWidget.CheckAndSetActiveHoverImageBySlot");

	FCheckAndSetActiveHoverImageBySlot parms{};	
	parms.SlotUnderPointerPosition = SlotUnderPointerPosition;

	ProcessEvent(fn, &parms);
}

void ADCInteractableActorBase::InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInteractableActorBase.InteractSucceed");

	FInteractSucceed parms{};	
	parms.Interacter = Interacter;
	parms.StateTag = StateTag;
	parms.TriggerTag = TriggerTag;
	parms.HitResult = HitResult;

	ProcessEvent(fn, &parms);
}

void ADCInteractableActorBase::InteractStarted(struct AActor* Interacter, struct FGameplayTag EventTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInteractableActorBase.InteractStarted");

	FInteractStarted parms{};	
	parms.Interacter = Interacter;
	parms.EventTag = EventTag;

	ProcessEvent(fn, &parms);
}

void ADCInteractableActorBase::InteractLost(struct AActor* Interacter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInteractableActorBase.InteractLost");

	FInteractLost parms{};	
	parms.Interacter = Interacter;

	ProcessEvent(fn, &parms);
}

void ADCInteractableActorBase::InteractFound(struct AActor* Interacter, struct UPrimitiveComponent* InteractPart){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInteractableActorBase.InteractFound");

	FInteractFound parms{};	
	parms.Interacter = Interacter;
	parms.InteractPart = InteractPart;

	ProcessEvent(fn, &parms);
}

void ADCInteractableActorBase::InteractFailed(struct AActor* Interacter, struct FGameplayTag EventTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInteractableActorBase.InteractFailed");

	FInteractFailed parms{};	
	parms.Interacter = Interacter;
	parms.EventTag = EventTag;

	ProcessEvent(fn, &parms);
}

bool UDCAbilitySystemBlueprintLibrary::SetMovementStateGameplayTag(struct AActor* InActor, struct FGameplayTag InGameplayTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.SetMovementStateGameplayTag");

	FSetMovementStateGameplayTag parms{};	
	parms.InActor = InActor;
	parms.InGameplayTag = InGameplayTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCAbilitySystemBlueprintLibrary::SetModeGameplayTag(struct AActor* InActor, struct FGameplayTag InGameplayTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.SetModeGameplayTag");

	FSetModeGameplayTag parms{};	
	parms.InActor = InActor;
	parms.InGameplayTag = InGameplayTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCAbilitySystemBlueprintLibrary::SetAnimationStateGameplayTag(struct AActor* InActor, struct FGameplayTag InGameplayTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.SetAnimationStateGameplayTag");

	FSetAnimationStateGameplayTag parms{};	
	parms.InActor = InActor;
	parms.InGameplayTag = InGameplayTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAbilitySystemBlueprintLibrary::SendGameplayEventToActorOverride(struct AActor* Actor, struct FGameplayTag EventTag, struct TArray<struct FDCGameplayEffectData>& InOverrideGameplayEffectDataArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.SendGameplayEventToActorOverride");

	FSendGameplayEventToActorOverride parms{};	
	parms.Actor = Actor;
	parms.EventTag = EventTag;
	parms.InOverrideGameplayEffectDataArray = InOverrideGameplayEffectDataArray;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemBlueprintLibrary::RemoveLooseGameplayTagAll(struct AActor* InActor, struct FGameplayTag GameplayTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.RemoveLooseGameplayTagAll");

	FRemoveLooseGameplayTagAll parms{};	
	parms.InActor = InActor;
	parms.GameplayTag = GameplayTag;

	ProcessEvent(fn, &parms);
}

bool UDCAbilitySystemBlueprintLibrary::RemoveGameplayTag(struct AActor* InActor, struct FGameplayTag InGameplayTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.RemoveGameplayTag");

	FRemoveGameplayTag parms{};	
	parms.InActor = InActor;
	parms.InGameplayTag = InGameplayTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAbilitySystemBlueprintLibrary::RemoveGameplayCueLocal(struct AActor* InActor, struct FGameplayTag GameplayCueTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.RemoveGameplayCueLocal");

	FRemoveGameplayCueLocal parms{};	
	parms.InActor = InActor;
	parms.GameplayCueTag = GameplayCueTag;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemBlueprintLibrary::RemoveGameplayCue(struct AActor* InActor, struct FGameplayTag GameplayCueTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.RemoveGameplayCue");

	FRemoveGameplayCue parms{};	
	parms.InActor = InActor;
	parms.GameplayCueTag = GameplayCueTag;

	ProcessEvent(fn, &parms);
}

struct FGameplayTag UDCAbilitySystemBlueprintLibrary::ParseOptionGameplayTag(struct FString InOptionStr, struct FString InOptionKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ParseOptionGameplayTag");

	FParseOptionGameplayTag parms{};	
	parms.InOptionStr = InOptionStr;
	parms.InOptionKey = InOptionKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAbilitySystemBlueprintLibrary::MessageNotifyByReasonTagContainer(struct AActor* InActor, struct FGameplayTagContainer& InGameplayTags, float MsgDuration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.MessageNotifyByReasonTagContainer");

	FMessageNotifyByReasonTagContainer parms{};	
	parms.InActor = InActor;
	parms.InGameplayTags = InGameplayTags;
	parms.MsgDuration = MsgDuration;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemBlueprintLibrary::MessageNotifyByReasonTag(struct AActor* InActor, struct FGameplayTag& InGameplayTag, float MsgDuration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.MessageNotifyByReasonTag");

	FMessageNotifyByReasonTag parms{};	
	parms.InActor = InActor;
	parms.InGameplayTag = InGameplayTag;
	parms.MsgDuration = MsgDuration;

	ProcessEvent(fn, &parms);
}

bool UDCAbilitySystemBlueprintLibrary::MatchesQuery(struct AActor* InActor, struct FGameplayTagQuery InTagQuery){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.MatchesQuery");

	FMatchesQuery parms{};	
	parms.InActor = InActor;
	parms.InTagQuery = InTagQuery;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCAbilitySystemBlueprintLibrary::IsTargetSightBlocked(struct AActor* InActor, struct AActor* InTarget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.IsTargetSightBlocked");

	FIsTargetSightBlocked parms{};	
	parms.InActor = InActor;
	parms.InTarget = InTarget;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCAbilitySystemBlueprintLibrary::IsSameTeamWithPlayerCharacter(struct AActor* SourcePlayerCharacter, struct AActor* TargetActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.IsSameTeamWithPlayerCharacter");

	FIsSameTeamWithPlayerCharacter parms{};	
	parms.SourcePlayerCharacter = SourcePlayerCharacter;
	parms.TargetActor = TargetActor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCAbilitySystemBlueprintLibrary::IsMatchingAbilityActivated(struct AActor* InActor, struct FGameplayTag InGameplayTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.IsMatchingAbilityActivated");

	FIsMatchingAbilityActivated parms{};	
	parms.InActor = InActor;
	parms.InGameplayTag = InGameplayTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayAbilitySpecHandle UDCAbilitySystemBlueprintLibrary::GiveAbility(struct UObject* SourceObject, struct AActor* InActor, struct FDCGameplayAbilityData& InGameplayAbilityData, bool bTriggerOnlyOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GiveAbility");

	FGiveAbility parms{};	
	parms.SourceObject = SourceObject;
	parms.InActor = InActor;
	parms.InGameplayAbilityData = InGameplayAbilityData;
	parms.bTriggerOnlyOnce = bTriggerOnlyOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FGameplayAbilitySpecHandle> UDCAbilitySystemBlueprintLibrary::GiveAbilities(struct UObject* SourceObject, struct AActor* InActor, struct TArray<struct FDCGameplayAbilityData>& InGameplayAbilityDataArray, bool bTriggerOnlyOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GiveAbilities");

	FGiveAbilities parms{};	
	parms.SourceObject = SourceObject;
	parms.InActor = InActor;
	parms.InGameplayAbilityDataArray = InGameplayAbilityDataArray;
	parms.bTriggerOnlyOnce = bTriggerOnlyOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAbilitySystemBlueprintLibrary::GetSocketLocationBySocketName(struct FName SocketName, struct UObject* Object, struct AActor* AvatarActor, struct FVector& OutSocketLocation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetSocketLocationBySocketName");

	FGetSocketLocationBySocketName parms{};	
	parms.SocketName = SocketName;
	parms.Object = Object;
	parms.AvatarActor = AvatarActor;
	parms.OutSocketLocation = OutSocketLocation;

	ProcessEvent(fn, &parms);
}

float UDCAbilitySystemBlueprintLibrary::GetSetByCallerValueInContainerSpecArray(struct FGameplayTag InEventTag, struct FGameplayTag InSetByCallerDataTag, struct TArray<struct FDCGameplayEffectContainerSpec>& InEffectHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetSetByCallerValueInContainerSpecArray");

	FGetSetByCallerValueInContainerSpecArray parms{};	
	parms.InEventTag = InEventTag;
	parms.InSetByCallerDataTag = InSetByCallerDataTag;
	parms.InEffectHandle = InEffectHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UDCAbilitySystemBlueprintLibrary::GetSetByCallerValueInContainer(struct FGameplayTag InEventTag, struct FGameplayTag InSetByCallerDataTag, struct TArray<struct FDCGameplayEffectContainer>& InEffectContainer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetSetByCallerValueInContainer");

	FGetSetByCallerValueInContainer parms{};	
	parms.InEventTag = InEventTag;
	parms.InSetByCallerDataTag = InSetByCallerDataTag;
	parms.InEffectContainer = InEffectContainer;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UDCAbilitySystemBlueprintLibrary::GetSetByCallerValueInAbilityIds(struct FGameplayTag InEventTag, struct FGameplayTag InSetByCallerDataTag, struct TArray<struct FPrimaryAssetId>& InAbilities){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetSetByCallerValueInAbilityIds");

	FGetSetByCallerValueInAbilityIds parms{};	
	parms.InEventTag = InEventTag;
	parms.InSetByCallerDataTag = InSetByCallerDataTag;
	parms.InAbilities = InAbilities;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UDCAbilitySystemBlueprintLibrary::GetProjectileDamageCurveFloatValue(struct FGameplayEffectSpec& InSpec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetProjectileDamageCurveFloatValue");

	FGetProjectileDamageCurveFloatValue parms{};	
	parms.InSpec = InSpec;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAbilitySystemBlueprintLibrary::GetOwnedGameplayTags(struct AActor* InActor, struct FGameplayTagContainer& TagContainer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetOwnedGameplayTags");

	FGetOwnedGameplayTags parms{};	
	parms.InActor = InActor;
	parms.TagContainer = TagContainer;

	ProcessEvent(fn, &parms);
}

float UDCAbilitySystemBlueprintLibrary::GetMeleeAttackAbilityDamageRatioFromEffectSpec(struct FGameplayEffectSpec& InSpec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetMeleeAttackAbilityDamageRatioFromEffectSpec");

	FGetMeleeAttackAbilityDamageRatioFromEffectSpec parms{};	
	parms.InSpec = InSpec;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UDCAbilitySystemBlueprintLibrary::GetMeleeAttackAbilityDamageRatioFromDesignData(struct FDesignDataGameplayAbility& DesignDataGameplayAbility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetMeleeAttackAbilityDamageRatioFromDesignData");

	FGetMeleeAttackAbilityDamageRatioFromDesignData parms{};	
	parms.DesignDataGameplayAbility = DesignDataGameplayAbility;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FGameplayTag> UDCAbilitySystemBlueprintLibrary::GetMatchingAbilityActivatedTriggers(struct AActor* InActor, struct FGameplayTag InGameplayTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetMatchingAbilityActivatedTriggers");

	FGetMatchingAbilityActivatedTriggers parms{};	
	parms.InActor = InActor;
	parms.InGameplayTag = InGameplayTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UDCAbilitySystemBlueprintLibrary::GetMatchingAbilityActivatedCount(struct AActor* InActor, struct FGameplayTag InGameplayTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetMatchingAbilityActivatedCount");

	FGetMatchingAbilityActivatedCount parms{};	
	parms.InActor = InActor;
	parms.InGameplayTag = InGameplayTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAbilitySystemBlueprintLibrary::GetItemDataFromDesignData(struct FDesignDataItem& InDesignDataItem, struct FItemData& OutItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetItemDataFromDesignData");

	FGetItemDataFromDesignData parms{};	
	parms.InDesignDataItem = InDesignDataItem;
	parms.OutItemData = OutItemData;

	ProcessEvent(fn, &parms);
}

struct FGameplayTagContainer UDCAbilitySystemBlueprintLibrary::GetGrantedTag(struct FGameplayEffectSpecHandle SpecHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGrantedTag");

	FGetGrantedTag parms{};	
	parms.SpecHandle = SpecHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UDCAbilitySystemBlueprintLibrary::GetGameplayEffectSetByCallerValue(struct FGameplayTag InSetByCallerTag, int32_t InSetByCallerValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGameplayEffectSetByCallerValue");

	FGetGameplayEffectSetByCallerValue parms{};	
	parms.InSetByCallerTag = InSetByCallerTag;
	parms.InSetByCallerValue = InSetByCallerValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAbilitySystemBlueprintLibrary::GetGameplayEffectDescDataItem(struct FDesignDataItem& InDesignDataItem, struct FDesignDataGameplayEffect& InDesignDataGameplayEffect, struct FItemDataGameplayEffect& InItemDataGameplayEffect, struct TArray<struct FGameplayEffectDescData>& OutGameplayEffectDescDataArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGameplayEffectDescDataItem");

	FGetGameplayEffectDescDataItem parms{};	
	parms.InDesignDataItem = InDesignDataItem;
	parms.InDesignDataGameplayEffect = InDesignDataGameplayEffect;
	parms.InItemDataGameplayEffect = InItemDataGameplayEffect;
	parms.OutGameplayEffectDescDataArray = OutGameplayEffectDescDataArray;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemBlueprintLibrary::GetGameplayEffectDescData(struct FDesignDataGameplayEffect& InDesignDataGameplayEffect, struct TArray<struct FGameplayEffectDescData>& OutGameplayEffectDescDataArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGameplayEffectDescData");

	FGetGameplayEffectDescData parms{};	
	parms.InDesignDataGameplayEffect = InDesignDataGameplayEffect;
	parms.OutGameplayEffectDescDataArray = OutGameplayEffectDescDataArray;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemBlueprintLibrary::GetGameplayEffectData(struct FDesignDataGameplayEffect& InDesignDataGameplayEffect, struct FDCGameplayEffectData& OutGameplayEffectData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGameplayEffectData");

	FGetGameplayEffectData parms{};	
	parms.InDesignDataGameplayEffect = InDesignDataGameplayEffect;
	parms.OutGameplayEffectData = OutGameplayEffectData;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemBlueprintLibrary::GetGameplayDataFromDesignDataSpell(struct FDesignDataSpell& InDesignDataSpell, struct TArray<struct FDCGameplayAbilityData>& OutGameplayAbilityDataArray, struct TArray<struct FDCGameplayEffectData>& OutGameplayEffectDataArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGameplayDataFromDesignDataSpell");

	FGetGameplayDataFromDesignDataSpell parms{};	
	parms.InDesignDataSpell = InDesignDataSpell;
	parms.OutGameplayAbilityDataArray = OutGameplayAbilityDataArray;
	parms.OutGameplayEffectDataArray = OutGameplayEffectDataArray;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemBlueprintLibrary::GetGameplayDataFromDesignDataSkill(struct FDesignDataSkill& InDesignDataSkill, struct TArray<struct FDCGameplayAbilityData>& OutGameplayAbilityDataArray, struct TArray<struct FDCGameplayEffectData>& OutGameplayEffectDataArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGameplayDataFromDesignDataSkill");

	FGetGameplayDataFromDesignDataSkill parms{};	
	parms.InDesignDataSkill = InDesignDataSkill;
	parms.OutGameplayAbilityDataArray = OutGameplayAbilityDataArray;
	parms.OutGameplayEffectDataArray = OutGameplayEffectDataArray;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemBlueprintLibrary::GetGameplayAbilityData(struct FDesignDataGameplayAbility& InDesignDataGameplayAbility, struct FDCGameplayAbilityData& OutGameplayAbilityData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGameplayAbilityData");

	FGetGameplayAbilityData parms{};	
	parms.InDesignDataGameplayAbility = InDesignDataGameplayAbility;
	parms.OutGameplayAbilityData = OutGameplayAbilityData;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemBlueprintLibrary::GetEffectSpec(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayEffectSpec& OutEffectSpec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetEffectSpec");

	FGetEffectSpec parms{};	
	parms.SpecHandle = SpecHandle;
	parms.OutEffectSpec = OutEffectSpec;

	ProcessEvent(fn, &parms);
}

struct FName UDCAbilitySystemBlueprintLibrary::GetCurrentMontageSectionName(struct AActor* InActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetCurrentMontageSectionName");

	FGetCurrentMontageSectionName parms{};	
	parms.InActor = InActor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAbilitySystemBlueprintLibrary::GetBoundingBoxPointsLocation(struct AActor* InActor, struct AActor* InTarget, struct FVector& OutTop, struct FVector& OutBottom, struct FVector& OutLeft, struct FVector& OutRight, struct FVector& OutCenter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetBoundingBoxPointsLocation");

	FGetBoundingBoxPointsLocation parms{};	
	parms.InActor = InActor;
	parms.InTarget = InTarget;
	parms.OutTop = OutTop;
	parms.OutBottom = OutBottom;
	parms.OutLeft = OutLeft;
	parms.OutRight = OutRight;
	parms.OutCenter = OutCenter;

	ProcessEvent(fn, &parms);
}

struct FText UDCAbilitySystemBlueprintLibrary::GetAttributeDisplayName(struct UObject* WorldContextObject, struct FGameplayAttribute& Attribute){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetAttributeDisplayName");

	FGetAttributeDisplayName parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Attribute = Attribute;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UDCAbilitySystemBlueprintLibrary::GetActorAttributeValue(struct AActor* InActor, struct FGameplayAttribute InAttribute){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetActorAttributeValue");

	FGetActorAttributeValue parms{};	
	parms.InActor = InActor;
	parms.InAttribute = InAttribute;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct USkeletalMeshComponent* UDCAbilitySystemBlueprintLibrary::FindSocketOwningMeshComponent(struct FName SocketName, struct UObject* Object, struct AActor* AvatarActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.FindSocketOwningMeshComponent");

	FFindSocketOwningMeshComponent parms{};	
	parms.SocketName = SocketName;
	parms.Object = Object;
	parms.AvatarActor = AvatarActor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAbilitySystemBlueprintLibrary::ExecuteGameplayCueLocal(struct AActor* InActor, struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ExecuteGameplayCueLocal");

	FExecuteGameplayCueLocal parms{};	
	parms.InActor = InActor;
	parms.GameplayCueTag = GameplayCueTag;
	parms.GameplayCueParameters = GameplayCueParameters;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemBlueprintLibrary::ExecuteGameplayCue(struct AActor* InActor, struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ExecuteGameplayCue");

	FExecuteGameplayCue parms{};	
	parms.InActor = InActor;
	parms.GameplayCueTag = GameplayCueTag;
	parms.GameplayCueParameters = GameplayCueParameters;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemBlueprintLibrary::EffectContextSetSoundDataPrimaryAssetId(struct FGameplayEffectContextHandle EffectContext, struct FPrimaryAssetId PrimaryAssetId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.EffectContextSetSoundDataPrimaryAssetId");

	FEffectContextSetSoundDataPrimaryAssetId parms{};	
	parms.EffectContext = EffectContext;
	parms.PrimaryAssetId = PrimaryAssetId;

	ProcessEvent(fn, &parms);
}

struct FPrimaryAssetId UDCAbilitySystemBlueprintLibrary::EffectContextGetSoundDataPrimaryAssetId(struct FGameplayEffectContextHandle EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.EffectContextGetSoundDataPrimaryAssetId");

	FEffectContextGetSoundDataPrimaryAssetId parms{};	
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct USoundData* UDCAbilitySystemBlueprintLibrary::EffectContextGetSoundData(struct FGameplayEffectContextHandle EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.EffectContextGetSoundData");

	FEffectContextGetSoundData parms{};	
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FItemData> UDCAbilitySystemBlueprintLibrary::EffectContextGetItemDatas(struct FGameplayEffectContextHandle EffectContextHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.EffectContextGetItemDatas");

	FEffectContextGetItemDatas parms{};	
	parms.EffectContextHandle = EffectContextHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAbilitySystemBlueprintLibrary::DCEffectContextSetSoundDataPrimaryAssetId(struct FDCGameplayEffectContext EffectContext, struct FPrimaryAssetId PrimaryAssetId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextSetSoundDataPrimaryAssetId");

	FDCEffectContextSetSoundDataPrimaryAssetId parms{};	
	parms.EffectContext = EffectContext;
	parms.PrimaryAssetId = PrimaryAssetId;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemBlueprintLibrary::DCEffectContextSetOrigin(struct FDCGameplayEffectContext EffectContext, struct FVector Origin){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextSetOrigin");

	FDCEffectContextSetOrigin parms{};	
	parms.EffectContext = EffectContext;
	parms.Origin = Origin;

	ProcessEvent(fn, &parms);
}

bool UDCAbilitySystemBlueprintLibrary::DCEffectContextHasHitResult(struct FDCGameplayEffectContext EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextHasHitResult");

	FDCEffectContextHasHitResult parms{};	
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UObject* UDCAbilitySystemBlueprintLibrary::DCEffectContextGetSourceObject(struct FDCGameplayEffectContext EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetSourceObject");

	FDCEffectContextGetSourceObject parms{};	
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FPrimaryAssetId UDCAbilitySystemBlueprintLibrary::DCEffectContextGetSoundDataPrimaryAssetId(struct FDCGameplayEffectContext EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetSoundDataPrimaryAssetId");

	FDCEffectContextGetSoundDataPrimaryAssetId parms{};	
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct AActor* UDCAbilitySystemBlueprintLibrary::DCEffectContextGetOriginalInstigatorActor(struct FDCGameplayEffectContext EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetOriginalInstigatorActor");

	FDCEffectContextGetOriginalInstigatorActor parms{};	
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector UDCAbilitySystemBlueprintLibrary::DCEffectContextGetOrigin(struct FDCGameplayEffectContext EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetOrigin");

	FDCEffectContextGetOrigin parms{};	
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct AActor* UDCAbilitySystemBlueprintLibrary::DCEffectContextGetInstigatorActor(struct FDCGameplayEffectContext EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetInstigatorActor");

	FDCEffectContextGetInstigatorActor parms{};	
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FHitResult UDCAbilitySystemBlueprintLibrary::DCEffectContextGetHitResult(struct FDCGameplayEffectContext EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetHitResult");

	FDCEffectContextGetHitResult parms{};	
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct AActor* UDCAbilitySystemBlueprintLibrary::DCEffectContextGetEffectCauser(struct FDCGameplayEffectContext EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetEffectCauser");

	FDCEffectContextGetEffectCauser parms{};	
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAbilitySystemBlueprintLibrary::DCEffectContextAddHitResult(struct FDCGameplayEffectContext EffectContext, struct FHitResult HitResult, bool bReset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextAddHitResult");

	FDCEffectContextAddHitResult parms{};	
	parms.EffectContext = EffectContext;
	parms.HitResult = HitResult;
	parms.bReset = bReset;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemBlueprintLibrary::ClearAllAbilities(struct AActor* InActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ClearAllAbilities");

	FClearAllAbilities parms{};	
	parms.InActor = InActor;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemBlueprintLibrary::CancelAllAbilities(struct AActor* InActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.CancelAllAbilities");

	FCancelAllAbilities parms{};	
	parms.InActor = InActor;

	ProcessEvent(fn, &parms);
}

struct TArray<struct FActiveGameplayEffectHandle> UDCAbilitySystemBlueprintLibrary::ApplyPremadeSpecArray(struct AActor* InActor, struct FGameplayTag ContainerTag, struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ApplyPremadeSpecArray");

	FApplyPremadeSpecArray parms{};	
	parms.InActor = InActor;
	parms.ContainerTag = ContainerTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FActiveGameplayEffectHandle> UDCAbilitySystemBlueprintLibrary::ApplyGameplayEffects(struct AActor* InActor, struct TArray<struct FDCGameplayEffectData>& InGameplayEffectDataArray, struct AActor* InSourceActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ApplyGameplayEffects");

	FApplyGameplayEffects parms{};	
	parms.InActor = InActor;
	parms.InGameplayEffectDataArray = InGameplayEffectDataArray;
	parms.InSourceActor = InSourceActor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FActiveGameplayEffectHandle> UDCAbilitySystemBlueprintLibrary::ApplyGameplayEffectByIds(struct AActor* InActor, struct TArray<struct FPrimaryAssetId>& InGameplayEffectIdArray, struct AActor* InSourceActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ApplyGameplayEffectByIds");

	FApplyGameplayEffectByIds parms{};	
	parms.InActor = InActor;
	parms.InGameplayEffectIdArray = InGameplayEffectIdArray;
	parms.InSourceActor = InSourceActor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FActiveGameplayEffectHandle UDCAbilitySystemBlueprintLibrary::ApplyGameplayEffect(struct AActor* InActor, struct FDesignDataGameplayEffect& InDesignDataGameplayEffect, struct AActor* InSourceActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ApplyGameplayEffect");

	FApplyGameplayEffect parms{};	
	parms.InActor = InActor;
	parms.InDesignDataGameplayEffect = InDesignDataGameplayEffect;
	parms.InSourceActor = InSourceActor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FActiveGameplayEffectHandle> UDCAbilitySystemBlueprintLibrary::ApplyEffectContainerSpec(struct FDCGameplayEffectContainerSpec& ContainerSpec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ApplyEffectContainerSpec");

	FApplyEffectContainerSpec parms{};	
	parms.ContainerSpec = ContainerSpec;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAbilitySystemBlueprintLibrary::AimSphereWithActorViewPoint(struct AActor* InActor, float Radius, struct TArray<struct FHitResult>& OutHitResults, enum class ECollisionChannel TraceChannel, float MaxRange){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AimSphereWithActorViewPoint");

	FAimSphereWithActorViewPoint parms{};	
	parms.InActor = InActor;
	parms.Radius = Radius;
	parms.OutHitResults = OutHitResults;
	parms.TraceChannel = TraceChannel;
	parms.MaxRange = MaxRange;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemBlueprintLibrary::AimLineWithActorViewPointToPoint(struct AActor* InActor, struct FVector& TraceEnd, struct TArray<struct FHitResult>& OutHitResults, enum class ECollisionChannel TraceChannel){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AimLineWithActorViewPointToPoint");

	FAimLineWithActorViewPointToPoint parms{};	
	parms.InActor = InActor;
	parms.TraceEnd = TraceEnd;
	parms.OutHitResults = OutHitResults;
	parms.TraceChannel = TraceChannel;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemBlueprintLibrary::AimLineWithActorViewPoint(struct AActor* InActor, struct TArray<struct FHitResult>& OutHitResults, enum class ECollisionChannel TraceChannel, float MaxRange){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AimLineWithActorViewPoint");

	FAimLineWithActorViewPoint parms{};	
	parms.InActor = InActor;
	parms.OutHitResults = OutHitResults;
	parms.TraceChannel = TraceChannel;
	parms.MaxRange = MaxRange;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemBlueprintLibrary::AddLooseGameplayTag(struct AActor* InActor, struct FGameplayTag GameplayTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AddLooseGameplayTag");

	FAddLooseGameplayTag parms{};	
	parms.InActor = InActor;
	parms.GameplayTag = GameplayTag;

	ProcessEvent(fn, &parms);
}

bool UDCAbilitySystemBlueprintLibrary::AddGameplayTag(struct AActor* InActor, struct FGameplayTag InGameplayTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AddGameplayTag");

	FAddGameplayTag parms{};	
	parms.InActor = InActor;
	parms.InGameplayTag = InGameplayTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAbilitySystemBlueprintLibrary::AddGameplayCueLocal(struct AActor* InActor, struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AddGameplayCueLocal");

	FAddGameplayCueLocal parms{};	
	parms.InActor = InActor;
	parms.GameplayCueTag = GameplayCueTag;
	parms.GameplayCueParameters = GameplayCueParameters;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemBlueprintLibrary::AddGameplayCue(struct AActor* InActor, struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AddGameplayCue");

	FAddGameplayCue parms{};	
	parms.InActor = InActor;
	parms.GameplayCueTag = GameplayCueTag;
	parms.GameplayCueParameters = GameplayCueParameters;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemComponent::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemComponent.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemComponent::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemComponent.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemComponent::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemComponent.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemComponent::SetTagQueryData(struct TArray<struct FPrimaryAssetId> InHitTagQueryDataIdArray, struct TArray<struct FPrimaryAssetId> InBeHitTagQueryDataIdArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemComponent.SetTagQueryData");

	FSetTagQueryData parms{};	
	parms.InHitTagQueryDataIdArray = InHitTagQueryDataIdArray;
	parms.InBeHitTagQueryDataIdArray = InBeHitTagQueryDataIdArray;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemComponent::RemoveGameplayCueLocal(struct FGameplayTag GameplayCueTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemComponent.RemoveGameplayCueLocal");

	FRemoveGameplayCueLocal parms{};	
	parms.GameplayCueTag = GameplayCueTag;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemComponent::PlayMontageOnSourceObject(struct UGameplayAbility* InAnimatingAbility, struct FGameplayAbilityActivationInfo ActivationInfo, struct UAnimMontage* NewAnimMontage, float InPlayRate, struct FName StartSectionName, float StartTimeSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemComponent.PlayMontageOnSourceObject");

	FPlayMontageOnSourceObject parms{};	
	parms.InAnimatingAbility = InAnimatingAbility;
	parms.ActivationInfo = ActivationInfo;
	parms.NewAnimMontage = NewAnimMontage;
	parms.InPlayRate = InPlayRate;
	parms.StartSectionName = StartSectionName;
	parms.StartTimeSeconds = StartTimeSeconds;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemComponent::OnRep_ImpactEnduranceExhaustedData(struct FImpactEnduranceExhaustedData& OldImpactEnduranceExhaustedData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemComponent.OnRep_ImpactEnduranceExhaustedData");

	FOnRep_ImpactEnduranceExhaustedData parms{};	
	parms.OldImpactEnduranceExhaustedData = OldImpactEnduranceExhaustedData;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemComponent::OnRep_AbilityHandleDataArray(struct TArray<struct FDCGameplayAbilityHandleData>& InOldAbilityHandleDataArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemComponent.OnRep_AbilityHandleDataArray");

	FOnRep_AbilityHandleDataArray parms{};	
	parms.InOldAbilityHandleDataArray = InOldAbilityHandleDataArray;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemComponent::OnActorDieData(struct FActorDieData InActorDieData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemComponent.OnActorDieData");

	FOnActorDieData parms{};	
	parms.InActorDieData = InActorDieData;

	ProcessEvent(fn, &parms);
}

struct TArray<struct FDCGameplayEffectContainerSpec> UDCAbilitySystemComponent::GetContainerSpecArray(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemComponent.GetContainerSpecArray");

	FGetContainerSpecArray parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAbilitySystemComponent::ExecuteGameplayCueLocal(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemComponent.ExecuteGameplayCueLocal");

	FExecuteGameplayCueLocal parms{};	
	parms.GameplayCueTag = GameplayCueTag;
	parms.GameplayCueParameters = GameplayCueParameters;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemComponent::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemComponent.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UDCAbilitySystemComponent::AddGameplayCueLocal(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAbilitySystemComponent.AddGameplayCueLocal");

	FAddGameplayCueLocal parms{};	
	parms.GameplayCueTag = GameplayCueTag;
	parms.GameplayCueParameters = GameplayCueParameters;

	ProcessEvent(fn, &parms);
}

void UDCActionSkinComponent::OnRep_Datas(struct TArray<struct UDCActionSkinDataAsset*>& OldDatas){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCActionSkinComponent.OnRep_Datas");

	FOnRep_Datas parms{};	
	parms.OldDatas = OldDatas;

	ProcessEvent(fn, &parms);
}

void UDCControlWidgetBase::OnClickTimer(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCControlWidgetBase.OnClickTimer");

	FOnClickTimer parms{};	

	ProcessEvent(fn, &parms);
}

struct UUserWidget* UDCActionSkinWidget::GetActionSkinTooltipWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCActionSkinWidget.GetActionSkinTooltipWidget");

	FGetActionSkinTooltipWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCActionSkinListEntryWidget::OnRightClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCActionSkinListEntryWidget.OnRightClicked");

	FOnRightClicked parms{};	

	ProcessEvent(fn, &parms);
}

struct UDCAT_WaitGameplayTagsAdded* UDCAT_WaitGameplayTagsAdded::WaitGameplayTagsAdded(struct UGameplayAbility* OwningAbility, struct FGameplayTagContainer TagContainer, bool bIsWaitAnyTag, struct AActor* InOptionalExternalTarget, bool bIsOnlyTriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitGameplayTagsAdded.WaitGameplayTagsAdded");

	FWaitGameplayTagsAdded parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TagContainer = TagContainer;
	parms.bIsWaitAnyTag = bIsWaitAnyTag;
	parms.InOptionalExternalTarget = InOptionalExternalTarget;
	parms.bIsOnlyTriggerOnce = bIsOnlyTriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCCustomizeEmoteListWidget::OnSetEmoteIdArray(struct TArray<struct FDCEmoteInfo> EmoteIdArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCustomizeEmoteListWidget.OnSetEmoteIdArray");

	FOnSetEmoteIdArray parms{};	
	parms.EmoteIdArray = EmoteIdArray;

	ProcessEvent(fn, &parms);
}

struct UDCItemTooltipWidget* UDCMerchantItemWidget::GetTooltipWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMerchantItemWidget.GetTooltipWidget");

	FGetTooltipWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCCameraPostProcessTimelineData::HandleTimelineUpdate(float UpdateValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCameraPostProcessTimelineData.HandleTimelineUpdate");

	FHandleTimelineUpdate parms{};	
	parms.UpdateValue = UpdateValue;

	ProcessEvent(fn, &parms);
}

void UDCCameraPostProcessTimelineData::HandleTimelineFinished(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCameraPostProcessTimelineData.HandleTimelineFinished");

	FHandleTimelineFinished parms{};	

	ProcessEvent(fn, &parms);
}

void UDCCharacterAbilitySystemComponent::OnItemUnequipEvent(struct FDCItemId ItemId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterAbilitySystemComponent.OnItemUnequipEvent");

	FOnItemUnequipEvent parms{};	
	parms.ItemId = ItemId;

	ProcessEvent(fn, &parms);
}

void UDCCharacterAbilitySystemComponent::OnItemEquipEvent(struct FDCItemInfo& ItemInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterAbilitySystemComponent.OnItemEquipEvent");

	FOnItemEquipEvent parms{};	
	parms.ItemInfo = ItemInfo;

	ProcessEvent(fn, &parms);
}

bool ASkillActor::UpdateSkillCount(int32_t DeltaCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillActor.UpdateSkillCount");

	FUpdateSkillCount parms{};	
	parms.DeltaCount = DeltaCount;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ASkillActor::SetSkillData(struct FSkillData& NewSkillData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillActor.SetSkillData");

	FSetSkillData parms{};	
	parms.NewSkillData = NewSkillData;

	ProcessEvent(fn, &parms);
}

void ASkillActor::RechargeSkill(int32_t ChargeAmount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillActor.RechargeSkill");

	FRechargeSkill parms{};	
	parms.ChargeAmount = ChargeAmount;

	ProcessEvent(fn, &parms);
}

void ASkillActor::OnRep_SkillData(struct FSkillData& OldSkillData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillActor.OnRep_SkillData");

	FOnRep_SkillData parms{};	
	parms.OldSkillData = OldSkillData;

	ProcessEvent(fn, &parms);
}

struct USoundData* ASkillActor::GetSoundDataSkill(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillActor.GetSoundDataSkill");

	FGetSoundDataSkill parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSkillData ASkillActor::GetSkillData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillActor.GetSkillData");

	FGetSkillData parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FDesignDataSkill ASkillActor::GetDesignDataSkill(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillActor.GetDesignDataSkill");

	FGetDesignDataSkill parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UArtDataSkill* ASkillActor::GetArtDataSkill(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillActor.GetArtDataSkill");

	FGetArtDataSkill parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCActorStatusComponent::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCActorStatusComponent.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UDCActorStatusComponent::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCActorStatusComponent.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UDCActorStatusComponent::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCActorStatusComponent.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UDCActorStatusComponent::OnRep_ActorStatusDatas(struct TArray<struct FActorStatusData>& OldActorStatusDatas){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCActorStatusComponent.OnRep_ActorStatusDatas");

	FOnRep_ActorStatusDatas parms{};	
	parms.OldActorStatusDatas = OldActorStatusDatas;

	ProcessEvent(fn, &parms);
}

void UDCActorStatusComponent::GameplayEffectStackChanged(struct FGameplayTag EffectGameplayTag, struct FActiveGameplayEffectHandle EffectHandle, int32_t NewStackCount, int32_t PreviousStackCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCActorStatusComponent.GameplayEffectStackChanged");

	FGameplayEffectStackChanged parms{};	
	parms.EffectGameplayTag = EffectGameplayTag;
	parms.EffectHandle = EffectHandle;
	parms.NewStackCount = NewStackCount;
	parms.PreviousStackCount = PreviousStackCount;

	ProcessEvent(fn, &parms);
}

void UDCActorStatusComponent::GameplayEffectInhibitChanged(struct FGameplayTag EffectGameplayTag, struct FActiveGameplayEffectHandle EffectHandle, bool bIsInhibited){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCActorStatusComponent.GameplayEffectInhibitChanged");

	FGameplayEffectInhibitChanged parms{};	
	parms.EffectGameplayTag = EffectGameplayTag;
	parms.EffectHandle = EffectHandle;
	parms.bIsInhibited = bIsInhibited;

	ProcessEvent(fn, &parms);
}

void UDCActorStatusComponent::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCActorStatusComponent.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void USkillWidget::SetSkillData(struct FText& SkillName, struct FText& SkillDesc){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillWidget.SetSkillData");

	FSetSkillData parms{};	
	parms.SkillName = SkillName;
	parms.SkillDesc = SkillDesc;

	ProcessEvent(fn, &parms);
}

void USkillWidget::OnSetSkillData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillWidget.OnSetSkillData");

	FOnSetSkillData parms{};	

	ProcessEvent(fn, &parms);
}

void USkillWidget::InitializeSkillWidget(struct FPrimaryAssetId& InSkillId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SkillWidget.InitializeSkillWidget");

	FInitializeSkillWidget parms{};	
	parms.InSkillId = InSkillId;

	ProcessEvent(fn, &parms);
}

void UDCAkComponent::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAkComponent.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UDCAkComponent::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAkComponent.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UDCAkComponent::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAkComponent.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UDCAkComponent::SetSoundSwitch(struct FGameplayTag& Tag, enum class EPhysicalSurface SurfaceType, struct FString SwitchGroup, struct FString SwitchState){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAkComponent.SetSoundSwitch");

	FSetSoundSwitch parms{};	
	parms.Tag = Tag;
	parms.SurfaceType = SurfaceType;
	parms.SwitchGroup = SwitchGroup;
	parms.SwitchState = SwitchState;

	ProcessEvent(fn, &parms);
}

void UDCAkComponent::PostSoundEvent(struct FGameplayTag Tag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAkComponent.PostSoundEvent");

	FPostSoundEvent parms{};	
	parms.Tag = Tag;

	ProcessEvent(fn, &parms);
}

void UDCAkComponent::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAkComponent.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UDCAnimInstanceBase::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAnimInstanceBase.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UDCAnimInstanceBase::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAnimInstanceBase.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UDCAnimInstanceBase::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAnimInstanceBase.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

struct AActor* UDCAnimInstanceBase::GetOriginActor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAnimInstanceBase.GetOriginActor");

	FGetOriginActor parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAnimInstanceBase::EventMontageStarted(struct UAnimMontage* InMontage){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAnimInstanceBase.EventMontageStarted");

	FEventMontageStarted parms{};	
	parms.InMontage = InMontage;

	ProcessEvent(fn, &parms);
}

void UDCAnimInstanceBase::EventAllMontageInstancesEnded(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAnimInstanceBase.EventAllMontageInstancesEnded");

	FEventAllMontageInstancesEnded parms{};	

	ProcessEvent(fn, &parms);
}

void UDCAnimInstanceBase::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAnimInstanceBase.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UInjectionItemSelectedPropertyWidgetBase::OnSelectedPropertyValueChanged__DelegateSignature(struct FPrimaryAssetId& PropertyTypeAssetId, int32_t PropertyValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction DungeonCrawler.InjectionItemSelectedPropertyWidgetBase.OnSelectedPropertyValueChanged__DelegateSignature");

	FOnSelectedPropertyValueChanged__DelegateSignature parms{};	
	parms.PropertyTypeAssetId = PropertyTypeAssetId;
	parms.PropertyValue = PropertyValue;

	ProcessEvent(fn, &parms);
}

void UInjectionItemSelectedPropertyWidgetBase::OnPropertyValueSet(struct FText& Text, enum class ETextCommit CommitMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InjectionItemSelectedPropertyWidgetBase.OnPropertyValueSet");

	FOnPropertyValueSet parms{};	
	parms.Text = Text;
	parms.CommitMethod = CommitMethod;

	ProcessEvent(fn, &parms);
}

void UInjectionItemSelectedPropertyWidgetBase::OnPropertyValueChanged(struct FText& Text){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InjectionItemSelectedPropertyWidgetBase.OnPropertyValueChanged");

	FOnPropertyValueChanged parms{};	
	parms.Text = Text;

	ProcessEvent(fn, &parms);
}

struct UAnimSequence* UDCAnimInstanceV2::GetIdleAnim(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAnimInstanceV2.GetIdleAnim");

	FGetIdleAnim parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UDCAT_WaitTargetGameplayTagEvent* UDCAT_WaitTargetGameplayTagEvent::WaitTargetGameplayTagEvent(struct UGameplayAbility* OwningAbility, struct FGameplayTag InTargetTag, struct AActor* InOptionalExternalTarget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitTargetGameplayTagEvent.WaitTargetGameplayTagEvent");

	FWaitTargetGameplayTagEvent parms{};	
	parms.OwningAbility = OwningAbility;
	parms.InTargetTag = InTargetTag;
	parms.InOptionalExternalTarget = InOptionalExternalTarget;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMetaPlayComponent::OnRecruitBegin(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MetaPlayComponent.OnRecruitBegin");

	FOnRecruitBegin parms{};	

	ProcessEvent(fn, &parms);
}

void UDCSkeletalMeshComponent::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCSkeletalMeshComponent.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UDCSkeletalMeshComponent::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCSkeletalMeshComponent.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UDCSkeletalMeshComponent::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCSkeletalMeshComponent.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UDCSkeletalMeshComponent::SetAffectNavigation(bool bRelevant){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCSkeletalMeshComponent.SetAffectNavigation");

	FSetAffectNavigation parms{};	
	parms.bRelevant = bRelevant;

	ProcessEvent(fn, &parms);
}

void UDCSkeletalMeshComponent::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCSkeletalMeshComponent.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ADCAoeAIControllerBase::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeAIControllerBase.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCAoeAIControllerBase::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeAIControllerBase.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCAoeAIControllerBase::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeAIControllerBase.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void ADCAoeAIControllerBase::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeAIControllerBase.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ADCAoeBase::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeBase.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCAoeBase::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeBase.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCAoeBase::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeBase.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void ADCAoeBase::RemoveEndOverlapActor(struct ADCCharacterBase* CharacterBase){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeBase.RemoveEndOverlapActor");

	FRemoveEndOverlapActor parms{};	
	parms.CharacterBase = CharacterBase;

	ProcessEvent(fn, &parms);
}

void ADCAoeBase::OnSetAI(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeBase.OnSetAI");

	FOnSetAI parms{};	

	ProcessEvent(fn, &parms);
}

void ADCAoeBase::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeBase.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ADCAoeBase::AddBeginOverlapActor(struct ADCCharacterBase* CharacterBase){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAoeBase.AddBeginOverlapActor");

	FAddBeginOverlapActor parms{};	
	parms.CharacterBase = CharacterBase;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsVideoWidget::UpdateDisplayMode(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsVideoWidget.UpdateDisplayMode");

	FUpdateDisplayMode parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsVideoWidget::UpdateAntiAliasingSuperResolution(int32_t InSlotIdx){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsVideoWidget.UpdateAntiAliasingSuperResolution");

	FUpdateAntiAliasingSuperResolution parms{};	
	parms.InSlotIdx = InSlotIdx;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsVideoWidget::OnRevertDisplayOption(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsVideoWidget.OnRevertDisplayOption");

	FOnRevertDisplayOption parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsVideoWidget::OnResetButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsVideoWidget.OnResetButtonClicked");

	FOnResetButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsVideoWidget::OnDisplayOptionChangePopup(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsVideoWidget.OnDisplayOptionChangePopup");

	FOnDisplayOptionChangePopup parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsVideoWidget::OnBrightnessChanged(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsVideoWidget.OnBrightnessChanged");

	FOnBrightnessChanged parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsVideoWidget::OnApplyDisplayOption(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsVideoWidget.OnApplyDisplayOption");

	FOnApplyDisplayOption parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsVideoWidget::OnApplyButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsVideoWidget.OnApplyButtonClicked");

	FOnApplyButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

struct UDCAT_WaitTargetData* UDCAT_WaitTargetData::DCWaitTargetData(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, struct AGameplayAbilityTargetActor* InTargetActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitTargetData.DCWaitTargetData");

	FDCWaitTargetData parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TaskInstanceName = TaskInstanceName;
	parms.ConfirmationType = ConfirmationType;
	parms.InTargetActor = InTargetActor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ADCGameModeBase::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameModeBase.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCGameModeBase::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameModeBase.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCGameModeBase::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameModeBase.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void ADCGameModeBase::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameModeBase.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGameSpellCastingBarWidget::OnSpellChannelingStart(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSpellCastingBarWidget.OnSpellChannelingStart");

	FOnSpellChannelingStart parms{};	

	ProcessEvent(fn, &parms);
}

void UGameSpellCastingBarWidget::OnSpellChannelingEnd(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSpellCastingBarWidget.OnSpellChannelingEnd");

	FOnSpellChannelingEnd parms{};	

	ProcessEvent(fn, &parms);
}

void UGameSpellCastingBarWidget::OnSpellCastSucceed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSpellCastingBarWidget.OnSpellCastSucceed");

	FOnSpellCastSucceed parms{};	

	ProcessEvent(fn, &parms);
}

void UGameSpellCastingBarWidget::OnSpellCastStart(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSpellCastingBarWidget.OnSpellCastStart");

	FOnSpellCastStart parms{};	

	ProcessEvent(fn, &parms);
}

void UGameSpellCastingBarWidget::OnSpellCastEnd(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSpellCastingBarWidget.OnSpellCastEnd");

	FOnSpellCastEnd parms{};	

	ProcessEvent(fn, &parms);
}

void UDCMerchantListPageWidget::OnSetCompletedTileView(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMerchantListPageWidget.OnSetCompletedTileView");

	FOnSetCompletedTileView parms{};	

	ProcessEvent(fn, &parms);
}

void ULobbyWidget::OnPlayPartyReadyStateChanged(bool bMine, bool bLeader, bool bReady){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LobbyWidget.OnPlayPartyReadyStateChanged");

	FOnPlayPartyReadyStateChanged parms{};	
	parms.bMine = bMine;
	parms.bLeader = bLeader;
	parms.bReady = bReady;

	ProcessEvent(fn, &parms);
}

void ULobbyWidget::OnMatchingStateChanged(bool bMatching){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LobbyWidget.OnMatchingStateChanged");

	FOnMatchingStateChanged parms{};	
	parms.bMatching = bMatching;

	ProcessEvent(fn, &parms);
}

void ULobbyWidget::OnLobbySystemMessage(struct FText& AnnounceText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LobbyWidget.OnLobbySystemMessage");

	FOnLobbySystemMessage parms{};	
	parms.AnnounceText = AnnounceText;

	ProcessEvent(fn, &parms);
}

void ULobbyWidget::OnBackButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LobbyWidget.OnBackButtonClicked");

	FOnBackButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_WillMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_WillMod");

	FOnRep_WillMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_WillBase(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_WillBase");

	FOnRep_WillBase parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_Will(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_Will");

	FOnRep_Will parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_WeightLimitMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_WeightLimitMod");

	FOnRep_WeightLimitMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_WeightLimitBase(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_WeightLimitBase");

	FOnRep_WeightLimitBase parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_WeightLimitAdd(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_WeightLimitAdd");

	FOnRep_WeightLimitAdd parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_WeightLimit(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_WeightLimit");

	FOnRep_WeightLimit parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_Weight(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_Weight");

	FOnRep_Weight parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_WaterMagicResistance(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_WaterMagicResistance");

	FOnRep_WaterMagicResistance parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_WaterMagicalReductionMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_WaterMagicalReductionMod");

	FOnRep_WaterMagicalReductionMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_WaterMagicalReduction(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_WaterMagicalReduction");

	FOnRep_WaterMagicalReduction parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_UtilityEffectivenessMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_UtilityEffectivenessMod");

	FOnRep_UtilityEffectivenessMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_UtilityEffectivenessBase(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_UtilityEffectivenessBase");

	FOnRep_UtilityEffectivenessBase parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_UtilityEffectivenessAdd(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_UtilityEffectivenessAdd");

	FOnRep_UtilityEffectivenessAdd parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_UtilityEffectiveness(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_UtilityEffectiveness");

	FOnRep_UtilityEffectiveness parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_TotalShield(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_TotalShield");

	FOnRep_TotalShield parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_StrengthMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_StrengthMod");

	FOnRep_StrengthMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_StrengthBase(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_StrengthBase");

	FOnRep_StrengthBase parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_Strength(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_Strength");

	FOnRep_Strength parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_SpiritMagicResistance(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_SpiritMagicResistance");

	FOnRep_SpiritMagicResistance parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_SpiritMagicalReductionMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_SpiritMagicalReductionMod");

	FOnRep_SpiritMagicalReductionMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_SpiritMagicalReduction(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_SpiritMagicalReduction");

	FOnRep_SpiritMagicalReduction parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_SpellPayload(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_SpellPayload");

	FOnRep_SpellPayload parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_SpellCastingSpeed(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_SpellCastingSpeed");

	FOnRep_SpellCastingSpeed parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_SpellCapacityMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_SpellCapacityMod");

	FOnRep_SpellCapacityMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_SpellCapacityBase(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_SpellCapacityBase");

	FOnRep_SpellCapacityBase parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_SpellCapacityAdd(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_SpellCapacityAdd");

	FOnRep_SpellCapacityAdd parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_SpellCapacity(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_SpellCapacity");

	FOnRep_SpellCapacity parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_ResourcefulnessMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_ResourcefulnessMod");

	FOnRep_ResourcefulnessMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_ResourcefulnessBase(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_ResourcefulnessBase");

	FOnRep_ResourcefulnessBase parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_Resourcefulness(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_Resourcefulness");

	FOnRep_Resourcefulness parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_RegularInteractionSpeedBase(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_RegularInteractionSpeedBase");

	FOnRep_RegularInteractionSpeedBase parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_RegularInteractionSpeed(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_RegularInteractionSpeed");

	FOnRep_RegularInteractionSpeed parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_RecoverableHealth(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_RecoverableHealth");

	FOnRep_RecoverableHealth parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_ProjectileReductionMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_ProjectileReductionMod");

	FOnRep_ProjectileReductionMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_PhysicalShield(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalShield");

	FOnRep_PhysicalShield parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_PhysicalReductionMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalReductionMod");

	FOnRep_PhysicalReductionMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_PhysicalReduction(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalReduction");

	FOnRep_PhysicalReduction parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_PhysicalPower(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalPower");

	FOnRep_PhysicalPower parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_PhysicalHealMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalHealMod");

	FOnRep_PhysicalHealMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_PhysicalHealBase(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalHealBase");

	FOnRep_PhysicalHealBase parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_PhysicalHeadshotPower(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalHeadshotPower");

	FOnRep_PhysicalHeadshotPower parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_PhysicalHeadshotPenetration(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalHeadshotPenetration");

	FOnRep_PhysicalHeadshotPenetration parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_PhysicalDamageWeaponSecondary(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalDamageWeaponSecondary");

	FOnRep_PhysicalDamageWeaponSecondary parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_PhysicalDamageWeaponPrimary(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalDamageWeaponPrimary");

	FOnRep_PhysicalDamageWeaponPrimary parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_PhysicalDamageTrue(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalDamageTrue");

	FOnRep_PhysicalDamageTrue parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_PhysicalDamageMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalDamageMod");

	FOnRep_PhysicalDamageMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_PhysicalDamageBase(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalDamageBase");

	FOnRep_PhysicalDamageBase parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_PhysicalDamageAdd(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalDamageAdd");

	FOnRep_PhysicalDamageAdd parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_PhysicalBackstabPower(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalBackstabPower");

	FOnRep_PhysicalBackstabPower parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_PhysicalAbsoluteReduction(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalAbsoluteReduction");

	FOnRep_PhysicalAbsoluteReduction parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MoveSpeedWithModifier(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeedWithModifier");

	FOnRep_MoveSpeedWithModifier parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MoveSpeedMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeedMod");

	FOnRep_MoveSpeedMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MoveSpeedBase(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeedBase");

	FOnRep_MoveSpeedBase parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MoveSpeedArmorPenaltyMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeedArmorPenaltyMod");

	FOnRep_MoveSpeedArmorPenaltyMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MoveSpeedArmorPenalty(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeedArmorPenalty");

	FOnRep_MoveSpeedArmorPenalty parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MoveSpeedAdd(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeedAdd");

	FOnRep_MoveSpeedAdd parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MoveSpeed(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeed");

	FOnRep_MoveSpeed parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MaxTotalShield(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MaxTotalShield");

	FOnRep_MaxTotalShield parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MaxPhysicalShield(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MaxPhysicalShield");

	FOnRep_MaxPhysicalShield parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MaxMagicalShield(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MaxMagicalShield");

	FOnRep_MaxMagicalShield parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MaxImpactEndurance(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MaxImpactEndurance");

	FOnRep_MaxImpactEndurance parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MaxHealthMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MaxHealthMod");

	FOnRep_MaxHealthMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MaxHealthBase(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MaxHealthBase");

	FOnRep_MaxHealthBase parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MaxHealthAdd(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MaxHealthAdd");

	FOnRep_MaxHealthAdd parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MaxHealth(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MaxHealth");

	FOnRep_MaxHealth parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MagicResistance(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MagicResistance");

	FOnRep_MagicResistance parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MagicPenetration(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MagicPenetration");

	FOnRep_MagicPenetration parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MagicalShield(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MagicalShield");

	FOnRep_MagicalShield parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MagicalReductionMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MagicalReductionMod");

	FOnRep_MagicalReductionMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MagicalReduction(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MagicalReduction");

	FOnRep_MagicalReduction parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MagicalPower(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MagicalPower");

	FOnRep_MagicalPower parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MagicalInteractionSpeed(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MagicalInteractionSpeed");

	FOnRep_MagicalInteractionSpeed parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MagicalHealMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MagicalHealMod");

	FOnRep_MagicalHealMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MagicalHealBase(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MagicalHealBase");

	FOnRep_MagicalHealBase parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MagicalFireDamageMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MagicalFireDamageMod");

	FOnRep_MagicalFireDamageMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MagicalFireDamageBase(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MagicalFireDamageBase");

	FOnRep_MagicalFireDamageBase parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MagicalFireDamageAdd(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MagicalFireDamageAdd");

	FOnRep_MagicalFireDamageAdd parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MagicalDarkDamageMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDarkDamageMod");

	FOnRep_MagicalDarkDamageMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MagicalDarkDamageBase(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDarkDamageBase");

	FOnRep_MagicalDarkDamageBase parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MagicalDarkDamageAdd(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDarkDamageAdd");

	FOnRep_MagicalDarkDamageAdd parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MagicalDamageWeaponSecondary(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDamageWeaponSecondary");

	FOnRep_MagicalDamageWeaponSecondary parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MagicalDamageWeaponPrimary(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDamageWeaponPrimary");

	FOnRep_MagicalDamageWeaponPrimary parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MagicalDamageTrue(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDamageTrue");

	FOnRep_MagicalDamageTrue parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MagicalDamageMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDamageMod");

	FOnRep_MagicalDamageMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MagicalDamageBase(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDamageBase");

	FOnRep_MagicalDamageBase parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MagicalDamageAdd(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDamageAdd");

	FOnRep_MagicalDamageAdd parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MagicalArcaneDamageMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MagicalArcaneDamageMod");

	FOnRep_MagicalArcaneDamageMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MagicalArcaneDamageBase(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MagicalArcaneDamageBase");

	FOnRep_MagicalArcaneDamageBase parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MagicalArcaneDamageAdd(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MagicalArcaneDamageAdd");

	FOnRep_MagicalArcaneDamageAdd parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_MagicalAbsoluteReduction(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_MagicalAbsoluteReduction");

	FOnRep_MagicalAbsoluteReduction parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_Luck(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_Luck");

	FOnRep_Luck parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_LightningMagicResistance(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_LightningMagicResistance");

	FOnRep_LightningMagicResistance parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_LightningMagicalReductionMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_LightningMagicalReductionMod");

	FOnRep_LightningMagicalReductionMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_LightningMagicalReduction(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_LightningMagicalReduction");

	FOnRep_LightningMagicalReduction parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_LightMagicResistance(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_LightMagicResistance");

	FOnRep_LightMagicResistance parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_LightMagicalReductionMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_LightMagicalReductionMod");

	FOnRep_LightMagicalReductionMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_LightMagicalReduction(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_LightMagicalReduction");

	FOnRep_LightMagicalReduction parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_KnowledgeMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_KnowledgeMod");

	FOnRep_KnowledgeMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_KnowledgeBase(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_KnowledgeBase");

	FOnRep_KnowledgeBase parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_Knowledge(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_Knowledge");

	FOnRep_Knowledge parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_ItemEquipSpeed(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_ItemEquipSpeed");

	FOnRep_ItemEquipSpeed parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_ItemArmorRatingMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_ItemArmorRatingMod");

	FOnRep_ItemArmorRatingMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_ItemArmorRating(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_ItemArmorRating");

	FOnRep_ItemArmorRating parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_ImpactResistance(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_ImpactResistance");

	FOnRep_ImpactResistance parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_ImpactPower(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_ImpactPower");

	FOnRep_ImpactPower parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_ImpactEndurance(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_ImpactEndurance");

	FOnRep_ImpactEndurance parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_Health(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_Health");

	FOnRep_Health parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_HeadshotReductionMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_HeadshotReductionMod");

	FOnRep_HeadshotReductionMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_FireMagicResistance(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_FireMagicResistance");

	FOnRep_FireMagicResistance parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_FireMagicalReductionMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_FireMagicalReductionMod");

	FOnRep_FireMagicalReductionMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_FireMagicalReduction(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_FireMagicalReduction");

	FOnRep_FireMagicalReduction parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_EvilMagicResistance(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_EvilMagicResistance");

	FOnRep_EvilMagicResistance parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_EvilMagicalReductionMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_EvilMagicalReductionMod");

	FOnRep_EvilMagicalReductionMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_EvilMagicalReduction(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_EvilMagicalReduction");

	FOnRep_EvilMagicalReduction parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_EarthMagicResistance(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_EarthMagicResistance");

	FOnRep_EarthMagicResistance parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_EarthMagicalReductionMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_EarthMagicalReductionMod");

	FOnRep_EarthMagicalReductionMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_EarthMagicalReduction(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_EarthMagicalReduction");

	FOnRep_EarthMagicalReduction parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_DivineMagicResistance(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_DivineMagicResistance");

	FOnRep_DivineMagicResistance parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_DivineMagicalReductionMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_DivineMagicalReductionMod");

	FOnRep_DivineMagicalReductionMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_DivineMagicalReduction(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_DivineMagicalReduction");

	FOnRep_DivineMagicalReduction parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_DebuffDurationMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_DebuffDurationMod");

	FOnRep_DebuffDurationMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_DarkMagicResistance(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_DarkMagicResistance");

	FOnRep_DarkMagicResistance parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_DarkMagicalReductionMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_DarkMagicalReductionMod");

	FOnRep_DarkMagicalReductionMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_DarkMagicalReduction(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_DarkMagicalReduction");

	FOnRep_DarkMagicalReduction parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_BuffDurationMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_BuffDurationMod");

	FOnRep_BuffDurationMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_ArmorRating(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_ArmorRating");

	FOnRep_ArmorRating parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_ArmorPenetration(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_ArmorPenetration");

	FOnRep_ArmorPenetration parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_ArcaneMagicResistance(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_ArcaneMagicResistance");

	FOnRep_ArcaneMagicResistance parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_ArcaneMagicalReductionMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_ArcaneMagicalReductionMod");

	FOnRep_ArcaneMagicalReductionMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_ArcaneMagicalReduction(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_ArcaneMagicalReduction");

	FOnRep_ArcaneMagicalReduction parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_AirMagicResistance(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_AirMagicResistance");

	FOnRep_AirMagicResistance parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_AirMagicalReductionMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_AirMagicalReductionMod");

	FOnRep_AirMagicalReductionMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_AirMagicalReduction(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_AirMagicalReduction");

	FOnRep_AirMagicalReduction parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_AgilityMod(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_AgilityMod");

	FOnRep_AgilityMod parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_AgilityBase(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_AgilityBase");

	FOnRep_AgilityBase parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_Agility(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_Agility");

	FOnRep_Agility parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCAttributeSet::OnRep_ActionSpeed(struct FGameplayAttributeData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAttributeSet.OnRep_ActionSpeed");

	FOnRep_ActionSpeed parms{};	
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCPartyManager::Update(struct FDCPlayerInfo& Info){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPartyManager.Update");

	FUpdate parms{};	
	parms.Info = Info;

	ProcessEvent(fn, &parms);
}

void UDCPartyManager::Remove(struct FDCPartyId& PartyId, struct FDCAccountId& AccountId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPartyManager.Remove");

	FRemove parms{};	
	parms.PartyId = PartyId;
	parms.AccountId = AccountId;

	ProcessEvent(fn, &parms);
}

void UDCPartyManager::OnPlayerUpdated(struct FDCPlayerInfo& NewInfo, struct FDCPlayerInfo& OldInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPartyManager.OnPlayerUpdated");

	FOnPlayerUpdated parms{};	
	parms.NewInfo = NewInfo;
	parms.OldInfo = OldInfo;

	ProcessEvent(fn, &parms);
}

void UDCPartyManager::OnPlayerRemoved(struct FDCPlayerInfo& RemovedPlayer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPartyManager.OnPlayerRemoved");

	FOnPlayerRemoved parms{};	
	parms.RemovedPlayer = RemovedPlayer;

	ProcessEvent(fn, &parms);
}

void UDCPartyManager::OnPlayerAdded(struct FDCPlayerInfo& Info){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPartyManager.OnPlayerAdded");

	FOnPlayerAdded parms{};	
	parms.Info = Info;

	ProcessEvent(fn, &parms);
}

struct TArray<struct FDCPartyId> UDCPartyManager::GetParties(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPartyManager.GetParties");

	FGetParties parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCPartyManager::DebugOnScreen(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPartyManager.DebugOnScreen");

	FDebugOnScreen parms{};	

	ProcessEvent(fn, &parms);
}

void UDCPartyManager::Add(struct FDCPartyId& PartyId, struct FDCAccountId& AccountId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPartyManager.Add");

	FAdd parms{};	
	parms.PartyId = PartyId;
	parms.AccountId = AccountId;

	ProcessEvent(fn, &parms);
}

void UGA_MusicGrantingAbilityBase::OnTargetActorOverlap(struct TArray<struct AActor*>& TargetActors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MusicGrantingAbilityBase.OnTargetActorOverlap");

	FOnTargetActorOverlap parms{};	
	parms.TargetActors = TargetActors;

	ProcessEvent(fn, &parms);
}

void UGA_MeleeAttackBase::ServerTargetDataReceived(struct FGameplayTag EventTag, struct FGameplayTag InChannelTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MeleeAttackBase.ServerTargetDataReceived");

	FServerTargetDataReceived parms{};	
	parms.EventTag = EventTag;
	parms.InChannelTag = InChannelTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_MeleeAttackBase::ReceivedTargetData(struct FGameplayAbilityTargetDataHandle& InData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MeleeAttackBase.ReceivedTargetData");

	FReceivedTargetData parms{};	
	parms.InData = InData;

	ProcessEvent(fn, &parms);
}

void UGA_MeleeAttackBase::ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MeleeAttackBase.ReceivedEvent");

	FReceivedEvent parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_MeleeAttackBase::OnStuckFinish(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MeleeAttackBase.OnStuckFinish");

	FOnStuckFinish parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_MeleeAttackBase::OnInterruptFinish(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MeleeAttackBase.OnInterruptFinish");

	FOnInterruptFinish parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_MeleeAttackBase::OnInterrupted(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MeleeAttackBase.OnInterrupted");

	FOnInterrupted parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_MeleeAttackBase::OnHitFinish(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MeleeAttackBase.OnHitFinish");

	FOnHitFinish parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_MeleeAttackBase::OnCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MeleeAttackBase.OnCompleted");

	FOnCompleted parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_MeleeAttackBase::OnCancelled(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MeleeAttackBase.OnCancelled");

	FOnCancelled parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_MeleeAttackBase::OnBlendOut(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MeleeAttackBase.OnBlendOut");

	FOnBlendOut parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_MeleeAttackBase::MontageJumpToNextSection(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MeleeAttackBase.MontageJumpToNextSection");

	FMontageJumpToNextSection parms{};	

	ProcessEvent(fn, &parms);
}

struct UDesignDataAssetMeleeAttack* UGA_MeleeAttackBase::GetMeleeAttackData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MeleeAttackBase.GetMeleeAttackData");

	FGetMeleeAttackData parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGA_MeleeAttackBase::EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MeleeAttackBase.EventReceived");

	FEventReceived parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_MeleeAttackBase::ClientTargetDataReceived(struct FGameplayTag EventTag, struct FGameplayTag InChannelTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MeleeAttackBase.ClientTargetDataReceived");

	FClientTargetDataReceived parms{};	
	parms.EventTag = EventTag;
	parms.InChannelTag = InChannelTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_MeleeAttackBase::ClientReceivedTargetData(struct FGameplayTag InEffectTag, struct FGameplayTag InChannelTag, struct FGameplayAbilityTargetDataHandle& InData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MeleeAttackBase.ClientReceivedTargetData");

	FClientReceivedTargetData parms{};	
	parms.InEffectTag = InEffectTag;
	parms.InChannelTag = InChannelTag;
	parms.InData = InData;

	ProcessEvent(fn, &parms);
}

void UGA_MeleeAttackBase::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MeleeAttackBase.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UExpandableInventoryComponent::SetExpandable(bool bCanExpand){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ExpandableInventoryComponent.SetExpandable");

	FSetExpandable parms{};	
	parms.bCanExpand = bCanExpand;

	ProcessEvent(fn, &parms);
}

struct UDCAT_DashToLocation* UDCAT_DashToLocation::DashToLocation(struct UGameplayAbility* OwningAbility, struct FVector DestLocation, float AllowedDistance, float Speed, bool Teleport){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_DashToLocation.DashToLocation");

	FDashToLocation parms{};	
	parms.OwningAbility = OwningAbility;
	parms.DestLocation = DestLocation;
	parms.AllowedDistance = AllowedDistance;
	parms.Speed = Speed;
	parms.Teleport = Teleport;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCCharacterMovementComponent::SetIsTrapped(bool InbIsTrapped, struct FVector& InTrapPinnedLocation, float InTrapRange){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterMovementComponent.SetIsTrapped");

	FSetIsTrapped parms{};	
	parms.InbIsTrapped = InbIsTrapped;
	parms.InTrapPinnedLocation = InTrapPinnedLocation;
	parms.InTrapRange = InTrapRange;

	ProcessEvent(fn, &parms);
}

void UDCCharacterMovementComponent::RemoveMovementModifier(struct TArray<struct FPrimaryAssetId>& MovementModifiers){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterMovementComponent.RemoveMovementModifier");

	FRemoveMovementModifier parms{};	
	parms.MovementModifiers = MovementModifiers;

	ProcessEvent(fn, &parms);
}

void UDCCharacterMovementComponent::AddMovementModifier(struct TArray<struct FPrimaryAssetId>& MovementModifiers){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterMovementComponent.AddMovementModifier");

	FAddMovementModifier parms{};	
	parms.MovementModifiers = MovementModifiers;

	ProcessEvent(fn, &parms);
}

struct UDCAT_InteractionSkillCheck* UDCAT_InteractionSkillCheck::InteractionSkillCheck(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, float Duration, float SucceedSectionStartTime, float SucceedSectionEndTime, float PerfectSucceedSectionStartTime, float PerfectSucceedSectionEndTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_InteractionSkillCheck.InteractionSkillCheck");

	FInteractionSkillCheck parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TaskInstanceName = TaskInstanceName;
	parms.Duration = Duration;
	parms.SucceedSectionStartTime = SucceedSectionStartTime;
	parms.SucceedSectionEndTime = SucceedSectionEndTime;
	parms.PerfectSucceedSectionStartTime = PerfectSucceedSectionStartTime;
	parms.PerfectSucceedSectionEndTime = PerfectSucceedSectionEndTime;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCVoipComponent::InitVoip(struct UVoipAkComponent* InSendVoipAkComponent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCVoipComponent.InitVoip");

	FInitVoip parms{};	
	parms.InSendVoipAkComponent = InSendVoipAkComponent;

	ProcessEvent(fn, &parms);
}

struct UDCAT_JudgeMusicPlay* UDCAT_JudgeMusicPlay::JudgeMusicPlay(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct UInputAction* InInputAction, float Duration, float GoodSectionStartTime, float GoodSectionEndTime, float PerfectSectionStartTime, float PerfectSectionEndTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_JudgeMusicPlay.JudgeMusicPlay");

	FJudgeMusicPlay parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TaskInstanceName = TaskInstanceName;
	parms.InInputAction = InInputAction;
	parms.Duration = Duration;
	parms.GoodSectionStartTime = GoodSectionStartTime;
	parms.GoodSectionEndTime = GoodSectionEndTime;
	parms.PerfectSectionStartTime = PerfectSectionStartTime;
	parms.PerfectSectionEndTime = PerfectSectionEndTime;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCLobbyEmoteGroupWidgetBase::OnSelectedEmoteIndexChanged(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCLobbyEmoteGroupWidgetBase.OnSelectedEmoteIndexChanged");

	FOnSelectedEmoteIndexChanged parms{};	

	ProcessEvent(fn, &parms);
}

void UDCLobbyEmoteGroupWidgetBase::OnEmoteSelectPopup(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCLobbyEmoteGroupWidgetBase.OnEmoteSelectPopup");

	FOnEmoteSelectPopup parms{};	

	ProcessEvent(fn, &parms);
}

void UDCLobbyEmoteGroupWidgetBase::OnEmoteSelectClose(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCLobbyEmoteGroupWidgetBase.OnEmoteSelectClose");

	FOnEmoteSelectClose parms{};	

	ProcessEvent(fn, &parms);
}

uint8_t UDCLobbyEmoteGroupWidgetBase::GetVisibilityBySelectedEmote(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCLobbyEmoteGroupWidgetBase.GetVisibilityBySelectedEmote");

	FGetVisibilityBySelectedEmote parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UDCAT_MoveWithInputVectorCurve* UDCAT_MoveWithInputVectorCurve::MoveWithInputVectorCurve(struct UGameplayAbility* OwningAbility, struct FVector DestLocation, struct UCurveVector* InVelocityVector, float DistanceTolerance, bool bShouldTeleportWhenFinished){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_MoveWithInputVectorCurve.MoveWithInputVectorCurve");

	FMoveWithInputVectorCurve parms{};	
	parms.OwningAbility = OwningAbility;
	parms.DestLocation = DestLocation;
	parms.InVelocityVector = InVelocityVector;
	parms.DistanceTolerance = DistanceTolerance;
	parms.bShouldTeleportWhenFinished = bShouldTeleportWhenFinished;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAT_MoveWithInputVectorCurve::HandleTimelineUpdate(struct FVector InVector){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_MoveWithInputVectorCurve.HandleTimelineUpdate");

	FHandleTimelineUpdate parms{};	
	parms.InVector = InVector;

	ProcessEvent(fn, &parms);
}

void UDCAT_MoveWithInputVectorCurve::HandleTimelineFinished(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_MoveWithInputVectorCurve.HandleTimelineFinished");

	FHandleTimelineFinished parms{};	

	ProcessEvent(fn, &parms);
}

struct UDCAT_OverlapActorsInComponent* UDCAT_OverlapActorsInComponent::OverlapActorsInComponent(struct UGameplayAbility* OwningAbility, struct UPrimitiveComponent* OverlapPrimitiveComponent, UObject* OverlapTargetClass, struct AActor* InIgnoreActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_OverlapActorsInComponent.OverlapActorsInComponent");

	FOverlapActorsInComponent parms{};	
	parms.OwningAbility = OwningAbility;
	parms.OverlapPrimitiveComponent = OverlapPrimitiveComponent;
	parms.OverlapTargetClass = OverlapTargetClass;
	parms.InIgnoreActor = InIgnoreActor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAT_OverlapActorsInComponent::OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_OverlapActorsInComponent.OnOverlapEnd");

	FOnOverlapEnd parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;

	ProcessEvent(fn, &parms);
}

void UDCAT_OverlapActorsInComponent::OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_OverlapActorsInComponent.OnOverlapBegin");

	FOnOverlapBegin parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;
	parms.bFromSweep = bFromSweep;
	parms.SweepResult = SweepResult;

	ProcessEvent(fn, &parms);
}

struct TArray<struct AActor*> UDCAT_OverlapActorsInComponent::GetTargetList(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_OverlapActorsInComponent.GetTargetList");

	FGetTargetList parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAT_OverlapActorsInComponent::ClearIgnoreActors(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_OverlapActorsInComponent.ClearIgnoreActors");

	FClearIgnoreActors parms{};	

	ProcessEvent(fn, &parms);
}

void UDCAT_OverlapActorsInComponent::AddIgnoreActors(struct TArray<struct AActor*> InAddIgnoreActors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_OverlapActorsInComponent.AddIgnoreActors");

	FAddIgnoreActors parms{};	
	parms.InAddIgnoreActors = InAddIgnoreActors;

	ProcessEvent(fn, &parms);
}

struct UDCAT_OverlapActorsInRadius* UDCAT_OverlapActorsInRadius::OverlapActorsInRadius(struct UGameplayAbility* OwningAbility, float Radius, struct FName CollisionProfileName, UObject* OverlapTargetClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_OverlapActorsInRadius.OverlapActorsInRadius");

	FOverlapActorsInRadius parms{};	
	parms.OwningAbility = OwningAbility;
	parms.Radius = Radius;
	parms.CollisionProfileName = CollisionProfileName;
	parms.OverlapTargetClass = OverlapTargetClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAT_OverlapActorsInRadius::OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_OverlapActorsInRadius.OnOverlapEnd");

	FOnOverlapEnd parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;

	ProcessEvent(fn, &parms);
}

void UDCAT_OverlapActorsInRadius::OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_OverlapActorsInRadius.OnOverlapBegin");

	FOnOverlapBegin parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;
	parms.bFromSweep = bFromSweep;
	parms.SweepResult = SweepResult;

	ProcessEvent(fn, &parms);
}

void UGA_SpellBase::OnCasted(struct AActor* InTarget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_SpellBase.OnCasted");

	FOnCasted parms{};	
	parms.InTarget = InTarget;

	ProcessEvent(fn, &parms);
}

bool UGA_SpellBase::IsSocketSightBlocked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_SpellBase.IsSocketSightBlocked");

	FIsSocketSightBlocked parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UGA_SpellBase::IsSightBlocked(struct FHitResult& HitResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_SpellBase.IsSightBlocked");

	FIsSightBlocked parms{};	
	parms.HitResult = HitResult;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UGA_SpellBase::GetRange(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_SpellBase.GetRange");

	FGetRange parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UGA_SpellBase::GetAreaRadius(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_SpellBase.GetAreaRadius");

	FGetAreaRadius parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UGA_SpellBase::GetAimRadius(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_SpellBase.GetAimRadius");

	FGetAimRadius parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct AProjectileActor* UGA_SpellBase::FireProjectile(struct FHitResult& HitResult, AProjectileActor* ProjectileActorClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_SpellBase.FireProjectile");

	FFireProjectile parms{};	
	parms.HitResult = HitResult;
	parms.ProjectileActorClass = ProjectileActorClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGA_SpellBase::CastToTarget(struct FHitResult& HitResult, bool bShouldNotEndAbilityOnCasted, bool bUseExecuteGameplayCue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_SpellBase.CastToTarget");

	FCastToTarget parms{};	
	parms.HitResult = HitResult;
	parms.bShouldNotEndAbilityOnCasted = bShouldNotEndAbilityOnCasted;
	parms.bUseExecuteGameplayCue = bUseExecuteGameplayCue;

	ProcessEvent(fn, &parms);
}

void UGA_SpellBase::CastToSelf(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_SpellBase.CastToSelf");

	FCastToSelf parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_SpellBase::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_SpellBase.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGameMusicCurrentSlotWidget::SetMusicData(struct FMusicData& InMusicData, struct FDesignDataMusic& InDesignDataMusic){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMusicCurrentSlotWidget.SetMusicData");

	FSetMusicData parms{};	
	parms.InMusicData = InMusicData;
	parms.InDesignDataMusic = InDesignDataMusic;

	ProcessEvent(fn, &parms);
}

void UGameMusicCurrentSlotWidget::OnMusicDataChanged(struct FMusicData& InMusicData, struct FDesignDataMusic& InDesignDataMusic){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMusicCurrentSlotWidget.OnMusicDataChanged");

	FOnMusicDataChanged parms{};	
	parms.InMusicData = InMusicData;
	parms.InDesignDataMusic = InDesignDataMusic;

	ProcessEvent(fn, &parms);
}

struct UDCAT_ServerWaitClientTargetData* UDCAT_ServerWaitClientTargetData::ServerWaitForClientTargetData(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, bool TriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_ServerWaitClientTargetData.ServerWaitForClientTargetData");

	FServerWaitForClientTargetData parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TaskInstanceName = TaskInstanceName;
	parms.TriggerOnce = TriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAT_ServerWaitClientTargetData::OnTargetDataReplicatedCallback(struct FGameplayAbilityTargetDataHandle& Data, struct FGameplayTag ActivationTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_ServerWaitClientTargetData.OnTargetDataReplicatedCallback");

	FOnTargetDataReplicatedCallback parms{};	
	parms.Data = Data;
	parms.ActivationTag = ActivationTag;

	ProcessEvent(fn, &parms);
}

void UDCTabButtonWidgetBase::OnSelectedChanged(bool bInIsSelected){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCTabButtonWidgetBase.OnSelectedChanged");

	FOnSelectedChanged parms{};	
	parms.bInIsSelected = bInIsSelected;

	ProcessEvent(fn, &parms);
}

struct UDCAT_SpawnProjectile* UDCAT_SpawnProjectile::SpawnProjectile(struct UGameplayAbility* OwningAbility, UObject* SpawnClass, struct FTransform SpawnTransform, float FirePower){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_SpawnProjectile.SpawnProjectile");

	FSpawnProjectile parms{};	
	parms.OwningAbility = OwningAbility;
	parms.SpawnClass = SpawnClass;
	parms.SpawnTransform = SpawnTransform;
	parms.FirePower = FirePower;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UKarmaReportWidgetBase::OnFMsgWidgetKarmaReportInfoNotifyBlueprint(struct FMsgWidgetKarmaReportInfoNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.KarmaReportWidgetBase.OnFMsgWidgetKarmaReportInfoNotifyBlueprint");

	FOnFMsgWidgetKarmaReportInfoNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UKarmaReportWidgetBase::OnFMsgWidgetKarmaReportActionResponseBlueprint(struct FMsgWidgetKarmaReportActionResponse& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.KarmaReportWidgetBase.OnFMsgWidgetKarmaReportActionResponseBlueprint");

	FOnFMsgWidgetKarmaReportActionResponseBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

struct UDCAT_WaitAimDirectionChanged* UDCAT_WaitAimDirectionChanged::WaitAimDirectionChanged(struct UGameplayAbility* OwningAbility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitAimDirectionChanged.WaitAimDirectionChanged");

	FWaitAimDirectionChanged parms{};	
	parms.OwningAbility = OwningAbility;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UDCAT_WaitAttributeChangeByExecution* UDCAT_WaitAttributeChangeByExecution::WaitForAttributesChange(struct UGameplayAbility* OwningAbility, struct TArray<struct FGameplayAttribute> Attributes, bool TriggerOnce, struct AActor* OptionalExternalOwner){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitAttributeChangeByExecution.WaitForAttributesChange");

	FWaitForAttributesChange parms{};	
	parms.OwningAbility = OwningAbility;
	parms.Attributes = Attributes;
	parms.TriggerOnce = TriggerOnce;
	parms.OptionalExternalOwner = OptionalExternalOwner;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UDCAT_WaitAttributeChangeByExecution* UDCAT_WaitAttributeChangeByExecution::WaitForAttributeChange(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, bool TriggerOnce, struct AActor* OptionalExternalOwner){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitAttributeChangeByExecution.WaitForAttributeChange");

	FWaitForAttributeChange parms{};	
	parms.OwningAbility = OwningAbility;
	parms.Attribute = Attribute;
	parms.TriggerOnce = TriggerOnce;
	parms.OptionalExternalOwner = OptionalExternalOwner;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UDCAT_WaitDelayRestartable* UDCAT_WaitDelayRestartable::WaitDelay(struct UGameplayAbility* OwningAbility, float Time){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitDelayRestartable.WaitDelay");

	FWaitDelay parms{};	
	parms.OwningAbility = OwningAbility;
	parms.Time = Time;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAT_WaitDelayRestartable::RestartTimer(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitDelayRestartable.RestartTimer");

	FRestartTimer parms{};	

	ProcessEvent(fn, &parms);
}

bool UDCMerchantRequiredEntryWidget::IsFilled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMerchantRequiredEntryWidget.IsFilled");

	FIsFilled parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UDCMerchantRequiredEntryWidget::GetMaxStack(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMerchantRequiredEntryWidget.GetMaxStack");

	FGetMaxStack parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UDCMerchantRequiredEntryWidget::GetCurrentStack(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMerchantRequiredEntryWidget.GetCurrentStack");

	FGetCurrentStack parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UDCAT_WaitDistChangeFromActor* UDCAT_WaitDistChangeFromActor::WaitDistanceChange(struct UGameplayAbility* OwningAbility, struct AActor* TargetActor, float MaximumDistance, enum class ECollisionChannel CollisionChannel){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitDistChangeFromActor.WaitDistanceChange");

	FWaitDistanceChange parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TargetActor = TargetActor;
	parms.MaximumDistance = MaximumDistance;
	parms.CollisionChannel = CollisionChannel;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCTooltipWidget::SetTooltipData(struct FText& InNameText, struct FText& InDescriptionText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCTooltipWidget.SetTooltipData");

	FSetTooltipData parms{};	
	parms.InNameText = InNameText;
	parms.InDescriptionText = InDescriptionText;

	ProcessEvent(fn, &parms);
}

struct UDCAT_WaitForCharacterUnCrouch* UDCAT_WaitForCharacterUnCrouch::WaitForCharacterUnCrouch(struct UGameplayAbility* OwningAbility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitForCharacterUnCrouch.WaitForCharacterUnCrouch");

	FWaitForCharacterUnCrouch parms{};	
	parms.OwningAbility = OwningAbility;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCShopCurrencyTypeSlotWidgetBase::OnChangedCheckState(bool bNewState){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCShopCurrencyTypeSlotWidgetBase.OnChangedCheckState");

	FOnChangedCheckState parms{};	
	parms.bNewState = bNewState;

	ProcessEvent(fn, &parms);
}

bool UDCShopCurrencyTypeSlotWidgetBase::IsRedstoneShardType(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCShopCurrencyTypeSlotWidgetBase.IsRedstoneShardType");

	FIsRedstoneShardType parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCShopCurrencyTypeSlotWidgetBase::IsBluestoneShardType(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCShopCurrencyTypeSlotWidgetBase.IsBluestoneShardType");

	FIsBluestoneShardType parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCShopCurrencyTypeSlotWidgetBase::HasNotEnoughCurrency(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCShopCurrencyTypeSlotWidgetBase.HasNotEnoughCurrency");

	FHasNotEnoughCurrency parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ADCGameStateBase::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameStateBase.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCGameStateBase::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameStateBase.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCGameStateBase::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameStateBase.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void ADCGameStateBase::SetDungeonInfo_HideDeathSwarmTimer(bool HideDeathSwarmTimer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameStateBase.SetDungeonInfo_HideDeathSwarmTimer");

	FSetDungeonInfo_HideDeathSwarmTimer parms{};	
	parms.HideDeathSwarmTimer = HideDeathSwarmTimer;

	ProcessEvent(fn, &parms);
}

void ADCGameStateBase::SetDungeonInfo_GameTimeSec(int32_t GameTimeSec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameStateBase.SetDungeonInfo_GameTimeSec");

	FSetDungeonInfo_GameTimeSec parms{};	
	parms.GameTimeSec = GameTimeSec;

	ProcessEvent(fn, &parms);
}

void ADCGameStateBase::OnRep_State(uint8_t OldState){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameStateBase.OnRep_State");

	FOnRep_State parms{};	
	parms.OldState = OldState;

	ProcessEvent(fn, &parms);
}

void ADCGameStateBase::OnRep_PartyDataArray(struct TArray<struct FPartyData>& OldPartyDataArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameStateBase.OnRep_PartyDataArray");

	FOnRep_PartyDataArray parms{};	
	parms.OldPartyDataArray = OldPartyDataArray;

	ProcessEvent(fn, &parms);
}

void ADCGameStateBase::OnRep_GameStateDataArray(struct TArray<struct FGameStateData>& OldGameStateDataArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameStateBase.OnRep_GameStateDataArray");

	FOnRep_GameStateDataArray parms{};	
	parms.OldGameStateDataArray = OldGameStateDataArray;

	ProcessEvent(fn, &parms);
}

void ADCGameStateBase::OnRep_GameInfo(struct FDCGameInfo& OldGameInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameStateBase.OnRep_GameInfo");

	FOnRep_GameInfo parms{};	
	parms.OldGameInfo = OldGameInfo;

	ProcessEvent(fn, &parms);
}

void ADCGameStateBase::OnRep_GameFloorRuleData(struct FGameFloorRuleData& InOldGameFloorRuleData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameStateBase.OnRep_GameFloorRuleData");

	FOnRep_GameFloorRuleData parms{};	
	parms.InOldGameFloorRuleData = InOldGameFloorRuleData;

	ProcessEvent(fn, &parms);
}

void ADCGameStateBase::OnRep_DungeonInfo(struct FDCDungeonInfo& OldDungeonInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameStateBase.OnRep_DungeonInfo");

	FOnRep_DungeonInfo parms{};	
	parms.OldDungeonInfo = OldDungeonInfo;

	ProcessEvent(fn, &parms);
}

void ADCGameStateBase::OnRep_AccountDataReplicationArray(struct TArray<struct FAccountDataReplication>& OldAccountDataReplicationArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameStateBase.OnRep_AccountDataReplicationArray");

	FOnRep_AccountDataReplicationArray parms{};	
	parms.OldAccountDataReplicationArray = OldAccountDataReplicationArray;

	ProcessEvent(fn, &parms);
}

void ADCGameStateBase::OnGameInfoSet(struct FDCGameInfo& OldGameInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameStateBase.OnGameInfoSet");

	FOnGameInfoSet parms{};	
	parms.OldGameInfo = OldGameInfo;

	ProcessEvent(fn, &parms);
}

void ADCGameStateBase::OnGameFloorRuleData(struct FGameFloorRuleData InGameFloorRuleData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameStateBase.OnGameFloorRuleData");

	FOnGameFloorRuleData parms{};	
	parms.InGameFloorRuleData = InGameFloorRuleData;

	ProcessEvent(fn, &parms);
}

void ADCGameStateBase::OnDungeonInfo(struct FDCDungeonInfo InDungeonInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameStateBase.OnDungeonInfo");

	FOnDungeonInfo parms{};	
	parms.InDungeonInfo = InDungeonInfo;

	ProcessEvent(fn, &parms);
}

struct FDCGameInfo ADCGameStateBase::GetGameInfo(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameStateBase.GetGameInfo");

	FGetGameInfo parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FDCDungeonInfo ADCGameStateBase::GetDungeonInfo(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameStateBase.GetDungeonInfo");

	FGetDungeonInfo parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ADCGameStateBase::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameStateBase.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

struct UDCAT_WaitForGameplayEvents* UDCAT_WaitForGameplayEvents::WaitForGameplayEvents(struct UGameplayAbility* OwningAbility, struct FGameplayTagContainer InEventTags){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitForGameplayEvents.WaitForGameplayEvents");

	FWaitForGameplayEvents parms{};	
	parms.OwningAbility = OwningAbility;
	parms.InEventTags = InEventTags;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UDCAT_WaitGameplayAbilityActivateOrEnd* UDCAT_WaitGameplayAbilityActivateOrEnd::WaitForAbilityActivateOrEndWithTagRequirements(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements TagRequirements, struct AActor* InOptionalExternalTarget, bool TriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitGameplayAbilityActivateOrEnd.WaitForAbilityActivateOrEndWithTagRequirements");

	FWaitForAbilityActivateOrEndWithTagRequirements parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TagRequirements = TagRequirements;
	parms.InOptionalExternalTarget = InOptionalExternalTarget;
	parms.TriggerOnce = TriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UDCAT_WaitGameplayAbilityActivateOrEnd* UDCAT_WaitGameplayAbilityActivateOrEnd::WaitForAbilityActivateOrEnd_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, struct AActor* InOptionalExternalTarget, bool TriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitGameplayAbilityActivateOrEnd.WaitForAbilityActivateOrEnd_Query");

	FWaitForAbilityActivateOrEnd_Query parms{};	
	parms.OwningAbility = OwningAbility;
	parms.Query = Query;
	parms.InOptionalExternalTarget = InOptionalExternalTarget;
	parms.TriggerOnce = TriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UDCAT_WaitGameplayAbilityActivateOrEnd* UDCAT_WaitGameplayAbilityActivateOrEnd::WaitForAbilityActivateOrEnd(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTag, struct AActor* InOptionalExternalTarget, bool TriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitGameplayAbilityActivateOrEnd.WaitForAbilityActivateOrEnd");

	FWaitForAbilityActivateOrEnd parms{};	
	parms.OwningAbility = OwningAbility;
	parms.WithTag = WithTag;
	parms.WithoutTag = WithoutTag;
	parms.InOptionalExternalTarget = InOptionalExternalTarget;
	parms.TriggerOnce = TriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAT_WaitGameplayAbilityActivateOrEnd::OnAbilityEnd(struct FAbilityEndedData& AbilityEndedData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitGameplayAbilityActivateOrEnd.OnAbilityEnd");

	FOnAbilityEnd parms{};	
	parms.AbilityEndedData = AbilityEndedData;

	ProcessEvent(fn, &parms);
}

void UDCAT_WaitGameplayAbilityActivateOrEnd::OnAbilityActivate(struct UGameplayAbility* ActivatedAbility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitGameplayAbilityActivateOrEnd.OnAbilityActivate");

	FOnAbilityActivate parms{};	
	parms.ActivatedAbility = ActivatedAbility;

	ProcessEvent(fn, &parms);
}

void UDCAT_WaitGameplayTags::GameplayTagCallback(struct FGameplayTag Tag, int32_t NewCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitGameplayTags.GameplayTagCallback");

	FGameplayTagCallback parms{};	
	parms.Tag = Tag;
	parms.NewCount = NewCount;

	ProcessEvent(fn, &parms);
}

struct UDCAT_WaitGameplayTagsRemoved* UDCAT_WaitGameplayTagsRemoved::WaitGameplayTagsRemoved(struct UGameplayAbility* OwningAbility, struct FGameplayTagContainer TagContainer, bool bIsWaitAnyTag, struct AActor* InOptionalExternalTarget, bool bIsOnlyTriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitGameplayTagsRemoved.WaitGameplayTagsRemoved");

	FWaitGameplayTagsRemoved parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TagContainer = TagContainer;
	parms.bIsWaitAnyTag = bIsWaitAnyTag;
	parms.InOptionalExternalTarget = InOptionalExternalTarget;
	parms.bIsOnlyTriggerOnce = bIsOnlyTriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UDCAT_WaitInteractableTarget* UDCAT_WaitInteractableTarget::WaitInteractableTarget(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct ADCGATA_LineTraceInteractable* InTargetActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitInteractableTarget.WaitInteractableTarget");

	FWaitInteractableTarget parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TaskInstanceName = TaskInstanceName;
	parms.InTargetActor = InTargetActor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAT_WaitInteractableTarget::StopTargeting(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitInteractableTarget.StopTargeting");

	FStopTargeting parms{};	

	ProcessEvent(fn, &parms);
}

void UDCAT_WaitInteractableTarget::StartTargeting(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitInteractableTarget.StartTargeting");

	FStartTargeting parms{};	

	ProcessEvent(fn, &parms);
}

void UDCAT_WaitInteractableTarget::ResetTargeting(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitInteractableTarget.ResetTargeting");

	FResetTargeting parms{};	

	ProcessEvent(fn, &parms);
}

void UDCAT_WaitInteractableTarget::OnLostInteractableTarget(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitInteractableTarget.OnLostInteractableTarget");

	FOnLostInteractableTarget parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UDCAT_WaitInteractableTarget::OnFoundNewInteractableTarget(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitInteractableTarget.OnFoundNewInteractableTarget");

	FOnFoundNewInteractableTarget parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

struct UDCAT_WaitMovementModeChange* UDCAT_WaitMovementModeChange::WaitMovementModeChange(struct UGameplayAbility* OwningAbility, enum class EMovementMode NewMode, bool bOnlyTriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitMovementModeChange.WaitMovementModeChange");

	FWaitMovementModeChange parms{};	
	parms.OwningAbility = OwningAbility;
	parms.NewMode = NewMode;
	parms.bOnlyTriggerOnce = bOnlyTriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAT_WaitMovementModeChange::OnMovementModeChange(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitMovementModeChange.OnMovementModeChange");

	FOnMovementModeChange parms{};	
	parms.Character = Character;
	parms.PrevMovementMode = PrevMovementMode;
	parms.PreviousCustomMode = PreviousCustomMode;

	ProcessEvent(fn, &parms);
}

void UDCGameInstance::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameInstance.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UDCGameInstance::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameInstance.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UDCGameInstance::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameInstance.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UDCGameInstance::OnPreLoadMap(struct FString MapName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameInstance.OnPreLoadMap");

	FOnPreLoadMap parms{};	
	parms.MapName = MapName;

	ProcessEvent(fn, &parms);
}

void UDCGameInstance::OnPostLoadMapWithWorld(struct UWorld* LoadedWorld){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameInstance.OnPostLoadMapWithWorld");

	FOnPostLoadMapWithWorld parms{};	
	parms.LoadedWorld = LoadedWorld;

	ProcessEvent(fn, &parms);
}

void UDCGameInstance::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameInstance.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

struct UDCAT_WaitSocketBlockedStateChange* UDCAT_WaitSocketBlockedStateChange::WaitSocketBlockedStateChange(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct ADCGATA_AimTraceToSocket* InTargetActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitSocketBlockedStateChange.WaitSocketBlockedStateChange");

	FWaitSocketBlockedStateChange parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TaskInstanceName = TaskInstanceName;
	parms.InTargetActor = InTargetActor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCAT_WaitSocketBlockedStateChange::StopTargeting(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitSocketBlockedStateChange.StopTargeting");

	FStopTargeting parms{};	

	ProcessEvent(fn, &parms);
}

void UDCAT_WaitSocketBlockedStateChange::StartTargeting(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitSocketBlockedStateChange.StartTargeting");

	FStartTargeting parms{};	

	ProcessEvent(fn, &parms);
}

void UDCAT_WaitSocketBlockedStateChange::ResetTargeting(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitSocketBlockedStateChange.ResetTargeting");

	FResetTargeting parms{};	

	ProcessEvent(fn, &parms);
}

void UDCAT_WaitSocketBlockedStateChange::OnSocketSightUnblocked(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitSocketBlockedStateChange.OnSocketSightUnblocked");

	FOnSocketSightUnblocked parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UDCAT_WaitSocketBlockedStateChange::OnSocketSightBlocked(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitSocketBlockedStateChange.OnSocketSightBlocked");

	FOnSocketSightBlocked parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UPerkWidget::SetPerkData(struct FText& PerkName, struct FText& PerkDesc){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PerkWidget.SetPerkData");

	FSetPerkData parms{};	
	parms.PerkName = PerkName;
	parms.PerkDesc = PerkDesc;

	ProcessEvent(fn, &parms);
}

void UPerkWidget::OnSetPerkData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PerkWidget.OnSetPerkData");

	FOnSetPerkData parms{};	

	ProcessEvent(fn, &parms);
}

void UPerkWidget::InitializePerkWidget(struct FPrimaryAssetId& InPerkId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PerkWidget.InitializePerkWidget");

	FInitializePerkWidget parms{};	
	parms.InPerkId = InPerkId;

	ProcessEvent(fn, &parms);
}

void UItemGenerateInterface::GenerateItems(float InLuck){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemGenerateInterface.GenerateItems");

	FGenerateItems parms{};	
	parms.InLuck = InLuck;

	ProcessEvent(fn, &parms);
}

void UInvitePartyUserSlotWidget::OnRightClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InvitePartyUserSlotWidget.OnRightClicked");

	FOnRightClicked parms{};	

	ProcessEvent(fn, &parms);
}

struct UDCAT_WaitVelocityChange* UDCAT_WaitVelocityChange::WaitVelocityChange(struct UGameplayAbility* OwningAbility, float MinimumMagnitude){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCAT_WaitVelocityChange.WaitVelocityChange");

	FWaitVelocityChange parms{};	
	parms.OwningAbility = OwningAbility;
	parms.MinimumMagnitude = MinimumMagnitude;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ADCMonsterSpawner::UpdateGameState(struct FGameStateData& InGameStateData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterSpawner.UpdateGameState");

	FUpdateGameState parms{};	
	parms.InGameStateData = InGameStateData;

	ProcessEvent(fn, &parms);
}

void ADCMonsterSpawner::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterSpawner.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCMonsterSpawner::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterSpawner.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCMonsterSpawner::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterSpawner.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

struct TArray<struct ADCMonsterBase*> ADCMonsterSpawner::Spawns(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterSpawner.Spawns");

	FSpawns parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ADCMonsterSpawner::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterSpawner.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UOnlineSystemIronmace::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.OnlineSystemIronmace.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UOnlineSystemIronmace::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.OnlineSystemIronmace.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UOnlineSystemIronmace::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.OnlineSystemIronmace.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UOnlineSystemIronmace::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.OnlineSystemIronmace.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UItemMoveValidatorComponent::ServerMoveItem(struct FItemData OldItemData, struct TArray<struct FItemData> NewItemDataArray, struct AActor* OldOwner, struct AActor* NewOwner, bool bHasDelay){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemMoveValidatorComponent.ServerMoveItem");

	FServerMoveItem parms{};	
	parms.OldItemData = OldItemData;
	parms.NewItemDataArray = NewItemDataArray;
	parms.OldOwner = OldOwner;
	parms.NewOwner = NewOwner;
	parms.bHasDelay = bHasDelay;

	ProcessEvent(fn, &parms);
}

bool UItemMoveValidatorComponent::IsEnableMoveItem(struct FItemData& OldItemData, struct TArray<struct FItemData>& NewItemDataArray, struct AActor* OldOwner, struct AActor* NewOwner){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemMoveValidatorComponent.IsEnableMoveItem");

	FIsEnableMoveItem parms{};	
	parms.OldItemData = OldItemData;
	parms.NewItemDataArray = NewItemDataArray;
	parms.OldOwner = OldOwner;
	parms.NewOwner = NewOwner;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UItemMoveValidatorComponent::ClientShowMessage(struct FText OutputMessage){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemMoveValidatorComponent.ClientShowMessage");

	FClientShowMessage parms{};	
	parms.OutputMessage = OutputMessage;

	ProcessEvent(fn, &parms);
}

void UItemMoveValidatorComponent::ClientMoveItemEnd(bool bMoveSucceed, struct TArray<struct FItemData> MovedItemDataArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemMoveValidatorComponent.ClientMoveItemEnd");

	FClientMoveItemEnd parms{};	
	parms.bMoveSucceed = bMoveSucceed;
	parms.MovedItemDataArray = MovedItemDataArray;

	ProcessEvent(fn, &parms);
}

bool UDCItemWidgetBase::IsSet(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCItemWidgetBase.IsSet");

	FIsSet parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCItemCommonWidget::OnDragDropFinished(struct UDragDropOperation* Operation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCItemCommonWidget.OnDragDropFinished");

	FOnDragDropFinished parms{};	
	parms.Operation = Operation;

	ProcessEvent(fn, &parms);
}

struct UUserWidget* UDCItemCommonWidget::GetTooltipWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCItemCommonWidget.GetTooltipWidget");

	FGetTooltipWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCInventoryWidgetBase::OnWidgetVisibilityChanged(uint8_t Invisibility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInventoryWidgetBase.OnWidgetVisibilityChanged");

	FOnWidgetVisibilityChanged parms{};	
	parms.Invisibility = Invisibility;

	ProcessEvent(fn, &parms);
}

void UDCInventoryWidgetBase::OnItemMoveEvent(uint8_t SourceInventoryId, struct FDCItemInfo& SourceItemInfo, uint8_t TargetInventoryId, int32_t TargetIndex, int32_t TargetStack){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInventoryWidgetBase.OnItemMoveEvent");

	FOnItemMoveEvent parms{};	
	parms.SourceInventoryId = SourceInventoryId;
	parms.SourceItemInfo = SourceItemInfo;
	parms.TargetInventoryId = TargetInventoryId;
	parms.TargetIndex = TargetIndex;
	parms.TargetStack = TargetStack;

	ProcessEvent(fn, &parms);
}

void UDCInventoryWidgetBase::OnItemActionEvent(uint8_t SourceInventoryId, struct FDCItemInfo& SourceItemInfo, uint8_t ActionType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInventoryWidgetBase.OnItemActionEvent");

	FOnItemActionEvent parms{};	
	parms.SourceInventoryId = SourceInventoryId;
	parms.SourceItemInfo = SourceItemInfo;
	parms.ActionType = ActionType;

	ProcessEvent(fn, &parms);
}

void UDCBagWidget::OnDragCanceled(struct UDragDropOperation* Operation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCBagWidget.OnDragCanceled");

	FOnDragCanceled parms{};	
	parms.Operation = Operation;

	ProcessEvent(fn, &parms);
}

struct TMap<struct FDCItemId, struct UDCBagItemWidget*> UDCBagWidget::GetItemWidgets(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCBagWidget.GetItemWidgets");

	FGetItemWidgets parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UDCBagWidget::GetGoldAmount(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCBagWidget.GetGoldAmount");

	FGetGoldAmount parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCInventoryBase::OnRep_InitData(struct FDCInventoryData& OldInitData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInventoryBase.OnRep_InitData");

	FOnRep_InitData parms{};	
	parms.OldInitData = OldInitData;

	ProcessEvent(fn, &parms);
}

void UDCInventoryBase::OnRep_Indexes(struct TArray<int32_t>& OldIndexes){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInventoryBase.OnRep_Indexes");

	FOnRep_Indexes parms{};	
	parms.OldIndexes = OldIndexes;

	ProcessEvent(fn, &parms);
}

void UDCInventoryBase::OnCharacterPerkUpdated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInventoryBase.OnCharacterPerkUpdated");

	FOnCharacterPerkUpdated parms{};	

	ProcessEvent(fn, &parms);
}

void UDCChannelChatWidget::OnNickname(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCChannelChatWidget.OnNickname");

	FOnNickname parms{};	

	ProcessEvent(fn, &parms);
}

void ULobbyUserSlotBase::SetNicknameBlueprint(struct FNickname InNickName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LobbyUserSlotBase.SetNicknameBlueprint");

	FSetNicknameBlueprint parms{};	
	parms.InNickName = InNickName;

	ProcessEvent(fn, &parms);
}

void UDCChannelPlayerListEntryWidget::OnRightClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCChannelPlayerListEntryWidget.OnRightClicked");

	FOnRightClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UDCMerchantDealTablePurchaseWidget::OnButtonFill(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMerchantDealTablePurchaseWidget.OnButtonFill");

	FOnButtonFill parms{};	

	ProcessEvent(fn, &parms);
}

void UDCMerchantDealTablePurchaseWidget::OnButtonDeal(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMerchantDealTablePurchaseWidget.OnButtonDeal");

	FOnButtonDeal parms{};	

	ProcessEvent(fn, &parms);
}

bool UDCMerchantDealTablePurchaseWidget::IsTargetItemSet(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMerchantDealTablePurchaseWidget.IsTargetItemSet");

	FIsTargetItemSet parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCMerchantDealTablePurchaseWidget::IsRequiredItemsFilled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMerchantDealTablePurchaseWidget.IsRequiredItemsFilled");

	FIsRequiredItemsFilled parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UDCGameTooltipWithFlavorTextWidget::GetDescriptionVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameTooltipWithFlavorTextWidget.GetDescriptionVisibility");

	FGetDescriptionVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCChannelPlayerListWidget::OnSearchTextChanged(struct FText& Keyword){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCChannelPlayerListWidget.OnSearchTextChanged");

	FOnSearchTextChanged parms{};	
	parms.Keyword = Keyword;

	ProcessEvent(fn, &parms);
}

struct UDCEquipmentSlotWidget* UDCEquipmentWidget::GetSlotWidget(uint8_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEquipmentWidget.GetSlotWidget");

	FGetSlotWidget parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ADCCharacterProduction::OnRep_ItemDataList(struct TArray<struct FString>& OldItemAssetIDList){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterProduction.OnRep_ItemDataList");

	FOnRep_ItemDataList parms{};	
	parms.OldItemAssetIDList = OldItemAssetIDList;

	ProcessEvent(fn, &parms);
}

void ADCCharacterProduction::OnRep_ChangeHeadMesh(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterProduction.OnRep_ChangeHeadMesh");

	FOnRep_ChangeHeadMesh parms{};	

	ProcessEvent(fn, &parms);
}

void ADCCharacterProduction::OnItemEquip(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterProduction.OnItemEquip");

	FOnItemEquip parms{};	

	ProcessEvent(fn, &parms);
}

void UDCCharacterSkinComponent::SetDataForDebug_Server(struct UDCCharacterSkinDataAsset* InData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterSkinComponent.SetDataForDebug_Server");

	FSetDataForDebug_Server parms{};	
	parms.InData = InData;

	ProcessEvent(fn, &parms);
}

void UDCCharacterSkinComponent::OnRep_Data(struct UDCCharacterSkinDataAsset* OldData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterSkinComponent.OnRep_Data");

	FOnRep_Data parms{};	
	parms.OldData = OldData;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsControlsWidget::OnTraditionalChineseButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsControlsWidget.OnTraditionalChineseButtonClicked");

	FOnTraditionalChineseButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsControlsWidget::OnStreamingModeClicked(bool IsClick){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsControlsWidget.OnStreamingModeClicked");

	FOnStreamingModeClicked parms{};	
	parms.IsClick = IsClick;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsControlsWidget::OnSimplifiedChineseButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsControlsWidget.OnSimplifiedChineseButtonClicked");

	FOnSimplifiedChineseButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsControlsWidget::OnResetButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsControlsWidget.OnResetButtonClicked");

	FOnResetButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsControlsWidget::OnMouseSensitivitySliderValueChanged(float InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsControlsWidget.OnMouseSensitivitySliderValueChanged");

	FOnMouseSensitivitySliderValueChanged parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsControlsWidget::OnKoreanButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsControlsWidget.OnKoreanButtonClicked");

	FOnKoreanButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsControlsWidget::OnJapaneseButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsControlsWidget.OnJapaneseButtonClicked");

	FOnJapaneseButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsControlsWidget::OnInvertMouseVerticalAxisClicked(bool IsClick){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsControlsWidget.OnInvertMouseVerticalAxisClicked");

	FOnInvertMouseVerticalAxisClicked parms{};	
	parms.IsClick = IsClick;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsControlsWidget::OnInvertMouseHorizontalAxisClicked(bool IsClick){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsControlsWidget.OnInvertMouseHorizontalAxisClicked");

	FOnInvertMouseHorizontalAxisClicked parms{};	
	parms.IsClick = IsClick;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsControlsWidget::OnGameUserSettingControls(struct FGameUserSettingControls& NewValue, struct FGameUserSettingControls& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsControlsWidget.OnGameUserSettingControls");

	FOnGameUserSettingControls parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsControlsWidget::OnEnglishButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsControlsWidget.OnEnglishButtonClicked");

	FOnEnglishButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsControlsWidget::OnAutoFillUtilitySlotClicked(bool IsClick){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsControlsWidget.OnAutoFillUtilitySlotClicked");

	FOnAutoFillUtilitySlotClicked parms{};	
	parms.IsClick = IsClick;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsControlsWidget::OnApplyButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsControlsWidget.OnApplyButtonClicked");

	FOnApplyButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

struct UUserWidget* UDCCharacterSkinWidget::GetTooltipWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCharacterSkinWidget.GetTooltipWidget");

	FGetTooltipWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ADCMonsterAIController::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAIController.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCMonsterAIController::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAIController.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCMonsterAIController::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAIController.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void ADCMonsterAIController::OnTargetPerceptionUpdated(struct AActor* Actor, struct FAIStimulus Stimulus){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAIController.OnTargetPerceptionUpdated");

	FOnTargetPerceptionUpdated parms{};	
	parms.Actor = Actor;
	parms.Stimulus = Stimulus;

	ProcessEvent(fn, &parms);
}

void ADCMonsterAIController::OnTargetPerceptionInfoUpdated(struct FActorPerceptionUpdateInfo& UpdateInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAIController.OnTargetPerceptionInfoUpdated");

	FOnTargetPerceptionInfoUpdated parms{};	
	parms.UpdateInfo = UpdateInfo;

	ProcessEvent(fn, &parms);
}

void ADCMonsterAIController::OnPerceptionUpdated(struct TArray<struct AActor*>& UpdatedActors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAIController.OnPerceptionUpdated");

	FOnPerceptionUpdated parms{};	
	parms.UpdatedActors = UpdatedActors;

	ProcessEvent(fn, &parms);
}

void ADCMonsterAIController::ForceSightAll(bool bIsForce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAIController.ForceSightAll");

	FForceSightAll parms{};	
	parms.bIsForce = bIsForce;

	ProcessEvent(fn, &parms);
}

void ADCMonsterAIController::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterAIController.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UImpactableComponent::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ImpactableComponent.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UImpactableComponent::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ImpactableComponent.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UImpactableComponent::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ImpactableComponent.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UImpactableComponent::SetImpactableQuery(struct TArray<struct FPrimaryAssetId> TagQueryDatas){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ImpactableComponent.SetImpactableQuery");

	FSetImpactableQuery parms{};	
	parms.TagQueryDatas = TagQueryDatas;

	ProcessEvent(fn, &parms);
}

struct TArray<struct UTagQueryData*> UImpactableComponent::GetImpactableTagQueryArray(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ImpactableComponent.GetImpactableTagQueryArray");

	FGetImpactableTagQueryArray parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UImpactableComponent::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ImpactableComponent.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UDCStateButtonWidgetBase::SetActive(bool bState){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCStateButtonWidgetBase.SetActive");

	FSetActive parms{};	
	parms.bState = bState;

	ProcessEvent(fn, &parms);
}

void UDCStateButtonWidgetBase::OnCommonButtonClickedInternal(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCStateButtonWidgetBase.OnCommonButtonClickedInternal");

	FOnCommonButtonClickedInternal parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuWidget::OnOptionsButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuWidget.OnOptionsButtonClicked");

	FOnOptionsButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuWidget::OnMenuPop(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuWidget.OnMenuPop");

	FOnMenuPop parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuWidget::OnLobbyButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuWidget.OnLobbyButtonClicked");

	FOnLobbyButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuWidget::OnExitButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuWidget.OnExitButtonClicked");

	FOnExitButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuWidget::OnDisplayOptionApplyPopup(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuWidget.OnDisplayOptionApplyPopup");

	FOnDisplayOptionApplyPopup parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuWidget::OnContinueButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuWidget.OnContinueButtonClicked");

	FOnContinueButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuWidget::OnCharacterSelectClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuWidget.OnCharacterSelectClicked");

	FOnCharacterSelectClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UVoipPartySettingWidget::OnVoipGlobalSet(bool InbVoipGlobal){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.VoipPartySettingWidget.OnVoipGlobalSet");

	FOnVoipGlobalSet parms{};	
	parms.InbVoipGlobal = InbVoipGlobal;

	ProcessEvent(fn, &parms);
}

void UVoipPartySettingWidget::OnbVoipGlobal(bool NewValue, bool OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.VoipPartySettingWidget.OnbVoipGlobal");

	FOnbVoipGlobal parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCCommunityBlockEntryWidget::ExecuteContextMenu(uint8_t Option){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommunityBlockEntryWidget.ExecuteContextMenu");

	FExecuteContextMenu parms{};	
	parms.Option = Option;

	ProcessEvent(fn, &parms);
}

void UDCCommunityBlockEntryWidget::CleanupContextMenuWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommunityBlockEntryWidget.CleanupContextMenuWidget");

	FCleanupContextMenuWidget parms{};	

	ProcessEvent(fn, &parms);
}

void UDCLocalLoginWidget::OnLoginButtonClicked(struct FString IpAddress, struct FString Nickname){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCLocalLoginWidget.OnLoginButtonClicked");

	FOnLoginButtonClicked parms{};	
	parms.IpAddress = IpAddress;
	parms.Nickname = Nickname;

	ProcessEvent(fn, &parms);
}

void UDCCommunityBlockWidget::OnEntryHovered(struct UObject* WidgetData, bool bIsHovered){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommunityBlockWidget.OnEntryHovered");

	FOnEntryHovered parms{};	
	parms.WidgetData = WidgetData;
	parms.bIsHovered = bIsHovered;

	ProcessEvent(fn, &parms);
}

void UDCCommunityBlockWidget::OnButtonPageRight(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommunityBlockWidget.OnButtonPageRight");

	FOnButtonPageRight parms{};	

	ProcessEvent(fn, &parms);
}

void UDCCommunityBlockWidget::OnButtonPageLeft(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommunityBlockWidget.OnButtonPageLeft");

	FOnButtonPageLeft parms{};	

	ProcessEvent(fn, &parms);
}

void UDCCommunityBlockWidget::OnButtonBack(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommunityBlockWidget.OnButtonBack");

	FOnButtonBack parms{};	

	ProcessEvent(fn, &parms);
}

void UDCCommunityBlockWidget::OnBlockUpdated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommunityBlockWidget.OnBlockUpdated");

	FOnBlockUpdated parms{};	

	ProcessEvent(fn, &parms);
}

int32_t UDCCommunityBlockWidget::NumItemsPerPage(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommunityBlockWidget.NumItemsPerPage");

	FNumItemsPerPage parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UDCCommunityBlockWidget::GetMaxPage(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommunityBlockWidget.GetMaxPage");

	FGetMaxPage parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCCommunityBlockWidget::FindId(struct FText& FindText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCommunityBlockWidget.FindId");

	FFindId parms{};	
	parms.FindText = FindText;

	ProcessEvent(fn, &parms);
}

void UDCContextMenuEntryWidget::Execute(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCContextMenuEntryWidget.Execute");

	FExecute parms{};	

	ProcessEvent(fn, &parms);
}

void UDCEmoteListEntryWidget::OnRightClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEmoteListEntryWidget.OnRightClicked");

	FOnRightClicked parms{};	

	ProcessEvent(fn, &parms);
}

uint8_t UDCEmoteListEntryWidget::GetSelectedVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEmoteListEntryWidget.GetSelectedVisibility");

	FGetSelectedVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCRecruitComponent::OnItemMoveEvent(uint8_t SourceInventoryId, struct FDCItemInfo& SourceItemInfo, uint8_t TargetInventoryId, int32_t TargetIndex, int32_t TargetStack){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCRecruitComponent.OnItemMoveEvent");

	FOnItemMoveEvent parms{};	
	parms.SourceInventoryId = SourceInventoryId;
	parms.SourceItemInfo = SourceItemInfo;
	parms.TargetInventoryId = TargetInventoryId;
	parms.TargetIndex = TargetIndex;
	parms.TargetStack = TargetStack;

	ProcessEvent(fn, &parms);
}

void UDCRecruitComponent::OnItemActionEvent(uint8_t SourceInventoryId, struct FDCItemInfo& SourceItemInfo, uint8_t ActionType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCRecruitComponent.OnItemActionEvent");

	FOnItemActionEvent parms{};	
	parms.SourceInventoryId = SourceInventoryId;
	parms.SourceItemInfo = SourceItemInfo;
	parms.ActionType = ActionType;

	ProcessEvent(fn, &parms);
}

void UDCCustomizeCharacterSkinListWidget::OnSetCharacterSkinInfoArray(struct TArray<struct FDCCharacterSkinInfo> CharacterSkinInfoArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCustomizeCharacterSkinListWidget.OnSetCharacterSkinInfoArray");

	FOnSetCharacterSkinInfoArray parms{};	
	parms.CharacterSkinInfoArray = CharacterSkinInfoArray;

	ProcessEvent(fn, &parms);
}

void UDCCustomizeEmoteRadialSlotWidget::SetEmoteIconImageAngle(float NewAngle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCustomizeEmoteRadialSlotWidget.SetEmoteIconImageAngle");

	FSetEmoteIconImageAngle parms{};	
	parms.NewAngle = NewAngle;

	ProcessEvent(fn, &parms);
}

struct UUserWidget* UDCCustomizeEmoteRadialSlotWidget::GetTooltipWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCustomizeEmoteRadialSlotWidget.GetTooltipWidget");

	FGetTooltipWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UDCCustomizeEmoteRadialSlotWidget::GetPreviewEmoteVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCustomizeEmoteRadialSlotWidget.GetPreviewEmoteVisibility");

	FGetPreviewEmoteVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UDCCustomizeEmoteRadialSlotWidget::GetHighlightVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCustomizeEmoteRadialSlotWidget.GetHighlightVisibility");

	FGetHighlightVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UDCCustomizeEmoteRadialSlotWidget::GetEmoteIconVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCustomizeEmoteRadialSlotWidget.GetEmoteIconVisibility");

	FGetEmoteIconVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UDCCustomizeEmoteRadialSlotWidget::GetArrowVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCustomizeEmoteRadialSlotWidget.GetArrowVisibility");

	FGetArrowVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCCustomizeItemSkinListWidget::OnSetItemSkinInfoArray(struct TArray<struct FDCItemSkinInfo> ItemSkinInfoArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCustomizeItemSkinListWidget.OnSetItemSkinInfoArray");

	FOnSetItemSkinInfoArray parms{};	
	parms.ItemSkinInfoArray = ItemSkinInfoArray;

	ProcessEvent(fn, &parms);
}

void UDCCustomizeItemSkinListWidget::OnChangedVisibility(uint8_t InNewVisibility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCustomizeItemSkinListWidget.OnChangedVisibility");

	FOnChangedVisibility parms{};	
	parms.InNewVisibility = InNewVisibility;

	ProcessEvent(fn, &parms);
}

void UDCCustomizeLobbyEmoteRadialSlotWidget::SetLobbyEmoteIconImageAngle(float NewAngle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCustomizeLobbyEmoteRadialSlotWidget.SetLobbyEmoteIconImageAngle");

	FSetLobbyEmoteIconImageAngle parms{};	
	parms.NewAngle = NewAngle;

	ProcessEvent(fn, &parms);
}

struct UUserWidget* UDCCustomizeLobbyEmoteRadialSlotWidget::GetTooltipWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCustomizeLobbyEmoteRadialSlotWidget.GetTooltipWidget");

	FGetTooltipWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UDCCustomizeLobbyEmoteRadialSlotWidget::GetPreviewLobbyEmoteVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCustomizeLobbyEmoteRadialSlotWidget.GetPreviewLobbyEmoteVisibility");

	FGetPreviewLobbyEmoteVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UDCCustomizeLobbyEmoteRadialSlotWidget::GetLobbyEmoteIconVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCustomizeLobbyEmoteRadialSlotWidget.GetLobbyEmoteIconVisibility");

	FGetLobbyEmoteIconVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UDCCustomizeLobbyEmoteRadialSlotWidget::GetHighlightVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCustomizeLobbyEmoteRadialSlotWidget.GetHighlightVisibility");

	FGetHighlightVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UDCCustomizeLobbyEmoteRadialSlotWidget::GetArrowVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCCustomizeLobbyEmoteRadialSlotWidget.GetArrowVisibility");

	FGetArrowVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCMerchantDealTableSellWidget::OnInventoryUpdated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMerchantDealTableSellWidget.OnInventoryUpdated");

	FOnInventoryUpdated parms{};	

	ProcessEvent(fn, &parms);
}

void UDCMerchantDealTableSellWidget::OnButtonDeal(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMerchantDealTableSellWidget.OnButtonDeal");

	FOnButtonDeal parms{};	

	ProcessEvent(fn, &parms);
}

bool UDCMerchantDealTableSellWidget::IsSellEnabled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMerchantDealTableSellWidget.IsSellEnabled");

	FIsSellEnabled parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UDCMerchantDealTableSellWidget::GetPrice(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMerchantDealTableSellWidget.GetPrice");

	FGetPrice parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCShopConfirmPurchasePopupBase::OnConfirmClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCShopConfirmPurchasePopupBase.OnConfirmClicked");

	FOnConfirmClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UDCShopConfirmPurchasePopupBase::OnCancelClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCShopConfirmPurchasePopupBase.OnCancelClicked");

	FOnCancelClicked parms{};	

	ProcessEvent(fn, &parms);
}

uint8_t UDCShopConfirmPurchasePopupBase::GetRedstoneShardVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCShopConfirmPurchasePopupBase.GetRedstoneShardVisibility");

	FGetRedstoneShardVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UDCShopConfirmPurchasePopupBase::GetBluestoneShardVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCShopConfirmPurchasePopupBase.GetBluestoneShardVisibility");

	FGetBluestoneShardVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCMerchantComponent::OnMerchantSellFinished(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMerchantComponent.OnMerchantSellFinished");

	FOnMerchantSellFinished parms{};	

	ProcessEvent(fn, &parms);
}

void UDCMerchantComponent::OnMerchantIdChanged(struct FDCMerchantId InMerchantId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMerchantComponent.OnMerchantIdChanged");

	FOnMerchantIdChanged parms{};	
	parms.InMerchantId = InMerchantId;

	ProcessEvent(fn, &parms);
}

void UDCMerchantComponent::OnMerchantCraftFinished(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMerchantComponent.OnMerchantCraftFinished");

	FOnMerchantCraftFinished parms{};	

	ProcessEvent(fn, &parms);
}

void UDCMerchantComponent::OnMerchantBuyFinished(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMerchantComponent.OnMerchantBuyFinished");

	FOnMerchantBuyFinished parms{};	

	ProcessEvent(fn, &parms);
}

void UDCMerchantComponent::OnItemMoveEvent(uint8_t SourceInventoryId, struct FDCItemInfo& SourceItemInfo, uint8_t TargetInventoryId, int32_t TargetIndex, int32_t TargetStack){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMerchantComponent.OnItemMoveEvent");

	FOnItemMoveEvent parms{};	
	parms.SourceInventoryId = SourceInventoryId;
	parms.SourceItemInfo = SourceItemInfo;
	parms.TargetInventoryId = TargetInventoryId;
	parms.TargetIndex = TargetIndex;
	parms.TargetStack = TargetStack;

	ProcessEvent(fn, &parms);
}

void UDCMerchantComponent::OnItemActionEvent(uint8_t SourceInventoryId, struct FDCItemInfo& SourceItemInfo, uint8_t ActionType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMerchantComponent.OnItemActionEvent");

	FOnItemActionEvent parms{};	
	parms.SourceInventoryId = SourceInventoryId;
	parms.SourceItemInfo = SourceItemInfo;
	parms.ActionType = ActionType;

	ProcessEvent(fn, &parms);
}

void UDCMerchantComponent::OnInventoryComponentChanged(struct UDCInventoryComponent* Comp){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMerchantComponent.OnInventoryComponentChanged");

	FOnInventoryComponentChanged parms{};	
	parms.Comp = Comp;

	ProcessEvent(fn, &parms);
}

void ADCDungeonGameState::OnRep_NumPlayers(int32_t OldNumPlayers){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCDungeonGameState.OnRep_NumPlayers");

	FOnRep_NumPlayers parms{};	
	parms.OldNumPlayers = OldNumPlayers;

	ProcessEvent(fn, &parms);
}

void UOnlineSystemSteam::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.OnlineSystemSteam.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UOnlineSystemSteam::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.OnlineSystemSteam.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UOnlineSystemSteam::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.OnlineSystemSteam.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UOnlineSystemSteam::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.OnlineSystemSteam.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

struct UUserWidget* UDCEmoteWidget::GetTooltipWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEmoteWidget.GetTooltipWidget");

	FGetTooltipWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCEnhancedInputLibrary::RemovePlayerMappableConfigByTagContainer(struct UObject* WorldContextObject, struct FGameplayTagContainer InputConfigTags){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEnhancedInputLibrary.RemovePlayerMappableConfigByTagContainer");

	FRemovePlayerMappableConfigByTagContainer parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.InputConfigTags = InputConfigTags;

	ProcessEvent(fn, &parms);
}

void UDCEnhancedInputLibrary::InjectInputVectorForAction(struct UObject* WorldContextObject, struct UInputAction* Action, struct FVector Value, struct TArray<struct UInputModifier*>& Modifiers, struct TArray<struct UInputTrigger*>& Triggers){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEnhancedInputLibrary.InjectInputVectorForAction");

	FInjectInputVectorForAction parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Action = Action;
	parms.Value = Value;
	parms.Modifiers = Modifiers;
	parms.Triggers = Triggers;

	ProcessEvent(fn, &parms);
}

void UDCEnhancedInputLibrary::InjectInputForAction(struct UObject* WorldContextObject, struct UInputAction* Action, struct FInputActionValue RawValue, struct TArray<struct UInputModifier*>& Modifiers, struct TArray<struct UInputTrigger*>& Triggers){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEnhancedInputLibrary.InjectInputForAction");

	FInjectInputForAction parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Action = Action;
	parms.RawValue = RawValue;
	parms.Modifiers = Modifiers;
	parms.Triggers = Triggers;

	ProcessEvent(fn, &parms);
}

struct TArray<struct FKey> UDCEnhancedInputLibrary::GetKeysMappedToAction(struct UObject* WorldContextObject, struct UInputAction* Action){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEnhancedInputLibrary.GetKeysMappedToAction");

	FGetKeysMappedToAction parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Action = Action;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UDCInputConfig* UDCEnhancedInputLibrary::GetInputConfigByTag(struct UObject* WorldContextObject, struct FGameplayTag InputConfigTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEnhancedInputLibrary.GetInputConfigByTag");

	FGetInputConfigByTag parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.InputConfigTag = InputConfigTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UInputAction* UDCEnhancedInputLibrary::GetInputAction(struct UObject* WorldContextObject, struct FGameplayTag InputConfigTag, struct FGameplayTag InputTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEnhancedInputLibrary.GetInputAction");

	FGetInputAction parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.InputConfigTag = InputConfigTag;
	parms.InputTag = InputTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FKey UDCEnhancedInputLibrary::GetFirstMappedKeyFromRegisteredInputToAction(struct UObject* WorldContextObject, struct UInputAction* Action){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEnhancedInputLibrary.GetFirstMappedKeyFromRegisteredInputToAction");

	FGetFirstMappedKeyFromRegisteredInputToAction parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Action = Action;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UEnhancedPlayerInput* UDCEnhancedInputLibrary::GetEnhancedPlayerInput(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEnhancedInputLibrary.GetEnhancedPlayerInput");

	FGetEnhancedPlayerInput parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UDCEnhancedInputLocalPlayerSubsystem* UDCEnhancedInputLibrary::GetDCEnhancedInputLocalPlayerSubSystem(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEnhancedInputLibrary.GetDCEnhancedInputLocalPlayerSubSystem");

	FGetDCEnhancedInputLocalPlayerSubSystem parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FInputActionValue UDCEnhancedInputLibrary::GetActionValueWithController(struct UObject* WorldContextObject, struct UInputAction* Action){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEnhancedInputLibrary.GetActionValueWithController");

	FGetActionValueWithController parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Action = Action;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FInputActionValue UDCEnhancedInputLibrary::GetActionValueByTags(struct UObject* WorldContextObject, struct FGameplayTag InputConfigTag, struct FGameplayTag InputTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEnhancedInputLibrary.GetActionValueByTags");

	FGetActionValueByTags parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.InputConfigTag = InputConfigTag;
	parms.InputTag = InputTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCEnhancedInputLibrary::GetActionBoolWithController(struct UObject* WorldContextObject, struct UInputAction* Action){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEnhancedInputLibrary.GetActionBoolWithController");

	FGetActionBoolWithController parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Action = Action;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCEnhancedInputLibrary::GetActionBoolByTags(struct UObject* WorldContextObject, struct FGameplayTag InputConfigTag, struct FGameplayTag InputTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEnhancedInputLibrary.GetActionBoolByTags");

	FGetActionBoolByTags parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.InputConfigTag = InputConfigTag;
	parms.InputTag = InputTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCEnhancedInputLibrary::AddPlayerMappableConfigByTagContainer(struct UObject* WorldContextObject, struct FGameplayTagContainer InputConfigTags){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEnhancedInputLibrary.AddPlayerMappableConfigByTagContainer");

	FAddPlayerMappableConfigByTagContainer parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.InputConfigTags = InputConfigTags;

	ProcessEvent(fn, &parms);
}

void UDCEnhancedInputLocalPlayerSubsystem::RemovePlayerMappableConfigByTag(struct FGameplayTag InputConfigTag, struct FModifyContextOptions& Options){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEnhancedInputLocalPlayerSubsystem.RemovePlayerMappableConfigByTag");

	FRemovePlayerMappableConfigByTag parms{};	
	parms.InputConfigTag = InputConfigTag;
	parms.Options = Options;

	ProcessEvent(fn, &parms);
}

struct UPlayerMappableInputConfig* UDCEnhancedInputLocalPlayerSubsystem::GetPlayerMappableInputConfig(struct FGameplayTag ConfigTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEnhancedInputLocalPlayerSubsystem.GetPlayerMappableInputConfig");

	FGetPlayerMappableInputConfig parms{};	
	parms.ConfigTag = ConfigTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UDCInputConfig* UDCEnhancedInputLocalPlayerSubsystem::GetInputConfig(struct FGameplayTag ConfigTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEnhancedInputLocalPlayerSubsystem.GetInputConfig");

	FGetInputConfig parms{};	
	parms.ConfigTag = ConfigTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCEnhancedInputLocalPlayerSubsystem::AddPlayerMappableConfigByTag(struct FGameplayTag InputConfigTag, struct FModifyContextOptions& Options){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEnhancedInputLocalPlayerSubsystem.AddPlayerMappableConfigByTag");

	FAddPlayerMappableConfigByTag parms{};	
	parms.InputConfigTag = InputConfigTag;
	parms.Options = Options;

	ProcessEvent(fn, &parms);
}

void UDCEquipmentComponent::SetInventory(struct UDCInventoryBase* InInventory){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEquipmentComponent.SetInventory");

	FSetInventory parms{};	
	parms.InInventory = InInventory;

	ProcessEvent(fn, &parms);
}

void UDCEquipmentComponent::OnItemsUpdated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCEquipmentComponent.OnItemsUpdated");

	FOnItemsUpdated parms{};	

	ProcessEvent(fn, &parms);
}

void UDCShopCurrencyTypeSelectPopupBase::OnCurrencySelected(uint8_t CurrencyType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCShopCurrencyTypeSelectPopupBase.OnCurrencySelected");

	FOnCurrencySelected parms{};	
	parms.CurrencyType = CurrencyType;

	ProcessEvent(fn, &parms);
}

void UDCShopCurrencyTypeSelectPopupBase::OnConfirmClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCShopCurrencyTypeSelectPopupBase.OnConfirmClicked");

	FOnConfirmClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UDCShopCurrencyTypeSelectPopupBase::OnCancelClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCShopCurrencyTypeSelectPopupBase.OnCancelClicked");

	FOnCancelClicked parms{};	

	ProcessEvent(fn, &parms);
}

bool UDCShopCurrencyTypeSelectPopupBase::IsRedstoneShardSelected(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCShopCurrencyTypeSelectPopupBase.IsRedstoneShardSelected");

	FIsRedstoneShardSelected parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCShopCurrencyTypeSelectPopupBase::IsBluestoneShardSelected(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCShopCurrencyTypeSelectPopupBase.IsBluestoneShardSelected");

	FIsBluestoneShardSelected parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UTimerWidgetBase::StartTimer(float InEndServerWorldTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TimerWidgetBase.StartTimer");

	FStartTimer parms{};	
	parms.InEndServerWorldTime = InEndServerWorldTime;

	ProcessEvent(fn, &parms);
}

void UTimerWidgetBase::OnProgress(float NewValue, float OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TimerWidgetBase.OnProgress");

	FOnProgress parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UTimerWidgetBase::OnLeftSecond(int32_t NewValue, int32_t OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TimerWidgetBase.OnLeftSecond");

	FOnLeftSecond parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UTimerWidgetBase::OnLeftMinute(int32_t NewValue, int32_t OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TimerWidgetBase.OnLeftMinute");

	FOnLeftMinute parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UTimerWidgetBase::OnLeftHour(int32_t NewValue, int32_t OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TimerWidgetBase.OnLeftHour");

	FOnLeftHour parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UTimerWidgetBase::OnFMsgAccountLinkAccountDataReplicationNotifyBlueprint(struct FMsgAccountLinkAccountDataReplicationNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TimerWidgetBase.OnFMsgAccountLinkAccountDataReplicationNotifyBlueprint");

	FOnFMsgAccountLinkAccountDataReplicationNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ADCGameModeAIControllerBase::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameModeAIControllerBase.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCGameModeAIControllerBase::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameModeAIControllerBase.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCGameModeAIControllerBase::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameModeAIControllerBase.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void ADCGameModeAIControllerBase::ReceivePreInitializeComponents(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameModeAIControllerBase.ReceivePreInitializeComponents");

	FReceivePreInitializeComponents parms{};	

	ProcessEvent(fn, &parms);
}

void ADCGameModeAIControllerBase::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameModeAIControllerBase.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UDCGameplayAbilityBase::RemoveMovementModifier(struct FGameplayTagContainer& ContainerTags){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayAbilityBase.RemoveMovementModifier");

	FRemoveMovementModifier parms{};	
	parms.ContainerTags = ContainerTags;

	ProcessEvent(fn, &parms);
}

void UDCGameplayAbilityBase::RemoveGameplayCueLocal(struct FGameplayTag GameplayCueTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayAbilityBase.RemoveGameplayCueLocal");

	FRemoveGameplayCueLocal parms{};	
	parms.GameplayCueTag = GameplayCueTag;

	ProcessEvent(fn, &parms);
}

void UDCGameplayAbilityBase::RemoveGameplayCue(struct FGameplayTag GameplayCueTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayAbilityBase.RemoveGameplayCue");

	FRemoveGameplayCue parms{};	
	parms.GameplayCueTag = GameplayCueTag;

	ProcessEvent(fn, &parms);
}

void UDCGameplayAbilityBase::RemoveAllAppliedMovementModifiers(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayAbilityBase.RemoveAllAppliedMovementModifiers");

	FRemoveAllAppliedMovementModifiers parms{};	

	ProcessEvent(fn, &parms);
}

void UDCGameplayAbilityBase::MakeEffectContainerSpecFromContainer(struct TArray<struct FDCGameplayEffectContainerSpec>& OutContainerSpecArray, struct FDCGameplayEffectContainer& Container, struct FGameplayEventData& EventData, int32_t OverrideGameplayLevel){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayAbilityBase.MakeEffectContainerSpecFromContainer");

	FMakeEffectContainerSpecFromContainer parms{};	
	parms.OutContainerSpecArray = OutContainerSpecArray;
	parms.Container = Container;
	parms.EventData = EventData;
	parms.OverrideGameplayLevel = OverrideGameplayLevel;

	ProcessEvent(fn, &parms);
}

void UDCGameplayAbilityBase::MakeEffectContainerSpec(struct TArray<struct FDCGameplayEffectContainerSpec>& OutContainerSpecArray, struct FGameplayTag ContainerTag, struct FGameplayEventData& EventData, int32_t OverrideGameplayLevel){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayAbilityBase.MakeEffectContainerSpec");

	FMakeEffectContainerSpec parms{};	
	parms.OutContainerSpecArray = OutContainerSpecArray;
	parms.ContainerTag = ContainerTag;
	parms.EventData = EventData;
	parms.OverrideGameplayLevel = OverrideGameplayLevel;

	ProcessEvent(fn, &parms);
}

void UDCGameplayAbilityBase::MakeEffectContainerPremadeSpec(struct AActor* InActor, struct FGameplayTag ContainerTag, struct FGameplayEventData& EventData, int32_t OverrideGameplayLevel){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayAbilityBase.MakeEffectContainerPremadeSpec");

	FMakeEffectContainerPremadeSpec parms{};	
	parms.InActor = InActor;
	parms.ContainerTag = ContainerTag;
	parms.EventData = EventData;
	parms.OverrideGameplayLevel = OverrideGameplayLevel;

	ProcessEvent(fn, &parms);
}

int32_t UDCGameplayAbilityBase::GetSetByCallerValueInEffectContainerArray(struct FGameplayTag ContainerTag, struct FGameplayTag SetByCallerDataTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayAbilityBase.GetSetByCallerValueInEffectContainerArray");

	FGetSetByCallerValueInEffectContainerArray parms{};	
	parms.ContainerTag = ContainerTag;
	parms.SetByCallerDataTag = SetByCallerDataTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayTag UDCGameplayAbilityBase::GetGameplayTriggerTag(int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayAbilityBase.GetGameplayTriggerTag");

	FGetGameplayTriggerTag parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCGameplayAbilityBase::ExecuteGameplayCueWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters Params){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayAbilityBase.ExecuteGameplayCueWithParams");

	FExecuteGameplayCueWithParams parms{};	
	parms.GameplayCueTag = GameplayCueTag;
	parms.Params = Params;

	ProcessEvent(fn, &parms);
}

void UDCGameplayAbilityBase::ExecuteGameplayCueLocalWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters Params){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayAbilityBase.ExecuteGameplayCueLocalWithParams");

	FExecuteGameplayCueLocalWithParams parms{};	
	parms.GameplayCueTag = GameplayCueTag;
	parms.Params = Params;

	ProcessEvent(fn, &parms);
}

void UDCGameplayAbilityBase::ExecuteGameplayCueLocal(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayAbilityBase.ExecuteGameplayCueLocal");

	FExecuteGameplayCueLocal parms{};	
	parms.GameplayCueTag = GameplayCueTag;
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);
}

void UDCGameplayAbilityBase::ExecuteGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayAbilityBase.ExecuteGameplayCue");

	FExecuteGameplayCue parms{};	
	parms.GameplayCueTag = GameplayCueTag;
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);
}

void UDCGameplayAbilityBase::CopyPremadeSpecArray(struct AActor* InActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayAbilityBase.CopyPremadeSpecArray");

	FCopyPremadeSpecArray parms{};	
	parms.InActor = InActor;

	ProcessEvent(fn, &parms);
}

struct TArray<struct FActiveGameplayEffectHandle> UDCGameplayAbilityBase::ApplyPremadeSpecArray(struct FGameplayTag ContainerTag, struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayAbilityBase.ApplyPremadeSpecArray");

	FApplyPremadeSpecArray parms{};	
	parms.ContainerTag = ContainerTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCGameplayAbilityBase::ApplyMovementModifier(struct FGameplayTagContainer& ContainerTags){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayAbilityBase.ApplyMovementModifier");

	FApplyMovementModifier parms{};	
	parms.ContainerTags = ContainerTags;

	ProcessEvent(fn, &parms);
}

struct TArray<struct FActiveGameplayEffectHandle> UDCGameplayAbilityBase::ApplyEffectContainerSpecArray(struct TArray<struct FDCGameplayEffectContainerSpec>& OutContainerSpecArray, struct FGameplayTag ContainerTag, struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayAbilityBase.ApplyEffectContainerSpecArray");

	FApplyEffectContainerSpecArray parms{};	
	parms.OutContainerSpecArray = OutContainerSpecArray;
	parms.ContainerTag = ContainerTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FActiveGameplayEffectHandle> UDCGameplayAbilityBase::ApplyEffectContainerSpec(struct FDCGameplayEffectContainerSpec& ContainerSpec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayAbilityBase.ApplyEffectContainerSpec");

	FApplyEffectContainerSpec parms{};	
	parms.ContainerSpec = ContainerSpec;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FActiveGameplayEffectHandle> UDCGameplayAbilityBase::ApplyEffectContainer(struct FGameplayTag ContainerTag, struct FGameplayEventData& EventData, int32_t OverrideGameplayLevel, int32_t InCountToApply){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayAbilityBase.ApplyEffectContainer");

	FApplyEffectContainer parms{};	
	parms.ContainerTag = ContainerTag;
	parms.EventData = EventData;
	parms.OverrideGameplayLevel = OverrideGameplayLevel;
	parms.InCountToApply = InCountToApply;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCGameplayAbilityBase::AddGameplayCueWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters Params){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayAbilityBase.AddGameplayCueWithParams");

	FAddGameplayCueWithParams parms{};	
	parms.GameplayCueTag = GameplayCueTag;
	parms.Params = Params;

	ProcessEvent(fn, &parms);
}

void UDCGameplayAbilityBase::AddGameplayCueLocalWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters Params){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayAbilityBase.AddGameplayCueLocalWithParams");

	FAddGameplayCueLocalWithParams parms{};	
	parms.GameplayCueTag = GameplayCueTag;
	parms.Params = Params;

	ProcessEvent(fn, &parms);
}

void UDCGameplayAbilityBase::AddGameplayCueLocal(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayAbilityBase.AddGameplayCueLocal");

	FAddGameplayCueLocal parms{};	
	parms.GameplayCueTag = GameplayCueTag;
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);
}

void UDCGameplayAbilityBase::AddGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayAbilityBase.AddGameplayCue");

	FAddGameplayCue parms{};	
	parms.GameplayCueTag = GameplayCueTag;
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);
}

void ADCGameplayCueNotify_Actor::SetAkComponentRTPCValue(struct UAkComponent* AkComponent, struct UAkRtpc* RtpcValue, float InTickValue, float InTotalValue, float InMaxRTPCValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayCueNotify_Actor.SetAkComponentRTPCValue");

	FSetAkComponentRTPCValue parms{};	
	parms.AkComponent = AkComponent;
	parms.RtpcValue = RtpcValue;
	parms.InTickValue = InTickValue;
	parms.InTotalValue = InTotalValue;
	parms.InMaxRTPCValue = InMaxRTPCValue;

	ProcessEvent(fn, &parms);
}

void ADCGameplayCueNotify_Actor::ClearAkComponentRTPCValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayCueNotify_Actor.ClearAkComponentRTPCValue");

	FClearAkComponentRTPCValue parms{};	

	ProcessEvent(fn, &parms);
}

void ADCGameplayTagCollider::OnRep_TargetAccountId(struct FString InOldTargetAccountId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayTagCollider.OnRep_TargetAccountId");

	FOnRep_TargetAccountId parms{};	
	parms.InOldTargetAccountId = InOldTargetAccountId;

	ProcessEvent(fn, &parms);
}

void ADCGameplayTagCollider::OnOverlapping(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayTagCollider.OnOverlapping");

	FOnOverlapping parms{};	

	ProcessEvent(fn, &parms);
}

void ADCGameplayTagCollider::OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayTagCollider.OnOverlapEnd");

	FOnOverlapEnd parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;

	ProcessEvent(fn, &parms);
}

void ADCGameplayTagCollider::OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameplayTagCollider.OnOverlapBegin");

	FOnOverlapBegin parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;
	parms.bFromSweep = bFromSweep;
	parms.SweepResult = SweepResult;

	ProcessEvent(fn, &parms);
}

void ADCGameSession::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameSession.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCGameSession::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameSession.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCGameSession::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameSession.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void ADCGameSession::CharacterResurrection(struct FString AccountId, ADCCharacterBase* DCCharacterClass, struct TArray<struct FDCGameplayEffectData> InInitGameplayEffectDataArray, bool bIsRemoveAllItem, struct ACharacter* ResurrectionCharacter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameSession.CharacterResurrection");

	FCharacterResurrection parms{};	
	parms.AccountId = AccountId;
	parms.DCCharacterClass = DCCharacterClass;
	parms.InInitGameplayEffectDataArray = InInitGameplayEffectDataArray;
	parms.bIsRemoveAllItem = bIsRemoveAllItem;
	parms.ResurrectionCharacter = ResurrectionCharacter;

	ProcessEvent(fn, &parms);
}

void ADCGameSession::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameSession.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UDCGameSpawnableComponent::OnRep_bCastShadows(bool bOldCastShadows){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameSpawnableComponent.OnRep_bCastShadows");

	FOnRep_bCastShadows parms{};	
	parms.bOldCastShadows = bOldCastShadows;

	ProcessEvent(fn, &parms);
}

void ADCGameSpawner::UpdateGameState(struct FGameStateData& InGameStateData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameSpawner.UpdateGameState");

	FUpdateGameState parms{};	
	parms.InGameStateData = InGameStateData;

	ProcessEvent(fn, &parms);
}

struct APropsActorBase* ADCGameSpawner::SpawnProps(struct FPrimaryAssetId& InPropsId, bool InbPreview){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameSpawner.SpawnProps");

	FSpawnProps parms{};	
	parms.InPropsId = InPropsId;
	parms.InbPreview = InbPreview;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct ADCMonsterBase* ADCGameSpawner::SpawnMonster(struct FPrimaryAssetId& InMonsterId, bool InbPreview){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameSpawner.SpawnMonster");

	FSpawnMonster parms{};	
	parms.InMonsterId = InMonsterId;
	parms.InbPreview = InbPreview;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct AItemHolderActorBase* ADCGameSpawner::SpawnItemHolder(struct FPrimaryAssetId& InLootDropId, struct FPrimaryAssetId& InLootDropRateId, bool InbPreview){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameSpawner.SpawnItemHolder");

	FSpawnItemHolder parms{};	
	parms.InLootDropId = InLootDropId;
	parms.InLootDropRateId = InLootDropRateId;
	parms.InbPreview = InbPreview;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ADCGameSpawner::SetNextPreview(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameSpawner.SetNextPreview");

	FSetNextPreview parms{};	

	ProcessEvent(fn, &parms);
}

void ADCGameSpawner::OnSetMonsterPeaceAction(struct ADCMonsterBase* Monster){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameSpawner.OnSetMonsterPeaceAction");

	FOnSetMonsterPeaceAction parms{};	
	parms.Monster = Monster;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::TravelFloorMatchmaking_Client(struct FDCGameLiftSessionId SessionId, struct FString Address, struct FString ServiceUrl){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.TravelFloorMatchmaking_Client");

	FTravelFloorMatchmaking_Client parms{};	
	parms.SessionId = SessionId;
	parms.Address = Address;
	parms.ServiceUrl = ServiceUrl;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::StatServer(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.StatServer");

	FStatServer parms{};	

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::StartToWearItem_Client(struct FItemData InWearingItemData, struct AActor* InWearingActor, float InDuration, struct FText InDescription){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.StartToWearItem_Client");

	FStartToWearItem_Client parms{};	
	parms.InWearingItemData = InWearingItemData;
	parms.InWearingActor = InWearingActor;
	parms.InDuration = InDuration;
	parms.InDescription = InDescription;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::SpawnResurrectionCharacterForDebug_Server(struct FDCAccountId InAccountId, bool bRecoverItem, int32_t LifeSpan){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.SpawnResurrectionCharacterForDebug_Server");

	FSpawnResurrectionCharacterForDebug_Server parms{};	
	parms.InAccountId = InAccountId;
	parms.bRecoverItem = bRecoverItem;
	parms.LifeSpan = LifeSpan;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::ShowSpectatingPopup(struct FDCPlayerInfo& InPlayerInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.ShowSpectatingPopup");

	FShowSpectatingPopup parms{};	
	parms.InPlayerInfo = InPlayerInfo;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::SetClientReady_Server(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.SetClientReady_Server");

	FSetClientReady_Server parms{};	

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::ServerDebugSpawnItem(struct FString InKey, struct AActor* SpawnActor, struct FPrimaryAssetId SpawnItemAssetId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.ServerDebugSpawnItem");

	FServerDebugSpawnItem parms{};	
	parms.InKey = InKey;
	parms.SpawnActor = SpawnActor;
	parms.SpawnItemAssetId = SpawnItemAssetId;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::ServerDebugInjectItemToTarget(struct TArray<struct FItemData> InItemDataArray, uint8_t TargetInventoryType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.ServerDebugInjectItemToTarget");

	FServerDebugInjectItemToTarget parms{};	
	parms.InItemDataArray = InItemDataArray;
	parms.TargetInventoryType = TargetInventoryType;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::ServerDebugGiveGameplayEffectToTarget(struct FString InKey, struct AActor* TargetActor, struct FPrimaryAssetId GameplayEffectAssetId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.ServerDebugGiveGameplayEffectToTarget");

	FServerDebugGiveGameplayEffectToTarget parms{};	
	parms.InKey = InKey;
	parms.TargetActor = TargetActor;
	parms.GameplayEffectAssetId = GameplayEffectAssetId;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::ResumeFloorRuleForDebug_Server(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.ResumeFloorRuleForDebug_Server");

	FResumeFloorRuleForDebug_Server parms{};	

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::RequestPlayerCharacterLocation_Server(struct FDCAccountId InAccountId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.RequestPlayerCharacterLocation_Server");

	FRequestPlayerCharacterLocation_Server parms{};	
	parms.InAccountId = InAccountId;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::ReportPlayer_Server(struct FDCReportPlayerInfo InReportPlayerInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.ReportPlayer_Server");

	FReportPlayer_Server parms{};	
	parms.InReportPlayerInfo = InReportPlayerInfo;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::PauseFloorRuleForDebug_Server(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.PauseFloorRuleForDebug_Server");

	FPauseFloorRuleForDebug_Server parms{};	

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::OnUserExited_Client(uint8_t ExitType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.OnUserExited_Client");

	FOnUserExited_Client parms{};	
	parms.ExitType = ExitType;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::OnUpdateReportedPlayerInfoArray_Client(struct TArray<struct FDCReportedInfo> InReportedInfoArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.OnUpdateReportedPlayerInfoArray_Client");

	FOnUpdateReportedPlayerInfoArray_Client parms{};	
	parms.InReportedInfoArray = InReportedInfoArray;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::OnServerCall(struct FCallData CallData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.OnServerCall");

	FOnServerCall parms{};	
	parms.CallData = CallData;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::OnRep_AccountId(struct FString OldId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.OnRep_AccountId");

	FOnRep_AccountId parms{};	
	parms.OldId = OldId;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::OnPortalScrollOverlapped(struct AFloorPortalScrollBase* Portal, struct ADCPlayerCharacterBase* InCharacter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.OnPortalScrollOverlapped");

	FOnPortalScrollOverlapped parms{};	
	parms.Portal = Portal;
	parms.InCharacter = InCharacter;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::OnLobbyClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.OnLobbyClicked");

	FOnLobbyClicked parms{};	

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::OnGameStateNotify(struct FGameStateData& InGameStateData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.OnGameStateNotify");

	FOnGameStateNotify parms{};	
	parms.InGameStateData = InGameStateData;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::OnFMsgGameKillLogNotifyClient(struct FGameKillLogData InGameKillLogData, uint8_t KillReason){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.OnFMsgGameKillLogNotifyClient");

	FOnFMsgGameKillLogNotifyClient parms{};	
	parms.InGameKillLogData = InGameKillLogData;
	parms.KillReason = KillReason;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::OnFMsgGameFloorLogNotifyClient(struct FGameFloorLogData InGameFloorLogData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.OnFMsgGameFloorLogNotifyClient");

	FOnFMsgGameFloorLogNotifyClient parms{};	
	parms.InGameFloorLogData = InGameFloorLogData;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::OnFMsgGameAnnounceNotifyClient(struct FGameAnnounceData InGameAnnounceData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.OnFMsgGameAnnounceNotifyClient");

	FOnFMsgGameAnnounceNotifyClient parms{};	
	parms.InGameAnnounceData = InGameAnnounceData;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::OnExitConfirmed(uint8_t PopupResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.OnExitConfirmed");

	FOnExitConfirmed parms{};	
	parms.PopupResult = PopupResult;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::OnExitClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.OnExitClicked");

	FOnExitClicked parms{};	

	ProcessEvent(fn, &parms);
}

bool ADCPlayerController::OnDungeonEscapeOverlapped(struct ADCPlayerCharacterBase* InCharacter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.OnDungeonEscapeOverlapped");

	FOnDungeonEscapeOverlapped parms{};	
	parms.InCharacter = InCharacter;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool ADCPlayerController::OnDungeonDownOverlapped(struct ADCPlayerCharacterBase* InCharacter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.OnDungeonDownOverlapped");

	FOnDungeonDownOverlapped parms{};	
	parms.InCharacter = InCharacter;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ADCPlayerController::OnClientCall(struct FCallData CallData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.OnClientCall");

	FOnClientCall parms{};	
	parms.CallData = CallData;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::OnBackToLobbyConfirmed(uint8_t PopupResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.OnBackToLobbyConfirmed");

	FOnBackToLobbyConfirmed parms{};	
	parms.PopupResult = PopupResult;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::OnAnyPlayerEscaped(struct FDCPlayerInfo& NewPlayerInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.OnAnyPlayerEscaped");

	FOnAnyPlayerEscaped parms{};	
	parms.NewPlayerInfo = NewPlayerInfo;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::OnAnyPlayerDied(struct FDCPlayerInfo& NewPlayerInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.OnAnyPlayerDied");

	FOnAnyPlayerDied parms{};	
	parms.NewPlayerInfo = NewPlayerInfo;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::NotifySystemMessage_Client(struct FText SystemMessage, float Duration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.NotifySystemMessage_Client");

	FNotifySystemMessage_Client parms{};	
	parms.SystemMessage = SystemMessage;
	parms.Duration = Duration;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::NextFloorRuleForDebug_Server(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.NextFloorRuleForDebug_Server");

	FNextFloorRuleForDebug_Server parms{};	

	ProcessEvent(fn, &parms);
}

bool ADCPlayerController::IsTargetAccountSelf(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.IsTargetAccountSelf");

	FIsTargetAccountSelf parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ADCPlayerController::GmServer(struct FString InKey, struct FString InCmd){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.GmServer");

	FGmServer parms{};	
	parms.InKey = InKey;
	parms.InCmd = InCmd;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::Gm(struct FString InCmd){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.Gm");

	FGm parms{};	
	parms.InCmd = InCmd;

	ProcessEvent(fn, &parms);
}

struct AActor* ADCPlayerController::GetDebugFaceTargetActor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.GetDebugFaceTargetActor");

	FGetDebugFaceTargetActor parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FAccountSessionData ADCPlayerController::GetAccountSessionData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.GetAccountSessionData");

	FGetAccountSessionData parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ADCPlayerController::ExitUser_Server(uint8_t ExitType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.ExitUser_Server");

	FExitUser_Server parms{};	
	parms.ExitType = ExitType;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::ExitUser(uint8_t ExitType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.ExitUser");

	FExitUser parms{};	
	parms.ExitType = ExitType;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::EscapeForDebug_Server(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.EscapeForDebug_Server");

	FEscapeForDebug_Server parms{};	

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::ChangeParty_Server(struct FDCPartyId InPartyId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.ChangeParty_Server");

	FChangeParty_Server parms{};	
	parms.InPartyId = InPartyId;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::Announce_Client(struct FGameAnnounceData AnnounceData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.Announce_Client");

	FAnnounce_Client parms{};	
	parms.AnnounceData = AnnounceData;

	ProcessEvent(fn, &parms);
}

void ADCPlayerController::AckPlayerCharacterLocation_Client(struct FDCAccountId InAccountId, struct FVector InPlayerPawnLocation, struct FRotator InPlayerPawnRotation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerController.AckPlayerCharacterLocation_Client");

	FAckPlayerCharacterLocation_Client parms{};	
	parms.InAccountId = InAccountId;
	parms.InPlayerPawnLocation = InPlayerPawnLocation;
	parms.InPlayerPawnRotation = InPlayerPawnRotation;

	ProcessEvent(fn, &parms);
}

void ADCGameSpawnerGroup::OnRep_ClientDestroyActorNameArray(struct TArray<struct FString>& OldClientDestroyActorNameArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameSpawnerGroup.OnRep_ClientDestroyActorNameArray");

	FOnRep_ClientDestroyActorNameArray parms{};	
	parms.OldClientDestroyActorNameArray = OldClientDestroyActorNameArray;

	ProcessEvent(fn, &parms);
}

struct UPlayerMappableInputConfig* UDCGameUserSettings::GetInputConfigByName(struct FName ConfigName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGameUserSettings.GetInputConfigByName");

	FGetInputConfigByName parms{};	
	parms.ConfigName = ConfigName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMetaComponentBase::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MetaComponentBase.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UMetaComponentBase::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MetaComponentBase.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UMetaComponentBase::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MetaComponentBase.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UMetaComponentBase::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MetaComponentBase.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ADCGhostTrailActor::SetGhostMaterial(struct TArray<struct UMeshComponent*> Components){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGhostTrailActor.SetGhostMaterial");

	FSetGhostMaterial parms{};	
	parms.Components = Components;

	ProcessEvent(fn, &parms);
}

void ADCGhostTrailActor::HandleTimelineUpdate(float Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGhostTrailActor.HandleTimelineUpdate");

	FHandleTimelineUpdate parms{};	
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void ADCGhostTrailActor::HandleTimelineFinished(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGhostTrailActor.HandleTimelineFinished");

	FHandleTimelineFinished parms{};	

	ProcessEvent(fn, &parms);
}

void ADCGhostTrailActor::BeginGhostTrailEffect(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGhostTrailActor.BeginGhostTrailEffect");

	FBeginGhostTrailEffect parms{};	

	ProcessEvent(fn, &parms);
}

void UDCGiftCodeEditableText::OnGiftCodeWipedEvent__DelegateSignature(int32_t& Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction DungeonCrawler.DCGiftCodeEditableText.OnGiftCodeWipedEvent__DelegateSignature");

	FOnGiftCodeWipedEvent__DelegateSignature parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);
}

void UDCGiftCodeEditableText::OnGiftCodeFilledEvent__DelegateSignature(struct FText& RemainText, int32_t& Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction DungeonCrawler.DCGiftCodeEditableText.OnGiftCodeFilledEvent__DelegateSignature");

	FOnGiftCodeFilledEvent__DelegateSignature parms{};	
	parms.RemainText = RemainText;
	parms.Index = Index;

	ProcessEvent(fn, &parms);
}

void UDCGiftCodeEditableText::OnCodeTextCommitted(struct FText& InCodeText, enum class ETextCommit CommitType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGiftCodeEditableText.OnCodeTextCommitted");

	FOnCodeTextCommitted parms{};	
	parms.InCodeText = InCodeText;
	parms.CommitType = CommitType;

	ProcessEvent(fn, &parms);
}

void UDCGiftCodeEditableText::OnCodeTextChanged(struct FText& InCodeText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGiftCodeEditableText.OnCodeTextChanged");

	FOnCodeTextChanged parms{};	
	parms.InCodeText = InCodeText;

	ProcessEvent(fn, &parms);
}

void UDCGiftCodePopupBase::OnAcceptButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGiftCodePopupBase.OnAcceptButtonClicked");

	FOnAcceptButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UDCGiftCodePopupBase::MoveToPrevCodeBlock(int32_t& InCodeBlockIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGiftCodePopupBase.MoveToPrevCodeBlock");

	FMoveToPrevCodeBlock parms{};	
	parms.InCodeBlockIndex = InCodeBlockIndex;

	ProcessEvent(fn, &parms);
}

void UDCGiftCodePopupBase::MoveToNextCodeBlock(struct FText& InRemainText, int32_t& InCodeBlockIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGiftCodePopupBase.MoveToNextCodeBlock");

	FMoveToNextCodeBlock parms{};	
	parms.InRemainText = InRemainText;
	parms.InCodeBlockIndex = InCodeBlockIndex;

	ProcessEvent(fn, &parms);
}

uint8_t UDCGiftCodePopupBase::GetWarningTextVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGiftCodePopupBase.GetWarningTextVisibility");

	FGetWarningTextVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCGiftCodePopupBase::Close(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGiftCodePopupBase.Close");

	FClose parms{};	

	ProcessEvent(fn, &parms);
}

struct UUserWidget* UDCGiftCodeRewardItemWidget::GetTooltipWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGiftCodeRewardItemWidget.GetTooltipWidget");

	FGetTooltipWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ADCPlayerInfoHolder::OnRep_PlayerInfo(struct FDCPlayerInfo& OldPlayerInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerInfoHolder.OnRep_PlayerInfo");

	FOnRep_PlayerInfo parms{};	
	parms.OldPlayerInfo = OldPlayerInfo;

	ProcessEvent(fn, &parms);
}

void UDCGiftCodeRewardPopupBase::OnConfirmButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCGiftCodeRewardPopupBase.OnConfirmButtonClicked");

	FOnConfirmButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

bool UDesignDataAssetItemRequirement::IsTargetFulfilledAllRequirements(struct FDesignDataItem DesignDataItem, struct AActor* TargetActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DesignDataAssetItemRequirement.IsTargetFulfilledAllRequirements");

	FIsTargetFulfilledAllRequirements parms{};	
	parms.DesignDataItem = DesignDataItem;
	parms.TargetActor = TargetActor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDesignDataAssetItemRequirement::IsFulfilledAllRequirements(struct FDesignDataItem& DesignDataItem, struct FPrimaryAssetId& PlayerCharacterId, struct UDCAttributeSet* AttributeSet, struct TArray<struct FPrimaryAssetId>& PerkIdArray, struct FGameplayTagContainer& GameplayTagContainer, struct AActor* TargetActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DesignDataAssetItemRequirement.IsFulfilledAllRequirements");

	FIsFulfilledAllRequirements parms{};	
	parms.DesignDataItem = DesignDataItem;
	parms.PlayerCharacterId = PlayerCharacterId;
	parms.AttributeSet = AttributeSet;
	parms.PerkIdArray = PerkIdArray;
	parms.GameplayTagContainer = GameplayTagContainer;
	parms.TargetActor = TargetActor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<uint8_t> UDesignDataAssetItemRequirement::GetUnmetItemRequirementsTarget(struct AActor* TargetActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DesignDataAssetItemRequirement.GetUnmetItemRequirementsTarget");

	FGetUnmetItemRequirementsTarget parms{};	
	parms.TargetActor = TargetActor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<uint8_t> UDesignDataAssetItemRequirement::GetUnmetItemRequirements(struct FPrimaryAssetId PlayerCharacterId, struct UDCAttributeSet* AttributeSet, struct TArray<struct FPrimaryAssetId> PerkIdArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DesignDataAssetItemRequirement.GetUnmetItemRequirements");

	FGetUnmetItemRequirements parms{};	
	parms.PlayerCharacterId = PlayerCharacterId;
	parms.AttributeSet = AttributeSet;
	parms.PerkIdArray = PerkIdArray;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FHitResult UDCHitBoxComponent::GetHitResultFromClosestLocationTraceOnMesh(struct FHitResult& InHitResult, struct AActor* Instigator){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCHitBoxComponent.GetHitResultFromClosestLocationTraceOnMesh");

	FGetHitResultFromClosestLocationTraceOnMesh parms{};	
	parms.InHitResult = InHitResult;
	parms.Instigator = Instigator;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UDCHitBoxComponent::GetHitDirection(struct FVector& AttackerLocation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCHitBoxComponent.GetHitDirection");

	FGetHitDirection parms{};	
	parms.AttackerLocation = AttackerLocation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector UDCHitBoxComponent::GetClosestLocationOnMesh(struct FHitResult& InHitResult, struct AActor* Instigator){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCHitBoxComponent.GetClosestLocationOnMesh");

	FGetClosestLocationOnMesh parms{};	
	parms.InHitResult = InHitResult;
	parms.Instigator = Instigator;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCInventoryContainerComponent::RemoveInventory_Server(uint8_t ID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInventoryContainerComponent.RemoveInventory_Server");

	FRemoveInventory_Server parms{};	
	parms.ID = ID;

	ProcessEvent(fn, &parms);
}

void UDCInventoryContainerComponent::OnRep_InventoryList(struct TArray<struct UDCInventoryBase*>& OldInventoryList){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInventoryContainerComponent.OnRep_InventoryList");

	FOnRep_InventoryList parms{};	
	parms.OldInventoryList = OldInventoryList;

	ProcessEvent(fn, &parms);
}

void UDCInventoryContainerComponent::OnInventoryRemoved(struct UDCInventoryBase* Inventory){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInventoryContainerComponent.OnInventoryRemoved");

	FOnInventoryRemoved parms{};	
	parms.Inventory = Inventory;

	ProcessEvent(fn, &parms);
}

void UDCInventoryContainerComponent::OnInventoryAdded(struct UDCInventoryBase* Inventory){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInventoryContainerComponent.OnInventoryAdded");

	FOnInventoryAdded parms{};	
	parms.Inventory = Inventory;

	ProcessEvent(fn, &parms);
}

void UDCInventoryContainerComponent::ClearInventoryMap_Server(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInventoryContainerComponent.ClearInventoryMap_Server");

	FClearInventoryMap_Server parms{};	

	ProcessEvent(fn, &parms);
}

void UDCInventoryContainerComponent::AddInventory_Server(struct UDCInventoryBase* Inventory){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInventoryContainerComponent.AddInventory_Server");

	FAddInventory_Server parms{};	
	parms.Inventory = Inventory;

	ProcessEvent(fn, &parms);
}

void UDCInventoryComponent::InitFromItemData_Server(struct TArray<struct FItemData> ItemDatas){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInventoryComponent.InitFromItemData_Server");

	FInitFromItemData_Server parms{};	
	parms.ItemDatas = ItemDatas;

	ProcessEvent(fn, &parms);
}

void UDCInventoryComponent::InitFromAccountData_Server(struct TArray<struct FAccountDataItem> ItemDatas){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInventoryComponent.InitFromAccountData_Server");

	FInitFromAccountData_Server parms{};	
	parms.ItemDatas = ItemDatas;

	ProcessEvent(fn, &parms);
}

void UDCInventoryComponent::ApplyInventoryBuilder_Server(struct FDCInventoryBuilder Builder){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInventoryComponent.ApplyInventoryBuilder_Server");

	FApplyInventoryBuilder_Server parms{};	
	parms.Builder = Builder;

	ProcessEvent(fn, &parms);
}

void UDCIngameInventoryPageWidget::OnTargetCharacterRegistered(struct ADCCharacterBase* InCharacter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCIngameInventoryPageWidget.OnTargetCharacterRegistered");

	FOnTargetCharacterRegistered parms{};	
	parms.InCharacter = InCharacter;

	ProcessEvent(fn, &parms);
}

void UDCIngameInventoryPageWidget::OnTargetAccountUpdated(struct FDCAccountId& New, struct FDCAccountId& Old){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCIngameInventoryPageWidget.OnTargetAccountUpdated");

	FOnTargetAccountUpdated parms{};	
	parms.New = New;
	parms.Old = Old;

	ProcessEvent(fn, &parms);
}

void UDCIngameInventoryPageWidget::OnLootTargetPropEvent(struct APropsActorBase* InProp){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCIngameInventoryPageWidget.OnLootTargetPropEvent");

	FOnLootTargetPropEvent parms{};	
	parms.InProp = InProp;

	ProcessEvent(fn, &parms);
}

void UDCIngameInventoryPageWidget::OnLootTargetPlayerEvent(struct ADCPlayerCharacterBase* InPlayer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCIngameInventoryPageWidget.OnLootTargetPlayerEvent");

	FOnLootTargetPlayerEvent parms{};	
	parms.InPlayer = InPlayer;

	ProcessEvent(fn, &parms);
}

void UDCIngameInventoryPageWidget::OnLootTargetMonsterEvent(struct ADCMonsterBase* InMonster){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCIngameInventoryPageWidget.OnLootTargetMonsterEvent");

	FOnLootTargetMonsterEvent parms{};	
	parms.InMonster = InMonster;

	ProcessEvent(fn, &parms);
}

void UGamePartyManagePartyMemberWidget::OnAccountDataReplication(struct FAccountDataReplication& NewValue, struct FAccountDataReplication& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GamePartyManagePartyMemberWidget.OnAccountDataReplication");

	FOnAccountDataReplication parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UDCInputNumberWidget::OnCancelled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInputNumberWidget.OnCancelled");

	FOnCancelled parms{};	

	ProcessEvent(fn, &parms);
}

void UDCInputNumberWidget::OnAccepted(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInputNumberWidget.OnAccepted");

	FOnAccepted parms{};	

	ProcessEvent(fn, &parms);
}

void UDCInputNumberWidget::ManualClick(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInputNumberWidget.ManualClick");

	FManualClick parms{};	

	ProcessEvent(fn, &parms);
}

bool UDCInputNumberWidget::IsValidText(struct FText Text){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInputNumberWidget.IsValidText");

	FIsValidText parms{};	
	parms.Text = Text;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCInteractTargetInterface::InteractTargetInfoRarity(struct FGameplayTag& RarityTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInteractTargetInterface.InteractTargetInfoRarity");

	FInteractTargetInfoRarity parms{};	
	parms.RarityTag = RarityTag;

	ProcessEvent(fn, &parms);
}

void UDCInteractTargetInterface::InteractTargetInfoName(struct FText& Name){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInteractTargetInterface.InteractTargetInfoName");

	FInteractTargetInfoName parms{};	
	parms.Name = Name;

	ProcessEvent(fn, &parms);
}

void UDCInventorySetWidget::SetIndex(int32_t InIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInventorySetWidget.SetIndex");

	FSetIndex parms{};	
	parms.InIndex = InIndex;

	ProcessEvent(fn, &parms);
}

void UDCInventoryTabButtonWidget::SetEquipment(bool bState){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCInventoryTabButtonWidget.SetEquipment");

	FSetEquipment parms{};	
	parms.bState = bState;

	ProcessEvent(fn, &parms);
}

void UTradeUserListEntryWidget::OnRightClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeUserListEntryWidget.OnRightClicked");

	FOnRightClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ItemActivateBase::ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ItemActivateBase.ReceivedEvent");

	FReceivedEvent parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ItemActivateBase::EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ItemActivateBase.EventReceived");

	FEventReceived parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ItemActivateBase::Deactivated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ItemActivateBase.Deactivated");

	FDeactivated parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ItemActivateBase::Activated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ItemActivateBase.Activated");

	FActivated parms{};	

	ProcessEvent(fn, &parms);
}

void UDCTradePhaseConfirmWidget::OnResponseLocalTraderConfirmRequestResult(bool bRequestSucceed){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCTradePhaseConfirmWidget.OnResponseLocalTraderConfirmRequestResult");

	FOnResponseLocalTraderConfirmRequestResult parms{};	
	parms.bRequestSucceed = bRequestSucceed;

	ProcessEvent(fn, &parms);
}

void UDCTradePhaseConfirmWidget::OnLocalTraderCheckBoxStateChanged(bool bIsChecked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCTradePhaseConfirmWidget.OnLocalTraderCheckBoxStateChanged");

	FOnLocalTraderCheckBoxStateChanged parms{};	
	parms.bIsChecked = bIsChecked;

	ProcessEvent(fn, &parms);
}

void UDCTradePhaseConfirmWidget::OnCancelTradeButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCTradePhaseConfirmWidget.OnCancelTradeButtonClicked");

	FOnCancelTradeButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UDCTradePhaseConfirmWidget::OnBeginTradeConfirm(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCTradePhaseConfirmWidget.OnBeginTradeConfirm");

	FOnBeginTradeConfirm parms{};	

	ProcessEvent(fn, &parms);
}

void UGameHeadupWidgetComponent::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameHeadupWidgetComponent.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UGameHeadupWidgetComponent::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameHeadupWidgetComponent.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UGameHeadupWidgetComponent::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameHeadupWidgetComponent.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UGameHeadupWidgetComponent::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameHeadupWidgetComponent.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UInventoryTabWidgetBase::OnClickedInventoryTab(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InventoryTabWidgetBase.OnClickedInventoryTab");

	FOnClickedInventoryTab parms{};	

	ProcessEvent(fn, &parms);
}

void UInventoryTabWidgetBase::OnChangeActiveState(bool bActive){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InventoryTabWidgetBase.OnChangeActiveState");

	FOnChangeActiveState parms{};	
	parms.bActive = bActive;

	ProcessEvent(fn, &parms);
}

void UGA_RangedAttackBase::UpdatedRangedWeaponCrosshairs(struct APlayerController* PlayerController){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_RangedAttackBase.UpdatedRangedWeaponCrosshairs");

	FUpdatedRangedWeaponCrosshairs parms{};	
	parms.PlayerController = PlayerController;

	ProcessEvent(fn, &parms);
}

void UGA_RangedAttackBase::ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_RangedAttackBase.ReceivedEvent");

	FReceivedEvent parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_RangedAttackBase::ProjectileFired(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_RangedAttackBase.ProjectileFired");

	FProjectileFired parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_RangedAttackBase::OnCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_RangedAttackBase.OnCompleted");

	FOnCompleted parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_RangedAttackBase::OnCancelled(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_RangedAttackBase.OnCancelled");

	FOnCancelled parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_RangedAttackBase::MultiFireProjectiles(struct FGameplayTag EventTag, struct FGameplayEventData EventData, float FirePower){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_RangedAttackBase.MultiFireProjectiles");

	FMultiFireProjectiles parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;
	parms.FirePower = FirePower;

	ProcessEvent(fn, &parms);
}

AProjectileActor* UGA_RangedAttackBase::GetProjectileActorClass(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_RangedAttackBase.GetProjectileActorClass");

	FGetProjectileActorClass parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGA_RangedAttackBase::FireSocketSightUnblocked(struct FGameplayAbilityTargetDataHandle& InData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_RangedAttackBase.FireSocketSightUnblocked");

	FFireSocketSightUnblocked parms{};	
	parms.InData = InData;

	ProcessEvent(fn, &parms);
}

void UGA_RangedAttackBase::FireSocketSightBlocked(struct FGameplayAbilityTargetDataHandle& InData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_RangedAttackBase.FireSocketSightBlocked");

	FFireSocketSightBlocked parms{};	
	parms.InData = InData;

	ProcessEvent(fn, &parms);
}

void UGA_RangedAttackBase::FireProjectile(struct FGameplayTag EventTag, struct FGameplayEventData EventData, float FirePower){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_RangedAttackBase.FireProjectile");

	FFireProjectile parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;
	parms.FirePower = FirePower;

	ProcessEvent(fn, &parms);
}

void UGA_RangedAttackBase::EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_RangedAttackBase.EventReceived");

	FEventReceived parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_RangedAttackBase::CreateProjectiles(struct FGameplayTag EventTag, struct FGameplayEventData EventData, float FirePower, struct FVector StartLocation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_RangedAttackBase.CreateProjectiles");

	FCreateProjectiles parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;
	parms.FirePower = FirePower;
	parms.StartLocation = StartLocation;

	ProcessEvent(fn, &parms);
}

void UGA_RangedAttackBase::CreatedProjectile(struct AProjectileActor* Projectile, struct FHitResult HitResult, struct FGameplayTag EventTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_RangedAttackBase.CreatedProjectile");

	FCreatedProjectile parms{};	
	parms.Projectile = Projectile;
	parms.HitResult = HitResult;
	parms.EventTag = EventTag;

	ProcessEvent(fn, &parms);
}

void UGA_RangedAttackBase::ActivateCrossHairPullAnimation(struct APlayerController* PlayerController){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_RangedAttackBase.ActivateCrossHairPullAnimation");

	FActivateCrossHairPullAnimation parms{};	
	parms.PlayerController = PlayerController;

	ProcessEvent(fn, &parms);
}

void UGA_RangedAttackBase::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_RangedAttackBase.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UDCTargetType::GetTargets(struct AActor* TargetingOwnerActor, struct AActor* TargetingAvatarActor, struct FGameplayEventData EventData, struct TArray<struct FHitResult>& OutHitResults, struct TArray<struct AActor*>& OutActors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCTargetType.GetTargets");

	FGetTargets parms{};	
	parms.TargetingOwnerActor = TargetingOwnerActor;
	parms.TargetingAvatarActor = TargetingAvatarActor;
	parms.EventData = EventData;
	parms.OutHitResults = OutHitResults;
	parms.OutActors = OutActors;

	ProcessEvent(fn, &parms);
}

void UDCItemSkinComponent::RemoveDataForDebug_Server(struct FPrimaryAssetId ID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCItemSkinComponent.RemoveDataForDebug_Server");

	FRemoveDataForDebug_Server parms{};	
	parms.ID = ID;

	ProcessEvent(fn, &parms);
}

void UDCItemSkinComponent::OnRep_Datas(struct TArray<struct UDCItemSkinDataAsset*>& OldDatas){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCItemSkinComponent.OnRep_Datas");

	FOnRep_Datas parms{};	
	parms.OldDatas = OldDatas;

	ProcessEvent(fn, &parms);
}

void UDCItemSkinComponent::AddDataForDebug_Server(struct UDCItemSkinDataAsset* InData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCItemSkinComponent.AddDataForDebug_Server");

	FAddDataForDebug_Server parms{};	
	parms.InData = InData;

	ProcessEvent(fn, &parms);
}

struct UUserWidget* UDCItemSkinWidget::GetTooltipWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCItemSkinWidget.GetTooltipWidget");

	FGetTooltipWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCItemSkinListEntryWidget::OnRightClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCItemSkinListEntryWidget.OnRightClicked");

	FOnRightClicked parms{};	

	ProcessEvent(fn, &parms);
}

bool UDCItemTooltipStatWidget::IsEmpty(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCItemTooltipStatWidget.IsEmpty");

	FIsEmpty parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCItemTooltipAbilityWidget::IsEmpty(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCItemTooltipAbilityWidget.IsEmpty");

	FIsEmpty parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDCItemTooltipRequirementWidget::IsEmpty(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCItemTooltipRequirementWidget.IsEmpty");

	FIsEmpty parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCPostProcessingComponent::StopCameraPostProcess(struct UMaterialInstanceDynamic* InMIDKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPostProcessingComponent.StopCameraPostProcess");

	FStopCameraPostProcess parms{};	
	parms.InMIDKey = InMIDKey;

	ProcessEvent(fn, &parms);
}

void UDCPostProcessingComponent::SetTimeCameraPostProcess(struct UMaterialInstanceDynamic* InMIDKey, float NewTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPostProcessingComponent.SetTimeCameraPostProcess");

	FSetTimeCameraPostProcess parms{};	
	parms.InMIDKey = InMIDKey;
	parms.NewTime = NewTime;

	ProcessEvent(fn, &parms);
}

void UDCPostProcessingComponent::SetPlayRateCameraPostProcess(struct UMaterialInstanceDynamic* InMIDKey, float NewRate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPostProcessingComponent.SetPlayRateCameraPostProcess");

	FSetPlayRateCameraPostProcess parms{};	
	parms.InMIDKey = InMIDKey;
	parms.NewRate = NewRate;

	ProcessEvent(fn, &parms);
}

void UDCPostProcessingComponent::SetPlayPositionCameraPostProcess(struct UMaterialInstanceDynamic* InMIDKey, float NewTime, bool bFireEvents, bool bFireUpdate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPostProcessingComponent.SetPlayPositionCameraPostProcess");

	FSetPlayPositionCameraPostProcess parms{};	
	parms.InMIDKey = InMIDKey;
	parms.NewTime = NewTime;
	parms.bFireEvents = bFireEvents;
	parms.bFireUpdate = bFireUpdate;

	ProcessEvent(fn, &parms);
}

bool UDCPostProcessingComponent::SetCameraPostProcess(struct UMaterialInstanceDynamic* InMIDKey, struct UCurveFloat* InCurve, struct TArray<struct FName> InParameterNames){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPostProcessingComponent.SetCameraPostProcess");

	FSetCameraPostProcess parms{};	
	parms.InMIDKey = InMIDKey;
	parms.InCurve = InCurve;
	parms.InParameterNames = InParameterNames;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCPostProcessingComponent::ReversePlayCameraPostProcess(struct UMaterialInstanceDynamic* InMIDKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPostProcessingComponent.ReversePlayCameraPostProcess");

	FReversePlayCameraPostProcess parms{};	
	parms.InMIDKey = InMIDKey;

	ProcessEvent(fn, &parms);
}

void UDCPostProcessingComponent::ReverseFromEndPlayCameraPostProcess(struct UMaterialInstanceDynamic* InMIDKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPostProcessingComponent.ReverseFromEndPlayCameraPostProcess");

	FReverseFromEndPlayCameraPostProcess parms{};	
	parms.InMIDKey = InMIDKey;

	ProcessEvent(fn, &parms);
}

int32_t UDCPostProcessingComponent::RemoveMeshHalfTranslucent(struct USkeletalMeshComponent* InMesh, bool IsResetMeshPriority){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPostProcessingComponent.RemoveMeshHalfTranslucent");

	FRemoveMeshHalfTranslucent parms{};	
	parms.InMesh = InMesh;
	parms.IsResetMeshPriority = IsResetMeshPriority;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCPostProcessingComponent::RemoveDeletedPostProcessData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPostProcessingComponent.RemoveDeletedPostProcessData");

	FRemoveDeletedPostProcessData parms{};	

	ProcessEvent(fn, &parms);
}

void UDCPostProcessingComponent::RemoveCameraPostProcess(struct UMaterialInstanceDynamic* InMIDKey, struct FName InMaterialName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPostProcessingComponent.RemoveCameraPostProcess");

	FRemoveCameraPostProcess parms{};	
	parms.InMIDKey = InMIDKey;
	parms.InMaterialName = InMaterialName;

	ProcessEvent(fn, &parms);
}

void UDCPostProcessingComponent::PlayFromStartCameraPostProcess(struct UMaterialInstanceDynamic* InMIDKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPostProcessingComponent.PlayFromStartCameraPostProcess");

	FPlayFromStartCameraPostProcess parms{};	
	parms.InMIDKey = InMIDKey;

	ProcessEvent(fn, &parms);
}

void UDCPostProcessingComponent::PlayCameraPostProcess(struct UMaterialInstanceDynamic* InMIDKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPostProcessingComponent.PlayCameraPostProcess");

	FPlayCameraPostProcess parms{};	
	parms.InMIDKey = InMIDKey;

	ProcessEvent(fn, &parms);
}

void UDCPostProcessingComponent::OnCameraPostProcessDataTimelineUpdate(float DeltaTime, enum class ETimelineDirection InTimelineDirection, struct UMaterialInstanceDynamic* InMIDKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPostProcessingComponent.OnCameraPostProcessDataTimelineUpdate");

	FOnCameraPostProcessDataTimelineUpdate parms{};	
	parms.DeltaTime = DeltaTime;
	parms.InTimelineDirection = InTimelineDirection;
	parms.InMIDKey = InMIDKey;

	ProcessEvent(fn, &parms);
}

void UDCPostProcessingComponent::OnCameraPostProcessDataTimelineFinished(float DeltaTime, enum class ETimelineDirection InTimelineDirection, struct UMaterialInstanceDynamic* InMIDKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPostProcessingComponent.OnCameraPostProcessDataTimelineFinished");

	FOnCameraPostProcessDataTimelineFinished parms{};	
	parms.DeltaTime = DeltaTime;
	parms.InTimelineDirection = InTimelineDirection;
	parms.InMIDKey = InMIDKey;

	ProcessEvent(fn, &parms);
}

bool UDCPostProcessingComponent::IsCameraPostProcess(struct UMaterialInstanceDynamic* InMIDKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPostProcessingComponent.IsCameraPostProcess");

	FIsCameraPostProcess parms{};	
	parms.InMIDKey = InMIDKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UDCPostProcessingComponent::GetMeshHalfTranslucentReferenceCount(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPostProcessingComponent.GetMeshHalfTranslucentReferenceCount");

	FGetMeshHalfTranslucentReferenceCount parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMaterialInstanceDynamic* UDCPostProcessingComponent::FindCameraPostProcessMID(struct FName InMaterialName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPostProcessingComponent.FindCameraPostProcessMID");

	FFindCameraPostProcessMID parms{};	
	parms.InMaterialName = InMaterialName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMaterialInstanceDynamic* UDCPostProcessingComponent::CreateCameraPostProcess(struct UMaterialInstance* InMaterial, struct UCurveFloat* InCurve, struct TArray<struct FName> InParameterNames, struct FName InMaterialName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPostProcessingComponent.CreateCameraPostProcess");

	FCreateCameraPostProcess parms{};	
	parms.InMaterial = InMaterial;
	parms.InCurve = InCurve;
	parms.InParameterNames = InParameterNames;
	parms.InMaterialName = InMaterialName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UDCPostProcessingComponent::AddMeshHalfTranslucentBySameTeam(struct USkeletalMeshComponent* InMesh, struct UMaterialInterface* InMaterial, bool IsParty, bool IsRenderingPriority){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPostProcessingComponent.AddMeshHalfTranslucentBySameTeam");

	FAddMeshHalfTranslucentBySameTeam parms{};	
	parms.InMesh = InMesh;
	parms.InMaterial = InMaterial;
	parms.IsParty = IsParty;
	parms.IsRenderingPriority = IsRenderingPriority;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UDCPostProcessingComponent::AddMeshHalfTranslucent(struct USkeletalMeshComponent* InMesh, struct UMaterialInterface* InMaterial, bool IsRenderingPriority){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPostProcessingComponent.AddMeshHalfTranslucent");

	FAddMeshHalfTranslucent parms{};	
	parms.InMesh = InMesh;
	parms.InMaterial = InMaterial;
	parms.IsRenderingPriority = IsRenderingPriority;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UGlobalData::GetAttackTypeText(struct FGameplayTag AttackType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GlobalData.GetAttackTypeText");

	FGetAttackTypeText parms{};	
	parms.AttackType = AttackType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ADCLevelSequenceActor::ProcessSequence(struct FGameplayTag& InEventTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCLevelSequenceActor.ProcessSequence");

	FProcessSequence parms{};	
	parms.InEventTag = InEventTag;

	ProcessEvent(fn, &parms);
}

void ADCLobbyCaptureViewerActor::SetStartRotateLocation(float InStartPosition){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCLobbyCaptureViewerActor.SetStartRotateLocation");

	FSetStartRotateLocation parms{};	
	parms.InStartPosition = InStartPosition;

	ProcessEvent(fn, &parms);
}

void ADCLobbyCaptureViewerActor::SetMeshRotationSpeedMultiplier(float Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCLobbyCaptureViewerActor.SetMeshRotationSpeedMultiplier");

	FSetMeshRotationSpeedMultiplier parms{};	
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void ADCLobbyCaptureViewerActor::SetActorRotation(float InYaw){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCLobbyCaptureViewerActor.SetActorRotation");

	FSetActorRotation parms{};	
	parms.InYaw = InYaw;

	ProcessEvent(fn, &parms);
}

void ADCLobbyCaptureViewerActor::InitActorRotation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCLobbyCaptureViewerActor.InitActorRotation");

	FInitActorRotation parms{};	

	ProcessEvent(fn, &parms);
}

struct UUserWidget* UDCLobbyEmoteWidget::GetTooltipWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCLobbyEmoteWidget.GetTooltipWidget");

	FGetTooltipWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCLobbyEmoteSlotWidget::SetLobbyEmoteData(struct UDCLobbyEmoteDataAsset* InDesignDataLobbyEmote){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCLobbyEmoteSlotWidget.SetLobbyEmoteData");

	FSetLobbyEmoteData parms{};	
	parms.InDesignDataLobbyEmote = InDesignDataLobbyEmote;

	ProcessEvent(fn, &parms);
}

void UDCLobbyEmoteSlotWidget::SelectionChange(bool bIsSelected){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCLobbyEmoteSlotWidget.SelectionChange");

	FSelectionChange parms{};	
	parms.bIsSelected = bIsSelected;

	ProcessEvent(fn, &parms);
}

void UDCLobbyEmoteSlotWidget::Reset(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCLobbyEmoteSlotWidget.Reset");

	FReset parms{};	

	ProcessEvent(fn, &parms);
}

void UDCLobbyEmoteSlotWidget::OnSelectionChanged(bool bIsSelected){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCLobbyEmoteSlotWidget.OnSelectionChanged");

	FOnSelectionChanged parms{};	
	parms.bIsSelected = bIsSelected;

	ProcessEvent(fn, &parms);
}

uint8_t UDCLobbyEmoteSlotWidget::GetLobbyEmoteIconVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCLobbyEmoteSlotWidget.GetLobbyEmoteIconVisibility");

	FGetLobbyEmoteIconVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGA_PlayerSkillCastBase::OnVelocityChange(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillCastBase.OnVelocityChange");

	FOnVelocityChange parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillCastBase::OnCastingStartTrigger(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillCastBase.OnCastingStartTrigger");

	FOnCastingStartTrigger parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillCastBase::OnCastingStartSync(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillCastBase.OnCastingStartSync");

	FOnCastingStartSync parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillCastBase::OnCastingFinishSync(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillCastBase.OnCastingFinishSync");

	FOnCastingFinishSync parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillCastBase::OnCastingFinish(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillCastBase.OnCastingFinish");

	FOnCastingFinish parms{};	

	ProcessEvent(fn, &parms);
}

void UDCReportPlayerResultPopup::HandleConfirmButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCReportPlayerResultPopup.HandleConfirmButtonClicked");

	FHandleConfirmButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UMetaInventoryComponent::OnLobbyCharacterInfoUupdated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MetaInventoryComponent.OnLobbyCharacterInfoUupdated");

	FOnLobbyCharacterInfoUupdated parms{};	

	ProcessEvent(fn, &parms);
}

void UEquipmentInventoryGroupWidget::OnSwitchChestAndSoulHeart(int32_t ActiveIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentInventoryGroupWidget.OnSwitchChestAndSoulHeart");

	FOnSwitchChestAndSoulHeart parms{};	
	parms.ActiveIndex = ActiveIndex;

	ProcessEvent(fn, &parms);
}

void UEquipmentInventoryGroupWidget::OnItemDropDetected(struct FItemData& ItemData, struct AActor* OldOwnerActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentInventoryGroupWidget.OnItemDropDetected");

	FOnItemDropDetected parms{};	
	parms.ItemData = ItemData;
	parms.OldOwnerActor = OldOwnerActor;

	ProcessEvent(fn, &parms);
}

void UEquipmentInventoryGroupWidget::OnItemDragOver(struct FItemData& ItemData, struct FVector2D& DragScreenPos, struct FVector2D& DragWidgetScreenPos, struct FVector2D& DragWidgetAbsoluteSize){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentInventoryGroupWidget.OnItemDragOver");

	FOnItemDragOver parms{};	
	parms.ItemData = ItemData;
	parms.DragScreenPos = DragScreenPos;
	parms.DragWidgetScreenPos = DragWidgetScreenPos;
	parms.DragWidgetAbsoluteSize = DragWidgetAbsoluteSize;

	ProcessEvent(fn, &parms);
}

void UEquipmentInventoryGroupWidget::OnItemDragLeaveOrDrop(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentInventoryGroupWidget.OnItemDragLeaveOrDrop");

	FOnItemDragLeaveOrDrop parms{};	

	ProcessEvent(fn, &parms);
}

void UEquipmentInventoryGroupWidget::OnDragOverChestSlot(bool bIsDragOver){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentInventoryGroupWidget.OnDragOverChestSlot");

	FOnDragOverChestSlot parms{};	
	parms.bIsDragOver = bIsDragOver;

	ProcessEvent(fn, &parms);
}

void UEquipmentInventoryGroupWidget::OnCurrentActiveSlot(uint8_t ItemQuickSlotType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentInventoryGroupWidget.OnCurrentActiveSlot");

	FOnCurrentActiveSlot parms{};	
	parms.ItemQuickSlotType = ItemQuickSlotType;

	ProcessEvent(fn, &parms);
}

void UEmoteComponent::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EmoteComponent.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UEmoteComponent::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EmoteComponent.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UEmoteComponent::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EmoteComponent.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UEmoteComponent::OnRep_EmoteSlotInfoArray(struct TArray<struct FDCEmoteSlotInfo>& OldEmoteSlotInfoArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EmoteComponent.OnRep_EmoteSlotInfoArray");

	FOnRep_EmoteSlotInfoArray parms{};	
	parms.OldEmoteSlotInfoArray = OldEmoteSlotInfoArray;

	ProcessEvent(fn, &parms);
}

void UEmoteComponent::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EmoteComponent.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGA_PaviseInstall::ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PaviseInstall.ReceivedEvent");

	FReceivedEvent parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PaviseInstall::OnVelocityChange(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PaviseInstall.OnVelocityChange");

	FOnVelocityChange parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PaviseInstall::OnInterrupted(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PaviseInstall.OnInterrupted");

	FOnInterrupted parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PaviseInstall::OnCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PaviseInstall.OnCompleted");

	FOnCompleted parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PaviseInstall::EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PaviseInstall.EventReceived");

	FEventReceived parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PaviseInstall::AbilityActivated(struct FGameplayEventData& TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PaviseInstall.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGameSpellSelectGroupWidget::OnSpellSelectPopup(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSpellSelectGroupWidget.OnSpellSelectPopup");

	FOnSpellSelectPopup parms{};	

	ProcessEvent(fn, &parms);
}

void UGameSpellSelectGroupWidget::OnSpellSelectClose(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSpellSelectGroupWidget.OnSpellSelectClose");

	FOnSpellSelectClose parms{};	

	ProcessEvent(fn, &parms);
}

void UGameSpellSelectGroupWidget::OnSelectedSpellIndexChanged(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSpellSelectGroupWidget.OnSelectedSpellIndexChanged");

	FOnSelectedSpellIndexChanged parms{};	

	ProcessEvent(fn, &parms);
}

void UGameSpellSelectGroupWidget::OnCurrentSpellSlotChanged(struct UGameSpellSlotWidget* InSelectedSlot){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSpellSelectGroupWidget.OnCurrentSpellSlotChanged");

	FOnCurrentSpellSlotChanged parms{};	
	parms.InSelectedSlot = InSelectedSlot;

	ProcessEvent(fn, &parms);
}

void UDCMetaTradeComponent::UpdateResetTimer(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMetaTradeComponent.UpdateResetTimer");

	FUpdateResetTimer parms{};	

	ProcessEvent(fn, &parms);
}

void UDCMetaTradeComponent::OnItemMoveEvent(uint8_t SourceInventoryId, struct FDCItemInfo& SourceItemInfo, uint8_t TargetInventoryId, int32_t TargetIndex, int32_t TargetStack){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMetaTradeComponent.OnItemMoveEvent");

	FOnItemMoveEvent parms{};	
	parms.SourceInventoryId = SourceInventoryId;
	parms.SourceItemInfo = SourceItemInfo;
	parms.TargetInventoryId = TargetInventoryId;
	parms.TargetIndex = TargetIndex;
	parms.TargetStack = TargetStack;

	ProcessEvent(fn, &parms);
}

void UDCMetaTradeComponent::OnItemActionEvent(uint8_t SourceInventoryId, struct FDCItemInfo& SourceItemInfo, uint8_t ActionType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMetaTradeComponent.OnItemActionEvent");

	FOnItemActionEvent parms{};	
	parms.SourceInventoryId = SourceInventoryId;
	parms.SourceItemInfo = SourceItemInfo;
	parms.ActionType = ActionType;

	ProcessEvent(fn, &parms);
}

void UDCMonsterGameplayAbilityBase::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMonsterGameplayAbilityBase.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UDCMultiLineEditableTextBox::InsertTextAtCursor(struct FString InText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMultiLineEditableTextBox.InsertTextAtCursor");

	FInsertTextAtCursor parms{};	
	parms.InText = InText;

	ProcessEvent(fn, &parms);
}

void UDCMultiLineEditableTextBox::Goto(int32_t InLineIndex, int32_t InOffset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMultiLineEditableTextBox.Goto");

	FGoto parms{};	
	parms.InLineIndex = InLineIndex;
	parms.InOffset = InOffset;

	ProcessEvent(fn, &parms);
}

bool UDCMultiLineEditableTextBox::AnyTextSelected(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMultiLineEditableTextBox.AnyTextSelected");

	FAnyTextSelected parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCMusicTooltipWidget::SetType(struct FGameplayTag SourceTypeTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCMusicTooltipWidget.SetType");

	FSetType parms{};	
	parms.SourceTypeTag = SourceTypeTag;

	ProcessEvent(fn, &parms);
}

struct FLinearColor UDCPlayerInventoryWidget::GetTitleColor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerInventoryWidget.GetTitleColor");

	FGetTitleColor parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UDCPlayerInventoryWidget::GetTitle(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerInventoryWidget.GetTitle");

	FGetTitle parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCSimpleTooltipWidget::SetTooltipData(struct FText& Text, struct FSlateColor& TextColor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCSimpleTooltipWidget.SetTooltipData");

	FSetTooltipData parms{};	
	parms.Text = Text;
	parms.TextColor = TextColor;

	ProcessEvent(fn, &parms);
}

struct FSlateColor UDCSimpleTooltipWidget::GetTooltipColor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCSimpleTooltipWidget.GetTooltipColor");

	FGetTooltipColor parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ADCPlayerState::OnRep_IsUserLoaded(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCPlayerState.OnRep_IsUserLoaded");

	FOnRep_IsUserLoaded parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_MultiShotBase::InputActionStarted(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MultiShotBase.InputActionStarted");

	FInputActionStarted parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_MultiShotBase::InputActionCompleted(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MultiShotBase.InputActionCompleted");

	FInputActionCompleted parms{};	

	ProcessEvent(fn, &parms);
}

void UTradeSubscriptionWidget::SendMsgWidgetTradeSubscriptionButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeSubscriptionWidget.SendMsgWidgetTradeSubscriptionButtonClicked");

	FSendMsgWidgetTradeSubscriptionButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UTradeSubscriptionWidget::OnClikedButtonDone(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeSubscriptionWidget.OnClikedButtonDone");

	FOnClikedButtonDone parms{};	

	ProcessEvent(fn, &parms);
}

void UTradeSubscriptionWidget::CloseSelf(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeSubscriptionWidget.CloseSelf");

	FCloseSelf parms{};	

	ProcessEvent(fn, &parms);
}

void UDCRecruitChannelListEntryWidget::OnClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCRecruitChannelListEntryWidget.OnClicked");

	FOnClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UDCRecruitChannelWidget::OnLeaveClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCRecruitChannelWidget.OnLeaveClicked");

	FOnLeaveClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UDCRecruitChannelWidget::OnCloseInspectingInventoryClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCRecruitChannelWidget.OnCloseInspectingInventoryClicked");

	FOnCloseInspectingInventoryClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UDCReportPlayerWidget::HandleReportTextChanged(struct FText& InText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCReportPlayerWidget.HandleReportTextChanged");

	FHandleReportTextChanged parms{};	
	parms.InText = InText;

	ProcessEvent(fn, &parms);
}

void UDCReportPlayerWidget::HandleReportButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCReportPlayerWidget.HandleReportButtonClicked");

	FHandleReportButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UDCReportPlayerWidget::HandleCheckStatedChanged(uint8_t InCategory, bool InbNewChecked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCReportPlayerWidget.HandleCheckStatedChanged");

	FHandleCheckStatedChanged parms{};	
	parms.InCategory = InCategory;
	parms.InbNewChecked = InbNewChecked;

	ProcessEvent(fn, &parms);
}

void UDCReportPlayerWidget::HandleCancelButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCReportPlayerWidget.HandleCancelButtonClicked");

	FHandleCancelButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

uint8_t UDCReportPlayerWidget::GetSelectCategoryTextVisibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCReportPlayerWidget.GetSelectCategoryTextVisibility");

	FGetSelectCategoryTextVisibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMusicSlotWidgetBase::SetMusicData(struct FMusicData& InMusicData, struct FDesignDataMusic& InDesignDataMusic){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MusicSlotWidgetBase.SetMusicData");

	FSetMusicData parms{};	
	parms.InMusicData = InMusicData;
	parms.InDesignDataMusic = InDesignDataMusic;

	ProcessEvent(fn, &parms);
}

void UMusicSlotWidgetBase::Reset(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MusicSlotWidgetBase.Reset");

	FReset parms{};	

	ProcessEvent(fn, &parms);
}

void UMusicSlotWidgetBase::OnSetMusicArtData(struct UArtDataMusic* InArtMusicData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MusicSlotWidgetBase.OnSetMusicArtData");

	FOnSetMusicArtData parms{};	
	parms.InArtMusicData = InArtMusicData;

	ProcessEvent(fn, &parms);
}

void UMusicSlotWidgetBase::OnReset(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MusicSlotWidgetBase.OnReset");

	FOnReset parms{};	

	ProcessEvent(fn, &parms);
}

void UMusicSlotWidgetBase::OnMusicDataChanged(struct FMusicData& InMusicData, struct FDesignDataMusic& InDesignDataMusic){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MusicSlotWidgetBase.OnMusicDataChanged");

	FOnMusicDataChanged parms{};	
	parms.InMusicData = InMusicData;
	parms.InDesignDataMusic = InDesignDataMusic;

	ProcessEvent(fn, &parms);
}

void UDCShopWidgetBase::OnWidgetOpen(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCShopWidgetBase.OnWidgetOpen");

	FOnWidgetOpen parms{};	

	ProcessEvent(fn, &parms);
}

void UDCShopWidgetBase::OnWidgetClose(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCShopWidgetBase.OnWidgetClose");

	FOnWidgetClose parms{};	

	ProcessEvent(fn, &parms);
}

void UDCShopWidgetBase::OnPrevPage(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCShopWidgetBase.OnPrevPage");

	FOnPrevPage parms{};	

	ProcessEvent(fn, &parms);
}

void UDCShopWidgetBase::OnPreviewSwitched(uint8_t ItemType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCShopWidgetBase.OnPreviewSwitched");

	FOnPreviewSwitched parms{};	
	parms.ItemType = ItemType;

	ProcessEvent(fn, &parms);
}

void UDCShopWidgetBase::OnNextPage(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCShopWidgetBase.OnNextPage");

	FOnNextPage parms{};	

	ProcessEvent(fn, &parms);
}

void UDCShopWidgetBase::OnButtonRedstoneShardBuyClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCShopWidgetBase.OnButtonRedstoneShardBuyClicked");

	FOnButtonRedstoneShardBuyClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UDCShopWidgetBase::OnButtonEnterCodeClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCShopWidgetBase.OnButtonEnterCodeClicked");

	FOnButtonEnterCodeClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UDCShopWidgetBase::OnButtonBuyClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCShopWidgetBase.OnButtonBuyClicked");

	FOnButtonBuyClicked parms{};	

	ProcessEvent(fn, &parms);
}

bool UDCShopWidgetBase::CanPurchase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCShopWidgetBase.CanPurchase");

	FCanPurchase parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCShowingKeyWidgetBase::OnInputBindChanged(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCShowingKeyWidgetBase.OnInputBindChanged");

	FOnInputBindChanged parms{};	

	ProcessEvent(fn, &parms);
}

void UDCShowingKeyWidgetBase::HandleInputMethodChanged(uint8_t InInputType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCShowingKeyWidgetBase.HandleInputMethodChanged");

	FHandleInputMethodChanged parms{};	
	parms.InInputType = InInputType;

	ProcessEvent(fn, &parms);
}

void UDCTabListWidgetBase::OnTabButtonSelected(struct FName TabId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCTabListWidgetBase.OnTabButtonSelected");

	FOnTabButtonSelected parms{};	
	parms.TabId = TabId;

	ProcessEvent(fn, &parms);
}

void UDCTradeInventoryWidget::OnTradeEnd(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCTradeInventoryWidget.OnTradeEnd");

	FOnTradeEnd parms{};	

	ProcessEvent(fn, &parms);
}

void UDCTradeInventoryWidget::OnStorageTabClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCTradeInventoryWidget.OnStorageTabClicked");

	FOnStorageTabClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UDCTradeInventoryWidget::OnInventoryTabClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCTradeInventoryWidget.OnInventoryTabClicked");

	FOnInventoryTabClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UDCTradeInventoryWidget::OnInventoryComponentChanged(struct UDCInventoryComponent* Comp){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCTradeInventoryWidget.OnInventoryComponentChanged");

	FOnInventoryComponentChanged parms{};	
	parms.Comp = Comp;

	ProcessEvent(fn, &parms);
}

void UDCTradePhaseDealWidget::OnResponseLocalTraderRequestRequestResult(bool bRequestSucceed){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCTradePhaseDealWidget.OnResponseLocalTraderRequestRequestResult");

	FOnResponseLocalTraderRequestRequestResult parms{};	
	parms.bRequestSucceed = bRequestSucceed;

	ProcessEvent(fn, &parms);
}

void UDCTradePhaseDealWidget::OnLocalTraderCheckBoxStateChanged(bool bIsChecked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCTradePhaseDealWidget.OnLocalTraderCheckBoxStateChanged");

	FOnLocalTraderCheckBoxStateChanged parms{};	
	parms.bIsChecked = bIsChecked;

	ProcessEvent(fn, &parms);
}

void UDCTradePhaseDealWidget::OnCancelTradeButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCTradePhaseDealWidget.OnCancelTradeButtonClicked");

	FOnCancelTradeButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

struct FDCAccountId UDCWidgetBlueprintLibrary::StringToAccountId(struct FString InAccountIdStr){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCWidgetBlueprintLibrary.StringToAccountId");

	FStringToAccountId parms{};	
	parms.InAccountIdStr = InAccountIdStr;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCWidgetBlueprintLibrary::SetPlayerCursorCenter(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCWidgetBlueprintLibrary.SetPlayerCursorCenter");

	FSetPlayerCursorCenter parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);
}

void UDCWidgetBlueprintLibrary::PopupMessageSWidgetNotify(struct APlayerController* InPlayer, UDCCommonActivatableWidgetBase* WidgetClass, struct FText DescMessage, uint8_t ButtonType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCWidgetBlueprintLibrary.PopupMessageSWidgetNotify");

	FPopupMessageSWidgetNotify parms{};	
	parms.InPlayer = InPlayer;
	parms.WidgetClass = WidgetClass;
	parms.DescMessage = DescMessage;
	parms.ButtonType = ButtonType;

	ProcessEvent(fn, &parms);
}

struct FMsgWidgetPopupMessageReqeust UDCWidgetBlueprintLibrary::MakePopupMessageReqeust(UDCCommonActivatableWidgetBase* WidgetClass, struct UPopupDataBase* PopupData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCWidgetBlueprintLibrary.MakePopupMessageReqeust");

	FMakePopupMessageReqeust parms{};	
	parms.WidgetClass = WidgetClass;
	parms.PopupData = PopupData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UPopupDataSWidget* UDCWidgetBlueprintLibrary::MakePopupDataSWidget(uint8_t PopupButtonType, struct FText DescMessage){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCWidgetBlueprintLibrary.MakePopupDataSWidget");

	FMakePopupDataSWidget parms{};	
	parms.PopupButtonType = PopupButtonType;
	parms.DescMessage = DescMessage;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UDCWidgetBlueprintLibrary::GetVoipStatus(struct FVoipUserData& InVoipUserData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCWidgetBlueprintLibrary.GetVoipStatus");

	FGetVoipStatus parms{};	
	parms.InVoipUserData = InVoipUserData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDCWidgetBlueprintLibrary::BroadcastSystemMessageNotify(struct APlayerController* InPlayer, struct FText& OutputMessage, float Duration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCWidgetBlueprintLibrary.BroadcastSystemMessageNotify");

	FBroadcastSystemMessageNotify parms{};	
	parms.InPlayer = InPlayer;
	parms.OutputMessage = OutputMessage;
	parms.Duration = Duration;

	ProcessEvent(fn, &parms);
}

void UDCWidgetBlueprintLibrary::BroadcastLobbySystemMessage(struct APlayerController* InPlayer, struct FText& AnnounceText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCWidgetBlueprintLibrary.BroadcastLobbySystemMessage");

	FBroadcastLobbySystemMessage parms{};	
	parms.InPlayer = InPlayer;
	parms.AnnounceText = AnnounceText;

	ProcessEvent(fn, &parms);
}

void UPartyChatWidget::OnChatAccountData(struct FChatAccountData& NewItemData, struct FChatAccountData& OldItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PartyChatWidget.OnChatAccountData");

	FOnChatAccountData parms{};	
	parms.NewItemData = NewItemData;
	parms.OldItemData = OldItemData;

	ProcessEvent(fn, &parms);
}

float UDescData::GetExecImpactPower(struct UDescDataParam* InDescDataParam){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DescData.GetExecImpactPower");

	FGetExecImpactPower parms{};	
	parms.InDescDataParam = InDescDataParam;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDescData::GetDescription(struct UDescDataParam* InDescDataParam, struct TArray<struct FText>& OutDescTextArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DescData.GetDescription");

	FGetDescription parms{};	
	parms.InDescDataParam = InDescDataParam;
	parms.OutDescTextArray = OutDescTextArray;

	ProcessEvent(fn, &parms);
}

void ULootComponent::ServerRemoveLootTarget(struct UInventoryComponent* InventoryComponent, struct TArray<struct FItemData> InContainingItems){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LootComponent.ServerRemoveLootTarget");

	FServerRemoveLootTarget parms{};	
	parms.InventoryComponent = InventoryComponent;
	parms.InContainingItems = InContainingItems;

	ProcessEvent(fn, &parms);
}

void ULootComponent::ServerClearLootingTargetContainingItems(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LootComponent.ServerClearLootingTargetContainingItems");

	FServerClearLootingTargetContainingItems parms{};	

	ProcessEvent(fn, &parms);
}

void ULootComponent::OnRep_LootTargetActor(struct AActor* OldLootTargetActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LootComponent.OnRep_LootTargetActor");

	FOnRep_LootTargetActor parms{};	
	parms.OldLootTargetActor = OldLootTargetActor;

	ProcessEvent(fn, &parms);
}

bool ULootComponent::IsLootTargetPlayer(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LootComponent.IsLootTargetPlayer");

	FIsLootTargetPlayer parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct AActor* ULootComponent::GetLootTargetActor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LootComponent.GetLootTargetActor");

	FGetLootTargetActor parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ULootComponent::DCRemoveLootTargetEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction DungeonCrawler.LootComponent.DCRemoveLootTargetEvent__DelegateSignature");

	FDCRemoveLootTargetEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsInputWidget::RefreshWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsInputWidget.RefreshWidget");

	FRefreshWidget parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsInputWidget::OnResetButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsInputWidget.OnResetButtonClicked");

	FOnResetButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsInputWidget::OnInputBindPendingChange(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsInputWidget.OnInputBindPendingChange");

	FOnInputBindPendingChange parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsInputWidget::OnApplyButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsInputWidget.OnApplyButtonClicked");

	FOnApplyButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

struct FPrimaryAssetId UDesignDataAssetItemBundleInfo::GetBundleArtAssetByCount(int32_t ItemCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DesignDataAssetItemBundleInfo.GetBundleArtAssetByCount");

	FGetBundleArtAssetByCount parms{};	
	parms.ItemCount = ItemCount;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UTradeChatWidget::OnReadRulesButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeChatWidget.OnReadRulesButtonClicked");

	FOnReadRulesButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UTradeChatWidget::OnChatAccountData(struct FChatAccountData& NewItemData, struct FChatAccountData& OldItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeChatWidget.OnChatAccountData");

	FOnChatAccountData parms{};	
	parms.NewItemData = NewItemData;
	parms.OldItemData = OldItemData;

	ProcessEvent(fn, &parms);
}

void UEquipmentInventoryComponent::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentInventoryComponent.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UEquipmentInventoryComponent::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentInventoryComponent.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UEquipmentInventoryComponent::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentInventoryComponent.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UEquipmentInventoryComponent::OnRep_SheathItemActors(struct TArray<struct AItemActor*> OldSheathItemActors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentInventoryComponent.OnRep_SheathItemActors");

	FOnRep_SheathItemActors parms{};	
	parms.OldSheathItemActors = OldSheathItemActors;

	ProcessEvent(fn, &parms);
}

void UEquipmentInventoryComponent::OnRep_QuickSlotData(struct FDCQuickSlotData& OldQuickSlotData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentInventoryComponent.OnRep_QuickSlotData");

	FOnRep_QuickSlotData parms{};	
	parms.OldQuickSlotData = OldQuickSlotData;

	ProcessEvent(fn, &parms);
}

void UEquipmentInventoryComponent::OnRep_InventoryData(struct FDCEquipmentInventoryData& OldInventoryData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentInventoryComponent.OnRep_InventoryData");

	FOnRep_InventoryData parms{};	
	parms.OldInventoryData = OldInventoryData;

	ProcessEvent(fn, &parms);
}

void UEquipmentInventoryComponent::OnRep_EquippedItemActors(struct TArray<struct AItemActor*> OldEquippedItemActors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentInventoryComponent.OnRep_EquippedItemActors");

	FOnRep_EquippedItemActors parms{};	
	parms.OldEquippedItemActors = OldEquippedItemActors;

	ProcessEvent(fn, &parms);
}

void UEquipmentInventoryComponent::OnRep_EquipAnimData(struct FDCEquipAnimData& OldEquipAnimData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentInventoryComponent.OnRep_EquipAnimData");

	FOnRep_EquipAnimData parms{};	
	parms.OldEquipAnimData = OldEquipAnimData;

	ProcessEvent(fn, &parms);
}

void UEquipmentInventoryComponent::HideEquippedItemActorsInGame(bool bHidden){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentInventoryComponent.HideEquippedItemActorsInGame");

	FHideEquippedItemActorsInGame parms{};	
	parms.bHidden = bHidden;

	ProcessEvent(fn, &parms);
}

struct TArray<struct UItem*> UEquipmentInventoryComponent::GetItemsBySlotType(struct FGameplayTag ItemSlotType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentInventoryComponent.GetItemsBySlotType");

	FGetItemsBySlotType parms{};	
	parms.ItemSlotType = ItemSlotType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FItemData UEquipmentInventoryComponent::GetCurrentHoldingItemData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentInventoryComponent.GetCurrentHoldingItemData");

	FGetCurrentHoldingItemData parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct AItemActor*> UEquipmentInventoryComponent::GetCurrentEquippedItemActors(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentInventoryComponent.GetCurrentEquippedItemActors");

	FGetCurrentEquippedItemActors parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UEquipmentInventoryComponent::GetCurrentActiveSlotType(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentInventoryComponent.GetCurrentActiveSlotType");

	FGetCurrentActiveSlotType parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UEquipmentInventoryComponent::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.EquipmentInventoryComponent.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UInventoryComponent::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InventoryComponent.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UInventoryComponent::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InventoryComponent.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UInventoryComponent::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InventoryComponent.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UInventoryComponent::OnRep_TotalGoldCount(int64_t OldTotalGoldCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InventoryComponent.OnRep_TotalGoldCount");

	FOnRep_TotalGoldCount parms{};	
	parms.OldTotalGoldCount = OldTotalGoldCount;

	ProcessEvent(fn, &parms);
}

void UInventoryComponent::OnRep_ContainingItems(struct TArray<struct FItemData>& OldContainingItems){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InventoryComponent.OnRep_ContainingItems");

	FOnRep_ContainingItems parms{};	
	parms.OldContainingItems = OldContainingItems;

	ProcessEvent(fn, &parms);
}

struct UItem* UInventoryComponent::GetItemByItemUniqueId(int64_t InItemUniqueId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InventoryComponent.GetItemByItemUniqueId");

	FGetItemByItemUniqueId parms{};	
	parms.InItemUniqueId = InItemUniqueId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UInventoryComponent::GetInventoryType(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InventoryComponent.GetInventoryType");

	FGetInventoryType parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UInventoryComponent::ClientShowMessage(struct FText OutputMessage){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InventoryComponent.ClientShowMessage");

	FClientShowMessage parms{};	
	parms.OutputMessage = OutputMessage;

	ProcessEvent(fn, &parms);
}

void UInventoryComponent::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InventoryComponent.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

bool UInventoryComponent::AddContainingItem(struct FItemData ItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InventoryComponent.AddContainingItem");

	FAddContainingItem parms{};	
	parms.ItemData = ItemData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UServerAccountSubsystem::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ServerAccountSubsystem.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UServerAccountSubsystem::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ServerAccountSubsystem.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UServerAccountSubsystem::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ServerAccountSubsystem.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UServerAccountSubsystem::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ServerAccountSubsystem.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UMailBoxListWidgetBase::OnPopupSWidgetInvitePartyAnswerResponse(uint8_t PopupResult, struct FString ReturnAccountID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MailBoxListWidgetBase.OnPopupSWidgetInvitePartyAnswerResponse");

	FOnPopupSWidgetInvitePartyAnswerResponse parms{};	
	parms.PopupResult = PopupResult;
	parms.ReturnAccountID = ReturnAccountID;

	ProcessEvent(fn, &parms);
}

void UGameAlivePlayerCountWidget::OnTotalPlayerCount(int32_t NewValue, int32_t OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameAlivePlayerCountWidget.OnTotalPlayerCount");

	FOnTotalPlayerCount parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UGameAlivePlayerCountWidget::OnAlivePlayerCount(int32_t NewValue, int32_t OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameAlivePlayerCountWidget.OnAlivePlayerCount");

	FOnAlivePlayerCount parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UGameActorStatusSlotWidget::OnActorStatusData(struct FActorStatusData& NewValue, struct FActorStatusData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameActorStatusSlotWidget.OnActorStatusData");

	FOnActorStatusData parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UGA_ActivateItemBase::ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ActivateItemBase.ReceivedEvent");

	FReceivedEvent parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ActivateItemBase::OtherHandIAStarted(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ActivateItemBase.OtherHandIAStarted");

	FOtherHandIAStarted parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ActivateItemBase::OtherHandIACompleted(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ActivateItemBase.OtherHandIACompleted");

	FOtherHandIACompleted parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ActivateItemBase::OnCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ActivateItemBase.OnCompleted");

	FOnCompleted parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ActivateItemBase::OnCancelled(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ActivateItemBase.OnCancelled");

	FOnCancelled parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ActivateItemBase::EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ActivateItemBase.EventReceived");

	FEventReceived parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ActivateItemBase::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ActivateItemBase.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

int32_t UGameAmmoWidget::GetMaxAmmoCount(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameAmmoWidget.GetMaxAmmoCount");

	FGetMaxAmmoCount parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UGameAmmoWidget::GetCurrentAmmoCount(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameAmmoWidget.GetCurrentAmmoCount");

	FGetCurrentAmmoCount parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct ADCMonsterBase* UMonsterSpawnableInterface::Spawn(ADCMonsterBase* Monster){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MonsterSpawnableInterface.Spawn");

	FSpawn parms{};	
	parms.Monster = Monster;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameEmoteSelectGroupWidget::OnSelectedEmoteIndexChanged(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameEmoteSelectGroupWidget.OnSelectedEmoteIndexChanged");

	FOnSelectedEmoteIndexChanged parms{};	

	ProcessEvent(fn, &parms);
}

void UGameEmoteSelectGroupWidget::OnEmoteSelectPopup(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameEmoteSelectGroupWidget.OnEmoteSelectPopup");

	FOnEmoteSelectPopup parms{};	

	ProcessEvent(fn, &parms);
}

void UGameEmoteSelectGroupWidget::OnEmoteSelectClose(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameEmoteSelectGroupWidget.OnEmoteSelectClose");

	FOnEmoteSelectClose parms{};	

	ProcessEvent(fn, &parms);
}

void UGameEmoteSelectGroupWidget::OnCurrentEmoteSlotChanged(struct FText& InName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameEmoteSelectGroupWidget.OnCurrentEmoteSlotChanged");

	FOnCurrentEmoteSlotChanged parms{};	
	parms.InName = InName;

	ProcessEvent(fn, &parms);
}

void UGameEmoteSlotWidget::SetEmoteData(struct UDCEmoteDataAsset* InDesignDataEmote){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameEmoteSlotWidget.SetEmoteData");

	FSetEmoteData parms{};	
	parms.InDesignDataEmote = InDesignDataEmote;

	ProcessEvent(fn, &parms);
}

void UGameEmoteSlotWidget::SelectionChange(bool bIsSelected){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameEmoteSlotWidget.SelectionChange");

	FSelectionChange parms{};	
	parms.bIsSelected = bIsSelected;

	ProcessEvent(fn, &parms);
}

void UGameEmoteSlotWidget::Reset(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameEmoteSlotWidget.Reset");

	FReset parms{};	

	ProcessEvent(fn, &parms);
}

void UGameEmoteSlotWidget::OnSetEmoteArtData(struct UArtDataEmote* InArtEmoteData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameEmoteSlotWidget.OnSetEmoteArtData");

	FOnSetEmoteArtData parms{};	
	parms.InArtEmoteData = InArtEmoteData;

	ProcessEvent(fn, &parms);
}

void UGameEmoteSlotWidget::OnSelectionChanged(bool bIsSelected){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameEmoteSlotWidget.OnSelectionChanged");

	FOnSelectionChanged parms{};	
	parms.bIsSelected = bIsSelected;

	ProcessEvent(fn, &parms);
}

void UGameEmoteSlotWidget::OnReset(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameEmoteSlotWidget.OnReset");

	FOnReset parms{};	

	ProcessEvent(fn, &parms);
}

void UGameHitDirectionWidget::SetHitDirection(struct FVector Direction){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameHitDirectionWidget.SetHitDirection");

	FSetHitDirection parms{};	
	parms.Direction = Direction;

	ProcessEvent(fn, &parms);
}

void UGameHitDirectionWidget::OnAnimation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameHitDirectionWidget.OnAnimation");

	FOnAnimation parms{};	

	ProcessEvent(fn, &parms);
}

void UGameInteractionDescriptionWidget::OnInteractTargetData(struct FInteractTargetData& NewValue, struct FInteractTargetData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameInteractionDescriptionWidget.OnInteractTargetData");

	FOnInteractTargetData parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UGameInteractionDescriptionWidget::OnInteractableDataByStateMap(struct TMap<struct FGameplayTag, struct FInteractionData>& NewValue, struct TMap<struct FGameplayTag, struct FInteractionData>& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameInteractionDescriptionWidget.OnInteractableDataByStateMap");

	FOnInteractableDataByStateMap parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UGameInteractionDescriptionWidget::OnInputType(uint8_t NewValue, uint8_t OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameInteractionDescriptionWidget.OnInputType");

	FOnInputType parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UGameInteractionSkillCheckWidget::OnInteractSkillCheckStart(struct FSkillCheckData& SkillCheckData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameInteractionSkillCheckWidget.OnInteractSkillCheckStart");

	FOnInteractSkillCheckStart parms{};	
	parms.SkillCheckData = SkillCheckData;

	ProcessEvent(fn, &parms);
}

void UGameInteractionSkillCheckWidget::OnInteractSkillCheckEnd(uint8_t SkillCheckResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameInteractionSkillCheckWidget.OnInteractSkillCheckEnd");

	FOnInteractSkillCheckEnd parms{};	
	parms.SkillCheckResult = SkillCheckResult;

	ProcessEvent(fn, &parms);
}

void AMusicActor::SetMusicData(struct FMusicData& NewMusicData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MusicActor.SetMusicData");

	FSetMusicData parms{};	
	parms.NewMusicData = NewMusicData;

	ProcessEvent(fn, &parms);
}

void AMusicActor::OnRep_MusicData(struct FMusicData& OldMusicData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MusicActor.OnRep_MusicData");

	FOnRep_MusicData parms{};	
	parms.OldMusicData = OldMusicData;

	ProcessEvent(fn, &parms);
}

struct USoundData* AMusicActor::GetSoundDataMusic(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MusicActor.GetSoundDataMusic");

	FGetSoundDataMusic parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UPlayMusicData* AMusicActor::GetPlayMusicData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MusicActor.GetPlayMusicData");

	FGetPlayMusicData parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FMusicData AMusicActor::GetMusicData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MusicActor.GetMusicData");

	FGetMusicData parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FDesignDataMusic AMusicActor::GetDesignDataMusic(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MusicActor.GetDesignDataMusic");

	FGetDesignDataMusic parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UArtDataMusic* AMusicActor::GetArtDataMusic(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MusicActor.GetArtDataMusic");

	FGetArtDataMusic parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameInventoryGroupWidget::OnPopItemSelectWidget(struct FItemData ItemData, struct AActor* OldOwnerActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameInventoryGroupWidget.OnPopItemSelectWidget");

	FOnPopItemSelectWidget parms{};	
	parms.ItemData = ItemData;
	parms.OldOwnerActor = OldOwnerActor;

	ProcessEvent(fn, &parms);
}

void UGameInventoryGroupWidget::OnItemDropOne(struct FItemData ItemData, struct AActor* OldOwnerActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameInventoryGroupWidget.OnItemDropOne");

	FOnItemDropOne parms{};	
	parms.ItemData = ItemData;
	parms.OldOwnerActor = OldOwnerActor;

	ProcessEvent(fn, &parms);
}

void UGameInventoryGroupWidget::OnItemDrop(struct FItemData ItemData, struct AActor* OldOwnerActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameInventoryGroupWidget.OnItemDrop");

	FOnItemDrop parms{};	
	parms.ItemData = ItemData;
	parms.OldOwnerActor = OldOwnerActor;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionComboBoxWidget::SetTitle(struct FText InText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionComboBoxWidget.SetTitle");

	FSetTitle parms{};	
	parms.InText = InText;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionComboBoxWidget::SetComboBoxList(struct TArray<struct FString>& InComboBoxDataList){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionComboBoxWidget.SetComboBoxList");

	FSetComboBoxList parms{};	
	parms.InComboBoxDataList = InComboBoxDataList;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionComboBoxWidget::SetComboBoxIndex(int32_t InIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionComboBoxWidget.SetComboBoxIndex");

	FSetComboBoxIndex parms{};	
	parms.InIndex = InIndex;

	ProcessEvent(fn, &parms);
}

struct FString UGameMenuOptionComboBoxWidget::GetSelectedComboBoxText(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionComboBoxWidget.GetSelectedComboBoxText");

	FGetSelectedComboBoxText parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UGameMenuOptionComboBoxWidget::GetSelectedComboBoxIndex(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionComboBoxWidget.GetSelectedComboBoxIndex");

	FGetSelectedComboBoxIndex parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWidget* UGameMenuOptionComboBoxWidget::GetPrimaryGamepadFocusWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionComboBoxWidget.GetPrimaryGamepadFocusWidget");

	FGetPrimaryGamepadFocusWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameMenuOptionComboBoxWidget::ClearComboBox(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionComboBoxWidget.ClearComboBox");

	FClearComboBox parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionComboBoxWidget::AddComboBox(struct FString InComboBoxData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionComboBoxWidget.AddComboBox");

	FAddComboBox parms{};	
	parms.InComboBoxData = InComboBoxData;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionPopupWidget::UpdateDetailText(struct FText& InDetailText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionPopupWidget.UpdateDetailText");

	FUpdateDetailText parms{};	
	parms.InDetailText = InDetailText;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionPopupWidget::UpdateButtonText(struct FText& InLeftText, struct FText& InRightText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionPopupWidget.UpdateButtonText");

	FUpdateButtonText parms{};	
	parms.InLeftText = InLeftText;
	parms.InRightText = InRightText;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionPopupWidget::SetDetailText(struct FText InDetailText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionPopupWidget.SetDetailText");

	FSetDetailText parms{};	
	parms.InDetailText = InDetailText;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionPopupWidget::SetButtonText(struct FText InLeftText, struct FText InRightText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionPopupWidget.SetButtonText");

	FSetButtonText parms{};	
	parms.InLeftText = InLeftText;
	parms.InRightText = InRightText;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionPopupWidget::HandleRightButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionPopupWidget.HandleRightButtonClicked");

	FHandleRightButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionPopupWidget::HandleLeftButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionPopupWidget.HandleLeftButtonClicked");

	FHandleLeftButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsAudioWidget::UpdateWindowFocusChanged(bool IsFocus, bool IsBackgroundOption, float TotalVolume){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsAudioWidget.UpdateWindowFocusChanged");

	FUpdateWindowFocusChanged parms{};	
	parms.IsFocus = IsFocus;
	parms.IsBackgroundOption = IsBackgroundOption;
	parms.TotalVolume = TotalVolume;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsAudioWidget::OnVoipSendModeChanged(bool IsToggle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsAudioWidget.OnVoipSendModeChanged");

	FOnVoipSendModeChanged parms{};	
	parms.IsToggle = IsToggle;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsAudioWidget::OnVoipOutputVolumeValueChanged(float NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsAudioWidget.OnVoipOutputVolumeValueChanged");

	FOnVoipOutputVolumeValueChanged parms{};	
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsAudioWidget::OnVoipOnOffChanged(bool IsToggle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsAudioWidget.OnVoipOnOffChanged");

	FOnVoipOnOffChanged parms{};	
	parms.IsToggle = IsToggle;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsAudioWidget::OnVoipModeChanged(bool IsToggle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsAudioWidget.OnVoipModeChanged");

	FOnVoipModeChanged parms{};	
	parms.IsToggle = IsToggle;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsAudioWidget::OnVoipInputVolumeValueChanged(float NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsAudioWidget.OnVoipInputVolumeValueChanged");

	FOnVoipInputVolumeValueChanged parms{};	
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsAudioWidget::OnTotalVolumeValueChanged(float NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsAudioWidget.OnTotalVolumeValueChanged");

	FOnTotalVolumeValueChanged parms{};	
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsAudioWidget::OnResetButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsAudioWidget.OnResetButtonClicked");

	FOnResetButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsAudioWidget::OnMusicVolumeValueChanged(float NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsAudioWidget.OnMusicVolumeValueChanged");

	FOnMusicVolumeValueChanged parms{};	
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsAudioWidget::OnGameUserSettingAudiosChanged(struct FGameUserSettingAudios& InGameUserSettingAudios, struct FGameUserSettingAudios& InOldGameUserSettingAudios, bool bInForce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsAudioWidget.OnGameUserSettingAudiosChanged");

	FOnGameUserSettingAudiosChanged parms{};	
	parms.InGameUserSettingAudios = InGameUserSettingAudios;
	parms.InOldGameUserSettingAudios = InOldGameUserSettingAudios;
	parms.bInForce = bInForce;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsAudioWidget::OnEffectVolumeValueChanged(float NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsAudioWidget.OnEffectVolumeValueChanged");

	FOnEffectVolumeValueChanged parms{};	
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsAudioWidget::OnBackgroundMusicChanged(bool IsToggle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsAudioWidget.OnBackgroundMusicChanged");

	FOnBackgroundMusicChanged parms{};	
	parms.IsToggle = IsToggle;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsAudioWidget::OnApplyButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsAudioWidget.OnApplyButtonClicked");

	FOnApplyButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsAudioWidget::OnAppActivateStateChanged(bool IsAppActivateChange){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsAudioWidget.OnAppActivateStateChanged");

	FOnAppActivateStateChanged parms{};	
	parms.IsAppActivateChange = IsAppActivateChange;

	ProcessEvent(fn, &parms);
}

void UMusicComponent::ServerSetCurrentMusic(struct FGameplayTag MusicTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MusicComponent.ServerSetCurrentMusic");

	FServerSetCurrentMusic parms{};	
	parms.MusicTag = MusicTag;

	ProcessEvent(fn, &parms);
}

void UMusicComponent::OnRep_MusicActors(struct TArray<struct AMusicActor*>& OldAMusicActors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MusicComponent.OnRep_MusicActors");

	FOnRep_MusicActors parms{};	
	parms.OldAMusicActors = OldAMusicActors;

	ProcessEvent(fn, &parms);
}

void UMusicComponent::OnRep_CurrentMusicTag(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MusicComponent.OnRep_CurrentMusicTag");

	FOnRep_CurrentMusicTag parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsInputBindSlotWidget::OnSecondaryKeyBindButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsInputBindSlotWidget.OnSecondaryKeyBindButtonClicked");

	FOnSecondaryKeyBindButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsInputBindSlotWidget::OnPrimaryKeyBindButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsInputBindSlotWidget.OnPrimaryKeyBindButtonClicked");

	FOnPrimaryKeyBindButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsInputBindSlotWidget::OnClearButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsInputBindSlotWidget.OnClearButtonClicked");

	FOnClearButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsInputBindSlotWidget::HandleSecondaryKeyPressed(struct FKey InKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsInputBindSlotWidget.HandleSecondaryKeyPressed");

	FHandleSecondaryKeyPressed parms{};	
	parms.InKey = InKey;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionsInputBindSlotWidget::HandlePrimaryKeyPressed(struct FKey InKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsInputBindSlotWidget.HandlePrimaryKeyPressed");

	FHandlePrimaryKeyPressed parms{};	
	parms.InKey = InKey;

	ProcessEvent(fn, &parms);
}

struct UWidget* UGameMenuOptionsInputBindSlotWidget::GetPrimaryGamepadFocusWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsInputBindSlotWidget.GetPrimaryGamepadFocusWidget");

	FGetPrimaryGamepadFocusWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameMenuOptionsInputBindSlotWidget::ChangeBinding(int32_t InKeyBindSlot, struct FKey InKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsInputBindSlotWidget.ChangeBinding");

	FChangeBinding parms{};	
	parms.InKeyBindSlot = InKeyBindSlot;
	parms.InKey = InKey;

	ProcessEvent(fn, &parms);
}

struct UWidget* UGameMenuOptionsInputSlotWidget::GetPrimaryGamepadFocusWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionsInputSlotWidget.GetPrimaryGamepadFocusWidget");

	FGetPrimaryGamepadFocusWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameMenuOptionSlotWidget::SetSelectedSlotIdx(int32_t InSlotIdx){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionSlotWidget.SetSelectedSlotIdx");

	FSetSelectedSlotIdx parms{};	
	parms.InSlotIdx = InSlotIdx;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionSlotWidget::OnSelectedSlotIdx(int32_t& NewValue, int32_t& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionSlotWidget.OnSelectedSlotIdx");

	FOnSelectedSlotIdx parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionToggleSwitchWidget::UpdateButtonText(struct FText& LeftText, struct FText& RightText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.UpdateButtonText");

	FUpdateButtonText parms{};	
	parms.LeftText = LeftText;
	parms.RightText = RightText;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionToggleSwitchWidget::SetToggleSwitch(bool InSwitch){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.SetToggleSwitch");

	FSetToggleSwitch parms{};	
	parms.InSwitch = InSwitch;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionToggleSwitchWidget::SetTitle(struct FText InTitle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.SetTitle");

	FSetTitle parms{};	
	parms.InTitle = InTitle;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionToggleSwitchWidget::SetButtonText(struct FText LeftText, struct FText RightText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.SetButtonText");

	FSetButtonText parms{};	
	parms.LeftText = LeftText;
	parms.RightText = RightText;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionToggleSwitchWidget::OnToggleSwitchClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.OnToggleSwitchClicked");

	FOnToggleSwitchClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionToggleSwitchWidget::OnToggleSwitch(bool InSwitch){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.OnToggleSwitch");

	FOnToggleSwitch parms{};	
	parms.InSwitch = InSwitch;

	ProcessEvent(fn, &parms);
}

void UGameMenuOptionToggleSwitchWidget::OffToggleSwitchClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.OffToggleSwitchClicked");

	FOffToggleSwitchClicked parms{};	

	ProcessEvent(fn, &parms);
}

bool UGameMenuOptionToggleSwitchWidget::GetToggleSwitch(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.GetToggleSwitch");

	FGetToggleSwitch parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWidget* UGameMenuOptionToggleSwitchWidget::GetPrimaryGamepadFocusWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.GetPrimaryGamepadFocusWidget");

	FGetPrimaryGamepadFocusWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameMusicSelectGroupWidget::OnSelectedMusicIndexChanged(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMusicSelectGroupWidget.OnSelectedMusicIndexChanged");

	FOnSelectedMusicIndexChanged parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMusicSelectGroupWidget::OnMusicSelectPopup(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMusicSelectGroupWidget.OnMusicSelectPopup");

	FOnMusicSelectPopup parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMusicSelectGroupWidget::OnMusicSelectClose(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMusicSelectGroupWidget.OnMusicSelectClose");

	FOnMusicSelectClose parms{};	

	ProcessEvent(fn, &parms);
}

void UGameMusicSelectGroupWidget::OnCurrentMusicSlotChanged(struct UGameMusicSlotWidget* InSelectedSlot){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameMusicSelectGroupWidget.OnCurrentMusicSlotChanged");

	FOnCurrentMusicSlotChanged parms{};	
	parms.InSelectedSlot = InSelectedSlot;

	ProcessEvent(fn, &parms);
}

void UGamePartyManagePartyWidget::PartyJoin(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GamePartyManagePartyWidget.PartyJoin");

	FPartyJoin parms{};	

	ProcessEvent(fn, &parms);
}

void UGamePartyManagePartyWidget::OnPartyData(struct FPartyData& NewValue, struct FPartyData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GamePartyManagePartyWidget.OnPartyData");

	FOnPartyData parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UGamePartyMemberWidget::OnRefreshNickname(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GamePartyMemberWidget.OnRefreshNickname");

	FOnRefreshNickname parms{};	

	ProcessEvent(fn, &parms);
}

void UGamePartyMemberWidget::OnPortraitRenderTargetUpdated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GamePartyMemberWidget.OnPortraitRenderTargetUpdated");

	FOnPortraitRenderTargetUpdated parms{};	

	ProcessEvent(fn, &parms);
}

void UGamePlayerCharacterWidget::OnCurrentActiveSlot(struct UEquipmentSlotWidget* CurrentActiveWidget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GamePlayerCharacterWidget.OnCurrentActiveSlot");

	FOnCurrentActiveSlot parms{};	
	parms.CurrentActiveWidget = CurrentActiveWidget;

	ProcessEvent(fn, &parms);
}

void UGamePlayerCharacterWidget::OnCharacterClass(uint8_t InCharacterClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GamePlayerCharacterWidget.OnCharacterClass");

	FOnCharacterClass parms{};	
	parms.InCharacterClass = InCharacterClass;

	ProcessEvent(fn, &parms);
}

void UGamePlayerCharacterWidget::OnCampfireChanged(bool bInCampfire){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GamePlayerCharacterWidget.OnCampfireChanged");

	FOnCampfireChanged parms{};	
	parms.bInCampfire = bInCampfire;

	ProcessEvent(fn, &parms);
}

void UGamePlayerEquipSlotWidget::OnQuickSlotDataChanged(uint8_t Type, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GamePlayerEquipSlotWidget.OnQuickSlotDataChanged");

	FOnQuickSlotDataChanged parms{};	
	parms.Type = Type;
	parms.Index = Index;

	ProcessEvent(fn, &parms);
}

void UGameProgressBarWidget::OnPercentUpdated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameProgressBarWidget.OnPercentUpdated");

	FOnPercentUpdated parms{};	

	ProcessEvent(fn, &parms);
}

void UGameSkillSlotWidget::UpdateSkillCooldownUI(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSkillSlotWidget.UpdateSkillCooldownUI");

	FUpdateSkillCooldownUI parms{};	

	ProcessEvent(fn, &parms);
}

void UGameSkillSlotWidget::OnUpdateSkillSlotVisible(bool IsVisibility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSkillSlotWidget.OnUpdateSkillSlotVisible");

	FOnUpdateSkillSlotVisible parms{};	
	parms.IsVisibility = IsVisibility;

	ProcessEvent(fn, &parms);
}

void UGameSkillSlotWidget::OnUpdateSkillSlot(struct FGameplayTag SkillTag, float Duration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSkillSlotWidget.OnUpdateSkillSlot");

	FOnUpdateSkillSlot parms{};	
	parms.SkillTag = SkillTag;
	parms.Duration = Duration;

	ProcessEvent(fn, &parms);
}

void UGameSkillSlotWidget::OnUpdateSkillDesc(struct FText& SkillName, struct FText& SkillDesc){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSkillSlotWidget.OnUpdateSkillDesc");

	FOnUpdateSkillDesc parms{};	
	parms.SkillName = SkillName;
	parms.SkillDesc = SkillDesc;

	ProcessEvent(fn, &parms);
}

void UGameSkillSlotWidget::OnUpdateSkillData(struct FSkillData& InSkillData, struct FDesignDataSkill& InDesignDataSkill){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSkillSlotWidget.OnUpdateSkillData");

	FOnUpdateSkillData parms{};	
	parms.InSkillData = InSkillData;
	parms.InDesignDataSkill = InDesignDataSkill;

	ProcessEvent(fn, &parms);
}

void UGameSkillSlotWidget::OnUpdateSkillArtData(struct UArtDataSkill* SkillArtData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSkillSlotWidget.OnUpdateSkillArtData");

	FOnUpdateSkillArtData parms{};	
	parms.SkillArtData = SkillArtData;

	ProcessEvent(fn, &parms);
}

void UGameSkillSlotWidget::OnSkillFailedSystemMessage(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSkillSlotWidget.OnSkillFailedSystemMessage");

	FOnSkillFailedSystemMessage parms{};	

	ProcessEvent(fn, &parms);
}

void UGameSkillSlotWidget::OnSkillCooldownEnd(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSkillSlotWidget.OnSkillCooldownEnd");

	FOnSkillCooldownEnd parms{};	

	ProcessEvent(fn, &parms);
}

void UGameSkillSlotWidget::OnResetSkillDesc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSkillSlotWidget.OnResetSkillDesc");

	FOnResetSkillDesc parms{};	

	ProcessEvent(fn, &parms);
}

void UGameSkillSlotWidget::OnResetSkillCooldownUI(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSkillSlotWidget.OnResetSkillCooldownUI");

	FOnResetSkillCooldownUI parms{};	

	ProcessEvent(fn, &parms);
}

void UGameSkillSlotWidget::OnLinkedPawnDestroyed(struct AActor* InActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSkillSlotWidget.OnLinkedPawnDestroyed");

	FOnLinkedPawnDestroyed parms{};	
	parms.InActor = InActor;

	ProcessEvent(fn, &parms);
}

float UGameSkillSlotWidget::GetSkillSlotCooldownPercent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSkillSlotWidget.GetSkillSlotCooldownPercent");

	FGetSkillSlotCooldownPercent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UGameSkillSlotWidget::GetSkillSlotCooldownDuration(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSkillSlotWidget.GetSkillSlotCooldownDuration");

	FGetSkillSlotCooldownDuration parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UGameSkillSlotWidget::GetSkillChargedPercent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSkillSlotWidget.GetSkillChargedPercent");

	FGetSkillChargedPercent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGA_PlayMontageAndWaitForEvent::ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayMontageAndWaitForEvent.ReceivedEvent");

	FReceivedEvent parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayMontageAndWaitForEvent::OnCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayMontageAndWaitForEvent.OnCompleted");

	FOnCompleted parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayMontageAndWaitForEvent::OnCancelled(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayMontageAndWaitForEvent.OnCancelled");

	FOnCancelled parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayMontageAndWaitForEvent::EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayMontageAndWaitForEvent.EventReceived");

	FEventReceived parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayMontageAndWaitForEvent::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayMontageAndWaitForEvent.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGameSpellCurrentSlotWidget::SetSpellData(struct FSpellData& InSpellData, struct FDesignDataSpell& InDesignDataSpell){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSpellCurrentSlotWidget.SetSpellData");

	FSetSpellData parms{};	
	parms.InSpellData = InSpellData;
	parms.InDesignDataSpell = InDesignDataSpell;

	ProcessEvent(fn, &parms);
}

void UGameSpellCurrentSlotWidget::OnSpellDataChanged(struct FSpellData& InSpellData, struct FDesignDataSpell& InDesignDataSpell){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSpellCurrentSlotWidget.OnSpellDataChanged");

	FOnSpellDataChanged parms{};	
	parms.InSpellData = InSpellData;
	parms.InDesignDataSpell = InDesignDataSpell;

	ProcessEvent(fn, &parms);
}

void UGameSpellCurrentSlotWidget::OnSetSpellArtData(struct UArtDataSpell* InArtSpellData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSpellCurrentSlotWidget.OnSetSpellArtData");

	FOnSetSpellArtData parms{};	
	parms.InArtSpellData = InArtSpellData;

	ProcessEvent(fn, &parms);
}

void UGameSpellSlotWidget::SelectionChange(bool bIsSelected){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSpellSlotWidget.SelectionChange");

	FSelectionChange parms{};	
	parms.bIsSelected = bIsSelected;

	ProcessEvent(fn, &parms);
}

void UGameSpellSlotWidget::OnSelectionChanged(bool bIsSelected){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSpellSlotWidget.OnSelectionChanged");

	FOnSelectionChanged parms{};	
	parms.bIsSelected = bIsSelected;

	ProcessEvent(fn, &parms);
}

float UGameSpellSlotWidget::GetSpellChargedPercent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameSpellSlotWidget.GetSpellChargedPercent");

	FGetSpellChargedPercent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameTavernStartTimerWidget::OnUpdated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTavernStartTimerWidget.OnUpdated");

	FOnUpdated parms{};	

	ProcessEvent(fn, &parms);
}

void UGameTavernStartTimerWidget::OnPlayerLimit(int32_t NewValue, int32_t OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTavernStartTimerWidget.OnPlayerLimit");

	FOnPlayerLimit parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UGameTavernStartTimerWidget::OnPlayerCount(int32_t NewValue, int32_t OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTavernStartTimerWidget.OnPlayerCount");

	FOnPlayerCount parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UGameTestComponent::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTestComponent.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UGameTestComponent::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTestComponent.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UGameTestComponent::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTestComponent.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UGameTestComponent::MsgGameTestChangePlayerCharacterClassResponse(struct FMsgGameTestChangePlayerCharacterClassResponse InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTestComponent.MsgGameTestChangePlayerCharacterClassResponse");

	FMsgGameTestChangePlayerCharacterClassResponse parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGameTestComponent::MsgGameTestChangePlayerCharacterClassRequest(struct FMsgGameTestChangePlayerCharacterClassRequest InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTestComponent.MsgGameTestChangePlayerCharacterClassRequest");

	FMsgGameTestChangePlayerCharacterClassRequest parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGameTestComponent::ClientMsgClassSpellSlotMoveResponse(struct FMsgGameTestClassSpellSlotMoveResponse InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTestComponent.ClientMsgClassSpellSlotMoveResponse");

	FClientMsgClassSpellSlotMoveResponse parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGameTestComponent::ClientMsgClassSpellSlotMoveRequest(struct FMsgGameTestClassSpellSlotMoveRequest InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTestComponent.ClientMsgClassSpellSlotMoveRequest");

	FClientMsgClassSpellSlotMoveRequest parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGameTestComponent::ClientMsgClassSpellSequenceChangeResponse(struct FMsgGameTestClassSpellSequenceChangeResponse InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTestComponent.ClientMsgClassSpellSequenceChangeResponse");

	FClientMsgClassSpellSequenceChangeResponse parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGameTestComponent::ClientMsgClassSpellSequenceChangeRequest(struct FMsgGameTestClassSpellSequenceChangeRequest InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTestComponent.ClientMsgClassSpellSequenceChangeRequest");

	FClientMsgClassSpellSequenceChangeRequest parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGameTestComponent::ClientMsgClassSpellListResponse(struct FMsgGameTestClassSpellListResponse InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTestComponent.ClientMsgClassSpellListResponse");

	FClientMsgClassSpellListResponse parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGameTestComponent::ClientMsgClassSpellListRequest(struct FMsgGameTestClassSpellListRequest InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTestComponent.ClientMsgClassSpellListRequest");

	FClientMsgClassSpellListRequest parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGameTestComponent::ClientMsgClassSkillListResponse(struct FMsgGameTestClassSkillListResponse InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTestComponent.ClientMsgClassSkillListResponse");

	FClientMsgClassSkillListResponse parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGameTestComponent::ClientMsgClassSkillListRequest(struct FMsgGameTestClassSkillListRequest InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTestComponent.ClientMsgClassSkillListRequest");

	FClientMsgClassSkillListRequest parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGameTestComponent::ClientMsgClassPerkListResponse(struct FMsgGameTestClassPerkListResponse InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTestComponent.ClientMsgClassPerkListResponse");

	FClientMsgClassPerkListResponse parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGameTestComponent::ClientMsgClassPerkListRequest(struct FMsgGameTestClassPerkListRequest InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTestComponent.ClientMsgClassPerkListRequest");

	FClientMsgClassPerkListRequest parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGameTestComponent::ClientMsgClassMusicSlotMoveResponse(struct FMsgGameTestClassMusicSlotMoveResponse InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTestComponent.ClientMsgClassMusicSlotMoveResponse");

	FClientMsgClassMusicSlotMoveResponse parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGameTestComponent::ClientMsgClassMusicSlotMoveRequest(struct FMsgGameTestClassMusicSlotMoveRequest InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTestComponent.ClientMsgClassMusicSlotMoveRequest");

	FClientMsgClassMusicSlotMoveRequest parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGameTestComponent::ClientMsgClassMusicListResponse(struct FMsgGameTestClassMusicListResponse InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTestComponent.ClientMsgClassMusicListResponse");

	FClientMsgClassMusicListResponse parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGameTestComponent::ClientMsgClassMusicListRequest(struct FMsgGameTestClassMusicListRequest InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTestComponent.ClientMsgClassMusicListRequest");

	FClientMsgClassMusicListRequest parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGameTestComponent::ClientMsgClassLevelInfoResponse(struct FMsgGameTestClassLevelInfoResponse InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTestComponent.ClientMsgClassLevelInfoResponse");

	FClientMsgClassLevelInfoResponse parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGameTestComponent::ClientMsgClassLevelInfoRequest(struct FMsgGameTestClassLevelInfoRequest InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTestComponent.ClientMsgClassLevelInfoRequest");

	FClientMsgClassLevelInfoRequest parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGameTestComponent::ClientMsgClassItemMoveResponse(struct FMsgGameTestClassItemMoveResponse InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTestComponent.ClientMsgClassItemMoveResponse");

	FClientMsgClassItemMoveResponse parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGameTestComponent::ClientMsgClassItemMoveRequest(struct FMsgGameTestClassItemMoveRequest InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTestComponent.ClientMsgClassItemMoveRequest");

	FClientMsgClassItemMoveRequest parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGameTestComponent::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GameTestComponent.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGA_AuraBase::OnAuraOverlapEnd(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_AuraBase.OnAuraOverlapEnd");

	FOnAuraOverlapEnd parms{};	
	parms.OverlappedComp = OverlappedComp;
	parms.Other = Other;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;

	ProcessEvent(fn, &parms);
}

void UGA_AuraBase::OnAuraOverlapBeginEvent(struct AActor* TargetActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_AuraBase.OnAuraOverlapBeginEvent");

	FOnAuraOverlapBeginEvent parms{};	
	parms.TargetActor = TargetActor;

	ProcessEvent(fn, &parms);
}

void UGA_AuraBase::OnAuraOverlapBegin(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_AuraBase.OnAuraOverlapBegin");

	FOnAuraOverlapBegin parms{};	
	parms.OverlappedComp = OverlappedComp;
	parms.Other = Other;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;
	parms.bFromSweep = bFromSweep;
	parms.SweepResult = SweepResult;

	ProcessEvent(fn, &parms);
}

void UGA_AuraBase::OnAntiAuraOverlapEnd(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_AuraBase.OnAntiAuraOverlapEnd");

	FOnAntiAuraOverlapEnd parms{};	
	parms.OverlappedComp = OverlappedComp;
	parms.Other = Other;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;

	ProcessEvent(fn, &parms);
}

void UGA_AuraBase::OnAntiAuraOverlapBegin(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_AuraBase.OnAntiAuraOverlapBegin");

	FOnAntiAuraOverlapBegin parms{};	
	parms.OverlappedComp = OverlappedComp;
	parms.Other = Other;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;
	parms.bFromSweep = bFromSweep;
	parms.SweepResult = SweepResult;

	ProcessEvent(fn, &parms);
}

void UGA_AuraBase::AbilityEnded(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_AuraBase.AbilityEnded");

	FAbilityEnded parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_AuraBase::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_AuraBase.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

struct FText UIMUtilBlueprintLibrary::MakeTextwithParam5(struct FText Text, struct FText Param1, struct FText Param2, struct FText Param3, struct FText Param4, struct FText Param5){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.IMUtilBlueprintLibrary.MakeTextwithParam5");

	FMakeTextwithParam5 parms{};	
	parms.Text = Text;
	parms.Param1 = Param1;
	parms.Param2 = Param2;
	parms.Param3 = Param3;
	parms.Param4 = Param4;
	parms.Param5 = Param5;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UIMUtilBlueprintLibrary::MakeTextwithParam4(struct FText Text, struct FText Param1, struct FText Param2, struct FText Param3, struct FText Param4){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.IMUtilBlueprintLibrary.MakeTextwithParam4");

	FMakeTextwithParam4 parms{};	
	parms.Text = Text;
	parms.Param1 = Param1;
	parms.Param2 = Param2;
	parms.Param3 = Param3;
	parms.Param4 = Param4;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UIMUtilBlueprintLibrary::MakeTextwithParam3(struct FText Text, struct FText Param1, struct FText Param2, struct FText Param3){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.IMUtilBlueprintLibrary.MakeTextwithParam3");

	FMakeTextwithParam3 parms{};	
	parms.Text = Text;
	parms.Param1 = Param1;
	parms.Param2 = Param2;
	parms.Param3 = Param3;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UIMUtilBlueprintLibrary::MakeTextwithParam2(struct FText Text, struct FText Param1, struct FText Param2){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.IMUtilBlueprintLibrary.MakeTextwithParam2");

	FMakeTextwithParam2 parms{};	
	parms.Text = Text;
	parms.Param1 = Param1;
	parms.Param2 = Param2;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UIMUtilBlueprintLibrary::MakeTextwithParam1(struct FText Text, struct FText Param1){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.IMUtilBlueprintLibrary.MakeTextwithParam1");

	FMakeTextwithParam1 parms{};	
	parms.Text = Text;
	parms.Param1 = Param1;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UIMUtilBlueprintLibrary::IsServer(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.IMUtilBlueprintLibrary.IsServer");

	FIsServer parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UIMUtilBlueprintLibrary::GetServerWorldTimeSeconds(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.IMUtilBlueprintLibrary.GetServerWorldTimeSeconds");

	FGetServerWorldTimeSeconds parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UIMUtilBlueprintLibrary::GetProjectVersion(struct FString& OutVersion){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.IMUtilBlueprintLibrary.GetProjectVersion");

	FGetProjectVersion parms{};	
	parms.OutVersion = OutVersion;

	ProcessEvent(fn, &parms);
}

void UGA_ChargedRangedAttackBase::SendPlayShootCrossHairNotify(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ChargedRangedAttackBase.SendPlayShootCrossHairNotify");

	FSendPlayShootCrossHairNotify parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ChargedRangedAttackBase::InputActionStarted(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ChargedRangedAttackBase.InputActionStarted");

	FInputActionStarted parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ChargedRangedAttackBase::InputActionCompleted(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ChargedRangedAttackBase.InputActionCompleted");

	FInputActionCompleted parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_BowQuickShotBase::InputActionStarted(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_BowQuickShotBase.InputActionStarted");

	FInputActionStarted parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_BowQuickShotBase::InputActionCompleted(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_BowQuickShotBase.InputActionCompleted");

	FInputActionCompleted parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ChangeIdle::OnCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ChangeIdle.OnCompleted");

	FOnCompleted parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ChangeIdle::OnBlendOut(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ChangeIdle.OnBlendOut");

	FOnBlendOut parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ChangeIdle::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ChangeIdle.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_Drop::OnEndSync(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_Drop.OnEndSync");

	FOnEndSync parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Equip::OnMontageFinished(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_Equip.OnMontageFinished");

	FOnMontageFinished parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_Equip::OnMontageEventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_Equip.OnMontageEventReceived");

	FOnMontageEventReceived parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_Interact::OnVelocityChange(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_Interact.OnVelocityChange");

	FOnVelocityChange parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Interact::OnStartSync(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_Interact.OnStartSync");

	FOnStartSync parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Interact::OnStartDelayFinished(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_Interact.OnStartDelayFinished");

	FOnStartDelayFinished parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Interact::OnSkillCheckSucceed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_Interact.OnSkillCheckSucceed");

	FOnSkillCheckSucceed parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Interact::OnSkillCheckPerfectSucceed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_Interact.OnSkillCheckPerfectSucceed");

	FOnSkillCheckPerfectSucceed parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Interact::OnSkillCheckFinished(uint8_t Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_Interact.OnSkillCheckFinished");

	FOnSkillCheckFinished parms{};	
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UGA_Interact::OnSkillCheckFailed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_Interact.OnSkillCheckFailed");

	FOnSkillCheckFailed parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Interact::OnSkillCheck(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_Interact.OnSkillCheck");

	FOnSkillCheck parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Interact::OnFinish(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_Interact.OnFinish");

	FOnFinish parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Interact::OnEndSync(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_Interact.OnEndSync");

	FOnEndSync parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Interact::OnDetectUnableInteraction(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_Interact.OnDetectUnableInteraction");

	FOnDetectUnableInteraction parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Interact::OnCancelled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_Interact.OnCancelled");

	FOnCancelled parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Interact::OnAimDirectionChange(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_Interact.OnAimDirectionChange");

	FOnAimDirectionChange parms{};	

	ProcessEvent(fn, &parms);
}

bool UGA_Interact::IsValidData(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_Interact.IsValidData");

	FIsValidData parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGA_Interact::EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_Interact.EventReceived");

	FEventReceived parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_StoppablePassiveBase::OnPassiveStop(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_StoppablePassiveBase.OnPassiveStop");

	FOnPassiveStop parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_StoppablePassiveBase::OnPassiveStart(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_StoppablePassiveBase.OnPassiveStart");

	FOnPassiveStart parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_StoppablePassiveBase::OnAnyStopStateTagAdded(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_StoppablePassiveBase.OnAnyStopStateTagAdded");

	FOnAnyStopStateTagAdded parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_StoppablePassiveBase::OnAllStopStateTagsRemoved(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_StoppablePassiveBase.OnAllStopStateTagsRemoved");

	FOnAllStopStateTagsRemoved parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_HuntingTrapDisarmPassiveBase::SetDisarmTarget(struct APropsActorBase* TargetHuntingTrap){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_HuntingTrapDisarmPassiveBase.SetDisarmTarget");

	FSetDisarmTarget parms{};	
	parms.TargetHuntingTrap = TargetHuntingTrap;

	ProcessEvent(fn, &parms);
}

void UGA_HuntingTrapDisarmPassiveBase::ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_HuntingTrapDisarmPassiveBase.ReceivedEvent");

	FReceivedEvent parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_HuntingTrapDisarmPassiveBase::OnTargetGameplayTagChange(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_HuntingTrapDisarmPassiveBase.OnTargetGameplayTagChange");

	FOnTargetGameplayTagChange parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void UGA_HuntingTrapDisarmPassiveBase::ClearDisarmTarget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_HuntingTrapDisarmPassiveBase.ClearDisarmTarget");

	FClearDisarmTarget parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_InteractPassive::RefreshInteractionData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_InteractPassive.RefreshInteractionData");

	FRefreshInteractionData parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_InteractPassive::ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_InteractPassive.ReceivedEvent");

	FReceivedEvent parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_InteractPassive::OnTargetGameplayTagChange(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_InteractPassive.OnTargetGameplayTagChange");

	FOnTargetGameplayTagChange parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void UGA_InteractPassive::OnLostInteractableTarget(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_InteractPassive.OnLostInteractableTarget");

	FOnLostInteractableTarget parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_InteractPassive::OnFoundNewInteractableTarget(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_InteractPassive.OnFoundNewInteractableTarget");

	FOnFoundNewInteractableTarget parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_ItemConsumeBase::OnStartSync(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ItemConsumeBase.OnStartSync");

	FOnStartSync parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ItemConsumeBase::OnFinish(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ItemConsumeBase.OnFinish");

	FOnFinish parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ItemConsumeBase::OnEndSync(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ItemConsumeBase.OnEndSync");

	FOnEndSync parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ItemConsumeBase::OnConsumeStartEventReceived(float ConsumeDuration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ItemConsumeBase.OnConsumeStartEventReceived");

	FOnConsumeStartEventReceived parms{};	
	parms.ConsumeDuration = ConsumeDuration;

	ProcessEvent(fn, &parms);
}

void UGA_ItemConsumeBase::OnConsumeMontageCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ItemConsumeBase.OnConsumeMontageCompleted");

	FOnConsumeMontageCompleted parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ItemConsumeBase::OnConsumeEndEventReceived(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ItemConsumeBase.OnConsumeEndEventReceived");

	FOnConsumeEndEventReceived parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ItemConsumeBase::EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ItemConsumeBase.EventReceived");

	FEventReceived parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ItemConsumeBase::ConsumeEventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ItemConsumeBase.ConsumeEventReceived");

	FConsumeEventReceived parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ItemConsumeBase::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ItemConsumeBase.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_LobbyEmoteBase::ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_LobbyEmoteBase.ReceivedEvent");

	FReceivedEvent parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_LobbyEmoteBase::OnCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_LobbyEmoteBase.OnCompleted");

	FOnCompleted parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_LobbyEmoteBase::OnCancelled(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_LobbyEmoteBase.OnCancelled");

	FOnCancelled parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_LobbyEmoteBase::EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_LobbyEmoteBase.EventReceived");

	FEventReceived parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_MusicChannelingBase::OnTargetActorEndOverlap(struct AActor* Target){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MusicChannelingBase.OnTargetActorEndOverlap");

	FOnTargetActorEndOverlap parms{};	
	parms.Target = Target;

	ProcessEvent(fn, &parms);
}

void UGA_MusicChannelingBase::OnTargetActorBeginOverlap(struct AActor* Target){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MusicChannelingBase.OnTargetActorBeginOverlap");

	FOnTargetActorBeginOverlap parms{};	
	parms.Target = Target;

	ProcessEvent(fn, &parms);
}

void UGA_MusicChannelingBase::EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MusicChannelingBase.EventReceived");

	FEventReceived parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_MusicChannelingBase::ApplyToOverlappedTargets(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_MusicChannelingBase.ApplyToOverlappedTargets");

	FApplyToOverlappedTargets parms{};	

	ProcessEvent(fn, &parms);
}

void UItemComponentBase::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemComponentBase.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UItemComponentBase::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemComponentBase.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UItemComponentBase::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemComponentBase.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UItemComponentBase::SendGamePlayEventToItemActor(struct AActor* NewOwner, struct FItemData MoveItemNewData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemComponentBase.SendGamePlayEventToItemActor");

	FSendGamePlayEventToItemActor parms{};	
	parms.NewOwner = NewOwner;
	parms.MoveItemNewData = MoveItemNewData;

	ProcessEvent(fn, &parms);
}

void UItemComponentBase::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemComponentBase.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerCharMeleeAttackBase::OtherHandIAStarted(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerCharMeleeAttackBase.OtherHandIAStarted");

	FOtherHandIAStarted parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerCharMeleeAttackBase::OtherHandIACompleted(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerCharMeleeAttackBase.OtherHandIACompleted");

	FOtherHandIACompleted parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerCharMeleeAttackBase::OnReceiveTargetDataStart(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerCharMeleeAttackBase.OnReceiveTargetDataStart");

	FOnReceiveTargetDataStart parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerCharMeleeAttackBase::OnReceiveTargetDataEnd(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerCharMeleeAttackBase.OnReceiveTargetDataEnd");

	FOnReceiveTargetDataEnd parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerCharMeleeAttackBase::ComboIAStarted(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerCharMeleeAttackBase.ComboIAStarted");

	FComboIAStarted parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerCharMeleeAttackBase::ComboIACompleted(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerCharMeleeAttackBase.ComboIACompleted");

	FComboIACompleted parms{};	

	ProcessEvent(fn, &parms);
}

void UMailBoxWidgetBase::OnSetPartyPrivacy(bool bOn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MailBoxWidgetBase.OnSetPartyPrivacy");

	FOnSetPartyPrivacy parms{};	
	parms.bOn = bOn;

	ProcessEvent(fn, &parms);
}

void UMailBoxWidgetBase::OnFMsgWidgetStreamingModeNotifyBlueprint(struct FMsgWidgetStreamingModeNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MailBoxWidgetBase.OnFMsgWidgetStreamingModeNotifyBlueprint");

	FOnFMsgWidgetStreamingModeNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

bool UMailBoxWidgetBase::IsPartyPrivacyOn(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MailBoxWidgetBase.IsPartyPrivacyOn");

	FIsPartyPrivacyOn parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGA_PlayerMagicWandUseBase::ServerReceivedTargetData(struct FGameplayTag InEffectTag, struct FGameplayTag InChannelTag, struct FGameplayAbilityTargetDataHandle& InData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMagicWandUseBase.ServerReceivedTargetData");

	FServerReceivedTargetData parms{};	
	parms.InEffectTag = InEffectTag;
	parms.InChannelTag = InChannelTag;
	parms.InData = InData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMagicWandUseBase::ReceivedTargetData(struct FGameplayAbilityTargetDataHandle& InData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMagicWandUseBase.ReceivedTargetData");

	FReceivedTargetData parms{};	
	parms.InData = InData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMagicWandUseBase::ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMagicWandUseBase.ReceivedEvent");

	FReceivedEvent parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMagicWandUseBase::OnVelocityChange(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMagicWandUseBase.OnVelocityChange");

	FOnVelocityChange parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMagicWandUseBase::OnStuckFinish(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMagicWandUseBase.OnStuckFinish");

	FOnStuckFinish parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMagicWandUseBase::OnStuck(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMagicWandUseBase.OnStuck");

	FOnStuck parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMagicWandUseBase::OnRelease(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMagicWandUseBase.OnRelease");

	FOnRelease parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMagicWandUseBase::OnInterruptFinish(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMagicWandUseBase.OnInterruptFinish");

	FOnInterruptFinish parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMagicWandUseBase::OnInterrupted(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMagicWandUseBase.OnInterrupted");

	FOnInterrupted parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMagicWandUseBase::OnFire(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMagicWandUseBase.OnFire");

	FOnFire parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMagicWandUseBase::OnCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMagicWandUseBase.OnCompleted");

	FOnCompleted parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMagicWandUseBase::OnChannelingAction(int32_t ActionCounter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMagicWandUseBase.OnChannelingAction");

	FOnChannelingAction parms{};	
	parms.ActionCounter = ActionCounter;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMagicWandUseBase::OnCancelled(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMagicWandUseBase.OnCancelled");

	FOnCancelled parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMagicWandUseBase::OnBlendOut(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMagicWandUseBase.OnBlendOut");

	FOnBlendOut parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMagicWandUseBase::EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMagicWandUseBase.EventReceived");

	FEventReceived parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMagicWandUseBase::ClientReceivedTargetData(struct FGameplayTag InEffectTag, struct FGameplayTag InChannelTag, struct FGameplayAbilityTargetDataHandle& InData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMagicWandUseBase.ClientReceivedTargetData");

	FClientReceivedTargetData parms{};	
	parms.InEffectTag = InEffectTag;
	parms.InChannelTag = InChannelTag;
	parms.InData = InData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerMagicWandUseBase::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerMagicWandUseBase.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillBase::SetEquippedItemsHidden(bool bShouldHide){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillBase.SetEquippedItemsHidden");

	FSetEquippedItemsHidden parms{};	
	parms.bShouldHide = bShouldHide;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillBase::ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillBase.ServerOnSkillActivate");

	FServerOnSkillActivate parms{};	
	parms.SkillTag = SkillTag;
	parms.CooldownTag = CooldownTag;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillBase::ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillBase.ReceivedEvent");

	FReceivedEvent parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillBase::OnSkillActivateNotify(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillBase.OnSkillActivateNotify");

	FOnSkillActivateNotify parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillBase::OnInterrupted(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillBase.OnInterrupted");

	FOnInterrupted parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillBase::OnCooldownTagApplied(struct FGameplayTag EffectGameplayTag, struct FActiveGameplayEffectHandle EffectHandle, int32_t NewStackCount, int32_t PreviousStackCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillBase.OnCooldownTagApplied");

	FOnCooldownTagApplied parms{};	
	parms.EffectGameplayTag = EffectGameplayTag;
	parms.EffectHandle = EffectHandle;
	parms.NewStackCount = NewStackCount;
	parms.PreviousStackCount = PreviousStackCount;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillBase::OnCooldownStarted(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag, float CooldownDuration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillBase.OnCooldownStarted");

	FOnCooldownStarted parms{};	
	parms.SkillTag = SkillTag;
	parms.CooldownTag = CooldownTag;
	parms.CooldownDuration = CooldownDuration;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillBase::OnCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillBase.OnCompleted");

	FOnCompleted parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillBase::OnCancelled(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillBase.OnCancelled");

	FOnCancelled parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillBase::OnBlendOut(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillBase.OnBlendOut");

	FOnBlendOut parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

struct FDesignDataSkill UGA_PlayerSkillBase::GetCurrentDesignDataSkill(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillBase.GetCurrentDesignDataSkill");

	FGetCurrentDesignDataSkill parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGA_PlayerSkillBase::EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillBase.EventReceived");

	FEventReceived parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillBase::ClientOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillBase.ClientOnSkillActivate");

	FClientOnSkillActivate parms{};	
	parms.SkillTag = SkillTag;
	parms.CooldownTag = CooldownTag;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillBase::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillBase.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillChannelingBase::ServerOnChannelingAction_BP(struct FGameplayEventData EventData, struct FGameplayCueParameters CueParams){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillChannelingBase.ServerOnChannelingAction_BP");

	FServerOnChannelingAction_BP parms{};	
	parms.EventData = EventData;
	parms.CueParams = CueParams;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillChannelingBase::ServerOnChannelingAction(int32_t ActionCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillChannelingBase.ServerOnChannelingAction");

	FServerOnChannelingAction parms{};	
	parms.ActionCount = ActionCount;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillChannelingBase::OnVelocityChange(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillChannelingBase.OnVelocityChange");

	FOnVelocityChange parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillChannelingBase::OnChannelingStartSync(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillChannelingBase.OnChannelingStartSync");

	FOnChannelingStartSync parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillChannelingBase::OnChannelingFinishSync(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillChannelingBase.OnChannelingFinishSync");

	FOnChannelingFinishSync parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillChannelingBase::OnChannelingFinish(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillChannelingBase.OnChannelingFinish");

	FOnChannelingFinish parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillInstantAndWaitForEndBase::ServerBuffRemoved(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillInstantAndWaitForEndBase.ServerBuffRemoved");

	FServerBuffRemoved parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillInstantAndWaitForEndBase::OnSkillBuffTagRemoved(int32_t NewCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillInstantAndWaitForEndBase.OnSkillBuffTagRemoved");

	FOnSkillBuffTagRemoved parms{};	
	parms.NewCount = NewCount;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillInstantAndWaitForEndBase::ConsumeBuff(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillInstantAndWaitForEndBase.ConsumeBuff");

	FConsumeBuff parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSkillRouterBase::OnRoutedAbilityEnded(struct FAbilityEndedData& AbilityEndedData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSkillRouterBase.OnRoutedAbilityEnded");

	FOnRoutedAbilityEnded parms{};	
	parms.AbilityEndedData = AbilityEndedData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::SpellFireEvent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.SpellFireEvent");

	FSpellFireEvent parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::ServerReceivedTargetData(struct FGameplayTag InEffectTag, struct FGameplayTag InChannelTag, struct FGameplayAbilityTargetDataHandle& InData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.ServerReceivedTargetData");

	FServerReceivedTargetData parms{};	
	parms.InEffectTag = InEffectTag;
	parms.InChannelTag = InChannelTag;
	parms.InData = InData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::SendActivateSpellCrossHairNotify(bool IsActivate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.SendActivateSpellCrossHairNotify");

	FSendActivateSpellCrossHairNotify parms{};	
	parms.IsActivate = IsActivate;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::ReceivedTargetData(struct FGameplayAbilityTargetDataHandle& InData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.ReceivedTargetData");

	FReceivedTargetData parms{};	
	parms.InData = InData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.ReceivedEvent");

	FReceivedEvent parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::OnVelocityChange(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.OnVelocityChange");

	FOnVelocityChange parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::OnStuckFinish(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.OnStuckFinish");

	FOnStuckFinish parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::OnStuck(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.OnStuck");

	FOnStuck parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::OnStartSync(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.OnStartSync");

	FOnStartSync parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::OnRelease(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.OnRelease");

	FOnRelease parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::OnInterruptFinish(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.OnInterruptFinish");

	FOnInterruptFinish parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::OnInterrupted(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.OnInterrupted");

	FOnInterrupted parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::OnFire(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.OnFire");

	FOnFire parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::OnFinishSync(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.OnFinishSync");

	FOnFinishSync parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::OnFinish(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.OnFinish");

	FOnFinish parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::OnCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.OnCompleted");

	FOnCompleted parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::OnChannelingTriggerSync(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.OnChannelingTriggerSync");

	FOnChannelingTriggerSync parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::OnChannelingFinishSync(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.OnChannelingFinishSync");

	FOnChannelingFinishSync parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::OnChannelingFinish(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.OnChannelingFinish");

	FOnChannelingFinish parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::OnChannelingAction(int32_t ActionCounter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.OnChannelingAction");

	FOnChannelingAction parms{};	
	parms.ActionCounter = ActionCounter;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::OnCastTriggerSync(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.OnCastTriggerSync");

	FOnCastTriggerSync parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::OnCancelled(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.OnCancelled");

	FOnCancelled parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::OnBlendOut(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.OnBlendOut");

	FOnBlendOut parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.EventReceived");

	FEventReceived parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::ClientReceivedTargetData(struct FGameplayTag InEffectTag, struct FGameplayTag InChannelTag, struct FGameplayAbilityTargetDataHandle& InData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.ClientReceivedTargetData");

	FClientReceivedTargetData parms{};	
	parms.InEffectTag = InEffectTag;
	parms.InChannelTag = InChannelTag;
	parms.InData = InData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::CastingFinishEvent(struct FDesignDataSpell CurentDesignSpellData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.CastingFinishEvent");

	FCastingFinishEvent parms{};	
	parms.CurentDesignSpellData = CurentDesignSpellData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCastBase::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_PlayerSpellCastBase.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_ReloadAmmoBase::ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ReloadAmmoBase.ReceivedEvent");

	FReceivedEvent parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ReloadAmmoBase::OnCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ReloadAmmoBase.OnCompleted");

	FOnCompleted parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ReloadAmmoBase::OnCancelled(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ReloadAmmoBase.OnCancelled");

	FOnCancelled parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ReloadAmmoBase::EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ReloadAmmoBase.EventReceived");

	FEventReceived parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ReloadAmmoBase::CancelReloadByCrossHairAim(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ReloadAmmoBase.CancelReloadByCrossHairAim");

	FCancelReloadByCrossHairAim parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ReloadAmmoBase::ActivateCrossHairPullAnimationByCrossbow(float ActionSpeed){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ReloadAmmoBase.ActivateCrossHairPullAnimationByCrossbow");

	FActivateCrossHairPullAnimationByCrossbow parms{};	
	parms.ActionSpeed = ActionSpeed;

	ProcessEvent(fn, &parms);
}

void UGA_ReloadAmmoBase::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_ReloadAmmoBase.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SequenceDamageBase::OnDamageOverlapEnd(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_SequenceDamageBase.OnDamageOverlapEnd");

	FOnDamageOverlapEnd parms{};	
	parms.OverlappedComp = OverlappedComp;
	parms.Other = Other;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;

	ProcessEvent(fn, &parms);
}

void UGA_SequenceDamageBase::OnDamageOverlapBegin(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_SequenceDamageBase.OnDamageOverlapBegin");

	FOnDamageOverlapBegin parms{};	
	parms.OverlappedComp = OverlappedComp;
	parms.Other = Other;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;
	parms.bFromSweep = bFromSweep;
	parms.SweepResult = SweepResult;

	ProcessEvent(fn, &parms);
}

void UGA_SequenceDamageBase::OnDamageEvent(struct AActor* TargetActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_SequenceDamageBase.OnDamageEvent");

	FOnDamageEvent parms{};	
	parms.TargetActor = TargetActor;

	ProcessEvent(fn, &parms);
}

void UGA_SequenceDamageBase::EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_SequenceDamageBase.EventReceived");

	FEventReceived parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_WearBase::OnStartSync(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_WearBase.OnStartSync");

	FOnStartSync parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_WearBase::OnLootTargetRemoved(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_WearBase.OnLootTargetRemoved");

	FOnLootTargetRemoved parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_WearBase::OnFinish(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_WearBase.OnFinish");

	FOnFinish parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_WearBase::OnEndSync(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_WearBase.OnEndSync");

	FOnEndSync parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_WearBase::OnChangingMontageCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_WearBase.OnChangingMontageCompleted");

	FOnChangingMontageCompleted parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_WearBase::EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.GA_WearBase.EventReceived");

	FEventReceived parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UInventoryLootingWidget::RequestInventoryWidgetVisible(bool bVisible){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InventoryLootingWidget.RequestInventoryWidgetVisible");

	FRequestInventoryWidgetVisible parms{};	
	parms.bVisible = bVisible;

	ProcessEvent(fn, &parms);
}

void UInventoryLootingWidget::OnLootingTargetCountChanged(int32_t Count){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InventoryLootingWidget.OnLootingTargetCountChanged");

	FOnLootingTargetCountChanged parms{};	
	parms.Count = Count;

	ProcessEvent(fn, &parms);
}

void UInventoryLootingWidget::OnLootingPlayerSet(bool bSetTargetPlayer, struct FName TargetPlayerName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InventoryLootingWidget.OnLootingPlayerSet");

	FOnLootingPlayerSet parms{};	
	parms.bSetTargetPlayer = bSetTargetPlayer;
	parms.TargetPlayerName = TargetPlayerName;

	ProcessEvent(fn, &parms);
}

void UInventoryStatusWidget::OnPlayerCharacterName(struct FText& NewValue, struct FText& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InventoryStatusWidget.OnPlayerCharacterName");

	FOnPlayerCharacterName parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UInvitePartyWidget::TryRequestInviteParty(struct UInvitePartyUserSlotWidgetData* InInvitePartyUserSlotWidgetData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InvitePartyWidget.TryRequestInviteParty");

	FTryRequestInviteParty parms{};	
	parms.InInvitePartyUserSlotWidgetData = InInvitePartyUserSlotWidgetData;

	ProcessEvent(fn, &parms);
}

void UInvitePartyWidget::OnUserListFindIdClicked(struct FText& FindId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InvitePartyWidget.OnUserListFindIdClicked");

	FOnUserListFindIdClicked parms{};	
	parms.FindId = FindId;

	ProcessEvent(fn, &parms);
}

bool UInvitePartyWidget::OnTextChangedFindUserId(struct FText& FindId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InvitePartyWidget.OnTextChangedFindUserId");

	FOnTextChangedFindUserId parms{};	
	parms.FindId = FindId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UInvitePartyWidget::OnRightButtonCkicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InvitePartyWidget.OnRightButtonCkicked");

	FOnRightButtonCkicked parms{};	

	ProcessEvent(fn, &parms);
}

void UInvitePartyWidget::OnPopupSWidgetPartyInviteResult(uint8_t PopupResult, struct FInvitePartyUserSlot& TargetUser){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InvitePartyWidget.OnPopupSWidgetPartyInviteResult");

	FOnPopupSWidgetPartyInviteResult parms{};	
	parms.PopupResult = PopupResult;
	parms.TargetUser = TargetUser;

	ProcessEvent(fn, &parms);
}

void UInvitePartyWidget::OnPageNumber(int32_t CurrentPage, int32_t MaxPage){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InvitePartyWidget.OnPageNumber");

	FOnPageNumber parms{};	
	parms.CurrentPage = CurrentPage;
	parms.MaxPage = MaxPage;

	ProcessEvent(fn, &parms);
}

void UInvitePartyWidget::OnLocateNumber(int32_t LobbyCount, int32_t DungeonCount, int32_t BlockCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InvitePartyWidget.OnLocateNumber");

	FOnLocateNumber parms{};	
	parms.LobbyCount = LobbyCount;
	parms.DungeonCount = DungeonCount;
	parms.BlockCount = BlockCount;

	ProcessEvent(fn, &parms);
}

void UInvitePartyWidget::OnLeftButtonCkicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InvitePartyWidget.OnLeftButtonCkicked");

	FOnLeftButtonCkicked parms{};	

	ProcessEvent(fn, &parms);
}

void UInvitePartyWidget::OnInvitePartyUserSlotData(struct FInvitePartyUserSlotData& NewValue, struct FInvitePartyUserSlotData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InvitePartyWidget.OnInvitePartyUserSlotData");

	FOnInvitePartyUserSlotData parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UInvitePartyWidget::OnClassIconSelected(struct FPrimaryAssetId& InCharacterClassId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InvitePartyWidget.OnClassIconSelected");

	FOnClassIconSelected parms{};	
	parms.InCharacterClassId = InCharacterClassId;

	ProcessEvent(fn, &parms);
}

void UInvitePartyWidget::OnButtonShowBlock(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InvitePartyWidget.OnButtonShowBlock");

	FOnButtonShowBlock parms{};	

	ProcessEvent(fn, &parms);
}

void UInvitePartyWidget::HandleBackButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.InvitePartyWidget.HandleBackButtonClicked");

	FHandleBackButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UItem::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.Item.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UItem::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.Item.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UItem::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.Item.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

bool UItem::IsItemWeaponType(struct FGameplayTag WeaponType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.Item.IsItemWeaponType");

	FIsItemWeaponType parms{};	
	parms.WeaponType = WeaponType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UItem::Initialize(struct FItemData& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.Item.Initialize");

	FInitialize parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

struct TArray<struct FGameplayTag> UItem::GetItemWeaponTypes(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.Item.GetItemWeaponTypes");

	FGetItemWeaponTypes parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayTag UItem::GetItemSlotType(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.Item.GetItemSlotType");

	FGetItemSlotType parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UTexture2D* UItem::GetItemIconTexture(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.Item.GetItemIconTexture");

	FGetItemIconTexture parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayTag UItem::GetItemHandType(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.Item.GetItemHandType");

	FGetItemHandType parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FGameplayTag> UItem::GetItemDataWeaponTypeTags(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.Item.GetItemDataWeaponTypeTags");

	FGetItemDataWeaponTypeTags parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayTag UItem::GetItemDataUtilityTag(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.Item.GetItemDataUtilityTag");

	FGetItemDataUtilityTag parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FItemData UItem::GetItemData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.Item.GetItemData");

	FGetItemData parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct AItemActor* UItem::GetItemActor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.Item.GetItemActor");

	FGetItemActor parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FDesignDataItem UItem::GetDesignDataItem(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.Item.GetDesignDataItem");

	FGetDesignDataItem parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UItem::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.Item.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void AItemActor::SetSheathed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemActor.SetSheathed");

	FSetSheathed parms{};	

	ProcessEvent(fn, &parms);
}

void AItemActor::SetItemData(struct FItemData& InItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemActor.SetItemData");

	FSetItemData parms{};	
	parms.InItemData = InItemData;

	ProcessEvent(fn, &parms);
}

void AItemActor::SetEquipped(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemActor.SetEquipped");

	FSetEquipped parms{};	

	ProcessEvent(fn, &parms);
}

void AItemActor::PreReduceAmmoCount(int32_t ReduceCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemActor.PreReduceAmmoCount");

	FPreReduceAmmoCount parms{};	
	parms.ReduceCount = ReduceCount;

	ProcessEvent(fn, &parms);
}

void AItemActor::OnRep_ItemData(struct FItemData& OldItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemActor.OnRep_ItemData");

	FOnRep_ItemData parms{};	
	parms.OldItemData = OldItemData;

	ProcessEvent(fn, &parms);
}

void AItemActor::OnHiddenInGameStateChanged(bool bIsHidden){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemActor.OnHiddenInGameStateChanged");

	FOnHiddenInGameStateChanged parms{};	
	parms.bIsHidden = bIsHidden;

	ProcessEvent(fn, &parms);
}

void AItemActor::OnAttachmentReplication(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemActor.OnAttachmentReplication");

	FOnAttachmentReplication parms{};	

	ProcessEvent(fn, &parms);
}

void AItemActor::OnAttachedSheathSocket(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemActor.OnAttachedSheathSocket");

	FOnAttachedSheathSocket parms{};	

	ProcessEvent(fn, &parms);
}

void AItemActor::OnAttachedEquipSocket(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemActor.OnAttachedEquipSocket");

	FOnAttachedEquipSocket parms{};	

	ProcessEvent(fn, &parms);
}

void AItemActor::ItemDataUpdated(struct FItemData& InItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemActor.ItemDataUpdated");

	FItemDataUpdated parms{};	
	parms.InItemData = InItemData;

	ProcessEvent(fn, &parms);
}

struct USoundData* AItemActor::GetSoundData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemActor.GetSoundData");

	FGetSoundData parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayTag AItemActor::GetItemUtilityTag(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemActor.GetItemUtilityTag");

	FGetItemUtilityTag parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FGameplayTag> AItemActor::GetItemTypeTags(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemActor.GetItemTypeTags");

	FGetItemTypeTags parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FItemData AItemActor::GetItemData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemActor.GetItemData");

	FGetItemData parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FDesignDataItem AItemActor::GetDesignDataItem(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemActor.GetDesignDataItem");

	FGetDesignDataItem parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void AItemActor::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemActor.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void UItemCountSelectWidget::OnTextBlockValueChanged(struct FText& Text){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemCountSelectWidget.OnTextBlockValueChanged");

	FOnTextBlockValueChanged parms{};	
	parms.Text = Text;

	ProcessEvent(fn, &parms);
}

void UItemCountSelectWidget::OnTextBlockCommitted(struct FText& Text, enum class ETextCommit CommitMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemCountSelectWidget.OnTextBlockCommitted");

	FOnTextBlockCommitted parms{};	
	parms.Text = Text;
	parms.CommitMethod = CommitMethod;

	ProcessEvent(fn, &parms);
}

void UItemCountSelectWidget::OnSliderValueChanged(float Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemCountSelectWidget.OnSliderValueChanged");

	FOnSliderValueChanged parms{};	
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void UItemCountSelectWidget::OnRemovePopup(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemCountSelectWidget.OnRemovePopup");

	FOnRemovePopup parms{};	

	ProcessEvent(fn, &parms);
}

void UItemCountSelectWidget::OnCreatePopup(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemCountSelectWidget.OnCreatePopup");

	FOnCreatePopup parms{};	

	ProcessEvent(fn, &parms);
}

void UItemCountSelectWidget::HandleRightButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemCountSelectWidget.HandleRightButtonClicked");

	FHandleRightButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UItemCountSelectWidget::HandleLeftButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemCountSelectWidget.HandleLeftButtonClicked");

	FHandleLeftButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UDCItemDataComponent::OnLoadData_Sound(struct UObject* InLoadedObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCItemDataComponent.OnLoadData_Sound");

	FOnLoadData_Sound parms{};	
	parms.InLoadedObject = InLoadedObject;

	ProcessEvent(fn, &parms);
}

void UDCItemDataComponent::OnLoadData_Bundle(struct UObject* InLoadedObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCItemDataComponent.OnLoadData_Bundle");

	FOnLoadData_Bundle parms{};	
	parms.InLoadedObject = InLoadedObject;

	ProcessEvent(fn, &parms);
}

void UDCItemDataComponent::OnLoadData_Art(struct UObject* InLoadedObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.DCItemDataComponent.OnLoadData_Art");

	FOnLoadData_Art parms{};	
	parms.InLoadedObject = InLoadedObject;

	ProcessEvent(fn, &parms);
}

void AItemHolderActorBase::SetItemObject(struct UItem* Item){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemHolderActorBase.SetItemObject");

	FSetItemObject parms{};	
	parms.Item = Item;

	ProcessEvent(fn, &parms);
}

void AItemHolderActorBase::OverrideItemArtData(struct UArtDataItem* NewItemArtData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemHolderActorBase.OverrideItemArtData");

	FOverrideItemArtData parms{};	
	parms.NewItemArtData = NewItemArtData;

	ProcessEvent(fn, &parms);
}

void AItemHolderActorBase::OnRep_ItemId(struct FPrimaryAssetId OldItemId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemHolderActorBase.OnRep_ItemId");

	FOnRep_ItemId parms{};	
	parms.OldItemId = OldItemId;

	ProcessEvent(fn, &parms);
}

void AItemHolderActorBase::OnRep_ArtDataItem(struct UArtDataItem* OldArtDataItem){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemHolderActorBase.OnRep_ArtDataItem");

	FOnRep_ArtDataItem parms{};	
	parms.OldArtDataItem = OldArtDataItem;

	ProcessEvent(fn, &parms);
}

void UItemRandomGenerateComponent::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemRandomGenerateComponent.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UItemRandomGenerateComponent::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemRandomGenerateComponent.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UItemRandomGenerateComponent::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemRandomGenerateComponent.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UItemRandomGenerateComponent::DropItem(int64_t ItemUniqueId, struct AActor* Owner){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemRandomGenerateComponent.DropItem");

	FDropItem parms{};	
	parms.ItemUniqueId = ItemUniqueId;
	parms.Owner = Owner;

	ProcessEvent(fn, &parms);
}

void UItemRandomGenerateComponent::DropAllItems(float InLuck){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemRandomGenerateComponent.DropAllItems");

	FDropAllItems parms{};	
	parms.InLuck = InLuck;

	ProcessEvent(fn, &parms);
}

void UItemRandomGenerateComponent::ClearAllItems(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemRandomGenerateComponent.ClearAllItems");

	FClearAllItems parms{};	

	ProcessEvent(fn, &parms);
}

void UItemRandomGenerateComponent::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemRandomGenerateComponent.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

struct FTextBlockStyle UItemRichTextBlockDecorator::GetItemTextBlockStyle(struct FGameplayTag InRarityType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemRichTextBlockDecorator.GetItemTextBlockStyle");

	FGetItemTextBlockStyle parms{};	
	parms.InRarityType = InRarityType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UItemTooltipRequirementWidget::OnChangedRequirementStatus(bool bFulfilled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemTooltipRequirementWidget.OnChangedRequirementStatus");

	FOnChangedRequirementStatus parms{};	
	parms.bFulfilled = bFulfilled;

	ProcessEvent(fn, &parms);
}

void UItemWeaponAnimInstanceBase::OnItemDataUpdated(struct FItemData& ItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ItemWeaponAnimInstanceBase.OnItemDataUpdated");

	FOnItemDataUpdated parms{};	
	parms.ItemData = ItemData;

	ProcessEvent(fn, &parms);
}

void UKarmaMemberSlotWidgetBase::OnFMsgWidgetStreamingModeNotifyBlueprint(struct FMsgWidgetStreamingModeNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.KarmaMemberSlotWidgetBase.OnFMsgWidgetStreamingModeNotifyBlueprint");

	FOnFMsgWidgetStreamingModeNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ULeaderboardContentWidget::OnContentScoreName(struct FText& NewValue, struct FText& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LeaderboardContentWidget.OnContentScoreName");

	FOnContentScoreName parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void ULeaderboardContentWidget::OnContentName(struct FText& NewValue, struct FText& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LeaderboardContentWidget.OnContentName");

	FOnContentName parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void ULeaderboardContentWidget::OnContentDesc(struct FText& NewValue, struct FText& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LeaderboardContentWidget.OnContentDesc");

	FOnContentDesc parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void ULeaderboardRankRecordMineWidget::OnRankRecord(struct FRankRecord& NewValue, struct FRankRecord& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LeaderboardRankRecordMineWidget.OnRankRecord");

	FOnRankRecord parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void ULeaderboardRankRecordMineWidget::OnFMsgWidgetStreamingModeNotifyBlueprint(struct FMsgWidgetStreamingModeNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LeaderboardRankRecordMineWidget.OnFMsgWidgetStreamingModeNotifyBlueprint");

	FOnFMsgWidgetStreamingModeNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ULeaderboardRankRecordWidget::OnRankRecordData(struct FRankRecord& NewValue, struct FRankRecord& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LeaderboardRankRecordWidget.OnRankRecordData");

	FOnRankRecordData parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void ULeaderboardRankRecordWidget::OnMineRankRecordData(struct FRankRecord& MineValue, bool IsMine){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LeaderboardRankRecordWidget.OnMineRankRecordData");

	FOnMineRankRecordData parms{};	
	parms.MineValue = MineValue;
	parms.IsMine = IsMine;

	ProcessEvent(fn, &parms);
}

void ULeaderboardRankRecordWidget::OnFMsgWidgetStreamingModeNotifyBlueprint(struct FMsgWidgetStreamingModeNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LeaderboardRankRecordWidget.OnFMsgWidgetStreamingModeNotifyBlueprint");

	FOnFMsgWidgetStreamingModeNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ULeaderboardWidget::PrevContentPage(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LeaderboardWidget.PrevContentPage");

	FPrevContentPage parms{};	

	ProcessEvent(fn, &parms);
}

void ULeaderboardWidget::OnSheetTabSelected(struct FName InTabId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LeaderboardWidget.OnSheetTabSelected");

	FOnSheetTabSelected parms{};	
	parms.InTabId = InTabId;

	ProcessEvent(fn, &parms);
}

void ULeaderboardWidget::OnLeaderboardSeasonTimerData(struct FLeaderboardSeasonTimerData& NewValue, struct FLeaderboardSeasonTimerData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LeaderboardWidget.OnLeaderboardSeasonTimerData");

	FOnLeaderboardSeasonTimerData parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void ULeaderboardWidget::NextContentPage(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LeaderboardWidget.NextContentPage");

	FNextContentPage parms{};	

	ProcessEvent(fn, &parms);
}

struct FText ULeaderboardWidget::GetGameDifficultyTypeTabName(uint8_t InGameDifficultyType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LeaderboardWidget.GetGameDifficultyTypeTabName");

	FGetGameDifficultyTypeTabName parms{};	
	parms.InGameDifficultyType = InGameDifficultyType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ULobbyGroupTradingWidget::OnReadRulesButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LobbyGroupTradingWidget.OnReadRulesButtonClicked");

	FOnReadRulesButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void ULobbyGroupTradingWidget::OnLeaveChannelButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LobbyGroupTradingWidget.OnLeaveChannelButtonClicked");

	FOnLeaveChannelButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void ULoginSecretTokenPopup::HandleCopyToClipboardButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LoginSecretTokenPopup.HandleCopyToClipboardButtonClicked");

	FHandleCopyToClipboardButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void ULoginSecretTokenPopup::HandleConfirmButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LoginSecretTokenPopup.HandleConfirmButtonClicked");

	FHandleConfirmButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void ULoginWidget::StopLoginSound(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LoginWidget.StopLoginSound");

	FStopLoginSound parms{};	

	ProcessEvent(fn, &parms);
}

void ULoginWidget::PlayLoginSound(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LoginWidget.PlayLoginSound");

	FPlayLoginSound parms{};	

	ProcessEvent(fn, &parms);
}

void ULoginWidget::OnTextChangedPassWord(struct FText& InPassWord){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LoginWidget.OnTextChangedPassWord");

	FOnTextChangedPassWord parms{};	
	parms.InPassWord = InPassWord;

	ProcessEvent(fn, &parms);
}

void ULoginWidget::OnTextChangedLoginId(struct FText& InLoginId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LoginWidget.OnTextChangedLoginId");

	FOnTextChangedLoginId parms{};	
	parms.InLoginId = InLoginId;

	ProcessEvent(fn, &parms);
}

void ULoginWidget::OnSelectionChanged(struct FString SelectedItem, enum class ESelectInfo SelectionType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LoginWidget.OnSelectionChanged");

	FOnSelectionChanged parms{};	
	parms.SelectedItem = SelectedItem;
	parms.SelectionType = SelectionType;

	ProcessEvent(fn, &parms);
}

void ULoginWidget::OnLoginButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LoginWidget.OnLoginButtonClicked");

	FOnLoginButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void ULoginWidget::OnAgeRatingType(uint8_t NewValue, uint8_t OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LoginWidget.OnAgeRatingType");

	FOnAgeRatingType parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

bool ULoginWidget::IsUsingPlatform(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.LoginWidget.IsUsingPlatform");

	FIsUsingPlatform parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMetaStorageComponent::OnLobbyCharacterInfoUupdated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.MetaStorageComponent.OnLobbyCharacterInfoUupdated");

	FOnLobbyCharacterInfoUupdated parms{};	

	ProcessEvent(fn, &parms);
}

void UOnlineSystemChaf::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.OnlineSystemChaf.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UOnlineSystemChaf::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.OnlineSystemChaf.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UOnlineSystemChaf::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.OnlineSystemChaf.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UOnlineSystemChaf::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.OnlineSystemChaf.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UOnlineSystemEpic::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.OnlineSystemEpic.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UOnlineSystemEpic::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.OnlineSystemEpic.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UOnlineSystemEpic::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.OnlineSystemEpic.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UOnlineSystemEpic::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.OnlineSystemEpic.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UPartySession::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PartySession.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UPartySession::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PartySession.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UPartySession::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PartySession.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UPartySession::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PartySession.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void APlayerCharacterCaptureActor::SetStartRotateLocation(float InStartPosition){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayerCharacterCaptureActor.SetStartRotateLocation");

	FSetStartRotateLocation parms{};	
	parms.InStartPosition = InStartPosition;

	ProcessEvent(fn, &parms);
}

void APlayerCharacterCaptureActor::SetMeshRotationSpeedMultiplier(float Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayerCharacterCaptureActor.SetMeshRotationSpeedMultiplier");

	FSetMeshRotationSpeedMultiplier parms{};	
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void APlayerCharacterCaptureActor::SetMeshRotation(float InYaw){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayerCharacterCaptureActor.SetMeshRotation");

	FSetMeshRotation parms{};	
	parms.InYaw = InYaw;

	ProcessEvent(fn, &parms);
}

void APlayerCharacterCaptureActor::ResetMeshRotation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayerCharacterCaptureActor.ResetMeshRotation");

	FResetMeshRotation parms{};	

	ProcessEvent(fn, &parms);
}

void APlayerCharacterCaptureActor::OnItemEquipped(struct UAnimationAsset* ItemStandIdle, struct FGameplayTag ItemHandType, struct FGameplayTag ItemSlotType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayerCharacterCaptureActor.OnItemEquipped");

	FOnItemEquipped parms{};	
	parms.ItemStandIdle = ItemStandIdle;
	parms.ItemHandType = ItemHandType;
	parms.ItemSlotType = ItemSlotType;

	ProcessEvent(fn, &parms);
}

struct UAnimInstance* APlayerCharacterCaptureActor::GetCharacterMeshAnimInstance(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayerCharacterCaptureActor.GetCharacterMeshAnimInstance");

	FGetCharacterMeshAnimInstance parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UPlayWidget::OnUpdateLobbyCharacterData(struct FLobbyCharacterInfo& LobbyInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.OnUpdateLobbyCharacterData");

	FOnUpdateLobbyCharacterData parms{};	
	parms.LobbyInfo = LobbyInfo;

	ProcessEvent(fn, &parms);
}

void UPlayWidget::OnUpdateDungeonSelectBtn(uint8_t GameDifficultyType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.OnUpdateDungeonSelectBtn");

	FOnUpdateDungeonSelectBtn parms{};	
	parms.GameDifficultyType = GameDifficultyType;

	ProcessEvent(fn, &parms);
}

void UPlayWidget::OnStartButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.OnStartButtonClicked");

	FOnStartButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UPlayWidget::OnRegionSelected(int32_t RegionIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.OnRegionSelected");

	FOnRegionSelected parms{};	
	parms.RegionIndex = RegionIndex;

	ProcessEvent(fn, &parms);
}

void UPlayWidget::OnRegionDataSet(int32_t RegionIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.OnRegionDataSet");

	FOnRegionDataSet parms{};	
	parms.RegionIndex = RegionIndex;

	ProcessEvent(fn, &parms);
}

void UPlayWidget::OnPopupSWidgetInvitePartyResponse(uint8_t PopupResult, struct FString ReturnAccountID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.OnPopupSWidgetInvitePartyResponse");

	FOnPopupSWidgetInvitePartyResponse parms{};	
	parms.PopupResult = PopupResult;
	parms.ReturnAccountID = ReturnAccountID;

	ProcessEvent(fn, &parms);
}

void UPlayWidget::OnPopupSWidgetInvitePartyRequest(struct UPopupDataBase* PopupData, struct FString ReturnAccountID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.OnPopupSWidgetInvitePartyRequest");

	FOnPopupSWidgetInvitePartyRequest parms{};	
	parms.PopupData = PopupData;
	parms.ReturnAccountID = ReturnAccountID;

	ProcessEvent(fn, &parms);
}

void UPlayWidget::OnPlayPartyUserInfoData(struct FPlayPartyUserInfoData& NewValue, struct FPlayPartyUserInfoData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.OnPlayPartyUserInfoData");

	FOnPlayPartyUserInfoData parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UPlayWidget::OnPlayPartyUserInfo(struct FPlayPartyUserInfo& PlayPartyUserInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.OnPlayPartyUserInfo");

	FOnPlayPartyUserInfo parms{};	
	parms.PlayPartyUserInfo = PlayPartyUserInfo;

	ProcessEvent(fn, &parms);
}

void UPlayWidget::OnPlayPartyReadyStateChanged(bool bMine, bool bReady){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.OnPlayPartyReadyStateChanged");

	FOnPlayPartyReadyStateChanged parms{};	
	parms.bMine = bMine;
	parms.bReady = bReady;

	ProcessEvent(fn, &parms);
}

void UPlayWidget::OnPartyReadyButtonClicked(bool IsReady){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.OnPartyReadyButtonClicked");

	FOnPartyReadyButtonClicked parms{};	
	parms.IsReady = IsReady;

	ProcessEvent(fn, &parms);
}

void UPlayWidget::OnPartyLocationSet(struct FPlayPartyUserInfo& PartyUser, int32_t MetaLocationIndex, bool IsReady){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.OnPartyLocationSet");

	FOnPartyLocationSet parms{};	
	parms.PartyUser = PartyUser;
	parms.MetaLocationIndex = MetaLocationIndex;
	parms.IsReady = IsReady;

	ProcessEvent(fn, &parms);
}

void UPlayWidget::OnPartyExitButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.OnPartyExitButtonClicked");

	FOnPartyExitButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UPlayWidget::OnMatchStart(bool InbCanCancel, float InMatchCancelDelayTimeSec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.OnMatchStart");

	FOnMatchStart parms{};	
	parms.InbCanCancel = InbCanCancel;
	parms.InMatchCancelDelayTimeSec = InMatchCancelDelayTimeSec;

	ProcessEvent(fn, &parms);
}

void UPlayWidget::OnMatchCancel(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.OnMatchCancel");

	FOnMatchCancel parms{};	

	ProcessEvent(fn, &parms);
}

void UPlayWidget::OnLeaderUpdated(bool IsPartyLeader){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.OnLeaderUpdated");

	FOnLeaderUpdated parms{};	
	parms.IsPartyLeader = IsPartyLeader;

	ProcessEvent(fn, &parms);
}

void UPlayWidget::OnKarmaButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.OnKarmaButtonClicked");

	FOnKarmaButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UPlayWidget::OnInvitePartyButtonClicked(uint8_t& UserLocate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.OnInvitePartyButtonClicked");

	FOnInvitePartyButtonClicked parms{};	
	parms.UserLocate = UserLocate;

	ProcessEvent(fn, &parms);
}

void UPlayWidget::OnGameUserSettingControlsChanged(struct FGameUserSettingControls& InGameUserSettingControls, struct FGameUserSettingControls& InOldGameUserSettingControls, bool bInForce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.OnGameUserSettingControlsChanged");

	FOnGameUserSettingControlsChanged parms{};	
	parms.InGameUserSettingControls = InGameUserSettingControls;
	parms.InOldGameUserSettingControls = InOldGameUserSettingControls;
	parms.bInForce = bInForce;

	ProcessEvent(fn, &parms);
}

void UPlayWidget::OnDungeonSelectListPopupOpen(uint8_t GameDifficultyType, int32_t HighRollerFeeGold, int32_t HighRollerMinLevel, int32_t GoblinHighRollerFee, int32_t GoblinHighRollerMinLevel, bool bIsSolo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.OnDungeonSelectListPopupOpen");

	FOnDungeonSelectListPopupOpen parms{};	
	parms.GameDifficultyType = GameDifficultyType;
	parms.HighRollerFeeGold = HighRollerFeeGold;
	parms.HighRollerMinLevel = HighRollerMinLevel;
	parms.GoblinHighRollerFee = GoblinHighRollerFee;
	parms.GoblinHighRollerMinLevel = GoblinHighRollerMinLevel;
	parms.bIsSolo = bIsSolo;

	ProcessEvent(fn, &parms);
}

void UPlayWidget::OnDungeonSelect(uint8_t GameDifficultyType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.OnDungeonSelect");

	FOnDungeonSelect parms{};	
	parms.GameDifficultyType = GameDifficultyType;

	ProcessEvent(fn, &parms);
}

void UPlayWidget::OnClickedDungeonSelect(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.OnClickedDungeonSelect");

	FOnClickedDungeonSelect parms{};	

	ProcessEvent(fn, &parms);
}

void UPlayWidget::OnChangedMatchingState(bool IsInMatching){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.OnChangedMatchingState");

	FOnChangedMatchingState parms{};	
	parms.IsInMatching = IsInMatching;

	ProcessEvent(fn, &parms);
}

void UPlayWidget::OnCancelButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.OnCancelButtonClicked");

	FOnCancelButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UPlayWidget::CheckStartButtonEnable(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.CheckStartButtonEnable");

	FCheckStartButtonEnable parms{};	

	ProcessEvent(fn, &parms);
}

void UPlayWidget::AutoTeamRegisterSingle(bool IsRegister){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.PlayWidget.AutoTeamRegisterSingle");

	FAutoTeamRegisterSingle parms{};	
	parms.IsRegister = IsRegister;

	ProcessEvent(fn, &parms);
}

void AProjectileActor::TimelineUpdateEvent(float Value, float TimelinePosition){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.TimelineUpdateEvent");

	FTimelineUpdateEvent parms{};	
	parms.Value = Value;
	parms.TimelinePosition = TimelinePosition;

	ProcessEvent(fn, &parms);
}

void AProjectileActor::TimelineFinishedEvent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.TimelineFinishedEvent");

	FTimelineFinishedEvent parms{};	

	ProcessEvent(fn, &parms);
}

void AProjectileActor::StopPierce(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.StopPierce");

	FStopPierce parms{};	

	ProcessEvent(fn, &parms);
}

void AProjectileActor::SetHomingTargetComponent(struct USceneComponent* InHomingTargetComponent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.SetHomingTargetComponent");

	FSetHomingTargetComponent parms{};	
	parms.InHomingTargetComponent = InHomingTargetComponent;

	ProcessEvent(fn, &parms);
}

void AProjectileActor::SetHomingMagnitude(float InHomingMagnitude){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.SetHomingMagnitude");

	FSetHomingMagnitude parms{};	
	parms.InHomingMagnitude = InHomingMagnitude;

	ProcessEvent(fn, &parms);
}

void AProjectileActor::SetAddEffectToTargetHit(struct TArray<struct FPrimaryAssetId> AddEffectList){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.SetAddEffectToTargetHit");

	FSetAddEffectToTargetHit parms{};	
	parms.AddEffectList = AddEffectList;

	ProcessEvent(fn, &parms);
}

void AProjectileActor::SetAddEffectToGroundtHit(struct TArray<struct FPrimaryAssetId> AddEffectList){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.SetAddEffectToGroundtHit");

	FSetAddEffectToGroundtHit parms{};	
	parms.AddEffectList = AddEffectList;

	ProcessEvent(fn, &parms);
}

void AProjectileActor::ProjectileHit(struct FHitResult& Hit, bool bIsAttached, struct FTransform& ActorPrevTickTransform){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.ProjectileHit");

	FProjectileHit parms{};	
	parms.Hit = Hit;
	parms.bIsAttached = bIsAttached;
	parms.ActorPrevTickTransform = ActorPrevTickTransform;

	ProcessEvent(fn, &parms);
}

void AProjectileActor::PlayPierce(float SetPierceCount, bool SetObstaclePierce, float SetObstaclePierceDecrease){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.PlayPierce");

	FPlayPierce parms{};	
	parms.SetPierceCount = SetPierceCount;
	parms.SetObstaclePierce = SetObstaclePierce;
	parms.SetObstaclePierceDecrease = SetObstaclePierceDecrease;

	ProcessEvent(fn, &parms);
}

void AProjectileActor::OnRep_ProjectileMovementComponentVelocity(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.OnRep_ProjectileMovementComponentVelocity");

	FOnRep_ProjectileMovementComponentVelocity parms{};	

	ProcessEvent(fn, &parms);
}

void AProjectileActor::OnRep_ProjectileMovementComponentLocalVelocity(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.OnRep_ProjectileMovementComponentLocalVelocity");

	FOnRep_ProjectileMovementComponentLocalVelocity parms{};	

	ProcessEvent(fn, &parms);
}

void AProjectileActor::OnRep_ProjectileGravityScale(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.OnRep_ProjectileGravityScale");

	FOnRep_ProjectileGravityScale parms{};	

	ProcessEvent(fn, &parms);
}

void AProjectileActor::OnRep_IsHomingProjectile(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.OnRep_IsHomingProjectile");

	FOnRep_IsHomingProjectile parms{};	

	ProcessEvent(fn, &parms);
}

void AProjectileActor::OnRep_HomingTargetComponent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.OnRep_HomingTargetComponent");

	FOnRep_HomingTargetComponent parms{};	

	ProcessEvent(fn, &parms);
}

void AProjectileActor::OnRep_HomingMagnitude(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.OnRep_HomingMagnitude");

	FOnRep_HomingMagnitude parms{};	

	ProcessEvent(fn, &parms);
}

void AProjectileActor::OnLifeTimeExpired(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.OnLifeTimeExpired");

	FOnLifeTimeExpired parms{};	

	ProcessEvent(fn, &parms);
}

void AProjectileActor::OnHomingTargetDeath(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.OnHomingTargetDeath");

	FOnHomingTargetDeath parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

bool AProjectileActor::MatchesProjectileSourceTypeTagExact(struct FGameplayTag& CheckGameplayTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.MatchesProjectileSourceTypeTagExact");

	FMatchesProjectileSourceTypeTagExact parms{};	
	parms.CheckGameplayTag = CheckGameplayTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void AProjectileActor::LifeTimeExpired(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.LifeTimeExpired");

	FLifeTimeExpired parms{};	

	ProcessEvent(fn, &parms);
}

void AProjectileActor::InitVelocity(float FirePower){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.InitVelocity");

	FInitVelocity parms{};	
	parms.FirePower = FirePower;

	ProcessEvent(fn, &parms);
}

float AProjectileActor::InitialSpeed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.InitialSpeed");

	FInitialSpeed parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void AProjectileActor::InitArrivalVelocity(struct FVector Velocity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.InitArrivalVelocity");

	FInitArrivalVelocity parms{};	
	parms.Velocity = Velocity;

	ProcessEvent(fn, &parms);
}

void AProjectileActor::HandleTimelineUpdate(float Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.HandleTimelineUpdate");

	FHandleTimelineUpdate parms{};	
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void AProjectileActor::HandleTimelineFinished(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.HandleTimelineFinished");

	FHandleTimelineFinished parms{};	

	ProcessEvent(fn, &parms);
}

struct TArray<struct FPrimaryAssetId> AProjectileActor::GetAddEffectToTargetHit(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.GetAddEffectToTargetHit");

	FGetAddEffectToTargetHit parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FPrimaryAssetId> AProjectileActor::GetAddEffectToGroundHit(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.GetAddEffectToGroundHit");

	FGetAddEffectToGroundHit parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void AProjectileActor::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.ProjectileActor.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ASpellActor::OnRep_SpellData(struct FSpellData& OldSpellData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SpellActor.OnRep_SpellData");

	FOnRep_SpellData parms{};	
	parms.OldSpellData = OldSpellData;

	ProcessEvent(fn, &parms);
}

struct FSpellData ASpellActor::GetSpellData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SpellActor.GetSpellData");

	FGetSpellData parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct USoundData* ASpellActor::GetSoundDataSpell(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SpellActor.GetSoundDataSpell");

	FGetSoundDataSpell parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FDesignDataSpell ASpellActor::GetDesignDataSpell(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SpellActor.GetDesignDataSpell");

	FGetDesignDataSpell parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UArtDataSpell* ASpellActor::GetArtDataSpell(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SpellActor.GetArtDataSpell");

	FGetArtDataSpell parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USampleSubObject::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SampleSubObject.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void USampleSubObject::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SampleSubObject.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void USampleSubObject::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SampleSubObject.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void USampleSubObject::InitializeSampleSubObject(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SampleSubObject.InitializeSampleSubObject");

	FInitializeSampleSubObject parms{};	

	ProcessEvent(fn, &parms);
}

void USampleSubObject::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SampleSubObject.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void USampleSubObject::BeginSampleSubObject(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SampleSubObject.BeginSampleSubObject");

	FBeginSampleSubObject parms{};	

	ProcessEvent(fn, &parms);
}

void USampleObject::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SampleObject.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void USampleObject::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SampleObject.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void USampleObject::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SampleObject.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void USampleObject::InitializeSampleObject(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SampleObject.InitializeSampleObject");

	FInitializeSampleObject parms{};	

	ProcessEvent(fn, &parms);
}

void USampleObject::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SampleObject.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void USampleObject::BeginSampleObject(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SampleObject.BeginSampleObject");

	FBeginSampleObject parms{};	

	ProcessEvent(fn, &parms);
}

bool USoundBlueprintLibrary::SetSwitch(struct UObject* InSoundPlayer, struct UAkSwitchValue* AkSwitchValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SoundBlueprintLibrary.SetSwitch");

	FSetSwitch parms{};	
	parms.InSoundPlayer = InSoundPlayer;
	parms.AkSwitchValue = AkSwitchValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool USoundBlueprintLibrary::SetRTPCValue(struct UObject* InSoundPlayer, struct UAkRtpc* RtpcValue, float Value, int32_t InterpolationTimeMs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SoundBlueprintLibrary.SetRTPCValue");

	FSetRTPCValue parms{};	
	parms.InSoundPlayer = InSoundPlayer;
	parms.RtpcValue = RtpcValue;
	parms.Value = Value;
	parms.InterpolationTimeMs = InterpolationTimeMs;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool USoundBlueprintLibrary::PlaySoundWithTag(struct UObject* InSoundPlayer, struct UObject* InSoundProvider, struct FGameplayTag& Tag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SoundBlueprintLibrary.PlaySoundWithTag");

	FPlaySoundWithTag parms{};	
	parms.InSoundPlayer = InSoundPlayer;
	parms.InSoundProvider = InSoundProvider;
	parms.Tag = Tag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool USoundBlueprintLibrary::PlaySoundWithSwitch(struct UObject* InSoundPlayer, struct UAkAudioEvent* AkEvent, struct UObject* InSoundProvider, struct FGameplayTag& Tag, enum class EPhysicalSurface Surface, struct FString SwitchGroup, struct FString SwitchState){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SoundBlueprintLibrary.PlaySoundWithSwitch");

	FPlaySoundWithSwitch parms{};	
	parms.InSoundPlayer = InSoundPlayer;
	parms.AkEvent = AkEvent;
	parms.InSoundProvider = InSoundProvider;
	parms.Tag = Tag;
	parms.Surface = Surface;
	parms.SwitchGroup = SwitchGroup;
	parms.SwitchState = SwitchState;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool USoundBlueprintLibrary::PlaySoundOnPlayerController(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SoundBlueprintLibrary.PlaySoundOnPlayerController");

	FPlaySoundOnPlayerController parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.AkEvent = AkEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool USoundBlueprintLibrary::PlaySound(struct UObject* InSoundPlayer, struct UAkAudioEvent* AkEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SoundBlueprintLibrary.PlaySound");

	FPlaySound parms{};	
	parms.InSoundPlayer = InSoundPlayer;
	parms.AkEvent = AkEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool USoundBlueprintLibrary::IsSoundPlayable(struct UObject* InSoundPlayer, struct UObject* InSoundProvider, struct FGameplayTag InSoundEventTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SoundBlueprintLibrary.IsSoundPlayable");

	FIsSoundPlayable parms{};	
	parms.InSoundPlayer = InSoundPlayer;
	parms.InSoundProvider = InSoundProvider;
	parms.InSoundEventTag = InSoundEventTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool USoundBlueprintLibrary::IsMute(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SoundBlueprintLibrary.IsMute");

	FIsMute parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayTagQuery USoundProvider::GetTagQuery(struct FGameplayTag& Tag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SoundProvider.GetTagQuery");

	FGetTagQuery parms{};	
	parms.Tag = Tag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TMap<struct FGameplayTag, struct FGameplayTagQuery> USoundProvider::GetTagQueries(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SoundProvider.GetTagQueries");

	FGetTagQueries parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TMap<struct FGameplayTag, struct FDCSoundDataContainer> USoundProvider::GetSwitches(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SoundProvider.GetSwitches");

	FGetSwitches parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAkSwitchValue* USoundProvider::GetSwitch(struct FGameplayTag& Tag, enum class EPhysicalSurface Surface){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SoundProvider.GetSwitch");

	FGetSwitch parms{};	
	parms.Tag = Tag;
	parms.Surface = Surface;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FPrimaryAssetId USoundProvider::GetLastPrimaryAssetId(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SoundProvider.GetLastPrimaryAssetId");

	FGetLastPrimaryAssetId parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TMap<struct FGameplayTag, struct UAkAudioEvent*> USoundProvider::GetEvents(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SoundProvider.GetEvents");

	FGetEvents parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAkAudioEvent* USoundProvider::GetEvent(struct FGameplayTag& Tag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.SoundProvider.GetEvent");

	FGetEvent parms{};	
	parms.Tag = Tag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UTestItemInjectionWidgetBase::RemoveAllSelections(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TestItemInjectionWidgetBase.RemoveAllSelections");

	FRemoveAllSelections parms{};	

	ProcessEvent(fn, &parms);
}

void UTestItemInjectionWidgetBase::OnSelectedPropertyValueChanged(struct FPrimaryAssetId& PropertyTypeAssetId, int32_t InPropertyValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TestItemInjectionWidgetBase.OnSelectedPropertyValueChanged");

	FOnSelectedPropertyValueChanged parms{};	
	parms.PropertyTypeAssetId = PropertyTypeAssetId;
	parms.InPropertyValue = InPropertyValue;

	ProcessEvent(fn, &parms);
}

void UTestItemInjectionWidgetBase::OnSearchTextChanged(struct FText& InText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TestItemInjectionWidgetBase.OnSearchTextChanged");

	FOnSearchTextChanged parms{};	
	parms.InText = InText;

	ProcessEvent(fn, &parms);
}

void UTestItemInjectionWidgetBase::OnPropertySearchTextChanged(struct FText& InText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TestItemInjectionWidgetBase.OnPropertySearchTextChanged");

	FOnPropertySearchTextChanged parms{};	
	parms.InText = InText;

	ProcessEvent(fn, &parms);
}

void UTestItemInjectionWidgetBase::OnItemTypeSelected(struct UObject* WidgetData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TestItemInjectionWidgetBase.OnItemTypeSelected");

	FOnItemTypeSelected parms{};	
	parms.WidgetData = WidgetData;

	ProcessEvent(fn, &parms);
}

void UTestItemInjectionWidgetBase::OnItemSelected(struct UObject* WidgetData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TestItemInjectionWidgetBase.OnItemSelected");

	FOnItemSelected parms{};	
	parms.WidgetData = WidgetData;

	ProcessEvent(fn, &parms);
}

void UTestItemInjectionWidgetBase::OnItemRaritySelected(struct UObject* WidgetData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TestItemInjectionWidgetBase.OnItemRaritySelected");

	FOnItemRaritySelected parms{};	
	parms.WidgetData = WidgetData;

	ProcessEvent(fn, &parms);
}

void UTestItemInjectionWidgetBase::OnItemPropertySelected(struct UObject* WidgetData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TestItemInjectionWidgetBase.OnItemPropertySelected");

	FOnItemPropertySelected parms{};	
	parms.WidgetData = WidgetData;

	ProcessEvent(fn, &parms);
}

void UTestItemInjectionWidgetBase::OnGenerateCountTextChanged(struct FText& InText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TestItemInjectionWidgetBase.OnGenerateCountTextChanged");

	FOnGenerateCountTextChanged parms{};	
	parms.InText = InText;

	ProcessEvent(fn, &parms);
}

void UTestItemInjectionWidgetBase::GenerateItemsAndRequestInjection(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TestItemInjectionWidgetBase.GenerateItemsAndRequestInjection");

	FGenerateItemsAndRequestInjection parms{};	

	ProcessEvent(fn, &parms);
}

void UTradeChannelButtonBase::SetMemberText(int32_t InMemberCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeChannelButtonBase.SetMemberText");

	FSetMemberText parms{};	
	parms.InMemberCount = InMemberCount;

	ProcessEvent(fn, &parms);
}

void UTradeChannelButtonBase::SetChannelName(struct FText& InChannelName, int32_t InIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeChannelButtonBase.SetChannelName");

	FSetChannelName parms{};	
	parms.InChannelName = InChannelName;
	parms.InIndex = InIndex;

	ProcessEvent(fn, &parms);
}

void UTradeChannelButtonBase::OnChannelButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeChannelButtonBase.OnChannelButtonClicked");

	FOnChannelButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UTradeChannelChatWidget::OnTypeChatFilterReset(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeChannelChatWidget.OnTypeChatFilterReset");

	FOnTypeChatFilterReset parms{};	

	ProcessEvent(fn, &parms);
}

void UTradeChannelChatWidget::OnRemoveTypeChatFilterTag(struct FGameplayTag& InChatFilterTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeChannelChatWidget.OnRemoveTypeChatFilterTag");

	FOnRemoveTypeChatFilterTag parms{};	
	parms.InChatFilterTag = InChatFilterTag;

	ProcessEvent(fn, &parms);
}

void UTradeChannelChatWidget::OnRemoveRarityChatFilterTag(struct FGameplayTag& InChatFilterTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeChannelChatWidget.OnRemoveRarityChatFilterTag");

	FOnRemoveRarityChatFilterTag parms{};	
	parms.InChatFilterTag = InChatFilterTag;

	ProcessEvent(fn, &parms);
}

void UTradeChannelChatWidget::OnRemovePropertyChatFilterTag(struct FGameplayTag& InChatFilterTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeChannelChatWidget.OnRemovePropertyChatFilterTag");

	FOnRemovePropertyChatFilterTag parms{};	
	parms.InChatFilterTag = InChatFilterTag;

	ProcessEvent(fn, &parms);
}

void UTradeChannelChatWidget::OnRemoveIdTagChatFilterTag(struct FGameplayTag& InChatFilterTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeChannelChatWidget.OnRemoveIdTagChatFilterTag");

	FOnRemoveIdTagChatFilterTag parms{};	
	parms.InChatFilterTag = InChatFilterTag;

	ProcessEvent(fn, &parms);
}

void UTradeChannelChatWidget::OnReadRulesButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeChannelChatWidget.OnReadRulesButtonClicked");

	FOnReadRulesButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UTradeChannelChatWidget::OnRarityChatFilterReset(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeChannelChatWidget.OnRarityChatFilterReset");

	FOnRarityChatFilterReset parms{};	

	ProcessEvent(fn, &parms);
}

void UTradeChannelChatWidget::OnPropertyChatFilterReset(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeChannelChatWidget.OnPropertyChatFilterReset");

	FOnPropertyChatFilterReset parms{};	

	ProcessEvent(fn, &parms);
}

void UTradeChannelChatWidget::OnIdTagChatFilterReset(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeChannelChatWidget.OnIdTagChatFilterReset");

	FOnIdTagChatFilterReset parms{};	

	ProcessEvent(fn, &parms);
}

void UTradeChannelChatWidget::OnChatType(uint8_t NewItemData, uint8_t OldItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeChannelChatWidget.OnChatType");

	FOnChatType parms{};	
	parms.NewItemData = NewItemData;
	parms.OldItemData = OldItemData;

	ProcessEvent(fn, &parms);
}

void UTradeChannelChatWidget::OnChatAccountData(struct FChatAccountData& NewItemData, struct FChatAccountData& OldItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeChannelChatWidget.OnChatAccountData");

	FOnChatAccountData parms{};	
	parms.NewItemData = NewItemData;
	parms.OldItemData = OldItemData;

	ProcessEvent(fn, &parms);
}

void UTradeChannelChatWidget::OnAddTypeChatFilterTag(struct FGameplayTag& InChatFilterTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeChannelChatWidget.OnAddTypeChatFilterTag");

	FOnAddTypeChatFilterTag parms{};	
	parms.InChatFilterTag = InChatFilterTag;

	ProcessEvent(fn, &parms);
}

void UTradeChannelChatWidget::OnAddRarityChatFilterTag(struct FGameplayTag& InChatFilterTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeChannelChatWidget.OnAddRarityChatFilterTag");

	FOnAddRarityChatFilterTag parms{};	
	parms.InChatFilterTag = InChatFilterTag;

	ProcessEvent(fn, &parms);
}

void UTradeChannelChatWidget::OnAddPropertyChatFilterTag(struct FGameplayTag& InChatFilterTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeChannelChatWidget.OnAddPropertyChatFilterTag");

	FOnAddPropertyChatFilterTag parms{};	
	parms.InChatFilterTag = InChatFilterTag;

	ProcessEvent(fn, &parms);
}

void UTradeChannelChatWidget::OnAddIdTagChatFilterTag(struct FGameplayTag& InChatFilterTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeChannelChatWidget.OnAddIdTagChatFilterTag");

	FOnAddIdTagChatFilterTag parms{};	
	parms.InChatFilterTag = InChatFilterTag;

	ProcessEvent(fn, &parms);
}

void UTradeMasterWidget::SendTradeSubscriptionWidgetBeginNotify(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeMasterWidget.SendTradeSubscriptionWidgetBeginNotify");

	FSendTradeSubscriptionWidgetBeginNotify parms{};	

	ProcessEvent(fn, &parms);
}

void UTradeUserListWidget::OnTextChanged(struct FText& FindId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeUserListWidget.OnTextChanged");

	FOnTextChanged parms{};	
	parms.FindId = FindId;

	ProcessEvent(fn, &parms);
}

void UTradeUserListWidget::OnBlockUpdated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.TradeUserListWidget.OnBlockUpdated");

	FOnBlockUpdated parms{};	

	ProcessEvent(fn, &parms);
}

void UVoipUserWidget::SetVoipUserData(struct FVoipUserData& InVoipUserData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.VoipUserWidget.SetVoipUserData");

	FSetVoipUserData parms{};	
	parms.InVoipUserData = InVoipUserData;

	ProcessEvent(fn, &parms);
}

void UVoipUserWidget::SetVoipPartyData(struct FVoipPartyData& InVoipPartyData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.VoipUserWidget.SetVoipPartyData");

	FSetVoipPartyData parms{};	
	parms.InVoipPartyData = InVoipPartyData;

	ProcessEvent(fn, &parms);
}

void UVoipUserWidget::SetAccountId(struct FDCAccountId& InAccountId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.VoipUserWidget.SetAccountId");

	FSetAccountId parms{};	
	parms.InAccountId = InAccountId;

	ProcessEvent(fn, &parms);
}

void UVoipUserWidget::OnVoipVolumeChanged(float InVoipVolume){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.VoipUserWidget.OnVoipVolumeChanged");

	FOnVoipVolumeChanged parms{};	
	parms.InVoipVolume = InVoipVolume;

	ProcessEvent(fn, &parms);
}

void UVoipUserWidget::OnVoipUserData(struct FVoipUserData& NewValue, struct FVoipUserData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.VoipUserWidget.OnVoipUserData");

	FOnVoipUserData parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UVoipUserWidget::OnVoipPartyData(struct FVoipPartyData& NewValue, struct FVoipPartyData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.VoipUserWidget.OnVoipPartyData");

	FOnVoipPartyData parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UVoipUserWidget::OnMuteButtonClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.VoipUserWidget.OnMuteButtonClicked");

	FOnMuteButtonClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UVoipUserWidget::OnAccountId(struct FDCAccountId& NewValue, struct FDCAccountId& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawler.VoipUserWidget.OnAccountId");

	FOnAccountId parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

