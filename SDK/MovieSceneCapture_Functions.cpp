#include "pch.h"
#include "SDK.h"

bool UMovieSceneCaptureEnvironment::IsCaptureInProgress(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress");

	FIsCaptureInProgress parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMovieSceneCaptureEnvironment::GetCaptureFrameNumber(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber");

	FGetCaptureFrameNumber parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMovieSceneCaptureEnvironment::GetCaptureElapsedTime(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime");

	FGetCaptureElapsedTime parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMovieSceneImageCaptureProtocolBase* UMovieSceneCaptureEnvironment::FindImageCaptureProtocol(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol");

	FFindImageCaptureProtocol parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMovieSceneAudioCaptureProtocolBase* UMovieSceneCaptureEnvironment::FindAudioCaptureProtocol(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol");

	FFindAudioCaptureProtocol parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMovieSceneCaptureProtocolBase::IsCapturing(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing");

	FIsCapturing parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UMovieSceneCaptureProtocolBase::GetState(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState");

	FGetState parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMovieSceneCapture::SetImageCaptureProtocolType(UMovieSceneCaptureProtocolBase* ProtocolType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType");

	FSetImageCaptureProtocolType parms{};	
	parms.ProtocolType = ProtocolType;

	ProcessEvent(fn, &parms);
}

void UMovieSceneCapture::SetAudioCaptureProtocolType(UMovieSceneCaptureProtocolBase* ProtocolType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType");

	FSetAudioCaptureProtocolType parms{};	
	parms.ProtocolType = ProtocolType;

	ProcessEvent(fn, &parms);
}

struct UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetImageCaptureProtocol(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol");

	FGetImageCaptureProtocol parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetAudioCaptureProtocol(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol");

	FGetAudioCaptureProtocol parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UUserDefinedCaptureProtocol::StopCapturingFinalPixels(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels");

	FStopCapturingFinalPixels parms{};	

	ProcessEvent(fn, &parms);
}

void UUserDefinedCaptureProtocol::StartCapturingFinalPixels(struct FCapturedPixelsID& StreamID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels");

	FStartCapturingFinalPixels parms{};	
	parms.StreamID = StreamID;

	ProcessEvent(fn, &parms);
}

void UUserDefinedCaptureProtocol::ResolveBuffer(struct UTexture* Buffer, struct FCapturedPixelsID& BufferID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer");

	FResolveBuffer parms{};	
	parms.Buffer = Buffer;
	parms.BufferID = BufferID;

	ProcessEvent(fn, &parms);
}

void UUserDefinedCaptureProtocol::OnWarmUp(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp");

	FOnWarmUp parms{};	

	ProcessEvent(fn, &parms);
}

void UUserDefinedCaptureProtocol::OnTick(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick");

	FOnTick parms{};	

	ProcessEvent(fn, &parms);
}

void UUserDefinedCaptureProtocol::OnStartCapture(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture");

	FOnStartCapture parms{};	

	ProcessEvent(fn, &parms);
}

bool UUserDefinedCaptureProtocol::OnSetup(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup");

	FOnSetup parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UUserDefinedCaptureProtocol::OnPreTick(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick");

	FOnPreTick parms{};	

	ProcessEvent(fn, &parms);
}

void UUserDefinedCaptureProtocol::OnPixelsReceived(struct FCapturedPixels& Pixels, struct FCapturedPixelsID& ID, struct FFrameMetrics FrameMetrics){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived");

	FOnPixelsReceived parms{};	
	parms.Pixels = Pixels;
	parms.ID = ID;
	parms.FrameMetrics = FrameMetrics;

	ProcessEvent(fn, &parms);
}

void UUserDefinedCaptureProtocol::OnPauseCapture(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture");

	FOnPauseCapture parms{};	

	ProcessEvent(fn, &parms);
}

void UUserDefinedCaptureProtocol::OnFinalize(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize");

	FOnFinalize parms{};	

	ProcessEvent(fn, &parms);
}

void UUserDefinedCaptureProtocol::OnCaptureFrame(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame");

	FOnCaptureFrame parms{};	

	ProcessEvent(fn, &parms);
}

bool UUserDefinedCaptureProtocol::OnCanFinalize(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize");

	FOnCanFinalize parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UUserDefinedCaptureProtocol::OnBeginFinalize(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize");

	FOnBeginFinalize parms{};	

	ProcessEvent(fn, &parms);
}

struct FFrameMetrics UUserDefinedCaptureProtocol::GetCurrentFrameMetrics(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics");

	FGetCurrentFrameMetrics parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UUserDefinedCaptureProtocol::GenerateFilename(struct FFrameMetrics& InFrameMetrics){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename");

	FGenerateFilename parms{};	
	parms.InFrameMetrics = InFrameMetrics;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UUserDefinedImageCaptureProtocol::WriteImageToDisk(struct FCapturedPixels& PixelData, struct FCapturedPixelsID& StreamID, struct FFrameMetrics& FrameMetrics, bool bCopyImageData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk");

	FWriteImageToDisk parms{};	
	parms.PixelData = PixelData;
	parms.StreamID = StreamID;
	parms.FrameMetrics = FrameMetrics;
	parms.bCopyImageData = bCopyImageData;

	ProcessEvent(fn, &parms);
}

struct FString UUserDefinedImageCaptureProtocol::GenerateFilenameForCurrentFrame(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame");

	FGenerateFilenameForCurrentFrame parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UUserDefinedImageCaptureProtocol::GenerateFilenameForBuffer(struct UTexture* Buffer, struct FCapturedPixelsID& StreamID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer");

	FGenerateFilenameForBuffer parms{};	
	parms.Buffer = Buffer;
	parms.StreamID = StreamID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

