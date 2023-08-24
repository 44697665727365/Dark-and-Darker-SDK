#pragma once 
#include <GA_HeaterShield_UniquePassive_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C
// Size: 0x588(Inherited: 0x558)
struct UGA_HeaterShield_UniquePassive_C : UGA_ActivateOnAbilityHandleData_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct FGameplayTag ReflectiveStateTag;  // 0x560 (0x560)
	struct FGameplayTagContainer ActivatableConditionTag Container;  // 0x568 (0x568)


	void SetItemReflectable(bool bIsReflectable); // Function GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C.SetItemReflectable
	void EventReceived_4C9DC7AE41ED2229697FBD959A1A0518(struct FGameplayEventData Payload); // Function GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C.EventReceived_4C9DC7AE41ED2229697FBD959A1A0518
	void Removed_DA901BEE4CB46296BB0E11AF4A5E9E1F(); // Function GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C.Removed_DA901BEE4CB46296BB0E11AF4A5E9E1F
	void Removed_A056618B4705CB9A7C66F994B5DC714F(); // Function GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C.Removed_A056618B4705CB9A7C66F994B5DC714F
	void Added_3863188D42EAD9EFBA47D49600884417(); // Function GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C.Added_3863188D42EAD9EFBA47D49600884417
	void Added_E8326BC94570933CDC2C199BC31E7C4B(); // Function GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C.Added_E8326BC94570933CDC2C199BC31E7C4B
	void Removed_EC343C864F36A7988072F8BF900895B9(); // Function GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C.Removed_EC343C864F36A7988072F8BF900895B9
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C.K2_OnEndAbility
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_HeaterShield_UniquePassive(int32_t EntryPoint); // Function GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C.ExecuteUbergraph_GA_HeaterShield_UniquePassive
}; 
 
 


