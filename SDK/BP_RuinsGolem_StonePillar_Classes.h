#pragma once 
#include <BP_RuinsGolem_StonePillar_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_RuinsGolem_StonePillar.BP_RuinsGolem_StonePillar_C
// Size: 0xBC8(Inherited: 0xB98)
struct ABP_RuinsGolem_StonePillar_C : ABP_DCAoeDefineBase_AutoActive_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0xB98 (0xB98)
	struct UNiagaraComponent* FXS_RuinsGolem_Pillar_Emerge;  // 0xBA0 (0xBA0)
	struct UDCGeometryCollectionComponent* DCGeometryCollection;  // 0xBA8 (0xBA8)
	struct UDecalComponent* Decal;  // 0xBB0 (0xBB0)
	struct URadialFalloff* RadialFalloff;  // 0xBB8 (0xBB8)
	struct UFieldSystemComponent* FieldSystem;  // 0xBC0 (0xBC0)


	void CollapsePillar(); // Function BP_RuinsGolem_StonePillar.BP_RuinsGolem_StonePillar_C.CollapsePillar
	void ExecuteUbergraph_BP_RuinsGolem_StonePillar(int32_t EntryPoint); // Function BP_RuinsGolem_StonePillar.BP_RuinsGolem_StonePillar_C.ExecuteUbergraph_BP_RuinsGolem_StonePillar
}; 
 
 


