#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_RuinsGolem.BP_RuinsGolem_C.EventReceived_A38344B64752875B4AF8BCB9F35613E5
struct FEventReceived_A38344B64752875B4AF8BCB9F35613E5
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function BP_RuinsGolem.BP_RuinsGolem_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // Function BP_RuinsGolem.BP_RuinsGolem_C.ExecuteUbergraph_BP_RuinsGolem
struct FExecuteUbergraph_BP_RuinsGolem
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x8 (0x8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x20 (0x20)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD0 (0xD0)
	struct UAbilityAsync_WaitGameplayEvent* CallFunc_WaitGameplayEventToActor_ReturnValue;  // 0x180 (0x180)
	char pad_392_1 : 7;  // 0x188 (0x188)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x188 (0x188)
	char pad_393_1 : 7;  // 0x189 (0x189)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x189 (0x189)
	char pad_394_1 : 7;  // 0x18A (0x18A)
	bool CallFunc_HasAuthority_ReturnValue_2 : 1;  // 0x18A (0x18A)
	char pad_395[1];  // 0x18B (0x18B)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x18C (0x18C)
	int32_t K2Node_Event_InCount;  // 0x194 (0x194)
	char pad_408_1 : 7;  // 0x198 (0x198)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x198 (0x198)
	char pad_409[3];  // 0x199 (0x199)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x19C (0x19C)
	char pad_428_1 : 7;  // 0x1AC (0x1AC)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x1AC (0x1AC)
	char pad_429_1 : 7;  // 0x1AD (0x1AD)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x1AD (0x1AD)
	char pad_430_1 : 7;  // 0x1AE (0x1AE)
	bool CallFunc_RemoveGameplayTag_ReturnValue : 1;  // 0x1AE (0x1AE)
	char pad_431_1 : 7;  // 0x1AF (0x1AF)
	bool CallFunc_AddGameplayTag_ReturnValue : 1;  // 0x1AF (0x1AF)
	double CallFunc_Get_BB_Probability_Probability;  // 0x1B0 (0x1B0)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x1B8 (0x1B8)
	double CallFunc_Get_BB_Probability_Probability_2;  // 0x1C0 (0x1C0)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x1C8 (0x1C8)


}; 
 
 