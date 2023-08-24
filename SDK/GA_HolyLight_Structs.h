#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_HolyLight.GA_HolyLight_C.AbilityActivated
// Size: 0xB1(Inherited: 0xB8)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)
	char pad_360_1 : 7;  // 0x168 (0x168)
	bool bIsSocketSightBlocked : 1;  // 0xB0 (0xB0)


}; 
 
 // Function GA_HolyLight.GA_HolyLight_C.Cancelled_00A49EE84F13A4C22850B1B2A2CDC0F0
struct FCancelled_00A49EE84F13A4C22850B1B2A2CDC0F0
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function GA_HolyLight.GA_HolyLight_C.ExecuteUbergraph_GA_HolyLight
struct FExecuteUbergraph_GA_HolyLight
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_Data_2;  // 0x10 (0x10)
	struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_Data;  // 0x38 (0x38)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x60 (0x60)
	struct FGameplayAbilityTargetDataHandle Temp_struct_Variable;  // 0x70 (0x70)
	struct UAbilityTask_WaitTargetData* CallFunc_WaitTargetData_ReturnValue;  // 0x98 (0x98)
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xA0 (0xA0)
	char pad_161[7];  // 0xA1 (0xA1)
	struct AGameplayAbilityTargetActor* CallFunc_BeginSpawningActor_SpawnedActor;  // 0xA8 (0xA8)
	char pad_176_1 : 7;  // 0xB0 (0xB0)
	bool CallFunc_BeginSpawningActor_ReturnValue : 1;  // 0xB0 (0xB0)
	char pad_177_1 : 7;  // 0xB1 (0xB1)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0xB1 (0xB1)
	char pad_178[6];  // 0xB2 (0xB2)
	struct FHitResult CallFunc_GetHitResultFromTargetData_ReturnValue;  // 0xB8 (0xB8)
	char pad_416_1 : 7;  // 0x1A0 (0x1A0)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x1A0 (0x1A0)
	char pad_417_1 : 7;  // 0x1A1 (0x1A1)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x1A1 (0x1A1)
	char pad_418[2];  // 0x1A2 (0x1A2)
	float CallFunc_BreakHitResult_Time;  // 0x1A4 (0x1A4)
	float CallFunc_BreakHitResult_Distance;  // 0x1A8 (0x1A8)
	char pad_428[4];  // 0x1AC (0x1AC)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x1B0 (0x1B0)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x1C8 (0x1C8)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x1E0 (0x1E0)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x1F8 (0x1F8)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x210 (0x210)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x218 (0x218)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x220 (0x220)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x228 (0x228)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x230 (0x230)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x238 (0x238)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x23C (0x23C)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x240 (0x240)
	char pad_580[4];  // 0x244 (0x244)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x248 (0x248)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x260 (0x260)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x278 (0x278)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;  // 0x280 (0x280)
	char pad_656_1 : 7;  // 0x290 (0x290)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x290 (0x290)
	char pad_657[7];  // 0x291 (0x291)
	struct ADCPlayerCharacterBase* K2Node_DynamicCast_AsDCPlayer_Character_Base;  // 0x298 (0x298)
	char pad_672_1 : 7;  // 0x2A0 (0x2A0)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x2A0 (0x2A0)
	char pad_673_1 : 7;  // 0x2A1 (0x2A1)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x2A1 (0x2A1)
	char pad_674_1 : 7;  // 0x2A2 (0x2A2)
	bool CallFunc_IsSameTeamWithPlayerCharacter_ReturnValue : 1;  // 0x2A2 (0x2A2)
	char pad_675[5];  // 0x2A3 (0x2A3)
	struct ADCPlayerCharacterBase* K2Node_DynamicCast_AsDCPlayer_Character_Base_2;  // 0x2A8 (0x2A8)
	char pad_688_1 : 7;  // 0x2B0 (0x2B0)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x2B0 (0x2B0)
	char pad_689[7];  // 0x2B1 (0x2B1)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x2B8 (0x2B8)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData_2;  // 0x368 (0x368)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x418 (0x418)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_2;  // 0x428 (0x428)
	char pad_1080_1 : 7;  // 0x438 (0x438)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x438 (0x438)
	char pad_1081_1 : 7;  // 0x439 (0x439)
	bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute : 1;  // 0x439 (0x439)
	char pad_1082[2];  // 0x43A (0x43A)
	float CallFunc_GetFloatAttribute_ReturnValue;  // 0x43C (0x43C)
	char pad_1088_1 : 7;  // 0x440 (0x440)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x440 (0x440)
	char pad_1089[7];  // 0x441 (0x441)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x448 (0x448)
	char pad_1104_1 : 7;  // 0x450 (0x450)
	bool Temp_bool_Variable : 1;  // 0x450 (0x450)
	char pad_1105_1 : 7;  // 0x451 (0x451)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x451 (0x451)
	char pad_1106_1 : 7;  // 0x452 (0x452)
	bool CallFunc_K2_HasAuthority_ReturnValue_2 : 1;  // 0x452 (0x452)
	char pad_1107[5];  // 0x453 (0x453)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x458 (0x458)
	char pad_1288_1 : 7;  // 0x508 (0x508)
	bool K2Node_Event_bIsSocketSightBlocked : 1;  // 0x508 (0x508)
	char pad_1289[3];  // 0x509 (0x509)
	float CallFunc_GetAimRadius_ReturnValue;  // 0x50C (0x50C)
	float CallFunc_GetRange_ReturnValue;  // 0x510 (0x510)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x514 (0x514)
	char pad_1316[4];  // 0x524 (0x524)
	double K2Node_VariableSet_TempHealth_ImplicitCast;  // 0x528 (0x528)
	double CallFunc_Subtract_DoubleDouble_A_ImplicitCast;  // 0x530 (0x530)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast;  // 0x538 (0x538)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast_2;  // 0x540 (0x540)


}; 
 
 // Function GA_HolyLight.GA_HolyLight_C.ValidData_00A49EE84F13A4C22850B1B2A2CDC0F0
struct FValidData_00A49EE84F13A4C22850B1B2A2CDC0F0
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 