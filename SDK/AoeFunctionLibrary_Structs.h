#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function AoeFunctionLibrary.AoeFunctionLibrary_C.SpawnAoeFromSelf
struct FSpawnAoeFromSelf
{
	struct FVector SpawnLocation;  // 0x0 (0x0)
	struct ADCCharacterBase* DCCharacterBase;  // 0x18 (0x18)
	double RandomSpawnRadius;  // 0x20 (0x20)
	ADCAoeBase* Aoe Class;  // 0x28 (0x28)
	struct UDCGameplayAbilityBase* DCGameplay Ability Base;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool SpawnFromNavMesh : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct FGameplayEventData Event Data;  // 0x40 (0x40)
	struct UObject* __WorldContext;  // 0xF0 (0xF0)
	struct ADCAoeBase* Return Value;  // 0xF8 (0xF8)
	struct FVector CallFunc_GetCapsuleBottomLocation_ReturnValue;  // 0x100 (0x100)
	struct FVector CallFunc_GetActorForwardVector_ReturnValue;  // 0x118 (0x118)
	struct FQuat CallFunc_Conv_VectorToQuaternion_ReturnValue;  // 0x130 (0x130)
	struct FVector CallFunc_Quat_RotateVector_ReturnValue;  // 0x150 (0x150)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x168 (0x168)
	struct FVector CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation;  // 0x180 (0x180)
	char pad_408_1 : 7;  // 0x198 (0x198)
	bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue : 1;  // 0x198 (0x198)
	char pad_409[7];  // 0x199 (0x199)
	struct FVector CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation_2;  // 0x1A0 (0x1A0)
	char pad_440_1 : 7;  // 0x1B8 (0x1B8)
	bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue_2 : 1;  // 0x1B8 (0x1B8)
	char pad_441_1 : 7;  // 0x1B9 (0x1B9)
	bool CallFunc_SpawnAoe_bSuccessfully : 1;  // 0x1B9 (0x1B9)
	char pad_442[6];  // 0x1BA (0x1BA)
	struct ADCAoeBase* CallFunc_SpawnAoe_ReturnValue;  // 0x1C0 (0x1C0)
	char pad_456_1 : 7;  // 0x1C8 (0x1C8)
	bool CallFunc_SpawnAoe_bSuccessfully_2 : 1;  // 0x1C8 (0x1C8)
	char pad_457[7];  // 0x1C9 (0x1C9)
	struct ADCAoeBase* CallFunc_SpawnAoe_ReturnValue_2;  // 0x1D0 (0x1D0)
	float CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast;  // 0x1D8 (0x1D8)
	float CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast_2;  // 0x1DC (0x1DC)


}; 
 
 // Function AoeFunctionLibrary.AoeFunctionLibrary_C.SpawnAoeFromTarget
struct FSpawnAoeFromTarget
{
	struct FVector SpawnLocation;  // 0x0 (0x0)
	struct FName KeyName;  // 0x18 (0x18)
	struct ADCCharacterBase* DCCharacterBase;  // 0x20 (0x20)
	double RandomSpawnRadius;  // 0x28 (0x28)
	ADCAoeBase* Aoe Class;  // 0x30 (0x30)
	struct UDCGameplayAbilityBase* DCGameplay Ability Base;  // 0x38 (0x38)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool SpawnFromNavMesh : 1;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	struct FGameplayEventData Event Data;  // 0x48 (0x48)
	struct UObject* __WorldContext;  // 0xF8 (0xF8)
	char pad_256_1 : 7;  // 0x100 (0x100)
	bool Cast Bool : 1;  // 0x100 (0x100)
	char pad_257[7];  // 0x101 (0x101)
	struct ADCAoeBase* ReturnValue;  // 0x108 (0x108)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x110 (0x110)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x118 (0x118)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x120 (0x120)
	char pad_296_1 : 7;  // 0x128 (0x128)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x128 (0x128)
	char pad_297[7];  // 0x129 (0x129)
	struct FVector CallFunc_GetCapsuleBottomLocation_ReturnValue;  // 0x130 (0x130)
	struct FVector CallFunc_GetActorForwardVector_ReturnValue;  // 0x148 (0x148)
	struct FQuat CallFunc_Conv_VectorToQuaternion_ReturnValue;  // 0x160 (0x160)
	struct FVector CallFunc_Quat_RotateVector_ReturnValue;  // 0x180 (0x180)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x198 (0x198)
	struct FVector CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation;  // 0x1B0 (0x1B0)
	char pad_456_1 : 7;  // 0x1C8 (0x1C8)
	bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue : 1;  // 0x1C8 (0x1C8)
	char pad_457[7];  // 0x1C9 (0x1C9)
	struct FVector CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation_2;  // 0x1D0 (0x1D0)
	char pad_488_1 : 7;  // 0x1E8 (0x1E8)
	bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue_2 : 1;  // 0x1E8 (0x1E8)
	char pad_489_1 : 7;  // 0x1E9 (0x1E9)
	bool CallFunc_SpawnAoe_bSuccessfully : 1;  // 0x1E9 (0x1E9)
	char pad_490[6];  // 0x1EA (0x1EA)
	struct ADCAoeBase* CallFunc_SpawnAoe_ReturnValue;  // 0x1F0 (0x1F0)
	char pad_504_1 : 7;  // 0x1F8 (0x1F8)
	bool CallFunc_SpawnAoe_bSuccessfully_2 : 1;  // 0x1F8 (0x1F8)
	char pad_505[7];  // 0x1F9 (0x1F9)
	struct ADCAoeBase* CallFunc_SpawnAoe_ReturnValue_2;  // 0x200 (0x200)
	float CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast;  // 0x208 (0x208)
	float CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast_2;  // 0x20C (0x20C)


}; 
 
 