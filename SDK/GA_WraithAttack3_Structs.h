#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_WraithAttack3.GA_WraithAttack3_C.ExecuteUbergraph_GA_WraithAttack3
struct FExecuteUbergraph_GA_WraithAttack3
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Array_Index_Variable;  // 0x4 (0x4)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x8 (0x8)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool K2Node_Event_bWasCancelled : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x18 (0x18)
	struct ADCMonsterBase* K2Node_DynamicCast_AsDCMonster_Base;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct TArray<enum class ECollisionChannel> K2Node_MakeArray_Array;  // 0x30 (0x30)
	enum class ECollisionChannel CallFunc_Array_Get_Item;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x44 (0x44)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x48 (0x48)


}; 
 
 // Function GA_WraithAttack3.GA_WraithAttack3_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 