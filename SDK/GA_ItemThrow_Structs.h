#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_ItemThrow.GA_ItemThrow_C.ExecuteUbergraph_GA_ItemThrow
struct FExecuteUbergraph_GA_ItemThrow
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Array_Index_Variable;  // 0x4 (0x4)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x8 (0x8)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0xC (0xC)
	struct UObject* CallFunc_GetCurrentSourceObject_ReturnValue;  // 0x10 (0x10)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x18 (0x18)
	struct AItemActor* K2Node_DynamicCast_AsItem_Actor;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface;  // 0x30 (0x30)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	struct FItemData CallFunc_GetItemData_ReturnValue;  // 0x48 (0x48)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;  // 0xE8 (0xE8)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0xF0 (0xF0)
	char pad_241[3];  // 0xF1 (0xF1)
	struct FActiveGameplayEffectHandle CallFunc_Array_Get_Item;  // 0xF4 (0xF4)
	char pad_252_1 : 7;  // 0xFC (0xFC)
	bool CallFunc_RemoveActiveGameplayEffect_ReturnValue : 1;  // 0xFC (0xFC)
	char pad_253[3];  // 0xFD (0xFD)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x100 (0x100)
	char pad_260[4];  // 0x104 (0x104)
	struct FMsgReduceContainingItemRequest K2Node_MakeStruct_MsgReduceContainingItemRequest;  // 0x108 (0x108)
	char pad_312_1 : 7;  // 0x138 (0x138)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x138 (0x138)


}; 
 
 