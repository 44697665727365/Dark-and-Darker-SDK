#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_VictoryStrike.GA_VictoryStrike_C.ServerOnSkillActivate
// Size: 0x10(Inherited: 0x10)
struct FServerOnSkillActivate : FServerOnSkillActivate
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	struct FGameplayTag CooldownTag;  // 0x8 (0x8)


}; 
 
 // Function GA_VictoryStrike.GA_VictoryStrike_C.EventReceived_4152A666499A52F3576D7DA76244168D
struct FEventReceived_4152A666499A52F3576D7DA76244168D
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_VictoryStrike.GA_VictoryStrike_C.ClientOnSkillActivate
// Size: 0x10(Inherited: 0x10)
struct FClientOnSkillActivate : FClientOnSkillActivate
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	struct FGameplayTag CooldownTag;  // 0x8 (0x8)


}; 
 
 // Function GA_VictoryStrike.GA_VictoryStrike_C.EventReceived_4550563E45E7099E87C701BAF081F1C4
struct FEventReceived_4550563E45E7099E87C701BAF081F1C4
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_VictoryStrike.GA_VictoryStrike_C.EventReceived_E82B711947DCAFA3711E85BF6CDB03F0
struct FEventReceived_E82B711947DCAFA3711E85BF6CDB03F0
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_VictoryStrike.GA_VictoryStrike_C.ExecuteUbergraph_GA_VictoryStrike
struct FExecuteUbergraph_GA_VictoryStrike
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag K2Node_CustomEvent_EventTag_3;  // 0x4 (0x4)
	char pad_12[4];  // 0xC (0xC)
	struct FGameplayEventData K2Node_CustomEvent_EventData_3;  // 0x10 (0x10)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC0 (0xC0)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x170 (0x170)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x178 (0x178)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x180 (0x180)
	char pad_400_1 : 7;  // 0x190 (0x190)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x190 (0x190)
	char pad_401[3];  // 0x191 (0x191)
	struct FGameplayTag K2Node_CustomEvent_EventTag_2;  // 0x194 (0x194)
	char pad_412[4];  // 0x19C (0x19C)
	struct FGameplayEventData K2Node_CustomEvent_EventData_2;  // 0x1A0 (0x1A0)
	struct FGameplayEventData Temp_struct_Variable_3;  // 0x250 (0x250)
	struct FGameplayTag Temp_struct_Variable_4;  // 0x300 (0x300)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue_2;  // 0x308 (0x308)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x310 (0x310)
	char pad_792_1 : 7;  // 0x318 (0x318)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x318 (0x318)
	char pad_793_1 : 7;  // 0x319 (0x319)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x319 (0x319)
	char pad_794[6];  // 0x31A (0x31A)
	struct FGameplayEventData Temp_struct_Variable_5;  // 0x320 (0x320)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x3D0 (0x3D0)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x3E0 (0x3E0)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x3E8 (0x3E8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x498 (0x498)
	struct FGameplayEventData Temp_struct_Variable_6;  // 0x4A8 (0x4A8)
	struct FGameplayTag Temp_struct_Variable_7;  // 0x558 (0x558)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue_3;  // 0x560 (0x560)
	char pad_1384_1 : 7;  // 0x568 (0x568)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x568 (0x568)
	char pad_1385[7];  // 0x569 (0x569)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x570 (0x570)
	struct USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue;  // 0x578 (0x578)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x580 (0x580)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x590 (0x590)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x668 (0x668)
	struct FGameplayTag K2Node_Event_SkillTag_2;  // 0x670 (0x670)
	struct FGameplayTag K2Node_Event_CooldownTag_2;  // 0x678 (0x678)
	struct USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_2;  // 0x680 (0x680)
	struct FGameplayTag K2Node_Event_SkillTag;  // 0x688 (0x688)
	struct FGameplayTag K2Node_Event_CooldownTag;  // 0x690 (0x690)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue_2;  // 0x698 (0x698)


}; 
 
 