#pragma once 
#include <Synthesis_Structs.h>
 
 
 
// Class Synthesis.SourceEffectConvolutionReverbPreset
// Size: 0xC0(Inherited: 0x68)
struct USourceEffectConvolutionReverbPreset : USoundEffectSourcePreset
{
	struct UAudioImpulseResponse* ImpulseResponse;  // 0x68 (0x68)
	struct FSourceEffectConvolutionReverbSettings Settings;  // 0x70 (0x70)
	uint8_t BlockSize;  // 0x80 (0x80)
	char pad_129_1 : 7;  // 0x81 (0x81)
	bool bEnableHardwareAcceleration : 1;  // 0x81 (0x81)
	char pad_130[62];  // 0x82 (0x82)


	void SetSettings(struct FSourceEffectConvolutionReverbSettings& InSettings); // Function Synthesis.SourceEffectConvolutionReverbPreset.SetSettings
	void SetImpulseResponse(struct UAudioImpulseResponse* InImpulseResponse); // Function Synthesis.SourceEffectConvolutionReverbPreset.SetImpulseResponse
}; 
 
 


// Class Synthesis.AudioImpulseResponse
// Size: 0x58(Inherited: 0x28)
struct UAudioImpulseResponse : UObject
{
	struct TArray<float> ImpulseResponse;  // 0x28 (0x28)
	int32_t NumChannels;  // 0x38 (0x38)
	int32_t SampleRate;  // 0x3C (0x3C)
	float NormalizationVolumeDb;  // 0x40 (0x40)
	char pad_68_1 : 7;  // 0x44 (0x44)
	bool bTrueStereo : 1;  // 0x44 (0x44)
	char pad_69[3];  // 0x45 (0x45)
	struct TArray<float> IRData;  // 0x48 (0x48)


}; 
 
 


// Class Synthesis.EnvelopeFollowerListener
// Size: 0xC0(Inherited: 0xA0)
struct UEnvelopeFollowerListener : UActorComponent
{
	struct FMulticastInlineDelegate OnEnvelopeFollowerUpdate;  // 0xA0 (0xA0)
	char pad_176[16];  // 0xB0 (0xB0)


}; 
 
 


// Class Synthesis.ModularSynthComponent
// Size: 0xE60(Inherited: 0x790)
struct UModularSynthComponent : USynthComponent
{
	int32_t VoiceCount;  // 0x790 (0x790)
	char pad_1940[1740];  // 0x794 (0x794)


	void SetSynthPreset(struct FModularSynthPreset& SynthPreset); // Function Synthesis.ModularSynthComponent.SetSynthPreset
	void SetSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetSustainGain
	void SetStereoDelayWetlevel(float DelayWetlevel); // Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
	void SetStereoDelayTime(float DelayTimeMsec); // Function Synthesis.ModularSynthComponent.SetStereoDelayTime
	void SetStereoDelayRatio(float DelayRatio); // Function Synthesis.ModularSynthComponent.SetStereoDelayRatio
	void SetStereoDelayMode(uint8_t StereoDelayMode); // Function Synthesis.ModularSynthComponent.SetStereoDelayMode
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled); // Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
	void SetStereoDelayFeedback(float DelayFeedback); // Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback
	void SetSpread(float Spread); // Function Synthesis.ModularSynthComponent.SetSpread
	void SetReleaseTime(float ReleaseTimeMsec); // Function Synthesis.ModularSynthComponent.SetReleaseTime
	void SetPortamento(float Portamento); // Function Synthesis.ModularSynthComponent.SetPortamento
	void SetPitchBend(float PitchBend); // Function Synthesis.ModularSynthComponent.SetPitchBend
	void SetPan(float Pan); // Function Synthesis.ModularSynthComponent.SetPan
	void SetOscType(int32_t OscIndex, uint8_t OscType); // Function Synthesis.ModularSynthComponent.SetOscType
	void SetOscSync(bool bIsSynced); // Function Synthesis.ModularSynthComponent.SetOscSync
	void SetOscSemitones(int32_t OscIndex, float Semitones); // Function Synthesis.ModularSynthComponent.SetOscSemitones
	void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth); // Function Synthesis.ModularSynthComponent.SetOscPulsewidth
	void SetOscOctave(int32_t OscIndex, float Octave); // Function Synthesis.ModularSynthComponent.SetOscOctave
	void SetOscGainMod(int32_t OscIndex, float OscGainMod); // Function Synthesis.ModularSynthComponent.SetOscGainMod
	void SetOscGain(int32_t OscIndex, float OscGain); // Function Synthesis.ModularSynthComponent.SetOscGain
	void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod); // Function Synthesis.ModularSynthComponent.SetOscFrequencyMod
	void SetOscCents(int32_t OscIndex, float Cents); // Function Synthesis.ModularSynthComponent.SetOscCents
	void SetModEnvSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetModEnvSustainGain
	void SetModEnvReleaseTime(float Release); // Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime
	void SetModEnvPatch(uint8_t InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvPatch
	void SetModEnvInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvInvert
	void SetModEnvDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetModEnvDepth
	void SetModEnvDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvDecayTime
	void SetModEnvBiasPatch(uint8_t InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch
	void SetModEnvBiasInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert
	void SetModEnvAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvAttackTime
	void SetLFOType(int32_t LFOIndex, uint8_t LFOType); // Function Synthesis.ModularSynthComponent.SetLFOType
	void SetLFOPatch(int32_t LFOIndex, uint8_t LFOPatchType); // Function Synthesis.ModularSynthComponent.SetLFOPatch
	void SetLFOMode(int32_t LFOIndex, uint8_t LFOMode); // Function Synthesis.ModularSynthComponent.SetLFOMode
	void SetLFOGainMod(int32_t LFOIndex, float GainMod); // Function Synthesis.ModularSynthComponent.SetLFOGainMod
	void SetLFOGain(int32_t LFOIndex, float Gain); // Function Synthesis.ModularSynthComponent.SetLFOGain
	void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod
	void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequency
	void SetGainDb(float GainDb); // Function Synthesis.ModularSynthComponent.SetGainDb
	void SetFilterType(uint8_t FilterType); // Function Synthesis.ModularSynthComponent.SetFilterType
	void SetFilterQMod(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQMod
	void SetFilterQ(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQ
	void SetFilterFrequencyMod(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod
	void SetFilterFrequency(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequency
	void SetFilterAlgorithm(uint8_t FilterAlgorithm); // Function Synthesis.ModularSynthComponent.SetFilterAlgorithm
	void SetEnableUnison(bool EnableUnison); // Function Synthesis.ModularSynthComponent.SetEnableUnison
	void SetEnableRetrigger(bool RetriggerEnabled); // Function Synthesis.ModularSynthComponent.SetEnableRetrigger
	void SetEnablePolyphony(bool bEnablePolyphony); // Function Synthesis.ModularSynthComponent.SetEnablePolyphony
	bool SetEnablePatch(struct FPatchId PatchId, bool bIsEnabled); // Function Synthesis.ModularSynthComponent.SetEnablePatch
	void SetEnableLegato(bool LegatoEnabled); // Function Synthesis.ModularSynthComponent.SetEnableLegato
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetDecayTime
	void SetChorusFrequency(float Frequency); // Function Synthesis.ModularSynthComponent.SetChorusFrequency
	void SetChorusFeedback(float Feedback); // Function Synthesis.ModularSynthComponent.SetChorusFeedback
	void SetChorusEnabled(bool EnableChorus); // Function Synthesis.ModularSynthComponent.SetChorusEnabled
	void SetChorusDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetChorusDepth
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetAttackTime
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.ModularSynthComponent.NoteOn
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes); // Function Synthesis.ModularSynthComponent.NoteOff
	struct FPatchId CreatePatch(uint8_t PatchSource, struct TArray<struct FSynth1PatchCable>& PatchCables, bool bEnableByDefault); // Function Synthesis.ModularSynthComponent.CreatePatch
}; 
 
 


// Class Synthesis.SynthKnob
// Size: 0x580(Inherited: 0x150)
struct USynthKnob : UWidget
{
	float Value;  // 0x150 (0x150)
	float StepSize;  // 0x154 (0x154)
	float MouseSpeed;  // 0x158 (0x158)
	float MouseFineTuneSpeed;  // 0x15C (0x15C)
	char ShowTooltipInfo : 1;  // 0x160 (0x160)
	char pad_352_1 : 7;  // 0x160 (0x160)
	char pad_353[8];  // 0x161 (0x161)
	struct FText ParameterName;  // 0x168 (0x168)
	struct FText ParameterUnits;  // 0x180 (0x180)
	struct FDelegate ValueDelegate;  // 0x198 (0x198)
	char pad_424[8];  // 0x1A8 (0x1A8)
	struct FSynthKnobStyle WidgetStyle;  // 0x1B0 (0x1B0)
	char pad_1296_1 : 7;  // 0x510 (0x510)
	bool Locked : 1;  // 0x510 (0x510)
	char pad_1297_1 : 7;  // 0x511 (0x511)
	bool IsFocusable : 1;  // 0x511 (0x511)
	char pad_1298[6];  // 0x512 (0x512)
	struct FMulticastInlineDelegate OnMouseCaptureBegin;  // 0x518 (0x518)
	struct FMulticastInlineDelegate OnMouseCaptureEnd;  // 0x528 (0x528)
	struct FMulticastInlineDelegate OnControllerCaptureBegin;  // 0x538 (0x538)
	struct FMulticastInlineDelegate OnControllerCaptureEnd;  // 0x548 (0x548)
	struct FMulticastInlineDelegate OnValueChanged;  // 0x558 (0x558)
	char pad_1384[24];  // 0x568 (0x568)


	void SetValue(float InValue); // Function Synthesis.SynthKnob.SetValue
	void SetStepSize(float InValue); // Function Synthesis.SynthKnob.SetStepSize
	void SetLocked(bool InValue); // Function Synthesis.SynthKnob.SetLocked
	float GetValue(); // Function Synthesis.SynthKnob.GetValue
}; 
 
 


// Class Synthesis.ModularSynthPresetBank
// Size: 0x38(Inherited: 0x28)
struct UModularSynthPresetBank : UObject
{
	struct TArray<struct FModularSynthPresetBankEntry> Presets;  // 0x28 (0x28)


}; 
 
 


// Class Synthesis.SubmixEffectConvolutionReverbPreset
// Size: 0x100(Inherited: 0x68)
struct USubmixEffectConvolutionReverbPreset : USoundEffectSubmixPreset
{
	struct UAudioImpulseResponse* ImpulseResponse;  // 0x68 (0x68)
	struct FSubmixEffectConvolutionReverbSettings Settings;  // 0x70 (0x70)
	uint8_t BlockSize;  // 0xA0 (0xA0)
	char pad_161_1 : 7;  // 0xA1 (0xA1)
	bool bEnableHardwareAcceleration : 1;  // 0xA1 (0xA1)
	char pad_162[94];  // 0xA2 (0xA2)


	void SetSettings(struct FSubmixEffectConvolutionReverbSettings& InSettings); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings
	void SetImpulseResponse(struct UAudioImpulseResponse* InImpulseResponse); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
}; 
 
 


// Class Synthesis.SourceEffectDynamicsProcessorPreset
// Size: 0xE0(Inherited: 0x68)
struct USourceEffectDynamicsProcessorPreset : USoundEffectSourcePreset
{
	char pad_104[80];  // 0x68 (0x68)
	struct FSourceEffectDynamicsProcessorSettings Settings;  // 0xB8 (0xB8)


	void SetSettings(struct FSourceEffectDynamicsProcessorSettings& InSettings); // Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
}; 
 
 


// Class Synthesis.SubmixEffectTapDelayPreset
// Size: 0xD8(Inherited: 0x68)
struct USubmixEffectTapDelayPreset : USoundEffectSubmixPreset
{
	char pad_104[64];  // 0x68 (0x68)
	struct FSubmixEffectTapDelaySettings Settings;  // 0xA8 (0xA8)
	char pad_192[24];  // 0xC0 (0xC0)


	void SetTap(int32_t TapId, struct FTapDelayInfo& TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.SetTap
	void SetSettings(struct FSubmixEffectTapDelaySettings& InSettings); // Function Synthesis.SubmixEffectTapDelayPreset.SetSettings
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
	void RemoveTap(int32_t TapId); // Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap
	void GetTapIds(struct TArray<int32_t>& TapIds); // Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds
	void GetTap(int32_t TapId, struct FTapDelayInfo& TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.GetTap
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
	void AddTap(int32_t& TapId); // Function Synthesis.SubmixEffectTapDelayPreset.AddTap
}; 
 
 


// Class Synthesis.SourceEffectChorusPreset
// Size: 0x540(Inherited: 0x68)
struct USourceEffectChorusPreset : USoundEffectSourcePreset
{
	char pad_104[640];  // 0x68 (0x68)
	struct FSourceEffectChorusSettings Settings;  // 0x2E8 (0x2E8)


	void SetWetModulators(struct TSet<struct USoundModulatorBase*>& Modulators); // Function Synthesis.SourceEffectChorusPreset.SetWetModulators
	void SetWetModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetWetModulator
	void SetWet(float WetAmount); // Function Synthesis.SourceEffectChorusPreset.SetWet
	void SetSpreadModulators(struct TSet<struct USoundModulatorBase*>& Modulators); // Function Synthesis.SourceEffectChorusPreset.SetSpreadModulators
	void SetSpreadModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetSpreadModulator
	void SetSpread(float Spread); // Function Synthesis.SourceEffectChorusPreset.SetSpread
	void SetSettings(struct FSourceEffectChorusBaseSettings& Settings); // Function Synthesis.SourceEffectChorusPreset.SetSettings
	void SetModulationSettings(struct FSourceEffectChorusSettings& ModulationSettings); // Function Synthesis.SourceEffectChorusPreset.SetModulationSettings
	void SetFrequencyModulators(struct TSet<struct USoundModulatorBase*>& Modulators); // Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulators
	void SetFrequencyModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulator
	void SetFrequency(float Frequency); // Function Synthesis.SourceEffectChorusPreset.SetFrequency
	void SetFeedbackModulators(struct TSet<struct USoundModulatorBase*>& Modulators); // Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulators
	void SetFeedbackModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulator
	void SetFeedback(float Feedback); // Function Synthesis.SourceEffectChorusPreset.SetFeedback
	void SetDryModulators(struct TSet<struct USoundModulatorBase*>& Modulators); // Function Synthesis.SourceEffectChorusPreset.SetDryModulators
	void SetDryModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetDryModulator
	void SetDry(float DryAmount); // Function Synthesis.SourceEffectChorusPreset.SetDry
	void SetDepthModulators(struct TSet<struct USoundModulatorBase*>& Modulators); // Function Synthesis.SourceEffectChorusPreset.SetDepthModulators
	void SetDepthModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetDepthModulator
	void SetDepth(float Depth); // Function Synthesis.SourceEffectChorusPreset.SetDepth
}; 
 
 


// Class Synthesis.SourceEffectFilterPreset
// Size: 0xD0(Inherited: 0x68)
struct USourceEffectFilterPreset : USoundEffectSourcePreset
{
	char pad_104[72];  // 0x68 (0x68)
	struct FSourceEffectFilterSettings Settings;  // 0xB0 (0xB0)


	void SetSettings(struct FSourceEffectFilterSettings& InSettings); // Function Synthesis.SourceEffectFilterPreset.SetSettings
}; 
 
 


// Class Synthesis.SourceEffectEQPreset
// Size: 0xB0(Inherited: 0x68)
struct USourceEffectEQPreset : USoundEffectSourcePreset
{
	char pad_104[56];  // 0x68 (0x68)
	struct FSourceEffectEQSettings Settings;  // 0xA0 (0xA0)


	void SetSettings(struct FSourceEffectEQSettings& InSettings); // Function Synthesis.SourceEffectEQPreset.SetSettings
}; 
 
 


// Class Synthesis.ModularSynthLibrary
// Size: 0x28(Inherited: 0x28)
struct UModularSynthLibrary : UBlueprintFunctionLibrary
{


	void AddModularSynthPresetToBankAsset(struct UModularSynthPresetBank* InBank, struct FModularSynthPreset& Preset, struct FString PresetName); // Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset
}; 
 
 


// Class Synthesis.SourceEffectMidSideSpreaderPreset
// Size: 0xA0(Inherited: 0x68)
struct USourceEffectMidSideSpreaderPreset : USoundEffectSourcePreset
{
	char pad_104[48];  // 0x68 (0x68)
	struct FSourceEffectMidSideSpreaderSettings Settings;  // 0x98 (0x98)


	void SetSettings(struct FSourceEffectMidSideSpreaderSettings& InSettings); // Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings
}; 
 
 


// Class Synthesis.SourceEffectBitCrusherPreset
// Size: 0x230(Inherited: 0x68)
struct USourceEffectBitCrusherPreset : USoundEffectSourcePreset
{
	char pad_104[248];  // 0x68 (0x68)
	struct FSourceEffectBitCrusherSettings Settings;  // 0x160 (0x160)


	void SetSettings(struct FSourceEffectBitCrusherBaseSettings& Settings); // Function Synthesis.SourceEffectBitCrusherPreset.SetSettings
	void SetSampleRateModulators(struct TSet<struct USoundModulatorBase*>& InModulators); // Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulators
	void SetSampleRateModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator
	void SetSampleRate(float SampleRate); // Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRate
	void SetModulationSettings(struct FSourceEffectBitCrusherSettings& ModulationSettings); // Function Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings
	void SetBits(float Bits); // Function Synthesis.SourceEffectBitCrusherPreset.SetBits
	void SetBitModulators(struct TSet<struct USoundModulatorBase*>& InModulators); // Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulators
	void SetBitModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulator
}; 
 
 


// Class Synthesis.SubmixEffectDelayStatics
// Size: 0x28(Inherited: 0x28)
struct USubmixEffectDelayStatics : UBlueprintFunctionLibrary
{


	struct FSubmixEffectDelaySettings SetMaximumDelayLength(struct FSubmixEffectDelaySettings& DelaySettings, float MaximumDelayLength); // Function Synthesis.SubmixEffectDelayStatics.SetMaximumDelayLength
	struct FSubmixEffectDelaySettings SetInterpolationTime(struct FSubmixEffectDelaySettings& DelaySettings, float InterpolationTime); // Function Synthesis.SubmixEffectDelayStatics.SetInterpolationTime
	struct FSubmixEffectDelaySettings SetDelayLength(struct FSubmixEffectDelaySettings& DelaySettings, float DelayLength); // Function Synthesis.SubmixEffectDelayStatics.SetDelayLength
}; 
 
 


// Class Synthesis.SourceEffectEnvelopeFollowerPreset
// Size: 0xA8(Inherited: 0x68)
struct USourceEffectEnvelopeFollowerPreset : USoundEffectSourcePreset
{
	char pad_104[52];  // 0x68 (0x68)
	struct FSourceEffectEnvelopeFollowerSettings Settings;  // 0x9C (0x9C)


	void UnregisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
	void SetSettings(struct FSourceEffectEnvelopeFollowerSettings& InSettings); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
	void RegisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
}; 
 
 


// Class Synthesis.SourceEffectFoldbackDistortionPreset
// Size: 0xA8(Inherited: 0x68)
struct USourceEffectFoldbackDistortionPreset : USoundEffectSourcePreset
{
	char pad_104[52];  // 0x68 (0x68)
	struct FSourceEffectFoldbackDistortionSettings Settings;  // 0x9C (0x9C)


	void SetSettings(struct FSourceEffectFoldbackDistortionSettings& InSettings); // Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
}; 
 
 


// Class Synthesis.SynthComponentToneGenerator
// Size: 0x880(Inherited: 0x790)
struct USynthComponentToneGenerator : USynthComponent
{
	float Frequency;  // 0x790 (0x790)
	float Volume;  // 0x794 (0x794)
	struct FRuntimeFloatCurve DistanceAttenuationCurve;  // 0x798 (0x798)
	struct FVector2D DistanceRange;  // 0x820 (0x820)
	float AttenuationDbAtMaxRange;  // 0x830 (0x830)
	char pad_2100[76];  // 0x834 (0x834)


	void SetVolume(float InVolume); // Function Synthesis.SynthComponentToneGenerator.SetVolume
	void SetFrequency(float InFrequency); // Function Synthesis.SynthComponentToneGenerator.SetFrequency
}; 
 
 


// Class Synthesis.SourceEffectMotionFilterPreset
// Size: 0x180(Inherited: 0x68)
struct USourceEffectMotionFilterPreset : USoundEffectSourcePreset
{
	char pad_104[160];  // 0x68 (0x68)
	struct FSourceEffectMotionFilterSettings Settings;  // 0x108 (0x108)


	void SetSettings(struct FSourceEffectMotionFilterSettings& InSettings); // Function Synthesis.SourceEffectMotionFilterPreset.SetSettings
}; 
 
 


// Class Synthesis.SourceEffectPannerPreset
// Size: 0xA0(Inherited: 0x68)
struct USourceEffectPannerPreset : USoundEffectSourcePreset
{
	char pad_104[48];  // 0x68 (0x68)
	struct FSourceEffectPannerSettings Settings;  // 0x98 (0x98)


	void SetSettings(struct FSourceEffectPannerSettings& InSettings); // Function Synthesis.SourceEffectPannerPreset.SetSettings
}; 
 
 


// Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
// Size: 0x28(Inherited: 0x28)
struct USynthesisUtilitiesBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{


	float GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax); // Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency
	float GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax); // Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency
}; 
 
 


// Class Synthesis.SourceEffectPhaserPreset
// Size: 0xB0(Inherited: 0x68)
struct USourceEffectPhaserPreset : USoundEffectSourcePreset
{
	char pad_104[56];  // 0x68 (0x68)
	struct FSourceEffectPhaserSettings Settings;  // 0xA0 (0xA0)


	void SetSettings(struct FSourceEffectPhaserSettings& InSettings); // Function Synthesis.SourceEffectPhaserPreset.SetSettings
}; 
 
 


// Class Synthesis.GranularSynth
// Size: 0xB70(Inherited: 0x790)
struct UGranularSynth : USynthComponent
{
	struct USoundWave* GranulatedSoundWave;  // 0x790 (0x790)
	char pad_1944[984];  // 0x798 (0x798)


	void SetSustainGain(float SustainGain); // Function Synthesis.GranularSynth.SetSustainGain
	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.GranularSynth.SetSoundWave
	void SetScrubMode(bool bScrubMode); // Function Synthesis.GranularSynth.SetScrubMode
	void SetReleaseTimeMsec(float ReleaseTimeMsec); // Function Synthesis.GranularSynth.SetReleaseTimeMsec
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, uint8_t SeekType); // Function Synthesis.GranularSynth.SetPlayheadTime
	void SetPlaybackSpeed(float InPlayheadRate); // Function Synthesis.GranularSynth.SetPlaybackSpeed
	void SetGrainVolume(float BaseVolume, struct FVector2D VolumeRange); // Function Synthesis.GranularSynth.SetGrainVolume
	void SetGrainsPerSecond(float InGrainsPerSecond); // Function Synthesis.GranularSynth.SetGrainsPerSecond
	void SetGrainProbability(float InGrainProbability); // Function Synthesis.GranularSynth.SetGrainProbability
	void SetGrainPitch(float BasePitch, struct FVector2D PitchRange); // Function Synthesis.GranularSynth.SetGrainPitch
	void SetGrainPan(float BasePan, struct FVector2D PanRange); // Function Synthesis.GranularSynth.SetGrainPan
	void SetGrainEnvelopeType(uint8_t EnvelopeType); // Function Synthesis.GranularSynth.SetGrainEnvelopeType
	void SetGrainDuration(float BaseDurationMsec, struct FVector2D DurationRange); // Function Synthesis.GranularSynth.SetGrainDuration
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.GranularSynth.SetDecayTime
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.GranularSynth.SetAttackTime
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.GranularSynth.NoteOn
	void NoteOff(float Note, bool bKill); // Function Synthesis.GranularSynth.NoteOff
	bool IsLoaded(); // Function Synthesis.GranularSynth.IsLoaded
	float GetSampleDuration(); // Function Synthesis.GranularSynth.GetSampleDuration
	float GetCurrentPlayheadTime(); // Function Synthesis.GranularSynth.GetCurrentPlayheadTime
}; 
 
 


// Class Synthesis.SourceEffectRingModulationPreset
// Size: 0xD0(Inherited: 0x68)
struct USourceEffectRingModulationPreset : USoundEffectSourcePreset
{
	char pad_104[72];  // 0x68 (0x68)
	struct FSourceEffectRingModulationSettings Settings;  // 0xB0 (0xB0)


	void SetSettings(struct FSourceEffectRingModulationSettings& InSettings); // Function Synthesis.SourceEffectRingModulationPreset.SetSettings
}; 
 
 


// Class Synthesis.MonoWaveTableSynthPreset
// Size: 0x170(Inherited: 0x28)
struct UMonoWaveTableSynthPreset : UObject
{
	struct FString PresetName;  // 0x28 (0x28)
	char bLockKeyframesToGridBool : 1;  // 0x38 (0x38)
	char pad_56_1 : 7;  // 0x38 (0x38)
	char pad_57[4];  // 0x39 (0x39)
	int32_t LockKeyframesToGrid;  // 0x3C (0x3C)
	int32_t WaveTableResolution;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)
	struct TArray<struct FRuntimeFloatCurve> WaveTable;  // 0x48 (0x48)
	char bNormalizeWaveTables : 1;  // 0x58 (0x58)
	char pad_88_1 : 7;  // 0x58 (0x58)
	char pad_89[280];  // 0x59 (0x59)


}; 
 
 


// Class Synthesis.SourceEffectSimpleDelayPreset
// Size: 0xC0(Inherited: 0x68)
struct USourceEffectSimpleDelayPreset : USoundEffectSourcePreset
{
	char pad_104[64];  // 0x68 (0x68)
	struct FSourceEffectSimpleDelaySettings Settings;  // 0xA8 (0xA8)


	void SetSettings(struct FSourceEffectSimpleDelaySettings& InSettings); // Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings
}; 
 
 


// Class Synthesis.SourceEffectStereoDelayPreset
// Size: 0xD8(Inherited: 0x68)
struct USourceEffectStereoDelayPreset : USoundEffectSourcePreset
{
	char pad_104[76];  // 0x68 (0x68)
	struct FSourceEffectStereoDelaySettings Settings;  // 0xB4 (0xB4)


	void SetSettings(struct FSourceEffectStereoDelaySettings& InSettings); // Function Synthesis.SourceEffectStereoDelayPreset.SetSettings
}; 
 
 


// Class Synthesis.SourceEffectWaveShaperPreset
// Size: 0xA0(Inherited: 0x68)
struct USourceEffectWaveShaperPreset : USoundEffectSourcePreset
{
	char pad_104[48];  // 0x68 (0x68)
	struct FSourceEffectWaveShaperSettings Settings;  // 0x98 (0x98)


	void SetSettings(struct FSourceEffectWaveShaperSettings& InSettings); // Function Synthesis.SourceEffectWaveShaperPreset.SetSettings
}; 
 
 


// Class Synthesis.SubmixEffectDelayPreset
// Size: 0xB8(Inherited: 0x68)
struct USubmixEffectDelayPreset : USoundEffectSubmixPreset
{
	char pad_104[52];  // 0x68 (0x68)
	struct FSubmixEffectDelaySettings Settings;  // 0x9C (0x9C)
	struct FSubmixEffectDelaySettings DynamicSettings;  // 0xA8 (0xA8)
	char pad_180[4];  // 0xB4 (0xB4)


	void SetSettings(struct FSubmixEffectDelaySettings& InSettings); // Function Synthesis.SubmixEffectDelayPreset.SetSettings
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
	void SetDelay(float Length); // Function Synthesis.SubmixEffectDelayPreset.SetDelay
	void SetDefaultSettings(struct FSubmixEffectDelaySettings& InSettings); // Function Synthesis.SubmixEffectDelayPreset.SetDefaultSettings
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
}; 
 
 


// Class Synthesis.SubmixEffectFilterPreset
// Size: 0xA8(Inherited: 0x68)
struct USubmixEffectFilterPreset : USoundEffectSubmixPreset
{
	char pad_104[52];  // 0x68 (0x68)
	struct FSubmixEffectFilterSettings Settings;  // 0x9C (0x9C)


	void SetSettings(struct FSubmixEffectFilterSettings& InSettings); // Function Synthesis.SubmixEffectFilterPreset.SetSettings
	void SetFilterType(uint8_t InType); // Function Synthesis.SubmixEffectFilterPreset.SetFilterType
	void SetFilterQMod(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod
	void SetFilterQ(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQ
	void SetFilterCutoffFrequencyMod(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
	void SetFilterCutoffFrequency(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
	void SetFilterAlgorithm(uint8_t InAlgorithm); // Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
}; 
 
 


// Class Synthesis.SubmixEffectFlexiverbPreset
// Size: 0xB0(Inherited: 0x68)
struct USubmixEffectFlexiverbPreset : USoundEffectSubmixPreset
{
	char pad_104[56];  // 0x68 (0x68)
	struct FSubmixEffectFlexiverbSettings Settings;  // 0xA0 (0xA0)


	void SetSettings(struct FSubmixEffectFlexiverbSettings& InSettings); // Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings
}; 
 
 


// Class Synthesis.SubmixEffectMultibandCompressorPreset
// Size: 0x100(Inherited: 0x68)
struct USubmixEffectMultibandCompressorPreset : USoundEffectSubmixPreset
{
	char pad_104[96];  // 0x68 (0x68)
	struct FSubmixEffectMultibandCompressorSettings Settings;  // 0xC8 (0xC8)


	void SetSettings(struct FSubmixEffectMultibandCompressorSettings& InSettings); // Function Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings
	void SetExternalSubmix(struct USoundSubmix* Submix); // Function Synthesis.SubmixEffectMultibandCompressorPreset.SetExternalSubmix
	void SetAudioBus(struct UAudioBus* AudioBus); // Function Synthesis.SubmixEffectMultibandCompressorPreset.SetAudioBus
	void ResetKey(); // Function Synthesis.SubmixEffectMultibandCompressorPreset.ResetKey
}; 
 
 


// Class Synthesis.SubmixEffectStereoDelayPreset
// Size: 0xD8(Inherited: 0x68)
struct USubmixEffectStereoDelayPreset : USoundEffectSubmixPreset
{
	char pad_104[76];  // 0x68 (0x68)
	struct FSubmixEffectStereoDelaySettings Settings;  // 0xB4 (0xB4)


	void SetSettings(struct FSubmixEffectStereoDelaySettings& InSettings); // Function Synthesis.SubmixEffectStereoDelayPreset.SetSettings
}; 
 
 


// Class Synthesis.SynthComponentMonoWaveTable
// Size: 0xEE0(Inherited: 0x790)
struct USynthComponentMonoWaveTable : USynthComponent
{
	struct FMulticastInlineDelegate OnTableAltered;  // 0x790 (0x790)
	struct FMulticastInlineDelegate OnNumTablesChanged;  // 0x7A0 (0x7A0)
	struct UMonoWaveTableSynthPreset* CurrentPreset;  // 0x7B0 (0x7B0)
	char pad_1976[1832];  // 0x7B8 (0x7B8)


	void SetWaveTablePosition(float InPosition); // Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
	void SetSustainPedalState(bool InSustainPedalState); // Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
	void SetPosLfoType(uint8_t InLfoType); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
	void SetPosLfoFrequency(float InLfoFrequency); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
	void SetPosLfoDepth(float InLfoDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
	void SetPositionEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
	void SetPositionEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
	void SetPositionEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
	void SetPositionEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
	void SetLowPassFilterResonance(float InNewQ); // Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
	void SetFrequencyWithMidiNote(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
	void SetFrequencyPitchBend(float FrequencyOffsetCents); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
	void SetFrequency(float FrequencyHz); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequency
	void SetFilterEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
	void SetFilterEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
	void SetFilterEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
	void SetFilterEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
	bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue
	bool SetCurveTangent(int32_t TableIndex, float InNewTangent); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
	bool SetCurveInterpolationType(uint8_t InterpolationType, int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
	void SetAmpEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
	void SetAmpEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
	void SetAmpEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
	void SetAmpEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
	void RefreshWaveTable(int32_t Index); // Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
	void RefreshAllWaveTables(); // Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables
	void NoteOn(float InMidiNote, float InVelocity); // Function Synthesis.SynthComponentMonoWaveTable.NoteOn
	void NoteOff(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.NoteOff
	int32_t GetNumTableEntries(); // Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
	int32_t GetMaxTableIndex(); // Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
	struct TArray<float> GetKeyFrameValuesForTable(float TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
	float GetCurveTangent(int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
}; 
 
 


// Class Synthesis.SynthSamplePlayer
// Size: 0x8C0(Inherited: 0x790)
struct USynthSamplePlayer : USynthComponent
{
	struct USoundWave* SoundWave;  // 0x790 (0x790)
	struct FMulticastInlineDelegate OnSampleLoaded;  // 0x798 (0x798)
	struct FMulticastInlineDelegate OnSamplePlaybackProgress;  // 0x7A8 (0x7A8)
	char pad_1976[264];  // 0x7B8 (0x7B8)


	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.SynthSamplePlayer.SetSoundWave
	void SetScrubTimeWidth(float InScrubTimeWidthSec); // Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth
	void SetScrubMode(bool bScrubMode); // Function Synthesis.SynthSamplePlayer.SetScrubMode
	void SetPitch(float InPitch, float TimeSec); // Function Synthesis.SynthSamplePlayer.SetPitch
	void SeekToTime(float TimeSec, uint8_t SeekType, bool bWrap); // Function Synthesis.SynthSamplePlayer.SeekToTime
	bool IsLoaded(); // Function Synthesis.SynthSamplePlayer.IsLoaded
	float GetSampleDuration(); // Function Synthesis.SynthSamplePlayer.GetSampleDuration
	float GetCurrentPlaybackProgressTime(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
	float GetCurrentPlaybackProgressPercent(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
}; 
 
 


// Class Synthesis.Synth2DSlider
// Size: 0x640(Inherited: 0x150)
struct USynth2DSlider : UWidget
{
	float ValueX;  // 0x150 (0x150)
	float ValueY;  // 0x154 (0x154)
	struct FDelegate ValueXDelegate;  // 0x158 (0x158)
	struct FDelegate ValueYDelegate;  // 0x168 (0x168)
	char pad_376[8];  // 0x178 (0x178)
	struct FSynth2DSliderStyle WidgetStyle;  // 0x180 (0x180)
	struct FLinearColor SliderHandleColor;  // 0x5B0 (0x5B0)
	char pad_1472_1 : 7;  // 0x5C0 (0x5C0)
	bool IndentHandle : 1;  // 0x5C0 (0x5C0)
	char pad_1473_1 : 7;  // 0x5C1 (0x5C1)
	bool Locked : 1;  // 0x5C1 (0x5C1)
	char pad_1474[2];  // 0x5C2 (0x5C2)
	float StepSize;  // 0x5C4 (0x5C4)
	char pad_1480_1 : 7;  // 0x5C8 (0x5C8)
	bool IsFocusable : 1;  // 0x5C8 (0x5C8)
	char pad_1481[7];  // 0x5C9 (0x5C9)
	struct FMulticastInlineDelegate OnMouseCaptureBegin;  // 0x5D0 (0x5D0)
	struct FMulticastInlineDelegate OnMouseCaptureEnd;  // 0x5E0 (0x5E0)
	struct FMulticastInlineDelegate OnControllerCaptureBegin;  // 0x5F0 (0x5F0)
	struct FMulticastInlineDelegate OnControllerCaptureEnd;  // 0x600 (0x600)
	struct FMulticastInlineDelegate OnValueChangedX;  // 0x610 (0x610)
	struct FMulticastInlineDelegate OnValueChangedY;  // 0x620 (0x620)
	char pad_1584[16];  // 0x630 (0x630)


	void SetValue(struct FVector2D InValue); // Function Synthesis.Synth2DSlider.SetValue
	void SetStepSize(float InValue); // Function Synthesis.Synth2DSlider.SetStepSize
	void SetSliderHandleColor(struct FLinearColor InValue); // Function Synthesis.Synth2DSlider.SetSliderHandleColor
	void SetLocked(bool InValue); // Function Synthesis.Synth2DSlider.SetLocked
	void SetIndentHandle(bool InValue); // Function Synthesis.Synth2DSlider.SetIndentHandle
	struct FVector2D GetValue(); // Function Synthesis.Synth2DSlider.GetValue
}; 
 
 


