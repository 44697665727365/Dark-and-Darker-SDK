#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_LichFrenzy.GA_LichFrenzy_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_LichFrenzy.GA_LichFrenzy_C.EventReceived_44DA495744C99059797555AA364D6978
struct FEventReceived_44DA495744C99059797555AA364D6978
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_LichFrenzy.GA_LichFrenzy_C.ExecuteUbergraph_GA_LichFrenzy
struct FExecuteUbergraph_GA_LichFrenzy
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData Temp_struct_Variable;  // 0x8 (0x8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0xB8 (0xB8)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0xC0 (0xC0)
	char pad_368_1 : 7;  // 0x170 (0x170)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x170 (0x170)
	char pad_369[3];  // 0x171 (0x171)
	int32_t Temp_int_Array_Index_Variable;  // 0x174 (0x174)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x178 (0x178)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x17C (0x17C)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x180 (0x180)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x230 (0x230)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x2E0 (0x2E0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // [x2F0 ([x2F0)
	struct ABP_Lich_Common_C* K2Node_DynamicCast_AsBP_Lich_Common;  // 0x2F8 (0x2F8)
	char pad_768_1 : 7;  // 0x300 (0x300)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x300 (0x300)
	char pad_769[7];  // 0x301 (0x301)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x308 (0x308)
	struct TArray<struct FPrimaryAssetId> K2Node_MakeArray_Array;  // 0x310 (0x310)
	struct ABP_DCMonsterBaseWithOptions_C* CallFunc_Array_Get_Item;  // 0x320 (0x320)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue;  // 0x328 (0x328)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x338 (0x338)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x3E8 (0x3E8)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x3F8 (0x3F8)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x4D0 (0x4D0)
	char pad_1248_1 : 7;  // 0x4E0 (0x4E0)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x4E0 (0x4E0)
	char pad_1249[7];  // 0x4E1 (0x4E1)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_2;  // 0x4E8 (0x4E8)
	char pad_1272_1 : 7;  // 0x4F8 (0x4F8)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_2 : 1;  // 0x4F8 (0x4F8)
	char pad_1273[3];  // 0x4F9 (0x4F9)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x4FC (0x4FC)
	char pad_1280_1 : 7;  // 0x500 (0x500)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x500 (0x500)
	char pad_1281[7];  // 0x501 (0x501)
	struct FVector CallFunc_BreakTransform_Location;  // 0x508 (0x508)
	struct FRotator CallFunc_BreakTransform_Rotation;  // 0x520 (0x520)
	struct FVector CallFunc_BreakTransform_Scale;  // 0x538 (0x538)
	struct FVector CallFunc_GetForwardVector_ReturnValue;  // 0x550 (0x550)
	struct FVector CallFunc_GetCapsuleBottomLocation_ReturnValue;  // 0x568 (0x568)
	struct FQuat CallFunc_Conv_VectorToQuaternion_ReturnValue;  // 0x580 (0x580)
	double CallFunc_BreakVector_X;  // 0x5A0 (0x5A0)
	double CallFunc_BreakVector_Y;  // 0x5A8 (0x5A8)
	double CallFunc_BreakVector_Z;  // 0x5B0 (0x5B0)
	struct FVector CallFunc_Quat_RotateVector_ReturnValue;  // 0x5B8 (0x5B8)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x5D0 (0x5D0)
	double CallFunc_BreakVector_X_2;  // 0x5E8 (0x5E8)
	double CallFunc_BreakVector_Y_2;  // 0x5F0 (0x5F0)
	double CallFunc_BreakVector_Z_2;  // 0x5F8 (0x5F8)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x600 (0x600)
	struct FVector CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation;  // 0x618 (0x618)
	char pad_1584_1 : 7;  // 0x630 (0x630)
	bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue : 1;  // 0x630 (0x630)
	char pad_1585_1 : 7;  // 0x631 (0x631)
	bool CallFunc_SpawnAoe_bSuccessfully : 1;  // 0x631 (0x631)
	char pad_1586[6];  // 0x632 (0x632)
	struct ADCAoeBase* CallFunc_SpawnAoe_ReturnValue;  // 0x638 (0x638)


}; 
 
 