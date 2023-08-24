#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonFootmanAttack2.GA_SkeletonFootmanAttack2_C.EventReceived_EF720C7C4E27CDB52E6FB0B77816A1D0
struct FEventReceived_EF720C7C4E27CDB52E6FB0B77816A1D0
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonFootmanAttack2.GA_SkeletonFootmanAttack2_C.ExecuteUbergraph_GA_SkeletonFootmanAttack2
struct FExecuteUbergraph_GA_SkeletonFootmanAttack2
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
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x240 (0x240)
	char pad_584_1 : 7;  // 0x248 (0x248)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x248 (0x248)
	char pad_585[7];  // 0x249 (0x249)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x250 (0x250)
	char pad_600_1 : 7;  // 0x258 (0x258)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x258 (0x258)
	char pad_601[7];  // 0x259 (0x259)
	struct ADCCharacterBase* CallFunc_Set_Combo_Attack_Target_Enemy;  // 0x260 (0x260)
	struct TArray<struct ADCCharacterBase*> CallFunc_Set_Combo_Attack_TargetArray;  // 0x268 (0x268)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool CallFunc_Set_Combo_Attack_Combo_Triggered : 1;  // 0x278 (0x278)


}; 
 
 // Function GA_SkeletonFootmanAttack2.GA_SkeletonFootmanAttack2_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 