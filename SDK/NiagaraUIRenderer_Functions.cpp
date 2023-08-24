#include "pch.h"
#include "SDK.h"

void UNiagaraSystemWidget::UpdateTickWhenPaused(bool NewTickWhenPaused){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NiagaraUIRenderer.NiagaraSystemWidget.UpdateTickWhenPaused");

	FUpdateTickWhenPaused parms{};	
	parms.NewTickWhenPaused = NewTickWhenPaused;

	ProcessEvent(fn, &parms);
}

void UNiagaraSystemWidget::UpdateNiagaraSystemReference(struct UNiagaraSystem* NewNiagaraSystem){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NiagaraUIRenderer.NiagaraSystemWidget.UpdateNiagaraSystemReference");

	FUpdateNiagaraSystemReference parms{};	
	parms.NewNiagaraSystem = NewNiagaraSystem;

	ProcessEvent(fn, &parms);
}

struct UNiagaraUIComponent* UNiagaraSystemWidget::GetNiagaraComponent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent");

	FGetNiagaraComponent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UNiagaraSystemWidget::DeactivateSystem(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NiagaraUIRenderer.NiagaraSystemWidget.DeactivateSystem");

	FDeactivateSystem parms{};	

	ProcessEvent(fn, &parms);
}

void UNiagaraSystemWidget::ActivateSystem(bool Reset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem");

	FActivateSystem parms{};	
	parms.Reset = Reset;

	ProcessEvent(fn, &parms);
}

