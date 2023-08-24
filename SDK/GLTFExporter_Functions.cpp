#include "pch.h"
#include "SDK.h"

bool UGLTFExporter::ExportToGLTF(struct UObject* Object, struct FString FilePath, struct UGLTFExportOptions* Options, struct TSet<struct AActor*>& SelectedActors, struct FGLTFExportMessages& OutMessages){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GLTFExporter.GLTFExporter.ExportToGLTF");

	FExportToGLTF parms{};	
	parms.Object = Object;
	parms.FilePath = FilePath;
	parms.Options = Options;
	parms.SelectedActors = SelectedActors;
	parms.OutMessages = OutMessages;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGLTFExportOptions::ResetToDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GLTFExporter.GLTFExportOptions.ResetToDefault");

	FResetToDefault parms{};	

	ProcessEvent(fn, &parms);
}

void UGLTFProxyOptions::ResetToDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GLTFExporter.GLTFProxyOptions.ResetToDefault");

	FResetToDefault parms{};	

	ProcessEvent(fn, &parms);
}

