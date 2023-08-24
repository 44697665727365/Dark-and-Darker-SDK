#pragma once 
#include <TencentGME_Wwise_Structs.h>
 
 
 
// Class TencentGME_Wwise.TencentGMEBlueprintLibrary
// Size: 0x28(Inherited: 0x28)
struct UTencentGMEBlueprintLibrary : UBlueprintFunctionLibrary
{


	int32_t StopRecording(); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.StopRecording
	int32_t StopPlayFile(); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.StopPlayFile
	int32_t StartRecording(struct FString fileid); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.StartRecording
	int32_t SpeechToText(struct FString fileid, struct FString speechLanguage, struct FString translateLanguage); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SpeechToText
	int32_t SetUserID(struct FString userID); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetUserID
	void SetSelfPosition(int32_t PositionX, int32_t PositionY, int32_t PositionZ); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetSelfPosition
	int32_t SetRoomID(struct FString roomID); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetRoomID
	void SetRegion(uint8_t Region); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetRegion
	void SetRangeAudioTeamMode(uint8_t teamMode); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetRangeAudioTeamMode
	void SetRangeAudioTeamID(int32_t TeamID); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetRangeAudioTeamID
	void SetRangeAudioRecvRange(int32_t Range); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetRangeAudioRecvRange
	void SetLogLevel(uint8_t logLevelWrite, uint8_t logLevelPrint); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetLogLevel
	void SetAudioStreamProfile(uint8_t profile); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetAudioStreamProfile
	bool SendPlugin_GetEnableLoopbackWithAkComponent(struct UAkComponent* AkComponent); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SendPlugin_GetEnableLoopbackWithAkComponent
	bool SendPlugin_GetEnableLoopbackWithActor(struct AActor* Actor); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SendPlugin_GetEnableLoopbackWithActor
	void SendPlugin_EnableLoopbackWithAkComponent(struct UAkComponent* AkComponent, bool enableLoopback); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SendPlugin_EnableLoopbackWithAkComponent
	void SendPlugin_EnableLoopbackWithActor(struct AActor* Actor, bool enableLoopback); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SendPlugin_EnableLoopbackWithActor
	void RemoveAudioBlockList(struct FString TargetId); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.RemoveAudioBlockList
	void ReceivePlugin_SetReceiveOpenIDWithAkComponent(struct UAkComponent* AkComponent, struct FString userID); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.ReceivePlugin_SetReceiveOpenIDWithAkComponent
	void ReceivePlugin_SetReceiveOpenIDWithActor(struct AActor* Actor, struct FString userID); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.ReceivePlugin_SetReceiveOpenIDWithActor
	void ReceivePlugin_GetReceiveOpenIDWithAkComponent(struct UAkComponent* AkComponent, struct FString& userID); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.ReceivePlugin_GetReceiveOpenIDWithAkComponent
	void ReceivePlugin_GetReceiveOpenIDWithActor(struct AActor* Actor, struct FString& userID); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.ReceivePlugin_GetReceiveOpenIDWithActor
	int32_t PlayRecordFile(struct FString fileid); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.PlayRecordFile
	void GMEResume(); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GMEResume
	void GMEPause(); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GMEPause
	int32_t GetVoiceFileDuration(struct FString fileid); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GetVoiceFileDuration
	int32_t GetMessage(int32_t& localUTCTime, int32_t& MessageType, int32_t& code, struct FString& message1, struct FString& message2); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GetMessage
	struct FString GetGMEVersion(); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GetGMEVersion
	int32_t GetAudioSendStreamLevel(); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GetAudioSendStreamLevel
	int32_t GetAudioRecvStreamLevel(struct FString TargetId); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GetAudioRecvStreamLevel
	void EnableBluetoothMic(bool Enable); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.EnableBluetoothMic
	void AddAudioBlockList(struct FString TargetId); // Function TencentGME_Wwise.TencentGMEBlueprintLibrary.AddAudioBlockList
}; 
 
 


// Class TencentGME_Wwise.TencentGMESelfPositioner
// Size: 0x2C0(Inherited: 0x2A0)
struct UTencentGMESelfPositioner : USceneComponent
{
	int32_t MinimumDeltaPosition;  // 0x2A0 (0x2A0)
	char pad_676[28];  // 0x2A4 (0x2A4)


	struct FVector GetPosition(); // Function TencentGME_Wwise.TencentGMESelfPositioner.GetPosition
}; 
 
 


