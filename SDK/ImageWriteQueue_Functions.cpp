#include "pch.h"
#include "SDK.h"

void UImageWriteBlueprintLibrary::ExportToDisk(struct UTexture* Texture, struct FString Filename, struct FImageWriteOptions& Options){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk");

	FExportToDisk parms{};	
	parms.Texture = Texture;
	parms.Filename = Filename;
	parms.Options = Options;

	ProcessEvent(fn, &parms);
}

