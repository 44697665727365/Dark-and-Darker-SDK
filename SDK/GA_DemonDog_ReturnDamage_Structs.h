#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_DemonDog_ReturnDamage.GA_DemonDog_ReturnDamage_C.ExecuteUbergraph_GA_DemonDog_ReturnDamage
struct FExecuteUbergraph_GA_DemonDog_ReturnDamage
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x8 (0x8)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0xB8 (0xB8)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0xC0 (0xC0)
	struct FGameplayEventData Temp_struct_Variable;  // 0x170 (0x170)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x220 (0x220)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x228 (0x228)
	struct FHitResult CallFunc_EffectContextGetHitResult_ReturnValue;  // 0x230 (0x230)
	char pad_792_1 : 7;  // 0x318 (0x318)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x318 (0x318)
	char pad_793_1 : 7;  // 0x319 (0x319)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x319 (0x319)
	char pad_794[2];  // 0x31A (0x31A)
	float CallFunc_BreakHitResult_Time;  // 0x31C (0x31C)
	float CallFunc_BreakHitResult_Distance;  // 0x320 (0x320)
	char pad_804[4];  // 0x324 (0x324)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x328 (0x328)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x340 (0x340)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x358 (0x358)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x370 (0x370)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x388 (0x388)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x390 (0x390)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x398 (0x398)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x3A0 (0x3A0)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x3A8 (0x3A8)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x3B0 (0x3B0)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x3B4 (0x3B4)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x3B8 (0x3B8)
	char pad_956[4];  // 0x3BC (0x3BC)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x3C0 (0x3C0)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x3D8 (0x3D8)
	char pad_1008_1 : 7;  // 0x3F0 (0x3F0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x3F0 (0x3F0)
	char pad_1009[7];  // 0x3F1 (0x3F1)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x3F8 (0x3F8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x4A8 (0x4A8)
	struct AProjectileActor* K2Node_DynamicCast_AsProjectile_Actor;  // 0x4B8 (0x4B8)
	char pad_1216_1 : 7;  // 0x4C0 (0x4C0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x4C0 (0x4C0)
	char pad_1217[3];  // 0x4C1 (0x4C1)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4C4 (0x4C4)
	char pad_1236[4];  // 0x4D4 (0x4D4)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData_2;  // 0x4D8 (0x4D8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_2;  // 0x588 (0x588)
	struct UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue;  // 0x598 (0x598)
	struct FDelegate Temp_delegate_Variable;  // 0x5A0 (0x5A0)
	int32_t CallFunc_PostEvent_ReturnValue;  // 0x5B0 (0x5B0)
	char pad_1460_1 : 7;  // 0x5B4 (0x5B4)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x5B4 (0x5B4)
	char pad_1461[3];  // 0x5B5 (0x5B5)
	struct FDelegate Temp_delegate_Variable_2;  // 0x5B8 (0x5B8)
	int32_t CallFunc_PostEvent_ReturnValue_2;  // 0x5C8 (0x5C8)
	char pad_1484[4];  // 0x5CC (0x5CC)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x5D0 (0x5D0)
	struct ABP_DemonDog_Nightmare_C* K2Node_DynamicCast_AsBP_Demon_Dog_Nightmare;  // 0x5D8 (0x5D8)
	char pad_1504_1 : 7;  // 0x5E0 (0x5E0)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x5E0 (0x5E0)
	char pad_1505[3];  // 0x5E1 (0x5E1)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x5E4 (0x5E4)
	char pad_1524_1 : 7;  // 0x5F4 (0x5F4)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0x5F4 (0x5F4)


}; 
 
 // Function GA_DemonDog_ReturnDamage.GA_DemonDog_ReturnDamage_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_DemonDog_ReturnDamage.GA_DemonDog_ReturnDamage_C.EventReceived_7AD18C924EBF9EFF077702863DB5AE57
struct FEventReceived_7AD18C924EBF9EFF077702863DB5AE57
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 