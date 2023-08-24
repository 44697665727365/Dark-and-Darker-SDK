#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_WarCry.GA_WarCry_C.ExecuteUbergraph_GA_WarCry
struct FExecuteUbergraph_GA_WarCry
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	int32_t Temp_int_Array_Index_Variable;  // 0x10 (0x10)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x14 (0x14)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x20 (0x20)
	struct UObject* CallFunc_GetCurrentSourceObject_ReturnValue;  // 0x28 (0x28)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x30 (0x30)
	struct ASkillActor* K2Node_DynamicCast_AsSkill_Actor;  // 0x48 (0x48)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)
	struct FDesignDataSkill CallFunc_GetDesignDataSkill_ReturnValue;  // 0x58 (0x58)
	char pad_288_1 : 7;  // 0x120 (0x120)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x120 (0x120)
	char pad_289[3];  // 0x121 (0x121)
	float CallFunc_Conv_IntToFloat_ReturnValue;  // 0x124 (0x124)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x128 (0x128)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x138 (0x138)
	struct ADCPlayerCharacterBase* K2Node_DynamicCast_AsDCPlayer_Character_Base;  // 0x140 (0x140)
	char pad_328_1 : 7;  // 0x148 (0x148)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x148 (0x148)
	char pad_329_1 : 7;  // 0x149 (0x149)
	bool CallFunc_K2_HasAuthority_ReturnValue_2 : 1;  // 0x149 (0x149)
	char pad_330[6];  // 0x14A (0x14A)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x150 (0x150)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x200 (0x200)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;  // 0x210 (0x210)
	struct FGameplayTag K2Node_Event_SkillTag;  // 0x218 (0x218)
	struct FGameplayTag K2Node_Event_CooldownTag;  // 0x220 (0x220)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x228 (0x228)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_5;  // 0x238 (0x238)
	struct TArray<struct AActor*> CallFunc_SphereOverlapActors_OutActors;  // 0x240 (0x240)
	char pad_592_1 : 7;  // 0x250 (0x250)
	bool CallFunc_SphereOverlapActors_ReturnValue : 1;  // 0x250 (0x250)
	char pad_593[7];  // 0x251 (0x251)
	struct USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue;  // 0x258 (0x258)
	struct AActor* CallFunc_Array_Get_Item;  // 0x260 (0x260)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x268 (0x268)
	char pad_832_1 : 7;  // 0x340 (0x340)
	bool CallFunc_NotEqual_ObjectObject_ReturnValue : 1;  // 0x340 (0x340)
	char pad_833[7];  // 0x341 (0x341)
	struct ADCPlayerCharacterBase* K2Node_DynamicCast_AsDCPlayer_Character_Base_2;  // 0x348 (0x348)
	char pad_848_1 : 7;  // 0x350 (0x350)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x350 (0x350)
	char pad_849_1 : 7;  // 0x351 (0x351)
	bool CallFunc_IsSameTeamWithPlayerCharacter_ReturnValue : 1;  // 0x351 (0x351)
	char pad_850[6];  // 0x352 (0x352)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData_2;  // 0x358 (0x358)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_2;  // 0x408 (0x408)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x418 (0x418)
	char pad_1052_1 : 7;  // 0x41C (0x41C)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x41C (0x41C)


}; 
 
 // Function GA_WarCry.GA_WarCry_C.ServerOnSkillActivate
// Size: 0x10(Inherited: 0x10)
struct FServerOnSkillActivate : FServerOnSkillActivate
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	struct FGameplayTag CooldownTag;  // 0x8 (0x8)


}; 
 
 