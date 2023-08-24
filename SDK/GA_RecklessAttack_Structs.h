#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_RecklessAttack.GA_RecklessAttack_C.EventReceived_22676BF44A86DF25C537C694500CCF60
struct FEventReceived_22676BF44A86DF25C537C694500CCF60
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_RecklessAttack.GA_RecklessAttack_C.ExecuteUbergraph_GA_RecklessAttack
struct FExecuteUbergraph_GA_RecklessAttack
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x4 (0x4)
	char pad_12[4];  // 0xC (0xC)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x10 (0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xC0 (0xC0)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD0 (0xD0)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x180 (0x180)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x188 (0x188)
	char pad_400_1 : 7;  // 0x190 (0x190)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x190 (0x190)
	char pad_401[3];  // 0x191 (0x191)
	struct FGameplayTag K2Node_Event_SkillTag;  // 0x194 (0x194)
	struct FGameplayTag K2Node_Event_CooldownTag;  // 0x19C (0x19C)


}; 
 
 // Function GA_RecklessAttack.GA_RecklessAttack_C.ServerOnSkillActivate
// Size: 0x10(Inherited: 0x10)
struct FServerOnSkillActivate : FServerOnSkillActivate
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	struct FGameplayTag CooldownTag;  // 0x8 (0x8)


}; 
 
 