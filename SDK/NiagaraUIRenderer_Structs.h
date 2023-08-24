#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function NiagaraUIRenderer.NiagaraSystemWidget.UpdateNiagaraSystemReference
struct FUpdateNiagaraSystemReference
{
	struct UNiagaraSystem* NewNiagaraSystem;  // 0x0 (0x0)


}; 
 
 // Function NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem
struct FActivateSystem
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Reset : 1;  // 0x0 (0x0)


}; 
 
 // Function NiagaraUIRenderer.NiagaraSystemWidget.UpdateTickWhenPaused
struct FUpdateTickWhenPaused
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool NewTickWhenPaused : 1;  // 0x0 (0x0)


}; 
 
 // Function NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent
struct FGetNiagaraComponent
{
	struct UNiagaraUIComponent* ReturnValue;  // 0x0 (0x0)


}; 
 
 