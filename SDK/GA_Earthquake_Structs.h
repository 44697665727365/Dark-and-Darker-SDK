#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Earthquake.GA_Earthquake_C.AbilityActivated
// Size: 0xB1(Inherited: 0xB8)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)
	char pad_360_1 : 7;  // 0x168 (0x168)
	bool bIsSocketSightBlocked : 1;  // 0xB0 (0xB0)


}; 
 
 // Function GA_Earthquake.GA_Earthquake_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_Earthquake.GA_Earthquake_C.Cancelled_1D8A04C140FE58B0FC6293AA01E7D7B3
struct FCancelled_1D8A04C140FE58B0FC6293AA01E7D7B3
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function GA_Earthquake.GA_Earthquake_C.RemoveEffect
struct FRemoveEffect
{
	struct AActor* OutActor;  // 0x0 (0x0)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_Map_Remove_ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct UDCHitBoxComponent* CallFunc_GetComponentByClass_ReturnValue;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x21 (0x21)
	char pad_34[2];  // 0x22 (0x22)
	struct FActiveGameplayEffectHandle CallFunc_Map_Find_Value;  // 0x24 (0x24)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool CallFunc_Map_Find_ReturnValue : 1;  // 0x2C (0x2C)
	char pad_45_1 : 7;  // 0x2D (0x2D)
	bool CallFunc_RemoveActiveGameplayEffect_ReturnValue : 1;  // 0x2D (0x2D)


}; 
 
 // Function GA_Earthquake.GA_Earthquake_C.EndSpell
struct FEndSpell
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct ABP_AOE_Earthquake_C* K2Node_DynamicCast_AsBP_AOE_Earthquake;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x10 (0x10)


}; 
 
 // Function GA_Earthquake.GA_Earthquake_C.EventReceived_60A5E2014E7F780EFC926787A0E05711
struct FEventReceived_60A5E2014E7F780EFC926787A0E05711
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_Earthquake.GA_Earthquake_C.SpawnAoe
struct FSpawnAoe
{
	struct FHitResult HtResult;  // 0x0 (0x0)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool Result : 1;  // 0xE8 (0xE8)
	char pad_233_1 : 7;  // 0xE9 (0xE9)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0xE9 (0xE9)
	char pad_234_1 : 7;  // 0xEA (0xEA)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0xEA (0xEA)
	char pad_235[1];  // 0xEB (0xEB)
	float CallFunc_BreakHitResult_Time;  // 0xEC (0xEC)
	float CallFunc_BreakHitResult_Distance;  // 0xF0 (0xF0)
	char pad_244[4];  // 0xF4 (0xF4)
	struct FVector CallFunc_BreakHitResult_Location;  // 0xF8 (0xF8)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x110 (0x110)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x128 (0x128)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x140 (0x140)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x158 (0x158)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x160 (0x160)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x168 (0x168)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x170 (0x170)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x178 (0x178)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x180 (0x180)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x184 (0x184)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x188 (0x188)
	char pad_396[4];  // 0x18C (0x18C)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x190 (0x190)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x1A8 (0x1A8)
	char pad_448_1 : 7;  // 0x1C0 (0x1C0)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x1C0 (0x1C0)
	char pad_449_1 : 7;  // 0x1C1 (0x1C1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x1C1 (0x1C1)
	char pad_450[6];  // 0x1C2 (0x1C2)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue;  // 0x1C8 (0x1C8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x1E0 (0x1E0)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x1E8 (0x1E8)
	char pad_496_1 : 7;  // 0x1F0 (0x1F0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x1F0 (0x1F0)
	char pad_497_1 : 7;  // 0x1F1 (0x1F1)
	bool CallFunc_SpawnAoeDeferred_bSuccessfully : 1;  // 0x1F1 (0x1F1)
	char pad_498[6];  // 0x1F2 (0x1F2)
	struct ADCAoeBase* CallFunc_SpawnAoeDeferred_ReturnValue;  // 0x1F8 (0x1F8)
	char pad_512_1 : 7;  // 0x200 (0x200)
	bool CallFunc_DeferredAoeFinish_bSuccessfully : 1;  // 0x200 (0x200)
	char pad_513[3];  // 0x201 (0x201)
	float CallFunc_GetAreaRadius_ReturnValue;  // 0x204 (0x204)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x208 (0x208)
	struct TArray<struct FHitResult> CallFunc_LineTraceMulti_OutHits;  // 0x218 (0x218)
	char pad_552_1 : 7;  // 0x228 (0x228)
	bool CallFunc_LineTraceMulti_ReturnValue : 1;  // 0x228 (0x228)
	char pad_553[7];  // 0x229 (0x229)
	struct ABP_AOE_Earthquake_C* K2Node_DynamicCast_AsBP_AOE_Earthquake;  // 0x230 (0x230)
	char pad_568_1 : 7;  // 0x238 (0x238)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x238 (0x238)
	char pad_569_1 : 7;  // 0x239 (0x239)
	bool CallFunc_BreakHitResult_bBlockingHit_2 : 1;  // 0x239 (0x239)
	char pad_570_1 : 7;  // 0x23A (0x23A)
	bool CallFunc_BreakHitResult_bInitialOverlap_2 : 1;  // 0x23A (0x23A)
	char pad_571[1];  // 0x23B (0x23B)
	float CallFunc_BreakHitResult_Time_2;  // 0x23C (0x23C)
	float CallFunc_BreakHitResult_Distance_2;  // 0x240 (0x240)
	char pad_580[4];  // 0x244 (0x244)
	struct FVector CallFunc_BreakHitResult_Location_2;  // 0x248 (0x248)
	struct FVector CallFunc_BreakHitResult_ImpactPoint_2;  // 0x260 (0x260)
	struct FVector CallFunc_BreakHitResult_Normal_2;  // 0x278 (0x278)
	struct FVector CallFunc_BreakHitResult_ImpactNormal_2;  // 0x290 (0x290)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2;  // 0x2A8 (0x2A8)
	struct AActor* CallFunc_BreakHitResult_HitActor_2;  // 0x2B0 (0x2B0)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2;  // 0x2B8 (0x2B8)
	struct FName CallFunc_BreakHitResult_HitBoneName_2;  // 0x2C0 (0x2C0)
	struct FName CallFunc_BreakHitResult_BoneName_2;  // 0x2C8 (0x2C8)
	int32_t CallFunc_BreakHitResult_HitItem_2;  // 0x2D0 (0x2D0)
	int32_t CallFunc_BreakHitResult_ElementIndex_2;  // 0x2D4 (0x2D4)
	int32_t CallFunc_BreakHitResult_FaceIndex_2;  // 0x2D8 (0x2D8)
	char pad_732[4];  // 0x2DC (0x2DC)
	struct FVector CallFunc_BreakHitResult_TraceStart_2;  // 0x2E0 (0x2E0)
	struct FVector CallFunc_BreakHitResult_TraceEnd_2;  // 0x2F8 (0x2F8)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x310 (0x310)
	char pad_808_1 : 7;  // 0x328 (0x328)
	bool CallFunc_Array_IsEmpty_ReturnValue : 1;  // 0x328 (0x328)
	char pad_809[7];  // 0x329 (0x329)
	struct FTransform CallFunc_MakeTransform_ReturnValue;  // 0x330 (0x330)
	struct FGameplayEventData Temp_struct_Variable;  // 0x390 (0x390)
	double CallFunc_SetAoeData_Radius_ImplicitCast;  // 0x440 (0x440)


}; 
 
 // Function GA_Earthquake.GA_Earthquake_C.ExecuteUbergraph_GA_Earthquake
struct FExecuteUbergraph_GA_Earthquake
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
	bool CallFunc_SpawnAoe_Result : 1;  // 0x1A8 (0x1A8)
	char pad_425[3];  // 0x1A9 (0x1A9)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x1AC (0x1AC)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x1BC (0x1BC)
	char pad_452[4];  // 0x1C4 (0x1C4)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x1C8 (0x1C8)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x278 (0x278)
	struct FGameplayTag Temp_struct_Variable_3;  // 0x328 (0x328)
	char pad_816_1 : 7;  // 0x330 (0x330)
	bool CallFunc_MatchesTag_ReturnValue : 1;  // 0x330 (0x330)
	char pad_817_1 : 7;  // 0x331 (0x331)
	bool CallFunc_MatchesTag_ReturnValue_2 : 1;  // 0x331 (0x331)
	char pad_818[6];  // 0x332 (0x332)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x338 (0x338)
	char pad_832_1 : 7;  // 0x340 (0x340)
	bool CallFunc_BooleanOR_ReturnValue : 1;  // 0x340 (0x340)
	char pad_833_1 : 7;  // 0x341 (0x341)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x341 (0x341)
	char pad_834[2];  // 0x342 (0x342)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x344 (0x344)
	char pad_852[4];  // 0x354 (0x354)
	struct UDCAT_WaitAimDirectionChanged* CallFunc_WaitAimDirectionChanged_ReturnValue;  // 0x358 (0x358)
	char pad_864_1 : 7;  // 0x360 (0x360)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x360 (0x360)
	char pad_865[7];  // 0x361 (0x361)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x368 (0x368)
	char pad_1048_1 : 7;  // 0x418 (0x418)
	bool K2Node_Event_bIsSocketSightBlocked : 1;  // 0x418 (0x418)
	char pad_1049_1 : 7;  // 0x419 (0x419)
	bool K2Node_Event_bWasCancelled : 1;  // 0x419 (0x419)
	char pad_1050[2];  // 0x41A (0x41A)
	float CallFunc_GetRange_ReturnValue;  // 0x41C (0x41C)
	float CallFunc_GetAimRadius_ReturnValue;  // 0x420 (0x420)
	char pad_1060[4];  // 0x424 (0x424)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x428 (0x428)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast;  // 0x430 (0x430)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast_2;  // 0x438 (0x438)


}; 
 
 // Function GA_Earthquake.GA_Earthquake_C.ValidData_1D8A04C140FE58B0FC6293AA01E7D7B3
struct FValidData_1D8A04C140FE58B0FC6293AA01E7D7B3
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 