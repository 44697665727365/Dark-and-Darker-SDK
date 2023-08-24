#pragma once 
#include <BP_AoeSpawnCharacter_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_AoeSpawnCharacter.BP_AoeSpawnCharacter_C
// Size: 0x11E0(Inherited: 0x11B8)
struct ABP_AoeSpawnCharacter_C : ABP_DCMonsterBaseWithOptions_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct ABP_DCAoeDefineBase_AutoActive_C* SpawnAoe;  // 0x11C0 (0x11C0)
	struct FPrimaryAssetId In Id;  // 0x11C8 (0x11C8)
	UObject* NewVar_0_1;  // 0x11D8 (0x11D8)


	void OnGameState(struct FGameStateData& InGameStateData); // Function BP_AoeSpawnCharacter.BP_AoeSpawnCharacter_C.OnGameState
	void ExecuteUbergraph_BP_AoeSpawnCharacter(int32_t EntryPoint); // Function BP_AoeSpawnCharacter.BP_AoeSpawnCharacter_C.ExecuteUbergraph_BP_AoeSpawnCharacter
}; 
 
 


