#pragma once 
#include <BP_SkeletonGuardman_Common_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_SkeletonGuardman_Common.BP_SkeletonGuardman_Common_C
// Size: 0x1220(Inherited: 0x11B8)
struct ABP_SkeletonGuardman_Common_C : ABP_Skeleton_C
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
	struct ABP_SkeletonGuardmanShield_C* GuardmanShieldActor;  // 0x1200 (0x1200)
	char pad_4616_1 : 7;  // 0x1208 (0x1208)
	bool CounterAttackOnCooltime : 1;  // 0x1208 (0x1208)
	char pad_4617[7];  // 0x1209 (0x1209)
	AActor* Shield Class;  // 0x1210 (0x1210)
	struct ABP_SkeletonGuardmanShield_Nightmare_C* As BP Skeleton Guardman Shield Nightmare;  // 0x1218 (0x1218)


	void ReceiveBeginPlay(); // Function BP_SkeletonGuardman_Common.BP_SkeletonGuardman_Common_C.ReceiveBeginPlay
	void OnStuckByShield(struct ADCCharacterBase* InInstigator, struct AActor* InEffectCauser); // Function BP_SkeletonGuardman_Common.BP_SkeletonGuardman_Common_C.OnStuckByShield
	void InteractFound(struct AActor* Interacter, struct UPrimitiveComponent* InteractPart); // Function BP_SkeletonGuardman_Common.BP_SkeletonGuardman_Common_C.InteractFound
	void InteractLost(struct AActor* Interacter); // Function BP_SkeletonGuardman_Common.BP_SkeletonGuardman_Common_C.InteractLost
	void ExecuteUbergraph_BP_SkeletonGuardman_Common(int32_t EntryPoint); // Function BP_SkeletonGuardman_Common.BP_SkeletonGuardman_Common_C.ExecuteUbergraph_BP_SkeletonGuardman_Common
}; 
 
 


