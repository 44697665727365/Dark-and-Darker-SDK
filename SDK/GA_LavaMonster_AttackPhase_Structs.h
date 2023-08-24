#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_LavaMonster_AttackPhase.GA_LavaMonster_AttackPhase_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_LavaMonster_AttackPhase.GA_LavaMonster_AttackPhase_C.EventReceived_EC911C75464C4C17118BF492921C63D8
struct FEventReceived_EC911C75464C4C17118BF492921C63D8
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_LavaMonster_AttackPhase.GA_LavaMonster_AttackPhase_C.ExecuteUbergraph_GA_LavaMonster_AttackPhase
struct FExecuteUbergraph_GA_LavaMonster_AttackPhase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData Temp_struct_Variable;  // 0x8 (0x8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0xB8 (0xB8)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xC0 (0xC0)
	char pad_193_1 : 7;  // 0xC1 (0xC1)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0xC1 (0xC1)
	char pad_194[6];  // 0xC2 (0xC2)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0xC8 (0xC8)
	char pad_376_1 : 7;  // 0x178 (0x178)
	bool CallFunc_RandomBool_ReturnValue : 1;  // 0x178 (0x178)
	char pad_377[7];  // 0x179 (0x179)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x180 (0x180)
	struct ABP_LavaMonster_Common_C* K2Node_DynamicCast_AsBP_Lava_Monster_Common;  // 0x188 (0x188)
	char pad_400_1 : 7;  // 0x190 (0x190)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x190 (0x190)
	char pad_401[7];  // 0x191 (0x191)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x198 (0x198)
	char pad_584_1 : 7;  // 0x248 (0x248)
	bool CallFunc_GetBBTargetActorToCharacterBase_Result : 1;  // 0x248 (0x248)
	char pad_585[7];  // 0x249 (0x249)
	struct ADCCharacterBase* CallFunc_GetBBTargetActorToCharacterBase_As_DCCharacter_Base;  // 0x250 (0x250)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x258 (0x258)
	float CallFunc_GetDistanceTo_ReturnValue;  // 0x260 (0x260)
	char pad_612_1 : 7;  // 0x264 (0x264)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x264 (0x264)
	char pad_613[3];  // 0x265 (0x265)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x268 (0x268)
	int32_t CallFunc_RandomIntegerInRange_ReturnValue;  // 0x278 (0x278)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x27C (0x27C)
	double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;  // 0x280 (0x280)


}; 
 
 