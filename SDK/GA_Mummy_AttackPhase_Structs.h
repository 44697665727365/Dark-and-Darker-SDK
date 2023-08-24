#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Mummy_AttackPhase.GA_Mummy_AttackPhase_C.ExecuteUbergraph_GA_Mummy_AttackPhase
struct FExecuteUbergraph_GA_Mummy_AttackPhase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData Temp_struct_Variable;  // 0x8 (0x8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0xB8 (0xB8)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xC0 (0xC0)
	char pad_193[7];  // 0xC1 (0xC1)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0xC8 (0xC8)
	char pad_376_1 : 7;  // 0x178 (0x178)
	bool CallFunc_GetBBTargetActorToCharacterBase_Result : 1;  // 0x178 (0x178)
	char pad_377[7];  // 0x179 (0x179)
	struct ADCCharacterBase* CallFunc_GetBBTargetActorToCharacterBase_As_DCCharacter_Base;  // 0x180 (0x180)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x188 (0x188)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x238 (0x238)
	float CallFunc_GetDistanceTo_ReturnValue;  // 0x240 (0x240)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x244 (0x244)
	char pad_596_1 : 7;  // 0x254 (0x254)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0x254 (0x254)
	char pad_597[3];  // 0x255 (0x255)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x258 (0x258)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x308 (0x308)
	float CallFunc_GetDistanceTo_ReturnValue_2;  // 0x310 (0x310)
	char pad_788_1 : 7;  // 0x314 (0x314)
	bool CallFunc_Greater_DoubleDouble_ReturnValue_2 : 1;  // 0x314 (0x314)
	char pad_789_1 : 7;  // 0x315 (0x315)
	bool CallFunc_RandomBool_ReturnValue : 1;  // 0x315 (0x315)
	char pad_790[2];  // 0x316 (0x316)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x318 (0x318)
	float CallFunc_GetDistanceTo_ReturnValue_3;  // 0x320 (0x320)
	char pad_804_1 : 7;  // 0x324 (0x324)
	bool CallFunc_Greater_DoubleDouble_ReturnValue_3 : 1;  // 0x324 (0x324)
	char pad_805[3];  // 0x325 (0x325)
	double CallFunc_Greater_DoubleDouble_A_ImplicitCast;  // 0x328 (0x328)
	double CallFunc_Greater_DoubleDouble_A_ImplicitCast_2;  // 0x330 (0x330)
	double CallFunc_Greater_DoubleDouble_A_ImplicitCast_3;  // 0x338 (0x338)


}; 
 
 // Function GA_Mummy_AttackPhase.GA_Mummy_AttackPhase_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_Mummy_AttackPhase.GA_Mummy_AttackPhase_C.EventReceived_7A1CE0F142DAFDF372BBB1A3D3F876B6
struct FEventReceived_7A1CE0F142DAFDF372BBB1A3D3F876B6
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 