#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GhostKing_CurseOfChilling.GA_GhostKing_CurseOfChilling_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_CurseOfChilling.GA_GhostKing_CurseOfChilling_C.EventReceived_B21121F24B04A09AF14AECB1E6F15BF4
struct FEventReceived_B21121F24B04A09AF14AECB1E6F15BF4
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_CurseOfChilling.GA_GhostKing_CurseOfChilling_C.ExecuteUbergraph_GA_GhostKing_CurseOfChilling
struct FExecuteUbergraph_GA_GhostKing_CurseOfChilling
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool Temp_bool_Variable : 1;  // 0x21 (0x21)
	char pad_34_1 : 7;  // 0x22 (0x22)
	bool Temp_bool_Variable_2 : 1;  // 0x22 (0x22)
	char pad_35[1];  // 0x23 (0x23)
	int32_t Temp_int_Array_Index_Variable;  // 0x24 (0x24)
	struct FGameplayEventData Temp_struct_Variable;  // 0x28 (0x28)
	int32_t Temp_int_Loop_Counter_Variable;  // 0xD8 (0xD8)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0xDC (0xDC)
	int32_t Temp_int_Array_Index_Variable_2;  // 0xE0 (0xE0)
	char pad_228[4];  // 0xE4 (0xE4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0xE8 (0xE8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x198 (0x198)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x1A0 (0x1A0)
	struct ABP_GhostKing_Common_C* K2Node_DynamicCast_AsBP_Ghost_King_Common;  // 0x1B0 (0x1B0)
	char pad_440_1 : 7;  // 0x1B8 (0x1B8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x1B8 (0x1B8)
	char pad_441[3];  // 0x1B9 (0x1B9)
	int32_t Temp_int_Loop_Counter_Variable_2;  // 0x1BC (0x1BC)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x1C0 (0x1C0)
	char pad_452_1 : 7;  // 0x1C4 (0x1C4)
	bool K2Node_Event_bWasCancelled : 1;  // 0x1C4 (0x1C4)
	char pad_453[3];  // 0x1C5 (0x1C5)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x1C8 (0x1C8)
	struct AActor* CallFunc_Array_Get_Item;  // 0x1D0 (0x1D0)
	struct AActor* CallFunc_Array_Get_Item_2;  // 0x1D8 (0x1D8)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x1E0 (0x1E0)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData_2;  // 0x290 (0x290)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x340 (0x340)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_2;  // 0x350 (0x350)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;  // 0x360 (0x360)
	char pad_880_1 : 7;  // 0x370 (0x370)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x370 (0x370)
	char pad_881[7];  // 0x371 (0x371)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As__________________2;  // 0x378 (0x378)
	char pad_904_1 : 7;  // 0x388 (0x388)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x388 (0x388)
	char pad_905_1 : 7;  // 0x389 (0x389)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x389 (0x389)
	char pad_906_1 : 7;  // 0x38A (0x38A)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_2 : 1;  // 0x38A (0x38A)
	char pad_907[1];  // 0x38B (0x38B)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x38C (0x38C)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x390 (0x390)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x394 (0x394)
	char pad_920_1 : 7;  // 0x398 (0x398)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x398 (0x398)
	char pad_921_1 : 7;  // 0x399 (0x399)
	bool CallFunc_Less_IntInt_ReturnValue_2 : 1;  // 0x399 (0x399)
	char pad_922[6];  // 0x39A (0x39A)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x3A0 (0x3A0)
	int32_t CallFunc_Array_AddUnique_ReturnValue_2;  // 0x450 (0x450)


}; 
 
 // Function GA_GhostKing_CurseOfChilling.GA_GhostKing_CurseOfChilling_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 