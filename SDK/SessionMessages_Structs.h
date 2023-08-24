#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct SessionMessages.SessionServicePing
struct FSessionServicePing
{
	struct FString UserName;  // 0x0 (0x0)


}; 
 
 // ScriptStruct SessionMessages.SessionServiceLogSubscribe
struct FSessionServiceLogSubscribe
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct SessionMessages.SessionServiceLog
struct FSessionServiceLog
{
	struct FName Category;  // 0x0 (0x0)
	struct FString Data;  // 0x8 (0x8)
	struct FGuid InstanceId;  // 0x18 (0x18)
	double TimeSeconds;  // 0x28 (0x28)
	char Verbosity;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // ScriptStruct SessionMessages.SessionServicePong
struct FSessionServicePong
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Authorized : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FString BuildDate;  // 0x8 (0x8)
	struct FString DeviceName;  // 0x18 (0x18)
	struct FGuid InstanceId;  // 0x28 (0x28)
	struct FString InstanceName;  // 0x38 (0x38)
	struct FString PlatformName;  // 0x48 (0x48)
	struct FGuid SessionId;  // 0x58 (0x58)
	struct FString SessionName;  // 0x68 (0x68)
	struct FString SessionOwner;  // 0x78 (0x78)
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool Standalone : 1;  // 0x88 (0x88)
	char pad_137[7];  // 0x89 (0x89)


}; 
 
 // ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
struct FSessionServiceLogUnsubscribe
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 