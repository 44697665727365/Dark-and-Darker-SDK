#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Meditation.GA_Meditation_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_Meditation.GA_Meditation_C.ExecuteUbergraph_GA_Meditation
struct FExecuteUbergraph_GA_Meditation
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FPrimaryAssetId CallFunc_GetPrimaryAssetIdFromObject_ReturnValue;  // 0x4 (0x4)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	int32_t CallFunc_GetConstantInt32_ReturnValue;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FMsgSkillRechargeRequest K2Node_MakeStruct_MsgSkillRechargeRequest;  // 0x20 (0x20)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x40 (0x40)
	struct UObject* CallFunc_GetCurrentSourceObject_ReturnValue;  // 0x48 (0x48)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface;  // 0x50 (0x50)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)
	struct ASkillActor* K2Node_DynamicCast_AsSkill_Actor;  // 0x68 (0x68)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x70 (0x70)
	char pad_113_1 : 7;  // 0x71 (0x71)
	bool CallFunc_IsLocallyControlled_ReturnValue : 1;  // 0x71 (0x71)
	char pad_114[6];  // 0x72 (0x72)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x78 (0x78)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x80 (0x80)
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool K2Node_Event_bWasCancelled : 1;  // 0x88 (0x88)
	char pad_137_1 : 7;  // 0x89 (0x89)
	bool CallFunc_K2_HasAuthority_ReturnValue_2 : 1;  // 0x89 (0x89)
	char pad_138[6];  // 0x8A (0x8A)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x90 (0x90)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x140 (0x140)
	struct FGameplayCueParameters K2Node_Event_CueParams;  // 0x1F0 (0x1F0)
	struct FPrimaryAssetId CallFunc_GetPrimaryAssetIdFromObject_ReturnValue_2;  // 0x2C8 (0x2C8)
	int32_t CallFunc_GetConstantInt32_ReturnValue_2;  // 0x2D8 (0x2D8)
	char pad_732[4];  // 0x2DC (0x2DC)
	struct FMsgSpellRecharge K2Node_MakeStruct_MsgSpellRecharge;  // 0x2E0 (0x2E0)


}; 
 
 // Function GA_Meditation.GA_Meditation_C.ServerOnChannelingAction_BP
// Size: 0x188(Inherited: 0x188)
struct FServerOnChannelingAction_BP : FServerOnChannelingAction_BP
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)
	struct FGameplayCueParameters CueParams;  // 0xB0 (0xB0)


}; 
 
 // Function GA_Meditation.GA_Meditation_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 