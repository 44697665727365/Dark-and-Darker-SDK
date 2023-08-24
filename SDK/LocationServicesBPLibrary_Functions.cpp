#include "pch.h"
#include "SDK.h"

bool ULocationServices::StopLocationServices(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.StopLocationServices");

	FStopLocationServices parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool ULocationServices::StartLocationServices(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.StartLocationServices");

	FStartLocationServices parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool ULocationServices::IsLocationAccuracyAvailable(uint8_t Accuracy){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable");

	FIsLocationAccuracyAvailable parms{};	
	parms.Accuracy = Accuracy;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool ULocationServices::InitLocationServices(uint8_t Accuracy, float UpdateFrequency, float MinDistanceFilter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.InitLocationServices");

	FInitLocationServices parms{};	
	parms.Accuracy = Accuracy;
	parms.UpdateFrequency = UpdateFrequency;
	parms.MinDistanceFilter = MinDistanceFilter;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct ULocationServicesImpl* ULocationServices::GetLocationServicesImpl(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl");

	FGetLocationServicesImpl parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FLocationServicesData ULocationServices::GetLastKnownLocation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation");

	FGetLastKnownLocation parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool ULocationServices::AreLocationServicesEnabled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled");

	FAreLocationServicesEnabled parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

