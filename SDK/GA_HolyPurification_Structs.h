#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_HolyPurification.GA_HolyPurification_C.ServerOnSkillActivate
// Size: 0x10(Inherited: 0x10)
struct FServerOnSkillActivate : FServerOnSkillActivate
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	struct FGameplayTag CooldownTag;  // 0x8 (0x8)


}; 
 
 // Function GA_HolyPurification.GA_HolyPurification_C.ExecuteUbergraph_GA_HolyPurification
struct FExecuteUbergraph_GA_HolyPurification
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag K2Node_Event_SkillTag;  // 0x4 (0x4)
	struct FGameplayTag K2Node_Event_CooldownTag;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x18 (0x18)
	struct UObject* CallFunc_GetCurrentSourceObject_ReturnValue;  // 0x20 (0x20)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x28 (0x28)
	struct ASkillActor* K2Node_DynamicCast_AsSkill_Actor;  // 0x40 (0x40)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x48 (0x48)
	char pad_73[3];  // 0x49 (0x49)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x4C (0x4C)
	struct FDesignDataSkill CallFunc_GetDesignDataSkill_ReturnValue;  // 0x50 (0x50)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x118 (0x118)
	float CallFunc_Conv_IntToFloat_ReturnValue;  // 0x11C (0x11C)
	struct TArray<struct FGameplayTag> K2Node_MakeArray_Array;  // 0x120 (0x120)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x130 (0x130)
	struct FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;  // 0x138 (0x138)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x158 (0x158)
	int32_t Temp_int_Array_Index_Variable;  // 0x160 (0x160)
	char pad_356[4];  // 0x164 (0x164)
	struct USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue;  // 0x168 (0x168)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x170 (0x170)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x248 (0x248)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array_2;  // 0x258 (0x258)
	struct TArray<struct AActor*> CallFunc_SphereOverlapActors_OutActors;  // 0x268 (0x268)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool CallFunc_SphereOverlapActors_ReturnValue : 1;  // 0x278 (0x278)
	char pad_633[3];  // 0x279 (0x279)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x27C (0x27C)
	struct AActor* CallFunc_Array_Get_Item;  // 0x280 (0x280)
	char pad_648_1 : 7;  // 0x288 (0x288)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x288 (0x288)
	char pad_649[7];  // 0x289 (0x289)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x290 (0x290)
	char pad_664_1 : 7;  // 0x298 (0x298)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x298 (0x298)
	char pad_665[7];  // 0x299 (0x299)
	struct USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_2;  // 0x2A0 (0x2A0)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x2A8 (0x2A8)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue_2;  // 0x358 (0x358)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x430 (0x430)
	char pad_1088_1 : 7;  // 0x440 (0x440)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x440 (0x440)
	char pad_1089[7];  // 0x441 (0x441)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue;  // 0x448 (0x448)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_self_CastInput;  // 0x450 (0x450)
	char pad_1120_1 : 7;  // 0x460 (0x460)
	bool CallFunc_HasAllMatchingGameplayTags_ReturnValue : 1;  // 0x460 (0x460)


}; 
 
 