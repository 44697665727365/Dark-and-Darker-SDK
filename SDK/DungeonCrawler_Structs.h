#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// DelegateFunction DungeonCrawler.TargetActorOverlapSignature__DelegateSignature
struct FTargetActorOverlapSignature__DelegateSignature
{
	struct AActor* OverlapActor;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCommunityBlockWidget.NumItemsPerPage
struct FNumItemsPerPage
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.EquipmentInventoryComponent.OnRep_QuickSlotData
struct FOnRep_QuickSlotData
{
	struct FDCQuickSlotData OldQuickSlotData;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgInteractStarted
// Size: 0x28(Inherited: 0x18)
struct FMsgInteractStarted : FMsgBase
{
	struct AActor* Interacter;  // 0x18 (0x18)
	struct FGameplayTag EventTag;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataGameplayAbility
struct FDesignDataGameplayAbility
{
	struct FText Name;  // 0x0 (0x0)
	struct FGameplayTag AttackType;  // 0x18 (0x18)
	UGameplayAbility* Class;  // 0x20 (0x20)
	struct TArray<struct FPrimaryAssetId> Effects;  // 0x28 (0x28)
	struct FPrimaryAssetId Desc;  // 0x38 (0x38)
	struct TArray<struct FPrimaryAssetId> MovementModifiers;  // 0x48 (0x48)


}; 
 
 // ScriptStruct DungeonCrawler.MsgSpellRecharge
// Size: 0x20(Inherited: 0x18)
struct FMsgSpellRecharge : FMsgBase
{
	int32_t RechargeAmount;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // DelegateFunction DungeonCrawler.DCWaitForGameplayEventsDelegate__DelegateSignature
struct FDCWaitForGameplayEventsDelegate__DelegateSignature
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.DCGameEnterUser
struct FDCGameEnterUser
{
	struct FNickname Nickname;  // 0x0 (0x0)
	struct FString CharacterClassStr;  // 0x28 (0x28)
	struct FDCCharacterId CharacterId;  // 0x38 (0x38)
	uint8_t Gender;  // 0x48 (0x48)
	char pad_73[3];  // 0x49 (0x49)
	uint32_t Level;  // 0x4C (0x4C)
	struct FDCPartyId PartyId;  // 0x50 (0x50)


}; 
 
 // ScriptStruct DungeonCrawler.PartyData
struct FPartyData
{
	struct FString PartyId;  // 0x0 (0x0)
	struct TArray<struct FPartyMemberData> PartyMemberDataArray;  // 0x10 (0x10)


}; 
 
 // DelegateFunction DungeonCrawler.ChatEditFocusDelegate__DelegateSignature
struct FChatEditFocusDelegate__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InbFocused : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusWidget.OnAgility
struct FOnAgility
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgInventorySwapResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgInventorySwapResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgInventorySingleUpdateRequest
// Size: 0x48(Inherited: 0x20)
struct FClientMsgInventorySingleUpdateRequest : FRequestMsg
{
	char pad_32[40];  // 0x20 (0x20)


}; 
 
 // DelegateFunction DungeonCrawler.OnKeySelected__DelegateSignature
struct FOnKeySelected__DelegateSignature
{
	struct FKey Key;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCFloorRuleManager
struct FDCFloorRuleManager
{
	struct UDCFloorRuleDataAsset* Data;  // 0x0 (0x0)
	struct FDCCircle RootArea;  // 0x8 (0x8)
	struct TArray<struct FDCFloorRuleInfo> Rules;  // 0x20 (0x20)
	char pad_48[8];  // 0x30 (0x30)


}; 
 
 // DelegateFunction DungeonCrawler.OnGameplayEffectInhibitionChanged__DelegateSignature
struct FOnGameplayEffectInhibitionChanged__DelegateSignature
{
	struct FGameplayTag EffectGameplayTag;  // 0x0 (0x0)
	struct FActiveGameplayEffectHandle Handle;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bIsInhibited : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradeRequestNotify
// Size: 0x50(Inherited: 0x18)
struct FClientMsgTradeRequestNotify : FMsgBase
{
	char pad_24[56];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DesignDataAssetItemRequirement.IsFulfilledAllRequirements
struct FIsFulfilledAllRequirements
{
	struct FDesignDataItem DesignDataItem;  // 0x0 (0x0)
	struct FPrimaryAssetId PlayerCharacterId;  // 0x188 (0x188)
	struct UDCAttributeSet* AttributeSet;  // 0x198 (0x198)
	struct TArray<struct FPrimaryAssetId> PerkIdArray;  // 0x1A0 (0x1A0)
	struct FGameplayTagContainer GameplayTagContainer;  // 0x1B0 (0x1B0)
	struct AActor* TargetActor;  // 0x1D0 (0x1D0)
	char pad_472_1 : 7;  // 0x1D8 (0x1D8)
	bool ReturnValue : 1;  // 0x1D8 (0x1D8)
	char pad_473[7];  // 0x1D9 (0x1D9)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetCreateCharacterErrorMessageNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgWidgetCreateCharacterErrorMessageNotify : FMsgBase
{
	struct FText CreateCharacterErrorMessage;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgRankingCharacterResponse
// Size: 0xB0(Inherited: 0x18)
struct FClientMsgRankingCharacterResponse : FMsgBase
{
	char pad_24[152];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetTradeChatUserListUpdateNotify
// Size: 0x28(Inherited: 0x18)
struct FMsgWidgetTradeChatUserListUpdateNotify : FMsgBase
{
	char pad_24[16];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgCustomizeUnmountResponse
// Size: 0x30(Inherited: 0x18)
struct FClientMsgCustomizeUnmountResponse : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCIngameInventoryPageWidget.OnTargetAccountUpdated
struct FOnTargetAccountUpdated
{
	struct FDCAccountId New;  // 0x0 (0x0)
	struct FDCAccountId Old;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCShopCurrencyTypeSelectPopupBase.IsBluestoneShardSelected
struct FIsBluestoneShardSelected
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.InteractableTargetComponent.CanInteract
struct FCanInteract
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // DelegateFunction DungeonCrawler.ChatDataChangedDelegate__DelegateSignature
struct FChatDataChangedDelegate__DelegateSignature
{
	struct FText InText;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCShopItemInfo
struct FDCShopItemInfo
{
	struct UDCShopDataAsset* Data;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bIsOwnedItem : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct UDCTableDataAsset* StockData;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCMonsterBase.OnRep_MonsterId
struct FOnRep_MonsterId
{
	struct FPrimaryAssetId InOldMonsterId;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradeRequestRequest
// Size: 0x68(Inherited: 0x20)
struct FClientMsgTradeRequestRequest : FRequestMsg
{
	char pad_32[72];  // 0x20 (0x20)


}; 
 
 // DelegateFunction DungeonCrawler.DCOnSliderValueDelegate__DelegateSignature
struct FDCOnSliderValueDelegate__DelegateSignature
{
	float SliderValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ItemCountSelectWidget.OnTextBlockValueChanged
struct FOnTextBlockValueChanged
{
	struct FText Text;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCommunityBlockWidget.OnEntryHovered
struct FOnEntryHovered
{
	struct UObject* WidgetData;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bIsHovered : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // DelegateFunction DungeonCrawler.CameraPostProcessComponentUpdateDelegate__DelegateSignature
struct FCameraPostProcessComponentUpdateDelegate__DelegateSignature
{
	float CurrentValue;  // 0x0 (0x0)
	enum class ETimelineDirection InTimelineDirection;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct UMaterialInstanceDynamic* MIDKey;  // 0x8 (0x8)


}; 
 
 // DelegateFunction DungeonCrawler.ClassIconSelectedDelegate__DelegateSignature
struct FClassIconSelectedDelegate__DelegateSignature
{
	struct FPrimaryAssetId InCharacterClassId;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.SlotInfo
struct FSlotInfo
{
	int32_t Index;  // 0x0 (0x0)
	int32_t Row;  // 0x4 (0x4)
	int64_t ItemUniqueId;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCHitBoxComponent.GetClosestLocationOnMesh
struct FGetClosestLocationOnMesh
{
	struct FHitResult InHitResult;  // 0x0 (0x0)
	struct AActor* Instigator;  // 0xE8 (0xE8)
	struct FVector ReturnValue;  // 0xF0 (0xF0)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnMoveSpeedWithModifier
struct FOnMoveSpeedWithModifier
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalDamageBase
struct FOnRep_PhysicalDamageBase
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.PartyChatWidgetData
struct FPartyChatWidgetData
{
	struct FChatAccountData ChatAccountData;  // 0x0 (0x0)


}; 
 
 // DelegateFunction DungeonCrawler.CameraPostProcessDataTimelineUpdateDelegate__DelegateSignature
struct FCameraPostProcessDataTimelineUpdateDelegate__DelegateSignature
{
	float CurrentValue;  // 0x0 (0x0)
	enum class ETimelineDirection TimelineDirection;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct UMaterialInstanceDynamic* InMIDKey;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgAccountAgreeAnswerResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgAccountAgreeAnswerResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.PerkData
struct FPerkData
{
	struct FPrimaryAssetId PerkId;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameEmoteSlotWidget.OnSetEmoteArtData
struct FOnSetEmoteArtData
{
	struct UArtDataEmote* InArtEmoteData;  // 0x0 (0x0)


}; 
 
 // DelegateFunction DungeonCrawler.ChatFilterTagDelegate__DelegateSignature
struct FChatFilterTagDelegate__DelegateSignature
{
	struct FGameplayTag InChatFilterTag;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCGameplayEffectContext
// Size: 0x1D8(Inherited: 0x80)
struct FDCGameplayEffectContext : FGameplayEffectContext
{
	char pad_128[320];  // 0x80 (0x80)
	struct TArray<struct FItemData> ItemDatas;  // 0x1C0 (0x1C0)
	char pad_464_1 : 7;  // 0x1D0 (0x1D0)
	bool bActivatedQuickSlotEvent : 1;  // 0x1D0 (0x1D0)
	char pad_465[7];  // 0x1D1 (0x1D1)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgMerchantListResponse
// Size: 0x28(Inherited: 0x18)
struct FClientMsgMerchantListResponse : FMsgBase
{
	char pad_24[16];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SortTargetsByXYRange
struct FSortTargetsByXYRange
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x8 (0x8)
	uint8_t MonsterFilterSortingType;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool ReturnValue : 1;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)


}; 
 
 // Function DungeonCrawler.PlayWidget.OnPartyReadyButtonClicked
struct FOnPartyReadyButtonClicked
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsReady : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetPlayBeginNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetPlayBeginNotify : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgShopRedStoneShardInfoRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgShopRedStoneShardInfoRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // DelegateFunction DungeonCrawler.GameMenuOptionSlotSelectedDelegate__DelegateSignature
struct FGameMenuOptionSlotSelectedDelegate__DelegateSignature
{
	int32_t InSlotIdx;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalDamageTrue
struct FOnRep_PhysicalDamageTrue
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPlayerController.ReportPlayer_Server
struct FReportPlayer_Server
{
	struct FDCReportPlayerInfo InReportPlayerInfo;  // 0x0 (0x0)


}; 
 
 // DelegateFunction DungeonCrawler.DCAimTraceToSocketTargetActorDelegate__DelegateSignature
struct FDCAimTraceToSocketTargetActorDelegate__DelegateSignature
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCActorStatusComponent.OnRep_ActorStatusDatas
struct FOnRep_ActorStatusDatas
{
	struct TArray<struct FActorStatusData> OldActorStatusDatas;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataTriumphLevel
struct FDesignDataTriumphLevel
{
	int32_t ExpForNextLevel;  // 0x0 (0x0)
	int32_t TotalExp;  // 0x4 (0x4)


}; 
 
 // Function DungeonCrawler.DCCharacterBase.OnSetPerspective
struct FOnSetPerspective
{
	struct APlayerController* InPlayerController;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bInIsFirstPersonPerspective : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // DelegateFunction DungeonCrawler.DCMovementModeChangedDelegate__DelegateSignature
struct FDCMovementModeChangedDelegate__DelegateSignature
{
	enum class EMovementMode PrevMovementMode;  // 0x0 (0x0)
	enum class EMovementMode NewMovementMode;  // 0x1 (0x1)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgShopRedStoneShardInfoResponse
// Size: 0x30(Inherited: 0x18)
struct FClientMsgShopRedStoneShardInfoResponse : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // DelegateFunction DungeonCrawler.LootPlayerSetSignature__DelegateSignature
struct FLootPlayerSetSignature__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bSetTargetPlayer : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FName TargetPlayerName;  // 0x4 (0x4)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgHackLogResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgHackLogResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // DelegateFunction DungeonCrawler.DCOnComboBoxSelectedDelegate__DelegateSignature
struct FDCOnComboBoxSelectedDelegate__DelegateSignature
{
	int32_t SelIndex;  // 0x0 (0x0)


}; 
 
 // DelegateFunction DungeonCrawler.DCOnOptionPopupClickDelegate__DelegateSignature
struct FDCOnOptionPopupClickDelegate__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsApply : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsWithinXYRangeAndZRangeAndDirectionalAngleAndAllowedAngle
struct FFilterTargetsWithinXYRangeAndZRangeAndDirectionalAngleAndAllowedAngle
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x8 (0x8)
	float XYRange;  // 0x18 (0x18)
	float ZRange;  // 0x1C (0x1C)
	float DirectionalAngle;  // 0x20 (0x20)
	float AllowedAngle;  // 0x24 (0x24)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool ReturnValue : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // DelegateFunction DungeonCrawler.DCOnToggleSwitchDelegate__DelegateSignature
struct FDCOnToggleSwitchDelegate__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool OnSwitch : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPerkDataComponent.AddWearableWeaponList
struct FAddWearableWeaponList
{
	struct FGameplayTagContainer InWeaponList;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.SkillComponent.CalSkillCooldownRemainTime
struct FCalSkillCooldownRemainTime
{
	float StartTime;  // 0x0 (0x0)
	float RemainDuration;  // 0x4 (0x4)
	float MaxDuration;  // 0x8 (0x8)
	float ReturnValue;  // 0xC (0xC)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetUpdatePageNumberNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetUpdatePageNumberNotify : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // DelegateFunction DungeonCrawler.DCWaitTargeGameplayTagEventDelegate__DelegateSignature
struct FDCWaitTargeGameplayTagEventDelegate__DelegateSignature
{
	int32_t TagCount;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCConstantDataType
struct FDCConstantDataType
{
	uint8_t ConstantType;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool UseABS : 1;  // 0x1 (0x1)


}; 
 
 // DelegateFunction DungeonCrawler.DCPlayMontageAndWaitForEventDelegate__DelegateSignature
struct FDCPlayMontageAndWaitForEventDelegate__DelegateSignature
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCAT_WaitGameplayAbilityActivateOrEnd.WaitForAbilityActivateOrEnd
struct FWaitForAbilityActivateOrEnd
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayTag WithTag;  // 0x8 (0x8)
	struct FGameplayTag WithoutTag;  // 0x10 (0x10)
	struct AActor* InOptionalExternalTarget;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool TriggerOnce : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct UDCAT_WaitGameplayAbilityActivateOrEnd* ReturnValue;  // 0x28 (0x28)


}; 
 
 // DelegateFunction DungeonCrawler.DCSocketBlockedStateChangeDelegate__DelegateSignature
struct FDCSocketBlockedStateChangeDelegate__DelegateSignature
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgAutoMatchRegRequest
// Size: 0x30(Inherited: 0x20)
struct FClientMsgAutoMatchRegRequest : FRequestMsg
{
	char pad_32[16];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgInteractSkillCheckEnd
// Size: 0x20(Inherited: 0x18)
struct FMsgInteractSkillCheckEnd : FMsgBase
{
	uint8_t Result;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.GameSkillSlotWidget.OnUpdateSkillSlotVisible
struct FOnUpdateSkillSlotVisible
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsVisibility : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.AsyncTaskWaitGAEnded.WaitForAbilityEndWithTagRequirements
struct FWaitForAbilityEndWithTagRequirements
{
	struct AActor* TargetActor;  // 0x0 (0x0)
	struct FGameplayTagRequirements TagRequirements;  // 0x8 (0x8)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool TriggerOnce : 1;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)
	struct UAsyncTaskWaitGAEnded* ReturnValue;  // 0x50 (0x50)


}; 
 
 // DelegateFunction DungeonCrawler.OnCooldownChanged__DelegateSignature
struct FOnCooldownChanged__DelegateSignature
{
	struct FGameplayTag CooldownTag;  // 0x0 (0x0)
	float TimeRemaining;  // 0x8 (0x8)
	float Duration;  // 0xC (0xC)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyCharacterSkinChangeNotify
// Size: 0x58(Inherited: 0x18)
struct FClientMsgPartyCharacterSkinChangeNotify : FMsgBase
{
	char pad_24[64];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ItemDataGameplayEffectValue
struct FItemDataGameplayEffectValue
{
	struct FGameplayTag EffectTag;  // 0x0 (0x0)
	int32_t EffectValue;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.IMUtilBlueprintLibrary.GetProjectVersion
struct FGetProjectVersion
{
	struct FString OutVersion;  // 0x0 (0x0)


}; 
 
 // DelegateFunction DungeonCrawler.DCWaitAbilityActivateDelegate__DelegateSignature
struct FDCWaitAbilityActivateDelegate__DelegateSignature
{
	struct UGameplayAbility* ActivatedAbility;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgInventorySplitMergeRequest
// Size: 0x48(Inherited: 0x20)
struct FClientMsgInventorySplitMergeRequest : FRequestMsg
{
	char pad_32[40];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgClassItemMoveResponse
// Size: 0x60(Inherited: 0x18)
struct FClientMsgClassItemMoveResponse : FMsgBase
{
	char pad_24[72];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgGatheringHallTargetEquippedItemResponse
// Size: 0x90(Inherited: 0x18)
struct FClientMsgGatheringHallTargetEquippedItemResponse : FMsgBase
{
	char pad_24[120];  // 0x18 (0x18)


}; 
 
 // DelegateFunction DungeonCrawler.OnCursorMovedRM__DelegateSignature
struct FOnCursorMovedRM__DelegateSignature
{
	int32_t InLineIndex;  // 0x0 (0x0)
	int32_t InOffset;  // 0x4 (0x4)


}; 
 
 // ScriptStruct DungeonCrawler.AccountDataCustomizeAction
struct FAccountDataCustomizeAction
{
	struct FString CustomizeActionId;  // 0x0 (0x0)
	int32_t IsEquip;  // 0x10 (0x10)
	int32_t IsNew;  // 0x14 (0x14)


}; 
 
 // DelegateFunction DungeonCrawler.DCWaitAbilityEndedDelegate__DelegateSignature
struct FDCWaitAbilityEndedDelegate__DelegateSignature
{
	struct FAbilityEndedData AbilityEndedData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAnimInstanceBase.EventMontageStarted
struct FEventMontageStarted
{
	struct UAnimMontage* InMontage;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataMusicTableRow
// Size: 0xF8(Inherited: 0x8)
struct FDesignDataMusicTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataMusic> Music;  // 0x8 (0x8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayAbility> MusicAbility;  // 0x58 (0x58)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayEffect> MusicEffect;  // 0xA8 (0xA8)


}; 
 
 // ScriptStruct DungeonCrawler.DCActionSkinInfo
struct FDCActionSkinInfo
{
	struct UDCActionSkinDataAsset* Data;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bIsEquipped : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // DelegateFunction DungeonCrawler.DCWaitAbilityTaskActivateDelegate__DelegateSignature
struct FDCWaitAbilityTaskActivateDelegate__DelegateSignature
{
	struct UGameplayAbility* ActivatedAbility;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.InvitePartyUserSlotData
struct FInvitePartyUserSlotData
{
	struct TArray<struct FInvitePartyUserSlot> InvitePartyUserSlotArray;  // 0x0 (0x0)


}; 
 
 // DelegateFunction DungeonCrawler.DCWaitAbilityTaskEndDelegate__DelegateSignature
struct FDCWaitAbilityTaskEndDelegate__DelegateSignature
{
	struct FAbilityEndedData AbilityEndedData;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCClientShopInfo
struct FDCClientShopInfo
{
	struct TMap<struct FPrimaryAssetId, struct FDCCharacterSkinShopItemInfo> CharacterSkinShopItems;  // 0x0 (0x0)
	struct TMap<struct FPrimaryAssetId, struct FDCItemSkinShopItemInfo> ItemSkinShopItems;  // 0x50 (0x50)
	struct TMap<struct FPrimaryAssetId, struct FDCEmoteShopItemInfo> EmoteShopItems;  // 0xA0 (0xA0)
	struct TMap<struct FPrimaryAssetId, struct FDCLobbyEmoteShopItemInfo> LobbyEmoteShopItems;  // 0xF0 (0xF0)
	struct TMap<struct FPrimaryAssetId, struct FDCActionSkinShopItemInfo> ActionSkinShopItems;  // 0x140 (0x140)
	struct TMap<struct FPrimaryAssetId, struct FDCClassPackageShopItemInfo> ClassPackageShopItems;  // 0x190 (0x190)
	struct TMap<struct FPrimaryAssetId, struct FDCRedstoneShardShopItemInfo> RedstoneShardShopItems;  // 0x1E0 (0x1E0)
	struct TMap<uint8_t, int32_t> CurrencyMap;  // 0x230 (0x230)
	int32_t TriumphLevel;  // 0x280 (0x280)
	int32_t CurrentTriumphExp;  // 0x284 (0x284)
	int32_t NextTriumphExp;  // 0x288 (0x288)
	char pad_652[4];  // 0x28C (0x28C)
	struct FString ShopURL;  // 0x290 (0x290)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetRemoveItemFromDealTableSuccessNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetRemoveItemFromDealTableSuccessNotify : FMsgBase
{
	int64_t ItemUniqueId;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.DCPropertyAttributeSpell
struct FDCPropertyAttributeSpell
{
	struct FPrimaryAssetId SpellId;  // 0x0 (0x0)
	int32_t SpellValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.DCStockSellBackItemData
struct FDCStockSellBackItemData
{
	int64_t UniqueId;  // 0x0 (0x0)
	struct FText ConversationText;  // 0x8 (0x8)
	struct TSoftObjectPtr<UDCItemDataAsset> ItemId;  // 0x20 (0x20)
	int32_t ItemCount;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)
	struct TSoftObjectPtr<UDCItemDataAsset> ReceivedItemId_01;  // 0x58 (0x58)
	int32_t ReceivedAmount01;  // 0x88 (0x88)
	char pad_140[4];  // 0x8C (0x8C)
	struct TSoftObjectPtr<UDCItemDataAsset> ReceivedItemId_02;  // 0x90 (0x90)
	int32_t ReceivedAmount02;  // 0xC0 (0xC0)
	char pad_196[4];  // 0xC4 (0xC4)
	struct TSoftObjectPtr<UDCItemDataAsset> ReceivedItemId_03;  // 0xC8 (0xC8)
	int32_t ReceivedAmount03;  // 0xF8 (0xF8)
	char pad_252[4];  // 0xFC (0xFC)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MaxPhysicalShield
struct FOnRep_MaxPhysicalShield
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetTradingChatResponse
// Size: 0x28(Inherited: 0x18)
struct FMsgWidgetTradingChatResponse : FMsgBase
{
	uint8_t Result;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FTimespan TimeLeft;  // 0x20 (0x20)


}; 
 
 // DelegateFunction DungeonCrawler.DCWaitAttributeChangeDelegateByExecution__DelegateSignature
struct FDCWaitAttributeChangeDelegateByExecution__DelegateSignature
{
	float OldValue;  // 0x0 (0x0)
	float NewValue;  // 0x4 (0x4)


}; 
 
 // ScriptStruct DungeonCrawler.MsgSetLootTarget
// Size: 0x128(Inherited: 0x18)
struct FMsgSetLootTarget : FMsgBase
{
	struct UInventoryComponent* LootTargetComponent;  // 0x18 (0x18)
	struct TArray<struct FItemData> ContainingItemDataArray;  // 0x20 (0x20)
	struct TArray<struct FSlotInfo> SlotInfoArray;  // 0x30 (0x30)
	struct FHitResult LootTargetHitResult;  // 0x40 (0x40)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGASActorStatusUpdated
// Size: 0x28(Inherited: 0x18)
struct FMsgGASActorStatusUpdated : FMsgBase
{
	struct TArray<struct FActorStatusData> ActorStatusDatas;  // 0x18 (0x18)


}; 
 
 // DelegateFunction DungeonCrawler.DCWaitForGenericGameplayTagEventDelegate__DelegateSignature
struct FDCWaitForGenericGameplayTagEventDelegate__DelegateSignature
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)


}; 
 
 // DelegateFunction DungeonCrawler.OnGameplayEffectStackChanged__DelegateSignature
struct FOnGameplayEffectStackChanged__DelegateSignature
{
	struct FGameplayTag EffectGameplayTag;  // 0x0 (0x0)
	struct FActiveGameplayEffectHandle Handle;  // 0x8 (0x8)
	int32_t NewStackCount;  // 0x10 (0x10)
	int32_t OldStackCount;  // 0x14 (0x14)


}; 
 
 // ScriptStruct DungeonCrawler.MsgMonsterIdResponse
// Size: 0x28(Inherited: 0x18)
struct FMsgMonsterIdResponse : FMsgBase
{
	struct FPrimaryAssetId MonsterId;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ItemData
struct FItemData
{
	int64_t ItemUniqueId;  // 0x0 (0x0)
	struct FPrimaryAssetId ItemId;  // 0x8 (0x8)
	int32_t InventoryId;  // 0x18 (0x18)
	int32_t SlotId;  // 0x1C (0x1C)
	int32_t ItemCount;  // 0x20 (0x20)
	int32_t ItemAmmoCount;  // 0x24 (0x24)
	int32_t ItemContentsCount;  // 0x28 (0x28)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool bEquipped : 1;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)
	struct FItemDataMeta MetaData;  // 0x30 (0x30)
	struct TArray<struct FItemDataProperty> ItemDataPrimaryPropertyArray;  // 0x80 (0x80)
	struct TArray<struct FItemDataProperty> ItemDataSecondaryPropertyArray;  // 0x90 (0x90)


}; 
 
 // Function DungeonCrawler.GameInventoryGroupWidget.OnItemDrop
struct FOnItemDrop
{
	struct FItemData ItemData;  // 0x0 (0x0)
	struct AActor* OldOwnerActor;  // 0xA0 (0xA0)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnDebuffDurationMod
struct FOnDebuffDurationMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.GameTestComponent.ClientMsgClassMusicSlotMoveResponse
struct FClientMsgClassMusicSlotMoveResponse
{
	struct FMsgGameTestClassMusicSlotMoveResponse InMsg;  // 0x0 (0x0)


}; 
 
 // DelegateFunction DungeonCrawler.FinishDelegate__DelegateSignature
struct FFinishDelegate__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsArrivedDestLocation : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCKarma
struct FDCKarma
{
	int32_t Rating;  // 0x0 (0x0)
	uint8_t Level;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function DungeonCrawler.GA_Equip.OnMontageEventReceived
struct FOnMontageEventReceived
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // DelegateFunction DungeonCrawler.GameMenuOptionHoveredDelegate__DelegateSignature
struct FGameMenuOptionHoveredDelegate__DelegateSignature
{
	struct UGameMenuOptionBaseWidget* InHoveredWidget;  // 0x0 (0x0)


}; 
 
 // DelegateFunction DungeonCrawler.AsyncTaskWaitGameplayEvent.EventReceivedDelegate__DelegateSignature
struct FEventReceivedDelegate__DelegateSignature
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCInventoryTaskSourceInfo
struct FDCInventoryTaskSourceInfo
{
	char pad_0[296];  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.VoipUserData
struct FVoipUserData
{
	char pad_0[4];  // 0x0 (0x0)
	float ReceiveVolume;  // 0x4 (0x4)


}; 
 
 // DelegateFunction DungeonCrawler.ImpactEnduranceExhausted__DelegateSignature
struct FImpactEnduranceExhausted__DelegateSignature
{
	float ExhaustedTime;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	UGameplayEffect* GameplayEffectClass;  // 0x8 (0x8)
	struct FDCGameplayEffectContext EffectContext;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGASAttributeNotify
// Size: 0x4D8(Inherited: 0x18)
struct FMsgGASAttributeNotify : FMsgBase
{
	struct UDCAttributeSet* AttributeSet;  // 0x18 (0x18)
	struct FGameplayAttribute Attribute;  // 0x20 (0x20)
	float NewValue;  // 0x58 (0x58)
	float OldValue;  // 0x5C (0x5C)
	UGameplayEffect* GameplayEffectClass;  // 0x60 (0x60)
	struct FDCGameplayEffectContext EffectContext;  // 0x68 (0x68)
	struct FGameplayEffectSpec EffectSpec;  // 0x240 (0x240)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataPlayerCharacterTableRow
// Size: 0x148(Inherited: 0x8)
struct FDesignDataPlayerCharacterTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataPlayerCharacter> PlayerCharacter;  // 0x8 (0x8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayAbility> PlayerCharacterAbility;  // 0x58 (0x58)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayEffect> PlayerCharacterEffect;  // 0xA8 (0xA8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataBaseItem> PlayerCharacterBaseItem;  // 0xF8 (0xF8)


}; 
 
 // ScriptStruct DungeonCrawler.DCRecruitChannelId
// Size: 0x10(Inherited: 0x10)
struct FDCRecruitChannelId : FDCStringIdBase
{


}; 
 
 // Function DungeonCrawler.LeaderboardContentWidget.OnContentDesc
struct FOnContentDesc
{
	struct FText NewValue;  // 0x0 (0x0)
	struct FText OldValue;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCInventoryContainerComponent.OnRep_InventoryList
struct FOnRep_InventoryList
{
	struct TArray<struct UDCInventoryBase*> OldInventoryList;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgBlockCharacterResponse
// Size: 0x80(Inherited: 0x18)
struct FClientMsgBlockCharacterResponse : FMsgBase
{
	char pad_24[104];  // 0x18 (0x18)


}; 
 
 // DelegateFunction DungeonCrawler.GameplayTagCollisionDetectedSignature__DelegateSignature
struct FGameplayTagCollisionDetectedSignature__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bDetected : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FAccountDataReplication AccountDataReplication;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.LoginWidget.OnSelectionChanged
struct FOnSelectionChanged
{
	struct FString SelectedItem;  // 0x0 (0x0)
	enum class ESelectInfo SelectionType;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct DungeonCrawler.PlayPartyUserInfoData
struct FPlayPartyUserInfoData
{
	struct TArray<struct FPlayPartyUserInfo> PlayPartyData;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgInventoryMergeRequest
// Size: 0x40(Inherited: 0x20)
struct FClientMsgInventoryMergeRequest : FRequestMsg
{
	char pad_32[32];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgUpdateSoundDataEvent
// Size: 0x20(Inherited: 0x18)
struct FMsgUpdateSoundDataEvent : FMsgBase
{
	struct USoundData* Data;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.AccountDataReplication
struct FAccountDataReplication
{
	struct FString AccountId;  // 0x0 (0x0)
	struct FNickname Nickname;  // 0x10 (0x10)
	struct FString PlayerCharacterId;  // 0x38 (0x38)
	struct FString PartyId;  // 0x48 (0x48)
	struct FString CharacterId;  // 0x58 (0x58)
	int32_t Gender;  // 0x68 (0x68)
	int32_t Level;  // 0x6C (0x6C)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool bInit : 1;  // 0x70 (0x70)
	char pad_113_1 : 7;  // 0x71 (0x71)
	bool bExit : 1;  // 0x71 (0x71)
	char pad_114_1 : 7;  // 0x72 (0x72)
	bool bLogin : 1;  // 0x72 (0x72)
	char pad_115_1 : 7;  // 0x73 (0x73)
	bool bAlive : 1;  // 0x73 (0x73)
	char pad_116_1 : 7;  // 0x74 (0x74)
	bool bEscape : 1;  // 0x74 (0x74)
	char pad_117_1 : 7;  // 0x75 (0x75)
	bool bDown : 1;  // 0x75 (0x75)
	char pad_118[2];  // 0x76 (0x76)


}; 
 
 // Function DungeonCrawler.PlayWidget.OnRegionSelected
struct FOnRegionSelected
{
	int32_t RegionIndex;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameGroupWidgetBase.OnGroupWidgetVisibilityChanged
struct FOnGroupWidgetVisibilityChanged
{
	uint8_t NewVisibility;  // 0x0 (0x0)


}; 
 
 // DelegateFunction DungeonCrawler.DCGiftCodeEditableText.OnGiftCodeWipedEvent__DelegateSignature
struct FOnGiftCodeWipedEvent__DelegateSignature
{
	int32_t Index;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetContextMenuOpenNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgWidgetContextMenuOpenNotify : FMsgBase
{
	struct UObject* ContextMenuHolder;  // 0x18 (0x18)
	struct TArray<uint8_t> ContextOptions;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ComboTriggerStep
struct FComboTriggerStep
{
	struct UInputAction* DependentAction;  // 0x0 (0x0)
	float ActivationThreshold;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // ScriptStruct DungeonCrawler.InstigatorData
struct FInstigatorData
{
	struct FString InstigatorAccountId;  // 0x0 (0x0)
	struct FNickname InstigatorNickName;  // 0x10 (0x10)
	struct FText InstigatorName;  // 0x38 (0x38)


}; 
 
 // ScriptStruct DungeonCrawler.Nickname
struct FNickname
{
	struct FString OriginalNickName;  // 0x0 (0x0)
	struct FString StreamingModeNickName;  // 0x10 (0x10)
	struct FDCKarma Karma;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ItemDataProperty
struct FItemDataProperty
{
	struct FPrimaryAssetId PropertyTypeId;  // 0x0 (0x0)
	int32_t PropertyValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.ChatData
struct FChatData
{
	struct FString AccountId;  // 0x0 (0x0)
	struct FString CharacterId;  // 0x10 (0x10)
	struct FNickname Nickname;  // 0x20 (0x20)
	struct FString PartyId;  // 0x48 (0x48)
	struct TArray<struct FChatDataPiece> ChatDataPieceArray;  // 0x58 (0x58)


}; 
 
 // Function DungeonCrawler.DCMerchantComponent.OnMerchantIdChanged
struct FOnMerchantIdChanged
{
	struct FDCMerchantId InMerchantId;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ItemDataMeta
struct FItemDataMeta
{
	struct FString SoulHeart_AccountId;  // 0x0 (0x0)
	struct FString SoulHeart_PartyId;  // 0x10 (0x10)
	struct FNickname SoulHeart_NickName;  // 0x20 (0x20)
	int32_t AvailableValue;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)


}; 
 
 // DelegateFunction DungeonCrawler.InventoryCountChangedSignature__DelegateSignature
struct FInventoryCountChangedSignature__DelegateSignature
{
	int32_t InvnetoryCount;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataPropsInteract
struct FDesignDataPropsInteract
{
	struct FText InteractionName;  // 0x0 (0x0)
	struct FText InteractionText;  // 0x18 (0x18)
	struct FPrimaryAssetId InteractData;  // 0x30 (0x30)
	struct TArray<struct FGameplayTag> InteractTypes;  // 0x40 (0x40)
	float Duration;  // 0x50 (0x50)
	struct FGameplayTag InteractableTag;  // 0x54 (0x54)
	struct FGameplayTag TriggerTag;  // 0x5C (0x5C)
	struct FGameplayTag AbilityTriggerTag;  // 0x64 (0x64)
	struct FPrimaryAssetId DetectTagQueryData;  // 0x6C (0x6C)
	struct FPrimaryAssetId InteractTagQueryData;  // 0x7C (0x7C)
	struct FPrimaryAssetId SkillCheckData;  // 0x8C (0x8C)
	char pad_156[4];  // 0x9C (0x9C)


}; 
 
 // Function DungeonCrawler.DCGameplayTagCollider.OnRep_TargetAccountId
struct FOnRep_TargetAccountId
{
	struct FString InOldTargetAccountId;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.Item.GetItemHandType
struct FGetItemHandType
{
	struct FGameplayTag ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_Interact.IsValidData
struct FIsValidData
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)
	char pad_176_1 : 7;  // 0xB0 (0xB0)
	bool ReturnValue : 1;  // 0xB0 (0xB0)
	char pad_177[7];  // 0xB1 (0xB1)


}; 
 
 // DelegateFunction DungeonCrawler.InteractableTargetActorDelegate__DelegateSignature
struct FInteractableTargetActorDelegate__DelegateSignature
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataCharacterSkinTableRow
// Size: 0x58(Inherited: 0x8)
struct FDesignDataCharacterSkinTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataCharacterSkin> CharacterSkin;  // 0x8 (0x8)


}; 
 
 // DelegateFunction DungeonCrawler.InteractableTargetDelegate__DelegateSignature
struct FInteractableTargetDelegate__DelegateSignature
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgFriendListRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgFriendListRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgKarmaReportActionResponse
// Size: 0x98(Inherited: 0x18)
struct FClientMsgKarmaReportActionResponse : FMsgBase
{
	char pad_24[128];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCPlayerCharacterBase.ChangeGender_Server
struct FChangeGender_Server
{
	uint8_t Gender;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.FriendInfo
struct FFriendInfo
{
	int32_t TotalCount;  // 0x0 (0x0)
	int32_t LobbyCount;  // 0x4 (0x4)
	int32_t DungeonCount;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct TArray<struct FInvitePartyUserSlot> InvitePartyUserSlotArray;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterPlayerCharacterTargets
struct FFilterPlayerCharacterTargets
{
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnFireMagicalReductionMod
struct FOnFireMagicalReductionMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusWidget.OnSpellCapacityAdd
struct FOnSpellCapacityAdd
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // DelegateFunction DungeonCrawler.OnAttributeChanged__DelegateSignature
struct FOnAttributeChanged__DelegateSignature
{
	struct FGameplayAttribute Attribute;  // 0x0 (0x0)
	float NewValue;  // 0x38 (0x38)
	float OldValue;  // 0x3C (0x3C)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAnimationChangePlayerCharacterAnimSet
// Size: 0x38(Inherited: 0x18)
struct FMsgAnimationChangePlayerCharacterAnimSet : FMsgBase
{
	struct FLocomotionAnimSet AnimSet;  // 0x18 (0x18)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bSecondaryItem : 1;  // 0x30 (0x30)
	char pad_49_1 : 7;  // 0x31 (0x31)
	bool bTwoHandedItem : 1;  // 0x31 (0x31)
	char pad_50[6];  // 0x32 (0x32)


}; 
 
 // ScriptStruct DungeonCrawler.AggroInfo
struct FAggroInfo
{
	char pad_0[16];  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassRemoveEquipPerkNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgWidgetClassRemoveEquipPerkNotify : FMsgBase
{
	int32_t Index;  // 0x18 (0x18)
	struct FPrimaryAssetId PerkId;  // 0x1C (0x1C)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // DelegateFunction DungeonCrawler.ItemGenerationFinishedSignature__DelegateSignature
struct FItemGenerationFinishedSignature__DelegateSignature
{
	struct TArray<struct FItemData> ResultItems;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradeChannelChatTextRangeResponse
// Size: 0x28(Inherited: 0x18)
struct FClientMsgTradeChannelChatTextRangeResponse : FMsgBase
{
	char pad_24[16];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.DCStockBuyItemData
struct FDCStockBuyItemData
{
	int64_t UniqueId;  // 0x0 (0x0)
	struct FText ConversationText;  // 0x8 (0x8)
	struct FText SaleCompleteText;  // 0x20 (0x20)
	struct TSoftObjectPtr<UDCItemDataAsset> ItemId;  // 0x38 (0x38)
	struct TSoftObjectPtr<UDCItemDataAsset> RequiredItemId_01;  // 0x68 (0x68)
	int32_t RequiredAmount01;  // 0x98 (0x98)
	char pad_156[4];  // 0x9C (0x9C)
	struct TSoftObjectPtr<UDCItemDataAsset> RequiredItemId_02;  // 0xA0 (0xA0)
	int32_t RequiredAmount02;  // 0xD0 (0xD0)
	char pad_212[4];  // 0xD4 (0xD4)
	struct TSoftObjectPtr<UDCItemDataAsset> RequiredItemId_03;  // 0xD8 (0xD8)
	int32_t RequiredAmount03;  // 0x108 (0x108)
	char pad_268[4];  // 0x10C (0x10C)
	struct TSoftObjectPtr<UDCItemDataAsset> RequiredItemId_04;  // 0x110 (0x110)
	int32_t RequiredAmount04;  // 0x140 (0x140)
	char pad_324[4];  // 0x144 (0x144)
	struct TSoftObjectPtr<UDCItemDataAsset> RequiredItemId_05;  // 0x148 (0x148)
	int32_t RequiredAmount05;  // 0x178 (0x178)
	char pad_380[4];  // 0x17C (0x17C)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalInteractionSpeed
struct FOnRep_MagicalInteractionSpeed
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgDefaultBodyPartMapResponse
// Size: 0x68(Inherited: 0x18)
struct FMsgDefaultBodyPartMapResponse : FMsgBase
{
	struct TMap<struct FGameplayTag, struct USkeletalMesh*> DefaultBodyPartsMap;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.GA_PlayerSkillInstantAndWaitForEndBase.OnSkillBuffTagRemoved
struct FOnSkillBuffTagRemoved
{
	int32_t NewCount;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataRedstonShardShop
struct FDesignDataRedstonShardShop
{
	struct FPrimaryAssetId ArtData;  // 0x0 (0x0)


}; 
 
 // DelegateFunction DungeonCrawler.LoadPrimaryAssetDynamicDelegate__DelegateSignature
struct FLoadPrimaryAssetDynamicDelegate__DelegateSignature
{
	struct UObject* InObjectLoaded;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCFloorMatchmakingUserResult
struct FDCFloorMatchmakingUserResult
{
	struct FDCAccountId AccountId;  // 0x0 (0x0)
	struct FDCGameLiftSessionId SessionId;  // 0x10 (0x10)
	struct FString Address;  // 0x20 (0x20)


}; 
 
 // DelegateFunction DungeonCrawler.LoadPrimaryAssetDynamicMulticastDelegate__DelegateSignature
struct FLoadPrimaryAssetDynamicMulticastDelegate__DelegateSignature
{
	struct UObject* InObjectLoaded;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyGameDifficultyChangeNotify
// Size: 0x20(Inherited: 0x18)
struct FClientMsgPartyGameDifficultyChangeNotify : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // DelegateFunction DungeonCrawler.OnFinishDelegate__DelegateSignature
struct FOnFinishDelegate__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsArrivedDestLocation : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_SpellCapacityAdd
struct FOnRep_SpellCapacityAdd
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgMerchantStockBuyItemListRequest
// Size: 0x30(Inherited: 0x20)
struct FClientMsgMerchantStockBuyItemListRequest : FRequestMsg
{
	char pad_32[16];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgShopItemListRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgShopItemListRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // DelegateFunction DungeonCrawler.OnShopCurrencyTypeSelected__DelegateSignature
struct FOnShopCurrencyTypeSelected__DelegateSignature
{
	uint8_t SelectCurrencyType;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ChatEditWidgetBase.OnTextCommitted
struct FOnTextCommitted
{
	struct FText InText;  // 0x0 (0x0)
	enum class ETextCommit InCommitMethod;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameTestClassLevelInfoResponse
// Size: 0x30(Inherited: 0x18)
struct FMsgGameTestClassLevelInfoResponse : FMsgBase
{
	int32_t Level;  // 0x18 (0x18)
	int32_t Exp;  // 0x1C (0x1C)
	int32_t ExpBegin;  // 0x20 (0x20)
	int32_t ExpLimit;  // 0x24 (0x24)
	int32_t RewardPoint;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // DelegateFunction DungeonCrawler.TargetActorOverlapSignatureByComponent__DelegateSignature
struct FTargetActorOverlapSignatureByComponent__DelegateSignature
{
	struct AActor* OverlapActor;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_FireMagicalReduction
struct FOnRep_FireMagicalReduction
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusWidget.OnSpellCapacityBase
struct FOnSpellCapacityBase
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.MsgSpellSetCurrentSpellData
// Size: 0x58(Inherited: 0x18)
struct FMsgSpellSetCurrentSpellData : FMsgBase
{
	struct FSpellData SpellData;  // 0x18 (0x18)
	char pad_84[4];  // 0x54 (0x54)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgAliveRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgAliveRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // DelegateFunction DungeonCrawler.OnUserScrolledRM__DelegateSignature
struct FOnUserScrolledRM__DelegateSignature
{
	float InCurrentOffset;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCustomizeEmoteRadialSlotWidget.GetPreviewEmoteVisibility
struct FGetPreviewEmoteVisibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCChatLog
struct FDCChatLog
{
	int64_t Timestamp;  // 0x0 (0x0)
	struct FDCChatInfo ChatInfo;  // 0x8 (0x8)


}; 
 
 // DelegateFunction DungeonCrawler.SpawnProjectileSignature__DelegateSignature
struct FSpawnProjectileSignature__DelegateSignature
{
	struct AActor* ProjectileActor;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgAccountCharacterListRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgAccountCharacterListRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCMonsterBase.OnFMsgGASAttributeNotifyBlueprint
struct FOnFMsgGASAttributeNotifyBlueprint
{
	struct FMsgGASAttributeNotify InMsg;  // 0x0 (0x0)


}; 
 
 // DelegateFunction DungeonCrawler.TargetActorInRadiusOverlap__DelegateSignature
struct FTargetActorInRadiusOverlap__DelegateSignature
{
	struct TArray<struct AActor*> RadiusInActors;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.SetButtonText
struct FSetButtonText
{
	struct FText LeftText;  // 0x0 (0x0)
	struct FText RightText;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.DCMerchantInfo
struct FDCMerchantInfo
{
	struct FDCMerchantId MerchantId;  // 0x0 (0x0)
	int32_t Faction;  // 0x10 (0x10)
	float ExpireTime;  // 0x14 (0x14)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnItemEquipSpeed
struct FOnItemEquipSpeed
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // DelegateFunction DungeonCrawler.InjectionItemSelectedPropertyWidgetBase.OnSelectedPropertyValueChanged__DelegateSignature
struct FOnSelectedPropertyValueChanged__DelegateSignature
{
	struct FPrimaryAssetId PropertyTypeAssetId;  // 0x0 (0x0)
	int32_t PropertyValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgClassEquipInfoResponse
// Size: 0x28(Inherited: 0x18)
struct FClientMsgClassEquipInfoResponse : FMsgBase
{
	char pad_24[16];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCGiftCodeEditableText.OnCodeTextCommitted
struct FOnCodeTextCommitted
{
	struct FText InCodeText;  // 0x0 (0x0)
	enum class ETextCommit CommitType;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // DelegateFunction DungeonCrawler.WaitGameplayEffectAddDelegate__DelegateSignature
struct FWaitGameplayEffectAddDelegate__DelegateSignature
{
	struct FGameplayEffectSpecHandle SpecHandle;  // 0x0 (0x0)
	struct FActiveGameplayEffectHandle ActiveHandle;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyStartLobbyEmoteNotify
// Size: 0x48(Inherited: 0x18)
struct FClientMsgPartyStartLobbyEmoteNotify : FMsgBase
{
	char pad_24[48];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCGameSpawnableComponent.OnRep_bCastShadows
struct FOnRep_bCastShadows
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bOldCastShadows : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassEquipInfoBeginNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetClassEquipInfoBeginNotify : FMsgBase
{


}; 
 
 // Function DungeonCrawler.AsyncTaskWaitGameplayEvent.WaitGameplayEventToActor
struct FWaitGameplayEventToActor
{
	struct AActor* TargetActor;  // 0x0 (0x0)
	struct FGameplayTag EventTag;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool OnlyTriggerOnce : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool OnlyMatchExact : 1;  // 0x11 (0x11)
	char pad_18[6];  // 0x12 (0x12)
	struct UAsyncTaskWaitGameplayEvent* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.InjectionItemSelectedPropertyWidgetBase.OnPropertyValueChanged
struct FOnPropertyValueChanged
{
	struct FText Text;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCReportPlayerWidget.HandleCheckStatedChanged
struct FHandleCheckStatedChanged
{
	uint8_t InCategory;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool InbNewChecked : 1;  // 0x1 (0x1)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountLinkAttributeNotify
// Size: 0x248(Inherited: 0x18)
struct FMsgAccountLinkAttributeNotify : FMsgBase
{
	struct UAccountLink* AccountLink;  // 0x18 (0x18)
	struct UDCAttributeSet* AttributeSet;  // 0x20 (0x20)
	struct FGameplayAttribute Attribute;  // 0x28 (0x28)
	float NewValue;  // 0x60 (0x60)
	float OldValue;  // 0x64 (0x64)
	UGameplayEffect* GameplayEffectClass;  // 0x68 (0x68)
	struct FDCGameplayEffectContext EffectContext;  // 0x70 (0x70)


}; 
 
 // Function DungeonCrawler.ItemCountSelectWidget.OnTextBlockCommitted
struct FOnTextBlockCommitted
{
	struct FText Text;  // 0x0 (0x0)
	enum class ETextCommit CommitMethod;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.DCGiftCodeEditableText.OnCodeTextChanged
struct FOnCodeTextChanged
{
	struct FText InCodeText;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataShopTableRow
// Size: 0x238(Inherited: 0x8)
struct FDesignDataShopTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataShop> ShopCharacterSkin;  // 0x8 (0x8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataShop> ShopItemSkin;  // 0x58 (0x58)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataShop> ShopEmote;  // 0xA8 (0xA8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataShop> ShopLobbyEmote;  // 0xF8 (0xF8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataShop> ShopActionSkin;  // 0x148 (0x148)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataShop> ShopClassPackage;  // 0x198 (0x198)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataRedstonShardShop> ShopRedstoneShard;  // 0x1E8 (0x1E8)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataMerchantSchedule
struct FDesignDataMerchantSchedule
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgKarmaReportListRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgKarmaReportListRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetLobbyGroupHideRequest
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetLobbyGroupHideRequest : FMsgBase
{
	uint8_t WidgetLobbyGroupType;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.DCGiftCodePopupBase.MoveToNextCodeBlock
struct FMoveToNextCodeBlock
{
	struct FText InRemainText;  // 0x0 (0x0)
	int32_t InCodeBlockIndex;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgInventoryInfoResponse
// Size: 0x30(Inherited: 0x18)
struct FClientMsgInventoryInfoResponse : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageWeaponPrimary
struct FOnPhysicalDamageWeaponPrimary
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCLobbyEmoteSlotWidget.GetLobbyEmoteIconVisibility
struct FGetLobbyEmoteIconVisibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction DungeonCrawler.DCGiftCodeEditableText.OnGiftCodeFilledEvent__DelegateSignature
struct FOnGiftCodeFilledEvent__DelegateSignature
{
	struct FText RemainText;  // 0x0 (0x0)
	int32_t Index;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextSetOrigin
struct FDCEffectContextSetOrigin
{
	struct FDCGameplayEffectContext EffectContext;  // 0x0 (0x0)
	struct FVector Origin;  // 0x1D8 (0x1D8)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgUserCharacterInfoRequest
// Size: 0x88(Inherited: 0x20)
struct FClientMsgUserCharacterInfoRequest : FRequestMsg
{
	char pad_32[104];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgCustomizeNewItemAlertNotify
// Size: 0x20(Inherited: 0x18)
struct FClientMsgCustomizeNewItemAlertNotify : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_RegularInteractionSpeedBase
struct FOnRep_RegularInteractionSpeedBase
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.InjectionItemSelectedPropertyWidgetBase.OnPropertyValueSet
struct FOnPropertyValueSet
{
	struct FText Text;  // 0x0 (0x0)
	enum class ETextCommit CommitMethod;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.InventoryComponent.AddContainingItem
struct FAddContainingItem
{
	struct FItemData ItemData;  // 0x0 (0x0)
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	bool ReturnValue : 1;  // 0xA0 (0xA0)
	char pad_161[7];  // 0xA1 (0xA1)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnLightningMagicalReductionMod
struct FOnLightningMagicalReductionMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountLinkPerkIdArrayNotify
// Size: 0x40(Inherited: 0x18)
struct FMsgAccountLinkPerkIdArrayNotify : FMsgBase
{
	struct UAccountLink* AccountLink;  // 0x18 (0x18)
	struct TArray<struct FPrimaryAssetId> OldPerkIdArray;  // 0x20 (0x20)
	struct TArray<struct FPrimaryAssetId> NewPerkIdArray;  // 0x30 (0x30)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetContextOptionSelectedNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetContextOptionSelectedNotify : FMsgBase
{
	uint8_t ContextOptionType;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.GA_MeleeAttackBase.ClientTargetDataReceived
struct FClientTargetDataReceived
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayTag InChannelTag;  // 0x8 (0x8)
	struct FGameplayEventData EventData;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.MsgTotalGoldCountNotify
// Size: 0x28(Inherited: 0x18)
struct FMsgTotalGoldCountNotify : FMsgBase
{
	struct UInventoryComponent* InventoryComponent;  // 0x18 (0x18)
	int64_t TotalGoldCount;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.ItemActor.GetItemData
struct FGetItemData
{
	struct FItemData ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.SpellComponent.BroadcastMsgBlueprint
struct FBroadcastMsgBlueprint
{
	int32_t InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ItemMoveValidatorComponent.ClientShowMessage
struct FClientShowMessage
{
	struct FText OutputMessage;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgSkillDataUpdateNotify
// Size: 0x50(Inherited: 0x18)
struct FMsgSkillDataUpdateNotify : FMsgBase
{
	uint8_t SlotIndex;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	struct FSkillData SkillData;  // 0x1C (0x1C)
	char pad_76[4];  // 0x4C (0x4C)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsWidget.OnWidgetToggleNotify
struct FOnWidgetToggleNotify
{
	uint8_t Invisibility;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradingItemUpdateRequest
// Size: 0x38(Inherited: 0x20)
struct FClientMsgTradingItemUpdateRequest : FRequestMsg
{
	char pad_32[24];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.InventoryComponent.GetInventoryType
struct FGetInventoryType
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalReductionMod
struct FOnMagicalReductionMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.InventoryComponent.GetItemByItemUniqueId
struct FGetItemByItemUniqueId
{
	int64_t InItemUniqueId;  // 0x0 (0x0)
	struct UItem* ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.DCHttpReqInfo
struct FDCHttpReqInfo
{
	char pad_0[48];  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.InventoryComponent.OnRep_ContainingItems
struct FOnRep_ContainingItems
{
	struct TArray<struct FItemData> OldContainingItems;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCustomizeActionSkinListWidget.OnSetActionSkinInfoArray
struct FOnSetActionSkinInfoArray
{
	struct TArray<struct FDCActionSkinInfo> ActionSkinInfoArray;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.GameFloorLogData
struct FGameFloorLogData
{
	struct FAccountDataReplication AccountDataReplication;  // 0x0 (0x0)
	uint8_t FloorLogType;  // 0x78 (0x78)
	char pad_121[3];  // 0x79 (0x79)
	int32_t Count;  // 0x7C (0x7C)


}; 
 
 // Function DungeonCrawler.InventoryComponent.OnRep_TotalGoldCount
struct FOnRep_TotalGoldCount
{
	int64_t OldTotalGoldCount;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.SpellComponent.UnbindMsg
struct FUnbindMsg
{
	struct UScriptStruct* InMsgType;  // 0x0 (0x0)
	struct UObject* InObject;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradingConfirmCancelRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgTradingConfirmCancelRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.GameDeathSwarmData
struct FGameDeathSwarmData
{
	struct ADeathSwarmBase* DeathSwarm;  // 0x0 (0x0)
	float PrevDeathSwarmSize;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FVector2D PrevDeathSwarmPos;  // 0x10 (0x10)
	float DeathSwarmSize;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct FVector2D DeathSwarmPos;  // 0x28 (0x28)
	struct FGameplayTag DeathSwarmAbilityTag;  // 0x38 (0x38)


}; 
 
 // Function DungeonCrawler.SpellComponent.UnbindMsgAll
struct FUnbindMsgAll
{
	struct UObject* InObject;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.AccountDataGameMusic
struct FAccountDataGameMusic
{
	struct FPrimaryAssetId MusicId;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsWidget.OnAudioButtonChecked
struct FOnAudioButtonChecked
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsChecked : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgGatheringHallChannelSelectResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgGatheringHallChannelSelectResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_LightMagicalReduction
struct FOnRep_LightMagicalReduction
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAT_WaitInteractableTarget.WaitInteractableTarget
struct FWaitInteractableTarget
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FName TaskInstanceName;  // 0x8 (0x8)
	struct ADCGATA_LineTraceInteractable* InTargetActor;  // 0x10 (0x10)
	struct UDCAT_WaitInteractableTarget* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_ArcaneMagicalReductionMod
struct FOnRep_ArcaneMagicalReductionMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_BuffDurationMod
struct FOnRep_BuffDurationMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.LeaderboardRankRecordMineWidget.OnRankRecord
struct FOnRankRecord
{
	struct FRankRecord NewValue;  // 0x0 (0x0)
	struct FRankRecord OldValue;  // 0x58 (0x58)


}; 
 
 // Function DungeonCrawler.GA_InteractPassive.OnTargetGameplayTagChange
struct FOnTargetGameplayTagChange
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgInventoryMoveRequest
// Size: 0x38(Inherited: 0x20)
struct FClientMsgInventoryMoveRequest : FRequestMsg
{
	char pad_32[24];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.EmptySlotInfoArray
struct FEmptySlotInfoArray
{
	struct TArray<struct FEmptySlotInfo> Values;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ClassPerkListWidgetBase.GetSelectedSlotPerkId
struct FGetSelectedSlotPerkId
{
	struct FPrimaryAssetId ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.EmptySlotInfo
struct FEmptySlotInfo
{
	int32_t Index;  // 0x0 (0x0)
	int32_t CountOfConnectedEmptySlots;  // 0x4 (0x4)


}; 
 
 // Function DungeonCrawler.PlayWidget.OnPlayPartyReadyStateChanged
struct FOnPlayPartyReadyStateChanged
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bMine : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bReady : 1;  // 0x1 (0x1)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgClassMusicSlotMoveResponse
// Size: 0x30(Inherited: 0x18)
struct FClientMsgClassMusicSlotMoveResponse : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCLobbyEmoteGroupWidgetBase.GetVisibilityBySelectedEmote
struct FGetVisibilityBySelectedEmote
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassEquipNotify
// Size: 0x28(Inherited: 0x18)
struct FMsgWidgetClassEquipNotify : FMsgBase
{
	char pad_24[16];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.PartyMemberData
struct FPartyMemberData
{
	struct FString AccountId;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.LootComponent.GetLootTargetActor
struct FGetLootTargetActor
{
	struct AActor* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ProjectileActor.PlayPierce
struct FPlayPierce
{
	float SetPierceCount;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool SetObstaclePierce : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	float SetObstaclePierceDecrease;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetPopupMessageNotify
// Size: 0x30(Inherited: 0x30)
struct FMsgWidgetPopupMessageNotify : FMsgPopup
{


}; 
 
 // Function DungeonCrawler.PerkWidget.SetPerkData
struct FSetPerkData
{
	struct FText PerkName;  // 0x0 (0x0)
	struct FText PerkDesc;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.LootComponent.IsLootTargetPlayer
struct FIsLootTargetPlayer
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgInventoryAllUpdateRequest
// Size: 0x30(Inherited: 0x20)
struct FClientMsgInventoryAllUpdateRequest : FRequestMsg
{
	char pad_32[16];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.LootComponent.OnRep_LootTargetActor
struct FOnRep_LootTargetActor
{
	struct AActor* OldLootTargetActor;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetLeaderboardClassIconButtonClickNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetLeaderboardClassIconButtonClickNotify : FMsgBase
{
	struct ULeaderboardClassIconWidgetData* ClickData;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgReduceItemContentsCountResponse
// Size: 0x20(Inherited: 0x18)
struct FMsgReduceItemContentsCountResponse : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bSucceed : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.LootComponent.ServerRemoveLootTarget
struct FServerRemoveLootTarget
{
	struct UInventoryComponent* InventoryComponent;  // 0x0 (0x0)
	struct TArray<struct FItemData> InContainingItems;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.CharacterSelectCharListWidget.GetSelectedCharacterWidgetData
struct FGetSelectedCharacterWidgetData
{
	struct UCharacterSelectCharacterSlotWidgetData* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCWidgetBlueprintLibrary.MakePopupDataSWidget
struct FMakePopupDataSWidget
{
	uint8_t PopupButtonType;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FText DescMessage;  // 0x8 (0x8)
	struct UPopupDataSWidget* ReturnValue;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.DCPropertyAttributeSkill
struct FDCPropertyAttributeSkill
{
	struct FPrimaryAssetId SkillId;  // 0x0 (0x0)
	int32_t SkillValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCAnimInstanceV2.GetIdleAnim
struct FGetIdleAnim
{
	struct UAnimSequence* ReturnValue;  // 0x0 (0x0)


}; 
 
 // SparseDelegateFunction DungeonCrawler.DCGameObjectLinkComponentGameObjectLinkEvent__DelegateSignature
struct FDCGameObjectLinkComponentGameObjectLinkEvent__DelegateSignature
{
	struct FObjectLinkRequestEvent RecvEvent;  // 0x0 (0x0)
	struct UObjectLinkMetaDataBlueprint* SendEventParam;  // 0xB0 (0xB0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgOpenLobbyMapRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgOpenLobbyMapRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetCustomizeBeginNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetCustomizeBeginNotify : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.ObjectLinkRequestEvent
struct FObjectLinkRequestEvent
{
	struct FGameplayTag SrcTypeTag;  // 0x0 (0x0)
	struct FGameplayTag EventTag;  // 0x8 (0x8)
	struct FGameplayTagQuery DstTypeTagQuery;  // 0x10 (0x10)
	struct FObjectLinkMetaData MetaData;  // 0x58 (0x58)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGASActorDieNotify
// Size: 0x200(Inherited: 0x18)
struct FMsgGASActorDieNotify : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bIsBegin : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	UGameplayEffect* GameplayEffectClass;  // 0x20 (0x20)
	struct FDCGameplayEffectContext EffectContext;  // 0x28 (0x28)


}; 
 
 // ScriptStruct DungeonCrawler.DCEmoteShopItemInfo
// Size: 0x18(Inherited: 0x18)
struct FDCEmoteShopItemInfo : FDCShopItemInfo
{


}; 
 
 // Function DungeonCrawler.DCEquipmentComponent.SetInventory
struct FSetInventory
{
	struct UDCInventoryBase* InInventory;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgClassSpellSequenceChangeResponse
// Size: 0x30(Inherited: 0x18)
struct FClientMsgClassSpellSequenceChangeResponse : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_UtilityEffectivenessAdd
struct FOnRep_UtilityEffectivenessAdd
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgInteractEnd
// Size: 0x118(Inherited: 0x18)
struct FMsgInteractEnd : FMsgBase
{
	struct AActor* Interacter;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bIsSucceed : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	struct FGameplayTag EventTag;  // 0x24 (0x24)
	char pad_44[4];  // 0x2C (0x2C)
	struct FHitResult HitResult;  // 0x30 (0x30)


}; 
 
 // ScriptStruct DungeonCrawler.GameKillLogData
struct FGameKillLogData
{
	struct FAccountDataReplication AccountDataReplication;  // 0x0 (0x0)
	struct FInstigatorData InstigatorData;  // 0x78 (0x78)
	struct FEffectCauserData EffectCauserData;  // 0xC8 (0xC8)
	uint8_t HitBoxType;  // 0xE0 (0xE0)
	char pad_225[7];  // 0xE1 (0xE1)


}; 
 
 // ScriptStruct DungeonCrawler.ObjectLinkMetaData
struct FObjectLinkMetaData
{
	struct FGameplayTagQuery MetaDataTagQuery;  // 0x0 (0x0)
	struct AActor* MetaDataActor;  // 0x48 (0x48)
	float MetaDataFloat;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgGatheringHallChannelUserListResponse
// Size: 0x30(Inherited: 0x18)
struct FClientMsgGatheringHallChannelUserListResponse : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.AccountDataGameplayEffectValue
struct FAccountDataGameplayEffectValue
{
	struct FString EffectTag;  // 0x0 (0x0)
	int32_t EffectValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsVideoWidget.UpdateAntiAliasingSuperResolution
struct FUpdateAntiAliasingSuperResolution
{
	int32_t InSlotIdx;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameKillLogNotify
// Size: 0x108(Inherited: 0x18)
struct FMsgGameKillLogNotify : FMsgBase
{
	struct FGameKillLogData GameKillLogData;  // 0x18 (0x18)
	uint8_t KillReason;  // 0x100 (0x100)
	char pad_257[7];  // 0x101 (0x101)


}; 
 
 // Function DungeonCrawler.DCPlayerController.ServerDebugGiveGameplayEffectToTarget
struct FServerDebugGiveGameplayEffectToTarget
{
	struct FString InKey;  // 0x0 (0x0)
	struct AActor* TargetActor;  // 0x10 (0x10)
	struct FPrimaryAssetId GameplayEffectAssetId;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.AccountDataGameplayEffect
struct FAccountDataGameplayEffect
{
	struct FString EffectId;  // 0x0 (0x0)
	struct TArray<struct FAccountDataGameplayEffectValue> SelfEffectValueArray;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCCommonButtonBase.UnbindMsgOwner
struct FUnbindMsgOwner
{
	struct UScriptStruct* InMsgType;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAT_WaitForGameplayEvents.WaitForGameplayEvents
struct FWaitForGameplayEvents
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayTagContainer InEventTags;  // 0x8 (0x8)
	struct UDCAT_WaitForGameplayEvents* ReturnValue;  // 0x28 (0x28)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountLinkBegin
// Size: 0x128(Inherited: 0x18)
struct FMsgAccountLinkBegin : FMsgBase
{
	struct UAccountLink* AccountLink;  // 0x18 (0x18)
	struct FAccountData AccountData;  // 0x20 (0x20)
	struct UDCAttributeSet* AttributeSet;  // 0x100 (0x100)
	struct FPartySessionData PartySessionData;  // 0x108 (0x108)


}; 
 
 // ScriptStruct DungeonCrawler.MsgInventoryItemAmmoReduceResponse
// Size: 0x20(Inherited: 0x18)
struct FMsgInventoryItemAmmoReduceResponse : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bIsSucceed : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct DungeonCrawler.AccountDataGameplayAbility
struct FAccountDataGameplayAbility
{
	struct FString AbilityId;  // 0x0 (0x0)
	struct TArray<struct FAccountDataGameplayEffect> SelfEffectArray;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCItemDataComponent.OnLoadData_Art
struct FOnLoadData_Art
{
	struct UObject* InLoadedObject;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassRemoveUnEquipPerkNotify
// Size: 0x28(Inherited: 0x18)
struct FMsgWidgetClassRemoveUnEquipPerkNotify : FMsgBase
{
	struct FPrimaryAssetId PerkId;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.AccountDataItemMeta
struct FAccountDataItemMeta
{
	struct FString SoulHeart_AccountId;  // 0x0 (0x0)
	struct FString SoulHeart_PartyId;  // 0x10 (0x10)
	struct FNickname SoulHeart_NickName;  // 0x20 (0x20)
	int32_t AvailableValue;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)


}; 
 
 // ScriptStruct DungeonCrawler.ChatAccountData
struct FChatAccountData
{
	struct FString ChatAccountId;  // 0x0 (0x0)
	struct FString ChatCharacterId;  // 0x10 (0x10)
	struct FNickname ChatNickName;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.AccountDataItemProperty
struct FAccountDataItemProperty
{
	struct FString PropertyTypeId;  // 0x0 (0x0)
	int32_t PropertyValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function DungeonCrawler.DCGiftCodePopupBase.MoveToPrevCodeBlock
struct FMoveToPrevCodeBlock
{
	int32_t InCodeBlockIndex;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgClassSkillListResponse
// Size: 0x28(Inherited: 0x18)
struct FClientMsgClassSkillListResponse : FMsgBase
{
	char pad_24[16];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_StrengthMod
struct FOnRep_StrengthMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.InteractableTargetComponent.ShouldCancelOthersWhenInteractSucceed
struct FShouldCancelOthersWhenInteractSucceed
{
	struct FGameplayTag StateTag;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgClassSpellSlotMoveRequest
// Size: 0x38(Inherited: 0x20)
struct FClientMsgClassSpellSlotMoveRequest : FRequestMsg
{
	char pad_32[24];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataPropsInteract
struct FGetDesignDataPropsInteract
{
	struct FPrimaryAssetId InId;  // 0x0 (0x0)
	struct FDesignDataPropsInteract ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGASActorStatusResponse
// Size: 0x28(Inherited: 0x18)
struct FMsgGASActorStatusResponse : FMsgBase
{
	struct TArray<struct FActorStatusData> ActorStatusDatas;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsWithinDistance
struct FFilterTargetsWithinDistance
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x8 (0x8)
	float Distance;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool ReturnValue : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataItemBundleInfoItem
struct FDesignDataItemBundleInfoItem
{
	struct FPrimaryAssetId BundleArtData;  // 0x0 (0x0)
	int32_t BundleGrade;  // 0x10 (0x10)
	int32_t ItemMinCount;  // 0x14 (0x14)


}; 
 
 // Function DungeonCrawler.DCPlayerController.ChangeParty_Server
struct FChangeParty_Server
{
	struct FDCPartyId InPartyId;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.AccountDataItem
struct FAccountDataItem
{
	int64_t ItemUniqueId;  // 0x0 (0x0)
	struct FString ItemId;  // 0x8 (0x8)
	int32_t InventoryId;  // 0x18 (0x18)
	int32_t SlotId;  // 0x1C (0x1C)
	int32_t ItemCount;  // 0x20 (0x20)
	int32_t ItemAmmoCount;  // 0x24 (0x24)
	int32_t ItemContentsCount;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct FAccountDataItemMeta MetaData;  // 0x30 (0x30)
	struct TArray<struct FAccountDataItemProperty> PrimaryPropertyArray;  // 0x80 (0x80)
	struct TArray<struct FAccountDataItemProperty> SecondaryPropertyArray;  // 0x90 (0x90)


}; 
 
 // ScriptStruct DungeonCrawler.AccountDataPerk
struct FAccountDataPerk
{
	int32_t Index;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FString PerkId;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetTradeEndNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetTradeEndNotify : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.AccountDataSkill
struct FAccountDataSkill
{
	int32_t Index;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FString SkillId;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgOpenLobbyMapResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgOpenLobbyMapResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetItemDataFromDesignData
struct FGetItemDataFromDesignData
{
	struct FDesignDataItem InDesignDataItem;  // 0x0 (0x0)
	struct FItemData OutItemData;  // 0x188 (0x188)


}; 
 
 // ScriptStruct DungeonCrawler.DataSkill
struct FDataSkill
{
	struct FPrimaryAssetId SkillId;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.AccountDataSpell
struct FAccountDataSpell
{
	int32_t SlotIndex;  // 0x0 (0x0)
	int32_t SequenceIndex;  // 0x4 (0x4)
	struct FString SpellId;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyMemberInfoNotify
// Size: 0x28(Inherited: 0x18)
struct FClientMsgPartyMemberInfoNotify : FMsgBase
{
	char pad_24[16];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCMonsterBase.ChangeOrientRotationToMovement
struct FChangeOrientRotationToMovement
{
	char Value;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgBlockCharacterListRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgBlockCharacterListRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCEnhancedInputLibrary.GetActionValueWithController
struct FGetActionValueWithController
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UInputAction* Action;  // 0x8 (0x8)
	struct FInputActionValue ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataItemSkinTableRow
// Size: 0x58(Inherited: 0x8)
struct FDesignDataItemSkinTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataItemSkin> ItemSkin;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCCustomizeItemSkinListWidget.OnChangedVisibility
struct FOnChangedVisibility
{
	uint8_t InNewVisibility;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.MessageNotifyByReasonTag
struct FMessageNotifyByReasonTag
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct FGameplayTag InGameplayTag;  // 0x8 (0x8)
	float MsgDuration;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataSkillMap
struct FGetDesignDataSkillMap
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataSkill> OutDesignDataSkillMap;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetStreamingModeNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetStreamingModeNotify : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bCurrentStreamingMode : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct DungeonCrawler.MsgPartySessionArrayResponse
// Size: 0x28(Inherited: 0x18)
struct FMsgPartySessionArrayResponse : FMsgBase
{
	struct TArray<struct UPartySession*> PartySessionArray;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.AccountDataGameSpell
struct FAccountDataGameSpell
{
	struct FPrimaryAssetId SpellId;  // 0x0 (0x0)
	int32_t Count;  // 0x10 (0x10)
	int32_t ChargeAmount;  // 0x14 (0x14)


}; 
 
 // ScriptStruct DungeonCrawler.AccountDataMusic
struct FAccountDataMusic
{
	int32_t SlotIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FString MusicId;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.DCPlayerCharacterKey
struct FDCPlayerCharacterKey
{
	uint8_t CharacterClass;  // 0x0 (0x0)
	uint8_t Gender;  // 0x1 (0x1)


}; 
 
 // ScriptStruct DungeonCrawler.AccountDataGameSkill
struct FAccountDataGameSkill
{
	struct FPrimaryAssetId SkillId;  // 0x0 (0x0)
	int32_t Count;  // 0x10 (0x10)
	int32_t ChargeAmount;  // 0x14 (0x14)


}; 
 
 // ScriptStruct DungeonCrawler.MsgMusicPlayEnd
// Size: 0x18(Inherited: 0x18)
struct FMsgMusicPlayEnd : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgReconnectIngameRequest
// Size: 0x50(Inherited: 0x20)
struct FClientMsgReconnectIngameRequest : FRequestMsg
{
	char pad_32[48];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassSpellUnequipNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgWidgetClassSpellUnequipNotify : FMsgBase
{
	int32_t Index;  // 0x18 (0x18)
	struct FPrimaryAssetId SpellId;  // 0x1C (0x1C)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalAbsoluteReduction
struct FOnRep_MagicalAbsoluteReduction
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionComboBoxWidget.SetComboBoxList
struct FSetComboBoxList
{
	struct TArray<struct FString> InComboBoxDataList;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameTestClassSpellSequenceChangeRequest
// Size: 0x38(Inherited: 0x18)
struct FMsgGameTestClassSpellSequenceChangeRequest : FMsgBase
{
	int32_t RequestCommand;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FString SpellId;  // 0x20 (0x20)
	int32_t DstSequenceIndex;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataItemBundleInfo
struct FDesignDataItemBundleInfo
{
	struct TArray<struct FDesignDataItemBundleInfoItem> ItemBundleInfoItemArray;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnProjectileReductionMod
struct FOnProjectileReductionMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.AccountData
struct FAccountData
{
	struct FAccountDataReplication AccountDataReplication;  // 0x0 (0x0)
	struct TArray<struct FAccountDataItem> AccountDataItemArray;  // 0x78 (0x78)
	struct TArray<struct FAccountDataPerk> AccountDataPerkArray;  // 0x88 (0x88)
	struct TArray<struct FAccountDataSkill> AccountDataSkillArray;  // 0x98 (0x98)
	struct TArray<struct FAccountDataSpell> AccountDataSpellArray;  // 0xA8 (0xA8)
	struct TArray<struct FAccountDataMusic> AccountDataMusicArray;  // 0xB8 (0xB8)
	struct FString ExitReason;  // 0xC8 (0xC8)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool bNeedBlock : 1;  // 0xD8 (0xD8)
	char pad_217_1 : 7;  // 0xD9 (0xD9)
	bool bNeedHWBlock : 1;  // 0xD9 (0xD9)
	char pad_218[2];  // 0xDA (0xDA)
	int32_t BlockTimeMin;  // 0xDC (0xDC)


}; 
 
 // ScriptStruct DungeonCrawler.ActorStatusData
struct FActorStatusData
{
	struct FActiveGameplayEffectHandle EffectHandle;  // 0x0 (0x0)
	UGameplayEffect* GameplayEffectClass;  // 0x8 (0x8)
	int32_t StackCount;  // 0x10 (0x10)
	float StartServerWorldTime;  // 0x14 (0x14)
	float MaxDuration;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgClosedGameNotify
// Size: 0x20(Inherited: 0x18)
struct FClientMsgClosedGameNotify : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgItemDataNotify
// Size: 0x160(Inherited: 0x18)
struct FMsgItemDataNotify : FMsgBase
{
	struct UInventoryComponent* InventoryComponent;  // 0x18 (0x18)
	struct FItemData OldItemData;  // 0x20 (0x20)
	struct FItemData NewItemData;  // 0xC0 (0xC0)


}; 
 
 // Function DungeonCrawler.DCGameplayAbilityBase.MakeEffectContainerPremadeSpec
struct FMakeEffectContainerPremadeSpec
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct FGameplayTag ContainerTag;  // 0x8 (0x8)
	struct FGameplayEventData EventData;  // 0x10 (0x10)
	int32_t OverrideGameplayLevel;  // 0xC0 (0xC0)
	char pad_196[4];  // 0xC4 (0xC4)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgGmPartyAllRandomResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgGmPartyAllRandomResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.DCInventoryTaskTargetInfo
struct FDCInventoryTaskTargetInfo
{
	char pad_0[16];  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetMatchingAbilityActivatedCount
struct FGetMatchingAbilityActivatedCount
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct FGameplayTag InGameplayTag;  // 0x8 (0x8)
	int32_t ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct DungeonCrawler.AccountSessionData
struct FAccountSessionData
{
	struct FAccountData AccountData;  // 0x0 (0x0)
	struct TWeakObjectPtr<APlayerController> PlayerController;  // 0xE0 (0xE0)
	struct TWeakObjectPtr<APawn> PlayerPawn;  // 0xE8 (0xE8)


}; 
 
 // ScriptStruct DungeonCrawler.DCEquipItemGASInfo
struct FDCEquipItemGASInfo
{
	struct TArray<struct FGameplayAbilitySpecHandle> AbilityHandles;  // 0x0 (0x0)
	struct TArray<struct FActiveGameplayEffectHandle> EffectHandles;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.Item.GetItemDataUtilityTag
struct FGetItemDataUtilityTag
{
	struct FGameplayTag ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountLinkLootingTargetPlayerEquipmentInventoryNotify
// Size: 0x28(Inherited: 0x18)
struct FMsgAccountLinkLootingTargetPlayerEquipmentInventoryNotify : FMsgBase
{
	struct UAccountLink* AccountLink;  // 0x18 (0x18)
	struct UEquipmentInventoryComponent* EquipmentInventory;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnDivineMagicalReduction
struct FOnDivineMagicalReduction
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.PartySessionData
struct FPartySessionData
{
	struct FPartyData PartyData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_SpiritMagicResistance
struct FOnRep_SpiritMagicResistance
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.RankRecord
struct FRankRecord
{
	int32_t PageIndex;  // 0x0 (0x0)
	int32_t Rank;  // 0x4 (0x4)
	int32_t Score;  // 0x8 (0x8)
	float Percentage;  // 0xC (0xC)
	struct FString AccountId;  // 0x10 (0x10)
	struct FNickname Nickname;  // 0x20 (0x20)
	struct FString CharacterClass;  // 0x48 (0x48)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradingConfirmReadyResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgTradingConfirmReadyResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.CharacterSlot
struct FCharacterSlot
{
	struct FString CharacterId;  // 0x0 (0x0)
	struct FNickname Nickname;  // 0x10 (0x10)
	struct FString CharacterClass;  // 0x38 (0x38)
	int64_t CreateAt;  // 0x48 (0x48)
	uint8_t Gender;  // 0x50 (0x50)
	char pad_81[3];  // 0x51 (0x51)
	int32_t Level;  // 0x54 (0x54)
	int64_t LastLoginDate;  // 0x58 (0x58)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool bSelected : 1;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)
	struct TArray<struct FAccountDataItem> EquipItemList;  // 0x68 (0x68)
	struct FPrimaryAssetId EquipCharacterSkin;  // 0x78 (0x78)
	struct TArray<struct FPrimaryAssetId> EquipItemSkinList;  // 0x88 (0x88)


}; 
 
 // Function DungeonCrawler.ItemWidget.OnSetItemRequirementsFulfilledStatus
struct FOnSetItemRequirementsFulfilledStatus
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bFufilled : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FPrimaryAssetId PlayerCharacterId;  // 0x4 (0x4)
	char pad_20[4];  // 0x14 (0x14)
	struct UDCAttributeSet* AttributeSet;  // 0x18 (0x18)
	struct TArray<struct FPrimaryAssetId> PerkIdArray;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.CharacterSlotData
struct FCharacterSlotData
{
	struct TArray<struct FCharacterSlot> CharacterSlotArray;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnLightningMagicResistance
struct FOnLightningMagicResistance
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.PlayWidget.OnMatchStart
struct FOnMatchStart
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InbCanCancel : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float InMatchCancelDelayTimeSec;  // 0x4 (0x4)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgLobbyCharacterLobbyEmoteNotify
// Size: 0x28(Inherited: 0x18)
struct FClientMsgLobbyCharacterLobbyEmoteNotify : FMsgBase
{
	char pad_24[16];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.InvitePartyUserSlot
struct FInvitePartyUserSlot
{
	struct FString AccountId;  // 0x0 (0x0)
	struct FNickname Nickname;  // 0x10 (0x10)
	struct FString CharacterClass;  // 0x38 (0x38)
	struct FString CharacterId;  // 0x48 (0x48)
	int32_t Gender;  // 0x58 (0x58)
	int32_t Level;  // 0x5C (0x5C)
	int32_t LocationStatus;  // 0x60 (0x60)
	int32_t PartyMemeberCount;  // 0x64 (0x64)
	int32_t PartyMaxMemeberCount;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameAnnounceNotify
// Size: 0xA8(Inherited: 0x18)
struct FMsgGameAnnounceNotify : FMsgBase
{
	struct FGameAnnounceData GameAnnounceData;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyExitResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgPartyExitResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.LobbyCharacterInfo
struct FLobbyCharacterInfo
{
	struct FString AccountId;  // 0x0 (0x0)
	struct FNickname Nickname;  // 0x10 (0x10)
	struct FString CharacterClass;  // 0x38 (0x38)
	struct FString CharacterId;  // 0x48 (0x48)
	int32_t Gender;  // 0x58 (0x58)
	int32_t Level;  // 0x5C (0x5C)
	struct FString ServiceGrpc;  // 0x60 (0x60)
	struct TArray<struct FAccountDataItem> CharacterItemList;  // 0x70 (0x70)
	struct TArray<struct FAccountDataItem> CharacterStorageItemList;  // 0x80 (0x80)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgMetaLocationResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgMetaLocationResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemRarityTypeTextMap
struct FGetItemRarityTypeTextMap
{
	struct TMap<struct FGameplayTag, struct FText> ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCHttpResHandler
struct FDCHttpResHandler
{
	char pad_0[40];  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnAirMagicResistance
struct FOnAirMagicResistance
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.MsgEquip
// Size: 0x18(Inherited: 0x18)
struct FMsgEquip : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgMerchantStockBuyResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgMerchantStockBuyResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCPlayerController.OnRep_AccountId
struct FOnRep_AccountId
{
	struct FString OldId;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.EquipmentWeaponSlotSetWidget.SetActiveSecondaryHoverImage
struct FSetActiveSecondaryHoverImage
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bActivate : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.GameActorStatusSlotWidgetData
struct FGameActorStatusSlotWidgetData
{
	struct FActorStatusData ActorStatusData;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgUpdateMeshEvent
// Size: 0x20(Inherited: 0x18)
struct FMsgUpdateMeshEvent : FMsgBase
{
	struct UMeshComponent* MeshComponent;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.AccountDataCustomizeCharacter
struct FAccountDataCustomizeCharacter
{
	struct FString CustomizeCharacterId;  // 0x0 (0x0)
	int32_t IsEquip;  // 0x10 (0x10)
	int32_t IsNew;  // 0x14 (0x14)


}; 
 
 // ScriptStruct DungeonCrawler.AccountDataCustomizeItem
struct FAccountDataCustomizeItem
{
	struct FString CustomizeItemId;  // 0x0 (0x0)
	int32_t IsEquip;  // 0x10 (0x10)
	int32_t IsNew;  // 0x14 (0x14)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgReLoginResponse
// Size: 0x50(Inherited: 0x18)
struct FClientMsgReLoginResponse : FMsgBase
{
	char pad_24[56];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountLinkPartySessionDataNotify
// Size: 0x40(Inherited: 0x18)
struct FMsgAccountLinkPartySessionDataNotify : FMsgBase
{
	struct UAccountLink* AccountLink;  // 0x18 (0x18)
	struct FPartySessionData PartySessionData;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgSpellDataUpdateNotify
// Size: 0x58(Inherited: 0x18)
struct FMsgSpellDataUpdateNotify : FMsgBase
{
	struct FSpellData SpellData;  // 0x18 (0x18)
	char pad_84[4];  // 0x54 (0x54)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_WaterMagicalReduction
struct FOnRep_WaterMagicalReduction
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.Item.GetItemSlotType
struct FGetItemSlotType
{
	struct FGameplayTag ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.AccountDataEmote
struct FAccountDataEmote
{
	struct FString EmoteId;  // 0x0 (0x0)
	int32_t EquipSlotIndex;  // 0x10 (0x10)
	int32_t IsNew;  // 0x14 (0x14)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataEmoteTableRow
// Size: 0xF8(Inherited: 0x8)
struct FDesignDataEmoteTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataEmote> Emote;  // 0x8 (0x8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayAbility> EmoteAbility;  // 0x58 (0x58)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayEffect> EmoteEffect;  // 0xA8 (0xA8)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MaxHealthMod
struct FOnRep_MaxHealthMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCGameplayAbilityHandleData
struct FDCGameplayAbilityHandleData
{
	struct FGameplayAbilitySpecHandle AbilitySpecHandle;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FDCGameplayAbilityData GameplayAbilityData;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.LobbyWidget.OnMatchingStateChanged
struct FOnMatchingStateChanged
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bMatching : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.AccountDataLobbyEmote
struct FAccountDataLobbyEmote
{
	struct FString LobbyEmoteId;  // 0x0 (0x0)
	int32_t EquipSlotIndex;  // 0x10 (0x10)
	int32_t IsNew;  // 0x14 (0x14)


}; 
 
 // Function DungeonCrawler.DCPlayerController.StartToWearItem_Client
struct FStartToWearItem_Client
{
	struct FItemData InWearingItemData;  // 0x0 (0x0)
	struct AActor* InWearingActor;  // 0xA0 (0xA0)
	float InDuration;  // 0xA8 (0xA8)
	char pad_172[4];  // 0xAC (0xAC)
	struct FText InDescription;  // 0xB0 (0xB0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountDataNotify
// Size: 0xF8(Inherited: 0x18)
struct FMsgAccountDataNotify : FMsgBase
{
	struct FAccountData AccountData;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.GA_Interact.OnSkillCheckFinished
struct FOnSkillCheckFinished
{
	uint8_t Result;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountDataItemChangeRequest
// Size: 0xC8(Inherited: 0x18)
struct FMsgAccountDataItemChangeRequest : FMsgBase
{
	struct FString AccountId;  // 0x18 (0x18)
	struct FAccountDataItem AccountDataItem;  // 0x28 (0x28)


}; 
 
 // ScriptStruct DungeonCrawler.MsgProjectileHitByTarget
// Size: 0x38(Inherited: 0x18)
struct FMsgProjectileHitByTarget : FMsgBase
{
	struct AActor* SourceActor;  // 0x18 (0x18)
	struct FVector HitLocation;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgLobbyEnterFromGameRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgLobbyEnterFromGameRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDarkDamageAdd
struct FOnRep_MagicalDarkDamageAdd
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.TimerWidgetData
struct FTimerWidgetData
{
	int32_t LeftHour;  // 0x0 (0x0)
	int32_t LeftMinute;  // 0x4 (0x4)
	int32_t LeftSecond;  // 0x8 (0x8)
	float Progress;  // 0xC (0xC)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetTradeChannelChatResponse
// Size: 0x28(Inherited: 0x18)
struct FMsgWidgetTradeChannelChatResponse : FMsgBase
{
	uint8_t Result;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FTimespan TimeLeft;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.SkillDataInfo
struct FSkillDataInfo
{
	struct FActiveGameplayEffectHandle EffectHandle;  // 0x0 (0x0)
	struct FGameplayTag SkillTag;  // 0x8 (0x8)
	struct FGameplayTag CooldownTag;  // 0x10 (0x10)
	float RemainDuration;  // 0x18 (0x18)
	float MaxDuration;  // 0x1C (0x1C)
	float StartTime;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCMultiLineEditableTextBox.Goto
struct FGoto
{
	int32_t InLineIndex;  // 0x0 (0x0)
	int32_t InOffset;  // 0x4 (0x4)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountLinkResponse
// Size: 0x20(Inherited: 0x18)
struct FMsgAccountLinkResponse : FMsgBase
{
	struct UAccountSession* AccountSession;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountSessionDataNotify
// Size: 0x108(Inherited: 0x18)
struct FMsgAccountSessionDataNotify : FMsgBase
{
	struct FAccountSessionData AccountSessionData;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.AoeScaleData
struct FAoeScaleData
{
	float OldServerWorldTimeSeconds;  // 0x0 (0x0)
	float OldScale;  // 0x4 (0x4)
	float NewServerWorldTimeSeconds;  // 0x8 (0x8)
	float NewScale;  // 0xC (0xC)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountSessionNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgAccountSessionNotify : FMsgBase
{
	struct UAccountSession* AccountSession;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyMemberLobbyEmoteNotify
// Size: 0x48(Inherited: 0x18)
struct FClientMsgPartyMemberLobbyEmoteNotify : FMsgBase
{
	char pad_24[48];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.GameplayAbilityTargetData_SingleTargetHitWithTag
// Size: 0x180(Inherited: 0x8)
struct FGameplayAbilityTargetData_SingleTargetHitWithTag : FGameplayAbilityTargetData
{
	struct FHitResult HitResult;  // 0x8 (0x8)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool bHitReplaced : 1;  // 0xF0 (0xF0)
	char pad_241[3];  // 0xF1 (0xF1)
	struct FGameplayTag TargetTag;  // 0xF4 (0xF4)
	struct FGameplayTag ChannelTag;  // 0xFC (0xFC)
	char pad_260[4];  // 0x104 (0x104)
	struct FString SocketName;  // 0x108 (0x108)
	char pad_280[8];  // 0x118 (0x118)
	struct FTransform ActorPrevTickTransform;  // 0x120 (0x120)


}; 
 
 // ScriptStruct DungeonCrawler.MsgMusicPlaySucceed
// Size: 0x20(Inherited: 0x18)
struct FMsgMusicPlaySucceed : FMsgBase
{
	uint8_t Judge;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataLobbyEmote
struct FDesignDataLobbyEmote
{
	struct FText Name;  // 0x0 (0x0)
	struct FText FlavorText;  // 0x18 (0x18)
	struct FGameplayTag LobbyEmoteTag;  // 0x30 (0x30)
	struct FPrimaryAssetId ArtData;  // 0x38 (0x38)
	struct TArray<struct FPrimaryAssetId> Abilities;  // 0x48 (0x48)
	struct TArray<struct FPrimaryAssetId> Effects;  // 0x58 (0x58)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountLinkAccountSessionDataRequest
// Size: 0x18(Inherited: 0x18)
struct FMsgAccountLinkAccountSessionDataRequest : FMsgBase
{


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterMonsterTargets
struct FFilterMonsterTargets
{
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetAddItemOnDealTableSuccessNotify
// Size: 0xB8(Inherited: 0x18)
struct FMsgWidgetAddItemOnDealTableSuccessNotify : FMsgBase
{
	struct FItemData ItemData;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountLinkAccountSessionDataResponse
// Size: 0x110(Inherited: 0x18)
struct FMsgAccountLinkAccountSessionDataResponse : FMsgBase
{
	struct UAccountLink* AccountLink;  // 0x18 (0x18)
	struct FAccountSessionData AccountSessionData;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.DCInventoryTaskAuxInfo
struct FDCInventoryTaskAuxInfo
{
	char pad_0[72];  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetMeleeAttackAbilityDamageRatioFromEffectSpec
struct FGetMeleeAttackAbilityDamageRatioFromEffectSpec
{
	struct FGameplayEffectSpec InSpec;  // 0x0 (0x0)
	float ReturnValue;  // 0x298 (0x298)
	char pad_668[4];  // 0x29C (0x29C)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.FindSocketOwningMeshComponent
struct FFindSocketOwningMeshComponent
{
	struct FName SocketName;  // 0x0 (0x0)
	struct UObject* Object;  // 0x8 (0x8)
	struct AActor* AvatarActor;  // 0x10 (0x10)
	struct USkeletalMeshComponent* ReturnValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountLinkAccountDataReplicationNotify
// Size: 0x98(Inherited: 0x18)
struct FMsgAccountLinkAccountDataReplicationNotify : FMsgBase
{
	struct UAccountLink* AccountLink;  // 0x18 (0x18)
	struct FAccountDataReplication AccountDataReplication;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.GA_ReloadAmmoBase.OnCancelled
struct FOnCancelled
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DescData.GetDescription
struct FGetDescription
{
	struct UDescDataParam* InDescDataParam;  // 0x0 (0x0)
	struct TArray<struct FText> OutDescTextArray;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountLinkPlayerControllerNotify
// Size: 0x28(Inherited: 0x18)
struct FMsgAccountLinkPlayerControllerNotify : FMsgBase
{
	struct UAccountLink* AccountLink;  // 0x18 (0x18)
	struct APlayerController* PlayerController;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.DDCItemPropertyItem
struct FDDCItemPropertyItem
{
	struct TSoftObjectPtr<UDCItemPropertyTypeDataAsset> PropertyTypeId;  // 0x0 (0x0)
	int32_t MinValue;  // 0x30 (0x30)
	int32_t MaxValue;  // 0x34 (0x34)
	int32_t PropertyRate;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 // ScriptStruct DungeonCrawler.VoipPartyMemberData
struct FVoipPartyMemberData
{
	struct FDCAccountId AccountId;  // 0x0 (0x0)
	struct FNickname Nickname;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsOverXYRange
struct FFilterTargetsOverXYRange
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x8 (0x8)
	float XYRange;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool ReturnValue : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgMerchantServiceCraftRequest
// Size: 0x70(Inherited: 0x20)
struct FClientMsgMerchantServiceCraftRequest : FRequestMsg
{
	char pad_32[80];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.GameCrossHairWidget.OnPlayPullingCrossHair
struct FOnPlayPullingCrossHair
{
	float Rate;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountLinkPlayerPawnNotify
// Size: 0x28(Inherited: 0x18)
struct FMsgAccountLinkPlayerPawnNotify : FMsgBase
{
	struct UAccountLink* AccountLink;  // 0x18 (0x18)
	struct APawn* PlayerPawn;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgSucceedWidgetMoveItem
// Size: 0x28(Inherited: 0x18)
struct FMsgSucceedWidgetMoveItem : FMsgBase
{
	struct TArray<struct FItemData> ItemDataArray;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountLinkAttributeSetNotify
// Size: 0x28(Inherited: 0x18)
struct FMsgAccountLinkAttributeSetNotify : FMsgBase
{
	struct UAccountLink* AccountLink;  // 0x18 (0x18)
	struct UDCAttributeSet* AttributeSet;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.DCStringIdBase
struct FDCStringIdBase
{
	struct FString _;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountLinkGameplayTagContainerNotify
// Size: 0x40(Inherited: 0x18)
struct FMsgAccountLinkGameplayTagContainerNotify : FMsgBase
{
	struct UAccountLink* AccountLink;  // 0x18 (0x18)
	struct FGameplayTagContainer GameplayTagContainer;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassMusicUnequippedListNotify
// Size: 0x28(Inherited: 0x18)
struct FMsgWidgetClassMusicUnequippedListNotify : FMsgBase
{
	struct TArray<struct FMusicData> MusicArray;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradingConfirmReadyNotify
// Size: 0x58(Inherited: 0x18)
struct FClientMsgTradingConfirmReadyNotify : FMsgBase
{
	char pad_24[64];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetLoadoutBeginNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetLoadoutBeginNotify : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountLinkGameplayTagNotify
// Size: 0x50(Inherited: 0x18)
struct FMsgAccountLinkGameplayTagNotify : FMsgBase
{
	struct UAccountLink* AccountLink;  // 0x18 (0x18)
	struct FGameplayTagContainer GameplayTagContainer;  // 0x20 (0x20)
	struct FGameplayTag GameplayTag;  // 0x40 (0x40)
	int32_t Count;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnArmorRating
struct FOnArmorRating
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnFireMagicResistance
struct FOnFireMagicResistance
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.LeaderboardContentWidget.OnContentName
struct FOnContentName
{
	struct FText NewValue;  // 0x0 (0x0)
	struct FText OldValue;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCMerchantDealTableSellWidget.IsSellEnabled
struct FIsSellEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgPartyLinkAllPartyDataNotify
// Size: 0x58(Inherited: 0x18)
struct FMsgPartyLinkAllPartyDataNotify : FMsgBase
{
	struct FPartyData PartyData;  // 0x18 (0x18)
	struct FPartyData OldPartyData;  // 0x38 (0x38)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountLinkAllAccountDataReplicationNotify
// Size: 0x108(Inherited: 0x18)
struct FMsgAccountLinkAllAccountDataReplicationNotify : FMsgBase
{
	struct FAccountDataReplication AccountDataReplication;  // 0x18 (0x18)
	struct FAccountDataReplication OldAccountDataReplication;  // 0x90 (0x90)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetProgressBarResume
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetProgressBarResume : FMsgBase
{
	float AdditionalElapsedTimeRatio;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountLinkActorStatusNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgAccountLinkActorStatusNotify : FMsgBase
{
	struct UAccountLink* AccountLink;  // 0x18 (0x18)
	struct TArray<struct FActorStatusData> ActorStatusDatas;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.DCPlayMusicDataContainer
struct FDCPlayMusicDataContainer
{
	struct UAkSwitchValue* AkSwitch;  // 0x0 (0x0)
	struct FName MontageSectionName;  // 0x8 (0x8)
	float SectionPlayTime;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyCharacterSkinListNotify
// Size: 0x48(Inherited: 0x18)
struct FClientMsgPartyCharacterSkinListNotify : FMsgBase
{
	char pad_24[48];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCCustomizeEmoteRadialSlotWidget.GetEmoteIconVisibility
struct FGetEmoteIconVisibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountLinkEquipmentInventoryNotify
// Size: 0x28(Inherited: 0x18)
struct FMsgAccountLinkEquipmentInventoryNotify : FMsgBase
{
	struct UAccountLink* AccountLink;  // 0x18 (0x18)
	struct UEquipmentInventoryComponent* EquipmentInventory;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgInteractSkillCheckStart
// Size: 0x38(Inherited: 0x18)
struct FMsgInteractSkillCheckStart : FMsgBase
{
	struct FSkillCheckData SkillCheckData;  // 0x18 (0x18)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetConstantFloat
struct FGetConstantFloat
{
	struct FPrimaryAssetId InConstantId;  // 0x0 (0x0)
	float ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountLinkContainerInventoryNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgAccountLinkContainerInventoryNotify : FMsgBase
{
	struct UAccountLink* AccountLink;  // 0x18 (0x18)
	struct UInventoryComponent* OldInventory;  // 0x20 (0x20)
	struct UInventoryComponent* NewInventory;  // 0x28 (0x28)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradeMembershipRequirementRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgTradeMembershipRequirementRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetLobbySystemMessageNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgWidgetLobbySystemMessageNotify : FMsgBase
{
	struct FText AnnounceText;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountLinkLootComponentNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgAccountLinkLootComponentNotify : FMsgBase
{
	struct UAccountLink* AccountLink;  // 0x18 (0x18)
	struct ULootComponent* OldLootComponent;  // 0x20 (0x20)
	struct ULootComponent* NewLootComponent;  // 0x28 (0x28)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetChangeCrossHairWhenThrowingNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgWidgetChangeCrossHairWhenThrowingNotify : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ChatDataPieceItemProperty
struct FChatDataPieceItemProperty
{
	struct FString Pid;  // 0x0 (0x0)
	int32_t Pv;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgBlockCharacterRequest
// Size: 0x40(Inherited: 0x20)
struct FClientMsgBlockCharacterRequest : FRequestMsg
{
	char pad_32[32];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountLinkLootingTargetPlayerInventoryNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgAccountLinkLootingTargetPlayerInventoryNotify : FMsgBase
{
	struct UAccountLink* AccountLink;  // 0x18 (0x18)
	struct UInventoryComponent* OldTargetInventory;  // 0x20 (0x20)
	struct UInventoryComponent* NewTargetInventory;  // 0x28 (0x28)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountLinkStorageInventoryNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgAccountLinkStorageInventoryNotify : FMsgBase
{
	struct UAccountLink* AccountLink;  // 0x18 (0x18)
	struct UMetaStorageComponent* OldStorage;  // 0x20 (0x20)
	struct UMetaStorageComponent* NewStorage;  // 0x28 (0x28)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgFriendListAllResponse
// Size: 0x38(Inherited: 0x18)
struct FClientMsgFriendListAllResponse : FMsgBase
{
	char pad_24[32];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetCharacterSelectGroupToggleNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetCharacterSelectGroupToggleNotify : FMsgBase
{
	uint8_t WidgetCharacterSelectGroupType;  // 0x18 (0x18)
	uint8_t NewVisibility;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageAdd
struct FOnPhysicalDamageAdd
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsAudioWidget.OnVoipInputVolumeValueChanged
struct FOnVoipInputVolumeValueChanged
{
	float NewValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountLinkSkillIdArrayNotify
// Size: 0x40(Inherited: 0x18)
struct FMsgAccountLinkSkillIdArrayNotify : FMsgBase
{
	struct UAccountLink* AccountLink;  // 0x18 (0x18)
	struct TArray<struct FPrimaryAssetId> OldSkillIdArray;  // 0x20 (0x20)
	struct TArray<struct FPrimaryAssetId> NewSkillIdArray;  // 0x30 (0x30)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyRegionChangeNotify
// Size: 0x20(Inherited: 0x18)
struct FClientMsgPartyRegionChangeNotify : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgMetaLocationRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgMetaLocationRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyExitRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgPartyExitRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassSpellBeginNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetClassSpellBeginNotify : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountLinkSpellIdArrayNotify
// Size: 0x40(Inherited: 0x18)
struct FMsgAccountLinkSpellIdArrayNotify : FMsgBase
{
	struct UAccountLink* AccountLink;  // 0x18 (0x18)
	struct TArray<struct FPrimaryAssetId> OldSpellIdArray;  // 0x20 (0x20)
	struct TArray<struct FPrimaryAssetId> NewSpellIdArray;  // 0x30 (0x30)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataMovementModifierTableRow
// Size: 0x58(Inherited: 0x8)
struct FDesignDataMovementModifierTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataMovementModifier> MovementModifier;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgRemoveCheckTargetPlayerEquipment
// Size: 0x18(Inherited: 0x18)
struct FMsgRemoveCheckTargetPlayerEquipment : FMsgBase
{


}; 
 
 // Function DungeonCrawler.ClassSpellCapacityWidget.OnSpellListChanged
struct FOnSpellListChanged
{
	struct TArray<struct FSpellData> InSpellDataArray;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAccountExitReasonRequest
// Size: 0x40(Inherited: 0x18)
struct FMsgAccountExitReasonRequest : FMsgBase
{
	struct FString AccountId;  // 0x18 (0x18)
	struct FString Reason;  // 0x28 (0x28)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bNeedBlock : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool bNeedHWBlock : 1;  // 0x39 (0x39)
	char pad_58[2];  // 0x3A (0x3A)
	int32_t BlockTimeMin;  // 0x3C (0x3C)


}; 
 
 // ScriptStruct DungeonCrawler.MsgActorAttachmentChangedNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgActorAttachmentChangedNotify : FMsgBase
{
	struct USceneComponent* AttachParentComponent;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_DarkMagicalReductionMod
struct FOnRep_DarkMagicalReductionMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataTriumphLevelTableRow
// Size: 0x58(Inherited: 0x8)
struct FDesignDataTriumphLevelTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataTriumphLevel> TriumphLevel;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterUnTagedTargets
struct FFilterUnTagedTargets
{
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x0 (0x0)
	struct FGameplayTag GameplayTag;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct DungeonCrawler.MsgActorSleepNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgActorSleepNotify : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bSleep : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataPlayerCharacter
struct FGetDesignDataPlayerCharacter
{
	struct FPrimaryAssetId InId;  // 0x0 (0x0)
	struct FDesignDataPlayerCharacter ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.LocomotionAnimSet
struct FLocomotionAnimSet
{
	struct UAnimSequenceBase* StandIdle;  // 0x0 (0x0)
	struct UAnimSequenceBase* CrouchIdle;  // 0x8 (0x8)
	struct UBlendSpace* RunUpperBody;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.MsgEquipItemAnimData
// Size: 0x248(Inherited: 0x18)
struct FMsgEquipItemAnimData : FMsgBase
{
	struct FDCEquipAnimData EquipAnimData;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCAT_WaitGenericGameplayTagEvent.WaitGenericGameplayTagEvent
struct FWaitGenericGameplayTagEvent
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct AActor* InOptionalExternalTarget;  // 0x8 (0x8)
	struct UDCAT_WaitGenericGameplayTagEvent* ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgReconnectResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgReconnectResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.RequestMsg
// Size: 0x20(Inherited: 0x18)
struct FRequestMsg : FMsgBase
{
	int32_t RequestCommand;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct DungeonCrawler.KeyboardInputBinding
struct FKeyboardInputBinding
{
	struct FEnhancedActionKeyMapping InputMapping;  // 0x0 (0x0)
	char pad_136[32];  // 0x88 (0x88)


}; 
 
 // ScriptStruct DungeonCrawler.DCEquipAnimData
struct FDCEquipAnimData
{
	struct FDCItemInfo PrimaryItem;  // 0x0 (0x0)
	struct FDCItemInfo SecondaryItem;  // 0x118 (0x118)


}; 
 
 // Function DungeonCrawler.DCGameplayAbilityBase.RemoveGameplayCueLocal
struct FRemoveGameplayCueLocal
{
	struct FGameplayTag GameplayCueTag;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.JumpToLocation
struct FJumpToLocation
{
	struct ADCCharacterBase* DCCharacterBase;  // 0x0 (0x0)
	struct FVector DstLocation;  // 0x8 (0x8)
	float Power;  // 0x20 (0x20)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool bFavorHighArc : 1;  // 0x24 (0x24)
	char pad_37_1 : 7;  // 0x25 (0x25)
	bool ReturnValue : 1;  // 0x25 (0x25)
	char pad_38[2];  // 0x26 (0x26)


}; 
 
 // Function DungeonCrawler.DCPlayerController.GetDebugFaceTargetActor
struct FGetDebugFaceTargetActor
{
	struct AActor* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameInteractionSkillCheckWidget.OnInteractSkillCheckStart
struct FOnInteractSkillCheckStart
{
	struct FSkillCheckData SkillCheckData;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCItemInfo
struct FDCItemInfo
{
	struct FDCItemId ID;  // 0x0 (0x0)
	struct UDCItemDataAsset* DataAsset;  // 0x8 (0x8)
	int32_t Stack;  // 0x10 (0x10)
	int32_t InnerStack;  // 0x14 (0x14)
	struct FDCAccountId OwnerAccountId;  // 0x18 (0x18)
	struct TArray<struct FDCGameplayAbilityData> SelfAbilities;  // 0x28 (0x28)
	struct TArray<struct FDCGameplayEffectData> SelfEffects;  // 0x38 (0x38)
	struct TArray<struct FDCGameplayAbilityData> OwnerAbilities;  // 0x48 (0x48)
	struct TArray<struct FDCGameplayEffectData> OwnerEffects;  // 0x58 (0x58)
	struct TArray<struct FDCPropertyEffectData> Properties;  // 0x68 (0x68)
	struct FItemData ItemData;  // 0x78 (0x78)


}; 
 
 // ScriptStruct DungeonCrawler.DCPropertyEffectData
struct FDCPropertyEffectData
{
	struct FGameplayTag PropertyType;  // 0x0 (0x0)
	struct FPrimaryAssetId PropertyId;  // 0x8 (0x8)
	int32_t PropertyValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameTestClassSpellSequenceChangeResponse
// Size: 0x30(Inherited: 0x18)
struct FMsgGameTestClassSpellSequenceChangeResponse : FMsgBase
{
	int32_t Result;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct TArray<struct FAccountDataSpell> EquipSpellList;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.DCGameplayEffectData
struct FDCGameplayEffectData
{
	struct FPrimaryAssetId EffectId;  // 0x0 (0x0)
	UGameplayEffect* GameplayEffectClass;  // 0x10 (0x10)
	struct TArray<struct FDCGameplayEffectSetByCallerData> SetByCallerArray;  // 0x18 (0x18)
	struct FGameplayTagContainer DynamicGrantedTagContainer;  // 0x28 (0x28)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetPopupMessageReqeust
// Size: 0x30(Inherited: 0x30)
struct FMsgWidgetPopupMessageReqeust : FMsgPopup
{


}; 
 
 // ScriptStruct DungeonCrawler.DCGameplayEffectSetByCallerData
struct FDCGameplayEffectSetByCallerData
{
	struct FGameplayTag SetByCallerTag;  // 0x0 (0x0)
	float SetByCallerValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetSkillCooldownClearWidgetNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetSkillCooldownClearWidgetNotify : FMsgBase
{


}; 
 
 // Function DungeonCrawler.DCPostProcessingComponent.ReverseFromEndPlayCameraPostProcess
struct FReverseFromEndPlayCameraPostProcess
{
	struct UMaterialInstanceDynamic* InMIDKey;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnWaterMagicalReductionMagicResistance
struct FOnWaterMagicalReductionMagicResistance
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.DCGameplayAbilityData
struct FDCGameplayAbilityData
{
	struct FPrimaryAssetId AbilityId;  // 0x0 (0x0)
	UGameplayAbility* GameplayAbilityClass;  // 0x10 (0x10)
	struct TArray<struct FDCGameplayEffectContainer> GameplayEffectContainerArray;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCSimpleTooltipWidget.SetTooltipData
struct FSetTooltipData
{
	struct FText Text;  // 0x0 (0x0)
	struct FSlateColor TextColor;  // 0x18 (0x18)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataPropsSkillCheck
struct FDesignDataPropsSkillCheck
{
	struct FGameplayTag SkillCheckType;  // 0x0 (0x0)
	float MinDuration;  // 0x8 (0x8)
	float MaxDuration;  // 0xC (0xC)
	float MinSkillCheckInterval;  // 0x10 (0x10)
	float MaxSkillCheckInterval;  // 0x14 (0x14)
	float MinSucceedSectionStartTime;  // 0x18 (0x18)
	float SucceedSectionSizeSeconds;  // 0x1C (0x1C)
	float SucceedBonusTimeRatio;  // 0x20 (0x20)
	float PerfectSucceedSectionSizeSeconds;  // 0x24 (0x24)
	float PerfectSucceedBonusTimeRatio;  // 0x28 (0x28)
	float FailedBonusTimeRatio;  // 0x2C (0x2C)


}; 
 
 // ScriptStruct DungeonCrawler.DCGameplayEffectContainer
struct FDCGameplayEffectContainer
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	UDCTargetType* TargetType;  // 0x8 (0x8)
	struct FDCGameplayEffectData GameplayEffectData;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalHeadshotPenetration
struct FOnRep_PhysicalHeadshotPenetration
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCAccountId
// Size: 0x10(Inherited: 0x10)
struct FDCAccountId : FDCStringIdBase
{


}; 
 
 // Function DungeonCrawler.ClassUnEquipmentPerkandSkillListWidget.GetSelectedSkillId
struct FGetSelectedSkillId
{
	struct FPrimaryAssetId ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataPropsSkillCheck
struct FGetDesignDataPropsSkillCheck
{
	struct FPrimaryAssetId InId;  // 0x0 (0x0)
	struct FDesignDataPropsSkillCheck ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgMerchantServiceCraftListRequest
// Size: 0x30(Inherited: 0x20)
struct FClientMsgMerchantServiceCraftListRequest : FRequestMsg
{
	char pad_32[16];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyEquipItemChangeNotify
// Size: 0x58(Inherited: 0x18)
struct FClientMsgPartyEquipItemChangeNotify : FMsgBase
{
	char pad_24[64];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.DCInt64IdBase
struct FDCInt64IdBase
{
	int64_t _;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCItemId
// Size: 0x8(Inherited: 0x8)
struct FDCItemId : FDCInt64IdBase
{


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradeChannelUserListResponse
// Size: 0x30(Inherited: 0x18)
struct FClientMsgTradeChannelUserListResponse : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassSlotUnLockLevelNotify
// Size: 0x38(Inherited: 0x18)
struct FMsgWidgetClassSlotUnLockLevelNotify : FMsgBase
{
	struct TArray<int32_t> IndexArray;  // 0x18 (0x18)
	struct TArray<int32_t> UnLockLevelArray;  // 0x28 (0x28)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAnimationStopMontage
// Size: 0x18(Inherited: 0x18)
struct FMsgAnimationStopMontage : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.DCPropertyAttributePerk
struct FDCPropertyAttributePerk
{
	struct FPrimaryAssetId PerkId;  // 0x0 (0x0)
	int32_t PerkValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnMoveSpeedAdd
struct FOnMoveSpeedAdd
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCPartyManager.OnPlayerRemoved
struct FOnPlayerRemoved
{
	struct FDCPlayerInfo RemovedPlayer;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsAudioWidget.OnTotalVolumeValueChanged
struct FOnTotalVolumeValueChanged
{
	float NewValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgStorageInfoRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgStorageInfoRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCWidgetBlueprintLibrary.StringToAccountId
struct FStringToAccountId
{
	struct FString InAccountIdStr;  // 0x0 (0x0)
	struct FDCAccountId ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAnimationMontageJumpToSection
// Size: 0x20(Inherited: 0x18)
struct FMsgAnimationMontageJumpToSection : FMsgBase
{
	struct FName SectionName;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.MailBoxWidgetBase.OnFMsgWidgetStreamingModeNotifyBlueprint
struct FOnFMsgWidgetStreamingModeNotifyBlueprint
{
	struct FMsgWidgetStreamingModeNotify InMsg;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAnimationChangeIdle
// Size: 0x20(Inherited: 0x18)
struct FMsgAnimationChangeIdle : FMsgBase
{
	struct FGameplayTag IdleAnimSequenceGameplayTag;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAnimationHitReaction
// Size: 0x30(Inherited: 0x18)
struct FMsgAnimationHitReaction : FMsgBase
{
	struct FVector HitDirection;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgGmPartyAllRandomRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgGmPartyAllRandomRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.ChatWidgetBase.FilterStreamingMode
struct FFilterStreamingMode
{
	struct FString OriginalStr;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradeChannelListResponse
// Size: 0x30(Inherited: 0x18)
struct FClientMsgTradeChannelListResponse : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetAggroPoint
struct FGetAggroPoint
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct ADCCharacterBase* Target;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bSuccessfully : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	float ReturnValue;  // 0x14 (0x14)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAoeAISet
// Size: 0x20(Inherited: 0x18)
struct FMsgAoeAISet : FMsgBase
{
	struct UBehaviorTree* BehaviorTree;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.LeaderboardRankRecordWidget.OnRankRecordData
struct FOnRankRecordData
{
	struct FRankRecord NewValue;  // 0x0 (0x0)
	struct FRankRecord OldValue;  // 0x58 (0x58)


}; 
 
 // Function DungeonCrawler.AsyncTaskWaitGAEnded.WaitForAbilityEnd_Query
struct FWaitForAbilityEnd_Query
{
	struct AActor* TargetActor;  // 0x0 (0x0)
	struct FGameplayTagQuery Query;  // 0x8 (0x8)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool TriggerOnce : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)
	struct UAsyncTaskWaitGAEnded* ReturnValue;  // 0x58 (0x58)


}; 
 
 // ScriptStruct DungeonCrawler.AnimationSet
struct FAnimationSet
{
	struct UAnimMontage* EquipMontage;  // 0x0 (0x0)
	struct UAnimMontage* UnEquipMontage;  // 0x8 (0x8)
	struct UAnimMontage* EquipMontageItem;  // 0x10 (0x10)
	struct UAnimMontage* UnEquipMontageItem;  // 0x18 (0x18)
	struct FLocomotionAnimSet LocomotionAnimSet;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgLootContainingItemsNotify
// Size: 0x40(Inherited: 0x18)
struct FMsgLootContainingItemsNotify : FMsgBase
{
	int32_t InventoryId;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct TArray<struct FItemData> ContainingItemDataArray;  // 0x20 (0x20)
	struct TArray<struct FSlotInfo> SlotInfoArray;  // 0x30 (0x30)


}; 
 
 // ScriptStruct DungeonCrawler.ChatEditWidgetData
struct FChatEditWidgetData
{
	int32_t StartIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FChatDataPiece ChatDataPiece;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetEnterCreateCharacterPageNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetEnterCreateCharacterPageNotify : FMsgBase
{


}; 
 
 // Function DungeonCrawler.DCLobbyEmoteSlotWidget.SetLobbyEmoteData
struct FSetLobbyEmoteData
{
	struct UDCLobbyEmoteDataAsset* InDesignDataLobbyEmote;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ItemMaterialInfo
struct FItemMaterialInfo
{
	struct FName MaterialSlotName;  // 0x0 (0x0)
	struct UMaterialInterface* MaterialInterface;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.DCCircle
struct FDCCircle
{
	char pad_0[24];  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCustomizeEmoteRadialSlotWidget.SetEmoteIconImageAngle
struct FSetEmoteIconImageAngle
{
	float NewAngle;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCEquipmentInventoryData
struct FDCEquipmentInventoryData
{
	struct TArray<struct FItemData> Values;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.MailBoxWidgetBase.OnSetPartyPrivacy
struct FOnSetPartyPrivacy
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bOn : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameTestClassSpellSlotMoveResponse
// Size: 0x30(Inherited: 0x18)
struct FMsgGameTestClassSpellSlotMoveResponse : FMsgBase
{
	int32_t Result;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct TArray<struct FAccountDataSpell> EquipSpellList;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.DCFloorRuleInfo
struct FDCFloorRuleInfo
{
	struct FDCFloorRuleItemData Data;  // 0x0 (0x0)
	struct FDCCircle Area;  // 0x40 (0x40)
	struct TMap<struct AFloorPortalBase*, struct UDCFloorPortalDataAsset*> DisplayPortals;  // 0x58 (0x58)
	struct TMap<struct AFloorPortalBase*, struct UDCFloorPortalDataAsset*> ShrinkPortals;  // 0xA8 (0xA8)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnEvilMagicalReductionMod
struct FOnEvilMagicalReductionMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.DCFloorRuleItemData
struct FDCFloorRuleItemData
{
	float DeathSwarmSize;  // 0x0 (0x0)
	struct FGameplayTag DeathSwarmAbilityTag;  // 0x4 (0x4)
	int32_t DisplayPhaseDuration;  // 0xC (0xC)
	struct TArray<struct TSoftObjectPtr<UDCFloorPortalDataAsset>> DisplayPhaseFloorPortalArray;  // 0x10 (0x10)
	int32_t ShrinkPhaseDuration;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct TArray<struct TSoftObjectPtr<UDCFloorPortalDataAsset>> ShrinkPhaseFloorPortalArray;  // 0x28 (0x28)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool HideDeathSwarmTimer : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


}; 
 
 // ScriptStruct DungeonCrawler.MsgCharacterPerspectiveSet
// Size: 0x20(Inherited: 0x18)
struct FMsgCharacterPerspectiveSet : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bIsFirstPersonPerspective : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgGmEnterGameSpectatorRequest
// Size: 0x40(Inherited: 0x20)
struct FClientMsgGmEnterGameSpectatorRequest : FRequestMsg
{
	char pad_32[32];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.SoundProvider.GetTagQuery
struct FGetTagQuery
{
	struct FGameplayTag Tag;  // 0x0 (0x0)
	struct FGameplayTagQuery ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetKarmaReportActionResponse
// Size: 0x88(Inherited: 0x18)
struct FMsgWidgetKarmaReportActionResponse : FMsgBase
{
	int32_t Result;  // 0x18 (0x18)
	int32_t MatchIdx;  // 0x1C (0x1C)
	struct FKarmaMemberInfo UpdatedMemberInfo;  // 0x20 (0x20)
	int32_t CurrentTicketCount;  // 0x78 (0x78)
	int32_t CollectionStepCount;  // 0x7C (0x7C)
	int32_t MaxCollectionCount;  // 0x80 (0x80)
	int32_t MaxTicketCount;  // 0x84 (0x84)


}; 
 
 // ScriptStruct DungeonCrawler.MsgDefaultBodyPartMapRequest
// Size: 0x18(Inherited: 0x18)
struct FMsgDefaultBodyPartMapRequest : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassPerkBeginNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetClassPerkBeginNotify : FMsgBase
{


}; 
 
 // Function DungeonCrawler.DCMonsterBase.SetMonsterId
struct FSetMonsterId
{
	struct FPrimaryAssetId InMonsterId;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.PlayerPointData
struct FPlayerPointData
{
	struct AActor* PlayerStartPIE;  // 0x0 (0x0)
	char pad_8[104];  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.CharacterStatusWidget.OnWeightLimitBase
struct FOnWeightLimitBase
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalFireDamageAdd
struct FOnRep_MagicalFireDamageAdd
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ItemRandomGenerateData
struct FItemRandomGenerateData
{
	uint8_t GenerateType;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct UDCLootDropDataAsset* LootDropData;  // 0x8 (0x8)
	struct UDCLootDropRateDataAsset* LootDropRateData;  // 0x10 (0x10)
	struct TArray<uint8_t> GenerateItemTypeArray;  // 0x18 (0x18)
	struct FGameplayTagContainer ItemRarityTags;  // 0x28 (0x28)
	int32_t GenerateCount;  // 0x48 (0x48)
	char pad_76[84];  // 0x4C (0x4C)


}; 
 
 // ScriptStruct DungeonCrawler.MsgSetCheckTargetPlayerEquipment
// Size: 0x28(Inherited: 0x18)
struct FMsgSetCheckTargetPlayerEquipment : FMsgBase
{
	struct FString TargetPlayerAccountId;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_SpiritMagicalReduction
struct FOnRep_SpiritMagicalReduction
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.CharacterStatusWidgetData
struct FCharacterStatusWidgetData
{
	struct FGameplayAttributeData Strength;  // 0x0 (0x0)
	struct FGameplayAttributeData Agility;  // 0x10 (0x10)
	struct FGameplayAttributeData Will;  // 0x20 (0x20)
	struct FGameplayAttributeData Knowledge;  // 0x30 (0x30)
	struct FGameplayAttributeData Resourcefulness;  // 0x40 (0x40)
	struct FGameplayAttributeData Health;  // 0x50 (0x50)
	struct FGameplayAttributeData MaxHealth;  // 0x60 (0x60)
	struct FGameplayAttributeData MaxHealthBase;  // 0x70 (0x70)
	struct FGameplayAttributeData MaxHealthMod;  // 0x80 (0x80)
	struct FGameplayAttributeData MaxHealthAdd;  // 0x90 (0x90)
	struct FGameplayAttributeData Weight;  // 0xA0 (0xA0)
	struct FGameplayAttributeData WeightLimit;  // 0xB0 (0xB0)
	struct FGameplayAttributeData WeightLimitBase;  // 0xC0 (0xC0)
	struct FGameplayAttributeData WeightLimitMod;  // 0xD0 (0xD0)
	struct FGameplayAttributeData WeightLimitAdd;  // 0xE0 (0xE0)
	struct FGameplayAttributeData SpellPayload;  // 0xF0 (0xF0)
	struct FGameplayAttributeData SpellCapacity;  // 0x100 (0x100)
	struct FGameplayAttributeData SpellCapacityBase;  // 0x110 (0x110)
	struct FGameplayAttributeData SpellCapacityMod;  // 0x120 (0x120)
	struct FGameplayAttributeData SpellCapacityAdd;  // 0x130 (0x130)
	struct FGameplayAttributeData UtilityEffectiveness;  // 0x140 (0x140)
	struct FGameplayAttributeData UtilityEffectivenessBase;  // 0x150 (0x150)
	struct FGameplayAttributeData UtilityEffectivenessMod;  // 0x160 (0x160)
	struct FGameplayAttributeData UtilityEffectivenessAdd;  // 0x170 (0x170)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetEffectCauser
struct FDCEffectContextGetEffectCauser
{
	struct FDCGameplayEffectContext EffectContext;  // 0x0 (0x0)
	struct AActor* ReturnValue;  // 0x1D8 (0x1D8)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgClassItemMoveRequest
// Size: 0x60(Inherited: 0x20)
struct FClientMsgClassItemMoveRequest : FRequestMsg
{
	char pad_32[64];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgClassPerkListResponse
// Size: 0x28(Inherited: 0x18)
struct FClientMsgClassPerkListResponse : FMsgBase
{
	char pad_24[16];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCAnimInstanceBase.GetOriginActor
struct FGetOriginActor
{
	struct AActor* ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataIdTagGroupTableRow
// Size: 0x58(Inherited: 0x8)
struct FDesignDataIdTagGroupTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataIdTagGroup> IdTagGroup;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.CharacterStatusDetailWidgetData
// Size: 0x788(Inherited: 0x180)
struct FCharacterStatusDetailWidgetData : FCharacterStatusWidgetData
{
	struct FGameplayAttributeData PhysicalDamageWeaponPrimary;  // 0x180 (0x180)
	struct FGameplayAttributeData PhysicalDamageWeaponSecondary;  // 0x190 (0x190)
	struct FGameplayAttributeData PhysicalDamageBase;  // 0x1A0 (0x1A0)
	struct FGameplayAttributeData PhysicalPower;  // 0x1B0 (0x1B0)
	struct FGameplayAttributeData PhysicalDamageMod;  // 0x1C0 (0x1C0)
	struct FGameplayAttributeData PhysicalDamageModPhysicalPower;  // 0x1D0 (0x1D0)
	struct FGameplayAttributeData PhysicalDamageModBonus;  // 0x1E0 (0x1E0)
	struct FGameplayAttributeData PhysicalDamageAdd;  // 0x1F0 (0x1F0)
	struct FGameplayAttributeData PhysicalDamageTrue;  // 0x200 (0x200)
	struct FGameplayAttributeData ArmorPenetration;  // 0x210 (0x210)
	struct FGameplayAttributeData ArmorRating;  // 0x220 (0x220)
	struct FGameplayAttributeData PhysicalReductionArmorRating;  // 0x230 (0x230)
	struct FGameplayAttributeData PhysicalReductionBonus;  // 0x240 (0x240)
	struct FGameplayAttributeData PhysicalReduction;  // 0x250 (0x250)
	struct FGameplayAttributeData PhysicalReductionMod;  // 0x260 (0x260)
	struct FGameplayAttributeData MagicalDamageBase;  // 0x270 (0x270)
	struct FGameplayAttributeData MagicalPower;  // 0x280 (0x280)
	struct FGameplayAttributeData MagicalDamageMod;  // 0x290 (0x290)
	struct FGameplayAttributeData MagicalDamageModMagicalPower;  // 0x2A0 (0x2A0)
	struct FGameplayAttributeData MagicalDamageModBonus;  // 0x2B0 (0x2B0)
	struct FGameplayAttributeData MagicalDamageAdd;  // 0x2C0 (0x2C0)
	struct FGameplayAttributeData MagicalDamageTrue;  // 0x2D0 (0x2D0)
	struct FGameplayAttributeData MagicPenetration;  // 0x2E0 (0x2E0)
	struct FGameplayAttributeData MagicResistance;  // 0x2F0 (0x2F0)
	struct FGameplayAttributeData MagicalReductionMagicResistance;  // 0x300 (0x300)
	struct FGameplayAttributeData MagicalReductionBonus;  // 0x310 (0x310)
	struct FGameplayAttributeData MagicalReduction;  // 0x320 (0x320)
	struct FGameplayAttributeData MagicalReductionMod;  // 0x330 (0x330)
	struct FGameplayAttributeData FireMagicResistance;  // 0x340 (0x340)
	struct FGameplayAttributeData FireMagicalReductionMagicResistance;  // 0x350 (0x350)
	struct FGameplayAttributeData FireMagicalReduction;  // 0x360 (0x360)
	struct FGameplayAttributeData FireMagicalReductionMod;  // 0x370 (0x370)
	struct FGameplayAttributeData WaterMagicResistance;  // 0x380 (0x380)
	struct FGameplayAttributeData WaterMagicalReductionMagicResistance;  // 0x390 (0x390)
	struct FGameplayAttributeData WaterMagicalReduction;  // 0x3A0 (0x3A0)
	struct FGameplayAttributeData WaterMagicalReductionMod;  // 0x3B0 (0x3B0)
	struct FGameplayAttributeData LightningMagicResistance;  // 0x3C0 (0x3C0)
	struct FGameplayAttributeData LightningMagicalReductionMagicResistance;  // 0x3D0 (0x3D0)
	struct FGameplayAttributeData LightningMagicalReduction;  // 0x3E0 (0x3E0)
	struct FGameplayAttributeData LightningMagicalReductionMod;  // 0x3F0 (0x3F0)
	struct FGameplayAttributeData EarthMagicResistance;  // 0x400 (0x400)
	struct FGameplayAttributeData EarthMagicalReductionMagicResistance;  // 0x410 (0x410)
	struct FGameplayAttributeData EarthMagicalReduction;  // 0x420 (0x420)
	struct FGameplayAttributeData EarthMagicalReductionMod;  // 0x430 (0x430)
	struct FGameplayAttributeData LightMagicResistance;  // 0x440 (0x440)
	struct FGameplayAttributeData LightMagicalReductionMagicResistance;  // 0x450 (0x450)
	struct FGameplayAttributeData LightMagicalReduction;  // 0x460 (0x460)
	struct FGameplayAttributeData LightMagicalReductionMod;  // 0x470 (0x470)
	struct FGameplayAttributeData DarkMagicResistance;  // 0x480 (0x480)
	struct FGameplayAttributeData DarkMagicalReductionMagicResistance;  // 0x490 (0x490)
	struct FGameplayAttributeData DarkMagicalReduction;  // 0x4A0 (0x4A0)
	struct FGameplayAttributeData DarkMagicalReductionMod;  // 0x4B0 (0x4B0)
	struct FGameplayAttributeData ArcaneMagicResistance;  // 0x4C0 (0x4C0)
	struct FGameplayAttributeData ArcaneMagicalReductionMagicResistance;  // 0x4D0 (0x4D0)
	struct FGameplayAttributeData ArcaneMagicalReduction;  // 0x4E0 (0x4E0)
	struct FGameplayAttributeData ArcaneMagicalReductionMod;  // 0x4F0 (0x4F0)
	struct FGameplayAttributeData DivineMagicResistance;  // 0x500 (0x500)
	struct FGameplayAttributeData DivineMagicalReductionMagicResistance;  // 0x510 (0x510)
	struct FGameplayAttributeData DivineMagicalReduction;  // 0x520 (0x520)
	struct FGameplayAttributeData DivineMagicalReductionMod;  // 0x530 (0x530)
	struct FGameplayAttributeData EvilMagicResistance;  // 0x540 (0x540)
	struct FGameplayAttributeData EvilMagicalReductionMagicResistance;  // 0x550 (0x550)
	struct FGameplayAttributeData EvilMagicalReduction;  // 0x560 (0x560)
	struct FGameplayAttributeData EvilMagicalReductionMod;  // 0x570 (0x570)
	struct FGameplayAttributeData AirMagicResistance;  // 0x580 (0x580)
	struct FGameplayAttributeData AirMagicalReductionMagicResistance;  // 0x590 (0x590)
	struct FGameplayAttributeData AirMagicalReduction;  // 0x5A0 (0x5A0)
	struct FGameplayAttributeData AirMagicalReductionMod;  // 0x5B0 (0x5B0)
	struct FGameplayAttributeData SpiritMagicResistance;  // 0x5C0 (0x5C0)
	struct FGameplayAttributeData SpiritMagicalReductionMagicResistance;  // 0x5D0 (0x5D0)
	struct FGameplayAttributeData SpiritMagicalReduction;  // 0x5E0 (0x5E0)
	struct FGameplayAttributeData SpiritMagicalReductionMod;  // 0x5F0 (0x5F0)
	struct FGameplayAttributeData PhysicalHealBase;  // 0x600 (0x600)
	struct FGameplayAttributeData PhysicalHealMod;  // 0x610 (0x610)
	struct FGameplayAttributeData MagicalHealBase;  // 0x620 (0x620)
	struct FGameplayAttributeData MagicalHealMod;  // 0x630 (0x630)
	struct FGameplayAttributeData MoveSpeed;  // 0x640 (0x640)
	struct FGameplayAttributeData MoveSpeedBase;  // 0x650 (0x650)
	struct FGameplayAttributeData MoveSpeedMod;  // 0x660 (0x660)
	struct FGameplayAttributeData MoveSpeedAdd;  // 0x670 (0x670)
	struct FGameplayAttributeData MoveSpeedWithModifier;  // 0x680 (0x680)
	struct FGameplayAttributeData ActionSpeed;  // 0x690 (0x690)
	struct FGameplayAttributeData SpellCastingSpeed;  // 0x6A0 (0x6A0)
	struct FGameplayAttributeData ItemEquipSpeed;  // 0x6B0 (0x6B0)
	struct FGameplayAttributeData RegularInteractionSpeedBase;  // 0x6C0 (0x6C0)
	struct FGameplayAttributeData RegularInteractionSpeed;  // 0x6D0 (0x6D0)
	struct FGameplayAttributeData MagicalInteractionSpeed;  // 0x6E0 (0x6E0)
	struct FGameplayAttributeData BuffDurationMod;  // 0x6F0 (0x6F0)
	struct FGameplayAttributeData DebuffDurationMod;  // 0x700 (0x700)
	struct FGameplayAttributeData HeadshotReductionMod;  // 0x710 (0x710)
	struct FGameplayAttributeData ProjectileReductionMod;  // 0x720 (0x720)
	struct FGameplayAttributeData PhysicalHeadshotPenetration;  // 0x730 (0x730)
	struct FGameplayAttributeData Luck;  // 0x740 (0x740)
	struct FGameplayAttributeData ImpactPower;  // 0x750 (0x750)
	float PrimaryWeaponImpactPower;  // 0x760 (0x760)
	float SecondaryWeaponImpactPower;  // 0x764 (0x764)
	struct TArray<struct UItemTooltipStatWidgetData*> PrimaryAbilityWidgetArray;  // 0x768 (0x768)
	struct TArray<struct UItemTooltipStatWidgetData*> SecondaryAbilityWidgetArray;  // 0x778 (0x778)


}; 
 
 // ScriptStruct DungeonCrawler.ChatDataPieceItem
struct FChatDataPieceItem
{
	int64_t Uid;  // 0x0 (0x0)
	struct FString Iid;  // 0x8 (0x8)
	struct TArray<struct FChatDataPieceItemProperty> Pp;  // 0x18 (0x18)
	struct TArray<struct FChatDataPieceItemProperty> Sp;  // 0x28 (0x28)


}; 
 
 // ScriptStruct DungeonCrawler.DCCommunityCharacterInfo
struct FDCCommunityCharacterInfo
{
	struct FDCAccountId AccountId;  // 0x0 (0x0)
	struct FDCCharacterId CharacterId;  // 0x10 (0x10)
	struct FNickname Nickname;  // 0x20 (0x20)
	uint8_t CharacterClass;  // 0x48 (0x48)
	uint8_t Gender;  // 0x49 (0x49)
	char pad_74[6];  // 0x4A (0x4A)


}; 
 
 // ScriptStruct DungeonCrawler.ChatDataPiece
struct FChatDataPiece
{
	struct FString ChatStr;  // 0x0 (0x0)
	struct FChatDataPieceItem ChatDataPieceItem;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCActionSkinWidget.GetActionSkinTooltipWidget
struct FGetActionSkinTooltipWidget
{
	struct UUserWidget* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameCrossHairWidget.OnActivateSpellCrossHair
struct FOnActivateSpellCrossHair
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsActivate : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_AuraBase.OnAntiAuraOverlapEnd
struct FOnAntiAuraOverlapEnd
{
	struct UPrimitiveComponent* OverlappedComp;  // 0x0 (0x0)
	struct AActor* Other;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgHackLogRequest
// Size: 0x30(Inherited: 0x20)
struct FClientMsgHackLogRequest : FRequestMsg
{
	char pad_32[16];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassSkillListNotify
// Size: 0x28(Inherited: 0x18)
struct FMsgWidgetClassSkillListNotify : FMsgBase
{
	struct TArray<struct FDataSkill> SkillIdArray;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCInventoryBase.OnRep_InitData
struct FOnRep_InitData
{
	struct FDCInventoryData OldInitData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCLobbyEmoteListEntryWidget.GetSelectedVisibility
struct FGetSelectedVisibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SortTargetsByAggro
struct FSortTargetsByAggro
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x8 (0x8)
	uint8_t MonsterFilterSortingType;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool ReturnValue : 1;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)


}; 
 
 // ScriptStruct DungeonCrawler.DCChatInfo
struct FDCChatInfo
{
	struct FDCAccountId AccountId;  // 0x0 (0x0)
	struct FDCCharacterId CharacterId;  // 0x10 (0x10)
	struct FNickname Nickname;  // 0x20 (0x20)
	struct FDCPartyId PartyId;  // 0x48 (0x48)
	struct TArray<struct FChatDataPiece> Pieces;  // 0x58 (0x58)


}; 
 
 // ScriptStruct DungeonCrawler.DCPartyId
// Size: 0x10(Inherited: 0x10)
struct FDCPartyId : FDCStringIdBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassMusicUnequipNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgWidgetClassMusicUnequipNotify : FMsgBase
{
	int32_t Index;  // 0x18 (0x18)
	struct FPrimaryAssetId MusicId;  // 0x1C (0x1C)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // Function DungeonCrawler.DCHitBoxComponent.GetHitDirection
struct FGetHitDirection
{
	struct FVector AttackerLocation;  // 0x0 (0x0)
	uint8_t ReturnValue;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataFloorPortal
struct FDesignDataFloorPortal
{
	struct FGameplayTag PortalType;  // 0x0 (0x0)
	int32_t PortalScrollNum;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCLocalLoginWidget.OnLoginButtonClicked
struct FOnLoginButtonClicked
{
	struct FString IpAddress;  // 0x0 (0x0)
	struct FString Nickname;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.DCCharacterId
// Size: 0x10(Inherited: 0x10)
struct FDCCharacterId : FDCStringIdBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassSkillSwapEventNotify
// Size: 0x40(Inherited: 0x18)
struct FMsgWidgetClassSkillSwapEventNotify : FMsgBase
{
	int32_t SrcIndex;  // 0x18 (0x18)
	struct FPrimaryAssetId SrcSkillId;  // 0x1C (0x1C)
	int32_t DstIndex;  // 0x2C (0x2C)
	struct FPrimaryAssetId DstSkillId;  // 0x30 (0x30)


}; 
 
 // ScriptStruct DungeonCrawler.TradeChatData
struct FTradeChatData
{
	uint8_t ChatType;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	int64_t Time;  // 0x8 (0x8)
	struct FChatData ChatData;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetInitCrossHairNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetInitCrossHairNotify : FMsgBase
{


}; 
 
 // Function DungeonCrawler.DCAbilitySystemComponent.OnRep_AbilityHandleDataArray
struct FOnRep_AbilityHandleDataArray
{
	struct TArray<struct FDCGameplayAbilityHandleData> InOldAbilityHandleDataArray;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetLobbyGroupHideUIbyNonCoexistWidgetRequest
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetLobbyGroupHideUIbyNonCoexistWidgetRequest : FMsgBase
{
	uint8_t WidgetLobbyGroupType;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	int32_t LobbyGroupWidgetPriority;  // 0x1C (0x1C)


}; 
 
 // ScriptStruct DungeonCrawler.PartyChatData
struct FPartyChatData
{
	int64_t Time;  // 0x0 (0x0)
	struct FChatData ChatData;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.SoundBlueprintLibrary.PlaySoundOnPlayerController
struct FPlaySoundOnPlayerController
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UAkAudioEvent* AkEvent;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_UtilityEffectivenessMod
struct FOnRep_UtilityEffectivenessMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ChatRecord
struct FChatRecord
{
	uint8_t ChatWidgetType;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FDateTime DateTime;  // 0x8 (0x8)
	struct FString AccountId;  // 0x10 (0x10)
	struct FString CharacterId;  // 0x20 (0x20)
	struct FNickname Nickname;  // 0x30 (0x30)
	struct FString PartyId;  // 0x58 (0x58)
	struct FString ChatStr;  // 0x68 (0x68)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgAccountLoginRequest
// Size: 0x90(Inherited: 0x20)
struct FClientMsgAccountLoginRequest : FRequestMsg
{
	char pad_32[112];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradingReadyNotify
// Size: 0x58(Inherited: 0x18)
struct FClientMsgTradingReadyNotify : FMsgBase
{
	char pad_24[64];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgCustomizeMountRequest
// Size: 0x40(Inherited: 0x20)
struct FClientMsgCustomizeMountRequest : FRequestMsg
{
	char pad_32[32];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgInteractFound
// Size: 0x28(Inherited: 0x18)
struct FMsgInteractFound : FMsgBase
{
	struct AActor* Interacter;  // 0x18 (0x18)
	struct UPrimitiveComponent* InteractPart;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgCustomizeMountResponse
// Size: 0x30(Inherited: 0x18)
struct FClientMsgCustomizeMountResponse : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCCustomizeLobbyEmoteRadialSlotWidget.GetArrowVisibility
struct FGetArrowVisibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgAccountLoginResponse
// Size: 0x90(Inherited: 0x18)
struct FClientMsgAccountLoginResponse : FMsgBase
{
	char pad_24[120];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgSpellCastEnd
// Size: 0x18(Inherited: 0x18)
struct FMsgSpellCastEnd : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgAccountCharacterCreateRequest
// Size: 0x48(Inherited: 0x20)
struct FClientMsgAccountCharacterCreateRequest : FRequestMsg
{
	char pad_32[40];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgAccountCharacterCreateResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgAccountCharacterCreateResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgAccountCharacterListResponse
// Size: 0x30(Inherited: 0x18)
struct FClientMsgAccountCharacterListResponse : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradeRequestResponse
// Size: 0x48(Inherited: 0x18)
struct FClientMsgTradeRequestResponse : FMsgBase
{
	char pad_24[48];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataStockBuy
struct FDesignDataStockBuy
{
	struct TArray<struct FDesignDataStockBuyItem> StockBuyItemArray;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalInteractionSpeed
struct FOnMagicalInteractionSpeed
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgAccountCharacterDeleteRequest
// Size: 0x30(Inherited: 0x20)
struct FClientMsgAccountCharacterDeleteRequest : FRequestMsg
{
	char pad_32[16];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgAccountCharacterDeleteResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgAccountCharacterDeleteResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.EffectCauserData
struct FEffectCauserData
{
	struct FText EffectCauserName;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemTypeText
struct FGetItemTypeText
{
	struct FGameplayTag InTypeTag;  // 0x0 (0x0)
	struct FText ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.Item.GetItemIconTexture
struct FGetItemIconTexture
{
	struct UTexture2D* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.OnToggleSwitch
struct FOnToggleSwitch
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InSwitch : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgLobbyEnterRequest
// Size: 0x30(Inherited: 0x20)
struct FClientMsgLobbyEnterRequest : FRequestMsg
{
	char pad_32[16];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.GA_MusicChannelingBase.OnTargetActorBeginOverlap
struct FOnTargetActorBeginOverlap
{
	struct AActor* Target;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCLogEventInfo
struct FDCLogEventInfo
{
	int64_t Timestamp;  // 0x0 (0x0)
	struct FDCAccountId AccountId;  // 0x8 (0x8)
	uint8_t LogEventType;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct TArray<struct FString> Params;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataAoe
struct FDesignDataAoe
{
	struct FText Name;  // 0x0 (0x0)
	struct FPrimaryAssetId ArtData;  // 0x18 (0x18)
	struct FPrimaryAssetId SoundData;  // 0x28 (0x28)
	struct TArray<struct FPrimaryAssetId> Abilities;  // 0x38 (0x38)
	struct TArray<struct FPrimaryAssetId> Effects;  // 0x48 (0x48)


}; 
 
 // ScriptStruct DungeonCrawler.MsgMonsterAISet
// Size: 0x20(Inherited: 0x18)
struct FMsgMonsterAISet : FMsgBase
{
	struct UBehaviorTree* BehaviorTree;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgLobbyEnterResponse
// Size: 0x30(Inherited: 0x18)
struct FClientMsgLobbyEnterResponse : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataItemRequirement
struct FDesignDataItemRequirement
{
	struct TArray<struct FPrimaryAssetId> ClassRequirements;  // 0x0 (0x0)
	int32_t StrengthRequirement;  // 0x10 (0x10)
	int32_t AgilityRequirement;  // 0x14 (0x14)
	int32_t WillRequirement;  // 0x18 (0x18)
	int32_t KnowledgeRequirement;  // 0x1C (0x1C)
	int32_t ResourcefulRequirement;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct TArray<struct FPrimaryAssetId> PerkRequirements;  // 0x28 (0x28)
	struct TArray<struct FGameplayTag> PairWeaponRequirements;  // 0x38 (0x38)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgAccountAgreeAnswerRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgAccountAgreeAnswerRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.CharacterStatusWidget.OnSpellCapacityMod
struct FOnSpellCapacityMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgAccountCharacterClassListNotify
// Size: 0x28(Inherited: 0x18)
struct FClientMsgAccountCharacterClassListNotify : FMsgBase
{
	char pad_24[16];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgKarmaReportListResponse
// Size: 0x38(Inherited: 0x18)
struct FClientMsgKarmaReportListResponse : FMsgBase
{
	char pad_24[32];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgClassLevelInfoRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgClassLevelInfoRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgClassLevelInfoResponse
// Size: 0x30(Inherited: 0x18)
struct FClientMsgClassLevelInfoResponse : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.InteractTargetData
struct FInteractTargetData
{
	struct FText InteractTargetName;  // 0x0 (0x0)
	struct FGameplayTag RarityType;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnDivineMagicalReductionMagicResistance
struct FOnDivineMagicalReductionMagicResistance
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassUnEquipmentTypeChangeNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetClassUnEquipmentTypeChangeNotify : FMsgBase
{
	int32_t Index;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgClassEquipInfoRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgClassEquipInfoRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgClassPerkListRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgClassPerkListRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCMonsterBase.OnRep_bIsRepRootMotionActive
struct FOnRep_bIsRepRootMotionActive
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InOldbIsRepRootMotionActive : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassLevelNotifyBody
struct FMsgWidgetClassLevelNotifyBody
{
	int32_t Level;  // 0x0 (0x0)
	int32_t Exp;  // 0x4 (0x4)
	int32_t ExpBegin;  // 0x8 (0x8)
	int32_t ExpLimit;  // 0xC (0xC)
	int32_t RewardPoint;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgClassSkillListRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgClassSkillListRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgClassSpellListRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgClassSpellListRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataProjectile
struct FDesignDataProjectile
{
	struct FText Name;  // 0x0 (0x0)
	struct FGameplayTag SourceType;  // 0x18 (0x18)
	struct FPrimaryAssetId ArtData;  // 0x20 (0x20)
	struct FPrimaryAssetId SoundData;  // 0x30 (0x30)
	AProjectileActor* ActorClass;  // 0x40 (0x40)
	struct TArray<struct FPrimaryAssetId> Abilities;  // 0x48 (0x48)
	struct TArray<struct FPrimaryAssetId> Effects;  // 0x58 (0x58)


}; 
 
 // Function DungeonCrawler.SoundBlueprintLibrary.PlaySound
struct FPlaySound
{
	struct UObject* InSoundPlayer;  // 0x0 (0x0)
	struct UAkAudioEvent* AkEvent;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgClassSpellListResponse
// Size: 0x28(Inherited: 0x18)
struct FClientMsgClassSpellListResponse : FMsgBase
{
	char pad_24[16];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_AirMagicalReduction
struct FOnRep_AirMagicalReduction
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsWidget.OnControlsButtonChecked
struct FOnControlsButtonChecked
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsChecked : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgClassMusicListRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgClassMusicListRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyReadyChangeNotify
// Size: 0x40(Inherited: 0x18)
struct FClientMsgPartyReadyChangeNotify : FMsgBase
{
	char pad_24[40];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgFriendFindRequest
// Size: 0x48(Inherited: 0x20)
struct FClientMsgFriendFindRequest : FRequestMsg
{
	char pad_32[40];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgClassMusicListResponse
// Size: 0x28(Inherited: 0x18)
struct FClientMsgClassMusicListResponse : FMsgBase
{
	char pad_24[16];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgFriendFindResponse
// Size: 0x90(Inherited: 0x18)
struct FClientMsgFriendFindResponse : FMsgBase
{
	char pad_24[120];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgItemWearingEnd
// Size: 0x20(Inherited: 0x18)
struct FMsgItemWearingEnd : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bIsSucceed : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgClassSpellSlotMoveResponse
// Size: 0x30(Inherited: 0x18)
struct FClientMsgClassSpellSlotMoveResponse : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgFriendListAllRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgFriendListAllRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgClassSpellSequenceChangeRequest
// Size: 0x38(Inherited: 0x20)
struct FClientMsgClassSpellSequenceChangeRequest : FRequestMsg
{
	char pad_32[24];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.CharacterSelectWidget.CanEnterLobby
struct FCanEnterLobby
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPlayerController.TravelFloorMatchmaking_Client
struct FTravelFloorMatchmaking_Client
{
	struct FDCGameLiftSessionId SessionId;  // 0x0 (0x0)
	struct FString Address;  // 0x10 (0x10)
	struct FString ServiceUrl;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataCharacterSkin
struct FDesignDataCharacterSkin
{
	struct FText Name;  // 0x0 (0x0)
	struct FPrimaryAssetId Desc;  // 0x18 (0x18)
	struct FText FlavorText;  // 0x28 (0x28)
	struct FPrimaryAssetId Art;  // 0x40 (0x40)
	struct TArray<struct FPrimaryAssetId> TargetCharacterClasses;  // 0x50 (0x50)
	struct TArray<struct FPrimaryAssetId> Abilities;  // 0x60 (0x60)
	struct TArray<struct FPrimaryAssetId> Effects;  // 0x70 (0x70)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgClassMusicSlotMoveRequest
// Size: 0x38(Inherited: 0x20)
struct FClientMsgClassMusicSlotMoveRequest : FRequestMsg
{
	char pad_32[24];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgUnblockCharacterRequest
// Size: 0x40(Inherited: 0x20)
struct FClientMsgUnblockCharacterRequest : FRequestMsg
{
	char pad_32[32];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgUnblockCharacterResponse
// Size: 0x30(Inherited: 0x18)
struct FClientMsgUnblockCharacterResponse : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.MulAggro
struct FMulAggro
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct ADCCharacterBase* Target;  // 0x8 (0x8)
	float Point;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool ReturnValue : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function DungeonCrawler.DCShopCurrencyTypeSlotWidgetBase.OnChangedCheckState
struct FOnChangedCheckState
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bNewState : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassUnEquipmentClearSelectedItemNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetClassUnEquipmentClearSelectedItemNotify : FMsgBase
{


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnSecondaryWeaponImpactPower
struct FOnSecondaryWeaponImpactPower
{
	float NewValue;  // 0x0 (0x0)
	float OldValue;  // 0x4 (0x4)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgBlockCharacterListResponse
// Size: 0x28(Inherited: 0x18)
struct FClientMsgBlockCharacterListResponse : FMsgBase
{
	char pad_24[16];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.EffectContextGetSoundData
struct FEffectContextGetSoundData
{
	struct FGameplayEffectContextHandle EffectContext;  // 0x0 (0x0)
	struct USoundData* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCPartyManager.OnPlayerUpdated
struct FOnPlayerUpdated
{
	struct FDCPlayerInfo NewInfo;  // 0x0 (0x0)
	struct FDCPlayerInfo OldInfo;  // 0x98 (0x98)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataStockSellBack
struct FDesignDataStockSellBack
{
	struct TArray<struct FDesignDataStockSellBackItem> StockSellBackItemArray;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgOperateAnnounceNotify
// Size: 0x28(Inherited: 0x18)
struct FClientMsgOperateAnnounceNotify : FMsgBase
{
	char pad_24[16];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.VoipPartyData
struct FVoipPartyData
{
	struct FDCPartyId PartyId;  // 0x0 (0x0)
	struct TArray<struct FVoipPartyMemberData> VoipPartyMemberDataArray;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgServicePolicyNotify
// Size: 0x28(Inherited: 0x18)
struct FClientMsgServicePolicyNotify : FMsgBase
{
	char pad_24[16];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCMultiLineEditableTextBox.AnyTextSelected
struct FAnyTextSelected
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgReLoginRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgReLoginRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetGameGroupToggleNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetGameGroupToggleNotify : FMsgBase
{
	uint8_t WidgetGameGroupType;  // 0x18 (0x18)
	uint8_t NewVisibility;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassSpellEquippedListNotify
// Size: 0x28(Inherited: 0x18)
struct FMsgWidgetClassSpellEquippedListNotify : FMsgBase
{
	struct TArray<struct FSpellData> SpellArray;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgUserCharacterInfoResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgUserCharacterInfoResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradingResultNotify
// Size: 0x20(Inherited: 0x18)
struct FClientMsgTradingResultNotify : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgInteractStart
// Size: 0x28(Inherited: 0x18)
struct FMsgInteractStart : FMsgBase
{
	struct AActor* Interacter;  // 0x18 (0x18)
	struct FGameplayTag CurrentStateTag;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGameplayEffectDescDataItem
struct FGetGameplayEffectDescDataItem
{
	struct FDesignDataItem InDesignDataItem;  // 0x0 (0x0)
	struct FDesignDataGameplayEffect InDesignDataGameplayEffect;  // 0x188 (0x188)
	struct FItemDataGameplayEffect InItemDataGameplayEffect;  // 0x3B0 (0x3B0)
	struct TArray<struct FGameplayEffectDescData> OutGameplayEffectDescDataArray;  // 0x3D0 (0x3D0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameClassMoveInfo
// Size: 0x38(Inherited: 0x18)
struct FMsgGameClassMoveInfo : FMsgBase
{
	int32_t Index;  // 0x18 (0x18)
	int32_t Type;  // 0x1C (0x1C)
	struct FString MoveId;  // 0x20 (0x20)
	int32_t Move;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataLeaderboardContent
struct FDesignDataLeaderboardContent
{
	struct FText ContentName;  // 0x0 (0x0)
	struct FText ContentDesc;  // 0x18 (0x18)
	struct FText ContentScoreName;  // 0x30 (0x30)
	uint8_t ContentType;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)
	struct TArray<struct FPrimaryAssetId> SlayerMonsterIds;  // 0x50 (0x50)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgGatheringHallChannelUserUpdateNotify
// Size: 0x28(Inherited: 0x18)
struct FClientMsgGatheringHallChannelUserUpdateNotify : FMsgBase
{
	char pad_24[16];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ApplyGameplayEffects
struct FApplyGameplayEffects
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct TArray<struct FDCGameplayEffectData> InGameplayEffectDataArray;  // 0x8 (0x8)
	struct AActor* InSourceActor;  // 0x18 (0x18)
	struct TArray<struct FActiveGameplayEffectHandle> ReturnValue;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgGmEnterGameSpectatorResponse
// Size: 0x58(Inherited: 0x18)
struct FClientMsgGmEnterGameSpectatorResponse : FMsgBase
{
	char pad_24[64];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgCustomizeInfoRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgCustomizeInfoRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgMusicChannelingEnd
// Size: 0x18(Inherited: 0x18)
struct FMsgMusicChannelingEnd : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgCustomizeInfoResponse
// Size: 0x30(Inherited: 0x18)
struct FClientMsgCustomizeInfoResponse : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgRemoveAllLooters
// Size: 0x18(Inherited: 0x18)
struct FMsgRemoveAllLooters : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.GameFloorPortalData
struct FGameFloorPortalData
{
	struct FGameplayTag PortalType;  // 0x0 (0x0)
	int32_t PortalScrollNum;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct AFloorPortalBase* FloorPortal;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgCustomizeUnmountRequest
// Size: 0x38(Inherited: 0x20)
struct FClientMsgCustomizeUnmountRequest : FRequestMsg
{
	char pad_32[24];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.ChatFilterWidget.RegenerateListItems
struct FRegenerateListItems
{
	struct FText FindFilter;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgEnterGameServerNotify
// Size: 0x88(Inherited: 0x18)
struct FClientMsgEnterGameServerNotify : FMsgBase
{
	char pad_24[112];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgCustomizeNewItemCheckRequest
// Size: 0x30(Inherited: 0x20)
struct FClientMsgCustomizeNewItemCheckRequest : FRequestMsg
{
	char pad_32[16];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextSetSoundDataPrimaryAssetId
struct FDCEffectContextSetSoundDataPrimaryAssetId
{
	struct FDCGameplayEffectContext EffectContext;  // 0x0 (0x0)
	struct FPrimaryAssetId PrimaryAssetId;  // 0x1D8 (0x1D8)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgCustomizeNewItemCheckResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgCustomizeNewItemCheckResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicResistance
struct FOnMagicResistance
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.AsyncTaskEffectStackChanged.ListenForGameplayEffectStackChange
struct FListenForGameplayEffectStackChange
{
	struct UAbilitySystemComponent* AbilitySystemComponent;  // 0x0 (0x0)
	struct FGameplayTag EffectGameplayTag;  // 0x8 (0x8)
	struct UAsyncTaskEffectStackChanged* ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgFriendListResponse
// Size: 0x38(Inherited: 0x18)
struct FClientMsgFriendListResponse : FMsgBase
{
	char pad_24[32];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgGatheringHallChannelListRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgGatheringHallChannelListRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.CharacterStatusWidget.OnStrength
struct FOnStrength
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataItemSkin
struct FDesignDataItemSkin
{
	struct FText Name;  // 0x0 (0x0)
	struct FText FlavorText;  // 0x18 (0x18)
	AItemActor* ItemActor;  // 0x30 (0x30)
	AProjectileActor* ProjectileActor;  // 0x38 (0x38)
	APropsActorBase* InstallActor;  // 0x40 (0x40)
	struct FPrimaryAssetId Art;  // 0x48 (0x48)
	struct FGameplayTag TargetItem;  // 0x58 (0x58)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgGatheringHallChannelListResponse
// Size: 0x28(Inherited: 0x18)
struct FClientMsgGatheringHallChannelListResponse : FMsgBase
{
	char pad_24[16];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgRankingRangeResponse
// Size: 0x70(Inherited: 0x18)
struct FClientMsgRankingRangeResponse : FMsgBase
{
	char pad_24[88];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.EquipmentInventoryComponent.OnRep_EquipAnimData
struct FOnRep_EquipAnimData
{
	struct FDCEquipAnimData OldEquipAnimData;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgGatheringHallChannelSelectRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgGatheringHallChannelSelectRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgGatheringHallChannelExitRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgGatheringHallChannelExitRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgGatheringHallChannelExitResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgGatheringHallChannelExitResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgInventorySplitSwapRequest
// Size: 0x50(Inherited: 0x20)
struct FClientMsgInventorySplitSwapRequest : FRequestMsg
{
	char pad_32[48];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgeLobbyPopupSWidgetNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgWidgeLobbyPopupSWidgetNotify : FMsgBase
{
	struct FText DescText;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgGatheringHallChannelUserListRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgGatheringHallChannelUserListRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.AsyncTaskWaitGAEnded.WaitForAbilityEnd
struct FWaitForAbilityEnd
{
	struct AActor* TargetActor;  // 0x0 (0x0)
	struct FGameplayTag WithTag;  // 0x8 (0x8)
	struct FGameplayTag WithoutTag;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool TriggerOnce : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct UAsyncTaskWaitGAEnded* ReturnValue;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientShopItemListBuildData
struct FClientShopItemListBuildData
{
	char pad_0[128];  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameTestClassSpellListResponse
// Size: 0x28(Inherited: 0x18)
struct FMsgGameTestClassSpellListResponse : FMsgBase
{
	struct TArray<struct FAccountDataSpell> Spells;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgGatheringHallChannelChatRequest
// Size: 0xB0(Inherited: 0x20)
struct FClientMsgGatheringHallChannelChatRequest : FRequestMsg
{
	char pad_32[144];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ItemDataGameplayEffect
struct FItemDataGameplayEffect
{
	struct FPrimaryAssetId EffectId;  // 0x0 (0x0)
	struct TArray<struct FItemDataGameplayEffectValue> ItemDataGameplayEffectValueArray;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgGatheringHallChannelChatResponse
// Size: 0x30(Inherited: 0x18)
struct FClientMsgGatheringHallChannelChatResponse : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.GA_RangedAttackBase.ActivateCrossHairPullAnimation
struct FActivateCrossHairPullAnimation
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgGatheringHallChannelChatNotify
// Size: 0x28(Inherited: 0x18)
struct FClientMsgGatheringHallChannelChatNotify : FMsgBase
{
	char pad_24[16];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.GetToggleSwitch
struct FGetToggleSwitch
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgGatheringHallTargetEquippedItemRequest
// Size: 0x48(Inherited: 0x20)
struct FClientMsgGatheringHallTargetEquippedItemRequest : FRequestMsg
{
	char pad_32[40];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyLocationUpdateNotify
// Size: 0x40(Inherited: 0x18)
struct FClientMsgPartyLocationUpdateNotify : FMsgBase
{
	char pad_24[40];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgAutoMatchRegResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgAutoMatchRegResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.DCDesignDataActionSkin
struct FDCDesignDataActionSkin
{
	struct FText Name;  // 0x0 (0x0)
	struct FText FlavorText;  // 0x18 (0x18)
	uint8_t ActionSkinType;  // 0x30 (0x30)
	char pad_49[3];  // 0x31 (0x31)
	struct FPrimaryAssetId Art;  // 0x34 (0x34)
	struct FPrimaryAssetId TargetAction;  // 0x44 (0x44)
	struct FPrimaryAssetId SkinAction;  // 0x54 (0x54)
	char pad_100[4];  // 0x64 (0x64)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetTradeSubscriptionBeginNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetTradeSubscriptionBeginNotify : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgMerchantServiceCraftListResponse
// Size: 0x30(Inherited: 0x18)
struct FClientMsgMerchantServiceCraftListResponse : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgGameEnterCompleteNotify
// Size: 0x20(Inherited: 0x18)
struct FClientMsgGameEnterCompleteNotify : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgAutoMatchRegTeamNotify
// Size: 0x20(Inherited: 0x18)
struct FClientMsgAutoMatchRegTeamNotify : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.LineCollisionMarkerSocket
struct FLineCollisionMarkerSocket
{
	struct USkeletalMeshSocket* Socket;  // 0x0 (0x0)
	struct FString SocketName;  // 0x8 (0x8)
	struct FVector PrevSocketLocation;  // 0x18 (0x18)
	struct FGameplayTag EffectTag;  // 0x30 (0x30)
	struct FGameplayTag ChannelTag;  // 0x38 (0x38)
	enum class ECollisionChannel CollisionChannel;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GiveAbility
struct FGiveAbility
{
	struct UObject* SourceObject;  // 0x0 (0x0)
	struct AActor* InActor;  // 0x8 (0x8)
	struct FDCGameplayAbilityData InGameplayAbilityData;  // 0x10 (0x10)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bTriggerOnlyOnce : 1;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)
	struct FGameplayAbilitySpecHandle ReturnValue;  // 0x3C (0x3C)


}; 
 
 // Function DungeonCrawler.DCIngameInventoryPageWidget.OnLootTargetPropEvent
struct FOnLootTargetPropEvent
{
	struct APropsActorBase* InProp;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.SkillWidgetData
struct FSkillWidgetData
{
	struct FText SkillName;  // 0x0 (0x0)
	struct FText SkillDescription;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgEquippedItemActors
// Size: 0x28(Inherited: 0x18)
struct FMsgEquippedItemActors : FMsgBase
{
	struct TArray<struct AItemActor*> EquippedItemActors;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsWithinDirectionAngleAndAllowedAngle
struct FFilterTargetsWithinDirectionAngleAndAllowedAngle
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x8 (0x8)
	float DirectionalAngle;  // 0x18 (0x18)
	float AllowedAngle;  // 0x1C (0x1C)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function DungeonCrawler.DCReportPlayerWidget.HandleReportTextChanged
struct FHandleReportTextChanged
{
	struct FText InText;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgReconnectIngameResponse
// Size: 0x30(Inherited: 0x18)
struct FClientMsgReconnectIngameResponse : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgInventoryInfoRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgInventoryInfoRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.GameTestComponent.ClientMsgClassPerkListResponse
struct FClientMsgClassPerkListResponse
{
	struct FMsgGameTestClassPerkListResponse InMsg;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradingConfirmReadyRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgTradingConfirmReadyRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_AirMagicResistance
struct FOnRep_AirMagicResistance
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPlayerController.OnGameStateNotify
struct FOnGameStateNotify
{
	struct FGameStateData InGameStateData;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgInventoryAllUpdateResponse
// Size: 0x30(Inherited: 0x18)
struct FClientMsgInventoryAllUpdateResponse : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetSkillCooldownStartWidgetNotify
// Size: 0x28(Inherited: 0x18)
struct FMsgWidgetSkillCooldownStartWidgetNotify : FMsgBase
{
	struct FGameplayTag SkillTag;  // 0x18 (0x18)
	float RemainDuration;  // 0x20 (0x20)
	float MaxDuration;  // 0x24 (0x24)


}; 
 
 // Function DungeonCrawler.ControllableItemWidget.OnRightMouseButtonDown
struct FOnRightMouseButtonDown
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FPointerEvent MouseEvent;  // 0x40 (0x40)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool bInventoryDropButtonPressed : 1;  // 0xD8 (0xD8)
	char pad_217_1 : 7;  // 0xD9 (0xD9)
	bool bInventorySplitButtonPressed : 1;  // 0xD9 (0xD9)
	char pad_218[6];  // 0xDA (0xDA)
	struct FEventReply ReturnValue;  // 0xE0 (0xE0)


}; 
 
 // Function DungeonCrawler.InteractableTargetComponent.GetInteractableDataByStateMap
struct FGetInteractableDataByStateMap
{
	struct TMap<struct FGameplayTag, struct FInteractionData> ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgInventoryMoveResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgInventoryMoveResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.WidgetPartyCharacterVisibleBody
struct FWidgetPartyCharacterVisibleBody
{
	uint8_t WidgetPartyUserLocate;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool Visible : 1;  // 0x1 (0x1)


}; 
 
 // ScriptStruct DungeonCrawler.GameAnnounceInfo
struct FGameAnnounceInfo
{
	struct FName WinnerPlayerCharacterBlackboardKey;  // 0x0 (0x0)
	struct FGameAnnounceData AnnounceData;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCAT_WaitDelayPausable.GetElapsedTime
struct FGetElapsedTime
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgPlayerLogoutNotify
// Size: 0x90(Inherited: 0x18)
struct FMsgPlayerLogoutNotify : FMsgBase
{
	struct FAccountDataReplication AccountDataReplication;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgInventoryMergeResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgInventoryMergeResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.DCLoginResult
struct FDCLoginResult
{
	uint8_t FailureType;  // 0x0 (0x0)
	char pad_1[15];  // 0x1 (0x1)


}; 
 
 // ScriptStruct DungeonCrawler.DCInventoryData
struct FDCInventoryData
{
	struct TArray<int32_t> Indexes;  // 0x0 (0x0)
	struct TArray<struct FDCItemInfo> Values;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCVoipComponent.InitVoip
struct FInitVoip
{
	struct UVoipAkComponent* InSendVoipAkComponent;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgInventorySwapRequest
// Size: 0x50(Inherited: 0x20)
struct FClientMsgInventorySwapRequest : FRequestMsg
{
	char pad_32[48];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyKickedOutNotify
// Size: 0x20(Inherited: 0x18)
struct FClientMsgPartyKickedOutNotify : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgInventoryItemDataArrayRequest
// Size: 0x18(Inherited: 0x18)
struct FMsgInventoryItemDataArrayRequest : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgInventorySplitMoveRequest
// Size: 0x40(Inherited: 0x20)
struct FClientMsgInventorySplitMoveRequest : FRequestMsg
{
	char pad_32[32];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCPostProcessingComponent.AddMeshHalfTranslucentBySameTeam
struct FAddMeshHalfTranslucentBySameTeam
{
	struct USkeletalMeshComponent* InMesh;  // 0x0 (0x0)
	struct UMaterialInterface* InMaterial;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool IsParty : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool IsRenderingPriority : 1;  // 0x11 (0x11)
	char pad_18[2];  // 0x12 (0x12)
	int32_t ReturnValue;  // 0x14 (0x14)


}; 
 
 // Function DungeonCrawler.DCCharacterAbilitySystemComponent.OnItemEquipEvent
struct FOnItemEquipEvent
{
	struct FDCItemInfo ItemInfo;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgInventorySplitMoveResponse
// Size: 0x28(Inherited: 0x18)
struct FClientMsgInventorySplitMoveResponse : FMsgBase
{
	char pad_24[16];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.GA_MusicChannelingBase.OnTargetActorEndOverlap
struct FOnTargetActorEndOverlap
{
	struct AActor* Target;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgInventorySplitMergeResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgInventorySplitMergeResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCEquipmentSlotWidget.IsPairSlot
struct FIsPairSlot
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgInventorySplitSwapResponse
// Size: 0x28(Inherited: 0x18)
struct FClientMsgInventorySplitSwapResponse : FMsgBase
{
	char pad_24[16];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCAT_WaitAttributeChangeByExecution.WaitForAttributeChange
struct FWaitForAttributeChange
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayAttribute Attribute;  // 0x8 (0x8)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool TriggerOnce : 1;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	struct AActor* OptionalExternalOwner;  // 0x48 (0x48)
	struct UDCAT_WaitAttributeChangeByExecution* ReturnValue;  // 0x50 (0x50)


}; 
 
 // ScriptStruct DungeonCrawler.DCLobbyEmoteShopItemInfo
// Size: 0x18(Inherited: 0x18)
struct FDCLobbyEmoteShopItemInfo : FDCShopItemInfo
{


}; 
 
 // Function DungeonCrawler.GameEmoteSelectGroupWidget.OnCurrentEmoteSlotChanged
struct FOnCurrentEmoteSlotChanged
{
	struct FText InName;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgInventoryTwoHandedWeaponSwapRequest
// Size: 0x48(Inherited: 0x20)
struct FClientMsgInventoryTwoHandedWeaponSwapRequest : FRequestMsg
{
	char pad_32[40];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgInventoryTwoHandedWeaponSwapResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgInventoryTwoHandedWeaponSwapResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.PlayWidget.OnPlayPartyUserInfo
struct FOnPlayPartyUserInfo
{
	struct FPlayPartyUserInfo PlayPartyUserInfo;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgInventorySingleUpdateResponse
// Size: 0x40(Inherited: 0x18)
struct FClientMsgInventorySingleUpdateResponse : FMsgBase
{
	char pad_24[40];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataSpawner
struct FDesignDataSpawner
{
	struct TArray<struct FDesignDataSpawnerItem> SpawnerItemArray;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgStorageInfoResponse
// Size: 0x30(Inherited: 0x18)
struct FClientMsgStorageInfoResponse : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgKarmaReportActionRequest
// Size: 0x50(Inherited: 0x20)
struct FClientMsgKarmaReportActionRequest : FRequestMsg
{
	char pad_32[48];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.KarmaMatchInfo
struct FKarmaMatchInfo
{
	int32_t MatchIdx;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FKarmaMemberInfo> MemberInfoArray;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAddSheathItemActor
// Size: 0x20(Inherited: 0x18)
struct FMsgAddSheathItemActor : FMsgBase
{
	struct AItemActor* SheathItemActor;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgKarmaRatingUpdateNotify
// Size: 0x40(Inherited: 0x18)
struct FClientMsgKarmaRatingUpdateNotify : FMsgBase
{
	char pad_24[40];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradingConfirmCancelResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgTradingConfirmCancelResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgCharacterSelectEnterRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgCharacterSelectEnterRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgCharacterSelectEnterResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgCharacterSelectEnterResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.GA_InteractPassive.OnFoundNewInteractableTarget
struct FOnFoundNewInteractableTarget
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCBagWidget.GetItemWidgets
struct FGetItemWidgets
{
	struct TMap<struct FDCItemId, struct UDCBagItemWidget*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCEnhancedInputLibrary.InjectInputForAction
struct FInjectInputForAction
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UInputAction* Action;  // 0x8 (0x8)
	struct FInputActionValue RawValue;  // 0x10 (0x10)
	struct TArray<struct UInputModifier*> Modifiers;  // 0x30 (0x30)
	struct TArray<struct UInputTrigger*> Triggers;  // 0x40 (0x40)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetMeleeAttackAbilityDamageRatioFromDesignData
struct FGetMeleeAttackAbilityDamageRatioFromDesignData
{
	struct FDesignDataGameplayAbility DesignDataGameplayAbility;  // 0x0 (0x0)
	float ReturnValue;  // 0x58 (0x58)
	char pad_92[4];  // 0x5C (0x5C)


}; 
 
 // Function DungeonCrawler.DCEnhancedInputLibrary.GetActionBoolWithController
struct FGetActionBoolWithController
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UInputAction* Action;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgLobbyCharacterInfoRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgLobbyCharacterInfoRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgMerchantStockSellBackRequest
// Size: 0x40(Inherited: 0x20)
struct FClientMsgMerchantStockSellBackRequest : FRequestMsg
{
	char pad_32[32];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgCharacterResurrectionResponse
// Size: 0x20(Inherited: 0x18)
struct FMsgCharacterResurrectionResponse : FMsgBase
{
	struct ADCCharacterBase* DCCharacterBase;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgLobbyCharacterInfoResponse
// Size: 0xB0(Inherited: 0x18)
struct FClientMsgLobbyCharacterInfoResponse : FMsgBase
{
	char pad_24[152];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgMerchantStockSellBackResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgMerchantStockSellBackResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.AttackInputManagerComponent.HandleAttackInput
struct FHandleAttackInput
{
	struct FGameplayTag InputTag;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgLobbyRegionSelectRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgLobbyRegionSelectRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.IMUtilBlueprintLibrary.MakeTextwithParam1
struct FMakeTextwithParam1
{
	struct FText Text;  // 0x0 (0x0)
	struct FText Param1;  // 0x18 (0x18)
	struct FText ReturnValue;  // 0x30 (0x30)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgRankingInfoResponse
// Size: 0x70(Inherited: 0x18)
struct FClientMsgRankingInfoResponse : FMsgBase
{
	char pad_24[88];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetKarmaBeginNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetKarmaBeginNotify : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgLobbyRegionSelectResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgLobbyRegionSelectResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgLobbyEnterFromGameResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgLobbyEnterFromGameResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgLobbyGameDifficultySelectRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgLobbyGameDifficultySelectRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetOwnedGameplayTags
struct FGetOwnedGameplayTags
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct FGameplayTagContainer TagContainer;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgLobbyGameDifficultySelectResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgLobbyGameDifficultySelectResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.LoadPrimaryAssetType
struct FLoadPrimaryAssetType
{
	char pad_0[16];  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetTradingChatRequest
// Size: 0xA8(Inherited: 0x18)
struct FMsgWidgetTradingChatRequest : FMsgBase
{
	uint8_t ChatType;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FString ChatTargetAccountId;  // 0x20 (0x20)
	struct FString ChatTargetCharacterId;  // 0x30 (0x30)
	struct FChatData ChatData;  // 0x40 (0x40)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgLobbyAccountCurrencyListNotify
// Size: 0x38(Inherited: 0x18)
struct FClientMsgLobbyAccountCurrencyListNotify : FMsgBase
{
	char pad_24[32];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCInventoryComponent.InitFromItemData_Server
struct FInitFromItemData_Server
{
	struct TArray<struct FItemData> ItemDatas;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassGroupToggleRequest
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetClassGroupToggleRequest : FMsgBase
{
	uint8_t WidgetClassGroupType;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataIdTagGroup
struct FDesignDataIdTagGroup
{
	struct TArray<struct FDesignDataIdTagGroupItem> IdTagGroupItemArray;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCPlayerInfo
struct FDCPlayerInfo
{
	struct FDCAccountId AccountId;  // 0x0 (0x0)
	int32_t AccountIdx;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FNickname Nickname;  // 0x18 (0x18)
	uint8_t CharacterClass;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	struct FDCPartyId PartyId;  // 0x48 (0x48)
	uint8_t Gender;  // 0x58 (0x58)
	uint8_t OnlineState;  // 0x59 (0x59)
	uint8_t DungeonState;  // 0x5A (0x5A)
	char pad_91_1 : 7;  // 0x5B (0x5B)
	bool bAlive : 1;  // 0x5B (0x5B)
	char pad_92[4];  // 0x5C (0x5C)
	struct TArray<struct FActorStatusData> ActorStatuses;  // 0x60 (0x60)
	float HealthRate;  // 0x70 (0x70)
	float RecoverableHealthRate;  // 0x74 (0x74)
	struct FPrimaryAssetId CharacterSkin;  // 0x78 (0x78)
	struct TArray<struct FPrimaryAssetId> EquippedArmorItems;  // 0x88 (0x88)


}; 
 
 // Function DungeonCrawler.PlayWidget.OnPopupSWidgetInvitePartyResponse
struct FOnPopupSWidgetInvitePartyResponse
{
	uint8_t PopupResult;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FString ReturnAccountID;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgLobbyReportPunishListNotify
// Size: 0x28(Inherited: 0x18)
struct FClientMsgLobbyReportPunishListNotify : FMsgBase
{
	char pad_24[16];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgMerchantListRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgMerchantListRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCAT_WaitAimDirectionChanged.WaitAimDirectionChanged
struct FWaitAimDirectionChanged
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct UDCAT_WaitAimDirectionChanged* ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassAddEquipSkillNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgWidgetClassAddEquipSkillNotify : FMsgBase
{
	int32_t Index;  // 0x18 (0x18)
	struct FPrimaryAssetId SkillId;  // 0x1C (0x1C)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // ScriptStruct DungeonCrawler.DCReportPlayerInfo
struct FDCReportPlayerInfo
{
	struct FDCAccountId ReporterAccountId;  // 0x0 (0x0)
	struct FDCAccountId TargetAccountId;  // 0x10 (0x10)
	struct FNickname TargetNickname;  // 0x20 (0x20)
	struct FDCCharacterId TargetCharacterId;  // 0x48 (0x48)
	uint8_t ReportCategory;  // 0x58 (0x58)
	char pad_89[7];  // 0x59 (0x59)
	struct FString ReportText;  // 0x60 (0x60)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradingConfirmNotify
// Size: 0xA8(Inherited: 0x18)
struct FClientMsgTradingConfirmNotify : FMsgBase
{
	char pad_24[144];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalPower
struct FOnMagicalPower
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgMerchantStockBuyItemListResponse
// Size: 0x30(Inherited: 0x18)
struct FClientMsgMerchantStockBuyItemListResponse : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnEarthMagicalReduction
struct FOnEarthMagicalReduction
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.InvitePartyWidget.TryRequestInviteParty
struct FTryRequestInviteParty
{
	struct UInvitePartyUserSlotWidgetData* InInvitePartyUserSlotWidgetData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.DeferredAoeFinish
struct FDeferredAoeFinish
{
	struct ADCCharacterBase* DCCharacterBase;  // 0x0 (0x0)
	struct ADCAoeBase* Aoe;  // 0x8 (0x8)
	struct FTransform Transform;  // 0x10 (0x10)
	struct FGameplayEventData EventData;  // 0x70 (0x70)
	char pad_288_1 : 7;  // 0x120 (0x120)
	bool bSuccessfully : 1;  // 0x120 (0x120)
	char pad_289[15];  // 0x121 (0x121)


}; 
 
 // Function DungeonCrawler.DCInventoryContainerComponent.AddInventory_Server
struct FAddInventory_Server
{
	struct UDCInventoryBase* Inventory;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgMerchantStockSellBackItemListRequest
// Size: 0x30(Inherited: 0x20)
struct FClientMsgMerchantStockSellBackItemListRequest : FRequestMsg
{
	char pad_32[16];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.DCLobbyEmoteInfo
struct FDCLobbyEmoteInfo
{
	struct UDCLobbyEmoteDataAsset* Data;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bIsEquipped : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	int32_t SlotIndex;  // 0xC (0xC)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgMerchantStockSellBackItemListResponse
// Size: 0x30(Inherited: 0x18)
struct FClientMsgMerchantStockSellBackItemListResponse : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.CharacterStatusWidget.OnMaxHealth
struct FOnMaxHealth
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgMerchantStockBuyRequest
// Size: 0x58(Inherited: 0x20)
struct FClientMsgMerchantStockBuyRequest : FRequestMsg
{
	char pad_32[56];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnEvilMagicResistance
struct FOnEvilMagicResistance
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MaxHealth
struct FOnRep_MaxHealth
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetPopupCloseResponse
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetPopupCloseResponse : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bSucceedClose : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.RemoveAggro
struct FRemoveAggro
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct ADCCharacterBase* Target;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgMerchantServiceCraftResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgMerchantServiceCraftResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCGameSession.CharacterResurrection
struct FCharacterResurrection
{
	struct FString AccountId;  // 0x0 (0x0)
	ADCCharacterBase* DCCharacterClass;  // 0x10 (0x10)
	struct TArray<struct FDCGameplayEffectData> InInitGameplayEffectDataArray;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bIsRemoveAllItem : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct ACharacter* ResurrectionCharacter;  // 0x30 (0x30)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyInviteRequest
// Size: 0x68(Inherited: 0x20)
struct FClientMsgPartyInviteRequest : FRequestMsg
{
	char pad_32[72];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.DCStockCraftItemData
struct FDCStockCraftItemData
{
	int64_t UniqueId;  // 0x0 (0x0)
	struct FText ConversationText;  // 0x8 (0x8)
	struct FText CraftCompleteText;  // 0x20 (0x20)
	struct TSoftObjectPtr<UDCItemDataAsset> ItemId;  // 0x38 (0x38)
	struct TSoftObjectPtr<UDCItemDataAsset> RequiredItemId_01;  // 0x68 (0x68)
	int32_t RequiredAmount01;  // 0x98 (0x98)
	char pad_156[4];  // 0x9C (0x9C)
	struct TSoftObjectPtr<UDCItemDataAsset> RequiredItemId_02;  // 0xA0 (0xA0)
	int32_t RequiredAmount02;  // 0xD0 (0xD0)
	char pad_212[4];  // 0xD4 (0xD4)
	struct TSoftObjectPtr<UDCItemDataAsset> RequiredItemId_03;  // 0xD8 (0xD8)
	int32_t RequiredAmount03;  // 0x108 (0x108)
	char pad_268[4];  // 0x10C (0x10C)
	struct TSoftObjectPtr<UDCItemDataAsset> RequiredItemId_04;  // 0x110 (0x110)
	int32_t RequiredAmount04;  // 0x140 (0x140)
	char pad_324[4];  // 0x144 (0x144)
	struct TSoftObjectPtr<UDCItemDataAsset> RequiredItemId_05;  // 0x148 (0x148)
	int32_t RequiredAmount05;  // 0x178 (0x178)
	char pad_380[4];  // 0x17C (0x17C)


}; 
 
 // Function DungeonCrawler.PlayWidget.OnPartyLocationSet
struct FOnPartyLocationSet
{
	struct FPlayPartyUserInfo PartyUser;  // 0x0 (0x0)
	int32_t MetaLocationIndex;  // 0x90 (0x90)
	char pad_148_1 : 7;  // 0x94 (0x94)
	bool IsReady : 1;  // 0x94 (0x94)
	char pad_149[3];  // 0x95 (0x95)


}; 
 
 // ScriptStruct DungeonCrawler.LoadPrimaryAssetData
// Size: 0x40(Inherited: 0x10)
struct FLoadPrimaryAssetData : FLoadPrimaryAssetType
{
	struct FMulticastInlineDelegate LoadPrimaryAssetDynamicMulticastDelegate;  // 0x10 (0x10)
	char pad_32[32];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.GA_InteractPassive.OnLostInteractableTarget
struct FOnLostInteractableTarget
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCInteractTargetInterface.InteractTargetInfoName
struct FInteractTargetInfoName
{
	struct FText Name;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgRemoveLooter
// Size: 0x20(Inherited: 0x18)
struct FMsgRemoveLooter : FMsgBase
{
	struct AActor* Looter;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MaxImpactEndurance
struct FOnRep_MaxImpactEndurance
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyInviteResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgPartyInviteResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradeChannelSelectResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgTradeChannelSelectResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyInviteNotify
// Size: 0x60(Inherited: 0x18)
struct FClientMsgPartyInviteNotify : FMsgBase
{
	char pad_24[72];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCMonsterBase.InteractableOnly
struct FInteractableOnly
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataProjectileTableRow
// Size: 0xF8(Inherited: 0x8)
struct FDesignDataProjectileTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataProjectile> Projectile;  // 0x8 (0x8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayAbility> ProjectileAbility;  // 0x58 (0x58)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayEffect> ProjectileEffect;  // 0xA8 (0xA8)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItemContainer
struct FGetDesignDataItemContainer
{
	struct FPrimaryAssetId InId;  // 0x0 (0x0)
	struct FDesignDataItemContainer ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyInviteAnswerRequest
// Size: 0x38(Inherited: 0x20)
struct FClientMsgPartyInviteAnswerRequest : FRequestMsg
{
	char pad_32[24];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradingCloseRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgTradingCloseRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataSpell
struct FDesignDataSpell
{
	struct FText Name;  // 0x0 (0x0)
	struct FPrimaryAssetId Desc;  // 0x18 (0x18)
	struct TArray<struct FPrimaryAssetId> Classes;  // 0x28 (0x28)
	struct FGameplayTag CastingType;  // 0x38 (0x38)
	struct FGameplayTag SourceType;  // 0x40 (0x40)
	struct FGameplayTag CostType;  // 0x48 (0x48)
	struct FPrimaryAssetId CostEffect;  // 0x50 (0x50)
	int32_t SpellTier;  // 0x60 (0x60)
	int32_t MaxCount;  // 0x64 (0x64)
	float CastingTime;  // 0x68 (0x68)
	float ChannelingDuration;  // 0x6C (0x6C)
	float ChannelingInterval;  // 0x70 (0x70)
	int32_t Range;  // 0x74 (0x74)
	int32_t AreaRadius;  // 0x78 (0x78)
	struct FGameplayTag SpellTag;  // 0x7C (0x7C)
	struct FPrimaryAssetId ArtData;  // 0x84 (0x84)
	struct FPrimaryAssetId SoundData;  // 0x94 (0x94)
	char pad_164[4];  // 0xA4 (0xA4)
	struct TArray<struct FPrimaryAssetId> Abilities;  // 0xA8 (0xA8)
	struct TArray<struct FPrimaryAssetId> Effects;  // 0xB8 (0xB8)


}; 
 
 // Function DungeonCrawler.TimerWidgetBase.OnFMsgAccountLinkAccountDataReplicationNotifyBlueprint
struct FOnFMsgAccountLinkAccountDataReplicationNotifyBlueprint
{
	struct FMsgAccountLinkAccountDataReplicationNotify InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataIdTagGroup
struct FGetDesignDataIdTagGroup
{
	struct FPrimaryAssetId InId;  // 0x0 (0x0)
	struct FDesignDataIdTagGroup ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyInviteAnswerResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgPartyInviteAnswerResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.DCIngameUser
struct FDCIngameUser
{
	char pad_0[152];  // 0x0 (0x0)
	struct UDCCharacterSkinDataAsset* CharacterSkin;  // 0x98 (0x98)
	struct TArray<struct UDCItemSkinDataAsset*> ItemSkins;  // 0xA0 (0xA0)
	struct TMap<int32_t, struct UDCEmoteDataAsset*> Emotes;  // 0xB0 (0xB0)
	struct TArray<struct UDCActionSkinDataAsset*> ActionSkins;  // 0x100 (0x100)
	struct TArray<struct FDCReportedInfo> ReportedInfoArray;  // 0x110 (0x110)
	char pad_288[168];  // 0x120 (0x120)


}; 
 
 // Function DungeonCrawler.DCGameSpawner.OnSetMonsterPeaceAction
struct FOnSetMonsterPeaceAction
{
	struct ADCMonsterBase* Monster;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCLobbyEmoteObjectAttachInfo
struct FDCLobbyEmoteObjectAttachInfo
{
	struct USkeletalMesh* ObjectSkeletalMesh;  // 0x0 (0x0)
	struct FName ObjectSocketCenter;  // 0x8 (0x8)
	struct FName ObjectSocketLeft;  // 0x10 (0x10)
	struct FName ObjectSocketRight;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.InvitePartyWidget.OnPageNumber
struct FOnPageNumber
{
	int32_t CurrentPage;  // 0x0 (0x0)
	int32_t MaxPage;  // 0x4 (0x4)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyInviteAnswerResultNotify
// Size: 0x48(Inherited: 0x18)
struct FClientMsgPartyInviteAnswerResultNotify : FMsgBase
{
	char pad_24[48];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyReadyRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgPartyReadyRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.TimerWidgetBase.OnLeftMinute
struct FOnLeftMinute
{
	int32_t NewValue;  // 0x0 (0x0)
	int32_t OldValue;  // 0x4 (0x4)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetProgressBarEnd
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetProgressBarEnd : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool IsSucceed : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.DCAT_WaitTargetGameplayTagEvent.WaitTargetGameplayTagEvent
struct FWaitTargetGameplayTagEvent
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayTag InTargetTag;  // 0x8 (0x8)
	struct AActor* InOptionalExternalTarget;  // 0x10 (0x10)
	struct UDCAT_WaitTargetGameplayTagEvent* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetHearingTargetArray
struct FGetHearingTargetArray
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyReadyResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgPartyReadyResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCCharacterBase.IsSameTeam
struct FIsSameTeam
{
	struct FString PartyId;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyItemSkinListNotify
// Size: 0x48(Inherited: 0x18)
struct FClientMsgPartyItemSkinListNotify : FMsgBase
{
	char pad_24[48];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyMemberKickResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgPartyMemberKickResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.ContainerInventoryWidget.OnMoveItem
struct FOnMoveItem
{
	struct FItemData OldItemData;  // 0x0 (0x0)
	struct FItemData NewItemData;  // 0xA0 (0xA0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyItemSkinChangeNotify
// Size: 0x58(Inherited: 0x18)
struct FClientMsgPartyItemSkinChangeNotify : FMsgBase
{
	char pad_24[64];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyMemberKickRequest
// Size: 0x40(Inherited: 0x20)
struct FClientMsgPartyMemberKickRequest : FRequestMsg
{
	char pad_32[32];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.IsAvailableInteraction
struct FIsAvailableInteraction
{
	struct ADCPlayerCharacterBase* Interacter;  // 0x0 (0x0)
	struct AActor* DstActor;  // 0x8 (0x8)
	struct FHitResult InHitResult;  // 0x10 (0x10)
	float OutDistance;  // 0xF8 (0xF8)
	char pad_252_1 : 7;  // 0xFC (0xFC)
	bool ReturnValue : 1;  // 0xFC (0xFC)
	char pad_253[3];  // 0xFD (0xFD)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyChatRequest
// Size: 0x88(Inherited: 0x20)
struct FClientMsgPartyChatRequest : FRequestMsg
{
	char pad_32[104];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyChatResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgPartyChatResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyChatNotify
// Size: 0x88(Inherited: 0x18)
struct FClientMsgPartyChatNotify : FMsgBase
{
	char pad_24[112];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.PropsActorBase.OnImpactEnduranceExhausted
struct FOnImpactEnduranceExhausted
{
	float ExhaustedTime;  // 0x7FF7D3428690 (0x16FA (0x7FF7D3428690 (0x16FAD03EBC0))
	char pad_4[4];  // 0x4 (0x4)
	UGameplayEffect* GameplayEffectClass;  // 0x8 (0x8)
	struct FDCGameplayEffectContext EffectContext;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.DCCharacterSkinInfo
struct FDCCharacterSkinInfo
{
	struct UDCCharacterSkinDataAsset* Data;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bIsEquipped : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function DungeonCrawler.CharacterStatusWidget.OnUtilityEffectivenessMod
struct FOnUtilityEffectivenessMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x7F (0x7F)


}; 
 
 // Function DungeonCrawler.DCGameStateBase.OnRep_DungeonInfo
struct FOnRep_DungeonInfo
{
	struct FDCDungeonInfo OldDungeonInfo;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyStartLobbyEmoteRequest
// Size: 0x30(Inherited: 0x20)
struct FClientMsgPartyStartLobbyEmoteRequest : FRequestMsg
{
	char pad_32[16];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgPartyStartLobbyEmoteResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgPartyStartLobbyEmoteResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.CharacterStatusWidget.OnResourcefulness
struct FOnResourcefulness
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.DCInputAction
struct FDCInputAction
{
	struct UInputAction* InputAction;  // 0x0 (0x0)
	struct FGameplayTag InputTag;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassPerkSwapEventNotify
// Size: 0x40(Inherited: 0x18)
struct FMsgWidgetClassPerkSwapEventNotify : FMsgBase
{
	int32_t SrcIndex;  // 0x18 (0x18)
	struct FPrimaryAssetId SrcPerkId;  // 0x1C (0x1C)
	int32_t DstIndex;  // 0x2C (0x2C)
	struct FPrimaryAssetId DstPerkId;  // 0x30 (0x30)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetShopBeginNotify
// Size: 0x7FF7D3erited: 0x18)
struct FMsgWidgetShopBeginNotify : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgRankingInfoRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgRankingInfoRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetSetByCallerValueInContainerSpecArray
struct FGetSetByCallerValueInContainerSpecArray
{
	struct FGameplayTag InEventTag;  // 0x0 (0x0)
	struct FGameplayTag InSetByCallerDataTag;  // 0x8 (0x8)
	struct TArray<struct FDCGameplayEffectContainerSpec> InEffectHandle;  // 0x10 (0x10)
	float ReturnValue;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgRankingRangeRequest
// Size: 0x58(Inherited: 0x20)
struct FClientMsgRankingRangeRequest : FRequestMsg
{
	char pad_32[56];  // 0x7FF7D35967D0 (0x1705 (0x7FF7D35967D0 (0x1705D6E0080))


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetPlayCharacterRefreshNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetPlayCharacterRefreshNotify : FMsgBase
{


}; 
 
 // Function DungeonCrawler.DCItemCommonWidget.OnDragDropFinished
struct FOnDragDropFinished
{
	struct UDragDropOperation* Operation;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgRankingCharacterRequest
// Size: 0x78(Inherited: 0x20)
struct FClientMsgRankingCharacterRequest : FRequestMsg
{
	char pad_32[88];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgShopItemListResponse
// Size: 0x40(Inherited: 0x18)
struct FClientMsgShopItemListResponse : FMsgBase
{
	char pad_24[40];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.ProjectileActor.OnHomingTargetDeath
struct FOnHomingTargetDeath
{
	struct FGameplayTag InGameplayTag;  // 0x7FF7CE0B0110 (0x7FF7CE0B0110)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgSkillRechargeRequest
// Size: 0x7FFInherited: 0x18)
struct FMsgSkillRechargeRequest : FMsgBase
{
	int32_t RechargeAmount;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgShopItemBuyRequest
// Size: 0x40(Inherited: 0x20)
struct FClientMsgShopItemBuyRequest : FRequestMsg
{
	char pad_32[32];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgShopItemBuyResponse
// Size: 0x38(Inherited: 0x18)
struct FClientMsgShopItemBuyResponse : FMsgBase
{
	char pad_24[32];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCCharacterMovementComponent.SetIsTrapped
struct FSetIsTrapped
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InbIsTrapped : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FVector InTrapPinnedLocation;  // 0x8 (0x8)
	float InTrapRange;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgShopEnterGiftCodeRequest
// Size: 0x30(Inherited: 0x20)
struct FClientMsgShopEnterGiftCodeRequest : FRequestMsg
{
	char pad_32[16];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassAddUnEquipPerkNotify
// Size: 0x28(Inherited: 0x18)
struct FMsgWidgetClassAddUnEquipPerkNotify : FMsgBase
{
	struct FPrimaryAssetId PerkId;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgShopEnterGiftCodeResponse
// Size: 0x30(Inherited: 0x18)
struct FClientMsgShopEnterGiftCodeResponse : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.GameTestComponent.ClientMsgClassSkillListResponse
struct FClientMsgClassSkillListResponse
{
	struct FMsgGameTestClassSkillListResponse InMsg;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetGameGroupHideUIbyNonCoexistWidgetResponse
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetGameGroupHideUIbyNonCoexistWidgetResponse : FMsgBase
{
	uint8_t WidgetGameGroupType;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct DungeonCrawler.MsgSpellChannelingStart
// Size: 0x38(Inherited: 0x18)
struct FMsgSpellChannelingStart : FMsgBase
{
	float Duration;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FText Description;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCCommonActivatableWidgetBase.IsSpectating
struct FIsSpectating
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnDarkMagicalReductionMod
struct FOnDarkMagicalReductionMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.SkillComponent.GetSkillAllCurrentSkillData
struct FGetSkillAllCurrentSkillData
{
	struct TArray<struct FSkillData> SkillDataList;  // 0x0 (0x0)
	struct TArray<float> MaxDurationList;  // 0x10 (0x10)
	struct TArray<float> RemainDurationList;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.DCMouseClickInfo
struct FDCMouseClickInfo
{
	struct FGeometry Geometry;  // 0x0 (0x0)
	struct FPointerEvent MouseEvent;  // 0x40 (0x40)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool bIsValid : 1;  // 0xD8 (0xD8)
	char pad_217[7];  // 0xD9 (0xD9)


}; 
 
 // Function DungeonCrawler.DCGameplayAbilityBase.ExecuteGameplayCueWithParams
struct FExecuteGameplayCueWithParams
{
	struct FGameplayTag GameplayCueTag;  // 0x0 (0x0)
	struct FGameplayCueParameters Params;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.DCServerPolicyInfo
struct FDCServerPolicyInfo
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bGmEnabled : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradeChannelListRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgTradeChannelListRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetShowVideoDisplayApplyAlarmWndNotity
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetShowVideoDisplayApplyAlarmWndNotity : FMsgBase
{


}; 
 
 // Function DungeonCrawler.SkillActor.RechargeSkill
struct FRechargeSkill
{
	int32_t ChargeAmount;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradeChannelSelectRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgTradeChannelSelectRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradingChatRequest
// Size: 0xB0(Inherited: 0x20)
struct FClientMsgTradingChatRequest : FRequestMsg
{
	char pad_32[144];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgSoundVolumeEnter
// Size: 0x58(Inherited: 0x18)
struct FMsgSoundVolumeEnter : FMsgBase
{
	struct FAkAudioVolumeInfo AkVolumeInfo;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGiveAbility
// Size: 0x20(Inherited: 0x18)
struct FMsgGiveAbility : FMsgBase
{
	struct AActor* TargetActor;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradeChannelExitRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgTradeChannelExitRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.CharacterCreateWidget.GetCanCreateVisibility
struct FGetCanCreateVisibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetOnActivateSpellCrossHairNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetOnActivateSpellCrossHairNotify : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameTestClassPerkListRequest
// Size: 0x20(Inherited: 0x18)
struct FMsgGameTestClassPerkListRequest : FMsgBase
{
	int32_t RequestCommand;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function DungeonCrawler.GameTestComponent.ClientMsgClassSkillListRequest
struct FClientMsgClassSkillListRequest
{
	struct FMsgGameTestClassSkillListRequest InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsWithinDistanceAndDirectionalAngleAndAllowedAngle
struct FFilterTargetsWithinDistanceAndDirectionalAngleAndAllowedAngle
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x8 (0x8)
	float Distance;  // 0x18 (0x18)
	float DirectionalAngle;  // 0x1C (0x1C)
	float AllowedAngle;  // 0x20 (0x20)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool ReturnValue : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradingChatResponse
// Size: 0xA0(Inherited: 0x18)
struct FClientMsgTradingChatResponse : FMsgBase
{
	char pad_24[136];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradeChannelExitResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgTradeChannelExitResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradeChannelUserListRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgTradeChannelUserListRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ServerMsgLobbyCharacterNotify
// Size: 0xA8(Inherited: 0x18)
struct FServerMsgLobbyCharacterNotify : FMsgBase
{
	struct FLobbyCharacterInfo LobbyCharacterData;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ImpactEnduranceExhaustedData
struct FImpactEnduranceExhaustedData
{
	float ExhaustedTime;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	UGameplayEffect* GameplayEffectClass;  // 0x8 (0x8)
	struct FDCGameplayEffectContext EffectContext;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCMonsterBase.OnNewTarget
struct FOnNewTarget
{
	struct ADCCharacterBase* InTarget;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradeChannelUserUpdateNotify
// Size: 0x28(Inherited: 0x18)
struct FClientMsgTradeChannelUserUpdateNotify : FMsgBase
{
	char pad_24[16];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgInventoryItemDataArrayResponse
// Size: 0x38(Inherited: 0x18)
struct FMsgInventoryItemDataArrayResponse : FMsgBase
{
	struct UInventoryComponent* InventoryComponent;  // 0x18 (0x18)
	uint8_t InventoryType;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct TArray<struct FItemData> ItemDataArray;  // 0x28 (0x28)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_WeightLimit
struct FOnRep_WeightLimit
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradeChannelChatRequest
// Size: 0xB0(Inherited: 0x20)
struct FClientMsgTradeChannelChatRequest : FRequestMsg
{
	char pad_32[144];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataPlayerCharacter
struct FDesignDataPlayerCharacter
{
	struct FText Name;  // 0x0 (0x0)
	struct FPrimaryAssetId Dialog;  // 0x18 (0x18)
	struct FText FlavorText;  // 0x28 (0x28)
	struct FPrimaryAssetId ClassInfo;  // 0x40 (0x40)
	struct TArray<struct FGameplayTag> ClassTypes;  // 0x50 (0x50)
	struct FPrimaryAssetId ArtData;  // 0x60 (0x60)
	struct FPrimaryAssetId SoundData;  // 0x70 (0x70)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool CanUse : 1;  // 0x80 (0x80)
	char pad_129_1 : 7;  // 0x81 (0x81)
	bool IsDefault : 1;  // 0x81 (0x81)
	char pad_130_1 : 7;  // 0x82 (0x82)
	bool IsExperimental : 1;  // 0x82 (0x82)
	char pad_131[5];  // 0x83 (0x83)
	struct TArray<struct FPrimaryAssetId> BaseItems;  // 0x88 (0x88)
	struct TArray<struct FPrimaryAssetId> Skills;  // 0x98 (0x98)
	struct TArray<struct FPrimaryAssetId> Spells;  // 0xA8 (0xA8)
	struct TArray<struct FPrimaryAssetId> Musics;  // 0xB8 (0xB8)
	struct TArray<struct FPrimaryAssetId> Emotes;  // 0xC8 (0xC8)
	struct TArray<struct FPrimaryAssetId> Abilities;  // 0xD8 (0xD8)
	struct TArray<struct FPrimaryAssetId> Effects;  // 0xE8 (0xE8)
	struct TArray<struct FPrimaryAssetId> Perks;  // [xF8 ([xF8)
	struct TArray<uint8_t> DefaultHands;  // 001031158] ted: 0x20)
 (001031158] ted: 0x20)
)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradeChannelChatResponse
// Size: 0x30(Inherited: 0x18)
struct FClientMsgTradeChannelChatResponse : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.InventoryStatusWidgetData
struct FInventoryStatusWidgetData
{
	struct FText PlayerCharacterName;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataLootDropRateItem
struct FDesignDataLootDropRateItem
{
	int32_t LuckGrade;  // 0x0 (0x0)
	int32_t DropRate;  // 0x4 (0x4)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradeChannelChatTextRangeRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgTradeChannelChatTextRangeRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameFloorLogNotify
// Size: 0x98(Inherited: 0x18)
struct FMsgGameFloorLogNotify : FMsgBase
{
	struct FGameFloorLogData GameFloorLogData;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradeMembershipRequirementResponse
// Size: 0x28(Inherited: 0x18)
struct FClientMsgTradeMembershipRequirementResponse : FMsgBase
{
	char pad_24[16];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradeMembershipRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgTradeMembershipRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.DCMiniMapDataContainer
struct FDCMiniMapDataContainer
{
	struct UTexture2D* Texture2D;  // 0x0 (0x0)
	float OrthoWidth;  // 0x8 (0x8)
	float Zoom;  // 0xC (0xC)


}; 
 
 // ScriptStruct DungeonCrawler.MsgRemoveFromInventory
// Size: 0x18(Inherited: 0x18)
struct FMsgRemoveFromInventory : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradeMembershipResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgTradeMembershipResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradeAnswerRequest
// Size: 0x60(Inherited: 0x20)
struct FClientMsgTradeAnswerRequest : FRequestMsg
{
	char pad_32[64];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.GameSkillSlotWidget.OnUpdateSkillSlot
struct FOnUpdateSkillSlot
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	float Duration;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCInventoryContainerComponent.OnInventoryAdded
struct FOnInventoryAdded
{
	struct UDCInventoryBase* Inventory;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradeAnswerResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgTradeAnswerResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradeAnswerRefusalNotify
// Size: 0x50(Inherited: 0x18)
struct FClientMsgTradeAnswerRefusalNotify : FMsgBase
{
	char pad_24[56];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassSkillEventNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgWidgetClassSkillEventNotify : FMsgBase
{
	int32_t Move;  // 0x18 (0x18)
	int32_t Index;  // 0x1C (0x1C)
	struct FPrimaryAssetId SkillId;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradingBeginNotify
// Size: 0x90(Inherited: 0x18)
struct FClientMsgTradingBeginNotify : FMsgBase
{
	char pad_24[120];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCReportPlayerChecklistSlotWidget.GetReportedCategoryVisibility
struct FGetReportedCategoryVisibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradingCloseResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgTradingCloseResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradingItemUpdateResponse
// Size: 0x100(Inherited: 0x18)
struct FClientMsgTradingItemUpdateResponse : FMsgBase
{
	char pad_24[232];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCEnhancedInputLibrary.GetKeysMappedToAction
struct FGetKeysMappedToAction
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UInputAction* Action;  // 0x8 (0x8)
	struct TArray<struct FKey> ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCAT_WaitDistChangeFromView.WaitDistanceChange
struct FWaitDistanceChange
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct AActor* TargetActor;  // 0x8 (0x8)
	struct FVector TargetLocation;  // 0x10 (0x10)
	float MaximumDistance;  // 0x28 (0x28)
	float CollisionRadius;  // 0x2C (0x2C)
	enum class ECollisionChannel CollisionChannel;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct UDCAT_WaitDistChangeFromView* ReturnValue;  // 0x38 (0x38)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetTradeChannelChatRequest
// Size: 0xA8(Inherited: 0x18)
struct FMsgWidgetTradeChannelChatRequest : FMsgBase
{
	uint8_t ChatType;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FString ChatTargetAccountId;  // 0x20 (0x20)
	struct FString ChatTargetCharacterId;  // 0x30 (0x30)
	struct FChatData ChatData;  // 0x40 (0x40)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradingReadyRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgTradingReadyRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDamageBase
struct FOnRep_MagicalDamageBase
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetSetByCallerValueInContainer
struct FGetSetByCallerValueInContainer
{
	struct FGameplayTag InEventTag;  // 0x0 (0x0)
	struct FGameplayTag InSetByCallerDataTag;  // 0x8 (0x8)
	struct TArray<struct FDCGameplayEffectContainer> InEffectContainer;  // 0x10 (0x10)
	float ReturnValue;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // ScriptStruct DungeonCrawler.DCMerchantCraftItemId
// Size: 0x8(Inherited: 0x8)
struct FDCMerchantCraftItemId : FDCInt64IdBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgGASAttributeSetResponse
// Size: 0x20(Inherited: 0x18)
struct FMsgGASAttributeSetResponse : FMsgBase
{
	struct UDCAttributeSet* AttributeSet;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgTradingReadyResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgTradingReadyResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_EvilMagicResistance
struct FOnRep_EvilMagicResistance
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCEnhancedInputLibrary.GetEnhancedPlayerInput
struct FGetEnhancedPlayerInput
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UEnhancedPlayerInput* ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgAliveResponse
// Size: 0x20(Inherited: 0x18)
struct FClientMsgAliveResponse : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SubAggro
struct FSubAggro
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct ADCCharacterBase* Target;  // 0x8 (0x8)
	float Point;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool ReturnValue : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // ScriptStruct DungeonCrawler.DCMerchantAssetManager
struct FDCMerchantAssetManager
{
	struct TMap<struct FDCMerchantSaleItemId, struct UDCStockBuyDataAsset*> SaleDataAssets;  // 0x0 (0x0)
	struct TMap<struct FDCMerchantWishItemId, struct UDCStockSellBackDataAsset*> WishDataAssets;  // 0x50 (0x50)
	struct TMap<struct FDCMerchantCraftItemId, struct UDCStockCraftDataAsset*> CraftDataAssets;  // 0xA0 (0xA0)
	struct TMap<struct FPrimaryAssetId, struct FDCMerchantWishItemId> WishListItemDataAssetIds;  // 0xF0 (0xF0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataStockCraft
struct FDesignDataStockCraft
{
	struct TArray<struct FDesignDataStockCraftItem> StockCraftItemArray;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ClientMsgReconnectRequest
// Size: 0x28(Inherited: 0x20)
struct FClientMsgReconnectRequest : FRequestMsg
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCAT_WaitDelayRestartable.WaitDelay
struct FWaitDelay
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	float Time;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct UDCAT_WaitDelayRestartable* ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataLootDropItem
struct FDesignDataLootDropItem
{
	struct FPrimaryAssetId ItemId;  // 0x0 (0x0)
	int32_t ItemCount;  // 0x10 (0x10)
	int32_t LuckGrade;  // 0x14 (0x14)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalFireDamageBase
struct FOnRep_MagicalFireDamageBase
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.PopupSWidgetData
struct FPopupSWidgetData
{
	uint8_t PopupButtonType;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FText DescMessage;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.DCIdTagGroupItemData
struct FDCIdTagGroupItemData
{
	struct FGameplayTag IdTag;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameplaytagNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgGameplaytagNotify : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.ContainerSlotArrayData
struct FContainerSlotArrayData
{
	struct TArray<struct UContainerSlotWidget*> SlotWidgetArray;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_ArcaneMagicalReduction
struct FOnRep_ArcaneMagicalReduction
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCEnhancedInputLibrary.GetActionBoolByTags
struct FGetActionBoolByTags
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FGameplayTag InputConfigTag;  // 0x8 (0x8)
	struct FGameplayTag InputTag;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct DungeonCrawler.GameplayEffectDescData
struct FGameplayEffectDescData
{
	struct FGameplayTag GameplayTag;  // 0x0 (0x0)
	int32_t EffectValue;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCAT_OverlapActorsInComponent.AddIgnoreActors
struct FAddIgnoreActors
{
	struct TArray<struct AActor*> InAddIgnoreActors;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetTradeRequestSelected
// Size: 0x80(Inherited: 0x18)
struct FMsgWidgetTradeRequestSelected : FMsgBase
{
	char pad_24[104];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ActorDieData
struct FActorDieData
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bAlive : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	UGameplayEffect* GameplayEffectClass;  // 0x8 (0x8)
	struct FDCGameplayEffectContext EffectContext;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.MailBoxListWidgetBase.OnPopupSWidgetInvitePartyAnswerResponse
struct FOnPopupSWidgetInvitePartyAnswerResponse
{
	uint8_t PopupResult;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FString ReturnAccountID;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgMusicPlayStart
// Size: 0x48(Inherited: 0x18)
struct FMsgMusicPlayStart : FMsgBase
{
	float Duration;  // 0x18 (0x18)
	float JudgementThreshold;  // 0x1C (0x1C)
	float CastSpeed;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct FText Description;  // 0x28 (0x28)
	struct UPlayMusicData* PlayMusicData;  // 0x40 (0x40)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalReduction
struct FOnMagicalReduction
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.DCGameplayEffectContainerSpec
struct FDCGameplayEffectContainerSpec
{
	UDCTargetType* TargetType;  // 0x0 (0x0)
	struct FGameplayAbilityTargetDataHandle TargetDataHandle;  // 0x8 (0x8)
	struct TArray<struct FGameplayEffectSpecHandle> TargetGameplayEffectSpecHandles;  // 0x30 (0x30)
	struct FGameplayTag ContainerTag;  // 0x40 (0x40)


}; 
 
 // Function DungeonCrawler.ItemActor.OnRep_ItemData
struct FOnRep_ItemData
{
	struct FItemData OldItemData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMerchantPageWidget.OnServiceTabSelected
struct FOnServiceTabSelected
{
	struct FName TabId;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPostProcessingComponent.SetPlayRateCameraPostProcess
struct FSetPlayRateCameraPostProcess
{
	struct UMaterialInstanceDynamic* InMIDKey;  // 0x0 (0x0)
	float NewRate;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // ScriptStruct DungeonCrawler.DCPropertyAttribute
struct FDCPropertyAttribute
{
	struct TArray<struct FDCPropertyAttributePerk> PerkAttributeArray;  // 0x0 (0x0)
	struct TArray<struct FDCPropertyAttributeSkill> SkillAttributeArray;  // 0x10 (0x10)
	struct TArray<struct FDCPropertyAttributeSpell> SpellAttributeArray;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataActionSkinTableRow
// Size: 0xA8(Inherited: 0x8)
struct FDesignDataActionSkinTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDCDesignDataActionSkin> ActionSkin;  // 0x8 (0x8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayAbility> ActionSkinAbility;  // 0x58 (0x58)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetProgressBarPause
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetProgressBarPause : FMsgBase
{


}; 
 
 // Function DungeonCrawler.GA_WearBase.EventReceived
struct FEventReceived
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.DCInventoryBoxView
struct FDCInventoryBoxView
{
	struct UDCBoxInventory* Inventory;  // 0x0 (0x0)
	struct FIntPoint StartPos;  // 0x8 (0x8)
	struct FIntPoint Size;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bValid : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.ImpactableComponent.GetImpactableTagQueryArray
struct FGetImpactableTagQueryArray
{
	struct TArray<struct UTagQueryData*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.InteractableTargetComponent.InteractFailed
struct FInteractFailed
{
	struct AActor* InteractingActor;  // 0x0 (0x0)
	struct FGameplayTag TriggerTag;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.GA_RangedAttackBase.FireSocketSightUnblocked
struct FFireSocketSightUnblocked
{
	struct FGameplayAbilityTargetDataHandle InData;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCChannelPlayerInfo
struct FDCChannelPlayerInfo
{
	struct FDCAccountId AccountId;  // 0x0 (0x0)
	struct FNickname Nickname;  // 0x10 (0x10)
	uint8_t CharacterClass;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct FDCCharacterId CharacterId;  // 0x40 (0x40)
	uint8_t Gender;  // 0x50 (0x50)
	char pad_81[3];  // 0x51 (0x51)
	uint32_t Level;  // 0x54 (0x54)


}; 
 
 // ScriptStruct DungeonCrawler.DCActionSkinShopItemInfo
// Size: 0x18(Inherited: 0x18)
struct FDCActionSkinShopItemInfo : FDCShopItemInfo
{


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataGameplayEffect
struct FDesignDataGameplayEffect
{
	UGameplayEffect* EffectClass;  // 0x0 (0x0)
	struct FGameplayTag EventTag;  // 0x8 (0x8)
	uint8_t TargetType;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	int32_t Duration;  // 0x14 (0x14)
	int32_t StrengthBase;  // 0x18 (0x18)
	int32_t StrengthMod;  // 0x1C (0x1C)
	int32_t AgilityBase;  // 0x20 (0x20)
	int32_t AgilityMod;  // 0x24 (0x24)
	int32_t WillBase;  // 0x28 (0x28)
	int32_t WillMod;  // 0x2C (0x2C)
	int32_t KnowledgeBase;  // 0x30 (0x30)
	int32_t KnowledgeMod;  // 0x34 (0x34)
	int32_t ResourcefulnessBase;  // 0x38 (0x38)
	int32_t ResourcefulnessMod;  // 0x3C (0x3C)
	int32_t ExecDamageWeaponRatio;  // 0x40 (0x40)
	int32_t PhysicalDamageWeapon;  // 0x44 (0x44)
	int32_t PhysicalDamageBase;  // 0x48 (0x48)
	int32_t ExecPhysicalDamageBase;  // 0x4C (0x4C)
	int32_t PhysicalPower;  // 0x50 (0x50)
	int32_t PhysicalDamageMod;  // 0x54 (0x54)
	int32_t PhysicalDamageAdd;  // 0x58 (0x58)
	int32_t PhysicalDamageTrue;  // 0x5C (0x5C)
	int32_t ExecPhysicalDamageTrue;  // 0x60 (0x60)
	int32_t PhysicalBackstabPower;  // 0x64 (0x64)
	int32_t PhysicalHeadshotPower;  // 0x68 (0x68)
	int32_t PhysicalHeadshotPenetration;  // 0x6C (0x6C)
	int32_t ArmorPenetration;  // 0x70 (0x70)
	int32_t ExecArmorPenetration;  // 0x74 (0x74)
	int32_t ArmorRating;  // 0x78 (0x78)
	int32_t ItemArmorRatingMod;  // 0x7C (0x7C)
	int32_t PhysicalReduction;  // 0x80 (0x80)
	int32_t PhysicalReductionMod;  // 0x84 (0x84)
	int32_t PhysicalAbsoluteReduction;  // 0x88 (0x88)
	int32_t MagicalDamageWeapon;  // 0x8C (0x8C)
	int32_t MagicalDamageBase;  // 0x90 (0x90)
	int32_t ExecMagicalDamageBase;  // 0x94 (0x94)
	int32_t MagicalPower;  // 0x98 (0x98)
	int32_t MagicalDamageMod;  // 0x9C (0x9C)
	int32_t MagicalDamageAdd;  // 0xA0 (0xA0)
	int32_t MagicalDamageTrue;  // 0xA4 (0xA4)
	int32_t ExecMagicalDamageTrue;  // 0xA8 (0xA8)
	int32_t MagicPenetration;  // 0xAC (0xAC)
	int32_t ExecMagicPenetration;  // 0xB0 (0xB0)
	int32_t MagicalFireDamageBase;  // 0xB4 (0xB4)
	int32_t MagicalFireDamageMod;  // 0xB8 (0xB8)
	int32_t MagicalFireDamageAdd;  // 0xBC (0xBC)
	int32_t MagicalArcaneDamageBase;  // 0xC0 (0xC0)
	int32_t MagicalArcaneDamageMod;  // 0xC4 (0xC4)
	int32_t MagicalArcaneDamageAdd;  // 0xC8 (0xC8)
	int32_t MagicalDarkDamageBase;  // 0xCC (0xCC)
	int32_t MagicalDarkDamageMod;  // 0xD0 (0xD0)
	int32_t MagicalDarkDamageAdd;  // 0xD4 (0xD4)
	int32_t MagicResistance;  // 0xD8 (0xD8)
	int32_t MagicalReduction;  // 0xDC (0xDC)
	int32_t MagicalReductionMod;  // 0xE0 (0xE0)
	int32_t MagicalAbsoluteReduction;  // 0xE4 (0xE4)
	int32_t FireMagicResistance;  // 0xE8 (0xE8)
	int32_t FireMagicalReduction;  // 0xEC (0xEC)
	int32_t FireMagicalReductionMod;  // 0xF0 (0xF0)
	int32_t WaterMagicResistance;  // 0xF4 (0xF4)
	int32_t WaterMagicalReduction;  // 0xF8 (0xF8)
	int32_t WaterMagicalReductionMod;  // 0xFC (0xFC)
	int32_t LightningMagicResistance;  // 0x100 (0x100)
	int32_t LightningMagicalReduction;  // 0x104 (0x104)
	int32_t LightningMagicalReductionMod;  // 0x108 (0x108)
	int32_t EarthMagicResistance;  // 0x10C (0x10C)
	int32_t EarthMagicalReduction;  // 0x110 (0x110)
	int32_t EarthMagicalReductionMod;  // 0x114 (0x114)
	int32_t LightMagicResistance;  // 0x118 (0x118)
	int32_t LightMagicalReduction;  // 0x11C (0x11C)
	int32_t LightMagicalReductionMod;  // 0x120 (0x120)
	int32_t DarkMagicResistance;  // 0x124 (0x124)
	int32_t DarkMagicalReduction;  // 0x128 (0x128)
	int32_t DarkMagicalReductionMod;  // 0x12C (0x12C)
	int32_t ArcaneMagicResistance;  // 0x130 (0x130)
	int32_t ArcaneMagicalReduction;  // 0x134 (0x134)
	int32_t ArcaneMagicalReductionMod;  // 0x138 (0x138)
	int32_t DivineMagicResistance;  // 0x13C (0x13C)
	int32_t DivineMagicalReduction;  // 0x140 (0x140)
	int32_t DivineMagicalReductionMod;  // 0x144 (0x144)
	int32_t EvilMagicResistance;  // 0x148 (0x148)
	int32_t EvilMagicalReduction;  // 0x14C (0x14C)
	int32_t EvilMagicalReductionMod;  // 0x150 (0x150)
	int32_t AirMagicResistance;  // 0x154 (0x154)
	int32_t AirMagicalReduction;  // 0x158 (0x158)
	int32_t AirMagicalReductionMod;  // 0x15C (0x15C)
	int32_t SpiritMagicResistance;  // 0x160 (0x160)
	int32_t SpiritMagicalReduction;  // 0x164 (0x164)
	int32_t SpiritMagicalReductionMod;  // 0x168 (0x168)
	int32_t HeadshotReductionMod;  // 0x16C (0x16C)
	int32_t ProjectileReductionMod;  // 0x170 (0x170)
	int32_t ImpactPower;  // 0x174 (0x174)
	int32_t ExecImpactPower;  // 0x178 (0x178)
	int32_t ExecImpactEnduranceRestore;  // 0x17C (0x17C)
	int32_t ImpactResistance;  // 0x180 (0x180)
	int32_t MaxImpactEndurance;  // 0x184 (0x184)
	int32_t ExecAddHealthByCurHealthRatio;  // 0x188 (0x188)
	int32_t ExecAddHealthByMaxHealthRatio;  // 0x18C (0x18C)
	int32_t PhysicalHealBase;  // 0x190 (0x190)
	int32_t ExecPhysicalHealBase;  // 0x194 (0x194)
	int32_t PhysicalHealMod;  // 0x198 (0x198)
	int32_t MagicalHealBase;  // 0x19C (0x19C)
	int32_t ExecMagicalHealBase;  // 0x1A0 (0x1A0)
	int32_t MagicalHealMod;  // 0x1A4 (0x1A4)
	int32_t ExecRecoveryHealBase;  // 0x1A8 (0x1A8)
	int32_t MaxHealthMod;  // 0x1AC (0x1AC)
	int32_t MaxHealthAdd;  // 0x1B0 (0x1B0)
	int32_t AddtionalAggroMod;  // 0x1B4 (0x1B4)
	int32_t MaxPhysicalShield;  // 0x1B8 (0x1B8)
	int32_t MaxMagicalShield;  // 0x1BC (0x1BC)
	int32_t MaxTotalShield;  // 0x1C0 (0x1C0)
	int32_t SpellCapacityMod;  // 0x1C4 (0x1C4)
	int32_t SpellCapacityAdd;  // 0x1C8 (0x1C8)
	int32_t MoveSpeedBase;  // 0x1CC (0x1CC)
	int32_t MoveSpeedMod;  // 0x1D0 (0x1D0)
	int32_t MoveSpeedAdd;  // 0x1D4 (0x1D4)
	int32_t MoveSpeedArmorPenaltyMod;  // 0x1D8 (0x1D8)
	int32_t ActionSpeed;  // 0x1DC (0x1DC)
	int32_t SpellCastingSpeed;  // 0x1E0 (0x1E0)
	int32_t ItemEquipSpeed;  // 0x1E4 (0x1E4)
	int32_t RegularInteractionSpeed;  // 0x1E8 (0x1E8)
	int32_t MagicalInteractionSpeed;  // 0x1EC (0x1EC)
	int32_t BuffDurationMod;  // 0x1F0 (0x1F0)
	int32_t DebuffDurationMod;  // 0x1F4 (0x1F4)
	int32_t UtilityEffectivenessMod;  // 0x1F8 (0x1F8)
	int32_t UtilityEffectivenessAdd;  // 0x1FC (0x1FC)
	int32_t WeightLimitMod;  // 0x200 (0x200)
	int32_t WeightLimitAdd;  // 0x204 (0x204)
	int32_t Luck;  // 0x208 (0x208)
	int32_t ExecAttributeBonusRatio;  // 0x20C (0x20C)
	int32_t ExecHealthCost;  // 0x210 (0x210)
	char pad_532[4];  // 0x214 (0x214)
	struct TArray<struct FGameplayTag> Tags;  // 0x218 (0x218)


}; 
 
 // ScriptStruct DungeonCrawler.DCChannelPlayerWidgetInfo
struct FDCChannelPlayerWidgetInfo
{
	struct FDCChannelPlayerInfo ChannelPlayer;  // 0x0 (0x0)
	struct TArray<uint8_t> ContextOptions;  // 0x58 (0x58)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalReduction
struct FOnRep_MagicalReduction
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsControlsWidget.OnAutoFillUtilitySlotClicked
struct FOnAutoFillUtilitySlotClicked
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsClick : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgPlayMatchingStateChangedNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgPlayMatchingStateChangedNotify : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bMatching : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct DungeonCrawler.AggroRate
struct FAggroRate
{
	char pad_0[16];  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCPlayerCharacterData
struct FDCPlayerCharacterData
{
	struct UDesignDataAssetPlayerCharacter* DesignData;  // 0x0 (0x0)
	struct UDCCharacterPartsArtData* PartsResourceData;  // 0x8 (0x8)
	struct UArtDataPlayerCharacter* ArtData;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.DDCItemBundleInfoItem
struct FDDCItemBundleInfoItem
{
	struct TSoftObjectPtr<UArtDataItem> BundleArtData;  // 0x0 (0x0)
	int32_t BundleGrade;  // 0x30 (0x30)
	int32_t ItemMinCount;  // 0x34 (0x34)


}; 
 
 // Function DungeonCrawler.DCAkComponent.SetSoundSwitch
struct FSetSoundSwitch
{
	struct FGameplayTag Tag;  // 0x0 (0x0)
	enum class EPhysicalSurface SurfaceType;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FString SwitchGroup;  // 0x10 (0x10)
	struct FString SwitchState;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.DCClientAccountInfo
struct FDCClientAccountInfo
{
	struct FDCAccountId AccountId;  // 0x0 (0x0)
	struct TMap<struct FPrimaryAssetId, struct FDCCharacterSkinInfo> CharacterSkins;  // 0x10 (0x10)
	struct TMap<struct FPrimaryAssetId, struct FDCItemSkinInfo> ItemSkins;  // 0x60 (0x60)
	struct TMap<struct FPrimaryAssetId, struct FDCEmoteInfo> Emotes;  // 0xB0 (0xB0)
	struct TMap<struct FPrimaryAssetId, struct FDCLobbyEmoteInfo> LobbyEmotes;  // 0x100 (0x100)
	struct TMap<struct FPrimaryAssetId, struct FDCActionSkinInfo> ActionSkins;  // 0x150 (0x150)
	struct TMap<uint8_t, struct FDCPlayerCharacterClassInfo> PlayerCharacterClasses;  // 0x1A0 (0x1A0)


}; 
 
 // ScriptStruct DungeonCrawler.DCPlayerCharacterClassInfo
struct FDCPlayerCharacterClassInfo
{
	struct UDesignDataAssetPlayerCharacter* Data;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bIsOwned : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	struct FPrimaryAssetId ShopId;  // 0xC (0xC)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct DungeonCrawler.DCEmoteInfo
struct FDCEmoteInfo
{
	struct UDCEmoteDataAsset* Data;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bIsEquipped : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	int32_t SlotIndex;  // 0xC (0xC)


}; 
 
 // Function DungeonCrawler.EquipmentSlotWidget.RemovePreviewItemWidget
struct FRemovePreviewItemWidget
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bSetItem : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.BindAccountUserData
struct FBindAccountUserData
{
	struct AActor* DummyActor;  // 0x0 (0x0)
	char pad_8[32];  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.DCItemSkinInfo
struct FDCItemSkinInfo
{
	struct UDCItemSkinDataAsset* Data;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bIsEquipped : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // ScriptStruct DungeonCrawler.EquipmentQuickSlotInfo
struct FEquipmentQuickSlotInfo
{
	uint8_t QuickSlotType;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct TArray<struct UDCEquipmentSlot*> SlotArray;  // 0x8 (0x8)
	int32_t LastSlotIndex;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct DungeonCrawler.DCRedstoneShardShopItemInfo
struct FDCRedstoneShardShopItemInfo
{
	struct UDCRedstoneShardShopDataAsset* Data;  // 0x0 (0x0)
	int32_t Index;  // 0x8 (0x8)
	int32_t SalesCount;  // 0xC (0xC)
	float Price;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FString ShopURL;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnLightningMagicalReduction
struct FOnLightningMagicalReduction
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.DCClassPackageShopItemInfo
// Size: 0x18(Inherited: 0x18)
struct FDCClassPackageShopItemInfo : FDCShopItemInfo
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgInteractFailed
// Size: 0x28(Inherited: 0x18)
struct FMsgInteractFailed : FMsgBase
{
	struct AActor* Interacter;  // 0x18 (0x18)
	struct FGameplayTag EventTag;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetProjectileDamageCurveFloatValue
struct FGetProjectileDamageCurveFloatValue
{
	struct FGameplayEffectSpec InSpec;  // 0x0 (0x0)
	float ReturnValue;  // 0x298 (0x298)
	char pad_668[4];  // 0x29C (0x29C)


}; 
 
 // ScriptStruct DungeonCrawler.DCItemSkinShopItemInfo
// Size: 0x18(Inherited: 0x18)
struct FDCItemSkinShopItemInfo : FDCShopItemInfo
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgSampleRequest
// Size: 0x18(Inherited: 0x18)
struct FMsgSampleRequest : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.DCCharacterSkinShopItemInfo
// Size: 0x18(Inherited: 0x18)
struct FDCCharacterSkinShopItemInfo : FDCShopItemInfo
{


}; 
 
 // ScriptStruct DungeonCrawler.DCDamageIndicateData
struct FDCDamageIndicateData
{
	struct AActor* SourceActor;  // 0x0 (0x0)
	float Damage;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bIsPenetration : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool bIsHeadShotted : 1;  // 0xD (0xD)
	uint8_t DamageType;  // 0xE (0xE)
	char pad_15[1];  // 0xF (0xF)
	struct FVector HitLocation;  // 0x10 (0x10)
	struct FVector HitDirection;  // 0x28 (0x28)


}; 
 
 // Function DungeonCrawler.GameInteractionDescriptionWidget.OnInteractableDataByStateMap
struct FOnInteractableDataByStateMap
{
	struct TMap<struct FGameplayTag, struct FInteractionData> NewValue;  // 0x0 (0x0)
	struct TMap<struct FGameplayTag, struct FInteractionData> OldValue;  // 0x50 (0x50)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassTopMenuBeginNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetClassTopMenuBeginNotify : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.ServerInfo
struct FServerInfo
{
	struct FString ServerAddress;  // 0x0 (0x0)
	struct FString ServerName;  // 0x10 (0x10)
	struct FString ServerDescription;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.CharacterSelectWidget.IsNeedPurchase
struct FIsNeedPurchase
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTagedTargets
struct FFilterTagedTargets
{
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x0 (0x0)
	struct FGameplayTag GameplayTag;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct DungeonCrawler.DCRecruitInspectInfo
struct FDCRecruitInspectInfo
{
	struct FDCChannelPlayerInfo ChannelPlayer;  // 0x0 (0x0)
	struct TArray<struct FDCItemInfo> Items;  // 0x58 (0x58)


}; 
 
 // Function DungeonCrawler.DCPostProcessingComponent.SetTimeCameraPostProcess
struct FSetTimeCameraPostProcess
{
	struct UMaterialInstanceDynamic* InMIDKey;  // 0x0 (0x0)
	float NewTime;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassSpellShowEquippableSlotNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetClassSpellShowEquippableSlotNotify : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.DCGiftCodeRewardInfo
struct FDCGiftCodeRewardInfo
{
	uint8_t RewardType;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FPrimaryAssetId RewardAssetId;  // 0x4 (0x4)
	char pad_20[4];  // 0x14 (0x14)
	struct FText Name;  // 0x18 (0x18)
	struct FText FlavorText;  // 0x30 (0x30)
	struct FText Description;  // 0x48 (0x48)
	struct UTexture2D* RewardIconTexture;  // 0x60 (0x60)


}; 
 
 // Function DungeonCrawler.DCCustomizeCharacterSkinListWidget.OnSetCharacterSkinInfoArray
struct FOnSetCharacterSkinInfoArray
{
	struct TArray<struct FDCCharacterSkinInfo> CharacterSkinInfoArray;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCReportedInfo
struct FDCReportedInfo
{
	struct FDCAccountId TargetAccountId;  // 0x0 (0x0)
	uint8_t ReportCategory;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	int32_t ReportCount;  // 0x14 (0x14)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetTradeChannelEndNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetTradeChannelEndNotify : FMsgBase
{


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemSlotTypeTextMap
struct FGetItemSlotTypeTextMap
{
	struct TMap<struct FGameplayTag, struct FText> ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCInventoryBuilder
struct FDCInventoryBuilder
{
	struct TArray<struct UDCInventoryBase*> InventoryList;  // 0x0 (0x0)
	struct TArray<struct FDCInventoryTask> InventoryTasks;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_EarthMagicalReduction
struct FOnRep_EarthMagicalReduction
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItemPropertyType
struct FGetDesignDataItemPropertyType
{
	struct FPrimaryAssetId InId;  // 0x0 (0x0)
	struct FDesignDataItemPropertyType ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetContextMenuCloseNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetContextMenuCloseNotify : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.DCInventoryTask
struct FDCInventoryTask
{
	uint8_t TaskType;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FDCInventoryTaskSourceInfo Source;  // 0x8 (0x8)
	struct FDCInventoryTaskTargetInfo Target;  // 0x130 (0x130)
	struct FDCInventoryTaskAuxInfo TargetAux;  // 0x140 (0x140)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_LightMagicalReductionMod
struct FOnRep_LightMagicalReductionMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_SpellBase.GetAreaRadius
struct FGetAreaRadius
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCLobbyEmoteSlotInfo
struct FDCLobbyEmoteSlotInfo
{
	struct FPrimaryAssetId LobbyEmoteId;  // 0x0 (0x0)
	int32_t SlotIndex;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCGameStateBase.OnRep_AccountDataReplicationArray
struct FOnRep_AccountDataReplicationArray
{
	struct TArray<struct FAccountDataReplication> OldAccountDataReplicationArray;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAT_InteractionSkillCheck.InteractionSkillCheck
struct FInteractionSkillCheck
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FName TaskInstanceName;  // 0x8 (0x8)
	float Duration;  // 0x10 (0x10)
	float SucceedSectionStartTime;  // 0x14 (0x14)
	float SucceedSectionEndTime;  // 0x18 (0x18)
	float PerfectSucceedSectionStartTime;  // 0x1C (0x1C)
	float PerfectSucceedSectionEndTime;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct UDCAT_InteractionSkillCheck* ReturnValue;  // 0x28 (0x28)


}; 
 
 // ScriptStruct DungeonCrawler.MiniMapDeathSwarmData
struct FMiniMapDeathSwarmData
{
	uint8_t FloorRulePhase;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float LerpRatio;  // 0x4 (0x4)
	struct FVector2D PosLerpFrom;  // 0x8 (0x8)
	float SizeLerpFrom;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FVector2D PosLerpTo;  // 0x20 (0x20)
	float SizeLerpTo;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // Function DungeonCrawler.ClassSkillListWidgetBase.SetSelectedSlotIndex
struct FSetSelectedSlotIndex
{
	int32_t InSlotIndex;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataLobbyEmoteTableRow
// Size: 0xF8(Inherited: 0x8)
struct FDesignDataLobbyEmoteTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataLobbyEmote> LobbyEmote;  // 0x8 (0x8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayAbility> LobbyEmoteAbility;  // 0x58 (0x58)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayEffect> LobbyEmoteEffect;  // 0xA8 (0xA8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGASInstigatorDataRequest
// Size: 0x18(Inherited: 0x18)
struct FMsgGASInstigatorDataRequest : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.DCLootDropItemData
struct FDCLootDropItemData
{
	struct TSoftObjectPtr<UDCItemDataAsset> ItemId;  // 0x0 (0x0)
	int32_t ItemCount;  // 0x30 (0x30)
	int32_t LuckGrade;  // 0x34 (0x34)


}; 
 
 // ScriptStruct DungeonCrawler.MsgRemoveContainingItemRequest
// Size: 0x28(Inherited: 0x18)
struct FMsgRemoveContainingItemRequest : FMsgBase
{
	int32_t InventoryId;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	int64_t ItemUniqueId;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.DCLootDropRateItemData
struct FDCLootDropRateItemData
{
	int32_t LuckGrade;  // 0x0 (0x0)
	int32_t DropRate;  // 0x4 (0x4)


}; 
 
 // ScriptStruct DungeonCrawler.LoadedMappableConfigPair
struct FLoadedMappableConfigPair
{
	struct UPlayerMappableInputConfig* Config;  // 0x0 (0x0)
	uint8_t Type;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool bIsActive : 1;  // 0x9 (0x9)
	char pad_10[6];  // 0xA (0xA)


}; 
 
 // Function DungeonCrawler.DCWidgetBlueprintLibrary.PopupMessageSWidgetNotify
struct FPopupMessageSWidgetNotify
{
	struct APlayerController* InPlayer;  // 0x0 (0x0)
	UDCCommonActivatableWidgetBase* WidgetClass;  // 0x8 (0x8)
	struct FText DescMessage;  // 0x10 (0x10)
	uint8_t ButtonType;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetPopupMessageResponse
// Size: 0x30(Inherited: 0x30)
struct FMsgWidgetPopupMessageResponse : FMsgPopup
{


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_ResourcefulnessBase
struct FOnRep_ResourcefulnessBase
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MappableConfigPair
struct FMappableConfigPair
{
	struct UPlayerMappableInputConfig* Config;  // 0x0 (0x0)
	uint8_t Type;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FGameplayTagContainer DependentPlatformTraits;  // 0x10 (0x10)
	struct FGameplayTagContainer ExcludedPlatformTraits;  // 0x30 (0x30)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool bShouldActivateAutomatically : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)


}; 
 
 // ScriptStruct DungeonCrawler.SkillCooldownData
struct FSkillCooldownData
{
	float RemainDuration;  // 0x0 (0x0)
	float MaxDuration;  // 0x4 (0x4)


}; 
 
 // ScriptStruct DungeonCrawler.MsgReduceItemContentsCountRequest
// Size: 0x30(Inherited: 0x18)
struct FMsgReduceItemContentsCountRequest : FMsgBase
{
	int32_t InventoryId;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	int64_t ItemUniqueId;  // 0x20 (0x20)
	int32_t ReduceContentsCount;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnDarkMagicalReduction
struct FOnDarkMagicalReduction
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.DCMerchantWishItemId
// Size: 0x8(Inherited: 0x8)
struct FDCMerchantWishItemId : FDCInt64IdBase
{


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_ImpactEndurance
struct FOnRep_ImpactEndurance
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetCharacterSelectGroupToggleRequest
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetCharacterSelectGroupToggleRequest : FMsgBase
{
	uint8_t WidgetCharacterSelectGroupType;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct DungeonCrawler.DCMerchantSaleItemId
// Size: 0x8(Inherited: 0x8)
struct FDCMerchantSaleItemId : FDCInt64IdBase
{


}; 
 
 // ScriptStruct DungeonCrawler.DCMerchantId
// Size: 0x10(Inherited: 0x10)
struct FDCMerchantId : FDCStringIdBase
{


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataStockBuyItem
struct FDesignDataStockBuyItem
{
	int64_t UniqueId;  // 0x0 (0x0)
	struct FText ConversationText;  // 0x8 (0x8)
	struct FText SaleCompleteText;  // 0x20 (0x20)
	struct FPrimaryAssetId ItemId;  // 0x38 (0x38)
	struct FPrimaryAssetId RequiredItemId_01;  // 0x48 (0x48)
	int32_t RequiredAmount01;  // 0x58 (0x58)
	struct FPrimaryAssetId RequiredItemId_02;  // 0x5C (0x5C)
	int32_t RequiredAmount02;  // 0x6C (0x6C)
	struct FPrimaryAssetId RequiredItemId_03;  // 0x70 (0x70)
	int32_t RequiredAmount03;  // 0x80 (0x80)
	struct FPrimaryAssetId RequiredItemId_04;  // 0x84 (0x84)
	int32_t RequiredAmount04;  // 0x94 (0x94)
	struct FPrimaryAssetId RequiredItemId_05;  // 0x98 (0x98)
	int32_t RequiredAmount05;  // 0xA8 (0xA8)
	char pad_172[4];  // 0xAC (0xAC)


}; 
 
 // ScriptStruct DungeonCrawler.DCMovementModiferContainer
struct FDCMovementModiferContainer
{
	struct TArray<struct FPrimaryAssetId> MovementModifierArray;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCInventoryComponent.ApplyInventoryBuilder_Server
struct FApplyInventoryBuilder_Server
{
	struct FDCInventoryBuilder Builder;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCPartyInfo
struct FDCPartyInfo
{
	struct FDCPartyId PartyId;  // 0x0 (0x0)
	struct TArray<struct FDCAccountId> MemberAccounts;  // 0x10 (0x10)
	struct FDCAccountId LeaderAccount;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgSampleResponse
// Size: 0x18(Inherited: 0x18)
struct FMsgSampleResponse : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.DCRecruitChannelInfo
struct FDCRecruitChannelInfo
{
	struct FDCRecruitChannelIndex Index;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UDCChatRoomDataAsset* Data;  // 0x8 (0x8)
	int32_t GroupIndex;  // 0x10 (0x10)
	uint32_t NumMembers;  // 0x14 (0x14)


}; 
 
 // ScriptStruct DungeonCrawler.DCInt32IdBase
struct FDCInt32IdBase
{
	int32_t _;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalDamageBase
struct FOnMagicalDamageBase
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCPlayerController.GmServer
struct FGmServer
{
	struct FString InKey;  // 0x0 (0x0)
	struct FString InCmd;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.DCRecruitChannelIndex
// Size: 0x4(Inherited: 0x4)
struct FDCRecruitChannelIndex : FDCInt32IdBase
{


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataItemPropertyTableRow
// Size: 0xA8(Inherited: 0x8)
struct FDesignDataItemPropertyTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataItemProperty> ItemProperty;  // 0x8 (0x8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataItemPropertyType> ItemPropertyType;  // 0x58 (0x58)


}; 
 
 // ScriptStruct DungeonCrawler.DCConnectionAlwaysRelevantNodePair
struct FDCConnectionAlwaysRelevantNodePair
{
	struct UNetConnection* NetConnection;  // 0x0 (0x0)
	struct UReplicationGraphNode_AlwaysRelevant_ForConnection* Node;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.CommemorativePlaqueTextWidget.SetCommemorativePlaqueText
struct FSetCommemorativePlaqueText
{
	struct FPrimaryAssetId ScriptId;  // 0x0 (0x0)
	struct FVector Location;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.TestItemInjectionWidgetBase.OnPropertySearchTextChanged
struct FOnPropertySearchTextChanged
{
	struct FText InText;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataLootDropRate
struct FDesignDataLootDropRate
{
	struct TArray<struct FDesignDataLootDropRateItem> LootDropRateItemArray;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCReportPlayerResultInfo
struct FDCReportPlayerResultInfo
{
	struct FNickname TargetNickname;  // 0x0 (0x0)
	struct FDateTime ProcessedDate;  // 0x28 (0x28)


}; 
 
 // ScriptStruct DungeonCrawler.MsgPlayPartyReadyStateChangedNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgPlayPartyReadyStateChangedNotify : FMsgBase
{
	uint8_t WidgetPartyUserLocate;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool bLeader : 1;  // 0x19 (0x19)
	char pad_26_1 : 7;  // 0x1A (0x1A)
	bool bReady : 1;  // 0x1A (0x1A)
	char pad_27[5];  // 0x1B (0x1B)


}; 
 
 // ScriptStruct DungeonCrawler.DCSpawnerItemData
struct FDCSpawnerItemData
{
	struct TSoftObjectPtr<UDCLootDropDataAsset> ItemHolderLootDropId;  // 0x0 (0x0)
	struct TSoftObjectPtr<UDCLootDropRateDataAsset> ItemHolderLootDropRateId;  // 0x30 (0x30)
	struct TSoftObjectPtr<UDCMonsterDataAsset> MonsterId;  // 0x60 (0x60)
	struct TSoftObjectPtr<UDCPropsDataAsset> PropsId;  // 0x90 (0x90)
	int32_t SpawnRate;  // 0xC0 (0xC0)
	char pad_196[4];  // 0xC4 (0xC4)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextHasHitResult
struct FDCEffectContextHasHitResult
{
	struct FDCGameplayEffectContext EffectContext;  // 0x0 (0x0)
	char pad_472_1 : 7;  // 0x1D8 (0x1D8)
	bool ReturnValue : 1;  // 0x1D8 (0x1D8)
	char pad_473[7];  // 0x1D9 (0x1D9)


}; 
 
 // ScriptStruct DungeonCrawler.DCGameLiftSessionId
// Size: 0x10(Inherited: 0x10)
struct FDCGameLiftSessionId : FDCStringIdBase
{


}; 
 
 // ScriptStruct DungeonCrawler.DCAbilityDataAsset
struct FDCAbilityDataAsset
{
	struct FPrimaryAssetId AbilityAssetId;  // 0x0 (0x0)
	uint8_t AbilityDataParam;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataMonster
struct FDesignDataMonster
{
	struct FText Name;  // 0x0 (0x0)
	struct FPrimaryAssetId ArtData;  // 0x18 (0x18)
	struct FPrimaryAssetId SoundData;  // 0x28 (0x28)
	ADCMonsterBase* ActorClass;  // 0x38 (0x38)
	struct TArray<struct FPrimaryAssetId> HitTagQueryData;  // 0x40 (0x40)
	struct TArray<struct FPrimaryAssetId> BeHitTagQueryData;  // 0x50 (0x50)
	struct TArray<struct FPrimaryAssetId> Abilities;  // 0x60 (0x60)
	struct TArray<struct FPrimaryAssetId> Effects;  // 0x70 (0x70)
	int32_t AdvPoint;  // 0x80 (0x80)
	int32_t ExpPoint;  // 0x84 (0x84)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataProps
struct FDesignDataProps
{
	struct FText Name;  // 0x0 (0x0)
	struct FPrimaryAssetId ArtData;  // 0x18 (0x18)
	struct FPrimaryAssetId SoundData;  // 0x28 (0x28)
	APropsActorBase* ActorClass;  // 0x38 (0x38)
	int32_t InteractionMinCount;  // 0x40 (0x40)
	int32_t InteractionMaxCount;  // 0x44 (0x44)
	struct TArray<struct FPrimaryAssetId> InteractionSettingDatas;  // 0x48 (0x48)
	struct TArray<struct FPrimaryAssetId> DestructibleTagQueryData;  // 0x58 (0x58)
	struct TArray<struct FPrimaryAssetId> Abilities;  // 0x68 (0x68)
	struct TArray<struct FPrimaryAssetId> Effects;  // 0x78 (0x78)
	int32_t AdvPoint;  // 0x88 (0x88)
	int32_t ExpPoint;  // 0x8C (0x8C)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAddEquippedItemActor
// Size: 0x20(Inherited: 0x18)
struct FMsgAddEquippedItemActor : FMsgBase
{
	struct AItemActor* EquippedItemActor;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataItem
struct FDesignDataItem
{
	struct FGameplayTag IdTag;  // 0x0 (0x0)
	struct FPrimaryAssetId OriginId;  // 0x8 (0x8)
	struct FText Name;  // 0x18 (0x18)
	struct FText FlavorText;  // 0x30 (0x30)
	struct FGameplayTag SlotType;  // 0x48 (0x48)
	struct FGameplayTag HandType;  // 0x50 (0x50)
	struct TArray<struct FGameplayTag> WeaponTypes;  // 0x58 (0x58)
	struct FGameplayTag ArmorType;  // 0x68 (0x68)
	struct FGameplayTag UtilityType;  // 0x70 (0x70)
	struct FGameplayTag AccessoryType;  // 0x78 (0x78)
	struct FGameplayTag MiscType;  // 0x80 (0x80)
	struct FGameplayTag RarityType;  // 0x88 (0x88)
	int32_t MaxCount;  // 0x90 (0x90)
	int32_t MaxAmmoCount;  // 0x94 (0x94)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool CanDrop : 1;  // 0x98 (0x98)
	char pad_153_1 : 7;  // 0x99 (0x99)
	bool CanSaveIntoDatabase : 1;  // 0x99 (0x99)
	char pad_154[2];  // 0x9A (0x9A)
	struct FPrimaryAssetId ArtData;  // 0x9C (0x9C)
	struct FPrimaryAssetId SoundData;  // 0xAC (0xAC)
	struct FPrimaryAssetId ConsumeData;  // 0xBC (0xBC)
	char pad_204[4];  // 0xCC (0xCC)
	AItemActor* ActorClass;  // 0xD0 (0xD0)
	AItemHolderActorBase* ItemHolderActorClass;  // 0xD8 (0xD8)
	int32_t InventoryWidth;  // 0xE0 (0xE0)
	int32_t InventoryHeight;  // 0xE4 (0xE4)
	float WearingDelayTime;  // 0xE8 (0xE8)
	char pad_236[4];  // 0xEC (0xEC)
	struct TArray<struct FPrimaryAssetId> SelfAbilities;  // 0xF0 (0xF0)
	struct TArray<struct FPrimaryAssetId> SelfEffects;  // 0x100 (0x100)
	struct TArray<struct FPrimaryAssetId> Abilities;  // 0x110 (0x110)
	struct TArray<struct FPrimaryAssetId> Effects;  // 0x120 (0x120)
	struct FPrimaryAssetId PrimaryProperty;  // 0x130 (0x130)
	struct TArray<struct FPrimaryAssetId> SecondaryProperties;  // 0x140 (0x140)
	struct FPrimaryAssetId Requirement;  // 0x150 (0x150)
	struct FPrimaryAssetId BundleInfo;  // 0x160 (0x160)
	struct FPrimaryAssetId ContainerData;  // 0x170 (0x170)
	int32_t AdvPoint;  // 0x180 (0x180)
	int32_t ExpPoint;  // 0x184 (0x184)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGASAttributeSetRequest
// Size: 0x18(Inherited: 0x18)
struct FMsgGASAttributeSetRequest : FMsgBase
{


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalHealBase
struct FOnRep_MagicalHealBase
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataItemPropertyType
struct FDesignDataItemPropertyType
{
	struct FGameplayTag PropertyType;  // 0x0 (0x0)
	struct FPrimaryAssetId PerkId;  // 0x8 (0x8)
	struct FPrimaryAssetId SkillId;  // 0x18 (0x18)
	struct FPrimaryAssetId SpellId;  // 0x28 (0x28)
	UGameplayEffect* EffectClass;  // 0x38 (0x38)
	struct FGameplayTag EffectType;  // 0x40 (0x40)
	float ValueRatio;  // 0x48 (0x48)
	int32_t PrimaryTooltipPriority;  // 0x4C (0x4C)
	int32_t SecondaryTooltipPriority;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataItemPropertyItem
struct FDesignDataItemPropertyItem
{
	struct FPrimaryAssetId PropertyTypeId;  // 0x0 (0x0)
	int32_t MinValue;  // 0x10 (0x10)
	int32_t MaxValue;  // 0x14 (0x14)
	int32_t PropertyRate;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.ItemActor.PreReduceAmmoCount
struct FPreReduceAmmoCount
{
	int32_t ReduceCount;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgPartySessionDataNotify
// Size: 0x38(Inherited: 0x18)
struct FMsgPartySessionDataNotify : FMsgBase
{
	struct FPartySessionData PartySessionData;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCTradePhaseDealWidget.OnResponseLocalTraderRequestRequestResult
struct FOnResponseLocalTraderRequestRequestResult
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bRequestSucceed : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataItemProperty
struct FDesignDataItemProperty
{
	struct TArray<struct FDesignDataItemPropertyItem> ItemPropertyItemArray;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.LeaderboardSeasonTimerData
struct FLeaderboardSeasonTimerData
{
	uint8_t LeaderboardState;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t SeasonDays;  // 0x4 (0x4)
	int32_t SeasonHours;  // 0x8 (0x8)
	int32_t SeasonMinutes;  // 0xC (0xC)
	int32_t SeasonSeconds;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CommonPopupSWidget.OnCreatePopup
struct FOnCreatePopup
{
	struct FPopupSWidgetData PopupSWidgetData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCharacterBase.OnCharacterMoved
struct FOnCharacterMoved
{
	float InDeltaSeconds;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector InOldLocation;  // 0x8 (0x8)
	struct FVector InOldVelocity;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataItemConsume
struct FDesignDataItemConsume
{
	struct FText ConsumeText;  // 0x0 (0x0)
	float ConsumeDuration;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataItemContainer
struct FDesignDataItemContainer
{
	struct FPrimaryAssetId ContentsItemId;  // 0x0 (0x0)
	int32_t MaxContentsCount;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataLootDrop
struct FDesignDataLootDrop
{
	struct TArray<struct FDesignDataLootDropItem> LootDropItemArray;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_MeleeAttackBase.ServerTargetDataReceived
struct FServerTargetDataReceived
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayTag InChannelTag;  // 0x8 (0x8)
	struct FGameplayEventData EventData;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataSkill
struct FDesignDataSkill
{
	struct FText Name;  // 0x0 (0x0)
	struct FPrimaryAssetId DescData;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool CanUse : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct TArray<struct FPrimaryAssetId> Classes;  // 0x30 (0x30)
	struct FGameplayTag SkillType;  // 0x40 (0x40)
	int32_t SkillTier;  // 0x48 (0x48)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool CanRecharge : 1;  // 0x4C (0x4C)
	char pad_77[3];  // 0x4D (0x4D)
	int32_t MaxCount;  // 0x50 (0x50)
	float CastingTime;  // 0x54 (0x54)
	float ChannelingDuration;  // 0x58 (0x58)
	float ChannelingInterval;  // 0x5C (0x5C)
	int32_t Range;  // 0x60 (0x60)
	char pad_100_1 : 7;  // 0x64 (0x64)
	bool UseMoving : 1;  // 0x64 (0x64)
	char pad_101_1 : 7;  // 0x65 (0x65)
	bool NeedAimTarget : 1;  // 0x65 (0x65)
	char pad_102[2];  // 0x66 (0x66)
	struct FGameplayTag SkillTag;  // 0x68 (0x68)
	struct FGameplayTag SkillCooldownTag;  // 0x70 (0x70)
	struct FPrimaryAssetId SkillCooldownEffect;  // 0x78 (0x78)
	struct FPrimaryAssetId ArtData;  // 0x88 (0x88)
	struct FPrimaryAssetId SoundData;  // 0x98 (0x98)
	struct TArray<struct FPrimaryAssetId> Abilities;  // 0xA8 (0xA8)
	struct TArray<struct FPrimaryAssetId> Effects;  // 0xB8 (0xB8)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemPropertyTypeTextMap
struct FGetItemPropertyTypeTextMap
{
	struct TMap<struct FGameplayTag, struct FText> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.AsyncTaskAttributeChanged.ListenForAttributesChange
struct FListenForAttributesChange
{
	struct UAbilitySystemComponent* AbilitySystemComponent;  // 0x0 (0x0)
	struct TArray<struct FGameplayAttribute> Attributes;  // 0x8 (0x8)
	struct UAsyncTaskAttributeChanged* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.SpawnAoeDeferred
struct FSpawnAoeDeferred
{
	struct ADCCharacterBase* DCCharacterBase;  // 0x0 (0x0)
	ADCAoeBase* AoeClass;  // 0x8 (0x8)
	struct UDCGameplayAbilityBase* DCGameplayAbilityBase;  // 0x10 (0x10)
	struct FGameplayEventData EventData;  // 0x18 (0x18)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool bSuccessfully : 1;  // 0xC8 (0xC8)
	char pad_201[7];  // 0xC9 (0xC9)
	struct ADCAoeBase* ReturnValue;  // 0xD0 (0xD0)


}; 
 
 // Function DungeonCrawler.SkillActor.GetDesignDataSkill
struct FGetDesignDataSkill
{
	struct FDesignDataSkill ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataSpawnerItem
struct FDesignDataSpawnerItem
{
	struct FPrimaryAssetId ItemHolderLootDropId;  // 0x0 (0x0)
	struct FPrimaryAssetId ItemHolderLootDropRateId;  // 0x10 (0x10)
	struct FPrimaryAssetId MonsterId;  // 0x20 (0x20)
	struct FPrimaryAssetId PropsId;  // 0x30 (0x30)
	int32_t SpawnRate;  // 0x40 (0x40)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataMusicMap
struct FGetDesignDataMusicMap
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataMusic> OutDesignDataMusicMap;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataMusic
struct FDesignDataMusic
{
	struct FText Name;  // 0x0 (0x0)
	struct FPrimaryAssetId Desc;  // 0x18 (0x18)
	struct TArray<struct FPrimaryAssetId> Classes;  // 0x28 (0x28)
	struct FGameplayTag PlayType;  // 0x38 (0x38)
	struct FGameplayTag SourceType;  // 0x40 (0x40)
	struct FGameplayTag TargetType;  // 0x48 (0x48)
	float PlayTime;  // 0x50 (0x50)
	float ChannelingDuration;  // 0x54 (0x54)
	float ChannelingInterval;  // 0x58 (0x58)
	int32_t BadRange;  // 0x5C (0x5C)
	int32_t GoodRange;  // 0x60 (0x60)
	int32_t PerfectRange;  // 0x64 (0x64)
	struct FGameplayTag MusicTag;  // 0x68 (0x68)
	struct FPrimaryAssetId ArtData;  // 0x70 (0x70)
	struct FPrimaryAssetId SoundData;  // 0x80 (0x80)
	struct FPrimaryAssetId PlayMusicData;  // 0x90 (0x90)
	struct TArray<struct FPrimaryAssetId> Abilities;  // 0xA0 (0xA0)
	struct TArray<struct FPrimaryAssetId> Effects;  // 0xB0 (0xB0)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnAirMagicalReduction
struct FOnAirMagicalReduction
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCGameStateBase.GetDungeonInfo
struct FGetDungeonInfo
{
	struct FDCDungeonInfo ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.SkillComponent.GetSkillDataByIndex
struct FGetSkillDataByIndex
{
	uint8_t SkillIndex;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FSkillData ReturnValue;  // 0x4 (0x4)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataPerk
struct FDesignDataPerk
{
	struct FText Name;  // 0x0 (0x0)
	struct FPrimaryAssetId DescData;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool CanUse : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct TArray<struct FPrimaryAssetId> Classes;  // 0x30 (0x30)
	float Radius;  // 0x40 (0x40)
	struct FPrimaryAssetId AllowIdTagGroup;  // 0x44 (0x44)
	struct FPrimaryAssetId NotAllowIdTagGroup;  // 0x54 (0x54)
	struct FPrimaryAssetId ArtData;  // 0x64 (0x64)
	char pad_116[4];  // 0x74 (0x74)
	struct TArray<struct FPrimaryAssetId> Abilities;  // 0x78 (0x78)
	struct TArray<struct FPrimaryAssetId> Effects;  // 0x88 (0x88)


}; 
 
 // ScriptStruct DungeonCrawler.ItemConsumeRandomEffectData
struct FItemConsumeRandomEffectData
{
	struct UDCGameplayEffectDataAsset* EffectDataAsset;  // 0x0 (0x0)
	int32_t RandomRate;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataDesc
struct FDesignDataDesc
{
	struct FText DescFormat;  // 0x0 (0x0)
	struct FString DescParam1;  // 0x18 (0x18)
	struct FString DescParam2;  // 0x28 (0x28)
	struct FString DescParam3;  // 0x38 (0x38)
	struct FString DescParam4;  // 0x48 (0x48)
	struct FString DescParam5;  // 0x58 (0x58)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataMeleeAttack
struct FDesignDataMeleeAttack
{
	float DamageRatio;  // 0x0 (0x0)
	float HitPlayRate;  // 0x4 (0x4)
	float HitPlayRateDuration;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool CanStuckByHitBox : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	float CharacterStuckPlayRate;  // 0x10 (0x10)
	float CharacterStuckPlayRateDuration;  // 0x14 (0x14)
	float CharacterStuckBlendOutTime;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool CanStuckByShield : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	float WeakShieldStuckPlayRate;  // 0x20 (0x20)
	float WeakShieldStuckPlayRateDuration;  // 0x24 (0x24)
	float WeakShieldStuckBlendOutTime;  // 0x28 (0x28)
	float MidShieldStuckPlayRate;  // 0x2C (0x2C)
	float MidShieldStuckPlayRateDuration;  // 0x30 (0x30)
	float MidShieldStuckBlendOutTime;  // 0x34 (0x34)
	float HeavyShieldStuckPlayRate;  // 0x38 (0x38)
	float HeavyShieldStuckPlayRateDuration;  // 0x3C (0x3C)
	float HeavyShieldStuckBlendOutTime;  // 0x40 (0x40)
	char pad_68_1 : 7;  // 0x44 (0x44)
	bool CanStuckByStaticObject : 1;  // 0x44 (0x44)
	char pad_69[3];  // 0x45 (0x45)
	float StaticObjectStuckPlayRate;  // 0x48 (0x48)
	float StaticObjectStuckPlayRateDuration;  // 0x4C (0x4C)
	float StaticObjectStuckBlendOutTime;  // 0x50 (0x50)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataBaseItem
struct FDesignDataBaseItem
{
	struct FPrimaryAssetId BaseItem1Id;  // 0x0 (0x0)
	int32_t BaseItem1Count;  // 0x10 (0x10)
	uint8_t BaseItem1Slot;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct FPrimaryAssetId BaseItem2Id;  // 0x18 (0x18)
	int32_t BaseItem2Count;  // 0x28 (0x28)
	uint8_t BaseItem2Slot;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)
	struct FPrimaryAssetId BaseItem3Id;  // 0x30 (0x30)
	int32_t BaseItem3Count;  // 0x40 (0x40)
	uint8_t BaseItem3Slot;  // 0x44 (0x44)
	char pad_69[3];  // 0x45 (0x45)
	struct FPrimaryAssetId BaseItem4Id;  // 0x48 (0x48)
	int32_t BaseItem4Count;  // 0x58 (0x58)
	uint8_t BaseItem4Slot;  // 0x5C (0x5C)
	char pad_93[3];  // 0x5D (0x5D)
	struct FPrimaryAssetId BaseItem5Id;  // 0x60 (0x60)
	int32_t BaseItem5Count;  // 0x70 (0x70)
	uint8_t BaseItem5Slot;  // 0x74 (0x74)
	char pad_117[3];  // 0x75 (0x75)
	struct FPrimaryAssetId BaseItem6Id;  // 0x78 (0x78)
	int32_t BaseItem6Count;  // 0x88 (0x88)
	uint8_t BaseItem6Slot;  // 0x8C (0x8C)
	char pad_141[3];  // 0x8D (0x8D)
	struct FPrimaryAssetId BaseItem7Id;  // 0x90 (0x90)
	int32_t BaseItem7Count;  // 0xA0 (0xA0)
	uint8_t BaseItem7Slot;  // 0xA4 (0xA4)
	char pad_165[3];  // 0xA5 (0xA5)
	struct FPrimaryAssetId BaseItem8Id;  // 0xA8 (0xA8)
	int32_t BaseItem8Count;  // 0xB8 (0xB8)
	uint8_t BaseItem8Slot;  // 0xBC (0xBC)
	char pad_189[3];  // 0xBD (0xBD)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataFloorRuleItem
struct FDesignDataFloorRuleItem
{
	float DeathSwarmSize;  // 0x0 (0x0)
	struct FGameplayTag DeathSwarmAbilityTag;  // 0x4 (0x4)
	int32_t DisplayPhaseDuration;  // 0xC (0xC)
	struct TArray<struct FPrimaryAssetId> DisplayPhaseFloorPortalArray;  // 0x10 (0x10)
	int32_t ShrinkPhaseDuration;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct TArray<struct FPrimaryAssetId> ShrinkPhaseFloorPortalArray;  // 0x28 (0x28)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool HideDeathSwarmTimer : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataFloorRule
struct FDesignDataFloorRule
{
	struct TArray<struct FDesignDataFloorRuleItem> FloorRuleItemArray;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCGameplayAbilityBase.ApplyEffectContainer
struct FApplyEffectContainer
{
	struct FGameplayTag ContainerTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)
	int32_t OverrideGameplayLevel;  // 0xB8 (0xB8)
	int32_t InCountToApply;  // 0xBC (0xBC)
	struct TArray<struct FActiveGameplayEffectHandle> ReturnValue;  // 0xC0 (0xC0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataMovementModifier
struct FDesignDataMovementModifier
{
	int32_t Add;  // 0x0 (0x0)
	float Multiply;  // 0x4 (0x4)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataMerchant
struct FDesignDataMerchant
{
	struct FText Name;  // 0x0 (0x0)
	struct FText GreetingText;  // 0x18 (0x18)
	struct FPrimaryAssetId ArtData;  // 0x30 (0x30)
	struct TArray<uint8_t> ServiceTypes;  // 0x40 (0x40)


}; 
 
 // Function DungeonCrawler.DCPostProcessingComponent.SetCameraPostProcess
struct FSetCameraPostProcess
{
	struct UMaterialInstanceDynamic* InMIDKey;  // 0x0 (0x0)
	struct UCurveFloat* InCurve;  // 0x8 (0x8)
	struct TArray<struct FName> InParameterNames;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetHitDirectionInfoNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgWidgetHitDirectionInfoNotify : FMsgBase
{
	struct FVector HitDirection;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.ServerMsgReConnectGameInfoResponse
// Size: 0x100(Inherited: 0x18)
struct FServerMsgReConnectGameInfoResponse : FMsgBase
{
	struct FAccountData AccountData;  // 0x18 (0x18)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool isSuccess : 1;  // 0xF8 (0xF8)
	char pad_249[7];  // 0xF9 (0xF9)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataStockSellBackItem
struct FDesignDataStockSellBackItem
{
	int64_t UniqueId;  // 0x0 (0x0)
	struct FText ConversationText;  // 0x8 (0x8)
	struct FPrimaryAssetId ItemId;  // 0x20 (0x20)
	int32_t ItemCount;  // 0x30 (0x30)
	struct FPrimaryAssetId ReceivedItemId_01;  // 0x34 (0x34)
	int32_t ReceivedAmount01;  // 0x44 (0x44)
	struct FPrimaryAssetId ReceivedItemId_02;  // 0x48 (0x48)
	int32_t ReceivedAmount02;  // 0x58 (0x58)
	struct FPrimaryAssetId ReceivedItemId_03;  // 0x5C (0x5C)
	int32_t ReceivedAmount03;  // 0x6C (0x6C)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataStockCraftItem
struct FDesignDataStockCraftItem
{
	int64_t UniqueId;  // 0x0 (0x0)
	struct FText ConversationText;  // 0x8 (0x8)
	struct FText CraftCompleteText;  // 0x20 (0x20)
	struct FPrimaryAssetId ItemId;  // 0x38 (0x38)
	struct FPrimaryAssetId RequiredItemId_01;  // 0x48 (0x48)
	int32_t RequiredAmount01;  // 0x58 (0x58)
	struct FPrimaryAssetId RequiredItemId_02;  // 0x5C (0x5C)
	int32_t RequiredAmount02;  // 0x6C (0x6C)
	struct FPrimaryAssetId RequiredItemId_03;  // 0x70 (0x70)
	int32_t RequiredAmount03;  // 0x80 (0x80)
	struct FPrimaryAssetId RequiredItemId_04;  // 0x84 (0x84)
	int32_t RequiredAmount04;  // 0x94 (0x94)
	struct FPrimaryAssetId RequiredItemId_05;  // 0x98 (0x98)
	int32_t RequiredAmount05;  // 0xA8 (0xA8)
	char pad_172[4];  // 0xAC (0xAC)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameTestClassSpellSlotMoveRequest
// Size: 0x38(Inherited: 0x18)
struct FMsgGameTestClassSpellSlotMoveRequest : FMsgBase
{
	int32_t RequestCommand;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FString SpellId;  // 0x20 (0x20)
	int32_t DstSlotIndex;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // Function DungeonCrawler.GA_RangedAttackBase.CreateProjectiles
struct FCreateProjectiles
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)
	float FirePower;  // 0xB8 (0xB8)
	char pad_188[4];  // 0xBC (0xBC)
	struct FVector StartLocation;  // 0xC0 (0xC0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataConstant
struct FDesignDataConstant
{
	float FloatValue;  // 0x0 (0x0)
	int32_t Int32Value;  // 0x4 (0x4)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataEmote
struct FDesignDataEmote
{
	struct FText Name;  // 0x0 (0x0)
	struct FText FlavorText;  // 0x18 (0x18)
	struct FGameplayTag EmoteTag;  // 0x30 (0x30)
	struct FPrimaryAssetId ArtData;  // 0x38 (0x38)
	struct TArray<struct FPrimaryAssetId> Abilities;  // 0x48 (0x48)
	struct TArray<struct FPrimaryAssetId> Effects;  // 0x58 (0x58)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnPrimaryWeaponImpactPower
struct FOnPrimaryWeaponImpactPower
{
	float NewValue;  // 0x0 (0x0)
	float OldValue;  // 0x4 (0x4)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextAddHitResult
struct FDCEffectContextAddHitResult
{
	struct FDCGameplayEffectContext EffectContext;  // 0x0 (0x0)
	struct FHitResult HitResult;  // 0x1D8 (0x1D8)
	char pad_704_1 : 7;  // 0x2C0 (0x2C0)
	bool bReset : 1;  // 0x2C0 (0x2C0)
	char pad_705[7];  // 0x2C1 (0x2C1)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_WeightLimitMod
struct FOnRep_WeightLimitMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgCharacterResurrectionRequest
// Size: 0xC0(Inherited: 0x18)
struct FMsgCharacterResurrectionRequest : FMsgBase
{
	struct FString ID;  // 0x18 (0x18)
	char pad_40[8];  // 0x28 (0x28)
	struct FTransform Transform;  // 0x30 (0x30)
	float SpawnDelay;  // 0x90 (0x90)
	char pad_148_1 : 7;  // 0x94 (0x94)
	bool bIsRemoveAllItem : 1;  // 0x94 (0x94)
	char pad_149[3];  // 0x95 (0x95)
	ACharacter* CharacterProduction;  // 0x98 (0x98)
	ADCCharacterBase* DCCharacterBase;  // 0xA0 (0xA0)
	struct TArray<struct FDCGameplayEffectData> InitGameplayEffectDataArray;  // 0xA8 (0xA8)
	char pad_184[8];  // 0xB8 (0xB8)


}; 
 
 // Function DungeonCrawler.DCShopCurrencyTypeSelectPopupBase.IsRedstoneShardSelected
struct FIsRedstoneShardSelected
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataIdTagGroupItem
struct FDesignDataIdTagGroupItem
{
	struct FGameplayTag IdTag;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPerkDataComponent.RemoveWearableWeaponList
struct FRemoveWearableWeaponList
{
	struct FGameplayTagContainer InWeaponList;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataDungeon
struct FDesignDataDungeon
{
	struct FText Name;  // 0x0 (0x0)
	uint8_t GameDifficultyType;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	int32_t Floor;  // 0x1C (0x1C)
	struct FPrimaryAssetId FloorRule;  // 0x20 (0x20)
	struct TSoftObjectPtr<UWorld> LevelAsset;  // 0x30 (0x30)
	int32_t TriumphExp;  // 0x60 (0x60)
	char pad_100[4];  // 0x64 (0x64)


}; 
 
 // ScriptStruct DungeonCrawler.MsgInventoryItemAmmoAddResponse
// Size: 0x20(Inherited: 0x18)
struct FMsgInventoryItemAmmoAddResponse : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bIsSucceed : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct DungeonCrawler.MsgLootingTargetPlayerInventoryNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgLootingTargetPlayerInventoryNotify : FMsgBase
{
	struct FLootingTargetPlayerInventory TargetPlayerInventory;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemPropertyTypeId_Unidentified
struct FGetItemPropertyTypeId_Unidentified
{
	struct FPrimaryAssetId ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataShop
struct FDesignDataShop
{
	struct FPrimaryAssetId StockData;  // 0x0 (0x0)
	int32_t Price;  // 0x10 (0x10)
	int32_t CashPrice;  // 0x14 (0x14)
	int32_t SortOrder;  // 0x18 (0x18)
	uint8_t SalesChannel;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct FPrimaryAssetId ArtData;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_ItemArmorRating
struct FOnRep_ItemArmorRating
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalHealBase
struct FOnPhysicalHealBase
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataChatRoom
struct FDesignDataChatRoom
{
	struct FText Name;  // 0x0 (0x0)
	int32_t Order;  // 0x18 (0x18)
	uint8_t ChatRoomCategoryType;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct TArray<struct FGameplayTag> AllowedItemLinkTypes;  // 0x20 (0x20)
	struct TArray<struct FPrimaryAssetId> AllowedItemLinkClassIds;  // 0x30 (0x30)
	struct FText AllowedAllowedItemLinkDesc;  // 0x40 (0x40)


}; 
 
 // Function DungeonCrawler.GA_PlayerSkillBase.ClientOnSkillActivate
struct FClientOnSkillActivate
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	struct FGameplayTag CooldownTag;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataLeaderboardSheet
struct FDesignDataLeaderboardSheet
{
	uint8_t GameDifficultyType;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct TArray<struct FPrimaryAssetId> LeaderboardContents;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.AttackInputManagerComponent.OnAbilityEnded
struct FOnAbilityEnded
{
	struct FAbilityEndedData AbilityEndedData;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataLeaderboard
struct FDesignDataLeaderboard
{
	struct TArray<struct FPrimaryAssetId> LeaderboardSheets;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCGameStateBase.OnRep_GameFloorRuleData
struct FOnRep_GameFloorRuleData
{
	struct FGameFloorRuleData InOldGameFloorRuleData;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgChangedItemArtData
// Size: 0x28(Inherited: 0x18)
struct FMsgChangedItemArtData : FMsgBase
{
	struct UItem* Item;  // 0x18 (0x18)
	struct UArtDataItem* NewItemArtData;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.GameTestComponent.ClientMsgClassSpellListResponse
struct FClientMsgClassSpellListResponse
{
	struct FMsgGameTestClassSpellListResponse InMsg;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataMonsterTableRow
// Size: 0xF8(Inherited: 0x8)
struct FDesignDataMonsterTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataMonster> Monster;  // 0x8 (0x8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayAbility> MonsterAbility;  // 0x58 (0x58)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayEffect> MonsterEffect;  // 0xA8 (0xA8)


}; 
 
 // Function DungeonCrawler.GA_PlayerSpellCastBase.CastingFinishEvent
struct FCastingFinishEvent
{
	struct FDesignDataSpell CurentDesignSpellData;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataAoeTableRow
// Size: 0xF8(Inherited: 0x8)
struct FDesignDataAoeTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataAoe> Aoe;  // 0x8 (0x8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayAbility> AoeAbility;  // 0x58 (0x58)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayEffect> AoeEffect;  // 0xA8 (0xA8)


}; 
 
 // Function DungeonCrawler.DCPlayerController.ServerDebugInjectItemToTarget
struct FServerDebugInjectItemToTarget
{
	struct TArray<struct FItemData> InItemDataArray;  // 0x0 (0x0)
	uint8_t TargetInventoryType;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassAddUnEquipSkillNotify
// Size: 0x28(Inherited: 0x18)
struct FMsgWidgetClassAddUnEquipSkillNotify : FMsgBase
{
	struct FPrimaryAssetId SkillId;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCMonsterBase.Fly
struct FFly
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataPropsTableRow
// Size: 0x198(Inherited: 0x8)
struct FDesignDataPropsTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataProps> Props;  // 0x8 (0x8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayAbility> PropsAbility;  // 0x58 (0x58)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayEffect> PropsEffect;  // 0xA8 (0xA8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataPropsInteract> PropsInteract;  // 0xF8 (0xF8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataPropsSkillCheck> PropsSkillCheck;  // 0x148 (0x148)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataItemTableRow
// Size: 0x238(Inherited: 0x8)
struct FDesignDataItemTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataItem> Item;  // 0x8 (0x8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayAbility> ItemAbility;  // 0x58 (0x58)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayEffect> ItemEffect;  // 0xA8 (0xA8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataItemConsume> ItemConsume;  // 0xF8 (0xF8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataItemRequirement> ItemRequirement;  // 0x148 (0x148)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataItemBundleInfo> ItemBundleInfo;  // 0x198 (0x198)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataItemContainer> ItemContainer;  // 0x1E8 (0x1E8)


}; 
 
 // Function DungeonCrawler.DCEquipmentSlotWidget.IsTwoHandedWeapon
struct FIsTwoHandedWeapon
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameTestClassLevelInfoRequest
// Size: 0x20(Inherited: 0x18)
struct FMsgGameTestClassLevelInfoRequest : FMsgBase
{
	int32_t RequestCommand;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataLootDropTableRow
// Size: 0xA8(Inherited: 0x8)
struct FDesignDataLootDropTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataLootDrop> LootDrop;  // 0x8 (0x8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataLootDropRate> LootDropRate;  // 0x58 (0x58)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.RemoveAggroAll
struct FRemoveAggroAll
{
	struct ADCCharacterBase* DCCharacterBase;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataSpawnerTableRow
// Size: 0x58(Inherited: 0x8)
struct FDesignDataSpawnerTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataSpawner> Spawner;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataMeleeAttackTableRow
// Size: 0x58(Inherited: 0x8)
struct FDesignDataMeleeAttackTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataMeleeAttack> MeleeAttack;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.GameFloorRuleData
struct FGameFloorRuleData
{
	int32_t FloorRuleIndex;  // 0x0 (0x0)
	float FloorRulePhaseServerWorldTime;  // 0x4 (0x4)
	uint8_t FloorRulePhase;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	float FloorRulePhaseDuration;  // 0xC (0xC)
	struct FGameDeathSwarmData GameDeathSwarmData;  // 0x10 (0x10)
	struct TArray<struct FGameFloorPortalData> ActiveFloorPortalDataArray;  // 0x50 (0x50)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataSkillTableRow
// Size: 0xF8(Inherited: 0x8)
struct FDesignDataSkillTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataSkill> Skill;  // 0x8 (0x8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayAbility> SkillAbility;  // 0x58 (0x58)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayEffect> SkillEffect;  // 0xA8 (0xA8)


}; 
 
 // Function DungeonCrawler.DCPlayerCharacterBase.GetPerkDataComponent
struct FGetPerkDataComponent
{
	struct UDCPerkDataComponent* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ProjectileActor.GetAddEffectToGroundHit
struct FGetAddEffectToGroundHit
{
	struct TArray<struct FPrimaryAssetId> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameSkillSlotWidget.OnUpdateSkillData
struct FOnUpdateSkillData
{
	struct FSkillData InSkillData;  // 0x0 (0x0)
	struct FDesignDataSkill InDesignDataSkill;  // 0x30 (0x30)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataSpellTableRow
// Size: 0xF8(Inherited: 0x8)
struct FDesignDataSpellTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataSpell> Spell;  // 0x8 (0x8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayAbility> SpellAbility;  // 0x58 (0x58)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayEffect> SpellEffect;  // 0xA8 (0xA8)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.IsSameTeamWithPlayerCharacter
struct FIsSameTeamWithPlayerCharacter
{
	struct AActor* SourcePlayerCharacter;  // 0x0 (0x0)
	struct AActor* TargetActor;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataPerkTableRow
// Size: 0xF8(Inherited: 0x8)
struct FDesignDataPerkTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataPerk> Perk;  // 0x8 (0x8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayAbility> PerkAbility;  // 0x58 (0x58)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayEffect> PerkEffect;  // 0xA8 (0xA8)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeedAdd
struct FOnRep_MoveSpeedAdd
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataActorStatusTableRow
// Size: 0x58(Inherited: 0x8)
struct FDesignDataActorStatusTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataGameplayEffect> StatusEffect;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetSetByCallerValueInAbilityIds
struct FGetSetByCallerValueInAbilityIds
{
	struct FGameplayTag InEventTag;  // 0x0 (0x0)
	struct FGameplayTag InSetByCallerDataTag;  // 0x8 (0x8)
	struct TArray<struct FPrimaryAssetId> InAbilities;  // 0x10 (0x10)
	float ReturnValue;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataMerchantTableRow
// Size: 0x198(Inherited: 0x8)
struct FDesignDataMerchantTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataMerchant> Merchant;  // 0x8 (0x8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataMerchantSchedule> MerchantSchedule;  // 0x58 (0x58)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataStockBuy> StockBuy;  // 0xA8 (0xA8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataStockSellBack> StockSellBack;  // 0xF8 (0xF8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataStockCraft> StockCraft;  // 0x148 (0x148)


}; 
 
 // Function DungeonCrawler.DCPostProcessingComponent.SetPlayPositionCameraPostProcess
struct FSetPlayPositionCameraPostProcess
{
	struct UMaterialInstanceDynamic* InMIDKey;  // 0x0 (0x0)
	float NewTime;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bFireEvents : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool bFireUpdate : 1;  // 0xD (0xD)
	char pad_14[2];  // 0xE (0xE)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataFloorRuleTableRow
// Size: 0xA8(Inherited: 0x8)
struct FDesignDataFloorRuleTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataFloorRule> FloorRule;  // 0x8 (0x8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataFloorPortal> FloorPortal;  // 0x58 (0x58)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataConstantTableRow
// Size: 0x58(Inherited: 0x8)
struct FDesignDataConstantTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataConstant> Constant;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataDungeonTableRow
// Size: 0x58(Inherited: 0x8)
struct FDesignDataDungeonTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataDungeon> Dungeon;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataChatTableRow
// Size: 0x58(Inherited: 0x8)
struct FDesignDataChatTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataChatRoom> ChatRoom;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetTradeBeginNotify
// Size: 0x50(Inherited: 0x18)
struct FMsgWidgetTradeBeginNotify : FMsgBase
{
	struct FText MyNickName;  // 0x18 (0x18)
	struct FText TargetNickname;  // 0x30 (0x30)
	int32_t TradeFee;  // 0x48 (0x48)
	int32_t ResetDuration;  // 0x4C (0x4C)


}; 
 
 // Function DungeonCrawler.DCLevelSequenceActor.ProcessSequence
struct FProcessSequence
{
	struct FGameplayTag InEventTag;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DesignDataLeaderboardTableRow
// Size: 0xF8(Inherited: 0x8)
struct FDesignDataLeaderboardTableRow : FTableRowBase
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataLeaderboard> Leaderboard;  // 0x8 (0x8)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataLeaderboardSheet> LeaderboardSheet;  // 0x58 (0x58)
	struct TMap<struct FPrimaryAssetId, struct FDesignDataLeaderboardContent> LeaderboardContent;  // 0xA8 (0xA8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetTradeChatUserListAddNotify
// Size: 0x38(Inherited: 0x18)
struct FMsgWidgetTradeChatUserListAddNotify : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bIsStart : 1;  // 0x18 (0x18)
	char pad_25[23];  // 0x19 (0x19)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bIsFinish : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // ScriptStruct DungeonCrawler.DevMsgGm
// Size: 0x38(Inherited: 0x18)
struct FDevMsgGm : FMsgBase
{
	struct FString Cmd;  // 0x18 (0x18)
	struct FString AccountId;  // 0x28 (0x28)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGASActorStatusRequest
// Size: 0x18(Inherited: 0x18)
struct FMsgGASActorStatusRequest : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.DevMsgUIToggle
// Size: 0x18(Inherited: 0x18)
struct FDevMsgUIToggle : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.DCEmoteSlotInfo
struct FDCEmoteSlotInfo
{
	struct FPrimaryAssetId EmoteId;  // 0x0 (0x0)
	int32_t SlotIndex;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCPlayerController.Announce_Client
struct FAnnounce_Client
{
	struct FGameAnnounceData AnnounceData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPlayerController.OnFMsgGameAnnounceNotifyClient
struct FOnFMsgGameAnnounceNotifyClient
{
	struct FGameAnnounceData InGameAnnounceData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.TopTitleWidgetBase.SetRightButtonText
struct FSetRightButtonText
{
	struct FText ButtonText;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgSample
// Size: 0x18(Inherited: 0x18)
struct FMsgSample : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.ItemInventorySize
struct FItemInventorySize
{
	int32_t Width;  // 0x0 (0x0)
	int32_t Height;  // 0x4 (0x4)


}; 
 
 // ScriptStruct DungeonCrawler.DCQuickSlotData
struct FDCQuickSlotData
{
	uint8_t Type;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t Index;  // 0x4 (0x4)


}; 
 
 // ScriptStruct DungeonCrawler.FunctionTrigger
struct FFunctionTrigger
{
	char pad_0[112];  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGameplayAbilityData
struct FGetGameplayAbilityData
{
	struct FDesignDataGameplayAbility InDesignDataGameplayAbility;  // 0x0 (0x0)
	struct FDCGameplayAbilityData OutGameplayAbilityData;  // 0x58 (0x58)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataPlayerCharacterMap
struct FGetDesignDataPlayerCharacterMap
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataPlayerCharacter> OutDesignDataPlayerCharacterMap;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCGameplayAbilityBase.RemoveMovementModifier
struct FRemoveMovementModifier
{
	struct FGameplayTagContainer ContainerTags;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.GameInteractionDescriptionWidgetData
struct FGameInteractionDescriptionWidgetData
{
	struct FInteractTargetData InteractTargetData;  // 0x0 (0x0)
	struct TMap<struct FGameplayTag, struct FInteractionData> InteractableDataByStateMap;  // 0x20 (0x20)
	uint8_t InputType;  // 0x70 (0x70)
	char pad_113[7];  // 0x71 (0x71)


}; 
 
 // ScriptStruct DungeonCrawler.InteractionData
struct FInteractionData
{
	struct FText InteractionName;  // 0x0 (0x0)
	struct FText InteractionText;  // 0x18 (0x18)
	struct UInteractData* InteractDataAsset;  // 0x30 (0x30)
	float Duration;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)
	struct FGameplayTagContainer InteractTypes;  // 0x40 (0x40)
	struct FGameplayTag TriggerTag;  // 0x60 (0x60)
	struct FGameplayTag AbilityTriggerTag;  // 0x68 (0x68)
	struct UTagQueryData* DetectTagQueryData;  // 0x70 (0x70)
	struct UTagQueryData* InteractTagQueryData;  // 0x78 (0x78)
	struct FPrimaryAssetId SkillCheckDataId;  // 0x80 (0x80)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassItemMoveResponseNotify
// Size: 0x60(Inherited: 0x18)
struct FMsgWidgetClassItemMoveResponseNotify : FMsgBase
{
	int32_t Result;  // 0x18 (0x18)
	char pad_28[68];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameAISet
// Size: 0x20(Inherited: 0x18)
struct FMsgGameAISet : FMsgBase
{
	struct UBehaviorTree* BehaviorTree;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetMailBoxNewAlarmNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetMailBoxNewAlarmNotify : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.LoginWidgetHandleData
struct FLoginWidgetHandleData
{
	uint8_t AgeRatingType;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.GameAnnounceData
struct FGameAnnounceData
{
	struct FText FormatText;  // 0x0 (0x0)
	struct FText ParamText_1;  // 0x18 (0x18)
	struct FText ParamText_2;  // 0x30 (0x30)
	struct FText ParamText_3;  // 0x48 (0x48)
	struct FText ParamText_4;  // 0x60 (0x60)
	struct FText ParamText_5;  // 0x78 (0x78)


}; 
 
 // Function DungeonCrawler.AsyncTaskCooldownChanged.ListenForCooldownChange
struct FListenForCooldownChange
{
	struct UAbilitySystemComponent* AbilitySystemComponent;  // 0x0 (0x0)
	struct FGameplayTagContainer CooldownTags;  // 0x8 (0x8)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool UseServerCooldown : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct UAsyncTaskCooldownChanged* ReturnValue;  // 0x30 (0x30)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameStateNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgGameStateNotify : FMsgBase
{
	struct FGameStateData GameStateData;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.GameStateData
struct FGameStateData
{
	uint8_t GameState;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float ServerWorldTime;  // 0x4 (0x4)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameFloorRuleNotify
// Size: 0x78(Inherited: 0x18)
struct FMsgGameFloorRuleNotify : FMsgBase
{
	struct FGameFloorRuleData GameFloorRuleData;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgDungeonInfoNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgDungeonInfoNotify : FMsgBase
{


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnWaterMagicResistance
struct FOnWaterMagicResistance
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGASGameplayTagContainerRequest
// Size: 0x18(Inherited: 0x18)
struct FMsgGASGameplayTagContainerRequest : FMsgBase
{


}; 
 
 // Function DungeonCrawler.DCAT_WaitVelocityChange.WaitVelocityChange
struct FWaitVelocityChange
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	float MinimumMagnitude;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct UDCAT_WaitVelocityChange* ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.GameUserSettingAudiosVoipPartyMember
struct FGameUserSettingAudiosVoipPartyMember
{
	struct FString AccountId;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bMute : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	float ReceiveVolume;  // 0x14 (0x14)


}; 
 
 // ScriptStruct DungeonCrawler.SpellData
struct FSpellData
{
	struct FPrimaryAssetId SpellId;  // 0x0 (0x0)
	struct FGameplayTag SpellTag;  // 0x10 (0x10)
	struct FGameplayTag CostType;  // 0x18 (0x18)
	int32_t CostAmount;  // 0x20 (0x20)
	int32_t Count;  // 0x24 (0x24)
	int32_t RequiredChargeAmount;  // 0x28 (0x28)
	int32_t ChargeAmount;  // 0x2C (0x2C)
	int32_t SlotIndex;  // 0x30 (0x30)
	int32_t SequenceIndex;  // 0x34 (0x34)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bIsCapacityOverloaded : 1;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)


}; 
 
 // Function DungeonCrawler.EquipmentInventoryGroupWidget.OnDragOverChestSlot
struct FOnDragOverChestSlot
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsDragOver : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGASGameplayTagContainerResponse
// Size: 0x38(Inherited: 0x18)
struct FMsgGASGameplayTagContainerResponse : FMsgBase
{
	struct FGameplayTagContainer GameplayTagContainer;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCMonsterAIController.OnTargetPerceptionUpdated
struct FOnTargetPerceptionUpdated
{
	struct AActor* Actor;  // 0x0 (0x0)
	struct FAIStimulus Stimulus;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGASGameplayTagNotify
// Size: 0x48(Inherited: 0x18)
struct FMsgGASGameplayTagNotify : FMsgBase
{
	struct FGameplayTagContainer GameplayTagContainer;  // 0x18 (0x18)
	struct FGameplayTag GameplayTag;  // 0x38 (0x38)
	int32_t Count;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGASImpactEnduranceExhaustedNotify
// Size: 0x200(Inherited: 0x18)
struct FMsgGASImpactEnduranceExhaustedNotify : FMsgBase
{
	float ExhaustedTime;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	UGameplayEffect* GameplayEffectClass;  // 0x20 (0x20)
	struct FDCGameplayEffectContext EffectContext;  // 0x28 (0x28)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGASInstigatorDataResponse
// Size: 0x68(Inherited: 0x18)
struct FMsgGASInstigatorDataResponse : FMsgBase
{
	struct FInstigatorData InstigatorData;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGASEffectCauserDataRequest
// Size: 0x18(Inherited: 0x18)
struct FMsgGASEffectCauserDataRequest : FMsgBase
{


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GiveAbilities
struct FGiveAbilities
{
	struct UObject* SourceObject;  // 0x0 (0x0)
	struct AActor* InActor;  // 0x8 (0x8)
	struct TArray<struct FDCGameplayAbilityData> InGameplayAbilityDataArray;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bTriggerOnlyOnce : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct TArray<struct FGameplayAbilitySpecHandle> ReturnValue;  // 0x28 (0x28)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGASEffectCauserDataResponse
// Size: 0x30(Inherited: 0x18)
struct FMsgGASEffectCauserDataResponse : FMsgBase
{
	struct FEffectCauserData EffectCauserData;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.GameplayAbilityRelationshipItem
struct FGameplayAbilityRelationshipItem
{
	struct FGameplayTag AbilityTag;  // 0x0 (0x0)
	struct FGameplayTagContainer AbilityTagsToBlock;  // 0x8 (0x8)
	struct FGameplayTagContainer AbilityTagsToCancel;  // 0x28 (0x28)
	struct FGameplayTagContainer ActivationRequiredTags;  // 0x48 (0x48)
	struct FGameplayTagContainer ActivationBlockedTags;  // 0x68 (0x68)
	struct FGameplayTagContainer ActivationCancelingTags;  // 0x88 (0x88)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameTestChangePlayerCharacterClassRequest
// Size: 0x28(Inherited: 0x18)
struct FMsgGameTestChangePlayerCharacterClassRequest : FMsgBase
{
	struct FPrimaryAssetId PlayerCharacterId;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameTestChangePlayerCharacterClassResponse
// Size: 0x18(Inherited: 0x18)
struct FMsgGameTestChangePlayerCharacterClassResponse : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameTestClassPerkListResponse
// Size: 0x28(Inherited: 0x18)
struct FMsgGameTestClassPerkListResponse : FMsgBase
{
	struct TArray<struct FAccountDataPerk> Perks;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameTestClassSkillListRequest
// Size: 0x20(Inherited: 0x18)
struct FMsgGameTestClassSkillListRequest : FMsgBase
{
	int32_t RequestCommand;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameTestClassSkillListResponse
// Size: 0x28(Inherited: 0x18)
struct FMsgGameTestClassSkillListResponse : FMsgBase
{
	struct TArray<struct FAccountDataSkill> Skills;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameTestClassSpellListRequest
// Size: 0x20(Inherited: 0x18)
struct FMsgGameTestClassSpellListRequest : FMsgBase
{
	int32_t RequestCommand;  // 0x18 (0x18)
	int32_t MaxSpellMemory;  // 0x1C (0x1C)


}; 
 
 // Function DungeonCrawler.CharacterStatusWidget.OnUtilityEffectivenessAdd
struct FOnUtilityEffectivenessAdd
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // [x10 ([x10)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameTestClassItemMoveRequest
// Size: 0x90(Inherited: 0x18)
struct FMsgGameTestClassItemMoveRequest : FMsgBase
{
	int32_t RequestCommand;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FMsgGameClassMoveInfo OldMove;  // 0x20 (0x20)
	struct FMsgGameClassMoveInfo NewMove;  // 0x58 (0x58)


}; 
 
 // Function DungeonCrawler.ChatWidgetBase.OnChatRecordData
struct FOnChatRecordData
{
	struct FChatRecord NewValue;  // 0x0 (0x0)
	struct FChatRecord OldValue;  // 0x78 (0x78)


}; 
 
 // ScriptStruct DungeonCrawler.MsgShowSystemMessage
// Size: 0x30(Inherited: 0x18)
struct FMsgShowSystemMessage : FMsgBase
{
	struct FText MessageToShow;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameTestClassItemMoveResponse
// Size: 0x90(Inherited: 0x18)
struct FMsgGameTestClassItemMoveResponse : FMsgBase
{
	int32_t Result;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FMsgGameClassMoveInfo OldMove;  // 0x20 (0x20)
	struct FMsgGameClassMoveInfo NewMove;  // 0x58 (0x58)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameTestClassMusicListRequest
// Size: 0x20(Inherited: 0x18)
struct FMsgGameTestClassMusicListRequest : FMsgBase
{
	int32_t RequestCommand;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameTestClassMusicListResponse
// Size: 0x28(Inherited: 0x18)
struct FMsgGameTestClassMusicListResponse : FMsgBase
{
	struct TArray<struct FAccountDataMusic> Musics;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_HeadshotReductionMod
struct FOnRep_HeadshotReductionMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameTestClassMusicSlotMoveRequest
// Size: 0x38(Inherited: 0x18)
struct FMsgGameTestClassMusicSlotMoveRequest : FMsgBase
{
	int32_t RequestCommand;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FString MusicId;  // 0x20 (0x20)
	int32_t DstSlotIndex;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // ScriptStruct DungeonCrawler.MsgGameTestClassMusicSlotMoveResponse
// Size: 0x30(Inherited: 0x18)
struct FMsgGameTestClassMusicSlotMoveResponse : FMsgBase
{
	int32_t Result;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct TArray<struct FAccountDataMusic> EquipMusicList;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCPlayerBlueprintFunctionLibrary.GetCurrentPlayerPawn
struct FGetCurrentPlayerPawn
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct APawn* ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.DCGameInfo
struct FDCGameInfo
{
	int64_t GameId;  // 0x0 (0x0)
	int32_t MaxGameUser;  // 0x8 (0x8)
	int32_t WaitGameTimeSec;  // 0xC (0xC)
	uint8_t GameDifficultyType;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct TArray<struct UDCDungeonDataAsset*> DungeonDraws;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bFloorMatchmaking : 1;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	int32_t MatchmakingType;  // 0x2C (0x2C)


}; 
 
 // ScriptStruct DungeonCrawler.DCDungeonInfo
struct FDCDungeonInfo
{
	int32_t GameTimeSec;  // 0x0 (0x0)
	float GameTimeSecServerWorldTime;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool HideDeathSwarmTimer : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // ScriptStruct DungeonCrawler.ObjectLinkResponeEvent
struct FObjectLinkResponeEvent
{
	struct FGameplayTag SrcTypeTag;  // 0x0 (0x0)
	struct FObjectLinkMetaData MetaData;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_StrengthBase
struct FOnRep_StrengthBase
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.GameUserSettingControls
struct FGameUserSettingControls
{
	float MouseSensitivity;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool IsInvertVerticalAxis : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool IsInvertHorizontalAxis : 1;  // 0x5 (0x5)
	char pad_6[2];  // 0x6 (0x6)
	struct FString culture;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bIgnoreInvitation : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool bStreamingMode : 1;  // 0x19 (0x19)
	char pad_26[2];  // 0x1A (0x1A)
	int32_t RegionIndex;  // 0x1C (0x1C)
	int32_t GameDifficultyTypeIndex;  // 0x20 (0x20)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool bAutoFillUtilitySlot : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)


}; 
 
 // ScriptStruct DungeonCrawler.GameUserSettingVideoDisplay
struct FGameUserSettingVideoDisplay
{
	int32_t ShadowQuality;  // 0x0 (0x0)
	int32_t EffectsQuality;  // 0x4 (0x4)
	int32_t PostProcessQuality;  // 0x8 (0x8)
	int32_t TextureQuality;  // 0xC (0xC)
	int32_t DisplayMode;  // 0x10 (0x10)
	int32_t ResolutionIndex;  // 0x14 (0x14)
	float FrameRateLimit;  // 0x18 (0x18)
	float FrameRateLimitMeta;  // 0x1C (0x1C)
	float GammaValue;  // 0x20 (0x20)
	int32_t AntiAliasingSuperResolution;  // 0x24 (0x24)
	float RenderScale;  // 0x28 (0x28)
	int32_t SuperResolutionModeTSR;  // 0x2C (0x2C)
	int32_t SuperResolutionModeDLSS;  // 0x30 (0x30)
	int32_t SuperResolutionModeFSR2;  // 0x34 (0x34)
	int32_t SuperResolutionModeXeSS;  // 0x38 (0x38)


}; 
 
 // ScriptStruct DungeonCrawler.MsgItemIdNotify
// Size: 0x28(Inherited: 0x18)
struct FMsgItemIdNotify : FMsgBase
{
	struct FDCItemId ItemId;  // 0x18 (0x18)
	uint8_t Inventory;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	int32_t Index;  // 0x24 (0x24)


}; 
 
 // ScriptStruct DungeonCrawler.GameUserSettingAudios
struct FGameUserSettingAudios
{
	float TotalVolume;  // 0x0 (0x0)
	float EffectVolume;  // 0x4 (0x4)
	float MusicVolume;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool IsBackgroundVolume : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool bVoipEnable : 1;  // 0xD (0xD)
	char pad_14_1 : 7;  // 0xE (0xE)
	bool bVoipGlobal : 1;  // 0xE (0xE)
	char pad_15_1 : 7;  // 0xF (0xF)
	bool bVoipSendAlways : 1;  // 0xF (0xF)
	float VoipInputVolume;  // 0x10 (0x10)
	float VoipOutputVolume;  // 0x14 (0x14)
	struct TArray<struct FGameUserSettingAudiosVoipPartyMember> VoipPartyMemberSettingArray;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetRemoveItemFromDealTable
// Size: 0xB8(Inherited: 0x18)
struct FMsgWidgetRemoveItemFromDealTable : FMsgBase
{
	struct FItemData ItemData;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.DCDrinkItemConsumeData
struct FDCDrinkItemConsumeData
{
	struct FPrimaryAssetId DurationConstantId;  // 0x0 (0x0)
	uint8_t DurationConstantType;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	struct FPrimaryAssetId EffectConstantId;  // 0x14 (0x14)
	uint8_t EffecConstantType;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalHealMod
struct FOnRep_MagicalHealMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgInteractSucceed
// Size: 0x118(Inherited: 0x18)
struct FMsgInteractSucceed : FMsgBase
{
	struct AActor* Interacter;  // 0x18 (0x18)
	struct FGameplayTag StateTag;  // 0x20 (0x20)
	struct FGameplayTag TriggerTag;  // 0x28 (0x28)
	struct FHitResult HitResult;  // 0x30 (0x30)


}; 
 
 // ScriptStruct DungeonCrawler.MsgInteractLost
// Size: 0x20(Inherited: 0x18)
struct FMsgInteractLost : FMsgBase
{
	struct AActor* Interacter;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCEnhancedInputLibrary.GetActionValueByTags
struct FGetActionValueByTags
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FGameplayTag InputConfigTag;  // 0x8 (0x8)
	struct FGameplayTag InputTag;  // 0x10 (0x10)
	struct FInputActionValue ReturnValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetGameGroupVisibilityRequest
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetGameGroupVisibilityRequest : FMsgBase
{
	uint8_t WidgetGameGroupType;  // 0x18 (0x18)
	uint8_t NewVisibility;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)


}; 
 
 // ScriptStruct DungeonCrawler.MsgInteractDataSet
// Size: 0x88(Inherited: 0x18)
struct FMsgInteractDataSet : FMsgBase
{
	struct FInteractTargetData InteractTargetData;  // 0x18 (0x18)
	struct TMap<struct FGameplayTag, struct FInteractionData> InteractableDataByStateMap;  // 0x38 (0x38)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SortTargetsByDistanceAndPickTarget
struct FSortTargetsByDistanceAndPickTarget
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x8 (0x8)
	uint8_t MonsterFilterSortingType;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	int32_t Index;  // 0x1C (0x1C)
	struct ADCCharacterBase* ReturnValue;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgChangedItemRequirementFulfillmentStatus
// Size: 0x20(Inherited: 0x18)
struct FMsgChangedItemRequirementFulfillmentStatus : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bFulfilled : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.ContainerInventoryWidget.OnAddItem
struct FOnAddItem
{
	struct FItemData InItemData;  // 0x0 (0x0)
	struct UItemWidget* ReturnValue;  // 0xA0 (0xA0)


}; 
 
 // ScriptStruct DungeonCrawler.SkillCheckData
struct FSkillCheckData
{
	struct FGameplayTag SkillCheckType;  // 0x0 (0x0)
	float Duration;  // 0x8 (0x8)
	float SucceedSectionStartTime;  // 0xC (0xC)
	float SucceedSectionEndTime;  // 0x10 (0x10)
	float PerfectSucceedSectionStartTime;  // 0x14 (0x14)
	float PerfectSucceedSectionEndTime;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.Item.Initialize
struct FInitialize
{
	struct FItemData Data;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgInteractableHighlightNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgInteractableHighlightNotify : FMsgBase
{
	int32_t HighlightDepthValue;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct DungeonCrawler.MsgRemoveContainingItemResponse
// Size: 0x20(Inherited: 0x18)
struct FMsgRemoveContainingItemResponse : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bSuccess : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct DungeonCrawler.MsgReduceContainingItemRequest
// Size: 0x30(Inherited: 0x18)
struct FMsgReduceContainingItemRequest : FMsgBase
{
	int32_t InventoryId;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	int64_t ItemUniqueId;  // 0x20 (0x20)
	int32_t ReduceCount;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // ScriptStruct DungeonCrawler.MsgReduceContainingItemResponse
// Size: 0x20(Inherited: 0x18)
struct FMsgReduceContainingItemResponse : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bSucceed : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnMoveSpeedMod
struct FOnMoveSpeedMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.MsgPartySessionNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgPartySessionNotify : FMsgBase
{
	struct UPartySession* PartySession;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnArcaneMagicalReduction
struct FOnArcaneMagicalReduction
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.LoadObjectLibrary
struct FLoadObjectLibrary
{
	struct FString Path;  // 0x0 (0x0)
	UObject* ObjectClass;  // 0x10 (0x10)
	struct TArray<struct UObject*> ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.InteractableTargetComponent.RegisterInteracter
struct FRegisterInteracter
{
	struct AActor* InteractingActor;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAddContainingItemRequest
// Size: 0xC8(Inherited: 0x18)
struct FMsgAddContainingItemRequest : FMsgBase
{
	int32_t InventoryId;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FItemData ItemData;  // 0x20 (0x20)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool BySystem : 1;  // 0xC0 (0xC0)
	char pad_193_1 : 7;  // 0xC1 (0xC1)
	bool bNoStack : 1;  // 0xC1 (0xC1)
	char pad_194[6];  // 0xC2 (0xC2)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAddContainingItemResponse
// Size: 0x20(Inherited: 0x18)
struct FMsgAddContainingItemResponse : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bSuccess : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	int32_t SlotId;  // 0x1C (0x1C)


}; 
 
 // ScriptStruct DungeonCrawler.MsgRemoveAllContainingItem
// Size: 0x20(Inherited: 0x18)
struct FMsgRemoveAllContainingItem : FMsgBase
{
	int32_t InventoryId;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function DungeonCrawler.AsyncTaskWaitGAActivated.WaitForAbilityActivateWithTagRequirements
struct FWaitForAbilityActivateWithTagRequirements
{
	struct AActor* TargetActor;  // 0x0 (0x0)
	struct FGameplayTagRequirements TagRequirements;  // 0x8 (0x8)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool IncludeTriggeredAbilities : 1;  // 0x48 (0x48)
	char pad_73_1 : 7;  // 0x49 (0x49)
	bool TriggerOnce : 1;  // 0x49 (0x49)
	char pad_74[6];  // 0x4A (0x4A)
	struct UAsyncTaskWaitGAActivated* ReturnValue;  // 0x50 (0x50)


}; 
 
 // ScriptStruct DungeonCrawler.MsgSlotItemDataRequest
// Size: 0x20(Inherited: 0x18)
struct FMsgSlotItemDataRequest : FMsgBase
{
	int32_t InventoryId;  // 0x18 (0x18)
	int32_t SlotId;  // 0x1C (0x1C)


}; 
 
 // ScriptStruct DungeonCrawler.MsgSpellChannelingEnd
// Size: 0x18(Inherited: 0x18)
struct FMsgSpellChannelingEnd : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgSlotItemDataResponse
// Size: 0x30(Inherited: 0x18)
struct FMsgSlotItemDataResponse : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bItemSet : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct TArray<struct FItemData> ItemDataArray;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgEnableSwapItemRequest
// Size: 0xD0(Inherited: 0x18)
struct FMsgEnableSwapItemRequest : FMsgBase
{
	int32_t TargetInventoryId;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FItemData RemoveItemData;  // 0x20 (0x20)
	struct TArray<struct FItemData> AddItemDataArray;  // 0xC0 (0xC0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_DarkMagicResistance
struct FOnRep_DarkMagicResistance
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgContainingItemDataRequest
// Size: 0x20(Inherited: 0x18)
struct FMsgContainingItemDataRequest : FMsgBase
{
	int64_t ItemUniqueId;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.LeaderboardWidgetHandleData
struct FLeaderboardWidgetHandleData
{
	struct FLeaderboardSeasonTimerData LeaderboardSeasonTimerData;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgContainingItemDataResponse
// Size: 0xD0(Inherited: 0x18)
struct FMsgContainingItemDataResponse : FMsgBase
{
	struct UEquipmentInventoryComponent* EquipmentInventoryComponent;  // 0x18 (0x18)
	uint8_t EquipmentQuickSlotType;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct UInventoryComponent* InventoryComponent;  // 0x28 (0x28)
	struct FItemData ItemData;  // 0x30 (0x30)


}; 
 
 // ScriptStruct DungeonCrawler.MsgEnableSwapItemResponse
// Size: 0x30(Inherited: 0x18)
struct FMsgEnableSwapItemResponse : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bCanSwap : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct TArray<struct FItemData> SwapItemDataArray;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.ProjectileActor.SetAddEffectToGroundtHit
struct FSetAddEffectToGroundtHit
{
	struct TArray<struct FPrimaryAssetId> AddEffectList;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgSetEquippedWeaponsVisibility
// Size: 0x40(Inherited: 0x18)
struct FMsgSetEquippedWeaponsVisibility : FMsgBase
{
	struct FGameplayTagContainer IgnoreTypes;  // 0x18 (0x18)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bIsHide : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


}; 
 
 // Function DungeonCrawler.EquipmentWeaponSlotSetWidget.CheckAndSetActiveHoverImageBySlot
struct FCheckAndSetActiveHoverImageBySlot
{
	struct UWidget* SlotUnderPointerPosition;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgSetLootingTargetPlayerInventory
// Size: 0x30(Inherited: 0x18)
struct FMsgSetLootingTargetPlayerInventory : FMsgBase
{
	struct FLootingTargetPlayerInventory TargetPlayerInventory;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.EquipmentInventoryComponent.GetCurrentHoldingItemData
struct FGetCurrentHoldingItemData
{
	struct FItemData ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnFireMagicalReductionMagicResistance
struct FOnFireMagicalReductionMagicResistance
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.RemoveGameplayTag
struct FRemoveGameplayTag
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct FGameplayTag InGameplayTag;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct DungeonCrawler.LootingTargetPlayerInventory
struct FLootingTargetPlayerInventory
{
	struct UEquipmentInventoryComponent* EquipmentInventory;  // 0x0 (0x0)
	struct TArray<struct UInventoryComponent*> ContainerInventoryArray;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgEnableAddItemRequest
// Size: 0x30(Inherited: 0x18)
struct FMsgEnableAddItemRequest : FMsgBase
{
	int32_t TargetInventoryId;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct TArray<struct FItemData> AddItemDataArray;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCMerchantDealTableSellWidget.GetPrice
struct FGetPrice
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgEnableAddItemResponse
// Size: 0x30(Inherited: 0x18)
struct FMsgEnableAddItemResponse : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bCanAdd : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool bInvalidRequest : 1;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)
	struct TArray<struct FItemData> ResultItemDataArray;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgInventoryItemAmmoAddRequest
// Size: 0x30(Inherited: 0x18)
struct FMsgInventoryItemAmmoAddRequest : FMsgBase
{
	int32_t InventoryId;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	int64_t ItemUniqueId;  // 0x20 (0x20)
	int32_t Count;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsWidget.OnGameplayButtonChecked
struct FOnGameplayButtonChecked
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsChecked : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetChangeCrossHairInfoNotify
// Size: 0x38(Inherited: 0x18)
struct FMsgWidgetChangeCrossHairInfoNotify : FMsgBase
{
	struct TArray<struct FGameplayTag> WeaponTypeTags;  // 0x18 (0x18)
	float ChangeAngle;  // 0x28 (0x28)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool OnPinPoint : 1;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)
	float RotateTime;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // Function DungeonCrawler.GameSpellSlotWidget.GetSpellChargedPercent
struct FGetSpellChargedPercent
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgInventoryItemAmmoReduceRequest
// Size: 0x30(Inherited: 0x18)
struct FMsgInventoryItemAmmoReduceRequest : FMsgBase
{
	int32_t InventoryId;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	int64_t ItemUniqueId;  // 0x20 (0x20)
	int32_t Count;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // Function DungeonCrawler.CharacterStatusWidget.OnUtilityEffectiveness
struct FOnUtilityEffectiveness
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.MsgMoveItem
// Size: 0xD8(Inherited: 0x18)
struct FMsgMoveItem : FMsgBase
{
	struct AActor* OldOwner;  // 0x18 (0x18)
	struct FItemData OldItemData;  // 0x20 (0x20)
	struct AActor* NewOwner;  // 0xC0 (0xC0)
	struct TArray<struct FItemData> NewItemDataArray;  // 0xC8 (0xC8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetMoveItem
// Size: 0xD8(Inherited: 0x18)
struct FMsgWidgetMoveItem : FMsgBase
{
	struct AActor* OldOwner;  // 0x18 (0x18)
	struct FItemData OldItemData;  // 0x20 (0x20)
	struct AActor* NewOwner;  // 0xC0 (0xC0)
	struct TArray<struct FItemData> NewItemDataArray;  // 0xC8 (0xC8)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalShield
struct FOnRep_PhysicalShield
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCharacterBase.OnQuickSlotClicked
struct FOnQuickSlotClicked
{
	uint8_t SlotType;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.TimerWidgetBase.StartTimer
struct FStartTimer
{
	float InEndServerWorldTime;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DesignDataAssetItemRequirement.GetUnmetItemRequirementsTarget
struct FGetUnmetItemRequirementsTarget
{
	struct AActor* TargetActor;  // 0x0 (0x0)
	struct TArray<uint8_t> ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgCurrentEquippedItemActorsRequest
// Size: 0x18(Inherited: 0x18)
struct FMsgCurrentEquippedItemActorsRequest : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgCurrentEquippedItemActorsResponse
// Size: 0x28(Inherited: 0x18)
struct FMsgCurrentEquippedItemActorsResponse : FMsgBase
{
	struct TArray<struct AItemActor*> EquippedItemActors;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.PlayWidget.OnUpdateLobbyCharacterData
struct FOnUpdateLobbyCharacterData
{
	struct FLobbyCharacterInfo LobbyInfo;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ClassSkillListWidgetBase.GetSelectedSlotIndex
struct FGetSelectedSlotIndex
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAT_MoveWithInputVectorCurve.MoveWithInputVectorCurve
struct FMoveWithInputVectorCurve
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FVector DestLocation;  // 0x8 (0x8)
	struct UCurveVector* InVelocityVector;  // 0x20 (0x20)
	float DistanceTolerance;  // 0x28 (0x28)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool bShouldTeleportWhenFinished : 1;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)
	struct UDCAT_MoveWithInputVectorCurve* ReturnValue;  // 0x30 (0x30)


}; 
 
 // ScriptStruct DungeonCrawler.MsgUsingItemUniqueFunction
// Size: 0x28(Inherited: 0x18)
struct FMsgUsingItemUniqueFunction : FMsgBase
{
	int32_t InventoryId;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	int64_t ItemUniqueId;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.CallData
struct FCallData
{
	struct TArray<char> Data;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAddToInventory
// Size: 0x30(Inherited: 0x18)
struct FMsgAddToInventory : FMsgBase
{
	struct AActor* Owner;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bEquipped : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	int32_t InventoryId;  // 0x24 (0x24)
	int32_t InventorySlotId;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnSpiritMagicalReductionMagicResistance
struct FOnSpiritMagicalReductionMagicResistance
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.MsgRemoveAbility
// Size: 0x20(Inherited: 0x18)
struct FMsgRemoveAbility : FMsgBase
{
	struct AActor* TargetActor;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_Weight
struct FOnRep_Weight
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgItemDataUpdateNotify
// Size: 0xB8(Inherited: 0x18)
struct FMsgItemDataUpdateNotify : FMsgBase
{
	struct FItemData ItemData;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCMonsterBase.OnLostTarget
struct FOnLostTarget
{
	struct ADCCharacterBase* InTarget;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgItemDropRequest
// Size: 0x28(Inherited: 0x18)
struct FMsgItemDropRequest : FMsgBase
{
	int32_t DropItemCount;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct AActor* DropActingActor;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgItemDropResponse
// Size: 0x20(Inherited: 0x18)
struct FMsgItemDropResponse : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bSuccess : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsInputBindSlotWidget.HandleSecondaryKeyPressed
struct FHandleSecondaryKeyPressed
{
	struct FKey InKey;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAT_ServerWaitClientTargetData.ServerWaitForClientTargetData
struct FServerWaitForClientTargetData
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FName TaskInstanceName;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool TriggerOnce : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct UDCAT_ServerWaitClientTargetData* ReturnValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgFinishedLoadItemArtData
// Size: 0x20(Inherited: 0x18)
struct FMsgFinishedLoadItemArtData : FMsgBase
{
	struct UItem* Item;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalDamageModMagicalPower
struct FOnMagicalDamageModMagicalPower
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.GameMusicPlayBarWidget.OnMusicChannelingStart
struct FOnMusicChannelingStart
{
	uint8_t Judge;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgItemConsumeDataRequest
// Size: 0x18(Inherited: 0x18)
struct FMsgItemConsumeDataRequest : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgItemConsumeDataResponse
// Size: 0xD8(Inherited: 0x18)
struct FMsgItemConsumeDataResponse : FMsgBase
{
	struct FItemData ItemData;  // 0x18 (0x18)
	struct FDesignDataItemConsume ItemConsumeData;  // 0xB8 (0xB8)


}; 
 
 // ScriptStruct DungeonCrawler.VoipAkComponentData
struct FVoipAkComponentData
{
	char pad_0[4];  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgItemWearingStart
// Size: 0xE0(Inherited: 0x18)
struct FMsgItemWearingStart : FMsgBase
{
	struct FItemData WearingItemData;  // 0x18 (0x18)
	struct TWeakObjectPtr<AActor> WearingActor;  // 0xB8 (0xB8)
	float Duration;  // 0xC0 (0xC0)
	char pad_196[4];  // 0xC4 (0xC4)
	struct FText Description;  // 0xC8 (0xC8)


}; 
 
 // ScriptStruct DungeonCrawler.ItemTooltipWidgetData
struct FItemTooltipWidgetData
{
	struct FItemData ItemData;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ItemDataGameplayAbility
struct FItemDataGameplayAbility
{
	struct FPrimaryAssetId AbilityId;  // 0x0 (0x0)
	struct TArray<struct FItemDataGameplayEffect> ItemDataGameplayEffectArray;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCMonsterBase.OnRep_PauseAnims
struct FOnRep_PauseAnims
{
	char OldPauseAnims;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ItemWidgetData
struct FItemWidgetData
{
	struct FItemData ItemData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionComboBoxWidget.GetSelectedComboBoxIndex
struct FGetSelectedComboBoxIndex
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassMusicEquippedListNotify
// Size: 0x28(Inherited: 0x18)
struct FMsgWidgetClassMusicEquippedListNotify : FMsgBase
{
	struct TArray<struct FMusicData> MusicArray;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgRemoveLootTarget
// Size: 0x30(Inherited: 0x18)
struct FMsgRemoveLootTarget : FMsgBase
{
	struct UInventoryComponent* LootTargetComponent;  // 0x18 (0x18)
	struct TArray<struct FItemData> ContainingItemDataArray;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCPlayerController.IsTargetAccountSelf
struct FIsTargetAccountSelf
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_SequenceDamageBase.OnDamageOverlapBegin
struct FOnDamageOverlapBegin
{
	struct UPrimitiveComponent* OverlappedComp;  // 0x0 (0x0)
	struct AActor* Other;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool bFromSweep : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct FHitResult SweepResult;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgClearLootingTargets
// Size: 0x18(Inherited: 0x18)
struct FMsgClearLootingTargets : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgLootComponentNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgLootComponentNotify : FMsgBase
{
	struct ULootComponent* LootComponent;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCMonsterAIController.OnPerceptionUpdated
struct FOnPerceptionUpdated
{
	struct TArray<struct AActor*> UpdatedActors;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgAddLooter
// Size: 0x108(Inherited: 0x18)
struct FMsgAddLooter : FMsgBase
{
	struct AActor* Looter;  // 0x18 (0x18)
	struct FHitResult HitResult;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgPartyDataRequest
// Size: 0x18(Inherited: 0x18)
struct FMsgPartyDataRequest : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MerchantInfo
struct FMerchantInfo
{
	struct FPrimaryAssetId MerchantId;  // 0x0 (0x0)
	int32_t Faction;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FTimespan RemainTime;  // 0x18 (0x18)
	int32_t IsUnidentified;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // ScriptStruct DungeonCrawler.StockBuyTradeItemInfo
struct FStockBuyTradeItemInfo
{
	int64_t ItemUniqueId;  // 0x0 (0x0)
	int32_t ItemCount;  // 0x8 (0x8)
	int32_t ItemContentsCount;  // 0xC (0xC)


}; 
 
 // ScriptStruct DungeonCrawler.StockCraftTradeItemInfo
struct FStockCraftTradeItemInfo
{
	int64_t ItemUniqueId;  // 0x0 (0x0)
	int32_t ItemCount;  // 0x8 (0x8)
	int32_t ItemContentsCount;  // 0xC (0xC)


}; 
 
 // ScriptStruct DungeonCrawler.MerchantTradeResultItemSlotInfo
struct FMerchantTradeResultItemSlotInfo
{
	int32_t InventoryId;  // 0x0 (0x0)
	int32_t SlotId;  // 0x4 (0x4)
	struct FString ItemId;  // 0x8 (0x8)
	int64_t ItemUniqueId;  // 0x18 (0x18)
	int32_t ItemCount;  // 0x20 (0x20)
	int32_t ItemContentsCount;  // 0x24 (0x24)


}; 
 
 // ScriptStruct DungeonCrawler.LeaderboardInfo
struct FLeaderboardInfo
{
	uint8_t LeaderboardState;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct TSoftObjectPtr<UDCLeaderboardDataAsset> LeaderboardData;  // 0x8 (0x8)
	struct FDateTime BeginDateTime;  // 0x38 (0x38)
	struct FDateTime EndDateTime;  // 0x40 (0x40)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetTradeSubscriptionFailedNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetTradeSubscriptionFailedNotify : FMsgBase
{
	int32_t Reason;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.MakePrimaryAssetIdStr
struct FMakePrimaryAssetIdStr
{
	struct FPrimaryAssetId PrimaryAssetId;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.LeaderboardSheetInfo
struct FLeaderboardSheetInfo
{
	struct TSoftObjectPtr<UDCLeaderboardSheetDataAsset> LeaderboardSheetData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_AuraBase.OnAuraOverlapBeginEvent
struct FOnAuraOverlapBeginEvent
{
	struct AActor* TargetActor;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.LeaderboardContentInfo
struct FLeaderboardContentInfo
{
	struct TSoftObjectPtr<UDCLeaderboardContentDataAsset> LeaderboardContentData;  // 0x0 (0x0)
	struct FRankRecord RankRecordMine;  // 0x30 (0x30)
	struct TArray<struct FRankRecord> RankRecordArray;  // 0x88 (0x88)


}; 
 
 // ScriptStruct DungeonCrawler.MetaBindAccountUserData
struct FMetaBindAccountUserData
{
	struct AActor* DummyActor;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgMonsterAIStart
// Size: 0x18(Inherited: 0x18)
struct FMsgMonsterAIStart : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgMonsterIdRequest
// Size: 0x18(Inherited: 0x18)
struct FMsgMonsterIdRequest : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MusicChannelingTargetData
struct FMusicChannelingTargetData
{
	struct TWeakObjectPtr<AActor> TargetActor;  // 0x0 (0x0)
	struct TArray<struct FActiveGameplayEffectHandle> ActiveGameplayEffectHandleArray;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgMusicChannelingStart
// Size: 0x38(Inherited: 0x18)
struct FMsgMusicChannelingStart : FMsgBase
{
	uint8_t Judge;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	float Duration;  // 0x1C (0x1C)
	struct FText Description;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetLobbyEmoteIdArray
struct FGetLobbyEmoteIdArray
{
	struct TArray<struct FPrimaryAssetId> OutLobbyEmoteIdArray;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_RangedAttackBase.FireSocketSightBlocked
struct FFireSocketSightBlocked
{
	struct FGameplayAbilityTargetDataHandle InData;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgMusicJudgeNotify
// Size: 0x28(Inherited: 0x18)
struct FMsgMusicJudgeNotify : FMsgBase
{
	uint8_t Judge;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	float ElapsedTime;  // 0x1C (0x1C)
	float PastSectionRatio;  // 0x20 (0x20)
	float NextSectionRatio;  // 0x24 (0x24)


}; 
 
 // ScriptStruct DungeonCrawler.MusicData
struct FMusicData
{
	struct FPrimaryAssetId MusicId;  // 0x0 (0x0)
	struct FGameplayTag MusicTag;  // 0x10 (0x10)
	int32_t SlotIndex;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool bProperItemEquipped : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)


}; 
 
 // ScriptStruct DungeonCrawler.NickNameWidgetData
struct FNickNameWidgetData
{
	struct FString NickNameStr;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCGameplayCueNotify_Actor.SetAkComponentRTPCValue
struct FSetAkComponentRTPCValue
{
	struct UAkComponent* AkComponent;  // 0x0 (0x0)
	struct UAkRtpc* RtpcValue;  // 0x8 (0x8)
	float InTickValue;  // 0x10 (0x10)
	float InTotalValue;  // 0x14 (0x14)
	float InMaxRTPCValue;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct DungeonCrawler.DCSteamAuthTicket
struct FDCSteamAuthTicket
{
	struct FString SessionTicket;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bUseSteamSystem : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	int32_t LocalSteamBuildId;  // 0x14 (0x14)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_ImpactResistance
struct FOnRep_ImpactResistance
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgPartyDataResponse
// Size: 0x68(Inherited: 0x18)
struct FMsgPartyDataResponse : FMsgBase
{
	struct TMap<struct FString, struct FPartyData> PartyDataMap;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalReductionMod
struct FOnRep_MagicalReductionMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgPartyDataNotify
// Size: 0x38(Inherited: 0x18)
struct FMsgPartyDataNotify : FMsgBase
{
	struct FPartyData PartyData;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetRequestCharacterListNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetRequestCharacterListNotify : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgPartyLinkRequest
// Size: 0x28(Inherited: 0x18)
struct FMsgPartyLinkRequest : FMsgBase
{
	struct FString PartyId;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgPartyLinkResponse
// Size: 0x20(Inherited: 0x18)
struct FMsgPartyLinkResponse : FMsgBase
{
	struct UPartySession* PartySession;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCMonsterAIController.ForceSightAll
struct FForceSightAll
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsForce : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgPartySessionArrayRequest
// Size: 0x18(Inherited: 0x18)
struct FMsgPartySessionArrayRequest : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgPerkIdArrayNotify
// Size: 0x28(Inherited: 0x18)
struct FMsgPerkIdArrayNotify : FMsgBase
{
	struct TArray<struct FPrimaryAssetId> PerkIdArray;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.PerkWidgetData
struct FPerkWidgetData
{
	struct FText PerkName;  // 0x0 (0x0)
	struct FText PerkDescription;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgPlayerTargetNotify
// Size: 0x28(Inherited: 0x18)
struct FMsgPlayerTargetNotify : FMsgBase
{
	struct FString AccountId;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.GA_RangedAttackBase.MultiFireProjectiles
struct FMultiFireProjectiles
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)
	float FirePower;  // 0xB8 (0xB8)
	char pad_188[4];  // 0xBC (0xBC)


}; 
 
 // ScriptStruct DungeonCrawler.MsgPlayerDieNotify
// Size: 0x2F0(Inherited: 0x18)
struct FMsgPlayerDieNotify : FMsgBase
{
	struct FAccountSessionData AccountSessionData;  // 0x18 (0x18)
	UGameplayEffect* GameplayEffectClass;  // 0x108 (0x108)
	struct FDCGameplayEffectContext EffectContext;  // 0x110 (0x110)
	uint8_t KillReason;  // 0x2E8 (0x2E8)
	char pad_745[7];  // 0x2E9 (0x2E9)


}; 
 
 // ScriptStruct DungeonCrawler.MsgPlayerReturnToCharacterSelectRequest
// Size: 0x18(Inherited: 0x18)
struct FMsgPlayerReturnToCharacterSelectRequest : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgPlayerRestartNotify
// Size: 0x90(Inherited: 0x18)
struct FMsgPlayerRestartNotify : FMsgBase
{
	struct FAccountDataReplication AccountDataReplication;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgProjectileHit
// Size: 0x190(Inherited: 0x18)
struct FMsgProjectileHit : FMsgBase
{
	struct FGameplayAbilityTargetDataHandle TargetDataHandle;  // 0x18 (0x18)
	struct FHitResult Hit;  // 0x40 (0x40)
	char pad_296[8];  // 0x128 (0x128)
	struct FTransform ActorPrevTickTransform;  // 0x130 (0x130)


}; 
 
 // ScriptStruct DungeonCrawler.TradeChannelChatWidgetData
struct FTradeChannelChatWidgetData
{
	uint8_t ChatType;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FChatAccountData ChatAccountData;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgProjectileSetFireData
// Size: 0x100(Inherited: 0x18)
struct FMsgProjectileSetFireData : FMsgBase
{
	struct FHitResult Hit;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgPropsFloorPortalScrollNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgPropsFloorPortalScrollNotify : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bActive : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.DCCommonButtonBase.GetOwningBaseInterfaceBlueprint
struct FGetOwningBaseInterfaceBlueprint
{
	struct TScriptInterface<IBaseInterface> ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCFloorMatchmakingPartyMember
struct FDCFloorMatchmakingPartyMember
{
	struct FDCAccountId AccountId;  // 0x0 (0x0)
	struct FNickname Nickname;  // 0x10 (0x10)
	uint8_t CharacterClass;  // 0x38 (0x38)
	uint8_t Gender;  // 0x39 (0x39)
	char pad_58[2];  // 0x3A (0x3A)
	uint32_t Level;  // 0x3C (0x3C)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataSpellMap
struct FGetDesignDataSpellMap
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataSpell> OutDesignDataSpellMap;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.ServerMsgReConnectGameInfoRequest
// Size: 0xF8(Inherited: 0x18)
struct FServerMsgReConnectGameInfoRequest : FMsgBase
{
	struct FAccountData AccountData;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.ItemWeaponAnimInstanceBase.OnItemDataUpdated
struct FOnItemDataUpdated
{
	struct FItemData ItemData;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgSkillIdArrayNotify
// Size: 0x28(Inherited: 0x18)
struct FMsgSkillIdArrayNotify : FMsgBase
{
	struct TArray<struct FPrimaryAssetId> SkillIdArray;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCCustomizeLobbyEmoteListWidget.OnSetLobbyEmoteIdArray
struct FOnSetLobbyEmoteIdArray
{
	struct TArray<struct FDCLobbyEmoteInfo> LobbyEmoteIdArray;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetTradeSubscriptionButtonClicked
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetTradeSubscriptionButtonClicked : FMsgBase
{


}; 
 
 // Function DungeonCrawler.LeaderboardContentWidget.OnContentScoreName
struct FOnContentScoreName
{
	struct FText NewValue;  // 0x0 (0x0)
	struct FText OldValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.SkillData
struct FSkillData
{
	struct FPrimaryAssetId SkillId;  // 0x0 (0x0)
	struct FGameplayTag SkillTag;  // 0x10 (0x10)
	struct FGameplayTag SkillCooldownTag;  // 0x18 (0x18)
	int32_t Count;  // 0x20 (0x20)
	int32_t RequiredChargeAmount;  // 0x24 (0x24)
	int32_t ChargeAmount;  // 0x28 (0x28)
	int32_t SlotIndex;  // 0x2C (0x2C)


}; 
 
 // Function DungeonCrawler.ItemWidget.GetItemIconImage
struct FGetItemIconImage
{
	struct UImage* ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.DCSoundDataContainer
struct FDCSoundDataContainer
{
	struct TMap<enum class EPhysicalSurface, struct UAkSwitchValue*> AkSwitchBySurfaceType;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetConstantInt32
struct FGetConstantInt32
{
	struct FPrimaryAssetId InConstantId;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.MsgSoundEvent
// Size: 0x28(Inherited: 0x18)
struct FMsgSoundEvent : FMsgBase
{
	struct FGameplayTag EventTag;  // 0x18 (0x18)
	struct UAkAudioEvent* DefaultAkEvent;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.AkAudioVolumeInfo
struct FAkAudioVolumeInfo
{
	float Priority;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UAkAudioEvent* AkEventBeginOverlap;  // 0x8 (0x8)
	struct UAkStateValue* AkStateValueBeginOverlap;  // 0x10 (0x10)
	struct UAkAudioEvent* AkEventEndOverlap;  // 0x18 (0x18)
	struct UAkStateValue* AkStateValueEndOverlap;  // 0x20 (0x20)
	struct UAkRtpc* Rtpc;  // 0x28 (0x28)
	float RtpcValue;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)
	struct UPrimitiveComponent* Volume;  // 0x38 (0x38)


}; 
 
 // ScriptStruct DungeonCrawler.MsgSoundVolumeExit
// Size: 0x20(Inherited: 0x18)
struct FMsgSoundVolumeExit : FMsgBase
{
	struct UPrimitiveComponent* Volume;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgSpellCapacityChangedNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgSpellCapacityChangedNotify : FMsgBase
{
	float SpellCurrentCapacity;  // 0x18 (0x18)
	float SpellMaxCapacity;  // 0x1C (0x1C)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGameplayEffectDescData
struct FGetGameplayEffectDescData
{
	struct FDesignDataGameplayEffect InDesignDataGameplayEffect;  // 0x0 (0x0)
	struct TArray<struct FGameplayEffectDescData> OutGameplayEffectDescDataArray;  // 0x228 (0x228)


}; 
 
 // Function DungeonCrawler.GamePlayerCharacterWidget.OnCampfireChanged
struct FOnCampfireChanged
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInCampfire : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgSpellCastStart
// Size: 0x38(Inherited: 0x18)
struct FMsgSpellCastStart : FMsgBase
{
	float Duration;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FText Description;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.TradeChannelChatWidget.OnRemovePropertyChatFilterTag
struct FOnRemovePropertyChatFilterTag
{
	struct FGameplayTag InChatFilterTag;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgSpellCastSucceed
// Size: 0x18(Inherited: 0x18)
struct FMsgSpellCastSucceed : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassSpellHideEquippableSlotNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetClassSpellHideEquippableSlotNotify : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.TradeChatWidgetData
struct FTradeChatWidgetData
{
	struct FChatAccountData ChatAccountData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ItemTooltipWidget.SetItemData
struct FSetItemData
{
	struct FItemData NewItemData;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.VoipUserWidgetData
struct FVoipUserWidgetData
{
	struct FDCAccountId AccountId;  // 0x0 (0x0)
	struct FVoipUserData VoipUserData;  // 0x10 (0x10)
	struct FVoipPartyData VoipPartyData;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetExitCreateCharacterPageNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetExitCreateCharacterPageNotify : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetDeleteCharacterNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetDeleteCharacterNotify : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.BTT_BlueprintBase.OnTaskFinished
struct FOnTaskFinished
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)
	enum class EBTNodeResult TaskResult;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function DungeonCrawler.DCEquipmentWidget.GetSlotWidget
struct FGetSlotWidget
{
	uint8_t Index;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct UDCEquipmentSlotWidget* ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetGameGroupHideUIbyNonCoexistWidgetRequest
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetGameGroupHideUIbyNonCoexistWidgetRequest : FMsgBase
{
	uint8_t WidgetGameGroupType;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetGameGroupToggleRequest
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetGameGroupToggleRequest : FMsgBase
{
	uint8_t WidgetGameGroupType;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.DCInteractableActorBase.InteractStarted
struct FInteractStarted
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag EventTag;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetHitDirectionHealingNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetHitDirectionHealingNotify : FMsgBase
{


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_Luck
struct FOnRep_Luck
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPlayerController.OnUpdateReportedPlayerInfoArray_Client
struct FOnUpdateReportedPlayerInfoArray_Client
{
	struct TArray<struct FDCReportedInfo> InReportedInfoArray;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetPlayPullingCrossHairNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetPlayPullingCrossHairNotify : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetChangeCrossHairEachWeaponNotify
// Size: 0x40(Inherited: 0x18)
struct FMsgWidgetChangeCrossHairEachWeaponNotify : FMsgBase
{
	struct TArray<struct FGameplayTag> WeaponTypeTags;  // 0x18 (0x18)
	struct FGameplayTag ItemUtilityTag;  // 0x28 (0x28)
	struct FGameplayTag ItemSlotTypeTag;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool IsAttackEnable : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetPlayShootCrossHairNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetPlayShootCrossHairNotify : FMsgBase
{
	char pad_24[8];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetSkillCooldownEndWidgetNotify
// Size: 0x28(Inherited: 0x18)
struct FMsgWidgetSkillCooldownEndWidgetNotify : FMsgBase
{
	struct FGameplayTag SkillSlotKeyTag;  // 0x18 (0x18)
	struct FGameplayTag SkillTag;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetGameCancelTipVisibilityRequest
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetGameCancelTipVisibilityRequest : FMsgBase
{
	uint8_t NewVisibility;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.DCMonsterBase.OnStuckByShield
struct FOnStuckByShield
{
	struct ADCCharacterBase* InInstigator;  // 0x0 (0x0)
	struct AActor* InEffectCauser;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetOptionVideoDisplayApplyedNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetOptionVideoDisplayApplyedNotify : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool IsApplyed : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetLobbyGroupHideUIbyNonCoexistWidgetResponse
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetLobbyGroupHideUIbyNonCoexistWidgetResponse : FMsgBase
{
	uint8_t WidgetLobbyGroupType;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AimLineWithActorViewPointToPoint
struct FAimLineWithActorViewPointToPoint
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct FVector TraceEnd;  // 0x8 (0x8)
	struct TArray<struct FHitResult> OutHitResults;  // 0x20 (0x20)
	enum class ECollisionChannel TraceChannel;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetLobbyGroupToggleRequest
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetLobbyGroupToggleRequest : FMsgBase
{
	uint8_t WidgetLobbyGroupType;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassRemoveEquipSkillNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgWidgetClassRemoveEquipSkillNotify : FMsgBase
{
	int32_t Index;  // 0x18 (0x18)
	struct FPrimaryAssetId SkillId;  // 0x1C (0x1C)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassBeginNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetClassBeginNotify : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetLobbyGroupVisibilityRequest
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetLobbyGroupVisibilityRequest : FMsgBase
{
	uint8_t WidgetLobbyGroupType;  // 0x18 (0x18)
	uint8_t NewVisibility;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetLobbyGroupToggleNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetLobbyGroupToggleNotify : FMsgBase
{
	uint8_t WidgetLobbyGroupType;  // 0x18 (0x18)
	uint8_t NewVisibility;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_LightningMagicResistance
struct FOnRep_LightningMagicResistance
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetLobbyGroupHideResponse
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetLobbyGroupHideResponse : FMsgBase
{
	uint8_t WidgetLobbyGroupType;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool bCanHide : 1;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassGroupHideUIbyNonCoexistWidgetRequest
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetClassGroupHideUIbyNonCoexistWidgetRequest : FMsgBase
{
	uint8_t WidgetClassGroupType;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassGroupToggleNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetClassGroupToggleNotify : FMsgBase
{
	uint8_t WidgetClassGroupType;  // 0x18 (0x18)
	uint8_t NewVisibility;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)


}; 
 
 // Function DungeonCrawler.ProjectileActor.SetAddEffectToTargetHit
struct FSetAddEffectToTargetHit
{
	struct TArray<struct FPrimaryAssetId> AddEffectList;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetTradingChatNotify
// Size: 0x90(Inherited: 0x18)
struct FMsgWidgetTradingChatNotify : FMsgBase
{
	char pad_24[120];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetPlayerInventoryTabActiveNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetPlayerInventoryTabActiveNotify : FMsgBase
{
	uint8_t WidgetPlayerInventoryTabType;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetLeaderboardBeginNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetLeaderboardBeginNotify : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgPartyMemberEnter
// Size: 0xB0(Inherited: 0x18)
struct FMsgPartyMemberEnter : FMsgBase
{
	uint8_t WidgetLocate;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FPlayPartyUserInfo UserInfo;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.DespawnAoeByPrimaryAssetId
struct FDespawnAoeByPrimaryAssetId
{
	struct ADCCharacterBase* DCCharacterBase;  // 0x0 (0x0)
	struct FPrimaryAssetId PrimaryAssetId;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.PlayPartyUserInfo
struct FPlayPartyUserInfo
{
	uint8_t PartyState;  // 0x0 (0x0)
	uint8_t WidgetLocate;  // 0x1 (0x1)
	char pad_2[6];  // 0x2 (0x2)
	struct FCharacterPartyInfoWidget PartyCharacterInfo;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_LightMagicResistance
struct FOnRep_LightMagicResistance
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.RemoveLooseGameplayTagAll
struct FRemoveLooseGameplayTagAll
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct FGameplayTag GameplayTag;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.SkillComponent.HandleSkillInput
struct FHandleSkillInput
{
	struct FGameplayTag InputTag;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.CharacterPartyInfoWidget
struct FCharacterPartyInfoWidget
{
	struct FString AccountId;  // 0x0 (0x0)
	struct FNickname Nickname;  // 0x10 (0x10)
	struct FString CharacterClass;  // 0x38 (0x38)
	struct FString CharacterId;  // 0x48 (0x48)
	int32_t Gender;  // 0x58 (0x58)
	int32_t Level;  // 0x5C (0x5C)
	int32_t IsPartyLeader;  // 0x60 (0x60)
	int32_t IsReady;  // 0x64 (0x64)
	int32_t IsInGame;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)
	struct TArray<struct FAccountDataItem> EquipItemList;  // 0x70 (0x70)
	int32_t PartyIdx;  // 0x80 (0x80)
	char pad_132[4];  // 0x84 (0x84)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_ArcaneMagicResistance
struct FOnRep_ArcaneMagicResistance
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GamePlayerCharacterWidget.OnCharacterClass
struct FOnCharacterClass
{
	uint8_t InCharacterClass;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCBagWidget.OnDragCanceled
struct FOnDragCanceled
{
	struct UDragDropOperation* Operation;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgPartyMemberLeave
// Size: 0x20(Inherited: 0x18)
struct FMsgPartyMemberLeave : FMsgBase
{
	uint8_t WidgetLocate;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct DungeonCrawler.MsgLobbyCharacterResetEquipItemNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgLobbyCharacterResetEquipItemNotify : FMsgBase
{
	uint8_t WidgetPartyUserLocate;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct TArray<struct FItemData> ItemData;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCMonsterBase.Normal
struct FNormal
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgLobbyCharacterInfoNotify
// Size: 0xB0(Inherited: 0x18)
struct FMsgLobbyCharacterInfoNotify : FMsgBase
{
	uint8_t WidgetPartyUserLocate;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FLobbyCharacterInfo LobbyCharacterData;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCItemSkinComponent.RemoveDataForDebug_Server
struct FRemoveDataForDebug_Server
{
	struct FPrimaryAssetId ID;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetStorageBeginNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetStorageBeginNotify : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetMerchantListBeginNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetMerchantListBeginNotify : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetTradeChannelChatNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgWidgetTradeChannelChatNotify : FMsgBase
{
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetTradeChannelListBeginNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetTradeChannelListBeginNotify : FMsgBase
{


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_ImpactPower
struct FOnRep_ImpactPower
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetTradeChannelListNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgWidgetTradeChannelListNotify : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bIsTrader : 1;  // 0x18 (0x18)
	char pad_25[23];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemArmorTypeTextMap
struct FGetItemArmorTypeTextMap
{
	struct TMap<struct FGameplayTag, struct FText> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.EffectContextGetSoundDataPrimaryAssetId
struct FEffectContextGetSoundDataPrimaryAssetId
{
	struct FGameplayEffectContextHandle EffectContext;  // 0x0 (0x0)
	struct FPrimaryAssetId ReturnValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetTradeSubscriptionSuccessNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetTradeSubscriptionSuccessNotify : FMsgBase
{


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalReductionMagicResistance
struct FOnMagicalReductionMagicResistance
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCMonsterBase.OnOverlapEnd
struct FOnOverlapEnd
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetTradeChannelButtonClicked
// Size: 0x40(Inherited: 0x18)
struct FMsgWidgetTradeChannelButtonClicked : FMsgBase
{
	char pad_24[40];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetTradeChannelBeginNotify
// Size: 0x40(Inherited: 0x18)
struct FMsgWidgetTradeChannelBeginNotify : FMsgBase
{
	char pad_24[40];  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetCurrentMontageSectionName
struct FGetCurrentMontageSectionName
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct FName ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetTradeConfirmBeginNotify
// Size: 0x50(Inherited: 0x18)
struct FMsgWidgetTradeConfirmBeginNotify : FMsgBase
{
	struct FText MyNickName;  // 0x18 (0x18)
	struct FText TargetNickname;  // 0x30 (0x30)
	int32_t TradeFee;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetTradingCanMoveItemStateNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetTradingCanMoveItemStateNotify : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bCanMove : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool bIsMine : 1;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)


}; 
 
 // Function DungeonCrawler.DCCharacterBase.IsInFirstPersonPerspective
struct FIsInFirstPersonPerspective
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassLevelNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgWidgetClassLevelNotify : FMsgBase
{
	struct FMsgWidgetClassLevelNotifyBody ClassLevelInfo;  // 0x18 (0x18)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassPerkListNotify
// Size: 0x28(Inherited: 0x18)
struct FMsgWidgetClassPerkListNotify : FMsgBase
{
	struct TArray<struct FPerkData> PerkIdArray;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassSkillBeginNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetClassSkillBeginNotify : FMsgBase
{


}; 
 
 // Function DungeonCrawler.GameMenuOptionsAudioWidget.OnAppActivateStateChanged
struct FOnAppActivateStateChanged
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsAppActivateChange : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassSpellUnequippedListNotify
// Size: 0x28(Inherited: 0x18)
struct FMsgWidgetClassSpellUnequippedListNotify : FMsgBase
{
	struct TArray<struct FSpellData> SpellArray;  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassMusicBeginNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetClassMusicBeginNotify : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassItemMoveRequestNotify
// Size: 0x58(Inherited: 0x18)
struct FMsgWidgetClassItemMoveRequestNotify : FMsgBase
{
	char pad_24[64];  // 0x18 (0x18)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassSpellSlotMoveRequestNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgWidgetClassSpellSlotMoveRequestNotify : FMsgBase
{
	int32_t Index;  // 0x18 (0x18)
	struct FPrimaryAssetId SpellId;  // 0x1C (0x1C)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemAccessoryTypeTextMap
struct FGetItemAccessoryTypeTextMap
{
	struct TMap<struct FGameplayTag, struct FText> ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassSpellSequenceChangeRequestNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgWidgetClassSpellSequenceChangeRequestNotify : FMsgBase
{
	int32_t SequenceIndex;  // 0x18 (0x18)
	struct FPrimaryAssetId SpellId;  // 0x1C (0x1C)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // Function DungeonCrawler.ContainerInventoryWidget.GetSlotIdByScreenPosition
struct FGetSlotIdByScreenPosition
{
	struct FVector2D ScreenPos;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassMusicSlotMoveRequestNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgWidgetClassMusicSlotMoveRequestNotify : FMsgBase
{
	int32_t Index;  // 0x18 (0x18)
	struct FPrimaryAssetId MusicId;  // 0x1C (0x1C)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassAddEquipPerkNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgWidgetClassAddEquipPerkNotify : FMsgBase
{
	int32_t Index;  // 0x18 (0x18)
	struct FPrimaryAssetId PerkId;  // 0x1C (0x1C)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // Function DungeonCrawler.DCPostProcessingComponent.GetMeshHalfTranslucentReferenceCount
struct FGetMeshHalfTranslucentReferenceCount
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassRemoveUnEquipSkillNotify
// Size: 0x28(Inherited: 0x18)
struct FMsgWidgetClassRemoveUnEquipSkillNotify : FMsgBase
{
	struct FPrimaryAssetId SkillId;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItemIdsByGameplayTag
struct FGetDesignDataItemIdsByGameplayTag
{
	struct FGameplayTag ItemGameplayTag;  // 0x0 (0x0)
	struct TArray<struct FPrimaryAssetId> ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassPerkEventNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgWidgetClassPerkEventNotify : FMsgBase
{
	int32_t Move;  // 0x18 (0x18)
	int32_t Index;  // 0x1C (0x1C)
	struct FPrimaryAssetId PerkId;  // 0x20 (0x20)


}; 
 
 // ScriptStruct DungeonCrawler.MsgPopupBaseNotify
// Size: 0x38(Inherited: 0x30)
struct FMsgPopupBaseNotify : FMsgPopup
{
	char pad_48[8];  // 0x30 (0x30)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassSpellEquipNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgWidgetClassSpellEquipNotify : FMsgBase
{
	int32_t Index;  // 0x18 (0x18)
	struct FPrimaryAssetId SpellId;  // 0x1C (0x1C)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassMusicEquipNotify
// Size: 0x30(Inherited: 0x18)
struct FMsgWidgetClassMusicEquipNotify : FMsgBase
{
	int32_t Index;  // 0x18 (0x18)
	struct FPrimaryAssetId MusicId;  // 0x1C (0x1C)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassEquipablePerkEmptySlotsMarkNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetClassEquipablePerkEmptySlotsMarkNotify : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bMark : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassEquipableSkillEmptySlotsMarkNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetClassEquipableSkillEmptySlotsMarkNotify : FMsgBase
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bMark : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataMeleeAttack
struct FGetDesignDataMeleeAttack
{
	struct FPrimaryAssetId InId;  // 0x0 (0x0)
	struct FDesignDataMeleeAttack ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassMusicShowEquippableSlotNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetClassMusicShowEquippableSlotNotify : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetClassMusicHideEquippableSlotNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetClassMusicHideEquippableSlotNotify : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetSelectRegionButtonNotify
// Size: 0x20(Inherited: 0x18)
struct FMsgWidgetSelectRegionButtonNotify : FMsgBase
{
	int32_t Region;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetStashRefreshNotify
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetStashRefreshNotify : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetInvitePartyNotify
// Size: 0x60(Inherited: 0x18)
struct FMsgWidgetInvitePartyNotify : FMsgBase
{
	struct FNickname InviteeNickName;  // 0x18 (0x18)
	struct FString InviteeAccountId;  // 0x40 (0x40)
	struct FString InviteeCharacterId;  // 0x50 (0x50)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetKarmaReportInfoNotify
// Size: 0x38(Inherited: 0x18)
struct FMsgWidgetKarmaReportInfoNotify : FMsgBase
{
	struct TArray<struct FKarmaMatchInfo> MatchInfoArray;  // 0x18 (0x18)
	int32_t CurrentTicketCount;  // 0x28 (0x28)
	int32_t CollectionStepCount;  // 0x2C (0x2C)
	int32_t MaxCollectionCount;  // 0x30 (0x30)
	int32_t MaxTicketCount;  // 0x34 (0x34)


}; 
 
 // ScriptStruct DungeonCrawler.KarmaMemberInfo
struct FKarmaMemberInfo
{
	struct FString AccountId;  // 0x0 (0x0)
	struct FString CharacterId;  // 0x10 (0x10)
	struct FNickname Nickname;  // 0x20 (0x20)
	uint8_t DCCharacterClass;  // 0x48 (0x48)
	uint8_t DCGender;  // 0x49 (0x49)
	char pad_74_1 : 7;  // 0x4A (0x4A)
	bool IsVote : 1;  // 0x4A (0x4A)
	char pad_75[1];  // 0x4B (0x4B)
	int32_t KarmaAction;  // 0x4C (0x4C)
	int32_t KarmaStatus;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetKarmaReportActionRequest
// Size: 0x48(Inherited: 0x18)
struct FMsgWidgetKarmaReportActionRequest : FMsgBase
{
	int32_t MatchIdx;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FString AccountId;  // 0x20 (0x20)
	struct FString CharacterId;  // 0x30 (0x30)
	int32_t Action;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)


}; 
 
 // Function DungeonCrawler.DCPlayerController.Gm
struct FGm
{
	struct FString InCmd;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawler.MsgSystemMessageNotify
// Size: 0x38(Inherited: 0x18)
struct FMsgSystemMessageNotify : FMsgBase
{
	struct FText OutputMessage;  // 0x18 (0x18)
	float Duration;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // ScriptStruct DungeonCrawler.MsgPopup
// Size: 0x30(Inherited: 0x18)
struct FMsgPopup : FMsgBase
{
	uint8_t PopupResult;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	UDCCommonActivatableWidgetBase* WidgetClass;  // 0x20 (0x20)
	struct UPopupDataBase* PopupData;  // 0x28 (0x28)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetPopupCloseRequest
// Size: 0x18(Inherited: 0x18)
struct FMsgWidgetPopupCloseRequest : FMsgBase
{


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetProgressBarStart
// Size: 0x38(Inherited: 0x18)
struct FMsgWidgetProgressBarStart : FMsgBase
{
	struct FText Description;  // 0x18 (0x18)
	float Duration;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // ScriptStruct DungeonCrawler.MsgWidgetCommemorativePlaqueTextNotify
// Size: 0x40(Inherited: 0x18)
struct FMsgWidgetCommemorativePlaqueTextNotify : FMsgBase
{
	struct FPrimaryAssetId ScriptId;  // 0x18 (0x18)
	struct FVector Location;  // 0x28 (0x28)


}; 
 
 // Function DungeonCrawler.DCAT_WaitSocketBlockedStateChange.WaitSocketBlockedStateChange
struct FWaitSocketBlockedStateChange
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FName TaskInstanceName;  // 0x8 (0x8)
	struct ADCGATA_AimTraceToSocket* InTargetActor;  // 0x10 (0x10)
	struct UDCAT_WaitSocketBlockedStateChange* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.AsyncTaskAttributeChanged.ListenForAttributeChange
struct FListenForAttributeChange
{
	struct UAbilitySystemComponent* AbilitySystemComponent;  // 0x0 (0x0)
	struct FGameplayAttribute Attribute;  // 0x8 (0x8)
	struct UAsyncTaskAttributeChanged* ReturnValue;  // 0x40 (0x40)


}; 
 
 // Function DungeonCrawler.AsyncTaskEffectInhibitionChanged.ListenForGameplayInhibitionChange
struct FListenForGameplayInhibitionChange
{
	struct UAbilitySystemComponent* AbilitySystemComponent;  // 0x0 (0x0)
	struct FGameplayTag EffectGameplayTag;  // 0x8 (0x8)
	struct UAsyncTaskEffectInhibitionChanged* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCAT_WaitGameplayAbilityActivateOrEnd.OnAbilityActivate
struct FOnAbilityActivate
{
	struct UGameplayAbility* ActivatedAbility;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.AsyncTaskWaitGAActivated.WaitForAbilityActivate
struct FWaitForAbilityActivate
{
	struct AActor* TargetActor;  // 0x0 (0x0)
	struct FGameplayTag WithTag;  // 0x8 (0x8)
	struct FGameplayTag WithoutTag;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool IncludeTriggeredAbilities : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool TriggerOnce : 1;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)
	struct UAsyncTaskWaitGAActivated* ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.AsyncTaskWaitGAActivated.WaitForAbilityActivate_Query
struct FWaitForAbilityActivate_Query
{
	struct AActor* TargetActor;  // 0x0 (0x0)
	struct FGameplayTagQuery Query;  // 0x8 (0x8)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool IncludeTriggeredAbilities : 1;  // 0x50 (0x50)
	char pad_81_1 : 7;  // 0x51 (0x51)
	bool TriggerOnce : 1;  // 0x51 (0x51)
	char pad_82[6];  // 0x52 (0x52)
	struct UAsyncTaskWaitGAActivated* ReturnValue;  // 0x58 (0x58)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_ActionSpeed
struct FOnRep_ActionSpeed
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ProjectileActor.HandleTimelineUpdate
struct FHandleTimelineUpdate
{
	float Value;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.PlayWidget.OnInvitePartyButtonClicked
struct FOnInvitePartyButtonClicked
{
	uint8_t UserLocate;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMiniMapWidget.OnMiniMapName
struct FOnMiniMapName
{
	struct FString NewMiniMapName;  // 0x0 (0x0)
	struct FString OldMiniMapName;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.AttackInputManagerComponent.GetCurrentTriggerTag
struct FGetCurrentTriggerTag
{
	struct FGameplayTag TriggerTag;  // 0x0 (0x0)
	struct FGameplayTag ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.AttackInputManagerComponent.SetAttackEnabled
struct FSetAttackEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsAttackEnabled : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_Will
struct FOnRep_Will
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCommonButtonBase.BindMsgOwner
struct FBindMsgOwner
{
	struct UScriptStruct* InMsgType;  // 0x0 (0x0)
	struct UBindMsgNode* InMsgDynamicDelegate;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.MatchesQuery
struct FMatchesQuery
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct FGameplayTagQuery InTagQuery;  // 0x8 (0x8)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool ReturnValue : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)


}; 
 
 // Function DungeonCrawler.CharacterSelectWidget.CanLaunchRedstoneShardShop
struct FCanLaunchRedstoneShardShop
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterCreateWidget.GetCannotCreateVisibility
struct FGetCannotCreateVisibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ItemActor.ItemDataUpdated
struct FItemDataUpdated
{
	struct FItemData InItemData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterSelectWidget.GetCashPrice
struct FGetCashPrice
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterCreateWidget.OnClassSelectTileViewItemSelectionChanged
struct FOnClassSelectTileViewItemSelectionChanged
{
	struct UObject* InItem;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterCreateWidget.OnGenderClicked
struct FOnGenderClicked
{
	uint8_t Gender;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MaxMagicalShield
struct FOnRep_MaxMagicalShield
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterCreateWidget.OnTextChangedNickName
struct FOnTextChangedNickName
{
	struct FText InNickName;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterSelectCharListWidget.GetPageArrowVisibility
struct FGetPageArrowVisibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.TimerWidgetBase.OnLeftSecond
struct FOnLeftSecond
{
	int32_t NewValue;  // 0x0 (0x0)
	int32_t OldValue;  // 0x4 (0x4)


}; 
 
 // Function DungeonCrawler.GA_SequenceDamageBase.OnDamageOverlapEnd
struct FOnDamageOverlapEnd
{
	struct UPrimitiveComponent* OverlappedComp;  // 0x0 (0x0)
	struct AActor* Other;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function DungeonCrawler.DCDataComponent.OnRep_AssetId
struct FOnRep_AssetId
{
	struct FPrimaryAssetId PrevAssetId;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCharacterAbilitySystemComponent.OnItemUnequipEvent
struct FOnItemUnequipEvent
{
	struct FDCItemId ItemId;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemIdTagText
struct FGetItemIdTagText
{
	struct FGameplayTag InIdTag;  // 0x0 (0x0)
	struct FText ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.CharacterSelectCharListWidget.OnCharacterSlotData
struct FOnCharacterSlotData
{
	struct FCharacterSlotData NewValue;  // 0x0 (0x0)
	struct FCharacterSlotData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_Agility
struct FOnRep_Agility
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.SpellActor.OnRep_SpellData
struct FOnRep_SpellData
{
	struct FSpellData OldSpellData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterSelectCharListWidget.OnCharacterSlotListViewItemClicked
struct FOnCharacterSlotListViewItemClicked
{
	struct UObject* Obj;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterSelectCharListWidget.OnSelectedCharacterId
struct FOnSelectedCharacterId
{
	struct FString CharacterId;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterSelectCharSlotWidget.CanSelect
struct FCanSelect
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCGameStateBase.SetDungeonInfo_HideDeathSwarmTimer
struct FSetDungeonInfo_HideDeathSwarmTimer
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool HideDeathSwarmTimer : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterSelectCharSlotWidget.OnCharacterSlot
struct FOnCharacterSlot
{
	struct FCharacterSlot NewValue;  // 0x0 (0x0)
	struct FCharacterSlot OldValue;  // 0x98 (0x98)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnActionSpeed
struct FOnActionSpeed
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemComponent.OnActorDieData
struct FOnActorDieData
{
	struct FActorDieData InActorDieData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_PlayerSkillRouterBase.OnRoutedAbilityEnded
struct FOnRoutedAbilityEnded
{
	struct FAbilityEndedData AbilityEndedData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnMoveSpeedBase
struct FOnMoveSpeedBase
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnAirMagicalReductionMagicResistance
struct FOnAirMagicalReductionMagicResistance
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnAirMagicalReductionMod
struct FOnAirMagicalReductionMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemArtData
struct FGetItemArtData
{
	struct FItemData ItemData;  // 0x0 (0x0)
	struct UArtDataItem* ReturnValue;  // 0xA0 (0xA0)


}; 
 
 // Function DungeonCrawler.DCInteractTargetInterface.InteractTargetInfoRarity
struct FInteractTargetInfoRarity
{
	struct FGameplayTag RarityTag;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGameplayEffectSetByCallerValue
struct FGetGameplayEffectSetByCallerValue
{
	struct FGameplayTag InSetByCallerTag;  // 0x0 (0x0)
	int32_t InSetByCallerValue;  // 0x8 (0x8)
	float ReturnValue;  // 0xC (0xC)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnArcaneMagicalReductionMagicResistance
struct FOnArcaneMagicalReductionMagicResistance
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnArcaneMagicalReductionMod
struct FOnArcaneMagicalReductionMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.SkillComponent.GameplayEffectStackChanged
struct FGameplayEffectStackChanged
{
	struct FGameplayTag EffectGameplayTag;  // 0x0 (0x0)
	struct FActiveGameplayEffectHandle EffectHandle;  // 0x8 (0x8)
	int32_t NewStackCount;  // 0x10 (0x10)
	int32_t PreviousStackCount;  // 0x14 (0x14)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnArcaneMagicResistance
struct FOnArcaneMagicResistance
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnArmorPenetration
struct FOnArmorPenetration
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnBuffDurationMod
struct FOnBuffDurationMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnDarkMagicalReductionMagicResistance
struct FOnDarkMagicalReductionMagicResistance
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnDarkMagicResistance
struct FOnDarkMagicResistance
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCAT_OverlapActorsInComponent.GetTargetList
struct FGetTargetList
{
	struct TArray<struct AActor*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnDivineMagicalReductionMod
struct FOnDivineMagicalReductionMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnDivineMagicResistance
struct FOnDivineMagicResistance
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnEarthMagicalReductionMagicResistance
struct FOnEarthMagicalReductionMagicResistance
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnEarthMagicalReductionMod
struct FOnEarthMagicalReductionMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnEarthMagicResistance
struct FOnEarthMagicResistance
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnEvilMagicalReduction
struct FOnEvilMagicalReduction
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.SkillComponent.GetSkillDataByTriggerTag
struct FGetSkillDataByTriggerTag
{
	struct FGameplayTag TriggerTag;  // 0x0 (0x0)
	struct FSkillData ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnEvilMagicalReductionMagicResistance
struct FOnEvilMagicalReductionMagicResistance
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnFireMagicalReduction
struct FOnFireMagicalReduction
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCPlayerCharacterInterface.GetPartHeadMeshAsset
struct FGetPartHeadMeshAsset
{
	struct USkeletalMesh* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnHeadshotReductionMod
struct FOnHeadshotReductionMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCAT_WaitGameplayTagsAdded.WaitGameplayTagsAdded
struct FWaitGameplayTagsAdded
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayTagContainer TagContainer;  // 0x8 (0x8)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bIsWaitAnyTag : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct AActor* InOptionalExternalTarget;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bIsOnlyTriggerOnce : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct UDCAT_WaitGameplayTagsAdded* ReturnValue;  // 0x40 (0x40)


}; 
 
 // Function DungeonCrawler.CharacterStatusWidget.OnHealth
struct FOnHealth
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnImpactPower
struct FOnImpactPower
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.PlayWidget.OnChangedMatchingState
struct FOnChangedMatchingState
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsInMatching : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusWidget.OnKnowledge
struct FOnKnowledge
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnLightMagicalReduction
struct FOnLightMagicalReduction
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnLightMagicalReductionMagicResistance
struct FOnLightMagicalReductionMagicResistance
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnLightMagicalReductionMod
struct FOnLightMagicalReductionMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnLightMagicResistance
struct FOnLightMagicResistance
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnLightningMagicalReductionMagicResistance
struct FOnLightningMagicalReductionMagicResistance
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnLuck
struct FOnLuck
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.PropsActorBase.GetDesignDataProps
struct FGetDesignDataProps
{
	struct FDesignDataProps ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalDamageAdd
struct FOnMagicalDamageAdd
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalDamageMod
struct FOnMagicalDamageMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalDamageModBonus
struct FOnMagicalDamageModBonus
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalDamageTrue
struct FOnMagicalDamageTrue
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalHealBase
struct FOnMagicalHealBase
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.ContainerSlotWidget.OnSetNewItem
struct FOnSetNewItem
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bFullfilledAll : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalHealMod
struct FOnMagicalHealMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicalReductionBonus
struct FOnMagicalReductionBonus
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnMagicPenetration
struct FOnMagicPenetration
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusWidget.OnMaxHealthAdd
struct FOnMaxHealthAdd
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusWidget.OnMaxHealthBase
struct FOnMaxHealthBase
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusWidget.OnMaxHealthMod
struct FOnMaxHealthMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnMoveSpeed
struct FOnMoveSpeed
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageBase
struct FOnPhysicalDamageBase
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageMod
struct FOnPhysicalDamageMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageModBonus
struct FOnPhysicalDamageModBonus
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.LoadPrimaryAsset
struct FLoadPrimaryAsset
{
	struct FPrimaryAssetId InPrimaryAssetId;  // 0x0 (0x0)
	struct FDelegate InOnComplete;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCGameStateBase.OnDungeonInfo
struct FOnDungeonInfo
{
	struct FDCDungeonInfo InDungeonInfo;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageModPhysicalPower
struct FOnPhysicalDamageModPhysicalPower
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageTrue
struct FOnPhysicalDamageTrue
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_ProjectileReductionMod
struct FOnRep_ProjectileReductionMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalDamageWeaponSecondary
struct FOnPhysicalDamageWeaponSecondary
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalHeadshotPenetration
struct FOnPhysicalHeadshotPenetration
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.ClassSkillListWidgetBase.OnFMsgWidgetClassEquipableSkillEmptySlotsMarkNotifyBlueprint
struct FOnFMsgWidgetClassEquipableSkillEmptySlotsMarkNotifyBlueprint
{
	struct FMsgWidgetClassEquipableSkillEmptySlotsMarkNotify InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalHealMod
struct FOnPhysicalHealMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetPrimaryAssetSync
struct FGetPrimaryAssetSync
{
	struct FPrimaryAssetId PrimaryAssetId;  // 0x0 (0x0)
	struct UPrimaryDataAsset* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalPower
struct FOnPhysicalPower
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalReduction
struct FOnPhysicalReduction
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalReductionArmorRating
struct FOnPhysicalReductionArmorRating
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCInventoryComponent.InitFromAccountData_Server
struct FInitFromAccountData_Server
{
	struct TArray<struct FAccountDataItem> ItemDatas;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MaxTotalShield
struct FOnRep_MaxTotalShield
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalReductionBonus
struct FOnPhysicalReductionBonus
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnPhysicalReductionMod
struct FOnPhysicalReductionMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.GA_MusicBase.OnApplied
struct FOnApplied
{
	struct AActor* InTarget;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCustomizeLobbyEmoteRadialSlotWidget.GetHighlightVisibility
struct FGetHighlightVisibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCGameplayAbilityBase.MakeEffectContainerSpecFromContainer
struct FMakeEffectContainerSpecFromContainer
{
	struct TArray<struct FDCGameplayEffectContainerSpec> OutContainerSpecArray;  // 0x0 (0x0)
	struct FDCGameplayEffectContainer Container;  // 0x10 (0x10)
	struct FGameplayEventData EventData;  // 0x68 (0x68)
	int32_t OverrideGameplayLevel;  // 0x118 (0x118)
	char pad_284[4];  // 0x11C (0x11C)


}; 
 
 // Function DungeonCrawler.DCPostProcessingComponent.CreateCameraPostProcess
struct FCreateCameraPostProcess
{
	struct UMaterialInstance* InMaterial;  // 0x0 (0x0)
	struct UCurveFloat* InCurve;  // 0x8 (0x8)
	struct TArray<struct FName> InParameterNames;  // 0x10 (0x10)
	struct FName InMaterialName;  // 0x20 (0x20)
	struct UMaterialInstanceDynamic* ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnPrimaryAbilityWidgetArray
struct FOnPrimaryAbilityWidgetArray
{
	struct TArray<struct UItemTooltipStatWidgetData*> NewValue;  // 0x0 (0x0)
	struct TArray<struct UItemTooltipStatWidgetData*> OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnRegularInteractionSpeed
struct FOnRegularInteractionSpeed
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCCharacterBase.GetHitBoxLocation
struct FGetHitBoxLocation
{
	uint8_t HitBoxType;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FVector Location;  // 0x8 (0x8)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnRegularInteractionSpeedBase
struct FOnRegularInteractionSpeedBase
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnSecondaryAbilityWidgetArray
struct FOnSecondaryAbilityWidgetArray
{
	struct TArray<struct UItemTooltipStatWidgetData*> NewValue;  // 0x0 (0x0)
	struct TArray<struct UItemTooltipStatWidgetData*> OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusWidget.OnSpellCapacity
struct FOnSpellCapacity
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnSpellCastingSpeed
struct FOnSpellCastingSpeed
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.MonsterSpawnableInterface.Spawn
struct FSpawn
{
	ADCMonsterBase* Monster;  // 0x0 (0x0)
	struct ADCMonsterBase* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.MusicSlotWidgetBase.OnSetMusicArtData
struct FOnSetMusicArtData
{
	struct UArtDataMusic* InArtMusicData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusWidget.OnSpellPayload
struct FOnSpellPayload
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnSpiritMagicalReduction
struct FOnSpiritMagicalReduction
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnSpiritMagicalReductionMod
struct FOnSpiritMagicalReductionMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnSpiritMagicResistance
struct FOnSpiritMagicResistance
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusWidget.OnUtilityEffectivenessBase
struct FOnUtilityEffectivenessBase
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnWaterMagicalReduction
struct FOnWaterMagicalReduction
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusDetailWidget.OnWaterMagicalReductionMod
struct FOnWaterMagicalReductionMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusWidget.OnWeight
struct FOnWeight
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCAT_DashToLocation.DashToLocation
struct FDashToLocation
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FVector DestLocation;  // 0x8 (0x8)
	float AllowedDistance;  // 0x20 (0x20)
	float Speed;  // 0x24 (0x24)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool Teleport : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct UDCAT_DashToLocation* ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function DungeonCrawler.CharacterStatusWidget.OnWeightLimit
struct FOnWeightLimit
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.PropsActorBase.GetPropsId
struct FGetPropsId
{
	struct FPrimaryAssetId ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusWidget.OnWeightLimitAdd
struct FOnWeightLimitAdd
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CharacterStatusWidget.OnWeightLimitMod
struct FOnWeightLimitMod
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.SkillWidget.InitializeSkillWidget
struct FInitializeSkillWidget
{
	struct FPrimaryAssetId InSkillId;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CharacterStatusWidget.OnWill
struct FOnWill
{
	struct FGameplayAttributeData NewValue;  // 0x0 (0x0)
	struct FGameplayAttributeData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.TradeUserListWidget.OnTextChanged
struct FOnTextChanged
{
	struct FText FindId;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.SpellActor.GetSpellData
struct FGetSpellData
{
	struct FSpellData ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ChatFilterListEntryWidget.OnCheckStateChanged
struct FOnCheckStateChanged
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsChecked : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPostProcessingComponent.ReversePlayCameraPostProcess
struct FReversePlayCameraPostProcess
{
	struct UMaterialInstanceDynamic* InMIDKey;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ChatFilterWidget.SetChatFilterListVisible
struct FSetChatFilterListVisible
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InbVisible : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ChatSetWidgetBase.OnChatDataChanged
struct FOnChatDataChanged
{
	struct FText InText;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ChatSetWidgetBase.OnChatDataCommitted
struct FOnChatDataCommitted
{
	struct FChatData InChatData;  // 0x0 (0x0)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool ReturnValue : 1;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)


}; 
 
 // Function DungeonCrawler.ChatSetWidgetBase.OnChatEditFocus
struct FOnChatEditFocus
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InbFocus : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ClassPerkListWidgetBase.OnFMsgWidgetClassEquipablePerkEmptySlotsMarkNotifyBlueprint
struct FOnFMsgWidgetClassEquipablePerkEmptySlotsMarkNotifyBlueprint
{
	struct FMsgWidgetClassEquipablePerkEmptySlotsMarkNotify InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ClassSpellSkillListWidgetBase.OnFMsgWidgetClassLevelNotifyBlueprint
struct FOnFMsgWidgetClassLevelNotifyBlueprint
{
	struct FMsgWidgetClassLevelNotify InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.SpellComponent.ServerSetCurrentSpell
struct FServerSetCurrentSpell
{
	struct FGameplayTag SpellTag;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ClassSpellSkillListWidgetBase.OnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint
struct FOnFMsgWidgetClassSlotUnLockLevelNotifyBlueprint
{
	struct FMsgWidgetClassSlotUnLockLevelNotify InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCGameplayAbilityBase.ApplyEffectContainerSpecArray
struct FApplyEffectContainerSpecArray
{
	struct TArray<struct FDCGameplayEffectContainerSpec> OutContainerSpecArray;  // 0x0 (0x0)
	struct FGameplayTag ContainerTag;  // 0x10 (0x10)
	struct FGameplayEventData EventData;  // 0x18 (0x18)
	struct TArray<struct FActiveGameplayEffectHandle> ReturnValue;  // 0xC8 (0xC8)


}; 
 
 // Function DungeonCrawler.ClassSelectWidget.OnPlayerCharacterId
struct FOnPlayerCharacterId
{
	struct FPrimaryAssetId NewValue;  // 0x0 (0x0)
	struct FPrimaryAssetId OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.GameSpellSlotWidget.SelectionChange
struct FSelectionChange
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsSelected : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ClassSkillListWidgetBase.GetSelectedSlotSkillId
struct FGetSelectedSlotSkillId
{
	struct FPrimaryAssetId ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.SoundProvider.GetSwitch
struct FGetSwitch
{
	struct FGameplayTag Tag;  // 0x0 (0x0)
	enum class EPhysicalSurface Surface;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct UAkSwitchValue* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SetAggro
struct FSetAggro
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct ADCCharacterBase* Target;  // 0x8 (0x8)
	float Point;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool ReturnValue : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function DungeonCrawler.GameSpellCurrentSlotWidget.OnSetSpellArtData
struct FOnSetSpellArtData
{
	struct UArtDataSpell* InArtSpellData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameSpellCurrentSlotWidget.OnSpellDataChanged
struct FOnSpellDataChanged
{
	struct FSpellData InSpellData;  // 0x0 (0x0)
	char pad_60[4];  // 0x3C (0x3C)
	struct FDesignDataSpell InDesignDataSpell;  // 0x40 (0x40)


}; 
 
 // Function DungeonCrawler.GameSpellCurrentSlotWidget.SetSpellData
struct FSetSpellData
{
	struct FSpellData InSpellData;  // 0x0 (0x0)
	char pad_60[4];  // 0x3C (0x3C)
	struct FDesignDataSpell InDesignDataSpell;  // 0x40 (0x40)


}; 
 
 // Function DungeonCrawler.DCAT_TargetActorRadius.TargetActorRadius
struct FTargetActorRadius
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	float Radius;  // 0x8 (0x8)
	enum class ECollisionChannel CollisionChannel;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	UObject* TargetingClass;  // 0x10 (0x10)
	struct UDCAT_TargetActorRadius* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.SpellCapacityWidgetBase.OnSpellCapacityChanged
struct FOnSpellCapacityChanged
{
	float InSpellCurrentCapacity;  // 0x0 (0x0)
	float InSpellMaxCapacity;  // 0x4 (0x4)


}; 
 
 // Function DungeonCrawler.ClassTabMenuWidget.OnLobbyCharacterInfoUpdated_BP
struct FOnLobbyCharacterInfoUpdated_BP
{
	struct TArray<struct FGameplayTag> CharacterClassType;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDamageMod
struct FOnRep_MagicalDamageMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ClassUnEquipmentPerkandSkillListWidget.GetSelectedPerkId
struct FGetSelectedPerkId
{
	struct FPrimaryAssetId ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CommemorativePlaqueTextWidget.UpdateCommenorativePlaqueText
struct FUpdateCommenorativePlaqueText
{
	struct TArray<struct FText> InText;  // 0x0 (0x0)
	struct FVector Location;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.CommonButtonXLWidget.SetAllText
struct FSetAllText
{
	struct FText TextTitle;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.CommonButtonLWidget.SetSwitchOn
struct FSetSwitchOn
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bSetOn : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.PopupDataSWidget.Cancel
struct FCancel
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.EquipmentInventoryGroupWidget.OnItemDropDetected
struct FOnItemDropDetected
{
	struct FItemData ItemData;  // 0x0 (0x0)
	struct AActor* OldOwnerActor;  // 0xA0 (0xA0)


}; 
 
 // Function DungeonCrawler.GameInventoryGroupWidget.OnPopItemSelectWidget
struct FOnPopItemSelectWidget
{
	struct FItemData ItemData;  // 0x0 (0x0)
	struct AActor* OldOwnerActor;  // 0xA0 (0xA0)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemTypeChatFilterTagContainerMaps
struct FGetItemTypeChatFilterTagContainerMaps
{
	struct UDCChatRoomDataAsset* InChatRoomData;  // 0x0 (0x0)
	struct TMap<struct FGameplayTag, struct FGameplayTagContainer> OutTypeIdTagChatFilterTagContainerMap;  // 0x8 (0x8)
	struct TMap<struct FGameplayTag, struct FGameplayTagContainer> OutTypeRarityChatFilterTagContainerMap;  // 0x58 (0x58)
	struct TMap<struct FGameplayTag, struct FGameplayTagContainer> OutPropertyChatFilterTagContainerMap;  // 0xA8 (0xA8)


}; 
 
 // Function DungeonCrawler.ContainerInventoryWidget.CanSetItemAt
struct FCanSetItemAt
{
	struct FItemData ItemData;  // 0x0 (0x0)
	int32_t SlotId;  // 0xA0 (0xA0)
	char pad_164_1 : 7;  // 0xA4 (0xA4)
	bool ReturnValue : 1;  // 0xA4 (0xA4)
	char pad_165[3];  // 0xA5 (0xA5)


}; 
 
 // Function DungeonCrawler.ContainerInventoryWidget.InitializeContainerInventoryWidget
struct FInitializeContainerInventoryWidget
{
	struct UInventoryComponent* InInventoryComponent;  // 0x0 (0x0)
	struct UAccountLink* InAccountLink;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.ContainerInventoryWidget.OnItemDragDetected
struct FOnItemDragDetected
{
	struct FItemData ItemData;  // 0x0 (0x0)
	struct FVector2D DragScreenPos;  // 0xA0 (0xA0)


}; 
 
 // Function DungeonCrawler.EquipmentSlotWidget.OnRemoveItem
struct FOnRemoveItem
{
	struct FItemData InItemData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCGameplayAbilityBase.ApplyEffectContainerSpec
struct FApplyEffectContainerSpec
{
	struct FDCGameplayEffectContainerSpec ContainerSpec;  // 0x0 (0x0)
	struct TArray<struct FActiveGameplayEffectHandle> ReturnValue;  // 0x48 (0x48)


}; 
 
 // Function DungeonCrawler.ContainerInventoryWidget.UpdateItemCanBeSet
struct FUpdateItemCanBeSet
{
	struct FItemData InItemData;  // 0x0 (0x0)
	int32_t SlotId;  // 0xA0 (0xA0)
	char pad_164[4];  // 0xA4 (0xA4)


}; 
 
 // Function DungeonCrawler.EquipmentSlotWidget.OnOverlapItemWidget
struct FOnOverlapItemWidget
{
	struct FPrimaryAssetId ItemId;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bValidSlot : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool bCanEquip : 1;  // 0x11 (0x11)
	char pad_18[2];  // 0x12 (0x12)


}; 
 
 // Function DungeonCrawler.DCPlayerController.OnBackToLobbyConfirmed
struct FOnBackToLobbyConfirmed
{
	uint8_t PopupResult;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ItemTooltipWidget.OnItemData
struct FOnItemData
{
	struct FItemData NewItemData;  // 0x0 (0x0)
	struct FItemData OldItemData;  // 0xA0 (0xA0)


}; 
 
 // Function DungeonCrawler.DCAT_SpawnProjectile.SpawnProjectile
struct FSpawnProjectile
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	UObject* SpawnClass;  // 0x8 (0x8)
	struct FTransform SpawnTransform;  // 0x10 (0x10)
	float FirePower;  // 0x70 (0x70)
	char pad_116[4];  // 0x74 (0x74)
	struct UDCAT_SpawnProjectile* ReturnValue;  // 0x78 (0x78)


}; 
 
 // Function DungeonCrawler.ItemWidget.SetItemIcon
struct FSetItemIcon
{
	struct UTexture2D* ItemIconTexture;  // 0x0 (0x0)
	struct FItemInventorySize ItemInventorySize;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.ItemMoveValidatorComponent.ServerMoveItem
struct FServerMoveItem
{
	struct FItemData OldItemData;  // 0x0 (0x0)
	struct TArray<struct FItemData> NewItemDataArray;  // 0xA0 (0xA0)
	struct AActor* OldOwner;  // 0xB0 (0xB0)
	struct AActor* NewOwner;  // 0xB8 (0xB8)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool bHasDelay : 1;  // 0xC0 (0xC0)
	char pad_193[7];  // 0xC1 (0xC1)


}; 
 
 // Function DungeonCrawler.ItemWidget.SetItemOwnerActor
struct FSetItemOwnerActor
{
	struct AActor* InItemOwnedActor;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ControllableItemWidget.OnLeftMouseButtonDoubleClick
struct FOnLeftMouseButtonDoubleClick
{
	struct FEventReply ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ControllableItemWidget.OnLeftMouseButtonDown
struct FOnLeftMouseButtonDown
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FPointerEvent MouseEvent;  // 0x40 (0x40)
	struct FEventReply ReturnValue;  // 0xD8 (0xD8)


}; 
 
 // Function DungeonCrawler.DCCharacterBase.InteractFound
struct FInteractFound
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct UPrimitiveComponent* InteractPart;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCCharacterBase.InteractLost
struct FInteractLost
{
	struct AActor* Interacter;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPostProcessingComponent.PlayFromStartCameraPostProcess
struct FPlayFromStartCameraPostProcess
{
	struct UMaterialInstanceDynamic* InMIDKey;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.InteractableTargetComponent.InteractSucceed
struct FInteractSucceed
{
	struct AActor* InteractingActor;  // 0x0 (0x0)
	struct FGameplayTag TriggerTag;  // 0x8 (0x8)
	struct FGameplayTag StateTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCGameplayAbilityBase.AddGameplayCue
struct FAddGameplayCue
{
	struct FGameplayTag GameplayCueTag;  // 0x0 (0x0)
	struct FGameplayEffectContextHandle EffectContext;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCGameplayAbilityBase.AddGameplayCueLocal
struct FAddGameplayCueLocal
{
	struct FGameplayTag GameplayCueTag;  // 0x0 (0x0)
	struct FGameplayEffectContextHandle EffectContext;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AddGameplayTag
struct FAddGameplayTag
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct FGameplayTag InGameplayTag;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalArcaneDamageBase
struct FOnRep_MagicalArcaneDamageBase
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AddLooseGameplayTag
struct FAddLooseGameplayTag
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct FGameplayTag GameplayTag;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.ProjectileActor.InitialSpeed
struct FInitialSpeed
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AimLineWithActorViewPoint
struct FAimLineWithActorViewPoint
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct TArray<struct FHitResult> OutHitResults;  // 0x8 (0x8)
	enum class ECollisionChannel TraceChannel;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	float MaxRange;  // 0x1C (0x1C)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.AimSphereWithActorViewPoint
struct FAimSphereWithActorViewPoint
{
	struct AActor* InActor;  // 0x0 (0x0)
	float Radius;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct TArray<struct FHitResult> OutHitResults;  // 0x10 (0x10)
	enum class ECollisionChannel TraceChannel;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	float MaxRange;  // 0x24 (0x24)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ApplyGameplayEffect
struct FApplyGameplayEffect
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct FDesignDataGameplayEffect InDesignDataGameplayEffect;  // 0x8 (0x8)
	struct AActor* InSourceActor;  // 0x230 (0x230)
	struct FActiveGameplayEffectHandle ReturnValue;  // 0x238 (0x238)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ApplyGameplayEffectByIds
struct FApplyGameplayEffectByIds
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct TArray<struct FPrimaryAssetId> InGameplayEffectIdArray;  // 0x8 (0x8)
	struct AActor* InSourceActor;  // 0x18 (0x18)
	struct TArray<struct FActiveGameplayEffectHandle> ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCPlayerController.OnClientCall
struct FOnClientCall
{
	struct FCallData CallData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCGameplayAbilityBase.ApplyPremadeSpecArray
struct FApplyPremadeSpecArray
{
	struct FGameplayTag ContainerTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)
	struct TArray<struct FActiveGameplayEffectHandle> ReturnValue;  // 0xB8 (0xB8)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ParseOptionGameplayTag
struct FParseOptionGameplayTag
{
	struct FString InOptionStr;  // 0x0 (0x0)
	struct FString InOptionKey;  // 0x10 (0x10)
	struct FGameplayTag ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCEnhancedInputLocalPlayerSubsystem.RemovePlayerMappableConfigByTag
struct FRemovePlayerMappableConfigByTag
{
	struct FGameplayTag InputConfigTag;  // 0x0 (0x0)
	struct FModifyContextOptions Options;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.CancelAllAbilities
struct FCancelAllAbilities
{
	struct AActor* InActor;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.ClearAllAbilities
struct FClearAllAbilities
{
	struct AActor* InActor;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_LightningMagicalReduction
struct FOnRep_LightningMagicalReduction
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCharacterBase.SetGenericTeamId
struct FSetGenericTeamId
{
	struct FGenericTeamId TeamID;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetHitResult
struct FDCEffectContextGetHitResult
{
	struct FDCGameplayEffectContext EffectContext;  // 0x0 (0x0)
	struct FHitResult ReturnValue;  // 0x1D8 (0x1D8)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetInstigatorActor
struct FDCEffectContextGetInstigatorActor
{
	struct FDCGameplayEffectContext EffectContext;  // 0x0 (0x0)
	struct AActor* ReturnValue;  // 0x1D8 (0x1D8)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetOrigin
struct FDCEffectContextGetOrigin
{
	struct FDCGameplayEffectContext EffectContext;  // 0x0 (0x0)
	struct FVector ReturnValue;  // 0x1D8 (0x1D8)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetOriginalInstigatorActor
struct FDCEffectContextGetOriginalInstigatorActor
{
	struct FDCGameplayEffectContext EffectContext;  // 0x0 (0x0)
	struct AActor* ReturnValue;  // 0x1D8 (0x1D8)


}; 
 
 // Function DungeonCrawler.MusicActor.GetDesignDataMusic
struct FGetDesignDataMusic
{
	struct FDesignDataMusic ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.EquipmentInventoryComponent.OnRep_SheathItemActors
struct FOnRep_SheathItemActors
{
	struct TArray<struct AItemActor*> OldSheathItemActors;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetSoundDataPrimaryAssetId
struct FDCEffectContextGetSoundDataPrimaryAssetId
{
	struct FDCGameplayEffectContext EffectContext;  // 0x0 (0x0)
	struct FPrimaryAssetId ReturnValue;  // 0x1D8 (0x1D8)


}; 
 
 // Function DungeonCrawler.DCEnhancedInputLibrary.InjectInputVectorForAction
struct FInjectInputVectorForAction
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UInputAction* Action;  // 0x8 (0x8)
	struct FVector Value;  // 0x10 (0x10)
	struct TArray<struct UInputModifier*> Modifiers;  // 0x28 (0x28)
	struct TArray<struct UInputTrigger*> Triggers;  // 0x38 (0x38)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.DCEffectContextGetSourceObject
struct FDCEffectContextGetSourceObject
{
	struct FDCGameplayEffectContext EffectContext;  // 0x0 (0x0)
	struct UObject* ReturnValue;  // 0x1D8 (0x1D8)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.EffectContextGetItemDatas
struct FEffectContextGetItemDatas
{
	struct FGameplayEffectContextHandle EffectContextHandle;  // 0x0 (0x0)
	struct TArray<struct FItemData> ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_EvilMagicalReductionMod
struct FOnRep_EvilMagicalReductionMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.SetTitle
struct FSetTitle
{
	struct FText InTitle;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.EffectContextSetSoundDataPrimaryAssetId
struct FEffectContextSetSoundDataPrimaryAssetId
{
	struct FGameplayEffectContextHandle EffectContext;  // 0x0 (0x0)
	struct FPrimaryAssetId PrimaryAssetId;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCGameplayAbilityBase.ExecuteGameplayCue
struct FExecuteGameplayCue
{
	struct FGameplayTag GameplayCueTag;  // 0x0 (0x0)
	struct FGameplayEffectContextHandle EffectContext;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCGameplayAbilityBase.ExecuteGameplayCueLocal
struct FExecuteGameplayCueLocal
{
	struct FGameplayTag GameplayCueTag;  // 0x0 (0x0)
	struct FGameplayEffectContextHandle EffectContext;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCPlayerController.OnAnyPlayerDied
struct FOnAnyPlayerDied
{
	struct FDCPlayerInfo NewPlayerInfo;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetActorAttributeValue
struct FGetActorAttributeValue
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct FGameplayAttribute InAttribute;  // 0x8 (0x8)
	float ReturnValue;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetAttributeDisplayName
struct FGetAttributeDisplayName
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FGameplayAttribute Attribute;  // 0x8 (0x8)
	struct FText ReturnValue;  // 0x40 (0x40)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetBoundingBoxPointsLocation
struct FGetBoundingBoxPointsLocation
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct AActor* InTarget;  // 0x8 (0x8)
	struct FVector OutTop;  // 0x10 (0x10)
	struct FVector OutBottom;  // 0x28 (0x28)
	struct FVector OutLeft;  // 0x40 (0x40)
	struct FVector OutRight;  // 0x58 (0x58)
	struct FVector OutCenter;  // 0x70 (0x70)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetEffectSpec
struct FGetEffectSpec
{
	struct FGameplayEffectSpecHandle SpecHandle;  // 0x0 (0x0)
	struct FGameplayEffectSpec OutEffectSpec;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGameplayDataFromDesignDataSkill
struct FGetGameplayDataFromDesignDataSkill
{
	struct FDesignDataSkill InDesignDataSkill;  // 0x0 (0x0)
	struct TArray<struct FDCGameplayAbilityData> OutGameplayAbilityDataArray;  // 0xC8 (0xC8)
	struct TArray<struct FDCGameplayEffectData> OutGameplayEffectDataArray;  // 0xD8 (0xD8)


}; 
 
 // Function DungeonCrawler.DCAT_WaitAttributeChangeByExecution.WaitForAttributesChange
struct FWaitForAttributesChange
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct TArray<struct FGameplayAttribute> Attributes;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool TriggerOnce : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct AActor* OptionalExternalOwner;  // 0x20 (0x20)
	struct UDCAT_WaitAttributeChangeByExecution* ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGameplayDataFromDesignDataSpell
struct FGetGameplayDataFromDesignDataSpell
{
	struct FDesignDataSpell InDesignDataSpell;  // 0x0 (0x0)
	struct TArray<struct FDCGameplayAbilityData> OutGameplayAbilityDataArray;  // 0xC8 (0xC8)
	struct TArray<struct FDCGameplayEffectData> OutGameplayEffectDataArray;  // 0xD8 (0xD8)


}; 
 
 // Function DungeonCrawler.DCEnhancedInputLibrary.RemovePlayerMappableConfigByTagContainer
struct FRemovePlayerMappableConfigByTagContainer
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FGameplayTagContainer InputConfigTags;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGameplayEffectData
struct FGetGameplayEffectData
{
	struct FDesignDataGameplayEffect InDesignDataGameplayEffect;  // 0x0 (0x0)
	struct FDCGameplayEffectData OutGameplayEffectData;  // 0x228 (0x228)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetGrantedTag
struct FGetGrantedTag
{
	struct FGameplayEffectSpecHandle SpecHandle;  // 0x0 (0x0)
	struct FGameplayTagContainer ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCCharacterBase.OnUpdateTeammateState
struct FOnUpdateTeammateState
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsTeammateWithLocalPlayer : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetMatchingAbilityActivatedTriggers
struct FGetMatchingAbilityActivatedTriggers
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct FGameplayTag InGameplayTag;  // 0x8 (0x8)
	struct TArray<struct FGameplayTag> ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.GetSocketLocationBySocketName
struct FGetSocketLocationBySocketName
{
	struct FName SocketName;  // 0x0 (0x0)
	struct UObject* Object;  // 0x8 (0x8)
	struct AActor* AvatarActor;  // 0x10 (0x10)
	struct FVector OutSocketLocation;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.IsMatchingAbilityActivated
struct FIsMatchingAbilityActivated
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct FGameplayTag InGameplayTag;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SortTargetsByDistance
struct FSortTargetsByDistance
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x8 (0x8)
	uint8_t MonsterFilterSortingType;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool ReturnValue : 1;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.IsTargetSightBlocked
struct FIsTargetSightBlocked
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct AActor* InTarget;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.MessageNotifyByReasonTagContainer
struct FMessageNotifyByReasonTagContainer
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct FGameplayTagContainer InGameplayTags;  // 0x8 (0x8)
	float MsgDuration;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // Function DungeonCrawler.DCGameplayAbilityBase.RemoveGameplayCue
struct FRemoveGameplayCue
{
	struct FGameplayTag GameplayCueTag;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.SendGameplayEventToActorOverride
struct FSendGameplayEventToActorOverride
{
	struct AActor* Actor;  // 0x0 (0x0)
	struct FGameplayTag EventTag;  // 0x8 (0x8)
	struct TArray<struct FDCGameplayEffectData> InOverrideGameplayEffectDataArray;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_EarthMagicalReductionMod
struct FOnRep_EarthMagicalReductionMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMerchantRequiredEntryWidget.GetCurrentStack
struct FGetCurrentStack
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.SetAnimationStateGameplayTag
struct FSetAnimationStateGameplayTag
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct FGameplayTag InGameplayTag;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.SetModeGameplayTag
struct FSetModeGameplayTag
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct FGameplayTag InGameplayTag;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemBlueprintLibrary.SetMovementStateGameplayTag
struct FSetMovementStateGameplayTag
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct FGameplayTag InGameplayTag;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemComponent.GetContainerSpecArray
struct FGetContainerSpecArray
{
	struct TArray<struct FDCGameplayEffectContainerSpec> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemComponent.OnRep_ImpactEnduranceExhaustedData
struct FOnRep_ImpactEnduranceExhaustedData
{
	struct FImpactEnduranceExhaustedData OldImpactEnduranceExhaustedData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemUtilityTypeTextMap
struct FGetItemUtilityTypeTextMap
{
	struct TMap<struct FGameplayTag, struct FText> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemComponent.PlayMontageOnSourceObject
struct FPlayMontageOnSourceObject
{
	struct UGameplayAbility* InAnimatingAbility;  // 0x0 (0x0)
	struct FGameplayAbilityActivationInfo ActivationInfo;  // 0x8 (0x8)
	struct UAnimMontage* NewAnimMontage;  // 0x28 (0x28)
	float InPlayRate;  // 0x30 (0x30)
	struct FName StartSectionName;  // 0x34 (0x34)
	float StartTimeSeconds;  // 0x3C (0x3C)


}; 
 
 // Function DungeonCrawler.DCAbilitySystemComponent.SetTagQueryData
struct FSetTagQueryData
{
	struct TArray<struct FPrimaryAssetId> InHitTagQueryDataIdArray;  // 0x0 (0x0)
	struct TArray<struct FPrimaryAssetId> InBeHitTagQueryDataIdArray;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCItemSkinComponent.OnRep_Datas
struct FOnRep_Datas
{
	struct TArray<struct UDCItemSkinDataAsset*> OldDatas;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCActorStatusComponent.GameplayEffectInhibitChanged
struct FGameplayEffectInhibitChanged
{
	struct FGameplayTag EffectGameplayTag;  // 0x0 (0x0)
	struct FActiveGameplayEffectHandle EffectHandle;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bIsInhibited : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.MakeUniqueId
struct FMakeUniqueId
{
	int64_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAkComponent.PostSoundEvent
struct FPostSoundEvent
{
	struct FGameplayTag Tag;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMonsterBase.OnOverlapBegin
struct FOnOverlapBegin
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool bFromSweep : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct FHitResult SweepResult;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCAoeBase.AddBeginOverlapActor
struct FAddBeginOverlapActor
{
	struct ADCCharacterBase* CharacterBase;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_PlayerSkillBase.SetEquippedItemsHidden
struct FSetEquippedItemsHidden
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bShouldHide : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAoeBase.RemoveEndOverlapActor
struct FRemoveEndOverlapActor
{
	struct ADCCharacterBase* CharacterBase;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.DespawnAoeAll
struct FDespawnAoeAll
{
	struct ADCCharacterBase* DCCharacterBase;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.DespawnAoeByPrimaryAssetIdWithinDistance
struct FDespawnAoeByPrimaryAssetIdWithinDistance
{
	struct ADCCharacterBase* DCCharacterBase;  // 0x0 (0x0)
	struct FPrimaryAssetId PrimaryAssetId;  // 0x8 (0x8)
	struct FVector Location;  // 0x18 (0x18)
	float Distance;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.DespawnAoeWithinDistance
struct FDespawnAoeWithinDistance
{
	struct ADCCharacterBase* DCCharacterBase;  // 0x0 (0x0)
	struct FVector Location;  // 0x8 (0x8)
	float Distance;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function DungeonCrawler.GA_SpellBase.OnCasted
struct FOnCasted
{
	struct AActor* InTarget;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsOverDistance
struct FFilterTargetsOverDistance
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x8 (0x8)
	float Distance;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool ReturnValue : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)


}; 
 
 // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.GetTargetArray
struct FGetTargetArray
{
	struct ADCAoeBase* DCAoeBase;  // 0x0 (0x0)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.PickRandomTarget
struct FPickRandomTarget
{
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x0 (0x0)
	struct ADCCharacterBase* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.GA_MeleeAttackBase.GetMeleeAttackData
struct FGetMeleeAttackData
{
	struct UDesignDataAssetMeleeAttack* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.PickTarget
struct FPickTarget
{
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x0 (0x0)
	int32_t Index;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct ADCCharacterBase* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCWidgetBlueprintLibrary.SetPlayerCursorCenter
struct FSetPlayerCursorCenter
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_PlayerSkillChannelingBase.ServerOnChannelingAction_BP
struct FServerOnChannelingAction_BP
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)
	struct FGameplayCueParameters CueParams;  // 0xB0 (0xB0)


}; 
 
 // Function DungeonCrawler.DCAoeSystemBlueprintLibrary.SpawnAoe
struct FSpawnAoe
{
	struct ADCCharacterBase* DCCharacterBase;  // 0x0 (0x0)
	ADCAoeBase* AoeClass;  // 0x8 (0x8)
	struct FVector Location;  // 0x10 (0x10)
	struct UDCGameplayAbilityBase* DCGameplayAbilityBase;  // 0x28 (0x28)
	struct FGameplayEventData EventData;  // 0x30 (0x30)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool bSuccessfully : 1;  // 0xE0 (0xE0)
	char pad_225[7];  // 0xE1 (0xE1)
	struct ADCAoeBase* ReturnValue;  // 0xE8 (0xE8)


}; 
 
 // Function DungeonCrawler.EquipmentInventoryGroupWidget.OnSwitchChestAndSoulHeart
struct FOnSwitchChestAndSoulHeart
{
	int32_t ActiveIndex;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDamageWeaponSecondary
struct FOnRep_MagicalDamageWeaponSecondary
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_AgilityBase
struct FOnRep_AgilityBase
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_AgilityMod
struct FOnRep_AgilityMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_AirMagicalReductionMod
struct FOnRep_AirMagicalReductionMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_ArmorPenetration
struct FOnRep_ArmorPenetration
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_ArmorRating
struct FOnRep_ArmorRating
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_DarkMagicalReduction
struct FOnRep_DarkMagicalReduction
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_DebuffDurationMod
struct FOnRep_DebuffDurationMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_DivineMagicalReduction
struct FOnRep_DivineMagicalReduction
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.InteractableTargetComponent.GetStateTag
struct FGetStateTag
{
	struct FGameplayTag TriggerTag;  // 0x0 (0x0)
	struct FGameplayTag ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_DivineMagicalReductionMod
struct FOnRep_DivineMagicalReductionMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_DivineMagicResistance
struct FOnRep_DivineMagicResistance
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_EarthMagicResistance
struct FOnRep_EarthMagicResistance
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPostProcessingComponent.IsCameraPostProcess
struct FIsCameraPostProcess
{
	struct UMaterialInstanceDynamic* InMIDKey;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_EvilMagicalReduction
struct FOnRep_EvilMagicalReduction
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_FireMagicalReductionMod
struct FOnRep_FireMagicalReductionMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_FireMagicResistance
struct FOnRep_FireMagicResistance
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_Health
struct FOnRep_Health
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetDescData
struct FGetDescData
{
	struct FPrimaryAssetId InId;  // 0x0 (0x0)
	struct UDescData* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_ItemArmorRatingMod
struct FOnRep_ItemArmorRatingMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCReportPlayerWidget.GetSelectCategoryTextVisibility
struct FGetSelectCategoryTextVisibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_ItemEquipSpeed
struct FOnRep_ItemEquipSpeed
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_Knowledge
struct FOnRep_Knowledge
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCGameplayAbilityBase.CopyPremadeSpecArray
struct FCopyPremadeSpecArray
{
	struct AActor* InActor;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_KnowledgeBase
struct FOnRep_KnowledgeBase
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_KnowledgeMod
struct FOnRep_KnowledgeMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_LightningMagicalReductionMod
struct FOnRep_LightningMagicalReductionMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalArcaneDamageAdd
struct FOnRep_MagicalArcaneDamageAdd
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMonsterBase.BeforeDeath
struct FBeforeDeath
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalArcaneDamageMod
struct FOnRep_MagicalArcaneDamageMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPlayerController.OnServerCall
struct FOnServerCall
{
	struct FCallData CallData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDamageAdd
struct FOnRep_MagicalDamageAdd
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAT_WaitGameplayEffectAdd.OnApplyGameplayEffectCallback
struct FOnApplyGameplayEffectCallback
{
	struct UAbilitySystemComponent* Target;  // 0x0 (0x0)
	struct FGameplayEffectSpec SpecApplied;  // 0x8 (0x8)
	struct FActiveGameplayEffectHandle ActiveHandle;  // 0x2A0 (0x2A0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsControlsWidget.OnInvertMouseHorizontalAxisClicked
struct FOnInvertMouseHorizontalAxisClicked
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsClick : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDamageTrue
struct FOnRep_MagicalDamageTrue
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDamageWeaponPrimary
struct FOnRep_MagicalDamageWeaponPrimary
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCEnhancedInputLocalPlayerSubsystem.GetInputConfig
struct FGetInputConfig
{
	struct FGameplayTag ConfigTag;  // 0x0 (0x0)
	struct UDCInputConfig* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDarkDamageBase
struct FOnRep_MagicalDarkDamageBase
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalDarkDamageMod
struct FOnRep_MagicalDarkDamageMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalFireDamageMod
struct FOnRep_MagicalFireDamageMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalPower
struct FOnRep_MagicalPower
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCItemWidgetBase.IsSet
struct FIsSet
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCShopCurrencyTypeSlotWidgetBase.HasNotEnoughCurrency
struct FHasNotEnoughCurrency
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MagicalShield
struct FOnRep_MagicalShield
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetCharacterSkinIdArray
struct FGetCharacterSkinIdArray
{
	struct TArray<struct FPrimaryAssetId> OutCharacterSkinIdArray;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MagicPenetration
struct FOnRep_MagicPenetration
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MagicResistance
struct FOnRep_MagicResistance
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MaxHealthAdd
struct FOnRep_MaxHealthAdd
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.SkillComponent.OnRep_SkillDataList
struct FOnRep_SkillDataList
{
	struct TArray<struct FSkillDataInfo> OldSkillDataList;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MaxHealthBase
struct FOnRep_MaxHealthBase
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeed
struct FOnRep_MoveSpeed
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeedArmorPenalty
struct FOnRep_MoveSpeedArmorPenalty
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeedArmorPenaltyMod
struct FOnRep_MoveSpeedArmorPenaltyMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameCrossHairWidget.OnChangeWeaponCrossHair
struct FOnChangeWeaponCrossHair
{
	struct FGameplayTag WeaponTypeTag;  // 0x0 (0x0)
	struct FGameplayTag ItemUtilityTag;  // 0x8 (0x8)
	struct FGameplayTag ItemSlotTypeTags;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool IsAttackEnable : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.PropsActorBase.UpdateInteractDepthValue
struct FUpdateInteractDepthValue
{
	int32_t DepthValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionSliderWidget.SetSliderMinMaxValue
struct FSetSliderMinMaxValue
{
	float InMinValue;  // 0x0 (0x0)
	float InMaxValue;  // 0x4 (0x4)
	float InStepSize;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeedBase
struct FOnRep_MoveSpeedBase
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeedMod
struct FOnRep_MoveSpeedMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.KarmaReportWidgetBase.OnFMsgWidgetKarmaReportActionResponseBlueprint
struct FOnFMsgWidgetKarmaReportActionResponseBlueprint
{
	struct FMsgWidgetKarmaReportActionResponse InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_MoveSpeedWithModifier
struct FOnRep_MoveSpeedWithModifier
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalAbsoluteReduction
struct FOnRep_PhysicalAbsoluteReduction
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCWidgetBlueprintLibrary.GetVoipStatus
struct FGetVoipStatus
{
	struct FVoipUserData InVoipUserData;  // 0x0 (0x0)
	uint8_t ReturnValue;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalBackstabPower
struct FOnRep_PhysicalBackstabPower
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalDamageAdd
struct FOnRep_PhysicalDamageAdd
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalDamageMod
struct FOnRep_PhysicalDamageMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (000)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetActionSkinIdArray
struct FGetActionSkinIdArray
{
	struct TArray<struct FPrimaryAssetId> OutActionSkinIdArray;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalDamageWeaponPrimary
struct FOnRep_PhysicalDamageWeaponPrimary
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalDamageWeaponSecondary
struct FOnRep_PhysicalDamageWeaponSecondary
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCInputNumberWidget.IsValidText
struct FIsValidText
{
	struct FText Text;  // 0x0 (0x0)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalHeadshotPower
struct FOnRep_PhysicalHeadshotPower
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameAlivePlayerCountWidget.OnTotalPlayerCount
struct FOnTotalPlayerCount
{
	int32_t NewValue;  // 0x0 (0x0)
	int32_t OldValue;  // 0x4 (0x4)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalHealBase
struct FOnRep_PhysicalHealBase
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalHealMod
struct FOnRep_PhysicalHealMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.InventoryLootingWidget.OnLootingTargetCountChanged
struct FOnLootingTargetCountChanged
{
	int32_t Count;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalPower
struct FOnRep_PhysicalPower
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalReduction
struct FOnRep_PhysicalReduction
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCUpdateRateOptimizeManagerComponent.SetFreezeIdle
struct FSetFreezeIdle
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInFreezeIdle : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCEnhancedInputLibrary.GetInputConfigByTag
struct FGetInputConfigByTag
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FGameplayTag InputConfigTag;  // 0x8 (0x8)
	struct UDCInputConfig* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.GA_PlayerSkillBase.OnCooldownStarted
struct FOnCooldownStarted
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	struct FGameplayTag CooldownTag;  // 0x8 (0x8)
	float CooldownDuration;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_PhysicalReductionMod
struct FOnRep_PhysicalReductionMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_RecoverableHealth
struct FOnRep_RecoverableHealth
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_RegularInteractionSpeed
struct FOnRep_RegularInteractionSpeed
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_Resourcefulness
struct FOnRep_Resourcefulness
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_ResourcefulnessMod
struct FOnRep_ResourcefulnessMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_SpellCapacity
struct FOnRep_SpellCapacity
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetBaseAttributeValue
struct FGetBaseAttributeValue
{
	struct ADCCharacterBase* DCCharacterBase;  // 0x0 (0x0)
	struct FGameplayAttribute GameplayAttribute;  // 0x8 (0x8)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool bSuccessfully : 1;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	float ReturnValue;  // 0x44 (0x44)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_SpellCapacityBase
struct FOnRep_SpellCapacityBase
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCShopCurrencyTypeSlotWidgetBase.IsBluestoneShardType
struct FIsBluestoneShardType
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_SpellCapacityMod
struct FOnRep_SpellCapacityMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_SpellCastingSpeed
struct FOnRep_SpellCastingSpeed
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_SpellPayload
struct FOnRep_SpellPayload
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_SpiritMagicalReductionMod
struct FOnRep_SpiritMagicalReductionMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_Strength
struct FOnRep_Strength
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_TotalShield
struct FOnRep_TotalShield
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_UtilityEffectiveness
struct FOnRep_UtilityEffectiveness
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_UtilityEffectivenessBase
struct FOnRep_UtilityEffectivenessBase
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_WaterMagicalReductionMod
struct FOnRep_WaterMagicalReductionMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_WaterMagicResistance
struct FOnRep_WaterMagicResistance
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_WeightLimitAdd
struct FOnRep_WeightLimitAdd
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_WeightLimitBase
struct FOnRep_WeightLimitBase
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.SkillComponent.GetSkillActor
struct FGetSkillActor
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	struct ASkillActor* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_WillBase
struct FOnRep_WillBase
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPlayerController.RequestPlayerCharacterLocation_Server
struct FRequestPlayerCharacterLocation_Server
{
	struct FDCAccountId InAccountId;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAttributeSet.OnRep_WillMod
struct FOnRep_WillMod
{
	struct FGameplayAttributeData OldValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAT_JudgeMusicPlay.JudgeMusicPlay
struct FJudgeMusicPlay
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FName TaskInstanceName;  // 0x8 (0x8)
	struct UInputAction* InInputAction;  // 0x10 (0x10)
	float Duration;  // 0x18 (0x18)
	float GoodSectionStartTime;  // 0x1C (0x1C)
	float GoodSectionEndTime;  // 0x20 (0x20)
	float PerfectSectionStartTime;  // 0x24 (0x24)
	float PerfectSectionEndTime;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct UDCAT_JudgeMusicPlay* ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function DungeonCrawler.DCAT_OverlapActorsInComponent.OverlapActorsInComponent
struct FOverlapActorsInComponent
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct UPrimitiveComponent* OverlapPrimitiveComponent;  // 0x8 (0x8)
	UObject* OverlapTargetClass;  // 0x10 (0x10)
	struct AActor* InIgnoreActor;  // 0x18 (0x18)
	struct UDCAT_OverlapActorsInComponent* ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCAT_OverlapActorsInRadius.OverlapActorsInRadius
struct FOverlapActorsInRadius
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	float Radius;  // 0x8 (0x8)
	struct FName CollisionProfileName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	UObject* OverlapTargetClass;  // 0x18 (0x18)
	struct UDCAT_OverlapActorsInRadius* ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCCharacterBase.GetAccountId
struct FGetAccountId
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAT_PlayMontageAndWaitForEvent.PlayMontageAndWaitForEvent
struct FPlayMontageAndWaitForEvent
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FName TaskInstanceName;  // 0x8 (0x8)
	struct UAnimMontage* MontageToPlay;  // 0x10 (0x10)
	struct FGameplayTagContainer EventTags;  // 0x18 (0x18)
	float Rate;  // 0x38 (0x38)
	struct FName StartSection;  // 0x3C (0x3C)
	char pad_68_1 : 7;  // 0x44 (0x44)
	bool bStopWhenAbilityEnds : 1;  // 0x44 (0x44)
	char pad_69[3];  // 0x45 (0x45)
	float AnimRootMotionTranslationScale;  // 0x48 (0x48)
	float StartTimeSeconds;  // 0x4C (0x4C)
	struct UDCAT_PlayMontageAndWaitForEvent* ReturnValue;  // 0x50 (0x50)


}; 
 
 // Function DungeonCrawler.DCAT_RotateToActor.RotateToActor
struct FRotateToActor
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct AActor* Actor;  // 0x8 (0x8)
	uint8_t HitBox;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	float Speed;  // 0x14 (0x14)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool WithoutPitch : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct UDCAT_RotateToActor* ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCAT_ServerWaitClientTargetData.OnTargetDataReplicatedCallback
struct FOnTargetDataReplicatedCallback
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)
	struct FGameplayTag ActivationTag;  // 0x28 (0x28)


}; 
 
 // Function DungeonCrawler.DCAT_WaitAimDirChangedFromLoc.WaitAimDirectionChangedFromLocation
struct FWaitAimDirectionChangedFromLocation
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FVector InitialAimTargetLocation;  // 0x8 (0x8)
	struct UDCAT_WaitAimDirChangedFromLoc* ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.SkillComponent.CheckSkillReduceCount
struct FCheckSkillReduceCount
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	float ReduceCount;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function DungeonCrawler.DCAT_WaitDelayPausable.AddTimerElapsedTimeRatio
struct FAddTimerElapsedTimeRatio
{
	float AdditionalRatio;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GamePlayerCharacterWidget.OnCurrentActiveSlot
struct FOnCurrentActiveSlot
{
	struct UEquipmentSlotWidget* CurrentActiveWidget;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ProjectileActor.InitArrivalVelocity
struct FInitArrivalVelocity
{
	struct FVector Velocity;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAT_WaitForCharacterUnCrouch.WaitForCharacterUnCrouch
struct FWaitForCharacterUnCrouch
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct UDCAT_WaitForCharacterUnCrouch* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCAT_WaitForInputAction.WaitForInputAction
struct FWaitForInputAction
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct UInputAction* InInputAction;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool OnlyTriggerOnce : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct UDCAT_WaitForInputAction* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCCustomizeItemSkinListWidget.OnSetItemSkinInfoArray
struct FOnSetItemSkinInfoArray
{
	struct TArray<struct FDCItemSkinInfo> ItemSkinInfoArray;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAT_WaitGameplayAbilityActivateOrEnd.OnAbilityEnd
struct FOnAbilityEnd
{
	struct FAbilityEndedData AbilityEndedData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMonsterBase.Interactable
struct FInteractable
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMonsterSpawner.UpdateGameState
struct FUpdateGameState
{
	struct FGameStateData InGameStateData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPerkDataComponent.RemoveRestrictedItemList
struct FRemoveRestrictedItemList
{
	struct FGameplayTagContainer InItemList;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAT_WaitGameplayAbilityActivateOrEnd.WaitForAbilityActivateOrEnd_Query
struct FWaitForAbilityActivateOrEnd_Query
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayTagQuery Query;  // 0x8 (0x8)
	struct AActor* InOptionalExternalTarget;  // 0x50 (0x50)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool TriggerOnce : 1;  // 0x58 (0x58)
	char pad_89[7];  // 0x59 (0x59)
	struct UDCAT_WaitGameplayAbilityActivateOrEnd* ReturnValue;  // 0x60 (0x60)


}; 
 
 // Function DungeonCrawler.DCCharacterBase.GetPerspectiveCameraComponent
struct FGetPerspectiveCameraComponent
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bFirstPersonPerspective : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct UCameraComponent* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCAT_WaitGameplayAbilityActivateOrEnd.WaitForAbilityActivateOrEndWithTagRequirements
struct FWaitForAbilityActivateOrEndWithTagRequirements
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayTagRequirements TagRequirements;  // 0x8 (0x8)
	struct AActor* InOptionalExternalTarget;  // 0x48 (0x48)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool TriggerOnce : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)
	struct UDCAT_WaitGameplayAbilityActivateOrEnd* ReturnValue;  // 0x58 (0x58)


}; 
 
 // Function DungeonCrawler.EquipmentInventoryComponent.OnRep_InventoryData
struct FOnRep_InventoryData
{
	struct FDCEquipmentInventoryData OldInventoryData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItemConsume
struct FGetDesignDataItemConsume
{
	struct FPrimaryAssetId InId;  // 0x0 (0x0)
	struct FDesignDataItemConsume ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCAT_WaitGameplayEffectAdd.WaitGameplayEffectAdded
struct FWaitGameplayEffectAdded
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool TriggerOnce : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct UDCAT_WaitGameplayEffectAdd* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCAT_WaitTargetData.DCWaitTargetData
struct FDCWaitTargetData
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FName TaskInstanceName;  // 0x8 (0x8)
	enum class EGameplayTargetingConfirmation ConfirmationType;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct AGameplayAbilityTargetActor* InTargetActor;  // 0x18 (0x18)
	struct UDCAT_WaitTargetData* ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.DCAT_WaitGameplayTags.GameplayTagCallback
struct FGameplayTagCallback
{
	struct FGameplayTag Tag;  // 0x0 (0x0)
	int32_t NewCount;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.GameSkillSlotWidget.OnUpdateSkillDesc
struct FOnUpdateSkillDesc
{
	struct FText SkillName;  // 0x0 (0x0)
	struct FText SkillDesc;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCAT_WaitGameplayTagsRemoved.WaitGameplayTagsRemoved
struct FWaitGameplayTagsRemoved
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayTagContainer TagContainer;  // 0x8 (0x8)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bIsWaitAnyTag : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct AActor* InOptionalExternalTarget;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bIsOnlyTriggerOnce : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct UDCAT_WaitGameplayTagsRemoved* ReturnValue;  // 0x40 (0x40)


}; 
 
 // Function DungeonCrawler.DCPlayerCharacterBase.GetGender
struct FGetGender
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_CharacterJump.OnMovementModeChange
struct FOnMovementModeChange
{
	enum class EMovementMode MovementMode;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAT_WaitMovementModeChange.WaitMovementModeChange
struct FWaitMovementModeChange
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	enum class EMovementMode NewMode;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool bOnlyTriggerOnce : 1;  // 0x9 (0x9)
	char pad_10[6];  // 0xA (0xA)
	struct UDCAT_WaitMovementModeChange* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCAT_WaitSocketBlockedStateChange.OnSocketSightBlocked
struct FOnSocketSightBlocked
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCAT_WaitSocketBlockedStateChange.OnSocketSightUnblocked
struct FOnSocketSightUnblocked
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCShopItemSlotWidget.GetTooltipWidget
struct FGetTooltipWidget
{
	struct UUserWidget* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCBagItemWidget.IsGold
struct FIsGold
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPlayerController.OnFMsgGameFloorLogNotifyClient
struct FOnFMsgGameFloorLogNotifyClient
{
	struct FGameFloorLogData InGameFloorLogData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCRecruitComponent.OnItemActionEvent
struct FOnItemActionEvent
{
	uint8_t SourceInventoryId;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FDCItemInfo SourceItemInfo;  // 0x8 (0x8)
	uint8_t ActionType;  // 0x120 (0x120)
	char pad_289[7];  // 0x121 (0x121)


}; 
 
 // Function DungeonCrawler.DCRecruitComponent.OnItemMoveEvent
struct FOnItemMoveEvent
{
	uint8_t SourceInventoryId;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FDCItemInfo SourceItemInfo;  // 0x8 (0x8)
	uint8_t TargetInventoryId;  // 0x120 (0x120)
	char pad_289[3];  // 0x121 (0x121)
	int32_t TargetIndex;  // 0x124 (0x124)
	int32_t TargetStack;  // 0x128 (0x128)
	char pad_300[4];  // 0x12C (0x12C)


}; 
 
 // Function DungeonCrawler.ProjectileActor.GetAddEffectToTargetHit
struct FGetAddEffectToTargetHit
{
	struct TArray<struct FPrimaryAssetId> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCInventoryWidgetBase.OnWidgetVisibilityChanged
struct FOnWidgetVisibilityChanged
{
	uint8_t Invisibility;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPostProcessingComponent.OnCameraPostProcessDataTimelineUpdate
struct FOnCameraPostProcessDataTimelineUpdate
{
	float DeltaTime;  // 0x0 (0x0)
	enum class ETimelineDirection InTimelineDirection;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct UMaterialInstanceDynamic* InMIDKey;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCBagWidget.GetGoldAmount
struct FGetGoldAmount
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCInventoryBase.OnRep_Indexes
struct FOnRep_Indexes
{
	struct TArray<int32_t> OldIndexes;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.LobbyUserSlotBase.SetNicknameBlueprint
struct FSetNicknameBlueprint
{
	struct FNickname InNickName;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.TestItemInjectionWidgetBase.OnSearchTextChanged
struct FOnSearchTextChanged
{
	struct FText InText;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ProjectileActor.GameplayTagUpdated
struct FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCCharacterBase.GetCameraComponent
struct FGetCameraComponent
{
	struct UCameraComponent* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCharacterBase.GetCapsuleBottomLocation
struct FGetCapsuleBottomLocation
{
	struct FVector ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCharacterBase.GetCapsuleTopLocation
struct FGetCapsuleTopLocation
{
	struct FVector ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCShopConfirmPurchasePopupBase.GetBluestoneShardVisibility
struct FGetBluestoneShardVisibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCharacterBase.GetGenericTeamId
struct FGetGenericTeamId
{
	struct FGenericTeamId ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCharacterBase.GetNickNameCached
struct FGetNickNameCached
{
	struct FNickname ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCGameStateBase.OnRep_PartyDataArray
struct FOnRep_PartyDataArray
{
	struct TArray<struct FPartyData> OldPartyDataArray;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCharacterBase.GetPartyId
struct FGetPartyId
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemMiscTypeTextMap
struct FGetItemMiscTypeTextMap
{
	struct TMap<struct FGameplayTag, struct FText> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCharacterBase.IsDead
struct FIsDead
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ImpactableComponent.SetImpactableQuery
struct FSetImpactableQuery
{
	struct TArray<struct FPrimaryAssetId> TagQueryDatas;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCharacterBase.OnFMsgGASActorDieNotifyBlueprint
struct FOnFMsgGASActorDieNotifyBlueprint
{
	struct FMsgGASActorDieNotify InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCharacterBase.OnGameState
struct FOnGameState
{
	struct FGameStateData InGameStateData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCharacterBase.ServerSetRemoteViewYaw
struct FServerSetRemoteViewYaw
{
	char InRemoteViewYaw;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCharacterBase.SetIsDead
struct FSetIsDead
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsDead : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCharacterLobbyCapture.GetNickname
struct FGetNickname
{
	struct FNickname ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCharacterLobbyCapture.GetPartyLocation
struct FGetPartyLocation
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.SoundBlueprintLibrary.IsMute
struct FIsMute
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCharacterLobbyCapture.OnLobbyPoseSkinChanged
struct FOnLobbyPoseSkinChanged
{
	struct UDCActionSkinDataAsset* ActionSkinData;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bIsEquipped : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function DungeonCrawler.DCCharacterMovementComponent.AddMovementModifier
struct FAddMovementModifier
{
	struct TArray<struct FPrimaryAssetId> MovementModifiers;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCharacterProduction.OnRep_ItemDataList
struct FOnRep_ItemDataList
{
	struct TArray<struct FString> OldItemAssetIDList;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCharacterSkinComponent.OnRep_Data
struct FOnRep_Data
{
	struct UDCCharacterSkinDataAsset* OldData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCharacterSkinComponent.SetDataForDebug_Server
struct FSetDataForDebug_Server
{
	struct UDCCharacterSkinDataAsset* InData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsControlsWidget.OnMouseSensitivitySliderValueChanged
struct FOnMouseSensitivitySliderValueChanged
{
	float InValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCommunityBlockEntryWidget.ExecuteContextMenu
struct FExecuteContextMenu
{
	uint8_t Option;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPlayerInventoryWidget.GetTitle
struct FGetTitle
{
	struct FText ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCommunityBlockWidget.FindId
struct FFindId
{
	struct FText FindText;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCommunityBlockWidget.GetMaxPage
struct FGetMaxPage
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCWidgetBlueprintLibrary.BroadcastLobbySystemMessage
struct FBroadcastLobbySystemMessage
{
	struct APlayerController* InPlayer;  // 0x0 (0x0)
	struct FText AnnounceText;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCContextComponent.OnContextMenuHolderVisibilityChaned
struct FOnContextMenuHolderVisibilityChaned
{
	uint8_t Visibility;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCustomizeEmoteListWidget.OnSetEmoteIdArray
struct FOnSetEmoteIdArray
{
	struct TArray<struct FDCEmoteInfo> EmoteIdArray;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCustomizeLobbyEmoteRadialSlotWidget.GetPreviewLobbyEmoteVisibility
struct FGetPreviewLobbyEmoteVisibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCustomizeLobbyEmoteRadialSlotWidget.SetLobbyEmoteIconImageAngle
struct FSetLobbyEmoteIconImageAngle
{
	float NewAngle;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCEnhancedInputLocalPlayerSubsystem.GetPlayerMappableInputConfig
struct FGetPlayerMappableInputConfig
{
	struct FGameplayTag ConfigTag;  // 0x0 (0x0)
	struct UPlayerMappableInputConfig* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCTradePhaseDealWidget.OnLocalTraderCheckBoxStateChanged
struct FOnLocalTraderCheckBoxStateChanged
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsChecked : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCCustomizeWidgetBase.AnyTabButtonSelected
struct FAnyTabButtonSelected
{
	struct FName InTabButtonId;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetCharacterBaseItemMap
struct FGetCharacterBaseItemMap
{
	struct FPrimaryAssetId InId;  // 0x0 (0x0)
	struct TMap<struct FPrimaryAssetId, int32_t> BaseItemMap;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataAssetItemRequirement
struct FGetDesignDataAssetItemRequirement
{
	struct FPrimaryAssetId InId;  // 0x0 (0x0)
	struct UDesignDataAssetItemRequirement* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCGameTooltipWithFlavorTextWidget.GetDescriptionVisibility
struct FGetDescriptionVisibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.MusicActor.OnRep_MusicData
struct FOnRep_MusicData
{
	struct FMusicData OldMusicData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataBaseItem
struct FGetDesignDataBaseItem
{
	struct FPrimaryAssetId InId;  // 0x0 (0x0)
	struct FDesignDataBaseItem ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.EquipmentSlotWidget.GetEquipmentSlotIndex
struct FGetEquipmentSlotIndex
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataEmote
struct FGetDesignDataEmote
{
	struct FPrimaryAssetId InId;  // 0x0 (0x0)
	struct FDesignDataEmote ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataGameplayAbility
struct FGetDesignDataGameplayAbility
{
	struct FPrimaryAssetId InId;  // 0x0 (0x0)
	struct FDesignDataGameplayAbility ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataGameplayEffect
struct FGetDesignDataGameplayEffect
{
	struct FPrimaryAssetId InId;  // 0x0 (0x0)
	struct FDesignDataGameplayEffect ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.ItemActor.GetDesignDataItem
struct FGetDesignDataItem
{
	struct FDesignDataItem ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItemProperty
struct FGetDesignDataItemProperty
{
	struct FPrimaryAssetId InId;  // 0x0 (0x0)
	struct FDesignDataItemProperty ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataItemRequirement
struct FGetDesignDataItemRequirement
{
	struct FPrimaryAssetId InId;  // 0x0 (0x0)
	struct FDesignDataItemRequirement ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCMonsterBase.GetDesignDataMonster
struct FGetDesignDataMonster
{
	struct FDesignDataMonster ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataMovementModifier
struct FGetDesignDataMovementModifier
{
	struct FPrimaryAssetId InId;  // 0x0 (0x0)
	struct FDesignDataMovementModifier ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.SoundBlueprintLibrary.SetRTPCValue
struct FSetRTPCValue
{
	struct UObject* InSoundPlayer;  // 0x0 (0x0)
	struct UAkRtpc* RtpcValue;  // 0x8 (0x8)
	float Value;  // 0x10 (0x10)
	int32_t InterpolationTimeMs;  // 0x14 (0x14)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataPerk
struct FGetDesignDataPerk
{
	struct FPrimaryAssetId InId;  // 0x0 (0x0)
	struct FDesignDataPerk ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetDesignDataPerkMap
struct FGetDesignDataPerkMap
{
	struct TMap<struct FPrimaryAssetId, struct FDesignDataPerk> OutDesignDataPerkMap;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.SpellActor.GetDesignDataSpell
struct FGetDesignDataSpell
{
	struct FDesignDataSpell ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetEmoteIdArray
struct FGetEmoteIdArray
{
	struct TArray<struct FPrimaryAssetId> OutEmoteIdArray;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.NickNameWidgetBase.SetNickName
struct FSetNickName
{
	struct FNickname InNickName;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemActorClass
struct FGetItemActorClass
{
	struct AActor* OwnerActor;  // 0x0 (0x0)
	struct FItemData ItemData;  // 0x8 (0x8)
	AItemActor* ReturnValue;  // 0xA8 (0xA8)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemEffectTypeTextMap
struct FGetItemEffectTypeTextMap
{
	struct TMap<struct FGameplayTag, struct FText> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemHandTypeTextMap
struct FGetItemHandTypeTextMap
{
	struct TMap<struct FGameplayTag, struct FText> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemPropertyTypeText
struct FGetItemPropertyTypeText
{
	struct FGameplayTag InItemPropertyTypeTag;  // 0x0 (0x0)
	struct FText ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemRarityText
struct FGetItemRarityText
{
	struct FGameplayTag InItemRarityTag;  // 0x0 (0x0)
	struct FText ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemSkinIdArray
struct FGetItemSkinIdArray
{
	struct TArray<struct FPrimaryAssetId> OutItemSkinIdArray;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPostProcessingComponent.OnCameraPostProcessDataTimelineFinished
struct FOnCameraPostProcessDataTimelineFinished
{
	float DeltaTime;  // 0x0 (0x0)
	enum class ETimelineDirection InTimelineDirection;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct UMaterialInstanceDynamic* InMIDKey;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetItemWeaponTypeTextMap
struct FGetItemWeaponTypeTextMap
{
	struct TMap<struct FGameplayTag, struct FText> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GlobalData.GetAttackTypeText
struct FGetAttackTypeText
{
	struct FGameplayTag AttackType;  // 0x0 (0x0)
	struct FText ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetRandomDesignDataItemId
struct FGetRandomDesignDataItemId
{
	struct FPrimaryAssetId ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetViewNickname
struct FGetViewNickname
{
	struct FNickname Nickname;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.GetViewNicknameColor
struct FGetViewNicknameColor
{
	struct FNickname Nickname;  // 0x0 (0x0)
	struct FLinearColor ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.IsAvailableInteractionWithDCCharacterBase
struct FIsAvailableInteractionWithDCCharacterBase
{
	struct ADCPlayerCharacterBase* Interacter;  // 0x0 (0x0)
	struct ADCCharacterBase* DstActor;  // 0x8 (0x8)
	float OutXYDistance;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool ReturnValue : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.IsStreamingMode
struct FIsStreamingMode
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.PlayWidget.OnLeaderUpdated
struct FOnLeaderUpdated
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsPartyLeader : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCDataBlueprintLibrary.MakePrimaryAssetId
struct FMakePrimaryAssetId
{
	struct FString PrimaryAssetIdStr;  // 0x0 (0x0)
	struct FPrimaryAssetId ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCGameStateBase.GetGameInfo
struct FGetGameInfo
{
	struct FDCGameInfo ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCGameStateBase.OnGameFloorRuleData
struct FOnGameFloorRuleData
{
	struct FGameFloorRuleData InGameFloorRuleData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCGameStateBase.OnGameInfoSet
struct FOnGameInfoSet
{
	struct FDCGameInfo OldGameInfo;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCGameStateBase.OnRep_GameInfo
struct FOnRep_GameInfo
{
	struct FDCGameInfo OldGameInfo;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCGameStateBase.OnRep_GameStateDataArray
struct FOnRep_GameStateDataArray
{
	struct TArray<struct FGameStateData> OldGameStateDataArray;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCGameUserSettings.GetInputConfigByName
struct FGetInputConfigByName
{
	struct FName ConfigName;  // 0x0 (0x0)
	struct UPlayerMappableInputConfig* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCGameStateBase.OnRep_State
struct FOnRep_State
{
	uint8_t OldState;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCGameStateBase.SetDungeonInfo_GameTimeSec
struct FSetDungeonInfo_GameTimeSec
{
	int32_t GameTimeSec;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCDungeonGameState.OnRep_NumPlayers
struct FOnRep_NumPlayers
{
	int32_t OldNumPlayers;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCEnhancedInputLibrary.AddPlayerMappableConfigByTagContainer
struct FAddPlayerMappableConfigByTagContainer
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FGameplayTagContainer InputConfigTags;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCEnhancedInputLibrary.GetDCEnhancedInputLocalPlayerSubSystem
struct FGetDCEnhancedInputLocalPlayerSubSystem
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UDCEnhancedInputLocalPlayerSubsystem* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCEnhancedInputLibrary.GetFirstMappedKeyFromRegisteredInputToAction
struct FGetFirstMappedKeyFromRegisteredInputToAction
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UInputAction* Action;  // 0x8 (0x8)
	struct FKey ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCEnhancedInputLibrary.GetInputAction
struct FGetInputAction
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FGameplayTag InputConfigTag;  // 0x8 (0x8)
	struct FGameplayTag InputTag;  // 0x10 (0x10)
	struct UInputAction* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCGameInstance.OnPostLoadMapWithWorld
struct FOnPostLoadMapWithWorld
{
	struct UWorld* LoadedWorld;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCEnhancedInputLocalPlayerSubsystem.AddPlayerMappableConfigByTag
struct FAddPlayerMappableConfigByTag
{
	struct FGameplayTag InputConfigTag;  // 0x0 (0x0)
	struct FModifyContextOptions Options;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function DungeonCrawler.DCEquipmentSlotWidget.IsWeapon
struct FIsWeapon
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.TimerWidgetBase.OnLeftHour
struct FOnLeftHour
{
	int32_t NewValue;  // 0x0 (0x0)
	int32_t OldValue;  // 0x4 (0x4)


}; 
 
 // Function DungeonCrawler.TimerWidgetBase.OnProgress
struct FOnProgress
{
	float NewValue;  // 0x0 (0x0)
	float OldValue;  // 0x4 (0x4)


}; 
 
 // Function DungeonCrawler.DCGameInstance.OnPreLoadMap
struct FOnPreLoadMap
{
	struct FString MapName;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCGameObjectLinkComponent.RequestToLinkers
struct FRequestToLinkers
{
	struct FObjectLinkRequestEvent ObjectLinkRequestEvent;  // 0x0 (0x0)
	struct TArray<struct FObjectLinkResponeEvent> ReturnValue;  // 0xB0 (0xB0)


}; 
 
 // Function DungeonCrawler.DCGameplayAbilityBase.AddGameplayCueLocalWithParams
struct FAddGameplayCueLocalWithParams
{
	struct FGameplayTag GameplayCueTag;  // 0x0 (0x0)
	struct FGameplayCueParameters Params;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCGameplayAbilityBase.AddGameplayCueWithParams
struct FAddGameplayCueWithParams
{
	struct FGameplayTag GameplayCueTag;  // 0x0 (0x0)
	struct FGameplayCueParameters Params;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCGameplayAbilityBase.ApplyMovementModifier
struct FApplyMovementModifier
{
	struct FGameplayTagContainer ContainerTags;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPlayerController.OnPortalScrollOverlapped
struct FOnPortalScrollOverlapped
{
	struct AFloorPortalScrollBase* Portal;  // 0x0 (0x0)
	struct ADCPlayerCharacterBase* InCharacter;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCGameplayAbilityBase.ExecuteGameplayCueLocalWithParams
struct FExecuteGameplayCueLocalWithParams
{
	struct FGameplayTag GameplayCueTag;  // 0x0 (0x0)
	struct FGameplayCueParameters Params;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCGameplayAbilityBase.GetGameplayTriggerTag
struct FGetGameplayTriggerTag
{
	int32_t Index;  // 0x0 (0x0)
	struct FGameplayTag ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function DungeonCrawler.PlayWidget.OnDungeonSelect
struct FOnDungeonSelect
{
	uint8_t GameDifficultyType;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCGameplayAbilityBase.GetSetByCallerValueInEffectContainerArray
struct FGetSetByCallerValueInEffectContainerArray
{
	struct FGameplayTag ContainerTag;  // 0x0 (0x0)
	struct FGameplayTag SetByCallerDataTag;  // 0x8 (0x8)
	int32_t ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCGameplayAbilityBase.MakeEffectContainerSpec
struct FMakeEffectContainerSpec
{
	struct TArray<struct FDCGameplayEffectContainerSpec> OutContainerSpecArray;  // 0x0 (0x0)
	struct FGameplayTag ContainerTag;  // 0x10 (0x10)
	struct FGameplayEventData EventData;  // 0x18 (0x18)
	int32_t OverrideGameplayLevel;  // 0xC8 (0xC8)
	char pad_204[4];  // 0xCC (0xCC)


}; 
 
 // Function DungeonCrawler.DCGameSpawner.SpawnItemHolder
struct FSpawnItemHolder
{
	struct FPrimaryAssetId InLootDropId;  // 0x0 (0x0)
	struct FPrimaryAssetId InLootDropRateId;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool InbPreview : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct AItemHolderActorBase* ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function DungeonCrawler.DCGameSpawner.SpawnMonster
struct FSpawnMonster
{
	struct FPrimaryAssetId InMonsterId;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool InbPreview : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct ADCMonsterBase* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCIngameInventoryPageWidget.OnLootTargetPlayerEvent
struct FOnLootTargetPlayerEvent
{
	struct ADCPlayerCharacterBase* InPlayer;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCGameSpawner.SpawnProps
struct FSpawnProps
{
	struct FPrimaryAssetId InPropsId;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool InbPreview : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct APropsActorBase* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCGameSpawnerGroup.OnRep_ClientDestroyActorNameArray
struct FOnRep_ClientDestroyActorNameArray
{
	struct TArray<struct FString> OldClientDestroyActorNameArray;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameAlivePlayerCountWidget.OnAlivePlayerCount
struct FOnAlivePlayerCount
{
	int32_t NewValue;  // 0x0 (0x0)
	int32_t OldValue;  // 0x4 (0x4)


}; 
 
 // Function DungeonCrawler.DCGhostTrailActor.SetGhostMaterial
struct FSetGhostMaterial
{
	struct TArray<struct UMeshComponent*> Components;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPostProcessingComponent.FindCameraPostProcessMID
struct FFindCameraPostProcessMID
{
	struct FName InMaterialName;  // 0x0 (0x0)
	struct UMaterialInstanceDynamic* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCGiftCodePopupBase.GetWarningTextVisibility
struct FGetWarningTextVisibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCHitBoxComponent.GetHitResultFromClosestLocationTraceOnMesh
struct FGetHitResultFromClosestLocationTraceOnMesh
{
	struct FHitResult InHitResult;  // 0x0 (0x0)
	struct AActor* Instigator;  // 0xE8 (0xE8)
	struct FHitResult ReturnValue;  // 0xF0 (0xF0)


}; 
 
 // Function DungeonCrawler.DCInventoryContainerComponent.OnInventoryRemoved
struct FOnInventoryRemoved
{
	struct UDCInventoryBase* Inventory;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCInventoryContainerComponent.RemoveInventory_Server
struct FRemoveInventory_Server
{
	uint8_t ID;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCIngameInventoryPageWidget.OnLootTargetMonsterEvent
struct FOnLootTargetMonsterEvent
{
	struct ADCMonsterBase* InMonster;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCIngameInventoryPageWidget.OnTargetCharacterRegistered
struct FOnTargetCharacterRegistered
{
	struct ADCCharacterBase* InCharacter;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCInventorySetWidget.SetIndex
struct FSetIndex
{
	int32_t InIndex;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCStateButtonWidgetBase.SetActive
struct FSetActive
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bState : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SetAggroRate
struct FSetAggroRate
{
	struct ADCCharacterBase* DCCharacterBase;  // 0x0 (0x0)
	float Time;  // 0x8 (0x8)
	float Rate;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function DungeonCrawler.DCInventoryTabButtonWidget.SetEquipment
struct FSetEquipment
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bState : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCItemSkinComponent.AddDataForDebug_Server
struct FAddDataForDebug_Server
{
	struct UDCItemSkinDataAsset* InData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ItemHolderActorBase.OnRep_ItemId
struct FOnRep_ItemId
{
	struct FPrimaryAssetId OldItemId;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCItemTooltipRequirementWidget.IsEmpty
struct FIsEmpty
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCLoadingScreenWidget.GetNumDescs
struct FGetNumDescs
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMerchantRequiredEntryWidget.IsFilled
struct FIsFilled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCLoadingScreenWidget.GetNumImages
struct FGetNumImages
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCLobbyCaptureViewerActor.SetActorRotation
struct FSetActorRotation
{
	float InYaw;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.MailBoxWidgetBase.IsPartyPrivacyOn
struct FIsPartyPrivacyOn
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.PlayerCharacterCaptureActor.SetMeshRotationSpeedMultiplier
struct FSetMeshRotationSpeedMultiplier
{
	float Value;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.PlayerCharacterCaptureActor.SetStartRotateLocation
struct FSetStartRotateLocation
{
	float InStartPosition;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCTradeInventoryWidget.OnInventoryComponentChanged
struct FOnInventoryComponentChanged
{
	struct UDCInventoryComponent* Comp;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMusicSelectGroupWidget.OnCurrentMusicSlotChanged
struct FOnCurrentMusicSlotChanged
{
	struct UGameMusicSlotWidget* InSelectedSlot;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMerchantDealTablePurchaseWidget.IsRequiredItemsFilled
struct FIsRequiredItemsFilled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.EquipmentInventoryComponent.HideEquippedItemActorsInGame
struct FHideEquippedItemActorsInGame
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bHidden : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMerchantDealTablePurchaseWidget.IsTargetItemSet
struct FIsTargetItemSet
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMerchantPageWidget.OnCategoryTabSelected
struct FOnCategoryTabSelected
{
	struct FName TabId;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMerchantPageWidget.OnServiceTypeChanged
struct FOnServiceTypeChanged
{
	uint8_t ServiceType;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPlayerController.AckPlayerCharacterLocation_Client
struct FAckPlayerCharacterLocation_Client
{
	struct FDCAccountId InAccountId;  // 0x0 (0x0)
	struct FVector InPlayerPawnLocation;  // 0x10 (0x10)
	struct FRotator InPlayerPawnRotation;  // 0x28 (0x28)


}; 
 
 // Function DungeonCrawler.DCMerchantRequiredEntryWidget.GetMaxStack
struct FGetMaxStack
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameSkillSlotWidget.OnLinkedPawnDestroyed
struct FOnLinkedPawnDestroyed
{
	struct AActor* InActor;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameInteractionSkillCheckWidget.OnInteractSkillCheckEnd
struct FOnInteractSkillCheckEnd
{
	uint8_t SkillCheckResult;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPlayerController.GetAccountSessionData
struct FGetAccountSessionData
{
	struct FAccountSessionData ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPlayerController.OnExitConfirmed
struct FOnExitConfirmed
{
	uint8_t PopupResult;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMonsterAIController.OnTargetPerceptionInfoUpdated
struct FOnTargetPerceptionInfoUpdated
{
	struct FActorPerceptionUpdateInfo UpdateInfo;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.AddAggro
struct FAddAggro
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct ADCCharacterBase* Target;  // 0x8 (0x8)
	float Point;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool ReturnValue : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterMonsterTargetsByID
struct FFilterMonsterTargetsByID
{
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x0 (0x0)
	struct FPrimaryAssetId ID;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsOverZRange
struct FFilterTargetsOverZRange
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x8 (0x8)
	float ZRange;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool ReturnValue : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsWithinXYRange
struct FFilterTargetsWithinXYRange
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x8 (0x8)
	float XYRange;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool ReturnValue : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.FilterTargetsWithinZRange
struct FFilterTargetsWithinZRange
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x8 (0x8)
	float ZRange;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool ReturnValue : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetAggroMonster
struct FGetAggroMonster
{
	struct ADCCharacterBase* DCCharacterBase;  // 0x0 (0x0)
	struct TArray<struct ADCMonsterBase*> TargetArray;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetAllTargetArray
struct FGetAllTargetArray
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetCurrentAttributeValue
struct FGetCurrentAttributeValue
{
	struct ADCCharacterBase* DCCharacterBase;  // 0x0 (0x0)
	struct FGameplayAttribute GameplayAttribute;  // 0x8 (0x8)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool bSuccessfully : 1;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	float ReturnValue;  // 0x44 (0x44)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetDamageTargetArray
struct FGetDamageTargetArray
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetSightTargetArray
struct FGetSightTargetArray
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.GetSlaveCount
struct FGetSlaveCount
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.IsAvailablePath
struct FIsAvailablePath
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct FVector DstLocation;  // 0x8 (0x8)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.JumpToActor
struct FJumpToActor
{
	struct ADCCharacterBase* DCCharacterBase;  // 0x0 (0x0)
	struct AActor* DstActor;  // 0x8 (0x8)
	float Power;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bFavorHighArc : 1;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool ReturnValue : 1;  // 0x15 (0x15)
	char pad_22[2];  // 0x16 (0x16)


}; 
 
 // Function DungeonCrawler.DCTradeBoxWidget.SetReady
struct FSetReady
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bState : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.PickTopAggroTarget
struct FPickTopAggroTarget
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x8 (0x8)
	struct ADCCharacterBase* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SortTargetsByZRange
struct FSortTargetsByZRange
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x8 (0x8)
	uint8_t MonsterFilterSortingType;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool ReturnValue : 1;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)


}; 
 
 // Function DungeonCrawler.DCMonsterAISystemBlueprintLibrary.SpawnSlave
struct FSpawnSlave
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	ADCMonsterBase* SlaveClass;  // 0x8 (0x8)
	float XYRange;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bSuccessfully : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct ADCCharacterBase* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCMonsterBase.Burrow
struct FBurrow
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMonsterBase.ChangePauseAnims
struct FChangePauseAnims
{
	char Value;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.KarmaReportWidgetBase.OnFMsgWidgetKarmaReportInfoNotifyBlueprint
struct FOnFMsgWidgetKarmaReportInfoNotifyBlueprint
{
	struct FMsgWidgetKarmaReportInfoNotify InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsControlsWidget.OnGameUserSettingControls
struct FOnGameUserSettingControls
{
	struct FGameUserSettingControls NewValue;  // 0x0 (0x0)
	struct FGameUserSettingControls OldValue;  // 0x28 (0x28)


}; 
 
 // Function DungeonCrawler.DCMonsterBase.Death
struct FDeath
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMonsterBase.GetMonsterId
struct FGetMonsterId
{
	struct FPrimaryAssetId ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMonsterBase.InteractableWithoutHit
struct FInteractableWithoutHit
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMonsterBase.OnDamaged
struct FOnDamaged
{
	struct ADCCharacterBase* DCCharacterBase;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMonsterBase.OnRep_MonsterCollisionProfile
struct FOnRep_MonsterCollisionProfile
{
	char OldMonsterCollisionProfile;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMonsterBase.OnRep_OrientRotationToMovement
struct FOnRep_OrientRotationToMovement
{
	char OldOrientRotationToMovement;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_SpellBase.AbilityActivated
struct FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)
	char pad_176_1 : 7;  // 0xB0 (0xB0)
	bool bIsSocketSightBlocked : 1;  // 0xB0 (0xB0)
	char pad_177[7];  // 0xB1 (0xB1)


}; 
 
 // Function DungeonCrawler.DCMonsterSpawner.Spawns
struct FSpawns
{
	struct TArray<struct ADCMonsterBase*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMultiLineEditableTextBox.InsertTextAtCursor
struct FInsertTextAtCursor
{
	struct FString InText;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCMusicTooltipWidget.SetType
struct FSetType
{
	struct FGameplayTag SourceTypeTag;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPartyManager.Add
struct FAdd
{
	struct FDCPartyId PartyId;  // 0x0 (0x0)
	struct FDCAccountId AccountId;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCPartyManager.GetParties
struct FGetParties
{
	struct TArray<struct FDCPartyId> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPartyManager.OnPlayerAdded
struct FOnPlayerAdded
{
	struct FDCPlayerInfo Info;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPartyManager.Remove
struct FRemove
{
	struct FDCPartyId PartyId;  // 0x0 (0x0)
	struct FDCAccountId AccountId;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCPartyManager.Update
struct FUpdate
{
	struct FDCPlayerInfo Info;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPerkDataComponent.AddRestrictedItemList
struct FAddRestrictedItemList
{
	struct FGameplayTagContainer InItemList;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPlayerCharacterBase.ClientShowSystemMessage
struct FClientShowSystemMessage
{
	struct FText MessageText;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPlayerCharacterBase.OnActionSkinChanged
struct FOnActionSkinChanged
{
	struct UDCActionSkinDataAsset* ActionSkinData;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bIsEquipped : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function DungeonCrawler.DCPlayerCharacterBase.ShowHitDirectionUIMessage
struct FShowHitDirectionUIMessage
{
	struct AActor* SourceActor;  // 0x0 (0x0)
	struct FVector HitDirection;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCPlayerController.ExitUser
struct FExitUser
{
	uint8_t ExitType;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPlayerController.ExitUser_Server
struct FExitUser_Server
{
	uint8_t ExitType;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPlayerController.NotifySystemMessage_Client
struct FNotifySystemMessage_Client
{
	struct FText SystemMessage;  // 0x0 (0x0)
	float Duration;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function DungeonCrawler.SkillComponent.UpdateSkillCount
struct FUpdateSkillCount
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	int32_t Count;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function DungeonCrawler.DCPlayerController.OnAnyPlayerEscaped
struct FOnAnyPlayerEscaped
{
	struct FDCPlayerInfo NewPlayerInfo;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPlayerController.OnDungeonDownOverlapped
struct FOnDungeonDownOverlapped
{
	struct ADCPlayerCharacterBase* InCharacter;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function DungeonCrawler.DCPlayerController.OnDungeonEscapeOverlapped
struct FOnDungeonEscapeOverlapped
{
	struct ADCPlayerCharacterBase* InCharacter;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function DungeonCrawler.DCPlayerController.OnFMsgGameKillLogNotifyClient
struct FOnFMsgGameKillLogNotifyClient
{
	struct FGameKillLogData InGameKillLogData;  // 0x0 (0x0)
	uint8_t KillReason;  // 0xE8 (0xE8)
	char pad_233[7];  // 0xE9 (0xE9)


}; 
 
 // Function DungeonCrawler.DCPlayerController.OnUserExited_Client
struct FOnUserExited_Client
{
	uint8_t ExitType;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.PropsActorBase.GetDesignDataAssetProps
struct FGetDesignDataAssetProps
{
	struct UDesignDataAssetProps* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPlayerController.ServerDebugSpawnItem
struct FServerDebugSpawnItem
{
	struct FString InKey;  // 0x0 (0x0)
	struct AActor* SpawnActor;  // 0x10 (0x10)
	struct FPrimaryAssetId SpawnItemAssetId;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.DCPlayerController.ShowSpectatingPopup
struct FShowSpectatingPopup
{
	struct FDCPlayerInfo InPlayerInfo;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPlayerController.SpawnResurrectionCharacterForDebug_Server
struct FSpawnResurrectionCharacterForDebug_Server
{
	struct FDCAccountId InAccountId;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bRecoverItem : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	int32_t LifeSpan;  // 0x14 (0x14)


}; 
 
 // Function DungeonCrawler.DCPlayerInfoHolder.OnRep_PlayerInfo
struct FOnRep_PlayerInfo
{
	struct FDCPlayerInfo OldPlayerInfo;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPlayerInventoryWidget.GetTitleColor
struct FGetTitleColor
{
	struct FLinearColor ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCPostProcessingComponent.AddMeshHalfTranslucent
struct FAddMeshHalfTranslucent
{
	struct USkeletalMeshComponent* InMesh;  // 0x0 (0x0)
	struct UMaterialInterface* InMaterial;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool IsRenderingPriority : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	int32_t ReturnValue;  // 0x14 (0x14)


}; 
 
 // Function DungeonCrawler.DCPostProcessingComponent.PlayCameraPostProcess
struct FPlayCameraPostProcess
{
	struct UMaterialInstanceDynamic* InMIDKey;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ItemRichTextBlockDecorator.GetItemTextBlockStyle
struct FGetItemTextBlockStyle
{
	struct FGameplayTag InRarityType;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FTextBlockStyle ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.DCPostProcessingComponent.RemoveCameraPostProcess
struct FRemoveCameraPostProcess
{
	struct UMaterialInstanceDynamic* InMIDKey;  // 0x0 (0x0)
	struct FName InMaterialName;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.DCPostProcessingComponent.RemoveMeshHalfTranslucent
struct FRemoveMeshHalfTranslucent
{
	struct USkeletalMeshComponent* InMesh;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool IsResetMeshPriority : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	int32_t ReturnValue;  // 0xC (0xC)


}; 
 
 // Function DungeonCrawler.DCPostProcessingComponent.StopCameraPostProcess
struct FStopCameraPostProcess
{
	struct UMaterialInstanceDynamic* InMIDKey;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCReportPlayerChecklistSlotWidget.HandleChangedCheckState
struct FHandleChangedCheckState
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bNewState : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCShopConfirmPurchasePopupBase.GetRedstoneShardVisibility
struct FGetRedstoneShardVisibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCShopCurrencyTypeSelectPopupBase.OnCurrencySelected
struct FOnCurrencySelected
{
	uint8_t CurrencyType;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCShopCurrencyTypeSlotWidgetBase.IsRedstoneShardType
struct FIsRedstoneShardType
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCShopWidgetBase.CanPurchase
struct FCanPurchase
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCShopWidgetBase.OnPreviewSwitched
struct FOnPreviewSwitched
{
	uint8_t ItemType;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCShowingKeyWidgetBase.HandleInputMethodChanged
struct FHandleInputMethodChanged
{
	uint8_t InInputType;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCSimpleTooltipWidget.GetTooltipColor
struct FGetTooltipColor
{
	struct FSlateColor ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCSkeletalMeshComponent.SetAffectNavigation
struct FSetAffectNavigation
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bRelevant : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.LoginWidget.OnTextChangedLoginId
struct FOnTextChangedLoginId
{
	struct FText InLoginId;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCTabButtonWidgetBase.OnSelectedChanged
struct FOnSelectedChanged
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInIsSelected : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCTabListWidgetBase.OnTabButtonSelected
struct FOnTabButtonSelected
{
	struct FName TabId;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCTargetType.GetTargets
struct FGetTargets
{
	struct AActor* TargetingOwnerActor;  // 0x0 (0x0)
	struct AActor* TargetingAvatarActor;  // 0x8 (0x8)
	struct FGameplayEventData EventData;  // 0x10 (0x10)
	struct TArray<struct FHitResult> OutHitResults;  // 0xC0 (0xC0)
	struct TArray<struct AActor*> OutActors;  // 0xD0 (0xD0)


}; 
 
 // Function DungeonCrawler.DCTradeBoxWidget.IsEnableCheckBox
struct FIsEnableCheckBox
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCTradePhaseConfirmWidget.OnResponseLocalTraderConfirmRequestResult
struct FOnResponseLocalTraderConfirmRequestResult
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bRequestSucceed : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCWidgetBlueprintLibrary.BroadcastSystemMessageNotify
struct FBroadcastSystemMessageNotify
{
	struct APlayerController* InPlayer;  // 0x0 (0x0)
	struct FText OutputMessage;  // 0x8 (0x8)
	float Duration;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function DungeonCrawler.DCWidgetBlueprintLibrary.MakePopupMessageReqeust
struct FMakePopupMessageReqeust
{
	UDCCommonActivatableWidgetBase* WidgetClass;  // 0x0 (0x0)
	struct UPopupDataBase* PopupData;  // 0x8 (0x8)
	struct FMsgWidgetPopupMessageReqeust ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.PropsActorBase.SetPropsId
struct FSetPropsId
{
	struct FPrimaryAssetId InPropsId;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DescData.GetExecImpactPower
struct FGetExecImpactPower
{
	struct UDescDataParam* InDescDataParam;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function DungeonCrawler.DesignDataAssetItemRequirement.GetUnmetItemRequirements
struct FGetUnmetItemRequirements
{
	struct FPrimaryAssetId PlayerCharacterId;  // 0x0 (0x0)
	struct UDCAttributeSet* AttributeSet;  // 0x10 (0x10)
	struct TArray<struct FPrimaryAssetId> PerkIdArray;  // 0x18 (0x18)
	struct TArray<uint8_t> ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function DungeonCrawler.DesignDataAssetItemRequirement.IsTargetFulfilledAllRequirements
struct FIsTargetFulfilledAllRequirements
{
	struct FDesignDataItem DesignDataItem;  // 0x0 (0x0)
	struct AActor* TargetActor;  // 0x188 (0x188)
	char pad_400_1 : 7;  // 0x190 (0x190)
	bool ReturnValue : 1;  // 0x190 (0x190)
	char pad_401[7];  // 0x191 (0x191)


}; 
 
 // Function DungeonCrawler.DesignDataAssetItemBundleInfo.GetBundleArtAssetByCount
struct FGetBundleArtAssetByCount
{
	int32_t ItemCount;  // 0x0 (0x0)
	struct FPrimaryAssetId ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function DungeonCrawler.EmoteComponent.OnRep_EmoteSlotInfoArray
struct FOnRep_EmoteSlotInfoArray
{
	struct TArray<struct FDCEmoteSlotInfo> OldEmoteSlotInfoArray;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.EquipmentInventoryComponent.GetCurrentActiveSlotType
struct FGetCurrentActiveSlotType
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_PlayerSpellCastBase.ServerReceivedTargetData
struct FServerReceivedTargetData
{
	struct FGameplayTag InEffectTag;  // 0x0 (0x0)
	struct FGameplayTag InChannelTag;  // 0x8 (0x8)
	struct FGameplayAbilityTargetDataHandle InData;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.EquipmentInventoryComponent.GetCurrentEquippedItemActors
struct FGetCurrentEquippedItemActors
{
	struct TArray<struct AItemActor*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.EquipmentInventoryComponent.GetItemsBySlotType
struct FGetItemsBySlotType
{
	struct FGameplayTag ItemSlotType;  // 0x0 (0x0)
	struct TArray<struct UItem*> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.EquipmentInventoryComponent.OnRep_EquippedItemActors
struct FOnRep_EquippedItemActors
{
	struct TArray<struct AItemActor*> OldEquippedItemActors;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.EquipmentInventoryGroupWidget.OnItemDragOver
struct FOnItemDragOver
{
	struct FItemData ItemData;  // 0x0 (0x0)
	struct FVector2D DragScreenPos;  // 0xA0 (0xA0)
	struct FVector2D DragWidgetScreenPos;  // 0xB0 (0xB0)
	struct FVector2D DragWidgetAbsoluteSize;  // 0xC0 (0xC0)


}; 
 
 // Function DungeonCrawler.EquipmentSlotWidget.OnFinishedItemDataSet
struct FOnFinishedItemDataSet
{
	struct FItemData InItemData;  // 0x0 (0x0)
	struct FGameplayTag HandType;  // 0xA0 (0xA0)
	struct FGameplayTag SlotType;  // 0xA8 (0xA8)
	struct FItemInventorySize InventorySize;  // 0xB0 (0xB0)


}; 
 
 // Function DungeonCrawler.EquipmentSlotWidget.OnItemSlotActivate
struct FOnItemSlotActivate
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bActivate : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.EquipmentSlotWidget.SetActiveHoverImage
struct FSetActiveHoverImage
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bActivate : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.EquipmentSlotWidget.SetPreviewItemWidget
struct FSetPreviewItemWidget
{
	struct FPrimaryAssetId ItemId;  // 0x0 (0x0)
	float Duration;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.EquipmentWeaponSlotSetWidget.SetActivePrimaryHoverImage
struct FSetActivePrimaryHoverImage
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bActivate : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ExpandableInventoryComponent.SetExpandable
struct FSetExpandable
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bCanExpand : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.FloorPortalScrollBase.ClosePortalScroll
struct FClosePortalScroll
{
	struct ADCPlayerCharacterBase* Character;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameActorStatusSlotWidget.OnActorStatusData
struct FOnActorStatusData
{
	struct FActorStatusData NewValue;  // 0x0 (0x0)
	struct FActorStatusData OldValue;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.GameAmmoWidget.GetCurrentAmmoCount
struct FGetCurrentAmmoCount
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameAmmoWidget.GetMaxAmmoCount
struct FGetMaxAmmoCount
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameCrossHairWidget.OnChangeCrossHairInfo
struct FOnChangeCrossHairInfo
{
	struct FGameplayTag WeaponTypeTag;  // 0x0 (0x0)
	float ChangeAngle;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool IsPinPoint : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	float RotateTime;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.GameCrossHairWidget.OnChangeToRangeCrossHairAndPullAction
struct FOnChangeToRangeCrossHairAndPullAction
{
	struct FGameplayTag WeaponTypeTag;  // 0x0 (0x0)
	struct FGameplayTag ItemUtilityTag;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.GameCrossHairWidget.OnCrossHairVisability
struct FOnCrossHairVisability
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsVisablile : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool SetDefault : 1;  // 0x1 (0x1)


}; 
 
 // Function DungeonCrawler.GameCrossHairWidget.OnPlayShootCrossHair
struct FOnPlayShootCrossHair
{
	float Rate;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameEmoteSlotWidget.SetEmoteData
struct FSetEmoteData
{
	struct UDCEmoteDataAsset* InDesignDataEmote;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameHitDirectionWidget.SetHitDirection
struct FSetHitDirection
{
	struct FVector Direction;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameInteractionDescriptionWidget.OnInputType
struct FOnInputType
{
	uint8_t NewValue;  // 0x0 (0x0)
	uint8_t OldValue;  // 0x1 (0x1)


}; 
 
 // Function DungeonCrawler.GameInteractionDescriptionWidget.OnInteractTargetData
struct FOnInteractTargetData
{
	struct FInteractTargetData NewValue;  // 0x0 (0x0)
	struct FInteractTargetData OldValue;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.GameInventoryGroupWidget.OnItemDropOne
struct FOnItemDropOne
{
	struct FItemData ItemData;  // 0x0 (0x0)
	struct AActor* OldOwnerActor;  // 0xA0 (0xA0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionComboBoxWidget.AddComboBox
struct FAddComboBox
{
	struct FString InComboBoxData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.GetPrimaryGamepadFocusWidget
struct FGetPrimaryGamepadFocusWidget
{
	struct UWidget* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionComboBoxWidget.GetSelectedComboBoxText
struct FGetSelectedComboBoxText
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionComboBoxWidget.SetComboBoxIndex
struct FSetComboBoxIndex
{
	int32_t InIndex;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionPopupWidget.SetDetailText
struct FSetDetailText
{
	struct FText InDetailText;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.UpdateButtonText
struct FUpdateButtonText
{
	struct FText LeftText;  // 0x0 (0x0)
	struct FText RightText;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.GameMenuOptionPopupWidget.UpdateDetailText
struct FUpdateDetailText
{
	struct FText InDetailText;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsAudioWidget.OnBackgroundMusicChanged
struct FOnBackgroundMusicChanged
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsToggle : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsAudioWidget.OnEffectVolumeValueChanged
struct FOnEffectVolumeValueChanged
{
	float NewValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsAudioWidget.OnGameUserSettingAudiosChanged
struct FOnGameUserSettingAudiosChanged
{
	struct FGameUserSettingAudios InGameUserSettingAudios;  // 0x0 (0x0)
	struct FGameUserSettingAudios InOldGameUserSettingAudios;  // 0x28 (0x28)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool bInForce : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsAudioWidget.OnMusicVolumeValueChanged
struct FOnMusicVolumeValueChanged
{
	float NewValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsAudioWidget.OnVoipModeChanged
struct FOnVoipModeChanged
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsToggle : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsAudioWidget.OnVoipOnOffChanged
struct FOnVoipOnOffChanged
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsToggle : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsAudioWidget.OnVoipOutputVolumeValueChanged
struct FOnVoipOutputVolumeValueChanged
{
	float NewValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsAudioWidget.OnVoipSendModeChanged
struct FOnVoipSendModeChanged
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsToggle : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsAudioWidget.UpdateWindowFocusChanged
struct FUpdateWindowFocusChanged
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsFocus : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool IsBackgroundOption : 1;  // 0x1 (0x1)
	char pad_2[2];  // 0x2 (0x2)
	float TotalVolume;  // 0x4 (0x4)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsControlsWidget.OnInvertMouseVerticalAxisClicked
struct FOnInvertMouseVerticalAxisClicked
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsClick : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsControlsWidget.OnStreamingModeClicked
struct FOnStreamingModeClicked
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsClick : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsInputBindSlotWidget.ChangeBinding
struct FChangeBinding
{
	int32_t InKeyBindSlot;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FKey InKey;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsInputBindSlotWidget.HandlePrimaryKeyPressed
struct FHandlePrimaryKeyPressed
{
	struct FKey InKey;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_SpellBase.FireProjectile
struct FFireProjectile
{
	struct FHitResult HitResult;  // 0x0 (0x0)
	AProjectileActor* ProjectileActorClass;  // 0xE8 (0xE8)
	struct AProjectileActor* ReturnValue;  // 0xF0 (0xF0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionSliderWidget.ExtractOnlyNumberics
struct FExtractOnlyNumberics
{
	struct FString Message;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool IsInteger : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FString ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.GameMenuOptionSliderWidget.GetOptionValue
struct FGetOptionValue
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionSliderWidget.GetOptionValuePercent
struct FGetOptionValuePercent
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionSliderWidget.SetOptionValue
struct FSetOptionValue
{
	float InValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionSliderWidget.UpdateSliderValue
struct FUpdateSliderValue
{
	float NewValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionSlotWidget.OnSelectedSlotIdx
struct FOnSelectedSlotIdx
{
	int32_t NewValue;  // 0x0 (0x0)
	int32_t OldValue;  // 0x4 (0x4)


}; 
 
 // Function DungeonCrawler.GameMenuOptionSlotWidget.SetSelectedSlotIdx
struct FSetSelectedSlotIdx
{
	int32_t InSlotIdx;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.GetQualityLevel
struct FGetQualityLevel
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.OnQualityLevel
struct FOnQualityLevel
{
	int32_t NewValue;  // 0x0 (0x0)
	int32_t OldValue;  // 0x4 (0x4)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsVideosSlotWidget.SetQualityLevel
struct FSetQualityLevel
{
	int32_t InQualityLevel;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsWidget.OnInputButtonChecked
struct FOnInputButtonChecked
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsChecked : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsWidget.OnToggled
struct FOnToggled
{
	uint8_t Invisibility;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionsWidget.OnVideoButtonChecked
struct FOnVideoButtonChecked
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsChecked : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMenuOptionToggleSwitchWidget.SetToggleSwitch
struct FSetToggleSwitch
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InSwitch : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMiniMapWidget.OnMiniMapDeathSwarmData
struct FOnMiniMapDeathSwarmData
{
	struct FMiniMapDeathSwarmData NewValue;  // 0x0 (0x0)
	struct FMiniMapDeathSwarmData OldValue;  // 0x38 (0x38)


}; 
 
 // Function DungeonCrawler.MusicSlotWidgetBase.OnMusicDataChanged
struct FOnMusicDataChanged
{
	struct FMusicData InMusicData;  // 0x0 (0x0)
	struct FDesignDataMusic InDesignDataMusic;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.MusicActor.SetMusicData
struct FSetMusicData
{
	struct FMusicData NewMusicData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameMusicPlayBarWidget.OnMusicJudgeNotify
struct FOnMusicJudgeNotify
{
	uint8_t Judge;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float PastSectionRatio;  // 0x4 (0x4)
	float NextSectionRatio;  // 0x8 (0x8)
	float JudgePositionRatio;  // 0xC (0xC)


}; 
 
 // Function DungeonCrawler.GameMusicPlayBarWidget.OnMusicPlaySucceed
struct FOnMusicPlaySucceed
{
	uint8_t Judge;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GamePartyManagePartyMemberWidget.OnAccountDataReplication
struct FOnAccountDataReplication
{
	struct FAccountDataReplication NewValue;  // 0x0 (0x0)
	struct FAccountDataReplication OldValue;  // 0x78 (0x78)


}; 
 
 // Function DungeonCrawler.GamePartyManagePartyWidget.OnPartyData
struct FOnPartyData
{
	struct FPartyData NewValue;  // 0x0 (0x0)
	struct FPartyData OldValue;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.GamePlayerEquipSlotWidget.OnQuickSlotDataChanged
struct FOnQuickSlotDataChanged
{
	uint8_t Type;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t Index;  // 0x4 (0x4)


}; 
 
 // Function DungeonCrawler.GameSkillSlotWidget.GetSkillChargedPercent
struct FGetSkillChargedPercent
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameSkillSlotWidget.GetSkillSlotCooldownDuration
struct FGetSkillSlotCooldownDuration
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameSkillSlotWidget.GetSkillSlotCooldownPercent
struct FGetSkillSlotCooldownPercent
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameSkillSlotWidget.OnUpdateSkillArtData
struct FOnUpdateSkillArtData
{
	struct UArtDataSkill* SkillArtData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ItemRandomGenerateComponent.DropItem
struct FDropItem
{
	int64_t ItemUniqueId;  // 0x0 (0x0)
	struct AActor* Owner;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.GameSpellSelectGroupWidget.OnCurrentSpellSlotChanged
struct FOnCurrentSpellSlotChanged
{
	struct UGameSpellSlotWidget* InSelectedSlot;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameTavernStartTimerWidget.OnPlayerCount
struct FOnPlayerCount
{
	int32_t NewValue;  // 0x0 (0x0)
	int32_t OldValue;  // 0x4 (0x4)


}; 
 
 // Function DungeonCrawler.GameTavernStartTimerWidget.OnPlayerLimit
struct FOnPlayerLimit
{
	int32_t NewValue;  // 0x0 (0x0)
	int32_t OldValue;  // 0x4 (0x4)


}; 
 
 // Function DungeonCrawler.GameTestComponent.ClientMsgClassItemMoveRequest
struct FClientMsgClassItemMoveRequest
{
	struct FMsgGameTestClassItemMoveRequest InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameTestComponent.ClientMsgClassItemMoveResponse
struct FClientMsgClassItemMoveResponse
{
	struct FMsgGameTestClassItemMoveResponse InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameTestComponent.ClientMsgClassLevelInfoRequest
struct FClientMsgClassLevelInfoRequest
{
	struct FMsgGameTestClassLevelInfoRequest InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameTestComponent.ClientMsgClassLevelInfoResponse
struct FClientMsgClassLevelInfoResponse
{
	struct FMsgGameTestClassLevelInfoResponse InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameTestComponent.ClientMsgClassMusicListRequest
struct FClientMsgClassMusicListRequest
{
	struct FMsgGameTestClassMusicListRequest InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameTestComponent.ClientMsgClassMusicListResponse
struct FClientMsgClassMusicListResponse
{
	struct FMsgGameTestClassMusicListResponse InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.InteractableTargetComponent.UnregisterInteracter
struct FUnregisterInteracter
{
	struct AActor* InteractingActor;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameTestComponent.ClientMsgClassMusicSlotMoveRequest
struct FClientMsgClassMusicSlotMoveRequest
{
	struct FMsgGameTestClassMusicSlotMoveRequest InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameTestComponent.ClientMsgClassPerkListRequest
struct FClientMsgClassPerkListRequest
{
	struct FMsgGameTestClassPerkListRequest InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameTestComponent.ClientMsgClassSpellListRequest
struct FClientMsgClassSpellListRequest
{
	struct FMsgGameTestClassSpellListRequest InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameTestComponent.ClientMsgClassSpellSequenceChangeRequest
struct FClientMsgClassSpellSequenceChangeRequest
{
	struct FMsgGameTestClassSpellSequenceChangeRequest InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.TestItemInjectionWidgetBase.OnGenerateCountTextChanged
struct FOnGenerateCountTextChanged
{
	struct FText InText;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameTestComponent.ClientMsgClassSpellSequenceChangeResponse
struct FClientMsgClassSpellSequenceChangeResponse
{
	struct FMsgGameTestClassSpellSequenceChangeResponse InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameTestComponent.ClientMsgClassSpellSlotMoveRequest
struct FClientMsgClassSpellSlotMoveRequest
{
	struct FMsgGameTestClassSpellSlotMoveRequest InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameTestComponent.ClientMsgClassSpellSlotMoveResponse
struct FClientMsgClassSpellSlotMoveResponse
{
	struct FMsgGameTestClassSpellSlotMoveResponse InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameTestComponent.MsgGameTestChangePlayerCharacterClassRequest
struct FMsgGameTestChangePlayerCharacterClassRequest
{
	struct FMsgGameTestChangePlayerCharacterClassRequest InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GameTestComponent.MsgGameTestChangePlayerCharacterClassResponse
struct FMsgGameTestChangePlayerCharacterClassResponse
{
	struct FMsgGameTestChangePlayerCharacterClassResponse InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_ReversibleChangeIdle.OnCompleted
struct FOnCompleted
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.GA_ReloadAmmoBase.ReceivedEvent
struct FReceivedEvent
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.GA_AuraBase.OnAntiAuraOverlapBegin
struct FOnAntiAuraOverlapBegin
{
	struct UPrimitiveComponent* OverlappedComp;  // 0x0 (0x0)
	struct AActor* Other;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool bFromSweep : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct FHitResult SweepResult;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.GA_AuraBase.OnAuraOverlapBegin
struct FOnAuraOverlapBegin
{
	struct UPrimitiveComponent* OverlappedComp;  // 0x0 (0x0)
	struct AActor* Other;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool bFromSweep : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct FHitResult SweepResult;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.GA_AuraBase.OnAuraOverlapEnd
struct FOnAuraOverlapEnd
{
	struct UPrimitiveComponent* OverlappedComp;  // 0x0 (0x0)
	struct AActor* Other;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function DungeonCrawler.GA_RangedAttackBase.CreatedProjectile
struct FCreatedProjectile
{
	struct AProjectileActor* Projectile;  // 0x0 (0x0)
	struct FHitResult HitResult;  // 0x8 (0x8)
	struct FGameplayTag EventTag;  // 0xF0 (0xF0)


}; 
 
 // Function DungeonCrawler.GA_RangedAttackBase.GetProjectileActorClass
struct FGetProjectileActorClass
{
	AProjectileActor* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_RangedAttackBase.UpdatedRangedWeaponCrosshairs
struct FUpdatedRangedWeaponCrosshairs
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_ReversibleChangeIdle.OnBlendOut
struct FOnBlendOut
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.GA_Equip.OnMontageFinished
struct FOnMontageFinished
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.GA_HuntingTrapDisarmPassiveBase.SetDisarmTarget
struct FSetDisarmTarget
{
	struct APropsActorBase* TargetHuntingTrap;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_ItemConsumeBase.ConsumeEventReceived
struct FConsumeEventReceived
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.GA_ItemConsumeBase.OnConsumeMontageCompleted
struct FOnConsumeMontageCompleted
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.GA_ItemConsumeBase.OnConsumeStartEventReceived
struct FOnConsumeStartEventReceived
{
	float ConsumeDuration;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.LoginWidget.IsUsingPlatform
struct FIsUsingPlatform
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_PlayerSpellCastBase.ClientReceivedTargetData
struct FClientReceivedTargetData
{
	struct FGameplayTag InEffectTag;  // 0x0 (0x0)
	struct FGameplayTag InChannelTag;  // 0x8 (0x8)
	struct FGameplayAbilityTargetDataHandle InData;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.GA_PlayerSpellCastBase.OnInterrupted
struct FOnInterrupted
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.GA_ProjectileCollision.ReceivedTargetData
struct FReceivedTargetData
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_MusicBase.ApplyToTarget
struct FApplyToTarget
{
	struct FHitResult HitResult;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_SpellBase.GetRange
struct FGetRange
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_MusicInstantBase.OnTargetActorOverlap
struct FOnTargetActorOverlap
{
	struct TArray<struct AActor*> InTargetActors;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_PickUp.OnPickedUp
struct FOnPickedUp
{
	struct AActor* ItemHolderToPickUp;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bShouldDestroy : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function DungeonCrawler.GA_PlayerSpellCastBase.OnChannelingAction
struct FOnChannelingAction
{
	int32_t ActionCounter;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_PlayerSkillBase.GetCurrentDesignDataSkill
struct FGetCurrentDesignDataSkill
{
	struct FDesignDataSkill ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_PlayerSkillBase.OnCooldownTagApplied
struct FOnCooldownTagApplied
{
	struct FGameplayTag EffectGameplayTag;  // 0x0 (0x0)
	struct FActiveGameplayEffectHandle EffectHandle;  // 0x8 (0x8)
	int32_t NewStackCount;  // 0x10 (0x10)
	int32_t PreviousStackCount;  // 0x14 (0x14)


}; 
 
 // Function DungeonCrawler.GA_PlayerSkillBase.OnSkillActivateNotify
struct FOnSkillActivateNotify
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_PlayerSkillBase.ServerOnSkillActivate
struct FServerOnSkillActivate
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	struct FGameplayTag CooldownTag;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.GA_PlayerSkillChannelingBase.ServerOnChannelingAction
struct FServerOnChannelingAction
{
	int32_t ActionCount;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_PlayerSpellCastBase.SendActivateSpellCrossHairNotify
struct FSendActivateSpellCrossHairNotify
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsActivate : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_ProjectileCollision.TargetDataReceived
struct FTargetDataReceived
{
	struct FHitResult Hit;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_ProjectileCollision.UpdateIgnoreActors
struct FUpdateIgnoreActors
{
	struct AActor* InCheckActor;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_ReloadAmmoBase.ActivateCrossHairPullAnimationByCrossbow
struct FActivateCrossHairPullAnimationByCrossbow
{
	float ActionSpeed;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_SequenceDamageBase.OnDamageEvent
struct FOnDamageEvent
{
	struct AActor* TargetActor;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_SpellBase.CastToTarget
struct FCastToTarget
{
	struct FHitResult HitResult;  // 0x0 (0x0)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool bShouldNotEndAbilityOnCasted : 1;  // 0xE8 (0xE8)
	char pad_233_1 : 7;  // 0xE9 (0xE9)
	bool bUseExecuteGameplayCue : 1;  // 0xE9 (0xE9)
	char pad_234[6];  // 0xEA (0xEA)


}; 
 
 // Function DungeonCrawler.GA_SpellBase.GetAimRadius
struct FGetAimRadius
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_SpellBase.IsSightBlocked
struct FIsSightBlocked
{
	struct FHitResult HitResult;  // 0x0 (0x0)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool ReturnValue : 1;  // 0xE8 (0xE8)
	char pad_233[7];  // 0xE9 (0xE9)


}; 
 
 // Function DungeonCrawler.GA_SpellBase.IsSocketSightBlocked
struct FIsSocketSightBlocked
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.GA_WearBase.OnChangingMontageCompleted
struct FOnChangingMontageCompleted
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.IMUtilBlueprintLibrary.GetServerWorldTimeSeconds
struct FGetServerWorldTimeSeconds
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function DungeonCrawler.IMUtilBlueprintLibrary.IsServer
struct FIsServer
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function DungeonCrawler.IMUtilBlueprintLibrary.MakeTextwithParam2
struct FMakeTextwithParam2
{
	struct FText Text;  // 0x0 (0x0)
	struct FText Param1;  // 0x18 (0x18)
	struct FText Param2;  // 0x30 (0x30)
	struct FText ReturnValue;  // 0x48 (0x48)


}; 
 
 // Function DungeonCrawler.IMUtilBlueprintLibrary.MakeTextwithParam3
struct FMakeTextwithParam3
{
	struct FText Text;  // 0x0 (0x0)
	struct FText Param1;  // 0x18 (0x18)
	struct FText Param2;  // 0x30 (0x30)
	struct FText Param3;  // 0x48 (0x48)
	struct FText ReturnValue;  // 0x60 (0x60)


}; 
 
 // Function DungeonCrawler.IMUtilBlueprintLibrary.MakeTextwithParam4
struct FMakeTextwithParam4
{
	struct FText Text;  // 0x0 (0x0)
	struct FText Param1;  // 0x18 (0x18)
	struct FText Param2;  // 0x30 (0x30)
	struct FText Param3;  // 0x48 (0x48)
	struct FText Param4;  // 0x60 (0x60)
	struct FText ReturnValue;  // 0x78 (0x78)


}; 
 
 // Function DungeonCrawler.IMUtilBlueprintLibrary.MakeTextwithParam5
struct FMakeTextwithParam5
{
	struct FText Text;  // 0x0 (0x0)
	struct FText Param1;  // 0x18 (0x18)
	struct FText Param2;  // 0x30 (0x30)
	struct FText Param3;  // 0x48 (0x48)
	struct FText Param4;  // 0x60 (0x60)
	struct FText Param5;  // 0x78 (0x78)
	struct FText ReturnValue;  // 0x90 (0x90)


}; 
 
 // Function DungeonCrawler.InteractableTargetComponent.GetData
struct FGetData
{
	struct FGameplayTag StateTag;  // 0x0 (0x0)
	struct FInteractionData ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.InteractableTargetComponent.GetInteractability
struct FGetInteractability
{
	struct AActor* Interacter;  // 0x0 (0x0)
	uint8_t ReturnValue;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function DungeonCrawler.InteractableTargetComponent.GetInteractTargetData
struct FGetInteractTargetData
{
	struct FInteractTargetData ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.InteractableTargetComponent.IsDetectable
struct FIsDetectable
{
	struct AActor* Interacter;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function DungeonCrawler.InteractableTargetComponent.SetInteractionData
struct FSetInteractionData
{
	struct FDesignDataPropsInteract InteractionData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.InventoryLootingWidget.OnLootingPlayerSet
struct FOnLootingPlayerSet
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bSetTargetPlayer : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FName TargetPlayerName;  // 0x4 (0x4)


}; 
 
 // Function DungeonCrawler.InventoryLootingWidget.RequestInventoryWidgetVisible
struct FRequestInventoryWidgetVisible
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bVisible : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.InventoryStatusWidget.OnPlayerCharacterName
struct FOnPlayerCharacterName
{
	struct FText NewValue;  // 0x0 (0x0)
	struct FText OldValue;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.InventoryTabWidgetBase.OnChangeActiveState
struct FOnChangeActiveState
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bActive : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.InvitePartyWidget.OnClassIconSelected
struct FOnClassIconSelected
{
	struct FPrimaryAssetId InCharacterClassId;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.InvitePartyWidget.OnInvitePartyUserSlotData
struct FOnInvitePartyUserSlotData
{
	struct FInvitePartyUserSlotData NewValue;  // 0x0 (0x0)
	struct FInvitePartyUserSlotData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.InvitePartyWidget.OnLocateNumber
struct FOnLocateNumber
{
	int32_t LobbyCount;  // 0x0 (0x0)
	int32_t DungeonCount;  // 0x4 (0x4)
	int32_t BlockCount;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.InvitePartyWidget.OnPopupSWidgetPartyInviteResult
struct FOnPopupSWidgetPartyInviteResult
{
	uint8_t PopupResult;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FInvitePartyUserSlot TargetUser;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.InvitePartyWidget.OnTextChangedFindUserId
struct FOnTextChangedFindUserId
{
	struct FText FindId;  // 0x0 (0x0)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.InvitePartyWidget.OnUserListFindIdClicked
struct FOnUserListFindIdClicked
{
	struct FText FindId;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.TopTitleWidgetBase.SetLeftButtonText
struct FSetLeftButtonText
{
	struct FText ButtonText;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.Item.GetItemActor
struct FGetItemActor
{
	struct AItemActor* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.Item.GetItemDataWeaponTypeTags
struct FGetItemDataWeaponTypeTags
{
	struct TArray<struct FGameplayTag> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.Item.GetItemWeaponTypes
struct FGetItemWeaponTypes
{
	struct TArray<struct FGameplayTag> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.Item.IsItemWeaponType
struct FIsItemWeaponType
{
	struct FGameplayTag WeaponType;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function DungeonCrawler.ItemActor.GetItemTypeTags
struct FGetItemTypeTags
{
	struct TArray<struct FGameplayTag> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ItemActor.GetItemUtilityTag
struct FGetItemUtilityTag
{
	struct FGameplayTag ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ItemActor.GetSoundData
struct FGetSoundData
{
	struct USoundData* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ItemActor.OnHiddenInGameStateChanged
struct FOnHiddenInGameStateChanged
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsHidden : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ItemComponentBase.SendGamePlayEventToItemActor
struct FSendGamePlayEventToItemActor
{
	struct AActor* NewOwner;  // 0x0 (0x0)
	struct FItemData MoveItemNewData;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.ItemCountSelectWidget.OnSliderValueChanged
struct FOnSliderValueChanged
{
	float Value;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCItemDataComponent.OnLoadData_Bundle
struct FOnLoadData_Bundle
{
	struct UObject* InLoadedObject;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.DCItemDataComponent.OnLoadData_Sound
struct FOnLoadData_Sound
{
	struct UObject* InLoadedObject;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ItemGenerateInterface.GenerateItems
struct FGenerateItems
{
	float InLuck;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ItemHolderActorBase.OnRep_ArtDataItem
struct FOnRep_ArtDataItem
{
	struct UArtDataItem* OldArtDataItem;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ItemHolderActorBase.OverrideItemArtData
struct FOverrideItemArtData
{
	struct UArtDataItem* NewItemArtData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ItemHolderActorBase.SetItemObject
struct FSetItemObject
{
	struct UItem* Item;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ItemMoveValidatorComponent.ClientMoveItemEnd
struct FClientMoveItemEnd
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bMoveSucceed : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct TArray<struct FItemData> MovedItemDataArray;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.ItemMoveValidatorComponent.IsEnableMoveItem
struct FIsEnableMoveItem
{
	struct FItemData OldItemData;  // 0x0 (0x0)
	struct TArray<struct FItemData> NewItemDataArray;  // 0xA0 (0xA0)
	struct AActor* OldOwner;  // 0xB0 (0xB0)
	struct AActor* NewOwner;  // 0xB8 (0xB8)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool ReturnValue : 1;  // 0xC0 (0xC0)
	char pad_193[7];  // 0xC1 (0xC1)


}; 
 
 // Function DungeonCrawler.ItemRandomGenerateComponent.DropAllItems
struct FDropAllItems
{
	float InLuck;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ItemTooltipRequirementWidget.OnChangedRequirementStatus
struct FOnChangedRequirementStatus
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bFulfilled : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.LeaderboardRankRecordWidget.OnMineRankRecordData
struct FOnMineRankRecordData
{
	struct FRankRecord MineValue;  // 0x0 (0x0)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool IsMine : 1;  // 0x58 (0x58)
	char pad_89[7];  // 0x59 (0x59)


}; 
 
 // Function DungeonCrawler.LeaderboardWidget.GetGameDifficultyTypeTabName
struct FGetGameDifficultyTypeTabName
{
	uint8_t InGameDifficultyType;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FText ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.LeaderboardWidget.OnLeaderboardSeasonTimerData
struct FOnLeaderboardSeasonTimerData
{
	struct FLeaderboardSeasonTimerData NewValue;  // 0x0 (0x0)
	struct FLeaderboardSeasonTimerData OldValue;  // 0x14 (0x14)


}; 
 
 // Function DungeonCrawler.LeaderboardWidget.OnSheetTabSelected
struct FOnSheetTabSelected
{
	struct FName InTabId;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.LobbyWidget.OnLobbySystemMessage
struct FOnLobbySystemMessage
{
	struct FText AnnounceText;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.LoginWidget.OnAgeRatingType
struct FOnAgeRatingType
{
	uint8_t NewValue;  // 0x0 (0x0)
	uint8_t OldValue;  // 0x1 (0x1)


}; 
 
 // Function DungeonCrawler.LoginWidget.OnTextChangedPassWord
struct FOnTextChangedPassWord
{
	struct FText InPassWord;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.MusicActor.GetArtDataMusic
struct FGetArtDataMusic
{
	struct UArtDataMusic* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.MusicActor.GetMusicData
struct FGetMusicData
{
	struct FMusicData ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.MusicActor.GetPlayMusicData
struct FGetPlayMusicData
{
	struct UPlayMusicData* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.MusicActor.GetSoundDataMusic
struct FGetSoundDataMusic
{
	struct USoundData* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.MusicComponent.OnRep_MusicActors
struct FOnRep_MusicActors
{
	struct TArray<struct AMusicActor*> OldAMusicActors;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.MusicComponent.ServerSetCurrentMusic
struct FServerSetCurrentMusic
{
	struct FGameplayTag MusicTag;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.NickNameWidgetBase.OnNickNameStr
struct FOnNickNameStr
{
	struct FString NewValue;  // 0x0 (0x0)
	struct FString OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.TradeChatWidget.OnChatAccountData
struct FOnChatAccountData
{
	struct FChatAccountData NewItemData;  // 0x0 (0x0)
	struct FChatAccountData OldItemData;  // 0x48 (0x48)


}; 
 
 // Function DungeonCrawler.PerkWidget.InitializePerkWidget
struct FInitializePerkWidget
{
	struct FPrimaryAssetId InPerkId;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.PlayerCharacterCaptureActor.GetCharacterMeshAnimInstance
struct FGetCharacterMeshAnimInstance
{
	struct UAnimInstance* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.PlayerCharacterCaptureActor.OnItemEquipped
struct FOnItemEquipped
{
	struct UAnimationAsset* ItemStandIdle;  // 0x0 (0x0)
	struct FGameplayTag ItemHandType;  // 0x8 (0x8)
	struct FGameplayTag ItemSlotType;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.PlayerCharacterCaptureActor.SetMeshRotation
struct FSetMeshRotation
{
	float InYaw;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.PlayWidget.AutoTeamRegisterSingle
struct FAutoTeamRegisterSingle
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsRegister : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.PlayWidget.OnDungeonSelectListPopupOpen
struct FOnDungeonSelectListPopupOpen
{
	uint8_t GameDifficultyType;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t HighRollerFeeGold;  // 0x4 (0x4)
	int32_t HighRollerMinLevel;  // 0x8 (0x8)
	int32_t GoblinHighRollerFee;  // 0xC (0xC)
	int32_t GoblinHighRollerMinLevel;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bIsSolo : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function DungeonCrawler.PlayWidget.OnGameUserSettingControlsChanged
struct FOnGameUserSettingControlsChanged
{
	struct FGameUserSettingControls InGameUserSettingControls;  // 0x0 (0x0)
	struct FGameUserSettingControls InOldGameUserSettingControls;  // 0x28 (0x28)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool bInForce : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)


}; 
 
 // Function DungeonCrawler.SkillComponent.GetSkillActivatabilityByTriggerTag
struct FGetSkillActivatabilityByTriggerTag
{
	struct FGameplayTag TriggerTag;  // 0x0 (0x0)
	uint8_t ReturnValue;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function DungeonCrawler.PlayWidget.OnPlayPartyUserInfoData
struct FOnPlayPartyUserInfoData
{
	struct FPlayPartyUserInfoData NewValue;  // 0x0 (0x0)
	struct FPlayPartyUserInfoData OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.PlayWidget.OnPopupSWidgetInvitePartyRequest
struct FOnPopupSWidgetInvitePartyRequest
{
	struct UPopupDataBase* PopupData;  // 0x0 (0x0)
	struct FString ReturnAccountID;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.SkillActor.GetSkillData
struct FGetSkillData
{
	struct FSkillData ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.PlayWidget.OnRegionDataSet
struct FOnRegionDataSet
{
	int32_t RegionIndex;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.PlayWidget.OnUpdateDungeonSelectBtn
struct FOnUpdateDungeonSelectBtn
{
	uint8_t GameDifficultyType;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ProjectileActor.InitVelocity
struct FInitVelocity
{
	float FirePower;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ProjectileActor.MatchesProjectileSourceTypeTagExact
struct FMatchesProjectileSourceTypeTagExact
{
	struct FGameplayTag CheckGameplayTag;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function DungeonCrawler.ProjectileActor.ProjectileHit
struct FProjectileHit
{
	struct FHitResult Hit;  // 0x0 (0x0)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool bIsAttached : 1;  // 0xE8 (0xE8)
	char pad_233[7];  // 0xE9 (0xE9)
	struct FTransform ActorPrevTickTransform;  // 0xF0 (0xF0)


}; 
 
 // Function DungeonCrawler.ProjectileActor.SetHomingMagnitude
struct FSetHomingMagnitude
{
	float InHomingMagnitude;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ProjectileActor.SetHomingTargetComponent
struct FSetHomingTargetComponent
{
	struct USceneComponent* InHomingTargetComponent;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.ProjectileActor.TimelineUpdateEvent
struct FTimelineUpdateEvent
{
	float Value;  // 0x0 (0x0)
	float TimelinePosition;  // 0x4 (0x4)


}; 
 
 // Function DungeonCrawler.SkillActor.GetArtDataSkill
struct FGetArtDataSkill
{
	struct UArtDataSkill* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.SkillActor.GetSoundDataSkill
struct FGetSoundDataSkill
{
	struct USoundData* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.SkillActor.OnRep_SkillData
struct FOnRep_SkillData
{
	struct FSkillData OldSkillData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.SkillWidget.SetSkillData
struct FSetSkillData
{
	struct FText SkillName;  // 0x0 (0x0)
	struct FText SkillDesc;  // 0x18 (0x18)


}; 
 
 // Function DungeonCrawler.SkillComponent.OnRep_SkillActorList
struct FOnRep_SkillActorList
{
	struct TArray<struct ASkillActor*> OldSkillActors;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.SkillComponent.SetCooldownForDebug_Server
struct FSetCooldownForDebug_Server
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bNoCooldownTime : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.SoundBlueprintLibrary.IsSoundPlayable
struct FIsSoundPlayable
{
	struct UObject* InSoundPlayer;  // 0x0 (0x0)
	struct UObject* InSoundProvider;  // 0x8 (0x8)
	struct FGameplayTag InSoundEventTag;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.SoundBlueprintLibrary.PlaySoundWithSwitch
struct FPlaySoundWithSwitch
{
	struct UObject* InSoundPlayer;  // 0x0 (0x0)
	struct UAkAudioEvent* AkEvent;  // 0x8 (0x8)
	struct UObject* InSoundProvider;  // 0x10 (0x10)
	struct FGameplayTag Tag;  // 0x18 (0x18)
	enum class EPhysicalSurface Surface;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct FString SwitchGroup;  // 0x28 (0x28)
	struct FString SwitchState;  // 0x38 (0x38)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool ReturnValue : 1;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)


}; 
 
 // Function DungeonCrawler.SoundBlueprintLibrary.PlaySoundWithTag
struct FPlaySoundWithTag
{
	struct UObject* InSoundPlayer;  // 0x0 (0x0)
	struct UObject* InSoundProvider;  // 0x8 (0x8)
	struct FGameplayTag Tag;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DungeonCrawler.SoundBlueprintLibrary.SetSwitch
struct FSetSwitch
{
	struct UObject* InSoundPlayer;  // 0x0 (0x0)
	struct UAkSwitchValue* AkSwitchValue;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function DungeonCrawler.SoundProvider.GetEvent
struct FGetEvent
{
	struct FGameplayTag Tag;  // 0x0 (0x0)
	struct UAkAudioEvent* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.SoundProvider.GetEvents
struct FGetEvents
{
	struct TMap<struct FGameplayTag, struct UAkAudioEvent*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.SoundProvider.GetLastPrimaryAssetId
struct FGetLastPrimaryAssetId
{
	struct FPrimaryAssetId ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.SoundProvider.GetSwitches
struct FGetSwitches
{
	struct TMap<struct FGameplayTag, struct FDCSoundDataContainer> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.SoundProvider.GetTagQueries
struct FGetTagQueries
{
	struct TMap<struct FGameplayTag, struct FGameplayTagQuery> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.SpellActor.GetArtDataSpell
struct FGetArtDataSpell
{
	struct UArtDataSpell* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.SpellActor.GetSoundDataSpell
struct FGetSoundDataSpell
{
	struct USoundData* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.SpellComponent.OnRep_SpellActors
struct FOnRep_SpellActors
{
	struct TArray<struct ASpellActor*> OldASpellActors;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.TestItemInjectionWidgetBase.OnItemPropertySelected
struct FOnItemPropertySelected
{
	struct UObject* WidgetData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.TestItemInjectionWidgetBase.OnItemRaritySelected
struct FOnItemRaritySelected
{
	struct UObject* WidgetData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.TestItemInjectionWidgetBase.OnItemSelected
struct FOnItemSelected
{
	struct UObject* WidgetData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.TestItemInjectionWidgetBase.OnItemTypeSelected
struct FOnItemTypeSelected
{
	struct UObject* WidgetData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.TestItemInjectionWidgetBase.OnSelectedPropertyValueChanged
struct FOnSelectedPropertyValueChanged
{
	struct FPrimaryAssetId PropertyTypeAssetId;  // 0x0 (0x0)
	int32_t InPropertyValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.TopTitleWidgetBase.SetTitleText
struct FSetTitleText
{
	struct FText TitleText;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.TradeChannelButtonBase.SetChannelName
struct FSetChannelName
{
	struct FText InChannelName;  // 0x0 (0x0)
	int32_t InIndex;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function DungeonCrawler.TradeChannelButtonBase.SetMemberText
struct FSetMemberText
{
	int32_t InMemberCount;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.TradeChannelChatWidget.OnAddIdTagChatFilterTag
struct FOnAddIdTagChatFilterTag
{
	struct FGameplayTag InChatFilterTag;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.TradeChannelChatWidget.OnAddPropertyChatFilterTag
struct FOnAddPropertyChatFilterTag
{
	struct FGameplayTag InChatFilterTag;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.TradeChannelChatWidget.OnAddRarityChatFilterTag
struct FOnAddRarityChatFilterTag
{
	struct FGameplayTag InChatFilterTag;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.TradeChannelChatWidget.OnAddTypeChatFilterTag
struct FOnAddTypeChatFilterTag
{
	struct FGameplayTag InChatFilterTag;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.TradeChannelChatWidget.OnChatType
struct FOnChatType
{
	uint8_t NewItemData;  // 0x0 (0x0)
	uint8_t OldItemData;  // 0x1 (0x1)


}; 
 
 // Function DungeonCrawler.TradeChannelChatWidget.OnRemoveIdTagChatFilterTag
struct FOnRemoveIdTagChatFilterTag
{
	struct FGameplayTag InChatFilterTag;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.TradeChannelChatWidget.OnRemoveRarityChatFilterTag
struct FOnRemoveRarityChatFilterTag
{
	struct FGameplayTag InChatFilterTag;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.TradeChannelChatWidget.OnRemoveTypeChatFilterTag
struct FOnRemoveTypeChatFilterTag
{
	struct FGameplayTag InChatFilterTag;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.VoipPartySettingWidget.OnbVoipGlobal
struct FOnbVoipGlobal
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool NewValue : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool OldValue : 1;  // 0x1 (0x1)


}; 
 
 // Function DungeonCrawler.VoipPartySettingWidget.OnVoipGlobalSet
struct FOnVoipGlobalSet
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InbVoipGlobal : 1;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.VoipUserWidget.OnAccountId
struct FOnAccountId
{
	struct FDCAccountId NewValue;  // 0x0 (0x0)
	struct FDCAccountId OldValue;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawler.VoipUserWidget.OnVoipPartyData
struct FOnVoipPartyData
{
	struct FVoipPartyData NewValue;  // 0x0 (0x0)
	struct FVoipPartyData OldValue;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawler.VoipUserWidget.OnVoipUserData
struct FOnVoipUserData
{
	struct FVoipUserData NewValue;  // 0x0 (0x0)
	struct FVoipUserData OldValue;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawler.VoipUserWidget.OnVoipVolumeChanged
struct FOnVoipVolumeChanged
{
	float InVoipVolume;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.VoipUserWidget.SetAccountId
struct FSetAccountId
{
	struct FDCAccountId InAccountId;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.VoipUserWidget.SetVoipPartyData
struct FSetVoipPartyData
{
	struct FVoipPartyData InVoipPartyData;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawler.VoipUserWidget.SetVoipUserData
struct FSetVoipUserData
{
	struct FVoipUserData InVoipUserData;  // 0x0 (0x0)


}; 
 
 