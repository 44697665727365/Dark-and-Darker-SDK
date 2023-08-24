#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct AudioMixer.SwapAudioOutputResult
struct FSwapAudioOutputResult
{
	struct FString CurrentDeviceId;  // 0x0 (0x0)
	struct FString RequestedDeviceId;  // 0x10 (0x10)
	uint8_t Result;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // DelegateFunction AudioMixer.OnAudioDefaultDeviceChanged__DelegateSignature
struct FOnAudioDefaultDeviceChanged__DelegateSignature
{
	uint8_t AudioDeviceRole;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FString DeviceID;  // 0x8 (0x8)


}; 
 
 // DelegateFunction AudioMixer.OnAudioDeviceChange__DelegateSignature
struct FOnAudioDeviceChange__DelegateSignature
{
	struct FString DeviceID;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AudioMixer.OnSynthEnvelopeValue__DelegateSignature
struct FOnSynthEnvelopeValue__DelegateSignature
{
	float EnvelopeValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AudioMixer.OnAudioDeviceStateChanged__DelegateSignature
struct FOnAudioDeviceStateChanged__DelegateSignature
{
	struct FString DeviceID;  // 0x0 (0x0)
	uint8_t NewState;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // DelegateFunction AudioMixer.OnAudioOutputDevicesObtained__DelegateSignature
struct FOnAudioOutputDevicesObtained__DelegateSignature
{
	struct TArray<struct FAudioOutputDeviceInfo> AvailableDevices;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AudioMixer.AudioOutputDeviceInfo
struct FAudioOutputDeviceInfo
{
	struct FString Name;  // 0x0 (0x0)
	struct FString DeviceID;  // 0x10 (0x10)
	int32_t NumChannels;  // 0x20 (0x20)
	int32_t SampleRate;  // 0x24 (0x24)
	uint8_t Format;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct TArray<uint8_t> OutputChannelArray;  // 0x30 (0x30)
	char bIsSystemDefault : 1;  // 0x40 (0x40)
	char bIsCurrentDevice : 1;  // 0x40 (0x40)
	char pad_64_1 : 6;  // 0x40 (0x40)
	char pad_65[8];  // 0x41 (0x41)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
struct FStopRecordingOutput
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	uint8_t ExportType;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FString Name;  // 0x10 (0x10)
	struct FString Path;  // 0x20 (0x20)
	struct USoundSubmix* SubmixToRecord;  // 0x30 (0x30)
	struct USoundWave* ExistingSoundWaveToOverwrite;  // 0x38 (0x38)
	struct USoundWave* ReturnValue;  // 0x40 (0x40)


}; 
 
 // DelegateFunction AudioMixer.OnCompletedDeviceSwap__DelegateSignature
struct FOnCompletedDeviceSwap__DelegateSignature
{
	struct FSwapAudioOutputResult SwapResult;  // 0x0 (0x0)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
struct FAddSourceEffectToPresetChain
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct USoundEffectSourcePresetChain* PresetChain;  // 0x8 (0x8)
	struct FSourceEffectChainEntry Entry;  // 0x10 (0x10)


}; 
 
 // DelegateFunction AudioMixer.OnMainAudioOutputDeviceObtained__DelegateSignature
struct FOnMainAudioOutputDeviceObtained__DelegateSignature
{
	struct FString CurrentDevice;  // 0x0 (0x0)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
struct FTrimAudioCache
{
	float InMegabytesToFree;  // 0x0 (0x0)
	float ReturnValue;  // 0x4 (0x4)


}; 
 
 // DelegateFunction AudioMixer.OnSoundLoadComplete__DelegateSignature
struct FOnSoundLoadComplete__DelegateSignature
{
	struct USoundWave* LoadedSoundWave;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool WasCancelled : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function AudioMixer.SynthComponent.FadeOut
struct FFadeOut
{
	float FadeOutDuration;  // 0x0 (0x0)
	float FadeVolumeLevel;  // 0x4 (0x4)
	uint8_t FadeCurve;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
struct FSetBypassSourceEffectChainEntry
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct USoundEffectSourcePresetChain* PresetChain;  // 0x8 (0x8)
	int32_t EntryIndex;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bBypassed : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function AudioMixer.SynthComponent.AdjustVolume
struct FAdjustVolume
{
	float AdjustVolumeDuration;  // 0x0 (0x0)
	float AdjustVolumeLevel;  // 0x4 (0x4)
	uint8_t FadeCurve;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // ScriptStruct AudioMixer.SubmixEffectDynamicProcessorFilterSettings
struct FSubmixEffectDynamicProcessorFilterSettings
{
	char bEnabled : 1;  // 0x0 (0x0)
	char pad_0_1 : 7;  // 0x0 (0x0)
	char pad_1[4];  // 0x1 (0x1)
	float Cutoff;  // 0x4 (0x4)
	float GainDb;  // 0x8 (0x8)


}; 
 
 // ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
struct FSubmixEffectDynamicsProcessorSettings
{
	uint8_t DynamicsProcessorType;  // 0x0 (0x0)
	uint8_t PeakMode;  // 0x1 (0x1)
	uint8_t LinkMode;  // 0x2 (0x2)
	char pad_3[1];  // 0x3 (0x3)
	float InputGainDb;  // 0x4 (0x4)
	float ThresholdDb;  // 0x8 (0x8)
	float Ratio;  // 0xC (0xC)
	float KneeBandwidthDb;  // 0x10 (0x10)
	float LookAheadMsec;  // 0x14 (0x14)
	float AttackTimeMsec;  // 0x18 (0x18)
	float ReleaseTimeMsec;  // 0x1C (0x1C)
	uint8_t KeySource;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct UAudioBus* ExternalAudioBus;  // 0x28 (0x28)
	struct USoundSubmix* ExternalSubmix;  // 0x30 (0x30)
	char bChannelLinked : 1;  // 0x38 (0x38)
	char bAnalogMode : 1;  // 0x38 (0x38)
	char bBypass : 1;  // 0x38 (0x38)
	char bKeyAudition : 1;  // 0x38 (0x38)
	char pad_56_1 : 4;  // 0x38 (0x38)
	char pad_57[4];  // 0x39 (0x39)
	float KeyGainDb;  // 0x3C (0x3C)
	float OutputGainDb;  // 0x40 (0x40)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf;  // 0x44 (0x44)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf;  // 0x50 (0x50)
	char pad_92[4];  // 0x5C (0x5C)


}; 
 
 // Function AudioMixer.SynthComponent.SetLowPassFilterEnabled
struct FSetLowPassFilterEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InLowPassFilterEnabled : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AudioMixer.SubmixEffectReverbSettings
struct FSubmixEffectReverbSettings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bBypassEarlyReflections : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float ReflectionsDelay;  // 0x4 (0x4)
	float GainHF;  // 0x8 (0x8)
	float ReflectionsGain;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bBypassLateReflections : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	float LateDelay;  // 0x14 (0x14)
	float DecayTime;  // 0x18 (0x18)
	float Density;  // 0x1C (0x1C)
	float Diffusion;  // 0x20 (0x20)
	float AirAbsorptionGainHF;  // 0x24 (0x24)
	float DecayHFRatio;  // 0x28 (0x28)
	float LateGain;  // 0x2C (0x2C)
	float Gain;  // 0x30 (0x30)
	float WetLevel;  // 0x34 (0x34)
	float DryLevel;  // 0x38 (0x38)
	char pad_60_1 : 7;  // 0x3C (0x3C)
	bool bBypass : 1;  // 0x3C (0x3C)
	char pad_61[3];  // 0x3D (0x3D)


}; 
 
 // ScriptStruct AudioMixer.SubmixEffectEQBand
struct FSubmixEffectEQBand
{
	float Frequency;  // 0x0 (0x0)
	float Bandwidth;  // 0x4 (0x4)
	float GainDb;  // 0x8 (0x8)
	char bEnabled : 1;  // 0xC (0xC)
	char pad_12_1 : 7;  // 0xC (0xC)
	char pad_13[4];  // 0xD (0xD)


}; 
 
 // ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
struct FSubmixEffectSubmixEQSettings
{
	struct TArray<struct FSubmixEffectEQBand> EQBands;  // 0x0 (0x0)


}; 
 
 // Function AudioMixer.SynthComponent.FadeIn
struct FFadeIn
{
	float FadeInDuration;  // 0x0 (0x0)
	float FadeVolumeLevel;  // 0x4 (0x4)
	float StartTime;  // 0x8 (0x8)
	uint8_t FadeCurve;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function AudioMixer.SynthComponent.SetOutputToBusOnly
struct FSetOutputToBusOnly
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInOutputToBusOnly : 1;  // 0x0 (0x0)


}; 
 
 // Function AudioMixer.SynthComponent.IsPlaying
struct FIsPlaying
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AudioMixer.SynthComponent.SetLowPassFilterFrequency
struct FSetLowPassFilterFrequency
{
	float InLowPassFilterFrequency;  // 0x0 (0x0)


}; 
 
 // Function AudioMixer.SynthComponent.SetSubmixSend
struct FSetSubmixSend
{
	struct USoundSubmixBase* Submix;  // 0x0 (0x0)
	float SendLevel;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function AudioMixer.SynthComponent.SetVolumeMultiplier
struct FSetVolumeMultiplier
{
	float VolumeMultiplier;  // 0x0 (0x0)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
struct FStartAnalyzingOutput
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct USoundSubmix* SubmixToAnalyze;  // 0x8 (0x8)
	uint8_t FFTSize;  // 0x10 (0x10)
	uint8_t InterpolationMethod;  // 0x11 (0x11)
	uint8_t WindowType;  // 0x12 (0x12)
	char pad_19[1];  // 0x13 (0x13)
	float HopSize;  // 0x14 (0x14)
	uint8_t SpectrumType;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectAtIndex
struct FRemoveSubmixEffectAtIndex
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct USoundSubmix* SoundSubmix;  // 0x8 (0x8)
	int32_t SubmixChainIndex;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute
struct FSetBeatsPerMinute
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FQuartzQuantizationBoundary QuantizationBoundary;  // 0x8 (0x8)
	struct FDelegate Delegate;  // 0x28 (0x28)
	struct UQuartzClockHandle* ClockHandle;  // 0x38 (0x38)
	float BeatsPerMinute;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
struct FAddMasterSubmixEffect
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct USoundEffectSubmixPreset* SubmixEffectPreset;  // 0x8 (0x8)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
struct FAddSubmixEffect
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct USoundSubmix* SoundSubmix;  // 0x8 (0x8)
	struct USoundEffectSubmixPreset* SubmixEffectPreset;  // 0x10 (0x10)
	int32_t ReturnValue;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
struct FClearMasterSubmixEffects
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
struct FResumeRecordingOutput
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct USoundSubmix* SubmixToPause;  // 0x8 (0x8)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride
struct FClearSubmixEffectChainOverride
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct USoundSubmix* SoundSubmix;  // 0x8 (0x8)
	float FadeTimeSec;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffect
struct FRemoveSubmixEffect
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct USoundSubmix* SoundSubmix;  // 0x8 (0x8)
	struct USoundEffectSubmixPreset* SubmixEffectPreset;  // 0x10 (0x10)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects
struct FClearSubmixEffects
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct USoundSubmix* SoundSubmix;  // 0x8 (0x8)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.GetAvailableAudioOutputDevices
struct FGetAvailableAudioOutputDevices
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FDelegate OnObtainDevicesEvent;  // 0x8 (0x8)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
struct FStopAnalyzingOutput
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct USoundSubmix* SubmixToStopAnalyzing;  // 0x8 (0x8)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.Conv_AudioOutputDeviceInfoToString
struct FConv_AudioOutputDeviceInfoToString
{
	struct FAudioOutputDeviceInfo Info;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x48 (0x48)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.GetCurrentAudioOutputDeviceName
struct FGetCurrentAudioOutputDeviceName
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FDelegate OnObtainCurrentDeviceEvent;  // 0x8 (0x8)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
struct FGetMagnitudeForFrequencies
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct TArray<float> Frequencies;  // 0x8 (0x8)
	struct TArray<float> Magnitudes;  // 0x18 (0x18)
	struct USoundSubmix* SubmixToAnalyze;  // 0x28 (0x28)


}; 
 
 // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
struct FSetExternalSubmix
{
	struct USoundSubmix* Submix;  // 0x0 (0x0)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
struct FStartRecordingOutput
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	float ExpectedDuration;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct USoundSubmix* SubmixToRecord;  // 0x10 (0x10)


}; 
 
 // Function AudioMixer.QuartzSubsystem.IsQuartzEnabled
struct FIsQuartzEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
struct FGetNumberOfEntriesInSourceEffectChain
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct USoundEffectSourcePresetChain* PresetChain;  // 0x8 (0x8)
	int32_t ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
struct FGetPhaseForFrequencies
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct TArray<float> Frequencies;  // 0x8 (0x8)
	struct TArray<float> Phases;  // 0x18 (0x18)
	struct USoundSubmix* SubmixToAnalyze;  // 0x28 (0x28)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive
struct FIsAudioBusActive
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UAudioBus* AudioBus;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings
struct FMakeFullSpectrumSpectralAnalysisBandSettings
{
	int32_t InNumBands;  // 0x0 (0x0)
	float InMinimumFrequency;  // 0x4 (0x4)
	float InMaximumFrequency;  // 0x8 (0x8)
	int32_t InAttackTimeMsec;  // 0xC (0xC)
	int32_t InReleaseTimeMsec;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings
struct FMakeMusicalSpectralAnalysisBandSettings
{
	int32_t InNumSemitones;  // 0x0 (0x0)
	uint8_t InStartingMusicalNote;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	int32_t InStartingOctave;  // 0x8 (0x8)
	int32_t InAttackTimeMsec;  // 0xC (0xC)
	int32_t InReleaseTimeMsec;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings
struct FMakePresetSpectralAnalysisBandSettings
{
	uint8_t InBandPresetType;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t InNumBands;  // 0x4 (0x4)
	int32_t InAttackTimeMsec;  // 0x8 (0x8)
	int32_t InReleaseTimeMsec;  // 0xC (0xC)
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
struct FPauseRecordingOutput
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct USoundSubmix* SubmixToPause;  // 0x8 (0x8)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
struct FPrimeSoundCueForPlayback
{
	struct USoundCue* SoundCue;  // 0x0 (0x0)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
struct FPrimeSoundForPlayback
{
	struct USoundWave* SoundWave;  // 0x0 (0x0)
	struct FDelegate OnLoadCompletion;  // 0x8 (0x8)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
struct FRemoveSourceEffectFromPresetChain
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct USoundEffectSourcePresetChain* PresetChain;  // 0x8 (0x8)
	int32_t EntryIndex;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
struct FRemoveMasterSubmixEffect
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct USoundEffectSubmixPreset* SubmixEffectPreset;  // 0x8 (0x8)


}; 
 
 // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetAudioBus
struct FSetAudioBus
{
	struct UAudioBus* AudioBus;  // 0x0 (0x0)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
struct FRemoveSubmixEffectPreset
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct USoundSubmix* SoundSubmix;  // 0x8 (0x8)
	struct USoundEffectSubmixPreset* SubmixEffectPreset;  // 0x10 (0x10)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
struct FRemoveSubmixEffectPresetAtIndex
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct USoundSubmix* SoundSubmix;  // 0x8 (0x8)
	int32_t SubmixChainIndex;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
struct FReplaceSoundEffectSubmix
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct USoundSubmix* InSoundSubmix;  // 0x8 (0x8)
	int32_t SubmixChainIndex;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct USoundEffectSubmixPreset* SubmixEffectPreset;  // 0x18 (0x18)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSubmixEffect
struct FReplaceSubmixEffect
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct USoundSubmix* InSoundSubmix;  // 0x8 (0x8)
	int32_t SubmixChainIndex;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct USoundEffectSubmixPreset* SubmixEffectPreset;  // 0x18 (0x18)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride
struct FSetSubmixEffectChainOverride
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct USoundSubmix* SoundSubmix;  // 0x8 (0x8)
	struct TArray<struct USoundEffectSubmixPreset*> SubmixEffectPresetChain;  // 0x10 (0x10)
	float FadeTimeSec;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.SwapAudioOutputDevice
struct FSwapAudioOutputDevice
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FString NewDeviceId;  // 0x8 (0x8)
	struct FDelegate OnCompletedDeviceSwap;  // 0x18 (0x18)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus
struct FStartAudioBus
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UAudioBus* AudioBus;  // 0x8 (0x8)


}; 
 
 // Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus
struct FStopAudioBus
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UAudioBus* AudioBus;  // 0x8 (0x8)


}; 
 
 // Function AudioMixer.SubmixEffectReverbPreset.SetSettings
struct FSetSettings
{
	struct FSubmixEffectReverbSettings InSettings;  // 0x0 (0x0)


}; 
 
 // Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
struct FSetSettingsWithReverbEffect
{
	struct UReverbEffect* InReverbEffect;  // 0x0 (0x0)
	float WetLevel;  // 0x8 (0x8)
	float DryLevel;  // 0xC (0xC)


}; 
 
 // Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute
struct FGetBeatsPerMinute
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function AudioMixer.QuartzClockHandle.GetCurrentTimestamp
struct FGetCurrentTimestamp
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FQuartzTransportTimeStamp ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AudioMixer.QuartzSubsystem.GetDurationOfQuantizationTypeInSeconds
struct FGetDurationOfQuantizationTypeInSeconds
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FName ClockName;  // 0x8 (0x8)
	uint8_t QuantizationType;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	float Multiplier;  // 0x14 (0x14)
	float ReturnValue;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency
struct FGetGameThreadToAudioRenderThreadAverageLatency
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function AudioMixer.QuartzClockHandle.GetEstimatedRunTime
struct FGetEstimatedRunTime
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick
struct FGetMillisecondsPerTick
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function AudioMixer.QuartzClockHandle.GetSecondsPerTick
struct FGetSecondsPerTick
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute
struct FGetThirtySecondNotesPerMinute
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function AudioMixer.QuartzSubsystem.DeleteClockByName
struct FDeleteClockByName
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FName ClockName;  // 0x8 (0x8)


}; 
 
 // Function AudioMixer.QuartzClockHandle.GetTicksPerSecond
struct FGetTicksPerSecond
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function AudioMixer.QuartzSubsystem.IsClockRunning
struct FIsClockRunning
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FName ClockName;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function AudioMixer.QuartzClockHandle.PauseClock
struct FPauseClock
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UQuartzClockHandle* ClockHandle;  // 0x8 (0x8)


}; 
 
 // Function AudioMixer.QuartzClockHandle.ResetTransport
struct FResetTransport
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FDelegate InDelegate;  // 0x8 (0x8)


}; 
 
 // Function AudioMixer.QuartzClockHandle.SetSecondsPerTick
struct FSetSecondsPerTick
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FQuartzQuantizationBoundary QuantizationBoundary;  // 0x8 (0x8)
	struct FDelegate Delegate;  // 0x28 (0x28)
	struct UQuartzClockHandle* ClockHandle;  // 0x38 (0x38)
	float SecondsPerTick;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)


}; 
 
 // Function AudioMixer.QuartzClockHandle.ResetTransportQuantized
struct FResetTransportQuantized
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FQuartzQuantizationBoundary InQuantizationBoundary;  // 0x8 (0x8)
	struct FDelegate InDelegate;  // 0x28 (0x28)
	struct UQuartzClockHandle* ClockHandle;  // 0x38 (0x38)


}; 
 
 // Function AudioMixer.QuartzClockHandle.ResumeClock
struct FResumeClock
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UQuartzClockHandle* ClockHandle;  // 0x8 (0x8)


}; 
 
 // Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick
struct FSetMillisecondsPerTick
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FQuartzQuantizationBoundary QuantizationBoundary;  // 0x8 (0x8)
	struct FDelegate Delegate;  // 0x28 (0x28)
	struct UQuartzClockHandle* ClockHandle;  // 0x38 (0x38)
	float MillisecondsPerTick;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)


}; 
 
 // Function AudioMixer.QuartzClockHandle.StartClock
struct FStartClock
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UQuartzClockHandle* ClockHandle;  // 0x8 (0x8)


}; 
 
 // Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute
struct FSetThirtySecondNotesPerMinute
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FQuartzQuantizationBoundary QuantizationBoundary;  // 0x8 (0x8)
	struct FDelegate Delegate;  // 0x28 (0x28)
	struct UQuartzClockHandle* ClockHandle;  // 0x38 (0x38)
	float ThirtySecondsNotesPerMinute;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)


}; 
 
 // Function AudioMixer.QuartzClockHandle.SetTicksPerSecond
struct FSetTicksPerSecond
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FQuartzQuantizationBoundary QuantizationBoundary;  // 0x8 (0x8)
	struct FDelegate Delegate;  // 0x28 (0x28)
	struct UQuartzClockHandle* ClockHandle;  // 0x38 (0x38)
	float TicksPerSecond;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)


}; 
 
 // Function AudioMixer.QuartzClockHandle.StartOtherClock
struct FStartOtherClock
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FName OtherClockName;  // 0x8 (0x8)
	struct FQuartzQuantizationBoundary InQuantizationBoundary;  // 0x10 (0x10)
	struct FDelegate InDelegate;  // 0x30 (0x30)


}; 
 
 // Function AudioMixer.QuartzClockHandle.StopClock
struct FStopClock
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool CancelPendingEvents : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct UQuartzClockHandle* ClockHandle;  // 0x10 (0x10)


}; 
 
 // Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents
struct FSubscribeToAllQuantizationEvents
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FDelegate OnQuantizationEvent;  // 0x8 (0x8)
	struct UQuartzClockHandle* ClockHandle;  // 0x18 (0x18)


}; 
 
 // Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent
struct FSubscribeToQuantizationEvent
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	uint8_t InQuantizationBoundary;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	struct FDelegate OnQuantizationEvent;  // 0xC (0xC)
	char pad_28[4];  // 0x1C (0x1C)
	struct UQuartzClockHandle* ClockHandle;  // 0x20 (0x20)


}; 
 
 // Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions
struct FUnsubscribeFromAllTimeDivisions
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UQuartzClockHandle* ClockHandle;  // 0x8 (0x8)


}; 
 
 // Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision
struct FUnsubscribeFromTimeDivision
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	uint8_t InQuantizationBoundary;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct UQuartzClockHandle* ClockHandle;  // 0x10 (0x10)


}; 
 
 // Function AudioMixer.QuartzSubsystem.CreateNewClock
struct FCreateNewClock
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FName ClockName;  // 0x8 (0x8)
	struct FQuartzClockSettings InSettings;  // 0x10 (0x10)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bOverrideSettingsIfClockExists : 1;  // 0x30 (0x30)
	char pad_49_1 : 7;  // 0x31 (0x31)
	bool bUseAudioEngineClockManager : 1;  // 0x31 (0x31)
	char pad_50[6];  // 0x32 (0x32)
	struct UQuartzClockHandle* ReturnValue;  // 0x38 (0x38)


}; 
 
 // Function AudioMixer.QuartzSubsystem.DeleteClockByHandle
struct FDeleteClockByHandle
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UQuartzClockHandle* InClockHandle;  // 0x8 (0x8)


}; 
 
 // Function AudioMixer.QuartzSubsystem.GetEstimatedClockRunTime
struct FGetEstimatedClockRunTime
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FName InClockName;  // 0x8 (0x8)
	float ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function AudioMixer.QuartzSubsystem.DoesClockExist
struct FDoesClockExist
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FName ClockName;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency
struct FGetAudioRenderThreadToGameThreadAverageLatency
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency
struct FGetAudioRenderThreadToGameThreadMaxLatency
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency
struct FGetAudioRenderThreadToGameThreadMinLatency
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AudioMixer.QuartzSubsystem.GetCurrentClockTimestamp
struct FGetCurrentClockTimestamp
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FName InClockName;  // 0x8 (0x8)
	struct FQuartzTransportTimeStamp ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency
struct FGetGameThreadToAudioRenderThreadMaxLatency
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency
struct FGetGameThreadToAudioRenderThreadMinLatency
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function AudioMixer.QuartzSubsystem.GetHandleForClock
struct FGetHandleForClock
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FName ClockName;  // 0x8 (0x8)
	struct UQuartzClockHandle* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency
struct FGetRoundTripAverageLatency
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency
struct FGetRoundTripMaxLatency
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency
struct FGetRoundTripMinLatency
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 