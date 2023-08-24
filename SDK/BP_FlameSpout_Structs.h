#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_FlameSpout.BP_FlameSpout_C.EventMsgSound
struct FEventMsgSound
{
	struct FMsgSoundEvent InMsg;  // 0x0 (0x0)


}; 
 
 // Function BP_FlameSpout.BP_FlameSpout_C.GetDeactivateTime
struct FGetDeactivateTime
{
	double Result;  // 0x0 (0x0)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function BP_FlameSpout.BP_FlameSpout_C.ExecuteUbergraph_BP_FlameSpout
struct FExecuteUbergraph_BP_FlameSpout
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FMsgSoundEvent K2Node_CustomEvent_InMsg;  // 0x8 (0x8)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x30 (0x30)
	int32_t K2Node_Event_InCount;  // 0x38 (0x38)
	char pad_60_1 : 7;  // 0x3C (0x3C)
	bool CallFunc_PlaySoundWithTag_ReturnValue : 1;  // 0x3C (0x3C)
	char pad_61_1 : 7;  // 0x3D (0x3D)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x3D (0x3D)
	char pad_62_1 : 7;  // 0x3E (0x3E)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x3E (0x3E)
	char pad_63_1 : 7;  // 0x3F (0x3F)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x3F (0x3F)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool CallFunc_OnTrapActivate_Result : 1;  // 0x40 (0x40)
	char pad_65_1 : 7;  // 0x41 (0x41)
	bool CallFunc_OnTrapDeactivate_Result : 1;  // 0x41 (0x41)
	char pad_66[6];  // 0x42 (0x42)
	struct AActor* K2Node_Event_Interacter;  // 0x48 (0x48)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x50 (0x50)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x58 (0x58)
	struct FHitResult K2Node_Event_HitResult;  // 0x60 (0x60)
	char pad_328_1 : 7;  // 0x148 (0x148)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_3 : 1;  // 0x148 (0x148)
	char pad_329[7];  // 0x149 (0x149)
	struct FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult;  // 0x150 (0x150)
	double CallFunc_GetActivateTime_Result;  // 0x238 (0x238)
	double CallFunc_GetDeactivateTime_Result;  // 0x240 (0x240)
	struct FGameplayCueParameters Temp_struct_Variable;  // 0x248 (0x248)
	float CallFunc_Delay_Duration_ImplicitCast;  // 0x320 (0x320)
	float CallFunc_Delay_Duration_ImplicitCast_2;  // 0x324 (0x324)
	float CallFunc_Delay_Duration_ImplicitCast_3;  // 0x328 (0x328)


}; 
 
 // Function BP_FlameSpout.BP_FlameSpout_C.OnTrapDeactivate
struct FOnTrapDeactivate
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	double CallFunc_GetDeactivateTime_Result;  // 0x8 (0x8)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x10 (0x10)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0xC0 (0xC0)
	char pad_193_1 : 7;  // 0xC1 (0xC1)
	bool CallFunc_NotEqual_GameplayTag_ReturnValue : 1;  // 0xC1 (0xC1)
	char pad_194[2];  // 0xC2 (0xC2)
	float K2Node_MakeStruct_EventMagnitude_ImplicitCast;  // 0xC4 (0xC4)


}; 
 
 // Function BP_FlameSpout.BP_FlameSpout_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 // Function BP_FlameSpout.BP_FlameSpout_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // Function BP_FlameSpout.BP_FlameSpout_C.GetActivateTime
struct FGetActivateTime
{
	double Result;  // 0x0 (0x0)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function BP_FlameSpout.BP_FlameSpout_C.OnTrapActivate
struct FOnTrapActivate
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	double CallFunc_GetActivateTime_Result;  // 0x8 (0x8)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x10 (0x10)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool CallFunc_NotEqual_GameplayTag_ReturnValue : 1;  // 0xC0 (0xC0)
	char pad_193[3];  // 0xC1 (0xC1)
	float K2Node_MakeStruct_EventMagnitude_ImplicitCast;  // 0xC4 (0xC4)


}; 
 
 