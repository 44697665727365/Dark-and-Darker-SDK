#include "pch.h"
#include "SDK.h"

bool UMediaSource::Validate(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.Validate");

	FValidate parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMediaSource::SetMediaOptionString(struct FName& Key, struct FString Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.SetMediaOptionString");

	FSetMediaOptionString parms{};	
	parms.Key = Key;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void UMediaSource::SetMediaOptionInt64(struct FName& Key, int64_t Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.SetMediaOptionInt64");

	FSetMediaOptionInt64 parms{};	
	parms.Key = Key;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void UMediaSource::SetMediaOptionFloat(struct FName& Key, float Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.SetMediaOptionFloat");

	FSetMediaOptionFloat parms{};	
	parms.Key = Key;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void UMediaSource::SetMediaOptionBool(struct FName& Key, bool Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.SetMediaOptionBool");

	FSetMediaOptionBool parms{};	
	parms.Key = Key;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

struct FString UMediaSource::GetUrl(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.GetUrl");

	FGetUrl parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UFileMediaSource::SetFilePath(struct FString Path){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.FileMediaSource.SetFilePath");

	FSetFilePath parms{};	
	parms.Path = Path;

	ProcessEvent(fn, &parms);
}

struct UMediaTexture* UMediaComponent::GetMediaTexture(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaComponent.GetMediaTexture");

	FGetMediaTexture parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMediaPlayer* UMediaComponent::GetMediaPlayer(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaComponent.GetMediaPlayer");

	FGetMediaPlayer parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMediaSoundComponent::SetSpectralAnalysisSettings(struct TArray<float> InFrequenciesToAnalyze, uint8_t InFFTSize){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings");

	FSetSpectralAnalysisSettings parms{};	
	parms.InFrequenciesToAnalyze = InFrequenciesToAnalyze;
	parms.InFFTSize = InFFTSize;

	ProcessEvent(fn, &parms);
}

void UMediaSoundComponent::SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetMediaPlayer");

	FSetMediaPlayer parms{};	
	parms.NewMediaPlayer = NewMediaPlayer;

	ProcessEvent(fn, &parms);
}

void UMediaSoundComponent::SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings");

	FSetEnvelopeFollowingsettings parms{};	
	parms.AttackTimeMsec = AttackTimeMsec;
	parms.ReleaseTimeMsec = ReleaseTimeMsec;

	ProcessEvent(fn, &parms);
}

void UMediaSoundComponent::SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis");

	FSetEnableSpectralAnalysis parms{};	
	parms.bInSpectralAnalysisEnabled = bInSpectralAnalysisEnabled;

	ProcessEvent(fn, &parms);
}

void UMediaSoundComponent::SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing");

	FSetEnableEnvelopeFollowing parms{};	
	parms.bInEnvelopeFollowing = bInEnvelopeFollowing;

	ProcessEvent(fn, &parms);
}

struct TArray<struct FMediaSoundComponentSpectralData> UMediaSoundComponent::GetSpectralData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.GetSpectralData");

	FGetSpectralData parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FMediaSoundComponentSpectralData> UMediaSoundComponent::GetNormalizedSpectralData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.GetNormalizedSpectralData");

	FGetNormalizedSpectralData parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMediaPlayer* UMediaSoundComponent::GetMediaPlayer(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.GetMediaPlayer");

	FGetMediaPlayer parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMediaSoundComponent::GetEnvelopeValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.GetEnvelopeValue");

	FGetEnvelopeValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaSoundComponent::BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings& OutAttenuationSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply");

	FBP_GetAttenuationSettingsToApply parms{};	
	parms.OutAttenuationSettings = OutAttenuationSettings;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMediaTexture::UpdateResource(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.UpdateResource");

	FUpdateResource parms{};	

	ProcessEvent(fn, &parms);
}

void UMediaTexture::SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.SetMediaPlayer");

	FSetMediaPlayer parms{};	
	parms.NewMediaPlayer = NewMediaPlayer;

	ProcessEvent(fn, &parms);
}

int32_t UMediaTexture::GetWidth(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetWidth");

	FGetWidth parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMediaTexture::GetTextureNumMips(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetTextureNumMips");

	FGetTextureNumMips parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMediaPlayer* UMediaTexture::GetMediaPlayer(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetMediaPlayer");

	FGetMediaPlayer parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMediaTexture::GetHeight(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetHeight");

	FGetHeight parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMediaTexture::GetAspectRatio(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetAspectRatio");

	FGetAspectRatio parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::SupportsSeeking(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsSeeking");

	FSupportsSeeking parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::SupportsScrubbing(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsScrubbing");

	FSupportsScrubbing parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::SupportsRate(float Rate, bool Unthinned){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsRate");

	FSupportsRate parms{};	
	parms.Rate = Rate;
	parms.Unthinned = Unthinned;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::SetViewRotation(struct FRotator& Rotation, bool Absolute){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetViewRotation");

	FSetViewRotation parms{};	
	parms.Rotation = Rotation;
	parms.Absolute = Absolute;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::SetViewField(float Horizontal, float Vertical, bool Absolute){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetViewField");

	FSetViewField parms{};	
	parms.Horizontal = Horizontal;
	parms.Vertical = Vertical;
	parms.Absolute = Absolute;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate");

	FSetVideoTrackFrameRate parms{};	
	parms.TrackIndex = TrackIndex;
	parms.FormatIndex = FormatIndex;
	parms.FrameRate = FrameRate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::SetTrackFormat(uint8_t TrackType, int32_t TrackIndex, int32_t FormatIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetTrackFormat");

	FSetTrackFormat parms{};	
	parms.TrackType = TrackType;
	parms.TrackIndex = TrackIndex;
	parms.FormatIndex = FormatIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMediaPlayer::SetTimeDelay(struct FTimespan TimeDelay){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetTimeDelay");

	FSetTimeDelay parms{};	
	parms.TimeDelay = TimeDelay;

	ProcessEvent(fn, &parms);
}

bool UMediaPlayer::SetRate(float Rate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetRate");

	FSetRate parms{};	
	parms.Rate = Rate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::SetNativeVolume(float Volume){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetNativeVolume");

	FSetNativeVolume parms{};	
	parms.Volume = Volume;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMediaPlayer::SetMediaOptions(struct UMediaSource* Options){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetMediaOptions");

	FSetMediaOptions parms{};	
	parms.Options = Options;

	ProcessEvent(fn, &parms);
}

bool UMediaPlayer::SetLooping(bool Looping){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetLooping");

	FSetLooping parms{};	
	parms.Looping = Looping;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMediaPlayer::SetDesiredPlayerName(struct FName PlayerName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetDesiredPlayerName");

	FSetDesiredPlayerName parms{};	
	parms.PlayerName = PlayerName;

	ProcessEvent(fn, &parms);
}

void UMediaPlayer::SetBlockOnTime(struct FTimespan& Time){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetBlockOnTime");

	FSetBlockOnTime parms{};	
	parms.Time = Time;

	ProcessEvent(fn, &parms);
}

bool UMediaPlayer::SelectTrack(uint8_t TrackType, int32_t TrackIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SelectTrack");

	FSelectTrack parms{};	
	parms.TrackType = TrackType;
	parms.TrackIndex = TrackIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::Seek(struct FTimespan& Time){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Seek");

	FSeek parms{};	
	parms.Time = Time;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::Rewind(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Rewind");

	FRewind parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::Reopen(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Reopen");

	FReopen parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::Previous(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Previous");

	FPrevious parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMediaPlayer::PlayAndSeek(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.PlayAndSeek");

	FPlayAndSeek parms{};	

	ProcessEvent(fn, &parms);
}

bool UMediaPlayer::Play(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Play");

	FPlay parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::Pause(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Pause");

	FPause parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::OpenUrl(struct FString URL){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenUrl");

	FOpenUrl parms{};	
	parms.URL = URL;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::OpenSourceWithOptions(struct UMediaSource* MediaSource, struct FMediaPlayerOptions& Options){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenSourceWithOptions");

	FOpenSourceWithOptions parms{};	
	parms.MediaSource = MediaSource;
	parms.Options = Options;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMediaPlayer::OpenSourceLatent(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UMediaSource* MediaSource, struct FMediaPlayerOptions& Options, bool& bSuccess){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenSourceLatent");

	FOpenSourceLatent parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.LatentInfo = LatentInfo;
	parms.MediaSource = MediaSource;
	parms.Options = Options;
	parms.bSuccess = bSuccess;

	ProcessEvent(fn, &parms);
}

bool UMediaPlayer::OpenSource(struct UMediaSource* MediaSource){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenSource");

	FOpenSource parms{};	
	parms.MediaSource = MediaSource;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::OpenPlaylistIndex(struct UMediaPlaylist* InPlaylist, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenPlaylistIndex");

	FOpenPlaylistIndex parms{};	
	parms.InPlaylist = InPlaylist;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::OpenPlaylist(struct UMediaPlaylist* InPlaylist){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenPlaylist");

	FOpenPlaylist parms{};	
	parms.InPlaylist = InPlaylist;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::OpenFile(struct FString FilePath){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenFile");

	FOpenFile parms{};	
	parms.FilePath = FilePath;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::Next(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Next");

	FNext parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::IsReady(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsReady");

	FIsReady parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::IsPreparing(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPreparing");

	FIsPreparing parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::IsPlaying(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPlaying");

	FIsPlaying parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::IsPaused(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPaused");

	FIsPaused parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::IsLooping(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsLooping");

	FIsLooping parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::IsConnecting(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsConnecting");

	FIsConnecting parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::IsClosed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsClosed");

	FIsClosed parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::IsBuffering(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsBuffering");

	FIsBuffering parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::HasError(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.HasError");

	FHasError parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRotator UMediaPlayer::GetViewRotation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetViewRotation");

	FGetViewRotation parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UMediaPlayer::GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackType");

	FGetVideoTrackType parms{};	
	parms.TrackIndex = TrackIndex;
	parms.FormatIndex = FormatIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FFloatRange UMediaPlayer::GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates");

	FGetVideoTrackFrameRates parms{};	
	parms.TrackIndex = TrackIndex;
	parms.FormatIndex = FormatIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMediaPlayer::GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate");

	FGetVideoTrackFrameRate parms{};	
	parms.TrackIndex = TrackIndex;
	parms.FormatIndex = FormatIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FIntPoint UMediaPlayer::GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackDimensions");

	FGetVideoTrackDimensions parms{};	
	parms.TrackIndex = TrackIndex;
	parms.FormatIndex = FormatIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMediaPlayer::GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio");

	FGetVideoTrackAspectRatio parms{};	
	parms.TrackIndex = TrackIndex;
	parms.FormatIndex = FormatIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMediaPlayer::GetVerticalFieldOfView(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVerticalFieldOfView");

	FGetVerticalFieldOfView parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UMediaPlayer::GetUrl(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetUrl");

	FGetUrl parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UMediaPlayer::GetTrackLanguage(uint8_t TrackType, int32_t TrackIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTrackLanguage");

	FGetTrackLanguage parms{};	
	parms.TrackType = TrackType;
	parms.TrackIndex = TrackIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMediaPlayer::GetTrackFormat(uint8_t TrackType, int32_t TrackIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTrackFormat");

	FGetTrackFormat parms{};	
	parms.TrackType = TrackType;
	parms.TrackIndex = TrackIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UMediaPlayer::GetTrackDisplayName(uint8_t TrackType, int32_t TrackIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTrackDisplayName");

	FGetTrackDisplayName parms{};	
	parms.TrackType = TrackType;
	parms.TrackIndex = TrackIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMediaTimeStampInfo* UMediaPlayer::GetTimeStamp(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTimeStamp");

	FGetTimeStamp parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTimespan UMediaPlayer::GetTimeDelay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTimeDelay");

	FGetTimeDelay parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTimespan UMediaPlayer::GetTime(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTime");

	FGetTime parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMediaPlayer::GetSupportedRates(struct TArray<struct FFloatRange>& OutRates, bool Unthinned){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetSupportedRates");

	FGetSupportedRates parms{};	
	parms.OutRates = OutRates;
	parms.Unthinned = Unthinned;

	ProcessEvent(fn, &parms);
}

int32_t UMediaPlayer::GetSelectedTrack(uint8_t TrackType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetSelectedTrack");

	FGetSelectedTrack parms{};	
	parms.TrackType = TrackType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMediaPlayer::GetRate(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetRate");

	FGetRate parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMediaPlayer::GetPlaylistIndex(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetPlaylistIndex");

	FGetPlaylistIndex parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMediaPlaylist* UMediaPlayer::GetPlaylist(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetPlaylist");

	FGetPlaylist parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FName UMediaPlayer::GetPlayerName(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetPlayerName");

	FGetPlayerName parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMediaPlayer::GetNumTracks(uint8_t TrackType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetNumTracks");

	FGetNumTracks parms{};	
	parms.TrackType = TrackType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMediaPlayer::GetNumTrackFormats(uint8_t TrackType, int32_t TrackIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetNumTrackFormats");

	FGetNumTrackFormats parms{};	
	parms.TrackType = TrackType;
	parms.TrackIndex = TrackIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UMediaPlayer::GetMediaName(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetMediaName");

	FGetMediaName parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMediaPlayer::GetHorizontalFieldOfView(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView");

	FGetHorizontalFieldOfView parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTimespan UMediaPlayer::GetDuration(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetDuration");

	FGetDuration parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FName UMediaPlayer::GetDesiredPlayerName(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetDesiredPlayerName");

	FGetDesiredPlayerName parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UMediaPlayer::GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetAudioTrackType");

	FGetAudioTrackType parms{};	
	parms.TrackIndex = TrackIndex;
	parms.FormatIndex = FormatIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMediaPlayer::GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate");

	FGetAudioTrackSampleRate parms{};	
	parms.TrackIndex = TrackIndex;
	parms.FormatIndex = FormatIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMediaPlayer::GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetAudioTrackChannels");

	FGetAudioTrackChannels parms{};	
	parms.TrackIndex = TrackIndex;
	parms.FormatIndex = FormatIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMediaPlayer::Close(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Close");

	FClose parms{};	

	ProcessEvent(fn, &parms);
}

bool UMediaPlayer::CanPlayUrl(struct FString URL){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPlayUrl");

	FCanPlayUrl parms{};	
	parms.URL = URL;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::CanPlaySource(struct UMediaSource* MediaSource){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPlaySource");

	FCanPlaySource parms{};	
	parms.MediaSource = MediaSource;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlayer::CanPause(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPause");

	FCanPause parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlaylist::Replace(int32_t Index, struct UMediaSource* Replacement){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Replace");

	FReplace parms{};	
	parms.Index = Index;
	parms.Replacement = Replacement;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlaylist::RemoveAt(int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.RemoveAt");

	FRemoveAt parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlaylist::Remove(struct UMediaSource* MediaSource){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Remove");

	FRemove parms{};	
	parms.MediaSource = MediaSource;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UMediaPlaylist::Num(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Num");

	FNum parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMediaPlaylist::Insert(struct UMediaSource* MediaSource, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Insert");

	FInsert parms{};	
	parms.MediaSource = MediaSource;
	parms.Index = Index;

	ProcessEvent(fn, &parms);
}

struct UMediaSource* UMediaPlaylist::GetRandom(int32_t& OutIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.GetRandom");

	FGetRandom parms{};	
	parms.OutIndex = OutIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMediaSource* UMediaPlaylist::GetPrevious(int32_t& InOutIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.GetPrevious");

	FGetPrevious parms{};	
	parms.InOutIndex = InOutIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMediaSource* UMediaPlaylist::GetNext(int32_t& InOutIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.GetNext");

	FGetNext parms{};	
	parms.InOutIndex = InOutIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMediaSource* UMediaPlaylist::Get(int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Get");

	FGet parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlaylist::AddUrl(struct FString URL){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.AddUrl");

	FAddUrl parms{};	
	parms.URL = URL;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlaylist::AddFile(struct FString FilePath){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.AddFile");

	FAddFile parms{};	
	parms.FilePath = FilePath;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlaylist::Add(struct UMediaSource* MediaSource){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Add");

	FAdd parms{};	
	parms.MediaSource = MediaSource;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMediaBlueprintFunctionLibrary::EnumerateWebcamCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices");

	FEnumerateWebcamCaptureDevices parms{};	
	parms.OutDevices = OutDevices;
	parms.Filter = Filter;

	ProcessEvent(fn, &parms);
}

void UMediaBlueprintFunctionLibrary::EnumerateVideoCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices");

	FEnumerateVideoCaptureDevices parms{};	
	parms.OutDevices = OutDevices;
	parms.Filter = Filter;

	ProcessEvent(fn, &parms);
}

void UMediaBlueprintFunctionLibrary::EnumerateAudioCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices");

	FEnumerateAudioCaptureDevices parms{};	
	parms.OutDevices = OutDevices;
	parms.Filter = Filter;

	ProcessEvent(fn, &parms);
}

