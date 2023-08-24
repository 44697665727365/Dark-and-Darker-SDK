#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BTT_GetTargetNonPlayable.BTT_GetTargetNonPlayable_C.ExecuteUbergraph_BTT_GetTargetNonPlayable
struct FExecuteUbergraph_BTT_GetTargetNonPlayable
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Array_Index_Variable;  // 0x4 (0x4)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x8 (0x8)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0xC (0xC)
	int32_t Temp_int_Array_Index_Variable_2;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x18 (0x18)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x28 (0x28)
	struct AAIController* K2Node_Event_OwnerController_2;  // 0x38 (0x38)
	struct APawn* K2Node_Event_ControlledPawn_2;  // 0x40 (0x40)
	int32_t Temp_int_Loop_Counter_Variable_2;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x50 (0x50)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x58 (0x58)
	char pad_92[4];  // 0x5C (0x5C)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x60 (0x60)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x68 (0x68)
	char pad_105[3];  // 0x69 (0x69)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x6C (0x6C)
	char pad_116[4];  // 0x74 (0x74)
	struct FVector CallFunc_K2_GetComponentLocation_ReturnValue;  // 0x78 (0x78)
	float CallFunc_GetScaledCapsuleRadius_ReturnValue;  // 0x90 (0x90)
	float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;  // 0x94 (0x94)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool CallFunc_RemoveGameplayTag_ReturnValue : 1;  // 0x98 (0x98)
	char pad_153[7];  // 0x99 (0x99)
	struct TArray<struct AActor*> CallFunc_CapsuleOverlapActors_OutActors;  // 0xA0 (0xA0)
	char pad_176_1 : 7;  // 0xB0 (0xB0)
	bool CallFunc_CapsuleOverlapActors_ReturnValue : 1;  // 0xB0 (0xB0)
	enum class E_NonPlayableTarget CallFunc_Array_Get_Item;  // 0xB1 (0xB1)
	char pad_178[2];  // 0xB2 (0xB2)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0xB4 (0xB4)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0xB8 (0xB8)
	char pad_185_1 : 7;  // 0xB9 (0xB9)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0xB9 (0xB9)
	char pad_186[6];  // 0xBA (0xBA)
	struct AActor* CallFunc_Array_Get_Item_2;  // 0xC0 (0xC0)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0xC8 (0xC8)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0xCC (0xCC)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool CallFunc_Less_IntInt_ReturnValue_2 : 1;  // 0xD0 (0xD0)
	char pad_209[7];  // 0xD1 (0xD1)
	struct AActor* CallFunc_Array_Random_OutItem;  // 0xD8 (0xD8)
	int32_t CallFunc_Array_Random_OutIndex;  // 0xE0 (0xE0)
	char pad_228_1 : 7;  // 0xE4 (0xE4)
	bool CallFunc_Array_IsEmpty_ReturnValue : 1;  // 0xE4 (0xE4)
	char pad_229[3];  // 0xE5 (0xE5)
	struct AAIController* K2Node_Event_OwnerController;  // 0xE8 (0xE8)
	struct APawn* K2Node_Event_ControlledPawn;  // 0xF0 (0xF0)
	enum class EBTNodeResult K2Node_Event_TaskResult;  // 0xF8 (0xF8)


}; 
 
 // Function BTT_GetTargetNonPlayable.BTT_GetTargetNonPlayable_C.OnTaskFinished
// Size: 0x11(Inherited: 0x18)
struct FOnTaskFinished : FOnTaskFinished
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)
	enum class EBTNodeResult TaskResult;  // 0x10 (0x10)


}; 
 
 // Function BTT_GetTargetNonPlayable.BTT_GetTargetNonPlayable_C.ReceiveExecuteAI
// Size: 0x10(Inherited: 0x10)
struct FReceiveExecuteAI : FReceiveExecuteAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)


}; 
 
 