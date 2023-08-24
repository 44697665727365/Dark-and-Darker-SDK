#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_BindEvil.GA_BindEvil_C.AbilityActivated
// Size: 0xB1(Inherited: 0xB8)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)
	char pad_360_1 : 7;  // 0x168 (0x168)
	bool bIsSocketSightBlocked : 1;  // 0xB0 (0xB0)


}; 
 
 // Function GA_BindEvil.GA_BindEvil_C.Cancelled_80FB05884552A474DEFC9D9E3F66AD3C
struct FCancelled_80FB05884552A474DEFC9D9E3F66AD3C
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function GA_BindEvil.GA_BindEvil_C.ExecuteUbergraph_GA_BindEvil
struct FExecuteUbergraph_GA_BindEvil
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_Data_2;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x30 (0x30)
	struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_Data;  // 0x40 (0x40)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x68 (0x68)
	struct FGameplayAbilityTargetDataHandle Temp_struct_Variable;  // 0x78 (0x78)
	struct UAbilityTask_WaitTargetData* CallFunc_WaitTargetData_ReturnValue;  // 0xA0 (0xA0)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xA8 (0xA8)
	char pad_169[7];  // 0xA9 (0xA9)
	struct AGameplayAbilityTargetActor* CallFunc_BeginSpawningActor_SpawnedActor;  // 0xB0 (0xB0)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool CallFunc_BeginSpawningActor_ReturnValue : 1;  // 0xB8 (0xB8)
	char pad_185_1 : 7;  // 0xB9 (0xB9)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0xB9 (0xB9)
	char pad_186[6];  // 0xBA (0xBA)
	struct FHitResult CallFunc_GetHitResultFromTargetData_ReturnValue;  // 0xC0 (0xC0)
	char pad_424_1 : 7;  // 0x1A8 (0x1A8)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x1A8 (0x1A8)
	char pad_425_1 : 7;  // 0x1A9 (0x1A9)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x1A9 (0x1A9)
	char pad_426[2];  // 0x1AA (0x1AA)
	float CallFunc_BreakHitResult_Time;  // 0x1AC (0x1AC)
	float CallFunc_BreakHitResult_Distance;  // 0x1B0 (0x1B0)
	char pad_436[4];  // 0x1B4 (0x1B4)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x1B8 (0x1B8)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x1D0 (0x1D0)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x1E8 (0x1E8)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x200 (0x200)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x218 (0x218)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x220 (0x220)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x228 (0x228)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x230 (0x230)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x238 (0x238)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x240 (0x240)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x244 (0x244)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x248 (0x248)
	char pad_588[4];  // 0x24C (0x24C)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x250 (0x250)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x268 (0x268)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x280 (0x280)
	char pad_816_1 : 7;  // 0x330 (0x330)
	bool K2Node_Event_bIsSocketSightBlocked : 1;  // 0x330 (0x330)
	char pad_817[7];  // 0x331 (0x331)
	struct FHitResult CallFunc_MakeHitResult_ReturnValue;  // 0x338 (0x338)
	struct ADCMonsterBase* K2Node_DynamicCast_AsDCMonster_Base;  // 0x420 (0x420)
	char pad_1064_1 : 7;  // 0x428 (0x428)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x428 (0x428)
	char pad_1065[3];  // 0x429 (0x429)
	float CallFunc_GetAimRadius_ReturnValue;  // 0x42C (0x42C)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x430 (0x430)
	char pad_1088_1 : 7;  // 0x440 (0x440)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x440 (0x440)
	char pad_1089_1 : 7;  // 0x441 (0x441)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x441 (0x441)
	char pad_1090[2];  // 0x442 (0x442)
	float CallFunc_GetRange_ReturnValue;  // 0x444 (0x444)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast;  // 0x448 (0x448)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast_2;  // 0x450 (0x450)


}; 
 
 // Function GA_BindEvil.GA_BindEvil_C.ValidData_80FB05884552A474DEFC9D9E3F66AD3C
struct FValidData_80FB05884552A474DEFC9D9E3F66AD3C
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 