#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SpiderWebActivate.GA_SpiderWebActivate_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_SpiderWebActivate.GA_SpiderWebActivate_C.ExecuteUbergraph_GA_SpiderWebActivate
struct FExecuteUbergraph_GA_SpiderWebActivate
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData Temp_struct_Variable;  // 0x8 (0x8)
	int32_t Temp_int_Variable;  // 0xB8 (0xB8)
	char pad_188[4];  // 0xBC (0xBC)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0xC0 (0xC0)
	struct UDCAT_WaitAttributeChangeByExecution* CallFunc_WaitForAttributeChange_ReturnValue;  // 0xD0 (0xD0)
	float Temp_real_Variable;  // 0xD8 (0xD8)
	char pad_220_1 : 7;  // 0xDC (0xDC)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xDC (0xDC)
	char pad_221[3];  // 0xDD (0xDD)
	float Temp_real_Variable_2;  // 0xE0 (0xE0)
	char pad_228[4];  // 0xE4 (0xE4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0xE8 (0xE8)
	struct AActor* K2Node_Event_TargetActor;  // 0x198 (0x198)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x1A0 (0x1A0)
	float K2Node_CustomEvent_OldValue;  // 0x1A8 (0x1A8)
	float K2Node_CustomEvent_NewValue;  // 0x1AC (0x1AC)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x1B0 (0x1B0)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_2;  // 0x260 (0x260)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x270 (0x270)
	struct ABP_SpiderWeb_C* K2Node_DynamicCast_AsBP_Spider_Web;  // 0x278 (0x278)
	char pad_640_1 : 7;  // 0x280 (0x280)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x280 (0x280)
	char pad_641_1 : 7;  // 0x281 (0x281)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x281 (0x281)
	char pad_642[2];  // 0x282 (0x282)
	int32_t CallFunc_GetDestroyCount_Result;  // 0x284 (0x284)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x288 (0x288)
	char pad_652[4];  // 0x28C (0x28C)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x290 (0x290)
	struct ABP_SpiderWeb_C* K2Node_DynamicCast_AsBP_Spider_Web_2;  // 0x298 (0x298)
	char pad_672_1 : 7;  // 0x2A0 (0x2A0)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x2A0 (0x2A0)
	char pad_673_1 : 7;  // 0x2A1 (0x2A1)
	bool CallFunc_IsContactCountDestroy_Result : 1;  // 0x2A1 (0x2A1)
	char pad_674[2];  // 0x2A2 (0x2A2)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x2A4 (0x2A4)
	char pad_692_1 : 7;  // 0x2B4 (0x2B4)
	bool CallFunc_IsDisableDestroyContact_Result : 1;  // 0x2B4 (0x2B4)
	char pad_693[3];  // 0x2B5 (0x2B5)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;  // 0x2B8 (0x2B8)
	char pad_704_1 : 7;  // 0x2C0 (0x2C0)
	bool K2Node_Event_bWasCancelled : 1;  // 0x2C0 (0x2C0)


}; 
 
 // Function GA_SpiderWebActivate.GA_SpiderWebActivate_C.OnAuraOverlapBeginEvent
// Size: 0x8(Inherited: 0x8)
struct FOnAuraOverlapBeginEvent : FOnAuraOverlapBeginEvent
{
	struct AActor* TargetActor;  // 0x0 (0x0)


}; 
 
 // Function GA_SpiderWebActivate.GA_SpiderWebActivate_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_SpiderWebActivate.GA_SpiderWebActivate_C.OnChange_99C7DE264BB694FE1F05E7934C39DE88
struct FOnChange_99C7DE264BB694FE1F05E7934C39DE88
{
	float OldValue;  // 0x0 (0x0)
	float NewValue;  // 0x4 (0x4)


}; 
 
 