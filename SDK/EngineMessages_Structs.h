#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct EngineMessages.EngineServiceAuthDeny
struct FEngineServiceAuthDeny
{
	struct FString UserName;  // 0x0 (0x0)
	struct FString UserToDeny;  // 0x10 (0x10)


}; 
 
 // ScriptStruct EngineMessages.EngineServicePing
struct FEngineServicePing
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct EngineMessages.EngineServicePong
struct FEngineServicePong
{
	struct FString CurrentLevel;  // 0x0 (0x0)
	int32_t EngineVersion;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool HasBegunPlay : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct FGuid InstanceId;  // 0x18 (0x18)
	struct FString InstanceType;  // 0x28 (0x28)
	struct FGuid SessionId;  // 0x38 (0x38)
	float WorldTimeSeconds;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)


}; 
 
 // ScriptStruct EngineMessages.EngineServiceExecuteCommand
struct FEngineServiceExecuteCommand
{
	struct FString Command;  // 0x0 (0x0)
	struct FString UserName;  // 0x10 (0x10)


}; 
 
 // ScriptStruct EngineMessages.EngineServiceAuthGrant
struct FEngineServiceAuthGrant
{
	struct FString UserName;  // 0x0 (0x0)
	struct FString UserToGrant;  // 0x10 (0x10)


}; 
 
 // ScriptStruct EngineMessages.EngineServiceTerminate
struct FEngineServiceTerminate
{
	struct FString UserName;  // 0x0 (0x0)


}; 
 
 // ScriptStruct EngineMessages.EngineServiceNotification
struct FEngineServiceNotification
{
	struct FString Text;  // 0x0 (0x0)
	double TimeSeconds;  // 0x10 (0x10)


}; 
 
 