#pragma once 
#include <BP_LightSourceBase_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_LightSourceBase.BP_LightSourceBase_C
// Size: 0x4F0(Inherited: 0x4B8)
struct ABP_LightSourceBase_C : ABP_PropsActorBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4B8 (0x4B8)
	struct UPointLightComponent* PointLight;  // 0x4C0 (0x4C0)
	float ReverseTimeline_Intensity_Track_2094A0C2435692893D9047AB9AA3B992;  // 0x4C8 (0x4C8)
	enum class ETimelineDirection ReverseTimeline__Direction_2094A0C2435692893D9047AB9AA3B992;  // 0x4CC (0x4CC)
	char pad_1229[3];  // 0x4CD (0x4CD)
	struct UTimelineComponent* ReverseTimeline;  // 0x4D0 (0x4D0)
	float Timeline_Intensity_Track_4B6D5B56412A98331F8F47A92BDAF6EC;  // 0x4D8 (0x4D8)
	enum class ETimelineDirection Timeline__Direction_4B6D5B56412A98331F8F47A92BDAF6EC;  // 0x4DC (0x4DC)
	char pad_1245[3];  // 0x4DD (0x4DD)
	struct UTimelineComponent* Timeline;  // 0x4E0 (0x4E0)
	double MaxIntensity;  // 0x4E8 (0x4E8)


	void Timeline__FinishedFunc(); // Function BP_LightSourceBase.BP_LightSourceBase_C.Timeline__FinishedFunc
	void Timeline__UpdateFunc(); // Function BP_LightSourceBase.BP_LightSourceBase_C.Timeline__UpdateFunc
	void ReverseTimeline__FinishedFunc(); // Function BP_LightSourceBase.BP_LightSourceBase_C.ReverseTimeline__FinishedFunc
	void ReverseTimeline__UpdateFunc(); // Function BP_LightSourceBase.BP_LightSourceBase_C.ReverseTimeline__UpdateFunc
	void ReceiveBeginPlay(); // Function BP_LightSourceBase.BP_LightSourceBase_C.ReceiveBeginPlay
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_LightSourceBase.BP_LightSourceBase_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_LightSourceBase(int32_t EntryPoint); // Function BP_LightSourceBase.BP_LightSourceBase_C.ExecuteUbergraph_BP_LightSourceBase
}; 
 
 


