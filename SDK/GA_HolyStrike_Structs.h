#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_HolyStrike.GA_HolyStrike_C.SpellBlast
struct FSpellBlast
{
	int32_t Temp_int_Array_Index_Variable;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x10 (0x10)
	float CallFunc_GetAreaRadius_ReturnValue;  // 0x18 (0x18)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x1C (0x1C)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x24 (0x24)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x28 (0x28)
	struct AActor* CallFunc_Array_Get_Item;  // 0x30 (0x30)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)
	struct USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue;  // 0x40 (0x40)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x48 (0x48)
	char pad_73_1 : 7;  // 0x49 (0x49)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x49 (0x49)
	char pad_74[6];  // 0x4A (0x4A)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x50 (0x50)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;  // 0x128 (0x128)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x130 (0x130)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x1E0 (0x1E0)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue_2;  // 0x1F0 (0x1F0)


}; 
 
 // Function GA_HolyStrike.GA_HolyStrike_C.AbilityActivated
// Size: 0xB1(Inherited: 0xB8)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)
	char pad_360_1 : 7;  // 0x168 (0x168)
	bool bIsSocketSightBlocked : 1;  // 0xB0 (0xB0)


}; 
 
 // Function GA_HolyStrike.GA_HolyStrike_C.InstallGround
struct FInstallGround
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
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x1C0 (0x1C0)
	char pad_449[7];  // 0x1C1 (0x1C1)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue;  // 0x1C8 (0x1C8)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x1E0 (0x1E0)
	struct TArray<struct FHitResult> CallFunc_LineTraceMulti_OutHits;  // 0x1F0 (0x1F0)
	char pad_512_1 : 7;  // 0x200 (0x200)
	bool CallFunc_LineTraceMulti_ReturnValue : 1;  // 0x200 (0x200)
	char pad_513_1 : 7;  // 0x201 (0x201)
	bool CallFunc_Array_IsEmpty_ReturnValue : 1;  // 0x201 (0x201)
	char pad_514_1 : 7;  // 0x202 (0x202)
	bool CallFunc_BreakHitResult_bBlockingHit_2 : 1;  // 0x202 (0x202)
	char pad_515_1 : 7;  // 0x203 (0x203)
	bool CallFunc_BreakHitResult_bInitialOverlap_2 : 1;  // 0x203 (0x203)
	float CallFunc_BreakHitResult_Time_2;  // 0x204 (0x204)
	float CallFunc_BreakHitResult_Distance_2;  // 0x208 (0x208)
	char pad_524[4];  // 0x20C (0x20C)
	struct FVector CallFunc_BreakHitResult_Location_2;  // 0x210 (0x210)
	struct FVector CallFunc_BreakHitResult_ImpactPoint_2;  // 0x228 (0x228)
	struct FVector CallFunc_BreakHitResult_Normal_2;  // 0x240 (0x240)
	struct FVector CallFunc_BreakHitResult_ImpactNormal_2;  // 0x258 (0x258)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2;  // 0x270 (0x270)
	struct AActor* CallFunc_BreakHitResult_HitActor_2;  // 0x278 (0x278)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2;  // 0x280 (0x280)
	struct FName CallFunc_BreakHitResult_HitBoneName_2;  // 0x288 (0x288)
	struct FName CallFunc_BreakHitResult_BoneName_2;  // 0x290 (0x290)
	int32_t CallFunc_BreakHitResult_HitItem_2;  // 0x298 (0x298)
	int32_t CallFunc_BreakHitResult_ElementIndex_2;  // 0x29C (0x29C)
	int32_t CallFunc_BreakHitResult_FaceIndex_2;  // 0x2A0 (0x2A0)
	char pad_676[4];  // 0x2A4 (0x2A4)
	struct FVector CallFunc_BreakHitResult_TraceStart_2;  // 0x2A8 (0x2A8)
	struct FVector CallFunc_BreakHitResult_TraceEnd_2;  // 0x2C0 (0x2C0)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x2D8 (0x2D8)


}; 
 
 // Function GA_HolyStrike.GA_HolyStrike_C.Cancelled_5D422FC745788DC53D9BB980597D3C0C
struct FCancelled_5D422FC745788DC53D9BB980597D3C0C
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function GA_HolyStrike.GA_HolyStrike_C.HitCollisionCheck
struct FHitCollisionCheck
{
	AActor* TargetActorClass;  // 0x0 (0x0)
	double CapsuleSize;  // 0x8 (0x8)
	int32_t Temp_int_Array_Index_Variable;  // 0x10 (0x10)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x14 (0x14)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x18 (0x18)
	float CallFunc_GetAreaRadius_ReturnValue;  // 0x1C (0x1C)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x20 (0x20)
	struct TArray<struct AActor*> Temp_object_Variable_2;  // 0x30 (0x30)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x40 (0x40)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x50 (0x50)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x58 (0x58)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x70 (0x70)
	struct TArray<struct AActor*> CallFunc_SphereOverlapActors_OutActors;  // 0x88 (0x88)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool CallFunc_SphereOverlapActors_ReturnValue : 1;  // 0x98 (0x98)
	char pad_153[3];  // 0x99 (0x99)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x9C (0x9C)
	struct AActor* CallFunc_Array_Get_Item;  // 0xA0 (0xA0)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0xA8 (0xA8)
	char pad_169[3];  // 0xA9 (0xA9)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0xAC (0xAC)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0xB0 (0xB0)
	struct FHitResult CallFunc_LineTraceSingleForObjects_OutHit;  // 0xC8 (0xC8)
	char pad_432_1 : 7;  // 0x1B0 (0x1B0)
	bool CallFunc_LineTraceSingleForObjects_ReturnValue : 1;  // 0x1B0 (0x1B0)
	char pad_433_1 : 7;  // 0x1B1 (0x1B1)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x1B1 (0x1B1)
	char pad_434_1 : 7;  // 0x1B2 (0x1B2)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x1B2 (0x1B2)
	char pad_435[1];  // 0x1B3 (0x1B3)
	float CallFunc_BreakHitResult_Time;  // 0x1B4 (0x1B4)
	float CallFunc_BreakHitResult_Distance;  // 0x1B8 (0x1B8)
	char pad_444[4];  // 0x1BC (0x1BC)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x1C0 (0x1C0)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x1D8 (0x1D8)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x1F0 (0x1F0)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x208 (0x208)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x220 (0x220)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x228 (0x228)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x230 (0x230)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x238 (0x238)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x240 (0x240)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x248 (0x248)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x24C (0x24C)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x250 (0x250)
	char pad_596[4];  // 0x254 (0x254)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x258 (0x258)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x270 (0x270)
	char pad_648_1 : 7;  // 0x288 (0x288)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0x288 (0x288)


}; 
 
 // Function GA_HolyStrike.GA_HolyStrike_C.ExecuteUbergraph_GA_HolyStrike
struct FExecuteUbergraph_GA_HolyStrike
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	char pad_20[4];  // 0x14 (0x14)
	struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_Data_2;  // 0x18 (0x18)
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
	bool CallFunc_InstallGround_Result : 1;  // 0x1A8 (0x1A8)
	char pad_425[3];  // 0x1A9 (0x1A9)
	float CallFunc_GetAimRadius_ReturnValue;  // 0x1AC (0x1AC)
	float CallFunc_GetRange_ReturnValue;  // 0x1B0 (0x1B0)
	char pad_436[4];  // 0x1B4 (0x1B4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1B8 (0x1B8)
	char pad_616_1 : 7;  // 0x268 (0x268)
	bool K2Node_Event_bIsSocketSightBlocked : 1;  // 0x268 (0x268)
	char pad_617_1 : 7;  // 0x269 (0x269)
	bool K2Node_Event_bWasCancelled : 1;  // 0x269 (0x269)
	char pad_618[6];  // 0x26A (0x26A)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x270 (0x270)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x278 (0x278)
	char pad_633[7];  // 0x279 (0x279)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast;  // 0x280 (0x280)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast_2;  // 0x288 (0x288)


}; 
 
 // Function GA_HolyStrike.GA_HolyStrike_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_HolyStrike.GA_HolyStrike_C.ValidData_5D422FC745788DC53D9BB980597D3C0C
struct FValidData_5D422FC745788DC53D9BB980597D3C0C
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 