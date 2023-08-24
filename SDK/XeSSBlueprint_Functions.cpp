#include "pch.h"
#include "SDK.h"

void UXeSSBlueprintLibrary::SetXeSSQualityMode(uint8_t QualityMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function XeSSBlueprint.XeSSBlueprintLibrary.SetXeSSQualityMode");

	FSetXeSSQualityMode parms{};	
	parms.QualityMode = QualityMode;

	ProcessEvent(fn, &parms);
}

bool UXeSSBlueprintLibrary::IsXeSSSupported(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function XeSSBlueprint.XeSSBlueprintLibrary.IsXeSSSupported");

	FIsXeSSSupported parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UXeSSBlueprintLibrary::GetXeSSQualityModeInformation(uint8_t QualityMode, float& ScreenPercentage){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityModeInformation");

	FGetXeSSQualityModeInformation parms{};	
	parms.QualityMode = QualityMode;
	parms.ScreenPercentage = ScreenPercentage;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UXeSSBlueprintLibrary::GetXeSSQualityMode(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityMode");

	FGetXeSSQualityMode parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<uint8_t> UXeSSBlueprintLibrary::GetSupportedXeSSQualityModes(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function XeSSBlueprint.XeSSBlueprintLibrary.GetSupportedXeSSQualityModes");

	FGetSupportedXeSSQualityModes parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UXeSSBlueprintLibrary::GetDefaultXeSSQualityMode(struct FIntPoint ScreenResolution){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function XeSSBlueprint.XeSSBlueprintLibrary.GetDefaultXeSSQualityMode");

	FGetDefaultXeSSQualityMode parms{};	
	parms.ScreenResolution = ScreenResolution;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

