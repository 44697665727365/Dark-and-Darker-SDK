#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_FluteRiposte.GA_FluteRiposte_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_FluteRiposte.GA_FluteRiposte_C.ExecuteUbergraph_GA_FluteRiposte
struct FExecuteUbergraph_GA_FluteRiposte
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UObject* CallFunc_GetCurrentSourceObject_ReturnValue;  // 0x8 (0x8)
	struct AActor* K2Node_DynamicCast_As__;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x20 (0x20)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool K2Node_Event_bWasCancelled : 1;  // 0xD0 (0xD0)
	char pad_209[7];  // 0xD1 (0xD1)
	struct UObject* CallFunc_GetCurrentSourceObject_ReturnValue_2;  // 0xD8 (0xD8)
	struct AActor* K2Node_DynamicCast_As___2;  // 0xE0 (0xE0)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0xE8 (0xE8)


}; 
 
 // Function GA_FluteRiposte.GA_FluteRiposte_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 