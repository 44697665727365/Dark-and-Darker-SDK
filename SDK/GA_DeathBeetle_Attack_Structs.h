#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_DeathBeetle_Attack.GA_DeathBeetle_Attack_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_DeathBeetle_Attack.GA_DeathBeetle_Attack_C.EventReceived_200D1D174F8ECECE70651CBC26926225
struct FEventReceived_200D1D174F8ECECE70651CBC26926225
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_DeathBeetle_Attack.GA_DeathBeetle_Attack_C.ExecuteUbergraph_GA_DeathBeetle_Attack
struct FExecuteUbergraph_GA_DeathBeetle_Attack
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x8 (0x8)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x10 (0x10)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC0 (0xC0)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x170 (0x170)
	char pad_376_1 : 7;  // 0x178 (0x178)
	bool CallFunc_MatchesTag_ReturnValue : 1;  // 0x178 (0x178)
	char pad_377[7];  // 0x179 (0x179)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x180 (0x180)
	char pad_392_1 : 7;  // 0x188 (0x188)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x188 (0x188)
	char pad_393[7];  // 0x189 (0x189)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x190 (0x190)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x240 (0x240)
	struct UDCAT_RotateToActor* CallFunc_RotateToActor_ReturnValue;  // 0x250 (0x250)
	char pad_600_1 : 7;  // 0x258 (0x258)
	bool K2Node_Event_bWasCancelled : 1;  // 0x258 (0x258)
	char pad_601_1 : 7;  // 0x259 (0x259)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x259 (0x259)
	char pad_602_1 : 7;  // 0x25A (0x25A)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x25A (0x25A)
	char pad_603[1];  // 0x25B (0x25B)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x25C (0x25C)
	char pad_612[4];  // 0x264 (0x264)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x268 (0x268)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x270 (0x270)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x278 (0x278)
	char pad_633[7];  // 0x279 (0x279)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x280 (0x280)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2;  // 0x288 (0x288)
	float CallFunc_GetValueAsFloat_ReturnValue;  // 0x290 (0x290)
	char pad_660_1 : 7;  // 0x294 (0x294)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x294 (0x294)
	char pad_661[3];  // 0x295 (0x295)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x298 (0x298)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast;  // 0x2A0 (0x2A0)
	float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast;  // 0x2A8 (0x2A8)


}; 
 
 // Function GA_DeathBeetle_Attack.GA_DeathBeetle_Attack_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 