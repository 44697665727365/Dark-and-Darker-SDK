#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct DeveloperSettings.PerPlatformSettings
struct FPerPlatformSettings
{
	struct TArray<struct UPlatformSettings*> Settings;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DeveloperSettings.PlatformSettingsInstances
struct FPlatformSettingsInstances
{
	struct UPlatformSettings* PlatformInstance;  // 0x0 (0x0)
	struct TMap<struct FName, struct UPlatformSettings*> OtherPlatforms;  // 0x8 (0x8)


}; 
 
 