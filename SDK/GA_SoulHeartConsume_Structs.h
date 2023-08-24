#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SoulHeartConsume.GA_SoulHeartConsume_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_SoulHeartConsume.GA_SoulHeartConsume_C.ExecuteUbergraph_GA_SoulHeartConsume
struct FExecuteUbergraph_GA_SoulHeartConsume
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FPrimaryAssetId CallFunc_GetPrimaryAssetIdFromObject_ReturnValue;  // 0x4 (0x4)
	float CallFunc_GetConstantFloat_ReturnValue;  // 0x14 (0x14)
	struct FDCGameplayEffectSetByCallerData K2Node_MakeStruct_DCGameplayEffectSetByCallerData;  // 0x18 (0x18)
	char pad_36[4];  // 0x24 (0x24)
	struct AGameModeBase* CallFunc_GetGameMode_ReturnValue;  // 0x28 (0x28)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface;  // 0x30 (0x30)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x48 (0x48)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x50 (0x50)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue;  // 0x100 (0x100)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x108 (0x108)
	char pad_280_1 : 7;  // 0x118 (0x118)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x118 (0x118)
	char pad_281[7];  // 0x119 (0x119)
	struct ABP_AltarOfSacrifice_C* K2Node_DynamicCast_AsBP_Altar_Of_Sacrifice;  // 0x120 (0x120)
	char pad_296_1 : 7;  // 0x128 (0x128)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x128 (0x128)
	char pad_297[7];  // 0x129 (0x129)
	struct FTransform CallFunc_K2_GetComponentToWorld_ReturnValue;  // 0x130 (0x130)
	struct FGameplayEventData Temp_struct_Variable;  // 0x190 (0x190)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x240 (0x240)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x250 (0x250)
	struct ABP_PlayerCharacterDungeon_C* K2Node_DynamicCast_AsBP_Player_Character_Dungeon;  // 0x258 (0x258)
	char pad_608_1 : 7;  // 0x260 (0x260)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x260 (0x260)
	uint8_t CallFunc_GetGender_ReturnValue;  // 0x261 (0x261)
	char pad_610_1 : 7;  // 0x262 (0x262)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x262 (0x262)
	char pad_611[5];  // 0x263 (0x263)
	struct TArray<struct FDCGameplayEffectData> K2Node_MakeArray_Array;  // 0x268 (0x268)
	char pad_632[8];  // 0x278 (0x278)
	struct FMsgCharacterResurrectionRequest K2Node_MakeStruct_MsgCharacterResurrectionRequest;  // 0x280 (0x280)
	int32_t CallFunc_Array_Add_ReturnValue;  // 0x340 (0x340)
	char pad_836[4];  // 0x344 (0x344)
	struct TArray<struct FDCGameplayEffectData> K2Node_MakeArray_Array_2;  // 0x348 (0x348)
	char pad_856[8];  // 0x358 (0x358)
	struct FMsgCharacterResurrectionRequest K2Node_MakeStruct_MsgCharacterResurrectionRequest_2;  // 0x360 (0x360)


}; 
 
 