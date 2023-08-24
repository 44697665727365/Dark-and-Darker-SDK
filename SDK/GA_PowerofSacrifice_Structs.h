#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_PowerofSacrifice.GA_PowerofSacrifice_C.OnCasted
// Size: 0x8(Inherited: 0x8)
struct FOnCasted : FOnCasted
{
	struct AActor* InTarget;  // 0x0 (0x0)


}; 
 
 // Function GA_PowerofSacrifice.GA_PowerofSacrifice_C.AbilityActivated
// Size: 0xB1(Inherited: 0xB8)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)
	char pad_360_1 : 7;  // 0x168 (0x168)
	bool bIsSocketSightBlocked : 1;  // 0xB0 (0xB0)


}; 
 
 // Function GA_PowerofSacrifice.GA_PowerofSacrifice_C.Cancelled_B9BF17034DF78B504CB93C89E45D98B3
struct FCancelled_B9BF17034DF78B504CB93C89E45D98B3
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function GA_PowerofSacrifice.GA_PowerofSacrifice_C.ExecuteUbergraph_GA_PowerofSacrifice
struct FExecuteUbergraph_GA_PowerofSacrifice
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
	struct ACharacter* K2Node_DynamicCast_As___;  // 0x338 (0x338)
	char pad_832_1 : 7;  // 0x340 (0x340)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x340 (0x340)
	char pad_833_1 : 7;  // 0x341 (0x341)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x341 (0x341)
	char pad_834[2];  // 0x342 (0x342)
	float CallFunc_GetAimRadius_ReturnValue;  // 0x344 (0x344)
	float CallFunc_GetRange_ReturnValue;  // 0x348 (0x348)
	char pad_844[4];  // 0x34C (0x34C)
	struct AActor* K2Node_Event_InTarget;  // 0x350 (0x350)
	struct UObject* CallFunc_GetCurrentSourceObject_ReturnValue;  // 0x358 (0x358)
	char pad_864_1 : 7;  // 0x360 (0x360)
	bool CallFunc_IsMatchingAbilityActivated_ReturnValue : 1;  // 0x360 (0x360)
	char pad_865[7];  // 0x361 (0x361)
	struct FDesignDataGameplayAbility CallFunc_GetDesignDataGameplayAbility_ReturnValue;  // 0x368 (0x368)
	struct TArray<struct FDCGameplayAbilityData> K2Node_MakeArray_Array;  // 0x3C0 (0x3C0)
	struct TArray<struct FGameplayAbilitySpecHandle> CallFunc_GiveAbilities_ReturnValue;  // 0x3D0 (0x3D0)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast;  // 0x3E0 (0x3E0)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast_2;  // 0x3E8 (0x3E8)


}; 
 
 // Function GA_PowerofSacrifice.GA_PowerofSacrifice_C.ValidData_B9BF17034DF78B504CB93C89E45D98B3
struct FValidData_B9BF17034DF78B504CB93C89E45D98B3
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 