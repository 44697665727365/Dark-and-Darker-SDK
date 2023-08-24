#pragma once 
#include <NiagaraUIRenderer_Structs.h>
 
 
 
// Class NiagaraUIRenderer.NiagaraSystemWidget
// Size: 0x1D8(Inherited: 0x150)
struct UNiagaraSystemWidget : UWidget
{
	struct UNiagaraSystem* NiagaraSystemReference;  // 0x150 (0x150)
	struct TMap<struct UMaterialInterface*, struct UMaterialInterface*> MaterialRemapList;  // 0x158 (0x158)
	char pad_424_1 : 7;  // 0x1A8 (0x1A8)
	bool AutoActivate : 1;  // 0x1A8 (0x1A8)
	char pad_425_1 : 7;  // 0x1A9 (0x1A9)
	bool TickWhenPaused : 1;  // 0x1A9 (0x1A9)
	char pad_426_1 : 7;  // 0x1AA (0x1AA)
	bool FakeDepthScale : 1;  // 0x1AA (0x1AA)
	char pad_427[1];  // 0x1AB (0x1AB)
	float FakeDepthScaleDistance;  // 0x1AC (0x1AC)
	char pad_432_1 : 7;  // 0x1B0 (0x1B0)
	bool ShowDebugSystemInWorld : 1;  // 0x1B0 (0x1B0)
	char pad_433_1 : 7;  // 0x1B1 (0x1B1)
	bool DisableWarnings : 1;  // 0x1B1 (0x1B1)
	char pad_434[22];  // 0x1B2 (0x1B2)
	struct ANiagaraUIActor* NiagaraActor;  // 0x1C8 (0x1C8)
	struct UNiagaraUIComponent* NiagaraComponent;  // 0x1D0 (0x1D0)


	void UpdateTickWhenPaused(bool NewTickWhenPaused); // Function NiagaraUIRenderer.NiagaraSystemWidget.UpdateTickWhenPaused
	void UpdateNiagaraSystemReference(struct UNiagaraSystem* NewNiagaraSystem); // Function NiagaraUIRenderer.NiagaraSystemWidget.UpdateNiagaraSystemReference
	struct UNiagaraUIComponent* GetNiagaraComponent(); // Function NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent
	void DeactivateSystem(); // Function NiagaraUIRenderer.NiagaraSystemWidget.DeactivateSystem
	void ActivateSystem(bool Reset); // Function NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem
}; 
 
 


// Class NiagaraUIRenderer.NiagaraUIActor
// Size: 0x290(Inherited: 0x290)
struct ANiagaraUIActor : AActor
{


}; 
 
 


// Class NiagaraUIRenderer.NiagaraUIComponent
// Size: 0x7E0(Inherited: 0x7D0)
struct UNiagaraUIComponent : UNiagaraComponent
{
	char pad_2000[16];  // 0x7D0 (0x7D0)


}; 
 
 


