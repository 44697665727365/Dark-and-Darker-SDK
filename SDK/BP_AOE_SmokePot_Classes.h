#pragma once 
#include <BP_AOE_SmokePot_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_AOE_SmokePot.BP_AOE_SmokePot_C
// Size: 0xC28(Inherited: 0xB98)
struct ABP_AOE_SmokePot_C : ABP_DCAoeDefineBase_AutoActive_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0xB98 (0xB98)
	struct UStaticMeshComponent* Smoke_Inner;  // 0xBA0 (0xBA0)
	struct UStaticMeshComponent* Smoke_Outer;  // 0xBA8 (0xBA8)
	struct UStaticMeshComponent* StaticMesh;  // 0xBB0 (0xBB0)
	double RemainTime;  // 0xBB8 (0xBB8)
	int32_t SpawingCount;  // 0xBC0 (0xBC0)
	char pad_3012[4];  // 0xBC4 (0xBC4)
	struct FVector PivotLocation;  // 0xBC8 (0xBC8)
	struct ADCPlayerCharacterBase* OwnerActor;  // 0xBE0 (0xBE0)
	struct FPrimaryAssetId GrantingAbilityId;  // 0xBE8 (0xBE8)
	int32_t Range;  // 0xBF8 (0xBF8)
	float OuterRangeRatio;  // 0xBFC (0xBFC)
	double InnerRangeRatio;  // 0xC00 (0xC00)
	double HeightRangeRatioInner;  // 0xC08 (0xC08)
	double HeightRangerRatioOuter;  // 0xC10 (0xC10)
	double TimeOuterEmerge;  // 0xC18 (0xC18)
	double TimeInnerEmerge;  // 0xC20 (0xC20)


	void DespawnFiringFX(); // Function BP_AOE_SmokePot.BP_AOE_SmokePot_C.DespawnFiringFX
	void ProcessDespawn(); // Function BP_AOE_SmokePot.BP_AOE_SmokePot_C.ProcessDespawn
	void ReceiveBeginPlay(); // Function BP_AOE_SmokePot.BP_AOE_SmokePot_C.ReceiveBeginPlay
	void AddBeginOverlapActor(struct ADCCharacterBase* CharacterBase); // Function BP_AOE_SmokePot.BP_AOE_SmokePot_C.AddBeginOverlapActor
	void ExecuteUbergraph_BP_AOE_SmokePot(int32_t EntryPoint); // Function BP_AOE_SmokePot.BP_AOE_SmokePot_C.ExecuteUbergraph_BP_AOE_SmokePot
}; 
 
 


