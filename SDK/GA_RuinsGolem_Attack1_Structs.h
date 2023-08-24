#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_RuinsGolem_Attack1.GA_RuinsGolem_Attack1_C.EventReceived_53FD2F1343110844299A5DB46AFBE721
struct FEventReceived_53FD2F1343110844299A5DB46AFBE721
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_RuinsGolem_Attack1.GA_RuinsGolem_Attack1_C.ExecuteUbergraph_GA_RuinsGolem_Attack1
struct FExecuteUbergraph_GA_RuinsGolem_Attack1
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
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x238 (0x238)
	char pad_576_1 : 7;  // 0x240 (0x240)
	bool CallFunc_Get_Enemies_In_Range_And_Angle_Result : 1;  // 0x240 (0x240)
	char pad_577[7];  // 0x241 (0x241)
	struct TArray<struct ADCCharacterBase*> CallFunc_Get_Enemies_In_Range_And_Angle_DCCharacterBase;  // 0x248 (0x248)
	char pad_600_1 : 7;  // 0x258 (0x258)
	bool CallFunc_GetBBTargetActorToCharacterBase_Result : 1;  // 0x258 (0x258)
	char pad_601[7];  // 0x259 (0x259)
	struct ADCCharacterBase* CallFunc_GetBBTargetActorToCharacterBase_As_DCCharacter_Base;  // 0x260 (0x260)
	char pad_616_1 : 7;  // 0x268 (0x268)
	bool CallFunc_RandomBool_ReturnValue : 1;  // 0x268 (0x268)
	char pad_617[7];  // 0x269 (0x269)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x270 (0x270)


}; 
 
 // Function GA_RuinsGolem_Attack1.GA_RuinsGolem_Attack1_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 