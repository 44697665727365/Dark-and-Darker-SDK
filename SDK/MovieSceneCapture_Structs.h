#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
struct FOnPixelsReceived
{
	struct FCapturedPixels Pixels;  // 0x0 (0x0)
	struct FCapturedPixelsID ID;  // 0x10 (0x10)
	struct FFrameMetrics FrameMetrics;  // 0x60 (0x60)


}; 
 
 // Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
struct FGetCurrentFrameMetrics
{
	struct FFrameMetrics ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
struct FCompositionGraphCapturePasses
{
	struct TArray<struct FString> Value;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieSceneCapture.FrameMetrics
struct FFrameMetrics
{
	float TotalElapsedTime;  // 0x0 (0x0)
	float FrameDelta;  // 0x4 (0x4)
	int32_t FrameNumber;  // 0x8 (0x8)
	int32_t NumDroppedFrames;  // 0xC (0xC)


}; 
 
 // ScriptStruct MovieSceneCapture.CaptureResolution
struct FCaptureResolution
{
	int32_t ResX;  // 0x0 (0x0)
	int32_t ResY;  // 0x4 (0x4)


}; 
 
 // ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
struct FMovieSceneCaptureSettings
{
	struct FDirectoryPath OutputDirectory;  // 0x0 (0x0)
	AGameModeBase* GameModeOverride;  // 0x10 (0x10)
	struct FString OutputFormat;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bOverwriteExisting : 1;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool bUseRelativeFrameNumbers : 1;  // 0x29 (0x29)
	char pad_42[2];  // 0x2A (0x2A)
	int32_t HandleFrames;  // 0x2C (0x2C)
	struct FString MovieExtension;  // 0x30 (0x30)
	char ZeroPadFrameNumbers;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	struct FFrameRate FrameRate;  // 0x44 (0x44)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool bUseCustomFrameRate : 1;  // 0x4C (0x4C)
	char pad_77[3];  // 0x4D (0x4D)
	struct FFrameRate CustomFrameRate;  // 0x50 (0x50)
	struct FCaptureResolution Resolution;  // 0x58 (0x58)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool bEnableTextureStreaming : 1;  // 0x60 (0x60)
	char pad_97_1 : 7;  // 0x61 (0x61)
	bool bCinematicEngineScalability : 1;  // 0x61 (0x61)
	char pad_98_1 : 7;  // 0x62 (0x62)
	bool bCinematicMode : 1;  // 0x62 (0x62)
	char pad_99_1 : 7;  // 0x63 (0x63)
	bool bAllowMovement : 1;  // 0x63 (0x63)
	char pad_100_1 : 7;  // 0x64 (0x64)
	bool bAllowTurning : 1;  // 0x64 (0x64)
	char pad_101_1 : 7;  // 0x65 (0x65)
	bool bShowPlayer : 1;  // 0x65 (0x65)
	char pad_102_1 : 7;  // 0x66 (0x66)
	bool bShowHUD : 1;  // 0x66 (0x66)
	char pad_103_1 : 7;  // 0x67 (0x67)
	bool bUsePathTracer : 1;  // 0x67 (0x67)
	int32_t PathTracerSamplePerPixel;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)


}; 
 
 // ScriptStruct MovieSceneCapture.CapturedPixelsID
struct FCapturedPixelsID
{
	struct TMap<struct FName, struct FName> Identifiers;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
struct FIsCapturing
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MovieSceneCapture.CapturedPixels
struct FCapturedPixels
{
	char pad_0[16];  // 0x0 (0x0)


}; 
 
 // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
struct FGetState
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
struct FGetAudioCaptureProtocol
{
	struct UMovieSceneCaptureProtocolBase* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
struct FGetImageCaptureProtocol
{
	struct UMovieSceneCaptureProtocolBase* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
struct FSetAudioCaptureProtocolType
{
	UMovieSceneCaptureProtocolBase* ProtocolType;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
struct FSetImageCaptureProtocolType
{
	UMovieSceneCaptureProtocolBase* ProtocolType;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
struct FFindAudioCaptureProtocol
{
	struct UMovieSceneAudioCaptureProtocolBase* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
struct FFindImageCaptureProtocol
{
	struct UMovieSceneImageCaptureProtocolBase* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
struct FGetCaptureElapsedTime
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
struct FGetCaptureFrameNumber
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
struct FOnSetup
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
struct FIsCaptureInProgress
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
struct FGenerateFilename
{
	struct FFrameMetrics InFrameMetrics;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
struct FOnCanFinalize
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
struct FStartCapturingFinalPixels
{
	struct FCapturedPixelsID StreamID;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
struct FResolveBuffer
{
	struct UTexture* Buffer;  // 0x0 (0x0)
	struct FCapturedPixelsID BufferID;  // 0x8 (0x8)


}; 
 
 // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
struct FGenerateFilenameForBuffer
{
	struct UTexture* Buffer;  // 0x0 (0x0)
	struct FCapturedPixelsID StreamID;  // 0x8 (0x8)
	struct FString ReturnValue;  // 0x58 (0x58)


}; 
 
 // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
struct FGenerateFilenameForCurrentFrame
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
struct FWriteImageToDisk
{
	struct FCapturedPixels PixelData;  // 0x0 (0x0)
	struct FCapturedPixelsID StreamID;  // 0x10 (0x10)
	struct FFrameMetrics FrameMetrics;  // 0x60 (0x60)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool bCopyImageData : 1;  // 0x70 (0x70)
	char pad_113[7];  // 0x71 (0x71)


}; 
 
 