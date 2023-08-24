#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GhostKing_EarthQuakePhase.GA_GhostKing_EarthQuakePhase_C.ExecuteUbergraph_GA_GhostKing_EarthQuakePhase
struct FExecuteUbergraph_GA_GhostKing_EarthQuakePhase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x8 (0x8)
	struct FGameplayEventData Temp_struct_Variable;  // 0xB8 (0xB8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x168 (0x168)
	char pad_368_1 : 7;  // 0x170 (0x170)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x170 (0x170)
	char pad_369[7];  // 0x171 (0x171)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x178 (0x178)
	struct ABP_GhostKing_Common_C* K2Node_DynamicCast_AsBP_Ghost_King_Common;  // 0x180 (0x180)
	char pad_392_1 : 7;  // 0x188 (0x188)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x188 (0x188)
	char pad_393[7];  // 0x189 (0x189)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x190 (0x190)
	char pad_576_1 : 7;  // 0x240 (0x240)
	bool K2Node_Event_bWasCancelled : 1;  // 0x240 (0x240)
	char pad_577[3];  // 0x241 (0x241)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x244 (0x244)
	char pad_596[4];  // 0x254 (0x254)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x258 (0x258)
	double CallFunc_Vector_Distance_ReturnValue;  // 0x270 (0x270)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x278 (0x278)


}; 
 
 // Function GA_GhostKing_EarthQuakePhase.GA_GhostKing_EarthQuakePhase_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_EarthQuakePhase.GA_GhostKing_EarthQuakePhase_C.EventReceived_EE80568D434BF7B5B708B888F1081D7D
struct FEventReceived_EE80568D434BF7B5B708B888F1081D7D
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_EarthQuakePhase.GA_GhostKing_EarthQuakePhase_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 