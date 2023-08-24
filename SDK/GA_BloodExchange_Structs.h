#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_BloodExchange.GA_BloodExchange_C.ServerOnSkillActivate
// Size: 0x10(Inherited: 0x10)
struct FServerOnSkillActivate : FServerOnSkillActivate
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	struct FGameplayTag CooldownTag;  // 0x8 (0x8)


}; 
 
 // Function GA_BloodExchange.GA_BloodExchange_C.EventReceived_319C471D49A666CAA5CDCFAEC961EDA9
struct FEventReceived_319C471D49A666CAA5CDCFAEC961EDA9
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_BloodExchange.GA_BloodExchange_C.ExecuteUbergraph_GA_BloodExchange
struct FExecuteUbergraph_GA_BloodExchange
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct FGameplayEventData Temp_struct_Variable;  // 0x10 (0x10)
	struct FGameplayTag Temp_struct_Variable_2;  // 0xC0 (0xC0)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0xC8 (0xC8)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0xD0 (0xD0)
	char pad_209_1 : 7;  // 0xD1 (0xD1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xD1 (0xD1)
	char pad_210[6];  // 0xD2 (0xD2)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0xD8 (0xD8)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xE0 (0xE0)
	char pad_225[7];  // 0xE1 (0xE1)
	struct FGameplayEventData Temp_struct_Variable_3;  // 0xE8 (0xE8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x198 (0x198)
	struct FGameplayTag K2Node_Event_SkillTag;  // 0x1A8 (0x1A8)
	struct FGameplayTag K2Node_Event_CooldownTag;  // 0x1B0 (0x1B0)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x1B8 (0x1B8)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x1C0 (0x1C0)
	struct UObject* CallFunc_GetCurrentSourceObject_ReturnValue;  // 0x270 (0x270)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x278 (0x278)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x350 (0x350)


}; 
 
 