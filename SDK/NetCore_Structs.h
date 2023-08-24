#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct NetCore.EscalationState
// Size: 0x30(Inherited: 0x18)
struct FEscalationState : FStateStruct
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bLogEscalate : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool bDormant : 1;  // 0x19 (0x19)
	int16_t CooloffTime;  // 0x1A (0x1A)
	int16_t AutoEscalateTime;  // 0x1C (0x1C)
	int8_t HighestTimePeriod;  // 0x1E (0x1E)
	char pad_31[1];  // 0x1F (0x1F)
	struct TArray<int8_t> AllTimePeriods;  // 0x20 (0x20)


}; 
 
 // ScriptStruct NetCore.FastArraySerializerItem
struct FFastArraySerializerItem
{
	int32_t ReplicationID;  // 0x0 (0x0)
	int32_t ReplicationKey;  // 0x4 (0x4)
	int32_t MostRecentArrayReplicationKey;  // 0x8 (0x8)


}; 
 
 // ScriptStruct NetCore.FastArraySerializer
struct FFastArraySerializer
{
	char pad_0[84];  // 0x0 (0x0)
	int32_t ArrayReplicationKey;  // 0x54 (0x54)
	char pad_88[168];  // 0x58 (0x58)
	uint8_t DeltaFlags;  // 0x100 (0x100)
	char pad_257[7];  // 0x101 (0x101)


}; 
 
 // ScriptStruct NetCore.NetAnalyticsDataConfig
struct FNetAnalyticsDataConfig
{
	struct FName DataName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bEnabled : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // ScriptStruct NetCore.StateStruct
struct FStateStruct
{
	char pad_0[8];  // 0x0 (0x0)
	struct FString StateName;  // 0x8 (0x8)


}; 
 
 // ScriptStruct NetCore.NetFaultState
// Size: 0x40(Inherited: 0x30)
struct FNetFaultState : FEscalationState
{
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bCloseConnection : 1;  // 0x30 (0x30)
	char pad_49[1];  // 0x31 (0x31)
	int16_t EscalateQuotaFaultsPerPeriod;  // 0x32 (0x32)
	int8_t EscalateQuotaFaultPercentPerPeriod;  // 0x34 (0x34)
	char pad_53[1];  // 0x35 (0x35)
	int16_t DescalateQuotaFaultsPerPeriod;  // 0x36 (0x36)
	int8_t DescalateQuotaFaultPercentPerPeriod;  // 0x38 (0x38)
	int8_t EscalateQuotaTimePeriod;  // [x39 ([x39)
	char pad_58[6];  // 0x3A (0x3A)


}; 
 
 