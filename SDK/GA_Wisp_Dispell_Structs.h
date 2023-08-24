#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Wisp_Dispell.GA_Wisp_Dispell_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_Wisp_Dispell.GA_Wisp_Dispell_C.EventReceived_EECC35E14AC8B4DECCFAF39DB9078458
struct FEventReceived_EECC35E14AC8B4DECCFAF39DB9078458
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_Wisp_Dispell.GA_Wisp_Dispell_C.ExecuteUbergraph_GA_Wisp_Dispell
struct FExecuteUbergraph_GA_Wisp_Dispell
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x4 (0x4)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x8 (0x8)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x20 (0x20)
	int32_t CallFunc_Max_ReturnValue;  // 0xD0 (0xD0)
	char pad_212[4];  // 0xD4 (0xD4)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD8 (0xD8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x188 (0x188)
	char pad_400_1 : 7;  // 0x190 (0x190)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x190 (0x190)
	char pad_401[3];  // 0x191 (0x191)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x194 (0x194)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_2;  // 0x198 (0x198)
	char pad_412_1 : 7;  // 0x19C (0x19C)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x19C (0x19C)
	char pad_413[3];  // 0x19D (0x19D)
	int32_t Temp_int_Array_Index_Variable;  // 0x1A0 (0x1A0)
	char pad_420[4];  // 0x1A4 (0x1A4)
	struct ADCCharacterBase* CallFunc_Array_Get_Item;  // 0x1A8 (0x1A8)
	int32_t CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;  // 0x1B0 (0x1B0)
	char pad_436[4];  // 0x1B4 (0x1B4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1B8 (0x1B8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x268 (0x268)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x270 (0x270)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x278 (0x278)
	char pad_633_1 : 7;  // 0x279 (0x279)
	bool CallFunc_GetAllTargetArray_ReturnValue : 1;  // 0x279 (0x279)
	char pad_634_1 : 7;  // 0x27A (0x27A)
	bool CallFunc_FilterTagedTargets_ReturnValue : 1;  // 0x27A (0x27A)


}; 
 
 