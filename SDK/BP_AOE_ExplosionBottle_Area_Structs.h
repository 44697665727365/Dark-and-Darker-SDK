#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_AOE_ExplosionBottle_Area.BP_AOE_ExplosionBottle_Area_C.ExecuteUbergraph_BP_AOE_ExplosionBottle_Area
struct FExecuteUbergraph_BP_AOE_ExplosionBottle_Area
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x8 (0x8)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x20 (0x20)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue;  // 0x38 (0x38)
	struct AActor* CallFunc_GetOwner_ReturnValue;  // 0x50 (0x50)
	struct FVector CallFunc_Normal_ReturnValue;  // 0x58 (0x58)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x70 (0x70)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x78 (0x78)
	char pad_121[3];  // 0x79 (0x79)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x7C (0x7C)
	struct FVector CallFunc_Conv_FloatToVector_ReturnValue;  // 0x80 (0x80)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x98 (0x98)
	char pad_153[7];  // 0x99 (0x99)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0xA0 (0xA0)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0xB8 (0xB8)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool CallFunc_SpawnAoe_bSuccessfully : 1;  // 0xD0 (0xD0)
	char pad_209[7];  // 0xD1 (0xD1)
	struct ADCAoeBase* CallFunc_SpawnAoe_ReturnValue;  // 0xD8 (0xD8)
	struct ABP_AOE_ExplosionBottle_Area_C* K2Node_DynamicCast_AsBP_AOE_Explosion_Bottle_Area;  // 0xE0 (0xE0)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0xE8 (0xE8)


}; 
 
 