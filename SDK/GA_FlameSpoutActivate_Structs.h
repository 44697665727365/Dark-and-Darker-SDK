#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_FlameSpoutActivate.GA_FlameSpoutActivate_C.EventReceived_F6A1B4B944BDF21421359F943320AAF7
struct FEventReceived_F6A1B4B944BDF21421359F943320AAF7
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_FlameSpoutActivate.GA_FlameSpoutActivate_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_FlameSpoutActivate.GA_FlameSpoutActivate_C.ExecuteUbergraph_GA_FlameSpoutActivate
struct FExecuteUbergraph_GA_FlameSpoutActivate
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x14 (0x14)
	char pad_36[4];  // 0x24 (0x24)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x28 (0x28)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD8 (0xD8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x188 (0x188)
	char pad_400_1 : 7;  // 0x190 (0x190)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x190 (0x190)
	char pad_401[7];  // 0x191 (0x191)
	struct AActor* K2Node_Event_TargetActor;  // 0x198 (0x198)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character;  // 0x1A0 (0x1A0)
	char pad_424_1 : 7;  // 0x1A8 (0x1A8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x1A8 (0x1A8)
	char pad_425_1 : 7;  // 0x1A9 (0x1A9)
	bool CallFunc_IsDead_ReturnValue : 1;  // 0x1A9 (0x1A9)
	char pad_426[6];  // 0x1AA (0x1AA)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1B0 (0x1B0)
	struct UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue;  // 0x260 (0x260)
	char pad_616_1 : 7;  // 0x268 (0x268)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0x268 (0x268)
	char pad_617_1 : 7;  // 0x269 (0x269)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x269 (0x269)
	char pad_618_1 : 7;  // 0x26A (0x26A)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x26A (0x26A)
	char pad_619[5];  // 0x26B (0x26B)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x270 (0x270)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x278 (0x278)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x328 (0x328)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x3D8 (0x3D8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_2;  // 0x3E8 (0x3E8)
	double CallFunc_Greater_DoubleDouble_A_ImplicitCast;  // 0x3F8 (0x3F8)


}; 
 
 // Function GA_FlameSpoutActivate.GA_FlameSpoutActivate_C.OnAuraOverlapBeginEvent
// Size: 0x8(Inherited: 0x8)
struct FOnAuraOverlapBeginEvent : FOnAuraOverlapBeginEvent
{
	struct AActor* TargetActor;  // 0x0 (0x0)


}; 
 
 