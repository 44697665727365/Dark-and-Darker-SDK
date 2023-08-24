#pragma once 
#include <BP_SceneRender_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_SceneRender.BP_SceneRender_C
// Size: 0x2D0(Inherited: 0x290)
struct ABP_SceneRender_C : AActor
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x290 (0x290)
	struct UExponentialHeightFogComponent* ExponentialHeightFog;  // 0x298 (0x298)
	struct UPostProcessComponent* PostProcess;  // 0x2A0 (0x2A0)
	struct USceneComponent* DefaultSceneRoot;  // 0x2A8 (0x2A8)
	struct TArray<struct FString> ConsoleCommands;  // 0x2B0 (0x2B0)
	struct TArray<struct FString> RevertConsoleCommands;  // 0x2C0 (0x2C0)


	void Revert(); // Function BP_SceneRender.BP_SceneRender_C.Revert
	void SetRender(); // Function BP_SceneRender.BP_SceneRender_C.SetRender
	void ReceiveBeginPlay(); // Function BP_SceneRender.BP_SceneRender_C.ReceiveBeginPlay
	void ReceiveDestroyed(); // Function BP_SceneRender.BP_SceneRender_C.ReceiveDestroyed
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_SceneRender.BP_SceneRender_C.ReceiveEndPlay
	void ExecuteUbergraph_BP_SceneRender(int32_t EntryPoint); // Function BP_SceneRender.BP_SceneRender_C.ExecuteUbergraph_BP_SceneRender
}; 
 
 


