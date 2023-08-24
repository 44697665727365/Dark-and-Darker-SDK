#pragma once 
#include <DungeonCrawler_Structs.h>
 
 
 
// Class DungeonCrawler.SkillComponent
// Size: 0x128(Inherited: 0xA0)
struct USkillComponent : UActorComponent
{
	char pad_160[88];  // 0xA0 (0xA0)
	struct TArray<struct ASkillActor*> SkillActors;  // 0xF8 (0xF8)
	struct TArray<struct FSkillDataInfo> CurSkillDataList;  // 0x108 (0x108)
	char pad_280[8];  // 0x118 (0x118)
	struct UAsyncTaskEffectStackChanged* EffectStackAsyncTask;  // 0x120 (0x120)


	bool UpdateSkillCount(struct FGameplayTag SkillTag, int32_t Count); // Function DungeonCrawler.SkillComponent.UpdateSkillCount
	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.SkillComponent.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.SkillComponent.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.SkillComponent.TerminateBase
	void SetCooldownForDebug_Server(bool bNoCooldownTime); // Function DungeonCrawler.SkillComponent.SetCooldownForDebug_Server
	void OnRep_SkillDataList(struct TArray<struct FSkillDataInfo>& OldSkillDataList); // Function DungeonCrawler.SkillComponent.OnRep_SkillDataList
	void OnRep_SkillActorList(struct TArray<struct ASkillActor*>& OldSkillActors); // Function DungeonCrawler.SkillComponent.OnRep_SkillActorList
	void InitSkillData(); // Function DungeonCrawler.SkillComponent.InitSkillData
	void HandleSkillInput(struct FGameplayTag InputTag); // Function DungeonCrawler.SkillComponent.HandleSkillInput
	struct FSkillData GetSkillDataByTriggerTag(struct FGameplayTag TriggerTag); // Function DungeonCrawler.SkillComponent.GetSkillDataByTriggerTag
	struct FSkillData GetSkillDataByIndex(uint8_t SkillIndex); // Function DungeonCrawler.SkillComponent.GetSkillDataByIndex
	void GetSkillAllCurrentSkillData(struct TArray<struct FSkillData>& SkillDataList, struct TArray<float>& MaxDurationList, struct TArray<float>& RemainDurationList); // Function DungeonCrawler.SkillComponent.GetSkillAllCurrentSkillData
	struct ASkillActor* GetSkillActor(struct FGameplayTag SkillTag); // Function DungeonCrawler.SkillComponent.GetSkillActor
	uint8_t GetSkillActivatabilityByTriggerTag(struct FGameplayTag TriggerTag); // Function DungeonCrawler.SkillComponent.GetSkillActivatabilityByTriggerTag
	void GameplayEffectStackChanged(struct FGameplayTag EffectGameplayTag, struct FActiveGameplayEffectHandle EffectHandle, int32_t NewStackCount, int32_t PreviousStackCount); // Function DungeonCrawler.SkillComponent.GameplayEffectStackChanged
	bool CheckSkillReduceCount(struct FGameplayTag SkillTag, float ReduceCount); // Function DungeonCrawler.SkillComponent.CheckSkillReduceCount
	float CalSkillCooldownRemainTime(float StartTime, float RemainDuration, float MaxDuration); // Function DungeonCrawler.SkillComponent.CalSkillCooldownRemainTime
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.SkillComponent.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.GA_ProjectileCollision
// Size: 0x578(Inherited: 0x558)
struct UGA_ProjectileCollision : UDCGameplayAbilityBase
{
	struct ADCGATA_LineCollision* TargetActor;  // 0x558 (0x558)
	struct FGameplayTag GameplayCueOnStuckStaticObject;  // 0x560 (0x560)
	struct FGameplayTag GameplayCueOnStuckCharacter;  // 0x568 (0x568)
	struct FGameplayTag GameplayCueOnStuckShield;  // 0x570 (0x570)


	void UpdateIgnoreActors(struct AActor* InCheckActor); // Function DungeonCrawler.GA_ProjectileCollision.UpdateIgnoreActors
	void TargetDataReceived(struct FHitResult& Hit); // Function DungeonCrawler.GA_ProjectileCollision.TargetDataReceived
	void ReceivedTargetData(struct FGameplayAbilityTargetDataHandle& Data); // Function DungeonCrawler.GA_ProjectileCollision.ReceivedTargetData
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function DungeonCrawler.GA_ProjectileCollision.AbilityActivated
}; 
 
 


// Class DungeonCrawler.DCAbilityInteractableActorBase
// Size: 0x310(Inherited: 0x300)
struct ADCAbilityInteractableActorBase : ADCInteractableActorBase
{
	char pad_768[8];  // 0x300 (0x300)
	struct UAbilitySystemComponent* AbilitySystemComponent;  // 0x308 (0x308)


}; 
 
 


// Class DungeonCrawler.DCLobbyEmoteShopDataAsset
// Size: 0xA8(Inherited: 0x78)
struct UDCLobbyEmoteShopDataAsset : UDCShopDataAsset
{
	struct TSoftObjectPtr<UDCLobbyEmoteDataAsset> StockData;  // 0x78 (0x78)


}; 
 
 


// Class DungeonCrawler.ArtDataAoe
// Size: 0x40(Inherited: 0x38)
struct UArtDataAoe : UDCDataAssetBase
{
	struct UBehaviorTree* BehaviorTree;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCMerchantStatWidget
// Size: 0x288(Inherited: 0x278)
struct UDCMerchantStatWidget : UUserWidget
{
	int32_t Faction;  // 0x278 (0x278)
	char pad_636[4];  // 0x27C (0x27C)
	struct FTimespan RemainTime;  // 0x280 (0x280)


}; 
 
 


// Class DungeonCrawler.LobbyGroupTradeChannelWidget
// Size: 0x480(Inherited: 0x470)
struct ULobbyGroupTradeChannelWidget : ULobbyGroupWidgetBase
{
	struct UTopTitleWidgetBase* TopTitle;  // 0x470 (0x470)
	struct UDCTradeInventoryWidget* TradeUserInventory;  // 0x478 (0x478)


	void OnReadRulesButtonClicked(); // Function DungeonCrawler.LobbyGroupTradeChannelWidget.OnReadRulesButtonClicked
	void OnLeaveChannelButtonClicked(); // Function DungeonCrawler.LobbyGroupTradeChannelWidget.OnLeaveChannelButtonClicked
}; 
 
 


// Class DungeonCrawler.GA_MonsterRangedAttackBase
// Size: 0x6B0(Inherited: 0x5C0)
struct UGA_MonsterRangedAttackBase : UGA_RangedAttackBase
{
	struct FGameplayTag CancleGameplayTag;  // 0x5C0 (0x5C0)
	uint8_t HitBoxType;  // 0x5C8 (0x5C8)
	char pad_1481[3];  // 0x5C9 (0x5C9)
	int32_t RandomRate;  // 0x5CC (0x5CC)
	float RandomRange;  // 0x5D0 (0x5D0)
	float DefaultFirePower;  // 0x5D4 (0x5D4)
	float MinimumDistance;  // 0x5D8 (0x5D8)
	int32_t MultiShotCount;  // 0x5DC (0x5DC)
	float MultiShotAngle;  // 0x5E0 (0x5E0)
	char pad_1508[28];  // 0x5E4 (0x5E4)
	struct FGameplayEventData GameplayEventData;  // 0x600 (0x600)


}; 
 
 


// Class DungeonCrawler.DCDataAssetBase
// Size: 0x38(Inherited: 0x30)
struct UDCDataAssetBase : UPrimaryDataAsset
{
	struct FPrimaryAssetType AssetType;  // 0x30 (0x30)


}; 
 
 


// Class DungeonCrawler.DCLogEventManager
// Size: 0xE0(Inherited: 0x30)
struct UDCLogEventManager : UDCUserInfoManagerBase
{
	char pad_48[176];  // 0x30 (0x30)


}; 
 
 


// Class DungeonCrawler.CharacterCreateWidget
// Size: 0x4E8(Inherited: 0x440)
struct UCharacterCreateWidget : UDCCommonActivatableWidgetBase
{
	uint8_t SelectedCharacterClass;  // 0x440 (0x440)
	uint8_t SelectedGender;  // 0x441 (0x441)
	char pad_1090_1 : 7;  // 0x442 (0x442)
	bool bCanCreate : 1;  // 0x442 (0x442)
	char pad_1091[5];  // 0x443 (0x443)
	struct FText SelectedCharacterClassName;  // 0x448 (0x448)
	struct FText SelectedCharacterClassDialog;  // 0x460 (0x460)
	struct FText SelectedCharacterClassInfo;  // 0x478 (0x478)
	int32_t AccountBluestoneShardValue;  // 0x490 (0x490)
	int32_t AccountRedstoneShardValue;  // 0x494 (0x494)
	struct UTexture2D* SelectedCharacterIllustration;  // 0x498 (0x498)
	struct UTileView* ClassSelectTileView;  // 0x4A0 (0x4A0)
	struct UTileView* ClassAttributeTileView;  // 0x4A8 (0x4A8)
	struct UEditableTextBox* NickNameTextBox;  // 0x4B0 (0x4B0)
	struct UDCCaptureStudioWidget* CaptureStudioWidget;  // 0x4B8 (0x4B8)
	struct UCommonButtonLWidget* WB_Btn_Purchase;  // 0x4C0 (0x4C0)
	struct UDCCommonButtonBase* WB_Btn_LaunchShopURL;  // 0x4C8 (0x4C8)
	struct FDCClassPackageShopItemInfo SelectedShopInfo;  // 0x4D0 (0x4D0)


	void OnTextChangedNickName(struct FText& InNickName); // Function DungeonCrawler.CharacterCreateWidget.OnTextChangedNickName
	void OnPurchaseButtonClicked(); // Function DungeonCrawler.CharacterCreateWidget.OnPurchaseButtonClicked
	void OnLaunchShopURLButtonClicked(); // Function DungeonCrawler.CharacterCreateWidget.OnLaunchShopURLButtonClicked
	void OnGenderClicked(uint8_t Gender); // Function DungeonCrawler.CharacterCreateWidget.OnGenderClicked
	void OnClassSelectTileViewItemSelectionChanged(struct UObject* InItem); // Function DungeonCrawler.CharacterCreateWidget.OnClassSelectTileViewItemSelectionChanged
	void HandleExitButtonClicked(); // Function DungeonCrawler.CharacterCreateWidget.HandleExitButtonClicked
	void HandleConfirmButtonClicked(); // Function DungeonCrawler.CharacterCreateWidget.HandleConfirmButtonClicked
	int32_t GetPrice(); // Function DungeonCrawler.CharacterCreateWidget.GetPrice
	int32_t GetCashPrice(); // Function DungeonCrawler.CharacterCreateWidget.GetCashPrice
	uint8_t GetCannotCreateVisibility(); // Function DungeonCrawler.CharacterCreateWidget.GetCannotCreateVisibility
	uint8_t GetCanCreateVisibility(); // Function DungeonCrawler.CharacterCreateWidget.GetCanCreateVisibility
	bool CanLaunchRedstoneShardShop(); // Function DungeonCrawler.CharacterCreateWidget.CanLaunchRedstoneShardShop
}; 
 
 


// Class DungeonCrawler.DCMerchantPageWidget
// Size: 0x4D8(Inherited: 0x470)
struct UDCMerchantPageWidget : ULobbyGroupWidgetBase
{
	struct UButton* ButtonBack;  // 0x470 (0x470)
	struct UDCBagWidget* InventorySale;  // 0x478 (0x478)
	struct UDCBagWidget* InventoryWish;  // 0x480 (0x480)
	struct UDCBagWidget* InventoryCraft;  // 0x488 (0x488)
	struct UDCInventorySetWidget* PlayerInventorySet;  // 0x490 (0x490)
	struct UDCMerchantDealTablePurchaseWidget* DealTableBuyWidget;  // 0x498 (0x498)
	struct UDCMerchantDealTableSellWidget* DealTableSellWidget;  // 0x4A0 (0x4A0)
	struct UDCMerchantDealTablePurchaseWidget* DealTableCraftWidget;  // 0x4A8 (0x4A8)
	struct UDCBoxInventory* DummyInventory;  // 0x4B0 (0x4B0)
	struct UDCTabListWidgetBase* MerchantTabList;  // 0x4B8 (0x4B8)
	struct UDCTabListWidgetBase* TradeTabList;  // 0x4C0 (0x4C0)
	struct UDCTabListWidgetBase* ServiceTabList;  // 0x4C8 (0x4C8)
	struct UDCTabListWidgetBase* QuestTabList;  // 0x4D0 (0x4D0)


	void OnServiceTypeChanged(uint8_t ServiceType); // Function DungeonCrawler.DCMerchantPageWidget.OnServiceTypeChanged
	void OnServiceTabSelected(struct FName TabId); // Function DungeonCrawler.DCMerchantPageWidget.OnServiceTabSelected
	void OnCategoryTabSelected(struct FName TabId); // Function DungeonCrawler.DCMerchantPageWidget.OnCategoryTabSelected
	void OnButtonBack(); // Function DungeonCrawler.DCMerchantPageWidget.OnButtonBack
}; 
 
 


// Class DungeonCrawler.AccountLink
// Size: 0x2D0(Inherited: 0x28)
struct UAccountLink : UObject
{
	char pad_40[680];  // 0x28 (0x28)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.AccountLink.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.AccountLink.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.AccountLink.TerminateBase
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.AccountLink.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.ArtDataPlayerCharacter
// Size: 0x70(Inherited: 0x38)
struct UArtDataPlayerCharacter : UDCDataAssetBase
{
	struct UTexture2D* PlayerCharacterIconTexture;  // 0x38 (0x38)
	struct UTexture2D* PlayerCharacterImageTexture;  // 0x40 (0x40)
	struct UTexture2D* PlayerCharacterManIllustImageTexture;  // 0x48 (0x48)
	struct UTexture2D* PlayerCharacterWomanIllustImageTexture;  // 0x50 (0x50)
	struct UTexture2D* Icon;  // 0x58 (0x58)
	struct UTexture2D* Portrait;  // 0x60 (0x60)
	struct UTexture2D* Illustration;  // 0x68 (0x68)


}; 
 
 


// Class DungeonCrawler.GameMiniMapWidget
// Size: 0x398(Inherited: 0x300)
struct UGameMiniMapWidget : UDCWidgetBase
{
	struct UAccountLink* AccountLink;  // 0x300 (0x300)
	struct APawn* LinkedPawn;  // 0x308 (0x308)
	char pad_784[136];  // 0x310 (0x310)


	void OnMiniMapName(struct FString NewMiniMapName, struct FString OldMiniMapName); // Function DungeonCrawler.GameMiniMapWidget.OnMiniMapName
	void OnMiniMapDeathSwarmData(struct FMiniMapDeathSwarmData& NewValue, struct FMiniMapDeathSwarmData& OldValue); // Function DungeonCrawler.GameMiniMapWidget.OnMiniMapDeathSwarmData
}; 
 
 


// Class DungeonCrawler.AccountLinkAll
// Size: 0xD8(Inherited: 0x28)
struct UAccountLinkAll : UObject
{
	char pad_40[176];  // 0x28 (0x28)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.AccountLinkAll.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.AccountLinkAll.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.AccountLinkAll.TerminateBase
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.AccountLinkAll.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.DCGiftCodeRewardPopupData
// Size: 0x40(Inherited: 0x30)
struct UDCGiftCodeRewardPopupData : UPopupDataBase
{
	struct TArray<struct FDCGiftCodeRewardInfo> RewardInfoArray;  // 0x30 (0x30)


}; 
 
 


// Class DungeonCrawler.GameMusicPlayBarWidget
// Size: 0x500(Inherited: 0x300)
struct UGameMusicPlayBarWidget : UDCShowingKeyWidgetBase
{
	struct UTextBlock* PlayText;  // 0x300 (0x300)
	struct UTextBlock* ChannelingText;  // 0x308 (0x308)
	struct UTextBlock* ChannelingTimer;  // 0x310 (0x310)
	struct USlider* PlaySlider;  // 0x318 (0x318)
	struct UProgressBar* PlayGauge;  // 0x320 (0x320)
	struct TArray<struct UWidget*> SectionWidgets;  // 0x328 (0x328)
	struct UHorizontalBox* HorizontalBox;  // 0x338 (0x338)
	struct UHorizontalBox* HorizontalBox_Perfect;  // 0x340 (0x340)
	struct USizeBox* SizeBox_Channeling;  // 0x348 (0x348)
	struct FSlateBrush GoodJudgeAreaBrush;  // 0x350 (0x350)
	struct FSlateBrush PerfectJudgeAreaBrush;  // 0x420 (0x420)
	char pad_1264[16];  // 0x4F0 (0x4F0)


	void OnMusicPlaySucceed(uint8_t Judge); // Function DungeonCrawler.GameMusicPlayBarWidget.OnMusicPlaySucceed
	void OnMusicPlayStart(); // Function DungeonCrawler.GameMusicPlayBarWidget.OnMusicPlayStart
	void OnMusicPlayEnd(); // Function DungeonCrawler.GameMusicPlayBarWidget.OnMusicPlayEnd
	void OnMusicJudgeNotify(uint8_t Judge, float PastSectionRatio, float NextSectionRatio, float JudgePositionRatio); // Function DungeonCrawler.GameMusicPlayBarWidget.OnMusicJudgeNotify
	void OnMusicChannelingStart(uint8_t Judge); // Function DungeonCrawler.GameMusicPlayBarWidget.OnMusicChannelingStart
	void OnMusicChannelingEnd(); // Function DungeonCrawler.GameMusicPlayBarWidget.OnMusicChannelingEnd
}; 
 
 


// Class DungeonCrawler.BTD_RandomCooldown
// Size: 0x78(Inherited: 0x68)
struct UBTD_RandomCooldown : UBTDecorator
{
	float MinCoolDownTime;  // 0x68 (0x68)
	float MaxCoolDownTime;  // 0x6C (0x6C)
	float InitCoolDownTime;  // 0x70 (0x70)
	char pad_116[4];  // 0x74 (0x74)


}; 
 
 


// Class DungeonCrawler.InteractableTargetComponent
// Size: 0x168(Inherited: 0xA0)
struct UInteractableTargetComponent : UActorComponent
{
	char pad_160[88];  // 0xA0 (0xA0)
	struct TMap<struct FGameplayTag, struct FInteractionData> InteractableDataByStateMap;  // 0xF8 (0xF8)
	struct TArray<struct AActor*> Interacters;  // 0x148 (0x148)
	struct UPrimitiveComponent* CurrentInteractPart;  // 0x158 (0x158)
	char pad_352[8];  // 0x160 (0x160)


	void UnregisterInteracter(struct AActor* InteractingActor); // Function DungeonCrawler.InteractableTargetComponent.UnregisterInteracter
	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.InteractableTargetComponent.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.InteractableTargetComponent.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.InteractableTargetComponent.TerminateBase
	bool ShouldCancelOthersWhenInteractSucceed(struct FGameplayTag StateTag); // Function DungeonCrawler.InteractableTargetComponent.ShouldCancelOthersWhenInteractSucceed
	void SetInteractionData(struct FDesignDataPropsInteract& InteractionData); // Function DungeonCrawler.InteractableTargetComponent.SetInteractionData
	void RegisterInteracter(struct AActor* InteractingActor); // Function DungeonCrawler.InteractableTargetComponent.RegisterInteracter
	bool IsDetectable(struct AActor* Interacter); // Function DungeonCrawler.InteractableTargetComponent.IsDetectable
	void InteractSucceed(struct AActor* InteractingActor, struct FGameplayTag TriggerTag, struct FGameplayTag StateTag, struct FHitResult HitResult); // Function DungeonCrawler.InteractableTargetComponent.InteractSucceed
	void InteractFailed(struct AActor* InteractingActor, struct FGameplayTag TriggerTag); // Function DungeonCrawler.InteractableTargetComponent.InteractFailed
	struct FGameplayTag GetStateTag(struct FGameplayTag TriggerTag); // Function DungeonCrawler.InteractableTargetComponent.GetStateTag
	struct FInteractTargetData GetInteractTargetData(); // Function DungeonCrawler.InteractableTargetComponent.GetInteractTargetData
	struct TMap<struct FGameplayTag, struct FInteractionData> GetInteractableDataByStateMap(); // Function DungeonCrawler.InteractableTargetComponent.GetInteractableDataByStateMap
	uint8_t GetInteractability(struct AActor* Interacter); // Function DungeonCrawler.InteractableTargetComponent.GetInteractability
	struct FInteractionData GetData(struct FGameplayTag StateTag); // Function DungeonCrawler.InteractableTargetComponent.GetData
	bool CanInteract(); // Function DungeonCrawler.InteractableTargetComponent.CanInteract
	void CancelAllInteractions(); // Function DungeonCrawler.InteractableTargetComponent.CancelAllInteractions
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.InteractableTargetComponent.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.DesignDataAssetItemContainer
// Size: 0x50(Inherited: 0x38)
struct UDesignDataAssetItemContainer : UDCDesignDataAssetBase
{
	struct FDesignDataItemContainer Item;  // 0x38 (0x38)
	char pad_76[4];  // 0x4C (0x4C)


}; 
 
 


// Class DungeonCrawler.AccountSession
// Size: 0x178(Inherited: 0x28)
struct UAccountSession : UObject
{
	char pad_40[88];  // 0x28 (0x28)
	struct UBaseObject* BaseObject;  // 0x80 (0x80)
	char pad_136[240];  // 0x88 (0x88)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.AccountSession.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.AccountSession.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.AccountSession.TerminateBase
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.AccountSession.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.DCMerchantDataAsset
// Size: 0xA8(Inherited: 0x38)
struct UDCMerchantDataAsset : UDCTableDataAsset
{
	struct FText Name;  // 0x38 (0x38)
	struct FText GreetingText;  // 0x50 (0x50)
	struct TSoftObjectPtr<UArtDataMerchant> ArtData;  // 0x68 (0x68)
	struct TArray<uint8_t> ServiceTypes;  // 0x98 (0x98)


}; 
 
 


// Class DungeonCrawler.DCMonsterAISystemBlueprintLibrary
// Size: 0x28(Inherited: 0x28)
struct UDCMonsterAISystemBlueprintLibrary : UBlueprintFunctionLibrary
{


	bool SubAggro(struct ADCMonsterBase*& DCMonsterBase, struct ADCCharacterBase*& Target, float Point); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SubAggro
	struct ADCCharacterBase* SpawnSlave(struct ADCMonsterBase*& DCMonsterBase, ADCMonsterBase* SlaveClass, float XYRange, bool& bSuccessfully); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SpawnSlave
	bool SortTargetsByZRange(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, uint8_t MonsterFilterSortingType); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SortTargetsByZRange
	bool SortTargetsByXYRange(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, uint8_t MonsterFilterSortingType); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SortTargetsByXYRange
	struct ADCCharacterBase* SortTargetsByDistanceAndPickTarget(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, uint8_t MonsterFilterSortingType, int32_t Index); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SortTargetsByDistanceAndPickTarget
	bool SortTargetsByDistance(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, uint8_t MonsterFilterSortingType); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SortTargetsByDistance
	bool SortTargetsByAggro(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, uint8_t MonsterFilterSortingType); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SortTargetsByAggro
	bool SetAggroRate(struct ADCCharacterBase*& DCCharacterBase, float Time, float Rate); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SetAggroRate
	bool SetAggro(struct ADCMonsterBase*& DCMonsterBase, struct ADCCharacterBase*& Target, float Point); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SetAggro
	bool RemoveAggroAll(struct ADCCharacterBase* DCCharacterBase); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.RemoveAggroAll
	bool RemoveAggro(struct ADCMonsterBase*& DCMonsterBase, struct ADCCharacterBase*& Target); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.RemoveAggro
	struct ADCCharacterBase* PickTopAggroTarget(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.PickTopAggroTarget
	struct ADCCharacterBase* PickTarget(struct TArray<struct ADCCharacterBase*>& TargetArray, int32_t Index); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.PickTarget
	struct ADCCharacterBase* PickRandomTarget(struct TArray<struct ADCCharacterBase*>& TargetArray); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.PickRandomTarget
	bool MulAggro(struct ADCMonsterBase*& DCMonsterBase, struct ADCCharacterBase*& Target, float Point); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.MulAggro
	bool JumpToLocation(struct ADCCharacterBase*& DCCharacterBase, struct FVector DstLocation, float Power, bool bFavorHighArc); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.JumpToLocation
	bool JumpToActor(struct ADCCharacterBase*& DCCharacterBase, struct AActor*& DstActor, float Power, bool bFavorHighArc); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.JumpToActor
	bool IsAvailablePath(struct ADCMonsterBase*& DCMonsterBase, struct FVector DstLocation); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.IsAvailablePath
	int32_t GetSlaveCount(struct ADCMonsterBase*& DCMonsterBase); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetSlaveCount
	bool GetSightTargetArray(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetSightTargetArray
	bool GetHearingTargetArray(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetHearingTargetArray
	bool GetDamageTargetArray(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetDamageTargetArray
	float GetCurrentAttributeValue(struct ADCCharacterBase*& DCCharacterBase, struct FGameplayAttribute GameplayAttribute, bool& bSuccessfully); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetCurrentAttributeValue
	float GetBaseAttributeValue(struct ADCCharacterBase*& DCCharacterBase, struct FGameplayAttribute GameplayAttribute, bool& bSuccessfully); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetBaseAttributeValue
	bool GetAllTargetArray(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetAllTargetArray
	float GetAggroPoint(struct ADCMonsterBase*& DCMonsterBase, struct ADCCharacterBase*& Target, bool& bSuccessfully); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetAggroPoint
	bool GetAggroMonster(struct ADCCharacterBase* DCCharacterBase, struct TArray<struct ADCMonsterBase*>& TargetArray); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetAggroMonster
	bool FilterUnTagedTargets(struct TArray<struct ADCCharacterBase*>& TargetArray, struct FGameplayTag GameplayTag); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterUnTagedTargets
	bool FilterTargetsWithinZRange(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, float ZRange); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsWithinZRange
	bool FilterTargetsWithinXYRangeAndZRangeAndDirectionalAngleAndAllowedAngle(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, float XYRange, float ZRange, float DirectionalAngle, float AllowedAngle); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsWithinXYRangeAndZRangeAndDirectionalAngleAndAllowedAngle
	bool FilterTargetsWithinXYRange(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, float XYRange); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsWithinXYRange
	bool FilterTargetsWithinDistanceAndDirectionalAngleAndAllowedAngle(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, float Distance, float DirectionalAngle, float AllowedAngle); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsWithinDistanceAndDirectionalAngleAndAllowedAngle
	bool FilterTargetsWithinDistance(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, float Distance); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsWithinDistance
	bool FilterTargetsWithinDirectionAngleAndAllowedAngle(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, float DirectionalAngle, float AllowedAngle); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsWithinDirectionAngleAndAllowedAngle
	bool FilterTargetsOverZRange(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, float ZRange); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsOverZRange
	bool FilterTargetsOverXYRange(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, float XYRange); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsOverXYRange
	bool FilterTargetsOverDistance(struct ADCMonsterBase*& DCMonsterBase, struct TArray<struct ADCCharacterBase*>& TargetArray, float Distance); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsOverDistance
	bool FilterTagedTargets(struct TArray<struct ADCCharacterBase*>& TargetArray, struct FGameplayTag GameplayTag); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTagedTargets
	void FilterPlayerCharacterTargets(struct TArray<struct ADCCharacterBase*>& TargetArray); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterPlayerCharacterTargets
	bool FilterMonsterTargetsByID(struct TArray<struct ADCCharacterBase*>& TargetArray, struct FPrimaryAssetId ID); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterMonsterTargetsByID
	void FilterMonsterTargets(struct TArray<struct ADCCharacterBase*>& TargetArray); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterMonsterTargets
	bool AddAggro(struct ADCMonsterBase*& DCMonsterBase, struct ADCCharacterBase*& Target, float Point); // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.AddAggro
}; 
 
 


// Class DungeonCrawler.BTTask_DCGameFloorRule
// Size: 0x140(Inherited: 0xE0)
struct UBTTask_DCGameFloorRule : UBTTask_DCGameBase
{
	struct UDCFloorRuleDataAsset* RuleData;  // 0xE0 (0xE0)
	float WarmupDuration;  // 0xE8 (0xE8)
	char pad_236[4];  // 0xEC (0xEC)
	struct ADeathSwarmBase* DeathSwarm;  // 0xF0 (0xF0)
	struct FDCFloorRuleManager FloorRuleManager;  // 0xF8 (0xF8)
	char pad_304[16];  // 0x130 (0x130)


}; 
 
 


// Class DungeonCrawler.GameMusicSlotWidget
// Size: 0x400(Inherited: 0x400)
struct UGameMusicSlotWidget : UMusicSlotWidgetBase
{


	void SelectionChange(bool bIsSelected); // Function DungeonCrawler.GameMusicSlotWidget.SelectionChange
	void OnSelectionChanged(bool bIsSelected); // Function DungeonCrawler.GameMusicSlotWidget.OnSelectionChanged
}; 
 
 


// Class DungeonCrawler.ArtDataMisc
// Size: 0x80(Inherited: 0x80)
struct UArtDataMisc : UArtDataItem
{


}; 
 
 


// Class DungeonCrawler.ArtDataProps
// Size: 0x38(Inherited: 0x38)
struct UArtDataProps : UDCDataAssetBase
{


}; 
 
 


// Class DungeonCrawler.DCCustomizeComponent
// Size: 0x1B0(Inherited: 0xA0)
struct UDCCustomizeComponent : UActorComponent
{
	char pad_160[272];  // 0xA0 (0xA0)


}; 
 
 


// Class DungeonCrawler.DCEquipInventory
// Size: 0x170(Inherited: 0x170)
struct UDCEquipInventory : UDCInventoryBase
{


}; 
 
 


// Class DungeonCrawler.DCSkillDataAsset
// Size: 0x180(Inherited: 0x38)
struct UDCSkillDataAsset : UDCTableDataAsset
{
	struct FText Name;  // 0x38 (0x38)
	struct TSoftObjectPtr<UDescData> DescData;  // 0x50 (0x50)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool CanUse : 1;  // 0x80 (0x80)
	char pad_129[7];  // 0x81 (0x81)
	struct TArray<struct FPrimaryAssetId> Classes;  // 0x88 (0x88)
	struct FGameplayTag SkillType;  // 0x98 (0x98)
	int32_t SkillTier;  // 0xA0 (0xA0)
	char pad_164_1 : 7;  // 0xA4 (0xA4)
	bool CanRecharge : 1;  // 0xA4 (0xA4)
	char pad_165[3];  // 0xA5 (0xA5)
	int32_t MaxCount;  // 0xA8 (0xA8)
	float CastingTime;  // 0xAC (0xAC)
	float ChannelingDuration;  // 0xB0 (0xB0)
	float ChannelingInterval;  // 0xB4 (0xB4)
	int32_t Range;  // 0xB8 (0xB8)
	char pad_188_1 : 7;  // 0xBC (0xBC)
	bool UseMoving : 1;  // 0xBC (0xBC)
	char pad_189_1 : 7;  // 0xBD (0xBD)
	bool NeedAimTarget : 1;  // 0xBD (0xBD)
	char pad_190[2];  // 0xBE (0xBE)
	struct FGameplayTag SkillTag;  // 0xC0 (0xC0)
	struct FGameplayTag SkillCooldownTag;  // 0xC8 (0xC8)
	struct TSoftObjectPtr<UDCGameplayEffectDataAsset> SkillCooldownEffect;  // 0xD0 (0xD0)
	struct TSoftObjectPtr<UArtDataSkill> ArtData;  // 0x100 (0x100)
	struct TSoftObjectPtr<USoundData> SoundData;  // 0x130 (0x130)
	struct TArray<struct TSoftObjectPtr<UDCGameplayAbilityDataAsset>> Abilities;  // 0x160 (0x160)
	struct TArray<struct TSoftObjectPtr<UDCGameplayEffectDataAsset>> Effects;  // 0x170 (0x170)


}; 
 
 


// Class DungeonCrawler.ActorStatusUIData
// Size: 0x40(Inherited: 0x38)
struct UActorStatusUIData : UDCDataAssetBase
{
	struct UTexture2D* IconTexture;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.ChatSetWidgetBase
// Size: 0x3B8(Inherited: 0x300)
struct UChatSetWidgetBase : UDCWidgetBase
{
	struct UListView* ChatListView;  // 0x300 (0x300)
	struct UChatEditWidgetBase* ChatEditWidget;  // 0x308 (0x308)
	struct UAccountLink* AccountLink;  // 0x310 (0x310)
	char pad_792[144];  // 0x318 (0x318)
	struct TArray<struct UChatWidgetData*> ChatWidgetDataArray;  // 0x3A8 (0x3A8)


	void SetChatKeyboardFocus(); // Function DungeonCrawler.ChatSetWidgetBase.SetChatKeyboardFocus
	void OnChatEditFocus(bool InbFocus); // Function DungeonCrawler.ChatSetWidgetBase.OnChatEditFocus
	bool OnChatDataCommitted(struct FChatData& InChatData); // Function DungeonCrawler.ChatSetWidgetBase.OnChatDataCommitted
	void OnChatDataChanged(struct FText& InText); // Function DungeonCrawler.ChatSetWidgetBase.OnChatDataChanged
	void ChatScrollToBottom(); // Function DungeonCrawler.ChatSetWidgetBase.ChatScrollToBottom
	void AddSystemChatItemLinkDesc(); // Function DungeonCrawler.ChatSetWidgetBase.AddSystemChatItemLinkDesc
}; 
 
 


// Class DungeonCrawler.DCCustomizeActionSkinListWidget
// Size: 0x328(Inherited: 0x300)
struct UDCCustomizeActionSkinListWidget : UDCWidgetBase
{
	char pad_768[24];  // 0x300 (0x300)
	struct UTileView* TileView_ActionSkinList;  // 0x318 (0x318)
	uint8_t ActionSkinType;  // 0x320 (0x320)
	char pad_801[7];  // 0x321 (0x321)


	void OnSetActionSkinInfoArray(struct TArray<struct FDCActionSkinInfo> ActionSkinInfoArray); // Function DungeonCrawler.DCCustomizeActionSkinListWidget.OnSetActionSkinInfoArray
}; 
 
 


// Class DungeonCrawler.ArtDataMonster
// Size: 0x40(Inherited: 0x38)
struct UArtDataMonster : UDCDataAssetBase
{
	struct UBehaviorTree* BehaviorTree;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.SpellSlotWidgetBase
// Size: 0x428(Inherited: 0x300)
struct USpellSlotWidgetBase : UDCWidgetBase
{
	struct FSpellData SpellData;  // 0x300 (0x300)
	char pad_828[4];  // 0x33C (0x33C)
	struct FDesignDataSpell DesignDataSpell;  // 0x340 (0x340)
	struct TArray<struct FText> DescTextArray;  // 0x408 (0x408)
	struct UArtDataSpell* ArtData;  // 0x418 (0x418)
	int32_t SlotIndex;  // 0x420 (0x420)
	char pad_1060[4];  // 0x424 (0x424)


	void SetSpellData(struct FSpellData& InSpellData, struct FDesignDataSpell& InDesignDataSpell); // Function DungeonCrawler.SpellSlotWidgetBase.SetSpellData
	void Reset(); // Function DungeonCrawler.SpellSlotWidgetBase.Reset
	void OnSpellDataChanged(struct FSpellData& InSpellData, struct FDesignDataSpell& InDesignDataSpell); // Function DungeonCrawler.SpellSlotWidgetBase.OnSpellDataChanged
	void OnSetSpellArtData(struct UArtDataSpell* InArtSpellData); // Function DungeonCrawler.SpellSlotWidgetBase.OnSetSpellArtData
	void OnReset(); // Function DungeonCrawler.SpellSlotWidgetBase.OnReset
}; 
 
 


// Class DungeonCrawler.GameMenuOptionsWidget
// Size: 0x470(Inherited: 0x440)
struct UGameMenuOptionsWidget : UDCCommonActivatableWidgetBase
{
	struct UCheckBox* ControlsCheckBox;  // 0x440 (0x440)
	struct UCheckBox* GameplayCheckBox;  // 0x448 (0x448)
	struct UCheckBox* AudioCheckBox;  // 0x450 (0x450)
	struct UCheckBox* VideoCheckBox;  // 0x458 (0x458)
	struct UCheckBox* InputCheckBox;  // 0x460 (0x460)
	struct UWidgetSwitcher* GameMenuOptionsWidgetSwitcher;  // 0x468 (0x468)


	void OnWidgetToggleNotify(uint8_t Invisibility); // Function DungeonCrawler.GameMenuOptionsWidget.OnWidgetToggleNotify
	void OnVideoButtonChecked(bool bIsChecked); // Function DungeonCrawler.GameMenuOptionsWidget.OnVideoButtonChecked
	void OnToggled(uint8_t Invisibility); // Function DungeonCrawler.GameMenuOptionsWidget.OnToggled
	void OnInputButtonChecked(bool bIsChecked); // Function DungeonCrawler.GameMenuOptionsWidget.OnInputButtonChecked
	void OnGameplayButtonChecked(bool bIsChecked); // Function DungeonCrawler.GameMenuOptionsWidget.OnGameplayButtonChecked
	void OnControlsButtonChecked(bool bIsChecked); // Function DungeonCrawler.GameMenuOptionsWidget.OnControlsButtonChecked
	void OnAudioButtonChecked(bool bIsChecked); // Function DungeonCrawler.GameMenuOptionsWidget.OnAudioButtonChecked
}; 
 
 


// Class DungeonCrawler.DCLobbyEmoteArtData
// Size: 0x40(Inherited: 0x38)
struct UDCLobbyEmoteArtData : UDCDataAssetBase
{
	struct UTexture2D* LobbyEmoteIconTexture;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.InteractData
// Size: 0x70(Inherited: 0x38)
struct UInteractData : UDCDataAssetBase
{
	struct UAnimMontage* MontageToPlayBothHandEquipped;  // 0x38 (0x38)
	struct UAnimMontage* MontageToPlayPrimaryEquipped;  // 0x40 (0x40)
	struct UAnimMontage* MontageToPlaySecondaryEquipped;  // 0x48 (0x48)
	struct UAnimMontage* MontageToPlayPrimaryEquippedInstant;  // 0x50 (0x50)
	struct UAnimMontage* MontageToPlaySecondaryEquippedInstant;  // 0x58 (0x58)
	struct TArray<struct FGameplayTag> IgnoreTypeArray;  // 0x60 (0x60)


}; 
 
 


// Class DungeonCrawler.ArtDataItem
// Size: 0x80(Inherited: 0x38)
struct UArtDataItem : UDCDataAssetBase
{
	uint8_t ItemType;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct UTexture2D* ItemIconTexture;  // 0x40 (0x40)
	struct USkeletalMesh* ItemSkeletalMesh;  // 0x48 (0x48)
	struct TArray<struct FItemMaterialInfo> ItemSkeletalMeshMaterialInfoArray;  // 0x50 (0x50)
	struct UStaticMesh* ItemStaticMesh;  // 0x60 (0x60)
	struct TArray<struct FItemMaterialInfo> ItemStaticMeshMaterialInfoArray;  // 0x68 (0x68)
	UAnimInstance* ItemAnimInstanceClass;  // 0x78 (0x78)


}; 
 
 


// Class DungeonCrawler.DCTableDataAsset
// Size: 0x38(Inherited: 0x38)
struct UDCTableDataAsset : UDCDataAsset
{


}; 
 
 


// Class DungeonCrawler.ArtDataAnimatedItem
// Size: 0x118(Inherited: 0x80)
struct UArtDataAnimatedItem : UArtDataItem
{
	struct FAnimationSet AnimationSet;  // 0x80 (0x80)
	struct TMap<struct FGameplayTag, struct FAnimationSet> ConditionalAnimationSet;  // 0xB8 (0xB8)
	struct FName EquipmentSocket;  // 0x108 (0x108)
	struct FName SheathSocket;  // 0x110 (0x110)


}; 
 
 


// Class DungeonCrawler.DCAttributeModMagnitudeCalculationSpellCapacity
// Size: 0x100(Inherited: 0x40)
struct UDCAttributeModMagnitudeCalculationSpellCapacity : UGameplayModMagnitudeCalculation
{
	char pad_64[192];  // 0x40 (0x40)


}; 
 
 


// Class DungeonCrawler.DCMetaGameSession
// Size: 0x3F0(Inherited: 0x3F0)
struct ADCMetaGameSession : ADCGameSession
{


}; 
 
 


// Class DungeonCrawler.DCAkAcousticPortal
// Size: 0x2D8(Inherited: 0x2D8)
struct ADCAkAcousticPortal : AAkAcousticPortal
{


}; 
 
 


// Class DungeonCrawler.DCGATA_GroundTraceWithMaxHeight
// Size: 0x420(Inherited: 0x420)
struct ADCGATA_GroundTraceWithMaxHeight : AGameplayAbilityTargetActor_GroundTrace
{
	float MaxHeight;  // 0x418 (0x418)


}; 
 
 


// Class DungeonCrawler.DCCommonActivatableWidgetBase
// Size: 0x440(Inherited: 0x3C8)
struct UDCCommonActivatableWidgetBase : UCommonActivatableWidget
{
	char pad_968[88];  // 0x3C8 (0x3C8)
	struct UBaseObject* BaseObject;  // 0x420 (0x420)
	struct FDataTableRowHandle VirtualCursorModeInputActionData;  // 0x428 (0x428)
	char pad_1080[8];  // 0x438 (0x438)


	void UnbindMsgOwner(struct UScriptStruct* InMsgType); // Function DungeonCrawler.DCCommonActivatableWidgetBase.UnbindMsgOwner
	void UnbindMsgAllOwner(); // Function DungeonCrawler.DCCommonActivatableWidgetBase.UnbindMsgAllOwner
	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.DCCommonActivatableWidgetBase.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.DCCommonActivatableWidgetBase.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.DCCommonActivatableWidgetBase.TerminateBase
	bool IsSpectating(); // Function DungeonCrawler.DCCommonActivatableWidgetBase.IsSpectating
	struct TScriptInterface<IBaseInterface> GetOwningBaseInterfaceBlueprint(); // Function DungeonCrawler.DCCommonActivatableWidgetBase.GetOwningBaseInterfaceBlueprint
	void EnableVirtualCursor(); // Function DungeonCrawler.DCCommonActivatableWidgetBase.EnableVirtualCursor
	void DisableVirtualCursor(); // Function DungeonCrawler.DCCommonActivatableWidgetBase.DisableVirtualCursor
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.DCCommonActivatableWidgetBase.BroadcastMsgBlueprint
	void BindMsgOwner(struct UScriptStruct* InMsgType, struct UBindMsgNode* InMsgDynamicDelegate); // Function DungeonCrawler.DCCommonActivatableWidgetBase.BindMsgOwner
}; 
 
 


// Class DungeonCrawler.ArtDataWeapon
// Size: 0x118(Inherited: 0x118)
struct UArtDataWeapon : UArtDataAnimatedItem
{


}; 
 
 


// Class DungeonCrawler.BTD_CheckGameplayTagsOnActorAbortObservers
// Size: 0xD8(Inherited: 0xC8)
struct UBTD_CheckGameplayTagsOnActorAbortObservers : UBTDecorator_CheckGameplayTagsOnActor
{
	char pad_200[16];  // 0xC8 (0xC8)


}; 
 
 


// Class DungeonCrawler.ArtDataArmor
// Size: 0x90(Inherited: 0x80)
struct UArtDataArmor : UArtDataItem
{
	struct TArray<uint8_t> MorphTargets;  // 0x80 (0x80)


}; 
 
 


// Class DungeonCrawler.DCLoadingScreenWidget
// Size: 0x280(Inherited: 0x278)
struct UDCLoadingScreenWidget : UUserWidget
{
	int32_t ImageIndex;  // 0x278 (0x278)
	int32_t DescIndex;  // 0x27C (0x27C)


	void OnUpdated(); // Function DungeonCrawler.DCLoadingScreenWidget.OnUpdated
	int32_t GetNumImages(); // Function DungeonCrawler.DCLoadingScreenWidget.GetNumImages
	int32_t GetNumDescs(); // Function DungeonCrawler.DCLoadingScreenWidget.GetNumDescs
}; 
 
 


// Class DungeonCrawler.ContainerInventoryGroupWidget
// Size: 0x3C0(Inherited: 0x300)
struct UContainerInventoryGroupWidget : UDCWidgetBase
{
	struct UAccountLink* AccountLink;  // 0x300 (0x300)
	struct FString LinkedAccountId;  // 0x308 (0x308)
	struct FString CheckTargetAccountId;  // 0x318 (0x318)
	struct TArray<struct TWeakObjectPtr<UInventoryComponent>> InventoryArray;  // 0x328 (0x328)
	char pad_824[24];  // 0x338 (0x338)
	struct UPanelWidget* ContainerInventoryParent;  // 0x350 (0x350)
	struct TSoftClassPtr<UObject> ItemCountSelectWidgetClass;  // 0x358 (0x358)
	struct TArray<struct UContainerInventoryWidget*> ContainerInventoryWidgetArray;  // 0x388 (0x388)
	UContainerInventoryWidget* ContainerInventoryWidgetClass;  // 0x398 (0x398)
	UContainerInventoryWidget* ReadOnlyContainerInventoryWidgetClass;  // 0x3A0 (0x3A0)
	uint8_t InventoryGroupType;  // 0x3A8 (0x3A8)
	char pad_937[7];  // 0x3A9 (0x3A9)
	struct FMulticastInlineDelegate OnInventoryCountChanged;  // 0x3B0 (0x3B0)


	void ResetContainerInventoryWidgets(); // Function DungeonCrawler.ContainerInventoryGroupWidget.ResetContainerInventoryWidgets
	void OnPopItemSelectWidget(struct FItemData& ItemData, struct FVector2D& DropScreenPos, struct AActor* OldOwnerActor); // Function DungeonCrawler.ContainerInventoryGroupWidget.OnPopItemSelectWidget
	void OnItemDropDetected(struct FItemData& ItemData, struct FVector2D& DropScreenPos, struct AActor* OldOwnerActor); // Function DungeonCrawler.ContainerInventoryGroupWidget.OnItemDropDetected
}; 
 
 


// Class DungeonCrawler.VoipPartyMemberSettingWidget
// Size: 0x308(Inherited: 0x300)
struct UVoipPartyMemberSettingWidget : UDCWidgetBase
{
	char pad_768[8];  // 0x300 (0x300)


}; 
 
 


// Class DungeonCrawler.ArtDataUtility
// Size: 0x118(Inherited: 0x118)
struct UArtDataUtility : UArtDataAnimatedItem
{


}; 
 
 


// Class DungeonCrawler.ClassIconGroupWidget
// Size: 0x318(Inherited: 0x300)
struct UClassIconGroupWidget : UDCWidgetBase
{
	struct UCommonTileView* ClassIconCommonTileView;  // 0x300 (0x300)
	struct FMulticastInlineDelegate ClassIconSelectedDelegate;  // 0x308 (0x308)


}; 
 
 


// Class DungeonCrawler.BTDecorator_DCGameBlackboard
// Size: 0x120(Inherited: 0xC0)
struct UBTDecorator_DCGameBlackboard : UBTDecorator_Blackboard
{
	char pad_192[96];  // 0xC0 (0xC0)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.BTDecorator_DCGameBlackboard.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.BTDecorator_DCGameBlackboard.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.BTDecorator_DCGameBlackboard.TerminateBase
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.BTDecorator_DCGameBlackboard.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.ArtDataAccessory
// Size: 0x80(Inherited: 0x80)
struct UArtDataAccessory : UArtDataItem
{


}; 
 
 


// Class DungeonCrawler.DCAttributeModMagnitudeCalculationAgility
// Size: 0xC0(Inherited: 0x40)
struct UDCAttributeModMagnitudeCalculationAgility : UGameplayModMagnitudeCalculation
{
	char pad_64[128];  // 0x40 (0x40)


}; 
 
 


// Class DungeonCrawler.FloorPortalScrollBase
// Size: 0x3F0(Inherited: 0x3E0)
struct AFloorPortalScrollBase : APropsActorBase
{
	uint8_t PortalScrollType;  // 0x3E0 (0x3E0)
	char pad_993[15];  // 0x3E1 (0x3E1)


	void ClosePortalScroll(struct ADCPlayerCharacterBase* Character); // Function DungeonCrawler.FloorPortalScrollBase.ClosePortalScroll
}; 
 
 


// Class DungeonCrawler.DesignDataAssetItemProperty
// Size: 0x48(Inherited: 0x38)
struct UDesignDataAssetItemProperty : UDCDesignDataAssetBase
{
	struct FDesignDataItemProperty Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.ArtDataProjectile
// Size: 0x40(Inherited: 0x38)
struct UArtDataProjectile : UDCDataAssetBase
{
	float DestroyTime;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 


// Class DungeonCrawler.DCRedstoneShardShopListWidgetBase
// Size: 0x330(Inherited: 0x300)
struct UDCRedstoneShardShopListWidgetBase : UDCWidgetBase
{
	char pad_768[24];  // 0x300 (0x300)
	struct UPanelWidget* ShopItemListWidget;  // 0x318 (0x318)
	char pad_800[16];  // 0x320 (0x320)


}; 
 
 


// Class DungeonCrawler.CharacterCreateAttributeWidgetData
// Size: 0x38(Inherited: 0x28)
struct UCharacterCreateAttributeWidgetData : UObject
{
	struct FGameplayEffectDescData AttrributeEffectDescData;  // 0x28 (0x28)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 


// Class DungeonCrawler.DCLootComponent
// Size: 0xF0(Inherited: 0xA0)
struct UDCLootComponent : UActorComponent
{
	struct AActor* LootTargetActor;  // 0xA0 (0xA0)
	char pad_168[72];  // 0xA8 (0xA8)


}; 
 
 


// Class DungeonCrawler.GA_ReversibleChangeIdle
// Size: 0x560(Inherited: 0x558)
struct UGA_ReversibleChangeIdle : UDCGameplayAbilityBase
{
	struct UAnimMontage* MontageToPlay;  // 0x558 (0x558)


	void OnCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_ReversibleChangeIdle.OnCompleted
	void OnBlendOut(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_ReversibleChangeIdle.OnBlendOut
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function DungeonCrawler.GA_ReversibleChangeIdle.AbilityActivated
}; 
 
 


// Class DungeonCrawler.GameplayTagSoundConditionData
// Size: 0x80(Inherited: 0x30)
struct UGameplayTagSoundConditionData : UDataAsset
{
	struct TMap<struct FGameplayTag, struct FGameplayTagQuery> GameplayTagSoundConditionData;  // 0x30 (0x30)


}; 
 
 


// Class DungeonCrawler.ArtDataSkill
// Size: 0x60(Inherited: 0x38)
struct UArtDataSkill : UDCDataAssetBase
{
	struct UTexture2D* SkillIconTexture;  // 0x38 (0x38)
	struct UNiagaraSystem* CastStart;  // 0x40 (0x40)
	struct UNiagaraSystem* CastReady;  // 0x48 (0x48)
	struct UNiagaraSystem* CastFire;  // 0x50 (0x50)
	struct UNiagaraSystem* ChannelingStart;  // 0x58 (0x58)


}; 
 
 


// Class DungeonCrawler.DCAttributeModMagnitudeCalculationWill
// Size: 0xC0(Inherited: 0x40)
struct UDCAttributeModMagnitudeCalculationWill : UGameplayModMagnitudeCalculation
{
	char pad_64[128];  // 0x40 (0x40)


}; 
 
 


// Class DungeonCrawler.DCAttributeModMagnitudeCalculationMoveSpeed
// Size: 0x1C0(Inherited: 0x40)
struct UDCAttributeModMagnitudeCalculationMoveSpeed : UGameplayModMagnitudeCalculation
{
	char pad_64[384];  // 0x40 (0x40)


}; 
 
 


// Class DungeonCrawler.DCShopConfirmPurchasePopupData
// Size: 0x68(Inherited: 0x30)
struct UDCShopConfirmPurchasePopupData : UPopupDataBase
{
	uint8_t CurrencyType;  // 0x30 (0x30)
	char pad_49[3];  // 0x31 (0x31)
	int32_t Price;  // 0x34 (0x34)
	uint8_t ShopType;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)
	struct FPrimaryAssetId ShopItemAssetId;  // 0x3C (0x3C)
	char pad_76[4];  // 0x4C (0x4C)
	struct FText ShopItemName;  // 0x50 (0x50)


}; 
 
 


// Class DungeonCrawler.ArtDataSpell
// Size: 0x68(Inherited: 0x38)
struct UArtDataSpell : UDCDataAssetBase
{
	struct UTexture2D* SpellIconTexture;  // 0x38 (0x38)
	struct UNiagaraSystem* CastStart;  // 0x40 (0x40)
	struct UNiagaraSystem* CastReady;  // 0x48 (0x48)
	struct UNiagaraSystem* CastFire;  // 0x50 (0x50)
	struct UNiagaraSystem* ChannelingStart;  // 0x58 (0x58)
	struct UNiagaraSystem* ChannelingStartOnCharacter;  // 0x60 (0x60)


}; 
 
 


// Class DungeonCrawler.DCDataComponent
// Size: 0xD0(Inherited: 0xA0)
struct UDCDataComponent : UActorComponent
{
	char pad_160[24];  // 0xA0 (0xA0)
	struct FPrimaryAssetId AssetId;  // 0xB8 (0xB8)
	struct UDCDataAssetBase* DataAsset;  // 0xC8 (0xC8)


	void OnRep_AssetId(struct FPrimaryAssetId PrevAssetId); // Function DungeonCrawler.DCDataComponent.OnRep_AssetId
}; 
 
 


// Class DungeonCrawler.DCDesignDataAssetBase
// Size: 0x38(Inherited: 0x38)
struct UDCDesignDataAssetBase : UDCDataAssetBase
{


}; 
 
 


// Class DungeonCrawler.DCCharacterLobbyCapture
// Size: 0x840(Inherited: 0x6B0)
struct ADCCharacterLobbyCapture : ADCCharacterV2
{
	char pad_1712[88];  // 0x6B0 (0x6B0)
	struct UBaseObject* BaseObject;  // 0x708 (0x708)
	struct FGameplayAbilitySpecHandle LobbyPoseAbilitySpecHandle;  // 0x710 (0x710)
	uint8_t PartyUserLocate;  // 0x714 (0x714)
	char pad_1813[163];  // 0x715 (0x715)
	struct UAccountLink* AccountLink;  // 0x7B8 (0x7B8)
	struct TArray<struct FPrimaryAssetId> OwnedPerkIdArray;  // 0x7C0 (0x7C0)
	struct TMap<int64_t, struct AActor*> ContainingActorMap;  // 0x7D0 (0x7D0)
	struct TArray<struct FItemData> ContainingItemDataArray;  // 0x820 (0x820)
	struct TWeakObjectPtr<UEquipmentInventoryComponent> LinkedEquipmentComponent;  // 0x830 (0x830)
	char pad_2104[8];  // 0x838 (0x838)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.DCCharacterLobbyCapture.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.DCCharacterLobbyCapture.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.DCCharacterLobbyCapture.TerminateBase
	void OnLobbyPoseSkinChanged(struct UDCActionSkinDataAsset* ActionSkinData, bool bIsEquipped); // Function DungeonCrawler.DCCharacterLobbyCapture.OnLobbyPoseSkinChanged
	uint8_t GetPartyLocation(); // Function DungeonCrawler.DCCharacterLobbyCapture.GetPartyLocation
	struct FNickname GetNickname(); // Function DungeonCrawler.DCCharacterLobbyCapture.GetNickname
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.DCCharacterLobbyCapture.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.DCAT_WaitForInputAction
// Size: 0xC8(Inherited: 0x80)
struct UDCAT_WaitForInputAction : UAbilityTask
{
	struct FMulticastInlineDelegate InputActionStarted;  // 0x80 (0x80)
	struct FMulticastInlineDelegate InputActionCompleted;  // 0x90 (0x90)
	struct UInputAction* InputAction;  // 0xA0 (0xA0)
	char pad_168[32];  // 0xA8 (0xA8)


	struct UDCAT_WaitForInputAction* WaitForInputAction(struct UGameplayAbility* OwningAbility, struct UInputAction* InInputAction, bool OnlyTriggerOnce); // Function DungeonCrawler.DCAT_WaitForInputAction.WaitForInputAction
}; 
 
 


// Class DungeonCrawler.ArtDataMusic
// Size: 0xA0(Inherited: 0x38)
struct UArtDataMusic : UDCDataAssetBase
{
	struct UTexture2D* MusicIconTexture;  // 0x38 (0x38)
	struct UNiagaraSystem* PlayStart;  // 0x40 (0x40)
	struct UNiagaraSystem* PlayStartOnCharacter;  // 0x48 (0x48)
	struct UNiagaraSystem* PlayReady;  // 0x50 (0x50)
	struct UNiagaraSystem* PlayReadyOnCharacter;  // 0x58 (0x58)
	struct UNiagaraSystem* PlayFire;  // 0x60 (0x60)
	struct UNiagaraSystem* PlayFireOnCharacter;  // 0x68 (0x68)
	struct UNiagaraSystem* ChannelingStart;  // 0x70 (0x70)
	struct UNiagaraSystem* ChannelingStartOnCharacter;  // 0x78 (0x78)
	struct UNiagaraSystem* MusicParticleSystemOnTarget;  // 0x80 (0x80)
	struct FName MusicParticleSystemOnTargetAttachBoneName;  // 0x88 (0x88)
	struct UNiagaraSystem* MusicNoteSystemOnTarget;  // 0x90 (0x90)
	struct UMaterialInterface* MusicNoteSystemMaterial;  // 0x98 (0x98)


}; 
 
 


// Class DungeonCrawler.DCAT_TargetActorRadius
// Size: 0xA0(Inherited: 0x80)
struct UDCAT_TargetActorRadius : UAbilityTask
{
	struct FMulticastInlineDelegate OnTargetActorOverlap;  // 0x80 (0x80)
	char pad_144[16];  // 0x90 (0x90)


	struct UDCAT_TargetActorRadius* TargetActorRadius(struct UGameplayAbility* OwningAbility, float Radius, enum class ECollisionChannel CollisionChannel, UObject* TargetingClass); // Function DungeonCrawler.DCAT_TargetActorRadius.TargetActorRadius
}; 
 
 


// Class DungeonCrawler.CharacterSelectCharSlotWidget
// Size: 0x3A0(Inherited: 0x300)
struct UCharacterSelectCharSlotWidget : UDCWidgetBase
{
	char pad_768[160];  // 0x300 (0x300)


	void OnFMsgWidgetStreamingModeNotifyBlueprint(struct FMsgWidgetStreamingModeNotify& InMsg); // Function DungeonCrawler.CharacterSelectCharSlotWidget.OnFMsgWidgetStreamingModeNotifyBlueprint
	void OnCharacterSlot(struct FCharacterSlot& NewValue, struct FCharacterSlot& OldValue); // Function DungeonCrawler.CharacterSelectCharSlotWidget.OnCharacterSlot
	bool CanSelect(); // Function DungeonCrawler.CharacterSelectCharSlotWidget.CanSelect
}; 
 
 


// Class DungeonCrawler.ClassSelectPerkItemWidget
// Size: 0x308(Inherited: 0x300)
struct UClassSelectPerkItemWidget : UDCWidgetBase
{
	char pad_768[8];  // 0x300 (0x300)


}; 
 
 


// Class DungeonCrawler.BTTask_DCGameCheckGameStart
// Size: 0xE0(Inherited: 0xE0)
struct UBTTask_DCGameCheckGameStart : UBTTask_DCGameBase
{


}; 
 
 


// Class DungeonCrawler.ArtDataPerk
// Size: 0x40(Inherited: 0x38)
struct UArtDataPerk : UDCDataAssetBase
{
	struct UTexture2D* PerkIconTexture;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCAIPerceptionComponent
// Size: 0x180(Inherited: 0x180)
struct UDCAIPerceptionComponent : UAIPerceptionComponent
{


}; 
 
 


// Class DungeonCrawler.DCGameObjectLinkComponent
// Size: 0xB8(Inherited: 0xA0)
struct UDCGameObjectLinkComponent : UActorComponent
{
	char pad_160[8];  // 0xA0 (0xA0)
	struct FGameplayTag TypeTag;  // 0xA8 (0xA8)
	struct FMulticastSparseDelegate OnGameObjectLinkEvent;  // 0xB0 (0xB0)
	char pad_177[7];  // 0xB1 (0xB1)


	struct TArray<struct FObjectLinkResponeEvent> RequestToLinkers(struct FObjectLinkRequestEvent& ObjectLinkRequestEvent); // Function DungeonCrawler.DCGameObjectLinkComponent.RequestToLinkers
}; 
 
 


// Class DungeonCrawler.DCUpdateRateOptimizeManagerComponent
// Size: 0x118(Inherited: 0xA0)
struct UDCUpdateRateOptimizeManagerComponent : UActorComponent
{
	char pad_160[120];  // 0xA0 (0xA0)


	void SetFreezeIdle(bool bInFreezeIdle); // Function DungeonCrawler.DCUpdateRateOptimizeManagerComponent.SetFreezeIdle
}; 
 
 


// Class DungeonCrawler.ArtDataMerchant
// Size: 0x40(Inherited: 0x38)
struct UArtDataMerchant : UDCDataAssetBase
{
	struct UTexture2D* MerchantIconTexture;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.MetaKarmaComponent
// Size: 0x100(Inherited: 0x100)
struct UMetaKarmaComponent : UMetaComponentBase
{


}; 
 
 


// Class DungeonCrawler.BTT_BlueprintBase
// Size: 0xA8(Inherited: 0xA8)
struct UBTT_BlueprintBase : UBTTask_BlueprintBase
{


	void OnTaskFinished(struct AAIController* OwnerController, struct APawn* ControlledPawn, enum class EBTNodeResult TaskResult); // Function DungeonCrawler.BTT_BlueprintBase.OnTaskFinished
}; 
 
 


// Class DungeonCrawler.ClassMusicListWidget
// Size: 0x4A0(Inherited: 0x4A0)
struct UClassMusicListWidget : UMusicListWidgetBase
{


	void OnShowEquippableSlot(); // Function DungeonCrawler.ClassMusicListWidget.OnShowEquippableSlot
	void OnHideEquippableSlot(); // Function DungeonCrawler.ClassMusicListWidget.OnHideEquippableSlot
}; 
 
 


// Class DungeonCrawler.DCAT_WaitDelayPausable
// Size: 0xB0(Inherited: 0x80)
struct UDCAT_WaitDelayPausable : UAbilityTask
{
	struct FMulticastInlineDelegate OnFinish;  // 0x80 (0x80)
	struct FMulticastInlineDelegate OnCancelled;  // 0x90 (0x90)
	char pad_160[16];  // 0xA0 (0xA0)


	struct UDCAT_WaitDelayPausable* WaitDelay(struct UGameplayAbility* OwningAbility, float Duration); // Function DungeonCrawler.DCAT_WaitDelayPausable.WaitDelay
	void ResumeTimer(); // Function DungeonCrawler.DCAT_WaitDelayPausable.ResumeTimer
	void PauseTimer(); // Function DungeonCrawler.DCAT_WaitDelayPausable.PauseTimer
	float GetElapsedTime(); // Function DungeonCrawler.DCAT_WaitDelayPausable.GetElapsedTime
	void AddTimerElapsedTimeRatio(float AdditionalRatio); // Function DungeonCrawler.DCAT_WaitDelayPausable.AddTimerElapsedTimeRatio
}; 
 
 


// Class DungeonCrawler.DCAnimNotify_PreReduceAmmoCountOnSourceObject
// Size: 0x40(Inherited: 0x38)
struct UDCAnimNotify_PreReduceAmmoCountOnSourceObject : UAnimNotify
{
	int32_t ReduceCount;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 


// Class DungeonCrawler.NickNameWidgetBase
// Size: 0x338(Inherited: 0x300)
struct UNickNameWidgetBase : UDCWidgetBase
{
	struct FNickNameWidgetData WidgetData;  // 0x300 (0x300)
	char pad_784[40];  // 0x310 (0x310)


	void SetNickName(struct FNickname& InNickName); // Function DungeonCrawler.NickNameWidgetBase.SetNickName
	void OnNickNameStr(struct FString NewValue, struct FString OldValue); // Function DungeonCrawler.NickNameWidgetBase.OnNickNameStr
}; 
 
 


// Class DungeonCrawler.BTTask_DCGameKillAllPlayer
// Size: 0xE0(Inherited: 0xE0)
struct UBTTask_DCGameKillAllPlayer : UBTTask_DCGameBase
{


}; 
 
 


// Class DungeonCrawler.DCPlayerCharacterBase
// Size: 0x9A0(Inherited: 0x8B0)
struct ADCPlayerCharacterBase : ADCCharacterBase
{
	char pad_2224[8];  // 0x8B0 (0x8B0)
	struct USkeletalMeshComponent* PartHead;  // 0x8B8 (0x8B8)
	struct USkeletalMeshComponent* PartHelmet;  // 0x8C0 (0x8C0)
	struct USkeletalMeshComponent* PartGloves;  // 0x8C8 (0x8C8)
	struct USkeletalMeshComponent* PartChest;  // 0x8D0 (0x8D0)
	struct USkeletalMeshComponent* PartPants;  // 0x8D8 (0x8D8)
	struct USkeletalMeshComponent* PartBoots;  // 0x8E0 (0x8E0)
	struct USkeletalMeshComponent* PartBack;  // 0x8E8 (0x8E8)
	struct TArray<struct FPrimaryAssetId> OwnedPerkIdArray;  // 0x8F0 (0x8F0)
	struct TArray<struct FPrimaryAssetId> OwnedSkillIdArray;  // 0x900 (0x900)
	char pad_2320[8];  // 0x910 (0x910)
	struct UDCCharacterDataComponent* DataComponent;  // 0x918 (0x918)
	struct UDCCharacterPartsComponent* PartsComponent;  // 0x920 (0x920)
	struct UDCPerkDataComponent* PerkDataComponent;  // 0x928 (0x928)
	char pad_2352[32];  // 0x930 (0x930)
	struct TMap<struct FGameplayTag, UDCPlayerCharacterClassComponent*> CharacterClassComponentMap;  // 0x950 (0x950)


	void ShowHitDirectionUIMessage(struct AActor* SourceActor, struct FVector HitDirection); // Function DungeonCrawler.DCPlayerCharacterBase.ShowHitDirectionUIMessage
	void OnRep_OwnedSkillIdArray(); // Function DungeonCrawler.DCPlayerCharacterBase.OnRep_OwnedSkillIdArray
	void OnRep_OwnedPerkIdArray(); // Function DungeonCrawler.DCPlayerCharacterBase.OnRep_OwnedPerkIdArray
	void OnActionSkinChanged(struct UDCActionSkinDataAsset* ActionSkinData, bool bIsEquipped); // Function DungeonCrawler.DCPlayerCharacterBase.OnActionSkinChanged
	void InitInventory_Server(); // Function DungeonCrawler.DCPlayerCharacterBase.InitInventory_Server
	struct UDCPerkDataComponent* GetPerkDataComponent(); // Function DungeonCrawler.DCPlayerCharacterBase.GetPerkDataComponent
	uint8_t GetGender(); // Function DungeonCrawler.DCPlayerCharacterBase.GetGender
	void ClientShowSystemMessage(struct FText MessageText); // Function DungeonCrawler.DCPlayerCharacterBase.ClientShowSystemMessage
	void ChangeGender_Server(uint8_t Gender); // Function DungeonCrawler.DCPlayerCharacterBase.ChangeGender_Server
}; 
 
 


// Class DungeonCrawler.SpellComponent
// Size: 0x148(Inherited: 0xA0)
struct USpellComponent : UDCPlayerCharacterClassComponent
{
	char pad_160[136];  // 0xA0 (0xA0)
	struct TArray<struct ASpellActor*> SpellActors;  // 0x128 (0x128)
	struct FGameplayTag CurrentSpellTag;  // 0x138 (0x138)
	float SpellCurrentCapacity;  // 0x140 (0x140)
	char pad_324[4];  // 0x144 (0x144)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.SpellComponent.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.SpellComponent.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.SpellComponent.TerminateBase
	void ServerSetCurrentSpell(struct FGameplayTag SpellTag); // Function DungeonCrawler.SpellComponent.ServerSetCurrentSpell
	void OnRep_SpellActors(struct TArray<struct ASpellActor*>& OldASpellActors); // Function DungeonCrawler.SpellComponent.OnRep_SpellActors
	void OnRep_CurrentSpellTag(); // Function DungeonCrawler.SpellComponent.OnRep_CurrentSpellTag
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.SpellComponent.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.ArtDataEmote
// Size: 0x40(Inherited: 0x38)
struct UArtDataEmote : UDCDataAssetBase
{
	struct UTexture2D* EmoteIconTexture;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCDungeonGameMode
// Size: 0x528(Inherited: 0x4C8)
struct ADCDungeonGameMode : ADCIngameGameMode
{
	float WarmupDuration;  // 0x4C8 (0x4C8)
	char pad_1228[4];  // 0x4CC (0x4CC)
	struct ADeathSwarmBase* DeathSwarm;  // 0x4D0 (0x4D0)
	struct FDCFloorRuleManager FloorRuleManager;  // 0x4D8 (0x4D8)
	char pad_1296[24];  // 0x510 (0x510)


}; 
 
 


// Class DungeonCrawler.DCMetaInventoryComponent
// Size: 0x180(Inherited: 0x180)
struct UDCMetaInventoryComponent : UDCLobbySimpleInventoryComponent
{


}; 
 
 


// Class DungeonCrawler.DCBagItemWidget
// Size: 0x508(Inherited: 0x500)
struct UDCBagItemWidget : UDCItemCommonWidget
{
	struct USizeBox* ItemSizeBox;  // 0x500 (0x500)


	bool IsGold(); // Function DungeonCrawler.DCBagItemWidget.IsGold
}; 
 
 


// Class DungeonCrawler.BTService_DCGameBase
// Size: 0xD0(Inherited: 0x70)
struct UBTService_DCGameBase : UBTService
{
	char pad_112[96];  // 0x70 (0x70)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.BTService_DCGameBase.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.BTService_DCGameBase.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.BTService_DCGameBase.TerminateBase
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.BTService_DCGameBase.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.AsyncTaskAttributeChanged
// Size: 0x90(Inherited: 0x30)
struct UAsyncTaskAttributeChanged : UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnAttributeChanged;  // 0x30 (0x30)
	struct UAbilitySystemComponent* ASC;  // 0x40 (0x40)
	char pad_72[72];  // 0x48 (0x48)


	struct UAsyncTaskAttributeChanged* ListenForAttributesChange(struct UAbilitySystemComponent* AbilitySystemComponent, struct TArray<struct FGameplayAttribute> Attributes); // Function DungeonCrawler.AsyncTaskAttributeChanged.ListenForAttributesChange
	struct UAsyncTaskAttributeChanged* ListenForAttributeChange(struct UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayAttribute Attribute); // Function DungeonCrawler.AsyncTaskAttributeChanged.ListenForAttributeChange
	void EndTask(); // Function DungeonCrawler.AsyncTaskAttributeChanged.EndTask
}; 
 
 


// Class DungeonCrawler.GA_ItemInstallBase
// Size: 0x650(Inherited: 0x558)
struct UGA_ItemInstallBase : UDCGameplayAbilityBase
{
	struct UAnimMontage* MontageToPlay;  // 0x558 (0x558)
	APropsActorBase* ActorClassToInstall;  // 0x560 (0x560)
	struct FText ConsumeText;  // 0x568 (0x568)
	float ConsumeDuration;  // 0x580 (0x580)
	char pad_1412[4];  // 0x584 (0x584)
	struct FItemData ItemData;  // 0x588 (0x588)
	struct FVector TargetLocation;  // 0x628 (0x628)
	struct FPrimaryAssetId InstallPropId;  // 0x640 (0x640)


	void OnVelocityChange(); // Function DungeonCrawler.GA_ItemInstallBase.OnVelocityChange
	void OnNetSync(); // Function DungeonCrawler.GA_ItemInstallBase.OnNetSync
	void OnFinishConsume(); // Function DungeonCrawler.GA_ItemInstallBase.OnFinishConsume
	void OnDistanceChanged(); // Function DungeonCrawler.GA_ItemInstallBase.OnDistanceChanged
	void OnAimDirectionChange(); // Function DungeonCrawler.GA_ItemInstallBase.OnAimDirectionChange
	void EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_ItemInstallBase.EventReceived
}; 
 
 


// Class DungeonCrawler.AsyncTaskCooldownChanged
// Size: 0x80(Inherited: 0x30)
struct UAsyncTaskCooldownChanged : UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnCooldownBegin;  // 0x30 (0x30)
	struct FMulticastInlineDelegate OnCooldownEnd;  // 0x40 (0x40)
	struct UAbilitySystemComponent* ASC;  // 0x50 (0x50)
	char pad_88[40];  // 0x58 (0x58)


	struct UAsyncTaskCooldownChanged* ListenForCooldownChange(struct UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayTagContainer CooldownTags, bool UseServerCooldown); // Function DungeonCrawler.AsyncTaskCooldownChanged.ListenForCooldownChange
	void EndTask(); // Function DungeonCrawler.AsyncTaskCooldownChanged.EndTask
}; 
 
 


// Class DungeonCrawler.AsyncTaskEffectInhibitionChanged
// Size: 0x50(Inherited: 0x30)
struct UAsyncTaskEffectInhibitionChanged : UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnGameplayEffectInhibitionChange;  // 0x30 (0x30)
	struct UAbilitySystemComponent* ASC;  // 0x40 (0x40)
	char pad_72[8];  // 0x48 (0x48)


	struct UAsyncTaskEffectInhibitionChanged* ListenForGameplayInhibitionChange(struct UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayTag EffectGameplayTag); // Function DungeonCrawler.AsyncTaskEffectInhibitionChanged.ListenForGameplayInhibitionChange
	void EndTask(); // Function DungeonCrawler.AsyncTaskEffectInhibitionChanged.EndTask
}; 
 
 


// Class DungeonCrawler.DCCustomizeEmoteRadialWidget
// Size: 0x3C0(Inherited: 0x300)
struct UDCCustomizeEmoteRadialWidget : UDCWidgetBase
{
	struct UDCCustomizeEmoteRadialSlotWidget* EmoteRadialSlotWidget_2;  // 0x300 (0x300)
	struct UDCCustomizeEmoteRadialSlotWidget* EmoteRadialSlotWidget_3;  // 0x308 (0x308)
	struct UDCCustomizeEmoteRadialSlotWidget* EmoteRadialSlotWidget_4;  // 0x310 (0x310)
	struct UDCCustomizeEmoteRadialSlotWidget* EmoteRadialSlotWidget_5;  // 0x318 (0x318)
	struct UDCCustomizeEmoteRadialSlotWidget* EmoteRadialSlotWidget_6;  // 0x320 (0x320)
	struct UDCCustomizeEmoteRadialSlotWidget* EmoteRadialSlotWidget_7;  // 0x328 (0x328)
	struct UDCCustomizeEmoteRadialSlotWidget* EmoteRadialSlotWidget_8;  // 0x330 (0x330)
	struct UDCCustomizeEmoteRadialSlotWidget* EmoteRadialSlotWidget_9;  // 0x338 (0x338)
	char pad_832[128];  // 0x340 (0x340)


}; 
 
 


// Class DungeonCrawler.DCMonsterAnimInstanceBase
// Size: 0x510(Inherited: 0x4E0)
struct UDCMonsterAnimInstanceBase : UDCCharacterAnimInstanceBase
{
	struct FVector ForwardVector;  // 0x4D8 (0x4D8)
	char pad_1272_1 : 7;  // 0x4F8 (0x4F8)
	bool bIsStaggered : 1;  // 0x4F0 (0x4F0)
	char pad_1273_1 : 7;  // 0x4F9 (0x4F9)
	bool bShouldPlayHitReaction : 1;  // 0x4F1 (0x4F1)
	char pad_1274_1 : 7;  // 0x4FA (0x4FA)
	bool bShouldPlayHitReactionFlipFlop : 1;  // 0x4F2 (0x4F2)
	char pad_1275_1 : 7;  // 0x4FB (0x4FB)
	bool bMontagePlayingOrHorizontalSpeed : 1;  // 0x4F3 (0x4F3)
	char pad_1276_1 : 7;  // 0x4FC (0x4FC)
	bool bShouldPlayStaggered : 1;  // 0x4F4 (0x4F4)
	char pad_1277_1 : 7;  // 0x4FD (0x4FD)
	bool bStateAnimationNone : 1;  // 0x4F5 (0x4F5)
	char pad_1278_1 : 7;  // 0x4FE (0x4FE)
	bool bStateAnimationIdleEmpty : 1;  // 0x4F6 (0x4F6)
	char pad_1279_1 : 7;  // 0x4FF (0x4FF)
	bool bStateAnimationIdleDeath : 1;  // 0x4F7 (0x4F7)
	char pad_1280_1 : 7;  // 0x500 (0x500)
	bool bStateAnimationIdleReloaded : 1;  // 0x4F8 (0x4F8)
	char pad_1281_1 : 7;  // 0x501 (0x501)
	bool bStateAnimationIdleSpawn : 1;  // 0x4F9 (0x4F9)
	char pad_1282_1 : 7;  // 0x502 (0x502)
	bool bStateAnimationIdleDeactivate : 1;  // 0x4FA (0x4FA)
	char pad_1283_1 : 7;  // 0x503 (0x503)
	bool bStateAnimationIdleActivate : 1;  // 0x4FB (0x4FB)
	char pad_1284_1 : 7;  // 0x504 (0x504)
	bool bStateAnimationIdle : 1;  // 0x4FC (0x4FC)
	char pad_1285_1 : 7;  // 0x505 (0x505)
	bool bStateAnimationIdleClose : 1;  // 0x4FD (0x4FD)
	char pad_1286_1 : 7;  // 0x506 (0x506)
	bool bStateAnimationIdleOpen : 1;  // 0x4FE (0x4FE)
	char pad_1287_1 : 7;  // 0x507 (0x507)
	bool bStateAnimationIdleOpenForward : 1;  // 0x4FF (0x4FF)
	char pad_1288_1 : 7;  // 0x508 (0x508)
	bool bStateAnimationIdleOpenBackward : 1;  // 0x500 (0x500)
	char pad_1289_1 : 7;  // 0x509 (0x509)
	bool bStateAnimationIdleOn : 1;  // 0x501 (0x501)
	char pad_1290_1 : 7;  // 0x50A (0x50A)
	bool bStateAnimationIdleDisarm : 1;  // 0x502 (0x502)
	char pad_1291_1 : 7;  // 0x50B (0x50B)
	bool bStateAnimationIdleRemove : 1;  // 0x503 (0x503)
	char pad_1292[4];  // 0x50C (0x50C)


}; 
 
 


// Class DungeonCrawler.TopTitleWidgetBase
// Size: 0x318(Inherited: 0x300)
struct UTopTitleWidgetBase : UDCWidgetBase
{
	struct UTextBlock* Text_Title;  // 0x300 (0x300)
	struct UDCCommonButtonBase* Btn_Left;  // 0x308 (0x308)
	struct UDCCommonButtonBase* Btn_Right;  // 0x310 (0x310)


	void SetTitleText(struct FText& TitleText); // Function DungeonCrawler.TopTitleWidgetBase.SetTitleText
	void SetRightButtonText(struct FText& ButtonText); // Function DungeonCrawler.TopTitleWidgetBase.SetRightButtonText
	void SetLeftButtonText(struct FText& ButtonText); // Function DungeonCrawler.TopTitleWidgetBase.SetLeftButtonText
}; 
 
 


// Class DungeonCrawler.DCItemActor
// Size: 0x3B0(Inherited: 0x290)
struct ADCItemActor : AActor
{
	struct FDCItemInfo ItemInfo;  // 0x290 (0x290)
	struct USkeletalMeshComponent* ItemMeshComponent;  // 0x3A8 (0x3A8)


	void OnRep_ItemInfo(); // Function DungeonCrawler.DCItemActor.OnRep_ItemInfo
}; 
 
 


// Class DungeonCrawler.AsyncTaskEffectStackChanged
// Size: 0x50(Inherited: 0x30)
struct UAsyncTaskEffectStackChanged : UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnGameplayEffectStackChange;  // 0x30 (0x30)
	struct UAbilitySystemComponent* ASC;  // 0x40 (0x40)
	char pad_72[8];  // 0x48 (0x48)


	struct UAsyncTaskEffectStackChanged* ListenForGameplayEffectStackChange(struct UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayTag EffectGameplayTag); // Function DungeonCrawler.AsyncTaskEffectStackChanged.ListenForGameplayEffectStackChange
	void EndTask(); // Function DungeonCrawler.AsyncTaskEffectStackChanged.EndTask
}; 
 
 


// Class DungeonCrawler.AsyncTaskWaitGAActivated
// Size: 0xF8(Inherited: 0x38)
struct UAsyncTaskWaitGAActivated : UAbilityAsync
{
	char pad_56[160];  // 0x38 (0x38)
	struct FMulticastInlineDelegate OnActivate;  // 0xD8 (0xD8)
	char pad_232[16];  // 0xE8 (0xE8)


	struct UAsyncTaskWaitGAActivated* WaitForAbilityActivateWithTagRequirements(struct AActor* TargetActor, struct FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce); // Function DungeonCrawler.AsyncTaskWaitGAActivated.WaitForAbilityActivateWithTagRequirements
	struct UAsyncTaskWaitGAActivated* WaitForAbilityActivate_Query(struct AActor* TargetActor, struct FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce); // Function DungeonCrawler.AsyncTaskWaitGAActivated.WaitForAbilityActivate_Query
	struct UAsyncTaskWaitGAActivated* WaitForAbilityActivate(struct AActor* TargetActor, struct FGameplayTag WithTag, struct FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce); // Function DungeonCrawler.AsyncTaskWaitGAActivated.WaitForAbilityActivate
	void OnAbilityActivate(struct UGameplayAbility* ActivatedAbility); // Function DungeonCrawler.AsyncTaskWaitGAActivated.OnAbilityActivate
}; 
 
 


// Class DungeonCrawler.AsyncTaskWaitGAEnded
// Size: 0xF8(Inherited: 0x38)
struct UAsyncTaskWaitGAEnded : UAbilityAsync
{
	char pad_56[160];  // 0x38 (0x38)
	struct FMulticastInlineDelegate OnAbilityEndedDelegate;  // 0xD8 (0xD8)
	char pad_232[16];  // 0xE8 (0xE8)


	struct UAsyncTaskWaitGAEnded* WaitForAbilityEndWithTagRequirements(struct AActor* TargetActor, struct FGameplayTagRequirements TagRequirements, bool TriggerOnce); // Function DungeonCrawler.AsyncTaskWaitGAEnded.WaitForAbilityEndWithTagRequirements
	struct UAsyncTaskWaitGAEnded* WaitForAbilityEnd_Query(struct AActor* TargetActor, struct FGameplayTagQuery Query, bool TriggerOnce); // Function DungeonCrawler.AsyncTaskWaitGAEnded.WaitForAbilityEnd_Query
	struct UAsyncTaskWaitGAEnded* WaitForAbilityEnd(struct AActor* TargetActor, struct FGameplayTag WithTag, struct FGameplayTag WithoutTag, bool TriggerOnce); // Function DungeonCrawler.AsyncTaskWaitGAEnded.WaitForAbilityEnd
	void OnAbilityEnded(struct FAbilityEndedData& AbilityEndedData); // Function DungeonCrawler.AsyncTaskWaitGAEnded.OnAbilityEnded
}; 
 
 


// Class DungeonCrawler.AsyncTaskWaitGameplayEvent
// Size: 0x60(Inherited: 0x38)
struct UAsyncTaskWaitGameplayEvent : UAbilityAsync
{
	struct FMulticastInlineDelegate EventReceived;  // 0x38 (0x38)
	char pad_72[24];  // 0x48 (0x48)


	struct UAsyncTaskWaitGameplayEvent* WaitGameplayEventToActor(struct AActor* TargetActor, struct FGameplayTag EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact); // Function DungeonCrawler.AsyncTaskWaitGameplayEvent.WaitGameplayEventToActor
	void EventReceivedDelegate__DelegateSignature(struct FGameplayEventData Payload); // DelegateFunction DungeonCrawler.AsyncTaskWaitGameplayEvent.EventReceivedDelegate__DelegateSignature
}; 
 
 


// Class DungeonCrawler.DCResource
// Size: 0x328(Inherited: 0x28)
struct UDCResource : UObject
{
	struct TMap<uint8_t, struct UDCCharacterPartsArtData*> CharacterPartsDataMap;  // 0x28 (0x28)
	struct TMap<struct FDCPlayerCharacterKey, struct FDCPlayerCharacterData> PlayerCharacterDataMap;  // 0x78 (0x78)
	struct TMap<uint8_t, struct TSoftObjectPtr<USoundData>> CharacterSounds;  // 0xC8 (0xC8)
	struct UDCInputConfigData* InputConfigData;  // 0x118 (0x118)
	struct TArray<struct FMappableConfigPair> MappableConfigPairs;  // 0x120 (0x120)
	UDCContextMenuWidget* ContextMenuWidgetClass;  // 0x130 (0x130)
	struct TMap<struct FGameplayAttribute, struct FText> AttributeDisplayNameMap;  // 0x138 (0x138)
	struct FDCMerchantAssetManager MerchantAssetManager;  // 0x188 (0x188)
	struct TMap<uint8_t, struct TSoftObjectPtr<UWorld>> WaitingMaps;  // 0x2C8 (0x2C8)
	struct UCurveTable* LuckGradeCurveTable;  // 0x318 (0x318)
	ADCCharacterV2* ResurrectionCharacterClass;  // 0x320 (0x320)


}; 
 
 


// Class DungeonCrawler.DCAttributeModMagnitudeCalculationItemArmorRating
// Size: 0xC0(Inherited: 0x40)
struct UDCAttributeModMagnitudeCalculationItemArmorRating : UGameplayModMagnitudeCalculation
{
	char pad_64[128];  // 0x40 (0x40)


}; 
 
 


// Class DungeonCrawler.GA_CharacterJump
// Size: 0x558(Inherited: 0x558)
struct UGA_CharacterJump : UDCGameplayAbilityBase
{


	void OnMovementModeChange(enum class EMovementMode MovementMode); // Function DungeonCrawler.GA_CharacterJump.OnMovementModeChange
	void EventReceived(struct FGameplayEventData EventData); // Function DungeonCrawler.GA_CharacterJump.EventReceived
}; 
 
 


// Class DungeonCrawler.DCWidgetBase
// Size: 0x300(Inherited: 0x2A0)
struct UDCWidgetBase : UCommonUserWidget
{
	char pad_672[88];  // 0x2A0 (0x2A0)
	struct UBaseObject* BaseObject;  // 0x2F8 (0x2F8)


	void UnbindMsgOwner(struct UScriptStruct* InMsgType); // Function DungeonCrawler.DCWidgetBase.UnbindMsgOwner
	void UnbindMsgAllOwner(); // Function DungeonCrawler.DCWidgetBase.UnbindMsgAllOwner
	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.DCWidgetBase.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.DCWidgetBase.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.DCWidgetBase.TerminateBase
	bool IsSpectating(); // Function DungeonCrawler.DCWidgetBase.IsSpectating
	struct TScriptInterface<IBaseInterface> GetOwningBaseInterfaceBlueprint(); // Function DungeonCrawler.DCWidgetBase.GetOwningBaseInterfaceBlueprint
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.DCWidgetBase.BroadcastMsgBlueprint
	void BindMsgOwner(struct UScriptStruct* InMsgType, struct UBindMsgNode* InMsgDynamicDelegate); // Function DungeonCrawler.DCWidgetBase.BindMsgOwner
}; 
 
 


// Class DungeonCrawler.DCAT_WaitDistChangeFromView
// Size: 0x130(Inherited: 0x80)
struct UDCAT_WaitDistChangeFromView : UAbilityTask
{
	struct FMulticastInlineDelegate OnDistanceChange;  // 0x80 (0x80)
	char pad_144[160];  // 0x90 (0x90)


	struct UDCAT_WaitDistChangeFromView* WaitDistanceChange(struct UGameplayAbility* OwningAbility, struct AActor* TargetActor, struct FVector TargetLocation, float MaximumDistance, float CollisionRadius, enum class ECollisionChannel CollisionChannel); // Function DungeonCrawler.DCAT_WaitDistChangeFromView.WaitDistanceChange
}; 
 
 


// Class DungeonCrawler.AttackInputManagerComponent
// Size: 0x108(Inherited: 0xA0)
struct UAttackInputManagerComponent : UActorComponent
{
	struct UAsyncTaskWaitGameplayEvent* AsyncGameplayEventWaitTask;  // 0xA0 (0xA0)
	struct UAsyncTaskWaitGAActivated* AsyncGAActivateTask;  // 0xA8 (0xA8)
	struct UAsyncTaskWaitGAEnded* AsyncGAEndTask;  // 0xB0 (0xB0)
	struct TMap<struct FGameplayTag, struct FGameplayTag> CurrentTriggerMap;  // 0xB8 (0xB8)


	void SetAttackEnabled(bool bIsAttackEnabled); // Function DungeonCrawler.AttackInputManagerComponent.SetAttackEnabled
	void OnAbilityEnded(struct FAbilityEndedData& AbilityEndedData); // Function DungeonCrawler.AttackInputManagerComponent.OnAbilityEnded
	void OnAbilityActivate(struct UGameplayAbility* ActivatedAbility); // Function DungeonCrawler.AttackInputManagerComponent.OnAbilityActivate
	void HandleAttackInput(struct FGameplayTag InputTag); // Function DungeonCrawler.AttackInputManagerComponent.HandleAttackInput
	struct FGameplayTag GetCurrentTriggerTag(struct FGameplayTag TriggerTag); // Function DungeonCrawler.AttackInputManagerComponent.GetCurrentTriggerTag
	void EventReceived(struct FGameplayEventData EventData); // Function DungeonCrawler.AttackInputManagerComponent.EventReceived
}; 
 
 


// Class DungeonCrawler.DCCharacterSkinListEntryWidget
// Size: 0x400(Inherited: 0x3F0)
struct UDCCharacterSkinListEntryWidget : UDCCharacterSkinWidget
{
	char pad_1008[16];  // 0x3F0 (0x3F0)


	void OnRightClicked(); // Function DungeonCrawler.DCCharacterSkinListEntryWidget.OnRightClicked
}; 
 
 


// Class DungeonCrawler.BTDecorator_DCGameCheckGameState
// Size: 0x128(Inherited: 0x120)
struct UBTDecorator_DCGameCheckGameState : UBTDecorator_DCGameBlackboard
{
	uint8_t PrevGameStateType;  // 0x120 (0x120)
	char pad_289[7];  // 0x121 (0x121)


}; 
 
 


// Class DungeonCrawler.BTTask_DCGameBase
// Size: 0xE0(Inherited: 0x70)
struct UBTTask_DCGameBase : UBTTaskNode
{
	char pad_112[88];  // 0x70 (0x70)
	enum class EBTNodeResult Result;  // 0xC8 (0xC8)
	char pad_201[3];  // 0xC9 (0xC9)
	struct FIntervalCountdown TickInterval;  // 0xCC (0xCC)
	char pad_212[12];  // 0xD4 (0xD4)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.BTTask_DCGameBase.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.BTTask_DCGameBase.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.BTTask_DCGameBase.TerminateBase
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.BTTask_DCGameBase.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.BTTask_DCGameAnnounce
// Size: 0x178(Inherited: 0xE0)
struct UBTTask_DCGameAnnounce : UBTTask_DCGameBase
{
	struct FGameAnnounceInfo GameAnnounceInfo;  // 0xE0 (0xE0)


}; 
 
 


// Class DungeonCrawler.DCEquipmentSlotWidget
// Size: 0x530(Inherited: 0x500)
struct UDCEquipmentSlotWidget : UDCItemCommonWidget
{
	char pad_1280_1 : 7;  // 0x500 (0x500)
	bool bCanEquip : 1;  // 0x500 (0x500)
	char pad_1281_1 : 7;  // 0x501 (0x501)
	bool bPairSlot : 1;  // 0x501 (0x501)
	char pad_1282_1 : 7;  // 0x502 (0x502)
	bool bDropPreview : 1;  // 0x502 (0x502)
	char pad_1283[5];  // 0x503 (0x503)
	struct UImage* DropPreviewImage;  // 0x508 (0x508)
	float WearingDurationTime;  // 0x510 (0x510)
	float WearingRemainTime;  // 0x514 (0x514)
	struct USizeBox* ItemSizeBox;  // 0x518 (0x518)
	struct USizeBox* DropPreviewSizeBox;  // 0x520 (0x520)
	uint8_t EquipSlot;  // 0x528 (0x528)
	char pad_1321[7];  // 0x529 (0x529)


	bool IsWeapon(); // Function DungeonCrawler.DCEquipmentSlotWidget.IsWeapon
	bool IsTwoHandedWeapon(); // Function DungeonCrawler.DCEquipmentSlotWidget.IsTwoHandedWeapon
	bool IsPairSlot(); // Function DungeonCrawler.DCEquipmentSlotWidget.IsPairSlot
}; 
 
 


// Class DungeonCrawler.BTTask_DCGameAnnounceArray
// Size: 0xF8(Inherited: 0xE0)
struct UBTTask_DCGameAnnounceArray : UBTTask_DCGameBase
{
	struct TArray<struct FGameAnnounceInfo> GameAnnounceInfoArray;  // 0xE0 (0xE0)
	char pad_240[8];  // 0xF0 (0xF0)


}; 
 
 


// Class DungeonCrawler.BTTask_DCGameExecuteGameResult
// Size: 0xE0(Inherited: 0xE0)
struct UBTTask_DCGameExecuteGameResult : UBTTask_DCGameBase
{


}; 
 
 


// Class DungeonCrawler.BTTask_DCGameExitAllPlayer
// Size: 0xE0(Inherited: 0xE0)
struct UBTTask_DCGameExitAllPlayer : UBTTask_DCGameBase
{


}; 
 
 


// Class DungeonCrawler.ChatWidgetData
// Size: 0xB8(Inherited: 0x28)
struct UChatWidgetData : UObject
{
	int64_t ChatIndex;  // 0x28 (0x28)
	uint8_t ChatWidgetType;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct FDateTime DateTime;  // 0x38 (0x38)
	struct FString AccountId;  // 0x40 (0x40)
	struct FString CharacterId;  // 0x50 (0x50)
	struct FNickname Nickname;  // 0x60 (0x60)
	struct FString PartyId;  // 0x88 (0x88)
	struct TArray<struct FChatDataPiece> ChatDataPieceArray;  // 0x98 (0x98)
	struct TArray<uint8_t> ContextOptionArray;  // 0xA8 (0xA8)


}; 
 
 


// Class DungeonCrawler.BTTask_DCGameServerTravel
// Size: 0xF0(Inherited: 0xE0)
struct UBTTask_DCGameServerTravel : UBTTask_DCGameBase
{
	struct FString ServerTravelURL;  // 0xE0 (0xE0)


}; 
 
 


// Class DungeonCrawler.BTTask_DCGameState
// Size: 0xE8(Inherited: 0xE0)
struct UBTTask_DCGameState : UBTTask_DCGameBase
{
	uint8_t GameState;  // 0xE0 (0xE0)
	char pad_225[7];  // 0xE1 (0xE1)


}; 
 
 


// Class DungeonCrawler.BTT_CustomRunBehavior
// Size: 0x78(Inherited: 0x78)
struct UBTT_CustomRunBehavior : UBTTask_RunBehavior
{


}; 
 
 


// Class DungeonCrawler.DCPerkDataComponent
// Size: 0xF8(Inherited: 0xA0)
struct UDCPerkDataComponent : UActorComponent
{
	struct FGameplayTagContainer WearableWeaponList;  // 0xA0 (0xA0)
	struct FGameplayTagContainer RestrictedItemList;  // 0xC0 (0xC0)
	char pad_224[24];  // 0xE0 (0xE0)


	void RemoveWearableWeaponList(struct FGameplayTagContainer& InWeaponList); // Function DungeonCrawler.DCPerkDataComponent.RemoveWearableWeaponList
	void RemoveRestrictedItemList(struct FGameplayTagContainer& InItemList); // Function DungeonCrawler.DCPerkDataComponent.RemoveRestrictedItemList
	void AddWearableWeaponList(struct FGameplayTagContainer& InWeaponList); // Function DungeonCrawler.DCPerkDataComponent.AddWearableWeaponList
	void AddRestrictedItemList(struct FGameplayTagContainer& InItemList); // Function DungeonCrawler.DCPerkDataComponent.AddRestrictedItemList
}; 
 
 


// Class DungeonCrawler.DCIdTagGroupItemDataAsset
// Size: 0x48(Inherited: 0x38)
struct UDCIdTagGroupItemDataAsset : UDCTableDataAsset
{
	struct TArray<struct FDCIdTagGroupItemData> IdTagGroupItemArray;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.CharacterCreateAttributeWidget
// Size: 0x308(Inherited: 0x300)
struct UCharacterCreateAttributeWidget : UDCWidgetBase
{
	char pad_768[8];  // 0x300 (0x300)


}; 
 
 


// Class DungeonCrawler.CharacterCreateClassItemWidgetData
// Size: 0x30(Inherited: 0x28)
struct UCharacterCreateClassItemWidgetData : UObject
{
	uint8_t CharacterClass;  // 0x28 (0x28)
	uint8_t Gender;  // 0x29 (0x29)
	char pad_42_1 : 7;  // 0x2A (0x2A)
	bool bSelected : 1;  // 0x2A (0x2A)
	char pad_43_1 : 7;  // 0x2B (0x2B)
	bool bIsOwned : 1;  // 0x2B (0x2B)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 


// Class DungeonCrawler.DCEditableText
// Size: 0x520(Inherited: 0x4E0)
struct UDCEditableText : UEditableText
{
	char pad_1248[64];  // 0x4E0 (0x4E0)


}; 
 
 


// Class DungeonCrawler.CharacterCreateClassItemWidget
// Size: 0x338(Inherited: 0x300)
struct UCharacterCreateClassItemWidget : UDCWidgetBase
{
	char pad_768[8];  // 0x300 (0x300)
	struct FText Title;  // 0x308 (0x308)
	struct UTexture2D* Icon;  // 0x320 (0x320)
	struct UTexture2D* Portrait;  // 0x328 (0x328)
	char pad_816_1 : 7;  // 0x330 (0x330)
	bool bSelected : 1;  // 0x330 (0x330)
	char pad_817_1 : 7;  // 0x331 (0x331)
	bool bCanCreate : 1;  // 0x331 (0x331)
	char pad_818_1 : 7;  // 0x332 (0x332)
	bool bExperimental : 1;  // 0x332 (0x332)
	char pad_819_1 : 7;  // 0x333 (0x333)
	bool bIsOwned : 1;  // 0x333 (0x333)
	char pad_820[4];  // 0x334 (0x334)


}; 
 
 


// Class DungeonCrawler.DCAT_WaitGenericGameplayTagEvent
// Size: 0xC0(Inherited: 0x80)
struct UDCAT_WaitGenericGameplayTagEvent : UAbilityTask
{
	struct FMulticastInlineDelegate Added;  // 0x80 (0x80)
	struct FMulticastInlineDelegate Removed;  // 0x90 (0x90)
	char pad_160[8];  // 0xA0 (0xA0)
	struct UAbilitySystemComponent* OptionalExternalTarget;  // 0xA8 (0xA8)
	char pad_176[16];  // 0xB0 (0xB0)


	struct UDCAT_WaitGenericGameplayTagEvent* WaitGenericGameplayTagEvent(struct UGameplayAbility* OwningAbility, struct AActor* InOptionalExternalTarget); // Function DungeonCrawler.DCAT_WaitGenericGameplayTagEvent.WaitGenericGameplayTagEvent
}; 
 
 


// Class DungeonCrawler.DCItemTooltipWidget
// Size: 0x510(Inherited: 0x4C8)
struct UDCItemTooltipWidget : UDCItemWidgetBase
{
	struct UDCItemTooltipNameWidget* NameWidget;  // 0x4C8 (0x4C8)
	struct UDCItemTooltipStatWidget* StatWidget;  // 0x4D0 (0x4D0)
	struct UDCItemTooltipAbilityWidget* AbilityWidget;  // 0x4D8 (0x4D8)
	struct UDCItemTooltipRequirementWidget* RequirementWidget;  // 0x4E0 (0x4E0)
	struct UDCItemTooltipInfoWidget* InfoWidget;  // 0x4E8 (0x4E8)
	struct UListView* PriceListWidget;  // 0x4F0 (0x4F0)
	struct UTextBlock* DescTextBlock;  // 0x4F8 (0x4F8)
	struct TArray<struct UDCItemWidgetBase*> ChildWidgets;  // 0x500 (0x500)


}; 
 
 


// Class DungeonCrawler.CharacterCreatePerkItemWidget
// Size: 0x300(Inherited: 0x300)
struct UCharacterCreatePerkItemWidget : UDCWidgetBase
{


}; 
 
 


// Class DungeonCrawler.CharacterSelectCharListWidget
// Size: 0x330(Inherited: 0x300)
struct UCharacterSelectCharListWidget : UDCWidgetBase
{
	char pad_768[8];  // 0x300 (0x300)
	struct UListView* CharacterSlotListView;  // 0x308 (0x308)
	int32_t CurrentPageIndex;  // 0x310 (0x310)
	int32_t MaxCharacterCount;  // 0x314 (0x314)
	int32_t MaxPageIndex;  // 0x318 (0x318)
	char pad_796[20];  // 0x31C (0x31C)


	void OnSelectedCharacterId(struct FString CharacterId); // Function DungeonCrawler.CharacterSelectCharListWidget.OnSelectedCharacterId
	void OnPageNumber(int32_t CurrentPage, int32_t MaxPage); // Function DungeonCrawler.CharacterSelectCharListWidget.OnPageNumber
	void OnListRightButtonClicked(); // Function DungeonCrawler.CharacterSelectCharListWidget.OnListRightButtonClicked
	void OnListLeftButtonClicked(); // Function DungeonCrawler.CharacterSelectCharListWidget.OnListLeftButtonClicked
	void OnCharacterSlotListViewItemClicked(struct UObject* Obj); // Function DungeonCrawler.CharacterSelectCharListWidget.OnCharacterSlotListViewItemClicked
	void OnCharacterSlotData(struct FCharacterSlotData& NewValue, struct FCharacterSlotData& OldValue); // Function DungeonCrawler.CharacterSelectCharListWidget.OnCharacterSlotData
	void HandleCharacterDeleteClicked(); // Function DungeonCrawler.CharacterSelectCharListWidget.HandleCharacterDeleteClicked
	void HandleCharacterCreateClicked(); // Function DungeonCrawler.CharacterSelectCharListWidget.HandleCharacterCreateClicked
	struct UCharacterSelectCharacterSlotWidgetData* GetSelectedCharacterWidgetData(); // Function DungeonCrawler.CharacterSelectCharListWidget.GetSelectedCharacterWidgetData
	uint8_t GetPageArrowVisibility(); // Function DungeonCrawler.CharacterSelectCharListWidget.GetPageArrowVisibility
}; 
 
 


// Class DungeonCrawler.DCEntryGameMode
// Size: 0x3A0(Inherited: 0x3A0)
struct ADCEntryGameMode : ADCGameModeBase
{


}; 
 
 


// Class DungeonCrawler.DCCharacterDataComponent
// Size: 0xF0(Inherited: 0xD0)
struct UDCCharacterDataComponent : UDCDataComponent
{
	char pad_208[32];  // 0xD0 (0xD0)


}; 
 
 


// Class DungeonCrawler.InjectionItemListEntryWidgetData
// Size: 0x38(Inherited: 0x28)
struct UInjectionItemListEntryWidgetData : UObject
{
	struct UDCItemDataAsset* ItemData;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bIsSelected : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 


// Class DungeonCrawler.DCCharacterPartsComponent
// Size: 0x250(Inherited: 0xA0)
struct UDCCharacterPartsComponent : UActorComponent
{
	struct UDCCharacterPartsArtData* Data;  // 0xA0 (0xA0)
	struct TMap<uint8_t, struct USkeletalMeshComponent*> BodyParts;  // 0xA8 (0xA8)
	struct TMap<uint8_t, struct USkeletalMeshComponent*> ArmorParts;  // 0xF8 (0xF8)
	struct TMap<uint8_t, struct FPrimaryAssetId> ArmorItems;  // 0x148 (0x148)
	struct TMap<struct FDCItemId, struct FDCItemInfo> ArmorItemInfos;  // 0x198 (0x198)
	char pad_488[104];  // 0x1E8 (0x1E8)


	void OnItemUnequipEvent(struct FDCItemId ItemId); // Function DungeonCrawler.DCCharacterPartsComponent.OnItemUnequipEvent
	void OnItemEquipEvent(struct FDCItemInfo& ItemInfo); // Function DungeonCrawler.DCCharacterPartsComponent.OnItemEquipEvent
}; 
 
 


// Class DungeonCrawler.DCLootDropRateDataAsset
// Size: 0x48(Inherited: 0x38)
struct UDCLootDropRateDataAsset : UDCTableDataAsset
{
	struct TArray<struct FDCLootDropRateItemData> LootDropRateItemArray;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.GameHeadupAccountWidget
// Size: 0x370(Inherited: 0x308)
struct UGameHeadupAccountWidget : UGameHeadupWidget
{
	char pad_776[16];  // 0x308 (0x308)
	struct FNickname Nickname;  // 0x318 (0x318)
	struct UTexture2D* CharacterIconTexture;  // 0x340 (0x340)
	char pad_840_1 : 7;  // 0x348 (0x348)
	bool bVisible : 1;  // 0x348 (0x348)
	char pad_841[39];  // 0x349 (0x349)


	void OnRefreshNickname(); // Function DungeonCrawler.GameHeadupAccountWidget.OnRefreshNickname
}; 
 
 


// Class DungeonCrawler.DCReportPlayerChecklistSlotWidget
// Size: 0x2D8(Inherited: 0x278)
struct UDCReportPlayerChecklistSlotWidget : UUserWidget
{
	char pad_632[24];  // 0x278 (0x278)
	struct UCheckBox* ReportCheckBox;  // 0x290 (0x290)
	char pad_664[8];  // 0x298 (0x298)
	struct FText ReportCategoryTitleText;  // 0x2A0 (0x2A0)
	struct FText ReportCategoryDetailText;  // 0x2B8 (0x2B8)
	char pad_720[8];  // 0x2D0 (0x2D0)


	void HandleChangedCheckState(bool bNewState); // Function DungeonCrawler.DCReportPlayerChecklistSlotWidget.HandleChangedCheckState
	uint8_t GetReportedCategoryVisibility(); // Function DungeonCrawler.DCReportPlayerChecklistSlotWidget.GetReportedCategoryVisibility
}; 
 
 


// Class DungeonCrawler.DCChatRoomDataAsset
// Size: 0x90(Inherited: 0x38)
struct UDCChatRoomDataAsset : UDCTableDataAsset
{
	struct FText Name;  // 0x38 (0x38)
	int32_t Order;  // 0x50 (0x50)
	uint8_t ChatRoomCategoryType;  // 0x54 (0x54)
	char pad_85[3];  // 0x55 (0x55)
	struct TArray<struct FGameplayTag> AllowedItemLinkTypes;  // 0x58 (0x58)
	struct TArray<struct FPrimaryAssetId> AllowedItemLinkClassIds;  // 0x68 (0x68)
	struct FText AllowedAllowedItemLinkDesc;  // 0x78 (0x78)


}; 
 
 


// Class DungeonCrawler.CharacterSelectCharacterListWidgetData
// Size: 0x38(Inherited: 0x28)
struct UCharacterSelectCharacterListWidgetData : UObject
{
	struct FCharacterSlotData CharacterSlotData;  // 0x28 (0x28)


}; 
 
 


// Class DungeonCrawler.DCGlitterComponent
// Size: 0x128(Inherited: 0xA0)
struct UDCGlitterComponent : UActorComponent
{
	char pad_160[88];  // 0xA0 (0xA0)
	float DurationSeconds;  // 0xF8 (0xF8)
	float IntervalSeconds;  // 0xFC (0xFC)
	float StartPos;  // 0x100 (0x100)
	char pad_260_1 : 7;  // 0x104 (0x104)
	bool bIsEnabled : 1;  // 0x104 (0x104)
	char pad_261[3];  // 0x105 (0x105)
	struct TArray<struct UMaterialInstanceDynamic*> DynamicMaterials;  // 0x108 (0x108)
	char pad_280[16];  // 0x118 (0x118)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.DCGlitterComponent.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.DCGlitterComponent.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.DCGlitterComponent.TerminateBase
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.DCGlitterComponent.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.GA_MusicBase
// Size: 0x6D0(Inherited: 0x558)
struct UGA_MusicBase : UDCGameplayAbilityBase
{
	struct FGameplayEventData CurrentTriggerData;  // 0x558 (0x558)
	struct FGameplayTag GameplayCueTagOnTarget;  // 0x608 (0x608)
	struct FDesignDataMusic DesignDataMusic;  // 0x610 (0x610)


	void OnApplied(struct AActor* InTarget); // Function DungeonCrawler.GA_MusicBase.OnApplied
	float GetRange(); // Function DungeonCrawler.GA_MusicBase.GetRange
	void ApplyToTarget(struct FHitResult& HitResult); // Function DungeonCrawler.GA_MusicBase.ApplyToTarget
	void ApplyToSelf(); // Function DungeonCrawler.GA_MusicBase.ApplyToSelf
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function DungeonCrawler.GA_MusicBase.AbilityActivated
}; 
 
 


// Class DungeonCrawler.CharacterSelectCharacterSlotWidgetData
// Size: 0xC8(Inherited: 0x28)
struct UCharacterSelectCharacterSlotWidgetData : UObject
{
	struct FCharacterSlot CharacterSlot;  // 0x28 (0x28)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool bCanSelect : 1;  // 0xC0 (0xC0)
	char pad_193[7];  // 0xC1 (0xC1)


}; 
 
 


// Class DungeonCrawler.CharacterSelectGroupWidgetBase
// Size: 0x320(Inherited: 0x300)
struct UCharacterSelectGroupWidgetBase : UDCWidgetBase
{
	uint8_t WidgetCharacterSelectGroupType;  // 0x300 (0x300)
	char pad_769[7];  // 0x301 (0x301)
	struct TArray<uint8_t> NonCoexistWidgetCharacterSelectGroupTypeArray;  // 0x308 (0x308)
	char pad_792[8];  // 0x318 (0x318)


}; 
 
 


// Class DungeonCrawler.CannotMoveGameplayTagData
// Size: 0x50(Inherited: 0x30)
struct UCannotMoveGameplayTagData : UDataAsset
{
	struct FGameplayTagContainer TagContainer;  // 0x30 (0x30)


}; 
 
 


// Class DungeonCrawler.CommonButtonXLWidget
// Size: 0x1580(Inherited: 0x1580)
struct UCommonButtonXLWidget : UDCCommonButtonBase
{


	void SetAllText(struct FText TextTitle); // Function DungeonCrawler.CommonButtonXLWidget.SetAllText
}; 
 
 


// Class DungeonCrawler.DCPlayerCharMovementComponent
// Size: 0xF50(Inherited: 0xF40)
struct UDCPlayerCharMovementComponent : UDCCharacterMovementComponent
{
	char pad_3904[16];  // 0xF40 (0xF40)


}; 
 
 


// Class DungeonCrawler.DescDataAbility
// Size: 0x50(Inherited: 0x50)
struct UDescDataAbility : UDescData
{


}; 
 
 


// Class DungeonCrawler.CharacterSelectWidget
// Size: 0x488(Inherited: 0x440)
struct UCharacterSelectWidget : UDCCommonActivatableWidgetBase
{
	struct UCharacterSelectCharListWidget* CharacterSelectCharListWidget;  // 0x440 (0x440)
	int32_t AccountBluestoneShardValue;  // 0x448 (0x448)
	int32_t AccountRedstoneShardValue;  // 0x44C (0x44C)
	struct UCommonButtonLWidget* WB_Btn_Purchase;  // 0x450 (0x450)
	struct UDCCommonButtonBase* WB_Btn_LaunchShopURL;  // 0x458 (0x458)
	uint8_t SelectedCharacterClass;  // 0x460 (0x460)
	char pad_1121[7];  // 0x461 (0x461)
	struct FDCClassPackageShopItemInfo SelectedShopInfo;  // 0x468 (0x468)
	char pad_1152[8];  // 0x480 (0x480)


	void OnPurchaseButtonClicked(); // Function DungeonCrawler.CharacterSelectWidget.OnPurchaseButtonClicked
	void OnLaunchShopURLButtonClicked(); // Function DungeonCrawler.CharacterSelectWidget.OnLaunchShopURLButtonClicked
	bool IsNeedPurchase(); // Function DungeonCrawler.CharacterSelectWidget.IsNeedPurchase
	void HandleOptionButtonClicked(); // Function DungeonCrawler.CharacterSelectWidget.HandleOptionButtonClicked
	void HandleLobbyButtonClicked(); // Function DungeonCrawler.CharacterSelectWidget.HandleLobbyButtonClicked
	void HandleExitButtonClicked(); // Function DungeonCrawler.CharacterSelectWidget.HandleExitButtonClicked
	int32_t GetPrice(); // Function DungeonCrawler.CharacterSelectWidget.GetPrice
	int32_t GetCashPrice(); // Function DungeonCrawler.CharacterSelectWidget.GetCashPrice
	bool CanLaunchRedstoneShardShop(); // Function DungeonCrawler.CharacterSelectWidget.CanLaunchRedstoneShardShop
	bool CanEnterLobby(); // Function DungeonCrawler.CharacterSelectWidget.CanEnterLobby
}; 
 
 


// Class DungeonCrawler.DCClassPackageShopDataAsset
// Size: 0xA8(Inherited: 0x78)
struct UDCClassPackageShopDataAsset : UDCShopDataAsset
{
	struct TSoftObjectPtr<UDCPlayerCharacterDataAsset> StockData;  // 0x78 (0x78)


}; 
 
 


// Class DungeonCrawler.CharacterStatusDetailWidget
// Size: 0xC38(Inherited: 0x300)
struct UCharacterStatusDetailWidget : UDCWidgetBase
{
	struct FCharacterStatusDetailWidgetData WidgetData;  // 0x300 (0x300)
	struct UAccountLink* AccountLink;  // 0xA88 (0xA88)
	char pad_2704[336];  // 0xA90 (0xA90)
	struct FString LinkedAccountId;  // 0xBE0 (0xBE0)
	struct FString CheckTargetAccountId;  // 0xBF0 (0xBF0)
	struct UCurveTable* CurveTablePhysicalPower;  // 0xC00 (0xC00)
	struct UCurveTable* CurveTableArmorRating;  // 0xC08 (0xC08)
	struct UCurveTable* CurveTableMagicalPower;  // 0xC10 (0xC10)
	struct UCurveTable* CurveTableMagicResistance;  // 0xC18 (0xC18)
	char pad_3104[24];  // 0xC20 (0xC20)


	void OnWill(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnWill
	void OnWeightLimitMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnWeightLimitMod
	void OnWeightLimitBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnWeightLimitBase
	void OnWeightLimitAdd(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnWeightLimitAdd
	void OnWeightLimit(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnWeightLimit
	void OnWeight(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnWeight
	void OnWaterMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnWaterMagicResistance
	void OnWaterMagicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnWaterMagicalReductionMod
	void OnWaterMagicalReductionMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnWaterMagicalReductionMagicResistance
	void OnWaterMagicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnWaterMagicalReduction
	void OnUtilityEffectivenessMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnUtilityEffectivenessMod
	void OnUtilityEffectivenessBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnUtilityEffectivenessBase
	void OnUtilityEffectivenessAdd(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnUtilityEffectivenessAdd
	void OnUtilityEffectiveness(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnUtilityEffectiveness
	void OnStrength(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnStrength
	void OnSpiritMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnSpiritMagicResistance
	void OnSpiritMagicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnSpiritMagicalReductionMod
	void OnSpiritMagicalReductionMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnSpiritMagicalReductionMagicResistance
	void OnSpiritMagicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnSpiritMagicalReduction
	void OnSpellPayload(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnSpellPayload
	void OnSpellCastingSpeed(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnSpellCastingSpeed
	void OnSpellCapacityMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnSpellCapacityMod
	void OnSpellCapacityBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnSpellCapacityBase
	void OnSpellCapacityAdd(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnSpellCapacityAdd
	void OnSpellCapacity(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnSpellCapacity
	void OnSecondaryWeaponImpactPower(float& NewValue, float& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnSecondaryWeaponImpactPower
	void OnSecondaryAbilityWidgetArray(struct TArray<struct UItemTooltipStatWidgetData*>& NewValue, struct TArray<struct UItemTooltipStatWidgetData*>& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnSecondaryAbilityWidgetArray
	void OnResourcefulness(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnResourcefulness
	void OnRegularInteractionSpeedBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnRegularInteractionSpeedBase
	void OnRegularInteractionSpeed(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnRegularInteractionSpeed
	void OnProjectileReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnProjectileReductionMod
	void OnPrimaryWeaponImpactPower(float& NewValue, float& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnPrimaryWeaponImpactPower
	void OnPrimaryAbilityWidgetArray(struct TArray<struct UItemTooltipStatWidgetData*>& NewValue, struct TArray<struct UItemTooltipStatWidgetData*>& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnPrimaryAbilityWidgetArray
	void OnPhysicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalReductionMod
	void OnPhysicalReductionBonus(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalReductionBonus
	void OnPhysicalReductionArmorRating(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalReductionArmorRating
	void OnPhysicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalReduction
	void OnPhysicalPower(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalPower
	void OnPhysicalHealMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalHealMod
	void OnPhysicalHealBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalHealBase
	void OnPhysicalHeadshotPenetration(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalHeadshotPenetration
	void OnPhysicalDamageWeaponSecondary(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageWeaponSecondary
	void OnPhysicalDamageWeaponPrimary(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageWeaponPrimary
	void OnPhysicalDamageTrue(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageTrue
	void OnPhysicalDamageModPhysicalPower(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageModPhysicalPower
	void OnPhysicalDamageModBonus(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageModBonus
	void OnPhysicalDamageMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageMod
	void OnPhysicalDamageBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageBase
	void OnPhysicalDamageAdd(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageAdd
	void OnMoveSpeedWithModifier(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnMoveSpeedWithModifier
	void OnMoveSpeedMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnMoveSpeedMod
	void OnMoveSpeedBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnMoveSpeedBase
	void OnMoveSpeedAdd(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnMoveSpeedAdd
	void OnMoveSpeed(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnMoveSpeed
	void OnMaxHealthMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnMaxHealthMod
	void OnMaxHealthBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnMaxHealthBase
	void OnMaxHealthAdd(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnMaxHealthAdd
	void OnMaxHealth(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnMaxHealth
	void OnMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicResistance
	void OnMagicPenetration(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicPenetration
	void OnMagicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalReductionMod
	void OnMagicalReductionMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalReductionMagicResistance
	void OnMagicalReductionBonus(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalReductionBonus
	void OnMagicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalReduction
	void OnMagicalPower(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalPower
	void OnMagicalInteractionSpeed(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalInteractionSpeed
	void OnMagicalHealMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalHealMod
	void OnMagicalHealBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalHealBase
	void OnMagicalDamageTrue(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalDamageTrue
	void OnMagicalDamageModMagicalPower(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalDamageModMagicalPower
	void OnMagicalDamageModBonus(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalDamageModBonus
	void OnMagicalDamageMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalDamageMod
	void OnMagicalDamageBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalDamageBase
	void OnMagicalDamageAdd(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalDamageAdd
	void OnLuck(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnLuck
	void OnLightningMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnLightningMagicResistance
	void OnLightningMagicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnLightningMagicalReductionMod
	void OnLightningMagicalReductionMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnLightningMagicalReductionMagicResistance
	void OnLightningMagicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnLightningMagicalReduction
	void OnLightMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnLightMagicResistance
	void OnLightMagicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnLightMagicalReductionMod
	void OnLightMagicalReductionMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnLightMagicalReductionMagicResistance
	void OnLightMagicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnLightMagicalReduction
	void OnKnowledge(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnKnowledge
	void OnItemEquipSpeed(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnItemEquipSpeed
	void OnImpactPower(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnImpactPower
	void OnHealth(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnHealth
	void OnHeadshotReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnHeadshotReductionMod
	void OnFireMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnFireMagicResistance
	void OnFireMagicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnFireMagicalReductionMod
	void OnFireMagicalReductionMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnFireMagicalReductionMagicResistance
	void OnFireMagicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnFireMagicalReduction
	void OnEvilMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnEvilMagicResistance
	void OnEvilMagicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnEvilMagicalReductionMod
	void OnEvilMagicalReductionMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnEvilMagicalReductionMagicResistance
	void OnEvilMagicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnEvilMagicalReduction
	void OnEarthMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnEarthMagicResistance
	void OnEarthMagicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnEarthMagicalReductionMod
	void OnEarthMagicalReductionMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnEarthMagicalReductionMagicResistance
	void OnEarthMagicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnEarthMagicalReduction
	void OnDivineMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnDivineMagicResistance
	void OnDivineMagicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnDivineMagicalReductionMod
	void OnDivineMagicalReductionMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnDivineMagicalReductionMagicResistance
	void OnDivineMagicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnDivineMagicalReduction
	void OnDebuffDurationMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnDebuffDurationMod
	void OnDarkMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnDarkMagicResistance
	void OnDarkMagicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnDarkMagicalReductionMod
	void OnDarkMagicalReductionMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnDarkMagicalReductionMagicResistance
	void OnDarkMagicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnDarkMagicalReduction
	void OnBuffDurationMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnBuffDurationMod
	void OnArmorRating(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnArmorRating
	void OnArmorPenetration(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnArmorPenetration
	void OnArcaneMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnArcaneMagicResistance
	void OnArcaneMagicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnArcaneMagicalReductionMod
	void OnArcaneMagicalReductionMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnArcaneMagicalReductionMagicResistance
	void OnArcaneMagicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnArcaneMagicalReduction
	void OnAirMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnAirMagicResistance
	void OnAirMagicalReductionMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnAirMagicalReductionMod
	void OnAirMagicalReductionMagicResistance(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnAirMagicalReductionMagicResistance
	void OnAirMagicalReduction(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnAirMagicalReduction
	void OnAgility(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnAgility
	void OnActionSpeed(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusDetailWidget.OnActionSpeed
}; 
 
 


// Class DungeonCrawler.GA_MusicInstantBase
// Size: 0x6D0(Inherited: 0x6D0)
struct UGA_MusicInstantBase : UGA_MusicBase
{


	void OnTargetActorOverlap(struct TArray<struct AActor*>& InTargetActors); // Function DungeonCrawler.GA_MusicInstantBase.OnTargetActorOverlap
}; 
 
 


// Class DungeonCrawler.CharacterStatusWidget
// Size: 0x4B0(Inherited: 0x300)
struct UCharacterStatusWidget : UDCWidgetBase
{
	struct FCharacterStatusWidgetData WidgetData;  // 0x300 (0x300)
	struct UAccountLink* AccountLink;  // 0x480 (0x480)
	char pad_1160[8];  // 0x488 (0x488)
	struct FString LinkedAccountId;  // 0x490 (0x490)
	struct FString CheckTargetAccountId;  // 0x4A0 (0x4A0)


	void OnWill(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusWidget.OnWill
	void OnWeightLimitMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusWidget.OnWeightLimitMod
	void OnWeightLimitBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusWidget.OnWeightLimitBase
	void OnWeightLimitAdd(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusWidget.OnWeightLimitAdd
	void OnWeightLimit(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusWidget.OnWeightLimit
	void OnWeight(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusWidget.OnWeight
	void OnUtilityEffectivenessMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusWidget.OnUtilityEffectivenessMod
	void OnUtilityEffectivenessBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusWidget.OnUtilityEffectivenessBase
	void OnUtilityEffectivenessAdd(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusWidget.OnUtilityEffectivenessAdd
	void OnUtilityEffectiveness(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusWidget.OnUtilityEffectiveness
	void OnStrength(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusWidget.OnStrength
	void OnSpellPayload(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusWidget.OnSpellPayload
	void OnSpellCapacityMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusWidget.OnSpellCapacityMod
	void OnSpellCapacityBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusWidget.OnSpellCapacityBase
	void OnSpellCapacityAdd(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusWidget.OnSpellCapacityAdd
	void OnSpellCapacity(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusWidget.OnSpellCapacity
	void OnResourcefulness(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusWidget.OnResourcefulness
	void OnMaxHealthMod(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusWidget.OnMaxHealthMod
	void OnMaxHealthBase(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusWidget.OnMaxHealthBase
	void OnMaxHealthAdd(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusWidget.OnMaxHealthAdd
	void OnMaxHealth(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusWidget.OnMaxHealth
	void OnKnowledge(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusWidget.OnKnowledge
	void OnHealth(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusWidget.OnHealth
	void OnAgility(struct FGameplayAttributeData& NewValue, struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.CharacterStatusWidget.OnAgility
}; 
 
 


// Class DungeonCrawler.DCAT_RotateToActor
// Size: 0x98(Inherited: 0x80)
struct UDCAT_RotateToActor : UAbilityTask
{
	char pad_128[24];  // 0x80 (0x80)


	struct UDCAT_RotateToActor* RotateToActor(struct UGameplayAbility* OwningAbility, struct AActor* Actor, uint8_t HitBox, float Speed, bool WithoutPitch); // Function DungeonCrawler.DCAT_RotateToActor.RotateToActor
}; 
 
 


// Class DungeonCrawler.ChatEditWidgetBase
// Size: 0x378(Inherited: 0x300)
struct UChatEditWidgetBase : UDCWidgetBase
{
	struct URichTextBlock* RichTextBlock;  // 0x300 (0x300)
	struct UDCEditableText* EditableText;  // 0x308 (0x308)
	char pad_784[104];  // 0x310 (0x310)


	void OnTextCommitted(struct FText& InText, enum class ETextCommit InCommitMethod); // Function DungeonCrawler.ChatEditWidgetBase.OnTextCommitted
	void OnTextChanged(struct FText& InText); // Function DungeonCrawler.ChatEditWidgetBase.OnTextChanged
}; 
 
 


// Class DungeonCrawler.ChatFilterListEntryWidgetObject
// Size: 0x58(Inherited: 0x28)
struct UChatFilterListEntryWidgetObject : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	struct FGameplayTag ChatFilterTag;  // 0x30 (0x30)
	struct FText ChatFilterText;  // 0x38 (0x38)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool bChecked : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)


}; 
 
 


// Class DungeonCrawler.DCDamageIndicatorComponent
// Size: 0xB8(Inherited: 0xA0)
struct UDCDamageIndicatorComponent : UActorComponent
{
	struct FVector IsZeroLocationByOffset;  // 0xA0 (0xA0)


}; 
 
 


// Class DungeonCrawler.TagQueryData
// Size: 0xC8(Inherited: 0x38)
struct UTagQueryData : UDCDataAssetBase
{
	struct FGameplayTagQuery SourceTagQuery;  // 0x38 (0x38)
	struct FGameplayTagQuery TargetTagQuery;  // 0x80 (0x80)


}; 
 
 


// Class DungeonCrawler.ChatFilterListEntryWidget
// Size: 0x330(Inherited: 0x300)
struct UChatFilterListEntryWidget : UDCWidgetBase
{
	char pad_768[8];  // [x300 ([x300)
	struct UCheckBox* FilterCheckBox;  // 0x308 (0x308)
	char pad_784[8];  // 0x310 (0x310)
	struct FText ChatFilterText;  // 0x318 (0x318)


	void OnCheckStateChanged(bool bIsChecked); // Function DungeonCrawler.ChatFilterListEntryWidget.OnCheckStateChanged
}; 
 
 


// Class DungeonCrawler.DCAbilityActorBase
// Size: 0x300(Inherited: 0x2F0)
struct ADCAbilityActorBase : ADCActorBase
{
	char pad_752[8];  // 0x2F0 (0x2F0)
	struct UAbilitySystemComponent* AbilitySystemComponent;  // 0x2F8 (0x2F8)


}; 
 
 


// Class DungeonCrawler.DCWeaponEquipmentSlot
// Size: 0x40(Inherited: 0x38)
struct UDCWeaponEquipmentSlot : UDCEquipmentSlot
{
	struct UDCWeaponEquipmentSlot* PairSlot;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCGameModeAIControllerDungeonBase
// Size: 0x430(Inherited: 0x430)
struct ADCGameModeAIControllerDungeonBase : ADCGameModeAIControllerGameBase
{


}; 
 
 


// Class DungeonCrawler.ChatFilterWidget
// Size: 0x370(Inherited: 0x300)
struct UChatFilterWidget : UDCWidgetBase
{
	struct UListView* ChatFilterListView;  // 0x300 (0x300)
	struct UEditableText* EditableSearchText;  // 0x308 (0x308)
	char pad_784[80];  // 0x310 (0x310)
	struct TArray<struct UChatFilterListEntryWidgetObject*> ChatFilterListWidgetObjectArray;  // 0x360 (0x360)


	void SetChatFilterListVisible(bool InbVisible); // Function DungeonCrawler.ChatFilterWidget.SetChatFilterListVisible
	void ResetChatFilter(); // Function DungeonCrawler.ChatFilterWidget.ResetChatFilter
	void RegenerateListItems(struct FText& FindFilter); // Function DungeonCrawler.ChatFilterWidget.RegenerateListItems
}; 
 
 


// Class DungeonCrawler.ClassSelectWidget
// Size: 0x338(Inherited: 0x300)
struct UClassSelectWidget : UDCWidgetBase
{
	struct UTileView* ClassSelectTileView;  // 0x300 (0x300)
	struct UTileView* ClassAttributeTileView;  // 0x308 (0x308)
	struct UListView* ClassPerkTileView;  // 0x310 (0x310)
	struct UButton* ClassSelectButton;  // 0x318 (0x318)
	char pad_800[16];  // 0x320 (0x320)
	struct UAccountLink* AccountLink;  // 0x330 (0x330)


	void OnPlayerCharacterId(struct FPrimaryAssetId& NewValue, struct FPrimaryAssetId& OldValue); // Function DungeonCrawler.ClassSelectWidget.OnPlayerCharacterId
	void OnClassSelectButtonClicked(); // Function DungeonCrawler.ClassSelectWidget.OnClassSelectButtonClicked
}; 
 
 


// Class DungeonCrawler.ChatWidgetBase
// Size: 0x398(Inherited: 0x300)
struct UChatWidgetBase : UDCWidgetBase
{
	char pad_768[16];  // 0x300 (0x300)
	struct UChatWidgetData* ChatWidgetData;  // 0x310 (0x310)
	char pad_792[128];  // 0x318 (0x318)


	void OnRightClicked(); // Function DungeonCrawler.ChatWidgetBase.OnRightClicked
	void OnChatRecordData(struct FChatRecord& NewValue, struct FChatRecord& OldValue); // Function DungeonCrawler.ChatWidgetBase.OnChatRecordData
	struct FString FilterStreamingMode(struct FString OriginalStr); // Function DungeonCrawler.ChatWidgetBase.FilterStreamingMode
}; 
 
 


// Class DungeonCrawler.DCAttributeModMagnitudeCalculationMaxHealth
// Size: 0x100(Inherited: 0x40)
struct UDCAttributeModMagnitudeCalculationMaxHealth : UGameplayModMagnitudeCalculation
{
	char pad_64[192];  // 0x40 (0x40)


}; 
 
 


// Class DungeonCrawler.DCItemSkinViewerActor
// Size: 0x3C0(Inherited: 0x2F0)
struct ADCItemSkinViewerActor : ADCActorBase
{
	float StartRotateLocation;  // 0x2F0 (0x2F0)
	float RotateSpeed;  // 0x2F4 (0x2F4)
	char pad_760[8];  // 0x2F8 (0x2F8)
	struct FTransform PreviewCameraDefaultTransform;  // 0x300 (0x300)
	struct UDCSceneCaptureComponent2D* SceneCaptureComponent;  // 0x360 (0x360)
	struct UChildActorComponent* PreviewHolderComponent;  // 0x368 (0x368)
	struct TMap<struct FPrimaryAssetId, struct UDCItemSkinArtData*> ItemSkinViewTargetMap;  // 0x370 (0x370)


}; 
 
 


// Class DungeonCrawler.ClassGroupWidgetBase
// Size: 0x460(Inherited: 0x440)
struct UClassGroupWidgetBase : UDCCommonActivatableWidgetBase
{
	uint8_t WidgetClassGroupType;  // 0x440 (0x440)
	char pad_1089[7];  // 0x441 (0x441)
	struct TArray<uint8_t> NonCoexistWidgetWidgetClassGroupTypeArray;  // 0x448 (0x448)
	char pad_1112[8];  // 0x458 (0x458)


}; 
 
 


// Class DungeonCrawler.ItemTooltipWidget
// Size: 0x3A0(Inherited: 0x300)
struct UItemTooltipWidget : UDCWidgetBase
{
	struct FItemTooltipWidgetData WidgetData;  // 0x300 (0x300)


	void SetItemData(struct FItemData& NewItemData); // Function DungeonCrawler.ItemTooltipWidget.SetItemData
	void OnRefreshItemName(); // Function DungeonCrawler.ItemTooltipWidget.OnRefreshItemName
	void OnItemData(struct FItemData& NewItemData, struct FItemData& OldItemData); // Function DungeonCrawler.ItemTooltipWidget.OnItemData
}; 
 
 


// Class DungeonCrawler.ClassIconWidgetData
// Size: 0x158(Inherited: 0x28)
struct UClassIconWidgetData : UObject
{
	int32_t ItemIndex;  // 0x28 (0x28)
	struct FPrimaryAssetId CharacterClassId;  // 0x2C (0x2C)
	char pad_60[4];  // 0x3C (0x3C)
	struct FDesignDataPlayerCharacter DesignDataPlayerCharacter;  // 0x40 (0x40)


}; 
 
 


// Class DungeonCrawler.ContainerInventoryWidget
// Size: 0x408(Inherited: 0x300)
struct UContainerInventoryWidget : UDCWidgetBase
{
	struct UGridPanel* ContainerSlotGridPanel;  // 0x300 (0x300)
	struct UOverlay* ContainerItemOvelay;  // 0x308 (0x308)
	UContainerSlotWidget* ContainerSlotWidgetClass;  // 0x310 (0x310)
	float ContainerSlotSize;  // 0x318 (0x318)
	char pad_796[4];  // 0x31C (0x31C)
	struct TMap<int32_t, struct FContainerSlotArrayData> ContainerSlotWidgetMap;  // 0x320 (0x320)
	struct TWeakObjectPtr<UInventoryComponent> InventoryComponent;  // 0x370 (0x370)
	UItemWidget* ItemWidgetClass;  // 0x378 (0x378)
	struct UAccountLink* AccountLink;  // 0x380 (0x380)
	struct FPrimaryAssetId PlayerCharacterId;  // 0x388 (0x388)
	struct TMap<int64_t, struct UItemWidget*> ItemWidgetMap;  // 0x398 (0x398)
	int32_t ContainerRowCount;  // 0x3E8 (0x3E8)
	int32_t ContainerColumnCount;  // 0x3EC (0x3EC)
	int32_t DragDetectedContainerSlotId;  // 0x3F0 (0x3F0)
	char pad_1012[4];  // 0x3F4 (0x3F4)
	struct TArray<struct UContainerSlotWidget*> OverlapContainerSlots;  // 0x3F8 (0x3F8)


	void UpdateItemCanBeSet(struct FItemData& InItemData, int32_t SlotId); // Function DungeonCrawler.ContainerInventoryWidget.UpdateItemCanBeSet
	void OnRemoveItem(struct FItemData& InItemData); // Function DungeonCrawler.ContainerInventoryWidget.OnRemoveItem
	void OnMoveItem(struct FItemData& OldItemData, struct FItemData& NewItemData); // Function DungeonCrawler.ContainerInventoryWidget.OnMoveItem
	void OnItemWidgetDropOrLeave(); // Function DungeonCrawler.ContainerInventoryWidget.OnItemWidgetDropOrLeave
	void OnItemDragDetected(struct FItemData& ItemData, struct FVector2D& DragScreenPos); // Function DungeonCrawler.ContainerInventoryWidget.OnItemDragDetected
	struct UItemWidget* OnAddItem(struct FItemData& InItemData); // Function DungeonCrawler.ContainerInventoryWidget.OnAddItem
	void InitializeContainerInventoryWidget(struct UInventoryComponent* InInventoryComponent, struct UAccountLink* InAccountLink); // Function DungeonCrawler.ContainerInventoryWidget.InitializeContainerInventoryWidget
	int32_t GetSlotIdByScreenPosition(struct FVector2D& ScreenPos); // Function DungeonCrawler.ContainerInventoryWidget.GetSlotIdByScreenPosition
	bool CanSetItemAt(struct FItemData& ItemData, int32_t SlotId); // Function DungeonCrawler.ContainerInventoryWidget.CanSetItemAt
}; 
 
 


// Class DungeonCrawler.ClassIconWidget
// Size: 0x308(Inherited: 0x300)
struct UClassIconWidget : UDCWidgetBase
{
	char pad_768[8];  // 0x300 (0x300)


	void OnClickedClassIconButton(); // Function DungeonCrawler.ClassIconWidget.OnClickedClassIconButton
}; 
 
 


// Class DungeonCrawler.ClassMusicEquippedWidget
// Size: 0x440(Inherited: 0x440)
struct UClassMusicEquippedWidget : UDCCommonActivatableWidgetBase
{


}; 
 
 


// Class DungeonCrawler.MiniMapData
// Size: 0x88(Inherited: 0x38)
struct UMiniMapData : UDCDataAssetBase
{
	struct TMap<struct FString, struct FDCMiniMapDataContainer> MiniMapData;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCCustomizeWidgetBase
// Size: 0x308(Inherited: 0x300)
struct UDCCustomizeWidgetBase : UDCWidgetBase
{
	struct UDCTabListWidgetBase* CustomizeTabList;  // 0x300 (0x300)


	void OnCustomizeWidgetOpen(); // Function DungeonCrawler.DCCustomizeWidgetBase.OnCustomizeWidgetOpen
	void OnCustomizeWidgetClose(); // Function DungeonCrawler.DCCustomizeWidgetBase.OnCustomizeWidgetClose
	void AnyTabButtonSelected(struct FName InTabButtonId); // Function DungeonCrawler.DCCustomizeWidgetBase.AnyTabButtonSelected
}; 
 
 


// Class DungeonCrawler.GameMenuOptionSliderWidget
// Size: 0x330(Inherited: 0x300)
struct UGameMenuOptionSliderWidget : UDCWidgetBase
{
	struct FMulticastInlineDelegate OnSliderValueChanged;  // 0x300 (0x300)
	struct UTextBlock* Title;  // 0x310 (0x310)
	float CurValue;  // 0x318 (0x318)
	float CurPerValue;  // 0x31C (0x31C)
	float MinValue;  // 0x320 (0x320)
	float MaxValue;  // 0x324 (0x324)
	float StepSize;  // 0x328 (0x328)
	char pad_812[4];  // 0x32C (0x32C)


	void UpdateSliderValue(float NewValue); // Function DungeonCrawler.GameMenuOptionSliderWidget.UpdateSliderValue
	void UpdateSliderMinMaxValue(); // Function DungeonCrawler.GameMenuOptionSliderWidget.UpdateSliderMinMaxValue
	void SetTitle(struct FText InText); // Function DungeonCrawler.GameMenuOptionSliderWidget.SetTitle
	void SetSliderMinMaxValue(float InMinValue, float InMaxValue, float InStepSize); // Function DungeonCrawler.GameMenuOptionSliderWidget.SetSliderMinMaxValue
	void SetOptionValue(float InValue); // Function DungeonCrawler.GameMenuOptionSliderWidget.SetOptionValue
	struct UWidget* GetPrimaryGamepadFocusWidget(); // Function DungeonCrawler.GameMenuOptionSliderWidget.GetPrimaryGamepadFocusWidget
	float GetOptionValuePercent(); // Function DungeonCrawler.GameMenuOptionSliderWidget.GetOptionValuePercent
	float GetOptionValue(); // Function DungeonCrawler.GameMenuOptionSliderWidget.GetOptionValue
	void GetCurrentOptionValueByPercent(); // Function DungeonCrawler.GameMenuOptionSliderWidget.GetCurrentOptionValueByPercent
	void GetCurrentOptionValue(); // Function DungeonCrawler.GameMenuOptionSliderWidget.GetCurrentOptionValue
	struct FString ExtractOnlyNumberics(struct FString Message, bool IsInteger); // Function DungeonCrawler.GameMenuOptionSliderWidget.ExtractOnlyNumberics
}; 
 
 


// Class DungeonCrawler.GameGroupWidgetBase
// Size: 0x460(Inherited: 0x440)
struct UGameGroupWidgetBase : UDCCommonActivatableWidgetBase
{
	char pad_1088_1 : 7;  // 0x440 (0x440)
	bool bShowCursor : 1;  // 0x440 (0x440)
	uint8_t WidgetGameGroupType;  // 0x441 (0x441)
	char pad_1090[6];  // 0x442 (0x442)
	struct TArray<uint8_t> NonCoexistWidgetGameGroupTypeArray;  // 0x448 (0x448)
	char pad_1112[8];  // 0x458 (0x458)


	void OnVisible(); // Function DungeonCrawler.GameGroupWidgetBase.OnVisible
	void OnHidden(); // Function DungeonCrawler.GameGroupWidgetBase.OnHidden
	void OnGroupWidgetVisibilityChanged(uint8_t NewVisibility); // Function DungeonCrawler.GameGroupWidgetBase.OnGroupWidgetVisibilityChanged
}; 
 
 


// Class DungeonCrawler.DCTargetType_UseEventData
// Size: 0x28(Inherited: 0x28)
struct UDCTargetType_UseEventData : UDCTargetType
{


}; 
 
 


// Class DungeonCrawler.MusicListWidgetBase
// Size: 0x4A0(Inherited: 0x460)
struct UMusicListWidgetBase : UGameGroupWidgetBase
{
	struct UMusicSlotWidgetBase* MusicSlot_2;  // 0x460 (0x460)
	struct UMusicSlotWidgetBase* MusicSlot_3;  // 0x468 (0x468)
	struct UMusicSlotWidgetBase* MusicSlot_4;  // 0x470 (0x470)
	struct UMusicSlotWidgetBase* MusicSlot_5;  // 0x478 (0x478)
	struct UMusicSlotWidgetBase* MusicSlot_6;  // 0x480 (0x480)
	struct TArray<struct UMusicSlotWidgetBase*> MusicSlots;  // 0x488 (0x488)
	uint8_t WidgetSlotType;  // 0x498 (0x498)
	char pad_1177[7];  // 0x499 (0x499)


}; 
 
 


// Class DungeonCrawler.DCLobbyEmoteComponent
// Size: 0x138(Inherited: 0xA0)
struct UDCLobbyEmoteComponent : UActorComponent
{
	char pad_160[24];  // 0xA0 (0xA0)
	struct TArray<struct FDCLobbyEmoteSlotInfo> LobbyEmoteSlotInfoArray;  // 0xB8 (0xB8)
	struct TMap<int32_t, struct FPrimaryAssetId> LobbyEmoteSlotMap;  // 0xC8 (0xC8)
	struct TArray<struct FGameplayAbilitySpecHandle> OwnerGameplayAbilitySpecHandles;  // 0x118 (0x118)
	struct TArray<struct FActiveGameplayEffectHandle> OwnerGameplayEffectHandles;  // 0x128 (0x128)


}; 
 
 


// Class DungeonCrawler.SubSystemReplyMsg
// Size: 0x48(Inherited: 0x28)
struct USubSystemReplyMsg : UObject
{
	char pad_40[24];  // 0x28 (0x28)
	float CreateAt;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)


}; 
 
 


// Class DungeonCrawler.DCCharacterV2
// Size: 0x6B0(Inherited: 0x620)
struct ADCCharacterV2 : ACharacter
{
	char pad_1568[8];  // 0x620 (0x620)
	struct USkeletalMeshComponent* PartHead;  // 0x628 (0x628)
	struct USkeletalMeshComponent* PartGloves;  // 0x630 (0x630)
	struct FDCPlayerCharacterKey CharacterKey;  // 0x638 (0x638)
	char pad_1594[6];  // 0x63A (0x63A)
	struct USkeletalMeshComponent* PartHelmet;  // 0x640 (0x640)
	struct USkeletalMeshComponent* PartChest;  // 0x648 (0x648)
	struct USkeletalMeshComponent* PartPants;  // 0x650 (0x650)
	struct USkeletalMeshComponent* PartBoots;  // 0x658 (0x658)
	struct USkeletalMeshComponent* PartBack;  // 0x660 (0x660)
	struct UDCCharacterDataComponent* CharacterDataComponent;  // 0x668 (0x668)
	struct UDCCharacterPartsComponent* CharacterPartsComponent;  // 0x670 (0x670)
	struct UDCCharacterSkinComponent* CharacterSkinComponent;  // 0x678 (0x678)
	struct UDCItemSkinComponent* ItemSkinComponent;  // 0x680 (0x680)
	struct UDCActionSkinComponent* ActionSkinComponent;  // 0x688 (0x688)
	struct UDCInventoryComponent* InventoryComponent;  // 0x690 (0x690)
	struct UDCEquipmentComponent* EquipmentComponent;  // 0x698 (0x698)
	struct UDCPerkDataComponent* PerkDataComponent;  // 0x6A0 (0x6A0)
	struct UDCCharacterAbilitySystemComponent* AbilitySystemComponent;  // 0x6A8 (0x6A8)


	struct UDCPerkDataComponent* GetPerkDataComponent(); // Function DungeonCrawler.DCCharacterV2.GetPerkDataComponent
}; 
 
 


// Class DungeonCrawler.DCIngameInventoryControllerComponent
// Size: 0xC0(Inherited: 0xC0)
struct UDCIngameInventoryControllerComponent : UDCInventoryControllerComponent
{


}; 
 
 


// Class DungeonCrawler.DCPlayerCharacterAnimInstanceBase
// Size: 0x5B0(Inherited: 0x4E0)
struct UDCPlayerCharacterAnimInstanceBase : UDCCharacterAnimInstanceBase
{
	char pad_1248_1 : 7;  // 0x4E0 (0x4E0)
	bool bHoldingTwoHandedItem : 1;  // 0x4D8 (0x4D8)
	char pad_1249_1 : 7;  // 0x4E1 (0x4E1)
	bool bIsInFirstPersonPerspective : 1;  // 0x4D9 (0x4D9)
	char pad_1250_1 : 7;  // 0x4E2 (0x4E2)
	bool bIsMontageLooping : 1;  // 0x4DA (0x4DA)
	float JumpStateMachineRemainAnimTimeRatio;  // 0x4DC (0x4DC)
	float LocomotionStateMachineRemainAnimTimeRatio;  // 0x4E0 (0x4E0)
	struct USkeletalMesh* HeadMeshAsset;  // 0x4E8 (0x4E8)
	struct FLocomotionAnimSet ItemAnimationSet;  // 0x4F0 (0x4F0)
	struct FLocomotionAnimSet SecondaryItemAnimationSet;  // 0x508 (0x508)
	struct FGameplayTagContainer PrimaryMontageTagContainer;  // 0x520 (0x520)
	struct FGameplayTagContainer SecondaryMontageTagContainer;  // 0x540 (0x540)
	struct FGameplayTagContainer TwoHandedMontageTagContainer;  // 0x560 (0x560)
	struct TArray<struct FName> LoopSectionNames;  // 0x580 (0x580)
	struct FName JumpStateMachineName;  // 0x590 (0x590)
	struct FName LocomotionStateMachineName;  // 0x598 (0x598)
	char pad_1443[13];  // 0x5A3 (0x5A3)


}; 
 
 


// Class DungeonCrawler.LoginSecretTokenPopupData
// Size: 0x40(Inherited: 0x30)
struct ULoginSecretTokenPopupData : UPopupDataBase
{
	struct FString SecretToken;  // 0x30 (0x30)


}; 
 
 


// Class DungeonCrawler.GA_PickUp
// Size: 0x568(Inherited: 0x558)
struct UGA_PickUp : UDCGameplayAbilityBase
{
	char pad_1368[16];  // 0x558 (0x558)


	void OnStartSync(); // Function DungeonCrawler.GA_PickUp.OnStartSync
	void OnPickedUp(struct AActor* ItemHolderToPickUp, bool bShouldDestroy); // Function DungeonCrawler.GA_PickUp.OnPickedUp
}; 
 
 


// Class DungeonCrawler.PerkListWidgetBase
// Size: 0x328(Inherited: 0x300)
struct UPerkListWidgetBase : UDCWidgetBase
{
	struct UAccountLink* AccountLink;  // 0x300 (0x300)
	struct FString LinkedAccountId;  // 0x308 (0x308)
	struct FString CheckTargetAccountId;  // 0x318 (0x318)


}; 
 
 


// Class DungeonCrawler.ClassPerkListWidgetBase
// Size: 0x360(Inherited: 0x328)
struct UClassPerkListWidgetBase : UPerkListWidgetBase
{
	struct TArray<struct UPerkWidget*> PerkWidgetArray;  // 0x328 (0x328)
	char pad_824[40];  // 0x338 (0x338)


	void SetSelectedSlotIndex(int32_t InSlotIndex); // Function DungeonCrawler.ClassPerkListWidgetBase.SetSelectedSlotIndex
	void OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint(struct FMsgWidgetClassSlotUnLockLevelNotify& InMsg); // Function DungeonCrawler.ClassPerkListWidgetBase.OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint
	void OnFMsgWidgetClassLevelNotifyBlueprint(struct FMsgWidgetClassLevelNotify& InMsg); // Function DungeonCrawler.ClassPerkListWidgetBase.OnFMsgWidgetClassLevelNotifyBlueprint
	void OnFMsgWidgetClassEquipablePerkEmptySlotsMarkNotifyBlueprint(struct FMsgWidgetClassEquipablePerkEmptySlotsMarkNotify& InMsg); // Function DungeonCrawler.ClassPerkListWidgetBase.OnFMsgWidgetClassEquipablePerkEmptySlotsMarkNotifyBlueprint
	struct FPrimaryAssetId GetSelectedSlotPerkId(); // Function DungeonCrawler.ClassPerkListWidgetBase.GetSelectedSlotPerkId
	int32_t GetSelectedSlotIndex(); // Function DungeonCrawler.ClassPerkListWidgetBase.GetSelectedSlotIndex
}; 
 
 


// Class DungeonCrawler.DCCustomizeLobbyEmoteListWidget
// Size: 0x320(Inherited: 0x300)
struct UDCCustomizeLobbyEmoteListWidget : UDCWidgetBase
{
	char pad_768[24];  // 0x300 (0x300)
	struct UTileView* TileView_LobbyEmoteList;  // 0x318 (0x318)


	void OnSetLobbyEmoteIdArray(struct TArray<struct FDCLobbyEmoteInfo> LobbyEmoteIdArray); // Function DungeonCrawler.DCCustomizeLobbyEmoteListWidget.OnSetLobbyEmoteIdArray
}; 
 
 


// Class DungeonCrawler.ClassSelectAttributeItemWidgetData
// Size: 0x38(Inherited: 0x28)
struct UClassSelectAttributeItemWidgetData : UObject
{
	struct FGameplayEffectDescData AttrributeEffectDescData;  // 0x28 (0x28)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 


// Class DungeonCrawler.ClassSelectAttributeItemWidget
// Size: 0x308(Inherited: 0x300)
struct UClassSelectAttributeItemWidget : UDCWidgetBase
{
	char pad_768[8];  // 0x300 (0x300)


}; 
 
 


// Class DungeonCrawler.DCAttributeModMagnitudeCalculationStrength
// Size: 0xC0(Inherited: 0x40)
struct UDCAttributeModMagnitudeCalculationStrength : UGameplayModMagnitudeCalculation
{
	char pad_64[128];  // 0x40 (0x40)


}; 
 
 


// Class DungeonCrawler.DCMerchantRequiredItemData
// Size: 0x88(Inherited: 0x28)
struct UDCMerchantRequiredItemData : UObject
{
	struct UDCItemDataAsset* DataAsset;  // 0x28 (0x28)
	int32_t MaxStack;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)
	struct TMap<struct FDCItemInfo, int32_t> FilledInfos;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.ClassSelectItemWidgetData
// Size: 0x158(Inherited: 0x28)
struct UClassSelectItemWidgetData : UObject
{
	struct FPrimaryAssetId PlayerCharacterId;  // 0x28 (0x28)
	struct FDesignDataPlayerCharacter DesignDataPlayerCharacter;  // 0x38 (0x38)
	char pad_336_1 : 7;  // 0x150 (0x150)
	bool bSelected : 1;  // 0x150 (0x150)
	char pad_337[7];  // 0x151 (0x151)


}; 
 
 


// Class DungeonCrawler.ClassSelectItemWidget
// Size: 0x308(Inherited: 0x300)
struct UClassSelectItemWidget : UDCWidgetBase
{
	char pad_768[8];  // 0x300 (0x300)


}; 
 
 


// Class DungeonCrawler.ClassSpellListWidget
// Size: 0x4A0(Inherited: 0x4A0)
struct UClassSpellListWidget : USpellListWidgetBase
{


	void OnShowEquippableSlot(); // Function DungeonCrawler.ClassSpellListWidget.OnShowEquippableSlot
	void OnHideEquippableSlot(); // Function DungeonCrawler.ClassSpellListWidget.OnHideEquippableSlot
}; 
 
 


// Class DungeonCrawler.ClassSelectPerkItemWidgetData
// Size: 0x38(Inherited: 0x28)
struct UClassSelectPerkItemWidgetData : UObject
{
	struct FString PerkId;  // 0x28 (0x28)


}; 
 
 


// Class DungeonCrawler.SkillListWidgetBase
// Size: 0x328(Inherited: 0x300)
struct USkillListWidgetBase : UDCWidgetBase
{
	struct UAccountLink* AccountLink;  // 0x300 (0x300)
	struct FString LinkedAccountId;  // 0x308 (0x308)
	struct FString CheckTargetAccountId;  // 0x318 (0x318)


}; 
 
 


// Class DungeonCrawler.GA_PlayerMusicPlayBase
// Size: 0x760(Inherited: 0x558)
struct UGA_PlayerMusicPlayBase : UDCGameplayAbilityBase
{
	struct UAnimMontage* MontageToPlayOnPlaying;  // 0x558 (0x558)
	struct UAnimMontage* MontageToPlayOnPlayingSourceObject;  // 0x560 (0x560)
	struct FGameplayTag CurrentMusicTriggerTag;  // 0x568 (0x568)
	struct FDesignDataMusic CurrentMusicData;  // 0x570 (0x570)
	struct AMusicActor* CurrentMusicActor;  // 0x630 (0x630)
	struct UPlayMusicData* CurrentPlayMusicDatas;  // 0x638 (0x638)
	struct FGameplayCueParameters CurrentCueParams;  // 0x640 (0x640)
	struct FRandomStream Stream;  // 0x718 (0x718)
	char pad_1824[64];  // 0x720 (0x720)


	void ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PlayerMusicPlayBase.ReceivedEvent
	void OnPlayFinishSucceed(); // Function DungeonCrawler.GA_PlayerMusicPlayBase.OnPlayFinishSucceed
	void OnPlayFinishFailed(); // Function DungeonCrawler.GA_PlayerMusicPlayBase.OnPlayFinishFailed
	void OnPlayFinish(); // Function DungeonCrawler.GA_PlayerMusicPlayBase.OnPlayFinish
	void OnPerfect(); // Function DungeonCrawler.GA_PlayerMusicPlayBase.OnPerfect
	void OnMiss(); // Function DungeonCrawler.GA_PlayerMusicPlayBase.OnMiss
	void OnGood(); // Function DungeonCrawler.GA_PlayerMusicPlayBase.OnGood
	void OnChannelingStartSync(); // Function DungeonCrawler.GA_PlayerMusicPlayBase.OnChannelingStartSync
	void OnChannelingSectionFinish(); // Function DungeonCrawler.GA_PlayerMusicPlayBase.OnChannelingSectionFinish
	void OnChannelingFinish(); // Function DungeonCrawler.GA_PlayerMusicPlayBase.OnChannelingFinish
	void OnChannelingAction(int32_t ActionCounter); // Function DungeonCrawler.GA_PlayerMusicPlayBase.OnChannelingAction
	void OnBad(); // Function DungeonCrawler.GA_PlayerMusicPlayBase.OnBad
	void EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PlayerMusicPlayBase.EventReceived
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function DungeonCrawler.GA_PlayerMusicPlayBase.AbilityActivated
}; 
 
 


// Class DungeonCrawler.DCLobbyEmoteListEntryWidget
// Size: 0x3F8(Inherited: 0x3E8)
struct UDCLobbyEmoteListEntryWidget : UDCLobbyEmoteWidget
{
	char pad_1000[16];  // 0x3E8 (0x3E8)


	void OnRightClicked(); // Function DungeonCrawler.DCLobbyEmoteListEntryWidget.OnRightClicked
	uint8_t GetSelectedVisibility(); // Function DungeonCrawler.DCLobbyEmoteListEntryWidget.GetSelectedVisibility
}; 
 
 


// Class DungeonCrawler.DCStockCraftDataAsset
// Size: 0x48(Inherited: 0x38)
struct UDCStockCraftDataAsset : UDCTableDataAsset
{
	struct TArray<struct FDCStockCraftItemData> StockCraftItemArray;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.GameCrossHairWidget
// Size: 0x308(Inherited: 0x300)
struct UGameCrossHairWidget : UDCWidgetBase
{
	char pad_768_1 : 7;  // 0x300 (0x300)
	bool IsMeleeCrossHair : 1;  // 0x300 (0x300)
	char pad_769[7];  // 0x301 (0x301)


	void OnPlayShootCrossHair(float Rate); // Function DungeonCrawler.GameCrossHairWidget.OnPlayShootCrossHair
	void OnPlayPullingCrossHair(float Rate); // Function DungeonCrawler.GameCrossHairWidget.OnPlayPullingCrossHair
	void OnInitCrossHair(); // Function DungeonCrawler.GameCrossHairWidget.OnInitCrossHair
	void OnCrossHairVisability(bool IsVisablile, bool SetDefault); // Function DungeonCrawler.GameCrossHairWidget.OnCrossHairVisability
	void OnChangeWeaponCrossHair(struct FGameplayTag WeaponTypeTag, struct FGameplayTag ItemUtilityTag, struct FGameplayTag ItemSlotTypeTags, bool IsAttackEnable); // Function DungeonCrawler.GameCrossHairWidget.OnChangeWeaponCrossHair
	void OnChangeToRangeCrossHairAndPullAction(struct FGameplayTag WeaponTypeTag, struct FGameplayTag ItemUtilityTag); // Function DungeonCrawler.GameCrossHairWidget.OnChangeToRangeCrossHairAndPullAction
	void OnChangeCrossHairInfo(struct FGameplayTag WeaponTypeTag, float ChangeAngle, bool IsPinPoint, float RotateTime); // Function DungeonCrawler.GameCrossHairWidget.OnChangeCrossHairInfo
	void OnActivateSpellCrossHair(bool IsActivate); // Function DungeonCrawler.GameCrossHairWidget.OnActivateSpellCrossHair
}; 
 
 


// Class DungeonCrawler.ClassSkillListWidgetBase
// Size: 0x340(Inherited: 0x328)
struct UClassSkillListWidgetBase : USkillListWidgetBase
{
	struct TArray<struct USkillWidget*> SkillWidgetArray;  // 0x328 (0x328)
	char pad_824[8];  // 0x338 (0x338)


	void SetSelectedSlotIndex(int32_t InSlotIndex); // Function DungeonCrawler.ClassSkillListWidgetBase.SetSelectedSlotIndex
	void OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint(struct FMsgWidgetClassSlotUnLockLevelNotify& InMsg); // Function DungeonCrawler.ClassSkillListWidgetBase.OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint
	void OnFMsgWidgetClassLevelNotifyBlueprint(struct FMsgWidgetClassLevelNotify& InMsg); // Function DungeonCrawler.ClassSkillListWidgetBase.OnFMsgWidgetClassLevelNotifyBlueprint
	void OnFMsgWidgetClassEquipableSkillEmptySlotsMarkNotifyBlueprint(struct FMsgWidgetClassEquipableSkillEmptySlotsMarkNotify& InMsg); // Function DungeonCrawler.ClassSkillListWidgetBase.OnFMsgWidgetClassEquipableSkillEmptySlotsMarkNotifyBlueprint
	struct FPrimaryAssetId GetSelectedSlotSkillId(); // Function DungeonCrawler.ClassSkillListWidgetBase.GetSelectedSlotSkillId
	int32_t GetSelectedSlotIndex(); // Function DungeonCrawler.ClassSkillListWidgetBase.GetSelectedSlotIndex
}; 
 
 


// Class DungeonCrawler.DCPlayerManager
// Size: 0x1E0(Inherited: 0x30)
struct UDCPlayerManager : UDCUserInfoManagerBase
{
	char pad_48[192];  // 0x30 (0x30)
	struct TMap<struct FDCAccountId, struct FDCPlayerInfo> PlayerInfos;  // 0xF0 (0xF0)
	char pad_320[160];  // 0x140 (0x140)


}; 
 
 


// Class DungeonCrawler.PlayMusicData
// Size: 0x68(Inherited: 0x38)
struct UPlayMusicData : UDCDataAssetBase
{
	struct UAkAudioEvent* AkEvent;  // 0x38 (0x38)
	struct UAkAudioEvent* AkStopEvent;  // 0x40 (0x40)
	struct TArray<struct FDCPlayMusicDataContainer> PlayMusicDatas;  // 0x48 (0x48)
	struct TArray<struct FDCPlayMusicDataContainer> ChannelingPlayMusicDatas;  // 0x58 (0x58)


}; 
 
 


// Class DungeonCrawler.SpellCapacitySlotWidget
// Size: 0x430(Inherited: 0x428)
struct USpellCapacitySlotWidget : USpellSlotWidgetBase
{
	int32_t SequenceIndex;  // 0x428 (0x428)
	char pad_1068[4];  // 0x42C (0x42C)


}; 
 
 


// Class DungeonCrawler.DCActionSkinDataAsset
// Size: 0x100(Inherited: 0x38)
struct UDCActionSkinDataAsset : UDCTableDataAsset
{
	struct FText Name;  // 0x38 (0x38)
	struct FText FlavorText;  // 0x50 (0x50)
	uint8_t ActionSkinType;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)
	struct TSoftObjectPtr<UDCActionSkinArtData> Art;  // 0x70 (0x70)
	struct TSoftObjectPtr<UDCGameplayAbilityDataAsset> TargetAction;  // 0xA0 (0xA0)
	struct TSoftObjectPtr<UDCGameplayAbilityDataAsset> SkinAction;  // 0xD0 (0xD0)


}; 
 
 


// Class DungeonCrawler.ClassSpellCapacitySlotWidget
// Size: 0x448(Inherited: 0x430)
struct UClassSpellCapacitySlotWidget : USpellCapacitySlotWidget
{
	struct FText SequenceText;  // 0x430 (0x430)


}; 
 
 


// Class DungeonCrawler.DCGameModeAIControllerMetaLobbyBase
// Size: 0x428(Inherited: 0x428)
struct ADCGameModeAIControllerMetaLobbyBase : ADCGameModeAIControllerMetaBase
{


}; 
 
 


// Class DungeonCrawler.DCItemSkinShopDataAsset
// Size: 0xA8(Inherited: 0x78)
struct UDCItemSkinShopDataAsset : UDCShopDataAsset
{
	struct TSoftObjectPtr<UDCItemSkinDataAsset> StockData;  // 0x78 (0x78)


}; 
 
 


// Class DungeonCrawler.DCAT_PlayMontageAndWaitForEvent
// Size: 0x140(Inherited: 0x80)
struct UDCAT_PlayMontageAndWaitForEvent : UAbilityTask
{
	struct FMulticastInlineDelegate OnCompleted;  // 0x80 (0x80)
	struct FMulticastInlineDelegate OnBlendOut;  // 0x90 (0x90)
	struct FMulticastInlineDelegate OnInterrupted;  // 0xA0 (0xA0)
	struct FMulticastInlineDelegate OnCancelled;  // 0xB0 (0xB0)
	struct FMulticastInlineDelegate EventReceived;  // 0xC0 (0xC0)
	struct UAnimMontage* MontageToPlay;  // 0xD0 (0xD0)
	struct FGameplayTagContainer EventTags;  // 0xD8 (0xD8)
	float Rate;  // 0xF8 (0xF8)
	struct FName StartSection;  // 0xFC (0xFC)
	float StartTimeSeconds;  // 0x104 (0x104)
	float AnimRootMotionTranslationScale;  // 0x108 (0x108)
	char pad_268_1 : 7;  // 0x10C (0x10C)
	bool bStopWhenAbilityEnds : 1;  // 0x10C (0x10C)
	char pad_269[51];  // 0x10D (0x10D)


	struct UDCAT_PlayMontageAndWaitForEvent* PlayMontageAndWaitForEvent(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct UAnimMontage* MontageToPlay, struct FGameplayTagContainer EventTags, float Rate, struct FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds); // Function DungeonCrawler.DCAT_PlayMontageAndWaitForEvent.PlayMontageAndWaitForEvent
}; 
 
 


// Class DungeonCrawler.SpellCapacityWidgetBase
// Size: 0x4A8(Inherited: 0x440)
struct USpellCapacityWidgetBase : UDCCommonActivatableWidgetBase
{
	struct USpellCapacitySlotWidget* SpellCapacitySlot_2;  // 0x440 (0x440)
	struct USpellCapacitySlotWidget* SpellCapacitySlot_3;  // 0x448 (0x448)
	struct USpellCapacitySlotWidget* SpellCapacitySlot_4;  // 0x450 (0x450)
	struct USpellCapacitySlotWidget* SpellCapacitySlot_5;  // 0x458 (0x458)
	struct USpellCapacitySlotWidget* SpellCapacitySlot_6;  // 0x460 (0x460)
	struct USpellCapacitySlotWidget* SpellCapacitySlot_7;  // 0x468 (0x468)
	struct USpellCapacitySlotWidget* SpellCapacitySlot_8;  // 0x470 (0x470)
	struct USpellCapacitySlotWidget* SpellCapacitySlot_9;  // 0x478 (0x478)
	struct USpellCapacitySlotWidget* SpellCapacitySlot_10;  // 0x480 (0x480)
	struct USpellCapacitySlotWidget* SpellCapacitySlot_11;  // 0x488 (0x488)
	struct TArray<struct USpellCapacitySlotWidget*> SpellCapacitySlots;  // 0x490 (0x490)
	float SpellCurrentCapacity;  // 0x4A0 (0x4A0)
	float SpellMaxCapacity;  // 0x4A4 (0x4A4)


	void OnSpellCapacityChanged(float InSpellCurrentCapacity, float InSpellMaxCapacity); // Function DungeonCrawler.SpellCapacityWidgetBase.OnSpellCapacityChanged
}; 
 
 


// Class DungeonCrawler.PropsActorBase
// Size: 0x3E0(Inherited: 0x310)
struct APropsActorBase : ADCAbilityInteractableActorBase
{
	char pad_784[152];  // 0x310 (0x310)
	struct UImpactableComponent* ImpactableComponent;  // 0x3A8 (0x3A8)
	struct UDCUpdateRateOptimizeManagerComponent* OptimizeComponent;  // 0x3B0 (0x3B0)
	struct UDesignDataAssetProps* DesignDataAssetProps;  // 0x3B8 (0x3B8)
	struct TArray<struct FActiveGameplayEffectHandle> ActiveGameplayEffectHandleArray;  // 0x3C0 (0x3C0)
	struct UDCPropDataComponent* DataComponent;  // 0x3D0 (0x3D0)
	char pad_984[1];  // 0x3D8 (0x3D8)
	char pad_985_1 : 7;  // 0x3D9 (0x3D9)
	bool bPreview : 1;  // 0x3D9 (0x3D9)
	char pad_986[6];  // 0x3DA (0x3DA)


	void UpdateInteractDepthValue(int32_t DepthValue); // Function DungeonCrawler.PropsActorBase.UpdateInteractDepthValue
	void SetPropsId(struct FPrimaryAssetId& InPropsId); // Function DungeonCrawler.PropsActorBase.SetPropsId
	void OnImpactEnduranceExhausted(float ExhaustedTime, UGameplayEffect* GameplayEffectClass, struct FDCGameplayEffectContext EffectContext); // Function DungeonCrawler.PropsActorBase.OnImpactEnduranceExhausted
	struct FPrimaryAssetId GetPropsId(); // Function DungeonCrawler.PropsActorBase.GetPropsId
	struct FDesignDataProps GetDesignDataProps(); // Function DungeonCrawler.PropsActorBase.GetDesignDataProps
	struct UDesignDataAssetProps* GetDesignDataAssetProps(); // Function DungeonCrawler.PropsActorBase.GetDesignDataAssetProps
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function DungeonCrawler.PropsActorBase.GameplayTagUpdated
}; 
 
 


// Class DungeonCrawler.ClassSpellCapacityWidget
// Size: 0x560(Inherited: 0x4A8)
struct UClassSpellCapacityWidget : USpellCapacityWidgetBase
{
	struct UImage* CapacityGauge_2;  // 0x4A8 (0x4A8)
	struct UImage* CapacityGauge_3;  // 0x4B0 (0x4B0)
	struct UImage* CapacityGauge_4;  // 0x4B8 (0x4B8)
	struct UImage* CapacityGauge_5;  // 0x4C0 (0x4C0)
	struct UImage* CapacityGauge_6;  // 0x4C8 (0x4C8)
	struct UImage* CapacityGauge_7;  // 0x4D0 (0x4D0)
	struct UImage* CapacityGauge_8;  // 0x4D8 (0x4D8)
	struct UImage* CapacityGauge_9;  // 0x4E0 (0x4E0)
	struct UImage* CapacityGauge_10;  // 0x4E8 (0x4E8)
	struct UImage* CapacityGauge_11;  // 0x4F0 (0x4F0)
	struct TArray<struct UImage*> CapacityGauges;  // 0x4F8 (0x4F8)
	struct USpacer* CapacitySpacer_2;  // 0x508 (0x508)
	struct USpacer* CapacitySpacer_3;  // 0x510 (0x510)
	struct USpacer* CapacitySpacer_4;  // 0x518 (0x518)
	struct USpacer* CapacitySpacer_5;  // 0x520 (0x520)
	struct USpacer* CapacitySpacer_6;  // 0x528 (0x528)
	struct USpacer* CapacitySpacer_7;  // 0x530 (0x530)
	struct USpacer* CapacitySpacer_8;  // 0x538 (0x538)
	struct USpacer* CapacitySpacer_9;  // 0x540 (0x540)
	struct USpacer* CapacitySpacer_10;  // 0x548 (0x548)
	struct TArray<struct USpacer*> CapacitySpacers;  // 0x550 (0x550)


	void OnSpellListChanged(struct TArray<struct FSpellData>& InSpellDataArray); // Function DungeonCrawler.ClassSpellCapacityWidget.OnSpellListChanged
}; 
 
 


// Class DungeonCrawler.ClassSpellEquippedWidget
// Size: 0x440(Inherited: 0x440)
struct UClassSpellEquippedWidget : UDCCommonActivatableWidgetBase
{


}; 
 
 


// Class DungeonCrawler.SpellListWidgetBase
// Size: 0x4A0(Inherited: 0x460)
struct USpellListWidgetBase : UGameGroupWidgetBase
{
	struct USpellSlotWidgetBase* SpellSlot_2;  // 0x460 (0x460)
	struct USpellSlotWidgetBase* SpellSlot_3;  // 0x468 (0x468)
	struct USpellSlotWidgetBase* SpellSlot_4;  // 0x470 (0x470)
	struct USpellSlotWidgetBase* SpellSlot_5;  // 0x478 (0x478)
	struct USpellSlotWidgetBase* SpellSlot_6;  // 0x480 (0x480)
	struct TArray<struct USpellSlotWidgetBase*> SpellSlots;  // 0x488 (0x488)
	uint8_t WidgetSlotType;  // 0x498 (0x498)
	char pad_1177[7];  // 0x499 (0x499)


}; 
 
 


// Class DungeonCrawler.GamePartyManagePartyWidgetData
// Size: 0x48(Inherited: 0x28)
struct UGamePartyManagePartyWidgetData : UObject
{
	struct FPartyData PartyData;  // 0x28 (0x28)


}; 
 
 


// Class DungeonCrawler.ClassSpellSkillListWidgetBase
// Size: 0x338(Inherited: 0x328)
struct UClassSpellSkillListWidgetBase : USkillListWidgetBase
{
	struct TArray<struct USkillWidget*> SkillWidgetArray;  // 0x328 (0x328)


	void OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint(struct FMsgWidgetClassSlotUnLockLevelNotify& InMsg); // Function DungeonCrawler.ClassSpellSkillListWidgetBase.OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint
	void OnFMsgWidgetClassLevelNotifyBlueprint(struct FMsgWidgetClassLevelNotify& InMsg); // Function DungeonCrawler.ClassSpellSkillListWidgetBase.OnFMsgWidgetClassLevelNotifyBlueprint
}; 
 
 


// Class DungeonCrawler.DCMetaPlayerController
// Size: 0x900(Inherited: 0x850)
struct ADCMetaPlayerController : APlayerController
{
	char pad_2128[88];  // 0x850 (0x850)
	struct UBaseObject* BaseObject;  // 0x8A8 (0x8A8)
	struct UAccountLink* AccountLink;  // 0x8B0 (0x8B0)
	struct FDCAccountId TargetAccountId;  // 0x8B8 (0x8B8)
	char pad_2248[32];  // 0x8C8 (0x8C8)
	struct UDCMerchantComponent* MerchantComponent;  // 0x8E8 (0x8E8)
	struct UDCRecruitComponent* RecruitComponent;  // 0x8F0 (0x8F0)
	struct UDCInventoryControllerComponent* InventoryControllerComponent;  // 0x8F8 (0x8F8)


	void UpdateGameState(struct FGameStateData& InGameStateData); // Function DungeonCrawler.DCMetaPlayerController.UpdateGameState
	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.DCMetaPlayerController.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.DCMetaPlayerController.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.DCMetaPlayerController.TerminateBase
	void OnExitConfirmed(uint8_t PopupResult); // Function DungeonCrawler.DCMetaPlayerController.OnExitConfirmed
	void OnExitClicked(); // Function DungeonCrawler.DCMetaPlayerController.OnExitClicked
	void Gm(struct FString InCmd); // Function DungeonCrawler.DCMetaPlayerController.Gm
	struct FAccountSessionData GetAccountSessionData(); // Function DungeonCrawler.DCMetaPlayerController.GetAccountSessionData
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.DCMetaPlayerController.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.ClassTabMenuWidget
// Size: 0x14F0(Inherited: 0x14F0)
struct UClassTabMenuWidget : UCommonButtonBase
{


	void OnLobbyCharacterInfoUpdated_BP(struct TArray<struct FGameplayTag>& CharacterClassType); // Function DungeonCrawler.ClassTabMenuWidget.OnLobbyCharacterInfoUpdated_BP
	void OnLobbyCharacterInfoUpdated(); // Function DungeonCrawler.ClassTabMenuWidget.OnLobbyCharacterInfoUpdated
}; 
 
 


// Class DungeonCrawler.DCChannelPlayerListEntryWidgetData
// Size: 0x90(Inherited: 0x28)
struct UDCChannelPlayerListEntryWidgetData : UObject
{
	struct FDCChannelPlayerWidgetInfo Info;  // 0x28 (0x28)


}; 
 
 


// Class DungeonCrawler.ClassUnEquipmentMusicItemWidgetData
// Size: 0x40(Inherited: 0x28)
struct UClassUnEquipmentMusicItemWidgetData : UObject
{
	struct FPrimaryAssetId ID;  // 0x28 (0x28)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool Selected : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


}; 
 
 


// Class DungeonCrawler.DCAT_WaitDistChangeFromLocation
// Size: 0xB0(Inherited: 0x80)
struct UDCAT_WaitDistChangeFromLocation : UAbilityTask
{
	struct FMulticastInlineDelegate OnDistanceChange;  // 0x80 (0x80)
	char pad_144[32];  // 0x90 (0x90)


	struct UDCAT_WaitDistChangeFromLocation* WaitDistanceChange(struct UGameplayAbility* OwningAbility, struct FVector TargetLocation, float MaximumDistance); // Function DungeonCrawler.DCAT_WaitDistChangeFromLocation.WaitDistanceChange
}; 
 
 


// Class DungeonCrawler.ClassUnEquipmentMusicListWidget
// Size: 0x448(Inherited: 0x440)
struct UClassUnEquipmentMusicListWidget : UDCCommonActivatableWidgetBase
{
	struct UListView* MusicListView;  // 0x440 (0x440)


}; 
 
 


// Class DungeonCrawler.DCPlayerBlueprintFunctionLibrary
// Size: 0x28(Inherited: 0x28)
struct UDCPlayerBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{


	struct APawn* GetCurrentPlayerPawn(struct UObject* WorldContextObject); // Function DungeonCrawler.DCPlayerBlueprintFunctionLibrary.GetCurrentPlayerPawn
}; 
 
 


// Class DungeonCrawler.ClassUnEquipmentMusicTypeItemWidgetData
// Size: 0x40(Inherited: 0x28)
struct UClassUnEquipmentMusicTypeItemWidgetData : UObject
{
	struct FGameplayTag TypeTag;  // 0x28 (0x28)
	struct TArray<struct FPrimaryAssetId> MusicIds;  // 0x30 (0x30)


}; 
 
 


// Class DungeonCrawler.ClassUnEquipmentMusicTypeListWidget
// Size: 0x318(Inherited: 0x300)
struct UClassUnEquipmentMusicTypeListWidget : UDCWidgetBase
{
	char pad_768[8];  // 0x300 (0x300)
	struct UTextBlock* TypeName;  // 0x308 (0x308)
	struct UTileView* MusicTileView;  // 0x310 (0x310)


}; 
 
 


// Class DungeonCrawler.DCPlayerCharacterInterface
// Size: 0x28(Inherited: 0x28)
struct UDCPlayerCharacterInterface : UInterface
{


	struct USkeletalMesh* GetPartHeadMeshAsset(); // Function DungeonCrawler.DCPlayerCharacterInterface.GetPartHeadMeshAsset
}; 
 
 


// Class DungeonCrawler.ClassUnEquipmentPerkandSkillItemWidgetData
// Size: 0x48(Inherited: 0x28)
struct UClassUnEquipmentPerkandSkillItemWidgetData : UObject
{
	struct FPrimaryAssetId ID;  // 0x28 (0x28)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool Selected : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct UUserWidget* Widget;  // 0x40 (0x40)


}; 
 
 


// Class DungeonCrawler.DCGATA_LineCollision
// Size: 0x500(Inherited: 0x3E0)
struct ADCGATA_LineCollision : AGameplayAbilityTargetActor
{
	struct FCollisionProfileName TraceProfile;  // 0x3E0 (0x3E0)
	char pad_1000_1 : 7;  // 0x3E8 (0x3E8)
	bool bIgnoreBlockingHits : 1;  // 0x3E8 (0x3E8)
	char pad_1001_1 : 7;  // 0x3E9 (0x3E9)
	bool bShowDebug : 1;  // 0x3E9 (0x3E9)
	char pad_1002[2];  // 0x3EA (0x3EA)
	float DebugLineDrawTime;  // 0x3EC (0x3EC)
	char pad_1008[272];  // 0x3F0 (0x3F0)


}; 
 
 


// Class DungeonCrawler.DCMonsterBase
// Size: 0xC50(Inherited: 0x8B0)
struct ADCMonsterBase : ADCCharacterBase
{
	char pad_2224[40];  // 0x8B0 (0x8B0)
	char pad_2264_1 : 7;  // 0x8D8 (0x8D8)
	bool bIsRepRootMotionActive : 1;  // 0x8D8 (0x8D8)
	char pad_2265[7];  // 0x8D9 (0x8D9)
	struct UCapsuleComponent* PlayerCharacterOverlapComponent;  // 0x8E0 (0x8E0)
	char pad_2280[112];  // 0x8E8 (0x8E8)
	struct FPrimaryAssetId MonsterId;  // 0x958 (0x958)
	char pad_2408[136];  // 0x968 (0x968)
	struct UArtDataMonster* ArtDataMonster;  // 0x9F0 (0x9F0)
	char OrientRotationToMovement;  // 0x9F8 (0x9F8)
	char pad_2553[119];  // 0x9F9 (0x9F9)
	char MonsterCollisionProfile;  // 0xA70 (0xA70)
	char pad_2673[119];  // 0xA71 (0xA71)
	char PauseAnims;  // 0xAE8 (0xAE8)
	char pad_2793[7];  // 0xAE9 (0xAE9)
	struct TScriptInterface<IMonsterSpawnableInterface> MonsterSpawnableInterface;  // 0xAF0 (0xAF0)
	struct UDesignDataAssetMonster* DesignDataAssetMonster;  // 0xB00 (0xB00)
	float MinAcceleration;  // 0xB08 (0xB08)
	float NormalAcceleration;  // 0xB0C (0xB0C)
	float MaxAcceleration;  // 0xB10 (0xB10)
	char pad_2836[4];  // 0xB14 (0xB14)
	struct FVector SpawnedPoint;  // 0xB18 (0xB18)
	struct TArray<struct ATargetPoint*> TargetPoints;  // 0xB30 (0xB30)
	char pad_2880_1 : 7;  // 0xB40 (0xB40)
	bool bAggressive : 1;  // 0xB40 (0xB40)
	uint8_t DefaultMonsterCollisionProfile;  // 0xB41 (0xB41)
	char pad_2882[6];  // 0xB42 (0xB42)
	struct UBehaviorTree* BehaviorAsset;  // 0xB48 (0xB48)
	char pad_2896_1 : 7;  // 0xB50 (0xB50)
	bool bRagdollDeath : 1;  // 0xB50 (0xB50)
	char pad_2897[3];  // 0xB51 (0xB51)
	float AddtionalPlayerCharacterOverlapCapsuleComponentHalfHeight;  // 0xB54 (0xB54)
	float AddtionalPlayerCharacterOverlapCapsuleComponentRadius;  // 0xB58 (0xB58)
	float AggroPerTime;  // 0xB5C (0xB5C)
	float AddtionalAggro;  // 0xB60 (0xB60)
	float MaxAggroPoint;  // 0xB64 (0xB64)
	float DecreaseAggroSec;  // 0xB68 (0xB68)
	float DecreaseAggroPointRate;  // 0xB6C (0xB6C)
	struct TMap<struct TWeakObjectPtr<AActor>, struct FAggroInfo> AggroInfoMap;  // 0xB70 (0xB70)
	struct TArray<struct TWeakObjectPtr<ADCCharacterBase>> SightTargets;  // 0xBC0 (0xBC0)
	struct TArray<struct TWeakObjectPtr<ADCCharacterBase>> HearingTargets;  // 0xBD0 (0xBD0)
	struct TArray<struct TWeakObjectPtr<ADCCharacterBase>> Slaves;  // 0xBE0 (0xBE0)
	char pad_3056[88];  // 0xBF0 (0xBF0)
	char pad_3144_1 : 7;  // 0xC48 (0xC48)
	bool bPreview : 1;  // 0xC48 (0xC48)
	char pad_3145[7];  // 0xC49 (0xC49)


	void SetMonsterId(struct FPrimaryAssetId& InMonsterId); // Function DungeonCrawler.DCMonsterBase.SetMonsterId
	void OnStuckByShield(struct ADCCharacterBase* InInstigator, struct AActor* InEffectCauser); // Function DungeonCrawler.DCMonsterBase.OnStuckByShield
	void OnSetAI(); // Function DungeonCrawler.DCMonsterBase.OnSetAI
	void OnRep_PauseAnims(char& OldPauseAnims); // Function DungeonCrawler.DCMonsterBase.OnRep_PauseAnims
	void OnRep_OrientRotationToMovement(char& OldOrientRotationToMovement); // Function DungeonCrawler.DCMonsterBase.OnRep_OrientRotationToMovement
	void OnRep_MonsterId(struct FPrimaryAssetId& InOldMonsterId); // Function DungeonCrawler.DCMonsterBase.OnRep_MonsterId
	void OnRep_MonsterCollisionProfile(char& OldMonsterCollisionProfile); // Function DungeonCrawler.DCMonsterBase.OnRep_MonsterCollisionProfile
	void OnRep_bIsRepRootMotionActive(bool InOldbIsRepRootMotionActive); // Function DungeonCrawler.DCMonsterBase.OnRep_bIsRepRootMotionActive
	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function DungeonCrawler.DCMonsterBase.OnOverlapEnd
	void OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function DungeonCrawler.DCMonsterBase.OnOverlapBegin
	void OnNewTarget(struct ADCCharacterBase* InTarget); // Function DungeonCrawler.DCMonsterBase.OnNewTarget
	void OnLostTarget(struct ADCCharacterBase* InTarget); // Function DungeonCrawler.DCMonsterBase.OnLostTarget
	void OnFMsgGASAttributeNotifyBlueprint(struct FMsgGASAttributeNotify& InMsg); // Function DungeonCrawler.DCMonsterBase.OnFMsgGASAttributeNotifyBlueprint
	void OnDamaged(struct ADCCharacterBase* DCCharacterBase); // Function DungeonCrawler.DCMonsterBase.OnDamaged
	void OnBeforeDeath(); // Function DungeonCrawler.DCMonsterBase.OnBeforeDeath
	void OnAfterDeath(); // Function DungeonCrawler.DCMonsterBase.OnAfterDeath
	bool Normal(); // Function DungeonCrawler.DCMonsterBase.Normal
	bool InteractableWithoutHit(); // Function DungeonCrawler.DCMonsterBase.InteractableWithoutHit
	bool InteractableOnly(); // Function DungeonCrawler.DCMonsterBase.InteractableOnly
	bool Interactable(); // Function DungeonCrawler.DCMonsterBase.Interactable
	struct FPrimaryAssetId GetMonsterId(); // Function DungeonCrawler.DCMonsterBase.GetMonsterId
	struct FDesignDataMonster GetDesignDataMonster(); // Function DungeonCrawler.DCMonsterBase.GetDesignDataMonster
	bool Fly(); // Function DungeonCrawler.DCMonsterBase.Fly
	bool Death(); // Function DungeonCrawler.DCMonsterBase.Death
	void ChangePauseAnims(char Value); // Function DungeonCrawler.DCMonsterBase.ChangePauseAnims
	void ChangeOrientRotationToMovement(char Value); // Function DungeonCrawler.DCMonsterBase.ChangeOrientRotationToMovement
	bool Burrow(); // Function DungeonCrawler.DCMonsterBase.Burrow
	bool BeforeDeath(); // Function DungeonCrawler.DCMonsterBase.BeforeDeath
}; 
 
 


// Class DungeonCrawler.DCCharacterSkinShopDataAsset
// Size: 0xA8(Inherited: 0x78)
struct UDCCharacterSkinShopDataAsset : UDCShopDataAsset
{
	struct TSoftObjectPtr<UDCCharacterSkinDataAsset> StockData;  // 0x78 (0x78)


}; 
 
 


// Class DungeonCrawler.ClassUnEquipmentPerkandSkillListWidget
// Size: 0x450(Inherited: 0x440)
struct UClassUnEquipmentPerkandSkillListWidget : UDCCommonActivatableWidgetBase
{
	struct UTileView* PerkTileView;  // 0x440 (0x440)
	struct UTileView* SkillTileView;  // 0x448 (0x448)


	void OnSetCompletedSkillTileView(); // Function DungeonCrawler.ClassUnEquipmentPerkandSkillListWidget.OnSetCompletedSkillTileView
	void OnSetCompletedPerkTileView(); // Function DungeonCrawler.ClassUnEquipmentPerkandSkillListWidget.OnSetCompletedPerkTileView
	void OnCompletedSkillTileViewRegenerateAllEntries(); // Function DungeonCrawler.ClassUnEquipmentPerkandSkillListWidget.OnCompletedSkillTileViewRegenerateAllEntries
	void OnCompletedPerkTileViewRegenerateAllEntries(); // Function DungeonCrawler.ClassUnEquipmentPerkandSkillListWidget.OnCompletedPerkTileViewRegenerateAllEntries
	struct FPrimaryAssetId GetSelectedSkillId(); // Function DungeonCrawler.ClassUnEquipmentPerkandSkillListWidget.GetSelectedSkillId
	struct FPrimaryAssetId GetSelectedPerkId(); // Function DungeonCrawler.ClassUnEquipmentPerkandSkillListWidget.GetSelectedPerkId
}; 
 
 


// Class DungeonCrawler.ClassUnEquipmentSpellItemWidgetData
// Size: 0x40(Inherited: 0x28)
struct UClassUnEquipmentSpellItemWidgetData : UObject
{
	struct FPrimaryAssetId ID;  // 0x28 (0x28)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool Selected : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


}; 
 
 


// Class DungeonCrawler.DCAT_WaitGameplayEffectAdd
// Size: 0xA0(Inherited: 0x80)
struct UDCAT_WaitGameplayEffectAdd : UAbilityTask
{
	struct FMulticastInlineDelegate OnApplied;  // 0x80 (0x80)
	char pad_144[16];  // 0x90 (0x90)


	struct UDCAT_WaitGameplayEffectAdd* WaitGameplayEffectAdded(struct UGameplayAbility* OwningAbility, bool TriggerOnce); // Function DungeonCrawler.DCAT_WaitGameplayEffectAdd.WaitGameplayEffectAdded
	void OnApplyGameplayEffectCallback(struct UAbilitySystemComponent* Target, struct FGameplayEffectSpec& SpecApplied, struct FActiveGameplayEffectHandle ActiveHandle); // Function DungeonCrawler.DCAT_WaitGameplayEffectAdd.OnApplyGameplayEffectCallback
}; 
 
 


// Class DungeonCrawler.ClassUnEquipmentSpellListWidget
// Size: 0x448(Inherited: 0x440)
struct UClassUnEquipmentSpellListWidget : UDCCommonActivatableWidgetBase
{
	struct UListView* SpellListView;  // 0x440 (0x440)


}; 
 
 


// Class DungeonCrawler.DCItemInfoWidgetData
// Size: 0x140(Inherited: 0x28)
struct UDCItemInfoWidgetData : UObject
{
	char pad_40[280];  // 0x28 (0x28)


}; 
 
 


// Class DungeonCrawler.DCLightSourceComponent
// Size: 0xC0(Inherited: 0xA0)
struct UDCLightSourceComponent : UActorComponent
{
	struct TArray<struct UPointLightComponent*> PointLightComponentArray;  // 0xA0 (0xA0)
	struct TArray<struct UNiagaraComponent*> NiagaraComponentArray;  // 0xB0 (0xB0)


}; 
 
 


// Class DungeonCrawler.ClassUnEquipmentSpellTierItemWidgetData
// Size: 0x40(Inherited: 0x28)
struct UClassUnEquipmentSpellTierItemWidgetData : UObject
{
	int32_t Tier;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct TArray<struct FPrimaryAssetId> SpellIds;  // 0x30 (0x30)


}; 
 
 


// Class DungeonCrawler.CommonPopupBase
// Size: 0x440(Inherited: 0x440)
struct UCommonPopupBase : UDCCommonActivatableWidgetBase
{


}; 
 
 


// Class DungeonCrawler.DCAoeSystemBlueprintLibrary
// Size: 0x28(Inherited: 0x28)
struct UDCAoeSystemBlueprintLibrary : UBlueprintFunctionLibrary
{


	struct ADCAoeBase* SpawnAoeDeferred(struct ADCCharacterBase*& DCCharacterBase, ADCAoeBase* AoeClass, struct UDCGameplayAbilityBase* DCGameplayAbilityBase, struct FGameplayEventData EventData, bool& bSuccessfully); // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.SpawnAoeDeferred
	struct ADCAoeBase* SpawnAoe(struct ADCCharacterBase*& DCCharacterBase, ADCAoeBase* AoeClass, struct FVector Location, struct UDCGameplayAbilityBase* DCGameplayAbilityBase, struct FGameplayEventData EventData, bool& bSuccessfully); // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.SpawnAoe
	struct ADCCharacterBase* SortTargetsByDistanceAndPickTarget(struct ADCAoeBase*& DCAoeBase, struct TArray<struct ADCCharacterBase*>& TargetArray, uint8_t AoeFilterSortingType, int32_t Index); // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.SortTargetsByDistanceAndPickTarget
	bool SortTargetsByDistance(struct ADCAoeBase*& DCAoeBase, struct TArray<struct ADCCharacterBase*>& TargetArray, uint8_t AoeFilterSortingType); // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.SortTargetsByDistance
	struct ADCCharacterBase* PickTarget(struct TArray<struct ADCCharacterBase*>& TargetArray, int32_t Index); // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.PickTarget
	struct ADCCharacterBase* PickRandomTarget(struct TArray<struct ADCCharacterBase*>& TargetArray); // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.PickRandomTarget
	bool GetTargetArray(struct ADCAoeBase*& DCAoeBase, struct TArray<struct ADCCharacterBase*>& TargetArray); // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.GetTargetArray
	bool FilterUnTagedTargets(struct TArray<struct ADCCharacterBase*>& TargetArray, struct FGameplayTag GameplayTag); // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.FilterUnTagedTargets
	bool FilterTargetsWithinDistance(struct ADCAoeBase*& DCAoeBase, struct TArray<struct ADCCharacterBase*>& TargetArray, float Distance); // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.FilterTargetsWithinDistance
	bool FilterTargetsWithinDirectionAngleAndAllowedAngle(struct ADCAoeBase*& DCAoeBase, struct TArray<struct ADCCharacterBase*>& TargetArray, float DirectionalAngle, float AllowedAngle); // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.FilterTargetsWithinDirectionAngleAndAllowedAngle
	bool FilterTargetsOverDistance(struct ADCAoeBase*& DCAoeBase, struct TArray<struct ADCCharacterBase*>& TargetArray, float Distance); // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.FilterTargetsOverDistance
	bool FilterTagedTargets(struct TArray<struct ADCCharacterBase*>& TargetArray, struct FGameplayTag GameplayTag); // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.FilterTagedTargets
	void FilterPlayerCharacterTargets(struct TArray<struct ADCCharacterBase*>& TargetArray); // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.FilterPlayerCharacterTargets
	void FilterMonsterTargets(struct TArray<struct ADCCharacterBase*>& TargetArray); // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.FilterMonsterTargets
	void DespawnAoeWithinDistance(struct ADCCharacterBase*& DCCharacterBase, struct FVector Location, float Distance); // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.DespawnAoeWithinDistance
	void DespawnAoeByPrimaryAssetIdWithinDistance(struct ADCCharacterBase*& DCCharacterBase, struct FPrimaryAssetId PrimaryAssetId, struct FVector Location, float Distance); // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.DespawnAoeByPrimaryAssetIdWithinDistance
	void DespawnAoeByPrimaryAssetId(struct ADCCharacterBase*& DCCharacterBase, struct FPrimaryAssetId PrimaryAssetId); // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.DespawnAoeByPrimaryAssetId
	void DespawnAoeAll(struct ADCCharacterBase* DCCharacterBase); // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.DespawnAoeAll
	void DeferredAoeFinish(struct ADCCharacterBase*& DCCharacterBase, struct ADCAoeBase* Aoe, struct FTransform Transform, struct FGameplayEventData EventData, bool& bSuccessfully); // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.DeferredAoeFinish
}; 
 
 


// Class DungeonCrawler.GameMenuOptionsVideosSlotWidget
// Size: 0x310(Inherited: 0x300)
struct UGameMenuOptionsVideosSlotWidget : UDCWidgetBase
{
	struct UTextBlock* Title;  // 0x300 (0x300)
	char pad_776[8];  // 0x308 (0x308)


	void SetTitle(struct FText InTitle); // Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.SetTitle
	void SetQualityLevel(int32_t InQualityLevel); // Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.SetQualityLevel
	void OnQualityLevel(int32_t& NewValue, int32_t& OldValue); // Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.OnQualityLevel
	void OnMediumButtonClicked(); // Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.OnMediumButtonClicked
	void OnLowButtonClicked(); // Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.OnLowButtonClicked
	void OnHighButtonClicked(); // Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.OnHighButtonClicked
	void OnExtraButtonClicked(); // Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.OnExtraButtonClicked
	void OnEpicButtonClicked(); // Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.OnEpicButtonClicked
	int32_t GetQualityLevel(); // Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.GetQualityLevel
}; 
 
 


// Class DungeonCrawler.ClassUnEquipmentSpellTierListWidget
// Size: 0x320(Inherited: 0x300)
struct UClassUnEquipmentSpellTierListWidget : UDCWidgetBase
{
	char pad_768[8];  // 0x300 (0x300)
	struct UTextBlock* TierNumber;  // 0x308 (0x308)
	struct UTextBlock* CostNumber;  // 0x310 (0x310)
	struct UTileView* SpellTileView;  // 0x318 (0x318)


}; 
 
 


// Class DungeonCrawler.ClientAccountSubsystem
// Size: 0x4C0(Inherited: 0x30)
struct UClientAccountSubsystem : UGameInstanceSubsystem
{
	char pad_48[744];  // 0x30 (0x30)
	struct TMap<int16_t, struct USubSystemReplyMsg*> ResponseLambdaPointerMap;  // 0x318 (0x318)
	char pad_872[24];  // 0x368 (0x368)
	struct UTcpSocket* TcpSocketObject;  // 0x380 (0x380)
	char pad_904[312];  // 0x388 (0x388)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.ClientAccountSubsystem.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.ClientAccountSubsystem.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.ClientAccountSubsystem.TerminateBase
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.ClientAccountSubsystem.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.DCAkSpatialAudioVolume
// Size: 0x388(Inherited: 0x2E0)
struct ADCAkSpatialAudioVolume : AAkSpatialAudioVolume
{
	char pad_736[88];  // 0x2E0 (0x2E0)
	struct UBaseObject* BaseObject;  // 0x338 (0x338)
	float Priority;  // 0x340 (0x340)
	char pad_836[4];  // 0x344 (0x344)
	struct UAkAudioEvent* AkEventBeginOverlap;  // 0x348 (0x348)
	struct UAkStateValue* AkStateValueBeginOverlap;  // 0x350 (0x350)
	struct UAkRtpc* RtpcBeginOverlap;  // 0x358 (0x358)
	float RtpcValueBeginOverlap;  // 0x360 (0x360)
	char pad_868[4];  // 0x364 (0x364)
	struct UAkAudioEvent* AkEventEndOverlap;  // 0x368 (0x368)
	struct UAkStateValue* AkStateValueEndOverlap;  // 0x370 (0x370)
	struct UAccountLink* AccountLink;  // 0x378 (0x378)
	char pad_896[8];  // 0x380 (0x380)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.DCAkSpatialAudioVolume.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.DCAkSpatialAudioVolume.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.DCAkSpatialAudioVolume.TerminateBase
	void OnTargetPlayerPawnExitVolume(); // Function DungeonCrawler.DCAkSpatialAudioVolume.OnTargetPlayerPawnExitVolume
	void OnTargetPlayerPawnEnterVolume(); // Function DungeonCrawler.DCAkSpatialAudioVolume.OnTargetPlayerPawnEnterVolume
	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function DungeonCrawler.DCAkSpatialAudioVolume.OnOverlapEnd
	void OnOverlapBegin(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function DungeonCrawler.DCAkSpatialAudioVolume.OnOverlapBegin
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.DCAkSpatialAudioVolume.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.ClientPartySubsystem
// Size: 0x188(Inherited: 0x30)
struct UClientPartySubsystem : UGameInstanceSubsystem
{
	char pad_48[344];  // 0x30 (0x30)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.ClientPartySubsystem.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.ClientPartySubsystem.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.ClientPartySubsystem.TerminateBase
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.ClientPartySubsystem.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.ClientShopSubsystem
// Size: 0x110(Inherited: 0x30)
struct UClientShopSubsystem : UGameInstanceSubsystem
{
	char pad_48[224];  // 0x30 (0x30)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.ClientShopSubsystem.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.ClientShopSubsystem.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.ClientShopSubsystem.TerminateBase
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.ClientShopSubsystem.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.DCDamageExecCalculation
// Size: 0x40(Inherited: 0x40)
struct UDCDamageExecCalculation : UGameplayEffectExecutionCalculation
{


}; 
 
 


// Class DungeonCrawler.GameHitDirectionManagerWidget
// Size: 0x330(Inherited: 0x300)
struct UGameHitDirectionManagerWidget : UDCWidgetBase
{
	struct TArray<struct UDCWidgetBase*> HitDirectionWidgetList;  // 0x300 (0x300)
	UGameHitDirectionWidget* HitDirectionWidget;  // 0x310 (0x310)
	struct UGameHitDirectionWidget* AllDirectionWidget;  // 0x318 (0x318)
	struct UGameHitDirectionWidget* HealingWidget;  // 0x320 (0x320)
	int32_t SpawnCount;  // 0x328 (0x328)
	char pad_812[4];  // 0x32C (0x32C)


}; 
 
 


// Class DungeonCrawler.CommemorativePlaqueTextWidget
// Size: 0x300(Inherited: 0x300)
struct UCommemorativePlaqueTextWidget : UDCWidgetBase
{


	void UpdateCommenorativePlaqueText(struct TArray<struct FText>& InText, struct FVector Location); // Function DungeonCrawler.CommemorativePlaqueTextWidget.UpdateCommenorativePlaqueText
	void SnedWidgetToggleMsg(); // Function DungeonCrawler.CommemorativePlaqueTextWidget.SnedWidgetToggleMsg
	void SetCommemorativePlaqueText(struct FPrimaryAssetId ScriptId, struct FVector Location); // Function DungeonCrawler.CommemorativePlaqueTextWidget.SetCommemorativePlaqueText
}; 
 
 


// Class DungeonCrawler.DCAT_WaitAimDirChangedFromLoc
// Size: 0xC0(Inherited: 0x80)
struct UDCAT_WaitAimDirChangedFromLoc : UAbilityTask
{
	struct FMulticastInlineDelegate OnDirectionChanged;  // 0x80 (0x80)
	char pad_144[48];  // 0x90 (0x90)


	struct UDCAT_WaitAimDirChangedFromLoc* WaitAimDirectionChangedFromLocation(struct UGameplayAbility* OwningAbility, struct FVector InitialAimTargetLocation); // Function DungeonCrawler.DCAT_WaitAimDirChangedFromLoc.WaitAimDirectionChangedFromLocation
}; 
 
 


// Class DungeonCrawler.DCContextComponent
// Size: 0x110(Inherited: 0xA0)
struct UDCContextComponent : UActorComponent
{
	char pad_160[88];  // 0xA0 (0xA0)
	UContextMenuWidgetBase* ContextMenuWidgetClass;  // 0xF8 (0xF8)
	char pad_256[16];  // 0x100 (0x100)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.DCContextComponent.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.DCContextComponent.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.DCContextComponent.TerminateBase
	void OnContextMenuHolderVisibilityChaned(uint8_t Visibility); // Function DungeonCrawler.DCContextComponent.OnContextMenuHolderVisibilityChaned
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.DCContextComponent.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.DCIngameHUD
// Size: 0x3B0(Inherited: 0x390)
struct ADCIngameHUD : ADCHUD
{
	UUserWidget* LocalTestWidgetClass;  // 0x390 (0x390)
	UUserWidget* SpectatorLoadingScreenClass;  // 0x398 (0x398)
	struct UUserWidget* LocalTestWidget;  // 0x3A0 (0x3A0)
	struct UUserWidget* SpectatorLoadingScreen;  // 0x3A8 (0x3A8)


}; 
 
 


// Class DungeonCrawler.DCCommonButtonBase
// Size: 0x1580(Inherited: 0x14F0)
struct UDCCommonButtonBase : UCommonButtonBase
{
	char pad_5360[88];  // 0x14F0 (0x14F0)
	struct FMulticastInlineDelegate OnCommonButtonClick;  // 0x1548 (0x1548)
	struct UAkAudioEvent* ClickSound;  // 0x1558 (0x1558)
	struct FText ButtonText;  // 0x1560 (0x1560)
	struct UBaseObject* BaseObject;  // 0x1578 (0x1578)


	void UnbindMsgOwner(struct UScriptStruct* InMsgType); // Function DungeonCrawler.DCCommonButtonBase.UnbindMsgOwner
	void UnbindMsgAllOwner(); // Function DungeonCrawler.DCCommonButtonBase.UnbindMsgAllOwner
	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.DCCommonButtonBase.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.DCCommonButtonBase.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.DCCommonButtonBase.TerminateBase
	void SetButtonText(struct FText& InButtonText); // Function DungeonCrawler.DCCommonButtonBase.SetButtonText
	void PlayClickSound(); // Function DungeonCrawler.DCCommonButtonBase.PlayClickSound
	void OnCommonButtonClicked(); // Function DungeonCrawler.DCCommonButtonBase.OnCommonButtonClicked
	struct TScriptInterface<IBaseInterface> GetOwningBaseInterfaceBlueprint(); // Function DungeonCrawler.DCCommonButtonBase.GetOwningBaseInterfaceBlueprint
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.DCCommonButtonBase.BroadcastMsgBlueprint
	void BindMsgOwner(struct UScriptStruct* InMsgType, struct UBindMsgNode* InMsgDynamicDelegate); // Function DungeonCrawler.DCCommonButtonBase.BindMsgOwner
}; 
 
 


// Class DungeonCrawler.DCPortraitCharacter
// Size: 0x6E0(Inherited: 0x6B0)
struct ADCPortraitCharacter : ADCCharacterV2
{
	struct FUint32Point Size;  // 0x6B0 (0x6B0)
	struct UDCSceneCaptureComponent2D* PortraitCaptureComponent;  // 0x6B8 (0x6B8)
	struct UTextureRenderTarget2D* PortraitRenderTarget;  // 0x6C0 (0x6C0)
	char pad_1736[24];  // 0x6C8 (0x6C8)


}; 
 
 


// Class DungeonCrawler.CommonButtonLWidget
// Size: 0x1580(Inherited: 0x1580)
struct UCommonButtonLWidget : UDCCommonButtonBase
{


	void SetSwitchOn(bool bSetOn); // Function DungeonCrawler.CommonButtonLWidget.SetSwitchOn
	void SetAllText(struct FText TextTitle); // Function DungeonCrawler.CommonButtonLWidget.SetAllText
}; 
 
 


// Class DungeonCrawler.GameMenuOptionBaseWidget
// Size: 0x348(Inherited: 0x300)
struct UGameMenuOptionBaseWidget : UDCWidgetBase
{
	struct FMulticastInlineDelegate GameMenuOptionHoveredDelegate;  // 0x300 (0x300)
	struct UWidgetSwitcher* Switcher_Selected;  // 0x310 (0x310)
	struct FText TitleText;  // 0x318 (0x318)
	struct FText DescText;  // 0x330 (0x330)


	void OnHovered(); // Function DungeonCrawler.GameMenuOptionBaseWidget.OnHovered
}; 
 
 


// Class DungeonCrawler.DesignDataAssetItemConsume
// Size: 0x58(Inherited: 0x38)
struct UDesignDataAssetItemConsume : UDCDesignDataAssetBase
{
	struct FDesignDataItemConsume Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.CommonButtonMWidget
// Size: 0x1580(Inherited: 0x1580)
struct UCommonButtonMWidget : UDCCommonButtonBase
{


	void SetAllText(struct FText TextTitle); // Function DungeonCrawler.CommonButtonMWidget.SetAllText
}; 
 
 


// Class DungeonCrawler.CommonButtonPopupWidget
// Size: 0x1580(Inherited: 0x1580)
struct UCommonButtonPopupWidget : UDCCommonButtonBase
{


	void SetAllText(struct FText TextTitle); // Function DungeonCrawler.CommonButtonPopupWidget.SetAllText
}; 
 
 


// Class DungeonCrawler.CommonButtonSWidget
// Size: 0x1580(Inherited: 0x1580)
struct UCommonButtonSWidget : UDCCommonButtonBase
{


	void SetAllText(struct FText TextTitle); // Function DungeonCrawler.CommonButtonSWidget.SetAllText
}; 
 
 


// Class DungeonCrawler.PopupDataBase
// Size: 0x30(Inherited: 0x28)
struct UPopupDataBase : UObject
{
	char pad_40[8];  // 0x28 (0x28)


}; 
 
 


// Class DungeonCrawler.DCIngameUserManager
// Size: 0xE8(Inherited: 0x30)
struct UDCIngameUserManager : UDCUserInfoManagerBase
{
	struct TMap<struct FDCAccountId, struct FDCIngameUser> IngameUsers;  // 0x30 (0x30)
	char pad_128[104];  // 0x80 (0x80)


}; 
 
 


// Class DungeonCrawler.DCCharacterBase
// Size: 0x8B0(Inherited: 0x620)
struct ADCCharacterBase : ACharacter
{
	char pad_1568[112];  // 0x620 (0x620)
	struct UBaseObject* BaseObject;  // 0x690 (0x690)
	char pad_1688[24];  // 0x698 (0x698)
	struct UAbilitySystemComponent* AbilitySystemComponent;  // 0x6B0 (0x6B0)
	struct UDCUpdateRateOptimizeManagerComponent* OptimizeComponent;  // 0x6B8 (0x6B8)
	char pad_1728[8];  // 0x6C0 (0x6C0)
	struct FGenericTeamId GenericTeamId;  // 0x6C8 (0x6C8)
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct UAttackInputManagerComponent* AttackInputManager;  // 0x6D0 (0x6D0)
	struct USkillComponent* SkillComponent;  // 0x6D8 (0x6D8)
	char pad_1760[56];  // 0x6E0 (0x6E0)
	struct FString AccountId;  // 0x718 (0x718)
	struct UAccountLink* AccountLink;  // 0x728 (0x728)
	struct FAccountDataReplication AccountDataReplication;  // 0x730 (0x730)
	char pad_1960_1 : 7;  // 0x7A8 (0x7A8)
	bool bIsFirstPersonPerspective : 1;  // 0x7A8 (0x7A8)
	char pad_1961_1 : 7;  // 0x7A9 (0x7A9)
	bool bIsDead : 1;  // 0x7A9 (0x7A9)
	char pad_1962[6];  // 0x7AA (0x7AA)
	struct TArray<struct TWeakObjectPtr<ADCAoeBase>> AoeArray;  // 0x7B0 (0x7B0)
	struct FNickname NickNameCached;  // 0x7C0 (0x7C0)
	char pad_2024[16];  // 0x7E8 (0x7E8)
	char RemoteViewYaw;  // 0x7F8 (0x7F8)
	char pad_2041[103];  // 0x7F9 (0x7F9)
	struct FGameplayTagContainer AimRotationLockTags;  // 0x860 (0x860)
	struct FGameplayTagContainer CancelWithoutTags;  // 0x880 (0x880)
	struct UDCInventoryComponent* InventoryComponentV2;  // 0x8A0 (0x8A0)
	char pad_2216[8];  // 0x8A8 (0x8A8)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.DCCharacterBase.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.DCCharacterBase.UnbindMsg
	void TogglePerspective(); // Function DungeonCrawler.DCCharacterBase.TogglePerspective
	void TerminateBase(); // Function DungeonCrawler.DCCharacterBase.TerminateBase
	void SetIsDead(bool IsDead); // Function DungeonCrawler.DCCharacterBase.SetIsDead
	void SetGenericTeamId(struct FGenericTeamId& TeamID); // Function DungeonCrawler.DCCharacterBase.SetGenericTeamId
	void ServerSetRemoteViewYaw(char InRemoteViewYaw); // Function DungeonCrawler.DCCharacterBase.ServerSetRemoteViewYaw
	void RemoveAllLocalStateTags(); // Function DungeonCrawler.DCCharacterBase.RemoveAllLocalStateTags
	void ReceivePreInitializeComponents(); // Function DungeonCrawler.DCCharacterBase.ReceivePreInitializeComponents
	void OnUpdateTeammateState(bool bIsTeammateWithLocalPlayer); // Function DungeonCrawler.DCCharacterBase.OnUpdateTeammateState
	void OnSetPerspective(struct APlayerController* InPlayerController, bool bInIsFirstPersonPerspective); // Function DungeonCrawler.DCCharacterBase.OnSetPerspective
	void OnRep_AccountId(struct FString InOldAccountId); // Function DungeonCrawler.DCCharacterBase.OnRep_AccountId
	void OnQuickSlotClicked(uint8_t SlotType); // Function DungeonCrawler.DCCharacterBase.OnQuickSlotClicked
	void OnGameState(struct FGameStateData& InGameStateData); // Function DungeonCrawler.DCCharacterBase.OnGameState
	void OnFMsgGASActorDieNotifyBlueprint(struct FMsgGASActorDieNotify& InMsg); // Function DungeonCrawler.DCCharacterBase.OnFMsgGASActorDieNotifyBlueprint
	void OnCharacterMoved(float InDeltaSeconds, struct FVector InOldLocation, struct FVector InOldVelocity); // Function DungeonCrawler.DCCharacterBase.OnCharacterMoved
	bool IsSameTeam(struct FString PartyId); // Function DungeonCrawler.DCCharacterBase.IsSameTeam
	bool IsInFirstPersonPerspective(); // Function DungeonCrawler.DCCharacterBase.IsInFirstPersonPerspective
	bool IsDead(); // Function DungeonCrawler.DCCharacterBase.IsDead
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function DungeonCrawler.DCCharacterBase.InteractSucceed
	void InteractLost(struct AActor* Interacter); // Function DungeonCrawler.DCCharacterBase.InteractLost
	void InteractFound(struct AActor* Interacter, struct UPrimitiveComponent* InteractPart); // Function DungeonCrawler.DCCharacterBase.InteractFound
	struct UCameraComponent* GetPerspectiveCameraComponent(bool bFirstPersonPerspective); // Function DungeonCrawler.DCCharacterBase.GetPerspectiveCameraComponent
	struct FString GetPartyId(); // Function DungeonCrawler.DCCharacterBase.GetPartyId
	struct FNickname GetNickNameCached(); // Function DungeonCrawler.DCCharacterBase.GetNickNameCached
	bool GetHitBoxLocation(uint8_t HitBoxType, struct FVector& Location); // Function DungeonCrawler.DCCharacterBase.GetHitBoxLocation
	struct FGenericTeamId GetGenericTeamId(); // Function DungeonCrawler.DCCharacterBase.GetGenericTeamId
	struct FVector GetCapsuleTopLocation(); // Function DungeonCrawler.DCCharacterBase.GetCapsuleTopLocation
	struct FVector GetCapsuleBottomLocation(); // Function DungeonCrawler.DCCharacterBase.GetCapsuleBottomLocation
	struct UCameraComponent* GetCameraComponent(); // Function DungeonCrawler.DCCharacterBase.GetCameraComponent
	struct FString GetAccountId(); // Function DungeonCrawler.DCCharacterBase.GetAccountId
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function DungeonCrawler.DCCharacterBase.GameplayTagUpdated
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.DCCharacterBase.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.MetaItemComponent
// Size: 0x100(Inherited: 0x100)
struct UMetaItemComponent : UItemComponentBase
{


}; 
 
 


// Class DungeonCrawler.DCTradeBoxWidget
// Size: 0x2E8(Inherited: 0x2C0)
struct UDCTradeBoxWidget : UDCInventoryWidgetBase
{
	char pad_704_1 : 7;  // 0x2C0 (0x2C0)
	bool bLocal : 1;  // 0x2C0 (0x2C0)
	char pad_705[7];  // 0x2C1 (0x2C1)
	struct FString TraderName;  // 0x2C8 (0x2C8)
	char pad_728_1 : 7;  // 0x2D8 (0x2D8)
	bool bReady : 1;  // 0x2D8 (0x2D8)
	char pad_729[3];  // 0x2D9 (0x2D9)
	float LockRemainTime;  // 0x2DC (0x2DC)
	struct UDCBagWidget* InnerBagWidget;  // 0x2E0 (0x2E0)


	void SetReady(bool bState); // Function DungeonCrawler.DCTradeBoxWidget.SetReady
	bool IsEnableCheckBox(); // Function DungeonCrawler.DCTradeBoxWidget.IsEnableCheckBox
}; 
 
 


// Class DungeonCrawler.CommonPopupManageWidget
// Size: 0x378(Inherited: 0x300)
struct UCommonPopupManageWidget : UDCWidgetBase
{
	struct UCanvasPanel* PopupCanvas;  // 0x300 (0x300)
	UDCCommonActivatableWidgetBase* DefaultPopupWidgetClass;  // 0x308 (0x308)
	struct TMap<int32_t, struct FMsgPopup> ReplyPointerMap;  // 0x310 (0x310)
	char pad_864[24];  // 0x360 (0x360)


}; 
 
 


// Class DungeonCrawler.PopupDataSWidget
// Size: 0x68(Inherited: 0x30)
struct UPopupDataSWidget : UPopupDataBase
{
	uint8_t PopupButtonType;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct FText DescMessage;  // 0x38 (0x38)
	struct FString Nickname;  // 0x50 (0x50)
	char pad_96[8];  // 0x60 (0x60)


	bool Cancel(); // Function DungeonCrawler.PopupDataSWidget.Cancel
}; 
 
 


// Class DungeonCrawler.EquipmentSlotWidget
// Size: 0x410(Inherited: 0x300)
struct UEquipmentSlotWidget : UDCWidgetBase
{
	uint8_t EquipmentQuickSlotType;  // 0x300 (0x300)
	char pad_769[3];  // 0x301 (0x301)
	struct FGameplayTag ItemSlotType;  // 0x304 (0x304)
	uint8_t EquipmentSlot;  // 0x30C (0x30C)
	char pad_781[3];  // 0x30D (0x30D)
	struct FLinearColor ValidSlotColor;  // 0x310 (0x310)
	struct FLinearColor InvalidSlotColor;  // 0x320 (0x320)
	struct UScaleBox* ItemWidgetScaleBox;  // 0x330 (0x330)
	struct UGameItemWearingBarWidget* ItemWearingBarWidget;  // 0x338 (0x338)
	struct UTextBlock* ItemCountTextBlock;  // 0x340 (0x340)
	struct UImage* SlotColorImage;  // 0x348 (0x348)
	char pad_848[8];  // 0x350 (0x350)
	struct UItemWidget* ItemWidget;  // 0x358 (0x358)
	UItemWidget* ItemWidgetClass;  // 0x360 (0x360)
	struct FItemData ItemData;  // 0x368 (0x368)
	char pad_1032_1 : 7;  // 0x408 (0x408)
	bool bSetPreview : 1;  // 0x408 (0x408)
	char pad_1033_1 : 7;  // 0x409 (0x409)
	bool bActivated : 1;  // 0x409 (0x409)
	char pad_1034[6];  // 0x40A (0x40A)


	void SetPreviewItemWidget(struct FPrimaryAssetId& ItemId, float Duration); // Function DungeonCrawler.EquipmentSlotWidget.SetPreviewItemWidget
	void SetActiveHoverImage(bool bActivate); // Function DungeonCrawler.EquipmentSlotWidget.SetActiveHoverImage
	void RemovePreviewItemWidget(bool bSetItem); // Function DungeonCrawler.EquipmentSlotWidget.RemovePreviewItemWidget
	void OnRemoveItem(struct FItemData& InItemData); // Function DungeonCrawler.EquipmentSlotWidget.OnRemoveItem
	void OnOverlapItemWidget(struct FPrimaryAssetId& ItemId, bool bValidSlot, bool bCanEquip); // Function DungeonCrawler.EquipmentSlotWidget.OnOverlapItemWidget
	void OnLeaveItemWidget(); // Function DungeonCrawler.EquipmentSlotWidget.OnLeaveItemWidget
	void OnItemSlotActivate(bool bActivate); // Function DungeonCrawler.EquipmentSlotWidget.OnItemSlotActivate
	void OnFinishedItemDataSet(struct FItemData& InItemData, struct FGameplayTag HandType, struct FGameplayTag SlotType, struct FItemInventorySize& InventorySize); // Function DungeonCrawler.EquipmentSlotWidget.OnFinishedItemDataSet
	uint8_t GetEquipmentSlotIndex(); // Function DungeonCrawler.EquipmentSlotWidget.GetEquipmentSlotIndex
	void CheckAndSetActiveHoverImage(); // Function DungeonCrawler.EquipmentSlotWidget.CheckAndSetActiveHoverImage
}; 
 
 


// Class DungeonCrawler.DCArenaGameMode
// Size: 0x4C8(Inherited: 0x4C8)
struct ADCArenaGameMode : ADCIngameGameMode
{


}; 
 
 


// Class DungeonCrawler.CommonPopupSWidget
// Size: 0x478(Inherited: 0x440)
struct UCommonPopupSWidget : UCommonPopupBase
{
	struct UCommonButtonPopupWidget* Btn_Two_Left;  // 0x440 (0x440)
	struct UCommonButtonPopupWidget* Btn_Two_Right;  // 0x448 (0x448)
	struct UCommonButtonPopupWidget* Btn_Single;  // 0x450 (0x450)
	struct UCommonButtonPopupWidget* Btn_Two_Left_DeleteCharacter;  // 0x458 (0x458)
	struct UCommonButtonPopupWidget* Btn_Two_Right_DeleteCharacter;  // 0x460 (0x460)
	struct UEditableText* NicknameText;  // 0x468 (0x468)
	struct UPopupDataSWidget* PopupDataSWidget;  // 0x470 (0x470)


	void OnRemovePopup(); // Function DungeonCrawler.CommonPopupSWidget.OnRemovePopup
	void OnCreatePopup(struct FPopupSWidgetData& PopupSWidgetData); // Function DungeonCrawler.CommonPopupSWidget.OnCreatePopup
	void HandleSingleButtonClicked(); // Function DungeonCrawler.CommonPopupSWidget.HandleSingleButtonClicked
	void HandleRightDeleteCharacterButtonClicked(); // Function DungeonCrawler.CommonPopupSWidget.HandleRightDeleteCharacterButtonClicked
	void HandleRightButtonClicked(); // Function DungeonCrawler.CommonPopupSWidget.HandleRightButtonClicked
	void HandleLeftDeleteCharacterButtonClicked(); // Function DungeonCrawler.CommonPopupSWidget.HandleLeftDeleteCharacterButtonClicked
	void HandleLeftButtonClicked(); // Function DungeonCrawler.CommonPopupSWidget.HandleLeftButtonClicked
}; 
 
 


// Class DungeonCrawler.ContainerSlotWidget
// Size: 0x338(Inherited: 0x300)
struct UContainerSlotWidget : UDCWidgetBase
{
	struct FLinearColor ItemSetColor;  // 0x7FF7D3428690 (0x16FAD03EBC0) (0x7FF7D3428690 (0x16FAD03EBC0))
	struct FLinearColor InvalidSlotColor;  // 0x310 (0x310)
	struct FLinearColor ValidSlotColor;  // 0x320 (0x320)
	char pad_816_1 : 7;  // 0x330 (0x330)
	bool bHasItem : 1;  // 0x330 (0x330)
	char pad_817[7];  // 0x331 (0x331)


	void OnSetNewItem(bool bFullfilledAll); // Function DungeonCrawler.ContainerSlotWidget.OnSetNewItem
	void OnRemoveItem(); // Function DungeonCrawler.ContainerSlotWidget.OnRemoveItem
	void OnOverlapItemWidget(bool bCanSetItem); // Function DungeonCrawler.ContainerSlotWidget.OnOverlapItemWidget
	void OnLeaveItemWidget(); // Function DungeonCrawler.ContainerSlotWidget.OnLeaveItemWidget
}; 
 
 


// Class DungeonCrawler.DCItemSkinArtData
// Size: 0x1A0(Inherited: 0x118)
struct UDCItemSkinArtData : UArtDataUtility
{
	struct UTexture2D* ItemSkinIconTexture;  // 0x118 (0x118)
	AActor* ItemSkinPreviewActorClass;  // 0x120 (0x120)
	struct FRotator ItemSkinPreviewRotation;  // 0x128 (0x128)
	struct FTransform PreviewCameraTransform;  // 0x140 (0x140)


}; 
 
 


// Class DungeonCrawler.ContextMenuHolderInterface
// Size: 0x28(Inherited: 0x28)
struct UContextMenuHolderInterface : UInterface
{


	void OnRightClicked(); // Function DungeonCrawler.ContextMenuHolderInterface.OnRightClicked
}; 
 
 


// Class DungeonCrawler.DCMovementModifierContainerData
// Size: 0x80(Inherited: 0x30)
struct UDCMovementModifierContainerData : UDataAsset
{
	struct TMap<struct FGameplayTag, struct FDCMovementModiferContainer> MovementModifierContainer;  // 0x30 (0x30)


}; 
 
 


// Class DungeonCrawler.ContextMenuWidgetBase
// Size: 0x318(Inherited: 0x300)
struct UContextMenuWidgetBase : UDCWidgetBase
{
	struct UListView* ListView_ContextOptions;  // 0x300 (0x300)
	struct UOverlay* Overlay_ContextMenu;  // 0x0 ( (0x0 (0x0))
	char pad_784_1 : 7;  // 0x310 (0x310)
	bool bSetPosition : 1;  // 0x310 (0x310)
	char pad_785[7];  // 0x311 (0x311)


	void SetContextMenuWidgetPosition(); // Function DungeonCrawler.ContextMenuWidgetBase.SetContextMenuWidgetPosition
	void RequestCloseMenu(); // Function DungeonCrawler.ContextMenuWidgetBase.RequestCloseMenu
}; 
 
 


// Class DungeonCrawler.GameplayTagMessageRelationshipData
// Size: 0x80(Inherited: 0x30)
struct UGameplayTagMessageRelationshipData : UDataAsset
{
	struct TMap<struct FGameplayTag, struct FText> GameplayTagMessageRelationshipData;  // 0x30 (0x30)


}; 
 
 


// Class DungeonCrawler.ContextOptionListEntryWidgetData
// Size: 0x30(Inherited: 0x28)
struct UContextOptionListEntryWidgetData : UObject
{
	uint8_t ContextOption;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 


// Class DungeonCrawler.DCDataAsset
// Size: 0x38(Inherited: 0x30)
struct UDCDataAsset : UPrimaryDataAsset
{
	struct FPrimaryAssetType AssetType;  // 0x30 (0x30)


}; 
 
 


// Class DungeonCrawler.DCReadOnlyValidator
// Size: 0x30(Inherited: 0x30)
struct UDCReadOnlyValidator : UDCInventoryValidatorBase
{


}; 
 
 


// Class DungeonCrawler.DCDataBlueprintLibrary
// Size: 0x28(Inherited: 0x28)
struct UDCDataBlueprintLibrary : UBlueprintFunctionLibrary
{


	int64_t MakeUniqueId(); // Function DungeonCrawler.DCDataBlueprintLibrary.MakeUniqueId
	struct FString MakePrimaryAssetIdStr(struct FPrimaryAssetId& PrimaryAssetId); // Function DungeonCrawler.DCDataBlueprintLibrary.MakePrimaryAssetIdStr
	struct FPrimaryAssetId MakePrimaryAssetId(struct FString PrimaryAssetIdStr); // Function DungeonCrawler.DCDataBlueprintLibrary.MakePrimaryAssetId
	void LoadPrimaryAsset(struct FPrimaryAssetId InPrimaryAssetId, struct FDelegate& InOnComplete); // Function DungeonCrawler.DCDataBlueprintLibrary.LoadPrimaryAsset
	struct TArray<struct UObject*> LoadObjectLibrary(struct FString Path, UObject* ObjectClass); // Function DungeonCrawler.DCDataBlueprintLibrary.LoadObjectLibrary
	bool IsStreamingMode(); // Function DungeonCrawler.DCDataBlueprintLibrary.IsStreamingMode
	bool IsAvailableInteractionWithDCCharacterBase(struct ADCPlayerCharacterBase* Interacter, struct ADCCharacterBase* DstActor, float& OutXYDistance); // Function DungeonCrawler.DCDataBlueprintLibrary.IsAvailableInteractionWithDCCharacterBase
	bool IsAvailableInteraction(struct ADCPlayerCharacterBase* Interacter, struct AActor* DstActor, struct FHitResult& InHitResult, float& OutDistance); // Function DungeonCrawler.DCDataBlueprintLibrary.IsAvailableInteraction
	struct FLinearColor GetViewNicknameColor(struct FNickname& Nickname); // Function DungeonCrawler.DCDataBlueprintLibrary.GetViewNicknameColor
	struct FString GetViewNickname(struct FNickname& Nickname); // Function DungeonCrawler.DCDataBlueprintLibrary.GetViewNickname
	struct FPrimaryAssetId GetRandomDesignDataItemId(); // Function DungeonCrawler.DCDataBlueprintLibrary.GetRandomDesignDataItemId
	struct UPrimaryDataAsset* GetPrimaryAssetSync(struct FPrimaryAssetId& PrimaryAssetId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetPrimaryAssetSync
	void GetLobbyEmoteIdArray(struct TArray<struct FPrimaryAssetId>& OutLobbyEmoteIdArray); // Function DungeonCrawler.DCDataBlueprintLibrary.GetLobbyEmoteIdArray
	struct TMap<struct FGameplayTag, struct FText> GetItemWeaponTypeTextMap(); // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemWeaponTypeTextMap
	struct TMap<struct FGameplayTag, struct FText> GetItemUtilityTypeTextMap(); // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemUtilityTypeTextMap
	struct FText GetItemTypeText(struct FGameplayTag& InTypeTag); // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemTypeText
	void GetItemTypeChatFilterTagContainerMaps(struct UDCChatRoomDataAsset* InChatRoomData, struct TMap<struct FGameplayTag, struct FGameplayTagContainer>& OutTypeIdTagChatFilterTagContainerMap, struct TMap<struct FGameplayTag, struct FGameplayTagContainer>& OutTypeRarityChatFilterTagContainerMap, struct TMap<struct FGameplayTag, struct FGameplayTagContainer>& OutPropertyChatFilterTagContainerMap); // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemTypeChatFilterTagContainerMaps
	struct TMap<struct FGameplayTag, struct FText> GetItemSlotTypeTextMap(); // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemSlotTypeTextMap
	void GetItemSkinIdArray(struct TArray<struct FPrimaryAssetId>& OutItemSkinIdArray); // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemSkinIdArray
	struct TMap<struct FGameplayTag, struct FText> GetItemRarityTypeTextMap(); // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemRarityTypeTextMap
	struct FText GetItemRarityText(struct FGameplayTag& InItemRarityTag); // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemRarityText
	struct TMap<struct FGameplayTag, struct FText> GetItemPropertyTypeTextMap(); // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemPropertyTypeTextMap
	struct FText GetItemPropertyTypeText(struct FGameplayTag& InItemPropertyTypeTag); // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemPropertyTypeText
	struct FPrimaryAssetId GetItemPropertyTypeId_Unidentified(); // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemPropertyTypeId_Unidentified
	struct TMap<struct FGameplayTag, struct FText> GetItemMiscTypeTextMap(); // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemMiscTypeTextMap
	struct FText GetItemIdTagText(struct FGameplayTag& InIdTag); // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemIdTagText
	struct TMap<struct FGameplayTag, struct FText> GetItemHandTypeTextMap(); // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemHandTypeTextMap
	struct TMap<struct FGameplayTag, struct FText> GetItemEffectTypeTextMap(); // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemEffectTypeTextMap
	struct UArtDataItem* GetItemArtData(struct FItemData& ItemData); // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemArtData
	struct TMap<struct FGameplayTag, struct FText> GetItemArmorTypeTextMap(); // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemArmorTypeTextMap
	AItemActor* GetItemActorClass(struct AActor* OwnerActor, struct FItemData& ItemData); // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemActorClass
	struct TMap<struct FGameplayTag, struct FText> GetItemAccessoryTypeTextMap(); // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemAccessoryTypeTextMap
	void GetEmoteIdArray(struct TArray<struct FPrimaryAssetId>& OutEmoteIdArray); // Function DungeonCrawler.DCDataBlueprintLibrary.GetEmoteIdArray
	void GetDesignDataSpellMap(struct TMap<struct FPrimaryAssetId, struct FDesignDataSpell>& OutDesignDataSpellMap); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataSpellMap
	struct FDesignDataSpell GetDesignDataSpell(struct FPrimaryAssetId& InId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataSpell
	void GetDesignDataSkillMap(struct TMap<struct FPrimaryAssetId, struct FDesignDataSkill>& OutDesignDataSkillMap); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataSkillMap
	struct FDesignDataSkill GetDesignDataSkill(struct FPrimaryAssetId& InId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataSkill
	struct FDesignDataPropsSkillCheck GetDesignDataPropsSkillCheck(struct FPrimaryAssetId& InId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataPropsSkillCheck
	struct FDesignDataPropsInteract GetDesignDataPropsInteract(struct FPrimaryAssetId& InId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataPropsInteract
	struct FDesignDataProps GetDesignDataProps(struct FPrimaryAssetId& InId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataProps
	void GetDesignDataPlayerCharacterMap(struct TMap<struct FPrimaryAssetId, struct FDesignDataPlayerCharacter>& OutDesignDataPlayerCharacterMap); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataPlayerCharacterMap
	struct FDesignDataPlayerCharacter GetDesignDataPlayerCharacter(struct FPrimaryAssetId& InId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataPlayerCharacter
	void GetDesignDataPerkMap(struct TMap<struct FPrimaryAssetId, struct FDesignDataPerk>& OutDesignDataPerkMap); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataPerkMap
	struct FDesignDataPerk GetDesignDataPerk(struct FPrimaryAssetId& InId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataPerk
	void GetDesignDataMusicMap(struct TMap<struct FPrimaryAssetId, struct FDesignDataMusic>& OutDesignDataMusicMap); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataMusicMap
	struct FDesignDataMusic GetDesignDataMusic(struct FPrimaryAssetId& InId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataMusic
	struct FDesignDataMovementModifier GetDesignDataMovementModifier(struct FPrimaryAssetId& InId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataMovementModifier
	struct FDesignDataMonster GetDesignDataMonster(struct FPrimaryAssetId& InId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataMonster
	struct FDesignDataMeleeAttack GetDesignDataMeleeAttack(struct FPrimaryAssetId& InId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataMeleeAttack
	struct FDesignDataItemRequirement GetDesignDataItemRequirement(struct FPrimaryAssetId& InId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItemRequirement
	struct FDesignDataItemPropertyType GetDesignDataItemPropertyType(struct FPrimaryAssetId& InId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItemPropertyType
	struct FDesignDataItemProperty GetDesignDataItemProperty(struct FPrimaryAssetId& InId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItemProperty
	struct TArray<struct FPrimaryAssetId> GetDesignDataItemIdsByGameplayTag(struct FGameplayTag ItemGameplayTag); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItemIdsByGameplayTag
	struct FDesignDataItemContainer GetDesignDataItemContainer(struct FPrimaryAssetId& InId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItemContainer
	struct FDesignDataItemConsume GetDesignDataItemConsume(struct FPrimaryAssetId& InId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItemConsume
	struct FDesignDataItem GetDesignDataItem(struct FPrimaryAssetId& InId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItem
	struct FDesignDataIdTagGroup GetDesignDataIdTagGroup(struct FPrimaryAssetId& InId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataIdTagGroup
	struct FDesignDataGameplayEffect GetDesignDataGameplayEffect(struct FPrimaryAssetId& InId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataGameplayEffect
	struct FDesignDataGameplayAbility GetDesignDataGameplayAbility(struct FPrimaryAssetId& InId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataGameplayAbility
	struct FDesignDataEmote GetDesignDataEmote(struct FPrimaryAssetId& InId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataEmote
	struct FDesignDataBaseItem GetDesignDataBaseItem(struct FPrimaryAssetId& InId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataBaseItem
	struct UDesignDataAssetItemRequirement* GetDesignDataAssetItemRequirement(struct FPrimaryAssetId& InId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataAssetItemRequirement
	struct UDescData* GetDescData(struct FPrimaryAssetId& InId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetDescData
	int32_t GetConstantInt32(struct FPrimaryAssetId& InConstantId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetConstantInt32
	float GetConstantFloat(struct FPrimaryAssetId& InConstantId); // Function DungeonCrawler.DCDataBlueprintLibrary.GetConstantFloat
	void GetCharacterSkinIdArray(struct TArray<struct FPrimaryAssetId>& OutCharacterSkinIdArray); // Function DungeonCrawler.DCDataBlueprintLibrary.GetCharacterSkinIdArray
	void GetCharacterBaseItemMap(struct FPrimaryAssetId& InId, struct TMap<struct FPrimaryAssetId, int32_t>& BaseItemMap); // Function DungeonCrawler.DCDataBlueprintLibrary.GetCharacterBaseItemMap
	void GetActionSkinIdArray(struct TArray<struct FPrimaryAssetId>& OutActionSkinIdArray); // Function DungeonCrawler.DCDataBlueprintLibrary.GetActionSkinIdArray
}; 
 
 


// Class DungeonCrawler.DCGameModeAIControllerDungeonCrawlBase
// Size: 0x4A0(Inherited: 0x430)
struct ADCGameModeAIControllerDungeonCrawlBase : ADCGameModeAIControllerDungeonBase
{
	struct FPlayerPointData DownPlayerPointData;  // 0x430 (0x430)


}; 
 
 


// Class DungeonCrawler.DCPropsDataAsset
// Size: 0xD8(Inherited: 0x38)
struct UDCPropsDataAsset : UDCTableDataAsset
{
	struct FText Name;  // 0x38 (0x38)
	struct TSoftObjectPtr<USoundData> SoundData;  // 0x50 (0x50)
	APropsActorBase* ActorClass;  // 0x80 (0x80)
	int32_t InteractionMinCount;  // 0x88 (0x88)
	int32_t InteractionMaxCount;  // 0x8C (0x8C)
	struct TArray<struct TSoftObjectPtr<UDCPropsInteractDataAsset>> InteractionSettingDatas;  // 0x90 (0x90)
	struct TArray<struct TSoftObjectPtr<UTagQueryData>> DestructibleTagQueryData;  // 0xA0 (0xA0)
	struct TArray<struct TSoftObjectPtr<UDCGameplayAbilityDataAsset>> Abilities;  // 0xB0 (0xB0)
	struct TArray<struct TSoftObjectPtr<UDCGameplayEffectDataAsset>> Effects;  // 0xC0 (0xC0)
	int32_t AdvPoint;  // 0xD0 (0xD0)
	int32_t ExpPoint;  // 0xD4 (0xD4)


}; 
 
 


// Class DungeonCrawler.ContextOptionListEntryWidgetBase
// Size: 0x1590(Inherited: 0x1580)
struct UContextOptionListEntryWidgetBase : UDCCommonButtonBase
{
	char pad_5504[16];  // 0x1580 (0x1580)


	void OnSelect(); // Function DungeonCrawler.ContextOptionListEntryWidgetBase.OnSelect
}; 
 
 


// Class DungeonCrawler.DCShopItemSlotWidget
// Size: 0x448(Inherited: 0x368)
struct UDCShopItemSlotWidget : UDCControlWidgetBase
{
	char pad_872[24];  // 0x368 (0x368)
	struct FText ShopItemNameText;  // 0x380 (0x380)
	struct TArray<struct FText> ShopItemDescTextArray;  // 0x398 (0x398)
	struct FText ShopItemFlavorText;  // 0x3A8 (0x3A8)
	struct FText ShopItemTypeText;  // 0x3C0 (0x3C0)
	struct FText SalesChannelText;  // 0x3D8 (0x3D8)
	struct UTexture2D* ShopItemIconTexture;  // 0x3F0 (0x3F0)
	int32_t Price;  // 0x3F8 (0x3F8)
	int32_t CashPrice;  // 0x3FC (0x3FC)
	UDCGameTooltipWithFlavorTextWidget* TooltipWidgetClass;  // 0x400 (0x400)
	struct FSlateColor TooltipColor;  // 0x408 (0x408)
	char pad_1052_1 : 7;  // 0x41C (0x41C)
	bool bIsSelected : 1;  // 0x41C (0x41C)
	char pad_1053_1 : 7;  // 0x41D (0x41D)
	bool bIsPurchased : 1;  // 0x41D (0x41D)
	char pad_1054_1 : 7;  // 0x41E (0x41E)
	bool bIsExperimental : 1;  // 0x41E (0x41E)
	uint8_t SalesChannelType;  // 0x41F (0x41F)
	char pad_1056[32];  // 0x420 (0x420)
	struct UDCGameTooltipWithFlavorTextWidget* ShopItemTooltipWidget;  // 0x440 (0x440)


	struct UUserWidget* GetTooltipWidget(); // Function DungeonCrawler.DCShopItemSlotWidget.GetTooltipWidget
}; 
 
 


// Class DungeonCrawler.ItemWidget
// Size: 0x3D0(Inherited: 0x300)
struct UItemWidget : UDCWidgetBase
{
	struct UImage* ItemIconImage;  // 0x300 (0x300)
	struct USizeBox* ItemIconSizeBox;  // 0x308 (0x308)
	struct TWeakObjectPtr<AActor> ItemOwnedActor;  // 0x310 (0x310)
	float WidgetOriginalSize;  // 0x318 (0x318)
	char pad_796[20];  // 0x31C (0x31C)
	struct FItemWidgetData WidgetData;  // 0x330 (0x330)


	void SetItemOwnerActor(struct AActor* InItemOwnedActor); // Function DungeonCrawler.ItemWidget.SetItemOwnerActor
	void SetItemIcon(struct UTexture2D* ItemIconTexture, struct FItemInventorySize& ItemInventorySize); // Function DungeonCrawler.ItemWidget.SetItemIcon
	void SetItemData(struct FItemData& NewItemData); // Function DungeonCrawler.ItemWidget.SetItemData
	void OnSetItemRequirementsFulfilledStatus(bool bFufilled, struct FPrimaryAssetId& PlayerCharacterId, struct UDCAttributeSet* AttributeSet, struct TArray<struct FPrimaryAssetId>& PerkIdArray); // Function DungeonCrawler.ItemWidget.OnSetItemRequirementsFulfilledStatus
	void OnItemData(struct FItemData& NewItemData, struct FItemData& OldItemData); // Function DungeonCrawler.ItemWidget.OnItemData
	struct UImage* GetItemIconImage(); // Function DungeonCrawler.ItemWidget.GetItemIconImage
	struct FItemData GetItemData(); // Function DungeonCrawler.ItemWidget.GetItemData
}; 
 
 


// Class DungeonCrawler.ControllableItemWidget
// Size: 0x3D0(Inherited: 0x3D0)
struct UControllableItemWidget : UItemWidget
{


	void QuickMoveItem(); // Function DungeonCrawler.ControllableItemWidget.QuickMoveItem
	struct FEventReply OnRightMouseButtonDown(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool bInventoryDropButtonPressed, bool bInventorySplitButtonPressed); // Function DungeonCrawler.ControllableItemWidget.OnRightMouseButtonDown
	struct FEventReply OnLeftMouseButtonDown(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // Function DungeonCrawler.ControllableItemWidget.OnLeftMouseButtonDown
	struct FEventReply OnLeftMouseButtonDoubleClick(); // Function DungeonCrawler.ControllableItemWidget.OnLeftMouseButtonDoubleClick
	void DropOneItem(); // Function DungeonCrawler.ControllableItemWidget.DropOneItem
	void DropAllItem(); // Function DungeonCrawler.ControllableItemWidget.DropAllItem
}; 
 
 


// Class DungeonCrawler.DCActorBase
// Size: 0x2F0(Inherited: 0x290)
struct ADCActorBase : AActor
{
	char pad_656[88];  // 0x290 (0x290)
	struct UBaseObject* BaseObject;  // 0x2E8 (0x2E8)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.DCActorBase.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.DCActorBase.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.DCActorBase.TerminateBase
	void ReceivePreInitializeComponents(); // Function DungeonCrawler.DCActorBase.ReceivePreInitializeComponents
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.DCActorBase.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.EquipmentWeaponSlotSetWidget
// Size: 0x4E0(Inherited: 0x410)
struct UEquipmentWeaponSlotSetWidget : UEquipmentSlotWidget
{
	struct UScaleBox* SecondaryItemWidgetScaleBox;  // 0x410 (0x410)
	struct UItemWidget* SecondaryItemWidget;  // 0x418 (0x418)
	struct UWidget* PrimarySlot;  // 0x420 (0x420)
	struct UWidget* SecondarySlot;  // 0x428 (0x428)
	struct FItemData SecondaryItemData;  // 0x430 (0x430)
	struct UImage* SecondarySlotColorImage;  // 0x4D0 (0x4D0)
	uint8_t SecondaryEquipmentSlotId;  // 0x4D8 (0x4D8)
	char pad_1241[7];  // 0x4D9 (0x4D9)


	void SetActiveSecondaryHoverImage(bool bActivate); // Function DungeonCrawler.EquipmentWeaponSlotSetWidget.SetActiveSecondaryHoverImage
	void SetActivePrimaryHoverImage(bool bActivate); // Function DungeonCrawler.EquipmentWeaponSlotSetWidget.SetActivePrimaryHoverImage
	void CheckAndSetActiveHoverImageBySlot(struct UWidget* SlotUnderPointerPosition); // Function DungeonCrawler.EquipmentWeaponSlotSetWidget.CheckAndSetActiveHoverImageBySlot
}; 
 
 


// Class DungeonCrawler.DCAttributeModMagnitudeCalculationSkillVictoryStrike
// Size: 0xC0(Inherited: 0x40)
struct UDCAttributeModMagnitudeCalculationSkillVictoryStrike : UGameplayModMagnitudeCalculation
{
	char pad_64[128];  // 0x40 (0x40)


}; 
 
 


// Class DungeonCrawler.DCInteractableActorBase
// Size: 0x300(Inherited: 0x2F0)
struct ADCInteractableActorBase : ADCActorBase
{
	char pad_752[8];  // 0x2F0 (0x2F0)
	struct UInteractableTargetComponent* InteractableTargetComponent;  // 0x2F8 (0x2F8)


	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function DungeonCrawler.DCInteractableActorBase.InteractSucceed
	void InteractStarted(struct AActor* Interacter, struct FGameplayTag EventTag); // Function DungeonCrawler.DCInteractableActorBase.InteractStarted
	void InteractLost(struct AActor* Interacter); // Function DungeonCrawler.DCInteractableActorBase.InteractLost
	void InteractFound(struct AActor* Interacter, struct UPrimitiveComponent* InteractPart); // Function DungeonCrawler.DCInteractableActorBase.InteractFound
	void InteractFailed(struct AActor* Interacter, struct FGameplayTag EventTag); // Function DungeonCrawler.DCInteractableActorBase.InteractFailed
}; 
 
 


// Class DungeonCrawler.DCAbilitySystemBlueprintLibrary
// Size: 0x28(Inherited: 0x28)
struct UDCAbilitySystemBlueprintLibrary : UAbilitySystemBlueprintLibrary
{


	bool SetMovementStateGameplayTag(struct AActor* InActor, struct FGameplayTag InGameplayTag); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.SetMovementStateGameplayTag
	bool SetModeGameplayTag(struct AActor* InActor, struct FGameplayTag InGameplayTag); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.SetModeGameplayTag
	bool SetAnimationStateGameplayTag(struct AActor* InActor, struct FGameplayTag InGameplayTag); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.SetAnimationStateGameplayTag
	void SendGameplayEventToActorOverride(struct AActor* Actor, struct FGameplayTag EventTag, struct TArray<struct FDCGameplayEffectData>& InOverrideGameplayEffectDataArray); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.SendGameplayEventToActorOverride
	void RemoveLooseGameplayTagAll(struct AActor* InActor, struct FGameplayTag GameplayTag); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.RemoveLooseGameplayTagAll
	bool RemoveGameplayTag(struct AActor* InActor, struct FGameplayTag InGameplayTag); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.RemoveGameplayTag
	void RemoveGameplayCueLocal(struct AActor* InActor, struct FGameplayTag GameplayCueTag); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.RemoveGameplayCueLocal
	void RemoveGameplayCue(struct AActor* InActor, struct FGameplayTag GameplayCueTag); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.RemoveGameplayCue
	struct FGameplayTag ParseOptionGameplayTag(struct FString InOptionStr, struct FString InOptionKey); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ParseOptionGameplayTag
	void MessageNotifyByReasonTagContainer(struct AActor* InActor, struct FGameplayTagContainer& InGameplayTags, float MsgDuration); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.MessageNotifyByReasonTagContainer
	void MessageNotifyByReasonTag(struct AActor* InActor, struct FGameplayTag& InGameplayTag, float MsgDuration); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.MessageNotifyByReasonTag
	bool MatchesQuery(struct AActor* InActor, struct FGameplayTagQuery InTagQuery); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.MatchesQuery
	bool IsTargetSightBlocked(struct AActor* InActor, struct AActor* InTarget); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.IsTargetSightBlocked
	bool IsSameTeamWithPlayerCharacter(struct AActor* SourcePlayerCharacter, struct AActor* TargetActor); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.IsSameTeamWithPlayerCharacter
	bool IsMatchingAbilityActivated(struct AActor* InActor, struct FGameplayTag InGameplayTag); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.IsMatchingAbilityActivated
	struct FGameplayAbilitySpecHandle GiveAbility(struct UObject* SourceObject, struct AActor* InActor, struct FDCGameplayAbilityData& InGameplayAbilityData, bool bTriggerOnlyOnce); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GiveAbility
	struct TArray<struct FGameplayAbilitySpecHandle> GiveAbilities(struct UObject* SourceObject, struct AActor* InActor, struct TArray<struct FDCGameplayAbilityData>& InGameplayAbilityDataArray, bool bTriggerOnlyOnce); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GiveAbilities
	void GetSocketLocationBySocketName(struct FName SocketName, struct UObject* Object, struct AActor* AvatarActor, struct FVector& OutSocketLocation); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetSocketLocationBySocketName
	float GetSetByCallerValueInContainerSpecArray(struct FGameplayTag InEventTag, struct FGameplayTag InSetByCallerDataTag, struct TArray<struct FDCGameplayEffectContainerSpec>& InEffectHandle); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetSetByCallerValueInContainerSpecArray
	float GetSetByCallerValueInContainer(struct FGameplayTag InEventTag, struct FGameplayTag InSetByCallerDataTag, struct TArray<struct FDCGameplayEffectContainer>& InEffectContainer); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetSetByCallerValueInContainer
	float GetSetByCallerValueInAbilityIds(struct FGameplayTag InEventTag, struct FGameplayTag InSetByCallerDataTag, struct TArray<struct FPrimaryAssetId>& InAbilities); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetSetByCallerValueInAbilityIds
	float GetProjectileDamageCurveFloatValue(struct FGameplayEffectSpec& InSpec); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetProjectileDamageCurveFloatValue
	void GetOwnedGameplayTags(struct AActor* InActor, struct FGameplayTagContainer& TagContainer); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetOwnedGameplayTags
	float GetMeleeAttackAbilityDamageRatioFromEffectSpec(struct FGameplayEffectSpec& InSpec); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetMeleeAttackAbilityDamageRatioFromEffectSpec
	float GetMeleeAttackAbilityDamageRatioFromDesignData(struct FDesignDataGameplayAbility& DesignDataGameplayAbility); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetMeleeAttackAbilityDamageRatioFromDesignData
	struct TArray<struct FGameplayTag> GetMatchingAbilityActivatedTriggers(struct AActor* InActor, struct FGameplayTag InGameplayTag); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetMatchingAbilityActivatedTriggers
	int32_t GetMatchingAbilityActivatedCount(struct AActor* InActor, struct FGameplayTag InGameplayTag); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetMatchingAbilityActivatedCount
	void GetItemDataFromDesignData(struct FDesignDataItem& InDesignDataItem, struct FItemData& OutItemData); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetItemDataFromDesignData
	struct FGameplayTagContainer GetGrantedTag(struct FGameplayEffectSpecHandle SpecHandle); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGrantedTag
	float GetGameplayEffectSetByCallerValue(struct FGameplayTag InSetByCallerTag, int32_t InSetByCallerValue); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGameplayEffectSetByCallerValue
	void GetGameplayEffectDescDataItem(struct FDesignDataItem& InDesignDataItem, struct FDesignDataGameplayEffect& InDesignDataGameplayEffect, struct FItemDataGameplayEffect& InItemDataGameplayEffect, struct TArray<struct FGameplayEffectDescData>& OutGameplayEffectDescDataArray); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGameplayEffectDescDataItem
	void GetGameplayEffectDescData(struct FDesignDataGameplayEffect& InDesignDataGameplayEffect, struct TArray<struct FGameplayEffectDescData>& OutGameplayEffectDescDataArray); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGameplayEffectDescData
	void GetGameplayEffectData(struct FDesignDataGameplayEffect& InDesignDataGameplayEffect, struct FDCGameplayEffectData& OutGameplayEffectData); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGameplayEffectData
	void GetGameplayDataFromDesignDataSpell(struct FDesignDataSpell& InDesignDataSpell, struct TArray<struct FDCGameplayAbilityData>& OutGameplayAbilityDataArray, struct TArray<struct FDCGameplayEffectData>& OutGameplayEffectDataArray); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGameplayDataFromDesignDataSpell
	void GetGameplayDataFromDesignDataSkill(struct FDesignDataSkill& InDesignDataSkill, struct TArray<struct FDCGameplayAbilityData>& OutGameplayAbilityDataArray, struct TArray<struct FDCGameplayEffectData>& OutGameplayEffectDataArray); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGameplayDataFromDesignDataSkill
	void GetGameplayAbilityData(struct FDesignDataGameplayAbility& InDesignDataGameplayAbility, struct FDCGameplayAbilityData& OutGameplayAbilityData); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGameplayAbilityData
	void GetEffectSpec(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayEffectSpec& OutEffectSpec); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetEffectSpec
	struct FName GetCurrentMontageSectionName(struct AActor* InActor); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetCurrentMontageSectionName
	void GetBoundingBoxPointsLocation(struct AActor* InActor, struct AActor* InTarget, struct FVector& OutTop, struct FVector& OutBottom, struct FVector& OutLeft, struct FVector& OutRight, struct FVector& OutCenter); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetBoundingBoxPointsLocation
	struct FText GetAttributeDisplayName(struct UObject* WorldContextObject, struct FGameplayAttribute& Attribute); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetAttributeDisplayName
	float GetActorAttributeValue(struct AActor* InActor, struct FGameplayAttribute InAttribute); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetActorAttributeValue
	struct USkeletalMeshComponent* FindSocketOwningMeshComponent(struct FName SocketName, struct UObject* Object, struct AActor* AvatarActor); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.FindSocketOwningMeshComponent
	void ExecuteGameplayCueLocal(struct AActor* InActor, struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ExecuteGameplayCueLocal
	void ExecuteGameplayCue(struct AActor* InActor, struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ExecuteGameplayCue
	void EffectContextSetSoundDataPrimaryAssetId(struct FGameplayEffectContextHandle EffectContext, struct FPrimaryAssetId PrimaryAssetId); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.EffectContextSetSoundDataPrimaryAssetId
	struct FPrimaryAssetId EffectContextGetSoundDataPrimaryAssetId(struct FGameplayEffectContextHandle EffectContext); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.EffectContextGetSoundDataPrimaryAssetId
	struct USoundData* EffectContextGetSoundData(struct FGameplayEffectContextHandle EffectContext); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.EffectContextGetSoundData
	struct TArray<struct FItemData> EffectContextGetItemDatas(struct FGameplayEffectContextHandle EffectContextHandle); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.EffectContextGetItemDatas
	void DCEffectContextSetSoundDataPrimaryAssetId(struct FDCGameplayEffectContext EffectContext, struct FPrimaryAssetId PrimaryAssetId); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextSetSoundDataPrimaryAssetId
	void DCEffectContextSetOrigin(struct FDCGameplayEffectContext EffectContext, struct FVector Origin); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextSetOrigin
	bool DCEffectContextHasHitResult(struct FDCGameplayEffectContext EffectContext); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextHasHitResult
	struct UObject* DCEffectContextGetSourceObject(struct FDCGameplayEffectContext EffectContext); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetSourceObject
	struct FPrimaryAssetId DCEffectContextGetSoundDataPrimaryAssetId(struct FDCGameplayEffectContext EffectContext); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetSoundDataPrimaryAssetId
	struct AActor* DCEffectContextGetOriginalInstigatorActor(struct FDCGameplayEffectContext EffectContext); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetOriginalInstigatorActor
	struct FVector DCEffectContextGetOrigin(struct FDCGameplayEffectContext EffectContext); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetOrigin
	struct AActor* DCEffectContextGetInstigatorActor(struct FDCGameplayEffectContext EffectContext); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetInstigatorActor
	struct FHitResult DCEffectContextGetHitResult(struct FDCGameplayEffectContext EffectContext); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetHitResult
	struct AActor* DCEffectContextGetEffectCauser(struct FDCGameplayEffectContext EffectContext); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetEffectCauser
	void DCEffectContextAddHitResult(struct FDCGameplayEffectContext EffectContext, struct FHitResult HitResult, bool bReset); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextAddHitResult
	void ClearAllAbilities(struct AActor* InActor); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ClearAllAbilities
	void CancelAllAbilities(struct AActor* InActor); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.CancelAllAbilities
	struct TArray<struct FActiveGameplayEffectHandle> ApplyPremadeSpecArray(struct AActor* InActor, struct FGameplayTag ContainerTag, struct FGameplayEventData& EventData); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ApplyPremadeSpecArray
	struct TArray<struct FActiveGameplayEffectHandle> ApplyGameplayEffects(struct AActor* InActor, struct TArray<struct FDCGameplayEffectData>& InGameplayEffectDataArray, struct AActor* InSourceActor); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ApplyGameplayEffects
	struct TArray<struct FActiveGameplayEffectHandle> ApplyGameplayEffectByIds(struct AActor* InActor, struct TArray<struct FPrimaryAssetId>& InGameplayEffectIdArray, struct AActor* InSourceActor); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ApplyGameplayEffectByIds
	struct FActiveGameplayEffectHandle ApplyGameplayEffect(struct AActor* InActor, struct FDesignDataGameplayEffect& InDesignDataGameplayEffect, struct AActor* InSourceActor); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ApplyGameplayEffect
	struct TArray<struct FActiveGameplayEffectHandle> ApplyEffectContainerSpec(struct FDCGameplayEffectContainerSpec& ContainerSpec); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ApplyEffectContainerSpec
	void AimSphereWithActorViewPoint(struct AActor* InActor, float Radius, struct TArray<struct FHitResult>& OutHitResults, enum class ECollisionChannel TraceChannel, float MaxRange); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AimSphereWithActorViewPoint
	void AimLineWithActorViewPointToPoint(struct AActor* InActor, struct FVector& TraceEnd, struct TArray<struct FHitResult>& OutHitResults, enum class ECollisionChannel TraceChannel); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AimLineWithActorViewPointToPoint
	void AimLineWithActorViewPoint(struct AActor* InActor, struct TArray<struct FHitResult>& OutHitResults, enum class ECollisionChannel TraceChannel, float MaxRange); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AimLineWithActorViewPoint
	void AddLooseGameplayTag(struct AActor* InActor, struct FGameplayTag GameplayTag); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AddLooseGameplayTag
	bool AddGameplayTag(struct AActor* InActor, struct FGameplayTag InGameplayTag); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AddGameplayTag
	void AddGameplayCueLocal(struct AActor* InActor, struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AddGameplayCueLocal
	void AddGameplayCue(struct AActor* InActor, struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters); // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AddGameplayCue
}; 
 
 


// Class DungeonCrawler.DCAbilitySystemComponent
// Size: 0x1938(Inherited: 0x13A0)
struct UDCAbilitySystemComponent : UAbilitySystemComponent
{
	char pad_5024[168];  // 0x13A0 (0x13A0)
	struct FActorDieData ActorDieData;  // 0x1448 (0x1448)
	struct FImpactEnduranceExhaustedData ImpactEnduranceExhaustedData;  // 0x1630 (0x1630)
	char pad_6168[112];  // 0x1818 (0x1818)
	struct TArray<struct FDCGameplayAbilityHandleData> AbilityHandleDataArray;  // 0x1888 (0x1888)
	char pad_6296[80];  // 0x1898 (0x1898)
	struct UGameplayAbilityRelationshipData* AbilityTagRelationship;  // 0x18E8 (0x18E8)
	struct UGameplayTagMessageRelationshipData* GameplayTagMessageRelationshipData;  // 0x18F0 (0x18F0)
	struct UGameplayCueRelationshipData* GameplayCueRelationship;  // 0x18F8 (0x18F8)
	struct UGameplayCueRelationshipData* OverrideGameplayCueRelationship;  // 0x1900 (0x1900)
	struct TArray<struct FDCGameplayEffectContainerSpec> PremadeContainerSpecArray;  // 0x1908 (0x1908)
	struct TArray<struct UTagQueryData*> HitTagQueryDataArray;  // 0x1918 (0x1918)
	struct TArray<struct UTagQueryData*> BeHitTagQueryDataArray;  // 0x1928 (0x1928)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.DCAbilitySystemComponent.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.DCAbilitySystemComponent.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.DCAbilitySystemComponent.TerminateBase
	void SetTagQueryData(struct TArray<struct FPrimaryAssetId> InHitTagQueryDataIdArray, struct TArray<struct FPrimaryAssetId> InBeHitTagQueryDataIdArray); // Function DungeonCrawler.DCAbilitySystemComponent.SetTagQueryData
	void RemoveGameplayCueLocal(struct FGameplayTag GameplayCueTag); // Function DungeonCrawler.DCAbilitySystemComponent.RemoveGameplayCueLocal
	void PlayMontageOnSourceObject(struct UGameplayAbility* InAnimatingAbility, struct FGameplayAbilityActivationInfo ActivationInfo, struct UAnimMontage* NewAnimMontage, float InPlayRate, struct FName StartSectionName, float StartTimeSeconds); // Function DungeonCrawler.DCAbilitySystemComponent.PlayMontageOnSourceObject
	void OnRep_ImpactEnduranceExhaustedData(struct FImpactEnduranceExhaustedData& OldImpactEnduranceExhaustedData); // Function DungeonCrawler.DCAbilitySystemComponent.OnRep_ImpactEnduranceExhaustedData
	void OnRep_AbilityHandleDataArray(struct TArray<struct FDCGameplayAbilityHandleData>& InOldAbilityHandleDataArray); // Function DungeonCrawler.DCAbilitySystemComponent.OnRep_AbilityHandleDataArray
	void OnActorDieData(struct FActorDieData InActorDieData); // Function DungeonCrawler.DCAbilitySystemComponent.OnActorDieData
	struct TArray<struct FDCGameplayEffectContainerSpec> GetContainerSpecArray(); // Function DungeonCrawler.DCAbilitySystemComponent.GetContainerSpecArray
	void ExecuteGameplayCueLocal(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters); // Function DungeonCrawler.DCAbilitySystemComponent.ExecuteGameplayCueLocal
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.DCAbilitySystemComponent.BroadcastMsgBlueprint
	void AddGameplayCueLocal(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters); // Function DungeonCrawler.DCAbilitySystemComponent.AddGameplayCueLocal
}; 
 
 


// Class DungeonCrawler.DCAbilitySystemGlobals
// Size: 0x2C8(Inherited: 0x298)
struct UDCAbilitySystemGlobals : UAbilitySystemGlobals
{
	UGameplayEffect* GameplayEffectClassMMC;  // 0x298 (0x298)
	UGameplayEffect* GameplayEffectClassMMCSimple;  // 0x2A0 (0x2A0)
	UGameplayEffect* GameplayEffectClassInfiniteTagOnly;  // 0x2A8 (0x2A8)
	UGameplayEffect* GameplayEffectClassDurationTagOnly;  // 0x2B0 (0x2B0)
	UGameplayEffect* GameplayEffectClassInitialize;  // 0x2B8 (0x2B8)
	UGameplayEffect* GameplayEffectClassCalculation;  // 0x2C0 (0x2C0)


}; 
 
 


// Class DungeonCrawler.DCActionSkinArtData
// Size: 0x40(Inherited: 0x38)
struct UDCActionSkinArtData : UDCDataAssetBase
{
	struct UTexture2D* IconTexture;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCActionSkinComponent
// Size: 0x100(Inherited: 0xA0)
struct UDCActionSkinComponent : UActorComponent
{
	struct TArray<struct UDCActionSkinDataAsset*> Datas;  // 0xA0 (0xA0)
	char pad_176[80];  // 0xB0 (0xB0)


	void OnRep_Datas(struct TArray<struct UDCActionSkinDataAsset*>& OldDatas); // Function DungeonCrawler.DCActionSkinComponent.OnRep_Datas
}; 
 
 


// Class DungeonCrawler.DCPlayerChatComponent
// Size: 0x158(Inherited: 0xA0)
struct UDCPlayerChatComponent : UActorComponent
{
	char pad_160[184];  // 0xA0 (0xA0)


}; 
 
 


// Class DungeonCrawler.DCActionSkinListEntryWidgetData
// Size: 0x38(Inherited: 0x28)
struct UDCActionSkinListEntryWidgetData : UObject
{
	struct FDCActionSkinInfo ActionSkinInfo;  // 0x28 (0x28)


}; 
 
 


// Class DungeonCrawler.DCGATA_LineTraceInteractable
// Size: 0x4C0(Inherited: 0x3E0)
struct ADCGATA_LineTraceInteractable : AGameplayAbilityTargetActor
{
	struct FMulticastInlineDelegate FoundNewInteractableTarget;  // 0x3E0 (0x3E0)
	struct FMulticastInlineDelegate LostInteractableTarget;  // 0x3F0 (0x3F0)
	float MaxRange;  // 0x400 (0x400)
	float Radius;  // 0x404 (0x404)
	char pad_1032[184];  // 0x408 (0x408)


}; 
 
 


// Class DungeonCrawler.GA_HuntingTrapDisarmInteract
// Size: 0x6A0(Inherited: 0x6A0)
struct UGA_HuntingTrapDisarmInteract : UGA_Interact
{


}; 
 
 


// Class DungeonCrawler.DCControlWidgetBase
// Size: 0x368(Inherited: 0x278)
struct UDCControlWidgetBase : UUserWidget
{
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool bCanClick : 1;  // 0x278 (0x278)
	char pad_633_1 : 7;  // 0x279 (0x279)
	bool bCanDrag : 1;  // 0x279 (0x279)
	char pad_634[6];  // 0x27A (0x27A)
	struct FDCMouseClickInfo PrevMouseInfo;  // 0x280 (0x280)
	struct FTimerHandle TimerHandle;  // 0x360 (0x360)


	void OnClickTimer(); // Function DungeonCrawler.DCControlWidgetBase.OnClickTimer
}; 
 
 


// Class DungeonCrawler.DCActionSkinWidget
// Size: 0x3E0(Inherited: 0x368)
struct UDCActionSkinWidget : UDCControlWidgetBase
{
	char pad_872[24];  // 0x368 (0x368)
	struct FText ActionSkinName;  // 0x380 (0x380)
	struct FText ActionSkinFlavorText;  // 0x398 (0x398)
	struct UTexture2D* ActionSkinIconTexture;  // 0x3B0 (0x3B0)
	struct FPrimaryAssetId ActionSkinId;  // 0x3B8 (0x3B8)
	char pad_968_1 : 7;  // 0x3C8 (0x3C8)
	bool bIsEquipped : 1;  // 0x3C8 (0x3C8)
	char pad_969[7];  // 0x3C9 (0x3C9)
	UDCGameTooltipWithFlavorTextWidget* TooltipWidgetClass;  // 0x3D0 (0x3D0)
	struct UDCGameTooltipWithFlavorTextWidget* SkinTooltipWidget;  // 0x3D8 (0x3D8)


	struct UUserWidget* GetActionSkinTooltipWidget(); // Function DungeonCrawler.DCActionSkinWidget.GetActionSkinTooltipWidget
}; 
 
 


// Class DungeonCrawler.DCActionSkinListEntryWidget
// Size: 0x3F0(Inherited: 0x3E0)
struct UDCActionSkinListEntryWidget : UDCActionSkinWidget
{
	char pad_992[16];  // 0x3E0 (0x3E0)


	void OnRightClicked(); // Function DungeonCrawler.DCActionSkinListEntryWidget.OnRightClicked
}; 
 
 


// Class DungeonCrawler.DCAT_WaitGameplayTagsAdded
// Size: 0x118(Inherited: 0x108)
struct UDCAT_WaitGameplayTagsAdded : UDCAT_WaitGameplayTags
{
	struct FMulticastInlineDelegate Added;  // 0x108 (0x108)


	struct UDCAT_WaitGameplayTagsAdded* WaitGameplayTagsAdded(struct UGameplayAbility* OwningAbility, struct FGameplayTagContainer TagContainer, bool bIsWaitAnyTag, struct AActor* InOptionalExternalTarget, bool bIsOnlyTriggerOnce); // Function DungeonCrawler.DCAT_WaitGameplayTagsAdded.WaitGameplayTagsAdded
}; 
 
 


// Class DungeonCrawler.DCCustomizeEmoteListWidget
// Size: 0x320(Inherited: 0x300)
struct UDCCustomizeEmoteListWidget : UDCWidgetBase
{
	char pad_768[24];  // 0x300 (0x300)
	struct UTileView* TileView_EmoteList;  // 0x318 (0x318)


	void OnSetEmoteIdArray(struct TArray<struct FDCEmoteInfo> EmoteIdArray); // Function DungeonCrawler.DCCustomizeEmoteListWidget.OnSetEmoteIdArray
}; 
 
 


// Class DungeonCrawler.DCActorReferenceCounterInterface
// Size: 0x28(Inherited: 0x28)
struct UDCActorReferenceCounterInterface : UInterface
{


}; 
 
 


// Class DungeonCrawler.DCMerchantItemWidget
// Size: 0x4E8(Inherited: 0x4C8)
struct UDCMerchantItemWidget : UDCItemWidgetBase
{
	UDCItemTooltipWidget* ItemTooltipWidgetClass;  // 0x4C8 (0x4C8)
	int32_t DealTableCount;  // 0x4D0 (0x4D0)
	char pad_1236[4];  // 0x4D4 (0x4D4)
	struct UImage* ItemImage;  // 0x4D8 (0x4D8)
	struct USizeBox* ItemSizeBox;  // 0x4E0 (0x4E0)


	struct UDCItemTooltipWidget* GetTooltipWidget(); // Function DungeonCrawler.DCMerchantItemWidget.GetTooltipWidget
}; 
 
 


// Class DungeonCrawler.DCCameraPostProcessTimelineData
// Size: 0x108(Inherited: 0x28)
struct UDCCameraPostProcessTimelineData : UObject
{
	struct FMulticastInlineDelegate OnCameraPostProcessDataTimelineUpdate;  // 0x28 (0x28)
	struct FMulticastInlineDelegate OnCameraPostProcessDataTimelineFinished;  // 0x38 (0x38)
	struct FTimeline CameraPostProcessTimeline;  // 0x48 (0x48)
	struct UCurveFloat* TimelineCurve;  // 0xE0 (0xE0)
	enum class ETimelineDirection TimelineDirection;  // 0xE8 (0xE8)
	char pad_233[7];  // 0xE9 (0xE9)
	struct TArray<struct FName> ParameterNames;  // 0xF0 (0xF0)
	struct UMaterialInstanceDynamic* MIDKey;  // 0x100 (0x100)


	void HandleTimelineUpdate(float UpdateValue); // Function DungeonCrawler.DCCameraPostProcessTimelineData.HandleTimelineUpdate
	void HandleTimelineFinished(); // Function DungeonCrawler.DCCameraPostProcessTimelineData.HandleTimelineFinished
}; 
 
 


// Class DungeonCrawler.DCCharacterAbilitySystemComponent
// Size: 0x1988(Inherited: 0x1938)
struct UDCCharacterAbilitySystemComponent : UDCAbilitySystemComponent
{
	struct TMap<struct FDCItemId, struct FDCEquipItemGASInfo> ItemEquipInfos;  // 0x1938 (0x1938)


	void OnItemUnequipEvent(struct FDCItemId ItemId); // Function DungeonCrawler.DCCharacterAbilitySystemComponent.OnItemUnequipEvent
	void OnItemEquipEvent(struct FDCItemInfo& ItemInfo); // Function DungeonCrawler.DCCharacterAbilitySystemComponent.OnItemEquipEvent
}; 
 
 


// Class DungeonCrawler.SkillActor
// Size: 0x400(Inherited: 0x2F0)
struct ASkillActor : ADCActorBase
{
	char pad_752[8];  // 0x2F0 (0x2F0)
	struct FSkillData SkillData;  // 0x2F8 (0x2F8)
	char pad_808[200];  // 0x328 (0x328)
	struct UArtDataSkill* ArtDataSkill;  // 0x3F0 (0x3F0)
	struct USoundData* SoundData;  // 0x3F8 (0x3F8)


	bool UpdateSkillCount(int32_t DeltaCount); // Function DungeonCrawler.SkillActor.UpdateSkillCount
	void SetSkillData(struct FSkillData& NewSkillData); // Function DungeonCrawler.SkillActor.SetSkillData
	void RechargeSkill(int32_t ChargeAmount); // Function DungeonCrawler.SkillActor.RechargeSkill
	void OnRep_SkillData(struct FSkillData& OldSkillData); // Function DungeonCrawler.SkillActor.OnRep_SkillData
	struct USoundData* GetSoundDataSkill(); // Function DungeonCrawler.SkillActor.GetSoundDataSkill
	struct FSkillData GetSkillData(); // Function DungeonCrawler.SkillActor.GetSkillData
	struct FDesignDataSkill GetDesignDataSkill(); // Function DungeonCrawler.SkillActor.GetDesignDataSkill
	struct UArtDataSkill* GetArtDataSkill(); // Function DungeonCrawler.SkillActor.GetArtDataSkill
}; 
 
 


// Class DungeonCrawler.DCActorStatusComponent
// Size: 0x130(Inherited: 0xA0)
struct UDCActorStatusComponent : UActorComponent
{
	char pad_160[88];  // 0xA0 (0xA0)
	struct UAsyncTaskEffectStackChanged* EffectStackAsyncTask;  // 0xF8 (0xF8)
	struct UAsyncTaskEffectInhibitionChanged* EffectInhibitAsyncTask;  // 0x100 (0x100)
	struct TArray<struct FActorStatusData> ActorStatusDatas;  // 0x108 (0x108)
	char pad_280[24];  // 0x118 (0x118)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.DCActorStatusComponent.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.DCActorStatusComponent.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.DCActorStatusComponent.TerminateBase
	void OnRep_ActorStatusDatas(struct TArray<struct FActorStatusData>& OldActorStatusDatas); // Function DungeonCrawler.DCActorStatusComponent.OnRep_ActorStatusDatas
	void GameplayEffectStackChanged(struct FGameplayTag EffectGameplayTag, struct FActiveGameplayEffectHandle EffectHandle, int32_t NewStackCount, int32_t PreviousStackCount); // Function DungeonCrawler.DCActorStatusComponent.GameplayEffectStackChanged
	void GameplayEffectInhibitChanged(struct FGameplayTag EffectGameplayTag, struct FActiveGameplayEffectHandle EffectHandle, bool bIsInhibited); // Function DungeonCrawler.DCActorStatusComponent.GameplayEffectInhibitChanged
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.DCActorStatusComponent.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.SkillWidget
// Size: 0x350(Inherited: 0x300)
struct USkillWidget : UDCWidgetBase
{
	struct UImage* SkillIconImage;  // 0x300 (0x300)
	struct FSkillWidgetData SkillWidgetData;  // 0x308 (0x308)
	UUserWidget* SkillToolTipWidgetClass;  // 0x338 (0x338)
	struct FPrimaryAssetId SkillId;  // 0x340 (0x340)


	void SetSkillData(struct FText& SkillName, struct FText& SkillDesc); // Function DungeonCrawler.SkillWidget.SetSkillData
	void OnSetSkillData(); // Function DungeonCrawler.SkillWidget.OnSetSkillData
	void InitializeSkillWidget(struct FPrimaryAssetId& InSkillId); // Function DungeonCrawler.SkillWidget.InitializeSkillWidget
}; 
 
 


// Class DungeonCrawler.DCAkComponent
// Size: 0x650(Inherited: 0x4A0)
struct UDCAkComponent : UAkComponent
{
	char pad_1184[88];  // 0x4A0 (0x4A0)
	struct TMap<uint32_t, struct FAkAudioVolumeInfo> CurrentVolumeIdMap;  // 0x4F8 (0x4F8)
	uint32_t CurrentVolumeId;  // 0x548 (0x548)
	char pad_1356[4];  // 0x54C (0x54C)
	struct TMap<struct FGameplayTag, struct UAkAudioEvent*> AkEvents;  // 0x550 (0x550)
	struct TMap<struct FGameplayTag, struct FDCSoundDataContainer> AkSwitches;  // 0x5A0 (0x5A0)
	struct TMap<struct FGameplayTag, struct FGameplayTagQuery> SoundPlayableCondition;  // 0x5F0 (0x5F0)
	struct FPrimaryAssetId SoundDataId;  // 0x640 (0x640)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.DCAkComponent.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.DCAkComponent.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.DCAkComponent.TerminateBase
	void SetSoundSwitch(struct FGameplayTag& Tag, enum class EPhysicalSurface SurfaceType, struct FString SwitchGroup, struct FString SwitchState); // Function DungeonCrawler.DCAkComponent.SetSoundSwitch
	void PostSoundEvent(struct FGameplayTag Tag); // Function DungeonCrawler.DCAkComponent.PostSoundEvent
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.DCAkComponent.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.DCMerchantMenuWidget
// Size: 0x278(Inherited: 0x278)
struct UDCMerchantMenuWidget : UUserWidget
{


}; 
 
 


// Class DungeonCrawler.ItemTooltipRequirementListEntryWidgetData
// Size: 0x58(Inherited: 0x28)
struct UItemTooltipRequirementListEntryWidgetData : UObject
{
	struct FText RequirementValueText;  // 0x28 (0x28)
	struct FSlateColor RequirementValueTextColor;  // 0x40 (0x40)
	char pad_84[4];  // 0x54 (0x54)


}; 
 
 


// Class DungeonCrawler.DCAnimInstanceBase
// Size: 0x450(Inherited: 0x350)
struct UDCAnimInstanceBase : UAnimInstance
{
	char pad_848[80];  // 0x350 (0x350)
	struct TArray<int32_t> AnimationLODFrameRate;  // 0x3A0 (0x3A0)
	float HorizontalMovingThreshold;  // 0x3B0 (0x3B0)
	char pad_948[4];  // 0x3B4 (0x3B4)
	struct FVector NativeVelocity;  // 0x3B8 (0x3B8)
	struct FVector NativeRelativeHorizontalVelocity;  // 0x3D0 (0x3D0)
	float NativeSpeed;  // 0x3E8 (0x3E8)
	float NativeHorizontalSpeed;  // 0x3EC (0x3EC)
	float NativeDirectionAngle;  // 0x3F0 (0x3F0)
	char pad_1012_1 : 7;  // 0x3F4 (0x3F4)
	bool bIsMontagePlaying : 1;  // 0x3F4 (0x3F4)
	char pad_1013_1 : 7;  // 0x3F5 (0x3F5)
	bool bIsHorizontalMoving : 1;  // 0x3F5 (0x3F5)
	char pad_1014[2];  // 0x3F6 (0x3F6)
	struct FGameplayTag IdleAnimSequenceGameplayTag;  // 0x3F8 (0x3F8)
	char pad_1024[40];  // 0x400 (0x400)
	struct FGameplayTagBlueprintPropertyMap GameplayTagPropertyMap;  // 0x428 (0x428)
	char pad_1096[8];  // 0x448 (0x448)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.DCAnimInstanceBase.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.DCAnimInstanceBase.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.DCAnimInstanceBase.TerminateBase
	struct AActor* GetOriginActor(); // Function DungeonCrawler.DCAnimInstanceBase.GetOriginActor
	void EventMontageStarted(struct UAnimMontage* InMontage); // Function DungeonCrawler.DCAnimInstanceBase.EventMontageStarted
	void EventAllMontageInstancesEnded(); // Function DungeonCrawler.DCAnimInstanceBase.EventAllMontageInstancesEnded
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.DCAnimInstanceBase.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.DCMetaGameMode
// Size: 0x3A0(Inherited: 0x3A0)
struct ADCMetaGameMode : ADCGameModeBase
{


}; 
 
 


// Class DungeonCrawler.DCGATA_AimTraceSphereOnServer
// Size: 0x3F0(Inherited: 0x3F0)
struct ADCGATA_AimTraceSphereOnServer : ADCGATA_AimTraceWithSphere
{


}; 
 
 


// Class DungeonCrawler.DCCharacterAnimInstanceBase
// Size: 0x4E0(Inherited: 0x450)
struct UDCCharacterAnimInstanceBase : UDCAnimInstanceBase
{
	float NativeYaw;  // 0x448 (0x448)
	float NativePitch;  // 0x44C (0x44C)
	char pad_1112_1 : 7;  // 0x458 (0x458)
	bool bIsFlying : 1;  // 0x450 (0x450)
	char pad_1113_1 : 7;  // 0x459 (0x459)
	bool bIsFalling : 1;  // 0x451 (0x451)
	char pad_1114_1 : 7;  // 0x45A (0x45A)
	bool bIsCrouching : 1;  // 0x452 (0x452)
	char pad_1115_1 : 7;  // 0x45B (0x45B)
	bool bIsDead : 1;  // 0x453 (0x453)
	struct FVector HitDirection;  // 0x458 (0x458)
	char pad_1140_1 : 7;  // 0x474 (0x474)
	bool bShouldTransitionToHit : 1;  // 0x470 (0x470)
	char pad_1141_1 : 7;  // 0x475 (0x475)
	bool bShouldTransitionToHitReactionFlipFlop : 1;  // 0x471 (0x471)
	struct FName HitReactionStateMachineName;  // 0x474 (0x474)
	struct FName HitReactionStateName;  // 0x47C (0x47C)
	struct FName HitReactionFlipFlopStateName;  // 0x484 (0x484)
	char pad_1166[82];  // 0x48E (0x48E)


}; 
 
 


// Class DungeonCrawler.InjectionItemSelectedPropertyWidgetBase
// Size: 0x2E8(Inherited: 0x2A0)
struct UInjectionItemSelectedPropertyWidgetBase : UCommonUserWidget
{
	char pad_672[16];  // 0x2A0 (0x2A0)
	struct UEditableText* EditableText;  // 0x2B0 (0x2B0)
	struct FText ItemPropertyType;  // 0x2B8 (0x2B8)
	int32_t PropertyValue;  // 0x2D0 (0x2D0)
	char pad_724[20];  // 0x2D4 (0x2D4)


	void OnSelectedPropertyValueChanged__DelegateSignature(struct FPrimaryAssetId& PropertyTypeAssetId, int32_t PropertyValue); // DelegateFunction DungeonCrawler.InjectionItemSelectedPropertyWidgetBase.OnSelectedPropertyValueChanged__DelegateSignature
	void OnPropertyValueSet(struct FText& Text, enum class ETextCommit CommitMethod); // Function DungeonCrawler.InjectionItemSelectedPropertyWidgetBase.OnPropertyValueSet
	void OnPropertyValueChanged(struct FText& Text); // Function DungeonCrawler.InjectionItemSelectedPropertyWidgetBase.OnPropertyValueChanged
}; 
 
 


// Class DungeonCrawler.DCAnimInstanceV2
// Size: 0x3A0(Inherited: 0x350)
struct UDCAnimInstanceV2 : UAnimInstance
{
	struct TMap<struct FDCPlayerCharacterKey, struct UAnimSequence*> IdleAnims;  // 0x348 (0x348)


	struct UAnimSequence* GetIdleAnim(); // Function DungeonCrawler.DCAnimInstanceV2.GetIdleAnim
}; 
 
 


// Class DungeonCrawler.DesignDataAssetMerchantSchedule
// Size: 0x40(Inherited: 0x38)
struct UDesignDataAssetMerchantSchedule : UDCDesignDataAssetBase
{
	struct FDesignDataMerchantSchedule Item;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


}; 
 
 


// Class DungeonCrawler.DCAnimNotify_SendGameplayEventTagToSelf
// Size: 0x40(Inherited: 0x38)
struct UDCAnimNotify_SendGameplayEventTagToSelf : UAnimNotify
{
	struct FGameplayTag EventTag;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCAT_WaitTargetGameplayTagEvent
// Size: 0xE0(Inherited: 0x80)
struct UDCAT_WaitTargetGameplayTagEvent : UAbilityTask
{
	struct FMulticastInlineDelegate Added;  // 0x80 (0x80)
	struct FMulticastInlineDelegate OnCountChanged;  // 0x90 (0x90)
	struct FMulticastInlineDelegate Removed;  // 0xA0 (0xA0)
	char pad_176[16];  // 0xB0 (0xB0)
	struct UAbilitySystemComponent* OptionalExternalTarget;  // 0xC0 (0xC0)
	char pad_200[24];  // 0xC8 (0xC8)


	struct UDCAT_WaitTargetGameplayTagEvent* WaitTargetGameplayTagEvent(struct UGameplayAbility* OwningAbility, struct FGameplayTag InTargetTag, struct AActor* InOptionalExternalTarget); // Function DungeonCrawler.DCAT_WaitTargetGameplayTagEvent.WaitTargetGameplayTagEvent
}; 
 
 


// Class DungeonCrawler.DCAnimNotify_MontageJumpToSectionOnSourceObject
// Size: 0x40(Inherited: 0x38)
struct UDCAnimNotify_MontageJumpToSectionOnSourceObject : UAnimNotify
{
	struct FName SectionName;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCAnimNotify_SoundEvent
// Size: 0x48(Inherited: 0x38)
struct UDCAnimNotify_SoundEvent : UAnimNotify
{
	struct FGameplayTag EventTag;  // 0x38 (0x38)
	struct UAkAudioEvent* DefaultAkEvent;  // 0x40 (0x40)


}; 
 
 


// Class DungeonCrawler.DCPlayerPoint
// Size: 0x2F0(Inherited: 0x2C0)
struct ADCPlayerPoint : APlayerStart
{
	float SpawningDistance;  // 0x2C0 (0x2C0)
	float SpawnTickAngle;  // 0x2C4 (0x2C4)
	char pad_712[16];  // 0x2C8 (0x2C8)
	float SpawnAngle;  // 0x2D8 (0x2D8)
	char pad_732[20];  // 0x2DC (0x2DC)


}; 
 
 


// Class DungeonCrawler.DCGameplayEffectDataAsset
// Size: 0x260(Inherited: 0x38)
struct UDCGameplayEffectDataAsset : UDCTableDataAsset
{
	UGameplayEffect* EffectClass;  // 0x38 (0x38)
	struct FGameplayTag EventTag;  // 0x40 (0x40)
	uint8_t TargetType;  // 0x48 (0x48)
	char pad_73[3];  // 0x49 (0x49)
	int32_t Duration;  // 0x4C (0x4C)
	int32_t StrengthBase;  // 0x50 (0x50)
	int32_t StrengthMod;  // 0x54 (0x54)
	int32_t AgilityBase;  // 0x58 (0x58)
	int32_t AgilityMod;  // 0x5C (0x5C)
	int32_t WillBase;  // 0x60 (0x60)
	int32_t WillMod;  // 0x64 (0x64)
	int32_t KnowledgeBase;  // 0x68 (0x68)
	int32_t KnowledgeMod;  // 0x6C (0x6C)
	int32_t ResourcefulnessBase;  // 0x70 (0x70)
	int32_t ResourcefulnessMod;  // 0x74 (0x74)
	int32_t ExecDamageWeaponRatio;  // 0x78 (0x78)
	int32_t PhysicalDamageWeapon;  // 0x7C (0x7C)
	int32_t PhysicalDamageBase;  // 0x80 (0x80)
	int32_t ExecPhysicalDamageBase;  // 0x84 (0x84)
	int32_t PhysicalPower;  // 0x88 (0x88)
	int32_t PhysicalDamageMod;  // 0x8C (0x8C)
	int32_t PhysicalDamageAdd;  // 0x90 (0x90)
	int32_t PhysicalDamageTrue;  // 0x94 ([x94)
	int32_t ExecPhysicalDamageTrue;  // 000534071] ited: 0x38)
 (000534071] ited: 0x38)
)
	int32_t PhysicalBackstabPower;  // 0x9C (0x9C)
	int32_t PhysicalHeadshotPower;  // 0xA0 (0xA0)
	int32_t PhysicalHeadshotPenetration;  // 0xA4 (0xA4)
	int32_t ArmorPenetration;  // 0xA8 (0xA8)
	int32_t ExecArmorPenetration;  // 0xAC (0xAC)
	int32_t ArmorRating;  // 0xB0 (0xB0)
	int32_t ItemArmorRatingMod;  // 0xB4 (0xB4)
	int32_t PhysicalReduction;  // 0xB8 (0xB8)
	int32_t PhysicalReductionMod;  // 0xBC (0xBC)
	int32_t PhysicalAbsoluteReduction;  // 0xC0 (0xC0)
	int32_t MagicalDamageWeapon;  // 0xC4 (0xC4)
	int32_t MagicalDamageBase;  // 0xC8 (0xC8)
	int32_t ExecMagicalDamageBase;  // 0xCC (0xCC)
	int32_t MagicalPower;  // 0xD0 (0xD0)
	int32_t MagicalDamageMod;  // 0xD4 (0xD4)
	int32_t MagicalDamageAdd;  // 0xD8 (0xD8)
	int32_t MagicalDamageTrue;  // 0xDC (0xDC)
	int32_t ExecMagicalDamageTrue;  // 0xE0 (0xE0)
	int32_t MagicPenetration;  // 0xE4 (0xE4)
	int32_t ExecMagicPenetration;  // 0xE8 (0xE8)
	int32_t MagicalFireDamageBase;  // 0xEC (0xEC)
	int32_t MagicalFireDamageMod;  // 0xF0 (0xF0)
	int32_t MagicalFireDamageAdd;  // 0xF4 (0xF4)
	int32_t MagicalArcaneDamageBase;  // 0xF8 (0xF8)
	int32_t MagicalArcaneDamageMod;  // 0xFC (0xFC)
	int32_t MagicalArcaneDamageAdd;  // 0x100 (0x100)
	int32_t MagicalDarkDamageBase;  // 0x104 (0x104)
	int32_t MagicalDarkDamageMod;  // 0x108 (0x108)
	int32_t MagicalDarkDamageAdd;  // 0x10C (0x10C)
	int32_t MagicResistance;  // 0x110 (0x110)
	int32_t MagicalReduction;  // 0x114 (0x114)
	int32_t MagicalReductionMod;  // 0x118 (0x118)
	int32_t MagicalAbsoluteReduction;  // 0x11C (0x11C)
	int32_t FireMagicResistance;  // 0x120 (0x120)
	int32_t FireMagicalReduction;  // 0x124 (0x124)
	int32_t FireMagicalReductionMod;  // 0x128 (0x128)
	int32_t WaterMagicResistance;  // 0x12C (0x12C)
	int32_t WaterMagicalReduction;  // 0x130 (0x130)
	int32_t WaterMagicalReductionMod;  // 0x134 (0x134)
	int32_t LightningMagicResistance;  // 0x138 (0x138)
	int32_t LightningMagicalReduction;  // 0x13C (0x13C)
	int32_t LightningMagicalReductionMod;  // 0x140 (0x140)
	int32_t EarthMagicResistance;  // 0x144 (0x144)
	int32_t EarthMagicalReduction;  // 0x148 (0x148)
	int32_t EarthMagicalReductionMod;  // 0x14C (0x14C)
	int32_t LightMagicResistance;  // 0x150 (0x150)
	int32_t LightMagicalReduction;  // 0x154 (0x154)
	int32_t LightMagicalReductionMod;  // 0x158 (0x158)
	int32_t DarkMagicResistance;  // 0x15C (0x15C)
	int32_t DarkMagicalReduction;  // 0x160 (0x160)
	int32_t DarkMagicalReductionMod;  // 0x164 (0x164)
	int32_t ArcaneMagicResistance;  // 0x168 (0x168)
	int32_t ArcaneMagicalReduction;  // 0x16C (0x16C)
	int32_t ArcaneMagicalReductionMod;  // 0x170 (0x170)
	int32_t DivineMagicResistance;  // 0x174 (0x174)
	int32_t DivineMagicalReduction;  // 0x178 (0x178)
	int32_t DivineMagicalReductionMod;  // 0x17C (0x17C)
	int32_t EvilMagicResistance;  // 0x180 (0x180)
	int32_t EvilMagicalReduction;  // 0x184 (0x184)
	int32_t EvilMagicalReductionMod;  // 0x188 (0x188)
	int32_t AirMagicResistance;  // 0x18C (0x18C)
	int32_t AirMagicalReduction;  // 0x190 (0x190)
	int32_t AirMagicalReductionMod;  // 0x194 (0x194)
	int32_t SpiritMagicResistance;  // 0x198 (0x198)
	int32_t SpiritMagicalReduction;  // 0x19C (0x19C)
	int32_t SpiritMagicalReductionMod;  // 0x1A0 (0x1A0)
	int32_t HeadshotReductionMod;  // 0x1A4 (0x1A4)
	int32_t ProjectileReductionMod;  // 0x1A8 (0x1A8)
	int32_t ImpactPower;  // 0x1AC (0x1AC)
	int32_t ExecImpactPower;  // 0x1B0 (0x1B0)
	int32_t ExecImpactEnduranceRestore;  // 0x1B4 (0x1B4)
	int32_t ImpactResistance;  // 0x1B8 (0x1B8)
	int32_t MaxImpactEndurance;  // 0x1BC (0x1BC)
	int32_t ExecAddHealthByCurHealthRatio;  // 0x1C0 (0x1C0)
	int32_t ExecAddHealthByMaxHealthRatio;  // 0x1C4 (0x1C4)
	int32_t PhysicalHealBase;  // 0x1C8 (0x1C8)
	int32_t ExecPhysicalHealBase;  // 0x1CC (0x1CC)
	int32_t PhysicalHealMod;  // 0x1D0 (0x1D0)
	int32_t MagicalHealBase;  // 0x1D4 (0x1D4)
	int32_t ExecMagicalHealBase;  // 0x1D8 (0x1D8)
	int32_t MagicalHealMod;  // 0x1DC (0x1DC)
	int32_t ExecRecoveryHealBase;  // 0x1E0 (0x1E0)
	int32_t MaxHealthMod;  // 0x1E4 (0x1E4)
	int32_t MaxHealthAdd;  // 0x1E8 (0x1E8)
	int32_t AddtionalAggroMod;  // 0x1EC (0x1EC)
	int32_t MaxPhysicalShield;  // 0x1F0 (0x1F0)
	int32_t MaxMagicalShield;  // 0x1F4 (0x1F4)
	int32_t MaxTotalShield;  // 0x1F8 (0x1F8)
	int32_t SpellCapacityMod;  // 0x1FC (0x1FC)
	int32_t SpellCapacityAdd;  // 0x200 (0x200)
	int32_t MoveSpeedBase;  // 0x204 (0x204)
	int32_t MoveSpeedMod;  // 0x208 (0x208)
	int32_t MoveSpeedAdd;  // 0x20C (0x20C)
	int32_t MoveSpeedArmorPenaltyMod;  // 0x210 (0x210)
	int32_t ActionSpeed;  // 0x214 (0x214)
	int32_t SpellCastingSpeed;  // 0x218 (0x218)
	int32_t ItemEquipSpeed;  // 0x21C (0x21C)
	int32_t RegularInteractionSpeed;  // 0x220 (0x220)
	int32_t MagicalInteractionSpeed;  // 0x224 (0x224)
	int32_t BuffDurationMod;  // 0x228 (0x228)
	int32_t DebuffDurationMod;  // 0x22C (0x22C)
	int32_t UtilityEffectivenessMod;  // 0x230 (0x230)
	int32_t UtilityEffectivenessAdd;  // 0x234 (0x234)
	int32_t WeightLimitMod;  // 0x238 (0x238)
	int32_t WeightLimitAdd;  // 0x23C (0x23C)
	int32_t Luck;  // 0x240 (0x240)
	int32_t ExecAttributeBonusRatio;  // 0x244 (0x244)
	int32_t ExecHealthCost;  // 0x248 (0x248)
	char pad_588[4];  // 0x24C (0x24C)
	struct TArray<struct FGameplayTag> Tags;  // 0x250 (0x250)


}; 
 
 


// Class DungeonCrawler.DCAnimNotify_UnHideEquippedWeapons
// Size: 0x38(Inherited: 0x38)
struct UDCAnimNotify_UnHideEquippedWeapons : UAnimNotify
{


}; 
 
 


// Class DungeonCrawler.MetaPlayComponent
// Size: 0x170(Inherited: 0x100)
struct UMetaPlayComponent : UMetaComponentBase
{
	char pad_256[32];  // 0x100 (0x100)
	struct TMap<uint8_t, struct ADCCharacterLobbyCapture*> CharacterLobbyCaptureMap;  // 0x120 (0x120)


	void OnRecruitBegin(); // Function DungeonCrawler.MetaPlayComponent.OnRecruitBegin
}; 
 
 


// Class DungeonCrawler.DCAnimNotify_SendGameplayEventTagsToSelf
// Size: 0x48(Inherited: 0x30)
struct UDCAnimNotify_SendGameplayEventTagsToSelf : UAnimNotifyState
{
	struct FGameplayTag BeginEventTag;  // 0x30 (0x30)
	struct FGameplayTag EndEventTag;  // 0x38 (0x38)
	struct FGameplayTag EventTag;  // 0x40 (0x40)


}; 
 
 


// Class DungeonCrawler.GamePartyWidget
// Size: 0x340(Inherited: 0x300)
struct UGamePartyWidget : UDCWidgetBase
{
	struct UHorizontalBox* PartyMemberWidgetRow;  // 0x300 (0x300)
	UGamePartyMemberWidget* PartyMemberWidgetClass;  // 0x308 (0x308)
	struct TArray<struct UGamePartyMemberWidget*> PartyMemberWidgets;  // 0x310 (0x310)
	struct FDCAccountId TargetAccountId;  // 0x320 (0x320)
	struct FDCPartyId TargetPartyId;  // 0x330 (0x330)


}; 
 
 


// Class DungeonCrawler.DCAnimNotify_TimedNiagaraEffect
// Size: 0x228(Inherited: 0xE8)
struct UDCAnimNotify_TimedNiagaraEffect : UAnimNotifyState_TimedNiagaraEffectAdvanced
{
	struct TMap<struct FName, float> ParameterFloatValues;  // 0xE8 (0xE8)
	struct TMap<struct FName, int32_t> ParameterIntValues;  // 0x138 (0x138)
	struct TMap<struct FName, struct FColor> ParameterColorValues;  // 0x188 (0x188)
	struct TMap<struct FName, struct FVector> ParameterVectorValues;  // 0x1D8 (0x1D8)


}; 
 
 


// Class DungeonCrawler.DCAnimNotify_ForceClientVisibilityBasedAnimTickOption
// Size: 0x38(Inherited: 0x30)
struct UDCAnimNotify_ForceClientVisibilityBasedAnimTickOption : UAnimNotifyState
{
	uint8_t VisibilityBasedAnimTickOption;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 


// Class DungeonCrawler.DCHudWidgetBase
// Size: 0x300(Inherited: 0x300)
struct UDCHudWidgetBase : UDCWidgetBase
{


}; 
 
 


// Class DungeonCrawler.DCSkeletalMeshComponent
// Size: 0xFE0(Inherited: 0xF80)
struct UDCSkeletalMeshComponent : USkeletalMeshComponent
{
	char pad_3968[96];  // 0xF80 (0xF80)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.DCSkeletalMeshComponent.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.DCSkeletalMeshComponent.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.DCSkeletalMeshComponent.TerminateBase
	void SetAffectNavigation(bool bRelevant); // Function DungeonCrawler.DCSkeletalMeshComponent.SetAffectNavigation
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.DCSkeletalMeshComponent.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.DCIngameGameSession
// Size: 0x3F0(Inherited: 0x3F0)
struct ADCIngameGameSession : ADCGameSession
{


}; 
 
 


// Class DungeonCrawler.DCAoeAIControllerBase
// Size: 0x418(Inherited: 0x3B8)
struct ADCAoeAIControllerBase : AAIController
{
	char pad_952[88];  // 0x3B8 (0x3B8)
	struct UBaseObject* BaseObject;  // 0x410 (0x410)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.DCAoeAIControllerBase.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.DCAoeAIControllerBase.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.DCAoeAIControllerBase.TerminateBase
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.DCAoeAIControllerBase.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.DCAoeBase
// Size: 0x6B0(Inherited: 0x620)
struct ADCAoeBase : ACharacter
{
	char pad_1568[96];  // 0x620 (0x620)
	struct UBaseObject* BaseObject;  // 0x680 (0x680)
	char pad_1672[8];  // 0x688 (0x688)
	struct UDCAoeDataAsset* AoeDataAsset;  // 0x690 (0x690)
	char pad_1688_1 : 7;  // 0x698 (0x698)
	bool IsDestroyedWhenOwnerDie : 1;  // 0x698 (0x698)
	char pad_1689_1 : 7;  // 0x699 (0x699)
	bool ApplyContinuosDamage : 1;  // 0x699 (0x699)
	char pad_1690[6];  // 0x69A (0x69A)
	struct TArray<struct TWeakObjectPtr<ADCCharacterBase>> TargetArray;  // 0x6A0 (0x6A0)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.DCAoeBase.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.DCAoeBase.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.DCAoeBase.TerminateBase
	void RemoveEndOverlapActor(struct ADCCharacterBase* CharacterBase); // Function DungeonCrawler.DCAoeBase.RemoveEndOverlapActor
	void OnSetAI(); // Function DungeonCrawler.DCAoeBase.OnSetAI
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.DCAoeBase.BroadcastMsgBlueprint
	void AddBeginOverlapActor(struct ADCCharacterBase* CharacterBase); // Function DungeonCrawler.DCAoeBase.AddBeginOverlapActor
}; 
 
 


// Class DungeonCrawler.DCAoeDataAsset
// Size: 0xD0(Inherited: 0x38)
struct UDCAoeDataAsset : UDCTableDataAsset
{
	struct FText Name;  // 0x38 (0x38)
	struct TSoftObjectPtr<UArtDataAoe> ArtData;  // 0x50 (0x50)
	struct TSoftObjectPtr<USoundData> SoundData;  // 0x80 (0x80)
	struct TArray<struct TSoftObjectPtr<UDCGameplayAbilityDataAsset>> Abilities;  // 0xB0 (0xB0)
	struct TArray<struct TSoftObjectPtr<UDCGameplayEffectDataAsset>> Effects;  // 0xC0 (0xC0)


}; 
 
 


// Class DungeonCrawler.GameMenuOptionsVideoWidget
// Size: 0x4F8(Inherited: 0x440)
struct UGameMenuOptionsVideoWidget : UDCCommonActivatableWidgetBase
{
	struct UGameMenuOptionSlotWidget* WB_ShadowQuality;  // 0x440 (0x440)
	struct UGameMenuOptionSlotWidget* WB_TextureQuality;  // 0x448 (0x448)
	struct UGameMenuOptionSlotWidget* WB_PostProcessQuality;  // 0x450 (0x450)
	struct UGameMenuOptionSlotWidget* WB_EffectsQuality;  // 0x458 (0x458)
	struct UGameMenuOptionComboBoxWidget* WB_DisplayMode;  // 0x460 (0x460)
	struct UGameMenuOptionComboBoxWidget* WB_DisplayResolution;  // 0x468 (0x468)
	struct UGameMenuOptionSliderWidget* WB_MaxFrameRateLimit;  // 0x470 (0x470)
	struct UGameMenuOptionSliderWidget* WB_MaxFrameRateLimitMeta;  // 0x478 (0x478)
	struct UGameMenuOptionSliderWidget* WB_Brightness;  // 0x480 (0x480)
	struct UGameMenuOptionSlotWidget* WB_AntiAliasingSuperResolution;  // 0x488 (0x488)
	struct UWidgetSwitcher* AntiAliasingSuperResolutionSwitcher;  // 0x490 (0x490)
	struct UGameMenuOptionSliderWidget* WB_RenderScale;  // 0x498 (0x498)
	struct UGameMenuOptionSlotWidget* WB_SuperResolutionModeTSR;  // 0x4A0 (0x4A0)
	struct UGameMenuOptionSlotWidget* WB_SuperResolutionModeDLSS;  // 0x4A8 (0x4A8)
	struct UGameMenuOptionSlotWidget* WB_SuperResolutionModeFSR2;  // 0x4B0 (0x4B0)
	struct UGameMenuOptionSlotWidget* WB_SuperResolutionModeXeSS;  // 0x4B8 (0x4B8)
	struct FDataTableRowHandle ApplyInputActionData;  // 0x4C0 (0x4C0)
	char pad_1232[8];  // 0x4D0 (0x4D0)
	struct FDataTableRowHandle ResetInputActionData;  // 0x4D8 (0x4D8)
	char pad_1256[16];  // 0x4E8 (0x4E8)


	void UpdateDisplayMode(); // Function DungeonCrawler.GameMenuOptionsVideoWidget.UpdateDisplayMode
	void UpdateAntiAliasingSuperResolution(int32_t InSlotIdx); // Function DungeonCrawler.GameMenuOptionsVideoWidget.UpdateAntiAliasingSuperResolution
	void OnRevertDisplayOption(); // Function DungeonCrawler.GameMenuOptionsVideoWidget.OnRevertDisplayOption
	void OnResetButtonClicked(); // Function DungeonCrawler.GameMenuOptionsVideoWidget.OnResetButtonClicked
	void OnDisplayOptionChangePopup(); // Function DungeonCrawler.GameMenuOptionsVideoWidget.OnDisplayOptionChangePopup
	void OnBrightnessChanged(); // Function DungeonCrawler.GameMenuOptionsVideoWidget.OnBrightnessChanged
	void OnApplyDisplayOption(); // Function DungeonCrawler.GameMenuOptionsVideoWidget.OnApplyDisplayOption
	void OnApplyButtonClicked(); // Function DungeonCrawler.GameMenuOptionsVideoWidget.OnApplyButtonClicked
}; 
 
 


// Class DungeonCrawler.DCAT_WaitTargetData
// Size: 0xC0(Inherited: 0xC0)
struct UDCAT_WaitTargetData : UAbilityTask_WaitTargetData
{


	struct UDCAT_WaitTargetData* DCWaitTargetData(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, struct AGameplayAbilityTargetActor* InTargetActor); // Function DungeonCrawler.DCAT_WaitTargetData.DCWaitTargetData
}; 
 
 


// Class DungeonCrawler.DCGameModeBase
// Size: 0x3A0(Inherited: 0x330)
struct ADCGameModeBase : AGameModeBase
{
	char pad_816[88];  // 0x330 (0x330)
	struct UBaseObject* BaseObject;  // 0x388 (0x388)
	ADCGameModeAIControllerBase* GameModeAIControllerClass;  // 0x390 (0x390)
	struct ADCGameModeAIControllerBase* GameModeAIController;  // 0x398 (0x398)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.DCGameModeBase.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.DCGameModeBase.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.DCGameModeBase.TerminateBase
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.DCGameModeBase.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.GameSpellCastingBarWidget
// Size: 0x320(Inherited: 0x300)
struct UGameSpellCastingBarWidget : UDCShowingKeyWidgetBase
{
	struct UTextBlock* CastingText;  // 0x300 (0x300)
	struct UProgressBar* CastingGauge;  // 0x308 (0x308)
	char pad_784[16];  // 0x310 (0x310)


	void OnSpellChannelingStart(); // Function DungeonCrawler.GameSpellCastingBarWidget.OnSpellChannelingStart
	void OnSpellChannelingEnd(); // Function DungeonCrawler.GameSpellCastingBarWidget.OnSpellChannelingEnd
	void OnSpellCastSucceed(); // Function DungeonCrawler.GameSpellCastingBarWidget.OnSpellCastSucceed
	void OnSpellCastStart(); // Function DungeonCrawler.GameSpellCastingBarWidget.OnSpellCastStart
	void OnSpellCastEnd(); // Function DungeonCrawler.GameSpellCastingBarWidget.OnSpellCastEnd
}; 
 
 


// Class DungeonCrawler.DCIngameGameMode
// Size: 0x4C8(Inherited: 0x3A0)
struct ADCIngameGameMode : ADCGameModeBase
{
	char pad_928[112];  // 0x3A0 (0x3A0)
	struct TArray<struct ADCPlayerStart*> StartPoints;  // 0x410 (0x410)
	char pad_1056[168];  // 0x420 (0x420)


}; 
 
 


// Class DungeonCrawler.DCMerchantListPageWidget
// Size: 0x478(Inherited: 0x470)
struct UDCMerchantListPageWidget : ULobbyGroupWidgetBase
{
	struct UTileView* TileView;  // 0x470 (0x470)


	void OnSetCompletedTileView(); // Function DungeonCrawler.DCMerchantListPageWidget.OnSetCompletedTileView
}; 
 
 


// Class DungeonCrawler.DCAssetManager
// Size: 0x588(Inherited: 0x4E8)
struct UDCAssetManager : UAssetManager
{
	struct TMap<struct FPrimaryAssetId, struct FLoadPrimaryAssetData> LoadPrimaryAssetDataMap;  // 0x4E8 (0x4E8)
	struct TMap<struct FPrimaryAssetType, struct FLoadPrimaryAssetType> LoadPrimaryAssetTypeMap;  // 0x538 (0x538)


}; 
 
 


// Class DungeonCrawler.DCCharacterLobbyCaptureMine
// Size: 0x840(Inherited: 0x840)
struct ADCCharacterLobbyCaptureMine : ADCCharacterLobbyCapture
{


}; 
 
 


// Class DungeonCrawler.DCAttributeModMagnitudeCalculationKnowledge
// Size: 0xC0(Inherited: 0x40)
struct UDCAttributeModMagnitudeCalculationKnowledge : UGameplayModMagnitudeCalculation
{
	char pad_64[128];  // 0x40 (0x40)


}; 
 
 


// Class DungeonCrawler.DCAttributeModMagnitudeCalculationResourcefulness
// Size: 0xC0(Inherited: 0x40)
struct UDCAttributeModMagnitudeCalculationResourcefulness : UGameplayModMagnitudeCalculation
{
	char pad_64[128];  // 0x40 (0x40)


}; 
 
 


// Class DungeonCrawler.DCAttributeModMagnitudeCalculationRegularInteractionSpeedBase
// Size: 0xC0(Inherited: 0x40)
struct UDCAttributeModMagnitudeCalculationRegularInteractionSpeedBase : UGameplayModMagnitudeCalculation
{
	char pad_64[128];  // 0x40 (0x40)


}; 
 
 


// Class DungeonCrawler.DCGameModeAIControllerArenaBase
// Size: 0x430(Inherited: 0x430)
struct ADCGameModeAIControllerArenaBase : ADCGameModeAIControllerGameBase
{


}; 
 
 


// Class DungeonCrawler.DCItemInfoEntryWidget
// Size: 0x508(Inherited: 0x500)
struct UDCItemInfoEntryWidget : UDCItemCommonWidget
{
	char pad_1280[8];  // 0x500 (0x500)


}; 
 
 


// Class DungeonCrawler.LobbyWidget
// Size: 0x458(Inherited: 0x440)
struct ULobbyWidget : UDCCommonActivatableWidgetBase
{
	struct FDataTableRowHandle BackInputActionData;  // 0x440 (0x440)
	char pad_1104[8];  // 0x450 (0x450)


	void OnPlayPartyReadyStateChanged(bool bMine, bool bLeader, bool bReady); // Function DungeonCrawler.LobbyWidget.OnPlayPartyReadyStateChanged
	void OnMatchingStateChanged(bool bMatching); // Function DungeonCrawler.LobbyWidget.OnMatchingStateChanged
	void OnLobbySystemMessage(struct FText& AnnounceText); // Function DungeonCrawler.LobbyWidget.OnLobbySystemMessage
	void OnBackButtonClicked(); // Function DungeonCrawler.LobbyWidget.OnBackButtonClicked
}; 
 
 


// Class DungeonCrawler.DCAttributeModMagnitudeCalculationUtilityEffectiveness
// Size: 0x100(Inherited: 0x40)
struct UDCAttributeModMagnitudeCalculationUtilityEffectiveness : UGameplayModMagnitudeCalculation
{
	char pad_64[192];  // 0x40 (0x40)


}; 
 
 


// Class DungeonCrawler.DCPreLobbyHUD
// Size: 0x3A0(Inherited: 0x390)
struct ADCPreLobbyHUD : ADCHUD
{
	ADCCaptureStudioActor* LobbyCreateStudioActorClass;  // 0x390 (0x390)
	struct ADCCaptureStudioActor* LobbyCreateStudioActor;  // 0x398 (0x398)


}; 
 
 


// Class DungeonCrawler.DCAttributeModMagnitudeCalculationWeightLimit
// Size: 0x100(Inherited: 0x40)
struct UDCAttributeModMagnitudeCalculationWeightLimit : UGameplayModMagnitudeCalculation
{
	char pad_64[192];  // 0x40 (0x40)


}; 
 
 


// Class DungeonCrawler.DCAttributeModMagnitudeCalculationPerkBerSerker
// Size: 0xC0(Inherited: 0x40)
struct UDCAttributeModMagnitudeCalculationPerkBerSerker : UGameplayModMagnitudeCalculation
{
	char pad_64[128];  // 0x40 (0x40)


}; 
 
 


// Class DungeonCrawler.DCAttributeSet
// Size: 0x8E0(Inherited: 0x30)
struct UDCAttributeSet : UAttributeSet
{
	struct FGameplayAttributeData Strength;  // 0x30 (0x30)
	struct FGameplayAttributeData StrengthBase;  // 0x40 (0x40)
	struct FGameplayAttributeData StrengthMod;  // 0x50 (0x50)
	struct FGameplayAttributeData Agility;  // 0x60 (0x60)
	struct FGameplayAttributeData AgilityBase;  // 0x70 (0x70)
	struct FGameplayAttributeData AgilityMod;  // 0x80 (0x80)
	struct FGameplayAttributeData Will;  // 0x90 (0x90)
	struct FGameplayAttributeData WillBase;  // 0xA0 (0xA0)
	struct FGameplayAttributeData WillMod;  // 0xB0 (0xB0)
	struct FGameplayAttributeData Knowledge;  // 0xC0 (0xC0)
	struct FGameplayAttributeData KnowledgeBase;  // 0xD0 (0xD0)
	struct FGameplayAttributeData KnowledgeMod;  // 0xE0 (0xE0)
	struct FGameplayAttributeData Resourcefulness;  // 0xF0 (0xF0)
	struct FGameplayAttributeData ResourcefulnessBase;  // 0x100 (0x100)
	struct FGameplayAttributeData ResourcefulnessMod;  // 0x110 (0x110)
	struct FGameplayAttributeData PhysicalDamageWeaponPrimary;  // 0x120 (0x120)
	struct FGameplayAttributeData PhysicalDamageWeaponSecondary;  // 0x130 (0x130)
	struct FGameplayAttributeData PhysicalDamageBase;  // 0x140 (0x140)
	struct FGameplayAttributeData PhysicalPower;  // 0x150 (0x150)
	struct FGameplayAttributeData PhysicalDamageMod;  // 0x160 (0x160)
	struct FGameplayAttributeData PhysicalDamageAdd;  // 0x170 (0x170)
	struct FGameplayAttributeData PhysicalDamageTrue;  // 0x180 (0x180)
	struct FGameplayAttributeData PhysicalBackstabPower;  // 0x190 (0x190)
	struct FGameplayAttributeData PhysicalHeadshotPower;  // 0x1A0 (0x1A0)
	struct FGameplayAttributeData PhysicalHeadshotPenetration;  // 0x1B0 (0x1B0)
	struct FGameplayAttributeData ArmorPenetration;  // 0x1C0 (0x1C0)
	struct FGameplayAttributeData ArmorRating;  // 0x1D0 (0x1D0)
	struct FGameplayAttributeData ItemArmorRating;  // 0x1E0 (0x1E0)
	struct FGameplayAttributeData ItemArmorRatingMod;  // 0x1F0 (0x1F0)
	struct FGameplayAttributeData PhysicalReduction;  // 0x200 (0x200)
	struct FGameplayAttributeData PhysicalReductionMod;  // 0x210 (0x210)
	struct FGameplayAttributeData PhysicalAbsoluteReduction;  // 0x220 (0x220)
	struct FGameplayAttributeData MagicalDamageWeaponPrimary;  // 0x230 (0x230)
	struct FGameplayAttributeData MagicalDamageWeaponSecondary;  // 0x240 (0x240)
	struct FGameplayAttributeData MagicalDamageBase;  // 0x250 (0x250)
	struct FGameplayAttributeData MagicalPower;  // 0x260 (0x260)
	struct FGameplayAttributeData MagicalDamageMod;  // 0x270 (0x270)
	struct FGameplayAttributeData MagicalDamageAdd;  // 0x280 (0x280)
	struct FGameplayAttributeData MagicalDamageTrue;  // 0x290 (0x290)
	struct FGameplayAttributeData MagicPenetration;  // 0x2A0 (0x2A0)
	struct FGameplayAttributeData MagicalFireDamageBase;  // 0x2B0 (0x2B0)
	struct FGameplayAttributeData MagicalFireDamageMod;  // 0x2C0 (0x2C0)
	struct FGameplayAttributeData MagicalFireDamageAdd;  // 0x2D0 (0x2D0)
	struct FGameplayAttributeData MagicalArcaneDamageBase;  // 0x2E0 (0x2E0)
	struct FGameplayAttributeData MagicalArcaneDamageMod;  // 0x2F0 (0x2F0)
	struct FGameplayAttributeData MagicalArcaneDamageAdd;  // 0x300 (0x300)
	struct FGameplayAttributeData MagicalDarkDamageBase;  // 0x310 (0x310)
	struct FGameplayAttributeData MagicalDarkDamageMod;  // 0x320 (0x320)
	struct FGameplayAttributeData MagicalDarkDamageAdd;  // 0x330 (0x330)
	struct FGameplayAttributeData MagicResistance;  // 0x340 (0x340)
	struct FGameplayAttributeData MagicalReduction;  // 0x350 (0x350)
	struct FGameplayAttributeData MagicalReductionMod;  // 0x360 (0x360)
	struct FGameplayAttributeData MagicalAbsoluteReduction;  // 0x370 (0x370)
	struct FGameplayAttributeData FireMagicResistance;  // 0x380 (0x380)
	struct FGameplayAttributeData FireMagicalReduction;  // 0x390 (0x390)
	struct FGameplayAttributeData FireMagicalReductionMod;  // 0x3A0 (0x3A0)
	struct FGameplayAttributeData WaterMagicResistance;  // 0x3B0 (0x3B0)
	struct FGameplayAttributeData WaterMagicalReduction;  // 0x3C0 (0x3C0)
	struct FGameplayAttributeData WaterMagicalReductionMod;  // 0x3D0 (0x3D0)
	struct FGameplayAttributeData LightningMagicResistance;  // 0x3E0 (0x3E0)
	struct FGameplayAttributeData LightningMagicalReduction;  // 0x3F0 (0x3F0)
	struct FGameplayAttributeData LightningMagicalReductionMod;  // 0x400 (0x400)
	struct FGameplayAttributeData EarthMagicResistance;  // 0x410 (0x410)
	struct FGameplayAttributeData EarthMagicalReduction;  // 0x420 (0x420)
	struct FGameplayAttributeData EarthMagicalReductionMod;  // 0x430 (0x430)
	struct FGameplayAttributeData LightMagicResistance;  // 0x440 (0x440)
	struct FGameplayAttributeData LightMagicalReduction;  // 0x450 (0x450)
	struct FGameplayAttributeData LightMagicalReductionMod;  // 0x460 (0x460)
	struct FGameplayAttributeData DarkMagicResistance;  // 0x470 (0x470)
	struct FGameplayAttributeData DarkMagicalReduction;  // 0x480 (0x480)
	struct FGameplayAttributeData DarkMagicalReductionMod;  // 0x490 (0x490)
	struct FGameplayAttributeData ArcaneMagicResistance;  // 0x4A0 (0x4A0)
	struct FGameplayAttributeData ArcaneMagicalReduction;  // 0x4B0 (0x4B0)
	struct FGameplayAttributeData ArcaneMagicalReductionMod;  // 0x4C0 (0x4C0)
	struct FGameplayAttributeData DivineMagicResistance;  // 0x4D0 (0x4D0)
	struct FGameplayAttributeData DivineMagicalReduction;  // 0x4E0 (0x4E0)
	struct FGameplayAttributeData DivineMagicalReductionMod;  // 0x4F0 (0x4F0)
	struct FGameplayAttributeData EvilMagicResistance;  // 0x500 (0x500)
	struct FGameplayAttributeData EvilMagicalReduction;  // 0x510 (0x510)
	struct FGameplayAttributeData EvilMagicalReductionMod;  // 0x520 (0x520)
	struct FGameplayAttributeData AirMagicResistance;  // 0x530 (0x530)
	struct FGameplayAttributeData AirMagicalReduction;  // 0x540 (0x540)
	struct FGameplayAttributeData AirMagicalReductionMod;  // 0x550 (0x550)
	struct FGameplayAttributeData SpiritMagicResistance;  // 0x560 (0x560)
	struct FGameplayAttributeData SpiritMagicalReduction;  // 0x570 (0x570)
	struct FGameplayAttributeData SpiritMagicalReductionMod;  // 0x580 (0x580)
	struct FGameplayAttributeData HeadshotReductionMod;  // 0x590 (0x590)
	struct FGameplayAttributeData ProjectileReductionMod;  // 0x5A0 (0x5A0)
	struct FGameplayAttributeData ImpactPower;  // 0x5B0 (0x5B0)
	struct FGameplayAttributeData ImpactResistance;  // 0x5C0 (0x5C0)
	struct FGameplayAttributeData ImpactEndurance;  // 0x5D0 (0x5D0)
	struct FGameplayAttributeData MaxImpactEndurance;  // 0x5E0 (0x5E0)
	char pad_1520[8];  // 0x5F0 (0x5F0)
	struct FGameplayAttributeData PhysicalHealBase;  // 0x5F8 (0x5F8)
	struct FGameplayAttributeData PhysicalHealMod;  // 0x608 (0x608)
	struct FGameplayAttributeData MagicalHealBase;  // 0x618 (0x618)
	struct FGameplayAttributeData MagicalHealMod;  // 0x628 (0x628)
	struct FGameplayAttributeData RecoverableHealth;  // 0x638 (0x638)
	struct FGameplayAttributeData Health;  // 0x648 (0x648)
	struct FGameplayAttributeData MaxHealth;  // 0x658 (0x658)
	char pad_1640[8];  // 0x668 (0x668)
	struct FGameplayAttributeData MaxHealthBase;  // 0x670 (0x670)
	struct FGameplayAttributeData MaxHealthMod;  // 0x680 (0x680)
	struct FGameplayAttributeData MaxHealthAdd;  // 0x690 (0x690)
	struct FGameplayAttributeData PhysicalShield;  // 0x6A0 (0x6A0)
	struct FGameplayAttributeData MaxPhysicalShield;  // 0x6B0 (0x6B0)
	struct FGameplayAttributeData MagicalShield;  // 0x6C0 (0x6C0)
	struct FGameplayAttributeData MaxMagicalShield;  // 0x6D0 (0x6D0)
	struct FGameplayAttributeData TotalShield;  // 0x6E0 (0x6E0)
	struct FGameplayAttributeData MaxTotalShield;  // 0x6F0 (0x6F0)
	struct FGameplayAttributeData SpellPayload;  // 0x700 (0x700)
	struct FGameplayAttributeData SpellCapacity;  // 0x710 (0x710)
	struct FGameplayAttributeData SpellCapacityBase;  // 0x720 (0x720)
	struct FGameplayAttributeData SpellCapacityMod;  // 0x730 (0x730)
	struct FGameplayAttributeData SpellCapacityAdd;  // 0x740 (0x740)
	struct FGameplayAttributeData MoveSpeed;  // 0x750 (0x750)
	struct FGameplayAttributeData MoveSpeedBase;  // 0x760 (0x760)
	struct FGameplayAttributeData MoveSpeedMod;  // 0x770 (0x770)
	struct FGameplayAttributeData MoveSpeedAdd;  // 0x780 (0x780)
	struct FGameplayAttributeData MoveSpeedArmorPenalty;  // 0x790 (0x790)
	struct FGameplayAttributeData MoveSpeedArmorPenaltyMod;  // 0x7A0 (0x7A0)
	struct FGameplayAttributeData MoveSpeedWithModifier;  // 0x7B0 (0x7B0)
	struct FGameplayAttributeData ActionSpeed;  // 0x7C0 (0x7C0)
	struct FGameplayAttributeData SpellCastingSpeed;  // 0x7D0 (0x7D0)
	struct FGameplayAttributeData ItemEquipSpeed;  // 0x7E0 (0x7E0)
	struct FGameplayAttributeData RegularInteractionSpeedBase;  // 0x7F0 (0x7F0)
	struct FGameplayAttributeData RegularInteractionSpeed;  // 0x800 (0x800)
	struct FGameplayAttributeData MagicalInteractionSpeed;  // 0x810 (0x810)
	struct FGameplayAttributeData BuffDurationMod;  // 0x820 (0x820)
	struct FGameplayAttributeData DebuffDurationMod;  // 0x830 (0x830)
	struct FGameplayAttributeData UtilityEffectiveness;  // 0x840 (0x840)
	struct FGameplayAttributeData UtilityEffectivenessBase;  // 0x850 (0x850)
	struct FGameplayAttributeData UtilityEffectivenessMod;  // 0x860 (0x860)
	struct FGameplayAttributeData UtilityEffectivenessAdd;  // 0x870 (0x870)
	struct FGameplayAttributeData Weight;  // 0x880 (0x880)
	struct FGameplayAttributeData WeightLimit;  // 0x890 (0x890)
	struct FGameplayAttributeData WeightLimitBase;  // 0x8A0 (0x8A0)
	struct FGameplayAttributeData WeightLimitMod;  // 0x8B0 (0x8B0)
	struct FGameplayAttributeData WeightLimitAdd;  // 0x8C0 (0x8C0)
	struct FGameplayAttributeData Luck;  // 0x8D0 (0x8D0)


	void OnRep_WillMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_WillMod
	void OnRep_WillBase(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_WillBase
	void OnRep_Will(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_Will
	void OnRep_WeightLimitMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_WeightLimitMod
	void OnRep_WeightLimitBase(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_WeightLimitBase
	void OnRep_WeightLimitAdd(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_WeightLimitAdd
	void OnRep_WeightLimit(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_WeightLimit
	void OnRep_Weight(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_Weight
	void OnRep_WaterMagicResistance(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_WaterMagicResistance
	void OnRep_WaterMagicalReductionMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_WaterMagicalReductionMod
	void OnRep_WaterMagicalReduction(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_WaterMagicalReduction
	void OnRep_UtilityEffectivenessMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_UtilityEffectivenessMod
	void OnRep_UtilityEffectivenessBase(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_UtilityEffectivenessBase
	void OnRep_UtilityEffectivenessAdd(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_UtilityEffectivenessAdd
	void OnRep_UtilityEffectiveness(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_UtilityEffectiveness
	void OnRep_TotalShield(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_TotalShield
	void OnRep_StrengthMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_StrengthMod
	void OnRep_StrengthBase(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_StrengthBase
	void OnRep_Strength(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_Strength
	void OnRep_SpiritMagicResistance(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_SpiritMagicResistance
	void OnRep_SpiritMagicalReductionMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_SpiritMagicalReductionMod
	void OnRep_SpiritMagicalReduction(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_SpiritMagicalReduction
	void OnRep_SpellPayload(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_SpellPayload
	void OnRep_SpellCastingSpeed(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_SpellCastingSpeed
	void OnRep_SpellCapacityMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_SpellCapacityMod
	void OnRep_SpellCapacityBase(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_SpellCapacityBase
	void OnRep_SpellCapacityAdd(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_SpellCapacityAdd
	void OnRep_SpellCapacity(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_SpellCapacity
	void OnRep_ResourcefulnessMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_ResourcefulnessMod
	void OnRep_ResourcefulnessBase(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_ResourcefulnessBase
	void OnRep_Resourcefulness(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_Resourcefulness
	void OnRep_RegularInteractionSpeedBase(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_RegularInteractionSpeedBase
	void OnRep_RegularInteractionSpeed(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_RegularInteractionSpeed
	void OnRep_RecoverableHealth(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_RecoverableHealth
	void OnRep_ProjectileReductionMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_ProjectileReductionMod
	void OnRep_PhysicalShield(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalShield
	void OnRep_PhysicalReductionMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalReductionMod
	void OnRep_PhysicalReduction(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalReduction
	void OnRep_PhysicalPower(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalPower
	void OnRep_PhysicalHealMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalHealMod
	void OnRep_PhysicalHealBase(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalHealBase
	void OnRep_PhysicalHeadshotPower(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalHeadshotPower
	void OnRep_PhysicalHeadshotPenetration(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalHeadshotPenetration
	void OnRep_PhysicalDamageWeaponSecondary(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalDamageWeaponSecondary
	void OnRep_PhysicalDamageWeaponPrimary(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalDamageWeaponPrimary
	void OnRep_PhysicalDamageTrue(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalDamageTrue
	void OnRep_PhysicalDamageMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalDamageMod
	void OnRep_PhysicalDamageBase(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalDamageBase
	void OnRep_PhysicalDamageAdd(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalDamageAdd
	void OnRep_PhysicalBackstabPower(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalBackstabPower
	void OnRep_PhysicalAbsoluteReduction(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalAbsoluteReduction
	void OnRep_MoveSpeedWithModifier(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeedWithModifier
	void OnRep_MoveSpeedMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeedMod
	void OnRep_MoveSpeedBase(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeedBase
	void OnRep_MoveSpeedArmorPenaltyMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeedArmorPenaltyMod
	void OnRep_MoveSpeedArmorPenalty(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeedArmorPenalty
	void OnRep_MoveSpeedAdd(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeedAdd
	void OnRep_MoveSpeed(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeed
	void OnRep_MaxTotalShield(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MaxTotalShield
	void OnRep_MaxPhysicalShield(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MaxPhysicalShield
	void OnRep_MaxMagicalShield(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MaxMagicalShield
	void OnRep_MaxImpactEndurance(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MaxImpactEndurance
	void OnRep_MaxHealthMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MaxHealthMod
	void OnRep_MaxHealthBase(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MaxHealthBase
	void OnRep_MaxHealthAdd(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MaxHealthAdd
	void OnRep_MaxHealth(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MaxHealth
	void OnRep_MagicResistance(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MagicResistance
	void OnRep_MagicPenetration(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MagicPenetration
	void OnRep_MagicalShield(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalShield
	void OnRep_MagicalReductionMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalReductionMod
	void OnRep_MagicalReduction(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalReduction
	void OnRep_MagicalPower(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalPower
	void OnRep_MagicalInteractionSpeed(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalInteractionSpeed
	void OnRep_MagicalHealMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalHealMod
	void OnRep_MagicalHealBase(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalHealBase
	void OnRep_MagicalFireDamageMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalFireDamageMod
	void OnRep_MagicalFireDamageBase(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalFireDamageBase
	void OnRep_MagicalFireDamageAdd(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalFireDamageAdd
	void OnRep_MagicalDarkDamageMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDarkDamageMod
	void OnRep_MagicalDarkDamageBase(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDarkDamageBase
	void OnRep_MagicalDarkDamageAdd(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDarkDamageAdd
	void OnRep_MagicalDamageWeaponSecondary(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDamageWeaponSecondary
	void OnRep_MagicalDamageWeaponPrimary(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDamageWeaponPrimary
	void OnRep_MagicalDamageTrue(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDamageTrue
	void OnRep_MagicalDamageMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDamageMod
	void OnRep_MagicalDamageBase(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDamageBase
	void OnRep_MagicalDamageAdd(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDamageAdd
	void OnRep_MagicalArcaneDamageMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalArcaneDamageMod
	void OnRep_MagicalArcaneDamageBase(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalArcaneDamageBase
	void OnRep_MagicalArcaneDamageAdd(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalArcaneDamageAdd
	void OnRep_MagicalAbsoluteReduction(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalAbsoluteReduction
	void OnRep_Luck(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_Luck
	void OnRep_LightningMagicResistance(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_LightningMagicResistance
	void OnRep_LightningMagicalReductionMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_LightningMagicalReductionMod
	void OnRep_LightningMagicalReduction(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_LightningMagicalReduction
	void OnRep_LightMagicResistance(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_LightMagicResistance
	void OnRep_LightMagicalReductionMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_LightMagicalReductionMod
	void OnRep_LightMagicalReduction(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_LightMagicalReduction
	void OnRep_KnowledgeMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_KnowledgeMod
	void OnRep_KnowledgeBase(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_KnowledgeBase
	void OnRep_Knowledge(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_Knowledge
	void OnRep_ItemEquipSpeed(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_ItemEquipSpeed
	void OnRep_ItemArmorRatingMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_ItemArmorRatingMod
	void OnRep_ItemArmorRating(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_ItemArmorRating
	void OnRep_ImpactResistance(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_ImpactResistance
	void OnRep_ImpactPower(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_ImpactPower
	void OnRep_ImpactEndurance(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_ImpactEndurance
	void OnRep_Health(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_Health
	void OnRep_HeadshotReductionMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_HeadshotReductionMod
	void OnRep_FireMagicResistance(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_FireMagicResistance
	void OnRep_FireMagicalReductionMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_FireMagicalReductionMod
	void OnRep_FireMagicalReduction(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_FireMagicalReduction
	void OnRep_EvilMagicResistance(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_EvilMagicResistance
	void OnRep_EvilMagicalReductionMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_EvilMagicalReductionMod
	void OnRep_EvilMagicalReduction(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_EvilMagicalReduction
	void OnRep_EarthMagicResistance(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_EarthMagicResistance
	void OnRep_EarthMagicalReductionMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_EarthMagicalReductionMod
	void OnRep_EarthMagicalReduction(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_EarthMagicalReduction
	void OnRep_DivineMagicResistance(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_DivineMagicResistance
	void OnRep_DivineMagicalReductionMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_DivineMagicalReductionMod
	void OnRep_DivineMagicalReduction(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_DivineMagicalReduction
	void OnRep_DebuffDurationMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_DebuffDurationMod
	void OnRep_DarkMagicResistance(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_DarkMagicResistance
	void OnRep_DarkMagicalReductionMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_DarkMagicalReductionMod
	void OnRep_DarkMagicalReduction(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_DarkMagicalReduction
	void OnRep_BuffDurationMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_BuffDurationMod
	void OnRep_ArmorRating(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_ArmorRating
	void OnRep_ArmorPenetration(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_ArmorPenetration
	void OnRep_ArcaneMagicResistance(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_ArcaneMagicResistance
	void OnRep_ArcaneMagicalReductionMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_ArcaneMagicalReductionMod
	void OnRep_ArcaneMagicalReduction(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_ArcaneMagicalReduction
	void OnRep_AirMagicResistance(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_AirMagicResistance
	void OnRep_AirMagicalReductionMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_AirMagicalReductionMod
	void OnRep_AirMagicalReduction(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_AirMagicalReduction
	void OnRep_AgilityMod(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_AgilityMod
	void OnRep_AgilityBase(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_AgilityBase
	void OnRep_Agility(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_Agility
	void OnRep_ActionSpeed(struct FGameplayAttributeData& OldValue); // Function DungeonCrawler.DCAttributeSet.OnRep_ActionSpeed
}; 
 
 


// Class DungeonCrawler.DCPartyManager
// Size: 0x138(Inherited: 0x30)
struct UDCPartyManager : UDCUserInfoManagerBase
{
	char pad_48[24];  // 0x30 (0x30)
	struct TMap<struct FDCPartyId, struct FDCPartyInfo> PartyInfos;  // 0x48 (0x48)
	struct TMap<struct FDCAccountId, struct FDCPartyId> AccountPartyMap;  // 0x98 (0x98)
	char pad_232[80];  // 0xE8 (0xE8)


	void Update(struct FDCPlayerInfo& Info); // Function DungeonCrawler.DCPartyManager.Update
	void Remove(struct FDCPartyId& PartyId, struct FDCAccountId& AccountId); // Function DungeonCrawler.DCPartyManager.Remove
	void OnPlayerUpdated(struct FDCPlayerInfo& NewInfo, struct FDCPlayerInfo& OldInfo); // Function DungeonCrawler.DCPartyManager.OnPlayerUpdated
	void OnPlayerRemoved(struct FDCPlayerInfo& RemovedPlayer); // Function DungeonCrawler.DCPartyManager.OnPlayerRemoved
	void OnPlayerAdded(struct FDCPlayerInfo& Info); // Function DungeonCrawler.DCPartyManager.OnPlayerAdded
	struct TArray<struct FDCPartyId> GetParties(); // Function DungeonCrawler.DCPartyManager.GetParties
	void DebugOnScreen(); // Function DungeonCrawler.DCPartyManager.DebugOnScreen
	void Add(struct FDCPartyId& PartyId, struct FDCAccountId& AccountId); // Function DungeonCrawler.DCPartyManager.Add
}; 
 
 


// Class DungeonCrawler.GA_MusicGrantingAbilityBase
// Size: 0x718(Inherited: 0x6D0)
struct UGA_MusicGrantingAbilityBase : UGA_MusicBase
{
	struct FPrimaryAssetId GrantingAbilityId;  // 0x6D0 (0x6D0)
	struct FGameplayTag BuffTag;  // 0x6E0 (0x6E0)
	struct FGameplayTag GrantedAbilityTag;  // 0x6E8 (0x6E8)
	struct FDCGameplayAbilityData GrantingAbilityData;  // 0x6F0 (0x6F0)


	void OnTargetActorOverlap(struct TArray<struct AActor*>& TargetActors); // Function DungeonCrawler.GA_MusicGrantingAbilityBase.OnTargetActorOverlap
}; 
 
 


// Class DungeonCrawler.GA_MeleeAttackBase
// Size: 0x618(Inherited: 0x558)
struct UGA_MeleeAttackBase : UDCGameplayAbilityBase
{
	char pad_1368_1 : 7;  // 0x558 (0x558)
	bool ShouldProduceTargetDataOnServer : 1;  // 0x558 (0x558)
	char pad_1369[7];  // 0x559 (0x559)
	struct UAnimMontage* MontageToPlay;  // 0x560 (0x560)
	struct UDesignDataAssetMeleeAttack* MeleeAttackData;  // 0x568 (0x568)
	struct FGameplayTag CameraShakeOnStuckStaticObject;  // 0x570 (0x570)
	struct FGameplayTag CameraShakeOnStuckCharacter;  // 0x578 (0x578)
	struct FGameplayTag CameraShakeOnStuckShield;  // 0x580 (0x580)
	struct FGameplayTag ChangeCrossHairWhenEventTag;  // 0x588 (0x588)
	float ChangeCrossHairAngle;  // 0x590 (0x590)
	char pad_1428_1 : 7;  // 0x594 (0x594)
	bool OnPinPoint : 1;  // 0x594 (0x594)
	char pad_1429[3];  // 0x595 (0x595)
	float RotateTime;  // 0x598 (0x598)
	char pad_1436[4];  // 0x59C (0x59C)
	struct ADCGATA_LineCollision* TargetActor;  // 0x5A0 (0x5A0)
	struct UDCAT_WaitTargetData* TargetingTask;  // 0x5A8 (0x5A8)
	struct UAbilityTask_WaitDelay* OnHitTask;  // 0x5B0 (0x5B0)
	struct UAbilityTask_WaitDelay* OnStuckTask;  // 0x5B8 (0x5B8)
	char pad_1472[88];  // 0x5C0 (0x5C0)


	void ServerTargetDataReceived(struct FGameplayTag EventTag, struct FGameplayTag InChannelTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_MeleeAttackBase.ServerTargetDataReceived
	void ReceivedTargetData(struct FGameplayAbilityTargetDataHandle& InData); // Function DungeonCrawler.GA_MeleeAttackBase.ReceivedTargetData
	void ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_MeleeAttackBase.ReceivedEvent
	void OnStuckFinish(); // Function DungeonCrawler.GA_MeleeAttackBase.OnStuckFinish
	void OnInterruptFinish(); // Function DungeonCrawler.GA_MeleeAttackBase.OnInterruptFinish
	void OnInterrupted(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_MeleeAttackBase.OnInterrupted
	void OnHitFinish(); // Function DungeonCrawler.GA_MeleeAttackBase.OnHitFinish
	void OnCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_MeleeAttackBase.OnCompleted
	void OnCancelled(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_MeleeAttackBase.OnCancelled
	void OnBlendOut(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_MeleeAttackBase.OnBlendOut
	void MontageJumpToNextSection(); // Function DungeonCrawler.GA_MeleeAttackBase.MontageJumpToNextSection
	struct UDesignDataAssetMeleeAttack* GetMeleeAttackData(); // Function DungeonCrawler.GA_MeleeAttackBase.GetMeleeAttackData
	void EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_MeleeAttackBase.EventReceived
	void ClientTargetDataReceived(struct FGameplayTag EventTag, struct FGameplayTag InChannelTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_MeleeAttackBase.ClientTargetDataReceived
	void ClientReceivedTargetData(struct FGameplayTag InEffectTag, struct FGameplayTag InChannelTag, struct FGameplayAbilityTargetDataHandle& InData); // Function DungeonCrawler.GA_MeleeAttackBase.ClientReceivedTargetData
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function DungeonCrawler.GA_MeleeAttackBase.AbilityActivated
}; 
 
 


// Class DungeonCrawler.ExpandableInventoryComponent
// Size: 0x1E8(Inherited: 0x1E0)
struct UExpandableInventoryComponent : UInventoryComponent
{
	char pad_480_1 : 7;  // 0x1E0 (0x1E0)
	bool bExpandable : 1;  // 0x1E0 (0x1E0)
	char pad_481[7];  // 0x1E1 (0x1E1)


	void SetExpandable(bool bCanExpand); // Function DungeonCrawler.ExpandableInventoryComponent.SetExpandable
}; 
 
 


// Class DungeonCrawler.DCAT_DashToLocation
// Size: 0xB8(Inherited: 0x80)
struct UDCAT_DashToLocation : UAbilityTask
{
	struct FMulticastInlineDelegate OnFinish;  // 0x80 (0x80)
	char pad_144[40];  // 0x90 (0x90)


	struct UDCAT_DashToLocation* DashToLocation(struct UGameplayAbility* OwningAbility, struct FVector DestLocation, float AllowedDistance, float Speed, bool Teleport); // Function DungeonCrawler.DCAT_DashToLocation.DashToLocation
}; 
 
 


// Class DungeonCrawler.DCCharacterMovementComponent
// Size: 0xF40(Inherited: 0xF00)
struct UDCCharacterMovementComponent : UCharacterMovementComponent
{
	char pad_3840[16];  // 0xF00 (0xF00)
	struct UCannotMoveGameplayTagData* CannotMoveGameplayTagData;  // 0xF10 (0xF10)
	struct UKnockBackImmuneGameplayTagData* KnockBackImmuneGameplayTagData;  // 0xF18 (0xF18)
	char pad_3872[32];  // 0xF20 (0xF20)


	void SetIsTrapped(bool InbIsTrapped, struct FVector& InTrapPinnedLocation, float InTrapRange); // Function DungeonCrawler.DCCharacterMovementComponent.SetIsTrapped
	void RemoveMovementModifier(struct TArray<struct FPrimaryAssetId>& MovementModifiers); // Function DungeonCrawler.DCCharacterMovementComponent.RemoveMovementModifier
	void AddMovementModifier(struct TArray<struct FPrimaryAssetId>& MovementModifiers); // Function DungeonCrawler.DCCharacterMovementComponent.AddMovementModifier
}; 
 
 


// Class DungeonCrawler.DCAT_InteractionSkillCheck
// Size: 0xE8(Inherited: 0x80)
struct UDCAT_InteractionSkillCheck : UAbilityTask
{
	struct FMulticastInlineDelegate OnPerfectSucceed;  // 0x80 (0x80)
	struct FMulticastInlineDelegate OnSucceed;  // 0x90 (0x90)
	struct FMulticastInlineDelegate OnFailed;  // 0xA0 (0xA0)
	char pad_176[56];  // 0xB0 (0xB0)


	struct UDCAT_InteractionSkillCheck* InteractionSkillCheck(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, float Duration, float SucceedSectionStartTime, float SucceedSectionEndTime, float PerfectSucceedSectionStartTime, float PerfectSucceedSectionEndTime); // Function DungeonCrawler.DCAT_InteractionSkillCheck.InteractionSkillCheck
}; 
 
 


// Class DungeonCrawler.MetaVoipComponent
// Size: 0x270(Inherited: 0x200)
struct UMetaVoipComponent : UDCVoipComponent
{
	char pad_512[32];  // 0x200 (0x200)
	struct TMap<struct FDCAccountId, struct FMetaBindAccountUserData> MetaBindAccountUserDataMap;  // 0x220 (0x220)


}; 
 
 


// Class DungeonCrawler.DCVoipComponent
// Size: 0x200(Inherited: 0xA0)
struct UDCVoipComponent : UActorComponent
{
	char pad_160[16];  // 0xA0 (0xA0)
	AActor* DummyVoipReceiveActorClass;  // 0xB0 (0xB0)
	struct UVoipAkComponent* SendVoipAkComponent;  // 0xB8 (0xB8)
	char pad_192[320];  // 0xC0 (0xC0)


	void InitVoip(struct UVoipAkComponent* InSendVoipAkComponent); // Function DungeonCrawler.DCVoipComponent.InitVoip
}; 
 
 


// Class DungeonCrawler.DCAT_JudgeMusicPlay
// Size: 0xF0(Inherited: 0x80)
struct UDCAT_JudgeMusicPlay : UAbilityTask
{
	struct FMulticastInlineDelegate OnPerfect;  // 0x80 (0x80)
	struct FMulticastInlineDelegate OnGood;  // 0x90 (0x90)
	struct FMulticastInlineDelegate OnBad;  // 0xA0 (0xA0)
	struct FMulticastInlineDelegate OnMiss;  // 0xB0 (0xB0)
	struct UInputAction* InputAction;  // 0xC0 (0xC0)
	char pad_200[40];  // 0xC8 (0xC8)


	struct UDCAT_JudgeMusicPlay* JudgeMusicPlay(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct UInputAction* InInputAction, float Duration, float GoodSectionStartTime, float GoodSectionEndTime, float PerfectSectionStartTime, float PerfectSectionEndTime); // Function DungeonCrawler.DCAT_JudgeMusicPlay.JudgeMusicPlay
}; 
 
 


// Class DungeonCrawler.DCLobbyEmoteGroupWidgetBase
// Size: 0x4F8(Inherited: 0x470)
struct UDCLobbyEmoteGroupWidgetBase : ULobbyGroupWidgetBase
{
	char pad_1136[16];  // 0x470 (0x470)
	struct ADCCharacterLobbyCapture* CharacterLobbyCapture;  // 0x480 (0x480)
	int32_t SelectedEmoteIndex;  // 0x488 (0x488)
	char pad_1164[4];  // 0x48C (0x48C)
	struct UDCLobbyEmoteSlotWidget* LobbyEmoteSlot_2;  // 0x490 (0x490)
	struct UDCLobbyEmoteSlotWidget* LobbyEmoteSlot_3;  // 0x498 (0x498)
	struct UDCLobbyEmoteSlotWidget* LobbyEmoteSlot_4;  // 0x4A0 (0x4A0)
	struct UDCLobbyEmoteSlotWidget* LobbyEmoteSlot_5;  // 0x4A8 (0x4A8)
	struct UDCLobbyEmoteSlotWidget* LobbyEmoteSlot_6;  // 0x4B0 (0x4B0)
	struct UDCLobbyEmoteSlotWidget* LobbyEmoteSlot_7;  // 0x4B8 (0x4B8)
	struct UDCLobbyEmoteSlotWidget* LobbyEmoteSlot_8;  // 0x4C0 (0x4C0)
	struct UDCLobbyEmoteSlotWidget* LobbyEmoteSlot_9;  // 0x4C8 (0x4C8)
	struct FText LobbyEmoteNameText;  // 0x4D0 (0x4D0)
	struct TArray<struct UDCLobbyEmoteSlotWidget*> LobbyEmoteSlots;  // 0x4E8 (0x4E8)


	void OnSelectedEmoteIndexChanged(); // Function DungeonCrawler.DCLobbyEmoteGroupWidgetBase.OnSelectedEmoteIndexChanged
	void OnEmoteSelectPopup(); // Function DungeonCrawler.DCLobbyEmoteGroupWidgetBase.OnEmoteSelectPopup
	void OnEmoteSelectClose(); // Function DungeonCrawler.DCLobbyEmoteGroupWidgetBase.OnEmoteSelectClose
	uint8_t GetVisibilityBySelectedEmote(); // Function DungeonCrawler.DCLobbyEmoteGroupWidgetBase.GetVisibilityBySelectedEmote
}; 
 
 


// Class DungeonCrawler.DCAT_MoveWithInputVectorCurve
// Size: 0x150(Inherited: 0x80)
struct UDCAT_MoveWithInputVectorCurve : UAbilityTask
{
	struct FMulticastInlineDelegate OnFinish;  // 0x80 (0x80)
	char pad_144[32];  // 0x90 (0x90)
	struct UCurveVector* VelocityVector;  // 0xB0 (0xB0)
	struct FTimeline VelocityTimeline;  // 0xB8 (0xB8)


	struct UDCAT_MoveWithInputVectorCurve* MoveWithInputVectorCurve(struct UGameplayAbility* OwningAbility, struct FVector DestLocation, struct UCurveVector* InVelocityVector, float DistanceTolerance, bool bShouldTeleportWhenFinished); // Function DungeonCrawler.DCAT_MoveWithInputVectorCurve.MoveWithInputVectorCurve
	void HandleTimelineUpdate(struct FVector InVector); // Function DungeonCrawler.DCAT_MoveWithInputVectorCurve.HandleTimelineUpdate
	void HandleTimelineFinished(); // Function DungeonCrawler.DCAT_MoveWithInputVectorCurve.HandleTimelineFinished
}; 
 
 


// Class DungeonCrawler.DCAT_OverlapActorsInComponent
// Size: 0xD0(Inherited: 0x80)
struct UDCAT_OverlapActorsInComponent : UAbilityTask
{
	struct FMulticastInlineDelegate OnTargetActorOverlapBegin;  // 0x80 (0x80)
	struct FMulticastInlineDelegate OnTargetActorOverlapEnd;  // 0x90 (0x90)
	char pad_160[48];  // 0xA0 (0xA0)


	struct UDCAT_OverlapActorsInComponent* OverlapActorsInComponent(struct UGameplayAbility* OwningAbility, struct UPrimitiveComponent* OverlapPrimitiveComponent, UObject* OverlapTargetClass, struct AActor* InIgnoreActor); // Function DungeonCrawler.DCAT_OverlapActorsInComponent.OverlapActorsInComponent
	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function DungeonCrawler.DCAT_OverlapActorsInComponent.OnOverlapEnd
	void OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function DungeonCrawler.DCAT_OverlapActorsInComponent.OnOverlapBegin
	struct TArray<struct AActor*> GetTargetList(); // Function DungeonCrawler.DCAT_OverlapActorsInComponent.GetTargetList
	void ClearIgnoreActors(); // Function DungeonCrawler.DCAT_OverlapActorsInComponent.ClearIgnoreActors
	void AddIgnoreActors(struct TArray<struct AActor*> InAddIgnoreActors); // Function DungeonCrawler.DCAT_OverlapActorsInComponent.AddIgnoreActors
}; 
 
 


// Class DungeonCrawler.DCAT_OverlapActorsInRadius
// Size: 0xC0(Inherited: 0x80)
struct UDCAT_OverlapActorsInRadius : UAbilityTask
{
	struct FMulticastInlineDelegate OnTargetActorOverlapBegin;  // 0x80 (0x80)
	struct FMulticastInlineDelegate OnTargetActorOverlapEnd;  // 0x90 (0x90)
	char pad_160[32];  // 0xA0 (0xA0)


	struct UDCAT_OverlapActorsInRadius* OverlapActorsInRadius(struct UGameplayAbility* OwningAbility, float Radius, struct FName CollisionProfileName, UObject* OverlapTargetClass); // Function DungeonCrawler.DCAT_OverlapActorsInRadius.OverlapActorsInRadius
	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function DungeonCrawler.DCAT_OverlapActorsInRadius.OnOverlapEnd
	void OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function DungeonCrawler.DCAT_OverlapActorsInRadius.OnOverlapBegin
}; 
 
 


// Class DungeonCrawler.DCGATA_AimTraceOnServer
// Size: 0x3F0(Inherited: 0x3F0)
struct ADCGATA_AimTraceOnServer : ADCGATA_AimTrace
{


}; 
 
 


// Class DungeonCrawler.GA_SpellBase
// Size: 0x618(Inherited: 0x558)
struct UGA_SpellBase : UDCGameplayAbilityBase
{
	struct FGameplayEventData CurrentTriggerData;  // 0x558 (0x558)
	struct FGameplayTag EffectContainerTag;  // 0x608 (0x608)
	struct FGameplayTag GameplayCueTag;  // 0x610 (0x610)


	void OnCasted(struct AActor* InTarget); // Function DungeonCrawler.GA_SpellBase.OnCasted
	bool IsSocketSightBlocked(); // Function DungeonCrawler.GA_SpellBase.IsSocketSightBlocked
	bool IsSightBlocked(struct FHitResult& HitResult); // Function DungeonCrawler.GA_SpellBase.IsSightBlocked
	float GetRange(); // Function DungeonCrawler.GA_SpellBase.GetRange
	float GetAreaRadius(); // Function DungeonCrawler.GA_SpellBase.GetAreaRadius
	float GetAimRadius(); // Function DungeonCrawler.GA_SpellBase.GetAimRadius
	struct AProjectileActor* FireProjectile(struct FHitResult& HitResult, AProjectileActor* ProjectileActorClass); // Function DungeonCrawler.GA_SpellBase.FireProjectile
	void CastToTarget(struct FHitResult& HitResult, bool bShouldNotEndAbilityOnCasted, bool bUseExecuteGameplayCue); // Function DungeonCrawler.GA_SpellBase.CastToTarget
	void CastToSelf(); // Function DungeonCrawler.GA_SpellBase.CastToSelf
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function DungeonCrawler.GA_SpellBase.AbilityActivated
}; 
 
 


// Class DungeonCrawler.GameMusicCurrentSlotWidget
// Size: 0x3F8(Inherited: 0x300)
struct UGameMusicCurrentSlotWidget : UDCWidgetBase
{
	struct FMusicData MusicData;  // 0x300 (0x300)
	struct FDesignDataMusic DesignDataMusic;  // 0x320 (0x320)
	char pad_992[16];  // 0x3E0 (0x3E0)
	struct ADCPlayerCharacterBase* PlayerCharacter;  // 0x3F0 (0x3F0)


	void SetMusicData(struct FMusicData& InMusicData, struct FDesignDataMusic& InDesignDataMusic); // Function DungeonCrawler.GameMusicCurrentSlotWidget.SetMusicData
	void OnMusicDataChanged(struct FMusicData& InMusicData, struct FDesignDataMusic& InDesignDataMusic); // Function DungeonCrawler.GameMusicCurrentSlotWidget.OnMusicDataChanged
}; 
 
 


// Class DungeonCrawler.DCAT_ServerWaitClientTargetData
// Size: 0x98(Inherited: 0x80)
struct UDCAT_ServerWaitClientTargetData : UAbilityTask
{
	struct FMulticastInlineDelegate ValidData;  // 0x80 (0x80)
	char pad_144[8];  // 0x90 (0x90)


	struct UDCAT_ServerWaitClientTargetData* ServerWaitForClientTargetData(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, bool TriggerOnce); // Function DungeonCrawler.DCAT_ServerWaitClientTargetData.ServerWaitForClientTargetData
	void OnTargetDataReplicatedCallback(struct FGameplayAbilityTargetDataHandle& Data, struct FGameplayTag ActivationTag); // Function DungeonCrawler.DCAT_ServerWaitClientTargetData.OnTargetDataReplicatedCallback
}; 
 
 


// Class DungeonCrawler.DCGameplayAbilityDataAsset
// Size: 0xB0(Inherited: 0x38)
struct UDCGameplayAbilityDataAsset : UDCTableDataAsset
{
	struct FText Name;  // 0x38 (0x38)
	struct FGameplayTag AttackType;  // 0x50 (0x50)
	UGameplayAbility* Class;  // 0x58 (0x58)
	struct TArray<struct TSoftObjectPtr<UDCGameplayEffectDataAsset>> Effects;  // 0x60 (0x60)
	struct TSoftObjectPtr<UDescData> Desc;  // 0x70 (0x70)
	struct TArray<struct TSoftObjectPtr<UDCMovementModifierDataAsset>> MovementModifiers;  // 0xA0 (0xA0)


}; 
 
 


// Class DungeonCrawler.DCFloorPortalDataAsset
// Size: 0x48(Inherited: 0x38)
struct UDCFloorPortalDataAsset : UDCTableDataAsset
{
	struct FGameplayTag PortalType;  // 0x38 (0x38)
	int32_t PortalScrollNum;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)


}; 
 
 


// Class DungeonCrawler.DCMeleeAttackDataAsset
// Size: 0x90(Inherited: 0x38)
struct UDCMeleeAttackDataAsset : UDCTableDataAsset
{
	float DamageRatio;  // 0x38 (0x38)
	float HitPlayRate;  // 0x3C (0x3C)
	float HitPlayRateDuration;  // 0x40 (0x40)
	char pad_68_1 : 7;  // 0x44 (0x44)
	bool CanStuckByHitBox : 1;  // 0x44 (0x44)
	char pad_69[3];  // 0x45 (0x45)
	float CharacterStuckPlayRate;  // 0x48 (0x48)
	float CharacterStuckPlayRateDuration;  // 0x4C (0x4C)
	float CharacterStuckBlendOutTime;  // 0x50 (0x50)
	char pad_84_1 : 7;  // 0x54 (0x54)
	bool CanStuckByShield : 1;  // 0x54 (0x54)
	char pad_85[3];  // 0x55 (0x55)
	float WeakShieldStuckPlayRate;  // 0x58 (0x58)
	float WeakShieldStuckPlayRateDuration;  // 0x5C (0x5C)
	float WeakShieldStuckBlendOutTime;  // 0x60 (0x60)
	float MidShieldStuckPlayRate;  // 0x64 (0x64)
	float MidShieldStuckPlayRateDuration;  // 0x68 (0x68)
	float MidShieldStuckBlendOutTime;  // 0x6C (0x6C)
	float HeavyShieldStuckPlayRate;  // 0x70 (0x70)
	float HeavyShieldStuckPlayRateDuration;  // 0x74 (0x74)
	float HeavyShieldStuckBlendOutTime;  // 0x78 (0x78)
	char pad_124_1 : 7;  // 0x7C (0x7C)
	bool CanStuckByStaticObject : 1;  // 0x7C (0x7C)
	char pad_125[3];  // 0x7D (0x7D)
	float StaticObjectStuckPlayRate;  // 0x80 (0x80)
	float StaticObjectStuckPlayRateDuration;  // 0x84 (0x84)
	float StaticObjectStuckBlendOutTime;  // 0x88 (0x88)
	char pad_140[4];  // 0x8C (0x8C)


}; 
 
 


// Class DungeonCrawler.DCTabButtonWidgetBase
// Size: 0x1590(Inherited: 0x1580)
struct UDCTabButtonWidgetBase : UDCCommonButtonBase
{
	struct UWidgetSwitcher* Switcher_OnOff;  // 0x1580 (0x1580)
	char pad_5512[8];  // 0x1588 (0x1588)


	void OnSelectedChanged(bool bInIsSelected); // Function DungeonCrawler.DCTabButtonWidgetBase.OnSelectedChanged
}; 
 
 


// Class DungeonCrawler.DCAT_SpawnProjectile
// Size: 0x110(Inherited: 0x80)
struct UDCAT_SpawnProjectile : UAbilityTask
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x80 (0x80)
	char pad_144[128];  // 0x90 (0x90)


	struct UDCAT_SpawnProjectile* SpawnProjectile(struct UGameplayAbility* OwningAbility, UObject* SpawnClass, struct FTransform SpawnTransform, float FirePower); // Function DungeonCrawler.DCAT_SpawnProjectile.SpawnProjectile
}; 
 
 


// Class DungeonCrawler.KarmaReportWidgetBase
// Size: 0x300(Inherited: 0x300)
struct UKarmaReportWidgetBase : UDCWidgetBase
{


	void OnFMsgWidgetKarmaReportInfoNotifyBlueprint(struct FMsgWidgetKarmaReportInfoNotify& InMsg); // Function DungeonCrawler.KarmaReportWidgetBase.OnFMsgWidgetKarmaReportInfoNotifyBlueprint
	void OnFMsgWidgetKarmaReportActionResponseBlueprint(struct FMsgWidgetKarmaReportActionResponse& InMsg); // Function DungeonCrawler.KarmaReportWidgetBase.OnFMsgWidgetKarmaReportActionResponseBlueprint
}; 
 
 


// Class DungeonCrawler.DCAT_WaitAimDirectionChanged
// Size: 0xA8(Inherited: 0x80)
struct UDCAT_WaitAimDirectionChanged : UAbilityTask
{
	struct FMulticastInlineDelegate OnDirectionChanged;  // 0x80 (0x80)
	char pad_144[24];  // 0x90 (0x90)


	struct UDCAT_WaitAimDirectionChanged* WaitAimDirectionChanged(struct UGameplayAbility* OwningAbility); // Function DungeonCrawler.DCAT_WaitAimDirectionChanged.WaitAimDirectionChanged
}; 
 
 


// Class DungeonCrawler.DCCharacterSkinArtData
// Size: 0xE0(Inherited: 0xD8)
struct UDCCharacterSkinArtData : UDCCharacterPartsArtData
{
	struct UTexture2D* CharacterSkinIconTexture;  // 0xD8 (0xD8)


}; 
 
 


// Class DungeonCrawler.DCAT_WaitAttributeChangeByExecution
// Size: 0xB0(Inherited: 0x80)
struct UDCAT_WaitAttributeChangeByExecution : UAbilityTask
{
	struct FMulticastInlineDelegate OnChange;  // 0x80 (0x80)
	char pad_144[24];  // 0x90 (0x90)
	struct UAbilitySystemComponent* ExternalOwner;  // 0xA8 (0xA8)


	struct UDCAT_WaitAttributeChangeByExecution* WaitForAttributesChange(struct UGameplayAbility* OwningAbility, struct TArray<struct FGameplayAttribute> Attributes, bool TriggerOnce, struct AActor* OptionalExternalOwner); // Function DungeonCrawler.DCAT_WaitAttributeChangeByExecution.WaitForAttributesChange
	struct UDCAT_WaitAttributeChangeByExecution* WaitForAttributeChange(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, bool TriggerOnce, struct AActor* OptionalExternalOwner); // Function DungeonCrawler.DCAT_WaitAttributeChangeByExecution.WaitForAttributeChange
}; 
 
 


// Class DungeonCrawler.DCAT_WaitDelayRestartable
// Size: 0xA0(Inherited: 0x80)
struct UDCAT_WaitDelayRestartable : UAbilityTask
{
	struct FMulticastInlineDelegate OnFinish;  // 0x80 (0x80)
	char pad_144[16];  // 0x90 (0x90)


	struct UDCAT_WaitDelayRestartable* WaitDelay(struct UGameplayAbility* OwningAbility, float Time); // Function DungeonCrawler.DCAT_WaitDelayRestartable.WaitDelay
	void RestartTimer(); // Function DungeonCrawler.DCAT_WaitDelayRestartable.RestartTimer
}; 
 
 


// Class DungeonCrawler.MetaLeaderboardComponent
// Size: 0x230(Inherited: 0x100)
struct UMetaLeaderboardComponent : UMetaComponentBase
{
	char pad_256[304];  // 0x100 (0x100)


}; 
 
 


// Class DungeonCrawler.DCMerchantRequiredEntryWidget
// Size: 0x4F0(Inherited: 0x4E8)
struct UDCMerchantRequiredEntryWidget : UDCMerchantItemWidget
{
	char pad_1256[8];  // 0x4E8 (0x4E8)


	bool IsFilled(); // Function DungeonCrawler.DCMerchantRequiredEntryWidget.IsFilled
	int32_t GetMaxStack(); // Function DungeonCrawler.DCMerchantRequiredEntryWidget.GetMaxStack
	int32_t GetCurrentStack(); // Function DungeonCrawler.DCMerchantRequiredEntryWidget.GetCurrentStack
}; 
 
 


// Class DungeonCrawler.DCAT_WaitDistChangeFromActor
// Size: 0x110(Inherited: 0x80)
struct UDCAT_WaitDistChangeFromActor : UAbilityTask
{
	struct FMulticastInlineDelegate OnDistanceChange;  // 0x80 (0x80)
	char pad_144[128];  // 0x90 (0x90)


	struct UDCAT_WaitDistChangeFromActor* WaitDistanceChange(struct UGameplayAbility* OwningAbility, struct AActor* TargetActor, float MaximumDistance, enum class ECollisionChannel CollisionChannel); // Function DungeonCrawler.DCAT_WaitDistChangeFromActor.WaitDistanceChange
}; 
 
 


// Class DungeonCrawler.DCTooltipWidget
// Size: 0x310(Inherited: 0x300)
struct UDCTooltipWidget : UDCWidgetBase
{
	struct UTextBlock* NameText;  // 0x300 (0x300)
	struct UTextBlock* DescriptionText;  // 0x308 (0x308)


	void SetTooltipData(struct FText& InNameText, struct FText& InDescriptionText); // Function DungeonCrawler.DCTooltipWidget.SetTooltipData
}; 
 
 


// Class DungeonCrawler.DCAT_WaitForCharacterUnCrouch
// Size: 0x98(Inherited: 0x80)
struct UDCAT_WaitForCharacterUnCrouch : UAbilityTask
{
	struct FMulticastInlineDelegate OnUnCrouch;  // 0x80 (0x80)
	struct UCharacterMovementComponent* CachedMovementComponent;  // 0x90 (0x90)


	struct UDCAT_WaitForCharacterUnCrouch* WaitForCharacterUnCrouch(struct UGameplayAbility* OwningAbility); // Function DungeonCrawler.DCAT_WaitForCharacterUnCrouch.WaitForCharacterUnCrouch
}; 
 
 


// Class DungeonCrawler.DCShopCurrencyTypeSlotWidgetBase
// Size: 0x320(Inherited: 0x300)
struct UDCShopCurrencyTypeSlotWidgetBase : UDCWidgetBase
{
	char pad_768[16];  // 0x300 (0x300)
	int32_t Value;  // 0x310 (0x310)
	char pad_788_1 : 7;  // 0x314 (0x314)
	bool bCanSelect : 1;  // 0x314 (0x314)
	uint8_t CurrencyType;  // 0x315 (0x315)
	char pad_790[2];  // 0x316 (0x316)
	struct UCheckBox* CheckBox;  // 0x318 (0x318)


	void OnChangedCheckState(bool bNewState); // Function DungeonCrawler.DCShopCurrencyTypeSlotWidgetBase.OnChangedCheckState
	bool IsRedstoneShardType(); // Function DungeonCrawler.DCShopCurrencyTypeSlotWidgetBase.IsRedstoneShardType
	bool IsBluestoneShardType(); // Function DungeonCrawler.DCShopCurrencyTypeSlotWidgetBase.IsBluestoneShardType
	bool HasNotEnoughCurrency(); // Function DungeonCrawler.DCShopCurrencyTypeSlotWidgetBase.HasNotEnoughCurrency
}; 
 
 


// Class DungeonCrawler.LobbyGroupWidgetBase
// Size: 0x470(Inherited: 0x440)
struct ULobbyGroupWidgetBase : UDCCommonActivatableWidgetBase
{
	uint8_t WidgetLobbyGroupType;  // 0x440 (0x440)
	char pad_1089[7];  // 0x441 (0x441)
	struct TArray<uint8_t> NonCoexistWidgetLobbyGroupTypeArray;  // 0x448 (0x448)
	int32_t GroupWidgetPriority;  // 0x458 (0x458)
	char pad_1116_1 : 7;  // 0x45C (0x45C)
	bool bShouldWaitResponseOnHide : 1;  // 0x45C (0x45C)
	char pad_1117_1 : 7;  // 0x45D (0x45D)
	bool bShowConfirmPopupOnHide : 1;  // 0x45D (0x45D)
	char pad_1118[2];  // 0x45E (0x45E)
	UCommonPopupSWidget* CommonPopupWidget;  // 0x460 (0x460)
	char pad_1128[8];  // 0x468 (0x468)


}; 
 
 


// Class DungeonCrawler.DCGameStateBase
// Size: 0x780(Inherited: 0x2E0)
struct ADCGameStateBase : AGameStateBase
{
	char pad_736[88];  // 0x2E0 (0x2E0)
	struct UBaseObject* BaseObject;  // 0x338 (0x338)
	char pad_832[24];  // 0x340 (0x340)
	uint8_t State;  // 0x358 (0x358)
	char pad_857[135];  // 0x359 (0x359)
	struct TArray<struct FGameStateData> GameStateDataArray;  // 0x3E0 (0x3E0)
	struct TArray<struct FAccountDataReplication> AccountDataReplicationArray;  // 0x3F0 (0x3F0)
	struct TMap<struct FString, struct UAccountSession*> AccountSessionMap;  // 0x400 (0x400)
	struct TMap<struct FString, struct TWeakObjectPtr<ADCCharacterBase>> PlayerCharacters;  // 0x450 (0x450)
	char pad_1184[264];  // 0x4A0 (0x4A0)
	struct TArray<struct FPartyData> PartyDataArray;  // 0x5A8 (0x5A8)
	struct TMap<struct FString, struct UPartySession*> PartySessionMap;  // 0x5B8 (0x5B8)
	struct ADeathSwarmBase* DeathSwarm;  // 0x608 (0x608)
	struct FGameFloorRuleData GameFloorRuleData;  // 0x610 (0x610)
	struct FDCGameInfo GameInfo;  // 0x670 (0x670)
	char pad_1696[24];  // 0x6A0 (0x6A0)
	struct FDCDungeonInfo DungeonInfo;  // 0x6B8 (0x6B8)
	char pad_1732[4];  // 0x6C4 (0x6C4)
	struct TSet<struct AActor*> MonsterSet;  // 0x6C8 (0x6C8)
	struct TSet<struct AActor*> PropsSet;  // 0x718 (0x718)
	float ServerAverageFps;  // 0x768 (0x768)
	float ServerAverageMs;  // 0x76C (0x76C)
	int32_t TotalActor;  // 0x770 (0x770)
	int32_t MonsterActive;  // 0x774 (0x774)
	int32_t PropsActive;  // 0x778 (0x778)
	char pad_1916[4];  // 0x77C (0x77C)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.DCGameStateBase.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.DCGameStateBase.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.DCGameStateBase.TerminateBase
	void SetDungeonInfo_HideDeathSwarmTimer(bool HideDeathSwarmTimer); // Function DungeonCrawler.DCGameStateBase.SetDungeonInfo_HideDeathSwarmTimer
	void SetDungeonInfo_GameTimeSec(int32_t GameTimeSec); // Function DungeonCrawler.DCGameStateBase.SetDungeonInfo_GameTimeSec
	void OnRep_State(uint8_t OldState); // Function DungeonCrawler.DCGameStateBase.OnRep_State
	void OnRep_PartyDataArray(struct TArray<struct FPartyData>& OldPartyDataArray); // Function DungeonCrawler.DCGameStateBase.OnRep_PartyDataArray
	void OnRep_GameStateDataArray(struct TArray<struct FGameStateData>& OldGameStateDataArray); // Function DungeonCrawler.DCGameStateBase.OnRep_GameStateDataArray
	void OnRep_GameInfo(struct FDCGameInfo& OldGameInfo); // Function DungeonCrawler.DCGameStateBase.OnRep_GameInfo
	void OnRep_GameFloorRuleData(struct FGameFloorRuleData& InOldGameFloorRuleData); // Function DungeonCrawler.DCGameStateBase.OnRep_GameFloorRuleData
	void OnRep_DungeonInfo(struct FDCDungeonInfo& OldDungeonInfo); // Function DungeonCrawler.DCGameStateBase.OnRep_DungeonInfo
	void OnRep_AccountDataReplicationArray(struct TArray<struct FAccountDataReplication>& OldAccountDataReplicationArray); // Function DungeonCrawler.DCGameStateBase.OnRep_AccountDataReplicationArray
	void OnGameInfoSet(struct FDCGameInfo& OldGameInfo); // Function DungeonCrawler.DCGameStateBase.OnGameInfoSet
	void OnGameFloorRuleData(struct FGameFloorRuleData InGameFloorRuleData); // Function DungeonCrawler.DCGameStateBase.OnGameFloorRuleData
	void OnDungeonInfo(struct FDCDungeonInfo InDungeonInfo); // Function DungeonCrawler.DCGameStateBase.OnDungeonInfo
	struct FDCGameInfo GetGameInfo(); // Function DungeonCrawler.DCGameStateBase.GetGameInfo
	struct FDCDungeonInfo GetDungeonInfo(); // Function DungeonCrawler.DCGameStateBase.GetDungeonInfo
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.DCGameStateBase.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.DCItemSkinViewerWidgetBase
// Size: 0x280(Inherited: 0x278)
struct UDCItemSkinViewerWidgetBase : UUserWidget
{
	struct ADCItemSkinViewerActor* ItemSkinViewerActor;  // 0x278 (0x278)


}; 
 
 


// Class DungeonCrawler.DCAT_WaitForGameplayEvents
// Size: 0xB8(Inherited: 0x80)
struct UDCAT_WaitForGameplayEvents : UAbilityTask
{
	struct FMulticastInlineDelegate EventReceived;  // 0x80 (0x80)
	struct FGameplayTagContainer EventTags;  // 0x90 (0x90)
	char pad_176[8];  // 0xB0 (0xB0)


	struct UDCAT_WaitForGameplayEvents* WaitForGameplayEvents(struct UGameplayAbility* OwningAbility, struct FGameplayTagContainer InEventTags); // Function DungeonCrawler.DCAT_WaitForGameplayEvents.WaitForGameplayEvents
}; 
 
 


// Class DungeonCrawler.DCAT_WaitGameplayAbilityActivateOrEnd
// Size: 0x160(Inherited: 0x80)
struct UDCAT_WaitGameplayAbilityActivateOrEnd : UAbilityTask
{
	char pad_128[160];  // 0x80 (0x80)
	struct FMulticastInlineDelegate OnAbilityActivated;  // 0x120 (0x120)
	struct FMulticastInlineDelegate OnAbilityEnded;  // 0x130 (0x130)
	struct UAbilitySystemComponent* OptionalExternalTarget;  // 0x140 (0x140)
	char pad_328[24];  // 0x148 (0x148)


	struct UDCAT_WaitGameplayAbilityActivateOrEnd* WaitForAbilityActivateOrEndWithTagRequirements(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements TagRequirements, struct AActor* InOptionalExternalTarget, bool TriggerOnce); // Function DungeonCrawler.DCAT_WaitGameplayAbilityActivateOrEnd.WaitForAbilityActivateOrEndWithTagRequirements
	struct UDCAT_WaitGameplayAbilityActivateOrEnd* WaitForAbilityActivateOrEnd_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, struct AActor* InOptionalExternalTarget, bool TriggerOnce); // Function DungeonCrawler.DCAT_WaitGameplayAbilityActivateOrEnd.WaitForAbilityActivateOrEnd_Query
	struct UDCAT_WaitGameplayAbilityActivateOrEnd* WaitForAbilityActivateOrEnd(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTag, struct AActor* InOptionalExternalTarget, bool TriggerOnce); // Function DungeonCrawler.DCAT_WaitGameplayAbilityActivateOrEnd.WaitForAbilityActivateOrEnd
	void OnAbilityEnd(struct FAbilityEndedData& AbilityEndedData); // Function DungeonCrawler.DCAT_WaitGameplayAbilityActivateOrEnd.OnAbilityEnd
	void OnAbilityActivate(struct UGameplayAbility* ActivatedAbility); // Function DungeonCrawler.DCAT_WaitGameplayAbilityActivateOrEnd.OnAbilityActivate
}; 
 
 


// Class DungeonCrawler.DCAT_WaitGameplayTags
// Size: 0x108(Inherited: 0x80)
struct UDCAT_WaitGameplayTags : UAbilityTask
{
	char pad_128[40];  // 0x80 (0x80)
	struct UAbilitySystemComponent* OptionalExternalTarget;  // 0xA8 (0xA8)
	char pad_176[88];  // 0xB0 (0xB0)


	void GameplayTagCallback(struct FGameplayTag Tag, int32_t NewCount); // Function DungeonCrawler.DCAT_WaitGameplayTags.GameplayTagCallback
}; 
 
 


// Class DungeonCrawler.DCDungeonDataAsset
// Size: 0xC0(Inherited: 0x38)
struct UDCDungeonDataAsset : UDCTableDataAsset
{
	struct FText Name;  // 0x38 (0x38)
	uint8_t GameDifficultyType;  // 0x50 (0x50)
	char pad_81[3];  // 0x51 (0x51)
	int32_t Floor;  // 0x54 (0x54)
	struct TSoftObjectPtr<UDCFloorRuleDataAsset> FloorRule;  // 0x58 (0x58)
	struct TSoftObjectPtr<UWorld> LevelAsset;  // 0x88 (0x88)
	int32_t TriumphExp;  // 0xB8 (0xB8)
	char pad_188[4];  // 0xBC (0xBC)


}; 
 
 


// Class DungeonCrawler.DCPerkDataAsset
// Size: 0x110(Inherited: 0x38)
struct UDCPerkDataAsset : UDCTableDataAsset
{
	struct FText Name;  // 0x38 (0x38)
	struct TSoftObjectPtr<UDescData> DescData;  // 0x50 (0x50)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool CanUse : 1;  // 0x80 (0x80)
	char pad_129[7];  // 0x81 (0x81)
	struct TArray<struct FPrimaryAssetId> Classes;  // 0x88 (0x88)
	float Radius;  // 0x98 (0x98)
	struct FPrimaryAssetId AllowIdTagGroup;  // 0x9C (0x9C)
	struct FPrimaryAssetId NotAllowIdTagGroup;  // 0xAC (0xAC)
	char pad_188[4];  // 0xBC (0xBC)
	struct TSoftObjectPtr<UArtDataPerk> ArtData;  // 0xC0 (0xC0)
	struct TArray<struct TSoftObjectPtr<UDCGameplayAbilityDataAsset>> Abilities;  // 0xF0 (0xF0)
	struct TArray<struct TSoftObjectPtr<UDCGameplayEffectDataAsset>> Effects;  // 0x100 (0x100)


}; 
 
 


// Class DungeonCrawler.DCMerchantInfoWidget
// Size: 0x2D0(Inherited: 0x278)
struct UDCMerchantInfoWidget : UUserWidget
{
	struct FText Name;  // 0x278 (0x278)
	struct FText Text;  // 0x290 (0x290)
	struct UImage* Portrait;  // 0x2A8 (0x2A8)
	struct UDCMerchantStatWidget* StatWidget;  // 0x2B0 (0x2B0)
	struct FText GreetingText;  // 0x2B8 (0x2B8)


}; 
 
 


// Class DungeonCrawler.DCAT_WaitGameplayTagsRemoved
// Size: 0x118(Inherited: 0x108)
struct UDCAT_WaitGameplayTagsRemoved : UDCAT_WaitGameplayTags
{
	struct FMulticastInlineDelegate Removed;  // 0x108 (0x108)


	struct UDCAT_WaitGameplayTagsRemoved* WaitGameplayTagsRemoved(struct UGameplayAbility* OwningAbility, struct FGameplayTagContainer TagContainer, bool bIsWaitAnyTag, struct AActor* InOptionalExternalTarget, bool bIsOnlyTriggerOnce); // Function DungeonCrawler.DCAT_WaitGameplayTagsRemoved.WaitGameplayTagsRemoved
}; 
 
 


// Class DungeonCrawler.DCAT_WaitInteractableTarget
// Size: 0xA8(Inherited: 0x80)
struct UDCAT_WaitInteractableTarget : UAbilityTask
{
	struct FMulticastInlineDelegate FoundNewInteractableTarget;  // 0x80 (0x80)
	struct FMulticastInlineDelegate LostInteractableTarget;  // 0x90 (0x90)
	struct ADCGATA_LineTraceInteractable* InteractableTargetActor;  // 0xA0 (0xA0)


	struct UDCAT_WaitInteractableTarget* WaitInteractableTarget(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct ADCGATA_LineTraceInteractable* InTargetActor); // Function DungeonCrawler.DCAT_WaitInteractableTarget.WaitInteractableTarget
	void StopTargeting(); // Function DungeonCrawler.DCAT_WaitInteractableTarget.StopTargeting
	void StartTargeting(); // Function DungeonCrawler.DCAT_WaitInteractableTarget.StartTargeting
	void ResetTargeting(); // Function DungeonCrawler.DCAT_WaitInteractableTarget.ResetTargeting
	void OnLostInteractableTarget(struct FGameplayAbilityTargetDataHandle& Data); // Function DungeonCrawler.DCAT_WaitInteractableTarget.OnLostInteractableTarget
	void OnFoundNewInteractableTarget(struct FGameplayAbilityTargetDataHandle& Data); // Function DungeonCrawler.DCAT_WaitInteractableTarget.OnFoundNewInteractableTarget
}; 
 
 


// Class DungeonCrawler.DCAT_WaitMovementModeChange
// Size: 0xA0(Inherited: 0x80)
struct UDCAT_WaitMovementModeChange : UAbilityTask
{
	struct FMulticastInlineDelegate OnMovementModeChanged;  // 0x80 (0x80)
	char pad_144[16];  // 0x90 (0x90)


	struct UDCAT_WaitMovementModeChange* WaitMovementModeChange(struct UGameplayAbility* OwningAbility, enum class EMovementMode NewMode, bool bOnlyTriggerOnce); // Function DungeonCrawler.DCAT_WaitMovementModeChange.WaitMovementModeChange
	void OnMovementModeChange(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function DungeonCrawler.DCAT_WaitMovementModeChange.OnMovementModeChange
}; 
 
 


// Class DungeonCrawler.DCGameInstance
// Size: 0x3A8(Inherited: 0x1C0)
struct UDCGameInstance : UGameInstance
{
	char pad_448[88];  // 0x1C0 (0x1C0)
	UDCLoadingScreenWidget* LoadingScreenClass;  // 0x218 (0x218)
	struct UDCLoadingScreenWidget* LoadingScreenWidget;  // 0x220 (0x220)
	struct UDCLoadingScreenWidget* PreLoadingScreenWidget;  // 0x228 (0x228)
	struct UBaseObject* BaseObject;  // 0x230 (0x230)
	struct UDCGameSettings* GameSettings;  // 0x238 (0x238)
	struct TSoftObjectPtr<UWorld> LoginLevel;  // 0x240 (0x240)
	struct TSoftObjectPtr<UWorld> CharacterSelectLevel;  // 0x270 (0x270)
	struct TSoftObjectPtr<UWorld> LobbyLevel;  // 0x2A0 (0x2A0)
	struct TSoftObjectPtr<UWorld> TavernLevel;  // 0x2D0 (0x2D0)
	UDCResource* ResourceClass;  // 0x300 (0x300)
	struct UDCResource* Resource;  // 0x308 (0x308)
	struct UAkRtpc* MasterVolume;  // 0x310 (0x310)
	struct UAkRtpc* EffectVolume;  // 0x318 (0x318)
	struct UAkRtpc* MusicVolume;  // 0x320 (0x320)
	struct UDCClientAccountManager* ClientAccountManager;  // 0x328 (0x328)
	struct UDCClientShopManager* ClientShopManager;  // 0x330 (0x330)
	struct UDCIngameUserManager* IngameUserManager;  // 0x338 (0x338)
	struct UDCPlayerManager* PlayerManager;  // 0x340 (0x340)
	struct UDCPartyManager* PartyManager;  // 0x348 (0x348)
	struct UDCCommunityManager* CommunityManager;  // 0x350 (0x350)
	struct UDCClientReportPlayerManager* ClientReportPlayerManager;  // 0x358 (0x358)
	struct UDCLogEventManager* LogEventManager;  // 0x360 (0x360)
	struct UDCReportSystem* ReportSystem;  // 0x368 (0x368)
	char pad_880[56];  // 0x370 (0x370)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.DCGameInstance.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.DCGameInstance.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.DCGameInstance.TerminateBase
	void OnPreLoadMap(struct FString MapName); // Function DungeonCrawler.DCGameInstance.OnPreLoadMap
	void OnPostLoadMapWithWorld(struct UWorld* LoadedWorld); // Function DungeonCrawler.DCGameInstance.OnPostLoadMapWithWorld
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.DCGameInstance.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.DCAT_WaitSocketBlockedStateChange
// Size: 0xA8(Inherited: 0x80)
struct UDCAT_WaitSocketBlockedStateChange : UAbilityTask
{
	struct FMulticastInlineDelegate SocketSightBlocked;  // 0x80 (0x80)
	struct FMulticastInlineDelegate SocketSightUnblocked;  // 0x90 (0x90)
	struct ADCGATA_AimTraceToSocket* AimTraceActor;  // 0xA0 (0xA0)


	struct UDCAT_WaitSocketBlockedStateChange* WaitSocketBlockedStateChange(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct ADCGATA_AimTraceToSocket* InTargetActor); // Function DungeonCrawler.DCAT_WaitSocketBlockedStateChange.WaitSocketBlockedStateChange
	void StopTargeting(); // Function DungeonCrawler.DCAT_WaitSocketBlockedStateChange.StopTargeting
	void StartTargeting(); // Function DungeonCrawler.DCAT_WaitSocketBlockedStateChange.StartTargeting
	void ResetTargeting(); // Function DungeonCrawler.DCAT_WaitSocketBlockedStateChange.ResetTargeting
	void OnSocketSightUnblocked(struct FGameplayAbilityTargetDataHandle& Data); // Function DungeonCrawler.DCAT_WaitSocketBlockedStateChange.OnSocketSightUnblocked
	void OnSocketSightBlocked(struct FGameplayAbilityTargetDataHandle& Data); // Function DungeonCrawler.DCAT_WaitSocketBlockedStateChange.OnSocketSightBlocked
}; 
 
 


// Class DungeonCrawler.PerkWidget
// Size: 0x350(Inherited: 0x300)
struct UPerkWidget : UDCWidgetBase
{
	struct UImage* PerkIconImage;  // 0x300 (0x300)
	struct FPerkWidgetData PerkWidgetData;  // 0x308 (0x308)
	UUserWidget* PerkToolTipWidgetClass;  // 0x338 (0x338)
	struct FPrimaryAssetId PerkId;  // 0x340 (0x340)


	void SetPerkData(struct FText& PerkName, struct FText& PerkDesc); // Function DungeonCrawler.PerkWidget.SetPerkData
	void OnSetPerkData(); // Function DungeonCrawler.PerkWidget.OnSetPerkData
	void InitializePerkWidget(struct FPrimaryAssetId& InPerkId); // Function DungeonCrawler.PerkWidget.InitializePerkWidget
}; 
 
 


// Class DungeonCrawler.ItemGenerateInterface
// Size: 0x28(Inherited: 0x28)
struct UItemGenerateInterface : UInterface
{


	void GenerateItems(float InLuck); // Function DungeonCrawler.ItemGenerateInterface.GenerateItems
}; 
 
 


// Class DungeonCrawler.InvitePartyUserSlotWidget
// Size: 0x3A0(Inherited: 0x300)
struct UInvitePartyUserSlotWidget : UDCWidgetBase
{
	char pad_768[16];  // 0x300 (0x300)
	struct FString AccountId;  // 0x310 (0x310)
	struct FString CharacterId;  // 0x320 (0x320)
	struct FNickname Nickname;  // 0x330 (0x330)
	struct FText CharacterClassName;  // 0x358 (0x358)
	int32_t Level;  // 0x370 (0x370)
	uint8_t LocationStatus;  // 0x374 (0x374)
	char pad_885[3];  // 0x375 (0x375)
	int32_t NumPartyMembers;  // 0x378 (0x378)
	int32_t MaxNumPartyMembers;  // 0x37C (0x37C)
	struct UTexture2D* Icon;  // 0x380 (0x380)
	struct UTexture2D* Portrait;  // 0x388 (0x388)
	char pad_912_1 : 7;  // 0x390 (0x390)
	bool bMine : 1;  // 0x390 (0x390)
	char pad_913_1 : 7;  // 0x391 (0x391)
	bool bSelected : 1;  // 0x391 (0x391)
	char pad_914[14];  // 0x392 (0x392)


	void OnRightClicked(); // Function DungeonCrawler.InvitePartyUserSlotWidget.OnRightClicked
}; 
 
 


// Class DungeonCrawler.DCAT_WaitVelocityChange
// Size: 0xA0(Inherited: 0x80)
struct UDCAT_WaitVelocityChange : UAbilityTask
{
	struct FMulticastInlineDelegate OnVelocityChange;  // 0x80 (0x80)
	struct UMovementComponent* CachedMovementComponent;  // 0x90 (0x90)
	char pad_152[8];  // 0x98 (0x98)


	struct UDCAT_WaitVelocityChange* WaitVelocityChange(struct UGameplayAbility* OwningAbility, float MinimumMagnitude); // Function DungeonCrawler.DCAT_WaitVelocityChange.WaitVelocityChange
}; 
 
 


// Class DungeonCrawler.DCBagSlotWidget
// Size: 0x288(Inherited: 0x278)
struct UDCBagSlotWidget : UUserWidget
{
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool bOccupied : 1;  // 0x278 (0x278)
	char pad_633_1 : 7;  // 0x279 (0x279)
	bool bCanEquip : 1;  // 0x279 (0x279)
	uint8_t ItemDropPreview;  // 0x27A (0x27A)
	char pad_635[5];  // 0x27B (0x27B)
	struct USizeBox* SlotSizeBox;  // 0x280 (0x280)


}; 
 
 


// Class DungeonCrawler.DCMonsterSpawner
// Size: 0x360(Inherited: 0x290)
struct ADCMonsterSpawner : AActor
{
	char pad_656[96];  // 0x290 (0x290)
	struct UBaseObject* BaseObject;  // 0x2F0 (0x2F0)
	struct UBillboardComponent* BillboardComponent;  // 0x2F8 (0x2F8)
	struct UArrowComponent* ArrowComponent;  // 0x300 (0x300)
	uint8_t BoundType;  // 0x308 (0x308)
	char pad_777_1 : 7;  // 0x309 (0x309)
	bool IsLinked : 1;  // 0x309 (0x309)
	uint8_t MonsterCollisionProfile;  // 0x30A (0x30A)
	char pad_779[5];  // 0x30B (0x30B)
	struct TArray<ADCMonsterBase*> Monsters;  // 0x310 (0x310)
	float Range;  // 0x320 (0x320)
	int32_t Count;  // 0x324 (0x324)
	struct TArray<struct ATargetPoint*> TargetPoints;  // 0x328 (0x328)
	char pad_824[40];  // 0x338 (0x338)


	void UpdateGameState(struct FGameStateData& InGameStateData); // Function DungeonCrawler.DCMonsterSpawner.UpdateGameState
	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.DCMonsterSpawner.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.DCMonsterSpawner.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.DCMonsterSpawner.TerminateBase
	struct TArray<struct ADCMonsterBase*> Spawns(); // Function DungeonCrawler.DCMonsterSpawner.Spawns
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.DCMonsterSpawner.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.OnlineSystemIronmace
// Size: 0x88(Inherited: 0x30)
struct UOnlineSystemIronmace : UGameInstanceSubsystem
{
	char pad_48[88];  // 0x30 (0x30)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.OnlineSystemIronmace.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.OnlineSystemIronmace.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.OnlineSystemIronmace.TerminateBase
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.OnlineSystemIronmace.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.DCItemSkinDataAsset
// Size: 0xB8(Inherited: 0x38)
struct UDCItemSkinDataAsset : UDCTableDataAsset
{
	struct FText Name;  // 0x38 (0x38)
	struct FText FlavorText;  // 0x50 (0x50)
	AItemActor* ItemActor;  // 0x68 (0x68)
	AProjectileActor* ProjectileActor;  // 0x70 (0x70)
	APropsActorBase* InstallActor;  // 0x78 (0x78)
	struct TSoftObjectPtr<UDCItemSkinArtData> Art;  // 0x80 (0x80)
	struct FGameplayTag TargetItem;  // 0xB0 (0xB0)


}; 
 
 


// Class DungeonCrawler.ItemMoveValidatorComponent
// Size: 0x200(Inherited: 0x100)
struct UItemMoveValidatorComponent : UItemComponentBase
{
	struct AActor* MoveItemOldOwner;  // 0x100 (0x100)
	struct AActor* MoveItemNewOwner;  // 0x108 (0x108)
	struct FItemData MoveItemOldData;  // 0x110 (0x110)
	struct TArray<struct FItemData> MoveItemNewDataArray;  // 0x1B0 (0x1B0)
	struct TArray<struct FItemData> SwapItemOldDataArray;  // 0x1C0 (0x1C0)
	struct TArray<struct FItemData> SwapItemNewDataArray;  // 0x1D0 (0x1D0)
	struct FGameplayTagContainer BlockedTags;  // 0x1E0 (0x1E0)


	void ServerMoveItem(struct FItemData OldItemData, struct TArray<struct FItemData> NewItemDataArray, struct AActor* OldOwner, struct AActor* NewOwner, bool bHasDelay); // Function DungeonCrawler.ItemMoveValidatorComponent.ServerMoveItem
	bool IsEnableMoveItem(struct FItemData& OldItemData, struct TArray<struct FItemData>& NewItemDataArray, struct AActor* OldOwner, struct AActor* NewOwner); // Function DungeonCrawler.ItemMoveValidatorComponent.IsEnableMoveItem
	void ClientShowMessage(struct FText OutputMessage); // Function DungeonCrawler.ItemMoveValidatorComponent.ClientShowMessage
	void ClientMoveItemEnd(bool bMoveSucceed, struct TArray<struct FItemData> MovedItemDataArray); // Function DungeonCrawler.ItemMoveValidatorComponent.ClientMoveItemEnd
}; 
 
 


// Class DungeonCrawler.DCItemWidgetBase
// Size: 0x4C8(Inherited: 0x368)
struct UDCItemWidgetBase : UDCControlWidgetBase
{
	char pad_872[48];  // 0x368 (0x368)
	struct FDCItemInfo ItemInfo;  // 0x398 (0x398)
	int32_t Count;  // 0x4B0 (0x4B0)
	char pad_1204_1 : 7;  // 0x4B4 (0x4B4)
	bool bIsLocked : 1;  // 0x4B4 (0x4B4)
	char pad_1205[3];  // 0x4B5 (0x4B5)
	struct UDCItemDataAsset* DataAsset;  // 0x4B8 (0x4B8)
	char pad_1216_1 : 7;  // 0x4C0 (0x4C0)
	bool bSet : 1;  // 0x4C0 (0x4C0)
	char pad_1217[7];  // 0x4C1 (0x4C1)


	bool IsSet(); // Function DungeonCrawler.DCItemWidgetBase.IsSet
}; 
 
 


// Class DungeonCrawler.DCItemCommonWidget
// Size: 0x500(Inherited: 0x4C8)
struct UDCItemCommonWidget : UDCItemWidgetBase
{
	UDCItemTooltipWidget* ItemTooltipWidgetClass;  // 0x4C8 (0x4C8)
	UUserWidget* InvalidItemTooltipWidgetClass;  // 0x4D0 (0x4D0)
	UDCItemDragVisualWidget* ItemDragVisualWidgetClass;  // 0x4D8 (0x4D8)
	char pad_1248_1 : 7;  // 0x4E0 (0x4E0)
	bool bIsDragging : 1;  // 0x4E0 (0x4E0)
	char pad_1249[7];  // 0x4E1 (0x4E1)
	struct UImage* ItemImage;  // 0x4E8 (0x4E8)
	char pad_1264[16];  // 0x4F0 (0x4F0)


	void OnDragDropFinished(struct UDragDropOperation* Operation); // Function DungeonCrawler.DCItemCommonWidget.OnDragDropFinished
	struct UUserWidget* GetTooltipWidget(); // Function DungeonCrawler.DCItemCommonWidget.GetTooltipWidget
}; 
 
 


// Class DungeonCrawler.DCInventoryWidgetBase
// Size: 0x2C0(Inherited: 0x278)
struct UDCInventoryWidgetBase : UUserWidget
{
	char pad_632[48];  // 0x278 (0x278)
	char pad_680_1 : 7;  // 0x2A8 (0x2A8)
	bool bReadOnly : 1;  // 0x2A8 (0x2A8)
	char pad_681[7];  // 0x2A9 (0x2A9)
	struct TArray<struct UDCInventoryWidgetBase*> ChildInventoryWidgets;  // 0x2B0 (0x2B0)


	void OnWidgetVisibilityChanged(uint8_t Invisibility); // Function DungeonCrawler.DCInventoryWidgetBase.OnWidgetVisibilityChanged
	void OnItemMoveEvent(uint8_t SourceInventoryId, struct FDCItemInfo& SourceItemInfo, uint8_t TargetInventoryId, int32_t TargetIndex, int32_t TargetStack); // Function DungeonCrawler.DCInventoryWidgetBase.OnItemMoveEvent
	void OnItemActionEvent(uint8_t SourceInventoryId, struct FDCItemInfo& SourceItemInfo, uint8_t ActionType); // Function DungeonCrawler.DCInventoryWidgetBase.OnItemActionEvent
}; 
 
 


// Class DungeonCrawler.DCBagWidget
// Size: 0x3B0(Inherited: 0x2C0)
struct UDCBagWidget : UDCInventoryWidgetBase
{
	UDCBagSlotWidget* SlotWidgetClass;  // 0x2C0 (0x2C0)
	UDCBagItemWidget* ItemWidgetClass;  // 0x2C8 (0x2C8)
	UDCInputNumberWidget* SplitWidgetClass;  // 0x2D0 (0x2D0)
	struct UInputAction* SplitInputAction;  // 0x2D8 (0x2D8)
	struct UVerticalBox* SlotRowsVerticalBox;  // 0x2E0 (0x2E0)
	struct UCanvasPanel* ItemAreaCanvas;  // 0x2E8 (0x2E8)
	struct UDCBoxInventory* Inventory;  // 0x2F0 (0x2F0)
	struct UDCInputNumberWidget* SplitWidget;  // 0x2F8 (0x2F8)
	struct TMap<struct FDCItemId, struct UDCBagItemWidget*> ItemWidgets;  // 0x300 (0x300)
	char pad_848[96];  // 0x350 (0x350)


	void OnDragCanceled(struct UDragDropOperation* Operation); // Function DungeonCrawler.DCBagWidget.OnDragCanceled
	struct TMap<struct FDCItemId, struct UDCBagItemWidget*> GetItemWidgets(); // Function DungeonCrawler.DCBagWidget.GetItemWidgets
	int32_t GetGoldAmount(); // Function DungeonCrawler.DCBagWidget.GetGoldAmount
}; 
 
 


// Class DungeonCrawler.DCInventoryBase
// Size: 0x170(Inherited: 0x28)
struct UDCInventoryBase : UObject
{
	char pad_40[24];  // 0x28 (0x28)
	uint8_t InventoryId;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	struct TArray<int32_t> Indexes;  // 0x48 (0x48)
	struct TMap<int32_t, struct FDCItemId> KeyByIndex;  // 0x58 (0x58)
	struct TMap<struct FDCItemId, struct FDCItemInfo> Values;  // 0xA8 (0xA8)
	struct ACharacter* OwnerCharacter;  // 0xF8 (0xF8)
	struct FDCInventoryData InitData;  // 0x100 (0x100)
	struct TMap<uint8_t, struct UDCInventoryValidatorBase*> Validators;  // 0x120 (0x120)


	void OnRep_InitData(struct FDCInventoryData& OldInitData); // Function DungeonCrawler.DCInventoryBase.OnRep_InitData
	void OnRep_Indexes(struct TArray<int32_t>& OldIndexes); // Function DungeonCrawler.DCInventoryBase.OnRep_Indexes
	void OnCharacterPerkUpdated(); // Function DungeonCrawler.DCInventoryBase.OnCharacterPerkUpdated
}; 
 
 


// Class DungeonCrawler.DCBoxInventory
// Size: 0x178(Inherited: 0x170)
struct UDCBoxInventory : UDCInventoryBase
{
	struct FIntPoint BoxSize;  // 0x170 (0x170)


}; 
 
 


// Class DungeonCrawler.DCCaptureStudioActor
// Size: 0x2B8(Inherited: 0x290)
struct ADCCaptureStudioActor : AActor
{
	struct UDCSceneCaptureComponent2D* SceneCaptureComponent;  // 0x290 (0x290)
	struct UDCRotatorComponent* RotatorComponent;  // 0x298 (0x298)
	struct UChildActorComponent* CaptureTargetComponent;  // 0x2A0 (0x2A0)
	struct FUint32Point RenderTargetSize;  // 0x2A8 (0x2A8)
	struct UTextureRenderTarget2D* RenderTarget;  // 0x2B0 (0x2B0)


}; 
 
 


// Class DungeonCrawler.DCCaptureStudioWidget
// Size: 0x298(Inherited: 0x278)
struct UDCCaptureStudioWidget : UUserWidget
{
	struct UImage* RenderTargetImage;  // 0x278 (0x278)
	struct ADCCaptureStudioActor* CaptureStudioActor;  // 0x280 (0x280)
	struct UMaterialInstanceDynamic* DynamicInstanceMaterial;  // 0x288 (0x288)
	char pad_656_1 : 7;  // 0x290 (0x290)
	bool bIsDragging : 1;  // 0x290 (0x290)
	char pad_657_1 : 7;  // 0x291 (0x291)
	bool bIsRotatingLeft : 1;  // 0x291 (0x291)
	char pad_658_1 : 7;  // 0x292 (0x292)
	bool bIsRotatingRight : 1;  // 0x292 (0x292)
	char pad_659[5];  // 0x293 (0x293)


}; 
 
 


// Class DungeonCrawler.DCLobbyHUD
// Size: 0x440(Inherited: 0x390)
struct ADCLobbyHUD : ADCHUD
{
	struct TMap<uint8_t, ADCCaptureStudioActor*> CaptureStudioActorClasses;  // 0x390 (0x390)
	struct TMap<uint8_t, struct ADCCaptureStudioActor*> CaptureStudioActors;  // 0x3E0 (0x3E0)
	ADCItemSkinViewerActor* ItemSkinViewerActorClass;  // 0x430 (0x430)
	struct ADCItemSkinViewerActor* ItemSkinViewerActor;  // 0x438 (0x438)


}; 
 
 


// Class DungeonCrawler.DesignDataAssetSkill
// Size: 0x100(Inherited: 0x38)
struct UDesignDataAssetSkill : UDCDesignDataAssetBase
{
	struct FDesignDataSkill Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCChannelChatWidget
// Size: 0x418(Inherited: 0x3B8)
struct UDCChannelChatWidget : UChatSetWidgetBase
{
	char pad_952[16];  // 0x3B8 (0x3B8)
	struct FText Title;  // 0x3C8 (0x3C8)
	struct FString Nickname;  // 0x3E0 (0x3E0)
	struct TArray<uint8_t> ContextOptions;  // 0x3F0 (0x3F0)
	char pad_1024[24];  // 0x400 (0x400)


	void OnNickname(); // Function DungeonCrawler.DCChannelChatWidget.OnNickname
}; 
 
 


// Class DungeonCrawler.LobbyUserSlotBase
// Size: 0x15F0(Inherited: 0x1580)
struct ULobbyUserSlotBase : UDCCommonButtonBase
{
	struct FNickname Nickname;  // 0x1580 (0x1580)
	struct FText LevelText;  // 0x15A8 (0x15A8)
	struct FText ClassNameText;  // 0x15C0 (0x15C0)
	struct UTexture2D* ClassIconImage;  // 0x15D8 (0x15D8)
	struct UTexture2D* ClassPortraitImage;  // 0x15E0 (0x15E0)
	char pad_5608[8];  // 0x15E8 (0x15E8)


	void SetNicknameBlueprint(struct FNickname InNickName); // Function DungeonCrawler.LobbyUserSlotBase.SetNicknameBlueprint
}; 
 
 


// Class DungeonCrawler.DCPartyMemberActorStatusRow
// Size: 0x2A0(Inherited: 0x278)
struct UDCPartyMemberActorStatusRow : UUserWidget
{
	struct UGameActorStatusSlotWidget* PartyMemberActorStatusEntry1;  // 0x278 (0x278)
	struct UGameActorStatusSlotWidget* PartyMemberActorStatusEntry2;  // 0x280 (0x280)
	struct UGameActorStatusSlotWidget* PartyMemberActorStatusEntry3;  // 0x288 (0x288)
	struct TArray<struct UGameActorStatusSlotWidget*> PartyMemberActorStatusEntries;  // 0x290 (0x290)


}; 
 
 


// Class DungeonCrawler.DCChannelPlayerListEntryWidget
// Size: 0x1660(Inherited: 0x15F0)
struct UDCChannelPlayerListEntryWidget : ULobbyUserSlotBase
{
	char pad_5616[8];  // 0x15F0 (0x15F0)
	struct FDCChannelPlayerWidgetInfo Info;  // 0x15F8 (0x15F8)


	void OnRightClicked(); // Function DungeonCrawler.DCChannelPlayerListEntryWidget.OnRightClicked
}; 
 
 


// Class DungeonCrawler.DCLocalLoginSaveGame
// Size: 0x48(Inherited: 0x28)
struct UDCLocalLoginSaveGame : USaveGame
{
	struct FString IpAddress;  // 0x28 (0x28)
	struct FString Nickname;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCMerchantDealTablePurchaseWidget
// Size: 0x2A8(Inherited: 0x278)
struct UDCMerchantDealTablePurchaseWidget : UUserWidget
{
	struct UDCCommonButtonBase* ButtonFill;  // 0x278 (0x278)
	struct UDCCommonButtonBase* ButtonDeal;  // 0x280 (0x280)
	char pad_648_1 : 7;  // 0x288 (0x288)
	bool bBuy : 1;  // 0x288 (0x288)
	char pad_649[7];  // 0x289 (0x289)
	struct UDCMerchantInfoWidget* MerchantInfoWidget;  // 0x290 (0x290)
	struct UDCMerchantItemWidget* TargetItemWidget;  // 0x298 (0x298)
	struct UListView* RequiredListView;  // 0x2A0 (0x2A0)


	void OnButtonFill(); // Function DungeonCrawler.DCMerchantDealTablePurchaseWidget.OnButtonFill
	void OnButtonDeal(); // Function DungeonCrawler.DCMerchantDealTablePurchaseWidget.OnButtonDeal
	bool IsTargetItemSet(); // Function DungeonCrawler.DCMerchantDealTablePurchaseWidget.IsTargetItemSet
	bool IsRequiredItemsFilled(); // Function DungeonCrawler.DCMerchantDealTablePurchaseWidget.IsRequiredItemsFilled
}; 
 
 


// Class DungeonCrawler.DCGameTooltipWithFlavorTextWidget
// Size: 0x2C0(Inherited: 0x278)
struct UDCGameTooltipWithFlavorTextWidget : UUserWidget
{
	struct FText TitleText;  // 0x278 (0x278)
	struct FText DescriptionText;  // 0x290 (0x290)
	struct FText FlavorText;  // 0x2A8 (0x2A8)


	uint8_t GetDescriptionVisibility(); // Function DungeonCrawler.DCGameTooltipWithFlavorTextWidget.GetDescriptionVisibility
}; 
 
 


// Class DungeonCrawler.InventorySkillListWidgetBase
// Size: 0x390(Inherited: 0x328)
struct UInventorySkillListWidgetBase : USkillListWidgetBase
{
	USkillWidget* SkillWidgetClass;  // 0x328 (0x328)
	struct TArray<struct UPanelWidget*> SkillWidgetParentArray;  // 0x330 (0x330)
	struct TMap<struct UPanelWidget*, struct USkillWidget*> SkillWidgetMap;  // 0x340 (0x340)


}; 
 
 


// Class DungeonCrawler.DCChannelPlayerListWidget
// Size: 0x2F8(Inherited: 0x278)
struct UDCChannelPlayerListWidget : UUserWidget
{
	struct UVerticalBox* LocalPlayersVerticalBox;  // 0x278 (0x278)
	UDCChannelPlayerListEntryWidget* ChannelPlayerListEntryWidgetClass;  // 0x280 (0x280)
	struct UListView* PlayerListView;  // 0x288 (0x288)
	struct UEditableTextBox* SearchTextBox;  // 0x290 (0x290)
	struct TMap<struct FDCAccountId, struct UDCChannelPlayerListEntryWidgetData*> ListItems;  // 0x298 (0x298)
	char pad_744[16];  // 0x2E8 (0x2E8)


	void OnSearchTextChanged(struct FText& Keyword); // Function DungeonCrawler.DCChannelPlayerListWidget.OnSearchTextChanged
}; 
 
 


// Class DungeonCrawler.DCEquipmentWidget
// Size: 0x3C8(Inherited: 0x2C0)
struct UDCEquipmentWidget : UDCInventoryWidgetBase
{
	char pad_704_1 : 7;  // 0x2C0 (0x2C0)
	bool bShowSoulHeart : 1;  // 0x2C0 (0x2C0)
	char pad_705[7];  // 0x2C1 (0x2C1)
	struct UDCEquipInventory* Inventory;  // 0x2C8 (0x2C8)
	struct UDCEquipmentSlotWidget* WeaponL1SlotWidget;  // 0x2D0 (0x2D0)
	struct UDCEquipmentSlotWidget* WeaponL2SlotWidget;  // 0x2D8 (0x2D8)
	struct UDCEquipmentSlotWidget* WeaponR1SlotWidget;  // 0x2E0 (0x2E0)
	struct UDCEquipmentSlotWidget* WeaponR2SlotWidget;  // 0x2E8 (0x2E8)
	struct UDCEquipmentSlotWidget* UtilityL1SlotWidget;  // 0x2F0 (0x2F0)
	struct UDCEquipmentSlotWidget* UtilityL2SlotWidget;  // 0x2F8 (0x2F8)
	struct UDCEquipmentSlotWidget* UtilityL3SlotWidget;  // 0x300 (0x300)
	struct UDCEquipmentSlotWidget* UtilityR1SlotWidget;  // 0x308 (0x308)
	struct UDCEquipmentSlotWidget* UtilityR2SlotWidget;  // 0x310 (0x310)
	struct UDCEquipmentSlotWidget* UtilityR3SlotWidget;  // 0x318 (0x318)
	struct UDCEquipmentSlotWidget* ArmorHeadSlotWidget;  // 0x320 (0x320)
	struct UDCEquipmentSlotWidget* ArmorChestSlotWidget;  // 0x328 (0x328)
	struct UDCEquipmentSlotWidget* ArmorHandsSlotWidget;  // 0x330 (0x330)
	struct UDCEquipmentSlotWidget* ArmorLegsSlotWidget;  // 0x338 (0x338)
	struct UDCEquipmentSlotWidget* ArmorFootSlotWidget;  // 0x340 (0x340)
	struct UDCEquipmentSlotWidget* ArmorBackSlotWidget;  // 0x348 (0x348)
	struct UDCEquipmentSlotWidget* AccessoryNecklaceSlotWidget;  // 0x350 (0x350)
	struct UDCEquipmentSlotWidget* AccessoryRing1SlotWidget;  // 0x358 (0x358)
	struct UDCEquipmentSlotWidget* AccessoryRing2SlotWidget;  // 0x360 (0x360)
	struct UDCEquipmentSlotWidget* SoulHeartSlotWidget;  // 0x368 (0x368)
	struct TMap<uint8_t, struct UDCEquipmentSlotWidget*> SlotWidgets;  // 0x370 (0x370)
	uint8_t PrevDropPreview;  // 0x3C0 (0x3C0)
	char pad_961[7];  // 0x3C1 (0x3C1)


	struct UDCEquipmentSlotWidget* GetSlotWidget(uint8_t Index); // Function DungeonCrawler.DCEquipmentWidget.GetSlotWidget
}; 
 
 


// Class DungeonCrawler.DCCharacterPartsArtData
// Size: 0xD8(Inherited: 0x38)
struct UDCCharacterPartsArtData : UDCDataAssetBase
{
	struct TMap<uint8_t, struct USkeletalMesh*> BodyParts;  // 0x38 (0x38)
	struct TMap<uint8_t, struct USkeletalMesh*> DefaultParts;  // 0x88 (0x88)


}; 
 
 


// Class DungeonCrawler.DCCharacterProduction
// Size: 0x670(Inherited: 0x620)
struct ADCCharacterProduction : ACharacter
{
	struct USkeletalMeshComponent* PartHead;  // 0x620 (0x620)
	struct USkeletalMeshComponent* PartHelmet;  // 0x628 (0x628)
	struct USkeletalMeshComponent* PartGloves;  // 0x630 (0x630)
	struct USkeletalMeshComponent* PartChest;  // 0x638 (0x638)
	struct USkeletalMeshComponent* PartPants;  // 0x640 (0x640)
	struct USkeletalMeshComponent* PartBoots;  // 0x648 (0x648)
	struct USkeletalMeshComponent* PartBack;  // 0x650 (0x650)
	struct TArray<struct FString> ItemAssetIDList;  // 0x658 (0x658)
	struct USkeletalMesh* SkelMesh;  // 0x668 (0x668)


	void OnRep_ItemDataList(struct TArray<struct FString>& OldItemAssetIDList); // Function DungeonCrawler.DCCharacterProduction.OnRep_ItemDataList
	void OnRep_ChangeHeadMesh(); // Function DungeonCrawler.DCCharacterProduction.OnRep_ChangeHeadMesh
	void OnItemEquip(); // Function DungeonCrawler.DCCharacterProduction.OnItemEquip
}; 
 
 


// Class DungeonCrawler.InjectionItemPropertyListEntryWidgetBase
// Size: 0x2C8(Inherited: 0x2A0)
struct UInjectionItemPropertyListEntryWidgetBase : UCommonUserWidget
{
	char pad_672[8];  // 0x2A0 (0x2A0)
	struct FText ItemPropertTypeText;  // 0x2A8 (0x2A8)
	char pad_704_1 : 7;  // 0x2C0 (0x2C0)
	bool bIsSelected : 1;  // 0x2C0 (0x2C0)
	char pad_705[7];  // 0x2C1 (0x2C1)


}; 
 
 


// Class DungeonCrawler.DesignDataAssetMonster
// Size: 0xC0(Inherited: 0x38)
struct UDesignDataAssetMonster : UDCDesignDataAssetBase
{
	struct FDesignDataMonster Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCCharacterSelectCapture
// Size: 0x840(Inherited: 0x840)
struct ADCCharacterSelectCapture : ADCCharacterLobbyCapture
{
	char pad_2112_1 : 7;  // 0x840 (0x840)
	bool bIsEmpty : 1;  // 0x838 (0x838)


}; 
 
 


// Class DungeonCrawler.DCCharacterSkinComponent
// Size: 0xC8(Inherited: 0xA0)
struct UDCCharacterSkinComponent : UActorComponent
{
	struct UDCCharacterSkinDataAsset* Data;  // 0xA0 (0xA0)
	struct TArray<struct FGameplayAbilitySpecHandle> OwnerGameplayAbilitySpecHandles;  // 0xA8 (0xA8)
	struct TArray<struct FActiveGameplayEffectHandle> OwnerGameplayEffectHandles;  // 0xB8 (0xB8)


	void SetDataForDebug_Server(struct UDCCharacterSkinDataAsset* InData); // Function DungeonCrawler.DCCharacterSkinComponent.SetDataForDebug_Server
	void OnRep_Data(struct UDCCharacterSkinDataAsset* OldData); // Function DungeonCrawler.DCCharacterSkinComponent.OnRep_Data
}; 
 
 


// Class DungeonCrawler.DCCharacterSkinDataAsset
// Size: 0xF8(Inherited: 0x38)
struct UDCCharacterSkinDataAsset : UDCTableDataAsset
{
	struct FText Name;  // 0x38 (0x38)
	struct TSoftObjectPtr<UDescData> Desc;  // 0x50 (0x50)
	struct FText FlavorText;  // 0x80 (0x80)
	struct TSoftObjectPtr<UDCCharacterSkinArtData> Art;  // 0x98 (0x98)
	struct TArray<uint8_t> TargetCharacterClasses;  // 0xC8 (0xC8)
	struct TArray<struct TSoftObjectPtr<UDCGameplayAbilityDataAsset>> Abilities;  // 0xD8 (0xD8)
	struct TArray<struct TSoftObjectPtr<UDCGameplayEffectDataAsset>> Effects;  // 0xE8 (0xE8)


}; 
 
 


// Class DungeonCrawler.DCEquipmentSlot
// Size: 0x38(Inherited: 0x28)
struct UDCEquipmentSlot : UObject
{
	uint8_t SlotIndex;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct UItem* Item;  // 0x30 (0x30)


}; 
 
 


// Class DungeonCrawler.GameMenuOptionsControlsWidget
// Size: 0x4F8(Inherited: 0x440)
struct UGameMenuOptionsControlsWidget : UDCCommonActivatableWidgetBase
{
	struct UGameMenuOptionSliderWidget* WB_MouseSensitivity;  // 0x440 (0x440)
	struct UGameMenuOptionToggleSwitchWidget* WB_InvertMouseVerticalAxis;  // 0x448 (0x448)
	struct UGameMenuOptionToggleSwitchWidget* WB_InvertMouseHorizontalAxis;  // 0x450 (0x450)
	struct UButton* EnglishButton;  // 0x458 (0x458)
	struct UButton* KoreanButton;  // 0x460 (0x460)
	struct UButton* JapaneseButton;  // 0x468 (0x468)
	struct UButton* TraditionalChineseButton;  // 0x470 (0x470)
	struct UButton* SimplifiedChineseButton;  // 0x478 (0x478)
	struct UGameMenuOptionToggleSwitchWidget* WB_StreamingMode;  // 0x480 (0x480)
	struct UGameMenuOptionToggleSwitchWidget* AutoFillUtilitySlotWidget;  // 0x488 (0x488)
	struct FDataTableRowHandle ApplyInputActionData;  // 0x490 (0x490)
	char pad_1184[8];  // 0x4A0 (0x4A0)
	struct FDataTableRowHandle ResetInputActionData;  // 0x4A8 (0x4A8)
	char pad_1208[64];  // 0x4B8 (0x4B8)


	void OnTraditionalChineseButtonClicked(); // Function DungeonCrawler.GameMenuOptionsControlsWidget.OnTraditionalChineseButtonClicked
	void OnStreamingModeClicked(bool IsClick); // Function DungeonCrawler.GameMenuOptionsControlsWidget.OnStreamingModeClicked
	void OnSimplifiedChineseButtonClicked(); // Function DungeonCrawler.GameMenuOptionsControlsWidget.OnSimplifiedChineseButtonClicked
	void OnResetButtonClicked(); // Function DungeonCrawler.GameMenuOptionsControlsWidget.OnResetButtonClicked
	void OnMouseSensitivitySliderValueChanged(float InValue); // Function DungeonCrawler.GameMenuOptionsControlsWidget.OnMouseSensitivitySliderValueChanged
	void OnKoreanButtonClicked(); // Function DungeonCrawler.GameMenuOptionsControlsWidget.OnKoreanButtonClicked
	void OnJapaneseButtonClicked(); // Function DungeonCrawler.GameMenuOptionsControlsWidget.OnJapaneseButtonClicked
	void OnInvertMouseVerticalAxisClicked(bool IsClick); // Function DungeonCrawler.GameMenuOptionsControlsWidget.OnInvertMouseVerticalAxisClicked
	void OnInvertMouseHorizontalAxisClicked(bool IsClick); // Function DungeonCrawler.GameMenuOptionsControlsWidget.OnInvertMouseHorizontalAxisClicked
	void OnGameUserSettingControls(struct FGameUserSettingControls& NewValue, struct FGameUserSettingControls& OldValue); // Function DungeonCrawler.GameMenuOptionsControlsWidget.OnGameUserSettingControls
	void OnEnglishButtonClicked(); // Function DungeonCrawler.GameMenuOptionsControlsWidget.OnEnglishButtonClicked
	void OnAutoFillUtilitySlotClicked(bool IsClick); // Function DungeonCrawler.GameMenuOptionsControlsWidget.OnAutoFillUtilitySlotClicked
	void OnApplyButtonClicked(); // Function DungeonCrawler.GameMenuOptionsControlsWidget.OnApplyButtonClicked
}; 
 
 


// Class DungeonCrawler.DesignDataAssetPlayerCharacter
// Size: 0x150(Inherited: 0x38)
struct UDesignDataAssetPlayerCharacter : UDCDesignDataAssetBase
{
	struct FDesignDataPlayerCharacter Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCCharacterSkinListEntryWidgetData
// Size: 0x38(Inherited: 0x28)
struct UDCCharacterSkinListEntryWidgetData : UObject
{
	struct FDCCharacterSkinInfo CharacterSkinInfo;  // 0x28 (0x28)


}; 
 
 


// Class DungeonCrawler.DCCharacterSkinWidget
// Size: 0x3F0(Inherited: 0x368)
struct UDCCharacterSkinWidget : UDCControlWidgetBase
{
	char pad_872[24];  // 0x368 (0x368)
	struct FText CharacterSkinName;  // 0x380 (0x380)
	struct TArray<struct FText> CharacterSkinDescTextArray;  // 0x398 (0x398)
	struct FText CharacterSkinFlavorText;  // 0x3A8 (0x3A8)
	struct UTexture2D* CharacterSkinIconTexture;  // 0x3C0 (0x3C0)
	struct FPrimaryAssetId CharacterSkinId;  // 0x3C8 (0x3C8)
	char pad_984_1 : 7;  // 0x3D8 (0x3D8)
	bool bIsEquipped : 1;  // 0x3D8 (0x3D8)
	char pad_985[7];  // 0x3D9 (0x3D9)
	UDCGameTooltipWithFlavorTextWidget* TooltipWidgetClass;  // 0x3E0 (0x3E0)
	struct UDCGameTooltipWithFlavorTextWidget* SkinTooltipWidget;  // 0x3E8 (0x3E8)


	struct UUserWidget* GetTooltipWidget(); // Function DungeonCrawler.DCCharacterSkinWidget.GetTooltipWidget
}; 
 
 


// Class DungeonCrawler.DCMonsterAIController
// Size: 0x450(Inherited: 0x3B8)
struct ADCMonsterAIController : AAIController
{
	char pad_952[88];  // 0x3B8 (0x3B8)
	struct UBaseObject* BaseObject;  // 0x410 (0x410)
	char pad_1048[16];  // 0x418 (0x418)
	struct FGameplayTagContainer TargetInvisibleStateTagContainer;  // 0x428 (0x428)
	char pad_1096[8];  // 0x448 (0x448)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.DCMonsterAIController.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.DCMonsterAIController.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.DCMonsterAIController.TerminateBase
	void OnTargetPerceptionUpdated(struct AActor* Actor, struct FAIStimulus Stimulus); // Function DungeonCrawler.DCMonsterAIController.OnTargetPerceptionUpdated
	void OnTargetPerceptionInfoUpdated(struct FActorPerceptionUpdateInfo& UpdateInfo); // Function DungeonCrawler.DCMonsterAIController.OnTargetPerceptionInfoUpdated
	void OnPerceptionUpdated(struct TArray<struct AActor*>& UpdatedActors); // Function DungeonCrawler.DCMonsterAIController.OnPerceptionUpdated
	void ForceSightAll(bool bIsForce); // Function DungeonCrawler.DCMonsterAIController.ForceSightAll
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.DCMonsterAIController.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.ImpactableComponent
// Size: 0x118(Inherited: 0xA0)
struct UImpactableComponent : UActorComponent
{
	char pad_160[88];  // 0xA0 (0xA0)
	struct FMulticastInlineDelegate ImpactEnduranceExhausted;  // 0xF8 (0xF8)
	struct TArray<struct UTagQueryData*> ImpactableTagQueryArray;  // 0x108 (0x108)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.ImpactableComponent.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.ImpactableComponent.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.ImpactableComponent.TerminateBase
	void SetImpactableQuery(struct TArray<struct FPrimaryAssetId> TagQueryDatas); // Function DungeonCrawler.ImpactableComponent.SetImpactableQuery
	struct TArray<struct UTagQueryData*> GetImpactableTagQueryArray(); // Function DungeonCrawler.ImpactableComponent.GetImpactableTagQueryArray
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.ImpactableComponent.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.DCClassPerkSkillPageWidget
// Size: 0x468(Inherited: 0x460)
struct UDCClassPerkSkillPageWidget : UClassGroupWidgetBase
{
	struct UDCCaptureStudioWidget* CaptureStudioWidget;  // 0x460 (0x460)


}; 
 
 


// Class DungeonCrawler.DCUserInfoManagerBase
// Size: 0x30(Inherited: 0x28)
struct UDCUserInfoManagerBase : UObject
{
	char pad_40[8];  // 0x28 (0x28)


}; 
 
 


// Class DungeonCrawler.DCClientAccountManager
// Size: 0xF8(Inherited: 0x30)
struct UDCClientAccountManager : UDCUserInfoManagerBase
{
	char pad_48[16];  // 0x30 (0x30)
	struct TMap<struct FDCAccountId, struct FDCClientAccountInfo> Infos;  // 0x40 (0x40)
	char pad_144[104];  // 0x90 (0x90)


}; 
 
 


// Class DungeonCrawler.DCStateButtonWidgetBase
// Size: 0x15A0(Inherited: 0x1580)
struct UDCStateButtonWidgetBase : UDCCommonButtonBase
{
	char pad_5504[32];  // 0x1580 (0x1580)


	void SetActive(bool bState); // Function DungeonCrawler.DCStateButtonWidgetBase.SetActive
	void OnCommonButtonClickedInternal(); // Function DungeonCrawler.DCStateButtonWidgetBase.OnCommonButtonClickedInternal
}; 
 
 


// Class DungeonCrawler.DCClientReportPlayerManager
// Size: 0xF0(Inherited: 0x30)
struct UDCClientReportPlayerManager : UDCUserInfoManagerBase
{
	char pad_48[48];  // 0x30 (0x30)
	struct FDCReportPlayerInfo ReportInfo;  // 0x60 (0x60)
	struct TArray<struct FDCReportedInfo> ReportedInfoArray;  // 0xD0 (0xD0)
	struct TArray<struct FDCReportPlayerResultInfo> ReportResultInfoArray;  // 0xE0 (0xE0)


}; 
 
 


// Class DungeonCrawler.DCClientShopManager
// Size: 0x358(Inherited: 0x30)
struct UDCClientShopManager : UDCUserInfoManagerBase
{
	char pad_48[120];  // 0x30 (0x30)
	struct FDCClientShopInfo ShopInfo;  // 0xA8 (0xA8)
	struct TArray<struct FDCGiftCodeRewardInfo> GiftCodeRewards;  // 0x348 (0x348)


}; 
 
 


// Class DungeonCrawler.GameMenuWidget
// Size: 0x490(Inherited: 0x440)
struct UGameMenuWidget : UDCCommonActivatableWidgetBase
{
	struct UButton* ContinueButton;  // 0x440 (0x440)
	struct UButton* OptionsButton;  // 0x448 (0x448)
	struct UButton* LobbyButton;  // 0x450 (0x450)
	struct UButton* CharacterSelectButton;  // 0x458 (0x458)
	struct UButton* ExitButton;  // 0x460 (0x460)
	struct UGameMenuOptionsWidget* GameMenuOptionsWidget;  // 0x468 (0x468)
	struct UGameMenuOptionPopupWidget* WB_DisplayApplyPopup;  // 0x470 (0x470)
	struct FDataTableRowHandle BackInputActionData;  // 0x478 (0x478)
	char pad_1160[8];  // 0x488 (0x488)


	void OnOptionsButtonClicked(); // Function DungeonCrawler.GameMenuWidget.OnOptionsButtonClicked
	void OnMenuPop(); // Function DungeonCrawler.GameMenuWidget.OnMenuPop
	void OnLobbyButtonClicked(); // Function DungeonCrawler.GameMenuWidget.OnLobbyButtonClicked
	void OnExitButtonClicked(); // Function DungeonCrawler.GameMenuWidget.OnExitButtonClicked
	void OnDisplayOptionApplyPopup(); // Function DungeonCrawler.GameMenuWidget.OnDisplayOptionApplyPopup
	void OnContinueButtonClicked(); // Function DungeonCrawler.GameMenuWidget.OnContinueButtonClicked
	void OnCharacterSelectClicked(); // Function DungeonCrawler.GameMenuWidget.OnCharacterSelectClicked
}; 
 
 


// Class DungeonCrawler.DCCommunityBlockEntryWidgetData
// Size: 0x78(Inherited: 0x28)
struct UDCCommunityBlockEntryWidgetData : UObject
{
	struct FDCCommunityCharacterInfo Info;  // 0x28 (0x28)


}; 
 
 


// Class DungeonCrawler.DCLobbyEmoteDataAsset
// Size: 0xC0(Inherited: 0x38)
struct UDCLobbyEmoteDataAsset : UDCTableDataAsset
{
	struct FText Name;  // 0x38 (0x38)
	struct FText FlavorText;  // 0x50 (0x50)
	struct FGameplayTag LobbyEmoteTag;  // 0x68 (0x68)
	struct TSoftObjectPtr<UDCLobbyEmoteArtData> ArtData;  // 0x70 (0x70)
	struct TArray<struct TSoftObjectPtr<UDCGameplayAbilityDataAsset>> Abilities;  // 0xA0 (0xA0)
	struct TArray<struct TSoftObjectPtr<UDCGameplayEffectDataAsset>> Effects;  // 0xB0 (0xB0)


}; 
 
 


// Class DungeonCrawler.VoipPartySettingWidget
// Size: 0x310(Inherited: 0x300)
struct UVoipPartySettingWidget : UDCWidgetBase
{
	struct UListView* PartyMemberSettingListView;  // 0x300 (0x300)
	char pad_776[8];  // 0x308 (0x308)


	void OnVoipGlobalSet(bool InbVoipGlobal); // Function DungeonCrawler.VoipPartySettingWidget.OnVoipGlobalSet
	void OnbVoipGlobal(bool NewValue, bool OldValue); // Function DungeonCrawler.VoipPartySettingWidget.OnbVoipGlobal
}; 
 
 


// Class DungeonCrawler.DCCommunityBlockEntryWidget
// Size: 0x2E8(Inherited: 0x278)
struct UDCCommunityBlockEntryWidget : UUserWidget
{
	char pad_632[8];  // 0x278 (0x278)
	struct FNickname Nickname;  // 0x280 (0x280)
	struct FText CharacterClassName;  // 0x2A8 (0x2A8)
	uint8_t Gender;  // 0x2C0 (0x2C0)
	char pad_705[7];  // 0x2C1 (0x2C1)
	struct UTexture2D* Icon;  // 0x2C8 (0x2C8)
	struct UTexture2D* Portrait;  // 0x2D0 (0x2D0)
	char pad_728_1 : 7;  // 0x2D8 (0x2D8)
	bool bSelect : 1;  // 0x2D8 (0x2D8)
	char pad_729[7];  // 0x2D9 (0x2D9)
	struct UDCContextMenuWidget* ContextMenuWidget;  // 0x2E0 (0x2E0)


	void ExecuteContextMenu(uint8_t Option); // Function DungeonCrawler.DCCommunityBlockEntryWidget.ExecuteContextMenu
	void CleanupContextMenuWidget(); // Function DungeonCrawler.DCCommunityBlockEntryWidget.CleanupContextMenuWidget
}; 
 
 


// Class DungeonCrawler.DCInventoryControllerComponent
// Size: 0xC0(Inherited: 0xA0)
struct UDCInventoryControllerComponent : UActorComponent
{
	struct UDCInventoryComponent* InventoryComponent;  // 0xA0 (0xA0)
	char pad_168[24];  // 0xA8 (0xA8)


}; 
 
 


// Class DungeonCrawler.DCLocalLoginWidget
// Size: 0x278(Inherited: 0x278)
struct UDCLocalLoginWidget : UUserWidget
{


	void OnLoginButtonClicked(struct FString IpAddress, struct FString Nickname); // Function DungeonCrawler.DCLocalLoginWidget.OnLoginButtonClicked
}; 
 
 


// Class DungeonCrawler.GamePartyManageWidget
// Size: 0x368(Inherited: 0x300)
struct UGamePartyManageWidget : UDCWidgetBase
{
	struct UGamePartyManagePartyWidget* NonPartyWidget;  // 0x300 (0x300)
	struct UTileView* PartyTileView;  // 0x308 (0x308)
	struct UAccountLinkAll* AccountLinkAll;  // 0x310 (0x310)
	struct TMap<struct FString, struct UGamePartyManagePartyWidgetData*> GamePartyManagePartyWidgetDataMap;  // 0x318 (0x318)


}; 
 
 


// Class DungeonCrawler.DCGeometryCollectionComponent
// Size: 0xB10(Inherited: 0xB10)
struct UDCGeometryCollectionComponent : UGeometryCollectionComponent
{


}; 
 
 


// Class DungeonCrawler.DCCommunityBlockWidget
// Size: 0x498(Inherited: 0x470)
struct UDCCommunityBlockWidget : ULobbyGroupWidgetBase
{
	int32_t PageIndex;  // 0x470 (0x470)
	char pad_1140[4];  // 0x474 (0x474)
	struct UTileView* TileView;  // 0x478 (0x478)
	struct UButton* ButtonBack;  // 0x480 (0x480)
	struct UDCCommonButtonBase* ButtonPageLeft;  // 0x488 (0x488)
	struct UDCCommonButtonBase* ButtonPageRight;  // 0x490 (0x490)


	void OnEntryHovered(struct UObject* WidgetData, bool bIsHovered); // Function DungeonCrawler.DCCommunityBlockWidget.OnEntryHovered
	void OnButtonPageRight(); // Function DungeonCrawler.DCCommunityBlockWidget.OnButtonPageRight
	void OnButtonPageLeft(); // Function DungeonCrawler.DCCommunityBlockWidget.OnButtonPageLeft
	void OnButtonBack(); // Function DungeonCrawler.DCCommunityBlockWidget.OnButtonBack
	void OnBlockUpdated(); // Function DungeonCrawler.DCCommunityBlockWidget.OnBlockUpdated
	int32_t NumItemsPerPage(); // Function DungeonCrawler.DCCommunityBlockWidget.NumItemsPerPage
	int32_t GetMaxPage(); // Function DungeonCrawler.DCCommunityBlockWidget.GetMaxPage
	void FindId(struct FText& FindText); // Function DungeonCrawler.DCCommunityBlockWidget.FindId
}; 
 
 


// Class DungeonCrawler.DCInputConfigData
// Size: 0xD0(Inherited: 0x30)
struct UDCInputConfigData : UDataAsset
{
	struct TMap<struct FGameplayTag, struct UPlayerMappableInputConfig*> PlayerMappableInputConfigMap;  // 0x30 (0x30)
	struct TMap<struct FGameplayTag, struct UDCInputConfig*> InputConfigMap;  // 0x80 (0x80)


}; 
 
 


// Class DungeonCrawler.DCCommunityManager
// Size: [xA0(Inherited: 0x30)
struct UDCCommunityManager : UDCUserInfoManagerBase
{
	char pad_48[24];  // 0x30 (0x30)
	int32_t MaxBlockCount;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)
	struct TMap<struct FDCCharacterId, struct FDCCommunityCharacterInfo> BlockInfos;  // 0x50 (0x50)


}; 
 
 


// Class DungeonCrawler.DCItemContainerDataAsset
// Size: 0x70(Inherited: 0x38)
struct UDCItemContainerDataAsset : UDCTableDataAsset
{
	struct TSoftObjectPtr<UDCItemDataAsset> ContentsItemId;  // 0x38 (0x38)
	int32_t MaxContentsCount;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)


}; 
 
 


// Class DungeonCrawler.VoipAkComponent
// Size: 0x540(Inherited: 0x4A0)
struct UVoipAkComponent : UAkComponent
{
	struct UAkAudioEvent* SendPlayEvent;  // 0x498 (0x498)
	struct UAkAudioEvent* SendStopEvent;  // 0x4A0 (0x4A0)
	struct UAkAudioEvent* Receive2dPlayEvent;  // 0x4A8 (0x4A8)
	struct UAkAudioEvent* Receive3dPlayEvent;  // 0x4B0 (0x4B0)
	struct UAkAudioEvent* ReceiveStopEvent;  // 0x4B8 (0x4B8)
	struct UAkRtpc* ReceiveSensitivityRtpc;  // 0x4C0 (0x4C0)
	float ReceiveSensitivityMargin;  // 0x4C8 (0x4C8)
	struct UAkRtpc* SendSensitivityRtpc;  // 0x4D0 (0x4D0)
	float SendSensitivityMargin;  // 0x4D8 (0x4D8)
	struct UAkRtpc* GlobalInputVolumeRtpc;  // 0x4E0 (0x4E0)
	struct UAkRtpc* GlobalOutputVolumeRtpc;  // 0x4E8 (0x4E8)
	struct UAkRtpc* ReceiveVolumeRtpc;  // 0x4F0 (0x4F0)
	char pad_1272[72];  // 0x4F8 (0x4F8)


}; 
 
 


// Class DungeonCrawler.DCConstantDataAsset
// Size: 0x40(Inherited: 0x38)
struct UDCConstantDataAsset : UDCTableDataAsset
{
	float FloatValue;  // 0x38 (0x38)
	int32_t Int32Value;  // 0x3C (0x3C)


}; 
 
 


// Class DungeonCrawler.DCContextMenuEntryWidgetData
// Size: 0x38(Inherited: 0x28)
struct UDCContextMenuEntryWidgetData : UObject
{
	uint8_t ContextOption;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct UDCContextMenuWidget* ContextMenuWidget;  // 0x30 (0x30)


}; 
 
 


// Class DungeonCrawler.DCTagCollisionDetectorComponent
// Size: 0x5D0(Inherited: 0x580)
struct UDCTagCollisionDetectorComponent : UBoxComponent
{
	struct FMulticastInlineDelegate OnGameplayTagCollisionDetected;  // 0x578 (0x578)
	struct FGameplayTagQuery GameplayTagQuery;  // 0x588 (0x588)


}; 
 
 


// Class DungeonCrawler.DCContextMenuEntryWidget
// Size: 0x288(Inherited: 0x278)
struct UDCContextMenuEntryWidget : UUserWidget
{
	char pad_632[8];  // 0x278 (0x278)
	uint8_t ContextOption;  // 0x280 (0x280)
	char pad_641[7];  // 0x281 (0x281)


	void Execute(); // Function DungeonCrawler.DCContextMenuEntryWidget.Execute
}; 
 
 


// Class DungeonCrawler.DCEmoteListEntryWidget
// Size: 0x3F8(Inherited: 0x3E8)
struct UDCEmoteListEntryWidget : UDCEmoteWidget
{
	char pad_1000[16];  // 0x3E8 (0x3E8)


	void OnRightClicked(); // Function DungeonCrawler.DCEmoteListEntryWidget.OnRightClicked
	uint8_t GetSelectedVisibility(); // Function DungeonCrawler.DCEmoteListEntryWidget.GetSelectedVisibility
}; 
 
 


// Class DungeonCrawler.DCRecruitComponent
// Size: 0x248(Inherited: 0xA0)
struct UDCRecruitComponent : UActorComponent
{
	char pad_160[144];  // 0xA0 (0xA0)
	struct UDCInventoryComponent* InventoryComponent;  // 0x130 (0x130)
	char pad_312[272];  // 0x138 (0x138)


	void OnItemMoveEvent(uint8_t SourceInventoryId, struct FDCItemInfo& SourceItemInfo, uint8_t TargetInventoryId, int32_t TargetIndex, int32_t TargetStack); // Function DungeonCrawler.DCRecruitComponent.OnItemMoveEvent
	void OnItemActionEvent(uint8_t SourceInventoryId, struct FDCItemInfo& SourceItemInfo, uint8_t ActionType); // Function DungeonCrawler.DCRecruitComponent.OnItemActionEvent
}; 
 
 


// Class DungeonCrawler.DCContextMenuWidget
// Size: 0x2A8(Inherited: 0x278)
struct UDCContextMenuWidget : UUserWidget
{
	char pad_632[32];  // 0x278 (0x278)
	struct UOverlay* RootOverlay;  // 0x298 (0x298)
	struct UListView* ListView;  // 0x2A0 (0x2A0)


}; 
 
 


// Class DungeonCrawler.DCEquipItemActor
// Size: 0x3B0(Inherited: 0x3B0)
struct ADCEquipItemActor : ADCItemActor
{


}; 
 
 


// Class DungeonCrawler.DCMerchantWishListValidator
// Size: 0x38(Inherited: 0x30)
struct UDCMerchantWishListValidator : UDCInventoryValidatorBase
{
	struct UDCMerchantComponent* MerchantComponent;  // 0x30 (0x30)


}; 
 
 


// Class DungeonCrawler.DCCustomizeCharacterSkinListWidget
// Size: 0x320(Inherited: 0x300)
struct UDCCustomizeCharacterSkinListWidget : UDCWidgetBase
{
	char pad_768[24];  // 0x300 (0x300)
	struct UTileView* TileView_CharacterSkinList;  // 0x318 (0x318)


	void OnSetCharacterSkinInfoArray(struct TArray<struct FDCCharacterSkinInfo> CharacterSkinInfoArray); // Function DungeonCrawler.DCCustomizeCharacterSkinListWidget.OnSetCharacterSkinInfoArray
}; 
 
 


// Class DungeonCrawler.DCCustomizeDragVisualWidget
// Size: 0x308(Inherited: 0x300)
struct UDCCustomizeDragVisualWidget : UDCWidgetBase
{
	struct UTexture2D* CustomizeItemTexture;  // 0x300 (0x300)


}; 
 
 


// Class DungeonCrawler.DCLobbyEmoteListEntryWidgetData
// Size: 0x40(Inherited: 0x28)
struct UDCLobbyEmoteListEntryWidgetData : UObject
{
	struct FDCLobbyEmoteInfo LobbyEmoteInfo;  // 0x28 (0x28)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bIsSelected : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


}; 
 
 


// Class DungeonCrawler.DCCustomizeEmoteRadialSlotWidget
// Size: 0x410(Inherited: 0x368)
struct UDCCustomizeEmoteRadialSlotWidget : UDCControlWidgetBase
{
	char pad_872[48];  // 0x368 (0x368)
	struct UTexture2D* EmoteIconTexture;  // 0x398 (0x398)
	struct UImage* EmoteIconImage;  // 0x3A0 (0x3A0)
	struct UTexture2D* PreviewEmoteIconTexture;  // 0x3A8 (0x3A8)
	float EmoteIconAngle;  // 0x3B0 (0x3B0)
	char pad_948[4];  // 0x3B4 (0x3B4)
	struct FText EmoteName;  // 0x3B8 (0x3B8)
	struct FText EmoteFlavorText;  // 0x3D0 (0x3D0)
	UDCGameTooltipWithFlavorTextWidget* TooltipWidgetClass;  // 0x3E8 (0x3E8)
	struct UDCGameTooltipWithFlavorTextWidget* EmoteTooltipWidget;  // 0x3F0 (0x3F0)
	char pad_1016[24];  // 0x3F8 (0x3F8)


	void SetEmoteIconImageAngle(float NewAngle); // Function DungeonCrawler.DCCustomizeEmoteRadialSlotWidget.SetEmoteIconImageAngle
	struct UUserWidget* GetTooltipWidget(); // Function DungeonCrawler.DCCustomizeEmoteRadialSlotWidget.GetTooltipWidget
	uint8_t GetPreviewEmoteVisibility(); // Function DungeonCrawler.DCCustomizeEmoteRadialSlotWidget.GetPreviewEmoteVisibility
	uint8_t GetHighlightVisibility(); // Function DungeonCrawler.DCCustomizeEmoteRadialSlotWidget.GetHighlightVisibility
	uint8_t GetEmoteIconVisibility(); // Function DungeonCrawler.DCCustomizeEmoteRadialSlotWidget.GetEmoteIconVisibility
	uint8_t GetArrowVisibility(); // Function DungeonCrawler.DCCustomizeEmoteRadialSlotWidget.GetArrowVisibility
}; 
 
 


// Class DungeonCrawler.DCItemSkinListEntryWidgetData
// Size: 0x38(Inherited: 0x28)
struct UDCItemSkinListEntryWidgetData : UObject
{
	struct FDCItemSkinInfo ItemSkinInfo;  // 0x28 (0x28)


}; 
 
 


// Class DungeonCrawler.DCCustomizeItemSkinListWidget
// Size: 0x328(Inherited: 0x300)
struct UDCCustomizeItemSkinListWidget : UDCWidgetBase
{
	char pad_768[24];  // 0x300 (0x300)
	struct UTileView* TileView_ItemSkinList;  // 0x318 (0x318)
	struct UDCItemSkinViewerWidgetBase* ItemSkinViewerWidget;  // 0x320 (0x320)


	void OnSetItemSkinInfoArray(struct TArray<struct FDCItemSkinInfo> ItemSkinInfoArray); // Function DungeonCrawler.DCCustomizeItemSkinListWidget.OnSetItemSkinInfoArray
	void OnChangedVisibility(uint8_t InNewVisibility); // Function DungeonCrawler.DCCustomizeItemSkinListWidget.OnChangedVisibility
}; 
 
 


// Class DungeonCrawler.DescDataAbilityWeapon
// Size: 0x58(Inherited: 0x50)
struct UDescDataAbilityWeapon : UDescDataAbility
{
	struct UGlobalData* GlobalData;  // 0x50 (0x50)


}; 
 
 


// Class DungeonCrawler.DCCustomizeLobbyEmoteRadialSlotWidget
// Size: 0x410(Inherited: 0x368)
struct UDCCustomizeLobbyEmoteRadialSlotWidget : UDCControlWidgetBase
{
	char pad_872[48];  // 0x368 (0x368)
	struct UTexture2D* LobbyEmoteIconTexture;  // 0x398 (0x398)
	struct UImage* LobbyEmoteIconImage;  // 0x3A0 (0x3A0)
	struct UTexture2D* PreviewLobbyEmoteIconTexture;  // 0x3A8 (0x3A8)
	float LobbyEmoteIconAngle;  // 0x3B0 (0x3B0)
	char pad_948[4];  // 0x3B4 (0x3B4)
	struct FText LobbyEmoteName;  // 0x3B8 (0x3B8)
	struct FText LobbyEmoteFlavorText;  // 0x3D0 (0x3D0)
	UDCGameTooltipWithFlavorTextWidget* TooltipWidgetClass;  // 0x3E8 (0x3E8)
	struct UDCGameTooltipWithFlavorTextWidget* EmoteTooltipWidget;  // 0x3F0 (0x3F0)
	char pad_1016[24];  // 0x3F8 (0x3F8)


	void SetLobbyEmoteIconImageAngle(float NewAngle); // Function DungeonCrawler.DCCustomizeLobbyEmoteRadialSlotWidget.SetLobbyEmoteIconImageAngle
	struct UUserWidget* GetTooltipWidget(); // Function DungeonCrawler.DCCustomizeLobbyEmoteRadialSlotWidget.GetTooltipWidget
	uint8_t GetPreviewLobbyEmoteVisibility(); // Function DungeonCrawler.DCCustomizeLobbyEmoteRadialSlotWidget.GetPreviewLobbyEmoteVisibility
	uint8_t GetLobbyEmoteIconVisibility(); // Function DungeonCrawler.DCCustomizeLobbyEmoteRadialSlotWidget.GetLobbyEmoteIconVisibility
	uint8_t GetHighlightVisibility(); // Function DungeonCrawler.DCCustomizeLobbyEmoteRadialSlotWidget.GetHighlightVisibility
	uint8_t GetArrowVisibility(); // Function DungeonCrawler.DCCustomizeLobbyEmoteRadialSlotWidget.GetArrowVisibility
}; 
 
 


// Class DungeonCrawler.DCCustomizeLobbyEmoteRadialWidget
// Size: 0x3C0(Inherited: 0x300)
struct UDCCustomizeLobbyEmoteRadialWidget : UDCWidgetBase
{
	struct UDCCustomizeLobbyEmoteRadialSlotWidget* LobbyEmoteRadialSlotWidget_2;  // 0x300 (0x300)
	struct UDCCustomizeLobbyEmoteRadialSlotWidget* LobbyEmoteRadialSlotWidget_3;  // 0x308 (0x308)
	struct UDCCustomizeLobbyEmoteRadialSlotWidget* LobbyEmoteRadialSlotWidget_4;  // 0x310 (0x310)
	struct UDCCustomizeLobbyEmoteRadialSlotWidget* LobbyEmoteRadialSlotWidget_5;  // 0x318 (0x318)
	struct UDCCustomizeLobbyEmoteRadialSlotWidget* LobbyEmoteRadialSlotWidget_6;  // 0x320 (0x320)
	struct UDCCustomizeLobbyEmoteRadialSlotWidget* LobbyEmoteRadialSlotWidget_7;  // 0x328 (0x328)
	struct UDCCustomizeLobbyEmoteRadialSlotWidget* LobbyEmoteRadialSlotWidget_8;  // 0x330 (0x330)
	struct UDCCustomizeLobbyEmoteRadialSlotWidget* LobbyEmoteRadialSlotWidget_9;  // 0x338 (0x338)
	char pad_832[128];  // 0x340 (0x340)


}; 
 
 


// Class DungeonCrawler.DCMerchantDealTableSellWidget
// Size: 0x2E8(Inherited: 0x2C0)
struct UDCMerchantDealTableSellWidget : UDCInventoryWidgetBase
{
	struct UDCCommonButtonBase* ButtonDeal;  // 0x2C0 (0x2C0)
	struct UDCMerchantInfoWidget* MerchantInfoWidget;  // 0x2C8 (0x2C8)
	struct UDCBagWidget* DealTableWidget;  // 0x2D0 (0x2D0)
	struct TArray<struct FDCItemId> PrevItems;  // 0x2D8 (0x2D8)


	void OnInventoryUpdated(); // Function DungeonCrawler.DCMerchantDealTableSellWidget.OnInventoryUpdated
	void OnButtonDeal(); // Function DungeonCrawler.DCMerchantDealTableSellWidget.OnButtonDeal
	bool IsSellEnabled(); // Function DungeonCrawler.DCMerchantDealTableSellWidget.IsSellEnabled
	int32_t GetPrice(); // Function DungeonCrawler.DCMerchantDealTableSellWidget.GetPrice
}; 
 
 


// Class DungeonCrawler.DCShopConfirmPurchasePopupBase
// Size: 0x480(Inherited: 0x440)
struct UDCShopConfirmPurchasePopupBase : UCommonPopupBase
{
	struct UDCShopItemSlotWidget* ShopItemSlot;  // 0x440 (0x440)
	struct UDCCommonButtonBase* Btn_Cancel;  // 0x448 (0x448)
	struct UDCCommonButtonBase* Btn_Confirm;  // 0x450 (0x450)
	int32_t Price;  // 0x458 (0x458)
	char pad_1116[4];  // 0x45C (0x45C)
	struct FText PurchaseItemName;  // 0x460 (0x460)
	struct UDCShopConfirmPurchasePopupData* ConfirmPurchasePopupData;  // 0x478 (0x478)


	void OnConfirmClicked(); // Function DungeonCrawler.DCShopConfirmPurchasePopupBase.OnConfirmClicked
	void OnCancelClicked(); // Function DungeonCrawler.DCShopConfirmPurchasePopupBase.OnCancelClicked
	uint8_t GetRedstoneShardVisibility(); // Function DungeonCrawler.DCShopConfirmPurchasePopupBase.GetRedstoneShardVisibility
	uint8_t GetBluestoneShardVisibility(); // Function DungeonCrawler.DCShopConfirmPurchasePopupBase.GetBluestoneShardVisibility
}; 
 
 


// Class DungeonCrawler.DCMerchantComponent
// Size: 0x2C8(Inherited: 0x180)
struct UDCMerchantComponent : UDCInventoryContainerComponent
{
	char pad_384[104];  // 0x180 (0x180)
	struct UDCInventoryComponent* InventoryComponent;  // 0x1E8 (0x1E8)
	uint8_t ServiceType;  // 0x1F0 (0x1F0)
	char pad_497[7];  // 0x1F1 (0x1F1)
	struct FDCMerchantId MerchantId;  // 0x1F8 (0x1F8)
	struct TArray<struct FDCMerchantInfo> MerchantInfos;  // 0x208 (0x208)
	struct TMap<struct FDCItemId, struct FDCMerchantSaleItemId> SaleItemMap;  // 0x218 (0x218)
	struct TMap<struct FDCItemId, struct FDCMerchantCraftItemId> CraftItemMap;  // 0x268 (0x268)
	struct TArray<struct FPrimaryAssetId> WishList;  // 0x2B8 (0x2B8)


	void OnMerchantSellFinished(); // Function DungeonCrawler.DCMerchantComponent.OnMerchantSellFinished
	void OnMerchantIdChanged(struct FDCMerchantId InMerchantId); // Function DungeonCrawler.DCMerchantComponent.OnMerchantIdChanged
	void OnMerchantCraftFinished(); // Function DungeonCrawler.DCMerchantComponent.OnMerchantCraftFinished
	void OnMerchantBuyFinished(); // Function DungeonCrawler.DCMerchantComponent.OnMerchantBuyFinished
	void OnItemMoveEvent(uint8_t SourceInventoryId, struct FDCItemInfo& SourceItemInfo, uint8_t TargetInventoryId, int32_t TargetIndex, int32_t TargetStack); // Function DungeonCrawler.DCMerchantComponent.OnItemMoveEvent
	void OnItemActionEvent(uint8_t SourceInventoryId, struct FDCItemInfo& SourceItemInfo, uint8_t ActionType); // Function DungeonCrawler.DCMerchantComponent.OnItemActionEvent
	void OnInventoryComponentChanged(struct UDCInventoryComponent* Comp); // Function DungeonCrawler.DCMerchantComponent.OnInventoryComponentChanged
}; 
 
 


// Class DungeonCrawler.DCDungeonGameState
// Size: 0x8B8(Inherited: 0x780)
struct ADCDungeonGameState : ADCGameStateBase
{
	struct FGameAnnounceData AnnounceForDown;  // 0x780 (0x780)
	int32_t DungeonNextFloorAnnounceDelaySeconds;  // 0x810 (0x810)
	int32_t DungeonNextFloorLoadingDelaySeconds;  // 0x814 (0x814)
	struct FGameAnnounceData AnnounceForResult;  // 0x818 (0x818)
	int32_t DungeonResultAnnounceDelaySeconds;  // 0x8A8 (0x8A8)
	int32_t DungeonResultLoadingDelaySeconds;  // 0x8AC (0x8AC)
	int32_t NumPlayers;  // 0x8B0 (0x8B0)
	char pad_2228[4];  // 0x8B4 (0x8B4)


	void OnRep_NumPlayers(int32_t OldNumPlayers); // Function DungeonCrawler.DCDungeonGameState.OnRep_NumPlayers
}; 
 
 


// Class DungeonCrawler.DCEmoteDataAsset
// Size: 0xC0(Inherited: 0x38)
struct UDCEmoteDataAsset : UDCTableDataAsset
{
	struct FText Name;  // 0x38 (0x38)
	struct FText FlavorText;  // 0x50 (0x50)
	struct FGameplayTag EmoteTag;  // 0x68 (0x68)
	struct TSoftObjectPtr<UArtDataEmote> ArtData;  // 0x70 (0x70)
	struct TArray<struct TSoftObjectPtr<UDCGameplayAbilityDataAsset>> Abilities;  // 0xA0 (0xA0)
	struct TArray<struct TSoftObjectPtr<UDCGameplayEffectDataAsset>> Effects;  // 0xB0 (0xB0)


}; 
 
 


// Class DungeonCrawler.DCEmoteListEntryWidgetData
// Size: 0x40(Inherited: 0x28)
struct UDCEmoteListEntryWidgetData : UObject
{
	struct FDCEmoteInfo EmoteInfo;  // 0x28 (0x28)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bIsSelected : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


}; 
 
 


// Class DungeonCrawler.OnlineSystemSteam
// Size: 0xA0(Inherited: 0x30)
struct UOnlineSystemSteam : UGameInstanceSubsystem
{
	char pad_48[112];  // 0x30 (0x30)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.OnlineSystemSteam.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.OnlineSystemSteam.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.OnlineSystemSteam.TerminateBase
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.OnlineSystemSteam.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.DCEmoteWidget
// Size: 0x3E8(Inherited: 0x368)
struct UDCEmoteWidget : UDCControlWidgetBase
{
	char pad_872[24];  // 0x368 (0x368)
	struct FText EmoteName;  // 0x380 (0x380)
	struct FText EmoteFlavorText;  // 0x398 (0x398)
	struct UTexture2D* EmoteIconTexture;  // 0x3B0 (0x3B0)
	struct FPrimaryAssetId EmoteId;  // 0x3B8 (0x3B8)
	char pad_968_1 : 7;  // 0x3C8 (0x3C8)
	bool bIsEquipped : 1;  // 0x3C8 (0x3C8)
	char pad_969[7];  // 0x3C9 (0x3C9)
	UDCGameTooltipWithFlavorTextWidget* TooltipWidgetClass;  // 0x3D0 (0x3D0)
	struct UDCGameTooltipWithFlavorTextWidget* EmoteTooltipWidget;  // 0x3D8 (0x3D8)
	UDCCustomizeDragVisualWidget* EmoteDragVisualWidgetClass;  // 0x3E0 (0x3E0)


	struct UUserWidget* GetTooltipWidget(); // Function DungeonCrawler.DCEmoteWidget.GetTooltipWidget
}; 
 
 


// Class DungeonCrawler.DCPlayerDown
// Size: 0x2F0(Inherited: 0x2F0)
struct ADCPlayerDown : ADCPlayerPoint
{


}; 
 
 


// Class DungeonCrawler.DCGameObjectLinker
// Size: 0x300(Inherited: 0x2F0)
struct ADCGameObjectLinker : ADCActorBase
{
	char pad_752[16];  // 0x2F0 (0x2F0)


}; 
 
 


// Class DungeonCrawler.DCEnhancedInputLibrary
// Size: 0x28(Inherited: 0x28)
struct UDCEnhancedInputLibrary : UBlueprintFunctionLibrary
{


	void RemovePlayerMappableConfigByTagContainer(struct UObject* WorldContextObject, struct FGameplayTagContainer InputConfigTags); // Function DungeonCrawler.DCEnhancedInputLibrary.RemovePlayerMappableConfigByTagContainer
	void InjectInputVectorForAction(struct UObject* WorldContextObject, struct UInputAction* Action, struct FVector Value, struct TArray<struct UInputModifier*>& Modifiers, struct TArray<struct UInputTrigger*>& Triggers); // Function DungeonCrawler.DCEnhancedInputLibrary.InjectInputVectorForAction
	void InjectInputForAction(struct UObject* WorldContextObject, struct UInputAction* Action, struct FInputActionValue RawValue, struct TArray<struct UInputModifier*>& Modifiers, struct TArray<struct UInputTrigger*>& Triggers); // Function DungeonCrawler.DCEnhancedInputLibrary.InjectInputForAction
	struct TArray<struct FKey> GetKeysMappedToAction(struct UObject* WorldContextObject, struct UInputAction* Action); // Function DungeonCrawler.DCEnhancedInputLibrary.GetKeysMappedToAction
	struct UDCInputConfig* GetInputConfigByTag(struct UObject* WorldContextObject, struct FGameplayTag InputConfigTag); // Function DungeonCrawler.DCEnhancedInputLibrary.GetInputConfigByTag
	struct UInputAction* GetInputAction(struct UObject* WorldContextObject, struct FGameplayTag InputConfigTag, struct FGameplayTag InputTag); // Function DungeonCrawler.DCEnhancedInputLibrary.GetInputAction
	struct FKey GetFirstMappedKeyFromRegisteredInputToAction(struct UObject* WorldContextObject, struct UInputAction* Action); // Function DungeonCrawler.DCEnhancedInputLibrary.GetFirstMappedKeyFromRegisteredInputToAction
	struct UEnhancedPlayerInput* GetEnhancedPlayerInput(struct UObject* WorldContextObject); // Function DungeonCrawler.DCEnhancedInputLibrary.GetEnhancedPlayerInput
	struct UDCEnhancedInputLocalPlayerSubsystem* GetDCEnhancedInputLocalPlayerSubSystem(struct UObject* WorldContextObject); // Function DungeonCrawler.DCEnhancedInputLibrary.GetDCEnhancedInputLocalPlayerSubSystem
	struct FInputActionValue GetActionValueWithController(struct UObject* WorldContextObject, struct UInputAction* Action); // Function DungeonCrawler.DCEnhancedInputLibrary.GetActionValueWithController
	struct FInputActionValue GetActionValueByTags(struct UObject* WorldContextObject, struct FGameplayTag InputConfigTag, struct FGameplayTag InputTag); // Function DungeonCrawler.DCEnhancedInputLibrary.GetActionValueByTags
	bool GetActionBoolWithController(struct UObject* WorldContextObject, struct UInputAction* Action); // Function DungeonCrawler.DCEnhancedInputLibrary.GetActionBoolWithController
	bool GetActionBoolByTags(struct UObject* WorldContextObject, struct FGameplayTag InputConfigTag, struct FGameplayTag InputTag); // Function DungeonCrawler.DCEnhancedInputLibrary.GetActionBoolByTags
	void AddPlayerMappableConfigByTagContainer(struct UObject* WorldContextObject, struct FGameplayTagContainer InputConfigTags); // Function DungeonCrawler.DCEnhancedInputLibrary.AddPlayerMappableConfigByTagContainer
}; 
 
 


// Class DungeonCrawler.DCEnhancedInputLocalPlayerSubsystem
// Size: 0x1E0(Inherited: 0x1E0)
struct UDCEnhancedInputLocalPlayerSubsystem : UEnhancedInputLocalPlayerSubsystem
{


	void RemovePlayerMappableConfigByTag(struct FGameplayTag InputConfigTag, struct FModifyContextOptions& Options); // Function DungeonCrawler.DCEnhancedInputLocalPlayerSubsystem.RemovePlayerMappableConfigByTag
	struct UPlayerMappableInputConfig* GetPlayerMappableInputConfig(struct FGameplayTag ConfigTag); // Function DungeonCrawler.DCEnhancedInputLocalPlayerSubsystem.GetPlayerMappableInputConfig
	struct UDCInputConfig* GetInputConfig(struct FGameplayTag ConfigTag); // Function DungeonCrawler.DCEnhancedInputLocalPlayerSubsystem.GetInputConfig
	void AddPlayerMappableConfigByTag(struct FGameplayTag InputConfigTag, struct FModifyContextOptions& Options); // Function DungeonCrawler.DCEnhancedInputLocalPlayerSubsystem.AddPlayerMappableConfigByTag
}; 
 
 


// Class DungeonCrawler.DCEquipmentComponent
// Size: 0x180(Inherited: 0xA0)
struct UDCEquipmentComponent : UActorComponent
{
	ADCEquipItemActor* ItemActorClass;  // 0xA0 (0xA0)
	struct UDCEquipInventory* Inventory;  // 0xA8 (0xA8)
	struct TMap<uint8_t, struct FDCItemId> ItemIdByEquipSlot;  // 0xB0 (0xB0)
	struct TMap<struct FDCItemId, struct ADCEquipItemActor*> EquipItemActors;  // 0x100 (0x100)
	char pad_336[48];  // 0x150 (0x150)


	void SetInventory(struct UDCInventoryBase* InInventory); // Function DungeonCrawler.DCEquipmentComponent.SetInventory
	void OnItemsUpdated(); // Function DungeonCrawler.DCEquipmentComponent.OnItemsUpdated
}; 
 
 


// Class DungeonCrawler.DCLeaderboardContentDataAsset
// Size: 0x98(Inherited: 0x38)
struct UDCLeaderboardContentDataAsset : UDCTableDataAsset
{
	struct FText ContentName;  // 0x38 (0x38)
	struct FText ContentDesc;  // 0x50 (0x50)
	struct FText ContentScoreName;  // 0x68 (0x68)
	uint8_t ContentType;  // 0x80 (0x80)
	char pad_129[7];  // 0x81 (0x81)
	struct TArray<struct TSoftObjectPtr<UDCMonsterDataAsset>> SlayerMonsterIds;  // 0x88 (0x88)


}; 
 
 


// Class DungeonCrawler.DCStockBuyDataAsset
// Size: 0x48(Inherited: 0x38)
struct UDCStockBuyDataAsset : UDCTableDataAsset
{
	struct TArray<struct FDCStockBuyItemData> StockBuyItemArray;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCFloorRuleDataAsset
// Size: 0x48(Inherited: 0x38)
struct UDCFloorRuleDataAsset : UDCTableDataAsset
{
	struct TArray<struct FDCFloorRuleItemData> FloorRuleItemArray;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCShopCurrencyTypeSelectPopupBase
// Size: 0x480(Inherited: 0x440)
struct UDCShopCurrencyTypeSelectPopupBase : UCommonPopupBase
{
	struct UVerticalBox* VBox_CurrencyTypeSlot;  // 0x440 (0x440)
	struct UDCCommonButtonBase* Btn_Cancel;  // 0x448 (0x448)
	struct UDCCommonButtonBase* Btn_Confirm;  // 0x450 (0x450)
	UDCShopCurrencyTypeSlotWidgetBase* CurrencyTypeSlotWidgetClass;  // 0x458 (0x458)
	uint8_t SelectedType;  // 0x460 (0x460)
	char pad_1121[3];  // 0x461 (0x461)
	int32_t Price;  // 0x464 (0x464)
	struct TArray<struct UDCShopCurrencyTypeSlotWidgetBase*> CurrencySelectSlots;  // 0x468 (0x468)
	struct UDCShopCurrencyTypeSelectPopupData* SelectCurrencyPopupData;  // 0x478 (0x478)


	void OnCurrencySelected(uint8_t CurrencyType); // Function DungeonCrawler.DCShopCurrencyTypeSelectPopupBase.OnCurrencySelected
	void OnConfirmClicked(); // Function DungeonCrawler.DCShopCurrencyTypeSelectPopupBase.OnConfirmClicked
	void OnCancelClicked(); // Function DungeonCrawler.DCShopCurrencyTypeSelectPopupBase.OnCancelClicked
	bool IsRedstoneShardSelected(); // Function DungeonCrawler.DCShopCurrencyTypeSelectPopupBase.IsRedstoneShardSelected
	bool IsBluestoneShardSelected(); // Function DungeonCrawler.DCShopCurrencyTypeSelectPopupBase.IsBluestoneShardSelected
}; 
 
 


// Class DungeonCrawler.DCFriendInterface
// Size: 0x28(Inherited: 0x28)
struct UDCFriendInterface : UInterface
{


}; 
 
 


// Class DungeonCrawler.TimerWidgetBase
// Size: 0x320(Inherited: 0x300)
struct UTimerWidgetBase : UDCWidgetBase
{
	struct UAccountLink* AccountLink;  // 0x300 (0x300)
	struct FTimerWidgetData WidgetData;  // 0x308 (0x308)
	char pad_792[8];  // 0x318 (0x318)


	void StartTimer(float InEndServerWorldTime); // Function DungeonCrawler.TimerWidgetBase.StartTimer
	void OnProgress(float NewValue, float OldValue); // Function DungeonCrawler.TimerWidgetBase.OnProgress
	void OnLeftSecond(int32_t NewValue, int32_t OldValue); // Function DungeonCrawler.TimerWidgetBase.OnLeftSecond
	void OnLeftMinute(int32_t NewValue, int32_t OldValue); // Function DungeonCrawler.TimerWidgetBase.OnLeftMinute
	void OnLeftHour(int32_t NewValue, int32_t OldValue); // Function DungeonCrawler.TimerWidgetBase.OnLeftHour
	void OnFMsgAccountLinkAccountDataReplicationNotifyBlueprint(struct FMsgAccountLinkAccountDataReplicationNotify& InMsg); // Function DungeonCrawler.TimerWidgetBase.OnFMsgAccountLinkAccountDataReplicationNotifyBlueprint
}; 
 
 


// Class DungeonCrawler.DCGameDownTimerWidget
// Size: 0x338(Inherited: 0x320)
struct UDCGameDownTimerWidget : UTimerWidgetBase
{
	char pad_800_1 : 7;  // 0x320 (0x320)
	bool bIsDowned : 1;  // 0x320 (0x320)
	char pad_801_1 : 7;  // 0x321 (0x321)
	bool bSpectatorHasTargetCharacter : 1;  // 0x321 (0x321)
	char pad_802[22];  // 0x322 (0x322)


}; 
 
 


// Class DungeonCrawler.DCGameModeAIControllerBase
// Size: 0x428(Inherited: 0x3B8)
struct ADCGameModeAIControllerBase : AAIController
{
	char pad_952[112];  // 0x3B8 (0x3B8)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.DCGameModeAIControllerBase.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.DCGameModeAIControllerBase.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.DCGameModeAIControllerBase.TerminateBase
	void ReceivePreInitializeComponents(); // Function DungeonCrawler.DCGameModeAIControllerBase.ReceivePreInitializeComponents
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.DCGameModeAIControllerBase.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.DCGameModeAIControllerGameBase
// Size: 0x430(Inherited: 0x428)
struct ADCGameModeAIControllerGameBase : ADCGameModeAIControllerBase
{
	struct UAccountLinkAll* AccountLinkAll;  // 0x428 (0x428)


}; 
 
 


// Class DungeonCrawler.DCGameModeAIControllerDungeonBattleRoyalBase
// Size: 0x430(Inherited: 0x430)
struct ADCGameModeAIControllerDungeonBattleRoyalBase : ADCGameModeAIControllerDungeonBase
{


}; 
 
 


// Class DungeonCrawler.DCSceneCaptureComponent2D
// Size: 0xB60(Inherited: 0xB50)
struct UDCSceneCaptureComponent2D : USceneCaptureComponent2D
{
	char pad_2896[16];  // 0xB50 (0xB50)


}; 
 
 


// Class DungeonCrawler.DCGameModeAIControllerMetaBase
// Size: 0x428(Inherited: 0x428)
struct ADCGameModeAIControllerMetaBase : ADCGameModeAIControllerBase
{


}; 
 
 


// Class DungeonCrawler.DCGameModeAIControllerTestBase
// Size: 0x430(Inherited: 0x430)
struct ADCGameModeAIControllerTestBase : ADCGameModeAIControllerGameBase
{


}; 
 
 


// Class DungeonCrawler.ObjectLinkMetaDataBlueprint
// Size: 0x80(Inherited: 0x28)
struct UObjectLinkMetaDataBlueprint : UObject
{
	struct FObjectLinkMetaData MetaData;  // 0x28 (0x28)


}; 
 
 


// Class DungeonCrawler.DCGameplayAbilityBase
// Size: 0x558(Inherited: 0x3B8)
struct UDCGameplayAbilityBase : UGameplayAbility
{
	char pad_952[224];  // 0x3B8 (0x3B8)
	struct TArray<struct FDCGameplayEffectContainer> EffectContainerArray;  // 0x498 (0x498)
	struct TArray<struct FDCGameplayEffectData> OverrideGameplayEffectDataArray;  // 0x4A8 (0x4A8)
	struct TArray<struct FActiveGameplayEffectHandle> ActiveEffectHandles;  // 0x4B8 (0x4B8)
	struct FGameplayTag IdleAnimSequenceGameplayTag;  // 0x4C8 (0x4C8)
	struct UDCMovementModifierContainerData* MovementModifierContainer;  // 0x4D0 (0x4D0)
	struct FDesignDataGameplayAbility DesignDataGameplayAbility;  // 0x4D8 (0x4D8)
	struct FGameplayTagContainer AppliedMovementModifierTags;  // 0x530 (0x530)
	char pad_1360_1 : 7;  // 0x550 (0x550)
	bool bIsDefaultMovementModifierApplied : 1;  // 0x550 (0x550)
	char pad_1361[7];  // 0x551 (0x551)


	void RemoveMovementModifier(struct FGameplayTagContainer& ContainerTags); // Function DungeonCrawler.DCGameplayAbilityBase.RemoveMovementModifier
	void RemoveGameplayCueLocal(struct FGameplayTag GameplayCueTag); // Function DungeonCrawler.DCGameplayAbilityBase.RemoveGameplayCueLocal
	void RemoveGameplayCue(struct FGameplayTag GameplayCueTag); // Function DungeonCrawler.DCGameplayAbilityBase.RemoveGameplayCue
	void RemoveAllAppliedMovementModifiers(); // Function DungeonCrawler.DCGameplayAbilityBase.RemoveAllAppliedMovementModifiers
	void MakeEffectContainerSpecFromContainer(struct TArray<struct FDCGameplayEffectContainerSpec>& OutContainerSpecArray, struct FDCGameplayEffectContainer& Container, struct FGameplayEventData& EventData, int32_t OverrideGameplayLevel); // Function DungeonCrawler.DCGameplayAbilityBase.MakeEffectContainerSpecFromContainer
	void MakeEffectContainerSpec(struct TArray<struct FDCGameplayEffectContainerSpec>& OutContainerSpecArray, struct FGameplayTag ContainerTag, struct FGameplayEventData& EventData, int32_t OverrideGameplayLevel); // Function DungeonCrawler.DCGameplayAbilityBase.MakeEffectContainerSpec
	void MakeEffectContainerPremadeSpec(struct AActor* InActor, struct FGameplayTag ContainerTag, struct FGameplayEventData& EventData, int32_t OverrideGameplayLevel); // Function DungeonCrawler.DCGameplayAbilityBase.MakeEffectContainerPremadeSpec
	int32_t GetSetByCallerValueInEffectContainerArray(struct FGameplayTag ContainerTag, struct FGameplayTag SetByCallerDataTag); // Function DungeonCrawler.DCGameplayAbilityBase.GetSetByCallerValueInEffectContainerArray
	struct FGameplayTag GetGameplayTriggerTag(int32_t Index); // Function DungeonCrawler.DCGameplayAbilityBase.GetGameplayTriggerTag
	void ExecuteGameplayCueWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters Params); // Function DungeonCrawler.DCGameplayAbilityBase.ExecuteGameplayCueWithParams
	void ExecuteGameplayCueLocalWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters Params); // Function DungeonCrawler.DCGameplayAbilityBase.ExecuteGameplayCueLocalWithParams
	void ExecuteGameplayCueLocal(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle EffectContext); // Function DungeonCrawler.DCGameplayAbilityBase.ExecuteGameplayCueLocal
	void ExecuteGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle EffectContext); // Function DungeonCrawler.DCGameplayAbilityBase.ExecuteGameplayCue
	void CopyPremadeSpecArray(struct AActor* InActor); // Function DungeonCrawler.DCGameplayAbilityBase.CopyPremadeSpecArray
	struct TArray<struct FActiveGameplayEffectHandle> ApplyPremadeSpecArray(struct FGameplayTag ContainerTag, struct FGameplayEventData& EventData); // Function DungeonCrawler.DCGameplayAbilityBase.ApplyPremadeSpecArray
	void ApplyMovementModifier(struct FGameplayTagContainer& ContainerTags); // Function DungeonCrawler.DCGameplayAbilityBase.ApplyMovementModifier
	struct TArray<struct FActiveGameplayEffectHandle> ApplyEffectContainerSpecArray(struct TArray<struct FDCGameplayEffectContainerSpec>& OutContainerSpecArray, struct FGameplayTag ContainerTag, struct FGameplayEventData& EventData); // Function DungeonCrawler.DCGameplayAbilityBase.ApplyEffectContainerSpecArray
	struct TArray<struct FActiveGameplayEffectHandle> ApplyEffectContainerSpec(struct FDCGameplayEffectContainerSpec& ContainerSpec); // Function DungeonCrawler.DCGameplayAbilityBase.ApplyEffectContainerSpec
	struct TArray<struct FActiveGameplayEffectHandle> ApplyEffectContainer(struct FGameplayTag ContainerTag, struct FGameplayEventData& EventData, int32_t OverrideGameplayLevel, int32_t InCountToApply); // Function DungeonCrawler.DCGameplayAbilityBase.ApplyEffectContainer
	void AddGameplayCueWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters Params); // Function DungeonCrawler.DCGameplayAbilityBase.AddGameplayCueWithParams
	void AddGameplayCueLocalWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters Params); // Function DungeonCrawler.DCGameplayAbilityBase.AddGameplayCueLocalWithParams
	void AddGameplayCueLocal(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle EffectContext); // Function DungeonCrawler.DCGameplayAbilityBase.AddGameplayCueLocal
	void AddGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle EffectContext); // Function DungeonCrawler.DCGameplayAbilityBase.AddGameplayCue
}; 
 
 


// Class DungeonCrawler.DCMovementModifierDataAsset
// Size: 0x40(Inherited: 0x38)
struct UDCMovementModifierDataAsset : UDCTableDataAsset
{
	int32_t Add;  // 0x38 (0x38)
	float Multiply;  // 0x3C (0x3C)


}; 
 
 


// Class DungeonCrawler.MetaClassComponent
// Size: 0x148(Inherited: 0x100)
struct UMetaClassComponent : UMetaComponentBase
{
	struct UAccountLink* AccountLink;  // 0x100 (0x100)
	struct TArray<struct FPrimaryAssetId> SpellIdArray;  // 0x108 (0x108)
	struct TArray<struct FAccountDataSpell> AccountDataSpellArray;  // 0x118 (0x118)
	struct TArray<struct FPrimaryAssetId> MusicIdArray;  // 0x128 (0x128)
	struct TArray<struct FAccountDataMusic> AccountDataMusicArray;  // 0x138 (0x138)


}; 
 
 


// Class DungeonCrawler.DCGameplayCueManager
// Size: 0x310(Inherited: 0x310)
struct UDCGameplayCueManager : UGameplayCueManager
{


}; 
 
 


// Class DungeonCrawler.DCTargetType_UseOwner
// Size: 0x28(Inherited: 0x28)
struct UDCTargetType_UseOwner : UDCTargetType
{


}; 
 
 


// Class DungeonCrawler.DCGameplayCueNotify_Actor
// Size: 0x308(Inherited: 0x2F0)
struct ADCGameplayCueNotify_Actor : AGameplayCueNotify_Actor
{
	char pad_752[24];  // 0x2F0 (0x2F0)


	void SetAkComponentRTPCValue(struct UAkComponent* AkComponent, struct UAkRtpc* RtpcValue, float InTickValue, float InTotalValue, float InMaxRTPCValue); // Function DungeonCrawler.DCGameplayCueNotify_Actor.SetAkComponentRTPCValue
	void ClearAkComponentRTPCValue(); // Function DungeonCrawler.DCGameplayCueNotify_Actor.ClearAkComponentRTPCValue
}; 
 
 


// Class DungeonCrawler.DCGameplayEffectUIData
// Size: 0x30(Inherited: 0x28)
struct UDCGameplayEffectUIData : UGameplayEffectUIData
{
	struct UActorStatusUIData* UIDataAsset;  // 0x28 (0x28)


}; 
 
 


// Class DungeonCrawler.StaticMeshItemHolderActor
// Size: 0x3F8(Inherited: 0x3F8)
struct AStaticMeshItemHolderActor : AItemHolderActorBase
{


}; 
 
 


// Class DungeonCrawler.DCReportPlayerResultPopupData
// Size: 0x48(Inherited: 0x30)
struct UDCReportPlayerResultPopupData : UPopupDataBase
{
	struct FText TargetNicknameListText;  // 0x30 (0x30)


}; 
 
 


// Class DungeonCrawler.DCGameplayTagCollider
// Size: 0x3E0(Inherited: 0x2F0)
struct ADCGameplayTagCollider : ADCActorBase
{
	struct UAccountLink* OwnerAccountLink;  // 0x2F0 (0x2F0)
	struct FString OwnerAccountId;  // 0x2F8 (0x2F8)
	struct FString TargetAccountId;  // 0x308 (0x308)
	struct UAccountLink* TargetAccountLink;  // 0x318 (0x318)
	struct TWeakObjectPtr<APawn> TargetPlayerPawn;  // 0x320 (0x320)
	struct FAccountDataReplication TargetAccountDataReplication;  // 0x328 (0x328)
	struct FGameplayTagContainer TargetOwnedGameplayeTags;  // 0x3A0 (0x3A0)
	float ColliderRadius;  // 0x3C0 (0x3C0)
	char pad_964[4];  // 0x3C4 (0x3C4)
	struct USphereComponent* GameplayTagOverlapSphere;  // 0x3C8 (0x3C8)
	struct TArray<struct UDCTagCollisionDetectorComponent*> OverlapDetectorComponentArray;  // 0x3D0 (0x3D0)


	void OnRep_TargetAccountId(struct FString InOldTargetAccountId); // Function DungeonCrawler.DCGameplayTagCollider.OnRep_TargetAccountId
	void OnOverlapping(); // Function DungeonCrawler.DCGameplayTagCollider.OnOverlapping
	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function DungeonCrawler.DCGameplayTagCollider.OnOverlapEnd
	void OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function DungeonCrawler.DCGameplayTagCollider.OnOverlapBegin
}; 
 
 


// Class DungeonCrawler.DCGameSession
// Size: 0x3F0(Inherited: 0x2A8)
struct ADCGameSession : AGameSession
{
	char pad_680[328];  // 0x2A8 (0x2A8)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.DCGameSession.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.DCGameSession.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.DCGameSession.TerminateBase
	void CharacterResurrection(struct FString AccountId, ADCCharacterBase* DCCharacterClass, struct TArray<struct FDCGameplayEffectData> InInitGameplayEffectDataArray, bool bIsRemoveAllItem, struct ACharacter* ResurrectionCharacter); // Function DungeonCrawler.DCGameSession.CharacterResurrection
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.DCGameSession.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.DCShopPurchaseProcessWidget
// Size: 0x340(Inherited: 0x300)
struct UDCShopPurchaseProcessWidget : UDCWidgetBase
{
	UDCShopCurrencyTypeSelectPopupBase* CurrencyTypeSelectPopupClass;  // 0x300 (0x300)
	UDCShopConfirmPurchasePopupBase* ConfirmPurchasePopupClass;  // 0x308 (0x308)
	uint8_t SelectedCurrencyType;  // 0x310 (0x310)
	uint8_t SelectedShopItemType;  // 0x311 (0x311)
	char pad_786[2];  // 0x312 (0x312)
	struct FPrimaryAssetId SelectedShopId;  // 0x314 (0x314)
	char pad_804[4];  // 0x324 (0x324)
	struct FDCShopItemInfo SelectedShopItemInfo;  // 0x328 (0x328)


}; 
 
 


// Class DungeonCrawler.DCInventoryCurrencyWidget
// Size: 0x288(Inherited: 0x278)
struct UDCInventoryCurrencyWidget : UUserWidget
{
	int32_t Currency;  // 0x278 (0x278)
	char pad_636[4];  // 0x27C (0x27C)
	struct UDCInventoryComponent* Source;  // 0x280 (0x280)


}; 
 
 


// Class DungeonCrawler.DCGameSettings
// Size: 0x48(Inherited: 0x38)
struct UDCGameSettings : UDeveloperSettings
{
	struct TArray<struct FServerInfo> ServerList;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCGameSpawnableComponent
// Size: 0xA8(Inherited: 0xA0)
struct UDCGameSpawnableComponent : UActorComponent
{
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	bool bCastShadows : 1;  // 0xA0 (0xA0)
	char pad_161[7];  // 0xA1 (0xA1)


	void OnRep_bCastShadows(bool bOldCastShadows); // Function DungeonCrawler.DCGameSpawnableComponent.OnRep_bCastShadows
}; 
 
 


// Class DungeonCrawler.DCGameSpawner
// Size: 0x380(Inherited: 0x2F0)
struct ADCGameSpawner : ADCActorBase
{
	struct UDesignDataAssetSpawner* DesignDataAssetSpawner;  // 0x2F0 (0x2F0)
	float RandomScaleMin;  // 0x2F8 (0x2F8)
	float RandomScaleMax;  // 0x2FC (0x2FC)
	char pad_768_1 : 7;  // 0x300 (0x300)
	bool bCastShadow : 1;  // 0x300 (0x300)
	char pad_769[7];  // 0x301 (0x301)
	struct TArray<struct ATargetPoint*> TargetPoints;  // 0x308 (0x308)
	struct FDesignDataSpawnerItem DesignDataSpawnerItem;  // 0x318 (0x318)
	int32_t PreviewIdx;  // 0x35C (0x35C)
	char pad_864[8];  // 0x360 (0x360)
	struct FPrimaryAssetId PreviewAssetId;  // 0x368 (0x368)
	struct AActor* PreviewActor;  // 0x378 (0x378)


	void UpdateGameState(struct FGameStateData& InGameStateData); // Function DungeonCrawler.DCGameSpawner.UpdateGameState
	struct APropsActorBase* SpawnProps(struct FPrimaryAssetId& InPropsId, bool InbPreview); // Function DungeonCrawler.DCGameSpawner.SpawnProps
	struct ADCMonsterBase* SpawnMonster(struct FPrimaryAssetId& InMonsterId, bool InbPreview); // Function DungeonCrawler.DCGameSpawner.SpawnMonster
	struct AItemHolderActorBase* SpawnItemHolder(struct FPrimaryAssetId& InLootDropId, struct FPrimaryAssetId& InLootDropRateId, bool InbPreview); // Function DungeonCrawler.DCGameSpawner.SpawnItemHolder
	void SetNextPreview(); // Function DungeonCrawler.DCGameSpawner.SetNextPreview
	void OnSetMonsterPeaceAction(struct ADCMonsterBase* Monster); // Function DungeonCrawler.DCGameSpawner.OnSetMonsterPeaceAction
}; 
 
 


// Class DungeonCrawler.DCPlayerController
// Size: 0x9B8(Inherited: 0x850)
struct ADCPlayerController : APlayerController
{
	char pad_2128[88];  // 0x850 (0x850)
	struct UBaseObject* BaseObject;  // 0x8A8 (0x8A8)
	char pad_2224[24];  // 0x8B0 (0x8B0)
	ADCPortraitCharacter* PortraitCharacterClass;  // 0x8C8 (0x8C8)
	char pad_2256[16];  // 0x8D0 (0x8D0)
	struct FString AccountId;  // 0x8E0 (0x8E0)
	struct UAccountLink* AccountLink;  // 0x8F0 (0x8F0)
	struct FString TargetAccountId;  // 0x8F8 (0x8F8)
	char pad_2312[96];  // 0x908 (0x908)
	float MaxSpeedServer;  // 0x968 (0x968)
	char pad_2412[4];  // 0x96C (0x96C)
	struct TArray<struct ADCPortraitCharacter*> PortraitCharacters;  // 0x970 (0x970)
	char pad_2432[32];  // 0x980 (0x980)
	struct UDCLootComponent* LootComponent;  // 0x9A0 (0x9A0)
	struct UDCInventoryControllerComponent* InventoryControllerComponent;  // 0x9A8 (0x9A8)
	struct UDCReportSystem* ReportSystem;  // 0x9B0 (0x9B0)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.DCPlayerController.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.DCPlayerController.UnbindMsg
	void TravelFloorMatchmaking_Client(struct FDCGameLiftSessionId SessionId, struct FString Address, struct FString ServiceUrl); // Function DungeonCrawler.DCPlayerController.TravelFloorMatchmaking_Client
	void TerminateBase(); // Function DungeonCrawler.DCPlayerController.TerminateBase
	void StatServer(); // Function DungeonCrawler.DCPlayerController.StatServer
	void StartToWearItem_Client(struct FItemData InWearingItemData, struct AActor* InWearingActor, float InDuration, struct FText InDescription); // Function DungeonCrawler.DCPlayerController.StartToWearItem_Client
	void SpawnResurrectionCharacterForDebug_Server(struct FDCAccountId InAccountId, bool bRecoverItem, int32_t LifeSpan); // Function DungeonCrawler.DCPlayerController.SpawnResurrectionCharacterForDebug_Server
	void ShowSpectatingPopup(struct FDCPlayerInfo& InPlayerInfo); // Function DungeonCrawler.DCPlayerController.ShowSpectatingPopup
	void SetClientReady_Server(); // Function DungeonCrawler.DCPlayerController.SetClientReady_Server
	void ServerDebugSpawnItem(struct FString InKey, struct AActor* SpawnActor, struct FPrimaryAssetId SpawnItemAssetId); // Function DungeonCrawler.DCPlayerController.ServerDebugSpawnItem
	void ServerDebugInjectItemToTarget(struct TArray<struct FItemData> InItemDataArray, uint8_t TargetInventoryType); // Function DungeonCrawler.DCPlayerController.ServerDebugInjectItemToTarget
	void ServerDebugGiveGameplayEffectToTarget(struct FString InKey, struct AActor* TargetActor, struct FPrimaryAssetId GameplayEffectAssetId); // Function DungeonCrawler.DCPlayerController.ServerDebugGiveGameplayEffectToTarget
	void ResumeFloorRuleForDebug_Server(); // Function DungeonCrawler.DCPlayerController.ResumeFloorRuleForDebug_Server
	void RequestPlayerCharacterLocation_Server(struct FDCAccountId InAccountId); // Function DungeonCrawler.DCPlayerController.RequestPlayerCharacterLocation_Server
	void ReportPlayer_Server(struct FDCReportPlayerInfo InReportPlayerInfo); // Function DungeonCrawler.DCPlayerController.ReportPlayer_Server
	void PauseFloorRuleForDebug_Server(); // Function DungeonCrawler.DCPlayerController.PauseFloorRuleForDebug_Server
	void OnUserExited_Client(uint8_t ExitType); // Function DungeonCrawler.DCPlayerController.OnUserExited_Client
	void OnUpdateReportedPlayerInfoArray_Client(struct TArray<struct FDCReportedInfo> InReportedInfoArray); // Function DungeonCrawler.DCPlayerController.OnUpdateReportedPlayerInfoArray_Client
	void OnServerCall(struct FCallData CallData); // Function DungeonCrawler.DCPlayerController.OnServerCall
	void OnRep_AccountId(struct FString OldId); // Function DungeonCrawler.DCPlayerController.OnRep_AccountId
	void OnPortalScrollOverlapped(struct AFloorPortalScrollBase* Portal, struct ADCPlayerCharacterBase* InCharacter); // Function DungeonCrawler.DCPlayerController.OnPortalScrollOverlapped
	void OnLobbyClicked(); // Function DungeonCrawler.DCPlayerController.OnLobbyClicked
	void OnGameStateNotify(struct FGameStateData& InGameStateData); // Function DungeonCrawler.DCPlayerController.OnGameStateNotify
	void OnFMsgGameKillLogNotifyClient(struct FGameKillLogData InGameKillLogData, uint8_t KillReason); // Function DungeonCrawler.DCPlayerController.OnFMsgGameKillLogNotifyClient
	void OnFMsgGameFloorLogNotifyClient(struct FGameFloorLogData InGameFloorLogData); // Function DungeonCrawler.DCPlayerController.OnFMsgGameFloorLogNotifyClient
	void OnFMsgGameAnnounceNotifyClient(struct FGameAnnounceData InGameAnnounceData); // Function DungeonCrawler.DCPlayerController.OnFMsgGameAnnounceNotifyClient
	void OnExitConfirmed(uint8_t PopupResult); // Function DungeonCrawler.DCPlayerController.OnExitConfirmed
	void OnExitClicked(); // Function DungeonCrawler.DCPlayerController.OnExitClicked
	bool OnDungeonEscapeOverlapped(struct ADCPlayerCharacterBase* InCharacter); // Function DungeonCrawler.DCPlayerController.OnDungeonEscapeOverlapped
	bool OnDungeonDownOverlapped(struct ADCPlayerCharacterBase* InCharacter); // Function DungeonCrawler.DCPlayerController.OnDungeonDownOverlapped
	void OnClientCall(struct FCallData CallData); // Function DungeonCrawler.DCPlayerController.OnClientCall
	void OnBackToLobbyConfirmed(uint8_t PopupResult); // Function DungeonCrawler.DCPlayerController.OnBackToLobbyConfirmed
	void OnAnyPlayerEscaped(struct FDCPlayerInfo& NewPlayerInfo); // Function DungeonCrawler.DCPlayerController.OnAnyPlayerEscaped
	void OnAnyPlayerDied(struct FDCPlayerInfo& NewPlayerInfo); // Function DungeonCrawler.DCPlayerController.OnAnyPlayerDied
	void NotifySystemMessage_Client(struct FText SystemMessage, float Duration); // Function DungeonCrawler.DCPlayerController.NotifySystemMessage_Client
	void NextFloorRuleForDebug_Server(); // Function DungeonCrawler.DCPlayerController.NextFloorRuleForDebug_Server
	bool IsTargetAccountSelf(); // Function DungeonCrawler.DCPlayerController.IsTargetAccountSelf
	void GmServer(struct FString InKey, struct FString InCmd); // Function DungeonCrawler.DCPlayerController.GmServer
	void Gm(struct FString InCmd); // Function DungeonCrawler.DCPlayerController.Gm
	struct AActor* GetDebugFaceTargetActor(); // Function DungeonCrawler.DCPlayerController.GetDebugFaceTargetActor
	struct FAccountSessionData GetAccountSessionData(); // Function DungeonCrawler.DCPlayerController.GetAccountSessionData
	void ExitUser_Server(uint8_t ExitType); // Function DungeonCrawler.DCPlayerController.ExitUser_Server
	void ExitUser(uint8_t ExitType); // Function DungeonCrawler.DCPlayerController.ExitUser
	void EscapeForDebug_Server(); // Function DungeonCrawler.DCPlayerController.EscapeForDebug_Server
	void ChangeParty_Server(struct FDCPartyId InPartyId); // Function DungeonCrawler.DCPlayerController.ChangeParty_Server
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.DCPlayerController.BroadcastMsgBlueprint
	void Announce_Client(struct FGameAnnounceData AnnounceData); // Function DungeonCrawler.DCPlayerController.Announce_Client
	void AckPlayerCharacterLocation_Client(struct FDCAccountId InAccountId, struct FVector InPlayerPawnLocation, struct FRotator InPlayerPawnRotation); // Function DungeonCrawler.DCPlayerController.AckPlayerCharacterLocation_Client
}; 
 
 


// Class DungeonCrawler.DesignDataAssetLootDrop
// Size: 0x48(Inherited: 0x38)
struct UDesignDataAssetLootDrop : UDCDesignDataAssetBase
{
	struct FDesignDataLootDrop Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCGameSpawnerGroup
// Size: 0x308(Inherited: 0x2F0)
struct ADCGameSpawnerGroup : ADCActorBase
{
	int32_t Count;  // 0x2F0 (0x2F0)
	char pad_756[4];  // 0x2F4 (0x2F4)
	struct TArray<struct FString> ClientDestroyActorNameArray;  // 0x2F8 (0x2F8)


	void OnRep_ClientDestroyActorNameArray(struct TArray<struct FString>& OldClientDestroyActorNameArray); // Function DungeonCrawler.DCGameSpawnerGroup.OnRep_ClientDestroyActorNameArray
}; 
 
 


// Class DungeonCrawler.DCMetaCustomizeComponent
// Size: 0x1B0(Inherited: 0x1B0)
struct UDCMetaCustomizeComponent : UDCCustomizeComponent
{


}; 
 
 


// Class DungeonCrawler.DCGameUserSettings
// Size: 0x4D8(Inherited: 0x148)
struct UDCGameUserSettings : UGameUserSettings
{
	char pad_328[136];  // 0x148 (0x148)
	struct FGameUserSettingControls GameUserSettingControlsSaved;  // 0x1D0 (0x1D0)
	char pad_504[80];  // 0x1F8 (0x1F8)
	struct FGameUserSettingAudios GameUserSettingAudiosSaved;  // 0x248 (0x248)
	char pad_624[80];  // 0x270 (0x270)
	struct FGameUserSettingVideoDisplay GameUserSettingVideoDisplaySaved;  // 0x2C0 (0x2C0)
	char pad_764[268];  // 0x2FC (0x2FC)
	struct FName InputConfigName;  // 0x408 (0x408)
	struct TArray<struct FLoadedMappableConfigPair> RegisteredInputConfigs;  // 0x410 (0x410)
	struct TMap<struct FName, struct FKey> CustomKeyboardConfig;  // 0x420 (0x420)
	struct TMap<struct FName, struct FKey> PendingCustomKeyboardConfig;  // 0x470 (0x470)
	struct FString LastConnectedServerAddress;  // 0x4C0 (0x4C0)
	char pad_1232[8];  // 0x4D0 (0x4D0)


	struct UPlayerMappableInputConfig* GetInputConfigByName(struct FName ConfigName); // Function DungeonCrawler.DCGameUserSettings.GetInputConfigByName
}; 
 
 


// Class DungeonCrawler.MetaComponentBase
// Size: 0x100(Inherited: 0xA0)
struct UMetaComponentBase : UActorComponent
{
	char pad_160[96];  // 0xA0 (0xA0)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.MetaComponentBase.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.MetaComponentBase.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.MetaComponentBase.TerminateBase
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.MetaComponentBase.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.DCGATA_AimTrace
// Size: 0x3F0(Inherited: 0x3E0)
struct ADCGATA_AimTrace : AGameplayAbilityTargetActor
{
	float MaxRange;  // 0x3E0 (0x3E0)
	enum class ECollisionChannel TraceChannel;  // 0x3E4 (0x3E4)
	char pad_997[11];  // 0x3E5 (0x3E5)


}; 
 
 


// Class DungeonCrawler.DCGATA_AimTraceWithSphere
// Size: 0x3F0(Inherited: 0x3E0)
struct ADCGATA_AimTraceWithSphere : AGameplayAbilityTargetActor
{
	float MaxRange;  // 0x3E0 (0x3E0)
	float Radius;  // 0x3E4 (0x3E4)
	enum class ECollisionChannel TraceChannel;  // 0x3E8 (0x3E8)
	char pad_1001[7];  // 0x3E9 (0x3E9)


}; 
 
 


// Class DungeonCrawler.DCGATA_AimTraceToSocket
// Size: 0x440(Inherited: 0x3F0)
struct ADCGATA_AimTraceToSocket : ADCGATA_AimTrace
{
	struct FMulticastInlineDelegate SocketSightBlocked;  // 0x3E8 (0x3E8)
	struct FMulticastInlineDelegate SocketSightUnblocked;  // 0x3F8 (0x3F8)
	struct USkeletalMeshComponent* SkeletalMeshComponent;  // 0x408 (0x408)
	struct FName SocketName;  // 0x410 (0x410)
	struct FGameplayAbilityTargetDataHandle TargetData;  // 0x418 (0x418)


}; 
 
 


// Class DungeonCrawler.DesignDataAssetGameplayAbility
// Size: 0x90(Inherited: 0x38)
struct UDesignDataAssetGameplayAbility : UDCDesignDataAssetBase
{
	struct FDesignDataGameplayAbility Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCItemActorAttributeSet
// Size: 0x8E0(Inherited: 0x8E0)
struct UDCItemActorAttributeSet : UDCAttributeSet
{


}; 
 
 


// Class DungeonCrawler.DCGhostTrailActor
// Size: 0x3E8(Inherited: 0x2F0)
struct ADCGhostTrailActor : ADCActorBase
{
	struct UMaterialInterface* GhostTrailMaterial;  // 0x2F0 (0x2F0)
	struct FName ScalarParameterName;  // 0x2F8 (0x2F8)
	struct UCurveFloat* OpacityCurve;  // 0x300 (0x300)
	struct ACharacter* CharacterRef;  // 0x308 (0x308)
	struct FLinearColor Color;  // 0x310 (0x310)
	char pad_800_1 : 7;  // 0x320 (0x320)
	bool bAutoActive : 1;  // 0x320 (0x320)
	char pad_801[7];  // 0x321 (0x321)
	struct UPoseableMeshComponent* PoseableMeshComp;  // 0x328 (0x328)
	struct TArray<struct UMeshComponent*> AttachedMeshComp;  // 0x330 (0x330)
	struct USceneComponent* SceneRootComp;  // 0x340 (0x340)
	struct FTimeline OpacityTimeline;  // 0x348 (0x348)
	struct UMaterialInstanceDynamic* DynamicMatInstance;  // 0x3E0 (0x3E0)


	void SetGhostMaterial(struct TArray<struct UMeshComponent*> Components); // Function DungeonCrawler.DCGhostTrailActor.SetGhostMaterial
	void HandleTimelineUpdate(float Value); // Function DungeonCrawler.DCGhostTrailActor.HandleTimelineUpdate
	void HandleTimelineFinished(); // Function DungeonCrawler.DCGhostTrailActor.HandleTimelineFinished
	void BeginGhostTrailEffect(); // Function DungeonCrawler.DCGhostTrailActor.BeginGhostTrailEffect
}; 
 
 


// Class DungeonCrawler.GameplayAbilityRelationshipData
// Size: 0x40(Inherited: 0x30)
struct UGameplayAbilityRelationshipData : UDataAsset
{
	struct TArray<struct FGameplayAbilityRelationshipItem> AbilityTagRelationships;  // 0x30 (0x30)


}; 
 
 


// Class DungeonCrawler.DCGiftCodeEditableText
// Size: 0x520(Inherited: 0x4E0)
struct UDCGiftCodeEditableText : UEditableText
{
	char pad_1248[24];  // 0x4E0 (0x4E0)
	int32_t Index;  // 0x4F8 (0x4F8)
	char pad_1276[4];  // 0x4FC (0x4FC)
	struct FText PrevText;  // 0x500 (0x500)
	char pad_1304[8];  // 0x518 (0x518)


	void OnGiftCodeWipedEvent__DelegateSignature(int32_t& Index); // DelegateFunction DungeonCrawler.DCGiftCodeEditableText.OnGiftCodeWipedEvent__DelegateSignature
	void OnGiftCodeFilledEvent__DelegateSignature(struct FText& RemainText, int32_t& Index); // DelegateFunction DungeonCrawler.DCGiftCodeEditableText.OnGiftCodeFilledEvent__DelegateSignature
	void OnCodeTextCommitted(struct FText& InCodeText, enum class ETextCommit CommitType); // Function DungeonCrawler.DCGiftCodeEditableText.OnCodeTextCommitted
	void OnCodeTextChanged(struct FText& InCodeText); // Function DungeonCrawler.DCGiftCodeEditableText.OnCodeTextChanged
}; 
 
 


// Class DungeonCrawler.DCGiftCodePopupData
// Size: 0x30(Inherited: 0x30)
struct UDCGiftCodePopupData : UPopupDataBase
{


}; 
 
 


// Class DungeonCrawler.DCGiftCodePopupBase
// Size: 0x498(Inherited: 0x440)
struct UDCGiftCodePopupBase : UCommonPopupBase
{
	struct UDCGiftCodeEditableText* EnterCode_2;  // 0x440 (0x440)
	struct UDCGiftCodeEditableText* EnterCode_3;  // 0x448 (0x448)
	struct UDCGiftCodeEditableText* EnterCode_4;  // 0x450 (0x450)
	struct UDCGiftCodeEditableText* EnterCode_5;  // 0x458 (0x458)
	struct UCommonButtonPopupWidget* Btn_Two_Close;  // 0x460 (0x460)
	struct UCommonButtonPopupWidget* Btn_Two_Accept;  // 0x468 (0x468)
	char pad_1136[8];  // 0x470 (0x470)
	struct TArray<struct UDCGiftCodeEditableText*> EnterCodeList;  // 0x478 (0x478)
	struct UDCGiftCodePopupData* GiftCodePopupData;  // 0x488 (0x488)
	char pad_1168[8];  // 0x490 (0x490)


	void OnAcceptButtonClicked(); // Function DungeonCrawler.DCGiftCodePopupBase.OnAcceptButtonClicked
	void MoveToPrevCodeBlock(int32_t& InCodeBlockIndex); // Function DungeonCrawler.DCGiftCodePopupBase.MoveToPrevCodeBlock
	void MoveToNextCodeBlock(struct FText& InRemainText, int32_t& InCodeBlockIndex); // Function DungeonCrawler.DCGiftCodePopupBase.MoveToNextCodeBlock
	uint8_t GetWarningTextVisibility(); // Function DungeonCrawler.DCGiftCodePopupBase.GetWarningTextVisibility
	void Close(); // Function DungeonCrawler.DCGiftCodePopupBase.Close
}; 
 
 


// Class DungeonCrawler.DCGiftCodeRewardItemWidget
// Size: 0x360(Inherited: 0x300)
struct UDCGiftCodeRewardItemWidget : UDCWidgetBase
{
	struct UTexture2D* RewardItemIcon;  // 0x300 (0x300)
	UDCGameTooltipWithFlavorTextWidget* TooltipWidgetClass;  // 0x308 (0x308)
	struct FText RewardItemName;  // 0x310 (0x310)
	struct UDCGameTooltipWithFlavorTextWidget* RewardItemTooltipWidget;  // 0x328 (0x328)
	struct FText RewardItemDescription;  // 0x330 (0x330)
	struct FText RewardItemFlavorText;  // 0x348 (0x348)


	struct UUserWidget* GetTooltipWidget(); // Function DungeonCrawler.DCGiftCodeRewardItemWidget.GetTooltipWidget
}; 
 
 


// Class DungeonCrawler.DCPlayerInfoHolder
// Size: 0x330(Inherited: 0x290)
struct ADCPlayerInfoHolder : AInfo
{
	struct ADCCharacterBase* PlayerCharacter;  // 0x290 (0x290)
	struct FDCPlayerInfo PlayerInfo;  // 0x298 (0x298)


	void OnRep_PlayerInfo(struct FDCPlayerInfo& OldPlayerInfo); // Function DungeonCrawler.DCPlayerInfoHolder.OnRep_PlayerInfo
}; 
 
 


// Class DungeonCrawler.DCMonsterDataAsset
// Size: 0x100(Inherited: 0x38)
struct UDCMonsterDataAsset : UDCTableDataAsset
{
	struct FText Name;  // 0x38 (0x38)
	struct TSoftObjectPtr<UArtDataMonster> ArtData;  // 0x50 (0x50)
	struct TSoftObjectPtr<USoundData> SoundData;  // 0x80 (0x80)
	ADCMonsterBase* ActorClass;  // 0xB0 (0xB0)
	struct TArray<struct TSoftObjectPtr<UTagQueryData>> HitTagQueryData;  // 0xB8 (0xB8)
	struct TArray<struct TSoftObjectPtr<UTagQueryData>> BeHitTagQueryData;  // 0xC8 (0xC8)
	struct TArray<struct TSoftObjectPtr<UDCGameplayAbilityDataAsset>> Abilities;  // 0xD8 (0xD8)
	struct TArray<struct TSoftObjectPtr<UDCGameplayEffectDataAsset>> Effects;  // 0xE8 (0xE8)
	int32_t AdvPoint;  // 0xF8 (0xF8)
	int32_t ExpPoint;  // 0xFC (0xFC)


}; 
 
 


// Class DungeonCrawler.DCGiftCodeRewardPopupBase
// Size: 0x460(Inherited: 0x440)
struct UDCGiftCodeRewardPopupBase : UCommonPopupBase
{
	struct UDCCommonButtonBase* Btn_One_Confirm;  // 0x440 (0x440)
	struct UHorizontalBox* Horizontal_GiftList;  // 0x448 (0x448)
	UDCGiftCodeRewardItemWidget* RewardItemWidgetClass;  // 0x450 (0x450)
	struct UDCGiftCodeRewardPopupData* GiftCodeRewardPopupData;  // 0x458 (0x458)


	void OnConfirmButtonClicked(); // Function DungeonCrawler.DCGiftCodeRewardPopupBase.OnConfirmButtonClicked
}; 
 
 


// Class DungeonCrawler.DesignDataAssetItemRequirement
// Size: 0x80(Inherited: 0x38)
struct UDesignDataAssetItemRequirement : UDCDesignDataAssetBase
{
	struct FDesignDataItemRequirement Item;  // 0x38 (0x38)


	bool IsTargetFulfilledAllRequirements(struct FDesignDataItem DesignDataItem, struct AActor* TargetActor); // Function DungeonCrawler.DesignDataAssetItemRequirement.IsTargetFulfilledAllRequirements
	bool IsFulfilledAllRequirements(struct FDesignDataItem& DesignDataItem, struct FPrimaryAssetId& PlayerCharacterId, struct UDCAttributeSet* AttributeSet, struct TArray<struct FPrimaryAssetId>& PerkIdArray, struct FGameplayTagContainer& GameplayTagContainer, struct AActor* TargetActor); // Function DungeonCrawler.DesignDataAssetItemRequirement.IsFulfilledAllRequirements
	struct TArray<uint8_t> GetUnmetItemRequirementsTarget(struct AActor* TargetActor); // Function DungeonCrawler.DesignDataAssetItemRequirement.GetUnmetItemRequirementsTarget
	struct TArray<uint8_t> GetUnmetItemRequirements(struct FPrimaryAssetId PlayerCharacterId, struct UDCAttributeSet* AttributeSet, struct TArray<struct FPrimaryAssetId> PerkIdArray); // Function DungeonCrawler.DesignDataAssetItemRequirement.GetUnmetItemRequirements
}; 
 
 


// Class DungeonCrawler.DCHitBoxComponent
// Size: 0x580(Inherited: 0x580)
struct UDCHitBoxComponent : UBoxComponent
{
	uint8_t HitBoxType;  // 0x578 (0x578)
	float DamageMultiplier;  // 0x57C (0x57C)


	struct FHitResult GetHitResultFromClosestLocationTraceOnMesh(struct FHitResult& InHitResult, struct AActor* Instigator); // Function DungeonCrawler.DCHitBoxComponent.GetHitResultFromClosestLocationTraceOnMesh
	uint8_t GetHitDirection(struct FVector& AttackerLocation); // Function DungeonCrawler.DCHitBoxComponent.GetHitDirection
	struct FVector GetClosestLocationOnMesh(struct FHitResult& InHitResult, struct AActor* Instigator); // Function DungeonCrawler.DCHitBoxComponent.GetClosestLocationOnMesh
}; 
 
 


// Class DungeonCrawler.DCHUD
// Size: 0x390(Inherited: 0x380)
struct ADCHUD : AHUD
{
	UUserWidget* HUDWidgetClass;  // 0x380 (0x380)
	struct UUserWidget* HUDWidget;  // 0x388 (0x388)


}; 
 
 


// Class DungeonCrawler.DCInventoryContainerComponent
// Size: 0x180(Inherited: 0xA0)
struct UDCInventoryContainerComponent : UActorComponent
{
	char pad_160[208];  // 0xA0 (0xA0)
	struct TArray<struct UDCInventoryBase*> InventoryList;  // 0x170 (0x170)


	void RemoveInventory_Server(uint8_t ID); // Function DungeonCrawler.DCInventoryContainerComponent.RemoveInventory_Server
	void OnRep_InventoryList(struct TArray<struct UDCInventoryBase*>& OldInventoryList); // Function DungeonCrawler.DCInventoryContainerComponent.OnRep_InventoryList
	void OnInventoryRemoved(struct UDCInventoryBase* Inventory); // Function DungeonCrawler.DCInventoryContainerComponent.OnInventoryRemoved
	void OnInventoryAdded(struct UDCInventoryBase* Inventory); // Function DungeonCrawler.DCInventoryContainerComponent.OnInventoryAdded
	void ClearInventoryMap_Server(); // Function DungeonCrawler.DCInventoryContainerComponent.ClearInventoryMap_Server
	void AddInventory_Server(struct UDCInventoryBase* Inventory); // Function DungeonCrawler.DCInventoryContainerComponent.AddInventory_Server
}; 
 
 


// Class DungeonCrawler.GameplayCueRelationshipData
// Size: 0xD0(Inherited: 0x30)
struct UGameplayCueRelationshipData : UDataAsset
{
	struct TMap<struct FGameplayTag, struct FGameplayCueTag> GameplayCueRelationshipWithStateTag;  // 0x30 (0x30)
	struct TMap<struct FGameplayTag, struct FGameplayCueTag> OwningClientOnlyGameplayCueRelationshipWithStateTag;  // 0x80 (0x80)


}; 
 
 


// Class DungeonCrawler.DCInventoryComponent
// Size: 0x180(Inherited: 0x180)
struct UDCInventoryComponent : UDCInventoryContainerComponent
{


	void InitFromItemData_Server(struct TArray<struct FItemData> ItemDatas); // Function DungeonCrawler.DCInventoryComponent.InitFromItemData_Server
	void InitFromAccountData_Server(struct TArray<struct FAccountDataItem> ItemDatas); // Function DungeonCrawler.DCInventoryComponent.InitFromAccountData_Server
	void ApplyInventoryBuilder_Server(struct FDCInventoryBuilder Builder); // Function DungeonCrawler.DCInventoryComponent.ApplyInventoryBuilder_Server
}; 
 
 


// Class DungeonCrawler.DCNetReplicationGraphConnection
// Size: 0x328(Inherited: 0x2D8)
struct UDCNetReplicationGraphConnection : UNetReplicationGraphConnection
{
	struct TSet<struct AActor*> ActorSet;  // 0x2D8 (0x2D8)


}; 
 
 


// Class DungeonCrawler.DCIngameInventoryComponent
// Size: 0x180(Inherited: 0x180)
struct UDCIngameInventoryComponent : UDCInventoryComponent
{


}; 
 
 


// Class DungeonCrawler.VoipPartyMemberSettingWidgetData
// Size: 0x60(Inherited: 0x28)
struct UVoipPartyMemberSettingWidgetData : UObject
{
	struct FVoipPartyMemberData VoipPartyMemberData;  // 0x28 (0x28)


}; 
 
 


// Class DungeonCrawler.MetaPartyInterface
// Size: 0x28(Inherited: 0x28)
struct UMetaPartyInterface : UInterface
{


}; 
 
 


// Class DungeonCrawler.DCIngameInventoryPageWidget
// Size: 0x480(Inherited: 0x460)
struct UDCIngameInventoryPageWidget : UGameGroupWidgetBase
{
	struct UDCInventoryWidget* PlayerInventoryWidget;  // 0x460 (0x460)
	struct UDCInventoryWidget* LootInventoryWidget;  // 0x468 (0x468)
	struct UDCStorageWidget* LootStorageWidget;  // 0x470 (0x470)
	struct UInvalidationBox* ItemDropAreaWidget;  // 0x478 (0x478)


	void OnTargetCharacterRegistered(struct ADCCharacterBase* InCharacter); // Function DungeonCrawler.DCIngameInventoryPageWidget.OnTargetCharacterRegistered
	void OnTargetAccountUpdated(struct FDCAccountId& New, struct FDCAccountId& Old); // Function DungeonCrawler.DCIngameInventoryPageWidget.OnTargetAccountUpdated
	void OnLootTargetPropEvent(struct APropsActorBase* InProp); // Function DungeonCrawler.DCIngameInventoryPageWidget.OnLootTargetPropEvent
	void OnLootTargetPlayerEvent(struct ADCPlayerCharacterBase* InPlayer); // Function DungeonCrawler.DCIngameInventoryPageWidget.OnLootTargetPlayerEvent
	void OnLootTargetMonsterEvent(struct ADCMonsterBase* InMonster); // Function DungeonCrawler.DCIngameInventoryPageWidget.OnLootTargetMonsterEvent
}; 
 
 


// Class DungeonCrawler.DCInputComponent
// Size: 0x160(Inherited: 0x160)
struct UDCInputComponent : UEnhancedInputComponent
{


}; 
 
 


// Class DungeonCrawler.DCInputConfig
// Size: 0x40(Inherited: 0x30)
struct UDCInputConfig : UDataAsset
{
	struct TArray<struct FDCInputAction> NativeInputActions;  // 0x30 (0x30)


}; 
 
 


// Class DungeonCrawler.GamePartyManagePartyMemberWidget
// Size: 0x388(Inherited: 0x300)
struct UGamePartyManagePartyMemberWidget : UDCWidgetBase
{
	char pad_768[128];  // 0x300 (0x300)
	struct UAccountLink* AccountLink;  // 0x380 (0x380)


	void OnAccountDataReplication(struct FAccountDataReplication& NewValue, struct FAccountDataReplication& OldValue); // Function DungeonCrawler.GamePartyManagePartyMemberWidget.OnAccountDataReplication
}; 
 
 


// Class DungeonCrawler.DCInputNumberWidget
// Size: 0x2B0(Inherited: 0x278)
struct UDCInputNumberWidget : UUserWidget
{
	char pad_632[32];  // 0x278 (0x278)
	struct USlider* Slider;  // 0x298 (0x298)
	struct UCommonButtonPopupWidget* ButtonAccept;  // 0x2A0 (0x2A0)
	struct UCommonButtonPopupWidget* ButtonCancel;  // 0x2A8 (0x2A8)


	void OnCancelled(); // Function DungeonCrawler.DCInputNumberWidget.OnCancelled
	void OnAccepted(); // Function DungeonCrawler.DCInputNumberWidget.OnAccepted
	void ManualClick(); // Function DungeonCrawler.DCInputNumberWidget.ManualClick
	bool IsValidText(struct FText Text); // Function DungeonCrawler.DCInputNumberWidget.IsValidText
}; 
 
 


// Class DungeonCrawler.DCInteractTargetInterface
// Size: 0x28(Inherited: 0x28)
struct UDCInteractTargetInterface : UInterface
{


	void InteractTargetInfoRarity(struct FGameplayTag& RarityTag); // Function DungeonCrawler.DCInteractTargetInterface.InteractTargetInfoRarity
	void InteractTargetInfoName(struct FText& Name); // Function DungeonCrawler.DCInteractTargetInterface.InteractTargetInfoName
}; 
 
 


// Class DungeonCrawler.DCInventoryCharacter
// Size: 0x6C0(Inherited: 0x6B0)
struct ADCInventoryCharacter : ADCCharacterV2
{
	struct ADCCharacterLobbyCapture* LobbyCharacter;  // 0x6B0 (0x6B0)
	char pad_1720[8];  // 0x6B8 (0x6B8)


}; 
 
 


// Class DungeonCrawler.DCInventorySetWidget
// Size: 0x2E8(Inherited: 0x2C0)
struct UDCInventorySetWidget : UDCInventoryWidgetBase
{
	UDCPlayerInventoryWidget* PlayerInventoryWidgetClass;  // 0x2C0 (0x2C0)
	UDCBagWidget* StorageWidgetClass;  // 0x2C8 (0x2C8)
	UDCInventoryTabButtonWidget* TabButtonWidgetClass;  // 0x2D0 (0x2D0)
	struct UWidgetSwitcher* WidgetSwitcher;  // 0x2D8 (0x2D8)
	struct UVerticalBox* TabBox;  // 0x2E0 (0x2E0)


	void SetIndex(int32_t InIndex); // Function DungeonCrawler.DCInventorySetWidget.SetIndex
}; 
 
 


// Class DungeonCrawler.DCProjectileAttributeSet
// Size: 0x8E0(Inherited: 0x8E0)
struct UDCProjectileAttributeSet : UDCAttributeSet
{


}; 
 
 


// Class DungeonCrawler.DCInventoryTabButtonWidget
// Size: 0x15A0(Inherited: 0x15A0)
struct UDCInventoryTabButtonWidget : UDCStateButtonWidgetBase
{


	void SetEquipment(bool bState); // Function DungeonCrawler.DCInventoryTabButtonWidget.SetEquipment
}; 
 
 


// Class DungeonCrawler.TradeUserListEntryWidget
// Size: 0x1600(Inherited: 0x15F0)
struct UTradeUserListEntryWidget : ULobbyUserSlotBase
{
	char pad_5616[16];  // 0x15F0 (0x15F0)


	void OnRightClicked(); // Function DungeonCrawler.TradeUserListEntryWidget.OnRightClicked
}; 
 
 


// Class DungeonCrawler.DCInventoryWidget
// Size: 0x2D0(Inherited: 0x2C0)
struct UDCInventoryWidget : UDCInventoryWidgetBase
{
	struct UDCEquipmentWidget* EquipWidget;  // 0x2C0 (0x2C0)
	struct UDCBagWidget* BagWidget;  // 0x2C8 (0x2C8)


}; 
 
 


// Class DungeonCrawler.DCItemBundleInfoDataAsset
// Size: 0x48(Inherited: 0x38)
struct UDCItemBundleInfoDataAsset : UDCTableDataAsset
{
	struct TArray<struct FDDCItemBundleInfoItem> ItemBundleInfoItemArray;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCItemRequirementDataAsset
// Size: 0x90(Inherited: 0x38)
struct UDCItemRequirementDataAsset : UDCTableDataAsset
{
	struct TArray<struct FPrimaryAssetId> ClassRequirements;  // 0x38 (0x38)
	int32_t StrengthRequirement;  // 0x48 (0x48)
	int32_t AgilityRequirement;  // 0x4C (0x4C)
	int32_t WillRequirement;  // 0x50 (0x50)
	int32_t KnowledgeRequirement;  // 0x54 (0x54)
	int32_t ResourcefulRequirement;  // 0x58 (0x58)
	char pad_92[4];  // 0x5C (0x5C)
	struct TArray<struct FPrimaryAssetId> PerkRequirements;  // 0x60 (0x60)
	struct FGameplayTagContainer PairWeaponRequirements;  // 0x70 (0x70)


}; 
 
 


// Class DungeonCrawler.DCItemPropertyTypeDataAsset
// Size: 0x90(Inherited: 0x38)
struct UDCItemPropertyTypeDataAsset : UDCTableDataAsset
{
	struct FGameplayTag PropertyType;  // 0x38 (0x38)
	struct FPrimaryAssetId PerkId;  // 0x40 (0x40)
	struct FPrimaryAssetId SkillId;  // 0x50 (0x50)
	struct FPrimaryAssetId SpellId;  // 0x60 (0x60)
	UGameplayEffect* EffectClass;  // 0x70 (0x70)
	struct FGameplayTag EffectType;  // 0x78 (0x78)
	float ValueRatio;  // 0x80 (0x80)
	int32_t PrimaryTooltipPriority;  // 0x84 (0x84)
	int32_t SecondaryTooltipPriority;  // 0x88 (0x88)
	char pad_140[4];  // 0x8C (0x8C)


}; 
 
 


// Class DungeonCrawler.GA_ItemActivateBase
// Size: 0x558(Inherited: 0x558)
struct UGA_ItemActivateBase : UDCGameplayAbilityBase
{


	void ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_ItemActivateBase.ReceivedEvent
	void EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_ItemActivateBase.EventReceived
	void Deactivated(); // Function DungeonCrawler.GA_ItemActivateBase.Deactivated
	void Activated(); // Function DungeonCrawler.GA_ItemActivateBase.Activated
}; 
 
 


// Class DungeonCrawler.DCTradePhaseConfirmWidget
// Size: 0x320(Inherited: 0x300)
struct UDCTradePhaseConfirmWidget : UDCWidgetBase
{
	int32_t TradeFee;  // 0x300 (0x300)
	char pad_772[4];  // 0x304 (0x304)
	struct UDCTradeBoxWidget* TradeBoxLocal;  // 0x308 (0x308)
	struct UDCTradeBoxWidget* TradeBoxRemote;  // 0x310 (0x310)
	struct UDCCommonButtonBase* CancelTradeButton;  // 0x318 (0x318)


	void OnResponseLocalTraderConfirmRequestResult(bool bRequestSucceed); // Function DungeonCrawler.DCTradePhaseConfirmWidget.OnResponseLocalTraderConfirmRequestResult
	void OnLocalTraderCheckBoxStateChanged(bool bIsChecked); // Function DungeonCrawler.DCTradePhaseConfirmWidget.OnLocalTraderCheckBoxStateChanged
	void OnCancelTradeButtonClicked(); // Function DungeonCrawler.DCTradePhaseConfirmWidget.OnCancelTradeButtonClicked
	void OnBeginTradeConfirm(); // Function DungeonCrawler.DCTradePhaseConfirmWidget.OnBeginTradeConfirm
}; 
 
 


// Class DungeonCrawler.DCItemPropertyDataAsset
// Size: 0x48(Inherited: 0x38)
struct UDCItemPropertyDataAsset : UDCTableDataAsset
{
	struct TArray<struct FDDCItemPropertyItem> ItemPropertyItemArray;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.GameHeadupWidgetComponent
// Size: 0x710(Inherited: 0x6B0)
struct UGameHeadupWidgetComponent : UWidgetComponent
{
	char pad_1712[96];  // 0x6B0 (0x6B0)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.GameHeadupWidgetComponent.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.GameHeadupWidgetComponent.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.GameHeadupWidgetComponent.TerminateBase
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.GameHeadupWidgetComponent.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.DCItemConsumeDataAsset
// Size: 0x58(Inherited: 0x38)
struct UDCItemConsumeDataAsset : UDCTableDataAsset
{
	struct FText ConsumeText;  // 0x38 (0x38)
	float ConsumeDuration;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)


}; 
 
 


// Class DungeonCrawler.DCVoipInterface
// Size: 0x28(Inherited: 0x28)
struct UDCVoipInterface : UInterface
{


}; 
 
 


// Class DungeonCrawler.DCItemDataAsset
// Size: 0x288(Inherited: 0x38)
struct UDCItemDataAsset : UDCTableDataAsset
{
	struct FGameplayTag IdTag;  // 0x38 (0x38)
	struct FText Name;  // 0x40 (0x40)
	struct FText FlavorText;  // 0x58 (0x58)
	struct FGameplayTag SlotType;  // 0x70 (0x70)
	struct FGameplayTag HandType;  // 0x78 (0x78)
	struct TArray<struct FGameplayTag> WeaponTypes;  // 0x80 (0x80)
	struct FGameplayTag ArmorType;  // 0x90 (0x90)
	struct FGameplayTag UtilityType;  // 0x98 (0x98)
	struct FGameplayTag AccessoryType;  // 0xA0 (0xA0)
	struct FGameplayTag MiscType;  // 0xA8 (0xA8)
	struct FGameplayTag RarityType;  // 0xB0 (0xB0)
	int32_t MaxCount;  // 0xB8 (0xB8)
	int32_t MaxAmmoCount;  // 0xBC (0xBC)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool CanDrop : 1;  // 0xC0 (0xC0)
	char pad_193_1 : 7;  // 0xC1 (0xC1)
	bool CanSaveIntoDatabase : 1;  // 0xC1 (0xC1)
	char pad_194[6];  // 0xC2 (0xC2)
	struct TSoftObjectPtr<UArtDataItem> ArtData;  // 0xC8 (0xC8)
	struct TSoftObjectPtr<USoundData> SoundData;  // 0xF8 (0xF8)
	struct TSoftObjectPtr<UDCItemConsumeDataAsset> ConsumeData;  // 0x128 (0x128)
	AItemActor* ActorClass;  // 0x158 (0x158)
	int32_t InventoryWidth;  // 0x160 (0x160)
	int32_t InventoryHeight;  // 0x164 (0x164)
	float WearingDelayTime;  // 0x168 (0x168)
	char pad_364[4];  // 0x16C (0x16C)
	struct TArray<struct TSoftObjectPtr<UDCGameplayAbilityDataAsset>> SelfAbilities;  // 0x170 (0x170)
	struct TArray<struct TSoftObjectPtr<UDCGameplayEffectDataAsset>> SelfEffects;  // 0x180 (0x180)
	struct TArray<struct TSoftObjectPtr<UDCGameplayAbilityDataAsset>> Abilities;  // 0x190 (0x190)
	struct TArray<struct TSoftObjectPtr<UDCGameplayEffectDataAsset>> Effects;  // 0x1A0 (0x1A0)
	struct TSoftObjectPtr<UDCItemPropertyDataAsset> PrimaryProperty;  // 0x1B0 (0x1B0)
	struct TArray<struct TSoftObjectPtr<UDCItemPropertyDataAsset>> SecondaryProperties;  // 0x1E0 (0x1E0)
	struct TSoftObjectPtr<UDCItemRequirementDataAsset> Requirement;  // 0x1F0 (0x1F0)
	struct TSoftObjectPtr<UDCItemBundleInfoDataAsset> BundleInfo;  // 0x220 (0x220)
	struct TSoftObjectPtr<UDCItemContainerDataAsset> ContainerData;  // 0x250 (0x250)
	int32_t AdvPoint;  // 0x280 (0x280)
	int32_t ExpPoint;  // 0x284 (0x284)


}; 
 
 


// Class DungeonCrawler.DesignDataAssetPerk
// Size: 0xD0(Inherited: 0x38)
struct UDesignDataAssetPerk : UDCDesignDataAssetBase
{
	struct FDesignDataPerk Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCItemDragDropOperation
// Size: 0x1B0(Inherited: 0x90)
struct UDCItemDragDropOperation : UDragDropOperation
{
	uint8_t InventoryId;  // 0x90 (0x90)
	char pad_145[7];  // 0x91 (0x91)
	struct FDCItemInfo ItemInfo;  // 0x98 (0x98)


}; 
 
 


// Class DungeonCrawler.InventoryTabWidgetBase
// Size: 0x1590(Inherited: 0x1580)
struct UInventoryTabWidgetBase : UDCCommonButtonBase
{
	uint8_t PlayerInventoryTabType;  // 0x1580 (0x1580)
	char pad_5505[15];  // 0x1581 (0x1581)


	void OnClickedInventoryTab(); // Function DungeonCrawler.InventoryTabWidgetBase.OnClickedInventoryTab
	void OnChangeActiveState(bool bActive); // Function DungeonCrawler.InventoryTabWidgetBase.OnChangeActiveState
}; 
 
 


// Class DungeonCrawler.GA_RangedAttackBase
// Size: 0x5C0(Inherited: 0x558)
struct UGA_RangedAttackBase : UDCGameplayAbilityBase
{
	struct UAnimMontage* MontageToPlay;  // 0x558 (0x558)
	struct UAnimMontage* MontageToPlayOnSourceObject;  // 0x560 (0x560)
	AProjectileActor* ProjectileActorClass;  // 0x568 (0x568)
	struct FName FireSocketName;  // 0x570 (0x570)
	float ProjectileSpeedMultiplier;  // 0x578 (0x578)
	char pad_1404[4];  // 0x57C (0x57C)
	char pad_1408_1 : 7;  // 0x580 (0x580)
	bool IsMultiFireProjectiles : 1;  // 0x580 (0x580)
	char pad_1409[7];  // 0x581 (0x581)
	struct UCurveFloat* DamageCurve;  // 0x588 (0x588)
	char pad_1424_1 : 7;  // 0x590 (0x590)
	bool bNeedsAmmoToActivate : 1;  // 0x590 (0x590)
	char pad_1425_1 : 7;  // 0x591 (0x591)
	bool bNeedsAmmoToFire : 1;  // 0x591 (0x591)
	char pad_1426[2];  // 0x592 (0x592)
	int32_t AmmoUsage;  // 0x594 (0x594)
	struct FPrimaryAssetId AmmoItemId;  // 0x598 (0x598)
	char pad_1448_1 : 7;  // 0x5A8 (0x5A8)
	bool bPlayPullOnAnimationActivation : 1;  // 0x5A8 (0x5A8)
	char pad_1449[7];  // 0x5A9 (0x5A9)
	struct ADCGATA_AimTraceToSocket* SocketTargetActor;  // 0x5B0 (0x5B0)
	char pad_1464[8];  // 0x5B8 (0x5B8)


	void UpdatedRangedWeaponCrosshairs(struct APlayerController* PlayerController); // Function DungeonCrawler.GA_RangedAttackBase.UpdatedRangedWeaponCrosshairs
	void ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_RangedAttackBase.ReceivedEvent
	void ProjectileFired(); // Function DungeonCrawler.GA_RangedAttackBase.ProjectileFired
	void OnCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_RangedAttackBase.OnCompleted
	void OnCancelled(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_RangedAttackBase.OnCancelled
	void MultiFireProjectiles(struct FGameplayTag EventTag, struct FGameplayEventData EventData, float FirePower); // Function DungeonCrawler.GA_RangedAttackBase.MultiFireProjectiles
	AProjectileActor* GetProjectileActorClass(); // Function DungeonCrawler.GA_RangedAttackBase.GetProjectileActorClass
	void FireSocketSightUnblocked(struct FGameplayAbilityTargetDataHandle& InData); // Function DungeonCrawler.GA_RangedAttackBase.FireSocketSightUnblocked
	void FireSocketSightBlocked(struct FGameplayAbilityTargetDataHandle& InData); // Function DungeonCrawler.GA_RangedAttackBase.FireSocketSightBlocked
	void FireProjectile(struct FGameplayTag EventTag, struct FGameplayEventData EventData, float FirePower); // Function DungeonCrawler.GA_RangedAttackBase.FireProjectile
	void EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_RangedAttackBase.EventReceived
	void CreateProjectiles(struct FGameplayTag EventTag, struct FGameplayEventData EventData, float FirePower, struct FVector StartLocation); // Function DungeonCrawler.GA_RangedAttackBase.CreateProjectiles
	void CreatedProjectile(struct AProjectileActor* Projectile, struct FHitResult HitResult, struct FGameplayTag EventTag); // Function DungeonCrawler.GA_RangedAttackBase.CreatedProjectile
	void ActivateCrossHairPullAnimation(struct APlayerController* PlayerController); // Function DungeonCrawler.GA_RangedAttackBase.ActivateCrossHairPullAnimation
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function DungeonCrawler.GA_RangedAttackBase.AbilityActivated
}; 
 
 


// Class DungeonCrawler.DCTargetType
// Size: 0x28(Inherited: 0x28)
struct UDCTargetType : UObject
{


	void GetTargets(struct AActor* TargetingOwnerActor, struct AActor* TargetingAvatarActor, struct FGameplayEventData EventData, struct TArray<struct FHitResult>& OutHitResults, struct TArray<struct AActor*>& OutActors); // Function DungeonCrawler.DCTargetType.GetTargets
}; 
 
 


// Class DungeonCrawler.DCItemDragVisualWidget
// Size: 0x508(Inherited: 0x500)
struct UDCItemDragVisualWidget : UDCItemCommonWidget
{
	struct USizeBox* ItemSizeBox;  // 0x500 (0x500)


}; 
 
 


// Class DungeonCrawler.DCJunkItemFilterValidator
// Size: 0x30(Inherited: 0x30)
struct UDCJunkItemFilterValidator : UDCInventoryValidatorBase
{


}; 
 
 


// Class DungeonCrawler.DCItemSkinComponent
// Size: 0x100(Inherited: 0xA0)
struct UDCItemSkinComponent : UActorComponent
{
	struct TArray<struct UDCItemSkinDataAsset*> Datas;  // 0xA0 (0xA0)
	char pad_176[80];  // 0xB0 (0xB0)


	void RemoveDataForDebug_Server(struct FPrimaryAssetId ID); // Function DungeonCrawler.DCItemSkinComponent.RemoveDataForDebug_Server
	void OnRep_Datas(struct TArray<struct UDCItemSkinDataAsset*>& OldDatas); // Function DungeonCrawler.DCItemSkinComponent.OnRep_Datas
	void AddDataForDebug_Server(struct UDCItemSkinDataAsset* InData); // Function DungeonCrawler.DCItemSkinComponent.AddDataForDebug_Server
}; 
 
 


// Class DungeonCrawler.DCItemSkinWidget
// Size: 0x3E8(Inherited: 0x368)
struct UDCItemSkinWidget : UDCControlWidgetBase
{
	char pad_872[24];  // 0x368 (0x368)
	struct FText ItemSkinName;  // 0x380 (0x380)
	struct FText ItemSkinFlavorText;  // 0x398 (0x398)
	struct UTexture2D* ItemSkinIconTexture;  // 0x3B0 (0x3B0)
	struct FPrimaryAssetId ItemSkinId;  // 0x3B8 (0x3B8)
	char pad_968_1 : 7;  // 0x3C8 (0x3C8)
	bool bIsEquipped : 1;  // 0x3C8 (0x3C8)
	char pad_969[7];  // 0x3C9 (0x3C9)
	UDCGameTooltipWithFlavorTextWidget* TooltipWidgetClass;  // 0x3D0 (0x3D0)
	struct UDCGameTooltipWithFlavorTextWidget* SkinTooltipWidget;  // 0x3D8 (0x3D8)
	struct UDCItemSkinArtData* ItemSkinArtData;  // 0x3E0 (0x3E0)


	struct UUserWidget* GetTooltipWidget(); // Function DungeonCrawler.DCItemSkinWidget.GetTooltipWidget
}; 
 
 


// Class DungeonCrawler.TotalGoldCountWidgetBase
// Size: 0x388(Inherited: 0x300)
struct UTotalGoldCountWidgetBase : UDCWidgetBase
{
	struct UTextBlock* GoldCountText;  // 0x300 (0x300)
	struct UAccountLink* AccountLink;  // 0x308 (0x308)
	struct TMap<struct TWeakObjectPtr<UInventoryComponent>, int32_t> InventoryGoldCountMap;  // 0x310 (0x310)
	struct TWeakObjectPtr<APawn> LinkedPlayerPawn;  // 0x360 (0x360)
	struct FString LinkedAccountId;  // 0x368 (0x368)
	struct FString CheckTargetAccountId;  // 0x378 (0x378)


}; 
 
 


// Class DungeonCrawler.DCItemSkinListEntryWidget
// Size: 0x3F8(Inherited: 0x3E8)
struct UDCItemSkinListEntryWidget : UDCItemSkinWidget
{
	char pad_1000[16];  // 0x3E8 (0x3E8)


	void OnRightClicked(); // Function DungeonCrawler.DCItemSkinListEntryWidget.OnRightClicked
}; 
 
 


// Class DungeonCrawler.DCItemTooltipNameWidget
// Size: 0x4E8(Inherited: 0x4C8)
struct UDCItemTooltipNameWidget : UDCItemWidgetBase
{
	struct FGameplayTag Rarity;  // 0x4C8 (0x4C8)
	char pad_1232_1 : 7;  // 0x4D0 (0x4D0)
	bool bIsSoulHeart : 1;  // 0x4D0 (0x4D0)
	char pad_1233[7];  // 0x4D1 (0x4D1)
	struct UTextBlock* ItemNameTextBlock;  // 0x4D8 (0x4D8)
	struct UTextBlock* SoulHeartOwnerNameTextBlock;  // 0x4E0 (0x4E0)


}; 
 
 


// Class DungeonCrawler.DCItemTooltipStatElementWidget
// Size: 0x288(Inherited: 0x278)
struct UDCItemTooltipStatElementWidget : UUserWidget
{
	struct UDCItemPropertyTypeDataAsset* Data;  // 0x278 (0x278)
	int32_t Value;  // 0x280 (0x280)
	char pad_644[4];  // 0x284 (0x284)


}; 
 
 


// Class DungeonCrawler.DCItemTooltipStatWidget
// Size: 0x4E0(Inherited: 0x4C8)
struct UDCItemTooltipStatWidget : UDCItemWidgetBase
{
	struct UVerticalBox* VerticalBox;  // 0x4C8 (0x4C8)
	UDCItemTooltipStatElementWidget* PrimaryChildWidgetClass;  // 0x4D0 (0x4D0)
	UDCItemTooltipStatElementWidget* SecondaryChildWidgetClass;  // 0x4D8 (0x4D8)


	bool IsEmpty(); // Function DungeonCrawler.DCItemTooltipStatWidget.IsEmpty
}; 
 
 


// Class DungeonCrawler.DCPlayerCharacterDataAsset
// Size: 0x190(Inherited: 0x38)
struct UDCPlayerCharacterDataAsset : UDCTableDataAsset
{
	struct FText Name;  // 0x38 (0x38)
	struct TSoftObjectPtr<UDescData> Dialog;  // 0x50 (0x50)
	struct FText FlavorText;  // 0x80 (0x80)
	struct TSoftObjectPtr<UDescData> ClassInfo;  // 0x98 (0x98)
	struct TArray<struct FGameplayTag> ClassTypes;  // 0xC8 (0xC8)
	struct TSoftObjectPtr<UArtDataPlayerCharacter> ArtData;  // 0xD8 (0xD8)
	struct TSoftObjectPtr<USoundData> SoundData;  // 0x108 (0x108)
	char pad_312_1 : 7;  // 0x138 (0x138)
	bool CanUse : 1;  // 0x138 (0x138)
	char pad_313_1 : 7;  // 0x139 (0x139)
	bool IsDefault : 1;  // 0x139 (0x139)
	char pad_314_1 : 7;  // 0x13A (0x13A)
	bool IsExperimental : 1;  // 0x13A (0x13A)
	char pad_315[5];  // 0x13B (0x13B)
	struct TArray<struct TSoftObjectPtr<UDCEmoteDataAsset>> Emotes;  // 0x140 (0x140)
	struct TArray<struct TSoftObjectPtr<UDCGameplayAbilityDataAsset>> Abilities;  // 0x150 (0x150)
	struct TArray<struct TSoftObjectPtr<UDCGameplayEffectDataAsset>> Effects;  // 0x160 (0x160)
	struct TArray<struct TSoftObjectPtr<UDCPerkDataAsset>> Perks;  // 0x170 (0x170)
	struct TArray<uint8_t> DefaultHands;  // 0x180 (0x180)


}; 
 
 


// Class DungeonCrawler.DCItemTooltipAbilityElementWidget
// Size: 0x280(Inherited: 0x278)
struct UDCItemTooltipAbilityElementWidget : UUserWidget
{
	struct URichTextBlock* RichTextBlock;  // 0x278 (0x278)


}; 
 
 


// Class DungeonCrawler.DCItemTooltipAbilityWidget
// Size: 0x4D8(Inherited: 0x4C8)
struct UDCItemTooltipAbilityWidget : UDCItemWidgetBase
{
	struct UVerticalBox* VerticalBox;  // 0x4C8 (0x4C8)
	UDCItemTooltipAbilityElementWidget* ChildWidgetClass;  // 0x4D0 (0x4D0)


	bool IsEmpty(); // Function DungeonCrawler.DCItemTooltipAbilityWidget.IsEmpty
}; 
 
 


// Class DungeonCrawler.GA_ItemConsumeDrink
// Size: 0x6A0(Inherited: 0x650)
struct UGA_ItemConsumeDrink : UGA_ItemConsumeBase
{
	struct TMap<struct FGameplayTag, struct FDCDrinkItemConsumeData> DrinkConsumeDatas;  // 0x650 (0x650)


}; 
 
 


// Class DungeonCrawler.DCItemTooltipRequirementWidget
// Size: 0x4E0(Inherited: 0x4C8)
struct UDCItemTooltipRequirementWidget : UDCItemWidgetBase
{
	struct TArray<struct FPrimaryAssetId> ClassIds;  // 0x4C8 (0x4C8)
	char pad_1240_1 : 7;  // 0x4D8 (0x4D8)
	bool bRequired : 1;  // 0x4D8 (0x4D8)
	char pad_1241[7];  // 0x4D9 (0x4D9)


	bool IsEmpty(); // Function DungeonCrawler.DCItemTooltipRequirementWidget.IsEmpty
}; 
 
 


// Class DungeonCrawler.DCPostProcessingComponent
// Size: 0x188(Inherited: 0xA0)
struct UDCPostProcessingComponent : UActorComponent
{
	struct TMap<struct UMaterialInstanceDynamic*, struct UDCCameraPostProcessTimelineData*> CameraPostProcessList;  // 0xA0 (0xA0)
	struct TArray<struct UMaterialInstanceDynamic*> PostProcessToDelete;  // 0xF0 (0xF0)
	struct TArray<struct FString> MaterialNameToDeleteList;  // 0x100 (0x100)
	char pad_272[88];  // 0x110 (0x110)
	struct FMulticastInlineDelegate OnCameraPostProcessComponentUpdate;  // 0x168 (0x168)
	struct FMulticastInlineDelegate OnCameraPostProcessComponentFinished;  // 0x178 (0x178)


	void StopCameraPostProcess(struct UMaterialInstanceDynamic* InMIDKey); // Function DungeonCrawler.DCPostProcessingComponent.StopCameraPostProcess
	void SetTimeCameraPostProcess(struct UMaterialInstanceDynamic* InMIDKey, float NewTime); // Function DungeonCrawler.DCPostProcessingComponent.SetTimeCameraPostProcess
	void SetPlayRateCameraPostProcess(struct UMaterialInstanceDynamic* InMIDKey, float NewRate); // Function DungeonCrawler.DCPostProcessingComponent.SetPlayRateCameraPostProcess
	void SetPlayPositionCameraPostProcess(struct UMaterialInstanceDynamic* InMIDKey, float NewTime, bool bFireEvents, bool bFireUpdate); // Function DungeonCrawler.DCPostProcessingComponent.SetPlayPositionCameraPostProcess
	bool SetCameraPostProcess(struct UMaterialInstanceDynamic* InMIDKey, struct UCurveFloat* InCurve, struct TArray<struct FName> InParameterNames); // Function DungeonCrawler.DCPostProcessingComponent.SetCameraPostProcess
	void ReversePlayCameraPostProcess(struct UMaterialInstanceDynamic* InMIDKey); // Function DungeonCrawler.DCPostProcessingComponent.ReversePlayCameraPostProcess
	void ReverseFromEndPlayCameraPostProcess(struct UMaterialInstanceDynamic* InMIDKey); // Function DungeonCrawler.DCPostProcessingComponent.ReverseFromEndPlayCameraPostProcess
	int32_t RemoveMeshHalfTranslucent(struct USkeletalMeshComponent* InMesh, bool IsResetMeshPriority); // Function DungeonCrawler.DCPostProcessingComponent.RemoveMeshHalfTranslucent
	void RemoveDeletedPostProcessData(); // Function DungeonCrawler.DCPostProcessingComponent.RemoveDeletedPostProcessData
	void RemoveCameraPostProcess(struct UMaterialInstanceDynamic* InMIDKey, struct FName InMaterialName); // Function DungeonCrawler.DCPostProcessingComponent.RemoveCameraPostProcess
	void PlayFromStartCameraPostProcess(struct UMaterialInstanceDynamic* InMIDKey); // Function DungeonCrawler.DCPostProcessingComponent.PlayFromStartCameraPostProcess
	void PlayCameraPostProcess(struct UMaterialInstanceDynamic* InMIDKey); // Function DungeonCrawler.DCPostProcessingComponent.PlayCameraPostProcess
	void OnCameraPostProcessDataTimelineUpdate(float DeltaTime, enum class ETimelineDirection InTimelineDirection, struct UMaterialInstanceDynamic* InMIDKey); // Function DungeonCrawler.DCPostProcessingComponent.OnCameraPostProcessDataTimelineUpdate
	void OnCameraPostProcessDataTimelineFinished(float DeltaTime, enum class ETimelineDirection InTimelineDirection, struct UMaterialInstanceDynamic* InMIDKey); // Function DungeonCrawler.DCPostProcessingComponent.OnCameraPostProcessDataTimelineFinished
	bool IsCameraPostProcess(struct UMaterialInstanceDynamic* InMIDKey); // Function DungeonCrawler.DCPostProcessingComponent.IsCameraPostProcess
	int32_t GetMeshHalfTranslucentReferenceCount(); // Function DungeonCrawler.DCPostProcessingComponent.GetMeshHalfTranslucentReferenceCount
	struct UMaterialInstanceDynamic* FindCameraPostProcessMID(struct FName InMaterialName); // Function DungeonCrawler.DCPostProcessingComponent.FindCameraPostProcessMID
	struct UMaterialInstanceDynamic* CreateCameraPostProcess(struct UMaterialInstance* InMaterial, struct UCurveFloat* InCurve, struct TArray<struct FName> InParameterNames, struct FName InMaterialName); // Function DungeonCrawler.DCPostProcessingComponent.CreateCameraPostProcess
	int32_t AddMeshHalfTranslucentBySameTeam(struct USkeletalMeshComponent* InMesh, struct UMaterialInterface* InMaterial, bool IsParty, bool IsRenderingPriority); // Function DungeonCrawler.DCPostProcessingComponent.AddMeshHalfTranslucentBySameTeam
	int32_t AddMeshHalfTranslucent(struct USkeletalMeshComponent* InMesh, struct UMaterialInterface* InMaterial, bool IsRenderingPriority); // Function DungeonCrawler.DCPostProcessingComponent.AddMeshHalfTranslucent
}; 
 
 


// Class DungeonCrawler.DCItemTooltipInfoWidget
// Size: 0x500(Inherited: 0x4C8)
struct UDCItemTooltipInfoWidget : UDCItemWidgetBase
{
	uint8_t ItemType;  // 0x4C8 (0x4C8)
	char pad_1225[3];  // 0x4C9 (0x4C9)
	struct FGameplayTag SlotType;  // 0x4CC (0x4CC)
	char pad_1236[4];  // 0x4D4 (0x4D4)
	struct TArray<struct FGameplayTag> WeaponTypes;  // 0x4D8 (0x4D8)
	struct FGameplayTag HandType;  // 0x4E8 (0x4E8)
	struct FGameplayTag ArmorType;  // 0x4F0 (0x4F0)
	struct FGameplayTag UtilityType;  // 0x4F8 (0x4F8)


}; 
 
 


// Class DungeonCrawler.GlobalData
// Size: 0x88(Inherited: 0x38)
struct UGlobalData : UDCDataAssetBase
{
	struct TMap<struct FGameplayTag, struct FText> AttackTypeTextMap;  // 0x38 (0x38)


	struct FText GetAttackTypeText(struct FGameplayTag AttackType); // Function DungeonCrawler.GlobalData.GetAttackTypeText
}; 
 
 


// Class DungeonCrawler.DCInventoryValidatorBase
// Size: 0x30(Inherited: 0x28)
struct UDCInventoryValidatorBase : UObject
{
	uint8_t ValidatorType;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 


// Class DungeonCrawler.DCLockedItemFilterValidator
// Size: 0x40(Inherited: 0x30)
struct UDCLockedItemFilterValidator : UDCInventoryValidatorBase
{
	struct UDCMerchantComponent* MerchantComponent;  // 0x30 (0x30)
	struct UDCMetaTradeComponent* TradeComponent;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCLeaderboardSheetDataAsset
// Size: 0x50(Inherited: 0x38)
struct UDCLeaderboardSheetDataAsset : UDCTableDataAsset
{
	uint8_t GameDifficultyType;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct TArray<struct TSoftObjectPtr<UDCLeaderboardContentDataAsset>> LeaderboardContents;  // 0x40 (0x40)


}; 
 
 


// Class DungeonCrawler.DCLeaderboardDataAsset
// Size: 0x48(Inherited: 0x38)
struct UDCLeaderboardDataAsset : UDCTableDataAsset
{
	struct TArray<struct TSoftObjectPtr<UDCLeaderboardSheetDataAsset>> LeaderboardSheets;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCLevelSequenceActor
// Size: 0x328(Inherited: 0x308)
struct ADCLevelSequenceActor : ALevelSequenceActor
{
	struct FGameplayTag PauseTag;  // 0x308 (0x308)
	struct FGameplayTag PlayTag;  // 0x310 (0x310)
	struct FGameplayTag PlayReverseTag;  // 0x318 (0x318)
	char pad_800_1 : 7;  // 0x320 (0x320)
	bool bPlayOnce : 1;  // 0x320 (0x320)
	char pad_801[7];  // 0x321 (0x321)


	void ProcessSequence(struct FGameplayTag& InEventTag); // Function DungeonCrawler.DCLevelSequenceActor.ProcessSequence
}; 
 
 


// Class DungeonCrawler.DCStorageWidget
// Size: 0x2C8(Inherited: 0x2C0)
struct UDCStorageWidget : UDCInventoryWidgetBase
{
	struct UDCBagWidget* BagWidget;  // 0x2C0 (0x2C0)


}; 
 
 


// Class DungeonCrawler.DCLoadoutPageWidget
// Size: 0x490(Inherited: 0x470)
struct UDCLoadoutPageWidget : ULobbyGroupWidgetBase
{
	struct UDCPlayerInventoryWidget* InventoryWidget;  // 0x470 (0x470)
	struct UDCInventorySetWidget* StorageSetWidget;  // 0x478 (0x478)
	struct UInventoryStatusWidget* StatusWidget;  // 0x480 (0x480)
	struct UDCCaptureStudioWidget* CaptureStudioWidget;  // 0x488 (0x488)


}; 
 
 


// Class DungeonCrawler.MetaVoipInterface
// Size: 0x28(Inherited: 0x28)
struct UMetaVoipInterface : UInterface
{


}; 
 
 


// Class DungeonCrawler.DCLobbyCaptureViewerActor
// Size: 0x4A0(Inherited: 0x2F0)
struct ADCLobbyCaptureViewerActor : ADCActorBase
{
	char pad_752[16];  // 0x2F0 (0x2F0)
	struct FRotator DefaultActorRotation;  // 0x300 (0x300)
	float StartRotateLocation;  // 0x318 (0x318)
	char pad_796[4];  // 0x31C (0x31C)
	struct UAbilitySystemComponent* AbilitySystemComponent;  // 0x320 (0x320)
	struct USceneComponent* CharacterRootScene;  // 0x328 (0x328)
	struct USkeletalMeshComponent* CharacterMesh;  // 0x330 (0x330)
	struct USkeletalMeshComponent* PartHead;  // 0x338 (0x338)
	struct USkeletalMeshComponent* PartHelmet;  // 0x340 (0x340)
	struct USkeletalMeshComponent* PartGloves;  // 0x348 (0x348)
	struct USkeletalMeshComponent* PartChest;  // 0x350 (0x350)
	struct USkeletalMeshComponent* PartPants;  // 0x358 (0x358)
	struct USkeletalMeshComponent* PartBoots;  // 0x360 (0x360)
	struct USkeletalMeshComponent* PartBack;  // 0x368 (0x368)
	struct UDCCharacterDataComponent* DataComponent;  // 0x370 (0x370)
	struct UDCCharacterPartsComponent* PartsComponent;  // 0x378 (0x378)
	char pad_896[152];  // 0x380 (0x380)
	struct UAccountLink* AccountLink;  // 0x418 (0x418)
	char pad_1056[16];  // 0x420 (0x420)
	struct TMap<int64_t, struct AActor*> ContainingActorMap;  // 0x430 (0x430)
	char pad_1152[32];  // 0x480 (0x480)


	void SetStartRotateLocation(float InStartPosition); // Function DungeonCrawler.DCLobbyCaptureViewerActor.SetStartRotateLocation
	void SetMeshRotationSpeedMultiplier(float Value); // Function DungeonCrawler.DCLobbyCaptureViewerActor.SetMeshRotationSpeedMultiplier
	void SetActorRotation(float InYaw); // Function DungeonCrawler.DCLobbyCaptureViewerActor.SetActorRotation
	void InitActorRotation(); // Function DungeonCrawler.DCLobbyCaptureViewerActor.InitActorRotation
}; 
 
 


// Class DungeonCrawler.DCLobbyCreateCharacter
// Size: 0x6B0(Inherited: 0x6B0)
struct ADCLobbyCreateCharacter : ADCCharacterV2
{


}; 
 
 


// Class DungeonCrawler.DCLobbyEmoteWidget
// Size: 0x3E8(Inherited: 0x368)
struct UDCLobbyEmoteWidget : UDCControlWidgetBase
{
	char pad_872[24];  // 0x368 (0x368)
	struct FText LobbyEmoteName;  // 0x380 (0x380)
	struct FText LobbyEmoteFlavorText;  // 0x398 (0x398)
	struct UTexture2D* LobbyEmoteIconTexture;  // 0x3B0 (0x3B0)
	struct FPrimaryAssetId LobbyEmoteId;  // 0x3B8 (0x3B8)
	char pad_968_1 : 7;  // 0x3C8 (0x3C8)
	bool bIsEquipped : 1;  // 0x3C8 (0x3C8)
	char pad_969[7];  // 0x3C9 (0x3C9)
	UDCGameTooltipWithFlavorTextWidget* TooltipWidgetClass;  // 0x3D0 (0x3D0)
	struct UDCGameTooltipWithFlavorTextWidget* EmoteTooltipWidget;  // 0x3D8 (0x3D8)
	UDCCustomizeDragVisualWidget* LobbyEmoteDragVisualWidgetClass;  // 0x3E0 (0x3E0)


	struct UUserWidget* GetTooltipWidget(); // Function DungeonCrawler.DCLobbyEmoteWidget.GetTooltipWidget
}; 
 
 


// Class DungeonCrawler.DescDataEffect
// Size: 0x60(Inherited: 0x50)
struct UDescDataEffect : UDescData
{
	struct UDesignDataAssetGameplayEffect* DesignDataGameplayEffect;  // 0x50 (0x50)
	struct FGameplayTag GameplayTagParam;  // 0x58 (0x58)


}; 
 
 


// Class DungeonCrawler.DCLobbyEmoteSlotWidget
// Size: 0x330(Inherited: 0x300)
struct UDCLobbyEmoteSlotWidget : UDCWidgetBase
{
	char pad_768[8];  // 0x300 (0x300)
	struct FText LobbyEmoteName;  // 0x308 (0x308)
	struct UTexture2D* LobbyEmoteIconTexture;  // 0x320 (0x320)
	char pad_808[8];  // 0x328 (0x328)


	void SetLobbyEmoteData(struct UDCLobbyEmoteDataAsset* InDesignDataLobbyEmote); // Function DungeonCrawler.DCLobbyEmoteSlotWidget.SetLobbyEmoteData
	void SelectionChange(bool bIsSelected); // Function DungeonCrawler.DCLobbyEmoteSlotWidget.SelectionChange
	void Reset(); // Function DungeonCrawler.DCLobbyEmoteSlotWidget.Reset
	void OnSelectionChanged(bool bIsSelected); // Function DungeonCrawler.DCLobbyEmoteSlotWidget.OnSelectionChanged
	uint8_t GetLobbyEmoteIconVisibility(); // Function DungeonCrawler.DCLobbyEmoteSlotWidget.GetLobbyEmoteIconVisibility
}; 
 
 


// Class DungeonCrawler.GA_PlayerSkillCastBase
// Size: 0x758(Inherited: 0x670)
struct UGA_PlayerSkillCastBase : UGA_PlayerSkillBase
{
	struct UAnimMontage* MontageToPlay;  // 0x670 (0x670)
	char pad_1656[224];  // 0x678 (0x678)


	void OnVelocityChange(); // Function DungeonCrawler.GA_PlayerSkillCastBase.OnVelocityChange
	void OnCastingStartTrigger(); // Function DungeonCrawler.GA_PlayerSkillCastBase.OnCastingStartTrigger
	void OnCastingStartSync(); // Function DungeonCrawler.GA_PlayerSkillCastBase.OnCastingStartSync
	void OnCastingFinishSync(); // Function DungeonCrawler.GA_PlayerSkillCastBase.OnCastingFinishSync
	void OnCastingFinish(); // Function DungeonCrawler.GA_PlayerSkillCastBase.OnCastingFinish
}; 
 
 


// Class DungeonCrawler.DCReportPlayerResultPopup
// Size: 0x468(Inherited: 0x440)
struct UDCReportPlayerResultPopup : UCommonPopupBase
{
	struct UDCReportPlayerResultPopupData* ReportPlayerResultPopupData;  // 0x440 (0x440)
	struct UCommonButtonPopupWidget* Btn_Single;  // 0x448 (0x448)
	struct FText TargetNicknameListText;  // 0x450 (0x450)


	void HandleConfirmButtonClicked(); // Function DungeonCrawler.DCReportPlayerResultPopup.HandleConfirmButtonClicked
}; 
 
 


// Class DungeonCrawler.DCLobbyGameMode
// Size: 0x3B8(Inherited: 0x3A0)
struct ADCLobbyGameMode : ADCMetaGameMode
{
	char pad_928[24];  // 0x3A0 (0x3A0)


}; 
 
 


// Class DungeonCrawler.MetaInventoryComponent
// Size: 0x1E0(Inherited: 0x1E0)
struct UMetaInventoryComponent : UInventoryComponent
{


	void OnLobbyCharacterInfoUupdated(); // Function DungeonCrawler.MetaInventoryComponent.OnLobbyCharacterInfoUupdated
}; 
 
 


// Class DungeonCrawler.DCLobbyGameState
// Size: 0x780(Inherited: 0x780)
struct ADCLobbyGameState : ADCGameStateBase
{


}; 
 
 


// Class DungeonCrawler.DCLobbySimpleInventoryComponent
// Size: 0x180(Inherited: 0x180)
struct UDCLobbySimpleInventoryComponent : UDCInventoryComponent
{


}; 
 
 


// Class DungeonCrawler.DCLocalLoginGameMode
// Size: 0x330(Inherited: 0x330)
struct ADCLocalLoginGameMode : AGameModeBase
{


}; 
 
 


// Class DungeonCrawler.DCLoginGameMode
// Size: 0x428(Inherited: 0x3A0)
struct ADCLoginGameMode : ADCGameModeBase
{
	char pad_928[128];  // 0x3A0 (0x3A0)
	UDCCommonActivatableWidgetBase* SecretTokenPopupWidgetClass;  // 0x420 (0x420)


}; 
 
 


// Class DungeonCrawler.EquipmentInventoryGroupWidget
// Size: 0x418(Inherited: 0x300)
struct UEquipmentInventoryGroupWidget : UDCWidgetBase
{
	struct UAccountLink* AccountLink;  // 0x300 (0x300)
	char pad_776_1 : 7;  // 0x308 (0x308)
	bool bLootingTargetInventory : 1;  // 0x308 (0x308)
	char pad_777[7];  // 0x309 (0x309)
	UItemWidget* GlobalItemWidgetClass;  // 0x310 (0x310)
	UItemWidget* ReadOnlyItemWidgetClass;  // 0x318 (0x318)
	struct UEquipmentWeaponSlotSetWidget* WB_Inventory_WeaponSetA;  // 0x320 (0x320)
	struct UEquipmentWeaponSlotSetWidget* WB_Inventory_WeaponSetB;  // 0x328 (0x328)
	struct UEquipmentSlotWidget* Helmet;  // 0x330 (0x330)
	struct UEquipmentSlotWidget* Chest;  // 0x338 (0x338)
	struct UEquipmentSlotWidget* SoulHeart;  // 0x340 (0x340)
	struct UEquipmentSlotWidget* Pants;  // 0x348 (0x348)
	struct UEquipmentSlotWidget* Boots;  // 0x350 (0x350)
	struct UEquipmentSlotWidget* Glove;  // 0x358 (0x358)
	struct UEquipmentSlotWidget* Back;  // 0x360 (0x360)
	struct UEquipmentSlotWidget* Pouch_L_Item_01;  // 0x368 (0x368)
	struct UEquipmentSlotWidget* Pouch_L_Item_02;  // 0x370 (0x370)
	struct UEquipmentSlotWidget* Pouch_L_Item_03;  // 0x378 (0x378)
	struct UEquipmentSlotWidget* Pouch_R_Item_01;  // 0x380 (0x380)
	struct UEquipmentSlotWidget* Pouch_R_Item_02;  // 0x388 (0x388)
	struct UEquipmentSlotWidget* Pouch_R_Item_03;  // 0x390 (0x390)
	struct UEquipmentSlotWidget* Acc_01;  // 0x398 (0x398)
	struct UEquipmentSlotWidget* Acc_02;  // 0x3A0 (0x3A0)
	struct UEquipmentSlotWidget* Acc_03;  // 0x3A8 (0x3A8)
	int32_t CurrentActiveWeaponSet;  // 0x3B0 (0x3B0)
	char pad_948[4];  // 0x3B4 (0x3B4)
	struct TArray<struct UEquipmentSlotWidget*> EquipmentSlotWidgetArray;  // 0x3B8 (0x3B8)
	struct FString LinkedAccountId;  // 0x3C8 (0x3C8)
	struct FString CheckTargetAccountId;  // 0x3D8 (0x3D8)
	struct TWeakObjectPtr<UEquipmentInventoryComponent> EquipmentInventory;  // 0x3E8 (0x3E8)
	struct FString PlayerCharacterId;  // 0x3F0 (0x3F0)
	char pad_1024[8];  // 0x400 (0x400)
	struct UEquipmentSlotWidget* PrevDragOverSlotWidget;  // 0x408 (0x408)
	int32_t PrevDragOverSlotId;  // 0x410 (0x410)
	char pad_1044[4];  // 0x414 (0x414)


	void OnSwitchChestAndSoulHeart(int32_t ActiveIndex); // Function DungeonCrawler.EquipmentInventoryGroupWidget.OnSwitchChestAndSoulHeart
	void OnItemDropDetected(struct FItemData& ItemData, struct AActor* OldOwnerActor); // Function DungeonCrawler.EquipmentInventoryGroupWidget.OnItemDropDetected
	void OnItemDragOver(struct FItemData& ItemData, struct FVector2D& DragScreenPos, struct FVector2D& DragWidgetScreenPos, struct FVector2D& DragWidgetAbsoluteSize); // Function DungeonCrawler.EquipmentInventoryGroupWidget.OnItemDragOver
	void OnItemDragLeaveOrDrop(); // Function DungeonCrawler.EquipmentInventoryGroupWidget.OnItemDragLeaveOrDrop
	void OnDragOverChestSlot(bool bIsDragOver); // Function DungeonCrawler.EquipmentInventoryGroupWidget.OnDragOverChestSlot
	void OnCurrentActiveSlot(uint8_t ItemQuickSlotType); // Function DungeonCrawler.EquipmentInventoryGroupWidget.OnCurrentActiveSlot
}; 
 
 


// Class DungeonCrawler.EmoteComponent
// Size: 0x190(Inherited: 0xA0)
struct UEmoteComponent : UActorComponent
{
	char pad_160[112];  // 0xA0 (0xA0)
	struct TArray<struct FDCEmoteSlotInfo> EmoteSlotInfoArray;  // 0x110 (0x110)
	struct TMap<int32_t, struct FPrimaryAssetId> EmoteSlotMap;  // 0x120 (0x120)
	struct TArray<struct FGameplayAbilitySpecHandle> OwnerGameplayAbilitySpecHandles;  // 0x170 (0x170)
	struct TArray<struct FActiveGameplayEffectHandle> OwnerGameplayEffectHandles;  // 0x180 (0x180)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.EmoteComponent.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.EmoteComponent.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.EmoteComponent.TerminateBase
	void OnRep_EmoteSlotInfoArray(struct TArray<struct FDCEmoteSlotInfo>& OldEmoteSlotInfoArray); // Function DungeonCrawler.EmoteComponent.OnRep_EmoteSlotInfoArray
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.EmoteComponent.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.DCLootDropDataAsset
// Size: 0x48(Inherited: 0x38)
struct UDCLootDropDataAsset : UDCTableDataAsset
{
	struct TArray<struct FDCLootDropItemData> LootDropItemArray;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCStockSellBackDataAsset
// Size: 0x48(Inherited: 0x38)
struct UDCStockSellBackDataAsset : UDCTableDataAsset
{
	struct TArray<struct FDCStockSellBackItemData> StockSellBackItemArray;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCMerchantListEntryWidgetData
// Size: 0x50(Inherited: 0x28)
struct UDCMerchantListEntryWidgetData : UObject
{
	struct FDCMerchantInfo Info;  // 0x28 (0x28)
	struct UDCMerchantDataAsset* DataAsset;  // 0x40 (0x40)
	struct UUserWidget* Widget;  // 0x48 (0x48)


}; 
 
 


// Class DungeonCrawler.InventoryPerkListWidgetBase
// Size: 0x390(Inherited: 0x328)
struct UInventoryPerkListWidgetBase : UPerkListWidgetBase
{
	UPerkWidget* PerkWidgetClass;  // 0x328 (0x328)
	struct TArray<struct UPanelWidget*> PerkWidgetParentArray;  // 0x330 (0x330)
	struct TMap<struct UPanelWidget*, struct UPerkWidget*> PerkWidgetMap;  // 0x340 (0x340)


}; 
 
 


// Class DungeonCrawler.DCPlayerCharacterLobbyAnimInstanceBase
// Size: 0x360(Inherited: 0x350)
struct UDCPlayerCharacterLobbyAnimInstanceBase : UAnimInstance
{
	struct UAnimSequenceBase* Idle;  // 0x348 (0x348)
	struct USkeletalMesh* HeadMeshAsset;  // 0x350 (0x350)


}; 
 
 


// Class DungeonCrawler.GA_PaviseInstall
// Size: 0x578(Inherited: 0x558)
struct UGA_PaviseInstall : UDCGameplayAbilityBase
{
	struct UAnimMontage* MontageToPlay;  // 0x558 (0x558)
	struct UAnimMontage* MontageToPlayOnSourceObject;  // 0x560 (0x560)
	APavisePropBase* InstalledActorClass;  // 0x568 (0x568)
	char pad_1392[8];  // 0x570 (0x570)


	void ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PaviseInstall.ReceivedEvent
	void OnVelocityChange(); // Function DungeonCrawler.GA_PaviseInstall.OnVelocityChange
	void OnInterrupted(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PaviseInstall.OnInterrupted
	void OnCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PaviseInstall.OnCompleted
	void EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PaviseInstall.EventReceived
	void AbilityActivated(struct FGameplayEventData& TriggerEventData); // Function DungeonCrawler.GA_PaviseInstall.AbilityActivated
}; 
 
 


// Class DungeonCrawler.GameSpellSelectGroupWidget
// Size: 0x4C0(Inherited: 0x4A0)
struct UGameSpellSelectGroupWidget : USpellListWidgetBase
{
	int32_t SelectedSpellIndex;  // 0x4A0 (0x4A0)
	char pad_1188[20];  // 0x4A4 (0x4A4)
	struct ADCPlayerCharacterBase* PlayerCharacter;  // 0x4B8 (0x4B8)


	void OnSpellSelectPopup(); // Function DungeonCrawler.GameSpellSelectGroupWidget.OnSpellSelectPopup
	void OnSpellSelectClose(); // Function DungeonCrawler.GameSpellSelectGroupWidget.OnSpellSelectClose
	void OnSelectedSpellIndexChanged(); // Function DungeonCrawler.GameSpellSelectGroupWidget.OnSelectedSpellIndexChanged
	void OnCurrentSpellSlotChanged(struct UGameSpellSlotWidget* InSelectedSlot); // Function DungeonCrawler.GameSpellSelectGroupWidget.OnCurrentSpellSlotChanged
}; 
 
 


// Class DungeonCrawler.DesignDataAssetMovementModifier
// Size: 0x40(Inherited: 0x38)
struct UDesignDataAssetMovementModifier : UDCDesignDataAssetBase
{
	struct FDesignDataMovementModifier Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCMerchantListEntryWidget
// Size: 0x2C0(Inherited: 0x278)
struct UDCMerchantListEntryWidget : UUserWidget
{
	char pad_632[8];  // 0x278 (0x278)
	struct FText Name;  // 0x280 (0x280)
	struct UImage* Portrait;  // 0x298 (0x298)
	struct UDCMerchantStatWidget* StatWidget;  // 0x2A0 (0x2A0)
	struct FDCMerchantId ID;  // 0x2A8 (0x2A8)
	char pad_696_1 : 7;  // 0x2B8 (0x2B8)
	bool bMouseButtonDown : 1;  // 0x2B8 (0x2B8)
	char pad_697[7];  // 0x2B9 (0x2B9)


}; 
 
 


// Class DungeonCrawler.DCMetaInventoryControllerComponent
// Size: 0xC0(Inherited: 0xC0)
struct UDCMetaInventoryControllerComponent : UDCInventoryControllerComponent
{


}; 
 
 


// Class DungeonCrawler.DCMetaTradeComponent
// Size: 0x260(Inherited: 0x100)
struct UDCMetaTradeComponent : UMetaComponentBase
{
	UCommonPopupSWidget* CommonPopupWidget;  // 0x100 (0x100)
	struct FMulticastInlineDelegate OnTradeSucceed;  // 0x108 (0x108)
	char pad_280[88];  // 0x118 (0x118)
	struct FTimerHandle ResetTimerHandle;  // 0x170 (0x170)
	char pad_376[216];  // 0x178 (0x178)
	struct UDCBoxInventory* TradingBoxLocal;  // 0x250 (0x250)
	struct UDCBoxInventory* TradingBoxRemote;  // 0x258 (0x258)


	void UpdateResetTimer(); // Function DungeonCrawler.DCMetaTradeComponent.UpdateResetTimer
	void OnItemMoveEvent(uint8_t SourceInventoryId, struct FDCItemInfo& SourceItemInfo, uint8_t TargetInventoryId, int32_t TargetIndex, int32_t TargetStack); // Function DungeonCrawler.DCMetaTradeComponent.OnItemMoveEvent
	void OnItemActionEvent(uint8_t SourceInventoryId, struct FDCItemInfo& SourceItemInfo, uint8_t ActionType); // Function DungeonCrawler.DCMetaTradeComponent.OnItemActionEvent
}; 
 
 


// Class DungeonCrawler.DCMonsterGameplayAbilityBase
// Size: 0x560(Inherited: 0x558)
struct UDCMonsterGameplayAbilityBase : UDCGameplayAbilityBase
{
	struct UAnimMontage* MontageToPlay;  // 0x558 (0x558)


	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function DungeonCrawler.DCMonsterGameplayAbilityBase.AbilityActivated
}; 
 
 


// Class DungeonCrawler.DCMultiLineEditableTextBox
// Size: 0x1090(Inherited: 0x1070)
struct UDCMultiLineEditableTextBox : UMultiLineEditableTextBox
{
	struct FMulticastInlineDelegate OnCursorMoved;  // 0x1068 (0x1068)
	struct FMulticastInlineDelegate OnUserScrolled;  // 0x1078 (0x1078)


	void InsertTextAtCursor(struct FString InText); // Function DungeonCrawler.DCMultiLineEditableTextBox.InsertTextAtCursor
	void Goto(int32_t InLineIndex, int32_t InOffset); // Function DungeonCrawler.DCMultiLineEditableTextBox.Goto
	bool AnyTextSelected(); // Function DungeonCrawler.DCMultiLineEditableTextBox.AnyTextSelected
}; 
 
 


// Class DungeonCrawler.LeaderboardClassIconWidgetData
// Size: 0x40(Inherited: 0x28)
struct ULeaderboardClassIconWidgetData : UObject
{
	int32_t ItemIndex;  // 0x28 (0x28)
	struct FPrimaryAssetId CharacterClassId;  // 0x2C (0x2C)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 


// Class DungeonCrawler.DCMusicTooltipWidget
// Size: 0x318(Inherited: 0x310)
struct UDCMusicTooltipWidget : UDCTooltipWidget
{
	struct UTextBlock* SourceTypeText;  // 0x310 (0x310)


	void SetType(struct FGameplayTag SourceTypeTag); // Function DungeonCrawler.DCMusicTooltipWidget.SetType
}; 
 
 


// Class DungeonCrawler.DCPartyChatInterface
// Size: 0x28(Inherited: 0x28)
struct UDCPartyChatInterface : UInterface
{


}; 
 
 


// Class DungeonCrawler.DCPlayerCharacterClassComponent
// Size: 0xA0(Inherited: 0xA0)
struct UDCPlayerCharacterClassComponent : UActorComponent
{


}; 
 
 


// Class DungeonCrawler.DCPropAttributeSet
// Size: 0x8E0(Inherited: 0x8E0)
struct UDCPropAttributeSet : UDCAttributeSet
{


}; 
 
 


// Class DungeonCrawler.DCPlayerDamageIndicatorComponent
// Size: 0xB8(Inherited: 0xB8)
struct UDCPlayerDamageIndicatorComponent : UDCDamageIndicatorComponent
{


}; 
 
 


// Class DungeonCrawler.DCPlayerInventoryWidget
// Size: 0x308(Inherited: 0x2C0)
struct UDCPlayerInventoryWidget : UDCInventoryWidgetBase
{
	char pad_704_1 : 7;  // 0x2C0 (0x2C0)
	bool bBagValid : 1;  // 0x2C0 (0x2C0)
	char pad_705[7];  // 0x2C1 (0x2C1)
	struct UDCEquipmentWidget* EquipWidget;  // 0x2C8 (0x2C8)
	struct UDCBagWidget* BagWidget;  // 0x2D0 (0x2D0)
	struct UDCInventoryCurrencyWidget* CurrencyWidget;  // 0x2D8 (0x2D8)
	struct FNickname Nickname;  // 0x2E0 (0x2E0)


	struct FLinearColor GetTitleColor(); // Function DungeonCrawler.DCPlayerInventoryWidget.GetTitleColor
	struct FText GetTitle(); // Function DungeonCrawler.DCPlayerInventoryWidget.GetTitle
}; 
 
 


// Class DungeonCrawler.DCPlayerStart
// Size: 0x2F0(Inherited: 0x2F0)
struct ADCPlayerStart : ADCPlayerPoint
{


}; 
 
 


// Class DungeonCrawler.DCSimpleTooltipWidget
// Size: 0x330(Inherited: 0x300)
struct UDCSimpleTooltipWidget : UDCWidgetBase
{
	struct FText TooltipNameText;  // 0x300 (0x300)
	struct FSlateColor TooltipColor;  // 0x318 (0x318)
	char pad_812[4];  // 0x32C (0x32C)


	void SetTooltipData(struct FText& Text, struct FSlateColor& TextColor); // Function DungeonCrawler.DCSimpleTooltipWidget.SetTooltipData
	struct FSlateColor GetTooltipColor(); // Function DungeonCrawler.DCSimpleTooltipWidget.GetTooltipColor
}; 
 
 


// Class DungeonCrawler.DCPlayerSpectator
// Size: 0x3B8(Inherited: 0x340)
struct ADCPlayerSpectator : ASpectatorPawn
{
	char pad_832[48];  // 0x340 (0x340)
	struct ADCCharacterBase* TargetPlayerCharacter;  // 0x370 (0x370)
	char pad_888[64];  // 0x378 (0x378)


}; 
 
 


// Class DungeonCrawler.DCProjectileDataAsset
// Size: 0xE0(Inherited: 0x38)
struct UDCProjectileDataAsset : UDCTableDataAsset
{
	struct FText Name;  // 0x38 (0x38)
	struct FGameplayTag SourceType;  // 0x50 (0x50)
	struct TSoftObjectPtr<UArtDataProjectile> ArtData;  // 0x58 (0x58)
	struct TSoftObjectPtr<USoundData> SoundData;  // 0x88 (0x88)
	AProjectileActor* ActorClass;  // 0xB8 (0xB8)
	struct TArray<struct TSoftObjectPtr<UDCGameplayAbilityDataAsset>> Abilities;  // 0xC0 (0xC0)
	struct TArray<struct TSoftObjectPtr<UDCGameplayEffectDataAsset>> Effects;  // 0xD0 (0xD0)


}; 
 
 


// Class DungeonCrawler.DCPlayerState
// Size: 0x3C8(Inherited: 0x3A8)
struct ADCPlayerState : APlayerState
{
	char pad_936_1 : 7;  // 0x3A8 (0x3A8)
	bool bIsUserLoaded : 1;  // 0x3A8 (0x3A8)
	char pad_937[31];  // 0x3A9 (0x3A9)


	void OnRep_IsUserLoaded(); // Function DungeonCrawler.DCPlayerState.OnRep_IsUserLoaded
}; 
 
 


// Class DungeonCrawler.DescDataMultiEffectParams
// Size: 0xF0(Inherited: 0xA0)
struct UDescDataMultiEffectParams : UDescDataConstantParams
{
	struct TMap<struct UDesignDataAssetGameplayEffect*, struct FGameplayTagContainer> DesignDataGameplayEffectDataList;  // 0xA0 (0xA0)


}; 
 
 


// Class DungeonCrawler.DCPreLobbyGameMode
// Size: 0x3A0(Inherited: 0x3A0)
struct ADCPreLobbyGameMode : ADCMetaGameMode
{


}; 
 
 


// Class DungeonCrawler.GA_BowAttackBase
// Size: 0x5D8(Inherited: 0x5C8)
struct UGA_BowAttackBase : UGA_ChargedRangedAttackBase
{
	struct UAnimMontage* NimbleHandMontageToPlay;  // 0x5C8 (0x5C8)
	struct UAnimMontage* NimbleHandMontageToPlayOnSourceObject;  // 0x5D0 (0x5D0)


}; 
 
 


// Class DungeonCrawler.DCProjectSettings
// Size: 0x118(Inherited: 0x118)
struct UDCProjectSettings : UGeneralProjectSettings
{


}; 
 
 


// Class DungeonCrawler.DCPropsSkillCheckDataAsset
// Size: 0x68(Inherited: 0x38)
struct UDCPropsSkillCheckDataAsset : UDCTableDataAsset
{
	struct FGameplayTag SkillCheckType;  // 0x38 (0x38)
	float MinDuration;  // 0x40 (0x40)
	float MaxDuration;  // 0x44 (0x44)
	float MinSkillCheckInterval;  // 0x48 (0x48)
	float MaxSkillCheckInterval;  // 0x4C (0x4C)
	float MinSucceedSectionStartTime;  // 0x50 (0x50)
	float SucceedSectionSizeSeconds;  // 0x54 (0x54)
	float SucceedBonusTimeRatio;  // 0x58 (0x58)
	float PerfectSucceedSectionSizeSeconds;  // 0x5C (0x5C)
	float PerfectSucceedBonusTimeRatio;  // 0x60 (0x60)
	float FailedBonusTimeRatio;  // 0x64 (0x64)


}; 
 
 


// Class DungeonCrawler.GA_MultiShotBase
// Size: 0x5C0(Inherited: 0x5C0)
struct UGA_MultiShotBase : UGA_RangedAttackBase
{


	void InputActionStarted(); // Function DungeonCrawler.GA_MultiShotBase.InputActionStarted
	void InputActionCompleted(); // Function DungeonCrawler.GA_MultiShotBase.InputActionCompleted
}; 
 
 


// Class DungeonCrawler.DCPropsInteractDataAsset
// Size: 0x158(Inherited: 0x38)
struct UDCPropsInteractDataAsset : UDCTableDataAsset
{
	struct FText InteractionName;  // 0x38 (0x38)
	struct FText InteractionText;  // 0x50 (0x50)
	struct TSoftObjectPtr<UInteractData> InteractData;  // 0x68 (0x68)
	struct TArray<struct FGameplayTag> InteractTypes;  // 0x98 (0x98)
	float Duration;  // 0xA8 (0xA8)
	struct FGameplayTag InteractableTag;  // 0xAC (0xAC)
	struct FGameplayTag TriggerTag;  // 0xB4 (0xB4)
	struct FGameplayTag AbilityTriggerTag;  // 0xBC (0xBC)
	char pad_196[4];  // 0xC4 (0xC4)
	struct TSoftObjectPtr<UTagQueryData> DetectTagQueryData;  // 0xC8 (0xC8)
	struct TSoftObjectPtr<UTagQueryData> InteractTagQueryData;  // 0xF8 (0xF8)
	struct TSoftObjectPtr<UDCPropsSkillCheckDataAsset> SkillCheckData;  // 0x128 (0x128)


}; 
 
 


// Class DungeonCrawler.TradeSubscriptionWidget
// Size: 0x398(Inherited: 0x300)
struct UTradeSubscriptionWidget : UDCWidgetBase
{
	struct FText RequirementLevelText;  // 0x300 (0x300)
	struct FText RequirementFeeText;  // 0x318 (0x318)
	struct FText RequirementMonthDueText;  // 0x330 (0x330)
	struct FText RequirementTradeCostText;  // 0x348 (0x348)
	struct FText TraderName;  // 0x360 (0x360)
	struct UCommonButtonPopupWidget* CommonBtn_Cancel;  // 0x378 (0x378)
	struct UCommonButtonPopupWidget* CommonBtn_Confirm;  // 0x380 (0x380)
	struct UCommonButtonPopupWidget* CommonBtn_Done;  // 0x388 (0x388)
	struct UWidgetSwitcher* WidgetSwitcher_Subscription;  // 0x390 (0x390)


	void SendMsgWidgetTradeSubscriptionButtonClicked(); // Function DungeonCrawler.TradeSubscriptionWidget.SendMsgWidgetTradeSubscriptionButtonClicked
	void OnClikedButtonDone(); // Function DungeonCrawler.TradeSubscriptionWidget.OnClikedButtonDone
	void CloseSelf(); // Function DungeonCrawler.TradeSubscriptionWidget.CloseSelf
}; 
 
 


// Class DungeonCrawler.DCRecruitChannelListEntryWidget
// Size: 0x2B0(Inherited: 0x278)
struct UDCRecruitChannelListEntryWidget : UUserWidget
{
	char pad_632[24];  // 0x278 (0x278)
	struct FText ChannelTitle;  // 0x290 (0x290)
	int32_t NumMembers;  // 0x2A8 (0x2A8)
	char pad_684[4];  // 0x2AC (0x2AC)


	void OnClicked(); // Function DungeonCrawler.DCRecruitChannelListEntryWidget.OnClicked
}; 
 
 


// Class DungeonCrawler.DCRecruitChannelListWidget
// Size: 0x4A8(Inherited: 0x470)
struct UDCRecruitChannelListWidget : ULobbyGroupWidgetBase
{
	struct TArray<struct FDCRecruitChannelInfo> Channels;  // 0x470 (0x470)
	struct UVerticalBox* ServerRegionVerticalBox;  // 0x480 (0x480)
	UDCRecruitChannelListEntryWidget* ChannelEntryWidgetClass;  // 0x488 (0x488)
	struct FText JoinMinLevelText;  // 0x490 (0x490)


}; 
 
 


// Class DungeonCrawler.DCRecruitChannelWidget
// Size: 0x4C8(Inherited: 0x470)
struct UDCRecruitChannelWidget : ULobbyGroupWidgetBase
{
	struct UDCChannelChatWidget* ChannelChatWidget;  // 0x470 (0x470)
	struct UDCChannelPlayerListWidget* ChannelPlayersWidget;  // 0x478 (0x478)
	struct UWidgetSwitcher* InventoryWidgetSwitcher;  // 0x480 (0x480)
	struct UDCInventorySetWidget* LocalInventorySetWidget;  // 0x488 (0x488)
	struct UDCPlayerInventoryWidget* InspectingPlayerInventoryWidget;  // 0x490 (0x490)
	struct FText ChannelTitle;  // 0x498 (0x498)
	char pad_1200[24];  // 0x4B0 (0x4B0)


	void OnLeaveClicked(); // Function DungeonCrawler.DCRecruitChannelWidget.OnLeaveClicked
	void OnCloseInspectingInventoryClicked(); // Function DungeonCrawler.DCRecruitChannelWidget.OnCloseInspectingInventoryClicked
}; 
 
 


// Class DungeonCrawler.DCRedstoneShardShopSlotWidgetBase
// Size: 0x3E8(Inherited: 0x368)
struct UDCRedstoneShardShopSlotWidgetBase : UDCControlWidgetBase
{
	char pad_872[24];  // 0x368 (0x368)
	struct FText SalesCount;  // 0x380 (0x380)
	struct FText Price;  // 0x398 (0x398)
	struct UTexture2D* RedstoneShardShopImage;  // 0x3B0 (0x3B0)
	char pad_952_1 : 7;  // 0x3B8 (0x3B8)
	bool bIsSelected : 1;  // 0x3B8 (0x3B8)
	char pad_953[47];  // 0x3B9 (0x3B9)


}; 
 
 


// Class DungeonCrawler.DCReplicationGraph
// Size: 0x5A0(Inherited: 0x570)
struct UDCReplicationGraph : UReplicationGraph
{
	struct UReplicationGraphNode_GridSpatialization2D* GridNode;  // 0x570 (0x570)
	struct UReplicationGraphNode_ActorList* AlwaysRelevantNode;  // 0x578 (0x578)
	struct TArray<struct FDCConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList;  // 0x580 (0x580)
	struct TArray<struct AActor*> ActorsWithoutNetConnection;  // 0x590 (0x590)


}; 
 
 


// Class DungeonCrawler.DCReportPlayerWidget
// Size: 0x348(Inherited: 0x278)
struct UDCReportPlayerWidget : UUserWidget
{
	UDCReportPlayerChecklistSlotWidget* ReportPlayerChecklistWidgetClass;  // 0x278 (0x278)
	struct UCommonButtonPopupWidget* Btn_Cancel;  // 0x280 (0x280)
	struct UCommonButtonPopupWidget* Btn_Report;  // 0x288 (0x288)
	struct UMultiLineEditableTextBox* ReportEditableMultiTextBox;  // 0x290 (0x290)
	struct UVerticalBox* ReportCategoryCheckList;  // 0x298 (0x298)
	struct FText SelectReportCategoryText;  // 0x2A0 (0x2A0)
	struct FText TargetUserNickname;  // 0x2B8 (0x2B8)
	struct FText ReportHintText;  // 0x2D0 (0x2D0)
	struct FText ReportTextMaxCountText;  // 0x2E8 (0x2E8)
	struct FText ReportTextCurrentCountText;  // 0x300 (0x300)
	struct FNickname ReportTargetNickname;  // 0x318 (0x318)
	uint8_t SelectedCategory;  // 0x340 (0x340)
	char pad_833_1 : 7;  // 0x341 (0x341)
	bool bIsReportButtonClicked : 1;  // 0x341 (0x341)
	char pad_834[2];  // 0x342 (0x342)
	int32_t MaxCharacterCount;  // 0x344 (0x344)


	void HandleReportTextChanged(struct FText& InText); // Function DungeonCrawler.DCReportPlayerWidget.HandleReportTextChanged
	void HandleReportButtonClicked(); // Function DungeonCrawler.DCReportPlayerWidget.HandleReportButtonClicked
	void HandleCheckStatedChanged(uint8_t InCategory, bool InbNewChecked); // Function DungeonCrawler.DCReportPlayerWidget.HandleCheckStatedChanged
	void HandleCancelButtonClicked(); // Function DungeonCrawler.DCReportPlayerWidget.HandleCancelButtonClicked
	uint8_t GetSelectCategoryTextVisibility(); // Function DungeonCrawler.DCReportPlayerWidget.GetSelectCategoryTextVisibility
}; 
 
 


// Class DungeonCrawler.DCRotatorComponent
// Size: 0x2B0(Inherited: 0x2A0)
struct UDCRotatorComponent : USceneComponent
{
	float ManualRotateSensitivity;  // 0x2A0 (0x2A0)
	float AutoRotateSensitivity;  // 0x2A4 (0x2A4)
	float DecelerateAutoRotatePer;  // 0x2A8 (0x2A8)
	char pad_684[4];  // 0x2AC (0x2AC)


}; 
 
 


// Class DungeonCrawler.DCShopArtData
// Size: 0x40(Inherited: 0x38)
struct UDCShopArtData : UDCDataAssetBase
{
	struct UTexture2D* ShopIconTexture;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCShopCurrencyTypeSelectPopupData
// Size: 0x88(Inherited: 0x30)
struct UDCShopCurrencyTypeSelectPopupData : UPopupDataBase
{
	struct TMap<uint8_t, int32_t> PriceMap;  // 0x30 (0x30)
	uint8_t InitCurrencyType;  // 0x80 (0x80)
	char pad_129[7];  // 0x81 (0x81)


}; 
 
 


// Class DungeonCrawler.DCShopDataAsset
// Size: 0x78(Inherited: 0x38)
struct UDCShopDataAsset : UDCTableDataAsset
{
	struct TSoftObjectPtr<UDCShopArtData> ArtData;  // 0x38 (0x38)
	int32_t Price;  // 0x68 (0x68)
	int32_t CashPrice;  // 0x6C (0x6C)
	int32_t SortOrder;  // 0x70 (0x70)
	uint8_t SalesChannel;  // 0x74 (0x74)
	char pad_117[3];  // 0x75 (0x75)


}; 
 
 


// Class DungeonCrawler.DCEmoteShopDataAsset
// Size: 0xA8(Inherited: 0x78)
struct UDCEmoteShopDataAsset : UDCShopDataAsset
{
	struct TSoftObjectPtr<UDCEmoteDataAsset> StockData;  // 0x78 (0x78)


}; 
 
 


// Class DungeonCrawler.DCActionSkinShopDataAsset
// Size: 0xA8(Inherited: 0x78)
struct UDCActionSkinShopDataAsset : UDCShopDataAsset
{
	struct TSoftObjectPtr<UDCActionSkinDataAsset> StockData;  // 0x78 (0x78)


}; 
 
 


// Class DungeonCrawler.DCRedstoneShardShopDataAsset
// Size: 0x68(Inherited: 0x38)
struct UDCRedstoneShardShopDataAsset : UDCTableDataAsset
{
	struct TSoftObjectPtr<UDCShopArtData> ArtData;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.MusicSlotWidgetBase
// Size: 0x400(Inherited: 0x300)
struct UMusicSlotWidgetBase : UDCWidgetBase
{
	struct FMusicData MusicData;  // 0x300 (0x300)
	struct FDesignDataMusic DesignDataMusic;  // 0x320 (0x320)
	struct TArray<struct FText> DescTextArray;  // 0x3E0 (0x3E0)
	struct UArtDataMusic* ArtData;  // 0x3F0 (0x3F0)
	int32_t SlotIndex;  // 0x3F8 (0x3F8)
	char pad_1020[4];  // 0x3FC (0x3FC)


	void SetMusicData(struct FMusicData& InMusicData, struct FDesignDataMusic& InDesignDataMusic); // Function DungeonCrawler.MusicSlotWidgetBase.SetMusicData
	void Reset(); // Function DungeonCrawler.MusicSlotWidgetBase.Reset
	void OnSetMusicArtData(struct UArtDataMusic* InArtMusicData); // Function DungeonCrawler.MusicSlotWidgetBase.OnSetMusicArtData
	void OnReset(); // Function DungeonCrawler.MusicSlotWidgetBase.OnReset
	void OnMusicDataChanged(struct FMusicData& InMusicData, struct FDesignDataMusic& InDesignDataMusic); // Function DungeonCrawler.MusicSlotWidgetBase.OnMusicDataChanged
}; 
 
 


// Class DungeonCrawler.DCShopItemListWidget
// Size: 0x330(Inherited: 0x300)
struct UDCShopItemListWidget : UDCWidgetBase
{
	char pad_768[24];  // 0x300 (0x300)
	struct UPanelWidget* ShopItemListWidget;  // 0x318 (0x318)
	char pad_800[16];  // 0x320 (0x320)


}; 
 
 


// Class DungeonCrawler.DCShopWidgetBase
// Size: 0x408(Inherited: 0x300)
struct UDCShopWidgetBase : UDCWidgetBase
{
	int32_t RedstoneShardValue;  // 0x300 (0x300)
	int32_t BluestoneShardValue;  // 0x304 (0x304)
	int32_t TriumphLevelValue;  // 0x308 (0x308)
	int32_t TriumphExpValue;  // 0x30C (0x30C)
	int32_t TriumphMaxExpValue;  // 0x310 (0x310)
	float TriumphExpPercentage;  // 0x314 (0x314)
	int32_t CurrentPageIndex;  // 0x318 (0x318)
	int32_t MaxPageIndex;  // 0x31C (0x31C)
	struct FText SelectedShopItemName;  // 0x320 (0x320)
	char pad_824_1 : 7;  // 0x338 (0x338)
	bool bIsFirstPage : 1;  // 0x338 (0x338)
	char pad_825_1 : 7;  // 0x339 (0x339)
	bool bIsLastPage : 1;  // 0x339 (0x339)
	char pad_826_1 : 7;  // 0x33A (0x33A)
	bool bIsOwnedShopItem : 1;  // 0x33A (0x33A)
	char pad_827[5];  // 0x33B (0x33B)
	UDCGiftCodePopupBase* GiftCodePopupClass;  // 0x340 (0x340)
	UDCGiftCodeRewardPopupBase* GiftCodeRewardPopupClass;  // 0x348 (0x348)
	struct UDCShopItemListWidget* ShopItemListWidget;  // 0x350 (0x350)
	struct UDCCommonButtonBase* ButtonArrowL;  // 0x358 (0x358)
	struct UDCCommonButtonBase* ButtonArrowR;  // 0x360 (0x360)
	struct UCommonButtonLWidget* ButtonBuy;  // 0x368 (0x368)
	struct UWidgetSwitcher* PreviewSwitcher;  // 0x370 (0x370)
	struct UDCCommonButtonBase* Btn_EnterCode;  // 0x378 (0x378)
	struct UDCItemSkinViewerWidgetBase* ItemSkinViewerWidget;  // 0x380 (0x380)
	struct UDCRedstoneShardShopListWidgetBase* RedstoneShardShopItemList;  // 0x388 (0x388)
	struct UCommonButtonLWidget* ButtonRedstoneShardBuy;  // 0x390 (0x390)
	struct FPrimaryAssetId SelectedShopItemId;  // 0x398 (0x398)
	char pad_936_1 : 7;  // 0x3A8 (0x3A8)
	bool bIsRedstoneShardShopItemSelected : 1;  // 0x3A8 (0x3A8)
	char pad_937[7];  // 0x3A9 (0x3A9)
	struct TArray<struct UDCShopDataAsset*> ShopDataAssetArray;  // 0x3B0 (0x3B0)
	char pad_960[72];  // 0x3C0 (0x3C0)


	void OnWidgetOpen(); // Function DungeonCrawler.DCShopWidgetBase.OnWidgetOpen
	void OnWidgetClose(); // Function DungeonCrawler.DCShopWidgetBase.OnWidgetClose
	void OnPrevPage(); // Function DungeonCrawler.DCShopWidgetBase.OnPrevPage
	void OnPreviewSwitched(uint8_t ItemType); // Function DungeonCrawler.DCShopWidgetBase.OnPreviewSwitched
	void OnNextPage(); // Function DungeonCrawler.DCShopWidgetBase.OnNextPage
	void OnButtonRedstoneShardBuyClicked(); // Function DungeonCrawler.DCShopWidgetBase.OnButtonRedstoneShardBuyClicked
	void OnButtonEnterCodeClicked(); // Function DungeonCrawler.DCShopWidgetBase.OnButtonEnterCodeClicked
	void OnButtonBuyClicked(); // Function DungeonCrawler.DCShopWidgetBase.OnButtonBuyClicked
	bool CanPurchase(); // Function DungeonCrawler.DCShopWidgetBase.CanPurchase
}; 
 
 


// Class DungeonCrawler.DCShowingKeyWidgetBase
// Size: 0x300(Inherited: 0x300)
struct UDCShowingKeyWidgetBase : UDCWidgetBase
{


	void OnInputBindChanged(); // Function DungeonCrawler.DCShowingKeyWidgetBase.OnInputBindChanged
	void HandleInputMethodChanged(uint8_t InInputType); // Function DungeonCrawler.DCShowingKeyWidgetBase.HandleInputMethodChanged
}; 
 
 


// Class DungeonCrawler.DCSpawnerDataAsset
// Size: 0x48(Inherited: 0x38)
struct UDCSpawnerDataAsset : UDCTableDataAsset
{
	struct TArray<struct FDCSpawnerItemData> SpawnerItemArray;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCSpellDataAsset
// Size: 0x178(Inherited: 0x38)
struct UDCSpellDataAsset : UDCTableDataAsset
{
	struct FText Name;  // 0x38 (0x38)
	struct TSoftObjectPtr<UDescData> Desc;  // 0x50 (0x50)
	struct TArray<struct FPrimaryAssetId> Classes;  // 0x80 (0x80)
	struct FGameplayTag CastingType;  // 0x90 (0x90)
	struct FGameplayTag SourceType;  // 0x98 (0x98)
	struct FGameplayTag CostType;  // 0xA0 (0xA0)
	struct TSoftObjectPtr<UDCGameplayEffectDataAsset> CostEffect;  // 0xA8 (0xA8)
	int32_t SpellTier;  // 0xD8 (0xD8)
	int32_t MaxCount;  // 0xDC (0xDC)
	float CastingTime;  // 0xE0 (0xE0)
	float ChannelingDuration;  // 0xE4 (0xE4)
	float ChannelingInterval;  // 0xE8 (0xE8)
	int32_t Range;  // 0xEC (0xEC)
	struct FGameplayTag SpellTag;  // 0xF0 (0xF0)
	struct TSoftObjectPtr<UArtDataSpell> ArtData;  // 0xF8 (0xF8)
	struct TSoftObjectPtr<USoundData> SoundData;  // 0x128 (0x128)
	struct TArray<struct TSoftObjectPtr<UDCGameplayAbilityDataAsset>> Abilities;  // 0x158 (0x158)
	struct TArray<struct TSoftObjectPtr<UDCGameplayEffectDataAsset>> Effects;  // 0x168 (0x168)


}; 
 
 


// Class DungeonCrawler.DCTabListWidgetBase
// Size: 0x3E8(Inherited: 0x388)
struct UDCTabListWidgetBase : UCommonTabListWidgetBase
{
	UDCTabButtonWidgetBase* TabButtonWidgetClass;  // 0x388 (0x388)
	struct TArray<struct FText> TabButtonTextList;  // 0x390 (0x390)
	struct TArray<struct FName> TabNameIdList;  // 0x3A0 (0x3A0)
	struct TArray<struct UWidget*> ContentWidgetList;  // 0x3B0 (0x3B0)
	int32_t VisibleTabCount;  // 0x3C0 (0x3C0)
	char pad_964[4];  // 0x3C4 (0x3C4)
	struct UPanelWidget* TabParent;  // 0x3C8 (0x3C8)
	struct UCommonActionWidget* PreviousTabAction;  // 0x3D0 (0x3D0)
	struct UCommonActionWidget* NextTabAction;  // 0x3D8 (0x3D8)
	struct UCommonAnimatedSwitcher* SwitcherToLink;  // 0x3E0 (0x3E0)


	void OnTabButtonSelected(struct FName TabId); // Function DungeonCrawler.DCTabListWidgetBase.OnTabButtonSelected
}; 
 
 


// Class DungeonCrawler.DCTestGameMode
// Size: 0x528(Inherited: 0x528)
struct ADCTestGameMode : ADCDungeonGameMode
{


}; 
 
 


// Class DungeonCrawler.DesignDataAssetLootDropRate
// Size: 0x48(Inherited: 0x38)
struct UDesignDataAssetLootDropRate : UDCDesignDataAssetBase
{
	struct FDesignDataLootDropRate Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DCTradeChannelCategoryWidget
// Size: 0x298(Inherited: 0x278)
struct UDCTradeChannelCategoryWidget : UUserWidget
{
	struct FText CategoryNameText;  // 0x278 (0x278)
	struct UVerticalBox* VerticalBox_ChannelButton;  // 0x290 (0x290)


}; 
 
 


// Class DungeonCrawler.DCTradeInventoryWidget
// Size: 0x2E8(Inherited: 0x2C0)
struct UDCTradeInventoryWidget : UDCInventoryWidgetBase
{
	struct UDCPlayerInventoryWidget* PlayerInventoryWidget;  // 0x2C0 (0x2C0)
	struct UDCBagWidget* StorageWidget;  // 0x2C8 (0x2C8)
	struct UInventoryTabWidgetBase* InventoryTabWidget;  // 0x2D0 (0x2D0)
	struct UInventoryTabWidgetBase* StorageTabWidget;  // 0x2D8 (0x2D8)
	struct UWidgetSwitcher* SwitcherWidget;  // 0x2E0 (0x2E0)


	void OnTradeEnd(); // Function DungeonCrawler.DCTradeInventoryWidget.OnTradeEnd
	void OnStorageTabClicked(); // Function DungeonCrawler.DCTradeInventoryWidget.OnStorageTabClicked
	void OnInventoryTabClicked(); // Function DungeonCrawler.DCTradeInventoryWidget.OnInventoryTabClicked
	void OnInventoryComponentChanged(struct UDCInventoryComponent* Comp); // Function DungeonCrawler.DCTradeInventoryWidget.OnInventoryComponentChanged
}; 
 
 


// Class DungeonCrawler.DCTradePhaseDealWidget
// Size: 0x320(Inherited: 0x300)
struct UDCTradePhaseDealWidget : UDCWidgetBase
{
	int32_t TradeFee;  // 0x300 (0x300)
	int32_t LockDuration;  // 0x304 (0x304)
	struct UDCCommonButtonBase* CancelTradeButton;  // 0x308 (0x308)
	struct UDCTradeBoxWidget* TradeBoxLocal;  // 0x310 (0x310)
	struct UDCTradeBoxWidget* TradeBoxRemote;  // 0x318 (0x318)


	void OnResponseLocalTraderRequestRequestResult(bool bRequestSucceed); // Function DungeonCrawler.DCTradePhaseDealWidget.OnResponseLocalTraderRequestRequestResult
	void OnLocalTraderCheckBoxStateChanged(bool bIsChecked); // Function DungeonCrawler.DCTradePhaseDealWidget.OnLocalTraderCheckBoxStateChanged
	void OnCancelTradeButtonClicked(); // Function DungeonCrawler.DCTradePhaseDealWidget.OnCancelTradeButtonClicked
}; 
 
 


// Class DungeonCrawler.DCTriumphLevelDataAsset
// Size: 0x40(Inherited: 0x38)
struct UDCTriumphLevelDataAsset : UDCTableDataAsset
{
	int32_t ExpForNextLevel;  // 0x38 (0x38)
	int32_t TotalExp;  // 0x3C (0x3C)


}; 
 
 


// Class DungeonCrawler.ItemTooltipStatWidget
// Size: 0x308(Inherited: 0x300)
struct UItemTooltipStatWidget : UDCWidgetBase
{
	char pad_768[8];  // 0x300 (0x300)


}; 
 
 


// Class DungeonCrawler.DCWaitingGameMode
// Size: 0x4D0(Inherited: 0x4C8)
struct ADCWaitingGameMode : ADCIngameGameMode
{
	char pad_1224[8];  // 0x4C8 (0x4C8)


}; 
 
 


// Class DungeonCrawler.DCWaitingGameState
// Size: 0x798(Inherited: 0x780)
struct ADCWaitingGameState : ADCGameStateBase
{
	struct TArray<struct FGameAnnounceData> AnnounceInfos;  // 0x780 (0x780)
	float StartTime;  // 0x790 (0x790)
	char pad_1940[4];  // 0x794 (0x794)


}; 
 
 


// Class DungeonCrawler.DCWidgetBlueprintLibrary
// Size: 0x28(Inherited: 0x28)
struct UDCWidgetBlueprintLibrary : UWidgetBlueprintLibrary
{


	struct FDCAccountId StringToAccountId(struct FString InAccountIdStr); // Function DungeonCrawler.DCWidgetBlueprintLibrary.StringToAccountId
	void SetPlayerCursorCenter(struct UObject* WorldContextObject); // Function DungeonCrawler.DCWidgetBlueprintLibrary.SetPlayerCursorCenter
	void PopupMessageSWidgetNotify(struct APlayerController* InPlayer, UDCCommonActivatableWidgetBase* WidgetClass, struct FText DescMessage, uint8_t ButtonType); // Function DungeonCrawler.DCWidgetBlueprintLibrary.PopupMessageSWidgetNotify
	struct FMsgWidgetPopupMessageReqeust MakePopupMessageReqeust(UDCCommonActivatableWidgetBase* WidgetClass, struct UPopupDataBase* PopupData); // Function DungeonCrawler.DCWidgetBlueprintLibrary.MakePopupMessageReqeust
	struct UPopupDataSWidget* MakePopupDataSWidget(uint8_t PopupButtonType, struct FText DescMessage); // Function DungeonCrawler.DCWidgetBlueprintLibrary.MakePopupDataSWidget
	uint8_t GetVoipStatus(struct FVoipUserData& InVoipUserData); // Function DungeonCrawler.DCWidgetBlueprintLibrary.GetVoipStatus
	void BroadcastSystemMessageNotify(struct APlayerController* InPlayer, struct FText& OutputMessage, float Duration); // Function DungeonCrawler.DCWidgetBlueprintLibrary.BroadcastSystemMessageNotify
	void BroadcastLobbySystemMessage(struct APlayerController* InPlayer, struct FText& AnnounceText); // Function DungeonCrawler.DCWidgetBlueprintLibrary.BroadcastLobbySystemMessage
}; 
 
 


// Class DungeonCrawler.DCWorldSettings
// Size: 0x4C0(Inherited: 0x4B8)
struct ADCWorldSettings : AWorldSettings
{
	struct UBehaviorTree* GameModeBehaviorTree;  // 0x4B8 (0x4B8)


}; 
 
 


// Class DungeonCrawler.DeathSwarmBase
// Size: 0x530(Inherited: 0x3E0)
struct ADeathSwarmBase : APropsActorBase
{
	struct UCapsuleComponent* AuraCapsule;  // 0x3E0 (0x3E0)
	struct UCapsuleComponent* AntiAuraCapsule;  // 0x3E8 (0x3E8)
	char pad_1008[320];  // 0x3F0 (0x3F0)


}; 
 
 


// Class DungeonCrawler.DescDataParam
// Size: 0x28(Inherited: 0x28)
struct UDescDataParam : UObject
{


}; 
 
 


// Class DungeonCrawler.PartyChatWidget
// Size: 0x400(Inherited: 0x3B8)
struct UPartyChatWidget : UChatSetWidgetBase
{
	struct FPartyChatWidgetData WidgetData;  // 0x3B8 (0x3B8)


	void OnChatAccountData(struct FChatAccountData& NewItemData, struct FChatAccountData& OldItemData); // Function DungeonCrawler.PartyChatWidget.OnChatAccountData
}; 
 
 


// Class DungeonCrawler.DescData
// Size: 0x50(Inherited: 0x38)
struct UDescData : UDCDataAssetBase
{
	struct FText DescriptionFormatTextId;  // 0x38 (0x38)


	float GetExecImpactPower(struct UDescDataParam* InDescDataParam); // Function DungeonCrawler.DescData.GetExecImpactPower
	void GetDescription(struct UDescDataParam* InDescDataParam, struct TArray<struct FText>& OutDescTextArray); // Function DungeonCrawler.DescData.GetDescription
}; 
 
 


// Class DungeonCrawler.DescDataEffectTwoParam
// Size: 0x68(Inherited: 0x50)
struct UDescDataEffectTwoParam : UDescData
{
	struct UDesignDataAssetGameplayEffect* DesignDataGameplayEffect;  // 0x50 (0x50)
	struct FGameplayTag GameplayTagParam1;  // 0x58 (0x58)
	struct FGameplayTag GameplayTagParam2;  // 0x60 (0x60)


}; 
 
 


// Class DungeonCrawler.GA_MonsterChargedRangedAttackBase
// Size: 0x6C0(Inherited: 0x6B0)
struct UGA_MonsterChargedRangedAttackBase : UGA_MonsterRangedAttackBase
{
	struct FGameplayTag NextGameplayTag;  // 0x6B0 (0x6B0)
	float FireDelay;  // 0x6B8 (0x6B8)
	char pad_1724[4];  // 0x6BC (0x6BC)


}; 
 
 


// Class DungeonCrawler.DescDataConstantParams
// Size: 0xA0(Inherited: 0x50)
struct UDescDataConstantParams : UDescData
{
	struct TMap<struct FPrimaryAssetId, struct FDCConstantDataType> EtcDesignDatas;  // 0x50 (0x50)


}; 
 
 


// Class DungeonCrawler.DescDataParamAbilityWeapon
// Size: 0x58(Inherited: 0x28)
struct UDescDataParamAbilityWeapon : UDescDataParam
{
	char pad_40[8];  // 0x28 (0x28)
	struct FDCGameplayAbilityData GameplayAbilityData;  // 0x30 (0x30)


}; 
 
 


// Class DungeonCrawler.DescDataAbilityEffectParams
// Size: 0x118(Inherited: 0xF0)
struct UDescDataAbilityEffectParams : UDescDataMultiEffectParams
{
	struct FDCAbilityDataAsset AbilityData;  // 0xF0 (0xF0)
	char pad_260[4];  // 0x104 (0x104)
	struct TArray<uint8_t> AbilityDataAssetOptions;  // 0x108 (0x108)


}; 
 
 


// Class DungeonCrawler.DesignDataAssetGameplayEffect
// Size: 0x260(Inherited: 0x38)
struct UDesignDataAssetGameplayEffect : UDCDesignDataAssetBase
{
	struct FDesignDataGameplayEffect Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.LootComponent
// Size: 0x2E8(Inherited: 0x1E0)
struct ULootComponent : UInventoryComponent
{
	struct AActor* LootTargetActor;  // 0x1E0 (0x1E0)
	struct FHitResult HitResultTargetData;  // 0x1E8 (0x1E8)
	char pad_720_1 : 7;  // 0x2D0 (0x2D0)
	bool bLootTargetIsPlayer : 1;  // 0x2D0 (0x2D0)
	char pad_721[7];  // 0x2D1 (0x2D1)
	struct FMulticastInlineDelegate OnRemoveLootTarget;  // 0x2D8 (0x2D8)


	void ServerRemoveLootTarget(struct UInventoryComponent* InventoryComponent, struct TArray<struct FItemData> InContainingItems); // Function DungeonCrawler.LootComponent.ServerRemoveLootTarget
	void ServerClearLootingTargetContainingItems(); // Function DungeonCrawler.LootComponent.ServerClearLootingTargetContainingItems
	void OnRep_LootTargetActor(struct AActor* OldLootTargetActor); // Function DungeonCrawler.LootComponent.OnRep_LootTargetActor
	bool IsLootTargetPlayer(); // Function DungeonCrawler.LootComponent.IsLootTargetPlayer
	struct AActor* GetLootTargetActor(); // Function DungeonCrawler.LootComponent.GetLootTargetActor
	void DCRemoveLootTargetEvent__DelegateSignature(); // DelegateFunction DungeonCrawler.LootComponent.DCRemoveLootTargetEvent__DelegateSignature
}; 
 
 


// Class DungeonCrawler.DesignDataAssetBaseItem
// Size: 0xF8(Inherited: 0x38)
struct UDesignDataAssetBaseItem : UDCDesignDataAssetBase
{
	struct FDesignDataBaseItem Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DesignDataAssetProps
// Size: 0xC8(Inherited: 0x38)
struct UDesignDataAssetProps : UDCDesignDataAssetBase
{
	struct FDesignDataProps Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.GameMenuOptionsInputWidget
// Size: 0x478(Inherited: 0x440)
struct UGameMenuOptionsInputWidget : UDCCommonActivatableWidgetBase
{
	struct UListView* InputSlotListView;  // 0x440 (0x440)
	struct FDataTableRowHandle ApplyInputActionData;  // 0x448 (0x448)
	char pad_1112[8];  // 0x458 (0x458)
	struct FDataTableRowHandle ResetInputActionData;  // 0x460 (0x460)
	char pad_1136[8];  // 0x470 (0x470)


	void RefreshWidget(); // Function DungeonCrawler.GameMenuOptionsInputWidget.RefreshWidget
	void OnResetButtonClicked(); // Function DungeonCrawler.GameMenuOptionsInputWidget.OnResetButtonClicked
	void OnInputBindPendingChange(); // Function DungeonCrawler.GameMenuOptionsInputWidget.OnInputBindPendingChange
	void OnApplyButtonClicked(); // Function DungeonCrawler.GameMenuOptionsInputWidget.OnApplyButtonClicked
}; 
 
 


// Class DungeonCrawler.DesignDataAssetPropsInteract
// Size: 0xD8(Inherited: 0x38)
struct UDesignDataAssetPropsInteract : UDCDesignDataAssetBase
{
	struct FDesignDataPropsInteract Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DesignDataAssetPropsSkillCheck
// Size: 0x68(Inherited: 0x38)
struct UDesignDataAssetPropsSkillCheck : UDCDesignDataAssetBase
{
	struct FDesignDataPropsSkillCheck Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DesignDataAssetItem
// Size: 0x1C0(Inherited: 0x38)
struct UDesignDataAssetItem : UDCDesignDataAssetBase
{
	struct FDesignDataItem Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DesignDataAssetItemPropertyType
// Size: 0x90(Inherited: 0x38)
struct UDesignDataAssetItemPropertyType : UDCDesignDataAssetBase
{
	struct FDesignDataItemPropertyType Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DesignDataAssetItemBundleInfo
// Size: 0x48(Inherited: 0x38)
struct UDesignDataAssetItemBundleInfo : UDCDesignDataAssetBase
{
	struct FDesignDataItemBundleInfo Item;  // 0x38 (0x38)


	struct FPrimaryAssetId GetBundleArtAssetByCount(int32_t ItemCount); // Function DungeonCrawler.DesignDataAssetItemBundleInfo.GetBundleArtAssetByCount
}; 
 
 


// Class DungeonCrawler.GA_Pickpocket
// Size: 0x558(Inherited: 0x558)
struct UGA_Pickpocket : UDCGameplayAbilityBase
{


}; 
 
 


// Class DungeonCrawler.DesignDataAssetSpawner
// Size: 0x48(Inherited: 0x38)
struct UDesignDataAssetSpawner : UDCDesignDataAssetBase
{
	struct FDesignDataSpawner Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DesignDataAssetMeleeAttack
// Size: 0x90(Inherited: 0x38)
struct UDesignDataAssetMeleeAttack : UDCDesignDataAssetBase
{
	struct FDesignDataMeleeAttack Item;  // 0x38 (0x38)
	char pad_140[4];  // 0x8C (0x8C)


}; 
 
 


// Class DungeonCrawler.DesignDataAssetSpell
// Size: 0x100(Inherited: 0x38)
struct UDesignDataAssetSpell : UDCDesignDataAssetBase
{
	struct FDesignDataSpell Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.TradeChatWidget
// Size: 0x410(Inherited: 0x3B8)
struct UTradeChatWidget : UChatSetWidgetBase
{
	struct UDCCommonButtonBase* Btn_ReadRules;  // 0x3B8 (0x3B8)
	struct FTradeChatWidgetData WidgetData;  // 0x3C0 (0x3C0)
	char pad_1032[8];  // 0x408 (0x408)


	void OnReadRulesButtonClicked(); // Function DungeonCrawler.TradeChatWidget.OnReadRulesButtonClicked
	void OnChatAccountData(struct FChatAccountData& NewItemData, struct FChatAccountData& OldItemData); // Function DungeonCrawler.TradeChatWidget.OnChatAccountData
}; 
 
 


// Class DungeonCrawler.DesignDataAssetMusic
// Size: 0xF8(Inherited: 0x38)
struct UDesignDataAssetMusic : UDCDesignDataAssetBase
{
	struct FDesignDataMusic Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DesignDataAssetMerchant
// Size: 0x88(Inherited: 0x38)
struct UDesignDataAssetMerchant : UDCDesignDataAssetBase
{
	struct FDesignDataMerchant Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DesignDataAssetStockBuy
// Size: 0x48(Inherited: 0x38)
struct UDesignDataAssetStockBuy : UDCDesignDataAssetBase
{
	struct FDesignDataStockBuy Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DesignDataAssetStockSellBack
// Size: 0x48(Inherited: 0x38)
struct UDesignDataAssetStockSellBack : UDCDesignDataAssetBase
{
	struct FDesignDataStockSellBack Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DesignDataAssetStockCraft
// Size: 0x48(Inherited: 0x38)
struct UDesignDataAssetStockCraft : UDCDesignDataAssetBase
{
	struct FDesignDataStockCraft Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DesignDataAssetEmote
// Size: 0xA0(Inherited: 0x38)
struct UDesignDataAssetEmote : UDCDesignDataAssetBase
{
	struct FDesignDataEmote Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.DesignDataAssetIdTagGroup
// Size: 0x48(Inherited: 0x38)
struct UDesignDataAssetIdTagGroup : UDCDesignDataAssetBase
{
	struct FDesignDataIdTagGroup Item;  // 0x38 (0x38)


}; 
 
 


// Class DungeonCrawler.EquipmentInventoryComponent
// Size: 0x428(Inherited: 0xA0)
struct UEquipmentInventoryComponent : UActorComponent
{
	char pad_160[88];  // 0xA0 (0xA0)
	uint8_t InventoryType;  // 0xF8 (0xF8)
	char pad_249[7];  // 0xF9 (0xF9)
	struct FDCEquipmentInventoryData InventoryData;  // 0x100 (0x100)
	struct TArray<struct AItemActor*> EquippedItemActors;  // 0x110 (0x110)
	struct TArray<struct AItemActor*> SheathItemActors;  // 0x120 (0x120)
	struct FDCQuickSlotData QuickSlotData;  // 0x130 (0x130)
	struct FDCEquipAnimData EquipAnimData;  // 0x138 (0x138)
	struct TMap<uint8_t, struct UDCEquipmentSlot*> EquipSlotMap;  // 0x368 (0x368)
	struct TMap<uint8_t, struct FEquipmentQuickSlotInfo> QuickSlotInfoMap;  // 0x3B8 (0x3B8)
	char pad_1032_1 : 7;  // 0x408 (0x408)
	bool bHideSheathItemActorsFromOwner : 1;  // 0x408 (0x408)
	char pad_1033[31];  // 0x409 (0x409)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.EquipmentInventoryComponent.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.EquipmentInventoryComponent.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.EquipmentInventoryComponent.TerminateBase
	void OnRep_SheathItemActors(struct TArray<struct AItemActor*> OldSheathItemActors); // Function DungeonCrawler.EquipmentInventoryComponent.OnRep_SheathItemActors
	void OnRep_QuickSlotData(struct FDCQuickSlotData& OldQuickSlotData); // Function DungeonCrawler.EquipmentInventoryComponent.OnRep_QuickSlotData
	void OnRep_InventoryData(struct FDCEquipmentInventoryData& OldInventoryData); // Function DungeonCrawler.EquipmentInventoryComponent.OnRep_InventoryData
	void OnRep_EquippedItemActors(struct TArray<struct AItemActor*> OldEquippedItemActors); // Function DungeonCrawler.EquipmentInventoryComponent.OnRep_EquippedItemActors
	void OnRep_EquipAnimData(struct FDCEquipAnimData& OldEquipAnimData); // Function DungeonCrawler.EquipmentInventoryComponent.OnRep_EquipAnimData
	void HideEquippedItemActorsInGame(bool bHidden); // Function DungeonCrawler.EquipmentInventoryComponent.HideEquippedItemActorsInGame
	struct TArray<struct UItem*> GetItemsBySlotType(struct FGameplayTag ItemSlotType); // Function DungeonCrawler.EquipmentInventoryComponent.GetItemsBySlotType
	struct FItemData GetCurrentHoldingItemData(); // Function DungeonCrawler.EquipmentInventoryComponent.GetCurrentHoldingItemData
	struct TArray<struct AItemActor*> GetCurrentEquippedItemActors(); // Function DungeonCrawler.EquipmentInventoryComponent.GetCurrentEquippedItemActors
	uint8_t GetCurrentActiveSlotType(); // Function DungeonCrawler.EquipmentInventoryComponent.GetCurrentActiveSlotType
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.EquipmentInventoryComponent.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.InventoryComponent
// Size: 0x1E0(Inherited: 0xA0)
struct UInventoryComponent : UActorComponent
{
	char pad_160[88];  // 0xA0 (0xA0)
	uint8_t InventoryType;  // 0xF8 (0xF8)
	char pad_249[3];  // 0xF9 (0xF9)
	int32_t MaxHorizontalSlotCount;  // 0xFC (0xFC)
	int32_t TotalSlotCount;  // 0x100 (0x100)
	int32_t RowCount;  // 0x104 (0x104)
	struct TArray<struct FSlotInfo> SlotInfoArray;  // 0x108 (0x108)
	struct TMap<int32_t, struct FEmptySlotInfoArray> EmptySlotInfoMap;  // 0x118 (0x118)
	struct TMap<int32_t, struct UItem*> ItemMap;  // 0x168 (0x168)
	struct TArray<struct FItemData> ContainingItems;  // 0x1B8 (0x1B8)
	int64_t TotalGoldCount;  // 0x1C8 (0x1C8)
	struct TArray<struct AActor*> LooterArray;  // 0x1D0 (0x1D0)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.InventoryComponent.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.InventoryComponent.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.InventoryComponent.TerminateBase
	void OnRep_TotalGoldCount(int64_t OldTotalGoldCount); // Function DungeonCrawler.InventoryComponent.OnRep_TotalGoldCount
	void OnRep_ContainingItems(struct TArray<struct FItemData>& OldContainingItems); // Function DungeonCrawler.InventoryComponent.OnRep_ContainingItems
	struct UItem* GetItemByItemUniqueId(int64_t InItemUniqueId); // Function DungeonCrawler.InventoryComponent.GetItemByItemUniqueId
	uint8_t GetInventoryType(); // Function DungeonCrawler.InventoryComponent.GetInventoryType
	void ClientShowMessage(struct FText OutputMessage); // Function DungeonCrawler.InventoryComponent.ClientShowMessage
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.InventoryComponent.BroadcastMsgBlueprint
	bool AddContainingItem(struct FItemData ItemData); // Function DungeonCrawler.InventoryComponent.AddContainingItem
}; 
 
 


// Class DungeonCrawler.FloorPortalBase
// Size: 0x410(Inherited: 0x3E0)
struct AFloorPortalBase : APropsActorBase
{
	AFloorPortalScrollBase* DownFloorPortalScrollClass;  // 0x3E0 (0x3E0)
	AFloorPortalScrollBase* EscapeFloorPortalScrollClass;  // 0x3E8 (0x3E8)
	struct TArray<struct FGameplayTag> FloorPortalScrollActivateAbilityTriggerTagArray;  // 0x3F0 (0x3F0)
	struct TArray<struct USceneComponent*> FloorPortalScrollHolderArray;  // 0x400 (0x400)


}; 
 
 


// Class DungeonCrawler.MailBoxItemWidgetDataBase
// Size: 0x70(Inherited: 0x28)
struct UMailBoxItemWidgetDataBase : UObject
{
	struct FNickname Nickname;  // 0x28 (0x28)
	struct FString AccountId;  // 0x50 (0x50)
	struct FString CharacterId;  // 0x60 (0x60)


}; 
 
 


// Class DungeonCrawler.GameActorStatusSlotItemData
// Size: 0x48(Inherited: 0x28)
struct UGameActorStatusSlotItemData : UObject
{
	struct FActorStatusData ActorStatusData;  // 0x28 (0x28)


}; 
 
 


// Class DungeonCrawler.ServerAccountSubsystem
// Size: 0x220(Inherited: 0x30)
struct UServerAccountSubsystem : UGameInstanceSubsystem
{
	char pad_48[312];  // 0x30 (0x30)
	struct FDCGameInfo GameInfo;  // 0x168 (0x168)
	char pad_408[136];  // 0x198 (0x198)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.ServerAccountSubsystem.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.ServerAccountSubsystem.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.ServerAccountSubsystem.TerminateBase
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.ServerAccountSubsystem.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.MailBoxListWidgetBase
// Size: 0x308(Inherited: 0x300)
struct UMailBoxListWidgetBase : UDCWidgetBase
{
	char pad_768[8];  // 0x300 (0x300)


	void OnPopupSWidgetInvitePartyAnswerResponse(uint8_t PopupResult, struct FString ReturnAccountID); // Function DungeonCrawler.MailBoxListWidgetBase.OnPopupSWidgetInvitePartyAnswerResponse
}; 
 
 


// Class DungeonCrawler.GameAlivePlayerCountWidget
// Size: 0x310(Inherited: 0x300)
struct UGameAlivePlayerCountWidget : UDCWidgetBase
{
	char pad_768[8];  // 0x300 (0x300)
	struct UAccountLinkAll* AccountLinkAll;  // 0x308 (0x308)


	void OnTotalPlayerCount(int32_t NewValue, int32_t OldValue); // Function DungeonCrawler.GameAlivePlayerCountWidget.OnTotalPlayerCount
	void OnAlivePlayerCount(int32_t NewValue, int32_t OldValue); // Function DungeonCrawler.GameAlivePlayerCountWidget.OnAlivePlayerCount
}; 
 
 


// Class DungeonCrawler.GameActorStatusSlotWidget
// Size: 0x338(Inherited: 0x300)
struct UGameActorStatusSlotWidget : UDCWidgetBase
{
	char pad_768[8];  // 0x300 (0x300)
	struct UImage* TimeGauge;  // 0x308 (0x308)
	struct FGameActorStatusSlotWidgetData WidgetData;  // 0x310 (0x310)
	char pad_816[8];  // 0x330 (0x330)


	void OnActorStatusData(struct FActorStatusData& NewValue, struct FActorStatusData& OldValue); // Function DungeonCrawler.GameActorStatusSlotWidget.OnActorStatusData
}; 
 
 


// Class DungeonCrawler.GameActorStatusWidget
// Size: 0x320(Inherited: 0x300)
struct UGameActorStatusWidget : UDCWidgetBase
{
	struct UTileView* ActorStatusTileView;  // 0x300 (0x300)
	char pad_776_1 : 7;  // 0x308 (0x308)
	bool bIsAlive : 1;  // 0x308 (0x308)
	char pad_777[23];  // 0x309 (0x309)


}; 
 
 


// Class DungeonCrawler.GA_ActivateItemBase
// Size: 0x598(Inherited: 0x558)
struct UGA_ActivateItemBase : UDCGameplayAbilityBase
{
	struct UAnimMontage* MontageToPlay;  // 0x558 (0x558)
	struct UAnimMontage* MontageToPlayOnSourceObject;  // 0x560 (0x560)
	struct FGameplayTag ActivateTag;  // 0x568 (0x568)
	struct FGameplayTag DeactivateTag;  // 0x570 (0x570)
	char pad_1400[8];  // 0x578 (0x578)
	struct FTimerHandle OtherHandIACompletedHandle;  // 0x580 (0x580)
	struct FGameplayTag OtherHandTriggerEventTag;  // 0x588 (0x588)
	struct FGameplayTag OtherHandEnablingEventTag;  // 0x590 (0x590)


	void ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_ActivateItemBase.ReceivedEvent
	void OtherHandIAStarted(); // Function DungeonCrawler.GA_ActivateItemBase.OtherHandIAStarted
	void OtherHandIACompleted(); // Function DungeonCrawler.GA_ActivateItemBase.OtherHandIACompleted
	void OnCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_ActivateItemBase.OnCompleted
	void OnCancelled(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_ActivateItemBase.OnCancelled
	void EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_ActivateItemBase.EventReceived
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function DungeonCrawler.GA_ActivateItemBase.AbilityActivated
}; 
 
 


// Class DungeonCrawler.GameAmmoWidget
// Size: 0x3B8(Inherited: 0x300)
struct UGameAmmoWidget : UDCWidgetBase
{
	struct UAccountLink* AccountLink;  // 0x300 (0x300)
	struct TWeakObjectPtr<UEquipmentInventoryComponent> EquipmentInventory;  // 0x308 (0x308)
	struct TWeakObjectPtr<UInventoryComponent> ContainerInventory;  // 0x310 (0x310)
	struct FItemData ItemData;  // 0x318 (0x318)


	int32_t GetMaxAmmoCount(); // Function DungeonCrawler.GameAmmoWidget.GetMaxAmmoCount
	int32_t GetCurrentAmmoCount(); // Function DungeonCrawler.GameAmmoWidget.GetCurrentAmmoCount
}; 
 
 


// Class DungeonCrawler.GameCancelTipWidget
// Size: 0x300(Inherited: 0x300)
struct UGameCancelTipWidget : UDCShowingKeyWidgetBase
{


}; 
 
 


// Class DungeonCrawler.GameCompassWidget
// Size: 0x310(Inherited: 0x300)
struct UGameCompassWidget : UDCWidgetBase
{
	struct UAccountLink* AccountLink;  // 0x300 (0x300)
	struct APawn* LinkedPawn;  // 0x308 (0x308)


}; 
 
 


// Class DungeonCrawler.MonsterSpawnableInterface
// Size: 0x28(Inherited: 0x28)
struct UMonsterSpawnableInterface : UInterface
{


	struct ADCMonsterBase* Spawn(ADCMonsterBase* Monster); // Function DungeonCrawler.MonsterSpawnableInterface.Spawn
}; 
 
 


// Class DungeonCrawler.GameEmoteSelectGroupWidget
// Size: 0x4D0(Inherited: 0x460)
struct UGameEmoteSelectGroupWidget : UGameGroupWidgetBase
{
	int32_t SelectedEmoteIndex;  // 0x460 (0x460)
	char pad_1124[20];  // 0x464 (0x464)
	struct ADCPlayerCharacterBase* PlayerCharacter;  // 0x478 (0x478)
	struct UGameEmoteSlotWidget* EmoteSlot_2;  // 0x480 (0x480)
	struct UGameEmoteSlotWidget* EmoteSlot_3;  // 0x488 (0x488)
	struct UGameEmoteSlotWidget* EmoteSlot_4;  // 0x490 (0x490)
	struct UGameEmoteSlotWidget* EmoteSlot_5;  // 0x498 (0x498)
	struct UGameEmoteSlotWidget* EmoteSlot_6;  // 0x4A0 (0x4A0)
	struct UGameEmoteSlotWidget* EmoteSlot_7;  // 0x4A8 (0x4A8)
	struct UGameEmoteSlotWidget* EmoteSlot_8;  // 0x4B0 (0x4B0)
	struct UGameEmoteSlotWidget* EmoteSlot_9;  // 0x4B8 (0x4B8)
	struct TArray<struct UGameEmoteSlotWidget*> EmoteSlots;  // 0x4C0 (0x4C0)


	void OnSelectedEmoteIndexChanged(); // Function DungeonCrawler.GameEmoteSelectGroupWidget.OnSelectedEmoteIndexChanged
	void OnEmoteSelectPopup(); // Function DungeonCrawler.GameEmoteSelectGroupWidget.OnEmoteSelectPopup
	void OnEmoteSelectClose(); // Function DungeonCrawler.GameEmoteSelectGroupWidget.OnEmoteSelectClose
	void OnCurrentEmoteSlotChanged(struct FText& InName); // Function DungeonCrawler.GameEmoteSelectGroupWidget.OnCurrentEmoteSlotChanged
}; 
 
 


// Class DungeonCrawler.GameEmoteSlotWidget
// Size: 0x320(Inherited: 0x300)
struct UGameEmoteSlotWidget : UDCWidgetBase
{
	char pad_768[32];  // 0x300 (0x300)


	void SetEmoteData(struct UDCEmoteDataAsset* InDesignDataEmote); // Function DungeonCrawler.GameEmoteSlotWidget.SetEmoteData
	void SelectionChange(bool bIsSelected); // Function DungeonCrawler.GameEmoteSlotWidget.SelectionChange
	void Reset(); // Function DungeonCrawler.GameEmoteSlotWidget.Reset
	void OnSetEmoteArtData(struct UArtDataEmote* InArtEmoteData); // Function DungeonCrawler.GameEmoteSlotWidget.OnSetEmoteArtData
	void OnSelectionChanged(bool bIsSelected); // Function DungeonCrawler.GameEmoteSlotWidget.OnSelectionChanged
	void OnReset(); // Function DungeonCrawler.GameEmoteSlotWidget.OnReset
}; 
 
 


// Class DungeonCrawler.GameHeadupWidget
// Size: 0x308(Inherited: 0x300)
struct UGameHeadupWidget : UDCWidgetBase
{
	char pad_768[8];  // 0x300 (0x300)


}; 
 
 


// Class DungeonCrawler.GameHitDirectionWidget
// Size: 0x318(Inherited: 0x300)
struct UGameHitDirectionWidget : UDCWidgetBase
{
	struct FVector HitDiection;  // 0x300 (0x300)


	void SetHitDirection(struct FVector Direction); // Function DungeonCrawler.GameHitDirectionWidget.SetHitDirection
	void OnAnimation(); // Function DungeonCrawler.GameHitDirectionWidget.OnAnimation
}; 
 
 


// Class DungeonCrawler.GameInteractionDescriptionWidget
// Size: 0x378(Inherited: 0x300)
struct UGameInteractionDescriptionWidget : UDCShowingKeyWidgetBase
{
	struct FGameInteractionDescriptionWidgetData WidgetData;  // 0x300 (0x300)


	void OnInteractTargetData(struct FInteractTargetData& NewValue, struct FInteractTargetData& OldValue); // Function DungeonCrawler.GameInteractionDescriptionWidget.OnInteractTargetData
	void OnInteractableDataByStateMap(struct TMap<struct FGameplayTag, struct FInteractionData>& NewValue, struct TMap<struct FGameplayTag, struct FInteractionData>& OldValue); // Function DungeonCrawler.GameInteractionDescriptionWidget.OnInteractableDataByStateMap
	void OnInputType(uint8_t NewValue, uint8_t OldValue); // Function DungeonCrawler.GameInteractionDescriptionWidget.OnInputType
}; 
 
 


// Class DungeonCrawler.GameInteractionSkillCheckWidget
// Size: 0x310(Inherited: 0x300)
struct UGameInteractionSkillCheckWidget : UDCShowingKeyWidgetBase
{
	struct FGameplayTag SkillCheckType;  // 0x300 (0x300)
	float Duration;  // 0x308 (0x308)
	char pad_780[4];  // 0x30C (0x30C)


	void OnInteractSkillCheckStart(struct FSkillCheckData& SkillCheckData); // Function DungeonCrawler.GameInteractionSkillCheckWidget.OnInteractSkillCheckStart
	void OnInteractSkillCheckEnd(uint8_t SkillCheckResult); // Function DungeonCrawler.GameInteractionSkillCheckWidget.OnInteractSkillCheckEnd
}; 
 
 


// Class DungeonCrawler.MusicActor
// Size: 0x408(Inherited: 0x2F0)
struct AMusicActor : ADCActorBase
{
	char pad_752[32];  // 0x2F0 (0x2F0)
	struct FDesignDataMusic DesignDataMusic;  // 0x310 (0x310)
	struct FMusicData MusicData;  // 0x3D0 (0x3D0)
	struct UArtDataMusic* ArtDataMusic;  // 0x3F0 (0x3F0)
	struct USoundData* SoundData;  // 0x3F8 (0x3F8)
	struct UPlayMusicData* PlayMusicData;  // 0x400 (0x400)


	void SetMusicData(struct FMusicData& NewMusicData); // Function DungeonCrawler.MusicActor.SetMusicData
	void OnRep_MusicData(struct FMusicData& OldMusicData); // Function DungeonCrawler.MusicActor.OnRep_MusicData
	struct USoundData* GetSoundDataMusic(); // Function DungeonCrawler.MusicActor.GetSoundDataMusic
	struct UPlayMusicData* GetPlayMusicData(); // Function DungeonCrawler.MusicActor.GetPlayMusicData
	struct FMusicData GetMusicData(); // Function DungeonCrawler.MusicActor.GetMusicData
	struct FDesignDataMusic GetDesignDataMusic(); // Function DungeonCrawler.MusicActor.GetDesignDataMusic
	struct UArtDataMusic* GetArtDataMusic(); // Function DungeonCrawler.MusicActor.GetArtDataMusic
}; 
 
 


// Class DungeonCrawler.GameInventoryGroupWidget
// Size: 0x498(Inherited: 0x460)
struct UGameInventoryGroupWidget : UGameGroupWidgetBase
{
	struct UAccountLink* AccountLink;  // 0x460 (0x460)
	struct TSoftClassPtr<UObject> ItemCountSelectWidgetClass;  // 0x468 (0x468)


	void OnPopItemSelectWidget(struct FItemData ItemData, struct AActor* OldOwnerActor); // Function DungeonCrawler.GameInventoryGroupWidget.OnPopItemSelectWidget
	void OnItemDropOne(struct FItemData ItemData, struct AActor* OldOwnerActor); // Function DungeonCrawler.GameInventoryGroupWidget.OnItemDropOne
	void OnItemDrop(struct FItemData ItemData, struct AActor* OldOwnerActor); // Function DungeonCrawler.GameInventoryGroupWidget.OnItemDrop
}; 
 
 


// Class DungeonCrawler.GameItemWearingBarWidget
// Size: 0x320(Inherited: 0x300)
struct UGameItemWearingBarWidget : UDCWidgetBase
{
	struct UProgressBar* ItemWearingGauge;  // 0x300 (0x300)
	float GaugeInterval;  // 0x308 (0x308)
	char pad_780[20];  // 0x30C (0x30C)


}; 
 
 


// Class DungeonCrawler.GameMenuOptionComboBoxWidget
// Size: 0x320(Inherited: 0x300)
struct UGameMenuOptionComboBoxWidget : UDCWidgetBase
{
	struct FMulticastInlineDelegate OnSelectionChanged;  // 0x300 (0x300)
	struct UComboBoxString* ComboBox;  // 0x310 (0x310)
	struct UTextBlock* Title;  // 0x318 (0x318)


	void SetTitle(struct FText InText); // Function DungeonCrawler.GameMenuOptionComboBoxWidget.SetTitle
	void SetComboBoxList(struct TArray<struct FString>& InComboBoxDataList); // Function DungeonCrawler.GameMenuOptionComboBoxWidget.SetComboBoxList
	void SetComboBoxIndex(int32_t InIndex); // Function DungeonCrawler.GameMenuOptionComboBoxWidget.SetComboBoxIndex
	struct FString GetSelectedComboBoxText(); // Function DungeonCrawler.GameMenuOptionComboBoxWidget.GetSelectedComboBoxText
	int32_t GetSelectedComboBoxIndex(); // Function DungeonCrawler.GameMenuOptionComboBoxWidget.GetSelectedComboBoxIndex
	struct UWidget* GetPrimaryGamepadFocusWidget(); // Function DungeonCrawler.GameMenuOptionComboBoxWidget.GetPrimaryGamepadFocusWidget
	void ClearComboBox(); // Function DungeonCrawler.GameMenuOptionComboBoxWidget.ClearComboBox
	void AddComboBox(struct FString InComboBoxData); // Function DungeonCrawler.GameMenuOptionComboBoxWidget.AddComboBox
}; 
 
 


// Class DungeonCrawler.GameMenuOptionPopupWidget
// Size: 0x460(Inherited: 0x440)
struct UGameMenuOptionPopupWidget : UDCCommonActivatableWidgetBase
{
	struct FMulticastInlineDelegate OnClicked;  // 0x440 (0x440)
	struct UCommonButtonPopupWidget* Btn_Left;  // 0x450 (0x450)
	struct UCommonButtonPopupWidget* Btn_Right;  // 0x458 (0x458)


	void UpdateDetailText(struct FText& InDetailText); // Function DungeonCrawler.GameMenuOptionPopupWidget.UpdateDetailText
	void UpdateButtonText(struct FText& InLeftText, struct FText& InRightText); // Function DungeonCrawler.GameMenuOptionPopupWidget.UpdateButtonText
	void SetDetailText(struct FText InDetailText); // Function DungeonCrawler.GameMenuOptionPopupWidget.SetDetailText
	void SetButtonText(struct FText InLeftText, struct FText InRightText); // Function DungeonCrawler.GameMenuOptionPopupWidget.SetButtonText
	void HandleRightButtonClicked(); // Function DungeonCrawler.GameMenuOptionPopupWidget.HandleRightButtonClicked
	void HandleLeftButtonClicked(); // Function DungeonCrawler.GameMenuOptionPopupWidget.HandleLeftButtonClicked
}; 
 
 


// Class DungeonCrawler.GameMenuOptionsAudioWidget
// Size: 0x4C0(Inherited: 0x440)
struct UGameMenuOptionsAudioWidget : UDCCommonActivatableWidgetBase
{
	struct UGameMenuOptionSliderWidget* WB_TotalVolume;  // 0x440 (0x440)
	struct UGameMenuOptionSliderWidget* WB_EffectVolume;  // 0x448 (0x448)
	struct UGameMenuOptionSliderWidget* WB_MusicVolume;  // 0x450 (0x450)
	struct UGameMenuOptionToggleSwitchWidget* WB_BackgroundVolume;  // 0x458 (0x458)
	struct UGameMenuOptionToggleSwitchWidget* WB_VoipOnOff;  // 0x460 (0x460)
	struct UGameMenuOptionToggleSwitchWidget* WB_VoipMode;  // 0x468 (0x468)
	struct UGameMenuOptionToggleSwitchWidget* WB_VoipSendMode;  // 0x470 (0x470)
	struct UGameMenuOptionSliderWidget* WB_VoipInputVolume;  // 0x478 (0x478)
	struct UGameMenuOptionSliderWidget* WB_VoipOutputVolume;  // 0x480 (0x480)
	struct FDataTableRowHandle ApplyInputActionData;  // 0x488 (0x488)
	char pad_1176[8];  // 0x498 (0x498)
	struct FDataTableRowHandle ResetInputActionData;  // 0x4A0 (0x4A0)
	char pad_1200[16];  // 0x4B0 (0x4B0)


	void UpdateWindowFocusChanged(bool IsFocus, bool IsBackgroundOption, float TotalVolume); // Function DungeonCrawler.GameMenuOptionsAudioWidget.UpdateWindowFocusChanged
	void OnVoipSendModeChanged(bool IsToggle); // Function DungeonCrawler.GameMenuOptionsAudioWidget.OnVoipSendModeChanged
	void OnVoipOutputVolumeValueChanged(float NewValue); // Function DungeonCrawler.GameMenuOptionsAudioWidget.OnVoipOutputVolumeValueChanged
	void OnVoipOnOffChanged(bool IsToggle); // Function DungeonCrawler.GameMenuOptionsAudioWidget.OnVoipOnOffChanged
	void OnVoipModeChanged(bool IsToggle); // Function DungeonCrawler.GameMenuOptionsAudioWidget.OnVoipModeChanged
	void OnVoipInputVolumeValueChanged(float NewValue); // Function DungeonCrawler.GameMenuOptionsAudioWidget.OnVoipInputVolumeValueChanged
	void OnTotalVolumeValueChanged(float NewValue); // Function DungeonCrawler.GameMenuOptionsAudioWidget.OnTotalVolumeValueChanged
	void OnResetButtonClicked(); // Function DungeonCrawler.GameMenuOptionsAudioWidget.OnResetButtonClicked
	void OnMusicVolumeValueChanged(float NewValue); // Function DungeonCrawler.GameMenuOptionsAudioWidget.OnMusicVolumeValueChanged
	void OnGameUserSettingAudiosChanged(struct FGameUserSettingAudios& InGameUserSettingAudios, struct FGameUserSettingAudios& InOldGameUserSettingAudios, bool bInForce); // Function DungeonCrawler.GameMenuOptionsAudioWidget.OnGameUserSettingAudiosChanged
	void OnEffectVolumeValueChanged(float NewValue); // Function DungeonCrawler.GameMenuOptionsAudioWidget.OnEffectVolumeValueChanged
	void OnBackgroundMusicChanged(bool IsToggle); // Function DungeonCrawler.GameMenuOptionsAudioWidget.OnBackgroundMusicChanged
	void OnApplyButtonClicked(); // Function DungeonCrawler.GameMenuOptionsAudioWidget.OnApplyButtonClicked
	void OnAppActivateStateChanged(bool IsAppActivateChange); // Function DungeonCrawler.GameMenuOptionsAudioWidget.OnAppActivateStateChanged
}; 
 
 


// Class DungeonCrawler.GameMenuOptionsInputBindPopupWidget
// Size: 0x450(Inherited: 0x440)
struct UGameMenuOptionsInputBindPopupWidget : UDCCommonActivatableWidgetBase
{
	char pad_1088[16];  // 0x440 (0x440)


}; 
 
 


// Class DungeonCrawler.GameMenuOptionInputBindSlotItemData
// Size: 0x200(Inherited: 0x28)
struct UGameMenuOptionInputBindSlotItemData : UObject
{
	struct FEnhancedActionKeyMapping ActionKeyMapping;  // 0x28 (0x28)
	struct FKeyboardInputBinding FirstMappableBinding;  // 0xB0 (0xB0)
	struct FKeyboardInputBinding SecondaryMappableBinding;  // 0x158 (0x158)


}; 
 
 


// Class DungeonCrawler.MusicComponent
// Size: 0xE8(Inherited: 0xA0)
struct UMusicComponent : UDCPlayerCharacterClassComponent
{
	char pad_160[48];  // 0xA0 (0xA0)
	struct TArray<struct AMusicActor*> MusicActors;  // 0xD0 (0xD0)
	struct FGameplayTag CurrentMusicTag;  // 0xE0 (0xE0)


	void ServerSetCurrentMusic(struct FGameplayTag MusicTag); // Function DungeonCrawler.MusicComponent.ServerSetCurrentMusic
	void OnRep_MusicActors(struct TArray<struct AMusicActor*>& OldAMusicActors); // Function DungeonCrawler.MusicComponent.OnRep_MusicActors
	void OnRep_CurrentMusicTag(); // Function DungeonCrawler.MusicComponent.OnRep_CurrentMusicTag
}; 
 
 


// Class DungeonCrawler.GameMenuOptionsInputBindSlotWidget
// Size: 0x338(Inherited: 0x300)
struct UGameMenuOptionsInputBindSlotWidget : UDCWidgetBase
{
	char pad_768[8];  // 0x300 (0x300)
	struct UTextBlock* InputName;  // 0x308 (0x308)
	struct UDCCommonButtonBase* PrimaryKeyButton;  // 0x310 (0x310)
	struct UDCCommonButtonBase* SecondaryKeyButton;  // 0x318 (0x318)
	struct UDCCommonButtonBase* ClearButton;  // 0x320 (0x320)
	UGameMenuOptionsInputBindPopupWidget* InputBindPressAnyKeyPopupClass;  // 0x328 (0x328)
	struct UGameMenuOptionsInputBindPopupWidget* InputBindPressAnyKeyPopupWidget;  // 0x330 (0x330)


	void OnSecondaryKeyBindButtonClicked(); // Function DungeonCrawler.GameMenuOptionsInputBindSlotWidget.OnSecondaryKeyBindButtonClicked
	void OnPrimaryKeyBindButtonClicked(); // Function DungeonCrawler.GameMenuOptionsInputBindSlotWidget.OnPrimaryKeyBindButtonClicked
	void OnClearButtonClicked(); // Function DungeonCrawler.GameMenuOptionsInputBindSlotWidget.OnClearButtonClicked
	void HandleSecondaryKeyPressed(struct FKey InKey); // Function DungeonCrawler.GameMenuOptionsInputBindSlotWidget.HandleSecondaryKeyPressed
	void HandlePrimaryKeyPressed(struct FKey InKey); // Function DungeonCrawler.GameMenuOptionsInputBindSlotWidget.HandlePrimaryKeyPressed
	struct UWidget* GetPrimaryGamepadFocusWidget(); // Function DungeonCrawler.GameMenuOptionsInputBindSlotWidget.GetPrimaryGamepadFocusWidget
	void ChangeBinding(int32_t InKeyBindSlot, struct FKey InKey); // Function DungeonCrawler.GameMenuOptionsInputBindSlotWidget.ChangeBinding
}; 
 
 


// Class DungeonCrawler.GameMenuOptionsInputListView
// Size: 0xC20(Inherited: 0xC20)
struct UGameMenuOptionsInputListView : UListView
{


}; 
 
 


// Class DungeonCrawler.GameMenuOptionInputSlotItemData
// Size: 0x38(Inherited: 0x28)
struct UGameMenuOptionInputSlotItemData : UObject
{
	struct FLoadedMappableConfigPair LoadedMappableConfigPair;  // 0x28 (0x28)


}; 
 
 


// Class DungeonCrawler.GameMenuOptionsInputSlotWidget
// Size: 0x318(Inherited: 0x300)
struct UGameMenuOptionsInputSlotWidget : UDCWidgetBase
{
	char pad_768[8];  // 0x300 (0x300)
	struct UTextBlock* InputConfigName;  // 0x308 (0x308)
	struct UListView* InputBindSlotListView;  // 0x310 (0x310)


	struct UWidget* GetPrimaryGamepadFocusWidget(); // Function DungeonCrawler.GameMenuOptionsInputSlotWidget.GetPrimaryGamepadFocusWidget
}; 
 
 


// Class DungeonCrawler.GameMenuOptionSlotWidget
// Size: 0x360(Inherited: 0x348)
struct UGameMenuOptionSlotWidget : UGameMenuOptionBaseWidget
{
	struct FMulticastInlineDelegate GameMenuOptionSlotSelectedDelegate;  // 0x348 (0x348)
	char pad_856[8];  // 0x358 (0x358)


	void SetSelectedSlotIdx(int32_t InSlotIdx); // Function DungeonCrawler.GameMenuOptionSlotWidget.SetSelectedSlotIdx
	void OnSelectedSlotIdx(int32_t& NewValue, int32_t& OldValue); // Function DungeonCrawler.GameMenuOptionSlotWidget.OnSelectedSlotIdx
}; 
 
 


// Class DungeonCrawler.GameMenuOptionsSlotWidget
// Size: 0x348(Inherited: 0x348)
struct UGameMenuOptionsSlotWidget : UGameMenuOptionBaseWidget
{


}; 
 
 


// Class DungeonCrawler.GameMenuOptionToggleSwitchWidget
// Size: 0x320(Inherited: 0x300)
struct UGameMenuOptionToggleSwitchWidget : UDCWidgetBase
{
	struct FMulticastInlineDelegate OnClicked;  // 0x300 (0x300)
	struct UTextBlock* Title;  // 0x310 (0x310)
	char pad_792[8];  // 0x318 (0x318)


	void UpdateButtonText(struct FText& LeftText, struct FText& RightText); // Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.UpdateButtonText
	void SetToggleSwitch(bool InSwitch); // Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.SetToggleSwitch
	void SetTitle(struct FText InTitle); // Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.SetTitle
	void SetButtonText(struct FText LeftText, struct FText RightText); // Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.SetButtonText
	void OnToggleSwitchClicked(); // Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.OnToggleSwitchClicked
	void OnToggleSwitch(bool InSwitch); // Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.OnToggleSwitch
	void OffToggleSwitchClicked(); // Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.OffToggleSwitchClicked
	bool GetToggleSwitch(); // Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.GetToggleSwitch
	struct UWidget* GetPrimaryGamepadFocusWidget(); // Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.GetPrimaryGamepadFocusWidget
}; 
 
 


// Class DungeonCrawler.GameMusicSelectGroupWidget
// Size: 0x4D8(Inherited: 0x4A0)
struct UGameMusicSelectGroupWidget : UMusicListWidgetBase
{
	int32_t SelectedMusicIndex;  // 0x4A0 (0x4A0)
	char pad_1188[4];  // 0x4A4 (0x4A4)
	struct FText RequiredText;  // 0x4A8 (0x4A8)
	char pad_1216[16];  // 0x4C0 (0x4C0)
	struct ADCPlayerCharacterBase* PlayerCharacter;  // 0x4D0 (0x4D0)


	void OnSelectedMusicIndexChanged(); // Function DungeonCrawler.GameMusicSelectGroupWidget.OnSelectedMusicIndexChanged
	void OnMusicSelectPopup(); // Function DungeonCrawler.GameMusicSelectGroupWidget.OnMusicSelectPopup
	void OnMusicSelectClose(); // Function DungeonCrawler.GameMusicSelectGroupWidget.OnMusicSelectClose
	void OnCurrentMusicSlotChanged(struct UGameMusicSlotWidget* InSelectedSlot); // Function DungeonCrawler.GameMusicSelectGroupWidget.OnCurrentMusicSlotChanged
}; 
 
 


// Class DungeonCrawler.GamePartyManagePartyMemberWidgetData
// Size: 0x38(Inherited: 0x28)
struct UGamePartyManagePartyMemberWidgetData : UObject
{
	struct FPartyMemberData PartyMemberData;  // 0x28 (0x28)


}; 
 
 


// Class DungeonCrawler.GamePartyManagePartyWidget
// Size: 0x338(Inherited: 0x300)
struct UGamePartyManagePartyWidget : UDCWidgetBase
{
	char pad_768[8];  // 0x300 (0x300)
	struct UButton* PartyJoinButton;  // 0x308 (0x308)
	struct UListView* PartyMemberListView;  // 0x310 (0x310)
	char pad_792[32];  // 0x318 (0x318)


	void PartyJoin(); // Function DungeonCrawler.GamePartyManagePartyWidget.PartyJoin
	void OnPartyData(struct FPartyData& NewValue, struct FPartyData& OldValue); // Function DungeonCrawler.GamePartyManagePartyWidget.OnPartyData
}; 
 
 


// Class DungeonCrawler.GamePartyMemberWidget
// Size: 0x3A0(Inherited: 0x300)
struct UGamePartyMemberWidget : UDCWidgetBase
{
	char pad_768[16];  // 0x300 (0x300)
	struct ADCPortraitCharacter* PortraitCharacter;  // 0x310 (0x310)
	struct UVerticalBox* PartyMemberActorStatusColumn;  // 0x318 (0x318)
	struct UVoipUserWidget* VoipUserWidget;  // 0x320 (0x320)
	int32_t NumActorStatusRows;  // 0x328 (0x328)
	char pad_812[4];  // 0x32C (0x32C)
	UDCPartyMemberActorStatusRow* PartyMemberActorStatusRowClass;  // 0x330 (0x330)
	char pad_824[16];  // 0x338 (0x338)
	struct FNickname Nickname;  // 0x348 (0x348)
	char pad_880_1 : 7;  // 0x370 (0x370)
	bool bIsAlive : 1;  // 0x370 (0x370)
	char pad_881[3];  // 0x371 (0x371)
	float HealthRate;  // 0x374 (0x374)
	float RecoverableHealthRate;  // 0x378 (0x378)
	char pad_892_1 : 7;  // 0x37C (0x37C)
	bool bIsEscaped : 1;  // 0x37C (0x37C)
	char pad_893_1 : 7;  // 0x37D (0x37D)
	bool bIsDisconnected : 1;  // 0x37D (0x37D)
	char pad_894_1 : 7;  // 0x37E (0x37E)
	bool bIsOnline : 1;  // 0x37E (0x37E)
	char pad_895_1 : 7;  // 0x37F (0x37F)
	bool bIsOffline : 1;  // 0x37F (0x37F)
	char pad_896_1 : 7;  // 0x380 (0x380)
	bool bIsTarget : 1;  // 0x380 (0x380)
	char pad_897[7];  // 0x381 (0x381)
	struct UTexture2D* Portrait;  // 0x388 (0x388)
	struct UTexture2D* ClassIcon;  // 0x390 (0x390)
	struct UTextureRenderTarget2D* PortraitRenderTarget;  // 0x398 (0x398)


	void OnRefreshNickname(); // Function DungeonCrawler.GamePartyMemberWidget.OnRefreshNickname
	void OnPortraitRenderTargetUpdated(); // Function DungeonCrawler.GamePartyMemberWidget.OnPortraitRenderTargetUpdated
}; 
 
 


// Class DungeonCrawler.GamePlayerCharacterWidget
// Size: 0x350(Inherited: 0x300)
struct UGamePlayerCharacterWidget : UDCShowingKeyWidgetBase
{
	struct FNickname Nickname;  // 0x300 (0x300)
	float HealthRate;  // 0x328 (0x328)
	float RecoverableHealthRate;  // 0x32C (0x32C)
	struct FDCAccountId AccountId;  // 0x330 (0x330)
	struct ADCPlayerCharacterBase* PlayerCharacter;  // 0x340 (0x340)
	char pad_840[8];  // 0x348 (0x348)


	void OnCurrentActiveSlot(struct UEquipmentSlotWidget* CurrentActiveWidget); // Function DungeonCrawler.GamePlayerCharacterWidget.OnCurrentActiveSlot
	void OnCharacterClass(uint8_t InCharacterClass); // Function DungeonCrawler.GamePlayerCharacterWidget.OnCharacterClass
	void OnCampfireChanged(bool bInCampfire); // Function DungeonCrawler.GamePlayerCharacterWidget.OnCampfireChanged
}; 
 
 


// Class DungeonCrawler.GamePlayerEquipSlotWidget
// Size: 0x368(Inherited: 0x300)
struct UGamePlayerEquipSlotWidget : UDCShowingKeyWidgetBase
{
	struct UEquipmentWeaponSlotSetWidget* WeaponSetL;  // 0x300 (0x300)
	struct UEquipmentWeaponSlotSetWidget* WeaponSetR;  // 0x308 (0x308)
	struct UEquipmentSlotWidget* UtilityL1;  // 0x310 (0x310)
	struct UEquipmentSlotWidget* UtilityL2;  // 0x318 (0x318)
	struct UEquipmentSlotWidget* UtilityL3;  // 0x320 (0x320)
	struct UEquipmentSlotWidget* UtilityR1;  // 0x328 (0x328)
	struct UEquipmentSlotWidget* UtilityR2;  // 0x330 (0x330)
	struct UEquipmentSlotWidget* UtilityR3;  // 0x338 (0x338)
	struct FDCAccountId AccountId;  // 0x340 (0x340)
	struct ADCPlayerCharacterBase* PlayerCharacter;  // 0x350 (0x350)
	struct TArray<struct UEquipmentSlotWidget*> EquipmentSlotWidgetArray;  // 0x358 (0x358)


	void OnQuickSlotDataChanged(uint8_t Type, int32_t Index); // Function DungeonCrawler.GamePlayerEquipSlotWidget.OnQuickSlotDataChanged
}; 
 
 


// Class DungeonCrawler.KnockBackImmuneGameplayTagData
// Size: 0x50(Inherited: 0x30)
struct UKnockBackImmuneGameplayTagData : UDataAsset
{
	struct FGameplayTagContainer TagContainer;  // 0x30 (0x30)


}; 
 
 


// Class DungeonCrawler.GameProgressBarWidget
// Size: 0x320(Inherited: 0x300)
struct UGameProgressBarWidget : UDCShowingKeyWidgetBase
{
	struct UTextBlock* ProgressText;  // 0x300 (0x300)
	struct UProgressBar* ProgressGauge;  // 0x308 (0x308)
	float Percent;  // 0x310 (0x310)
	char pad_788[12];  // 0x314 (0x314)


	void OnPercentUpdated(); // Function DungeonCrawler.GameProgressBarWidget.OnPercentUpdated
}; 
 
 


// Class DungeonCrawler.GameSkillSlotWidget
// Size: 0x350(Inherited: 0x300)
struct UGameSkillSlotWidget : UDCShowingKeyWidgetBase
{
	uint8_t SkillSlotIndex;  // 0x300 (0x300)
	char pad_769[3];  // 0x301 (0x301)
	struct FSkillCooldownData SkillCooldownData;  // 0x304 (0x304)
	struct FSkillData SkillData;  // 0x30C (0x30C)
	char pad_828[4];  // 0x33C (0x33C)
	struct UAccountLink* AccountLink;  // 0x340 (0x340)
	struct TWeakObjectPtr<APawn> LinkedPawn;  // 0x348 (0x348)


	void UpdateSkillCooldownUI(); // Function DungeonCrawler.GameSkillSlotWidget.UpdateSkillCooldownUI
	void OnUpdateSkillSlotVisible(bool IsVisibility); // Function DungeonCrawler.GameSkillSlotWidget.OnUpdateSkillSlotVisible
	void OnUpdateSkillSlot(struct FGameplayTag SkillTag, float Duration); // Function DungeonCrawler.GameSkillSlotWidget.OnUpdateSkillSlot
	void OnUpdateSkillDesc(struct FText& SkillName, struct FText& SkillDesc); // Function DungeonCrawler.GameSkillSlotWidget.OnUpdateSkillDesc
	void OnUpdateSkillData(struct FSkillData& InSkillData, struct FDesignDataSkill& InDesignDataSkill); // Function DungeonCrawler.GameSkillSlotWidget.OnUpdateSkillData
	void OnUpdateSkillArtData(struct UArtDataSkill* SkillArtData); // Function DungeonCrawler.GameSkillSlotWidget.OnUpdateSkillArtData
	void OnSkillFailedSystemMessage(); // Function DungeonCrawler.GameSkillSlotWidget.OnSkillFailedSystemMessage
	void OnSkillCooldownEnd(); // Function DungeonCrawler.GameSkillSlotWidget.OnSkillCooldownEnd
	void OnResetSkillDesc(); // Function DungeonCrawler.GameSkillSlotWidget.OnResetSkillDesc
	void OnResetSkillCooldownUI(); // Function DungeonCrawler.GameSkillSlotWidget.OnResetSkillCooldownUI
	void OnLinkedPawnDestroyed(struct AActor* InActor); // Function DungeonCrawler.GameSkillSlotWidget.OnLinkedPawnDestroyed
	float GetSkillSlotCooldownPercent(); // Function DungeonCrawler.GameSkillSlotWidget.GetSkillSlotCooldownPercent
	float GetSkillSlotCooldownDuration(); // Function DungeonCrawler.GameSkillSlotWidget.GetSkillSlotCooldownDuration
	float GetSkillChargedPercent(); // Function DungeonCrawler.GameSkillSlotWidget.GetSkillChargedPercent
}; 
 
 


// Class DungeonCrawler.GA_PlayMontageAndWaitForEvent
// Size: 0x560(Inherited: 0x558)
struct UGA_PlayMontageAndWaitForEvent : UDCGameplayAbilityBase
{
	struct UAnimMontage* MontageToPlay;  // 0x558 (0x558)


	void ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PlayMontageAndWaitForEvent.ReceivedEvent
	void OnCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PlayMontageAndWaitForEvent.OnCompleted
	void OnCancelled(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PlayMontageAndWaitForEvent.OnCancelled
	void EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PlayMontageAndWaitForEvent.EventReceived
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function DungeonCrawler.GA_PlayMontageAndWaitForEvent.AbilityActivated
}; 
 
 


// Class DungeonCrawler.GameSpellCurrentSlotWidget
// Size: 0x420(Inherited: 0x300)
struct UGameSpellCurrentSlotWidget : UDCWidgetBase
{
	struct FSpellData SpellData;  // 0x300 (0x300)
	char pad_828[4];  // 0x33C (0x33C)
	struct FDesignDataSpell DesignDataSpell;  // 0x340 (0x340)
	char pad_1032[16];  // 0x408 (0x408)
	struct ADCPlayerCharacterBase* PlayerCharacter;  // 0x418 (0x418)


	void SetSpellData(struct FSpellData& InSpellData, struct FDesignDataSpell& InDesignDataSpell); // Function DungeonCrawler.GameSpellCurrentSlotWidget.SetSpellData
	void OnSpellDataChanged(struct FSpellData& InSpellData, struct FDesignDataSpell& InDesignDataSpell); // Function DungeonCrawler.GameSpellCurrentSlotWidget.OnSpellDataChanged
	void OnSetSpellArtData(struct UArtDataSpell* InArtSpellData); // Function DungeonCrawler.GameSpellCurrentSlotWidget.OnSetSpellArtData
}; 
 
 


// Class DungeonCrawler.GameSpellSlotWidget
// Size: 0x428(Inherited: 0x428)
struct UGameSpellSlotWidget : USpellSlotWidgetBase
{


	void SelectionChange(bool bIsSelected); // Function DungeonCrawler.GameSpellSlotWidget.SelectionChange
	void OnSelectionChanged(bool bIsSelected); // Function DungeonCrawler.GameSpellSlotWidget.OnSelectionChanged
	float GetSpellChargedPercent(); // Function DungeonCrawler.GameSpellSlotWidget.GetSpellChargedPercent
}; 
 
 


// Class DungeonCrawler.GameTavernStartTimerWidget
// Size: 0x328(Inherited: 0x320)
struct UGameTavernStartTimerWidget : UTimerWidgetBase
{
	int32_t NumCurrentPlayers;  // 0x320 (0x320)
	int32_t NumMaxPlayers;  // 0x324 (0x324)


	void OnUpdated(); // Function DungeonCrawler.GameTavernStartTimerWidget.OnUpdated
	void OnPlayerLimit(int32_t NewValue, int32_t OldValue); // Function DungeonCrawler.GameTavernStartTimerWidget.OnPlayerLimit
	void OnPlayerCount(int32_t NewValue, int32_t OldValue); // Function DungeonCrawler.GameTavernStartTimerWidget.OnPlayerCount
}; 
 
 


// Class DungeonCrawler.GameTestComponent
// Size: 0x118(Inherited: 0xA0)
struct UGameTestComponent : UActorComponent
{
	char pad_160[120];  // 0xA0 (0xA0)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.GameTestComponent.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.GameTestComponent.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.GameTestComponent.TerminateBase
	void MsgGameTestChangePlayerCharacterClassResponse(struct FMsgGameTestChangePlayerCharacterClassResponse InMsg); // Function DungeonCrawler.GameTestComponent.MsgGameTestChangePlayerCharacterClassResponse
	void MsgGameTestChangePlayerCharacterClassRequest(struct FMsgGameTestChangePlayerCharacterClassRequest InMsg); // Function DungeonCrawler.GameTestComponent.MsgGameTestChangePlayerCharacterClassRequest
	void ClientMsgClassSpellSlotMoveResponse(struct FMsgGameTestClassSpellSlotMoveResponse InMsg); // Function DungeonCrawler.GameTestComponent.ClientMsgClassSpellSlotMoveResponse
	void ClientMsgClassSpellSlotMoveRequest(struct FMsgGameTestClassSpellSlotMoveRequest InMsg); // Function DungeonCrawler.GameTestComponent.ClientMsgClassSpellSlotMoveRequest
	void ClientMsgClassSpellSequenceChangeResponse(struct FMsgGameTestClassSpellSequenceChangeResponse InMsg); // Function DungeonCrawler.GameTestComponent.ClientMsgClassSpellSequenceChangeResponse
	void ClientMsgClassSpellSequenceChangeRequest(struct FMsgGameTestClassSpellSequenceChangeRequest InMsg); // Function DungeonCrawler.GameTestComponent.ClientMsgClassSpellSequenceChangeRequest
	void ClientMsgClassSpellListResponse(struct FMsgGameTestClassSpellListResponse InMsg); // Function DungeonCrawler.GameTestComponent.ClientMsgClassSpellListResponse
	void ClientMsgClassSpellListRequest(struct FMsgGameTestClassSpellListRequest InMsg); // Function DungeonCrawler.GameTestComponent.ClientMsgClassSpellListRequest
	void ClientMsgClassSkillListResponse(struct FMsgGameTestClassSkillListResponse InMsg); // Function DungeonCrawler.GameTestComponent.ClientMsgClassSkillListResponse
	void ClientMsgClassSkillListRequest(struct FMsgGameTestClassSkillListRequest InMsg); // Function DungeonCrawler.GameTestComponent.ClientMsgClassSkillListRequest
	void ClientMsgClassPerkListResponse(struct FMsgGameTestClassPerkListResponse InMsg); // Function DungeonCrawler.GameTestComponent.ClientMsgClassPerkListResponse
	void ClientMsgClassPerkListRequest(struct FMsgGameTestClassPerkListRequest InMsg); // Function DungeonCrawler.GameTestComponent.ClientMsgClassPerkListRequest
	void ClientMsgClassMusicSlotMoveResponse(struct FMsgGameTestClassMusicSlotMoveResponse InMsg); // Function DungeonCrawler.GameTestComponent.ClientMsgClassMusicSlotMoveResponse
	void ClientMsgClassMusicSlotMoveRequest(struct FMsgGameTestClassMusicSlotMoveRequest InMsg); // Function DungeonCrawler.GameTestComponent.ClientMsgClassMusicSlotMoveRequest
	void ClientMsgClassMusicListResponse(struct FMsgGameTestClassMusicListResponse InMsg); // Function DungeonCrawler.GameTestComponent.ClientMsgClassMusicListResponse
	void ClientMsgClassMusicListRequest(struct FMsgGameTestClassMusicListRequest InMsg); // Function DungeonCrawler.GameTestComponent.ClientMsgClassMusicListRequest
	void ClientMsgClassLevelInfoResponse(struct FMsgGameTestClassLevelInfoResponse InMsg); // Function DungeonCrawler.GameTestComponent.ClientMsgClassLevelInfoResponse
	void ClientMsgClassLevelInfoRequest(struct FMsgGameTestClassLevelInfoRequest InMsg); // Function DungeonCrawler.GameTestComponent.ClientMsgClassLevelInfoRequest
	void ClientMsgClassItemMoveResponse(struct FMsgGameTestClassItemMoveResponse InMsg); // Function DungeonCrawler.GameTestComponent.ClientMsgClassItemMoveResponse
	void ClientMsgClassItemMoveRequest(struct FMsgGameTestClassItemMoveRequest InMsg); // Function DungeonCrawler.GameTestComponent.ClientMsgClassItemMoveRequest
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.GameTestComponent.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.GameVoipComponent
// Size: 0x278(Inherited: 0x200)
struct UGameVoipComponent : UDCVoipComponent
{
	char pad_512[40];  // 0x200 (0x200)
	struct TMap<struct FDCAccountId, struct FBindAccountUserData> BindAccountUserDataMap;  // 0x228 (0x228)


}; 
 
 


// Class DungeonCrawler.GameVoipInterface
// Size: 0x28(Inherited: 0x28)
struct UGameVoipInterface : UInterface
{


}; 
 
 


// Class DungeonCrawler.GA_AuraBase
// Size: 0x5C0(Inherited: 0x558)
struct UGA_AuraBase : UDCGameplayAbilityBase
{
	AActor* TargetActorClass;  // 0x558 (0x558)
	char pad_1376_1 : 7;  // 0x560 (0x560)
	bool bUsePremadeSpec : 1;  // 0x560 (0x560)
	char pad_1377[3];  // 0x561 (0x561)
	struct FGameplayCueTag GameplayCueTag;  // 0x564 (0x564)
	char pad_1388[84];  // 0x56C (0x56C)


	void OnAuraOverlapEnd(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function DungeonCrawler.GA_AuraBase.OnAuraOverlapEnd
	void OnAuraOverlapBeginEvent(struct AActor* TargetActor); // Function DungeonCrawler.GA_AuraBase.OnAuraOverlapBeginEvent
	void OnAuraOverlapBegin(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function DungeonCrawler.GA_AuraBase.OnAuraOverlapBegin
	void OnAntiAuraOverlapEnd(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function DungeonCrawler.GA_AuraBase.OnAntiAuraOverlapEnd
	void OnAntiAuraOverlapBegin(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function DungeonCrawler.GA_AuraBase.OnAntiAuraOverlapBegin
	void AbilityEnded(); // Function DungeonCrawler.GA_AuraBase.AbilityEnded
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function DungeonCrawler.GA_AuraBase.AbilityActivated
}; 
 
 


// Class DungeonCrawler.IMUtilBlueprintLibrary
// Size: 0x28(Inherited: 0x28)
struct UIMUtilBlueprintLibrary : UBlueprintFunctionLibrary
{


	struct FText MakeTextwithParam5(struct FText Text, struct FText Param1, struct FText Param2, struct FText Param3, struct FText Param4, struct FText Param5); // Function DungeonCrawler.IMUtilBlueprintLibrary.MakeTextwithParam5
	struct FText MakeTextwithParam4(struct FText Text, struct FText Param1, struct FText Param2, struct FText Param3, struct FText Param4); // Function DungeonCrawler.IMUtilBlueprintLibrary.MakeTextwithParam4
	struct FText MakeTextwithParam3(struct FText Text, struct FText Param1, struct FText Param2, struct FText Param3); // Function DungeonCrawler.IMUtilBlueprintLibrary.MakeTextwithParam3
	struct FText MakeTextwithParam2(struct FText Text, struct FText Param1, struct FText Param2); // Function DungeonCrawler.IMUtilBlueprintLibrary.MakeTextwithParam2
	struct FText MakeTextwithParam1(struct FText Text, struct FText Param1); // Function DungeonCrawler.IMUtilBlueprintLibrary.MakeTextwithParam1
	bool IsServer(struct UObject* WorldContextObject); // Function DungeonCrawler.IMUtilBlueprintLibrary.IsServer
	float GetServerWorldTimeSeconds(struct UObject* WorldContextObject); // Function DungeonCrawler.IMUtilBlueprintLibrary.GetServerWorldTimeSeconds
	void GetProjectVersion(struct FString& OutVersion); // Function DungeonCrawler.IMUtilBlueprintLibrary.GetProjectVersion
}; 
 
 


// Class DungeonCrawler.GA_ChargedRangedAttackBase
// Size: 0x5C8(Inherited: 0x5C0)
struct UGA_ChargedRangedAttackBase : UGA_RangedAttackBase
{
	char pad_1472[8];  // 0x5C0 (0x5C0)


	void SendPlayShootCrossHairNotify(); // Function DungeonCrawler.GA_ChargedRangedAttackBase.SendPlayShootCrossHairNotify
	void InputActionStarted(); // Function DungeonCrawler.GA_ChargedRangedAttackBase.InputActionStarted
	void InputActionCompleted(); // Function DungeonCrawler.GA_ChargedRangedAttackBase.InputActionCompleted
}; 
 
 


// Class DungeonCrawler.GA_BowQuickShotBase
// Size: 0x5C8(Inherited: 0x5C0)
struct UGA_BowQuickShotBase : UGA_RangedAttackBase
{
	int32_t AmmoWholeUsage;  // 0x5C0 (0x5C0)
	char pad_1476[4];  // 0x5C4 (0x5C4)


	void InputActionStarted(); // Function DungeonCrawler.GA_BowQuickShotBase.InputActionStarted
	void InputActionCompleted(); // Function DungeonCrawler.GA_BowQuickShotBase.InputActionCompleted
}; 
 
 


// Class DungeonCrawler.GA_ChangeIdle
// Size: 0x560(Inherited: 0x558)
struct UGA_ChangeIdle : UDCGameplayAbilityBase
{
	struct UAnimMontage* MontageToPlay;  // 0x558 (0x558)


	void OnCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_ChangeIdle.OnCompleted
	void OnBlendOut(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_ChangeIdle.OnBlendOut
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function DungeonCrawler.GA_ChangeIdle.AbilityActivated
}; 
 
 


// Class DungeonCrawler.GA_Drop
// Size: 0x598(Inherited: 0x558)
struct UGA_Drop : UDCGameplayAbilityBase
{
	struct UItem* DropItem;  // 0x558 (0x558)
	int32_t DropSlotId;  // 0x560 (0x560)
	char pad_1380_1 : 7;  // 0x564 (0x564)
	bool bFailedDropItem : 1;  // 0x564 (0x564)
	char pad_1381[3];  // 0x565 (0x565)
	struct FLocomotionAnimSet DropResultAnimSet;  // 0x568 (0x568)
	char pad_1408_1 : 7;  // 0x580 (0x580)
	bool bWasCurrentActiveSlot : 1;  // 0x580 (0x580)
	char pad_1409_1 : 7;  // 0x581 (0x581)
	bool bBeingEmptySlot : 1;  // 0x581 (0x581)
	char pad_1410[6];  // 0x582 (0x582)
	struct UObject* QueryTarget;  // 0x588 (0x588)
	char pad_1424[8];  // 0x590 (0x590)


	void OnEndSync(); // Function DungeonCrawler.GA_Drop.OnEndSync
}; 
 
 


// Class DungeonCrawler.GA_EmoteBase
// Size: 0x560(Inherited: 0x560)
struct UGA_EmoteBase : UGA_PlayMontageAndWaitForEvent
{


}; 
 
 


// Class DungeonCrawler.GA_Equip
// Size: 0x588(Inherited: 0x558)
struct UGA_Equip : UDCGameplayAbilityBase
{
	uint8_t NextQuickSlotType;  // 0x558 (0x558)
	char pad_1369_1 : 7;  // 0x559 (0x559)
	bool bTryingEquip : 1;  // 0x559 (0x559)
	char pad_1370[6];  // 0x55A (0x55A)
	struct TArray<struct UItem*> TargetItems;  // 0x560 (0x560)
	struct ADCPlayerCharacterBase* Character;  // 0x570 (0x570)
	struct UEquipmentInventoryComponent* EquipmentComponent;  // 0x578 (0x578)
	struct FGameplayTag GameplayTagToAdd;  // 0x580 (0x580)


	void OnMontageFinished(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_Equip.OnMontageFinished
	void OnMontageEventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_Equip.OnMontageEventReceived
}; 
 
 


// Class DungeonCrawler.GA_Interact
// Size: 0x6A0(Inherited: 0x558)
struct UGA_Interact : UDCGameplayAbilityBase
{
	struct UAnimMontage* MontageToPlayBothHandEquipped;  // 0x558 (0x558)
	struct UAnimMontage* MontageToPlayPrimaryEquipped;  // 0x560 (0x560)
	struct UAnimMontage* MontageToPlaySecondaryEquipped;  // 0x568 (0x568)
	struct UAnimMontage* MontageToPlayPrimaryEquippedInstant;  // 0x570 (0x570)
	struct UAnimMontage* MontageToPlaySecondaryEquippedInstant;  // 0x578 (0x578)
	struct FGameplayTagContainer TwoHandRightHandedItems;  // 0x580 (0x580)
	struct UDCAT_WaitDelayPausable* WaitDelayPausableTask;  // 0x5A0 (0x5A0)
	struct FRandomStream Stream;  // 0x5A8 (0x5A8)
	struct FInteractionData CurrentData;  // 0x5B0 (0x5B0)
	struct FDesignDataPropsSkillCheck CurrentSkillCheckData;  // 0x640 (0x640)
	struct FGameplayTag CurrentInteractTag;  // 0x670 (0x670)
	struct FGameplayTag CurrentStateTag;  // 0x678 (0x678)
	struct AActor* InteractTargetActor;  // 0x680 (0x680)
	char pad_1672[24];  // 0x688 (0x688)


	void OnVelocityChange(); // Function DungeonCrawler.GA_Interact.OnVelocityChange
	void OnStartSync(); // Function DungeonCrawler.GA_Interact.OnStartSync
	void OnStartDelayFinished(); // Function DungeonCrawler.GA_Interact.OnStartDelayFinished
	void OnSkillCheckSucceed(); // Function DungeonCrawler.GA_Interact.OnSkillCheckSucceed
	void OnSkillCheckPerfectSucceed(); // Function DungeonCrawler.GA_Interact.OnSkillCheckPerfectSucceed
	void OnSkillCheckFinished(uint8_t Result); // Function DungeonCrawler.GA_Interact.OnSkillCheckFinished
	void OnSkillCheckFailed(); // Function DungeonCrawler.GA_Interact.OnSkillCheckFailed
	void OnSkillCheck(); // Function DungeonCrawler.GA_Interact.OnSkillCheck
	void OnFinish(); // Function DungeonCrawler.GA_Interact.OnFinish
	void OnEndSync(); // Function DungeonCrawler.GA_Interact.OnEndSync
	void OnDetectUnableInteraction(); // Function DungeonCrawler.GA_Interact.OnDetectUnableInteraction
	void OnCancelled(); // Function DungeonCrawler.GA_Interact.OnCancelled
	void OnAimDirectionChange(); // Function DungeonCrawler.GA_Interact.OnAimDirectionChange
	bool IsValidData(struct FGameplayEventData& EventData); // Function DungeonCrawler.GA_Interact.IsValidData
	void EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_Interact.EventReceived
}; 
 
 


// Class DungeonCrawler.GA_StoppablePassiveBase
// Size: 0x580(Inherited: 0x558)
struct UGA_StoppablePassiveBase : UDCGameplayAbilityBase
{
	struct FGameplayTagContainer PassiveStopStateTagContainer;  // 0x558 (0x558)
	char pad_1400[8];  // 0x578 (0x578)


	void OnPassiveStop(); // Function DungeonCrawler.GA_StoppablePassiveBase.OnPassiveStop
	void OnPassiveStart(); // Function DungeonCrawler.GA_StoppablePassiveBase.OnPassiveStart
	void OnAnyStopStateTagAdded(); // Function DungeonCrawler.GA_StoppablePassiveBase.OnAnyStopStateTagAdded
	void OnAllStopStateTagsRemoved(); // Function DungeonCrawler.GA_StoppablePassiveBase.OnAllStopStateTagsRemoved
}; 
 
 


// Class DungeonCrawler.GA_HuntingTrapDisarmPassiveBase
// Size: 0x5E0(Inherited: 0x580)
struct UGA_HuntingTrapDisarmPassiveBase : UGA_StoppablePassiveBase
{
	char pad_1408[8];  // 0x580 (0x580)
	struct TMap<struct FGameplayTag, struct FInteractionData> CurrentInteractableDatas;  // 0x588 (0x588)
	char pad_1496[8];  // 0x5D8 (0x5D8)


	void SetDisarmTarget(struct APropsActorBase* TargetHuntingTrap); // Function DungeonCrawler.GA_HuntingTrapDisarmPassiveBase.SetDisarmTarget
	void ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_HuntingTrapDisarmPassiveBase.ReceivedEvent
	void OnTargetGameplayTagChange(struct FGameplayTag InGameplayTag, int32_t InCount); // Function DungeonCrawler.GA_HuntingTrapDisarmPassiveBase.OnTargetGameplayTagChange
	void ClearDisarmTarget(); // Function DungeonCrawler.GA_HuntingTrapDisarmPassiveBase.ClearDisarmTarget
}; 
 
 


// Class DungeonCrawler.GA_InteractPassive
// Size: 0x610(Inherited: 0x580)
struct UGA_InteractPassive : UGA_StoppablePassiveBase
{
	char pad_1408[8];  // 0x580 (0x580)
	struct ADCGATA_LineTraceInteractable* TargetActor;  // 0x588 (0x588)
	struct UDCAT_WaitInteractableTarget* WaitInteractableTargetTask;  // 0x590 (0x590)
	struct FGameplayAbilityTargetDataHandle CurrentTargetData;  // 0x598 (0x598)
	struct TMap<struct FGameplayTag, struct FInteractionData> CurrentInteractableDatas;  // 0x5C0 (0x5C0)


	void RefreshInteractionData(); // Function DungeonCrawler.GA_InteractPassive.RefreshInteractionData
	void ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_InteractPassive.ReceivedEvent
	void OnTargetGameplayTagChange(struct FGameplayTag InGameplayTag, int32_t InCount); // Function DungeonCrawler.GA_InteractPassive.OnTargetGameplayTagChange
	void OnLostInteractableTarget(struct FGameplayAbilityTargetDataHandle& Data); // Function DungeonCrawler.GA_InteractPassive.OnLostInteractableTarget
	void OnFoundNewInteractableTarget(struct FGameplayAbilityTargetDataHandle& Data); // Function DungeonCrawler.GA_InteractPassive.OnFoundNewInteractableTarget
}; 
 
 


// Class DungeonCrawler.GA_ItemConsumeBase
// Size: 0x650(Inherited: 0x558)
struct UGA_ItemConsumeBase : UDCGameplayAbilityBase
{
	struct UAnimMontage* PreConsumeMontage;  // 0x558 (0x558)
	struct UAnimMontage* ConsumeMontage;  // 0x560 (0x560)
	struct UAnimMontage* PreConsumeMontageOnSourceObject;  // 0x568 (0x568)
	struct UAnimMontage* ConsumeMontageOnSourceObject;  // 0x570 (0x570)
	struct TArray<struct FItemConsumeRandomEffectData> RandomEffectDataArray;  // 0x578 (0x578)
	struct FItemData ItemData;  // 0x588 (0x588)
	struct FDesignDataItemConsume ItemConsumeData;  // 0x628 (0x628)
	char pad_1608[8];  // 0x648 (0x648)


	void OnStartSync(); // Function DungeonCrawler.GA_ItemConsumeBase.OnStartSync
	void OnFinish(); // Function DungeonCrawler.GA_ItemConsumeBase.OnFinish
	void OnEndSync(); // Function DungeonCrawler.GA_ItemConsumeBase.OnEndSync
	void OnConsumeStartEventReceived(float ConsumeDuration); // Function DungeonCrawler.GA_ItemConsumeBase.OnConsumeStartEventReceived
	void OnConsumeMontageCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_ItemConsumeBase.OnConsumeMontageCompleted
	void OnConsumeEndEventReceived(); // Function DungeonCrawler.GA_ItemConsumeBase.OnConsumeEndEventReceived
	void EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_ItemConsumeBase.EventReceived
	void ConsumeEventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_ItemConsumeBase.ConsumeEventReceived
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function DungeonCrawler.GA_ItemConsumeBase.AbilityActivated
}; 
 
 


// Class DungeonCrawler.GA_LobbyEmoteBase
// Size: 0x588(Inherited: 0x558)
struct UGA_LobbyEmoteBase : UDCGameplayAbilityBase
{
	struct UAnimMontage* CenterMontage;  // 0x558 (0x558)
	struct UAnimMontage* LeftMontage;  // 0x560 (0x560)
	struct UAnimMontage* RightMontage;  // 0x568 (0x568)
	struct FName TransitionSectionName;  // 0x570 (0x570)
	struct FGameplayTag GameplayCueTag;  // 0x578 (0x578)
	char pad_1408[8];  // 0x580 (0x580)


	void ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_LobbyEmoteBase.ReceivedEvent
	void OnCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_LobbyEmoteBase.OnCompleted
	void OnCancelled(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_LobbyEmoteBase.OnCancelled
	void EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_LobbyEmoteBase.EventReceived
}; 
 
 


// Class DungeonCrawler.GA_MonsterMeleeAttackBase
// Size: 0x628(Inherited: 0x618)
struct UGA_MonsterMeleeAttackBase : UGA_MeleeAttackBase
{
	struct FGameplayTag CancleGameplayTag;  // 0x618 (0x618)
	struct FName TransitionSectionName;  // 0x620 (0x620)


}; 
 
 


// Class DungeonCrawler.GA_MusicChannelingBase
// Size: 0x720(Inherited: 0x6D0)
struct UGA_MusicChannelingBase : UGA_MusicBase
{
	struct TMap<struct TWeakObjectPtr<AActor>, struct FMusicChannelingTargetData> MusicChannelingTargetDataMap;  // 0x6D0 (0x6D0)


	void OnTargetActorEndOverlap(struct AActor* Target); // Function DungeonCrawler.GA_MusicChannelingBase.OnTargetActorEndOverlap
	void OnTargetActorBeginOverlap(struct AActor* Target); // Function DungeonCrawler.GA_MusicChannelingBase.OnTargetActorBeginOverlap
	void EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_MusicChannelingBase.EventReceived
	void ApplyToOverlappedTargets(); // Function DungeonCrawler.GA_MusicChannelingBase.ApplyToOverlappedTargets
}; 
 
 


// Class DungeonCrawler.ItemComponentBase
// Size: 0x100(Inherited: 0xA0)
struct UItemComponentBase : UActorComponent
{
	char pad_160[96];  // 0xA0 (0xA0)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.ItemComponentBase.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.ItemComponentBase.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.ItemComponentBase.TerminateBase
	void SendGamePlayEventToItemActor(struct AActor* NewOwner, struct FItemData MoveItemNewData); // Function DungeonCrawler.ItemComponentBase.SendGamePlayEventToItemActor
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.ItemComponentBase.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.GA_PlayerCharMeleeAttackBase
// Size: 0x668(Inherited: 0x618)
struct UGA_PlayerCharMeleeAttackBase : UGA_MeleeAttackBase
{
	char pad_1560[4];  // 0x618 (0x618)
	float ComboInputQueueTime;  // 0x61C (0x61C)
	struct FTimerHandle ComboIACompletedHandle;  // 0x620 (0x620)
	struct FTimerHandle OtherHandIACompletedHandle;  // 0x628 (0x628)
	struct FTimerHandle AddLooseTagNextTickTimerHandle;  // 0x630 (0x630)
	struct FGameplayTag ComboTriggerTag;  // 0x638 (0x638)
	struct FGameplayTag OtherHandTriggerEventTag;  // 0x640 (0x640)
	struct FGameplayTag OtherHandEnablingEventTag;  // 0x648 (0x648)
	struct ADCPlayerCharacterBase* PlayerCharacter;  // 0x650 (0x650)
	struct AItemActor* WeaponItemActor;  // 0x658 (0x658)
	struct UDCItemDataAsset* WeaponItemDataAsset;  // 0x660 (0x660)


	void OtherHandIAStarted(); // Function DungeonCrawler.GA_PlayerCharMeleeAttackBase.OtherHandIAStarted
	void OtherHandIACompleted(); // Function DungeonCrawler.GA_PlayerCharMeleeAttackBase.OtherHandIACompleted
	void OnReceiveTargetDataStart(); // Function DungeonCrawler.GA_PlayerCharMeleeAttackBase.OnReceiveTargetDataStart
	void OnReceiveTargetDataEnd(); // Function DungeonCrawler.GA_PlayerCharMeleeAttackBase.OnReceiveTargetDataEnd
	void ComboIAStarted(); // Function DungeonCrawler.GA_PlayerCharMeleeAttackBase.ComboIAStarted
	void ComboIACompleted(); // Function DungeonCrawler.GA_PlayerCharMeleeAttackBase.ComboIACompleted
}; 
 
 


// Class DungeonCrawler.MailBoxWidgetBase
// Size: 0x308(Inherited: 0x300)
struct UMailBoxWidgetBase : UDCWidgetBase
{
	struct UListView* ListView;  // 0x300 (0x300)


	void OnSetPartyPrivacy(bool bOn); // Function DungeonCrawler.MailBoxWidgetBase.OnSetPartyPrivacy
	void OnFMsgWidgetStreamingModeNotifyBlueprint(struct FMsgWidgetStreamingModeNotify& InMsg); // Function DungeonCrawler.MailBoxWidgetBase.OnFMsgWidgetStreamingModeNotifyBlueprint
	bool IsPartyPrivacyOn(); // Function DungeonCrawler.MailBoxWidgetBase.IsPartyPrivacyOn
}; 
 
 


// Class DungeonCrawler.GA_PlayerMagicWandUseBase
// Size: 0x780(Inherited: 0x558)
struct UGA_PlayerMagicWandUseBase : UDCGameplayAbilityBase
{
	struct UAnimMontage* MontageToPlayOnCasting;  // 0x558 (0x558)
	struct UAnimMontage* MontageToPlayOnChanneling;  // 0x560 (0x560)
	struct UAnimMontage* MontageToPlayOnInstant;  // 0x568 (0x568)
	struct UAnimMontage* MontageToPlayOnCastingSourceObject;  // 0x570 (0x570)
	struct UAnimMontage* MontageToPlayOnChannelingSourceObject;  // 0x578 (0x578)
	struct UAnimMontage* MontageToPlayOnInstantSourceObject;  // 0x580 (0x580)
	float StuckPlayRate;  // 0x588 (0x588)
	float StuckPlayRateDuration;  // 0x58C (0x58C)
	float StuckBlendOutTime;  // 0x590 (0x590)
	struct FName FireSocketName;  // 0x594 (0x594)
	char pad_1436[4];  // 0x59C (0x59C)
	struct ADCGATA_LineCollision* TargetActor;  // 0x5A0 (0x5A0)
	struct UAbilityTask_Repeat* ChannelingTask;  // 0x5A8 (0x5A8)
	char pad_1456[464];  // 0x5B0 (0x5B0)


	void ServerReceivedTargetData(struct FGameplayTag InEffectTag, struct FGameplayTag InChannelTag, struct FGameplayAbilityTargetDataHandle& InData); // Function DungeonCrawler.GA_PlayerMagicWandUseBase.ServerReceivedTargetData
	void ReceivedTargetData(struct FGameplayAbilityTargetDataHandle& InData); // Function DungeonCrawler.GA_PlayerMagicWandUseBase.ReceivedTargetData
	void ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PlayerMagicWandUseBase.ReceivedEvent
	void OnVelocityChange(); // Function DungeonCrawler.GA_PlayerMagicWandUseBase.OnVelocityChange
	void OnStuckFinish(); // Function DungeonCrawler.GA_PlayerMagicWandUseBase.OnStuckFinish
	void OnStuck(); // Function DungeonCrawler.GA_PlayerMagicWandUseBase.OnStuck
	void OnRelease(); // Function DungeonCrawler.GA_PlayerMagicWandUseBase.OnRelease
	void OnInterruptFinish(); // Function DungeonCrawler.GA_PlayerMagicWandUseBase.OnInterruptFinish
	void OnInterrupted(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PlayerMagicWandUseBase.OnInterrupted
	void OnFire(); // Function DungeonCrawler.GA_PlayerMagicWandUseBase.OnFire
	void OnCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PlayerMagicWandUseBase.OnCompleted
	void OnChannelingAction(int32_t ActionCounter); // Function DungeonCrawler.GA_PlayerMagicWandUseBase.OnChannelingAction
	void OnCancelled(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PlayerMagicWandUseBase.OnCancelled
	void OnBlendOut(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PlayerMagicWandUseBase.OnBlendOut
	void EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PlayerMagicWandUseBase.EventReceived
	void ClientReceivedTargetData(struct FGameplayTag InEffectTag, struct FGameplayTag InChannelTag, struct FGameplayAbilityTargetDataHandle& InData); // Function DungeonCrawler.GA_PlayerMagicWandUseBase.ClientReceivedTargetData
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function DungeonCrawler.GA_PlayerMagicWandUseBase.AbilityActivated
}; 
 
 


// Class DungeonCrawler.GA_PlayerSkillBase
// Size: 0x670(Inherited: 0x558)
struct UGA_PlayerSkillBase : UDCGameplayAbilityBase
{
	char pad_1368_1 : 7;  // 0x558 (0x558)
	bool bShouldHideEquipmentUntilAbilityEnds : 1;  // 0x558 (0x558)
	char pad_1369_1 : 7;  // 0x559 (0x559)
	bool bShouldHideEquipmentUntilAnimationEnds : 1;  // 0x559 (0x559)
	char pad_1370[6];  // 0x55A (0x55A)
	struct FGameplayTagContainer IgnoreTypes;  // 0x560 (0x560)
	struct AActor* CurrentSkillActor;  // 0x580 (0x580)
	struct UAsyncTaskEffectStackChanged* EffectStackAsyncTask;  // 0x588 (0x588)
	char pad_1424[216];  // 0x590 (0x590)
	float SkillMessageDuration;  // 0x668 (0x668)
	char pad_1644[4];  // 0x66C (0x66C)


	void SetEquippedItemsHidden(bool bShouldHide); // Function DungeonCrawler.GA_PlayerSkillBase.SetEquippedItemsHidden
	void ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag); // Function DungeonCrawler.GA_PlayerSkillBase.ServerOnSkillActivate
	void ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PlayerSkillBase.ReceivedEvent
	void OnSkillActivateNotify(struct FGameplayEventData& EventData); // Function DungeonCrawler.GA_PlayerSkillBase.OnSkillActivateNotify
	void OnInterrupted(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PlayerSkillBase.OnInterrupted
	void OnCooldownTagApplied(struct FGameplayTag EffectGameplayTag, struct FActiveGameplayEffectHandle EffectHandle, int32_t NewStackCount, int32_t PreviousStackCount); // Function DungeonCrawler.GA_PlayerSkillBase.OnCooldownTagApplied
	void OnCooldownStarted(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag, float CooldownDuration); // Function DungeonCrawler.GA_PlayerSkillBase.OnCooldownStarted
	void OnCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PlayerSkillBase.OnCompleted
	void OnCancelled(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PlayerSkillBase.OnCancelled
	void OnBlendOut(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PlayerSkillBase.OnBlendOut
	struct FDesignDataSkill GetCurrentDesignDataSkill(); // Function DungeonCrawler.GA_PlayerSkillBase.GetCurrentDesignDataSkill
	void EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PlayerSkillBase.EventReceived
	void ClientOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag); // Function DungeonCrawler.GA_PlayerSkillBase.ClientOnSkillActivate
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function DungeonCrawler.GA_PlayerSkillBase.AbilityActivated
}; 
 
 


// Class DungeonCrawler.GA_PlayerSkillChannelingBase
// Size: 0x770(Inherited: 0x670)
struct UGA_PlayerSkillChannelingBase : UGA_PlayerSkillBase
{
	struct FGameplayTag SkillBuffTag;  // 0x670 (0x670)
	struct UAnimMontage* MontageToPlay;  // 0x678 (0x678)
	char pad_1664_1 : 7;  // 0x680 (0x680)
	bool bCanMoveWhileChanneling : 1;  // 0x680 (0x680)
	char pad_1665[239];  // 0x681 (0x681)


	void ServerOnChannelingAction_BP(struct FGameplayEventData EventData, struct FGameplayCueParameters CueParams); // Function DungeonCrawler.GA_PlayerSkillChannelingBase.ServerOnChannelingAction_BP
	void ServerOnChannelingAction(int32_t ActionCount); // Function DungeonCrawler.GA_PlayerSkillChannelingBase.ServerOnChannelingAction
	void OnVelocityChange(); // Function DungeonCrawler.GA_PlayerSkillChannelingBase.OnVelocityChange
	void OnChannelingStartSync(); // Function DungeonCrawler.GA_PlayerSkillChannelingBase.OnChannelingStartSync
	void OnChannelingFinishSync(); // Function DungeonCrawler.GA_PlayerSkillChannelingBase.OnChannelingFinishSync
	void OnChannelingFinish(); // Function DungeonCrawler.GA_PlayerSkillChannelingBase.OnChannelingFinish
}; 
 
 


// Class DungeonCrawler.InvitePartyUserSlotWidgetData
// Size: 0x1C8(Inherited: 0x28)
struct UInvitePartyUserSlotWidgetData : UObject
{
	struct FInvitePartyUserSlot InvitePartyUserSlot;  // 0x28 (0x28)
	struct FPrimaryAssetId CharacterClassId;  // 0x98 (0x98)
	struct FDesignDataPlayerCharacter DesignDataPlayerCharacter;  // 0xA8 (0xA8)
	struct UInvitePartyWidget* InvitePartyWidget;  // 0x1C0 (0x1C0)


}; 
 
 


// Class DungeonCrawler.GA_PlayerSkillInstantBase
// Size: 0x678(Inherited: 0x670)
struct UGA_PlayerSkillInstantBase : UGA_PlayerSkillBase
{
	struct UAnimMontage* MontageToPlay;  // 0x670 (0x670)


}; 
 
 


// Class DungeonCrawler.GA_PlayerSkillInstantAndWaitForEndBase
// Size: 0x680(Inherited: 0x678)
struct UGA_PlayerSkillInstantAndWaitForEndBase : UGA_PlayerSkillInstantBase
{
	struct FGameplayTag SkillBuffTag;  // 0x678 (0x678)


	void ServerBuffRemoved(); // Function DungeonCrawler.GA_PlayerSkillInstantAndWaitForEndBase.ServerBuffRemoved
	void OnSkillBuffTagRemoved(int32_t NewCount); // Function DungeonCrawler.GA_PlayerSkillInstantAndWaitForEndBase.OnSkillBuffTagRemoved
	void ConsumeBuff(); // Function DungeonCrawler.GA_PlayerSkillInstantAndWaitForEndBase.ConsumeBuff
}; 
 
 


// Class DungeonCrawler.GA_PlayerSkillRouterBase
// Size: 0x680(Inherited: 0x670)
struct UGA_PlayerSkillRouterBase : UGA_PlayerSkillBase
{
	struct FGameplayTag RouteTriggerTag;  // 0x670 (0x670)
	struct FGameplayTag CheckItemWeaponTypeTag;  // 0x678 (0x678)


	void OnRoutedAbilityEnded(struct FAbilityEndedData& AbilityEndedData); // Function DungeonCrawler.GA_PlayerSkillRouterBase.OnRoutedAbilityEnded
}; 
 
 


// Class DungeonCrawler.GA_PlayerSpellCastBase
// Size: 0x770(Inherited: 0x558)
struct UGA_PlayerSpellCastBase : UDCGameplayAbilityBase
{
	struct UAnimMontage* MontageToPlayOnCasting;  // 0x558 (0x558)
	struct UAnimMontage* MontageToPlayOnChanneling;  // 0x560 (0x560)
	struct UAnimMontage* MontageToPlayOnInstant;  // 0x568 (0x568)
	struct UAnimMontage* MontageToPlayOnCastingSourceObject;  // 0x570 (0x570)
	struct UAnimMontage* MontageToPlayOnChannelingSourceObject;  // 0x578 (0x578)
	struct UAnimMontage* MontageToPlayOnInstantSourceObject;  // 0x580 (0x580)
	float StuckPlayRate;  // 0x588 (0x588)
	float StuckPlayRateDuration;  // 0x58C (0x58C)
	float StuckBlendOutTime;  // 0x590 (0x590)
	struct FName FireSocketName;  // 0x594 (0x594)
	char pad_1436[4];  // 0x59C (0x59C)
	struct ADCGATA_LineCollision* TargetActor;  // 0x5A0 (0x5A0)
	struct UAbilityTask_Repeat* ChannelingTask;  // 0x5A8 (0x5A8)
	char pad_1456[448];  // 0x5B0 (0x5B0)


	void SpellFireEvent(); // Function DungeonCrawler.GA_PlayerSpellCastBase.SpellFireEvent
	void ServerReceivedTargetData(struct FGameplayTag InEffectTag, struct FGameplayTag InChannelTag, struct FGameplayAbilityTargetDataHandle& InData); // Function DungeonCrawler.GA_PlayerSpellCastBase.ServerReceivedTargetData
	void SendActivateSpellCrossHairNotify(bool IsActivate); // Function DungeonCrawler.GA_PlayerSpellCastBase.SendActivateSpellCrossHairNotify
	void ReceivedTargetData(struct FGameplayAbilityTargetDataHandle& InData); // Function DungeonCrawler.GA_PlayerSpellCastBase.ReceivedTargetData
	void ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PlayerSpellCastBase.ReceivedEvent
	void OnVelocityChange(); // Function DungeonCrawler.GA_PlayerSpellCastBase.OnVelocityChange
	void OnStuckFinish(); // Function DungeonCrawler.GA_PlayerSpellCastBase.OnStuckFinish
	void OnStuck(); // Function DungeonCrawler.GA_PlayerSpellCastBase.OnStuck
	void OnStartSync(); // Function DungeonCrawler.GA_PlayerSpellCastBase.OnStartSync
	void OnRelease(); // Function DungeonCrawler.GA_PlayerSpellCastBase.OnRelease
	void OnInterruptFinish(); // Function DungeonCrawler.GA_PlayerSpellCastBase.OnInterruptFinish
	void OnInterrupted(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PlayerSpellCastBase.OnInterrupted
	void OnFire(); // Function DungeonCrawler.GA_PlayerSpellCastBase.OnFire
	void OnFinishSync(); // Function DungeonCrawler.GA_PlayerSpellCastBase.OnFinishSync
	void OnFinish(); // Function DungeonCrawler.GA_PlayerSpellCastBase.OnFinish
	void OnCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PlayerSpellCastBase.OnCompleted
	void OnChannelingTriggerSync(); // Function DungeonCrawler.GA_PlayerSpellCastBase.OnChannelingTriggerSync
	void OnChannelingFinishSync(); // Function DungeonCrawler.GA_PlayerSpellCastBase.OnChannelingFinishSync
	void OnChannelingFinish(); // Function DungeonCrawler.GA_PlayerSpellCastBase.OnChannelingFinish
	void OnChannelingAction(int32_t ActionCounter); // Function DungeonCrawler.GA_PlayerSpellCastBase.OnChannelingAction
	void OnCastTriggerSync(); // Function DungeonCrawler.GA_PlayerSpellCastBase.OnCastTriggerSync
	void OnCancelled(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PlayerSpellCastBase.OnCancelled
	void OnBlendOut(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PlayerSpellCastBase.OnBlendOut
	void EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_PlayerSpellCastBase.EventReceived
	void ClientReceivedTargetData(struct FGameplayTag InEffectTag, struct FGameplayTag InChannelTag, struct FGameplayAbilityTargetDataHandle& InData); // Function DungeonCrawler.GA_PlayerSpellCastBase.ClientReceivedTargetData
	void CastingFinishEvent(struct FDesignDataSpell CurentDesignSpellData); // Function DungeonCrawler.GA_PlayerSpellCastBase.CastingFinishEvent
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function DungeonCrawler.GA_PlayerSpellCastBase.AbilityActivated
}; 
 
 


// Class DungeonCrawler.GA_PropsMeleeAttackBase
// Size: 0x620(Inherited: 0x618)
struct UGA_PropsMeleeAttackBase : UGA_MeleeAttackBase
{
	struct FGameplayTag CancleGameplayTag;  // 0x618 (0x618)


}; 
 
 


// Class DungeonCrawler.GA_ReloadAmmoBase
// Size: 0x580(Inherited: 0x558)
struct UGA_ReloadAmmoBase : UDCGameplayAbilityBase
{
	struct UAnimMontage* MontageToPlay;  // 0x558 (0x558)
	struct UAnimMontage* MontageToPlayOnSourceObject;  // 0x560 (0x560)
	struct FPrimaryAssetId AmmoItemId;  // 0x568 (0x568)
	char pad_1400[8];  // 0x578 (0x578)


	void ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_ReloadAmmoBase.ReceivedEvent
	void OnCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_ReloadAmmoBase.OnCompleted
	void OnCancelled(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_ReloadAmmoBase.OnCancelled
	void EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_ReloadAmmoBase.EventReceived
	void CancelReloadByCrossHairAim(); // Function DungeonCrawler.GA_ReloadAmmoBase.CancelReloadByCrossHairAim
	void ActivateCrossHairPullAnimationByCrossbow(float ActionSpeed); // Function DungeonCrawler.GA_ReloadAmmoBase.ActivateCrossHairPullAnimationByCrossbow
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function DungeonCrawler.GA_ReloadAmmoBase.AbilityActivated
}; 
 
 


// Class DungeonCrawler.GA_SequenceDamageBase
// Size: 0x570(Inherited: 0x558)
struct UGA_SequenceDamageBase : UDCGameplayAbilityBase
{
	AActor* TargetActorClass;  // 0x558 (0x558)
	char pad_1376_1 : 7;  // 0x560 (0x560)
	bool bUsePremadeSpec : 1;  // 0x560 (0x560)
	char pad_1377[3];  // 0x561 (0x561)
	struct FGameplayCueTag GameplayCueTag;  // 0x564 (0x564)
	char pad_1388[4];  // 0x56C (0x56C)


	void OnDamageOverlapEnd(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function DungeonCrawler.GA_SequenceDamageBase.OnDamageOverlapEnd
	void OnDamageOverlapBegin(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function DungeonCrawler.GA_SequenceDamageBase.OnDamageOverlapBegin
	void OnDamageEvent(struct AActor* TargetActor); // Function DungeonCrawler.GA_SequenceDamageBase.OnDamageEvent
	void EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_SequenceDamageBase.EventReceived
}; 
 
 


// Class DungeonCrawler.GA_WearBase
// Size: 0x608(Inherited: 0x558)
struct UGA_WearBase : UDCGameplayAbilityBase
{
	struct UAnimMontage* ChangingMontage;  // 0x558 (0x558)
	struct FItemData TargetItemData;  // 0x560 (0x560)
	struct TWeakObjectPtr<AActor> TargetActor;  // 0x600 (0x600)


	void OnStartSync(); // Function DungeonCrawler.GA_WearBase.OnStartSync
	void OnLootTargetRemoved(); // Function DungeonCrawler.GA_WearBase.OnLootTargetRemoved
	void OnFinish(); // Function DungeonCrawler.GA_WearBase.OnFinish
	void OnEndSync(); // Function DungeonCrawler.GA_WearBase.OnEndSync
	void OnChangingMontageCompleted(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_WearBase.OnChangingMontageCompleted
	void EventReceived(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function DungeonCrawler.GA_WearBase.EventReceived
}; 
 
 


// Class DungeonCrawler.DCReportSystem
// Size: 0xB8(Inherited: 0x28)
struct UDCReportSystem : UObject
{
	char pad_40[128];  // 0x28 (0x28)
	struct USentrySubsystem* SentrySubsystem;  // 0xA8 (0xA8)
	struct USentryUser* UserData;  // 0xB0 (0xB0)


}; 
 
 


// Class DungeonCrawler.InjectionItemListEntryWidgetBase
// Size: 0x2C8(Inherited: 0x2A0)
struct UInjectionItemListEntryWidgetBase : UCommonUserWidget
{
	char pad_672[8];  // 0x2A0 (0x2A0)
	struct FText ItemIdText;  // 0x2A8 (0x2A8)
	char pad_704_1 : 7;  // 0x2C0 (0x2C0)
	bool bIsSelected : 1;  // 0x2C0 (0x2C0)
	char pad_705[7];  // 0x2C1 (0x2C1)


}; 
 
 


// Class DungeonCrawler.InjectionItemPropertyListEntryWidgetData
// Size: 0x38(Inherited: 0x28)
struct UInjectionItemPropertyListEntryWidgetData : UObject
{
	struct UDCItemPropertyTypeDataAsset* ItemPropertyTypeData;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bIsSelected : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 


// Class DungeonCrawler.InjectionItemTypeListEntryWidgetData
// Size: 0x38(Inherited: 0x28)
struct UInjectionItemTypeListEntryWidgetData : UObject
{
	struct FGameplayTag TypeTag;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bIsSelected : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 


// Class DungeonCrawler.InjectionItemTypeListEntryWidgetBase
// Size: 0x2C8(Inherited: 0x2A0)
struct UInjectionItemTypeListEntryWidgetBase : UCommonUserWidget
{
	char pad_672[8];  // 0x2A0 (0x2A0)
	struct FText TypeText;  // 0x2A8 (0x2A8)
	char pad_704_1 : 7;  // 0x2C0 (0x2C0)
	bool bIsSelected : 1;  // 0x2C0 (0x2C0)
	char pad_705[7];  // 0x2C1 (0x2C1)


}; 
 
 


// Class DungeonCrawler.InputTriggerComboAction
// Size: 0x68(Inherited: 0x50)
struct UInputTriggerComboAction : UInputTrigger
{
	struct FComboTriggerStep ComboStep;  // 0x50 (0x50)
	float ActivationCooldown;  // 0x60 (0x60)
	char pad_100[4];  // 0x64 (0x64)


}; 
 
 


// Class DungeonCrawler.InventoryLootingWidget
// Size: 0x350(Inherited: 0x300)
struct UInventoryLootingWidget : UDCWidgetBase
{
	struct UContainerInventoryGroupWidget* LootingTargetContainerGroup;  // 0x300 (0x300)
	struct ULootingPlayerInventoryWidget* LootingTargetPlayerInventoryGroup;  // 0x308 (0x308)
	struct UTextBlock* TargetText;  // 0x310 (0x310)
	struct FText LootingChestText;  // 0x318 (0x318)
	struct FText LootingPlayerText;  // 0x330 (0x330)
	char pad_840_1 : 7;  // 0x348 (0x348)
	bool bSetLootPlayer : 1;  // 0x348 (0x348)
	char pad_841[3];  // 0x349 (0x349)
	int32_t LootingChestCount;  // 0x34C (0x34C)


	void RequestInventoryWidgetVisible(bool bVisible); // Function DungeonCrawler.InventoryLootingWidget.RequestInventoryWidgetVisible
	void OnLootingTargetCountChanged(int32_t Count); // Function DungeonCrawler.InventoryLootingWidget.OnLootingTargetCountChanged
	void OnLootingPlayerSet(bool bSetTargetPlayer, struct FName TargetPlayerName); // Function DungeonCrawler.InventoryLootingWidget.OnLootingPlayerSet
}; 
 
 


// Class DungeonCrawler.InventoryStatusWidget
// Size: 0x340(Inherited: 0x300)
struct UInventoryStatusWidget : UDCWidgetBase
{
	struct FInventoryStatusWidgetData WidgetData;  // 0x300 (0x300)
	struct UAccountLink* AccountLink;  // 0x318 (0x318)
	struct FString LinkedAccountId;  // 0x320 (0x320)
	struct FString CheckTargetAccountId;  // 0x330 (0x330)


	void OnPlayerCharacterName(struct FText& NewValue, struct FText& OldValue); // Function DungeonCrawler.InventoryStatusWidget.OnPlayerCharacterName
}; 
 
 


// Class DungeonCrawler.InvitePartyMemberSlotWidget
// Size: 0x3A8(Inherited: 0x3A0)
struct UInvitePartyMemberSlotWidget : UInvitePartyUserSlotWidget
{
	struct UVoipUserWidget* VoipUserWidget;  // 0x3A0 (0x3A0)


}; 
 
 


// Class DungeonCrawler.InvitePartyUserSlotListWidgetData
// Size: 0x38(Inherited: 0x28)
struct UInvitePartyUserSlotListWidgetData : UObject
{
	struct FInvitePartyUserSlotData InvitePartyUserSlotData;  // 0x28 (0x28)


}; 
 
 


// Class DungeonCrawler.InvitePartyWidget
// Size: 0x4F0(Inherited: 0x300)
struct UInvitePartyWidget : UDCWidgetBase
{
	struct UListView* PartySlotListView;  // 0x300 (0x300)
	struct UTileView* InvitePartySlotTileView;  // 0x308 (0x308)
	struct UClassIconGroupWidget* ClassIconGroup;  // 0x310 (0x310)
	int32_t CurrentPageIndex;  // 0x318 (0x318)
	int32_t MaxCharacterCount;  // 0x31C (0x31C)
	int32_t MaxPageIndex;  // 0x320 (0x320)
	char pad_804[452];  // 0x324 (0x324)
	struct UDCCommonButtonBase* ButtonShowBlock;  // 0x4E8 (0x4E8)


	void TryRequestInviteParty(struct UInvitePartyUserSlotWidgetData* InInvitePartyUserSlotWidgetData); // Function DungeonCrawler.InvitePartyWidget.TryRequestInviteParty
	void OnUserListFindIdClicked(struct FText& FindId); // Function DungeonCrawler.InvitePartyWidget.OnUserListFindIdClicked
	bool OnTextChangedFindUserId(struct FText& FindId); // Function DungeonCrawler.InvitePartyWidget.OnTextChangedFindUserId
	void OnRightButtonCkicked(); // Function DungeonCrawler.InvitePartyWidget.OnRightButtonCkicked
	void OnPopupSWidgetPartyInviteResult(uint8_t PopupResult, struct FInvitePartyUserSlot& TargetUser); // Function DungeonCrawler.InvitePartyWidget.OnPopupSWidgetPartyInviteResult
	void OnPageNumber(int32_t CurrentPage, int32_t MaxPage); // Function DungeonCrawler.InvitePartyWidget.OnPageNumber
	void OnLocateNumber(int32_t LobbyCount, int32_t DungeonCount, int32_t BlockCount); // Function DungeonCrawler.InvitePartyWidget.OnLocateNumber
	void OnLeftButtonCkicked(); // Function DungeonCrawler.InvitePartyWidget.OnLeftButtonCkicked
	void OnInvitePartyUserSlotData(struct FInvitePartyUserSlotData& NewValue, struct FInvitePartyUserSlotData& OldValue); // Function DungeonCrawler.InvitePartyWidget.OnInvitePartyUserSlotData
	void OnClassIconSelected(struct FPrimaryAssetId& InCharacterClassId); // Function DungeonCrawler.InvitePartyWidget.OnClassIconSelected
	void OnButtonShowBlock(); // Function DungeonCrawler.InvitePartyWidget.OnButtonShowBlock
	void HandleBackButtonClicked(); // Function DungeonCrawler.InvitePartyWidget.HandleBackButtonClicked
}; 
 
 


// Class DungeonCrawler.Item
// Size: 0x460(Inherited: 0x28)
struct UItem : UObject
{
	char pad_40[96];  // 0x28 (0x28)
	struct UBaseObject* BaseObject;  // 0x88 (0x88)
	struct FItemInventorySize InventorySize;  // 0x90 (0x90)
	struct FItemData ItemData;  // 0x98 (0x98)
	struct FDesignDataItem ItemDesignData;  // 0x138 (0x138)
	struct UArtDataItem* ItemArtData;  // 0x2C0 (0x2C0)
	struct UDesignDataAssetItemRequirement* DesignDataItemRequirement;  // 0x2C8 (0x2C8)
	struct UDesignDataAssetItemBundleInfo* DesignDataItemBundleInfo;  // 0x2D0 (0x2D0)
	struct FDesignDataItemContainer DesignDataItemContainer;  // 0x2D8 (0x2D8)
	char pad_748[4];  // 0x2EC (0x2EC)
	struct USoundData* SoundData;  // 0x2F0 (0x2F0)
	struct FFunctionTrigger ItemEquipTrigger;  // 0x2F8 (0x2F8)
	struct FFunctionTrigger ItemSheathTrigger;  // 0x368 (0x368)
	struct TArray<struct FDCGameplayAbilityData> GameplayAbilityDataArray;  // 0x3D8 (0x3D8)
	struct TArray<struct FDCGameplayEffectData> GameplayEffectDataArray;  // 0x3E8 (0x3E8)
	struct TArray<struct FDCGameplayAbilityData> OwnerGameplayAbilityDataArray;  // 0x3F8 (0x3F8)
	struct TArray<struct FDCGameplayEffectData> OwnerGameplayEffectDataArray;  // 0x408 (0x408)
	struct TArray<struct FDCPropertyEffectData> PropertyEffectDataArray;  // 0x418 (0x418)
	struct TArray<struct FGameplayAbilitySpecHandle> OwnerGameplayAbilitySpecHandles;  // 0x428 (0x428)
	struct TArray<struct FActiveGameplayEffectHandle> OwnerGameplayEffectHandles;  // 0x438 (0x438)
	struct TWeakObjectPtr<AActor> OwnerActor;  // 0x448 (0x448)
	struct TWeakObjectPtr<AItemActor> ItemActor;  // 0x450 (0x450)
	char pad_1112[8];  // 0x458 (0x458)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.Item.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.Item.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.Item.TerminateBase
	bool IsItemWeaponType(struct FGameplayTag WeaponType); // Function DungeonCrawler.Item.IsItemWeaponType
	void Initialize(struct FItemData& Data); // Function DungeonCrawler.Item.Initialize
	struct TArray<struct FGameplayTag> GetItemWeaponTypes(); // Function DungeonCrawler.Item.GetItemWeaponTypes
	struct FGameplayTag GetItemSlotType(); // Function DungeonCrawler.Item.GetItemSlotType
	struct UTexture2D* GetItemIconTexture(); // Function DungeonCrawler.Item.GetItemIconTexture
	struct FGameplayTag GetItemHandType(); // Function DungeonCrawler.Item.GetItemHandType
	struct TArray<struct FGameplayTag> GetItemDataWeaponTypeTags(); // Function DungeonCrawler.Item.GetItemDataWeaponTypeTags
	struct FGameplayTag GetItemDataUtilityTag(); // Function DungeonCrawler.Item.GetItemDataUtilityTag
	struct FItemData GetItemData(); // Function DungeonCrawler.Item.GetItemData
	struct AItemActor* GetItemActor(); // Function DungeonCrawler.Item.GetItemActor
	struct FDesignDataItem GetDesignDataItem(); // Function DungeonCrawler.Item.GetDesignDataItem
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.Item.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.ItemActor
// Size: 0x570(Inherited: 0x300)
struct AItemActor : ADCAbilityActorBase
{
	char pad_768[8];  // 0x300 (0x300)
	struct USkeletalMeshComponent* Mesh;  // 0x308 (0x308)
	struct FGameplayTagContainer AttachedInvisibleStateTagContainer;  // 0x310 (0x310)
	char pad_816[392];  // 0x330 (0x330)
	struct UDesignDataAssetItemRequirement* DesignDataAssetItemRequirement;  // 0x4B8 (0x4B8)
	struct UArtDataItem* ArtDataItem;  // 0x4C0 (0x4C0)
	struct USoundData* SoundData;  // 0x4C8 (0x4C8)
	struct FItemData ItemData;  // 0x4D0 (0x4D0)


	void SetSheathed(); // Function DungeonCrawler.ItemActor.SetSheathed
	void SetItemData(struct FItemData& InItemData); // Function DungeonCrawler.ItemActor.SetItemData
	void SetEquipped(); // Function DungeonCrawler.ItemActor.SetEquipped
	void PreReduceAmmoCount(int32_t ReduceCount); // Function DungeonCrawler.ItemActor.PreReduceAmmoCount
	void OnRep_ItemData(struct FItemData& OldItemData); // Function DungeonCrawler.ItemActor.OnRep_ItemData
	void OnHiddenInGameStateChanged(bool bIsHidden); // Function DungeonCrawler.ItemActor.OnHiddenInGameStateChanged
	void OnAttachmentReplication(); // Function DungeonCrawler.ItemActor.OnAttachmentReplication
	void OnAttachedSheathSocket(); // Function DungeonCrawler.ItemActor.OnAttachedSheathSocket
	void OnAttachedEquipSocket(); // Function DungeonCrawler.ItemActor.OnAttachedEquipSocket
	void ItemDataUpdated(struct FItemData& InItemData); // Function DungeonCrawler.ItemActor.ItemDataUpdated
	struct USoundData* GetSoundData(); // Function DungeonCrawler.ItemActor.GetSoundData
	struct FGameplayTag GetItemUtilityTag(); // Function DungeonCrawler.ItemActor.GetItemUtilityTag
	struct TArray<struct FGameplayTag> GetItemTypeTags(); // Function DungeonCrawler.ItemActor.GetItemTypeTags
	struct FItemData GetItemData(); // Function DungeonCrawler.ItemActor.GetItemData
	struct FDesignDataItem GetDesignDataItem(); // Function DungeonCrawler.ItemActor.GetDesignDataItem
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function DungeonCrawler.ItemActor.GameplayTagUpdated
}; 
 
 


// Class DungeonCrawler.ItemCountSelectWidgetData
// Size: 0x40(Inherited: 0x30)
struct UItemCountSelectWidgetData : UPopupDataBase
{
	uint8_t PopupButtonType;  // 0x30 (0x30)
	uint8_t ItemCountSelectType;  // 0x31 (0x31)
	char pad_50[2];  // 0x32 (0x32)
	int32_t MaxItemCount;  // 0x34 (0x34)
	int32_t MinItemCount;  // 0x38 (0x38)
	int32_t SelectedItemCount;  // 0x3C (0x3C)


}; 
 
 


// Class DungeonCrawler.ItemCountSelectWidget
// Size: 0x478(Inherited: 0x440)
struct UItemCountSelectWidget : UCommonPopupBase
{
	struct UCommonButtonPopupWidget* Btn_Single;  // 0x440 (0x440)
	struct UCommonButtonPopupWidget* Btn_Two_Left;  // 0x448 (0x448)
	struct UCommonButtonPopupWidget* Btn_Two_Right;  // 0x450 (0x450)
	struct USlider* Slider_ItemCount;  // 0x458 (0x458)
	struct UEditableText* EditableTextBox_ItemCount;  // 0x460 (0x460)
	struct UTextBlock* Txt_Desc;  // 0x468 (0x468)
	struct UItemCountSelectWidgetData* ItemCountSelectWidgetData;  // 0x470 (0x470)


	void OnTextBlockValueChanged(struct FText& Text); // Function DungeonCrawler.ItemCountSelectWidget.OnTextBlockValueChanged
	void OnTextBlockCommitted(struct FText& Text, enum class ETextCommit CommitMethod); // Function DungeonCrawler.ItemCountSelectWidget.OnTextBlockCommitted
	void OnSliderValueChanged(float Value); // Function DungeonCrawler.ItemCountSelectWidget.OnSliderValueChanged
	void OnRemovePopup(); // Function DungeonCrawler.ItemCountSelectWidget.OnRemovePopup
	void OnCreatePopup(); // Function DungeonCrawler.ItemCountSelectWidget.OnCreatePopup
	void HandleRightButtonClicked(); // Function DungeonCrawler.ItemCountSelectWidget.HandleRightButtonClicked
	void HandleLeftButtonClicked(); // Function DungeonCrawler.ItemCountSelectWidget.HandleLeftButtonClicked
}; 
 
 


// Class DungeonCrawler.DCItemDataComponent
// Size: 0x1B8(Inherited: 0xD0)
struct UDCItemDataComponent : UDCDataComponent
{
	struct FItemData ItemData;  // 0xD0 (0xD0)
	int32_t ItemCount;  // 0x170 (0x170)
	char pad_372[4];  // 0x174 (0x174)
	struct UStaticMeshComponent* StaticMeshComponent;  // 0x178 (0x178)
	struct USkeletalMeshComponent* SkeletalMeshComponent;  // 0x180 (0x180)
	char pad_392[48];  // 0x188 (0x188)


	void OnLoadData_Sound(struct UObject* InLoadedObject); // Function DungeonCrawler.DCItemDataComponent.OnLoadData_Sound
	void OnLoadData_Bundle(struct UObject* InLoadedObject); // Function DungeonCrawler.DCItemDataComponent.OnLoadData_Bundle
	void OnLoadData_Art(struct UObject* InLoadedObject); // Function DungeonCrawler.DCItemDataComponent.OnLoadData_Art
}; 
 
 


// Class DungeonCrawler.ItemHolderActorBase
// Size: 0x3F8(Inherited: 0x300)
struct AItemHolderActorBase : ADCInteractableActorBase
{
	char pad_768[56];  // 0x300 (0x300)
	struct UMeshComponent* ItemMeshComponent;  // 0x338 (0x338)
	struct FPrimaryAssetId ItemId;  // 0x340 (0x340)
	struct FItemDataMeta ItemMetaData;  // 0x350 (0x350)
	struct UItem* ItemObject;  // 0x3A0 (0x3A0)
	struct UArtDataItem* ArtDataItem;  // 0x3A8 (0x3A8)
	struct USoundData* SoundData;  // 0x3B0 (0x3B0)
	struct UDCGlitterComponent* GlitterComponent;  // 0x3B8 (0x3B8)
	struct FPrimaryAssetId PropInteractId;  // 0x3C0 (0x3C0)
	struct FGameplayTagContainer GameplayTagContainer;  // 0x3D0 (0x3D0)
	char pad_1008_1 : 7;  // 0x3F0 (0x3F0)
	bool bPreview : 1;  // 0x3F0 (0x3F0)
	char pad_1009[7];  // 0x3F1 (0x3F1)


	void SetItemObject(struct UItem* Item); // Function DungeonCrawler.ItemHolderActorBase.SetItemObject
	void OverrideItemArtData(struct UArtDataItem* NewItemArtData); // Function DungeonCrawler.ItemHolderActorBase.OverrideItemArtData
	void OnRep_ItemId(struct FPrimaryAssetId OldItemId); // Function DungeonCrawler.ItemHolderActorBase.OnRep_ItemId
	void OnRep_ArtDataItem(struct UArtDataItem* OldArtDataItem); // Function DungeonCrawler.ItemHolderActorBase.OnRep_ArtDataItem
}; 
 
 


// Class DungeonCrawler.ItemRandomGenerateComponent
// Size: 0x140(Inherited: 0xA0)
struct UItemRandomGenerateComponent : UActorComponent
{
	char pad_160[96];  // 0xA0 (0xA0)
	struct TArray<struct FItemRandomGenerateData> ItemRandomGenerateDataArray;  // 0x100 (0x100)
	char pad_272_1 : 7;  // 0x110 (0x110)
	bool bGenerateRepeatedly : 1;  // 0x110 (0x110)
	char pad_273[23];  // 0x111 (0x111)
	struct FMulticastInlineDelegate OnItemGenerationFinished;  // 0x128 (0x128)
	char pad_312[8];  // 0x138 (0x138)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.ItemRandomGenerateComponent.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.ItemRandomGenerateComponent.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.ItemRandomGenerateComponent.TerminateBase
	void DropItem(int64_t ItemUniqueId, struct AActor* Owner); // Function DungeonCrawler.ItemRandomGenerateComponent.DropItem
	void DropAllItems(float InLuck); // Function DungeonCrawler.ItemRandomGenerateComponent.DropAllItems
	void ClearAllItems(); // Function DungeonCrawler.ItemRandomGenerateComponent.ClearAllItems
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.ItemRandomGenerateComponent.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.ItemRichTextBlockDecorator
// Size: 0x38(Inherited: 0x28)
struct UItemRichTextBlockDecorator : URichTextBlockDecorator
{
	UItemTooltipWidget* ItemTooltipWidgetClass;  // 0x28 (0x28)
	char pad_48[8];  // 0x30 (0x30)


	struct FTextBlockStyle GetItemTextBlockStyle(struct FGameplayTag InRarityType); // Function DungeonCrawler.ItemRichTextBlockDecorator.GetItemTextBlockStyle
}; 
 
 


// Class DungeonCrawler.ItemTooltipRequirementListWidget
// Size: 0x350(Inherited: 0x300)
struct UItemTooltipRequirementListWidget : UDCWidgetBase
{
	struct TMap<uint8_t, struct UItemTooltipRequirementWidget*> ItemRequirementWidgetMap;  // 0x300 (0x300)


}; 
 
 


// Class DungeonCrawler.StorageWidget
// Size: 0x300(Inherited: 0x300)
struct UStorageWidget : UDCWidgetBase
{


}; 
 
 


// Class DungeonCrawler.ItemTooltipRequirementWidget
// Size: 0x348(Inherited: 0x300)
struct UItemTooltipRequirementWidget : UDCWidgetBase
{
	char pad_768[8];  // 0x300 (0x300)
	struct FSlateColor CommonNameColor;  // 0x308 (0x308)
	struct FSlateColor CommonValueColor;  // 0x31C (0x31C)
	struct FSlateColor UnmetRequirementColor;  // 0x330 (0x330)
	char pad_836[4];  // 0x344 (0x344)


	void OnChangedRequirementStatus(bool bFulfilled); // Function DungeonCrawler.ItemTooltipRequirementWidget.OnChangedRequirementStatus
}; 
 
 


// Class DungeonCrawler.ItemTooltipStatWidgetData
// Size: 0x38(Inherited: 0x28)
struct UItemTooltipStatWidgetData : UObject
{
	struct TArray<struct FText> DescTextArray;  // 0x28 (0x28)


}; 
 
 


// Class DungeonCrawler.ItemWeaponAnimInstanceBase
// Size: 0x5B0(Inherited: 0x5B0)
struct UItemWeaponAnimInstanceBase : UDCPlayerCharacterAnimInstanceBase
{


	void OnItemDataUpdated(struct FItemData& ItemData); // Function DungeonCrawler.ItemWeaponAnimInstanceBase.OnItemDataUpdated
}; 
 
 


// Class DungeonCrawler.KarmaMemberSlotWidgetBase
// Size: 0x300(Inherited: 0x300)
struct UKarmaMemberSlotWidgetBase : UDCWidgetBase
{


	void OnFMsgWidgetStreamingModeNotifyBlueprint(struct FMsgWidgetStreamingModeNotify& InMsg); // Function DungeonCrawler.KarmaMemberSlotWidgetBase.OnFMsgWidgetStreamingModeNotifyBlueprint
}; 
 
 


// Class DungeonCrawler.LeaderboardContentWidget
// Size: 0x358(Inherited: 0x300)
struct ULeaderboardContentWidget : UDCWidgetBase
{
	struct UListView* RankRecordListView;  // 0x300 (0x300)
	struct ULeaderboardRankRecordMineWidget* LeaderboardRankRecordMineWidget;  // 0x308 (0x308)
	char pad_784[72];  // 0x310 (0x310)


	void OnContentScoreName(struct FText& NewValue, struct FText& OldValue); // Function DungeonCrawler.LeaderboardContentWidget.OnContentScoreName
	void OnContentName(struct FText& NewValue, struct FText& OldValue); // Function DungeonCrawler.LeaderboardContentWidget.OnContentName
	void OnContentDesc(struct FText& NewValue, struct FText& OldValue); // Function DungeonCrawler.LeaderboardContentWidget.OnContentDesc
}; 
 
 


// Class DungeonCrawler.LeaderboardRankRecordMineWidget
// Size: 0x358(Inherited: 0x300)
struct ULeaderboardRankRecordMineWidget : UDCWidgetBase
{
	char pad_768[88];  // 0x300 (0x300)


	void OnRankRecord(struct FRankRecord& NewValue, struct FRankRecord& OldValue); // Function DungeonCrawler.LeaderboardRankRecordMineWidget.OnRankRecord
	void OnFMsgWidgetStreamingModeNotifyBlueprint(struct FMsgWidgetStreamingModeNotify& InMsg); // Function DungeonCrawler.LeaderboardRankRecordMineWidget.OnFMsgWidgetStreamingModeNotifyBlueprint
}; 
 
 


// Class DungeonCrawler.LeaderboardRankRecordWidgetData
// Size: 0xA8(Inherited: 0x28)
struct ULeaderboardRankRecordWidgetData : UObject
{
	struct FRankRecord RankRecordData;  // 0x28 (0x28)
	struct FNickname NickNameMine;  // 0x80 (0x80)


}; 
 
 


// Class DungeonCrawler.LeaderboardRankRecordWidget
// Size: 0x360(Inherited: 0x300)
struct ULeaderboardRankRecordWidget : UDCWidgetBase
{
	char pad_768[96];  // 0x300 (0x300)


	void OnRankRecordData(struct FRankRecord& NewValue, struct FRankRecord& OldValue); // Function DungeonCrawler.LeaderboardRankRecordWidget.OnRankRecordData
	void OnMineRankRecordData(struct FRankRecord& MineValue, bool IsMine); // Function DungeonCrawler.LeaderboardRankRecordWidget.OnMineRankRecordData
	void OnFMsgWidgetStreamingModeNotifyBlueprint(struct FMsgWidgetStreamingModeNotify& InMsg); // Function DungeonCrawler.LeaderboardRankRecordWidget.OnFMsgWidgetStreamingModeNotifyBlueprint
}; 
 
 


// Class DungeonCrawler.LeaderboardWidget
// Size: 0x588(Inherited: 0x440)
struct ULeaderboardWidget : UDCCommonActivatableWidgetBase
{
	struct UWidgetSwitcher* LeaderboardWidgetSwitcher;  // 0x440 (0x440)
	struct UDCTabListWidgetBase* LeaderboardSheetTabListWidget;  // 0x448 (0x448)
	struct TArray<struct ULeaderboardContentWidget*> LeaderboardContentWidgetArray;  // 0x450 (0x450)
	char pad_1120[96];  // 0x460 (0x460)
	int32_t MaxContentPage;  // 0x4C0 (0x4C0)
	int32_t CurContentPage;  // 0x4C4 (0x4C4)
	struct FLeaderboardWidgetHandleData WidgetHandleData;  // 0x4C8 (0x4C8)
	char pad_1244[172];  // 0x4DC (0x4DC)


	void PrevContentPage(); // Function DungeonCrawler.LeaderboardWidget.PrevContentPage
	void OnSheetTabSelected(struct FName InTabId); // Function DungeonCrawler.LeaderboardWidget.OnSheetTabSelected
	void OnLeaderboardSeasonTimerData(struct FLeaderboardSeasonTimerData& NewValue, struct FLeaderboardSeasonTimerData& OldValue); // Function DungeonCrawler.LeaderboardWidget.OnLeaderboardSeasonTimerData
	void NextContentPage(); // Function DungeonCrawler.LeaderboardWidget.NextContentPage
	struct FText GetGameDifficultyTypeTabName(uint8_t InGameDifficultyType); // Function DungeonCrawler.LeaderboardWidget.GetGameDifficultyTypeTabName
}; 
 
 


// Class DungeonCrawler.LobbyGroupTradingWidget
// Size: 0x480(Inherited: 0x470)
struct ULobbyGroupTradingWidget : ULobbyGroupWidgetBase
{
	struct UTopTitleWidgetBase* TopTitle;  // 0x470 (0x470)
	struct UDCTradeInventoryWidget* TradeUserInventory;  // 0x478 (0x478)


	void OnReadRulesButtonClicked(); // Function DungeonCrawler.LobbyGroupTradingWidget.OnReadRulesButtonClicked
	void OnLeaveChannelButtonClicked(); // Function DungeonCrawler.LobbyGroupTradingWidget.OnLeaveChannelButtonClicked
}; 
 
 


// Class DungeonCrawler.LoginSecretTokenPopup
// Size: 0x458(Inherited: 0x440)
struct ULoginSecretTokenPopup : UCommonPopupBase
{
	struct ULoginSecretTokenPopupData* LoginSecretTokenPopupData;  // 0x440 (0x440)
	struct UDCCommonButtonBase* Btn_Single;  // 0x448 (0x448)
	struct UDCCommonButtonBase* Btn_CopyToClipboard;  // 0x450 (0x450)


	void HandleCopyToClipboardButtonClicked(); // Function DungeonCrawler.LoginSecretTokenPopup.HandleCopyToClipboardButtonClicked
	void HandleConfirmButtonClicked(); // Function DungeonCrawler.LoginSecretTokenPopup.HandleConfirmButtonClicked
}; 
 
 


// Class DungeonCrawler.LoginWidget
// Size: 0x520(Inherited: 0x440)
struct ULoginWidget : UDCCommonActivatableWidgetBase
{
	uint8_t LoginState;  // 0x440 (0x440)
	char pad_1089[7];  // 0x441 (0x441)
	struct UCommonPopupManageWidget* WB_Common_Popup_Manage;  // 0x448 (0x448)
	UCommonPopupSWidget* PopupWidgetClass;  // 0x450 (0x450)
	struct UCommonPopupSWidget* WB_CommonPopup_S;  // 0x458 (0x458)
	struct FText WelcomeText;  // 0x460 (0x460)
	struct FText ConfirmReconnectText;  // 0x478 (0x478)
	struct FText ConnectText;  // 0x490 (0x490)
	struct FText PrevGameClosedText;  // 0x4A8 (0x4A8)
	struct UComboBoxString* ServerListComboBox;  // 0x4C0 (0x4C0)
	struct UOverlay* Overlay_IP;  // 0x4C8 (0x4C8)
	struct UOverlay* Overlay_ServerList;  // 0x4D0 (0x4D0)
	struct UEditableTextBox* IPTextBox;  // 0x4D8 (0x4D8)
	struct UEditableTextBox* IDTextBox;  // 0x4E0 (0x4E0)
	struct UEditableTextBox* PasswordTextBox;  // 0x4E8 (0x4E8)
	struct UTextBlock* LoginMessage;  // 0x4F0 (0x4F0)
	struct FString Password;  // 0x4F8 (0x4F8)
	char pad_1288[20];  // 0x508 (0x508)
	struct FLoginWidgetHandleData WidgetHandleData;  // 0x51C (0x51C)
	char pad_1309[3];  // 0x51D (0x51D)


	void StopLoginSound(); // Function DungeonCrawler.LoginWidget.StopLoginSound
	void PlayLoginSound(); // Function DungeonCrawler.LoginWidget.PlayLoginSound
	void OnTextChangedPassWord(struct FText& InPassWord); // Function DungeonCrawler.LoginWidget.OnTextChangedPassWord
	void OnTextChangedLoginId(struct FText& InLoginId); // Function DungeonCrawler.LoginWidget.OnTextChangedLoginId
	void OnSelectionChanged(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function DungeonCrawler.LoginWidget.OnSelectionChanged
	void OnLoginButtonClicked(); // Function DungeonCrawler.LoginWidget.OnLoginButtonClicked
	void OnAgeRatingType(uint8_t NewValue, uint8_t OldValue); // Function DungeonCrawler.LoginWidget.OnAgeRatingType
	bool IsUsingPlatform(); // Function DungeonCrawler.LoginWidget.IsUsingPlatform
}; 
 
 


// Class DungeonCrawler.LootingPlayerInventoryWidget
// Size: 0x310(Inherited: 0x300)
struct ULootingPlayerInventoryWidget : UDCWidgetBase
{
	struct FMulticastInlineDelegate OnSetLootTargetPlayer;  // 0x300 (0x300)


}; 
 
 


// Class DungeonCrawler.MetaFriendComponent
// Size: 0x140(Inherited: 0x100)
struct UMetaFriendComponent : UMetaComponentBase
{
	char pad_256[64];  // 0x100 (0x100)


}; 
 
 


// Class DungeonCrawler.MetaLeaderboardInterface
// Size: 0x28(Inherited: 0x28)
struct UMetaLeaderboardInterface : UInterface
{


}; 
 
 


// Class DungeonCrawler.MetaStorageComponent
// Size: 0x1E0(Inherited: 0x1E0)
struct UMetaStorageComponent : UInventoryComponent
{


	void OnLobbyCharacterInfoUupdated(); // Function DungeonCrawler.MetaStorageComponent.OnLobbyCharacterInfoUupdated
}; 
 
 


// Class DungeonCrawler.OnlineSystemChaf
// Size: 0xB8(Inherited: 0x30)
struct UOnlineSystemChaf : UGameInstanceSubsystem
{
	char pad_48[88];  // 0x30 (0x30)
	struct FClientMsgShopRedStoneShardInfoResponse RedStoneShardInfo;  // 0x88 (0x88)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.OnlineSystemChaf.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.OnlineSystemChaf.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.OnlineSystemChaf.TerminateBase
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.OnlineSystemChaf.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.OnlineSystemEpic
// Size: 0xA0(Inherited: 0x30)
struct UOnlineSystemEpic : UGameInstanceSubsystem
{
	char pad_48[112];  // 0x30 (0x30)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.OnlineSystemEpic.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.OnlineSystemEpic.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.OnlineSystemEpic.TerminateBase
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.OnlineSystemEpic.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.PartySession
// Size: 0xA8(Inherited: 0x28)
struct UPartySession : UObject
{
	char pad_40[88];  // 0x28 (0x28)
	struct UBaseObject* BaseObject;  // 0x80 (0x80)
	char pad_136[32];  // 0x88 (0x88)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.PartySession.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.PartySession.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.PartySession.TerminateBase
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.PartySession.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawler.PavisePropBase
// Size: 0x3F0(Inherited: 0x3E0)
struct APavisePropBase : APropsActorBase
{
	AItemHolderActorBase* ItemHolderClassToSpawn;  // 0x3E0 (0x3E0)
	float PushingForce;  // 0x3E8 (0x3E8)
	char pad_1004[4];  // 0x3EC (0x3EC)


}; 
 
 


// Class DungeonCrawler.PlayerCharacterCaptureActor
// Size: 0x428(Inherited: 0x2F0)
struct APlayerCharacterCaptureActor : ADCActorBase
{
	char pad_752[16];  // 0x2F0 (0x2F0)
	struct FDCAccountId TargetAccount;  // 0x300 (0x300)
	struct ADCPlayerCharacterBase* TargetPlayerCharacter;  // 0x310 (0x310)
	struct USceneComponent* RootSceneComponent;  // 0x318 (0x318)
	struct USkeletalMeshComponent* Mesh;  // 0x320 (0x320)
	struct USkeletalMeshComponent* PartHead;  // 0x328 (0x328)
	struct USkeletalMeshComponent* PartHelmet;  // 0x330 (0x330)
	struct USkeletalMeshComponent* PartGloves;  // 0x338 (0x338)
	struct USkeletalMeshComponent* PartChest;  // 0x340 (0x340)
	struct USkeletalMeshComponent* PartPants;  // 0x348 (0x348)
	struct USkeletalMeshComponent* PartBoots;  // 0x350 (0x350)
	struct USkeletalMeshComponent* PartBack;  // 0x358 (0x358)
	struct UAnimationAsset* DefaultIdleAnimation;  // 0x360 (0x360)
	float StartRotateLocation;  // 0x368 (0x368)
	char pad_876[4];  // 0x36C (0x36C)
	struct UAbilitySystemComponent* AbilitySystemComponent;  // 0x370 (0x370)
	struct UAnimationAsset* ItemStandIdleAnimation;  // 0x378 (0x378)
	struct UAccountLink* AccountLink;  // 0x380 (0x380)
	struct FString LinkedAccountId;  // 0x388 (0x388)
	struct FString CheckTargetAccountId;  // 0x398 (0x398)
	struct TWeakObjectPtr<UEquipmentInventoryComponent> CapturedEquipmentComponent;  // 0x3A8 (0x3A8)
	struct UDCCharacterDataComponent* DataComponent;  // 0x3B0 (0x3B0)
	struct UDCCharacterPartsComponent* PartsComponent;  // 0x3B8 (0x3B8)
	struct TMap<int64_t, struct AActor*> ContainingActorMap;  // 0x3C0 (0x3C0)
	char pad_1040[24];  // 0x410 (0x410)


	void SetStartRotateLocation(float InStartPosition); // Function DungeonCrawler.PlayerCharacterCaptureActor.SetStartRotateLocation
	void SetMeshRotationSpeedMultiplier(float Value); // Function DungeonCrawler.PlayerCharacterCaptureActor.SetMeshRotationSpeedMultiplier
	void SetMeshRotation(float InYaw); // Function DungeonCrawler.PlayerCharacterCaptureActor.SetMeshRotation
	void ResetMeshRotation(); // Function DungeonCrawler.PlayerCharacterCaptureActor.ResetMeshRotation
	void OnItemEquipped(struct UAnimationAsset* ItemStandIdle, struct FGameplayTag ItemHandType, struct FGameplayTag ItemSlotType); // Function DungeonCrawler.PlayerCharacterCaptureActor.OnItemEquipped
	struct UAnimInstance* GetCharacterMeshAnimInstance(); // Function DungeonCrawler.PlayerCharacterCaptureActor.GetCharacterMeshAnimInstance
}; 
 
 


// Class DungeonCrawler.PlayWidget
// Size: 0x508(Inherited: 0x440)
struct UPlayWidget : UDCCommonActivatableWidgetBase
{
	char pad_1088[16];  // 0x440 (0x440)
	struct FLobbyCharacterInfo LobbyCharacterData;  // 0x450 (0x450)
	struct UAccountLink* AccountLink;  // 0x4E0 (0x4E0)
	struct UCommonPopupSWidget* WB_CommonPopup_S;  // 0x4E8 (0x4E8)
	struct UDCCommonButtonBase* StartButton;  // 0x4F0 (0x4F0)
	char pad_1272[8];  // 0x4F8 (0x4F8)
	UDCReportPlayerResultPopup* ReportPlayerResultPopupClass;  // 0x500 (0x500)


	void OnUpdateLobbyCharacterData(struct FLobbyCharacterInfo& LobbyInfo); // Function DungeonCrawler.PlayWidget.OnUpdateLobbyCharacterData
	void OnUpdateDungeonSelectBtn(uint8_t GameDifficultyType); // Function DungeonCrawler.PlayWidget.OnUpdateDungeonSelectBtn
	void OnStartButtonClicked(); // Function DungeonCrawler.PlayWidget.OnStartButtonClicked
	void OnRegionSelected(int32_t RegionIndex); // Function DungeonCrawler.PlayWidget.OnRegionSelected
	void OnRegionDataSet(int32_t RegionIndex); // Function DungeonCrawler.PlayWidget.OnRegionDataSet
	void OnPopupSWidgetInvitePartyResponse(uint8_t PopupResult, struct FString ReturnAccountID); // Function DungeonCrawler.PlayWidget.OnPopupSWidgetInvitePartyResponse
	void OnPopupSWidgetInvitePartyRequest(struct UPopupDataBase* PopupData, struct FString ReturnAccountID); // Function DungeonCrawler.PlayWidget.OnPopupSWidgetInvitePartyRequest
	void OnPlayPartyUserInfoData(struct FPlayPartyUserInfoData& NewValue, struct FPlayPartyUserInfoData& OldValue); // Function DungeonCrawler.PlayWidget.OnPlayPartyUserInfoData
	void OnPlayPartyUserInfo(struct FPlayPartyUserInfo& PlayPartyUserInfo); // Function DungeonCrawler.PlayWidget.OnPlayPartyUserInfo
	void OnPlayPartyReadyStateChanged(bool bMine, bool bReady); // Function DungeonCrawler.PlayWidget.OnPlayPartyReadyStateChanged
	void OnPartyReadyButtonClicked(bool IsReady); // Function DungeonCrawler.PlayWidget.OnPartyReadyButtonClicked
	void OnPartyLocationSet(struct FPlayPartyUserInfo& PartyUser, int32_t MetaLocationIndex, bool IsReady); // Function DungeonCrawler.PlayWidget.OnPartyLocationSet
	void OnPartyExitButtonClicked(); // Function DungeonCrawler.PlayWidget.OnPartyExitButtonClicked
	void OnMatchStart(bool InbCanCancel, float InMatchCancelDelayTimeSec); // Function DungeonCrawler.PlayWidget.OnMatchStart
	void OnMatchCancel(); // Function DungeonCrawler.PlayWidget.OnMatchCancel
	void OnLeaderUpdated(bool IsPartyLeader); // Function DungeonCrawler.PlayWidget.OnLeaderUpdated
	void OnKarmaButtonClicked(); // Function DungeonCrawler.PlayWidget.OnKarmaButtonClicked
	void OnInvitePartyButtonClicked(uint8_t& UserLocate); // Function DungeonCrawler.PlayWidget.OnInvitePartyButtonClicked
	void OnGameUserSettingControlsChanged(struct FGameUserSettingControls& InGameUserSettingControls, struct FGameUserSettingControls& InOldGameUserSettingControls, bool bInForce); // Function DungeonCrawler.PlayWidget.OnGameUserSettingControlsChanged
	void OnDungeonSelectListPopupOpen(uint8_t GameDifficultyType, int32_t HighRollerFeeGold, int32_t HighRollerMinLevel, int32_t GoblinHighRollerFee, int32_t GoblinHighRollerMinLevel, bool bIsSolo); // Function DungeonCrawler.PlayWidget.OnDungeonSelectListPopupOpen
	void OnDungeonSelect(uint8_t GameDifficultyType); // Function DungeonCrawler.PlayWidget.OnDungeonSelect
	void OnClickedDungeonSelect(); // Function DungeonCrawler.PlayWidget.OnClickedDungeonSelect
	void OnChangedMatchingState(bool IsInMatching); // Function DungeonCrawler.PlayWidget.OnChangedMatchingState
	void OnCancelButtonClicked(); // Function DungeonCrawler.PlayWidget.OnCancelButtonClicked
	void CheckStartButtonEnable(); // Function DungeonCrawler.PlayWidget.CheckStartButtonEnable
	void AutoTeamRegisterSingle(bool IsRegister); // Function DungeonCrawler.PlayWidget.AutoTeamRegisterSingle
}; 
 
 


// Class DungeonCrawler.ProjectileActor
// Size: 0x6B0(Inherited: 0x300)
struct AProjectileActor : ADCAbilityActorBase
{
	char pad_768[48];  // 0x300 (0x300)
	struct USkeletalMeshComponent* Mesh;  // 0x330 (0x330)
	struct UProjectileMovementComponent* ProjectileMovement;  // 0x338 (0x338)
	char pad_832_1 : 7;  // 0x340 (0x340)
	bool bIsHomingProjectile : 1;  // 0x340 (0x340)
	char pad_833[3];  // 0x341 (0x341)
	float HomingMagnitude;  // 0x344 (0x344)
	float GravityScale;  // 0x348 (0x348)
	char pad_844[4];  // 0x34C (0x34C)
	struct USceneComponent* HomingTargetComponent;  // 0x350 (0x350)
	struct USceneComponent* OldHomingTargetComponent;  // 0x358 (0x358)
	char pad_864[8];  // 0x360 (0x360)
	struct FVector ProjectileMovementComponentLocalVelocity;  // 0x368 (0x368)
	struct FVector ProjectileMovementComponentVelocity;  // 0x380 (0x380)
	struct UDCProjectileDataAsset* ProjectileDataAsset;  // 0x398 (0x398)
	int32_t PierceCount;  // 0x3A0 (0x3A0)
	char pad_932_1 : 7;  // 0x3A4 (0x3A4)
	bool IsObstaclePierce : 1;  // 0x3A4 (0x3A4)
	char pad_933[3];  // 0x3A5 (0x3A5)
	int32_t ObstaclePierceDecrease;  // 0x3A8 (0x3A8)
	float LifeTime;  // 0x3AC (0x3AC)
	struct TArray<struct FGameplayTag> AbilityTriggerTagsWhenLifeTimeExpired;  // 0x3B0 (0x3B0)
	char pad_960[8];  // 0x3C0 (0x3C0)
	struct TArray<struct FPrimaryAssetId> AddEffectToTargetHit;  // 0x3C8 (0x3C8)
	struct TArray<struct FPrimaryAssetId> AddEffectToGroundHit;  // 0x3D8 (0x3D8)
	char pad_1000[8];  // 0x3E8 (0x3E8)
	struct FTransform SpawnTransform;  // 0x3F0 (0x3F0)
	struct FItemData ProjectileItemData;  // 0x450 (0x450)
	struct UArtDataItem* ProjectileItemArtData;  // 0x4F0 (0x4F0)
	struct FItemData AmmoItemData;  // 0x4F8 (0x4F8)
	struct UCurveFloat* AccelerationCurve;  // 0x598 (0x598)
	float StartTime_AccelTimeline;  // 0x5A0 (0x5A0)
	float PlayRate_AccelTimeline;  // 0x5A4 (0x5A4)
	char pad_1448_1 : 7;  // 0x5A8 (0x5A8)
	bool IsLoop_AccelTimeline : 1;  // 0x5A8 (0x5A8)
	char pad_1449[7];  // 0x5A9 (0x5A9)
	struct FTimeline AccelrationTimeline;  // 0x5B0 (0x5B0)
	struct USoundData* SoundData;  // 0x648 (0x648)
	struct TArray<struct FGameplayAbilitySpecHandle> GameplayAbilitySpecHandles;  // 0x650 (0x650)
	struct TArray<struct FActiveGameplayEffectHandle> GameplayEffectHandles;  // 0x660 (0x660)
	char pad_1648[32];  // 0x670 (0x670)
	char pad_1680_1 : 7;  // 0x690 (0x690)
	bool bShouldAttachWhenHitCharacter : 1;  // 0x690 (0x690)
	char pad_1681_1 : 7;  // 0x691 (0x691)
	bool bShouldAttachWhenHitShield : 1;  // 0x691 (0x691)
	char pad_1682_1 : 7;  // 0x692 (0x692)
	bool bShouldAttachWhenHitStaticObject : 1;  // 0x692 (0x692)
	char pad_1683_1 : 7;  // 0x693 (0x693)
	bool bShouldAliveAfterHit : 1;  // 0x693 (0x693)
	char pad_1684[28];  // 0x694 (0x694)


	void TimelineUpdateEvent(float Value, float TimelinePosition); // Function DungeonCrawler.ProjectileActor.TimelineUpdateEvent
	void TimelineFinishedEvent(); // Function DungeonCrawler.ProjectileActor.TimelineFinishedEvent
	void StopPierce(); // Function DungeonCrawler.ProjectileActor.StopPierce
	void SetHomingTargetComponent(struct USceneComponent* InHomingTargetComponent); // Function DungeonCrawler.ProjectileActor.SetHomingTargetComponent
	void SetHomingMagnitude(float InHomingMagnitude); // Function DungeonCrawler.ProjectileActor.SetHomingMagnitude
	void SetAddEffectToTargetHit(struct TArray<struct FPrimaryAssetId> AddEffectList); // Function DungeonCrawler.ProjectileActor.SetAddEffectToTargetHit
	void SetAddEffectToGroundtHit(struct TArray<struct FPrimaryAssetId> AddEffectList); // Function DungeonCrawler.ProjectileActor.SetAddEffectToGroundtHit
	void ProjectileHit(struct FHitResult& Hit, bool bIsAttached, struct FTransform& ActorPrevTickTransform); // Function DungeonCrawler.ProjectileActor.ProjectileHit
	void PlayPierce(float SetPierceCount, bool SetObstaclePierce, float SetObstaclePierceDecrease); // Function DungeonCrawler.ProjectileActor.PlayPierce
	void OnRep_ProjectileMovementComponentVelocity(); // Function DungeonCrawler.ProjectileActor.OnRep_ProjectileMovementComponentVelocity
	void OnRep_ProjectileMovementComponentLocalVelocity(); // Function DungeonCrawler.ProjectileActor.OnRep_ProjectileMovementComponentLocalVelocity
	void OnRep_ProjectileGravityScale(); // Function DungeonCrawler.ProjectileActor.OnRep_ProjectileGravityScale
	void OnRep_IsHomingProjectile(); // Function DungeonCrawler.ProjectileActor.OnRep_IsHomingProjectile
	void OnRep_HomingTargetComponent(); // Function DungeonCrawler.ProjectileActor.OnRep_HomingTargetComponent
	void OnRep_HomingMagnitude(); // Function DungeonCrawler.ProjectileActor.OnRep_HomingMagnitude
	void OnLifeTimeExpired(); // Function DungeonCrawler.ProjectileActor.OnLifeTimeExpired
	void OnHomingTargetDeath(struct FGameplayTag InGameplayTag, int32_t InCount); // Function DungeonCrawler.ProjectileActor.OnHomingTargetDeath
	bool MatchesProjectileSourceTypeTagExact(struct FGameplayTag& CheckGameplayTag); // Function DungeonCrawler.ProjectileActor.MatchesProjectileSourceTypeTagExact
	void LifeTimeExpired(); // Function DungeonCrawler.ProjectileActor.LifeTimeExpired
	void InitVelocity(float FirePower); // Function DungeonCrawler.ProjectileActor.InitVelocity
	float InitialSpeed(); // Function DungeonCrawler.ProjectileActor.InitialSpeed
	void InitArrivalVelocity(struct FVector Velocity); // Function DungeonCrawler.ProjectileActor.InitArrivalVelocity
	void HandleTimelineUpdate(float Value); // Function DungeonCrawler.ProjectileActor.HandleTimelineUpdate
	void HandleTimelineFinished(); // Function DungeonCrawler.ProjectileActor.HandleTimelineFinished
	struct TArray<struct FPrimaryAssetId> GetAddEffectToTargetHit(); // Function DungeonCrawler.ProjectileActor.GetAddEffectToTargetHit
	struct TArray<struct FPrimaryAssetId> GetAddEffectToGroundHit(); // Function DungeonCrawler.ProjectileActor.GetAddEffectToGroundHit
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function DungeonCrawler.ProjectileActor.GameplayTagUpdated
}; 
 
 


// Class DungeonCrawler.DCPropDataComponent
// Size: 0xD0(Inherited: 0xD0)
struct UDCPropDataComponent : UDCDataComponent
{


}; 
 
 


// Class DungeonCrawler.SpellActor
// Size: 0x428(Inherited: 0x2F0)
struct ASpellActor : ADCActorBase
{
	char pad_752[232];  // 0x2F0 (0x2F0)
	struct FSpellData SpellData;  // 0x3D8 (0x3D8)
	char pad_1044[4];  // 0x414 (0x414)
	struct UArtDataSpell* ArtDataSpell;  // 0x418 (0x418)
	struct USoundData* SoundData;  // 0x420 (0x420)


	void OnRep_SpellData(struct FSpellData& OldSpellData); // Function DungeonCrawler.SpellActor.OnRep_SpellData
	struct FSpellData GetSpellData(); // Function DungeonCrawler.SpellActor.GetSpellData
	struct USoundData* GetSoundDataSpell(); // Function DungeonCrawler.SpellActor.GetSoundDataSpell
	struct FDesignDataSpell GetDesignDataSpell(); // Function DungeonCrawler.SpellActor.GetDesignDataSpell
	struct UArtDataSpell* GetArtDataSpell(); // Function DungeonCrawler.SpellActor.GetArtDataSpell
}; 
 
 


// Class DungeonCrawler.SampleSubObject
// Size: 0x80(Inherited: 0x28)
struct USampleSubObject : UObject
{
	char pad_40[88];  // 0x28 (0x28)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.SampleSubObject.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.SampleSubObject.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.SampleSubObject.TerminateBase
	void InitializeSampleSubObject(); // Function DungeonCrawler.SampleSubObject.InitializeSampleSubObject
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.SampleSubObject.BroadcastMsgBlueprint
	void BeginSampleSubObject(); // Function DungeonCrawler.SampleSubObject.BeginSampleSubObject
}; 
 
 


// Class DungeonCrawler.SampleObject
// Size: 0x98(Inherited: 0x28)
struct USampleObject : UObject
{
	char pad_40[88];  // 0x28 (0x28)
	struct UBaseObject* BaseObject;  // 0x80 (0x80)
	USampleSubObject* SampleSubObjectClass;  // 0x88 (0x88)
	struct USampleSubObject* SampleSubObject;  // 0x90 (0x90)


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawler.SampleObject.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawler.SampleObject.UnbindMsg
	void TerminateBase(); // Function DungeonCrawler.SampleObject.TerminateBase
	void InitializeSampleObject(); // Function DungeonCrawler.SampleObject.InitializeSampleObject
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawler.SampleObject.BroadcastMsgBlueprint
	void BeginSampleObject(); // Function DungeonCrawler.SampleObject.BeginSampleObject
}; 
 
 


// Class DungeonCrawler.SkeletalMeshItemHolderActor
// Size: 0x3F8(Inherited: 0x3F8)
struct ASkeletalMeshItemHolderActor : AItemHolderActorBase
{


}; 
 
 


// Class DungeonCrawler.SoundBlueprintLibrary
// Size: 0x28(Inherited: 0x28)
struct USoundBlueprintLibrary : UBlueprintFunctionLibrary
{


	bool SetSwitch(struct UObject* InSoundPlayer, struct UAkSwitchValue* AkSwitchValue); // Function DungeonCrawler.SoundBlueprintLibrary.SetSwitch
	bool SetRTPCValue(struct UObject* InSoundPlayer, struct UAkRtpc* RtpcValue, float Value, int32_t InterpolationTimeMs); // Function DungeonCrawler.SoundBlueprintLibrary.SetRTPCValue
	bool PlaySoundWithTag(struct UObject* InSoundPlayer, struct UObject* InSoundProvider, struct FGameplayTag& Tag); // Function DungeonCrawler.SoundBlueprintLibrary.PlaySoundWithTag
	bool PlaySoundWithSwitch(struct UObject* InSoundPlayer, struct UAkAudioEvent* AkEvent, struct UObject* InSoundProvider, struct FGameplayTag& Tag, enum class EPhysicalSurface Surface, struct FString SwitchGroup, struct FString SwitchState); // Function DungeonCrawler.SoundBlueprintLibrary.PlaySoundWithSwitch
	bool PlaySoundOnPlayerController(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent); // Function DungeonCrawler.SoundBlueprintLibrary.PlaySoundOnPlayerController
	bool PlaySound(struct UObject* InSoundPlayer, struct UAkAudioEvent* AkEvent); // Function DungeonCrawler.SoundBlueprintLibrary.PlaySound
	bool IsSoundPlayable(struct UObject* InSoundPlayer, struct UObject* InSoundProvider, struct FGameplayTag InSoundEventTag); // Function DungeonCrawler.SoundBlueprintLibrary.IsSoundPlayable
	bool IsMute(); // Function DungeonCrawler.SoundBlueprintLibrary.IsMute
}; 
 
 


// Class DungeonCrawler.SoundData
// Size: 0x128(Inherited: 0x38)
struct USoundData : UDCDataAssetBase
{
	struct TMap<struct FGameplayTag, struct UAkAudioEvent*> AkEventByGameplayTag;  // 0x38 (0x38)
	struct TMap<struct FGameplayTag, struct FDCSoundDataContainer> AkSwitchesByGameplayTag;  // 0x88 (0x88)
	struct TMap<struct FGameplayTag, struct FGameplayTagQuery> SoundPlayableTagQuery;  // 0xD8 (0xD8)


}; 
 
 


// Class DungeonCrawler.SoundProvider
// Size: 0x28(Inherited: 0x28)
struct USoundProvider : UInterface
{


	struct FGameplayTagQuery GetTagQuery(struct FGameplayTag& Tag); // Function DungeonCrawler.SoundProvider.GetTagQuery
	struct TMap<struct FGameplayTag, struct FGameplayTagQuery> GetTagQueries(); // Function DungeonCrawler.SoundProvider.GetTagQueries
	struct TMap<struct FGameplayTag, struct FDCSoundDataContainer> GetSwitches(); // Function DungeonCrawler.SoundProvider.GetSwitches
	struct UAkSwitchValue* GetSwitch(struct FGameplayTag& Tag, enum class EPhysicalSurface Surface); // Function DungeonCrawler.SoundProvider.GetSwitch
	struct FPrimaryAssetId GetLastPrimaryAssetId(); // Function DungeonCrawler.SoundProvider.GetLastPrimaryAssetId
	struct TMap<struct FGameplayTag, struct UAkAudioEvent*> GetEvents(); // Function DungeonCrawler.SoundProvider.GetEvents
	struct UAkAudioEvent* GetEvent(struct FGameplayTag& Tag); // Function DungeonCrawler.SoundProvider.GetEvent
}; 
 
 


// Class DungeonCrawler.TestItemInjectionWidgetBase
// Size: 0x3D0(Inherited: 0x2A0)
struct UTestItemInjectionWidgetBase : UCommonUserWidget
{
	struct UDCCommonButtonBase* RemoveSelectionButton;  // 0x2A0 (0x2A0)
	struct UDCCommonButtonBase* InjectButton;  // 0x2A8 (0x2A8)
	struct UListView* ItemListView;  // 0x2B0 (0x2B0)
	struct UListView* ItemPropertyListView;  // 0x2B8 (0x2B8)
	struct UListView* ItemRarityListView;  // 0x2C0 (0x2C0)
	struct UListView* ItemTypeListView;  // 0x2C8 (0x2C8)
	struct UEditableText* ItemEditableSearchText;  // 0x2D0 (0x2D0)
	struct UEditableText* PropertyEditableSearchText;  // 0x2D8 (0x2D8)
	struct UVerticalBox* SelectedPropertyVerticalBox;  // 0x2E0 (0x2E0)
	UInjectionItemSelectedPropertyWidgetBase* SelectedPropertyWidget;  // 0x2E8 (0x2E8)
	struct UEditableText* GenerateCountText;  // 0x2F0 (0x2F0)
	struct FText FailedLogText;  // 0x2F8 (0x2F8)
	struct TArray<struct UInjectionItemListEntryWidgetData*> ItemEntryDataList;  // 0x310 (0x310)
	struct TArray<struct UInjectionItemPropertyListEntryWidgetData*> PropertyEntryDataList;  // 0x320 (0x320)
	char pad_816[160];  // 0x330 (0x330)


	void RemoveAllSelections(); // Function DungeonCrawler.TestItemInjectionWidgetBase.RemoveAllSelections
	void OnSelectedPropertyValueChanged(struct FPrimaryAssetId& PropertyTypeAssetId, int32_t InPropertyValue); // Function DungeonCrawler.TestItemInjectionWidgetBase.OnSelectedPropertyValueChanged
	void OnSearchTextChanged(struct FText& InText); // Function DungeonCrawler.TestItemInjectionWidgetBase.OnSearchTextChanged
	void OnPropertySearchTextChanged(struct FText& InText); // Function DungeonCrawler.TestItemInjectionWidgetBase.OnPropertySearchTextChanged
	void OnItemTypeSelected(struct UObject* WidgetData); // Function DungeonCrawler.TestItemInjectionWidgetBase.OnItemTypeSelected
	void OnItemSelected(struct UObject* WidgetData); // Function DungeonCrawler.TestItemInjectionWidgetBase.OnItemSelected
	void OnItemRaritySelected(struct UObject* WidgetData); // Function DungeonCrawler.TestItemInjectionWidgetBase.OnItemRaritySelected
	void OnItemPropertySelected(struct UObject* WidgetData); // Function DungeonCrawler.TestItemInjectionWidgetBase.OnItemPropertySelected
	void OnGenerateCountTextChanged(struct FText& InText); // Function DungeonCrawler.TestItemInjectionWidgetBase.OnGenerateCountTextChanged
	void GenerateItemsAndRequestInjection(); // Function DungeonCrawler.TestItemInjectionWidgetBase.GenerateItemsAndRequestInjection
}; 
 
 


// Class DungeonCrawler.TradeChannelButtonBase
// Size: 0x15B0(Inherited: 0x1580)
struct UTradeChannelButtonBase : UDCCommonButtonBase
{
	char pad_5504[48];  // 0x1580 (0x1580)


	void SetMemberText(int32_t InMemberCount); // Function DungeonCrawler.TradeChannelButtonBase.SetMemberText
	void SetChannelName(struct FText& InChannelName, int32_t InIndex); // Function DungeonCrawler.TradeChannelButtonBase.SetChannelName
	void OnChannelButtonClicked(); // Function DungeonCrawler.TradeChannelButtonBase.OnChannelButtonClicked
}; 
 
 


// Class DungeonCrawler.TradeChannelChatWidget
// Size: 0x598(Inherited: 0x3B8)
struct UTradeChannelChatWidget : UChatSetWidgetBase
{
	struct UDCCommonButtonBase* Btn_ReadRules;  // 0x3B8 (0x3B8)
	struct UChatFilterWidget* TypeChatFilterWidget;  // 0x3C0 (0x3C0)
	struct UChatFilterWidget* IdTagChatFilterWidget;  // 0x3C8 (0x3C8)
	struct UChatFilterWidget* RarityChatFilterWidget;  // 0x3D0 (0x3D0)
	struct UChatFilterWidget* PropertyChatFilterWidget;  // 0x3D8 (0x3D8)
	struct UDCChatRoomDataAsset* ChatRoomData;  // 0x3E0 (0x3E0)
	struct FText ChannelName;  // 0x3E8 (0x3E8)
	struct FTradeChannelChatWidgetData WidgetData;  // 0x400 (0x400)
	char pad_1104[328];  // 0x450 (0x450)


	void OnTypeChatFilterReset(); // Function DungeonCrawler.TradeChannelChatWidget.OnTypeChatFilterReset
	void OnRemoveTypeChatFilterTag(struct FGameplayTag& InChatFilterTag); // Function DungeonCrawler.TradeChannelChatWidget.OnRemoveTypeChatFilterTag
	void OnRemoveRarityChatFilterTag(struct FGameplayTag& InChatFilterTag); // Function DungeonCrawler.TradeChannelChatWidget.OnRemoveRarityChatFilterTag
	void OnRemovePropertyChatFilterTag(struct FGameplayTag& InChatFilterTag); // Function DungeonCrawler.TradeChannelChatWidget.OnRemovePropertyChatFilterTag
	void OnRemoveIdTagChatFilterTag(struct FGameplayTag& InChatFilterTag); // Function DungeonCrawler.TradeChannelChatWidget.OnRemoveIdTagChatFilterTag
	void OnReadRulesButtonClicked(); // Function DungeonCrawler.TradeChannelChatWidget.OnReadRulesButtonClicked
	void OnRarityChatFilterReset(); // Function DungeonCrawler.TradeChannelChatWidget.OnRarityChatFilterReset
	void OnPropertyChatFilterReset(); // Function DungeonCrawler.TradeChannelChatWidget.OnPropertyChatFilterReset
	void OnIdTagChatFilterReset(); // Function DungeonCrawler.TradeChannelChatWidget.OnIdTagChatFilterReset
	void OnChatType(uint8_t NewItemData, uint8_t OldItemData); // Function DungeonCrawler.TradeChannelChatWidget.OnChatType
	void OnChatAccountData(struct FChatAccountData& NewItemData, struct FChatAccountData& OldItemData); // Function DungeonCrawler.TradeChannelChatWidget.OnChatAccountData
	void OnAddTypeChatFilterTag(struct FGameplayTag& InChatFilterTag); // Function DungeonCrawler.TradeChannelChatWidget.OnAddTypeChatFilterTag
	void OnAddRarityChatFilterTag(struct FGameplayTag& InChatFilterTag); // Function DungeonCrawler.TradeChannelChatWidget.OnAddRarityChatFilterTag
	void OnAddPropertyChatFilterTag(struct FGameplayTag& InChatFilterTag); // Function DungeonCrawler.TradeChannelChatWidget.OnAddPropertyChatFilterTag
	void OnAddIdTagChatFilterTag(struct FGameplayTag& InChatFilterTag); // Function DungeonCrawler.TradeChannelChatWidget.OnAddIdTagChatFilterTag
}; 
 
 


// Class DungeonCrawler.TradeChannelListWidget
// Size: 0x370(Inherited: 0x300)
struct UTradeChannelListWidget : UDCWidgetBase
{
	UTradeChannelButtonBase* ChannelButtonWidgetClass;  // 0x300 (0x300)
	UDCTradeChannelCategoryWidget* ChannelCategoryWidgetClass;  // 0x308 (0x308)
	struct UScrollBox* ScrollBox_ChannelList;  // 0x310 (0x310)
	struct UOverlay* Overlay_DisableSelection;  // 0x318 (0x318)
	char pad_800[80];  // 0x320 (0x320)


}; 
 
 


// Class DungeonCrawler.TradeMasterWidget
// Size: 0x310(Inherited: 0x300)
struct UTradeMasterWidget : UDCWidgetBase
{
	struct UCommonButtonLWidget* WB_CommonBtn_BecomeTrader;  // 0x300 (0x300)
	struct UTextBlock* Text_TradingMasterConversation;  // 0x308 (0x308)


	void SendTradeSubscriptionWidgetBeginNotify(); // Function DungeonCrawler.TradeMasterWidget.SendTradeSubscriptionWidgetBeginNotify
}; 
 
 


// Class DungeonCrawler.TradeUserListEntryWidgetData
// Size: 0x90(Inherited: 0x28)
struct UTradeUserListEntryWidgetData : UObject
{
	char pad_40[104];  // 0x28 (0x28)


}; 
 
 


// Class DungeonCrawler.TradeUserListWidget
// Size: 0x360(Inherited: 0x300)
struct UTradeUserListWidget : UDCWidgetBase
{
	struct FText TraderNumText;  // 0x300 (0x300)
	struct ULobbyUserSlotBase* TradeUser_Local;  // 0x318 (0x318)
	struct UTileView* TileView_UserList;  // 0x320 (0x320)
	struct UEditableTextBox* FindUserEditableTextBox;  // 0x328 (0x328)
	char pad_816[32];  // 0x330 (0x330)
	struct TArray<struct UTradeUserListEntryWidgetData*> TradeUserList;  // 0x350 (0x350)


	void OnTextChanged(struct FText& FindId); // Function DungeonCrawler.TradeUserListWidget.OnTextChanged
	void OnBlockUpdated(); // Function DungeonCrawler.TradeUserListWidget.OnBlockUpdated
}; 
 
 


// Class DungeonCrawler.VoipUserWidget
// Size: 0x340(Inherited: 0x300)
struct UVoipUserWidget : UDCWidgetBase
{
	struct FVoipUserWidgetData WidgetData;  // 0x300 (0x300)
	char pad_824_1 : 7;  // 0x338 (0x338)
	bool bMine : 1;  // 0x338 (0x338)
	char pad_825_1 : 7;  // 0x339 (0x339)
	bool bSameParty : 1;  // 0x339 (0x339)
	char pad_826[6];  // 0x33A (0x33A)


	void SetVoipUserData(struct FVoipUserData& InVoipUserData); // Function DungeonCrawler.VoipUserWidget.SetVoipUserData
	void SetVoipPartyData(struct FVoipPartyData& InVoipPartyData); // Function DungeonCrawler.VoipUserWidget.SetVoipPartyData
	void SetAccountId(struct FDCAccountId& InAccountId); // Function DungeonCrawler.VoipUserWidget.SetAccountId
	void OnVoipVolumeChanged(float InVoipVolume); // Function DungeonCrawler.VoipUserWidget.OnVoipVolumeChanged
	void OnVoipUserData(struct FVoipUserData& NewValue, struct FVoipUserData& OldValue); // Function DungeonCrawler.VoipUserWidget.OnVoipUserData
	void OnVoipPartyData(struct FVoipPartyData& NewValue, struct FVoipPartyData& OldValue); // Function DungeonCrawler.VoipUserWidget.OnVoipPartyData
	void OnMuteButtonClicked(); // Function DungeonCrawler.VoipUserWidget.OnMuteButtonClicked
	void OnAccountId(struct FDCAccountId& NewValue, struct FDCAccountId& OldValue); // Function DungeonCrawler.VoipUserWidget.OnAccountId
}; 
 
 


