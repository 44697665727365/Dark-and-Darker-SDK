#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_LightProjectile.BP_LightProjectile_C.ReceiveEndPlay
// Size: 0x1(Inherited: 0x1)
struct FReceiveEndPlay : FReceiveEndPlay
{
	enum class EEndPlayReason EndPlayReason;  // 0x0 (0x0)


}; 
 
 // Function BP_LightProjectile.BP_LightProjectile_C.BndEvt__BP_LightProjectile_DetectingSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct FBndEvt__BP_LightProjectile_DetectingSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
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
 
 // Function BP_LightProjectile.BP_LightProjectile_C.BndEvt__BP_LightProjectile_DetectingSphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
struct FBndEvt__BP_LightProjectile_DetectingSphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)


}; 
 
 // Function BP_LightProjectile.BP_LightProjectile_C.ExecuteUbergraph_BP_LightProjectile
struct FExecuteUbergraph_BP_LightProjectile
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Array_Index_Variable;  // 0x4 (0x4)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x8 (0x8)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0xC (0xC)
	int32_t Temp_int_Array_Index_Variable_2;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	int32_t Temp_int_Loop_Counter_Variable_2;  // 0x18 (0x18)
	int32_t Temp_int_Loop_Counter_Variable_3;  // 0x1C (0x1C)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x20 (0x20)
	int32_t CallFunc_Add_IntInt_ReturnValue_3;  // 0x24 (0x24)
	int32_t Temp_int_Array_Index_Variable_3;  // 0x28 (0x28)
	struct FDelegate Temp_delegate_Variable;  // 0x2C (0x2C)
	int32_t CallFunc_PostAkEvent_ReturnValue;  // 0x3C (0x3C)
	enum class EEndPlayReason K2Node_Event_EndPlayReason;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	struct FDelegate Temp_delegate_Variable_2;  // 0x44 (0x44)
	char pad_84[4];  // 0x54 (0x54)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2;  // 0x58 (0x58)
	struct AActor* K2Node_ComponentBoundEvent_OtherActor_2;  // 0x60 (0x60)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2;  // 0x68 (0x68)
	int32_t K2Node_ComponentBoundEvent_OtherBodyIndex_2;  // 0x70 (0x70)
	char pad_116_1 : 7;  // 0x74 (0x74)
	bool K2Node_ComponentBoundEvent_bFromSweep : 1;  // 0x74 (0x74)
	char pad_117[3];  // 0x75 (0x75)
	struct FHitResult K2Node_ComponentBoundEvent_SweepResult;  // 0x78 (0x78)
	int32_t CallFunc_PostAkEvent_ReturnValue_2;  // 0x160 (0x160)
	char pad_356[4];  // 0x164 (0x164)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x168 (0x168)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue;  // 0x218 (0x218)
	char pad_544_1 : 7;  // 0x220 (0x220)
	bool CallFunc_HasAuthority_ReturnValue_2 : 1;  // 0x220 (0x220)
	char pad_545_1 : 7;  // 0x221 (0x221)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x221 (0x221)
	char pad_546[2];  // 0x222 (0x222)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x224 (0x224)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent;  // 0x228 (0x228)
	struct AActor* K2Node_ComponentBoundEvent_OtherActor;  // 0x230 (0x230)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp;  // 0x238 (0x238)
	int32_t K2Node_ComponentBoundEvent_OtherBodyIndex;  // 0x240 (0x240)
	char pad_580_1 : 7;  // 0x244 (0x244)
	bool CallFunc_HasAuthority_ReturnValue_3 : 1;  // 0x244 (0x244)
	char pad_581_1 : 7;  // 0x245 (0x245)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x245 (0x245)
	char pad_582[2];  // 0x246 (0x246)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_2;  // 0x248 (0x248)
	char pad_592_1 : 7;  // 0x250 (0x250)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x250 (0x250)
	char pad_593[7];  // 0x251 (0x251)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyPremadeSpecArray_ReturnValue;  // 0x258 (0x258)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x268 (0x268)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x278 (0x278)
	char pad_633[7];  // 0x279 (0x279)
	struct AActor* CallFunc_Array_Get_Item;  // 0x280 (0x280)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x288 (0x288)
	char pad_652[4];  // 0x28C (0x28C)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_3;  // 0x290 (0x290)
	char pad_664_1 : 7;  // 0x298 (0x298)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x298 (0x298)
	char pad_665_1 : 7;  // 0x299 (0x299)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x299 (0x299)
	char pad_666[6];  // 0x29A (0x29A)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_2;  // 0x2A0 (0x2A0)
	char pad_688_1 : 7;  // 0x2B0 (0x2B0)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_2 : 1;  // 0x2B0 (0x2B0)
	char pad_689_1 : 7;  // 0x2B1 (0x2B1)
	bool CallFunc_HasAuthority_ReturnValue_4 : 1;  // 0x2B1 (0x2B1)
	char pad_690_1 : 7;  // 0x2B2 (0x2B2)
	bool CallFunc_Array_Contains_ReturnValue : 1;  // 0x2B2 (0x2B2)
	char pad_691[5];  // 0x2B3 (0x2B3)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_GetActiveEffects_ReturnValue;  // 0x2B8 (0x2B8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_GetActiveEffects_ReturnValue_2;  // 0x2C8 (0x2C8)
	struct FActiveGameplayEffectHandle CallFunc_Array_Get_Item_2;  // 0x2D8 (0x2D8)
	struct FActiveGameplayEffectHandle CallFunc_Array_Get_Item_3;  // 0x2E0 (0x2E0)
	char pad_744_1 : 7;  // 0x2E8 (0x2E8)
	bool CallFunc_RemoveActiveGameplayEffect_ReturnValue : 1;  // 0x2E8 (0x2E8)
	char pad_745_1 : 7;  // 0x2E9 (0x2E9)
	bool CallFunc_RemoveActiveGameplayEffect_ReturnValue_2 : 1;  // 0x2E9 (0x2E9)
	char pad_746[2];  // 0x2EA (0x2EA)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x2EC (0x2EC)
	int32_t CallFunc_Array_Length_ReturnValue_3;  // 0x2F0 (0x2F0)
	char pad_756_1 : 7;  // 0x2F4 (0x2F4)
	bool CallFunc_Less_IntInt_ReturnValue_2 : 1;  // 0x2F4 (0x2F4)
	char pad_757_1 : 7;  // 0x2F5 (0x2F5)
	bool CallFunc_Less_IntInt_ReturnValue_3 : 1;  // 0x2F5 (0x2F5)
	char pad_758_1 : 7;  // 0x2F6 (0x2F6)
	bool CallFunc_Array_RemoveItem_ReturnValue : 1;  // 0x2F6 (0x2F6)


}; 
 
 