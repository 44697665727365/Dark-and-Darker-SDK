#pragma once 
#include <DeveloperSettings_Structs.h>
 
 
 
// Class DeveloperSettings.DeveloperSettings
// Size: 0x38(Inherited: 0x28)
struct UDeveloperSettings : UObject
{
	char pad_40[16];  // 0x28 (0x28)


}; 
 
 


// Class DeveloperSettings.DeveloperSettingsBackedByCVars
// Size: 0x38(Inherited: 0x38)
struct UDeveloperSettingsBackedByCVars : UDeveloperSettings
{


}; 
 
 


// Class DeveloperSettings.PlatformSettings
// Size: 0x40(Inherited: 0x28)
struct UPlatformSettings : UObject
{
	char pad_40[24];  // 0x28 (0x28)


}; 
 
 


// Class DeveloperSettings.PlatformSettingsManager
// Size: 0x80(Inherited: 0x28)
struct UPlatformSettingsManager : UObject
{
	struct TMap<UPlatformSettings*, struct FPlatformSettingsInstances> SettingsMap;  // 0x28 (0x28)
	char pad_120[8];  // 0x78 (0x78)


}; 
 
 


