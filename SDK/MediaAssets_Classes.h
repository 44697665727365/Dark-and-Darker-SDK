#pragma once 
#include <MediaAssets_Structs.h>
 
 
 
// Class MediaAssets.MediaSource
// Size: [000(Inhe] Package Id_struct UMediaSource : UObject
{
	char pad_40[88];  // 0x28 (0x28)


	bool Validate(); // Function MediaAssets.MediaSource.Validate
	void SetMediaOptionString(struct FName& Key, struct FString Value); // Function MediaAssets.MediaSource.SetMediaOptionString
	void SetMediaOptionInt64(struct FName& Key, int64_t Value); // Function MediaAssets.MediaSource.SetMediaOptionInt64
	void SetMediaOptionFloat(struct FName& Key, float Value); // Function MediaAssets.MediaSource.SetMediaOptionFloat
	void SetMediaOptionBool(struct FName& Key, bool Value); // Function MediaAssets.MediaSource.SetMediaOptionBool
	struct FString GetUrl(); // Function MediaAssets.MediaSource.GetUrl
}; 
 
 


// Class MediaAssets.FileMediaSource
// Size: 0xB0(Inherited: 0x88)
struct UFileMediaSource : UBaseMediaSource
{
	struct FString FilePath;  // 0x88 (0x88)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool PrecacheFile : 1;  // 0x98 (0x98)
	char pad_153[23];  // 0x99 (0x99)


	void SetFilePath(struct FString Path); // Function MediaAssets.FileMediaSource.SetFilePath
}; 
 
 


// Class MediaAssets.BaseMediaSource
// Size: 0x88(Inherited: 0x80)
struct UBaseMediaSource : UMediaSource
{
	struct FName PlayerName;  // 0x80 (0x80)


}; 
 
 


// Class MediaAssets.MediaComponent
// Size: 0xB0(Inherited: 0xA0)
struct UMediaComponent : UActorComponent
{
	struct UMediaTexture* MediaTexture;  // 0xA0 (0xA0)
	struct UMediaPlayer* MediaPlayer;  // 0xA8 (0xA8)


	struct UMediaTexture* GetMediaTexture(); // Function MediaAssets.MediaComponent.GetMediaTexture
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaComponent.GetMediaPlayer
}; 
 
 


// Class MediaAssets.MediaPlayerProxyInterface
// Size: 0x28(Inherited: 0x28)
struct UMediaPlayerProxyInterface : UInterface
{


}; 
 
 


// Class MediaAssets.MediaTimeStampInfo
// Size: 0x38(Inherited: 0x28)
struct UMediaTimeStampInfo : UObject
{
	struct FTimespan Time;  // 0x28 (0x28)
	int64_t SequenceIndex;  // 0x30 (0x30)


}; 
 
 


// Class MediaAssets.MediaSoundComponent
// Size: 0x870(Inherited: 0x790)
struct UMediaSoundComponent : USynthComponent
{
	uint8_t Channels;  // 0x790 (0x790)
	char pad_1940_1 : 7;  // 0x794 (0x794)
	bool DynamicRateAdjustment : 1;  // 0x794 (0x794)
	char pad_1941[3];  // 0x795 (0x795)
	float RateAdjustmentFactor;  // 0x798 (0x798)
	struct FFloatRange RateAdjustmentRange;  // 0x79C (0x79C)
	char pad_1964[4];  // 0x7AC (0x7AC)
	struct UMediaPlayer* MediaPlayer;  // 0x7B0 (0x7B0)
	char pad_1976[184];  // 0x7B8 (0x7B8)


	void SetSpectralAnalysisSettings(struct TArray<float> InFrequenciesToAnalyze, uint8_t InFFTSize); // Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaSoundComponent.SetMediaPlayer
	void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec); // Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled); // Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing); // Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
	struct TArray<struct FMediaSoundComponentSpectralData> GetSpectralData(); // Function MediaAssets.MediaSoundComponent.GetSpectralData
	struct TArray<struct FMediaSoundComponentSpectralData> GetNormalizedSpectralData(); // Function MediaAssets.MediaSoundComponent.GetNormalizedSpectralData
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaSoundComponent.GetMediaPlayer
	float GetEnvelopeValue(); // Function MediaAssets.MediaSoundComponent.GetEnvelopeValue
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings& OutAttenuationSettings); // Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
}; 
 
 


// Class MediaAssets.MediaTexture
// Size: 0x2D0(Inherited: 0x1F0)
struct UMediaTexture : UTexture
{
	enum class TextureAddress AddressX;  // 0x1F0 (0x1F0)
	enum class TextureAddress AddressY;  // 0x1F1 (0x1F1)
	char pad_498_1 : 7;  // 0x1F2 (0x1F2)
	bool AutoClear : 1;  // 0x1F2 (0x1F2)
	char pad_499[1];  // 0x1F3 (0x1F3)
	struct FLinearColor ClearColor;  // 0x1F4 (0x1F4)
	char pad_516_1 : 7;  // 0x204 (0x204)
	bool EnableGenMips : 1;  // 0x204 (0x204)
	char NumMips;  // 0x205 (0x205)
	char pad_518_1 : 7;  // 0x206 (0x206)
	bool NewStyleOutput : 1;  // 0x206 (0x206)
	enum class MediaTextureOutputFormat OutputFormat;  // 0x207 (0x207)
	float CurrentAspectRatio;  // 0x208 (0x208)
	enum class MediaTextureOrientation CurrentOrientation;  // 0x20C (0x20C)
	char pad_525[3];  // 0x20D (0x20D)
	struct UMediaPlayer* MediaPlayer;  // 0x210 (0x210)
	char pad_536[184];  // 0x218 (0x218)


	void UpdateResource(); // Function MediaAssets.MediaTexture.UpdateResource
	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaTexture.SetMediaPlayer
	int32_t GetWidth(); // Function MediaAssets.MediaTexture.GetWidth
	int32_t GetTextureNumMips(); // Function MediaAssets.MediaTexture.GetTextureNumMips
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaTexture.GetMediaPlayer
	int32_t GetHeight(); // Function MediaAssets.MediaTexture.GetHeight
	float GetAspectRatio(); // Function MediaAssets.MediaTexture.GetAspectRatio
}; 
 
 


// Class MediaAssets.MediaPlayer
// Size: 0x140(Inherited: 0x28)
struct UMediaPlayer : UObject
{
	struct FMulticastInlineDelegate OnEndReached;  // 0x28 (0x28)
	struct FMulticastInlineDelegate OnMediaClosed;  // 0x38 (0x38)
	struct FMulticastInlineDelegate OnMediaOpened;  // 0x48 (0x48)
	struct FMulticastInlineDelegate OnMediaOpenFailed;  // 0x58 (0x58)
	struct FMulticastInlineDelegate OnPlaybackResumed;  // 0x68 (0x68)
	struct FMulticastInlineDelegate OnPlaybackSuspended;  // 0x78 (0x78)
	struct FMulticastInlineDelegate OnSeekCompleted;  // 0x88 (0x88)
	struct FMulticastInlineDelegate OnTracksChanged;  // 0x98 (0x98)
	struct FTimespan CacheAhead;  // 0xA8 (0xA8)
	struct FTimespan CacheBehind;  // 0xB0 (0xB0)
	struct FTimespan CacheBehindGame;  // 0xB8 (0xB8)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool NativeAudioOut : 1;  // 0xC0 (0xC0)
	char pad_193_1 : 7;  // 0xC1 (0xC1)
	bool PlayOnOpen : 1;  // 0xC1 (0xC1)
	char pad_194[2];  // 0xC2 (0xC2)
	char Shuffle : 1;  // 0xC4 (0xC4)
	char Loop : 1;  // 0xC4 (0xC4)
	char pad_196_1 : 6;  // 0xC4 (0xC4)
	char pad_197[4];  // 0xC5 (0xC5)
	struct UMediaPlaylist* Playlist;  // 0xC8 (0xC8)
	int32_t PlaylistIndex;  // 0xD0 (0xD0)
	char pad_212[4];  // 0xD4 (0xD4)
	struct FTimespan TimeDelay;  // 0xD8 (0xD8)
	float HorizontalFieldOfView;  // 0xE0 (0xE0)
	float VerticalFieldOfView;  // 0xE4 (0xE4)
	struct FRotator ViewRotation;  // 0xE8 (0xE8)
	char pad_256[40];  // 0x100 (0x100)
	struct FGuid PlayerGuid;  // 0x128 (0x128)
	char pad_312[8];  // 0x138 (0x138)


	bool SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking
	bool SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing
	bool SupportsRate(float Rate, bool Unthinned); // Function MediaAssets.MediaPlayer.SupportsRate
	bool SetViewRotation(struct FRotator& Rotation, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewRotation
	bool SetViewField(float Horizontal, float Vertical, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewField
	bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate); // Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate
	bool SetTrackFormat(uint8_t TrackType, int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.SetTrackFormat
	void SetTimeDelay(struct FTimespan TimeDelay); // Function MediaAssets.MediaPlayer.SetTimeDelay
	bool SetRate(float Rate); // Function MediaAssets.MediaPlayer.SetRate
	bool SetNativeVolume(float Volume); // Function MediaAssets.MediaPlayer.SetNativeVolume
	void SetMediaOptions(struct UMediaSource* Options); // Function MediaAssets.MediaPlayer.SetMediaOptions
	bool SetLooping(bool Looping); // Function MediaAssets.MediaPlayer.SetLooping
	void SetDesiredPlayerName(struct FName PlayerName); // Function MediaAssets.MediaPlayer.SetDesiredPlayerName
	void SetBlockOnTime(struct FTimespan& Time); // Function MediaAssets.MediaPlayer.SetBlockOnTime
	bool SelectTrack(uint8_t TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.SelectTrack
	bool Seek(struct FTimespan& Time); // Function MediaAssets.MediaPlayer.Seek
	bool Rewind(); // Function MediaAssets.MediaPlayer.Rewind
	bool Reopen(); // Function MediaAssets.MediaPlayer.Reopen
	bool Previous(); // Function MediaAssets.MediaPlayer.Previous
	void PlayAndSeek(); // Function MediaAssets.MediaPlayer.PlayAndSeek
	bool Play(); // Function MediaAssets.MediaPlayer.Play
	bool Pause(); // Function MediaAssets.MediaPlayer.Pause
	bool OpenUrl(struct FString URL); // Function MediaAssets.MediaPlayer.OpenUrl
	bool OpenSourceWithOptions(struct UMediaSource* MediaSource, struct FMediaPlayerOptions& Options); // Function MediaAssets.MediaPlayer.OpenSourceWithOptions
	void OpenSourceLatent(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UMediaSource* MediaSource, struct FMediaPlayerOptions& Options, bool& bSuccess); // Function MediaAssets.MediaPlayer.OpenSourceLatent
	bool OpenSource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.OpenSource
	bool OpenPlaylistIndex(struct UMediaPlaylist* InPlaylist, int32_t Index); // Function MediaAssets.MediaPlayer.OpenPlaylistIndex
	bool OpenPlaylist(struct UMediaPlaylist* InPlaylist); // Function MediaAssets.MediaPlayer.OpenPlaylist
	bool OpenFile(struct FString FilePath); // Function MediaAssets.MediaPlayer.OpenFile
	bool Next(); // Function MediaAssets.MediaPlayer.Next
	bool IsReady(); // Function MediaAssets.MediaPlayer.IsReady
	bool IsPreparing(); // Function MediaAssets.MediaPlayer.IsPreparing
	bool IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying
	bool IsPaused(); // Function MediaAssets.MediaPlayer.IsPaused
	bool IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping
	bool IsConnecting(); // Function MediaAssets.MediaPlayer.IsConnecting
	bool IsClosed(); // Function MediaAssets.MediaPlayer.IsClosed
	bool IsBuffering(); // Function MediaAssets.MediaPlayer.IsBuffering
	bool HasError(); // Function MediaAssets.MediaPlayer.HasError
	struct FRotator GetViewRotation(); // Function MediaAssets.MediaPlayer.GetViewRotation
	struct FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackType
	struct FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates
	float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate
	struct FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackDimensions
	float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
	float GetVerticalFieldOfView(); // Function MediaAssets.MediaPlayer.GetVerticalFieldOfView
	struct FString GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl
	struct FString GetTrackLanguage(uint8_t TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackLanguage
	int32_t GetTrackFormat(uint8_t TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackFormat
	struct FText GetTrackDisplayName(uint8_t TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackDisplayName
	struct UMediaTimeStampInfo* GetTimeStamp(); // Function MediaAssets.MediaPlayer.GetTimeStamp
	struct FTimespan GetTimeDelay(); // Function MediaAssets.MediaPlayer.GetTimeDelay
	struct FTimespan GetTime(); // Function MediaAssets.MediaPlayer.GetTime
	void GetSupportedRates(struct TArray<struct FFloatRange>& OutRates, bool Unthinned); // Function MediaAssets.MediaPlayer.GetSupportedRates
	int32_t GetSelectedTrack(uint8_t TrackType); // Function MediaAssets.MediaPlayer.GetSelectedTrack
	float GetRate(); // Function MediaAssets.MediaPlayer.GetRate
	int32_t GetPlaylistIndex(); // Function MediaAssets.MediaPlayer.GetPlaylistIndex
	struct UMediaPlaylist* GetPlaylist(); // Function MediaAssets.MediaPlayer.GetPlaylist
	struct FName GetPlayerName(); // Function MediaAssets.MediaPlayer.GetPlayerName
	int32_t GetNumTracks(uint8_t TrackType); // Function MediaAssets.MediaPlayer.GetNumTracks
	int32_t GetNumTrackFormats(uint8_t TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetNumTrackFormats
	struct FText GetMediaName(); // Function MediaAssets.MediaPlayer.GetMediaName
	float GetHorizontalFieldOfView(); // Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView
	struct FTimespan GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration
	struct FName GetDesiredPlayerName(); // Function MediaAssets.MediaPlayer.GetDesiredPlayerName
	struct FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackType
	int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate
	int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackChannels
	void Close(); // Function MediaAssets.MediaPlayer.Close
	bool CanPlayUrl(struct FString URL); // Function MediaAssets.MediaPlayer.CanPlayUrl
	bool CanPlaySource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.CanPlaySource
	bool CanPause(); // Function MediaAssets.MediaPlayer.CanPause
}; 
 
 


// Class MediaAssets.MediaPlaylist
// Size: 0x38(Inherited: 0x28)
struct UMediaPlaylist : UObject
{
	struct TArray<struct UMediaSource*> Items;  // 0x28 (0x28)


	bool Replace(int32_t Index, struct UMediaSource* Replacement); // Function MediaAssets.MediaPlaylist.Replace
	bool RemoveAt(int32_t Index); // Function MediaAssets.MediaPlaylist.RemoveAt
	bool Remove(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Remove
	int32_t Num(); // Function MediaAssets.MediaPlaylist.Num
	void Insert(struct UMediaSource* MediaSource, int32_t Index); // Function MediaAssets.MediaPlaylist.Insert
	struct UMediaSource* GetRandom(int32_t& OutIndex); // Function MediaAssets.MediaPlaylist.GetRandom
	struct UMediaSource* GetPrevious(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetPrevious
	struct UMediaSource* GetNext(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetNext
	struct UMediaSource* Get(int32_t Index); // Function MediaAssets.MediaPlaylist.Get
	bool AddUrl(struct FString URL); // Function MediaAssets.MediaPlaylist.AddUrl
	bool AddFile(struct FString FilePath); // Function MediaAssets.MediaPlaylist.AddFile
	bool Add(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Add
}; 
 
 


// Class MediaAssets.PlatformMediaSource
// Size: 0x88(Inherited: 0x80)
struct UPlatformMediaSource : UMediaSource
{
	struct UMediaSource* MediaSource;  // 0x80 (0x80)


}; 
 
 


// Class MediaAssets.StreamMediaSource
// Size: 0x98(Inherited: 0x88)
struct UStreamMediaSource : UBaseMediaSource
{
	struct FString StreamUrl;  // 0x88 (0x88)


}; 
 
 


// Class MediaAssets.TimeSynchronizableMediaSource
// Size: 0xA0(Inherited: 0x88)
struct UTimeSynchronizableMediaSource : UBaseMediaSource
{
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool bUseTimeSynchronization : 1;  // 0x88 (0x88)
	char pad_137[3];  // 0x89 (0x89)
	int32_t FrameDelay;  // 0x8C (0x8C)
	double TimeDelay;  // 0x90 (0x90)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool bAutoDetectInput : 1;  // 0x98 (0x98)
	char pad_153[7];  // 0x99 (0x99)


}; 
 
 


// Class MediaAssets.MediaBlueprintFunctionLibrary
// Size: 0x28(Inherited: 0x28)
struct UMediaBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{


	void EnumerateWebcamCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
	void EnumerateVideoCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
	void EnumerateAudioCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
}; 
 
 


