#include "pch.h"
#include "SDK.h"

void USynthComponent::Stop(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.Stop");

	FStop parms{};	

	ProcessEvent(fn, &parms);
}

void USynthComponent::Start(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.Start");

	FStart parms{};	

	ProcessEvent(fn, &parms);
}

void USynthComponent::SetVolumeMultiplier(float VolumeMultiplier){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetVolumeMultiplier");

	FSetVolumeMultiplier parms{};	
	parms.VolumeMultiplier = VolumeMultiplier;

	ProcessEvent(fn, &parms);
}

void USynthComponent::SetSubmixSend(struct USoundSubmixBase* Submix, float SendLevel){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetSubmixSend");

	FSetSubmixSend parms{};	
	parms.Submix = Submix;
	parms.SendLevel = SendLevel;

	ProcessEvent(fn, &parms);
}

void USynthComponent::SetOutputToBusOnly(bool bInOutputToBusOnly){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetOutputToBusOnly");

	FSetOutputToBusOnly parms{};	
	parms.bInOutputToBusOnly = bInOutputToBusOnly;

	ProcessEvent(fn, &parms);
}

void USynthComponent::SetLowPassFilterFrequency(float InLowPassFilterFrequency){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetLowPassFilterFrequency");

	FSetLowPassFilterFrequency parms{};	
	parms.InLowPassFilterFrequency = InLowPassFilterFrequency;

	ProcessEvent(fn, &parms);
}

void USynthComponent::SetLowPassFilterEnabled(bool InLowPassFilterEnabled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetLowPassFilterEnabled");

	FSetLowPassFilterEnabled parms{};	
	parms.InLowPassFilterEnabled = InLowPassFilterEnabled;

	ProcessEvent(fn, &parms);
}

bool USynthComponent::IsPlaying(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.IsPlaying");

	FIsPlaying parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USynthComponent::FadeOut(float FadeOutDuration, float FadeVolumeLevel, uint8_t FadeCurve){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.FadeOut");

	FFadeOut parms{};	
	parms.FadeOutDuration = FadeOutDuration;
	parms.FadeVolumeLevel = FadeVolumeLevel;
	parms.FadeCurve = FadeCurve;

	ProcessEvent(fn, &parms);
}

void USynthComponent::FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, uint8_t FadeCurve){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.FadeIn");

	FFadeIn parms{};	
	parms.FadeInDuration = FadeInDuration;
	parms.FadeVolumeLevel = FadeVolumeLevel;
	parms.StartTime = StartTime;
	parms.FadeCurve = FadeCurve;

	ProcessEvent(fn, &parms);
}

void USynthComponent::AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, uint8_t FadeCurve){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.AdjustVolume");

	FAdjustVolume parms{};	
	parms.AdjustVolumeDuration = AdjustVolumeDuration;
	parms.AdjustVolumeLevel = AdjustVolumeLevel;
	parms.FadeCurve = FadeCurve;

	ProcessEvent(fn, &parms);
}

void USubmixEffectReverbPreset::SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect");

	FSetSettingsWithReverbEffect parms{};	
	parms.InReverbEffect = InReverbEffect;
	parms.WetLevel = WetLevel;
	parms.DryLevel = DryLevel;

	ProcessEvent(fn, &parms);
}

void USubmixEffectReverbPreset::SetSettings(struct FSubmixEffectReverbSettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbPreset.SetSettings");

	FSetSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void USubmixEffectSubmixEQPreset::SetSettings(struct FSubmixEffectSubmixEQSettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings");

	FSetSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

float UAudioMixerBlueprintLibrary::TrimAudioCache(float InMegabytesToFree){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache");

	FTrimAudioCache parms{};	
	parms.InMegabytesToFree = InMegabytesToFree;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAudioMixerBlueprintLibrary::SwapAudioOutputDevice(struct UObject* WorldContextObject, struct FString NewDeviceId, struct FDelegate& OnCompletedDeviceSwap){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.SwapAudioOutputDevice");

	FSwapAudioOutputDevice parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.NewDeviceId = NewDeviceId;
	parms.OnCompletedDeviceSwap = OnCompletedDeviceSwap;

	ProcessEvent(fn, &parms);
}

struct USoundWave* UAudioMixerBlueprintLibrary::StopRecordingOutput(struct UObject* WorldContextObject, uint8_t ExportType, struct FString Name, struct FString Path, struct USoundSubmix* SubmixToRecord, struct USoundWave* ExistingSoundWaveToOverwrite){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput");

	FStopRecordingOutput parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.ExportType = ExportType;
	parms.Name = Name;
	parms.Path = Path;
	parms.SubmixToRecord = SubmixToRecord;
	parms.ExistingSoundWaveToOverwrite = ExistingSoundWaveToOverwrite;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAudioMixerBlueprintLibrary::StopAudioBus(struct UObject* WorldContextObject, struct UAudioBus* AudioBus){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus");

	FStopAudioBus parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.AudioBus = AudioBus;

	ProcessEvent(fn, &parms);
}

void UAudioMixerBlueprintLibrary::StopAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToStopAnalyzing){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput");

	FStopAnalyzingOutput parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.SubmixToStopAnalyzing = SubmixToStopAnalyzing;

	ProcessEvent(fn, &parms);
}

void UAudioMixerBlueprintLibrary::StartRecordingOutput(struct UObject* WorldContextObject, float ExpectedDuration, struct USoundSubmix* SubmixToRecord){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput");

	FStartRecordingOutput parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.ExpectedDuration = ExpectedDuration;
	parms.SubmixToRecord = SubmixToRecord;

	ProcessEvent(fn, &parms);
}

void UAudioMixerBlueprintLibrary::StartAudioBus(struct UObject* WorldContextObject, struct UAudioBus* AudioBus){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus");

	FStartAudioBus parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.AudioBus = AudioBus;

	ProcessEvent(fn, &parms);
}

void UAudioMixerBlueprintLibrary::StartAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToAnalyze, uint8_t FFTSize, uint8_t InterpolationMethod, uint8_t WindowType, float HopSize, uint8_t SpectrumType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput");

	FStartAnalyzingOutput parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.SubmixToAnalyze = SubmixToAnalyze;
	parms.FFTSize = FFTSize;
	parms.InterpolationMethod = InterpolationMethod;
	parms.WindowType = WindowType;
	parms.HopSize = HopSize;
	parms.SpectrumType = SpectrumType;

	ProcessEvent(fn, &parms);
}

void UAudioMixerBlueprintLibrary::SetSubmixEffectChainOverride(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct TArray<struct USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride");

	FSetSubmixEffectChainOverride parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.SoundSubmix = SoundSubmix;
	parms.SubmixEffectPresetChain = SubmixEffectPresetChain;
	parms.FadeTimeSec = FadeTimeSec;

	ProcessEvent(fn, &parms);
}

void UAudioMixerBlueprintLibrary::SetBypassSourceEffectChainEntry(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry");

	FSetBypassSourceEffectChainEntry parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PresetChain = PresetChain;
	parms.EntryIndex = EntryIndex;
	parms.bBypassed = bBypassed;

	ProcessEvent(fn, &parms);
}

void UAudioMixerBlueprintLibrary::ResumeRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput");

	FResumeRecordingOutput parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.SubmixToPause = SubmixToPause;

	ProcessEvent(fn, &parms);
}

void UAudioMixerBlueprintLibrary::ReplaceSubmixEffect(struct UObject* WorldContextObject, struct USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, struct USoundEffectSubmixPreset* SubmixEffectPreset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSubmixEffect");

	FReplaceSubmixEffect parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.InSoundSubmix = InSoundSubmix;
	parms.SubmixChainIndex = SubmixChainIndex;
	parms.SubmixEffectPreset = SubmixEffectPreset;

	ProcessEvent(fn, &parms);
}

void UAudioMixerBlueprintLibrary::ReplaceSoundEffectSubmix(struct UObject* WorldContextObject, struct USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, struct USoundEffectSubmixPreset* SubmixEffectPreset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix");

	FReplaceSoundEffectSubmix parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.InSoundSubmix = InSoundSubmix;
	parms.SubmixChainIndex = SubmixChainIndex;
	parms.SubmixEffectPreset = SubmixEffectPreset;

	ProcessEvent(fn, &parms);
}

void UAudioMixerBlueprintLibrary::RemoveSubmixEffectPresetAtIndex(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, int32_t SubmixChainIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex");

	FRemoveSubmixEffectPresetAtIndex parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.SoundSubmix = SoundSubmix;
	parms.SubmixChainIndex = SubmixChainIndex;

	ProcessEvent(fn, &parms);
}

void UAudioMixerBlueprintLibrary::RemoveSubmixEffectPreset(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset");

	FRemoveSubmixEffectPreset parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.SoundSubmix = SoundSubmix;
	parms.SubmixEffectPreset = SubmixEffectPreset;

	ProcessEvent(fn, &parms);
}

void UAudioMixerBlueprintLibrary::RemoveSubmixEffectAtIndex(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, int32_t SubmixChainIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectAtIndex");

	FRemoveSubmixEffectAtIndex parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.SoundSubmix = SoundSubmix;
	parms.SubmixChainIndex = SubmixChainIndex;

	ProcessEvent(fn, &parms);
}

void UAudioMixerBlueprintLibrary::RemoveSubmixEffect(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffect");

	FRemoveSubmixEffect parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.SoundSubmix = SoundSubmix;
	parms.SubmixEffectPreset = SubmixEffectPreset;

	ProcessEvent(fn, &parms);
}

void UAudioMixerBlueprintLibrary::RemoveSourceEffectFromPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain");

	FRemoveSourceEffectFromPresetChain parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PresetChain = PresetChain;
	parms.EntryIndex = EntryIndex;

	ProcessEvent(fn, &parms);
}

void UAudioMixerBlueprintLibrary::RemoveMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect");

	FRemoveMasterSubmixEffect parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.SubmixEffectPreset = SubmixEffectPreset;

	ProcessEvent(fn, &parms);
}

void UAudioMixerBlueprintLibrary::PrimeSoundForPlayback(struct USoundWave* SoundWave, struct FDelegate OnLoadCompletion){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback");

	FPrimeSoundForPlayback parms{};	
	parms.SoundWave = SoundWave;
	parms.OnLoadCompletion = OnLoadCompletion;

	ProcessEvent(fn, &parms);
}

void UAudioMixerBlueprintLibrary::PrimeSoundCueForPlayback(struct USoundCue* SoundCue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback");

	FPrimeSoundCueForPlayback parms{};	
	parms.SoundCue = SoundCue;

	ProcessEvent(fn, &parms);
}

void UAudioMixerBlueprintLibrary::PauseRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput");

	FPauseRecordingOutput parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.SubmixToPause = SubmixToPause;

	ProcessEvent(fn, &parms);
}

struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::MakePresetSpectralAnalysisBandSettings(uint8_t InBandPresetType, int32_t InNumBands, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings");

	FMakePresetSpectralAnalysisBandSettings parms{};	
	parms.InBandPresetType = InBandPresetType;
	parms.InNumBands = InNumBands;
	parms.InAttackTimeMsec = InAttackTimeMsec;
	parms.InReleaseTimeMsec = InReleaseTimeMsec;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::MakeMusicalSpectralAnalysisBandSettings(int32_t InNumSemitones, uint8_t InStartingMusicalNote, int32_t InStartingOctave, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings");

	FMakeMusicalSpectralAnalysisBandSettings parms{};	
	parms.InNumSemitones = InNumSemitones;
	parms.InStartingMusicalNote = InStartingMusicalNote;
	parms.InStartingOctave = InStartingOctave;
	parms.InAttackTimeMsec = InAttackTimeMsec;
	parms.InReleaseTimeMsec = InReleaseTimeMsec;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::MakeFullSpectrumSpectralAnalysisBandSettings(int32_t InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings");

	FMakeFullSpectrumSpectralAnalysisBandSettings parms{};	
	parms.InNumBands = InNumBands;
	parms.InMinimumFrequency = InMinimumFrequency;
	parms.InMaximumFrequency = InMaximumFrequency;
	parms.InAttackTimeMsec = InAttackTimeMsec;
	parms.InReleaseTimeMsec = InReleaseTimeMsec;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAudioMixerBlueprintLibrary::IsAudioBusActive(struct UObject* WorldContextObject, struct UAudioBus* AudioBus){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive");

	FIsAudioBusActive parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.AudioBus = AudioBus;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAudioMixerBlueprintLibrary::GetPhaseForFrequencies(struct UObject* WorldContextObject, struct TArray<float>& Frequencies, struct TArray<float>& Phases, struct USoundSubmix* SubmixToAnalyze){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies");

	FGetPhaseForFrequencies parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Frequencies = Frequencies;
	parms.Phases = Phases;
	parms.SubmixToAnalyze = SubmixToAnalyze;

	ProcessEvent(fn, &parms);
}

int32_t UAudioMixerBlueprintLibrary::GetNumberOfEntriesInSourceEffectChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain");

	FGetNumberOfEntriesInSourceEffectChain parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PresetChain = PresetChain;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAudioMixerBlueprintLibrary::GetMagnitudeForFrequencies(struct UObject* WorldContextObject, struct TArray<float>& Frequencies, struct TArray<float>& Magnitudes, struct USoundSubmix* SubmixToAnalyze){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies");

	FGetMagnitudeForFrequencies parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Frequencies = Frequencies;
	parms.Magnitudes = Magnitudes;
	parms.SubmixToAnalyze = SubmixToAnalyze;

	ProcessEvent(fn, &parms);
}

void UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName(struct UObject* WorldContextObject, struct FDelegate& OnObtainCurrentDeviceEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.GetCurrentAudioOutputDeviceName");

	FGetCurrentAudioOutputDeviceName parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.OnObtainCurrentDeviceEvent = OnObtainCurrentDeviceEvent;

	ProcessEvent(fn, &parms);
}

void UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices(struct UObject* WorldContextObject, struct FDelegate& OnObtainDevicesEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.GetAvailableAudioOutputDevices");

	FGetAvailableAudioOutputDevices parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.OnObtainDevicesEvent = OnObtainDevicesEvent;

	ProcessEvent(fn, &parms);
}

struct FString UAudioMixerBlueprintLibrary::Conv_AudioOutputDeviceInfoToString(struct FAudioOutputDeviceInfo& Info){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.Conv_AudioOutputDeviceInfoToString");

	FConv_AudioOutputDeviceInfoToString parms{};	
	parms.Info = Info;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAudioMixerBlueprintLibrary::ClearSubmixEffects(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects");

	FClearSubmixEffects parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.SoundSubmix = SoundSubmix;

	ProcessEvent(fn, &parms);
}

void UAudioMixerBlueprintLibrary::ClearSubmixEffectChainOverride(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, float FadeTimeSec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride");

	FClearSubmixEffectChainOverride parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.SoundSubmix = SoundSubmix;
	parms.FadeTimeSec = FadeTimeSec;

	ProcessEvent(fn, &parms);
}

void UAudioMixerBlueprintLibrary::ClearMasterSubmixEffects(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects");

	FClearMasterSubmixEffects parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);
}

int32_t UAudioMixerBlueprintLibrary::AddSubmixEffect(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect");

	FAddSubmixEffect parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.SoundSubmix = SoundSubmix;
	parms.SubmixEffectPreset = SubmixEffectPreset;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAudioMixerBlueprintLibrary::AddSourceEffectToPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, struct FSourceEffectChainEntry Entry){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain");

	FAddSourceEffectToPresetChain parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PresetChain = PresetChain;
	parms.Entry = Entry;

	ProcessEvent(fn, &parms);
}

void UAudioMixerBlueprintLibrary::AddMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect");

	FAddMasterSubmixEffect parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.SubmixEffectPreset = SubmixEffectPreset;

	ProcessEvent(fn, &parms);
}

void USubmixEffectDynamicsProcessorPreset::SetSettings(struct FSubmixEffectDynamicsProcessorSettings& Settings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings");

	FSetSettings parms{};	
	parms.Settings = Settings;

	ProcessEvent(fn, &parms);
}

void USubmixEffectDynamicsProcessorPreset::SetExternalSubmix(struct USoundSubmix* Submix){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix");

	FSetExternalSubmix parms{};	
	parms.Submix = Submix;

	ProcessEvent(fn, &parms);
}

void USubmixEffectDynamicsProcessorPreset::SetAudioBus(struct UAudioBus* AudioBus){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetAudioBus");

	FSetAudioBus parms{};	
	parms.AudioBus = AudioBus;

	ProcessEvent(fn, &parms);
}

void USubmixEffectDynamicsProcessorPreset::ResetKey(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.ResetKey");

	FResetKey parms{};	

	ProcessEvent(fn, &parms);
}

void UQuartzClockHandle::UnsubscribeFromTimeDivision(struct UObject* WorldContextObject, uint8_t InQuantizationBoundary, struct UQuartzClockHandle*& ClockHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision");

	FUnsubscribeFromTimeDivision parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.InQuantizationBoundary = InQuantizationBoundary;
	parms.ClockHandle = ClockHandle;

	ProcessEvent(fn, &parms);
}

void UQuartzClockHandle::UnsubscribeFromAllTimeDivisions(struct UObject* WorldContextObject, struct UQuartzClockHandle*& ClockHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions");

	FUnsubscribeFromAllTimeDivisions parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.ClockHandle = ClockHandle;

	ProcessEvent(fn, &parms);
}

void UQuartzClockHandle::SubscribeToQuantizationEvent(struct UObject* WorldContextObject, uint8_t InQuantizationBoundary, struct FDelegate& OnQuantizationEvent, struct UQuartzClockHandle*& ClockHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent");

	FSubscribeToQuantizationEvent parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.InQuantizationBoundary = InQuantizationBoundary;
	parms.OnQuantizationEvent = OnQuantizationEvent;
	parms.ClockHandle = ClockHandle;

	ProcessEvent(fn, &parms);
}

void UQuartzClockHandle::SubscribeToAllQuantizationEvents(struct UObject* WorldContextObject, struct FDelegate& OnQuantizationEvent, struct UQuartzClockHandle*& ClockHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents");

	FSubscribeToAllQuantizationEvents parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.OnQuantizationEvent = OnQuantizationEvent;
	parms.ClockHandle = ClockHandle;

	ProcessEvent(fn, &parms);
}

void UQuartzClockHandle::StopClock(struct UObject* WorldContextObject, bool CancelPendingEvents, struct UQuartzClockHandle*& ClockHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.StopClock");

	FStopClock parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.CancelPendingEvents = CancelPendingEvents;
	parms.ClockHandle = ClockHandle;

	ProcessEvent(fn, &parms);
}

void UQuartzClockHandle::StartOtherClock(struct UObject* WorldContextObject, struct FName OtherClockName, struct FQuartzQuantizationBoundary InQuantizationBoundary, struct FDelegate& InDelegate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.StartOtherClock");

	FStartOtherClock parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.OtherClockName = OtherClockName;
	parms.InQuantizationBoundary = InQuantizationBoundary;
	parms.InDelegate = InDelegate;

	ProcessEvent(fn, &parms);
}

void UQuartzClockHandle::StartClock(struct UObject* WorldContextObject, struct UQuartzClockHandle*& ClockHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.StartClock");

	FStartClock parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.ClockHandle = ClockHandle;

	ProcessEvent(fn, &parms);
}

void UQuartzClockHandle::SetTicksPerSecond(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, struct UQuartzClockHandle*& ClockHandle, float TicksPerSecond){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.SetTicksPerSecond");

	FSetTicksPerSecond parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.QuantizationBoundary = QuantizationBoundary;
	parms.Delegate = Delegate;
	parms.ClockHandle = ClockHandle;
	parms.TicksPerSecond = TicksPerSecond;

	ProcessEvent(fn, &parms);
}

void UQuartzClockHandle::SetThirtySecondNotesPerMinute(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, struct UQuartzClockHandle*& ClockHandle, float ThirtySecondsNotesPerMinute){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute");

	FSetThirtySecondNotesPerMinute parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.QuantizationBoundary = QuantizationBoundary;
	parms.Delegate = Delegate;
	parms.ClockHandle = ClockHandle;
	parms.ThirtySecondsNotesPerMinute = ThirtySecondsNotesPerMinute;

	ProcessEvent(fn, &parms);
}

void UQuartzClockHandle::SetSecondsPerTick(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, struct UQuartzClockHandle*& ClockHandle, float SecondsPerTick){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.SetSecondsPerTick");

	FSetSecondsPerTick parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.QuantizationBoundary = QuantizationBoundary;
	parms.Delegate = Delegate;
	parms.ClockHandle = ClockHandle;
	parms.SecondsPerTick = SecondsPerTick;

	ProcessEvent(fn, &parms);
}

void UQuartzClockHandle::SetMillisecondsPerTick(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, struct UQuartzClockHandle*& ClockHandle, float MillisecondsPerTick){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick");

	FSetMillisecondsPerTick parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.QuantizationBoundary = QuantizationBoundary;
	parms.Delegate = Delegate;
	parms.ClockHandle = ClockHandle;
	parms.MillisecondsPerTick = MillisecondsPerTick;

	ProcessEvent(fn, &parms);
}

void UQuartzClockHandle::SetBeatsPerMinute(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, struct UQuartzClockHandle*& ClockHandle, float BeatsPerMinute){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute");

	FSetBeatsPerMinute parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.QuantizationBoundary = QuantizationBoundary;
	parms.Delegate = Delegate;
	parms.ClockHandle = ClockHandle;
	parms.BeatsPerMinute = BeatsPerMinute;

	ProcessEvent(fn, &parms);
}

void UQuartzClockHandle::ResumeClock(struct UObject* WorldContextObject, struct UQuartzClockHandle*& ClockHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.ResumeClock");

	FResumeClock parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.ClockHandle = ClockHandle;

	ProcessEvent(fn, &parms);
}

void UQuartzClockHandle::ResetTransportQuantized(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary InQuantizationBoundary, struct FDelegate& InDelegate, struct UQuartzClockHandle*& ClockHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.ResetTransportQuantized");

	FResetTransportQuantized parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.InQuantizationBoundary = InQuantizationBoundary;
	parms.InDelegate = InDelegate;
	parms.ClockHandle = ClockHandle;

	ProcessEvent(fn, &parms);
}

void UQuartzClockHandle::ResetTransport(struct UObject* WorldContextObject, struct FDelegate& InDelegate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.ResetTransport");

	FResetTransport parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.InDelegate = InDelegate;

	ProcessEvent(fn, &parms);
}

void UQuartzClockHandle::PauseClock(struct UObject* WorldContextObject, struct UQuartzClockHandle*& ClockHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.PauseClock");

	FPauseClock parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.ClockHandle = ClockHandle;

	ProcessEvent(fn, &parms);
}

bool UQuartzClockHandle::IsClockRunning(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.IsClockRunning");

	FIsClockRunning parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UQuartzClockHandle::GetTicksPerSecond(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.GetTicksPerSecond");

	FGetTicksPerSecond parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UQuartzClockHandle::GetThirtySecondNotesPerMinute(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute");

	FGetThirtySecondNotesPerMinute parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UQuartzClockHandle::GetSecondsPerTick(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.GetSecondsPerTick");

	FGetSecondsPerTick parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UQuartzClockHandle::GetMillisecondsPerTick(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick");

	FGetMillisecondsPerTick parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UQuartzClockHandle::GetEstimatedRunTime(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.GetEstimatedRunTime");

	FGetEstimatedRunTime parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UQuartzClockHandle::GetDurationOfQuantizationTypeInSeconds(struct UObject* WorldContextObject, uint8_t& QuantizationType, float Multiplier){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.GetDurationOfQuantizationTypeInSeconds");

	FGetDurationOfQuantizationTypeInSeconds parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.QuantizationType = QuantizationType;
	parms.Multiplier = Multiplier;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FQuartzTransportTimeStamp UQuartzClockHandle::GetCurrentTimestamp(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.GetCurrentTimestamp");

	FGetCurrentTimestamp parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UQuartzClockHandle::GetBeatsPerMinute(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute");

	FGetBeatsPerMinute parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UQuartzSubsystem::IsQuartzEnabled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.IsQuartzEnabled");

	FIsQuartzEnabled parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UQuartzSubsystem::IsClockRunning(struct UObject* WorldContextObject, struct FName ClockName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.IsClockRunning");

	FIsClockRunning parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.ClockName = ClockName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UQuartzSubsystem::GetRoundTripMinLatency(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency");

	FGetRoundTripMinLatency parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UQuartzSubsystem::GetRoundTripMaxLatency(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency");

	FGetRoundTripMaxLatency parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UQuartzSubsystem::GetRoundTripAverageLatency(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency");

	FGetRoundTripAverageLatency parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UQuartzClockHandle* UQuartzSubsystem::GetHandleForClock(struct UObject* WorldContextObject, struct FName ClockName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetHandleForClock");

	FGetHandleForClock parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.ClockName = ClockName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMinLatency(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency");

	FGetGameThreadToAudioRenderThreadMinLatency parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMaxLatency(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency");

	FGetGameThreadToAudioRenderThreadMaxLatency parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadAverageLatency(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency");

	FGetGameThreadToAudioRenderThreadAverageLatency parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UQuartzSubsystem::GetEstimatedClockRunTime(struct UObject* WorldContextObject, struct FName& InClockName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetEstimatedClockRunTime");

	FGetEstimatedClockRunTime parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.InClockName = InClockName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UQuartzSubsystem::GetDurationOfQuantizationTypeInSeconds(struct UObject* WorldContextObject, struct FName ClockName, uint8_t& QuantizationType, float Multiplier){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetDurationOfQuantizationTypeInSeconds");

	FGetDurationOfQuantizationTypeInSeconds parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.ClockName = ClockName;
	parms.QuantizationType = QuantizationType;
	parms.Multiplier = Multiplier;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FQuartzTransportTimeStamp UQuartzSubsystem::GetCurrentClockTimestamp(struct UObject* WorldContextObject, struct FName& InClockName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetCurrentClockTimestamp");

	FGetCurrentClockTimestamp parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.InClockName = InClockName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadMinLatency(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency");

	FGetAudioRenderThreadToGameThreadMinLatency parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadMaxLatency(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency");

	FGetAudioRenderThreadToGameThreadMaxLatency parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadAverageLatency(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency");

	FGetAudioRenderThreadToGameThreadAverageLatency parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UQuartzSubsystem::DoesClockExist(struct UObject* WorldContextObject, struct FName ClockName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.DoesClockExist");

	FDoesClockExist parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.ClockName = ClockName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UQuartzSubsystem::DeleteClockByName(struct UObject* WorldContextObject, struct FName ClockName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.DeleteClockByName");

	FDeleteClockByName parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.ClockName = ClockName;

	ProcessEvent(fn, &parms);
}

void UQuartzSubsystem::DeleteClockByHandle(struct UObject* WorldContextObject, struct UQuartzClockHandle*& InClockHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.DeleteClockByHandle");

	FDeleteClockByHandle parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.InClockHandle = InClockHandle;

	ProcessEvent(fn, &parms);
}

struct UQuartzClockHandle* UQuartzSubsystem::CreateNewClock(struct UObject* WorldContextObject, struct FName ClockName, struct FQuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioMixer.QuartzSubsystem.CreateNewClock");

	FCreateNewClock parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.ClockName = ClockName;
	parms.InSettings = InSettings;
	parms.bOverrideSettingsIfClockExists = bOverrideSettingsIfClockExists;
	parms.bUseAudioEngineClockManager = bUseAudioEngineClockManager;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

