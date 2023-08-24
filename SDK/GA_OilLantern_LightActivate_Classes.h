#pragma once 
#include <GA_OilLantern_LightActivate_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_OilLantern_LightActivate.GA_OilLantern_LightActivate_C
// Size: 0x5C0(Inherited: 0x5A0)
struct UGA_OilLantern_LightActivate_C : UGA_ActivateItem_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x5A0 (0x5A0)
	struct UAnimMontage* MontageToPlay_SourceObject;  // 0x5A8 (0x5A8)
	struct TArray<struct FPrimaryAssetId> OilLantern_Activate_Id;  // 0x5B0 (0x5B0)


	void PlayAnimation(struct FName PlaySection); // Function GA_OilLantern_LightActivate.GA_OilLantern_LightActivate_C.PlayAnimation
	void InputActionCompleted_2ECE16BB4BD658617D893EA21CA677EA(); // Function GA_OilLantern_LightActivate.GA_OilLantern_LightActivate_C.InputActionCompleted_2ECE16BB4BD658617D893EA21CA677EA
	void InputActionStarted_2ECE16BB4BD658617D893EA21CA677EA(); // Function GA_OilLantern_LightActivate.GA_OilLantern_LightActivate_C.InputActionStarted_2ECE16BB4BD658617D893EA21CA677EA
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_OilLantern_LightActivate.GA_OilLantern_LightActivate_C.AbilityActivated
	void ExecuteUbergraph_GA_OilLantern_LightActivate(int32_t EntryPoint); // Function GA_OilLantern_LightActivate.GA_OilLantern_LightActivate_C.ExecuteUbergraph_GA_OilLantern_LightActivate
}; 
 
 


