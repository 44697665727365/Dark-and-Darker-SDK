#pragma once 
#include <NetCore_Structs.h>
 
 
 
// Class NetCore.NetAnalyticsAggregatorConfig
// Size: [006(Inheri/Game/Dungestruct UNetAnalyticsAggregatorConfig : UObject
{
	struct TArray<struct FNetAnalyticsDataConfig> NetAnalyticsData;  // 0x28 (0x28)


}; 
 
 


// Class NetCore.StatePerObjectConfig
// Size: 0x68(Inherited: 0x28)
struct UStatePerObjectConfig : UObject
{
	char pad_40[40];  // 0x28 (0x28)
	struct FString PerObjectConfigSection;  // 0x50 (0x50)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool bEnabled : 1;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)


}; 
 
 


// Class NetCore.EscalationManagerConfig
// Size: 0x88(Inherited: 0x68)
struct UEscalationManagerConfig : UStatePerObjectConfig
{
	struct TArray<struct FString> EscalationSeverity;  // 0x68 (0x68)
	char pad_120[16];  // 0x78 (0x78)


}; 
 
 


