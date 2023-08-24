#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_AOE_SmokePot.BP_AOE_SmokePot_C.AddBeginOverlapActor
// Size: 0x8(Inherited: 0x8)
struct FAddBeginOverlapActor : FAddBeginOverlapActor
{
	struct ADCCharacterBase* CharacterBase;  // 0x0 (0x0)


}; 
 
 // Function BP_AOE_SmokePot.BP_AOE_SmokePot_C.DespawnFiringFX
// Size: 0x5C(Inherited: 0x70)
struct FDespawnFiringFX : FDespawnFiringFX
{
	int32_t Temp_int_Array_Index_Variable;  // 0x0 (0x0)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x4 (0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x8 (0x8)
	double CallFunc_GetTimeSeconds_ReturnValue;  // 0x10 (0x10)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x18 (0x18)
	struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue;  // 0x20 (0x20)
	double CallFunc_GetTimeSeconds_ReturnValue_2;  // 0x28 (0x28)
	double CallFunc_Add_DoubleDouble_ReturnValue_2;  // 0x30 (0x30)
	struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;  // 0x38 (0x38)
	struct UNiagaraComponent* CallFunc_Array_Get_Item;  // 0x40 (0x40)
	char pad_180_1 : 7;  // 0xB4 (0xB4)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x48 (0x48)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x4C (0x4C)
	char pad_185_1 : 7;  // 0xB9 (0xB9)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x50 (0x50)
	float CallFunc_SetScalarParameterValue_Value_ImplicitCast;  // 0x54 (0x54)
	float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;  // 0x58 (0x58)


}; 
 
 // Function BP_AOE_SmokePot.BP_AOE_SmokePot_C.ExecuteUbergraph_BP_AOE_SmokePot
struct FExecuteUbergraph_BP_AOE_SmokePot
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x4 (0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x8 (0x8)
	int32_t Temp_int_Array_Index_Variable;  // 0xC (0xC)
	int32_t Temp_int_Loop_Counter_Variable_2;  // 0x10 (0x10)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x14 (0x14)
	int32_t Temp_int_Array_Index_Variable_2;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct ADCCharacterBase* K2Node_Event_CharacterBase;  // 0x20 (0x20)
	struct ADCPlayerCharacterBase* K2Node_DynamicCast_AsDCPlayer_Character_Base;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct ADCMonsterBase* K2Node_DynamicCast_AsDCMonster_Base;  // 0x38 (0x38)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x48 (0x48)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData_2;  // 0xF8 (0xF8)
	char pad_424_1 : 7;  // 0x1A8 (0x1A8)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0x1A8 (0x1A8)
	char pad_425[7];  // 0x1A9 (0x1A9)
	struct TArray<struct FGameplayTag> CallFunc_BreakGameplayTagContainer_GameplayTags;  // 0x1B0 (0x1B0)
	struct FGameplayTag CallFunc_Array_Get_Item;  // 0x1C0 (0x1C0)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x1C8 (0x1C8)
	char pad_460_1 : 7;  // 0x1CC (0x1CC)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x1CC (0x1CC)
	char pad_461_1 : 7;  // 0x1CD (0x1CD)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x1CD (0x1CD)
	char pad_462_1 : 7;  // 0x1CE (0x1CE)
	bool CallFunc_IsSameTeamWithPlayerCharacter_ReturnValue : 1;  // 0x1CE (0x1CE)
	char pad_463[1];  // 0x1CF (0x1CF)
	struct TArray<struct FGameplayTag> CallFunc_BreakGameplayTagContainer_GameplayTags_2;  // 0x1D0 (0x1D0)
	struct FGameplayTag CallFunc_Array_Get_Item_2;  // 0x1E0 (0x1E0)
	struct FVector CallFunc_GetComponentBounds_Origin;  // 0x1E8 (0x1E8)
	struct FVector CallFunc_GetComponentBounds_BoxExtent;  // 0x200 (0x200)
	float CallFunc_GetComponentBounds_SphereRadius;  // 0x218 (0x218)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x21C (0x21C)
	char pad_544_1 : 7;  // 0x220 (0x220)
	bool CallFunc_Less_IntInt_ReturnValue_2 : 1;  // 0x220 (0x220)
	char pad_545[7];  // 0x221 (0x221)
	struct FDesignDataSkill CallFunc_GetDesignDataSkill_ReturnValue;  // 0x228 (0x228)
	struct FVector CallFunc_GetComponentBounds_Origin_2;  // 0x2F0 (0x2F0)
	struct FVector CallFunc_GetComponentBounds_BoxExtent_2;  // 0x308 (0x308)
	float CallFunc_GetComponentBounds_SphereRadius_2;  // 0x320 (0x320)
	char pad_804[4];  // 0x324 (0x324)
	double CallFunc_Conv_IntToDouble_ReturnValue;  // 0x328 (0x328)
	double CallFunc_Conv_IntToDouble_ReturnValue_2;  // 0x330 (0x330)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x338 (0x338)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_2;  // 0x340 (0x340)
	int32_t CallFunc_FTrunc_ReturnValue;  // 0x348 (0x348)
	char pad_844[4];  // 0x34C (0x34C)
	double CallFunc_Divide_DoubleDouble_ReturnValue;  // 0x350 (0x350)
	double CallFunc_Conv_IntToDouble_ReturnValue_3;  // 0x358 (0x358)
	double CallFunc_Divide_DoubleDouble_ReturnValue_2;  // 0x360 (0x360)
	struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue;  // 0x368 (0x368)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_3;  // 0x370 (0x370)
	double CallFunc_GetTimeSeconds_ReturnValue;  // 0x378 (0x378)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x380 (0x380)
	double CallFunc_GetTimeSeconds_ReturnValue_2;  // 0x398 (0x398)
	struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;  // 0x3A0 (0x3A0)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_4;  // 0x3A8 (0x3A8)
	struct FVector CallFunc_MakeVector_ReturnValue_2;  // 0x3B0 (0x3B0)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x3C8 (0x3C8)
	double CallFunc_Add_DoubleDouble_ReturnValue_2;  // 0x3D0 (0x3D0)
	double CallFunc_Divide_DoubleDouble_B_ImplicitCast;  // 0x3D8 (0x3D8)
	double CallFunc_Divide_DoubleDouble_B_ImplicitCast_2;  // 0x3E0 (0x3E0)
	double CallFunc_Multiply_DoubleDouble_B_ImplicitCast;  // 0x3E8 (0x3E8)
	float CallFunc_SetScalarParameterValue_Value_ImplicitCast;  // 0x3F0 (0x3F0)
	float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;  // 0x3F4 (0x3F4)


}; 
 
 