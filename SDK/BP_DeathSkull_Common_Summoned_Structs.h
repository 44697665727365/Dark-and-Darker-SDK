#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_DeathSkull_Common_Summoned.BP_DeathSkull_Common_Summoned_C.ExecuteUbergraph_BP_DeathSkull_Common_Summoned
struct FExecuteUbergraph_BP_DeathSkull_Common_Summoned
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Array_Index_Variable;  // 0x4 (0x4)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x8 (0x8)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x18 (0x18)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x1C (0x1C)
	struct AAIController* CallFunc_GetAIController_ReturnValue;  // 0x20 (0x20)
	struct UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue;  // 0x28 (0x28)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x30 (0x30)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool CallFunc_SetSightRange_ReturnValue : 1;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x50 (0x50)
	struct TArray<struct AActor*> CallFunc_BoxOverlapActors_OutActors;  // 0x60 (0x60)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool CallFunc_BoxOverlapActors_ReturnValue : 1;  // 0x70 (0x70)
	char pad_113[3];  // 0x71 (0x71)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x74 (0x74)
	struct AActor* CallFunc_Array_Get_Item;  // 0x78 (0x78)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x80 (0x80)
	char pad_129[7];  // 0x81 (0x81)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x88 (0x88)
	char pad_144_1 : 7;  // 0x90 (0x90)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x90 (0x90)
	char pad_145[3];  // 0x91 (0x91)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x94 (0x94)


}; 
 
 