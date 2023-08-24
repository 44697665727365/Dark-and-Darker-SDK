#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_DemonBat_FindCeiling.GA_DemonBat_FindCeiling_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_DemonBat_FindCeiling.GA_DemonBat_FindCeiling_C.EventReceived_2CE0199045DAC986FAD76F82AEC79881
struct FEventReceived_2CE0199045DAC986FAD76F82AEC79881
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_DemonBat_FindCeiling.GA_DemonBat_FindCeiling_C.SetVariablesToFindCeiling
struct FSetVariablesToFindCeiling
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x8 (0x8)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x20 (0x20)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x30 (0x30)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x38 (0x38)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x48 (0x48)
	struct FHitResult CallFunc_SphereTraceSingleForObjects_OutHit;  // 0x60 (0x60)
	char pad_328_1 : 7;  // 0x148 (0x148)
	bool CallFunc_SphereTraceSingleForObjects_ReturnValue : 1;  // 0x148 (0x148)
	char pad_329[3];  // 0x149 (0x149)
	float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;  // 0x14C (0x14C)
	char pad_336_1 : 7;  // 0x150 (0x150)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x150 (0x150)
	char pad_337_1 : 7;  // 0x151 (0x151)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x151 (0x151)
	char pad_338[2];  // 0x152 (0x152)
	float CallFunc_BreakHitResult_Time;  // 0x154 (0x154)
	float CallFunc_BreakHitResult_Distance;  // 0x158 (0x158)
	char pad_348[4];  // 0x15C (0x15C)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x160 (0x160)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x178 (0x178)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x190 (0x190)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x1A8 (0x1A8)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x1C0 (0x1C0)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x1C8 (0x1C8)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x1D0 (0x1D0)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x1D8 (0x1D8)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x1E0 (0x1E0)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x1E8 (0x1E8)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x1EC (0x1EC)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x1F0 (0x1F0)
	char pad_500[4];  // 0x1F4 (0x1F4)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x1F8 (0x1F8)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x210 (0x210)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x228 (0x228)
	double CallFunc_BreakVector_X;  // 0x230 (0x230)
	double CallFunc_BreakVector_Y;  // 0x238 (0x238)
	double CallFunc_BreakVector_Z;  // 0x240 (0x240)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x248 (0x248)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x260 (0x260)
	struct FVector CallFunc_MakeVector_ReturnValue_2;  // 0x268 (0x268)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x280 (0x280)
	struct ABP_DemonBat_Common_C* K2Node_DynamicCast_AsBP_Demon_Bat_Common;  // 0x288 (0x288)
	char pad_656_1 : 7;  // 0x290 (0x290)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x290 (0x290)
	char pad_657[7];  // 0x291 (0x291)
	double K2Node_VariableSet_CapsuleHeight_ImplicitCast;  // 0x298 (0x298)


}; 
 
 // Function GA_DemonBat_FindCeiling.GA_DemonBat_FindCeiling_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_DemonBat_FindCeiling.GA_DemonBat_FindCeiling_C.ExecuteUbergraph_GA_DemonBat_FindCeiling
struct FExecuteUbergraph_GA_DemonBat_FindCeiling
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xB8 (0xB8)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC8 (0xC8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x178 (0x178)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x180 (0x180)
	char pad_385[7];  // 0x181 (0x181)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x188 (0x188)
	char pad_568_1 : 7;  // 0x238 (0x238)
	bool CallFunc_SetVariablesToFindCeiling_Result : 1;  // 0x238 (0x238)
	char pad_569[3];  // 0x239 (0x239)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x23C (0x23C)
	char pad_588[4];  // 0x24C (0x24C)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue;  // 0x250 (0x250)
	char pad_600_1 : 7;  // 0x258 (0x258)
	bool K2Node_Event_bWasCancelled : 1;  // 0x258 (0x258)
	char pad_601[7];  // 0x259 (0x259)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x260 (0x260)
	char pad_616_1 : 7;  // 0x268 (0x268)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x268 (0x268)
	char pad_617[7];  // 0x269 (0x269)
	struct UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue;  // 0x270 (0x270)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;  // 0x278 (0x278)


}; 
 
 // Function GA_DemonBat_FindCeiling.GA_DemonBat_FindCeiling_C.MoveToCeiling
struct FMoveToCeiling
{
	double CallFunc_BreakVector_X;  // 0x0 (0x0)
	double CallFunc_BreakVector_Y;  // 0x8 (0x8)
	double CallFunc_BreakVector_Z;  // 0x10 (0x10)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x18 (0x18)
	double CallFunc_BreakVector_X_2;  // 0x30 (0x30)
	double CallFunc_BreakVector_Y_2;  // 0x38 (0x38)
	double CallFunc_BreakVector_Z_2;  // 0x40 (0x40)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x48 (0x48)
	char pad_73_1 : 7;  // 0x49 (0x49)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x49 (0x49)


}; 
 
 // Function GA_DemonBat_FindCeiling.GA_DemonBat_FindCeiling_C.SetVariablesToMove
struct FSetVariablesToMove
{
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x0 (0x0)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue;  // 0x18 (0x18)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x30 (0x30)
	double CallFunc_Vector_Distance_ReturnValue;  // 0x48 (0x48)


}; 
 
 