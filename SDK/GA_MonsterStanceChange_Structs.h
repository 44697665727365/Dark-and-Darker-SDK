#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_MonsterStanceChange.GA_MonsterStanceChange_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_MonsterStanceChange.GA_MonsterStanceChange_C.ExecuteUbergraph_GA_MonsterStanceChange
struct FExecuteUbergraph_GA_MonsterStanceChange
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Array_Index_Variable;  // 0x4 (0x4)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x8 (0x8)
	struct FGameplayTag CallFunc_Array_Get_Item;  // 0xC (0xC)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x14 (0x14)
	enum class E_Detachable CallFunc_Array_Get_Item_2;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FGameplayTagContainer CallFunc_Array_Get_Item_3;  // 0x20 (0x20)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x44 (0x44)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x48 (0x48)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0xF8 (0xF8)
	char pad_249[7];  // 0xF9 (0xF9)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x100 (0x100)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue;  // 0x108 (0x108)
	char pad_272_1 : 7;  // 0x110 (0x110)
	bool CallFunc_AddGameplayTag_ReturnValue : 1;  // 0x110 (0x110)
	char pad_273[3];  // 0x111 (0x111)
	int32_t CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;  // 0x114 (0x114)


}; 
 
 