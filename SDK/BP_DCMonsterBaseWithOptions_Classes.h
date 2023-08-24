#pragma once 
#include <BP_DCMonsterBaseWithOptions_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C
// Size: 0x11B8(Inherited: 0xC98)
struct ABP_DCMonsterBaseWithOptions_C : ABP_DCMonsterBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0xC98 (0xC98)
	struct UCapsuleComponent* Non Player Character Overlap Component;  // 0xCA0 (0xCA0)
	struct UImpactableComponent* Impactable;  // 0xCA8 (0xCA8)
	struct UDCGameObjectLinkComponent* DCGameObjectLink;  // 0xCB0 (0xCB0)
	struct FName SpawnLocation;  // 0xCB8 (0xCB8)
	struct ABP_DCMonsterBaseWithOptions_C* TargetProvider;  // 0xCC0 (0xCC0)
	struct TArray<struct ADCCharacterBase*> EnemiesInCombatArea;  // 0xCC8 (0xCC8)
	struct TArray<struct AActor*> EnemiesInRecogArea;  // 0xCD8 (0xCD8)
	struct TArray<struct ADCCharacterBase*> LostEnemiesInCombatArea;  // 0xCE8 (0xCE8)
	struct TArray<struct AActor*> LostEnemiesInRecogArea;  // 0xCF8 (0xCF8)
	struct TArray<struct ABP_DCMonsterBaseWithOptions_C*> LinkedMonstersArray;  // 0xD08 (0xD08)
	int32_t LinkedMonstersCountTemp;  // 0xD18 (0xD18)
	char pad_3356_1 : 7;  // 0xD1C (0xD1C)
	bool GotLinkedMonsters : 1;  // 0xD1C (0xD1C)
	char pad_3357_1 : 7;  // 0xD1D (0xD1D)
	bool Do Action Once After Spawn : 1;  // 0xD1D (0xD1D)
	char pad_3358[2];  // 0xD1E (0xD1E)
	struct TArray<struct FPrimaryAssetId> Attach Effect While Action Once After Spawn;  // 0xD20 (0xD20)
	struct UBehaviorTree* Action Once After Spawn BehaviorTree;  // 0xD30 (0xD30)
	char pad_3384_1 : 7;  // 0xD38 (0xD38)
	bool Check Action Once After Spawn Has Tag : 1;  // 0xD38 (0xD38)
	char pad_3385_1 : 7;  // 0xD39 (0xD39)
	bool Check Action Once After Spawn Tag Reverse : 1;  // 0xD39 (0xD39)
	char pad_3386[6];  // 0xD3A (0xD3A)
	struct FGameplayTagContainer Set Action Once After Spawn Tags;  // 0xD40 (0xD40)
	struct TArray<struct FGameplayTag> Action Once After Spawn Trigger Tag;  // 0xD60 (0xD60)
	struct TArray<int32_t> Action Once After Spawn Ability Rates;  // 0xD70 (0xD70)
	struct TArray<struct FGameplayTag> Action Once After Spawn Wait Tag;  // 0xD80 (0xD80)
	char pad_3472_1 : 7;  // 0xD90 (0xD90)
	bool Do Conditional Top Priority Action : 1;  // 0xD90 (0xD90)
	char pad_3473_1 : 7;  // 0xD91 (0xD91)
	bool Do Once : 1;  // 0xD91 (0xD91)
	char pad_3474[6];  // 0xD92 (0xD92)
	struct TArray<struct FPrimaryAssetId> Attach Effect While Conditional Top Priority Action;  // 0xD98 (0xD98)
	struct UBehaviorTree* Conditional Top Priority Action Behavior Tree;  // 0xDA8 (0xDA8)
	char pad_3504_1 : 7;  // 0xDB0 (0xDB0)
	bool Check Conditional Top Priority Action Has Tag : 1;  // 0xDB0 (0xDB0)
	char pad_3505_1 : 7;  // 0xDB1 (0xDB1)
	bool Check Conditional Top Priority Action Tag Reverse : 1;  // 0xDB1 (0xDB1)
	char pad_3506[6];  // 0xDB2 (0xDB2)
	struct FGameplayTagContainer Set Conditional Top Priority Action Tags;  // 0xDB8 (0xDB8)
	enum class E_ActionWhileConditionalTopPriorityMode Conditional Top Priority Mode Action;  // 0xDD8 (0xDD8)
	char pad_3545[7];  // 0xDD9 (0xDD9)
	struct TArray<enum class E_BTCheckFloatCondition> Conditional Top Priority Action Check Type;  // 0xDE0 (0xDE0)
	struct TArray<double> Condition Float Value;  // 0xDF0 (0xDF0)
	double Flee Distance;  // 0xE00 (0xE00)
	struct TArray<struct FGameplayTag> Conditional Top Priority Action Trigger Tag;  // 0xE08 (0xE08)
	struct TArray<int32_t> Conditional Top Priority Action Ability Rates;  // 0xE18 (0xE18)
	struct TArray<struct FGameplayTag> Conditional Top Priority Action Wait Tag;  // 0xE28 (0xE28)
	char pad_3640_1 : 7;  // 0xE38 (0xE38)
	bool Do Peace Action : 1;  // 0xE38 (0xE38)
	char pad_3641[7];  // 0xE39 (0xE39)
	struct TArray<struct FPrimaryAssetId> Attach Effect While Peace Action;  // 0xE40 (0xE40)
	struct UBehaviorTree* Peace BehaviorTree;  // 0xE50 (0xE50)
	char pad_3672_1 : 7;  // 0xE58 (0xE58)
	bool Check Peace Action Has Tag : 1;  // 0xE58 (0xE58)
	char pad_3673_1 : 7;  // 0xE59 (0xE59)
	bool Check Peace Action Tag Reverse : 1;  // 0xE59 (0xE59)
	char pad_3674[6];  // 0xE5A (0xE5A)
	struct FGameplayTagContainer Set Peace Action Tags;  // 0xE60 (0xE60)
	enum class E_ActionWhilePeaceMode Peace Mode Action;  // 0xE80 (0xE80)
	char pad_3713[7];  // 0xE81 (0xE81)
	double Wander Distance;  // 0xE88 (0xE88)
	char pad_3728_1 : 7;  // 0xE90 (0xE90)
	bool Do Ability While Peace : 1;  // 0xE90 (0xE90)
	char pad_3729[7];  // 0xE91 (0xE91)
	struct TArray<struct FGameplayTag> Peace Trigger Tag;  // 0xE98 (0xE98)
	struct TArray<int32_t> Peace Ability Rates;  // 0xEA8 (0xEA8)
	struct TArray<struct FGameplayTag> Peace Wait Tag;  // 0xEB8 (0xEB8)
	double Peace Check Distance;  // 0xEC8 (0xEC8)
	char pad_3792_1 : 7;  // 0xED0 (0xED0)
	bool Do Combat Action : 1;  // 0xED0 (0xED0)
	char pad_3793[7];  // 0xED1 (0xED1)
	struct UBehaviorTree* Combat BehaviorTree;  // 0xED8 (0xED8)
	char pad_3808_1 : 7;  // 0xEE0 (0xEE0)
	bool Check Combat Action Has Tag : 1;  // 0xEE0 (0xEE0)
	char pad_3809_1 : 7;  // 0xEE1 (0xEE1)
	bool Check Combat Action Tag Reverse : 1;  // 0xEE1 (0xEE1)
	char pad_3810[6];  // 0xEE2 (0xEE2)
	struct FGameplayTagContainer Set Combat Action Tags;  // 0xEE8 (0xEE8)
	char pad_3848_1 : 7;  // 0xF08 (0xF08)
	bool Do Conditional Action While Combat : 1;  // 0xF08 (0xF08)
	char pad_3849[7];  // 0xF09 (0xF09)
	struct UBehaviorTree* Conditional Action BehaviorTree While Combat;  // 0xF10 (0xF10)
	struct TArray<struct FPrimaryAssetId> Attach Effect While Conditional Action;  // 0xF18 (0xF18)
	char pad_3880_1 : 7;  // 0xF28 (0xF28)
	bool Get Target While Combat : 1;  // 0xF28 (0xF28)
	char pad_3881[7];  // 0xF29 (0xF29)
	struct TArray<struct FPrimaryAssetId> Attach Effect While Get Target Action;  // 0xF30 (0xF30)
	char pad_3904_1 : 7;  // 0xF40 (0xF40)
	bool Do Tracking While Combat : 1;  // 0xF40 (0xF40)
	char pad_3905[7];  // 0xF41 (0xF41)
	struct TArray<struct FPrimaryAssetId> Attach Effect While Tracking Action;  // 0xF48 (0xF48)
	double Combat Acceptance Radius;  // 0xF58 (0xF58)
	char pad_3936_1 : 7;  // 0xF60 (0xF60)
	bool Set Height While Tracking : 1;  // 0xF60 (0xF60)
	char pad_3937_1 : 7;  // 0xF61 (0xF61)
	bool Do Ability While Combat : 1;  // 0xF61 (0xF61)
	char pad_3938[6];  // 0xF62 (0xF62)
	struct TArray<struct FPrimaryAssetId> Attach Effect While Do Ability Combat Action;  // 0xF68 (0xF68)
	struct TArray<struct FGameplayTag> Combat Trigger Tag;  // 0xF78 (0xF78)
	struct TArray<int32_t> Combat Ability Rates;  // 0xF88 (0xF88)
	struct TArray<struct FGameplayTag> Combat Wait Tag;  // 0xF98 (0xF98)
	double Check Ability Distance;  // 0xFA8 (0xFA8)
	char pad_4016_1 : 7;  // 0xFB0 (0xFB0)
	bool Do Wait While Combat : 1;  // 0xFB0 (0xFB0)
	char pad_4017[7];  // 0xFB1 (0xFB1)
	struct TArray<struct FPrimaryAssetId> Attach Effect While Wait Combat Action;  // 0xFB8 (0xFB8)
	char pad_4040_1 : 7;  // 0xFC8 (0xFC8)
	bool Apply Wait Time By Distance : 1;  // 0xFC8 (0xFC8)
	char pad_4041[7];  // 0xFC9 (0xFC9)
	double Combat Ability Attack Delay;  // 0xFD0 (0xFD0)
	double Combat Ability Attack Delay Random Deviation;  // 0xFD8 (0xFD8)
	struct FGameplayTagQuery Object Link Request Param Dst Type Tag Query;  // 0xFE0 (0xFE0)
	enum class E_ActivityArea Activity Area;  // 0x1028 (0x1028)
	char pad_4137_1 : 7;  // 0x1029 (0x1029)
	bool Use Custom Behavior Tree : 1;  // 0x1029 (0x1029)
	char pad_4138[6];  // 0x102A (0x102A)
	struct UBehaviorTree* Custom Behavior Tree;  // 0x1030 (0x1030)
	char pad_4152[8];  // 0x1038 (0x1038)
	struct FTransform Spawn Transform;  // 0x1040 (0x1040)
	struct UShapeComponent* CombatAreaCollision;  // 0x10A0 (0x10A0)
	struct UShapeComponent* RecognitionAreaCollision;  // 0x10A8 (0x10A8)
	struct FVector CombatArea Box Extent;  // 0x10B0 (0x10B0)
	struct FVector RecognizeArea Box Extent;  // 0x10C8 (0x10C8)
	int32_t Linked Monsters Count;  // 0x10E0 (0x10E0)
	char pad_4324[4];  // 0x10E4 (0x10E4)
	struct UAbilityAsync_WaitGameplayEffectApplied* Async Action For Fear;  // 0x10E8 (0x10E8)
	enum class E_MonsterType Monster Type;  // 0x10F0 (0x10F0)
	enum class E_MonsterGrade Monster Grade;  // 0x10F1 (0x10F1)
	char pad_4338[6];  // 0x10F2 (0x10F2)
	struct AActor* Fear Instigator;  // 0x10F8 (0x10F8)
	struct ATriggerBox* Combat Area Trigger Box;  // 0x1100 (0x1100)
	struct ATriggerBox* Recognize Area Trigger Box;  // 0x1108 (0x1108)
	struct FTimerHandle Combat Area Check TimerHandle;  // 0x1110 (0x1110)
	struct FTimerHandle Recognition Area Check TimerHandle;  // 0x1118 (0x1118)
	struct FTimerHandle Move Fail Timeout TimerHandle;  // 0x1120 (0x1120)
	int32_t Reached To Spawn Location Monster Count;  // 0x1128 (0x1128)
	char pad_4396[4];  // 0x112C (0x112C)
	struct FMulticastInlineDelegate Combat Activated Event Dispatcher;  // 0x1130 (0x1130)
	struct FMulticastInlineDelegate Peace Activated Event Dispatcher;  // 0x1140 (0x1140)
	struct FMulticastInlineDelegate Comeback Activated Event Dispatcher;  // 0x1150 (0x1150)
	struct TArray<enum class E_NonPlayableTarget> Non Playable Target;  // 0x1160 (0x1160)
	int32_t Number Of NPT;  // 0x1170 (0x1170)
	char pad_4468[4];  // 0x1174 (0x1174)
	struct TArray<struct ADCCharacterBase*> Recieved Target Array;  // 0x1178 (0x1178)
	double Default Sight Range;  // 0x1188 (0x1188)
	char pad_4496_1 : 7;  // 0x1190 (0x1190)
	bool Sight Range Changed : 1;  // 0x1190 (0x1190)
	char pad_4497[7];  // 0x1191 (0x1191)
	struct TArray<struct ADCCharacterBase*> Target Array;  // 0x1198 (0x1198)
	struct AActor* Chaotic Discord Instigator;  // 0x11A8 (0x11A8)
	struct UObject* Blackboard TargetActor;  // 0x11B0 (0x11B0)


	void OnRep_Blackboard TargetActor(); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnRep_Blackboard TargetActor
	void Trigger Out Overlap NPT Area(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger Out Overlap NPT Area
	void Trigger In Overlap NPT Area(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger In Overlap NPT Area
	void Move Fail Timeout(); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Move Fail Timeout
	void Check Peace To Combat(); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Check Peace To Combat
	void Check Combat To Comeback(); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Check Combat To Comeback
	void Trigger Out Recog Area(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger Out Recog Area
	void Trigger In Recog Area(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger In Recog Area
	void Trigger Out Combat Area(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger Out Combat Area
	void Trigger In Combat Area(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger In Combat Area
	void Spawn Box for Area Check(); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Spawn Box for Area Check
	void SetActivityArea(); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.SetActivityArea
	void GetBBTargetActorToCharacterBase(bool& Result, struct ADCCharacterBase*& As DCCharacter Base); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GetBBTargetActorToCharacterBase
	void GetBBTargetActorToMonsterBase(bool& Result, struct ABP_DCMonsterBaseWithOptions_C*& DCMonsterBaseWithOptions); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GetBBTargetActorToMonsterBase
	void GetBBTargetActor(bool& Result, struct UObject*& Return Value); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GetBBTargetActor
	void IgnoreSignalFromMe(struct UDCGameObjectLinkComponent* DCGame Link Object, struct FObjectLinkRequestEvent Recv Event, struct UObjectLinkMetaDataBlueprint* Send Event Param, bool& Result); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.IgnoreSignalFromMe
	void GetLinkedMonsters(struct FObjectLinkRequestEvent Recv Event, struct UObjectLinkMetaDataBlueprint* Send Event Param); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GetLinkedMonsters
	void LinkEventBase(struct UDCGameObjectLinkComponent* DCGame Link Object, struct FObjectLinkRequestEvent Recv Event, struct UObjectLinkMetaDataBlueprint* Send Event Param, bool& Result); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.LinkEventBase
	void OnApplied_227A852046B3B9DACFFBA5ABA7D2A95E(struct AActor* Source, struct FGameplayEffectSpecHandle SpecHandle, struct FActiveGameplayEffectHandle ActiveHandle); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnApplied_227A852046B3B9DACFFBA5ABA7D2A95E
	void Removed_CE0B13EA482C4B99CB7832A70FAC7611(); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Removed_CE0B13EA482C4B99CB7832A70FAC7611
	void OnFail_21CEDD05472CF8AA4A07758D48F80F14(enum class EPathFollowingResult MovementResult); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnFail_21CEDD05472CF8AA4A07758D48F80F14
	void OnSuccess_21CEDD05472CF8AA4A07758D48F80F14(enum class EPathFollowingResult MovementResult); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnSuccess_21CEDD05472CF8AA4A07758D48F80F14
	void OnFail_801A2F7E484A71F27AD0278F8B82FB99(enum class EPathFollowingResult MovementResult); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnFail_801A2F7E484A71F27AD0278F8B82FB99
	void OnSuccess_801A2F7E484A71F27AD0278F8B82FB99(enum class EPathFollowingResult MovementResult); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnSuccess_801A2F7E484A71F27AD0278F8B82FB99
	void OnSetAI(); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnSetAI
	void BndEvt__BP_DCMonsterBaseWithOptions_Impactable_K2Node_ComponentBoundEvent_0_ImpactEnduranceExhausted__DelegateSignature(float ExhaustedTime, UGameplayEffect* GameplayEffectClass, struct FDCGameplayEffectContext EffectContext); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.BndEvt__BP_DCMonsterBaseWithOptions_Impactable_K2Node_ComponentBoundEvent_0_ImpactEnduranceExhausted__DelegateSignature
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GameplayTagUpdated
	void ReceivePossessed(struct AController* NewController); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.ReceivePossessed
	void Comeback Event Start(); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Comeback Event Start
	void Comeback Event End(); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Comeback Event End
	void OnFMsgGASAttributeNotifyBlueprint(struct FMsgGASAttributeNotify& InMsg); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnFMsgGASAttributeNotifyBlueprint
	void OnBeforeDeath(); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnBeforeDeath
	void ReceiveBeginPlay(); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.ReceiveBeginPlay
	void BndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature(struct FObjectLinkRequestEvent& RecvEvent, struct UObjectLinkMetaDataBlueprint* SendEventParam); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.BndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature
	void OnNewTarget(struct ADCCharacterBase* InTarget); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnNewTarget
	void Comeback Activated(); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Comeback Activated
	void Peace Activated(); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Peace Activated
	void Combat Activated(); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Combat Activated
	void ExecuteUbergraph_BP_DCMonsterBaseWithOptions(int32_t EntryPoint); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.ExecuteUbergraph_BP_DCMonsterBaseWithOptions
	void Comeback Activated Event Dispatcher__DelegateSignature(); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Comeback Activated Event Dispatcher__DelegateSignature
	void Peace Activated Event Dispatcher__DelegateSignature(); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Peace Activated Event Dispatcher__DelegateSignature
	void Combat Activated Event Dispatcher__DelegateSignature(); // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Combat Activated Event Dispatcher__DelegateSignature
}; 
 
 


