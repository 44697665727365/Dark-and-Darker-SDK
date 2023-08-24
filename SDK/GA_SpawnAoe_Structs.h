#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SpawnAoe.GA_SpawnAoe_C.ExecuteUbergraph_GA_SpawnAoe
struct FExecuteUbergraph_GA_SpawnAoe
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct FGameplayEventData Temp_struct_Variable;  // 0x10 (0x10)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0xC0 (0xC0)
	struct ABP_AoeSpawnCharacter_C* K2Node_DynamicCast_AsBP_Aoe_Spawn_Character;  // 0xC8 (0xC8)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xD0 (0xD0)
	char pad_209[7];  // 0xD1 (0xD1)
	ABP_DCAoeDefineBase_AutoActive_C* K2Node_ClassDynamicCast_AsBP_DCAoe_Define_Base_Auto_Active;  // 0xD8 (0xD8)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool K2Node_ClassDynamicCast_bSuccess : 1;  // 0xE0 (0xE0)
	char pad_225[7];  // 0xE1 (0xE1)
	struct ADCAoeBase* CallFunc_SpawnAoeFromSelf_Return_Value;  // 0xE8 (0xE8)


}; 
 
 