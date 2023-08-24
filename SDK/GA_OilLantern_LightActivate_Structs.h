#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_OilLantern_LightActivate.GA_OilLantern_LightActivate_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_OilLantern_LightActivate.GA_OilLantern_LightActivate_C.ExecuteUbergraph_GA_OilLantern_LightActivate
struct FExecuteUbergraph_GA_OilLantern_LightActivate
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x14 (0x14)
	char pad_36[4];  // 0x24 (0x24)
	struct UDCAT_WaitForInputAction* CallFunc_WaitForInputAction_ReturnValue;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x38 (0x38)


}; 
 
 // Function GA_OilLantern_LightActivate.GA_OilLantern_LightActivate_C.PlayAnimation
struct FPlayAnimation
{
	struct FName PlaySection;  // 0x0 (0x0)
	struct UObject* CallFunc_GetCurrentSourceObject_ReturnValue;  // 0x8 (0x8)
	struct AItemActor* K2Node_DynamicCast_AsItem_Actor;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue;  // 0x20 (0x20)
	struct UDCAbilitySystemComponent* K2Node_DynamicCast_AsDCAbility_System_Component;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x30 (0x30)


}; 
 
 