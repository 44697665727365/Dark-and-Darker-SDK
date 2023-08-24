#include "pch.h"
#include "SDK.h"

void UDLSSLibrary::SetDLSSSharpness(float Sharpness){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness");

	FSetDLSSSharpness parms{};	
	parms.Sharpness = Sharpness;

	ProcessEvent(fn, &parms);
}

void UDLSSLibrary::SetDLSSMode(struct UObject* WorldContextObject, uint8_t DLSSMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.SetDLSSMode");

	FSetDLSSMode parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.DLSSMode = DLSSMode;

	ProcessEvent(fn, &parms);
}

uint8_t UDLSSLibrary::QueryDLSSSupport(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport");

	FQueryDLSSSupport parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDLSSLibrary::IsDLSSSupported(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported");

	FIsDLSSSupported parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDLSSLibrary::IsDLSSModeSupported(uint8_t DLSSMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported");

	FIsDLSSModeSupported parms{};	
	parms.DLSSMode = DLSSMode;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDLSSLibrary::IsDLSSEnabled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.IsDLSSEnabled");

	FIsDLSSEnabled parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDLSSLibrary::IsDLAAEnabled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.IsDLAAEnabled");

	FIsDLAAEnabled parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<uint8_t> UDLSSLibrary::GetSupportedDLSSModes(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes");

	FGetSupportedDLSSModes parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UDLSSLibrary::GetDLSSSharpness(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness");

	FGetDLSSSharpness parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDLSSLibrary::GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange");

	FGetDLSSScreenPercentageRange parms{};	
	parms.MinScreenPercentage = MinScreenPercentage;
	parms.MaxScreenPercentage = MaxScreenPercentage;

	ProcessEvent(fn, &parms);
}

void UDLSSLibrary::GetDLSSModeInformation(uint8_t DLSSMode, struct FVector2D ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation");

	FGetDLSSModeInformation parms{};	
	parms.DLSSMode = DLSSMode;
	parms.ScreenResolution = ScreenResolution;
	parms.bIsSupported = bIsSupported;
	parms.OptimalScreenPercentage = OptimalScreenPercentage;
	parms.bIsFixedScreenPercentage = bIsFixedScreenPercentage;
	parms.MinScreenPercentage = MinScreenPercentage;
	parms.MaxScreenPercentage = MaxScreenPercentage;
	parms.OptimalSharpness = OptimalSharpness;

	ProcessEvent(fn, &parms);
}

uint8_t UDLSSLibrary::GetDLSSMode(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDLSSMode");

	FGetDLSSMode parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDLSSLibrary::GetDLSSMinimumDriverVersion(int32_t& MinDriverVersionMajor, int32_t& MinDriverVersionMinor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion");

	FGetDLSSMinimumDriverVersion parms{};	
	parms.MinDriverVersionMajor = MinDriverVersionMajor;
	parms.MinDriverVersionMinor = MinDriverVersionMinor;

	ProcessEvent(fn, &parms);
}

uint8_t UDLSSLibrary::GetDefaultDLSSMode(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode");

	FGetDefaultDLSSMode parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDLSSLibrary::EnableDLSS(bool bEnabled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.EnableDLSS");

	FEnableDLSS parms{};	
	parms.bEnabled = bEnabled;

	ProcessEvent(fn, &parms);
}

void UDLSSLibrary::EnableDLAA(bool bEnabled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.EnableDLAA");

	FEnableDLAA parms{};	
	parms.bEnabled = bEnabled;

	ProcessEvent(fn, &parms);
}

