#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GoblinMage_CastingBuff.GA_GoblinMage_CastingBuff_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinMage_CastingBuff.GA_GoblinMage_CastingBuff_C.EventReceived_F92A268B48691D033B80078AEF0C891E
struct FEventReceived_F92A268B48691D033B80078AEF0C891E
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinMage_CastingBuff.GA_GoblinMage_CastingBuff_C.ExecuteUbergraph_GA_GoblinMage_CastingBuff
struct FExecuteUbergraph_GA_GoblinMage_CastingBuff
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x8 (0x8)
	struct FGameplayEventData Temp_struct_Variable;  // 0xB8 (0xB8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x168 (0x168)
	char pad_368_1 : 7;  // 0x170 (0x170)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x170 (0x170)
	char pad_369[7];  // 0x171 (0x171)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x178 (0x178)
	char pad_392_1 : 7;  // 0x188 (0x188)
	bool Temp_bool_Variable : 1;  // 0x188 (0x188)
	char pad_393[7];  // 0x189 (0x189)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x190 (0x190)
	char pad_408[8];  // 0x198 (0x198)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x1A0 (0x1A0)
	struct FVector CallFunc_BreakTransform_Location;  // 0x200 (0x200)
	struct FRotator CallFunc_BreakTransform_Rotation;  // 0x218 (0x218)
	struct FVector CallFunc_BreakTransform_Scale;  // 0x230 (0x230)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x248 (0x248)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x24C (0x24C)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x25C (0x25C)
	char pad_608_1 : 7;  // 0x260 (0x260)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x260 (0x260)
	char pad_609[3];  // 0x261 (0x261)
	int32_t Temp_int_Array_Index_Variable;  // 0x264 (0x264)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x268 (0x268)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x318 (0x318)
	struct TArray<struct AActor*> CallFunc_SphereOverlapActors_OutActors;  // 0x328 (0x328)
	char pad_824_1 : 7;  // 0x338 (0x338)
	bool CallFunc_SphereOverlapActors_ReturnValue : 1;  // 0x338 (0x338)
	char pad_825_1 : 7;  // 0x339 (0x339)
	bool K2Node_Event_bWasCancelled : 1;  // 0x339 (0x339)
	char pad_826[6];  // 0x33A (0x33A)
	struct AActor* CallFunc_Array_Get_Item;  // 0x340 (0x340)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x348 (0x348)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;  // 0x3F8 (0x3F8)
	char pad_1032_1 : 7;  // 0x408 (0x408)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x408 (0x408)
	char pad_1033[7];  // 0x409 (0x409)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x410 (0x410)
	char pad_1056_1 : 7;  // 0x420 (0x420)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x420 (0x420)
	char pad_1057[3];  // 0x421 (0x421)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x424 (0x424)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_2;  // 0x428 (0x428)
	char pad_1068[4];  // 0x42C (0x42C)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x430 (0x430)
	int32_t CallFunc_Max_ReturnValue;  // 0x438 (0x438)
	char pad_1084[4];  // 0x43C (0x43C)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x440 (0x440)
	char pad_1096_1 : 7;  // 0x448 (0x448)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x448 (0x448)


}; 
 
 // Function GA_GoblinMage_CastingBuff.GA_GoblinMage_CastingBuff_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 