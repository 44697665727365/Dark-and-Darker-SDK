#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function MonsterBPLibrary.MonsterBPLibrary_C.Get Enemies In Range And Angle
struct FGet Enemies In Range And Angle
{
	struct AActor* Actor;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Result By TargetActor : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	double Range;  // 0x10 (0x10)
	double Direction;  // 0x18 (0x18)
	double Angle;  // 0x20 (0x20)
	struct UObject* __WorldContext;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool Result : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct TArray<struct ADCCharacterBase*> DCCharacterBase;  // 0x38 (0x38)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x48 (0x48)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool CallFunc_Array_IsNotEmpty_ReturnValue : 1;  // 0x58 (0x58)
	char pad_89[7];  // 0x59 (0x59)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x60 (0x60)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x68 (0x68)
	char pad_105_1 : 7;  // 0x69 (0x69)
	bool CallFunc_Get_BB_Target_Actor_Result : 1;  // 0x69 (0x69)
	char pad_106[6];  // 0x6A (0x6A)
	struct ADCCharacterBase* CallFunc_Get_BB_Target_Actor_DCCharacterBase;  // 0x70 (0x70)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool CallFunc_Array_Contains_ReturnValue : 1;  // 0x78 (0x78)
	char pad_121_1 : 7;  // 0x79 (0x79)
	bool CallFunc_GetAllTargetArray_ReturnValue : 1;  // 0x79 (0x79)
	char pad_122_1 : 7;  // 0x7A (0x7A)
	bool CallFunc_FilterTargetsWithinDirectionAngleAndAllowedAngle_ReturnValue : 1;  // 0x7A (0x7A)
	char pad_123_1 : 7;  // 0x7B (0x7B)
	bool CallFunc_FilterTargetsWithinDistance_ReturnValue : 1;  // 0x7B (0x7B)
	float CallFunc_FilterTargetsWithinDistance_Distance_ImplicitCast;  // 0x7C (0x7C)
	float CallFunc_FilterTargetsWithinDirectionAngleAndAllowedAngle_DirectionalAngle_ImplicitCast;  // 0x80 (0x80)
	float CallFunc_FilterTargetsWithinDirectionAngleAndAllowedAngle_AllowedAngle_ImplicitCast;  // 0x84 (0x84)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Add Timer
struct FAdd Timer
{
	struct AActor* Actor;  // 0x0 (0x0)
	int32_t Timer Index;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	double Second;  // 0x10 (0x10)
	struct UObject* __WorldContext;  // 0x18 (0x18)
	struct FPrimaryAssetId Timer Asset;  // 0x20 (0x20)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool K2Node_SwitchInteger_CmpSuccess : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_Change_GE_Attribute_And_Apply_Return_Value;  // 0x38 (0x38)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Remove Debuff Immune
struct FRemove Debuff Immune
{
	struct AActor* Actor;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Fear : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool Impact : 1;  // 0x9 (0x9)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool KnockBack : 1;  // 0xA (0xA)
	char pad_11_1 : 7;  // 0xB (0xB)
	bool Trap : 1;  // 0xB (0xB)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool UnableMove : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	struct UObject* __WorldContext;  // 0x10 (0x10)
	struct FGameplayTag Temp_struct_Variable;  // 0x18 (0x18)
	struct TArray<struct FGameplayTag> CallFunc_Get_Debuff_Immune_Tags_Debuff_Immune_Tags;  // 0x20 (0x20)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x30 (0x30)
	char pad_52_1 : 7;  // 0x34 (0x34)
	bool CallFunc_Array_RemoveItem_ReturnValue : 1;  // 0x34 (0x34)
	char pad_53[3];  // 0x35 (0x35)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x38 (0x38)
	int32_t Temp_int_Array_Index_Variable;  // 0x40 (0x40)
	char pad_68_1 : 7;  // 0x44 (0x44)
	bool CallFunc_Array_RemoveItem_ReturnValue_2 : 1;  // 0x44 (0x44)
	char pad_69[3];  // 0x45 (0x45)
	struct FGameplayTag CallFunc_Array_Get_Item;  // 0x48 (0x48)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool CallFunc_RemoveGameplayTag_ReturnValue : 1;  // 0x50 (0x50)
	char pad_81[3];  // 0x51 (0x51)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x54 (0x54)
	struct FGameplayTag Temp_struct_Variable_3;  // 0x58 (0x58)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x60 (0x60)
	char pad_97_1 : 7;  // 0x61 (0x61)
	bool CallFunc_Array_RemoveItem_ReturnValue_3 : 1;  // 0x61 (0x61)
	char pad_98[2];  // 0x62 (0x62)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x64 (0x64)
	struct FGameplayTag Temp_struct_Variable_4;  // 0x68 (0x68)
	struct FGameplayTag Temp_struct_Variable_5;  // 0x70 (0x70)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool CallFunc_Array_RemoveItem_ReturnValue_4 : 1;  // 0x78 (0x78)
	char pad_121_1 : 7;  // 0x79 (0x79)
	bool CallFunc_Array_RemoveItem_ReturnValue_5 : 1;  // 0x79 (0x79)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Get BB HPRatio
struct FGet BB HPRatio
{
	struct ABP_DCMonsterBaseWithOptions_C* MonsterBase;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x8 (0x8)
	double HPRatio;  // 0x10 (0x10)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x18 (0x18)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x20 (0x20)
	float CallFunc_GetValueAsFloat_ReturnValue;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	double K2Node_FunctionResult_HPRatio_ImplicitCast;  // 0x30 (0x30)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Remove Interrtupt Montage Immune
struct FRemove Interrtupt Montage Immune
{
	struct AActor* Actor;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x8 (0x8)
	struct TArray<struct FGameplayTag> CallFunc_Get_Interrupt_Montage_Immune_Tags_Interrupt_Action_Immune_Tags;  // 0x10 (0x10)
	struct FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;  // 0x20 (0x20)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool CallFunc_RemoveLooseGameplayTags_ReturnValue : 1;  // 0x40 (0x40)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Filter Target Has Aggro
struct FFilter Target Has Aggro
{
	struct ABP_DCMonsterBase_C* MonsterBase;  // 0x0 (0x0)
	struct TArray<struct ADCCharacterBase*> Input TargetArray;  // 0x8 (0x8)
	struct UObject* __WorldContext;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool Return Value : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct TArray<struct ADCCharacterBase*> Output TargetArray;  // 0x28 (0x28)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x38 (0x38)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x3C (0x3C)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x44 (0x44)
	int32_t CallFunc_Max_ReturnValue;  // 0x48 (0x48)
	int32_t Temp_int_Array_Index_Variable;  // 0x4C (0x4C)
	struct ADCCharacterBase* CallFunc_Array_Get_Item;  // 0x50 (0x50)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool CallFunc_Array_RemoveItem_ReturnValue : 1;  // 0x58 (0x58)
	char pad_89_1 : 7;  // 0x59 (0x59)
	bool CallFunc_GetAggroPoint_bSuccessfully : 1;  // 0x59 (0x59)
	char pad_90[2];  // 0x5A (0x5A)
	float CallFunc_GetAggroPoint_ReturnValue;  // 0x5C (0x5C)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x60 (0x60)
	char pad_100_1 : 7;  // 0x64 (0x64)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x64 (0x64)
	char pad_101[3];  // 0x65 (0x65)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_2;  // 0x68 (0x68)
	char pad_108_1 : 7;  // 0x6C (0x6C)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x6C (0x6C)
	char pad_109[3];  // 0x6D (0x6D)
	double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;  // 0x70 (0x70)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Remove Immune To Comeback
struct FRemove Immune To Comeback
{
	struct ABP_DCMonsterBaseWithOptions_C* DCMonsterBase;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x8 (0x8)
	int32_t Temp_int_Array_Index_Variable;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct FGameplayTag> CallFunc_Get_Debuff_Immune_Tags_Debuff_Immune_Tags;  // 0x18 (0x18)
	struct FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;  // 0x28 (0x28)
	struct ABP_DCMonsterBaseWithOptions_C* CallFunc_Array_Get_Item;  // 0x48 (0x48)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x50 (0x50)
	char pad_84_1 : 7;  // 0x54 (0x54)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x54 (0x54)
	char pad_85[3];  // 0x55 (0x55)
	int32_t CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;  // 0x58 (0x58)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x5C (0x5C)
	int32_t CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue_2;  // 0x60 (0x60)
	char pad_100[4];  // 0x64 (0x64)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue;  // 0x68 (0x68)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x70 (0x70)
	int32_t CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue_3;  // 0x74 (0x74)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x78 (0x78)
	char pad_121[3];  // 0x79 (0x79)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x7C (0x7C)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Change GE Attribute And Apply
struct FChange GE Attribute And Apply
{
	struct AActor* SourceActor;  // 0x0 (0x0)
	struct AActor* Target Actor;  // 0x8 (0x8)
	struct FPrimaryAssetId Gameplay Effect;  // 0x10 (0x10)
	struct FGameplayTag Set By Caller Tag;  // 0x20 (0x20)
	double Value;  // 0x28 (0x28)
	struct UObject* __WorldContext;  // 0x30 (0x30)
	struct TArray<struct FActiveGameplayEffectHandle> Return Value;  // 0x38 (0x38)
	struct TArray<struct FDCGameplayEffectSetByCallerData> OverrideSetByCallerDataArray;  // 0x48 (0x48)
	struct FDCGameplayEffectData Local Out Gameplay Effect Data;  // 0x58 (0x58)
	int32_t Temp_int_Loop_Counter_Variable;  // 0xA0 (0xA0)
	char pad_164[4];  // 0xA4 (0xA4)
	struct FDesignDataGameplayEffect CallFunc_GetDesignDataGameplayEffect_ReturnValue;  // 0xA8 (0xA8)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x2D0 (0x2D0)
	int32_t Temp_int_Array_Index_Variable;  // 0x2D4 (0x2D4)
	struct TArray<struct FDCGameplayEffectData> K2Node_MakeArray_Array;  // 0x2D8 (0x2D8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffects_ReturnValue;  // 0x2E8 (0x2E8)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x2F8 (0x2F8)
	struct FDCGameplayEffectSetByCallerData CallFunc_Array_Get_Item;  // 0x2FC (0x2FC)
	char pad_776_1 : 7;  // 0x308 (0x308)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x308 (0x308)
	char pad_777[3];  // 0x309 (0x309)
	int32_t CallFunc_Array_Add_ReturnValue;  // 0x30C (0x30C)
	struct FDCGameplayEffectSetByCallerData K2Node_MakeStruct_DCGameplayEffectSetByCallerData;  // 0x310 (0x310)
	char pad_796_1 : 7;  // 0x31C (0x31C)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue : 1;  // 0x31C (0x31C)
	char pad_797[3];  // 0x31D (0x31D)
	int32_t CallFunc_Array_Add_ReturnValue_2;  // 0x320 (0x320)
	float K2Node_MakeStruct_SetByCallerValue_ImplicitCast;  // 0x324 (0x324)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Filter Target From CombatArea
struct FFilter Target From CombatArea
{
	struct FVector SpawnLocation;  // 0x0 (0x0)
	double FilterDistanceFromSpawnLocation;  // 0x18 (0x18)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x20 (0x20)
	struct UObject* __WorldContext;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool Return Value : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct TArray<struct ADCCharacterBase*> Result;  // 0x40 (0x40)
	struct TArray<struct ADCCharacterBase*> LocalTargetArray;  // 0x50 (0x50)
	int32_t Temp_int_Array_Index_Variable;  // 0x60 (0x60)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x64 (0x64)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x68 (0x68)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x6C (0x6C)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x70 (0x70)
	char pad_113_1 : 7;  // 0x71 (0x71)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue_2 : 1;  // 0x71 (0x71)
	char pad_114[6];  // 0x72 (0x72)
	struct ADCCharacterBase* CallFunc_Array_Get_Item;  // 0x78 (0x78)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x80 (0x80)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x98 (0x98)
	char pad_156[4];  // 0x9C (0x9C)
	double CallFunc_Vector_Distance_ReturnValue;  // 0xA0 (0xA0)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_2;  // 0xA8 (0xA8)
	char pad_172_1 : 7;  // 0xAC (0xAC)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0xAC (0xAC)
	char pad_173[3];  // 0xAD (0xAD)
	int32_t CallFunc_Max_ReturnValue;  // 0xB0 (0xB0)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Check Target Has State Tags To Lose From Array
struct FCheck Target Has State Tags To Lose From Array
{
	struct UObject* Target;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool Result : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool Temp_bool_Variable : 1;  // 0x11 (0x11)
	char pad_18[6];  // 0x12 (0x12)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct TArray<struct FGameplayTag> K2Node_MakeArray_Array;  // 0x30 (0x30)
	struct FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;  // 0x40 (0x40)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue : 1;  // 0x60 (0x60)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Set Interrupt Montage Immune
struct FSet Interrupt Montage Immune
{
	struct AActor* Actor;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x8 (0x8)
	struct TArray<struct FGameplayTag> CallFunc_Get_Interrupt_Montage_Immune_Tags_Interrupt_Action_Immune_Tags;  // 0x10 (0x10)
	int32_t Temp_int_Array_Index_Variable;  // 0x20 (0x20)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x24 (0x24)
	struct FGameplayTag CallFunc_Array_Get_Item;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_AddGameplayTag_ReturnValue : 1;  // 0x30 (0x30)
	char pad_49[3];  // 0x31 (0x31)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x34 (0x34)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x3C (0x3C)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Set BB Probability
struct FSet BB Probability
{
	struct ABP_DCMonsterBaseWithOptions_C* MonsterBase;  // 0x0 (0x0)
	double Probability;  // 0x8 (0x8)
	struct UObject* __WorldContext;  // 0x10 (0x10)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x18 (0x18)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x20 (0x20)
	float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast;  // 0x28 (0x28)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Filter Target From Spawn Location
struct FFilter Target From Spawn Location
{
	struct FVector SpawnLocation;  // 0x0 (0x0)
	double FilterDistanceFromSpawnLocation;  // 0x18 (0x18)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x20 (0x20)
	struct UObject* __WorldContext;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool Return Value : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct TArray<struct ADCCharacterBase*> Result;  // 0x40 (0x40)
	struct TArray<struct ADCCharacterBase*> LocalTargetArray;  // 0x50 (0x50)
	int32_t Temp_int_Array_Index_Variable;  // 0x60 (0x60)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x64 (0x64)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x68 (0x68)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x6C (0x6C)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x70 (0x70)
	char pad_113_1 : 7;  // 0x71 (0x71)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue_2 : 1;  // 0x71 (0x71)
	char pad_114[6];  // 0x72 (0x72)
	struct ADCCharacterBase* CallFunc_Array_Get_Item;  // 0x78 (0x78)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x80 (0x80)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x98 (0x98)
	char pad_156[4];  // 0x9C (0x9C)
	double CallFunc_Vector_Distance_ReturnValue;  // 0xA0 (0xA0)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_2;  // 0xA8 (0xA8)
	char pad_172_1 : 7;  // 0xAC (0xAC)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0xAC (0xAC)
	char pad_173[3];  // 0xAD (0xAD)
	int32_t CallFunc_Max_ReturnValue;  // 0xB0 (0xB0)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Get And Compare To BlackBoard Mode
struct FGet And Compare To BlackBoard Mode
{
	struct ABP_DCMonsterBaseWithOptions_C* DCMonsterBase;  // 0x0 (0x0)
	enum class E_ModeType Mode Type;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct UObject* __WorldContext;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool Result : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x20 (0x20)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x30 (0x30)
	char pad_49[3];  // 0x31 (0x31)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x34 (0x34)
	char CallFunc_GetValueAsEnum_ReturnValue;  // 0x3C (0x3C)
	char CallFunc_GetValidValue_ReturnValue;  // 0x3D (0x3D)
	char pad_62_1 : 7;  // 0x3E (0x3E)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x3E (0x3E)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Get BB Probability
struct FGet BB Probability
{
	struct ABP_DCMonsterBaseWithOptions_C* MonsterBase;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x8 (0x8)
	double Probability;  // 0x10 (0x10)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x18 (0x18)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x20 (0x20)
	float CallFunc_GetValueAsFloat_ReturnValue;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	double K2Node_FunctionResult_Probability_ImplicitCast;  // 0x30 (0x30)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Get BB Phase
struct FGet BB Phase
{
	struct ABP_DCMonsterBaseWithOptions_C* MonsterBase;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x8 (0x8)
	int32_t Phase;  // 0x10 (0x10)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x14 (0x14)
	char pad_28[4];  // 0x1C (0x1C)
	struct AAIController* CallFunc_GetAIController_ReturnValue;  // 0x20 (0x20)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x28 (0x28)
	int32_t CallFunc_GetValueAsInt_ReturnValue;  // 0x30 (0x30)
	char pad_52_1 : 7;  // 0x34 (0x34)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x34 (0x34)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Get BB Target Actor
struct FGet BB Target Actor
{
	struct ABP_DCMonsterBaseWithOptions_C* MonsterBaseWithOptions;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool Result : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct ADCCharacterBase* DCCharacterBase;  // 0x18 (0x18)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x20 (0x20)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x28 (0x28)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x30 (0x30)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x38 (0x38)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x40 (0x40)
	char pad_65_1 : 7;  // 0x41 (0x41)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x41 (0x41)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Get Direction Vector
struct FGet Direction Vector
{
	struct AActor* Actor;  // 0x0 (0x0)
	enum class E_Direction Direction;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	double Distance;  // 0x10 (0x10)
	struct UObject* __WorldContext;  // 0x18 (0x18)
	struct FVector Result Vector;  // 0x20 (0x20)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x38 (0x38)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue;  // 0x50 (0x50)
	struct FVector CallFunc_GetUpVector_ReturnValue;  // 0x68 (0x68)
	struct FVector CallFunc_GetUpVector_ReturnValue_2;  // 0x80 (0x80)
	struct FVector CallFunc_GetRightVector_ReturnValue;  // 0x98 (0x98)
	struct FVector CallFunc_GetRightVector_ReturnValue_2;  // 0xB0 (0xB0)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0xC8 (0xC8)
	double CallFunc_BreakVector_X;  // 0xE0 (0xE0)
	double CallFunc_BreakVector_Y;  // 0xE8 (0xE8)
	double CallFunc_BreakVector_Z;  // 0xF0 (0xF0)
	struct FVector CallFunc_GetForwardVector_ReturnValue;  // 0xF8 (0xF8)
	struct FVector CallFunc_GetForwardVector_ReturnValue_2;  // 0x110 (0x110)
	double CallFunc_BreakVector_X_2;  // 0x128 (0x128)
	double CallFunc_BreakVector_Y_2;  // 0x130 (0x130)
	double CallFunc_BreakVector_Z_2;  // 0x138 (0x138)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x140 (0x140)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue_2;  // 0x148 (0x148)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue_3;  // 0x160 (0x160)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue_2;  // 0x178 (0x178)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue_3;  // 0x190 (0x190)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_2;  // 0x1A8 (0x1A8)
	double CallFunc_BreakVector_X_3;  // 0x1B0 (0x1B0)
	double CallFunc_BreakVector_Y_3;  // 0x1B8 (0x1B8)
	double CallFunc_BreakVector_Z_3;  // 0x1C0 (0x1C0)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue_4;  // 0x1C8 (0x1C8)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x1E0 (0x1E0)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue_4;  // 0x1F8 (0x1F8)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue_5;  // 0x210 (0x210)
	double CallFunc_BreakVector_X_4;  // 0x228 (0x228)
	double CallFunc_BreakVector_Y_4;  // 0x230 (0x230)
	double CallFunc_BreakVector_Z_4;  // 0x238 (0x238)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue_5;  // 0x240 (0x240)
	struct FVector CallFunc_MakeVector_ReturnValue_2;  // 0x258 (0x258)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_3;  // 0x270 (0x270)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x278 (0x278)
	char pad_633[7];  // 0x279 (0x279)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue_6;  // 0x280 (0x280)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x298 (0x298)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue_6;  // 0x2B0 (0x2B0)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x2C8 (0x2C8)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_2;  // 0x2E0 (0x2E0)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_3;  // 0x2F8 (0x2F8)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_4;  // 0x310 (0x310)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_5;  // 0x328 (0x328)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_6;  // 0x340 (0x340)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Get Debuff Immune Tags
struct FGet Debuff Immune Tags
{
	struct UObject* __WorldContext;  // 0x0 (0x0)
	struct TArray<struct FGameplayTag> Debuff Immune Tags;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool UnableMove : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool Trap : 1;  // 0x19 (0x19)
	char pad_26_1 : 7;  // 0x1A (0x1A)
	bool KnockBack : 1;  // 0x1A (0x1A)
	char pad_27_1 : 7;  // 0x1B (0x1B)
	bool Impact : 1;  // 0x1B (0x1B)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool Fear : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct TArray<struct FGameplayTag> DebuffImmunTags;  // 0x20 (0x20)
	struct TArray<struct FGameplayTag> K2Node_MakeArray_Array;  // 0x30 (0x30)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Get Enemy Direction From Me
struct FGet Enemy Direction From Me
{
	double Angle;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x8 (0x8)
	enum class E_Direction Direction;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool CallFunc_InRange_FloatFloat_ReturnValue : 1;  // 0x11 (0x11)
	char pad_18_1 : 7;  // 0x12 (0x12)
	bool CallFunc_InRange_FloatFloat_ReturnValue_2 : 1;  // 0x12 (0x12)
	char pad_19_1 : 7;  // 0x13 (0x13)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x13 (0x13)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool CallFunc_Not_PreBool_ReturnValue_2 : 1;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool CallFunc_InRange_FloatFloat_ReturnValue_3 : 1;  // 0x15 (0x15)
	char pad_22_1 : 7;  // 0x16 (0x16)
	bool CallFunc_InRange_FloatFloat_ReturnValue_4 : 1;  // 0x16 (0x16)
	char pad_23_1 : 7;  // 0x17 (0x17)
	bool CallFunc_InRange_FloatFloat_ReturnValue_5 : 1;  // 0x17 (0x17)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool CallFunc_BooleanOR_ReturnValue : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool CallFunc_Not_PreBool_ReturnValue_3 : 1;  // 0x19 (0x19)
	char pad_26_1 : 7;  // 0x1A (0x1A)
	bool CallFunc_Not_PreBool_ReturnValue_4 : 1;  // 0x1A (0x1A)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Get Instigator From Added Tag
struct FGet Instigator From Added Tag
{
	struct FGameplayTag Gameplay Tag;  // 0x0 (0x0)
	struct FGameplayEffectSpecHandle Spec Handle;  // 0x8 (0x8)
	struct UObject* __WorldContext;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool Result : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct AActor* Instigator;  // 0x28 (0x28)
	struct FGameplayEffectContextHandle CallFunc_GetEffectContext_ReturnValue;  // 0x30 (0x30)
	struct FGameplayTagContainer CallFunc_GetGrantedTag_ReturnValue;  // 0x48 (0x48)
	struct AActor* CallFunc_EffectContextGetInstigatorActor_ReturnValue;  // 0x68 (0x68)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool CallFunc_HasTag_ReturnValue : 1;  // 0x70 (0x70)
	char pad_113_1 : 7;  // 0x71 (0x71)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x71 (0x71)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Get Interrupt Montage Immune Tags
struct FGet Interrupt Montage Immune Tags
{
	struct UObject* __WorldContext;  // 0x0 (0x0)
	struct TArray<struct FGameplayTag> Interrupt Action Immune Tags;  // 0x8 (0x8)
	struct TArray<struct FGameplayTag> K2Node_MakeArray_Array;  // 0x18 (0x18)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Get Number Of Active Players In Combat Area
struct FGet Number Of Active Players In Combat Area
{
	struct TArray<struct ADCCharacterBase*> Enemies In Combat Area;  // 0x0 (0x0)
	struct TArray<struct ADCCharacterBase*> Lost Enemies In Combat Area;  // 0x10 (0x10)
	struct UObject* __WorldContext;  // 0x20 (0x20)
	int32_t Number Of Players;  // 0x28 (0x28)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x2C (0x2C)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x30 (0x30)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x34 (0x34)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_2;  // 0x38 (0x38)
	int32_t CallFunc_Max_ReturnValue;  // 0x3C (0x3C)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x44 (0x44)
	int32_t CallFunc_Array_Length_ReturnValue_3;  // 0x48 (0x48)
	int32_t Temp_int_Array_Index_Variable;  // 0x4C (0x4C)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_3;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)
	struct ADCCharacterBase* CallFunc_Array_Get_Item;  // 0x58 (0x58)
	int32_t CallFunc_Max_ReturnValue_2;  // 0x60 (0x60)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x64 (0x64)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool CallFunc_Check_Target_Has_State_Tags_To_Lose_From_Array_Result : 1;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)
	struct ADCPlayerCharacterBase* K2Node_DynamicCast_AsDCPlayer_Character_Base;  // 0x70 (0x70)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x78 (0x78)
	char pad_121[3];  // 0x79 (0x79)
	int32_t Temp_int_Loop_Counter_Variable_2;  // 0x7C (0x7C)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_4;  // 0x80 (0x80)
	char pad_132_1 : 7;  // 0x84 (0x84)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue_2 : 1;  // 0x84 (0x84)
	char pad_133[3];  // 0x85 (0x85)
	int32_t Temp_int_Array_Index_Variable_2;  // 0x88 (0x88)
	char pad_140[4];  // 0x8C (0x8C)
	struct ADCCharacterBase* CallFunc_Array_Get_Item_2;  // 0x90 (0x90)
	int32_t CallFunc_Array_AddUnique_ReturnValue_2;  // 0x98 (0x98)
	char pad_156_1 : 7;  // 0x9C (0x9C)
	bool CallFunc_Check_Target_Has_State_Tags_To_Lose_From_Array_Result_2 : 1;  // 0x9C (0x9C)
	char pad_157[3];  // 0x9D (0x9D)
	struct ADCPlayerCharacterBase* K2Node_DynamicCast_AsDCPlayer_Character_Base_2;  // 0xA0 (0xA0)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0xA8 (0xA8)
	char pad_169_1 : 7;  // 0xA9 (0xA9)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0xA9 (0xA9)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Get Max Distance From Perception
struct FGet Max Distance From Perception
{
	struct ABP_DCMonsterBaseWithOptions_C* Monster BP;  // 0x0 (0x0)
	enum class E_DistanceFromVariables Get Distance From;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	double Default Distance;  // 0x10 (0x10)
	struct UObject* __WorldContext;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool Result : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	double Return Value;  // 0x28 (0x28)
	struct AAIController* CallFunc_GetAIController_ReturnValue;  // 0x30 (0x30)
	struct UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue;  // 0x38 (0x38)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	float CallFunc_GetLoseSightRange_ReturnValue;  // 0x44 (0x44)
	float CallFunc_GetSightRange_ReturnValue;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)
	double K2Node_FunctionResult_Return_Value_ImplicitCast;  // 0x50 (0x50)
	double K2Node_FunctionResult_Return_Value_ImplicitCast_2;  // 0x58 (0x58)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Get Number Of Active Players In Recognition Area
struct FGet Number Of Active Players In Recognition Area
{
	struct TArray<struct AActor*> Enemies In Recog Area;  // 0x0 (0x0)
	struct TArray<struct AActor*> Lost Enemies In Recog Area;  // 0x10 (0x10)
	struct UObject* __WorldContext;  // 0x20 (0x20)
	int32_t Number Of Players;  // 0x28 (0x28)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x2C (0x2C)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x30 (0x30)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x34 (0x34)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_2;  // 0x38 (0x38)
	int32_t CallFunc_Max_ReturnValue;  // 0x3C (0x3C)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x44 (0x44)
	int32_t CallFunc_Array_Length_ReturnValue_3;  // 0x48 (0x48)
	int32_t Temp_int_Array_Index_Variable;  // 0x4C (0x4C)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_3;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)
	struct AActor* CallFunc_Array_Get_Item;  // 0x58 (0x58)
	int32_t CallFunc_Max_ReturnValue_2;  // 0x60 (0x60)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x64 (0x64)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool CallFunc_Check_Target_Has_State_Tags_To_Lose_From_Array_Result : 1;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)
	struct ADCPlayerCharacterBase* K2Node_DynamicCast_AsDCPlayer_Character_Base;  // 0x70 (0x70)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x78 (0x78)
	char pad_121[3];  // 0x79 (0x79)
	int32_t Temp_int_Loop_Counter_Variable_2;  // 0x7C (0x7C)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_4;  // 0x80 (0x80)
	char pad_132_1 : 7;  // 0x84 (0x84)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue_2 : 1;  // 0x84 (0x84)
	char pad_133[3];  // 0x85 (0x85)
	int32_t Temp_int_Array_Index_Variable_2;  // 0x88 (0x88)
	char pad_140[4];  // 0x8C (0x8C)
	struct AActor* CallFunc_Array_Get_Item_2;  // 0x90 (0x90)
	int32_t CallFunc_Array_AddUnique_ReturnValue_2;  // 0x98 (0x98)
	char pad_156_1 : 7;  // 0x9C (0x9C)
	bool CallFunc_Check_Target_Has_State_Tags_To_Lose_From_Array_Result_2 : 1;  // 0x9C (0x9C)
	char pad_157[3];  // 0x9D (0x9D)
	struct ADCPlayerCharacterBase* K2Node_DynamicCast_AsDCPlayer_Character_Base_2;  // 0xA0 (0xA0)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0xA8 (0xA8)
	char pad_169_1 : 7;  // 0xA9 (0xA9)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0xA9 (0xA9)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Get Projectile Relative Spawn Transform
struct FGet Projectile Relative Spawn Transform
{
	struct ADCCharacterBase* Start Actor;  // 0x0 (0x0)
	struct FVector Start Location;  // 0x8 (0x8)
	uint8_t Hit Box Type;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct TArray<struct FVector> Spawn Location;  // 0x28 (0x28)
	struct TArray<struct FRotator> Shooting Direction;  // 0x38 (0x38)
	struct UObject* __WorldContext;  // 0x48 (0x48)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool Result : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)
	struct TArray<struct FVector> Spawn Transform Location;  // 0x58 (0x58)
	struct TArray<struct FRotator> Spawn Transform Rotation;  // 0x68 (0x68)
	struct FVector Local Start Location;  // 0x78 (0x78)
	struct TArray<struct FRotator> Temp Spawn Transform Rotation Projectile;  // 0x90 (0x90)
	struct TArray<struct FVector> Temp Spawn Transform Location Projectile;  // 0xA0 (0xA0)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0xB0 (0xB0)
	char pad_180_1 : 7;  // 0xB4 (0xB4)
	bool CallFunc_NotEqual_ByteByte_ReturnValue : 1;  // 0xB4 (0xB4)
	char pad_181[3];  // 0xB5 (0xB5)
	struct FVector CallFunc_GetHitBoxLocation_Location;  // 0xB8 (0xB8)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool CallFunc_GetHitBoxLocation_ReturnValue : 1;  // 0xD0 (0xD0)
	char pad_209[7];  // 0xD1 (0xD1)
	struct FVector CallFunc_GetActorUpVector_ReturnValue;  // 0xD8 (0xD8)
	struct FVector CallFunc_GetActorRightVector_ReturnValue;  // 0xF0 (0xF0)
	struct FVector CallFunc_GetActorForwardVector_ReturnValue;  // 0x108 (0x108)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x120 (0x120)
	float CallFunc_BreakRotator_Roll;  // 0x138 (0x138)
	float CallFunc_BreakRotator_Pitch;  // 0x13C (0x13C)
	float CallFunc_BreakRotator_Yaw;  // 0x140 (0x140)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x144 (0x144)
	int32_t Temp_int_Array_Index_Variable;  // 0x148 (0x148)
	char pad_332_1 : 7;  // 0x14C (0x14C)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x14C (0x14C)
	char pad_333[3];  // 0x14D (0x14D)
	struct FVector CallFunc_Array_Get_Item;  // 0x150 (0x150)
	double CallFunc_BreakVector_X;  // 0x168 (0x168)
	double CallFunc_BreakVector_Y;  // 0x170 (0x170)
	double CallFunc_BreakVector_Z;  // 0x178 (0x178)
	struct FRotator CallFunc_Array_Get_Item_2;  // 0x180 (0x180)
	struct FVector CallFunc_Multiply_VectorFloat_ReturnValue;  // 0x198 (0x198)
	float CallFunc_BreakRotator_Roll_2;  // 0x1B0 (0x1B0)
	float CallFunc_BreakRotator_Pitch_2;  // 0x1B4 (0x1B4)
	float CallFunc_BreakRotator_Yaw_2;  // 0x1B8 (0x1B8)
	char pad_444[4];  // 0x1BC (0x1BC)
	struct FVector CallFunc_Multiply_VectorFloat_ReturnValue_2;  // 0x1C0 (0x1C0)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x1D8 (0x1D8)
	double CallFunc_Add_DoubleDouble_ReturnValue_2;  // 0x1E0 (0x1E0)
	double CallFunc_Add_DoubleDouble_ReturnValue_3;  // 0x1E8 (0x1E8)
	struct FVector CallFunc_Multiply_VectorFloat_ReturnValue_3;  // 0x1F0 (0x1F0)
	struct FRotator CallFunc_MakeRotator_ReturnValue;  // 0x208 (0x208)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x220 (0x220)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_2;  // 0x238 (0x238)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_3;  // 0x250 (0x250)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x268 (0x268)
	char pad_620[4];  // 0x26C (0x26C)
	double CallFunc_Add_DoubleDouble_B_ImplicitCast;  // 0x270 (0x270)
	double CallFunc_Add_DoubleDouble_B_ImplicitCast_2;  // 0x278 (0x278)
	double CallFunc_Add_DoubleDouble_B_ImplicitCast_3;  // 0x280 (0x280)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast;  // 0x288 (0x288)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast_2;  // 0x290 (0x290)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast_3;  // 0x298 (0x298)
	float CallFunc_MakeRotator_Yaw_ImplicitCast;  // 0x2A0 (0x2A0)
	float CallFunc_MakeRotator_Pitch_ImplicitCast;  // 0x2A4 (0x2A4)
	float CallFunc_MakeRotator_Roll_ImplicitCast;  // 0x2A8 (0x2A8)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Get Target Array
struct FGet Target Array
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	enum class E_SensorType Get List From;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool Get From CombatArea : 1;  // 0x9 (0x9)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool Get Target Has Aggro Only : 1;  // 0xA (0xA)
	char pad_11[5];  // 0xB (0xB)
	struct UObject* __WorldContext;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool Return Value : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x20 (0x20)
	struct TArray<struct ADCCharacterBase*> LocalEnemiesInCombatArea;  // 0x30 (0x30)
	struct TArray<struct ADCCharacterBase*> LocalTargetArray;  // 0x40 (0x40)
	struct ADCMonsterBase* ControlledPawn;  // 0x50 (0x50)
	enum class E_SensorType Get List From Sensor;  // 0x58 (0x58)
	char pad_89_1 : 7;  // 0x59 (0x59)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x59 (0x59)
	char pad_90_1 : 7;  // 0x5A (0x5A)
	bool K2Node_SwitchEnum_CmpSuccess_2 : 1;  // 0x5A (0x5A)
	char pad_91[5];  // 0x5B (0x5B)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x60 (0x60)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options_2;  // 0x70 (0x70)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x78 (0x78)
	char pad_121_1 : 7;  // 0x79 (0x79)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x79 (0x79)
	char pad_122[6];  // 0x7A (0x7A)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options_3;  // 0x80 (0x80)
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x88 (0x88)
	char pad_137_1 : 7;  // 0x89 (0x89)
	bool CallFunc_Filter_Target_Has_Aggro_Return_Value : 1;  // 0x89 (0x89)
	char pad_138[6];  // 0x8A (0x8A)
	struct TArray<struct ADCCharacterBase*> CallFunc_Filter_Target_Has_Aggro_Output_TargetArray;  // 0x90 (0x90)
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0xA0 (0xA0)
	char pad_161_1 : 7;  // 0xA1 (0xA1)
	bool CallFunc_Filter_Target_Has_Aggro_Return_Value_2 : 1;  // 0xA1 (0xA1)
	char pad_162[6];  // 0xA2 (0xA2)
	struct TArray<struct ADCCharacterBase*> CallFunc_Filter_Target_Has_Aggro_Output_TargetArray_2;  // 0xA8 (0xA8)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool CallFunc_Filter_Target_Has_Aggro_Return_Value_3 : 1;  // 0xB8 (0xB8)
	char pad_185[7];  // 0xB9 (0xB9)
	struct TArray<struct ADCCharacterBase*> CallFunc_Filter_Target_Has_Aggro_Output_TargetArray_3;  // 0xC0 (0xC0)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0xD0 (0xD0)
	char pad_212_1 : 7;  // 0xD4 (0xD4)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0xD4 (0xD4)
	char pad_213_1 : 7;  // 0xD5 (0xD5)
	bool CallFunc_Filter_Target_Has_Aggro_Return_Value_4 : 1;  // 0xD5 (0xD5)
	char pad_214[2];  // 0xD6 (0xD6)
	struct TArray<struct ADCCharacterBase*> CallFunc_Filter_Target_Has_Aggro_Output_TargetArray_4;  // 0xD8 (0xD8)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0xE8 (0xE8)
	char pad_236_1 : 7;  // 0xEC (0xEC)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue_2 : 1;  // 0xEC (0xEC)
	char pad_237_1 : 7;  // 0xED (0xED)
	bool CallFunc_GetAllTargetArray_ReturnValue : 1;  // 0xED (0xED)
	char pad_238_1 : 7;  // 0xEE (0xEE)
	bool CallFunc_GetAllTargetArray_ReturnValue_2 : 1;  // 0xEE (0xEE)
	char pad_239_1 : 7;  // 0xEF (0xEF)
	bool CallFunc_GetSightTargetArray_ReturnValue : 1;  // 0xEF (0xEF)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool CallFunc_GetHearingTargetArray_ReturnValue : 1;  // 0xF0 (0xF0)
	char pad_241_1 : 7;  // 0xF1 (0xF1)
	bool CallFunc_GetDamageTargetArray_ReturnValue : 1;  // 0xF1 (0xF1)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Kill Actor
struct FKill Actor
{
	struct AActor* Actor;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x8 (0x8)
	struct TArray<struct FPrimaryAssetId> K2Node_MakeArray_Array;  // 0x10 (0x10)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Launch Enemy
struct FLaunch Enemy
{
	struct FGameplayEventData Event Data;  // 0x0 (0x0)
	char pad_176_1 : 7;  // 0xB0 (0xB0)
	bool Launch Weapon Direction : 1;  // 0xB0 (0xB0)
	char pad_177[7];  // 0xB1 (0xB1)
	double XY Value;  // 0xB8 (0xB8)
	double Z Value;  // 0xC0 (0xC0)
	struct UObject* __WorldContext;  // 0xC8 (0xC8)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0xD0 (0xD0)
	struct FVector CallFunc_MakeVector_ReturnValue_2;  // 0xE8 (0xE8)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x100 (0x100)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_2;  // 0x108 (0x108)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue;  // 0x110 (0x110)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue_2;  // 0x128 (0x128)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_3;  // 0x140 (0x140)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue_3;  // 0x148 (0x148)
	char pad_352_1 : 7;  // 0x160 (0x160)
	bool CallFunc_EffectContextIsValid_ReturnValue : 1;  // 0x160 (0x160)
	char pad_353[7];  // 0x161 (0x161)
	struct FHitResult CallFunc_EffectContextGetHitResult_ReturnValue;  // 0x168 (0x168)
	char pad_592_1 : 7;  // 0x250 (0x250)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x250 (0x250)
	char pad_593_1 : 7;  // 0x251 (0x251)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x251 (0x251)
	char pad_594[2];  // 0x252 (0x252)
	float CallFunc_BreakHitResult_Time;  // 0x254 (0x254)
	float CallFunc_BreakHitResult_Distance;  // 0x258 (0x258)
	char pad_604[4];  // 0x25C (0x25C)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x260 (0x260)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x278 (0x278)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x290 (0x290)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x2A8 (0x2A8)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x2C0 (0x2C0)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x2C8 (0x2C8)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x2D0 (0x2D0)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x2D8 (0x2D8)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x2E0 (0x2E0)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x2E8 (0x2E8)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x2EC (0x2EC)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x2F0 (0x2F0)
	char pad_756[4];  // 0x2F4 (0x2F4)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x2F8 (0x2F8)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x310 (0x310)
	struct FHitResult CallFunc_EffectContextGetHitResult_ReturnValue_2;  // 0x328 (0x328)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x410 (0x410)
	char pad_1064_1 : 7;  // 0x428 (0x428)
	bool CallFunc_BreakHitResult_bBlockingHit_2 : 1;  // 0x428 (0x428)
	char pad_1065_1 : 7;  // 0x429 (0x429)
	bool CallFunc_BreakHitResult_bInitialOverlap_2 : 1;  // 0x429 (0x429)
	char pad_1066[2];  // 0x42A (0x42A)
	float CallFunc_BreakHitResult_Time_2;  // 0x42C (0x42C)
	float CallFunc_BreakHitResult_Distance_2;  // 0x430 (0x430)
	char pad_1076[4];  // 0x434 (0x434)
	struct FVector CallFunc_BreakHitResult_Location_2;  // 0x438 (0x438)
	struct FVector CallFunc_BreakHitResult_ImpactPoint_2;  // 0x450 (0x450)
	struct FVector CallFunc_BreakHitResult_Normal_2;  // 0x468 (0x468)
	struct FVector CallFunc_BreakHitResult_ImpactNormal_2;  // 0x480 (0x480)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2;  // 0x498 (0x498)
	struct AActor* CallFunc_BreakHitResult_HitActor_2;  // 0x4A0 (0x4A0)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2;  // 0x4A8 (0x4A8)
	struct FName CallFunc_BreakHitResult_HitBoneName_2;  // 0x4B0 (0x4B0)
	struct FName CallFunc_BreakHitResult_BoneName_2;  // 0x4B8 (0x4B8)
	int32_t CallFunc_BreakHitResult_HitItem_2;  // 0x4C0 (0x4C0)
	int32_t CallFunc_BreakHitResult_ElementIndex_2;  // 0x4C4 (0x4C4)
	int32_t CallFunc_BreakHitResult_FaceIndex_2;  // 0x4C8 (0x4C8)
	char pad_1228[4];  // 0x4CC (0x4CC)
	struct FVector CallFunc_BreakHitResult_TraceStart_2;  // 0x4D0 (0x4D0)
	struct FVector CallFunc_BreakHitResult_TraceEnd_2;  // 0x4E8 (0x4E8)
	struct FVector CallFunc_Normal_ReturnValue;  // 0x500 (0x500)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x518 (0x518)
	char pad_1312_1 : 7;  // 0x520 (0x520)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x520 (0x520)
	char pad_1313[7];  // 0x521 (0x521)
	double CallFunc_BreakVector_X;  // 0x528 (0x528)
	double CallFunc_BreakVector_Y;  // 0x530 (0x530)
	double CallFunc_BreakVector_Z;  // 0x538 (0x538)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x540 (0x540)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x558 (0x558)
	double CallFunc_BreakVector_X_2;  // 0x560 (0x560)
	double CallFunc_BreakVector_Y_2;  // 0x568 (0x568)
	double CallFunc_BreakVector_Z_2;  // 0x570 (0x570)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base_2;  // 0x578 (0x578)
	char pad_1408_1 : 7;  // 0x580 (0x580)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x580 (0x580)
	char pad_1409[7];  // 0x581 (0x581)
	struct FVector CallFunc_MakeVector_ReturnValue_3;  // 0x588 (0x588)
	struct FVector CallFunc_Normal_ReturnValue_2;  // 0x5A0 (0x5A0)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_3;  // 0x5B8 (0x5B8)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x5D0 (0x5D0)
	double CallFunc_BreakVector_X_3;  // 0x5E8 (0x5E8)
	double CallFunc_BreakVector_Y_3;  // 0x5F0 (0x5F0)
	double CallFunc_BreakVector_Z_3;  // 0x5F8 (0x5F8)
	double CallFunc_BreakVector_X_4;  // 0x600 (0x600)
	double CallFunc_BreakVector_Y_4;  // 0x608 (0x608)
	double CallFunc_BreakVector_Z_4;  // 0x610 (0x610)
	struct FVector CallFunc_MakeVector_ReturnValue_4;  // 0x618 (0x618)
	struct FVector CallFunc_MakeVector_ReturnValue_5;  // 0x630 (0x630)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base_3;  // 0x648 (0x648)
	char pad_1616_1 : 7;  // 0x650 (0x650)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x650 (0x650)
	char pad_1617[7];  // 0x651 (0x651)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_4;  // 0x658 (0x658)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_5;  // 0x670 (0x670)
	double CallFunc_BreakVector_X_5;  // 0x688 (0x688)
	double CallFunc_BreakVector_Y_5;  // 0x690 (0x690)
	double CallFunc_BreakVector_Z_5;  // 0x698 (0x698)
	double CallFunc_BreakVector_X_6;  // 0x6A0 (0x6A0)
	double CallFunc_BreakVector_Y_6;  // 0x6A8 (0x6A8)
	double CallFunc_BreakVector_Z_6;  // 0x6B0 (0x6B0)
	struct FVector CallFunc_MakeVector_ReturnValue_6;  // 0x6B8 (0x6B8)
	struct FVector CallFunc_MakeVector_ReturnValue_7;  // 0x6D0 (0x6D0)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue;  // 0x6E8 (0x6E8)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue_2;  // 0x700 (0x700)
	struct FVector CallFunc_Normal_ReturnValue_3;  // 0x718 (0x718)
	struct FVector CallFunc_Normal_ReturnValue_4;  // 0x730 (0x730)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue_2;  // 0x748 (0x748)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue_3;  // 0x760 (0x760)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x778 (0x778)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_2;  // 0x790 (0x790)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Remove Timer
struct FRemove Timer
{
	struct ADCMonsterBase* DCMonsterBase;  // 0x0 (0x0)
	int32_t Timer Index;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct UObject* __WorldContext;  // 0x10 (0x10)
	struct FGameplayTagContainer RemoveTag;  // 0x18 (0x18)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool K2Node_SwitchInteger_CmpSuccess : 1;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)
	int32_t CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;  // 0x3C (0x3C)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Set Projectile Spec and Options
struct FSet Projectile Spec and Options
{
	struct UDCGameplayAbilityBase* DCGameplay Ability Base;  // 0x0 (0x0)
	struct AActor* Spawned Projectile;  // 0x8 (0x8)
	struct FGameplayTag Gameplay Tag For Spec;  // 0x10 (0x10)
	double Pierce Count;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool Pierce Obstacle : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	double Decrease Pierce Obstacle Count;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool Homing : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct ADCCharacterBase* Homing Target;  // 0x38 (0x38)
	uint8_t Homing Hit Box Type;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	double Homing Magnitude;  // 0x48 (0x48)
	struct UObject* __WorldContext;  // 0x50 (0x50)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool Result : 1;  // 0x58 (0x58)
	char pad_89[7];  // 0x59 (0x59)
	struct AProjectileActor* Projectile Actor;  // 0x60 (0x60)
	struct ABP_ProjectileActor_C* Temp Projectile Actor;  // 0x68 (0x68)
	struct ADCCharacterBase* Target;  // 0x70 (0x70)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x78 (0x78)
	char pad_121[7];  // 0x79 (0x79)
	struct ABP_ProjectileActor_C* K2Node_DynamicCast_AsBP_Projectile_Actor;  // 0x80 (0x80)
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x88 (0x88)
	char pad_137[3];  // 0x89 (0x89)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x8C (0x8C)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x90 (0x90)
	char pad_148[4];  // 0x94 (0x94)
	struct TArray<struct UBP_DCHitBox_C*> CallFunc_K2_GetComponentsByClass_ReturnValue;  // 0x98 (0x98)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0xA8 (0xA8)
	char pad_172_1 : 7;  // 0xAC (0xAC)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0xAC (0xAC)
	char pad_173[3];  // 0xAD (0xAD)
	int32_t Temp_int_Array_Index_Variable;  // 0xB0 (0xB0)
	char pad_180[4];  // 0xB4 (0xB4)
	struct UBP_DCHitBox_C* CallFunc_Array_Get_Item;  // 0xB8 (0xB8)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue_2 : 1;  // 0xC0 (0xC0)
	char pad_193_1 : 7;  // 0xC1 (0xC1)
	bool Temp_bool_True_if_break_was_hit_Variable : 1;  // 0xC1 (0xC1)
	char pad_194_1 : 7;  // 0xC2 (0xC2)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // [xC2 ([xC2)
	char pad_195_1 : 7;  // 0xC3 (0xC3)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0xC3 (0xC3)
	char pad_196[4];  // 0xC4 (0xC4)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC8 (0xC8)
	float CallFunc_PlayPierce_SetPierceCount_ImplicitCast;  // 0x178 (0x178)
	float CallFunc_PlayPierce_SetObstaclePierceDecrease_ImplicitCast;  // 0x17C (0x17C)
	float CallFunc_SetHomingMagnitude_InHomingMagnitude_ImplicitCast;  // 0x180 (0x180)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Set BB HPRatio
struct FSet BB HPRatio
{
	struct ABP_DCMonsterBaseWithOptions_C* MonsterBase;  // 0x0 (0x0)
	double HPRatio;  // 0x8 (0x8)
	struct UObject* __WorldContext;  // 0x10 (0x10)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x18 (0x18)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x20 (0x20)
	float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast;  // 0x28 (0x28)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Set BB Phase
struct FSet BB Phase
{
	struct ABP_DCMonsterBaseWithOptions_C* MonsterBase;  // 0x0 (0x0)
	int32_t Phase;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct UObject* __WorldContext;  // 0x10 (0x10)
	struct AAIController* CallFunc_GetAIController_ReturnValue;  // 0x18 (0x18)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x20 (0x20)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x30 (0x30)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Set BlackBoard Mode
struct FSet BlackBoard Mode
{
	struct ABP_DCMonsterBaseWithOptions_C* DCMonsterBase;  // 0x0 (0x0)
	enum class E_ModeType Mode Type;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct UObject* __WorldContext;  // 0x10 (0x10)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x18 (0x18)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x2C (0x2C)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Set BlackBoard Mode For Linked Monsters
struct FSet BlackBoard Mode For Linked Monsters
{
	struct TArray<struct ABP_DCMonsterBaseWithOptions_C*> Linked Monster Array;  // 0x0 (0x0)
	enum class E_ModeType Mode Type;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct UObject* __WorldContext;  // 0x18 (0x18)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x20 (0x20)
	int32_t Temp_int_Array_Index_Variable;  // 0x24 (0x24)
	struct ABP_DCMonsterBaseWithOptions_C* CallFunc_Array_Get_Item;  // 0x28 (0x28)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x30 (0x30)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2;  // 0x38 (0x38)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x44 (0x44)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x48 (0x48)
	char pad_73[3];  // 0x49 (0x49)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x4C (0x4C)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x50 (0x50)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Set BlackBoard TargetActor To MonsterBase
struct FSet BlackBoard TargetActor To MonsterBase
{
	struct ABP_DCMonsterBaseWithOptions_C* MonsterBaseWithOptions;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x8 (0x8)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x10 (0x10)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x18 (0x18)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Set Combo Attack
struct FSet Combo Attack
{
	struct UDCGameplayAbilityBase* Gameplay Ability;  // 0x0 (0x0)
	struct UObject* Caster;  // 0x8 (0x8)
	double Sphere Overlap Forward Pos;  // 0x10 (0x10)
	double Sphere Overlap Radius;  // 0x18 (0x18)
	struct FGameplayTag Event Tag;  // 0x20 (0x20)
	double Trigger Ratio;  // 0x28 (0x28)
	struct UObject* __WorldContext;  // 0x30 (0x30)
	struct ADCCharacterBase* Target Enemy;  // 0x38 (0x38)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x40 (0x40)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool Combo Triggered : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)
	struct TArray<struct ADCCharacterBase*> Temp Target Array;  // 0x58 (0x58)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x70 (0x70)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x78 (0x78)
	char pad_124[4];  // 0x7C (0x7C)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue;  // 0x80 (0x80)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x98 (0x98)
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xA0 (0xA0)
	char pad_161[7];  // 0xA1 (0xA1)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0xA8 (0xA8)
	struct ADCCharacterBase* CallFunc_Array_Get_Item;  // 0xC0 (0xC0)
	struct FVector CallFunc_GetForwardVector_ReturnValue;  // 0xC8 (0xC8)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0xE0 (0xE0)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0xF8 (0xF8)
	int32_t Temp_int_Array_Index_Variable;  // 0x110 (0x110)
	char pad_276[4];  // 0x114 (0x114)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x118 (0x118)
	struct ADCCharacterBase* CallFunc_Array_Get_Item_2;  // 0x130 (0x130)
	struct ADCCharacterBase* CallFunc_Array_Get_Item_3;  // 0x138 (0x138)
	struct ADCCharacterBase* CallFunc_Array_Get_Item_4;  // 0x140 (0x140)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x148 (0x148)
	char pad_504_1 : 7;  // 0x1F8 (0x1F8)
	bool CallFunc_SortTargetsByDistance_ReturnValue : 1;  // 0x1F8 (0x1F8)
	char pad_505[7];  // 0x1F9 (0x1F9)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x200 (0x200)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x210 (0x210)
	char pad_536_1 : 7;  // 0x218 (0x218)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x218 (0x218)
	char pad_537[7];  // 0x219 (0x219)
	struct ADCCharacterBase* CallFunc_Array_Get_Item_5;  // 0x220 (0x220)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x228 (0x228)
	struct TArray<struct AActor*> CallFunc_SphereOverlapActors_OutActors;  // 0x238 (0x238)
	char pad_584_1 : 7;  // 0x248 (0x248)
	bool CallFunc_SphereOverlapActors_ReturnValue : 1;  // 0x248 (0x248)
	char pad_585[3];  // 0x249 (0x249)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x24C (0x24C)
	char pad_592_1 : 7;  // 0x250 (0x250)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x250 (0x250)
	char pad_593[7];  // 0x251 (0x251)
	struct AActor* CallFunc_Array_Get_Item_6;  // 0x258 (0x258)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x260 (0x260)
	char pad_616_1 : 7;  // 0x268 (0x268)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x268 (0x268)
	char pad_617[3];  // 0x269 (0x269)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x26C (0x26C)
	float CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast;  // 0x270 (0x270)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Set Debuff Immune
struct FSet Debuff Immune
{
	struct AActor* Actor;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Fear : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool Impact : 1;  // 0x9 (0x9)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool KnockBack : 1;  // 0xA (0xA)
	char pad_11_1 : 7;  // 0xB (0xB)
	bool Trap : 1;  // 0xB (0xB)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool UnableMove : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool Unhealable : 1;  // 0xD (0xD)
	char pad_14[2];  // 0xE (0xE)
	struct UObject* __WorldContext;  // 0x10 (0x10)
	struct FGameplayTag Temp_struct_Variable;  // 0x18 (0x18)
	struct TArray<struct FGameplayTag> CallFunc_Get_Debuff_Immune_Tags_Debuff_Immune_Tags;  // 0x20 (0x20)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x30 (0x30)
	char pad_52_1 : 7;  // 0x34 (0x34)
	bool CallFunc_Array_RemoveItem_ReturnValue : 1;  // 0x34 (0x34)
	char pad_53[3];  // 0x35 (0x35)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x38 (0x38)
	struct FGameplayTag Temp_struct_Variable_3;  // 0x40 (0x40)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool CallFunc_Array_RemoveItem_ReturnValue_2 : 1;  // 0x48 (0x48)
	char pad_73_1 : 7;  // 0x49 (0x49)
	bool CallFunc_Array_RemoveItem_ReturnValue_3 : 1;  // 0x49 (0x49)
	char pad_74[2];  // 0x4A (0x4A)
	int32_t Temp_int_Array_Index_Variable;  // 0x4C (0x4C)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x50 (0x50)
	struct FGameplayTag CallFunc_Array_Get_Item;  // 0x54 (0x54)
	char pad_92_1 : 7;  // 0x5C (0x5C)
	bool CallFunc_AddGameplayTag_ReturnValue : 1;  // 0x5C (0x5C)
	char pad_93_1 : 7;  // 0x5D (0x5D)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x5D (0x5D)
	char pad_94[2];  // 0x5E (0x5E)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x60 (0x60)
	struct FGameplayTag Temp_struct_Variable_4;  // 0x64 (0x64)
	struct FGameplayTag Temp_struct_Variable_5;  // 0x6C (0x6C)
	char pad_116_1 : 7;  // 0x74 (0x74)
	bool CallFunc_Array_RemoveItem_ReturnValue_4 : 1;  // 0x74 (0x74)
	char pad_117_1 : 7;  // 0x75 (0x75)
	bool CallFunc_Array_RemoveItem_ReturnValue_5 : 1;  // 0x75 (0x75)
	char pad_118[2];  // 0x76 (0x76)
	struct FGameplayTag Temp_struct_Variable_6;  // 0x78 (0x78)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool CallFunc_Array_RemoveItem_ReturnValue_6 : 1;  // 0x80 (0x80)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Set Immune To Comeback
struct FSet Immune To Comeback
{
	struct ABP_DCMonsterBaseWithOptions_C* DCMonsterBase;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x8 (0x8)
	struct TArray<struct FPrimaryAssetId> K2Node_MakeArray_Array;  // 0x10 (0x10)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Set Immune To Comeback For Linked Monsters
struct FSet Immune To Comeback For Linked Monsters
{
	struct TArray<struct ABP_DCMonsterBaseWithOptions_C*> Linked Monster Array;  // 0x0 (0x0)
	struct UObject* __WorldContext;  // 0x10 (0x10)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x18 (0x18)
	int32_t Temp_int_Array_Index_Variable;  // 0x1C (0x1C)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct ABP_DCMonsterBaseWithOptions_C* CallFunc_Array_Get_Item;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x30 (0x30)
	char pad_49[3];  // 0x31 (0x31)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x34 (0x34)
	struct TArray<struct FPrimaryAssetId> K2Node_MakeArray_Array;  // 0x38 (0x38)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue;  // 0x48 (0x48)


}; 
 
 // Function MonsterBPLibrary.MonsterBPLibrary_C.Set Target Provider
struct FSet Target Provider
{
	struct ABP_DCMonsterBaseWithOptions_C* Source Target;  // 0x0 (0x0)
	struct UDCGameObjectLinkComponent* DCGame Object Link;  // 0x8 (0x8)
	struct FGameplayTagQuery Provider Object Tag;  // 0x10 (0x10)
	struct UObject* __WorldContext;  // 0x58 (0x58)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool Result : 1;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)
	struct TArray<struct ADCCharacterBase*> LocalProviderArray;  // 0x68 (0x68)
	int32_t Temp_int_Array_Index_Variable;  // 0x78 (0x78)
	char pad_124[4];  // 0x7C (0x7C)
	struct FObjectLinkRequestEvent K2Node_MakeStruct_ObjectLinkRequestEvent;  // 0x80 (0x80)
	struct TArray<struct FObjectLinkResponeEvent> CallFunc_RequestToLinkers_ReturnValue;  // 0x130 (0x130)
	struct FObjectLinkResponeEvent CallFunc_Array_Get_Item;  // 0x140 (0x140)
	char pad_416_1 : 7;  // 0x1A0 (0x1A0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x1A0 (0x1A0)
	char pad_417[3];  // 0x1A1 (0x1A1)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x1A4 (0x1A4)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x1A8 (0x1A8)
	char pad_432_1 : 7;  // 0x1B0 (0x1B0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x1B0 (0x1B0)
	char pad_433[3];  // 0x1B1 (0x1B1)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x1B4 (0x1B4)
	char pad_440_1 : 7;  // 0x1B8 (0x1B8)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x1B8 (0x1B8)
	char pad_441[3];  // 0x1B9 (0x1B9)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x1BC (0x1BC)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x1C0 (0x1C0)
	char pad_456_1 : 7;  // 0x1C8 (0x1C8)
	bool Temp_bool_True_if_break_was_hit_Variable : 1;  // 0x1C8 (0x1C8)
	char pad_457_1 : 7;  // 0x1C9 (0x1C9)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x1C9 (0x1C9)
	char pad_458_1 : 7;  // 0x1CA (0x1CA)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x1CA (0x1CA)
	char pad_459_1 : 7;  // 0x1CB (0x1CB)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x1CB (0x1CB)


}; 
 
 