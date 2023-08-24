#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_DeathBeetle_CircleMove.GA_DeathBeetle_CircleMove_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_DeathBeetle_CircleMove.GA_DeathBeetle_CircleMove_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_DeathBeetle_CircleMove.GA_DeathBeetle_CircleMove_C.ExecuteUbergraph_GA_DeathBeetle_CircleMove
struct FExecuteUbergraph_GA_DeathBeetle_CircleMove
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue;  // 0x8 (0x8)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool K2Node_Event_bWasCancelled : 1;  // 0x29 (0x29)
	char pad_42[6];  // 0x2A (0x2A)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x30 (0x30)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue;  // 0xE0 (0xE0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xE8 (0xE8)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0xF0 (0xF0)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xF8 (0xF8)
	char pad_249_1 : 7;  // 0xF9 (0xF9)
	bool CallFunc_GetBBTargetActorToCharacterBase_Result : 1;  // 0xF9 (0xF9)
	char pad_250[6];  // 0xFA (0xFA)
	struct ADCCharacterBase* CallFunc_GetBBTargetActorToCharacterBase_As_DCCharacter_Base;  // 0x100 (0x100)
	char pad_264_1 : 7;  // 0x108 (0x108)
	bool CallFunc_RandomBool_ReturnValue : 1;  // 0x108 (0x108)
	char pad_265[3];  // 0x109 (0x109)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x10C (0x10C)
	char pad_284[4];  // 0x11C (0x11C)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x120 (0x120)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue_2;  // 0x128 (0x128)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x130 (0x130)
	char pad_312_1 : 7;  // 0x138 (0x138)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x138 (0x138)
	char pad_313[7];  // 0x139 (0x139)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x140 (0x140)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x158 (0x158)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x170 (0x170)
	char pad_392_1 : 7;  // 0x188 (0x188)
	bool CallFunc_K2_SetActorRotation_ReturnValue : 1;  // 0x188 (0x188)
	char pad_393_1 : 7;  // 0x189 (0x189)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x189 (0x189)
	char pad_394_1 : 7;  // 0x18A (0x18A)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x18A (0x18A)
	char pad_395[5];  // 0x18B (0x18B)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_3;  // 0x190 (0x190)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_4;  // 0x1A8 (0x1A8)
	struct FVector CallFunc_GetRightVector_ReturnValue;  // 0x1C0 (0x1C0)
	struct FVector CallFunc_GetRightVector_ReturnValue_2;  // 0x1D8 (0x1D8)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue_2;  // 0x1F0 (0x1F0)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x208 (0x208)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue_2;  // 0x220 (0x220)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x238 (0x238)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_2;  // 0x250 (0x250)
	struct AAIController* CallFunc_GetAIController_ReturnValue;  // 0x268 (0x268)
	char pad_624_1 : 7;  // 0x270 (0x270)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x270 (0x270)
	enum class EPathFollowingRequestResult CallFunc_MoveToLocation_ReturnValue;  // 0x271 (0x271)
	char pad_626[2];  // 0x272 (0x272)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x274 (0x274)
	char pad_636[4];  // 0x27C (0x27C)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2;  // 0x280 (0x280)
	char pad_648_1 : 7;  // 0x288 (0x288)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x288 (0x288)
	char pad_649[3];  // 0x289 (0x289)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;  // 0x28C (0x28C)


}; 
 
 