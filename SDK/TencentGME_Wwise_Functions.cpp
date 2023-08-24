#include "pch.h"
#include "SDK.h"

int32_t UTencentGMEBlueprintLibrary::StopRecording(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.StopRecording");

	FStopRecording parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UTencentGMEBlueprintLibrary::StopPlayFile(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.StopPlayFile");

	FStopPlayFile parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UTencentGMEBlueprintLibrary::StartRecording(struct FString fileid){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.StartRecording");

	FStartRecording parms{};	
	parms.fileid = fileid;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UTencentGMEBlueprintLibrary::SpeechToText(struct FString fileid, struct FString speechLanguage, struct FString translateLanguage){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SpeechToText");

	FSpeechToText parms{};	
	parms.fileid = fileid;
	parms.speechLanguage = speechLanguage;
	parms.translateLanguage = translateLanguage;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UTencentGMEBlueprintLibrary::SetUserID(struct FString userID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetUserID");

	FSetUserID parms{};	
	parms.userID = userID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UTencentGMEBlueprintLibrary::SetSelfPosition(int32_t PositionX, int32_t PositionY, int32_t PositionZ){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetSelfPosition");

	FSetSelfPosition parms{};	
	parms.PositionX = PositionX;
	parms.PositionY = PositionY;
	parms.PositionZ = PositionZ;

	ProcessEvent(fn, &parms);
}

int32_t UTencentGMEBlueprintLibrary::SetRoomID(struct FString roomID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetRoomID");

	FSetRoomID parms{};	
	parms.roomID = roomID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UTencentGMEBlueprintLibrary::SetRegion(uint8_t Region){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetRegion");

	FSetRegion parms{};	
	parms.Region = Region;

	ProcessEvent(fn, &parms);
}

void UTencentGMEBlueprintLibrary::SetRangeAudioTeamMode(uint8_t teamMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetRangeAudioTeamMode");

	FSetRangeAudioTeamMode parms{};	
	parms.teamMode = teamMode;

	ProcessEvent(fn, &parms);
}

void UTencentGMEBlueprintLibrary::SetRangeAudioTeamID(int32_t TeamID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetRangeAudioTeamID");

	FSetRangeAudioTeamID parms{};	
	parms.TeamID = TeamID;

	ProcessEvent(fn, &parms);
}

void UTencentGMEBlueprintLibrary::SetRangeAudioRecvRange(int32_t Range){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetRangeAudioRecvRange");

	FSetRangeAudioRecvRange parms{};	
	parms.Range = Range;

	ProcessEvent(fn, &parms);
}

void UTencentGMEBlueprintLibrary::SetLogLevel(uint8_t logLevelWrite, uint8_t logLevelPrint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetLogLevel");

	FSetLogLevel parms{};	
	parms.logLevelWrite = logLevelWrite;
	parms.logLevelPrint = logLevelPrint;

	ProcessEvent(fn, &parms);
}

void UTencentGMEBlueprintLibrary::SetAudioStreamProfile(uint8_t profile){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetAudioStreamProfile");

	FSetAudioStreamProfile parms{};	
	parms.profile = profile;

	ProcessEvent(fn, &parms);
}

bool UTencentGMEBlueprintLibrary::SendPlugin_GetEnableLoopbackWithAkComponent(struct UAkComponent* AkComponent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SendPlugin_GetEnableLoopbackWithAkComponent");

	FSendPlugin_GetEnableLoopbackWithAkComponent parms{};	
	parms.AkComponent = AkComponent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTencentGMEBlueprintLibrary::SendPlugin_GetEnableLoopbackWithActor(struct AActor* Actor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SendPlugin_GetEnableLoopbackWithActor");

	FSendPlugin_GetEnableLoopbackWithActor parms{};	
	parms.Actor = Actor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UTencentGMEBlueprintLibrary::SendPlugin_EnableLoopbackWithAkComponent(struct UAkComponent* AkComponent, bool enableLoopback){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SendPlugin_EnableLoopbackWithAkComponent");

	FSendPlugin_EnableLoopbackWithAkComponent parms{};	
	parms.AkComponent = AkComponent;
	parms.enableLoopback = enableLoopback;

	ProcessEvent(fn, &parms);
}

void UTencentGMEBlueprintLibrary::SendPlugin_EnableLoopbackWithActor(struct AActor* Actor, bool enableLoopback){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SendPlugin_EnableLoopbackWithActor");

	FSendPlugin_EnableLoopbackWithActor parms{};	
	parms.Actor = Actor;
	parms.enableLoopback = enableLoopback;

	ProcessEvent(fn, &parms);
}

void UTencentGMEBlueprintLibrary::RemoveAudioBlockList(struct FString TargetId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.RemoveAudioBlockList");

	FRemoveAudioBlockList parms{};	
	parms.TargetId = TargetId;

	ProcessEvent(fn, &parms);
}

void UTencentGMEBlueprintLibrary::ReceivePlugin_SetReceiveOpenIDWithAkComponent(struct UAkComponent* AkComponent, struct FString userID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.ReceivePlugin_SetReceiveOpenIDWithAkComponent");

	FReceivePlugin_SetReceiveOpenIDWithAkComponent parms{};	
	parms.AkComponent = AkComponent;
	parms.userID = userID;

	ProcessEvent(fn, &parms);
}

void UTencentGMEBlueprintLibrary::ReceivePlugin_SetReceiveOpenIDWithActor(struct AActor* Actor, struct FString userID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.ReceivePlugin_SetReceiveOpenIDWithActor");

	FReceivePlugin_SetReceiveOpenIDWithActor parms{};	
	parms.Actor = Actor;
	parms.userID = userID;

	ProcessEvent(fn, &parms);
}

void UTencentGMEBlueprintLibrary::ReceivePlugin_GetReceiveOpenIDWithAkComponent(struct UAkComponent* AkComponent, struct FString& userID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.ReceivePlugin_GetReceiveOpenIDWithAkComponent");

	FReceivePlugin_GetReceiveOpenIDWithAkComponent parms{};	
	parms.AkComponent = AkComponent;
	parms.userID = userID;

	ProcessEvent(fn, &parms);
}

void UTencentGMEBlueprintLibrary::ReceivePlugin_GetReceiveOpenIDWithActor(struct AActor* Actor, struct FString& userID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.ReceivePlugin_GetReceiveOpenIDWithActor");

	FReceivePlugin_GetReceiveOpenIDWithActor parms{};	
	parms.Actor = Actor;
	parms.userID = userID;

	ProcessEvent(fn, &parms);
}

int32_t UTencentGMEBlueprintLibrary::PlayRecordFile(struct FString fileid){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.PlayRecordFile");

	FPlayRecordFile parms{};	
	parms.fileid = fileid;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UTencentGMEBlueprintLibrary::GMEResume(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GMEResume");

	FGMEResume parms{};	

	ProcessEvent(fn, &parms);
}

void UTencentGMEBlueprintLibrary::GMEPause(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GMEPause");

	FGMEPause parms{};	

	ProcessEvent(fn, &parms);
}

int32_t UTencentGMEBlueprintLibrary::GetVoiceFileDuration(struct FString fileid){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GetVoiceFileDuration");

	FGetVoiceFileDuration parms{};	
	parms.fileid = fileid;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UTencentGMEBlueprintLibrary::GetMessage(int32_t& localUTCTime, int32_t& MessageType, int32_t& code, struct FString& message1, struct FString& message2){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GetMessage");

	FGetMessage parms{};	
	parms.localUTCTime = localUTCTime;
	parms.MessageType = MessageType;
	parms.code = code;
	parms.message1 = message1;
	parms.message2 = message2;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UTencentGMEBlueprintLibrary::GetGMEVersion(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GetGMEVersion");

	FGetGMEVersion parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UTencentGMEBlueprintLibrary::GetAudioSendStreamLevel(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GetAudioSendStreamLevel");

	FGetAudioSendStreamLevel parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UTencentGMEBlueprintLibrary::GetAudioRecvStreamLevel(struct FString TargetId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GetAudioRecvStreamLevel");

	FGetAudioRecvStreamLevel parms{};	
	parms.TargetId = TargetId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UTencentGMEBlueprintLibrary::EnableBluetoothMic(bool Enable){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.EnableBluetoothMic");

	FEnableBluetoothMic parms{};	
	parms.Enable = Enable;

	ProcessEvent(fn, &parms);
}

void UTencentGMEBlueprintLibrary::AddAudioBlockList(struct FString TargetId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMEBlueprintLibrary.AddAudioBlockList");

	FAddAudioBlockList parms{};	
	parms.TargetId = TargetId;

	ProcessEvent(fn, &parms);
}

struct FVector UTencentGMESelfPositioner::GetPosition(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TencentGME_Wwise.TencentGMESelfPositioner.GetPosition");

	FGetPosition parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

