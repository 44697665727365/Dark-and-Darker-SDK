#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Sanctuary.GA_Sanctuary_C.AbilityActivated
// Size: 0xB1(Inherited: 0xB8)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)
	char pad_360_1 : 7;  // 0x168 (0x168)
	bool bIsSocketSightBlocked : 1;  // 0xB0 (0xB0)


}; 
 
 // Function GA_Sanctuary.GA_Sanctuary_C.ExecuteUbergraph_GA_Sanctuary
struct FExecuteUbergraph_GA_Sanctuary
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool Temp_bool_Variable : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	int32_t Temp_int_Array_Index_Variable;  // 0x1C (0x1C)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x28 (0x28)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool K2Node_Event_bIsSocketSightBlocked : 1;  // 0xD8 (0xD8)
	char pad_217[3];  // 0xD9 (0xD9)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0xDC (0xDC)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xE0 (0xE0)
	struct UObject* CallFunc_GetCurrentSourceObject_ReturnValue;  // 0xE8 (0xE8)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xF0 (0xF0)
	char pad_241[7];  // 0xF1 (0xF1)
	struct ASpellActor* K2Node_DynamicCast_AsSpell_Actor;  // 0xF8 (0xF8)
	char pad_256_1 : 7;  // 0x100 (0x100)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x100 (0x100)
	char pad_257[7];  // 0x101 (0x101)
	struct FDesignDataSpell CallFunc_GetDesignDataSpell_ReturnValue;  // 0x108 (0x108)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x1D0 (0x1D0)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x1E8 (0x1E8)
	float CallFunc_Conv_IntToFloat_ReturnValue;  // 0x1F8 (0x1F8)
	char pad_508[4];  // 0x1FC (0x1FC)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x200 (0x200)
	struct TArray<struct AActor*> CallFunc_SphereOverlapActors_OutActors;  // 0x208 (0x208)
	char pad_536_1 : 7;  // 0x218 (0x218)
	bool CallFunc_SphereOverlapActors_ReturnValue : 1;  // 0x218 (0x218)
	char pad_537[7];  // 0x219 (0x219)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x220 (0x220)
	struct AActor* CallFunc_Array_Get_Item;  // 0x228 (0x228)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x230 (0x230)
	char pad_564[4];  // 0x234 (0x234)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;  // 0x238 (0x238)
	char pad_584_1 : 7;  // 0x248 (0x248)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x248 (0x248)
	char pad_585_1 : 7;  // 0x249 (0x249)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x249 (0x249)
	char pad_586_1 : 7;  // 0x24A (0x24A)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x24A (0x24A)
	char pad_587[5];  // 0x24B (0x24B)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x250 (0x250)
	char pad_600_1 : 7;  // 0x258 (0x258)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x258 (0x258)
	char pad_601[7];  // 0x259 (0x259)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x260 (0x260)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x310 (0x310)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x320 (0x320)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_2;  // 0x3F8 (0x3F8)


}; 
 
 