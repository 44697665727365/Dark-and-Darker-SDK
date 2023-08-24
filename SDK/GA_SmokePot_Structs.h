#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SmokePot.GA_SmokePot_C.ExecuteUbergraph_GA_SmokePot
struct FExecuteUbergraph_GA_SmokePot
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag K2Node_Event_SkillTag;  // 0x4 (0x4)
	struct FGameplayTag K2Node_Event_CooldownTag;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x18 (0x18)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x20 (0x20)
	struct ADCPlayerCharacterBase* K2Node_DynamicCast_AsDCPlayer_Character_Base;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x38 (0x38)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x50 (0x50)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x58 (0x58)
	char pad_89[7];  // 0x59 (0x59)
	struct FGameplayEventData Temp_struct_Variable;  // 0x60 (0x60)
	float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;  // 0x110 (0x110)
	char pad_276[4];  // 0x114 (0x114)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x118 (0x118)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue;  // 0x130 (0x130)
	char pad_328_1 : 7;  // 0x148 (0x148)
	bool CallFunc_SpawnAoe_bSuccessfully : 1;  // 0x148 (0x148)
	char pad_329[7];  // 0x149 (0x149)
	struct ADCAoeBase* CallFunc_SpawnAoe_ReturnValue;  // 0x150 (0x150)
	struct ABP_AOE_SmokePot_C* K2Node_DynamicCast_AsBP_AOE_Smoke_Pot;  // 0x158 (0x158)
	char pad_352_1 : 7;  // 0x160 (0x160)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x160 (0x160)
	char pad_353[7];  // 0x161 (0x161)
	double CallFunc_MakeVector_Z_ImplicitCast;  // 0x168 (0x168)


}; 
 
 // Function GA_SmokePot.GA_SmokePot_C.ServerOnSkillActivate
// Size: 0x10(Inherited: 0x10)
struct FServerOnSkillActivate : FServerOnSkillActivate
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	struct FGameplayTag CooldownTag;  // 0x8 (0x8)


}; 
 
 