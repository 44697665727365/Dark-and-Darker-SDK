#pragma once 
#include <MovieSceneCapture_Structs.h>
 
 
 
// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneCaptureEnvironment : UObject
{


	bool IsCaptureInProgress(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
	int32_t GetCaptureFrameNumber(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
	float GetCaptureElapsedTime(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
	struct UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
	struct UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
}; 
 
 


// Class MovieSceneCapture.FrameGrabberProtocol
// Size: 0x68(Inherited: 0x58)
struct UFrameGrabberProtocol : UMovieSceneImageCaptureProtocolBase
{
	char pad_88[16];  // 0x58 (0x58)


}; 
 
 


// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
// Size: 0x58(Inherited: 0x28)
struct UMovieSceneCaptureProtocolBase : UObject
{
	char pad_40[40];  // 0x28 (0x28)
	uint8_t State;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)


	bool IsCapturing(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
	uint8_t GetState(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
}; 
 
 


// Class MovieSceneCapture.MovieSceneCaptureInterface
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneCaptureInterface : UInterface
{


}; 
 
 


// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
// Size: 0x58(Inherited: 0x58)
struct UMovieSceneAudioCaptureProtocolBase : UMovieSceneCaptureProtocolBase
{


}; 
 
 


// Class MovieSceneCapture.LevelCapture
// Size: 0x258(Inherited: 0x238)
struct ULevelCapture : UMovieSceneCapture
{
	char pad_568_1 : 7;  // 0x238 (0x238)
	bool bAutoStartCapture : 1;  // 0x238 (0x238)
	char pad_569[11];  // 0x239 (0x239)
	struct FGuid PrerequisiteActorId;  // 0x244 (0x244)
	char pad_596[4];  // 0x254 (0x254)


}; 
 
 


// Class MovieSceneCapture.CompositionGraphCaptureProtocol
// Size: 0xC8(Inherited: 0x58)
struct UCompositionGraphCaptureProtocol : UMovieSceneImageCaptureProtocolBase
{
	struct FCompositionGraphCapturePasses IncludeRenderPasses;  // 0x58 (0x58)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool bCaptureFramesInHDR : 1;  // 0x68 (0x68)
	char pad_105[3];  // 0x69 (0x69)
	int32_t HDRCompressionQuality;  // 0x6C (0x6C)
	enum class EHDRCaptureGamut CaptureGamut;  // 0x70 (0x70)
	char pad_113[7];  // 0x71 (0x71)
	struct FSoftObjectPath PostProcessingMaterial;  // 0x78 (0x78)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool bDisableScreenPercentage : 1;  // 0x98 (0x98)
	char pad_153[7];  // 0x99 (0x99)
	struct UMaterialInterface* PostProcessingMaterialPtr;  // 0xA0 (0xA0)
	char pad_168[32];  // 0xA8 (0xA8)


}; 
 
 


// Class MovieSceneCapture.ImageSequenceProtocol_EXR
// Size: 0xE8(Inherited: 0xD8)
struct UImageSequenceProtocol_EXR : UImageSequenceProtocol
{
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool bCompressed : 1;  // 0xD8 (0xD8)
	enum class EHDRCaptureGamut CaptureGamut;  // 0xD9 (0xD9)
	char pad_218[14];  // 0xDA (0xDA)


}; 
 
 


// Class MovieSceneCapture.NullAudioCaptureProtocol
// Size: 0x58(Inherited: 0x58)
struct UNullAudioCaptureProtocol : UMovieSceneAudioCaptureProtocolBase
{


}; 
 
 


// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// Size: 0x90(Inherited: 0x58)
struct UMasterAudioSubmixCaptureProtocol : UMovieSceneAudioCaptureProtocolBase
{
	struct FString Filename;  // 0x58 (0x58)
	char pad_104[40];  // 0x68 (0x68)


}; 
 
 


// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
// Size: 0x58(Inherited: 0x58)
struct UMovieSceneImageCaptureProtocolBase : UMovieSceneCaptureProtocolBase
{


}; 
 
 


// Class MovieSceneCapture.ImageSequenceProtocol
// Size: 0xD8(Inherited: 0x68)
struct UImageSequenceProtocol : UFrameGrabberProtocol
{
	char pad_104[112];  // 0x68 (0x68)


}; 
 
 


// Class MovieSceneCapture.CompressedImageSequenceProtocol
// Size: 0xE0(Inherited: 0xD8)
struct UCompressedImageSequenceProtocol : UImageSequenceProtocol
{
	int32_t CompressionQuality;  // 0xD8 (0xD8)
	char pad_220[4];  // 0xDC (0xDC)


}; 
 
 


// Class MovieSceneCapture.ImageSequenceProtocol_BMP
// Size: 0xD8(Inherited: 0xD8)
struct UImageSequenceProtocol_BMP : UImageSequenceProtocol
{


}; 
 
 


// Class MovieSceneCapture.ImageSequenceProtocol_PNG
// Size: 0xE0(Inherited: 0xE0)
struct UImageSequenceProtocol_PNG : UCompressedImageSequenceProtocol
{


}; 
 
 


// Class MovieSceneCapture.MovieSceneCapture
// Size: 0x238(Inherited: 0x28)
struct UMovieSceneCapture : UObject
{
	char pad_40[16];  // 0x28 (0x28)
	struct FSoftClassPath ImageCaptureProtocolType;  // 0x38 (0x38)
	struct FSoftClassPath AudioCaptureProtocolType;  // 0x58 (0x58)
	struct UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol;  // 0x78 (0x78)
	struct UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol;  // 0x80 (0x80)
	struct FMovieSceneCaptureSettings Settings;  // 0x88 (0x88)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool bUseSeparateProcess : 1;  // 0xF8 (0xF8)
	char pad_249_1 : 7;  // 0xF9 (0xF9)
	bool bCloseEditorWhenCaptureStarts : 1;  // 0xF9 (0xF9)
	char pad_250[6];  // 0xFA (0xFA)
	struct FString AdditionalCommandLineArguments;  // 0x100 (0x100)
	struct FString InheritedCommandLineArguments;  // 0x110 (0x110)
	char pad_288[280];  // 0x120 (0x120)


	void SetImageCaptureProtocolType(UMovieSceneCaptureProtocolBase* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
	void SetAudioCaptureProtocolType(UMovieSceneCaptureProtocolBase* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
	struct UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
	struct UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
}; 
 
 


// Class MovieSceneCapture.ImageSequenceProtocol_JPG
// Size: 0xE0(Inherited: 0xE0)
struct UImageSequenceProtocol_JPG : UCompressedImageSequenceProtocol
{


}; 
 
 


// Class MovieSceneCapture.UserDefinedCaptureProtocol
// Size: 0xD8(Inherited: 0x58)
struct UUserDefinedCaptureProtocol : UMovieSceneImageCaptureProtocolBase
{
	struct UWorld* World;  // 0x58 (0x58)
	char pad_96[120];  // 0x60 (0x60)


	void StopCapturingFinalPixels(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
	void StartCapturingFinalPixels(struct FCapturedPixelsID& StreamID); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
	void ResolveBuffer(struct UTexture* Buffer, struct FCapturedPixelsID& BufferID); // Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
	void OnWarmUp(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
	void OnTick(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
	void OnStartCapture(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
	bool OnSetup(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
	void OnPreTick(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
	void OnPixelsReceived(struct FCapturedPixels& Pixels, struct FCapturedPixelsID& ID, struct FFrameMetrics FrameMetrics); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
	void OnPauseCapture(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
	void OnFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
	void OnCaptureFrame(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
	bool OnCanFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
	void OnBeginFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
	struct FFrameMetrics GetCurrentFrameMetrics(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
	struct FString GenerateFilename(struct FFrameMetrics& InFrameMetrics); // Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
}; 
 
 


// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
// Size: 0xE0(Inherited: 0xD8)
struct UUserDefinedImageCaptureProtocol : UUserDefinedCaptureProtocol
{
	uint8_t Format;  // 0xD8 (0xD8)
	char pad_217_1 : 7;  // 0xD9 (0xD9)
	bool bEnableCompression : 1;  // 0xD9 (0xD9)
	char pad_218[2];  // 0xDA (0xDA)
	int32_t CompressionQuality;  // 0xDC (0xDC)


	void WriteImageToDisk(struct FCapturedPixels& PixelData, struct FCapturedPixelsID& StreamID, struct FFrameMetrics& FrameMetrics, bool bCopyImageData); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
	struct FString GenerateFilenameForCurrentFrame(); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
	struct FString GenerateFilenameForBuffer(struct UTexture* Buffer, struct FCapturedPixelsID& StreamID); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
}; 
 
 


// Class MovieSceneCapture.VideoCaptureProtocol
// Size: 0x80(Inherited: 0x68)
struct UVideoCaptureProtocol : UFrameGrabberProtocol
{
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool bUseCompression : 1;  // 0x68 (0x68)
	char pad_105[3];  // 0x69 (0x69)
	float CompressionQuality;  // 0x6C (0x6C)
	char pad_112[16];  // 0x70 (0x70)


}; 
 
 


