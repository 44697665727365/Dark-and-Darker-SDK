#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_UndeadKnight_SprintPhase.GA_UndeadKnight_SprintPhase_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_UndeadKnight_SprintPhase.GA_UndeadKnight_SprintPhase_C.EventReceived_C01E00A745D90988C64F02A55501B62D
struct FEventReceived_C01E00A745D90988C64F02A55501B62D
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_UndeadKnight_SprintPhase.GA_UndeadKnight_SprintPhase_C.OnSuccess_53A2376149A80593CBB556904CC367B9
struct FOnSuccess_53A2376149A80593CBB556904CC367B9
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function GA_UndeadKnight_SprintPhase.GA_UndeadKnight_SprintPhase_C.ExecuteUbergraph_GA_UndeadKnight_SprintPhase
struct FExecuteUbergraph_GA_UndeadKnight_SprintPhase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_GetBBTargetActorToCharacterBase_Result : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct ADCCharacterBase* CallFunc_GetBBTargetActorToCharacterBase_As_DCCharacter_Base;  // 0x8 (0x8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x10 (0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xC0 (0xC0)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD0 (0xD0)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x180 (0x180)
	char pad_392_1 : 7;  // 0x188 (0x188)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x188 (0x188)
	char pad_393[3];  // 0x189 (0x189)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x18C (0x18C)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_2;  // 0x19C (0x19C)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult;  // 0x19D (0x19D)
	char pad_414[2];  // 0x19E (0x19E)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x1A0 (0x1A0)
	enum class EPathFollowingResult Temp_byte_Variable;  // 0x1B0 (0x1B0)
	char pad_433[7];  // 0x1B1 (0x1B1)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1B8 (0x1B8)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x268 (0x268)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x318 (0x318)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x320 (0x320)
	char pad_808_1 : 7;  // 0x328 (0x328)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x328 (0x328)
	char pad_809[7];  // 0x329 (0x329)
	struct UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue;  // 0x330 (0x330)
	char pad_824_1 : 7;  // [x338 ([00043441] Package Id_Monster_Mimic_Medium_Simple_Nightmare)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x338 (0x338)


}; 
 
 // Function GA_UndeadKnight_SprintPhase.GA_UndeadKnight_SprintPhase_C.OnFail_53A2376149A80593CBB556904CC367B9
struct FOnFail_53A2376149A80593CBB556904CC367B9
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 