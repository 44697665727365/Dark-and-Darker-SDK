#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Hide.GA_Hide_C.OnOverlap_3D5EB7E94BCEDEC27E42A881ABEFEC36
struct FOnOverlap_3D5EB7E94BCEDEC27E42A881ABEFEC36
{
	struct FGameplayAbilityTargetDataHandle TargetData;  // 0x0 (0x0)


}; 
 
 // Function GA_Hide.GA_Hide_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_Hide.GA_Hide_C.EventReceived_4E31C2814B584A132D94CB837DF6501D
struct FEventReceived_4E31C2814B584A132D94CB837DF6501D
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_Hide.GA_Hide_C.ExecuteUbergraph_GA_Hide
struct FExecuteUbergraph_GA_Hide
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x24 (0x24)
	char pad_52[4];  // 0x34 (0x34)
	struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_TargetData;  // 0x38 (0x38)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x60 (0x60)
	struct FGameplayAbilityTargetDataHandle Temp_struct_Variable;  // 0x70 (0x70)
	struct UAbilityTask_WaitOverlap* CallFunc_WaitForOverlap_ReturnValue;  // 0x98 (0x98)
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0xA0 (0xA0)
	char pad_161[7];  // 0xA1 (0xA1)
	struct FHitResult CallFunc_GetHitResultFromTargetData_ReturnValue;  // 0xA8 (0xA8)
	char pad_400_1 : 7;  // 0x190 (0x190)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x190 (0x190)
	char pad_401_1 : 7;  // 0x191 (0x191)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x191 (0x191)
	char pad_402[2];  // 0x192 (0x192)
	float CallFunc_BreakHitResult_Time;  // 0x194 (0x194)
	float CallFunc_BreakHitResult_Distance;  // 0x198 (0x198)
	char pad_412[4];  // 0x19C (0x19C)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x1A0 (0x1A0)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x1B8 (0x1B8)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x1D0 (0x1D0)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x1E8 (0x1E8)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x200 (0x200)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x208 (0x208)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x210 (0x210)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x218 (0x218)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x220 (0x220)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x228 (0x228)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x22C (0x22C)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x230 (0x230)
	char pad_564[4];  // 0x234 (0x234)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x238 (0x238)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x250 (0x250)
	struct ABP_Mimic_Base_C* K2Node_DynamicCast_AsBP_Mimic_Base;  // 0x268 (0x268)
	char pad_624_1 : 7;  // 0x270 (0x270)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x270 (0x270)
	char pad_625[3];  // 0x271 (0x271)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x274 (0x274)
	char pad_644[4];  // 0x284 (0x284)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x288 (0x288)
	char pad_656_1 : 7;  // 0x290 (0x290)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x290 (0x290)
	char pad_657[7];  // 0x291 (0x291)
	struct UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue;  // 0x298 (0x298)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x2A0 (0x2A0)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue;  // 0x2A8 (0x2A8)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x2B0 (0x2B0)
	char pad_704_1 : 7;  // 0x2C0 (0x2C0)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x2C0 (0x2C0)
	char pad_705[7];  // 0x2C1 (0x2C1)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_2;  // 0x2C8 (0x2C8)
	char pad_728_1 : 7;  // 0x2D8 (0x2D8)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_2 : 1;  // 0x2D8 (0x2D8)
	char pad_729[7];  // 0x2D9 (0x2D9)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_3;  // 0x2E0 (0x2E0)
	char pad_752_1 : 7;  // 0x2F0 (0x2F0)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_3 : 1;  // 0x2F0 (0x2F0)
	char pad_753_1 : 7;  // 0x2F1 (0x2F1)
	bool CallFunc_BooleanOR_ReturnValue : 1;  // 0x2F1 (0x2F1)
	char pad_754_1 : 7;  // 0x2F2 (0x2F2)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x2F2 (0x2F2)
	char pad_755[5];  // 0x2F3 (0x2F3)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x2F8 (0x2F8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x3A8 (0x3A8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_5;  // 0x458 (0x458)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x468 (0x468)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_4;  // 0x518 (0x518)
	char pad_1320_1 : 7;  // 0x528 (0x528)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_4 : 1;  // 0x528 (0x528)
	char pad_1321[3];  // 0x529 (0x529)
	struct FGameplayTag K2Node_Event_SkillTag;  // 0x52C (0x52C)
	struct FGameplayTag K2Node_Event_CooldownTag;  // 0x534 (0x534)
	char pad_1340[4];  // 0x53C (0x53C)
	struct UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_2;  // 0x540 (0x540)
	struct UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_3;  // 0x548 (0x548)
	char pad_1360_1 : 7;  // 0x550 (0x550)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x550 (0x550)
	char pad_1361_1 : 7;  // 0x551 (0x551)
	bool CallFunc_IsValid_ReturnValue_5 : 1;  // 0x551 (0x551)


}; 
 
 // Function GA_Hide.GA_Hide_C.K2_CanActivateAbility
// Size: 0x14B(Inherited: 0x78)
struct FK2_CanActivateAbility : FK2_CanActivateAbility
{
	struct FGameplayAbilityActorInfo ActorInfo;  // 0x0 (0x0)
	struct FGameplayAbilitySpecHandle Handle;  // 0x48 (0x48)
	struct FGameplayTagContainer RelevantTags;  // 0x50 (0x50)
	char pad_228_1 : 7;  // 0xE4 (0xE4)
	bool ReturnValue : 1;  // 0x70 (0x70)
	struct FGameplayAbilityActorInfo CallFunc_GetActorInfo_ReturnValue;  // 0x78 (0x78)
	struct FGameplayAbilityActorInfo CallFunc_GetActorInfo_ReturnValue_2;  // 0xC0 (0xC0)
	char pad_373_1 : 7;  // 0x175 (0x175)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x108 (0x108)
	char pad_374_1 : 7;  // 0x176 (0x176)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x109 (0x109)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x110 (0x110)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue;  // 0x118 (0x118)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x120 (0x120)
	char pad_407_1 : 7;  // 0x197 (0x197)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x130 (0x130)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_2;  // 0x138 (0x138)
	char pad_424_1 : 7;  // 0x1A8 (0x1A8)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_2 : 1;  // 0x148 (0x148)
	char pad_425_1 : 7;  // 0x1A9 (0x1A9)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x149 (0x149)
	char pad_426_1 : 7;  // 0x1AA (0x1AA)
	bool CallFunc_Not_PreBool_ReturnValue_2 : 1;  // 0x14A (0x14A)


}; 
 
 // Function GA_Hide.GA_Hide_C.ServerOnSkillActivate
// Size: 0x10(Inherited: 0x10)
struct FServerOnSkillActivate : FServerOnSkillActivate
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	struct FGameplayTag CooldownTag;  // 0x8 (0x8)


}; 
 
 