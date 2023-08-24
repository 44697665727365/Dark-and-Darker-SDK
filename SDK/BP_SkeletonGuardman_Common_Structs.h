#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_SkeletonGuardman_Common.BP_SkeletonGuardman_Common_C.ExecuteUbergraph_BP_SkeletonGuardman_Common
struct FExecuteUbergraph_BP_SkeletonGuardman_Common
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x5 (0x5)
	char pad_6[10];  // 0x6 (0x6)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x10 (0x10)
	struct ADCCharacterBase* K2Node_Event_InInstigator;  // 0x70 (0x70)
	struct AActor* K2Node_Event_InEffectCauser;  // 0x78 (0x78)
	struct ABP_ProjectileActor_C* K2Node_DynamicCast_AsBP_Projectile_Actor;  // 0x80 (0x80)
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x88 (0x88)
	char pad_137[7];  // 0x89 (0x89)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x90 (0x90)
	char pad_320_1 : 7;  // 0x140 (0x140)
	bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute : 1;  // 0x140 (0x140)
	char pad_321[3];  // 0x141 (0x141)
	float CallFunc_GetFloatAttribute_ReturnValue;  // 0x144 (0x144)
	struct AActor* K2Node_Event_Interacter_2;  // 0x148 (0x148)
	struct UPrimitiveComponent* K2Node_Event_InteractPart;  // 0x150 (0x150)
	char pad_344_1 : 7;  // 0x158 (0x158)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0x158 (0x158)
	char pad_345[7];  // 0x159 (0x159)
	struct AActor* K2Node_Event_Interacter;  // 0x160 (0x160)
	char pad_360_1 : 7;  // 0x168 (0x168)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x168 (0x168)
	char pad_361_1 : 7;  // 0x169 (0x169)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x169 (0x169)
	char pad_362[6];  // 0x16A (0x16A)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x170 (0x170)
	struct AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;  // 0x178 (0x178)
	struct AActor* CallFunc_FinishSpawningActor_ReturnValue;  // 0x180 (0x180)
	struct ABP_SkeletonGuardmanShield_Nightmare_C* K2Node_DynamicCast_AsBP_Skeleton_Guardman_Shield_Nightmare;  // 0x188 (0x188)
	char pad_400_1 : 7;  // 0x190 (0x190)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x190 (0x190)
	char pad_401[7];  // 0x191 (0x191)
	struct ABP_SkeletonGuardmanShield_C* K2Node_DynamicCast_AsBP_Skeleton_Guardman_Shield;  // 0x198 (0x198)
	char pad_416_1 : 7;  // 0x1A0 (0x1A0)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x1A0 (0x1A0)
	char pad_417[7];  // 0x1A1 (0x1A1)
	double CallFunc_Greater_DoubleDouble_A_ImplicitCast;  // 0x1A8 (0x1A8)
	float CallFunc_Delay_Duration_ImplicitCast;  // 0x1B0 (0x1B0)


}; 
 
 // Function BP_SkeletonGuardman_Common.BP_SkeletonGuardman_Common_C.InteractLost
// Size: 0x8(Inherited: 0x8)
struct FInteractLost : FInteractLost
{
	struct AActor* Interacter;  // 0x0 (0x0)


}; 
 
 // Function BP_SkeletonGuardman_Common.BP_SkeletonGuardman_Common_C.InteractFound
// Size: 0x10(Inherited: 0x10)
struct FInteractFound : FInteractFound
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct UPrimitiveComponent* InteractPart;  // 0x8 (0x8)


}; 
 
 // Function BP_SkeletonGuardman_Common.BP_SkeletonGuardman_Common_C.OnStuckByShield
// Size: 0x10(Inherited: 0x10)
struct FOnStuckByShield : FOnStuckByShield
{
	struct ADCCharacterBase* InInstigator;  // 0x0 (0x0)
	struct AActor* InEffectCauser;  // 0x8 (0x8)


}; 
 
 