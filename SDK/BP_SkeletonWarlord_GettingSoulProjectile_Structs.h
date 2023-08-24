#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_SkeletonWarlord_GettingSoulProjectile.BP_SkeletonWarlord_GettingSoulProjectile_C.BndEvt__BP_Lich_GettingSoulProjectile_Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct FBndEvt__BP_Lich_GettingSoulProjectile_Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
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
 
 // Function BP_SkeletonWarlord_GettingSoulProjectile.BP_SkeletonWarlord_GettingSoulProjectile_C.ExecuteUbergraph_BP_SkeletonWarlord_GettingSoulProjectile
struct FExecuteUbergraph_BP_SkeletonWarlord_GettingSoulProjectile
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Variable;  // 0x4 (0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent;  // 0x10 (0x10)
	struct AActor* K2Node_ComponentBoundEvent_OtherActor;  // 0x18 (0x18)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp;  // 0x20 (0x20)
	int32_t K2Node_ComponentBoundEvent_OtherBodyIndex;  // 0x28 (0x28)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool K2Node_ComponentBoundEvent_bFromSweep : 1;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)
	struct FHitResult K2Node_ComponentBoundEvent_SweepResult;  // 0x30 (0x30)
	char pad_280_1 : 7;  // 0x118 (0x118)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x118 (0x118)
	char pad_281_1 : 7;  // 0x119 (0x119)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x119 (0x119)
	char pad_282_1 : 7;  // 0x11A (0x11A)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x11A (0x11A)
	char pad_283[1];  // 0x11B (0x11B)
	float CallFunc_BreakHitResult_Time;  // 0x11C (0x11C)
	float CallFunc_BreakHitResult_Distance;  // 0x120 (0x120)
	char pad_292[4];  // 0x124 (0x124)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x128 (0x128)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x140 (0x140)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x158 (0x158)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x170 (0x170)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x188 (0x188)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x190 (0x190)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x198 (0x198)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x1A0 (0x1A0)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x1A8 (0x1A8)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x1B0 (0x1B0)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x1B4 (0x1B4)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x1B8 (0x1B8)
	char pad_444[4];  // 0x1BC (0x1BC)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x1C0 (0x1C0)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x1D8 (0x1D8)
	struct FRotator CallFunc_MakeRotFromX_ReturnValue;  // 0x1F0 (0x1F0)
	struct ABP_SkeletonWarlord_C* K2Node_DynamicCast_AsBP_Skeleton_Warlord;  // 0x208 (0x208)
	char pad_528_1 : 7;  // 0x210 (0x210)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x210 (0x210)
	char pad_529[7];  // 0x211 (0x211)
	struct UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue;  // 0x218 (0x218)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x220 (0x220)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyPremadeSpecArray_ReturnValue;  // 0x2D0 (0x2D0)
	struct FDelegate Temp_delegate_Variable;  // 0x2E0 (0x2E0)
	int32_t CallFunc_PostAkEvent_ReturnValue;  // 0x2F0 (0x2F0)
	char pad_756[4];  // 0x2F4 (0x2F4)
	struct APawn* CallFunc_GetInstigator_ReturnValue;  // 0x2F8 (0x2F8)
	char pad_768_1 : 7;  // 0x300 (0x300)
	bool CallFunc_LessEqual_IntInt_ReturnValue : 1;  // 0x300 (0x300)
	char pad_769[7];  // 0x301 (0x301)
	struct ABP_SkeletonWarlord_C* K2Node_DynamicCast_AsBP_Skeleton_Warlord_2;  // 0x308 (0x308)
	char pad_784_1 : 7;  // 0x310 (0x310)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x310 (0x310)


}; 
 
 