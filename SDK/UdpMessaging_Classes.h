#pragma once 
#include <UdpMessaging_Structs.h>
 
 
 
// Class UdpMessaging.UdpMessagingSettings
// Size: 0xB8(Inherited: 0x28)
struct UUdpMessagingSettings : UObject
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool EnabledByDefault : 1;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool EnableTransport : 1;  // 0x29 (0x29)
	char pad_42_1 : 7;  // 0x2A (0x2A)
	bool bAutoRepair : 1;  // 0x2A (0x2A)
	char pad_43[1];  // 0x2B (0x2B)
	float MaxSendRate;  // 0x2C (0x2C)
	uint32_t AutoRepairAttemptLimit;  // 0x30 (0x30)
	uint16_t WorkQueueSize;  // 0x34 (0x34)
	char pad_54_1 : 7;  // 0x36 (0x36)
	bool bStopServiceWhenAppDeactivates : 1;  // 0x36 (0x36)
	char pad_55[1];  // 0x37 (0x37)
	struct FString UnicastEndpoint;  // 0x38 (0x38)
	struct FString MulticastEndpoint;  // 0x48 (0x48)
	uint8_t MessageFormat;  // 0x58 (0x58)
	char MulticastTimeToLive;  // 0x59 (0x59)
	char pad_90[6];  // 0x5A (0x5A)
	struct TArray<struct FString> StaticEndpoints;  // 0x60 (0x60)
	struct TArray<struct FString> ExcludedEndpoints;  // 0x70 (0x70)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool EnableTunnel : 1;  // 0x80 (0x80)
	char pad_129[7];  // 0x81 (0x81)
	struct FString TunnelUnicastEndpoint;  // 0x88 (0x88)
	struct FString TunnelMulticastEndpoint;  // 0x98 (0x98)
	struct TArray<struct FString> RemoteTunnelEndpoints;  // 0xA8 (0xA8)


}; 
 
 


