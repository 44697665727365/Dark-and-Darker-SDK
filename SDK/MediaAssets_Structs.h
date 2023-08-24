#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
struct FSetEnableEnvelopeFollowing
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInEnvelopeFollowing : 1;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.HasError
struct FHasError
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // DelegateFunction MediaAssets.OnMediaPlayerMediaOpened__DelegateSignature
struct FOnMediaPlayerMediaOpened__DelegateSignature
{
	struct FString OpenedUrl;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.GetDuration
struct FGetDuration
{
	struct FTimespan ReturnValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction MediaAssets.OnMediaPlayerMediaOpenFailed__DelegateSignature
struct FOnMediaPlayerMediaOpenFailed__DelegateSignature
{
	struct FString FailedUrl;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MediaAssets.MediaSoundComponentSpectralData
struct FMediaSoundComponentSpectralData
{
	float FrequencyHz;  // 0x0 (0x0)
	float Magnitude;  // 0x4 (0x4)


}; 
 
 // Function MediaAssets.MediaPlayer.SetRate
struct FSetRate
{
	float Rate;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function MediaAssets.MediaTexture.GetTextureNumMips
struct FGetTextureNumMips
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MediaAssets.MediaCaptureDevice
struct FMediaCaptureDevice
{
	struct FText DisplayName;  // 0x0 (0x0)
	struct FString URL;  // 0x18 (0x18)


}; 
 
 // ScriptStruct MediaAssets.MediaSourceCacheSettings
struct FMediaSourceCacheSettings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bOverride : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float TimeToLookAhead;  // 0x4 (0x4)


}; 
 
 // Function MediaAssets.MediaPlayer.GetDesiredPlayerName
struct FGetDesiredPlayerName
{
	struct FName ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlaylist.GetRandom
struct FGetRandom
{
	int32_t OutIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UMediaSource* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MediaAssets.MediaSoundComponent.GetEnvelopeValue
struct FGetEnvelopeValue
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.GetUrl
struct FGetUrl
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.IsReady
struct FIsReady
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.GetVideoTrackDimensions
struct FGetVideoTrackDimensions
{
	int32_t TrackIndex;  // 0x0 (0x0)
	int32_t FormatIndex;  // 0x4 (0x4)
	struct FIntPoint ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate
struct FSetVideoTrackFrameRate
{
	int32_t TrackIndex;  // 0x0 (0x0)
	int32_t FormatIndex;  // 0x4 (0x4)
	float FrameRate;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function MediaAssets.MediaPlayer.GetNumTrackFormats
struct FGetNumTrackFormats
{
	uint8_t TrackType;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t TrackIndex;  // 0x4 (0x4)
	int32_t ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MediaAssets.MediaPlayer.SetBlockOnTime
struct FSetBlockOnTime
{
	struct FTimespan Time;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaSource.SetMediaOptionBool
struct FSetMediaOptionBool
{
	struct FName Key;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Value : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function MediaAssets.MediaPlayer.GetSupportedRates
struct FGetSupportedRates
{
	struct TArray<struct FFloatRange> OutRates;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool Unthinned : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function MediaAssets.MediaPlayer.CanPlaySource
struct FCanPlaySource
{
	struct UMediaSource* MediaSource;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function MediaAssets.MediaSource.SetMediaOptionFloat
struct FSetMediaOptionFloat
{
	struct FName Key;  // 0x0 (0x0)
	float Value;  // 0x8 (0x8)


}; 
 
 // Function MediaAssets.MediaPlayer.OpenFile
struct FOpenFile
{
	struct FString FilePath;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function MediaAssets.MediaSource.SetMediaOptionInt64
struct FSetMediaOptionInt64
{
	struct FName Key;  // 0x0 (0x0)
	int64_t Value;  // 0x8 (0x8)


}; 
 
 // Function MediaAssets.MediaPlaylist.Remove
struct FRemove
{
	struct UMediaSource* MediaSource;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function MediaAssets.MediaPlayer.IsClosed
struct FIsClosed
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.IsBuffering
struct FIsBuffering
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaSource.SetMediaOptionString
struct FSetMediaOptionString
{
	struct FName Key;  // 0x0 (0x0)
	struct FString Value;  // 0x8 (0x8)


}; 
 
 // Function MediaAssets.MediaPlayer.CanPause
struct FCanPause
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaSource.Validate
struct FValidate
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.IsPaused
struct FIsPaused
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
struct FGetVideoTrackAspectRatio
{
	int32_t TrackIndex;  // 0x0 (0x0)
	int32_t FormatIndex;  // 0x4 (0x4)
	float ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
struct FBP_GetAttenuationSettingsToApply
{
	struct FSoundAttenuationSettings OutAttenuationSettings;  // 0x0 (0x0)
	char pad_968_1 : 7;  // 0x3C8 (0x3C8)
	bool ReturnValue : 1;  // 0x3C8 (0x3C8)
	char pad_969[7];  // 0x3C9 (0x3C9)


}; 
 
 // Function MediaAssets.MediaPlayer.SelectTrack
struct FSelectTrack
{
	uint8_t TrackType;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t TrackIndex;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function MediaAssets.MediaComponent.GetMediaPlayer
struct FGetMediaPlayer
{
	struct UMediaPlayer* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.CanPlayUrl
struct FCanPlayUrl
{
	struct FString URL;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function MediaAssets.MediaSoundComponent.GetNormalizedSpectralData
struct FGetNormalizedSpectralData
{
	struct TArray<struct FMediaSoundComponentSpectralData> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.FileMediaSource.SetFilePath
struct FSetFilePath
{
	struct FString Path;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.OpenPlaylist
struct FOpenPlaylist
{
	struct UMediaPlaylist* InPlaylist;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function MediaAssets.MediaSoundComponent.GetSpectralData
struct FGetSpectralData
{
	struct TArray<struct FMediaSoundComponentSpectralData> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
struct FSetEnableSpectralAnalysis
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInSpectralAnalysisEnabled : 1;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
struct FSetEnvelopeFollowingsettings
{
	int32_t AttackTimeMsec;  // 0x0 (0x0)
	int32_t ReleaseTimeMsec;  // 0x4 (0x4)


}; 
 
 // Function MediaAssets.MediaTexture.SetMediaPlayer
struct FSetMediaPlayer
{
	struct UMediaPlayer* NewMediaPlayer;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
struct FSetSpectralAnalysisSettings
{
	struct TArray<float> InFrequenciesToAnalyze;  // 0x0 (0x0)
	uint8_t InFFTSize;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function MediaAssets.MediaTexture.GetAspectRatio
struct FGetAspectRatio
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.GetViewRotation
struct FGetViewRotation
{
	struct FRotator ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaTexture.GetHeight
struct FGetHeight
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate
struct FGetVideoTrackFrameRate
{
	int32_t TrackIndex;  // 0x0 (0x0)
	int32_t FormatIndex;  // 0x4 (0x4)
	float ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MediaAssets.MediaPlayer.GetPlaylist
struct FGetPlaylist
{
	struct UMediaPlaylist* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaTexture.GetWidth
struct FGetWidth
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaComponent.GetMediaTexture
struct FGetMediaTexture
{
	struct UMediaTexture* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.GetAudioTrackType
struct FGetAudioTrackType
{
	int32_t TrackIndex;  // 0x0 (0x0)
	int32_t FormatIndex;  // 0x4 (0x4)
	struct FString ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MediaAssets.MediaPlayer.GetAudioTrackChannels
struct FGetAudioTrackChannels
{
	int32_t TrackIndex;  // 0x0 (0x0)
	int32_t FormatIndex;  // 0x4 (0x4)
	int32_t ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate
struct FGetAudioTrackSampleRate
{
	int32_t TrackIndex;  // 0x0 (0x0)
	int32_t FormatIndex;  // 0x4 (0x4)
	int32_t ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView
struct FGetHorizontalFieldOfView
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.GetMediaName
struct FGetMediaName
{
	struct FText ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.GetTrackFormat
struct FGetTrackFormat
{
	uint8_t TrackType;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t TrackIndex;  // 0x4 (0x4)
	int32_t ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MediaAssets.MediaPlayer.GetNumTracks
struct FGetNumTracks
{
	uint8_t TrackType;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function MediaAssets.MediaPlayer.GetPlayerName
struct FGetPlayerName
{
	struct FName ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.GetTrackDisplayName
struct FGetTrackDisplayName
{
	uint8_t TrackType;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t TrackIndex;  // 0x4 (0x4)
	struct FText ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MediaAssets.MediaPlayer.GetPlaylistIndex
struct FGetPlaylistIndex
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
struct FEnumerateWebcamCaptureDevices
{
	struct TArray<struct FMediaCaptureDevice> OutDevices;  // 0x0 (0x0)
	int32_t Filter;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function MediaAssets.MediaPlayer.IsLooping
struct FIsLooping
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.GetRate
struct FGetRate
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.GetSelectedTrack
struct FGetSelectedTrack
{
	uint8_t TrackType;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function MediaAssets.MediaPlayer.GetTime
struct FGetTime
{
	struct FTimespan ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates
struct FGetVideoTrackFrameRates
{
	int32_t TrackIndex;  // 0x0 (0x0)
	int32_t FormatIndex;  // 0x4 (0x4)
	struct FFloatRange ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MediaAssets.MediaPlayer.GetTimeDelay
struct FGetTimeDelay
{
	struct FTimespan ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.GetTimeStamp
struct FGetTimeStamp
{
	struct UMediaTimeStampInfo* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.GetTrackLanguage
struct FGetTrackLanguage
{
	uint8_t TrackType;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t TrackIndex;  // 0x4 (0x4)
	struct FString ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MediaAssets.MediaPlayer.GetVerticalFieldOfView
struct FGetVerticalFieldOfView
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.GetVideoTrackType
struct FGetVideoTrackType
{
	int32_t TrackIndex;  // 0x0 (0x0)
	int32_t FormatIndex;  // 0x4 (0x4)
	struct FString ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MediaAssets.MediaPlayer.IsConnecting
struct FIsConnecting
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.IsPlaying
struct FIsPlaying
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.IsPreparing
struct FIsPreparing
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlaylist.RemoveAt
struct FRemoveAt
{
	int32_t Index;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function MediaAssets.MediaPlayer.Next
struct FNext
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.OpenPlaylistIndex
struct FOpenPlaylistIndex
{
	struct UMediaPlaylist* InPlaylist;  // 0x0 (0x0)
	int32_t Index;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function MediaAssets.MediaPlayer.OpenSource
struct FOpenSource
{
	struct UMediaSource* MediaSource;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function MediaAssets.MediaPlayer.OpenSourceLatent
struct FOpenSourceLatent
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FLatentActionInfo LatentInfo;  // 0x8 (0x8)
	struct UMediaSource* MediaSource;  // 0x20 (0x20)
	struct FMediaPlayerOptions Options;  // 0x28 (0x28)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool bSuccess : 1;  // 0x58 (0x58)
	char pad_89[7];  // 0x59 (0x59)


}; 
 
 // Function MediaAssets.MediaPlayer.OpenSourceWithOptions
struct FOpenSourceWithOptions
{
	struct UMediaSource* MediaSource;  // 0x0 (0x0)
	struct FMediaPlayerOptions Options;  // 0x8 (0x8)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool ReturnValue : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


}; 
 
 // Function MediaAssets.MediaPlayer.OpenUrl
struct FOpenUrl
{
	struct FString URL;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function MediaAssets.MediaPlayer.Pause
struct FPause
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.Play
struct FPlay
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.Previous
struct FPrevious
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.Reopen
struct FReopen
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.Rewind
struct FRewind
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.Seek
struct FSeek
{
	struct FTimespan Time;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function MediaAssets.MediaPlayer.SetDesiredPlayerName
struct FSetDesiredPlayerName
{
	struct FName PlayerName;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.SetLooping
struct FSetLooping
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Looping : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool ReturnValue : 1;  // 0x1 (0x1)


}; 
 
 // Function MediaAssets.MediaPlayer.SetMediaOptions
struct FSetMediaOptions
{
	struct UMediaSource* Options;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.SetNativeVolume
struct FSetNativeVolume
{
	float Volume;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function MediaAssets.MediaPlayer.SetTimeDelay
struct FSetTimeDelay
{
	struct FTimespan TimeDelay;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.SetTrackFormat
struct FSetTrackFormat
{
	uint8_t TrackType;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t TrackIndex;  // 0x4 (0x4)
	int32_t FormatIndex;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function MediaAssets.MediaPlayer.SetViewField
struct FSetViewField
{
	float Horizontal;  // 0x0 (0x0)
	float Vertical;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Absolute : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool ReturnValue : 1;  // 0x9 (0x9)
	char pad_10[2];  // 0xA (0xA)


}; 
 
 // Function MediaAssets.MediaPlayer.SetViewRotation
struct FSetViewRotation
{
	struct FRotator Rotation;  // 0x0 (0x0)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool Absolute : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool ReturnValue : 1;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)


}; 
 
 // Function MediaAssets.MediaPlayer.SupportsRate
struct FSupportsRate
{
	float Rate;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool Unthinned : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool ReturnValue : 1;  // 0x5 (0x5)
	char pad_6[2];  // 0x6 (0x6)


}; 
 
 // Function MediaAssets.MediaPlayer.SupportsScrubbing
struct FSupportsScrubbing
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlayer.SupportsSeeking
struct FSupportsSeeking
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlaylist.Add
struct FAdd
{
	struct UMediaSource* MediaSource;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function MediaAssets.MediaPlaylist.AddFile
struct FAddFile
{
	struct FString FilePath;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function MediaAssets.MediaPlaylist.AddUrl
struct FAddUrl
{
	struct FString URL;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function MediaAssets.MediaPlaylist.Get
struct FGet
{
	int32_t Index;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UMediaSource* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MediaAssets.MediaPlaylist.GetNext
struct FGetNext
{
	int32_t InOutIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UMediaSource* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MediaAssets.MediaPlaylist.GetPrevious
struct FGetPrevious
{
	int32_t InOutIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UMediaSource* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function MediaAssets.MediaPlaylist.Insert
struct FInsert
{
	struct UMediaSource* MediaSource;  // 0x0 (0x0)
	int32_t Index;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function MediaAssets.MediaPlaylist.Num
struct FNum
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MediaAssets.MediaPlaylist.Replace
struct FReplace
{
	int32_t Index;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UMediaSource* Replacement;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
struct FEnumerateAudioCaptureDevices
{
	struct TArray<struct FMediaCaptureDevice> OutDevices;  // 0x0 (0x0)
	int32_t Filter;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
struct FEnumerateVideoCaptureDevices
{
	struct TArray<struct FMediaCaptureDevice> OutDevices;  // 0x0 (0x0)
	int32_t Filter;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 