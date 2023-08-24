#pragma once 
#include <BP_SkeletonGuardman_Summoned_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_SkeletonGuardman_Summoned.BP_SkeletonGuardman_Summoned_C
// Size: 0x1228(Inherited: 0x11B8)
struct ABP_SkeletonGuardman_Summoned_C : ABP_Skeleton_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UBP_DCHitBox_C* BP_DCHitBox_Foot_L;  // 0x11C0 (0x11C0)
	struct UBP_DCHitBox_C* BP_DCHitBox_Foot_R;  // 0x11C8 (0x11C8)
	struct UBP_DCHitBox_C* BP_DCHitBox_Upper_Leg_L;  // 0x11D0 (0x11D0)
	struct UBP_DCHitBox_C* BP_DCHitBox_Upper_Leg_R;  // 0x11D8 (0x11D8)
	struct UBP_DCHitBox_C* BP_DCHitBox_Down_Leg_L;  // 0x11E0 (0x11E0)
	struct UBP_DCHitBox_C* BP_DCHitBox_Down_Leg_R;  // 0x11E8 (0x11E8)
	struct UBP_DCHitBox_C* BP_DCHitBox_Body;  // 0x11F0 (0x11F0)
	struct UBP_DCHitBox_C* BP_DCHitBox_Head;  // 0x11F8 (0x11F8)
	char pad_4608_1 : 7;  // 0x1200 (0x1200)
	bool CounterAttackOnCooltime : 1;  // 0x1200 (0x1200)
	char pad_4609_1 : 7;  // 0x1201 (0x1201)
	bool FakeDeath Stance : 1;  // 0x1201 (0x1201)
	char pad_4610[6];  // 0x1202 (0x1202)
	double Prev HP_1;  // 0x1208 (0x1208)
	struct ABP_Lich_Common_C* Summoner;  // 0x1210 (0x1210)
	struct ABP_SkeletonGuardmanShield_C* GuardmanShieldActor;  // 0x1218 (0x1218)
	struct FTimerHandle Move Fail TimerHandle;  // 0x1220 (0x1220)


	void Removed_E67BE30B48262D9805F7B0804FE19939(); // Function BP_SkeletonGuardman_Summoned.BP_SkeletonGuardman_Summoned_C.Removed_E67BE30B48262D9805F7B0804FE19939
	void OnFail_0C22106A422FB7F5993CDF9DAC80D187(enum class EPathFollowingResult MovementResult); // Function BP_SkeletonGuardman_Summoned.BP_SkeletonGuardman_Summoned_C.OnFail_0C22106A422FB7F5993CDF9DAC80D187
	void OnSuccess_0C22106A422FB7F5993CDF9DAC80D187(enum class EPathFollowingResult MovementResult); // Function BP_SkeletonGuardman_Summoned.BP_SkeletonGuardman_Summoned_C.OnSuccess_0C22106A422FB7F5993CDF9DAC80D187
	void Removed_1EACFDA64FA91F5AFD52FD8D83DEF44D(); // Function BP_SkeletonGuardman_Summoned.BP_SkeletonGuardman_Summoned_C.Removed_1EACFDA64FA91F5AFD52FD8D83DEF44D
	void ReceiveBeginPlay(); // Function BP_SkeletonGuardman_Summoned.BP_SkeletonGuardman_Summoned_C.ReceiveBeginPlay
	void OnStuckByShield(struct ADCCharacterBase* InInstigator, struct AActor* InEffectCauser); // Function BP_SkeletonGuardman_Summoned.BP_SkeletonGuardman_Summoned_C.OnStuckByShield
	void InteractFound(struct AActor* Interacter, struct UPrimitiveComponent* InteractPart); // Function BP_SkeletonGuardman_Summoned.BP_SkeletonGuardman_Summoned_C.InteractFound
	void InteractLost(struct AActor* Interacter); // Function BP_SkeletonGuardman_Summoned.BP_SkeletonGuardman_Summoned_C.InteractLost
	void OnSetAI(); // Function BP_SkeletonGuardman_Summoned.BP_SkeletonGuardman_Summoned_C.OnSetAI
	void OnFMsgGASAttributeNotifyBlueprint(struct FMsgGASAttributeNotify& InMsg); // Function BP_SkeletonGuardman_Summoned.BP_SkeletonGuardman_Summoned_C.OnFMsgGASAttributeNotifyBlueprint
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_SkeletonGuardman_Summoned.BP_SkeletonGuardman_Summoned_C.GameplayTagUpdated
	void BndEvt__BP_SkeletonArcher_Summoned_DCGameObjectLink_K2Node_ComponentBoundEvent_2_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature(struct FObjectLinkRequestEvent& RecvEvent, struct UObjectLinkMetaDataBlueprint* SendEventParam); // Function BP_SkeletonGuardman_Summoned.BP_SkeletonGuardman_Summoned_C.BndEvt__BP_SkeletonArcher_Summoned_DCGameObjectLink_K2Node_ComponentBoundEvent_2_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature
	void MoveFailTimeOut(); // Function BP_SkeletonGuardman_Summoned.BP_SkeletonGuardman_Summoned_C.MoveFailTimeOut
	void ExecuteUbergraph_BP_SkeletonGuardman_Summoned(int32_t EntryPoint); // Function BP_SkeletonGuardman_Summoned.BP_SkeletonGuardman_Summoned_C.ExecuteUbergraph_BP_SkeletonGuardman_Summoned
}; 
 
 


