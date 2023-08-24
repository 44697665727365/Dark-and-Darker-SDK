#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_AOE_LocustsSwarm.BP_AOE_LocustsSwarm_C.DestroyEvent
struct FDestroyEvent
{
	double DestroyDelayTime;  // 0x0 (0x0)


}; 
 
 // Function BP_AOE_LocustsSwarm.BP_AOE_LocustsSwarm_C.DespawnFiringFX
// Size: 0x9(Inherited: 0x70)
struct FDespawnFiringFX : FDespawnFiringFX
{
	struct UCapsuleComponent* K2Node_DynamicCast_As______;  // 0x0 (0x0)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x8 (0x8)


}; 
 
 // Function BP_AOE_LocustsSwarm.BP_AOE_LocustsSwarm_C.SpawnCollision
// Size: 0xD8(Inherited: 0x434)
struct FSpawnCollision : FSpawnCollision
{
	struct AActor* CallFunc_GetOwner_ReturnValue;  // 0x0 (0x0)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x8 (0x8)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x20 (0x20)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x28 (0x28)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x40 (0x40)
	struct FTransform CallFunc_MakeTransform_ReturnValue;  // 0x60 (0x60)
	struct UCapsuleComponent* CallFunc_AddComponent_ReturnValue;  // 0xC0 (0xC0)
	float CallFunc_SetCapsuleRadius_Radius_ImplicitCast;  // 0xC8 (0xC8)
	float CallFunc_DrawDebugCapsule_Radius_ImplicitCast;  // 0xCC (0xCC)
	float CallFunc_SetCapsuleHalfHeight_HalfHeight_ImplicitCast;  // 0xD0 (0xD0)
	float CallFunc_DrawDebugCapsule_HalfHeight_ImplicitCast;  // 0xD4 (0xD4)


}; 
 
 // Function BP_AOE_LocustsSwarm.BP_AOE_LocustsSwarm_C.ExecuteUbergraph_BP_AOE_LocustsSwarm
struct FExecuteUbergraph_BP_AOE_LocustsSwarm
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	double K2Node_CustomEvent_DestroyDelayTime;  // 0x8 (0x8)
	struct FDelegate Temp_delegate_Variable;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	int32_t CallFunc_PostAkEvent_ReturnValue;  // 0x24 (0x24)
	float CallFunc_SetLifeSpan_InLifespan_ImplicitCast;  // 0x28 (0x28)


}; 
 
 // Function BP_AOE_LocustsSwarm.BP_AOE_LocustsSwarm_C.OnRep_Radius
struct FOnRep_Radius
{
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x0 (0x0)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x8 (0x8)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x10 (0x10)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function BP_AOE_LocustsSwarm.BP_AOE_LocustsSwarm_C.SetData
struct FSetData
{
	double AreaRadius;  // 0x0 (0x0)


}; 
 
 // Function BP_AOE_LocustsSwarm.BP_AOE_LocustsSwarm_C.SpawnFiringFX
// Size: 0x48(Inherited: 0xCD)
struct FSpawnFiringFX : FSpawnFiringFX
{
	int32_t Temp_int_Array_Index_Variable;  // 0x0 (0x0)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x4 (0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x8 (0x8)
	struct FDelegate Temp_delegate_Variable;  // 0xC (0xC)
	struct UNiagaraSystem* CallFunc_Array_Get_Item;  // 0x20 (0x20)
	int32_t CallFunc_PostAkEvent_ReturnValue;  // 0x28 (0x28)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x2C (0x2C)
	char pad_249_1 : 7;  // 0xF9 (0xF9)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x30 (0x30)
	struct UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue;  // 0x38 (0x38)
	int32_t CallFunc_Array_Add_ReturnValue;  // 0x40 (0x40)
	float CallFunc_SetVariableFloat_InValue_ImplicitCast;  // 0x44 (0x44)


}; 
 
 