#pragma once 
#include <LocationServicesBPLibrary_Structs.h>
 
 
 
// Class LocationServicesBPLibrary.LocationServices
// Size: 0x28(Inherited: 0x28)
struct ULocationServices : UBlueprintFunctionLibrary
{


	bool StopLocationServices(); // Function LocationServicesBPLibrary.LocationServices.StopLocationServices
	bool StartLocationServices(); // Function LocationServicesBPLibrary.LocationServices.StartLocationServices
	bool IsLocationAccuracyAvailable(uint8_t Accuracy); // Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable
	bool InitLocationServices(uint8_t Accuracy, float UpdateFrequency, float MinDistanceFilter); // Function LocationServicesBPLibrary.LocationServices.InitLocationServices
	struct ULocationServicesImpl* GetLocationServicesImpl(); // Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl
	struct FLocationServicesData GetLastKnownLocation(); // Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation
	bool AreLocationServicesEnabled(); // Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled
}; 
 
 


// Class LocationServicesBPLibrary.LocationServicesImpl
// Size: 0x38(Inherited: 0x28)
struct ULocationServicesImpl : UObject
{
	struct FMulticastInlineDelegate OnLocationChanged;  // 0x28 (0x28)


}; 
 
 


