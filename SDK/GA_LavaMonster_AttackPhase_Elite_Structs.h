#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_LavaMonster_AttackPhase_Elite.GA_LavaMonster_AttackPhase_Elite_C.OnFail_474F162345D3673CCC66B4A1438B16DB
struct FOnFail_474F162345D3673CCC66B4A1438B16DB
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function GA_LavaMonster_AttackPhase_Elite.GA_LavaMonster_AttackPhase_Elite_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_LavaMonster_AttackPhase_Elite.GA_LavaMonster_AttackPhase_Elite_C.EventReceived_ABDE35A0442A5FAEF726C7966DB196F8
struct FEventReceived_ABDE35A0442A5FAEF726C7966DB196F8
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_LavaMonster_AttackPhase_Elite.GA_LavaMonster_AttackPhase_Elite_C.ExecuteUbergraph_GA_LavaMonster_AttackPhase_Elite
struct FExecuteUbergraph_GA_LavaMonster_AttackPhase_Elite
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x20 (0x20)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_2;  // 0x21 (0x21)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult;  // 0x22 (0x22)
	char pad_35[1];  // 0x23 (0x23)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x24 (0x24)
	enum class EPathFollowingResult Temp_byte_Variable;  // 0x34 (0x34)
	char pad_53_1 : 7;  // 0x35 (0x35)
	bool K2Node_Event_bWasCancelled : 1;  // 0x35 (0x35)
	char pad_54[2];  // 0x36 (0x36)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x38 (0x38)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool CallFunc_RandomBool_ReturnValue : 1;  // 0xE8 (0xE8)
	char pad_233[7];  // 0xE9 (0xE9)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xF0 (0xF0)
	struct ABP_LavaMonster_Common_C* K2Node_DynamicCast_AsBP_Lava_Monster_Common;  // 0xF8 (0xF8)
	char pad_256_1 : 7;  // 0x100 (0x100)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x100 (0x100)
	char pad_257[7];  // 0x101 (0x101)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x108 (0x108)
	char pad_272_1 : 7;  // 0x110 (0x110)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x110 (0x110)
	char pad_273_1 : 7;  // 0x111 (0x111)
	bool CallFunc_GetBBTargetActorToCharacterBase_Result : 1;  // 0x111 (0x111)
	char pad_274[6];  // 0x112 (0x112)
	struct ADCCharacterBase* CallFunc_GetBBTargetActorToCharacterBase_As_DCCharacter_Base;  // 0x118 (0x118)
	struct FGameplayEventData Temp_struct_Variable;  // 0x120 (0x120)
	int32_t CallFunc_RandomIntegerInRange_ReturnValue;  // 0x1D0 (0x1D0)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x1D4 (0x1D4)
	double CallFunc_RandomFloatInRange_ReturnValue_2;  // 0x1D8 (0x1D8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x1E0 (0x1E0)
	char pad_656_1 : 7;  // 0x290 (0x290)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x290 (0x290)
	char pad_657[7];  // 0x291 (0x291)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x298 (0x298)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x2A0 (0x2A0)
	float CallFunc_GetDistanceTo_ReturnValue;  // 0x2B0 (0x2B0)
	char pad_692[4];  // 0x2B4 (0x2B4)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x2B8 (0x2B8)
	char pad_704_1 : 7;  // 0x2C0 (0x2C0)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2 : 1;  // 0x2C0 (0x2C0)
	char pad_705[7];  // 0x2C1 (0x2C1)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x2C8 (0x2C8)
	float CallFunc_GetDistanceTo_ReturnValue_2;  // 0x2D0 (0x2D0)
	char pad_724_1 : 7;  // 0x2D4 (0x2D4)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3 : 1;  // 0x2D4 (0x2D4)
	char pad_725[3];  // 0x2D5 (0x2D5)
	struct AAIController* CallFunc_GetAIController_ReturnValue;  // 0x2D8 (0x2D8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x2E0 (0x2E0)
	struct UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue;  // 0x2F0 (0x2F0)
	char pad_760_1 : 7;  // 0x2F8 (0x2F8)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x2F8 (0x2F8)
	char pad_761[3];  // 0x2F9 (0x2F9)
	float CallFunc_Delay_Duration_ImplicitCast;  // 0x2FC (0x2FC)
	double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;  // 0x300 (0x300)
	double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_2;  // 0x308 (0x308)


}; 
 
 // Function GA_LavaMonster_AttackPhase_Elite.GA_LavaMonster_AttackPhase_Elite_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_LavaMonster_AttackPhase_Elite.GA_LavaMonster_AttackPhase_Elite_C.OnSuccess_474F162345D3673CCC66B4A1438B16DB
struct FOnSuccess_474F162345D3673CCC66B4A1438B16DB
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 