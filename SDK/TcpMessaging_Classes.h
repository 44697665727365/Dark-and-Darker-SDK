#pragma once 
#include <TcpMessaging_Structs.h>
 
 
 
// Class TcpMessaging.TcpMessagingSettings
// Size: 0x60(Inherited: 0x28)
struct UTcpMessagingSettings : UObject
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool EnableTransport : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct FString ListenEndpoint;  // 0x30 (0x30)
	struct TArray<struct FString> ConnectToEndpoints;  // 0x40 (0x40)
	int32_t ConnectionRetryDelay;  // 0x50 (0x50)
	int32_t ConnectionRetryPeriod;  // 0x54 (0x54)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool bStopServiceWhenAppDeactivates : 1;  // 0x58 (0x58)
	char pad_89[7];  // 0x59 (0x59)


}; 
 
 


