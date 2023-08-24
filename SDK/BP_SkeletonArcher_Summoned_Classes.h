#pragma once 
#include <BP_SkeletonArcher_Summoned_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_SkeletonArcher_Summoned.BP_SkeletonArcher_Summoned_C
// Size: 0x1220(Inherited: 0x11B8)
struct ABP_SkeletonArcher_Summoned_C : ABP_Skeleton_C
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
	bool FakeDeath Stance : 1;  // 0x1200 (0x1200)
	char pad_4609[7];  // 0x1201 (0x1201)
	double Prev HP;  // 0x1208 (0x1208)
	struct ABP_Lich_Common_C* Summoner;  // 0x1210 (0x1210)
	struct FTimerHandle Move Fail TimerHandle;  // 0x1218 (0x1218)


	void Removed_D1ED25CE4EBD66C72A2FD5AFD7565609(); // Function BP_SkeletonArcher_Summoned.BP_SkeletonArcher_Summoned_C.Removed_D1ED25CE4EBD66C72A2FD5AFD7565609
	void OnFail_8D09AD2E484E08C0DD93AA832ABA2A1F(enum class EPathFollowingResult MovementResult); // Function BP_SkeletonArcher_Summoned.BP_SkeletonArcher_Summoned_C.OnFail_8D09AD2E484E08C0DD93AA832ABA2A1F
	void OnSuccess_8D09AD2E484E08C0DD93AA832ABA2A1F(enum class EPathFollowingResult MovementResult); // Function BP_SkeletonArcher_Summoned.BP_SkeletonArcher_Summoned_C.OnSuccess_8D09AD2E484E08C0DD93AA832ABA2A1F
	void Removed_F87A86004DE042EE99594DA67940F420(); // Function BP_SkeletonArcher_Summoned.BP_SkeletonArcher_Summoned_C.Removed_F87A86004DE042EE99594DA67940F420
	void ReceiveBeginPlay(); // Function BP_SkeletonArcher_Summoned.BP_SkeletonArcher_Summoned_C.ReceiveBeginPlay
	void OnBeforeDeath(); // Function BP_SkeletonArcher_Summoned.BP_SkeletonArcher_Summoned_C.OnBeforeDeath
	void OnSetAI(); // Function BP_SkeletonArcher_Summoned.BP_SkeletonArcher_Summoned_C.OnSetAI
	void BndEvt__BP_SkeletonArcher_Summoned_DCGameObjectLink_K2Node_ComponentBoundEvent_2_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature(struct FObjectLinkRequestEvent& RecvEvent, struct UObjectLinkMetaDataBlueprint* SendEventParam); // Function BP_SkeletonArcher_Summoned.BP_SkeletonArcher_Summoned_C.BndEvt__BP_SkeletonArcher_Summoned_DCGameObjectLink_K2Node_ComponentBoundEvent_2_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature
	void OnFMsgGASAttributeNotifyBlueprint(struct FMsgGASAttributeNotify& InMsg); // Function BP_SkeletonArcher_Summoned.BP_SkeletonArcher_Summoned_C.OnFMsgGASAttributeNotifyBlueprint
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_SkeletonArcher_Summoned.BP_SkeletonArcher_Summoned_C.GameplayTagUpdated
	void MoveFailTimeOut(); // Function BP_SkeletonArcher_Summoned.BP_SkeletonArcher_Summoned_C.MoveFailTimeOut
	void ExecuteUbergraph_BP_SkeletonArcher_Summoned(int32_t EntryPoint); // Function BP_SkeletonArcher_Summoned.BP_SkeletonArcher_Summoned_C.ExecuteUbergraph_BP_SkeletonArcher_Summoned
}; 
 
 


