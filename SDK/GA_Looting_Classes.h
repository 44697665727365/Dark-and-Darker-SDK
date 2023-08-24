#pragma once 
#include <GA_Looting_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Looting.GA_Looting_C
// Size: 0x580(Inherited: 0x558)
struct UGA_Looting_C : UDCGameplayAbilityBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct AActor* LootTargetActor;  // 0x560 (0x560)
	double MaximumDistance;  // 0x568 (0x568)
	struct FPrimaryAssetId InteractionAdditionalSphereRadiusConstant;  // 0x570 (0x570)


	void GetMaximumDistance(double HitResultDistance, double& MaximumDistance); // Function GA_Looting.GA_Looting_C.GetMaximumDistance
	void OnDirectionChanged_8612F3F6419CAA8FDE79C7BC68BCA52B(); // Function GA_Looting.GA_Looting_C.OnDirectionChanged_8612F3F6419CAA8FDE79C7BC68BCA52B
	void OnDistanceChange_EB1E959F469D1BDF00923DAC43E68B6D(); // Function GA_Looting.GA_Looting_C.OnDistanceChange_EB1E959F469D1BDF00923DAC43E68B6D
	void OnDistanceChange_FD7D3E9F4BED7CD5EDE79ABC64F9FA5B(); // Function GA_Looting.GA_Looting_C.OnDistanceChange_FD7D3E9F4BED7CD5EDE79ABC64F9FA5B
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_Looting.GA_Looting_C.K2_ActivateAbilityFromEvent
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Looting.GA_Looting_C.K2_OnEndAbility
	void OnRemoveLootTarget_Event(); // Function GA_Looting.GA_Looting_C.OnRemoveLootTarget_Event
	void ExecuteUbergraph_GA_Looting(int32_t EntryPoint); // Function GA_Looting.GA_Looting_C.ExecuteUbergraph_GA_Looting
}; 
 
 


