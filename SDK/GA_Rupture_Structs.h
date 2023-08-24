#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Rupture.GA_Rupture_C.ServerOnSkillActivate
// Size: 0x10(Inherited: 0x10)
struct FServerOnSkillActivate : FServerOnSkillActivate
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	struct FGameplayTag CooldownTag;  // 0x8 (0x8)


}; 
 
 // Function GA_Rupture.GA_Rupture_C.EventReceived_EE5F81C54BEED75940848E8847E89F65
struct FEventReceived_EE5F81C54BEED75940848E8847E89F65
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_Rupture.GA_Rupture_C.ExecuteUbergraph_GA_Rupture
struct FExecuteUbergraph_GA_Rupture
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData Temp_struct_Variable;  // 0x8 (0x8)
	struct FGameplayTag Temp_struct_Variable_2;  // 0xB8 (0xB8)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0xC0 (0xC0)
	struct FHitResult CallFunc_GetHitResultFromTargetData_ReturnValue;  // 0xC8 (0xC8)
	char pad_432_1 : 7;  // 0x1B0 (0x1B0)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x1B0 (0x1B0)
	char pad_433_1 : 7;  // 0x1B1 (0x1B1)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x1B1 (0x1B1)
	char pad_434[2];  // 0x1B2 (0x1B2)
	float CallFunc_BreakHitResult_Time;  // 0x1B4 (0x1B4)
	float CallFunc_BreakHitResult_Distance;  // 0x1B8 (0x1B8)
	char pad_444[4];  // 0x1BC (0x1BC)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x1C0 (0x1C0)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x1D8 (0x1D8)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x1F0 (0x1F0)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x208 (0x208)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x220 (0x220)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x228 (0x228)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x230 (0x230)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x238 (0x238)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x240 (0x240)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x248 (0x248)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x24C (0x24C)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x250 (0x250)
	char pad_596[4];  // 0x254 (0x254)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x258 (0x258)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x270 (0x270)
	char pad_648_1 : 7;  // 0x288 (0x288)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x288 (0x288)
	char pad_649[7];  // 0x289 (0x289)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x290 (0x290)
	char pad_664_1 : 7;  // 0x298 (0x298)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x298 (0x298)
	char pad_665_1 : 7;  // 0x299 (0x299)
	bool Temp_bool_Variable : 1;  // 0x299 (0x299)
	char pad_666[6];  // 0x29A (0x29A)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;  // 0x2A0 (0x2A0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x2A8 (0x2A8)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;  // 0x2B0 (0x2B0)
	char pad_704_1 : 7;  // 0x2C0 (0x2C0)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x2C0 (0x2C0)
	char pad_705[7];  // 0x2C1 (0x2C1)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x2C8 (0x2C8)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x378 (0x378)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x380 (0x380)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x430 (0x430)
	struct UObject* CallFunc_GetCurrentSourceObject_ReturnValue;  // 0x440 (0x440)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x448 (0x448)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x520 (0x520)
	struct FGameplayTag K2Node_Event_SkillTag;  // 0x530 (0x530)
	struct FGameplayTag K2Node_Event_CooldownTag;  // 0x538 (0x538)
	char pad_1344_1 : 7;  // 0x540 (0x540)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x540 (0x540)


}; 
 
 