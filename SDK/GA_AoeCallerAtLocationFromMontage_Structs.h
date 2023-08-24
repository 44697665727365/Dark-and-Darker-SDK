#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_AoeCallerAtLocationFromMontage.GA_AoeCallerAtLocationFromMontage_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_AoeCallerAtLocationFromMontage.GA_AoeCallerAtLocationFromMontage_C.EventReceived_A2FB813847C970E0B81B0E8D2934AE40
struct FEventReceived_A2FB813847C970E0B81B0E8D2934AE40
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_AoeCallerAtLocationFromMontage.GA_AoeCallerAtLocationFromMontage_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_AoeCallerAtLocationFromMontage.GA_AoeCallerAtLocationFromMontage_C.ExecuteUbergraph_GA_AoeCallerAtLocationFromMontage
struct FExecuteUbergraph_GA_AoeCallerAtLocationFromMontage
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x24 (0x24)
	char pad_44[4];  // 0x2C (0x2C)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x30 (0x30)
	struct FGameplayEventData Temp_struct_Variable;  // 0xE0 (0xE0)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x190 (0x190)
	int32_t Temp_int_Variable;  // 0x198 (0x198)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x19C (0x19C)
	char pad_416_1 : 7;  // 0x1A0 (0x1A0)
	bool K2Node_Event_bWasCancelled : 1;  // 0x1A0 (0x1A0)
	char pad_417[7];  // 0x1A1 (0x1A1)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1A8 (0x1A8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x258 (0x258)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x260 (0x260)
	char pad_616_1 : 7;  // 0x268 (0x268)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x268 (0x268)
	char pad_617_1 : 7;  // 0x269 (0x269)
	bool CallFunc_EqualEqual_DoubleDouble_ReturnValue : 1;  // 0x269 (0x269)
	char pad_618[2];  // 0x26A (0x26A)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x26C (0x26C)
	char pad_624_1 : 7;  // 0x270 (0x270)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x270 (0x270)
	char pad_625[3];  // 0x271 (0x271)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x274 (0x274)
	char pad_644[4];  // 0x284 (0x284)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x288 (0x288)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x290 (0x290)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x294 (0x294)
	char pad_664_1 : 7;  // 0x298 (0x298)
	bool CallFunc_LessEqual_IntInt_ReturnValue : 1;  // 0x298 (0x298)
	char pad_665[3];  // 0x299 (0x299)
	int32_t CallFunc_Array_Length_ReturnValue_3;  // 0x29C (0x29C)
	char pad_672_1 : 7;  // 0x2A0 (0x2A0)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x2A0 (0x2A0)
	char pad_673[3];  // 0x2A1 (0x2A1)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;  // 0x2A4 (0x2A4)


}; 
 
 // Function GA_AoeCallerAtLocationFromMontage.GA_AoeCallerAtLocationFromMontage_C.SpawnAoe
struct FSpawnAoe
{
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FGameplayEventData Temp_struct_Variable;  // 0x18 (0x18)
	struct FVector CallFunc_Array_Get_Item;  // 0xC8 (0xC8)
	struct ADCAoeBase* CallFunc_SpawnAoeFromSelf_Return_Value;  // 0xE0 (0xE0)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool CallFunc_SpawnAoeFromTarget_Cast_Bool : 1;  // 0xE8 (0xE8)
	char pad_233[7];  // 0xE9 (0xE9)
	struct ADCAoeBase* CallFunc_SpawnAoeFromTarget_ReturnValue;  // 0xF0 (0xF0)


}; 
 
 