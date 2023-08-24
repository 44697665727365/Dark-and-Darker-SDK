#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.DestroyEvent
struct FDestroyEvent
{
	double DestroyDelayTime;  // 0x0 (0x0)


}; 
 
 // Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.DespawnFiringFX
// Size: 0x9(Inherited: 0x70)
struct FDespawnFiringFX : FDespawnFiringFX
{
	struct UCapsuleComponent* K2Node_DynamicCast_As______;  // 0x0 (0x0)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x8 (0x8)


}; 
 
 // Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.ExecuteUbergraph_BP_AOE_Earthquake
struct FExecuteUbergraph_BP_AOE_Earthquake
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	double K2Node_CustomEvent_DestroyDelayTime;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct ADCCharacterBase* K2Node_Event_CharacterBase;  // 0x18 (0x18)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x20 (0x20)
	struct FDelegate Temp_delegate_Variable;  // 0x24 (0x24)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x34 (0x34)
	int32_t Temp_int_Array_Index_Variable;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)
	struct TArray<struct AActor*> CallFunc_Map_Keys_Keys;  // 0x40 (0x40)
	struct AActor* CallFunc_Array_Get_Item;  // 0x50 (0x50)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x58 (0x58)
	char pad_92_1 : 7;  // 0x5C (0x5C)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x5C (0x5C)
	char pad_93_1 : 7;  // 0x5D (0x5D)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x5D (0x5D)
	char pad_94[2];  // 0x5E (0x5E)
	struct FDelegate Temp_delegate_Variable_2;  // 0x60 (0x60)
	int32_t CallFunc_PostAkEvent_ReturnValue;  // 0x70 (0x70)
	int32_t CallFunc_PostAkEvent_ReturnValue_2;  // 0x74 (0x74)
	float CallFunc_SetLifeSpan_InLifespan_ImplicitCast;  // 0x78 (0x78)


}; 
 
 // Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.SetAoeData
struct FSetAoeData
{
	double Radius;  // 0x0 (0x0)


}; 
 
 // Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.OnRep_Radius
struct FOnRep_Radius
{
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x0 (0x0)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x8 (0x8)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x10 (0x10)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.RemoveEffect
struct FRemoveEffect
{
	struct AActor* OutActor;  // 0x0 (0x0)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue;  // 0x8 (0x8)
	struct UDCHitBoxComponent* CallFunc_GetComponentByClass_ReturnValue;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)
	struct AActor* Temp_object_Variable;  // 0x20 (0x20)
	struct FActiveGameplayEffectHandle CallFunc_Map_Find_Value;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_Map_Find_ReturnValue : 1;  // 0x30 (0x30)
	char pad_49_1 : 7;  // 0x31 (0x31)
	bool CallFunc_Map_Remove_ReturnValue : 1;  // 0x31 (0x31)
	char pad_50_1 : 7;  // 0x32 (0x32)
	bool CallFunc_RemoveActiveGameplayEffect_ReturnValue : 1;  // 0x32 (0x32)


}; 
 
 // Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.RemoveEndOverlapActor
// Size: 0x8(Inherited: 0x8)
struct FRemoveEndOverlapActor : FRemoveEndOverlapActor
{
	struct ADCCharacterBase* CharacterBase;  // 0x0 (0x0)


}; 
 
 // Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.SpawnCollision
// Size: 0xD4(Inherited: 0x434)
struct FSpawnCollision : FSpawnCollision
{
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x0 (0x0)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x8 (0x8)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x20 (0x20)
	struct AActor* CallFunc_GetOwner_ReturnValue;  // 0x38 (0x38)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x40 (0x40)
	struct FTransform CallFunc_MakeTransform_ReturnValue;  // 0x60 (0x60)
	struct UCapsuleComponent* CallFunc_AddComponent_ReturnValue;  // 0xC0 (0xC0)
	float CallFunc_DrawDebugCapsule_Radius_ImplicitCast;  // 0xC8 (0xC8)
	float CallFunc_DrawDebugCapsule_HalfHeight_ImplicitCast;  // 0xCC (0xCC)
	float CallFunc_SetCapsuleRadius_Radius_ImplicitCast;  // 0xD0 (0xD0)


}; 
 
 // Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.SpawnFiringFX
// Size: 0x30(Inherited: 0xCD)
struct FSpawnFiringFX : FSpawnFiringFX
{
	int32_t Temp_int_Array_Index_Variable;  // 0x0 (0x0)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x4 (0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x8 (0x8)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0xC (0xC)
	struct UNiagaraSystem* CallFunc_Array_Get_Item;  // 0x10 (0x10)
	char pad_229_1 : 7;  // 0xE5 (0xE5)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x18 (0x18)
	struct UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue;  // 0x20 (0x20)
	int32_t CallFunc_Array_Add_ReturnValue;  // 0x28 (0x28)
	float CallFunc_SetVariableFloat_InValue_ImplicitCast;  // 0x2C (0x2C)


}; 
 
 