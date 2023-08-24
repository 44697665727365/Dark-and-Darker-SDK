#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SavageRoar.GA_SavageRoar_C.ExecuteUbergraph_GA_SavageRoar
struct FExecuteUbergraph_GA_SavageRoar
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue;  // 0x10 (0x10)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x18 (0x18)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x20 (0x20)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0xF8 (0xF8)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x110 (0x110)
	struct UObject* CallFunc_GetCurrentSourceObject_ReturnValue;  // 0x120 (0x120)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x128 (0x128)
	char pad_300[4];  // 0x12C (0x12C)
	struct ASkillActor* K2Node_DynamicCast_AsSkill_Actor;  // 0x130 (0x130)
	char pad_312_1 : 7;  // 0x138 (0x138)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x138 (0x138)
	char pad_313[3];  // 0x139 (0x139)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x13C (0x13C)
	struct FDesignDataSkill CallFunc_GetDesignDataSkill_ReturnValue;  // 0x140 (0x140)
	float CallFunc_Conv_IntToFloat_ReturnValue;  // 0x208 (0x208)
	int32_t Temp_int_Array_Index_Variable;  // 0x20C (0x20C)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x210 (0x210)
	struct FGameplayTag K2Node_Event_SkillTag;  // 0x218 (0x218)
	struct FGameplayTag K2Node_Event_CooldownTag;  // 0x220 (0x220)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x228 (0x228)
	struct TArray<struct AActor*> CallFunc_SphereOverlapActors_OutActors;  // 0x238 (0x238)
	char pad_584_1 : 7;  // 0x248 (0x248)
	bool CallFunc_SphereOverlapActors_ReturnValue : 1;  // 0x248 (0x248)
	char pad_585[3];  // 0x249 (0x249)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x24C (0x24C)
	struct AActor* CallFunc_Array_Get_Item;  // 0x250 (0x250)
	char pad_600_1 : 7;  // 0x258 (0x258)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x258 (0x258)
	char pad_601_1 : 7;  // 0x259 (0x259)
	bool CallFunc_NotEqual_ObjectObject_ReturnValue : 1;  // 0x259 (0x259)
	char pad_602[6];  // 0x25A (0x25A)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x260 (0x260)
	struct ADCMonsterBase* K2Node_DynamicCast_AsDCMonster_Base;  // 0x310 (0x310)
	char pad_792_1 : 7;  // 0x318 (0x318)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x318 (0x318)
	char pad_793[7];  // 0x319 (0x319)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x320 (0x320)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData_2;  // 0x330 (0x330)
	struct ADCPlayerCharacterBase* K2Node_DynamicCast_AsDCPlayer_Character_Base;  // 0x3E0 (0x3E0)
	char pad_1000_1 : 7;  // 0x3E8 (0x3E8)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x3E8 (0x3E8)
	char pad_1001[7];  // 0x3E9 (0x3E9)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_2;  // 0x3F0 (0x3F0)
	char pad_1024_1 : 7;  // 0x400 (0x400)
	bool CallFunc_IsSameTeamWithPlayerCharacter_ReturnValue : 1;  // 0x400 (0x400)
	char pad_1025_1 : 7;  // 0x401 (0x401)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x401 (0x401)


}; 
 
 // Function GA_SavageRoar.GA_SavageRoar_C.ServerOnSkillActivate
// Size: 0x10(Inherited: 0x10)
struct FServerOnSkillActivate : FServerOnSkillActivate
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	struct FGameplayTag CooldownTag;  // 0x8 (0x8)


}; 
 
 