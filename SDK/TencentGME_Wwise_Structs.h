#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.EnableBluetoothMic
struct FEnableBluetoothMic
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Enable : 1;  // 0x0 (0x0)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.AddAudioBlockList
struct FAddAudioBlockList
{
	struct FString TargetId;  // 0x0 (0x0)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GetAudioRecvStreamLevel
struct FGetAudioRecvStreamLevel
{
	struct FString TargetId;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.StopPlayFile
struct FStopPlayFile
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GetAudioSendStreamLevel
struct FGetAudioSendStreamLevel
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GetVoiceFileDuration
struct FGetVoiceFileDuration
{
	struct FString fileid;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.StartRecording
struct FStartRecording
{
	struct FString fileid;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetSelfPosition
struct FSetSelfPosition
{
	int32_t PositionX;  // 0x0 (0x0)
	int32_t PositionY;  // 0x4 (0x4)
	int32_t PositionZ;  // 0x8 (0x8)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GetGMEVersion
struct FGetGMEVersion
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GetMessage
struct FGetMessage
{
	int32_t localUTCTime;  // 0x0 (0x0)
	int32_t MessageType;  // 0x4 (0x4)
	int32_t code;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FString message1;  // 0x10 (0x10)
	struct FString message2;  // 0x20 (0x20)
	int32_t ReturnValue;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.PlayRecordFile
struct FPlayRecordFile
{
	struct FString fileid;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetRangeAudioRecvRange
struct FSetRangeAudioRecvRange
{
	int32_t Range;  // 0x0 (0x0)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetLogLevel
struct FSetLogLevel
{
	uint8_t logLevelWrite;  // 0x0 (0x0)
	uint8_t logLevelPrint;  // 0x1 (0x1)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.ReceivePlugin_GetReceiveOpenIDWithActor
struct FReceivePlugin_GetReceiveOpenIDWithActor
{
	struct AActor* Actor;  // 0x0 (0x0)
	struct FString userID;  // 0x8 (0x8)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.ReceivePlugin_GetReceiveOpenIDWithAkComponent
struct FReceivePlugin_GetReceiveOpenIDWithAkComponent
{
	struct UAkComponent* AkComponent;  // 0x0 (0x0)
	struct FString userID;  // 0x8 (0x8)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.ReceivePlugin_SetReceiveOpenIDWithActor
struct FReceivePlugin_SetReceiveOpenIDWithActor
{
	struct AActor* Actor;  // 0x0 (0x0)
	struct FString userID;  // 0x8 (0x8)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.ReceivePlugin_SetReceiveOpenIDWithAkComponent
struct FReceivePlugin_SetReceiveOpenIDWithAkComponent
{
	struct UAkComponent* AkComponent;  // 0x0 (0x0)
	struct FString userID;  // 0x8 (0x8)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.RemoveAudioBlockList
struct FRemoveAudioBlockList
{
	struct FString TargetId;  // 0x0 (0x0)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SendPlugin_EnableLoopbackWithActor
struct FSendPlugin_EnableLoopbackWithActor
{
	struct AActor* Actor;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool enableLoopback : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SendPlugin_EnableLoopbackWithAkComponent
struct FSendPlugin_EnableLoopbackWithAkComponent
{
	struct UAkComponent* AkComponent;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool enableLoopback : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SendPlugin_GetEnableLoopbackWithActor
struct FSendPlugin_GetEnableLoopbackWithActor
{
	struct AActor* Actor;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SendPlugin_GetEnableLoopbackWithAkComponent
struct FSendPlugin_GetEnableLoopbackWithAkComponent
{
	struct UAkComponent* AkComponent;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetAudioStreamProfile
struct FSetAudioStreamProfile
{
	uint8_t profile;  // 0x0 (0x0)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetRangeAudioTeamID
struct FSetRangeAudioTeamID
{
	int32_t TeamID;  // 0x0 (0x0)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetRangeAudioTeamMode
struct FSetRangeAudioTeamMode
{
	uint8_t teamMode;  // 0x0 (0x0)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetRegion
struct FSetRegion
{
	uint8_t Region;  // 0x0 (0x0)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetRoomID
struct FSetRoomID
{
	struct FString roomID;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetUserID
struct FSetUserID
{
	struct FString userID;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SpeechToText
struct FSpeechToText
{
	struct FString fileid;  // 0x0 (0x0)
	struct FString speechLanguage;  // 0x10 (0x10)
	struct FString translateLanguage;  // 0x20 (0x20)
	int32_t ReturnValue;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.StopRecording
struct FStopRecording
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function TencentGME_Wwise.TencentGMESelfPositioner.GetPosition
struct FGetPosition
{
	struct FVector ReturnValue;  // 0x0 (0x0)


}; 
 
 