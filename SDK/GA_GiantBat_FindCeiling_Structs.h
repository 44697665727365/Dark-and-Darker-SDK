#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GiantBat_FindCeiling.GA_GiantBat_FindCeiling_C.EventReceived_38BE6F06435287E59C0F13BD42C857A3
struct FEventReceived_38BE6F06435287E59C0F13BD42C857A3
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantBat_FindCeiling.GA_GiantBat_FindCeiling_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantBat_FindCeiling.GA_GiantBat_FindCeiling_C.ExecuteUbergraph_GA_GiantBat_FindCeiling
struct FExecuteUbergraph_GA_GiantBat_FindCeiling
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x10 (0x10)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x20 (0x20)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD0 (0xD0)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x180 (0x180)
	char pad_392_1 : 7;  // 0x188 (0x188)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x188 (0x188)
	char pad_393[7];  // 0x189 (0x189)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x190 (0x190)
	char pad_576_1 : 7;  // 0x240 (0x240)
	bool CallFunc_SetVariablesToFindCeiling_Result : 1;  // 0x240 (0x240)
	char pad_577[3];  // 0x241 (0x241)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x244 (0x244)
	char pad_596[4];  // 0x254 (0x254)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue;  // 0x258 (0x258)
	char pad_608_1 : 7;  // 0x260 (0x260)
	bool K2Node_Event_bWasCancelled : 1;  // 0x260 (0x260)
	char pad_609[7];  // 0x261 (0x261)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x268 (0x268)
	char pad_624_1 : 7;  // 0x270 (0x270)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x270 (0x270)
	char pad_625[3];  // 0x271 (0x271)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;  // 0x274 (0x274)


}; 
 
 // Function GA_GiantBat_FindCeiling.GA_GiantBat_FindCeiling_C.SetVariablesToFindCeiling
struct FSetVariablesToFindCeiling
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x8 (0x8)
	float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x28 (0x28)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x30 (0x30)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x40 (0x40)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x50 (0x50)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x58 (0x58)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x70 (0x70)
	struct FHitResult CallFunc_LineTraceSingleForObjects_OutHit;  // 0x88 (0x88)
	char pad_368_1 : 7;  // 0x170 (0x170)
	bool CallFunc_LineTraceSingleForObjects_ReturnValue : 1;  // 0x170 (0x170)
	char pad_369_1 : 7;  // 0x171 (0x171)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x171 (0x171)
	char pad_370_1 : 7;  // 0x172 (0x172)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x172 (0x172)
	char pad_371[1];  // 0x173 (0x173)
	float CallFunc_BreakHitResult_Time;  // 0x174 (0x174)
	float CallFunc_BreakHitResult_Distance;  // 0x178 (0x178)
	char pad_380[4];  // 0x17C (0x17C)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x180 (0x180)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // [x198 ([x198)
	struct FVector CallFunc_BreakHitResult_Normal;  // 000694014] ted: 0xB0)
 (000694014] ted: 0xB0)
)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x1C8 (0x1C8)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x1E0 (0x1E0)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x1E8 (0x1E8)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x1F0 (0x1F0)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x1F8 (0x1F8)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x200 (0x200)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x208 (0x208)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x20C (0x20C)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x210 (0x210)
	char pad_532[4];  // 0x214 (0x214)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x218 (0x218)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x230 (0x230)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x248 (0x248)
	double CallFunc_BreakVector_X;  // 0x250 (0x250)
	double CallFunc_BreakVector_Y;  // 0x258 (0x258)
	double CallFunc_BreakVector_Z;  // 0x260 (0x260)
	struct ABP_GiantBat_C* K2Node_DynamicCast_AsBP_Giant_Bat;  // 0x268 (0x268)
	char pad_624_1 : 7;  // 0x270 (0x270)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x270 (0x270)
	char pad_625[7];  // 0x271 (0x271)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x278 (0x278)
	double CallFunc_Subtract_DoubleDouble_ReturnValue_2;  // 0x280 (0x280)
	struct FVector CallFunc_MakeVector_ReturnValue_2;  // 0x288 (0x288)
	double K2Node_VariableSet_CapsuleHeight_ImplicitCast;  // 0x2A0 (0x2A0)


}; 
 
 // Function GA_GiantBat_FindCeiling.GA_GiantBat_FindCeiling_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantBat_FindCeiling.GA_GiantBat_FindCeiling_C.MoveToCeiling
struct FMoveToCeiling
{
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x0 (0x0)
	double CallFunc_BreakVector_X;  // 0x18 (0x18)
	double CallFunc_BreakVector_Y;  // 0x20 (0x20)
	double CallFunc_BreakVector_Z;  // 0x28 (0x28)
	double CallFunc_BreakVector_X_2;  // 0x30 (0x30)
	double CallFunc_BreakVector_Y_2;  // 0x38 (0x38)
	double CallFunc_BreakVector_Z_2;  // 0x40 (0x40)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x48 (0x48)
	char pad_73_1 : 7;  // 0x49 (0x49)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x49 (0x49)


}; 
 
 // Function GA_GiantBat_FindCeiling.GA_GiantBat_FindCeiling_C.SetVariablesToMove
struct FSetVariablesToMove
{
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x0 (0x0)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x18 (0x18)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue;  // 0x30 (0x30)
	double CallFunc_Vector_Distance_ReturnValue;  // 0x48 (0x48)


}; 
 
 