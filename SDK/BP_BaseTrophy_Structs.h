#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_BaseTrophy.BP_BaseTrophy_C.ExecuteUbergraph_BP_BaseTrophy
struct FExecuteUbergraph_BP_BaseTrophy
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* K2Node_Event_Interacter;  // 0x8 (0x8)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x10 (0x10)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x18 (0x18)
	struct FHitResult K2Node_Event_HitResult;  // 0x20 (0x20)
	char pad_264_1 : 7;  // 0x108 (0x108)
	bool CallFunc_IsValidPrimaryAssetId_ReturnValue : 1;  // 0x108 (0x108)
	char pad_265_1 : 7;  // 0x109 (0x109)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x109 (0x109)
	char pad_266_1 : 7;  // 0x10A (0x10A)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x10A (0x10A)
	char pad_267[1];  // 0x10B (0x10B)
	float CallFunc_BreakHitResult_Time;  // 0x10C (0x10C)
	float CallFunc_BreakHitResult_Distance;  // 0x110 (0x110)
	char pad_276[4];  // 0x114 (0x114)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x118 (0x118)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x130 (0x130)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x148 (0x148)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x160 (0x160)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x178 (0x178)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x180 (0x180)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x188 (0x188)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x190 (0x190)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x198 (0x198)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x1A0 (0x1A0)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x1A4 (0x1A4)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x1A8 (0x1A8)
	char pad_428[4];  // 0x1AC (0x1AC)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x1B0 (0x1B0)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x1C8 (0x1C8)
	char pad_480_1 : 7;  // 0x1E0 (0x1E0)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x1E0 (0x1E0)
	char pad_481[7];  // 0x1E1 (0x1E1)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character;  // 0x1E8 (0x1E8)
	char pad_496_1 : 7;  // 0x1F0 (0x1F0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x1F0 (0x1F0)
	char pad_497[7];  // 0x1F1 (0x1F1)
	struct AController* CallFunc_GetController_ReturnValue;  // 0x1F8 (0x1F8)
	struct APlayerController* K2Node_DynamicCast_As_________;  // 0x200 (0x200)
	char pad_520_1 : 7;  // 0x208 (0x208)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x208 (0x208)


}; 
 
 // Function BP_BaseTrophy.BP_BaseTrophy_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 