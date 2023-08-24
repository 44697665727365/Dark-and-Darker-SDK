#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_SkeletonGuardmanFromFakeDeath_Common.BP_SkeletonGuardmanFromFakeDeath_Common_C.ExecuteUbergraph_BP_SkeletonGuardmanFromFakeDeath_Common
struct FExecuteUbergraph_BP_SkeletonGuardmanFromFakeDeath_Common
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x20 (0x20)
	struct ADCCharacterBase* K2Node_Event_InInstigator;  // 0x80 (0x80)
	struct AActor* K2Node_Event_InEffectCauser;  // 0x88 (0x88)
	struct ABP_ProjectileActor_C* K2Node_DynamicCast_AsBP_Projectile_Actor;  // 0x90 (0x90)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x98 (0x98)
	char pad_153[7];  // 0x99 (0x99)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0xA0 (0xA0)
	char pad_336_1 : 7;  // 0x150 (0x150)
	bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute : 1;  // 0x150 (0x150)
	char pad_337[3];  // 0x151 (0x151)
	float CallFunc_GetFloatAttribute_ReturnValue;  // 0x154 (0x154)
	struct AActor* K2Node_Event_Interacter_2;  // 0x158 (0x158)
	struct UPrimitiveComponent* K2Node_Event_InteractPart;  // 0x160 (0x160)
	char pad_360_1 : 7;  // 0x168 (0x168)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0x168 (0x168)
	char pad_361[7];  // 0x169 (0x169)
	struct AActor* K2Node_Event_Interacter;  // 0x170 (0x170)
	char pad_376_1 : 7;  // 0x178 (0x178)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x178 (0x178)
	char pad_377_1 : 7;  // 0x179 (0x179)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x179 (0x179)
	char pad_378[6];  // 0x17A (0x17A)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x180 (0x180)
	struct AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;  // 0x188 (0x188)
	char pad_400_1 : 7;  // 0x190 (0x190)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x190 (0x190)
	char pad_401[7];  // 0x191 (0x191)
	struct AActor* CallFunc_FinishSpawningActor_ReturnValue;  // 0x198 (0x198)
	struct ABP_SkeletonGuardmanShield_C* K2Node_DynamicCast_AsBP_Skeleton_Guardman_Shield;  // 0x1A0 (0x1A0)
	char pad_424_1 : 7;  // 0x1A8 (0x1A8)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x1A8 (0x1A8)
	char pad_425[7];  // 0x1A9 (0x1A9)
	struct ABP_SkeletonGuardmanShield_Nightmare_C* K2Node_DynamicCast_AsBP_Skeleton_Guardman_Shield_Nightmare;  // 0x1B0 (0x1B0)
	char pad_440_1 : 7;  // 0x1B8 (0x1B8)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x1B8 (0x1B8)
	char pad_441[3];  // 0x1B9 (0x1B9)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x1BC (0x1BC)
	int32_t K2Node_Event_InCount;  // 0x1C4 (0x1C4)
	char pad_456_1 : 7;  // 0x1C8 (0x1C8)
	bool CallFunc_Normal_ReturnValue : 1;  // 0x1C8 (0x1C8)
	char pad_457_1 : 7;  // 0x1C9 (0x1C9)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x1C9 (0x1C9)
	char pad_458_1 : 7;  // 0x1CA (0x1CA)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue : 1;  // 0x1CA (0x1CA)
	char pad_459_1 : 7;  // 0x1CB (0x1CB)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue_2 : 1;  // 0x1CB (0x1CB)
	char pad_460_1 : 7;  // 0x1CC (0x1CC)
	bool CallFunc_Death_ReturnValue : 1;  // 0x1CC (0x1CC)
	char pad_461[3];  // 0x1CD (0x1CD)
	double CallFunc_Greater_DoubleDouble_A_ImplicitCast;  // 0x1D0 (0x1D0)
	float CallFunc_Delay_Duration_ImplicitCast;  // 0x1D8 (0x1D8)


}; 
 
 // Function BP_SkeletonGuardmanFromFakeDeath_Common.BP_SkeletonGuardmanFromFakeDeath_Common_C.InteractLost
// Size: 0x8(Inherited: 0x8)
struct FInteractLost : FInteractLost
{
	struct AActor* Interacter;  // 0x0 (0x0)


}; 
 
 // Function BP_SkeletonGuardmanFromFakeDeath_Common.BP_SkeletonGuardmanFromFakeDeath_Common_C.InteractFound
// Size: 0x10(Inherited: 0x10)
struct FInteractFound : FInteractFound
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct UPrimitiveComponent* InteractPart;  // 0x8 (0x8)


}; 
 
 // Function BP_SkeletonGuardmanFromFakeDeath_Common.BP_SkeletonGuardmanFromFakeDeath_Common_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // Function BP_SkeletonGuardmanFromFakeDeath_Common.BP_SkeletonGuardmanFromFakeDeath_Common_C.OnStuckByShield
// Size: 0x10(Inherited: 0x10)
struct FOnStuckByShield : FOnStuckByShield
{
	struct ADCCharacterBase* InInstigator;  // 0x0 (0x0)
	struct AActor* InEffectCauser;  // 0x8 (0x8)


}; 
 
 