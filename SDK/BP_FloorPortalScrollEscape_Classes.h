#pragma once 
#include <BP_FloorPortalScrollEscape_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_FloorPortalScrollEscape.BP_FloorPortalScrollEscape_C
// Size: 0x438(Inherited: 0x411)
struct ABP_FloorPortalScrollEscape_C : ABP_FloorPortalScrollBase_C
{
	char pad_1041[7];  // 0x411 (0x411)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x418 (0x418)
	struct UNiagaraComponent* FXS_FloorPortal_Escape;  // 0x420 (0x420)
	float PlayPortalFXTimeline_Progress_7EFF54324C92BC355884B081BD33F76E;  // 0x428 (0x428)
	enum class ETimelineDirection PlayPortalFXTimeline__Direction_7EFF54324C92BC355884B081BD33F76E;  // 0x42C (0x42C)
	char pad_1069[3];  // 0x42D (0x42D)
	struct UTimelineComponent* PlayPortalFXTimeline;  // 0x430 (0x430)


	void PlayPortalFXTimeline__FinishedFunc(); // Function BP_FloorPortalScrollEscape.BP_FloorPortalScrollEscape_C.PlayPortalFXTimeline__FinishedFunc
	void PlayPortalFXTimeline__UpdateFunc(); // Function BP_FloorPortalScrollEscape.BP_FloorPortalScrollEscape_C.PlayPortalFXTimeline__UpdateFunc
	void OnOpen(); // Function BP_FloorPortalScrollEscape.BP_FloorPortalScrollEscape_C.OnOpen
	void PlayPortalFX(bool bOpen); // Function BP_FloorPortalScrollEscape.BP_FloorPortalScrollEscape_C.PlayPortalFX
	void ReceiveBeginPlay(); // Function BP_FloorPortalScrollEscape.BP_FloorPortalScrollEscape_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_FloorPortalScrollEscape(int32_t EntryPoint); // Function BP_FloorPortalScrollEscape.BP_FloorPortalScrollEscape_C.ExecuteUbergraph_BP_FloorPortalScrollEscape
}; 
 
 


