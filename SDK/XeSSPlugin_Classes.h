#pragma once 
#include <XeSSPlugin_Structs.h>
 
 
 
// Class XeSSPlugin.XeSSSettings
// Size: 0x50(Inherited: 0x38)
struct UXeSSSettings : UDeveloperSettings
{
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bEnableXeSSInEditorViewports : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct FString DebugDataDumpPath;  // 0x40 (0x40)


}; 
 
 


