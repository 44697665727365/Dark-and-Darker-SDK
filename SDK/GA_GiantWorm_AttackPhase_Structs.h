#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GiantWorm_AttackPhase.GA_GiantWorm_AttackPhase_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantWorm_AttackPhase.GA_GiantWorm_AttackPhase_C.EventReceived_4F55133E4381624B6289419D27021B79
struct FEventReceived_4F55133E4381624B6289419D27021B79
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantWorm_AttackPhase.GA_GiantWorm_AttackPhase_C.ExecuteUbergraph_GA_GiantWorm_AttackPhase
struct FExecuteUbergraph_GA_GiantWorm_AttackPhase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x8 (0x8)
	struct FGameplayEventData Temp_struct_Variable;  // 0xB8 (0xB8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x168 (0x168)
	char pad_368_1 : 7;  // 0x170 (0x170)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x170 (0x170)
	char pad_369[7];  // 0x171 (0x171)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x178 (0x178)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x180 (0x180)
	char pad_385_1 : 7;  // 0x181 (0x181)
	bool CallFunc_InRange_FloatFloat_ReturnValue : 1;  // 0x181 (0x181)
	char pad_386_1 : 7;  // 0x182 (0x182)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x182 (0x182)
	char pad_387[1];  // 0x183 (0x183)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x184 (0x184)
	char pad_404[4];  // 0x194 (0x194)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x198 (0x198)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x248 (0x248)
	char pad_592_1 : 7;  // 0x250 (0x250)
	bool CallFunc_Get_Enemies_In_Range_And_Angle_Result : 1;  // 0x250 (0x250)
	char pad_593[7];  // 0x251 (0x251)
	struct TArray<struct ADCCharacterBase*> CallFunc_Get_Enemies_In_Range_And_Angle_DCCharacterBase;  // 0x258 (0x258)


}; 
 
 