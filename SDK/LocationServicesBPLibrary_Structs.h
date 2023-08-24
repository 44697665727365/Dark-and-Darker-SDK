#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function LocationServicesBPLibrary.LocationServices.StartLocationServices
struct FStartLocationServices
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // DelegateFunction LocationServicesBPLibrary.LocationServicesData_OnLocationChanged__DelegateSignature
struct FLocationServicesData_OnLocationChanged__DelegateSignature
{
	struct FLocationServicesData LocationData;  // 0x0 (0x0)


}; 
 
 // Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable
struct FIsLocationAccuracyAvailable
{
	uint8_t Accuracy;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool ReturnValue : 1;  // 0x1 (0x1)


}; 
 
 // ScriptStruct LocationServicesBPLibrary.LocationServicesData
struct FLocationServicesData
{
	float Timestamp;  // 0x0 (0x0)
	float Longitude;  // 0x4 (0x4)
	float Latitude;  // 0x8 (0x8)
	float HorizontalAccuracy;  // 0xC (0xC)
	float VerticalAccuracy;  // 0x10 (0x10)
	float Altitude;  // 0x14 (0x14)


}; 
 
 // Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled
struct FAreLocationServicesEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation
struct FGetLastKnownLocation
{
	struct FLocationServicesData ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl
struct FGetLocationServicesImpl
{
	struct ULocationServicesImpl* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function LocationServicesBPLibrary.LocationServices.InitLocationServices
struct FInitLocationServices
{
	uint8_t Accuracy;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float UpdateFrequency;  // 0x4 (0x4)
	float MinDistanceFilter;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function LocationServicesBPLibrary.LocationServices.StopLocationServices
struct FStopLocationServices
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 