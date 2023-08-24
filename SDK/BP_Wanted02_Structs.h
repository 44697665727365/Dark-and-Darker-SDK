#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_Wanted02.BP_Wanted02_C.ExecuteUbergraph_BP_Wanted02
struct FExecuteUbergraph_BP_Wanted02
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* K2Node_Event_Interacter;  // 0x8 (0x8)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x10 (0x10)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x18 (0x18)
	struct FHitResult K2Node_Event_HitResult;  // 0x20 (0x20)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character;  // 0x108 (0x108)
	char pad_272_1 : 7;  // 0x110 (0x110)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x110 (0x110)
	char pad_273_1 : 7;  // 0x111 (0x111)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x111 (0x111)
	char pad_274_1 : 7;  // 0x112 (0x112)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x112 (0x112)
	char pad_275[1];  // 0x113 (0x113)
	float CallFunc_BreakHitResult_Time;  // 0x114 (0x114)
	float CallFunc_BreakHitResult_Distance;  // 0x118 (0x118)
	char pad_284[4];  // 0x11C (0x11C)
	struct FVector CallFunc_BreakHitResult_Location;  // [x120 ([x120)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 000970005] ited: 0x4B8)
 (000970005] /Game/Dungeon)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x150 (0x150)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x168 (0x168)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x180 (0x180)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x188 (0x188)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x190 (0x190)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x198 (0x198)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x1A0 (0x1A0)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x1A8 (0x1A8)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x1AC (0x1AC)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x1B0 (0x1B0)
	char pad_436[4];  // 0x1B4 (0x1B4)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x1B8 (0x1B8)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x1D0 (0x1D0)
	char pad_488_1 : 7;  // 0x1E8 (0x1E8)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x1E8 (0x1E8)


}; 
 
 // Function BP_Wanted02.BP_Wanted02_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 