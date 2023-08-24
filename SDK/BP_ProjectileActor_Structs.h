#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_ProjectileActor.BP_ProjectileActor_C.ExecuteUbergraph_BP_ProjectileActor
struct FExecuteUbergraph_BP_ProjectileActor
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x4 (0x4)
	int32_t Temp_int_Array_Index_Variable;  // 0x8 (0x8)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0xC (0xC)
	int32_t Temp_int_Loop_Counter_Variable_2;  // 0x10 (0x10)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x14 (0x14)
	int32_t Temp_int_Array_Index_Variable_2;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x20 (0x20)
	int32_t K2Node_Event_InCount;  // 0x28 (0x28)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)
	struct TArray<struct USceneComponent*> CallFunc_GetChildrenComponents_Children;  // 0x30 (0x30)
	struct USceneComponent* CallFunc_Array_Get_Item;  // 0x40 (0x40)
	struct USceneComponent* CallFunc_Array_Get_Item_2;  // 0x48 (0x48)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x50 (0x50)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x54 (0x54)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x58 (0x58)
	char pad_89_1 : 7;  // 0x59 (0x59)
	bool CallFunc_Less_IntInt_ReturnValue_2 : 1;  // 0x59 (0x59)
	char pad_90_1 : 7;  // 0x5A (0x5A)
	bool CallFunc_MatchesTag_ReturnValue : 1;  // 0x5A (0x5A)


}; 
 
 // Function BP_ProjectileActor.BP_ProjectileActor_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 