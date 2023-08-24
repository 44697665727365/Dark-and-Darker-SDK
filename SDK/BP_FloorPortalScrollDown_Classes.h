#pragma once 
#include <BP_FloorPortalScrollDown_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_FloorPortalScrollDown.BP_FloorPortalScrollDown_C
// Size: 0x438(Inherited: 0x411)
struct ABP_FloorPortalScrollDown_C : ABP_FloorPortalScrollBase_C
{
	char pad_1041[7];  // 0x411 (0x411)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x418 (0x418)
	struct UNiagaraComponent* FXS_FloorPortal_Down;  // 0x420 (0x420)
	float PlayPortalFXTimeline_Progress_2A30092E41F9C454BA907D8EA8ADEF73;  // 0x428 (0x428)
	enum class ETimelineDirection PlayPortalFXTimeline__Direction_2A30092E41F9C454BA907D8EA8ADEF73;  // 0x42C (0x42C)
	char pad_1069[3];  // 0x42D (0x42D)
	struct UTimelineComponent* PlayPortalFXTimeline;  // 0x430 (0x430)


	void PlayPortalFXTimeline__FinishedFunc(); // Function BP_FloorPortalScrollDown.BP_FloorPortalScrollDown_C.PlayPortalFXTimeline__FinishedFunc
	void PlayPortalFXTimeline__UpdateFunc(); // Function BP_FloorPortalScrollDown.BP_FloorPortalScrollDown_C.PlayPortalFXTimeline__UpdateFunc
	void OnOpen(); // Function BP_FloorPortalScrollDown.BP_FloorPortalScrollDown_C.OnOpen
	void PlayPortalFX(bool bOpen); // Function BP_FloorPortalScrollDown.BP_FloorPortalScrollDown_C.PlayPortalFX
	void ReceiveBeginPlay(); // Function BP_FloorPortalScrollDown.BP_FloorPortalScrollDown_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_FloorPortalScrollDown(int32_t EntryPoint); // Function BP_FloorPortalScrollDown.BP_FloorPortalScrollDown_C.ExecuteUbergraph_BP_FloorPortalScrollDown
}; 
 
 


