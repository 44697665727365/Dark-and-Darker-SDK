#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_LichStrongAttack_ProjectileCollision.GA_LichStrongAttack_ProjectileCollision_C.ExecuteUbergraph_GA_LichStrongAttack_ProjectileCollision
struct FExecuteUbergraph_GA_LichStrongAttack_ProjectileCollision
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x4 (0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x8 (0x8)
	int32_t Temp_int_Array_Index_Variable;  // 0xC (0xC)
	struct FHitResult K2Node_Event_Hit;  // 0x10 (0x10)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xF8 (0xF8)
	char pad_256_1 : 7;  // 0x100 (0x100)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x100 (0x100)
	char pad_257_1 : 7;  // 0x101 (0x101)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x101 (0x101)
	char pad_258[2];  // 0x102 (0x102)
	float CallFunc_BreakHitResult_Time;  // 0x104 (0x104)
	float CallFunc_BreakHitResult_Distance;  // 0x108 (0x108)
	char pad_268[4];  // 0x10C (0x10C)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x110 (0x110)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x128 (0x128)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x140 (0x140)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x158 (0x158)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x170 (0x170)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x178 (0x178)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x180 (0x180)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x188 (0x188)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x190 (0x190)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x198 (0x198)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x19C (0x19C)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x1A0 (0x1A0)
	char pad_420[4];  // 0x1A4 (0x1A4)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x1A8 (0x1A8)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x1C0 (0x1C0)
	struct TArray<struct AActor*> K2Node_MakeArray_Array;  // 0x1D8 (0x1D8)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array_2;  // 0x1E8 (0x1E8)
	struct TArray<struct AActor*> CallFunc_SphereOverlapActors_OutActors;  // 0x1F8 (0x1F8)
	char pad_520_1 : 7;  // 0x208 (0x208)
	bool CallFunc_SphereOverlapActors_ReturnValue : 1;  // 0x208 (0x208)
	char pad_521[3];  // 0x209 (0x209)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x20C (0x20C)
	struct AActor* CallFunc_Array_Get_Item;  // 0x210 (0x210)
	char pad_536_1 : 7;  // 0x218 (0x218)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x218 (0x218)
	char pad_537[7];  // 0x219 (0x219)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x220 (0x220)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyPremadeSpecArray_ReturnValue;  // 0x2D0 (0x2D0)


}; 
 
 // Function GA_LichStrongAttack_ProjectileCollision.GA_LichStrongAttack_ProjectileCollision_C.TargetDataReceived
// Size: 0xE8(Inherited: 0xE8)
struct FTargetDataReceived : FTargetDataReceived
{
	struct FHitResult Hit;  // 0x0 (0x0)


}; 
 
 