#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_HellfireProjectileCollision.GA_HellfireProjectileCollision_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_HellfireProjectileCollision.GA_HellfireProjectileCollision_C.ExecuteUbergraph_GA_HellfireProjectileCollision
struct FExecuteUbergraph_GA_HellfireProjectileCollision
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct ABP_HellfireProjectile_C* K2Node_DynamicCast_AsBP_Hellfire_Projectile;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x1C (0x1C)
	char pad_44[4];  // 0x2C (0x2C)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x30 (0x30)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0xE0 (0xE0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0xE8 (0xE8)
	struct ABP_HellfireProjectile_C* K2Node_DynamicCast_AsBP_Hellfire_Projectile_2;  // 0xF0 (0xF0)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0xF8 (0xF8)
	char pad_249[7];  // 0xF9 (0xF9)
	struct ABP_HellfireProjectile_C* K2Node_DynamicCast_AsBP_Hellfire_Projectile_3;  // 0x100 (0x100)
	char pad_264_1 : 7;  // 0x108 (0x108)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x108 (0x108)
	char pad_265[7];  // 0x109 (0x109)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x110 (0x110)
	struct FDesignDataSpell CallFunc_GetDesignDataSpell_ReturnValue;  // 0x128 (0x128)
	struct UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent_2;  // 0x1F0 (0x1F0)
	struct AActor* K2Node_CustomEvent_OtherActor_2;  // 0x1F8 (0x1F8)
	struct UPrimitiveComponent* K2Node_CustomEvent_OtherComp_2;  // 0x200 (0x200)
	int32_t K2Node_CustomEvent_OtherBodyIndex_2;  // 0x208 (0x208)
	char pad_524_1 : 7;  // 0x20C (0x20C)
	bool K2Node_CustomEvent_bFromSweep : 1;  // 0x20C (0x20C)
	char pad_525[3];  // 0x20D (0x20D)
	struct FHitResult K2Node_CustomEvent_SweepResult;  // 0x210 (0x210)
	float CallFunc_Conv_IntToFloat_ReturnValue;  // 0x2F8 (0x2F8)
	char pad_764[4];  // 0x2FC (0x2FC)
	struct UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent;  // 0x300 (0x300)
	struct AActor* K2Node_CustomEvent_OtherActor;  // 0x308 (0x308)
	struct UPrimitiveComponent* K2Node_CustomEvent_OtherComp;  // 0x310 (0x310)
	int32_t K2Node_CustomEvent_OtherBodyIndex;  // 0x318 (0x318)
	char pad_796[4];  // 0x31C (0x31C)
	struct UDCAT_WaitDistChangeFromLocation* CallFunc_WaitDistanceChange_ReturnValue;  // 0x320 (0x320)
	char pad_808_1 : 7;  // 0x328 (0x328)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x328 (0x328)
	char pad_809[3];  // 0x329 (0x329)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x32C (0x32C)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x33C (0x33C)
	char pad_844_1 : 7;  // 0x34C (0x34C)
	bool K2Node_Event_bWasCancelled : 1;  // 0x34C (0x34C)


}; 
 
 // Function GA_HellfireProjectileCollision.GA_HellfireProjectileCollision_C.OverlapEndTargetActor
struct FOverlapEndTargetActor
{
	struct AActor* InTargetActor;  // 0x0 (0x0)
	struct FGameplayEffectContextHandle NewEffectContextHandle;  // 0x8 (0x8)
	int32_t Temp_int_Array_Index_Variable;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue;  // 0x38 (0x38)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x40 (0x40)
	char pad_68_1 : 7;  // 0x44 (0x44)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x44 (0x44)
	char pad_69[3];  // 0x45 (0x45)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x50 (0x50)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_GetActiveEffects_ReturnValue;  // 0x68 (0x68)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool CallFunc_Array_RemoveItem_ReturnValue : 1;  // 0x78 (0x78)
	char pad_121[3];  // 0x79 (0x79)
	struct FActiveGameplayEffectHandle CallFunc_Array_Get_Item;  // 0x7C (0x7C)
	char pad_132_1 : 7;  // 0x84 (0x84)
	bool CallFunc_RemoveActiveGameplayEffect_ReturnValue : 1;  // 0x84 (0x84)
	char pad_133[3];  // 0x85 (0x85)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x88 (0x88)
	char pad_140_1 : 7;  // 0x8C (0x8C)
	bool CallFunc_Array_Contains_ReturnValue : 1;  // 0x8C (0x8C)
	char pad_141_1 : 7;  // 0x8D (0x8D)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x8D (0x8D)


}; 
 
 // Function GA_HellfireProjectileCollision.GA_HellfireProjectileCollision_C.OverlapBeginTargetActor
struct FOverlapBeginTargetActor
{
	struct AActor* InTargetActor;  // 0x0 (0x0)
	struct FGameplayEffectContextHandle NewEffectContextHandle;  // 0x8 (0x8)
	struct FHitResult CallFunc_MakeHitResult_ReturnValue;  // 0x20 (0x20)
	char pad_264_1 : 7;  // 0x108 (0x108)
	bool CallFunc_Array_Contains_ReturnValue : 1;  // 0x108 (0x108)
	char pad_265[7];  // 0x109 (0x109)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;  // 0x110 (0x110)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x118 (0x118)
	char pad_284[4];  // 0x11C (0x11C)
	struct FGameplayEffectContextHandle CallFunc_MakeEffectContext_ReturnValue;  // 0x120 (0x120)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x138 (0x138)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x140 (0x140)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyPremadeSpecArray_ReturnValue;  // 0x1F0 (0x1F0)


}; 
 
 // Function GA_HellfireProjectileCollision.GA_HellfireProjectileCollision_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_HellfireProjectileCollision.GA_HellfireProjectileCollision_C.OnOverlapBegin
struct FOnOverlapBegin
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool bFromSweep : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct FHitResult SweepResult;  // 0x20 (0x20)


}; 
 
 // Function GA_HellfireProjectileCollision.GA_HellfireProjectileCollision_C.OnOverlapEnd
struct FOnOverlapEnd
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)


}; 
 
 