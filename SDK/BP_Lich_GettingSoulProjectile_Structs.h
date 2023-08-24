#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_Lich_GettingSoulProjectile.BP_Lich_GettingSoulProjectile_C.BndEvt__BP_Lich_GettingSoulProjectile_Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
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
 
 // Function BP_Lich_GettingSoulProjectile.BP_Lich_GettingSoulProjectile_C.ExecuteUbergraph_BP_Lich_GettingSoulProjectile
struct FExecuteUbergraph_BP_Lich_GettingSoulProjectile
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent;  // 0x8 (0x8)
	struct AActor* K2Node_ComponentBoundEvent_OtherActor;  // 0x10 (0x10)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp;  // 0x18 (0x18)
	int32_t K2Node_ComponentBoundEvent_OtherBodyIndex;  // 0x20 (0x20)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool K2Node_ComponentBoundEvent_bFromSweep : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	struct FHitResult K2Node_ComponentBoundEvent_SweepResult;  // 0x28 (0x28)
	char pad_272_1 : 7;  // 0x110 (0x110)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x110 (0x110)
	char pad_273_1 : 7;  // 0x111 (0x111)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x111 (0x111)
	char pad_274[2];  // 0x112 (0x112)
	float CallFunc_BreakHitResult_Time;  // 0x114 (0x114)
	float CallFunc_BreakHitResult_Distance;  // 0x7FF (0x7FF7D3428690 (0x16FAD03EBC0))
	char pad_284[4];  // 0x11C (0x11C)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x120 (0x120)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x138 (0x138)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x7FF7D3428690 (0x16FAD03EBC0) (0x7FF7D3428690 (0x16FAD03EBC0))
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x168 (0x168)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x180 (0x180)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x188 (0x188)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x190 (0x190)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x7FF7D35967D0 (0x1705D6E0080) (0x7FF7D35967D0 (0x1705D6E0080))
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x1A0 (0x1A0)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x1A8 (0x1A8)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x1AC (0x1AC)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x1B0 (0x1B0)
	char pad_436[4];  // 0x1B4 (0x1B4)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x1B8 (0x1B8)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x1D0 (0x1D0)
	struct ABP_Lich_Common_C* K2Node_DynamicCast_AsBP_Lich_Common;  // 0x1E8 (0x1E8)
	char pad_496_1 : 7;  // 0x1F0 (0x1F0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x1F0 (0x1F0)
	char pad_497[7];  // 0x1F1 (0x1F1)
	struct FRotator CallFunc_MakeRotFromX_ReturnValue;  // 0x1F8 (0x1F8)
	struct UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue;  // 0x210 (0x210)
	struct APawn* CallFunc_GetInstigator_ReturnValue;  // 0x218 (0x218)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x220 (0x220)
	char pad_720_1 : 7;  // 0x2D0 (0x2D0)
	bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute : 1;  // 0x2D0 (0x2D0)
	char pad_721[3];  // 0x2D1 (0x2D1)
	float CallFunc_GetFloatAttribute_ReturnValue;  // 0x2D4 (0x2D4)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyPremadeSpecArray_ReturnValue;  // 0x0 (0x0) (0x0 (0x0))
	char pad_744_1 : 7;  // 0x2E8 (0x2E8)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0x2E8 (0x2E8)
	char pad_745[7];  // 0x2E9 (0x2E9)
	double CallFunc_Less_DoubleDouble_A_ImplicitCast;  // 0x2F0 (0x2F0)


}; 
 
 