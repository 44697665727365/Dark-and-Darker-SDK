#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function Synthesis.SourceEffectChorusPreset.SetDepth
struct FSetDepth
{
	float Depth;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset
struct FAddModularSynthPresetToBankAsset
{
	struct UModularSynthPresetBank* InBank;  // 0x0 (0x0)
	struct FModularSynthPreset Preset;  // 0x8 (0x8)
	struct FString PresetName;  // 0xE8 (0xE8)


}; 
 
 // ScriptStruct Synthesis.PatchId
struct FPatchId
{
	int32_t ID;  // 0x0 (0x0)


}; 
 
 // DelegateFunction Synthesis.OnFloatValueChangedEvent__DelegateSignature
struct FOnFloatValueChangedEvent__DelegateSignature
{
	float Value;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Synthesis.SourceEffectFilterAudioBusModulationSettings
struct FSourceEffectFilterAudioBusModulationSettings
{
	struct UAudioBus* AudioBus;  // 0x0 (0x0)
	int32_t EnvelopeFollowerAttackTimeMsec;  // 0x8 (0x8)
	int32_t EnvelopeFollowerReleaseTimeMsec;  // 0xC (0xC)
	float EnvelopeGainMultiplier;  // 0x10 (0x10)
	uint8_t FilterParam;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	float MinFrequencyModulation;  // 0x18 (0x18)
	float MaxFrequencyModulation;  // 0x1C (0x1C)
	float MinResonanceModulation;  // 0x20 (0x20)
	float MaxResonanceModulation;  // 0x24 (0x24)


}; 
 
 // DelegateFunction Synthesis.OnEnvelopeFollowerUpdate__DelegateSignature
struct FOnEnvelopeFollowerUpdate__DelegateSignature
{
	float EnvelopeValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction Synthesis.OnTableAltered__DelegateSignature
struct FOnTableAltered__DelegateSignature
{
	int32_t TableIndex;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetEnablePolyphony
struct FSetEnablePolyphony
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnablePolyphony : 1;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetEnableLegato
struct FSetEnableLegato
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool LegatoEnabled : 1;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.GranularSynth.SetGrainsPerSecond
struct FSetGrainsPerSecond
{
	float InGrainsPerSecond;  // 0x0 (0x0)


}; 
 
 // DelegateFunction Synthesis.OnFloatValueChangedEventSynth2D__DelegateSignature
struct FOnFloatValueChangedEventSynth2D__DelegateSignature
{
	float Value;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SourceEffectChorusPreset.SetSpreadModulator
struct FSetSpreadModulator
{
	struct USoundModulatorBase* Modulator;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Synthesis.EpicSynth1Patch
struct FEpicSynth1Patch
{
	uint8_t PatchSource;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct TArray<struct FSynth1PatchCable> PatchCables;  // 0x8 (0x8)


}; 
 
 // DelegateFunction Synthesis.OnSamplePlaybackProgress__DelegateSignature
struct FOnSamplePlaybackProgress__DelegateSignature
{
	float ProgressPercent;  // 0x0 (0x0)
	float ProgressTimeSeconds;  // 0x4 (0x4)


}; 
 
 // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
struct FGetCurrentPlaybackProgressPercent
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Synthesis.Synth1PatchCable
struct FSynth1PatchCable
{
	float Depth;  // 0x0 (0x0)
	uint8_t Destination;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // ScriptStruct Synthesis.SourceEffectChorusBaseSettings
struct FSourceEffectChorusBaseSettings
{
	float Depth;  // 0x0 (0x0)
	float Frequency;  // 0x4 (0x4)
	float Feedback;  // 0x8 (0x8)
	float WetLevel;  // 0xC (0xC)
	float DryLevel;  // 0x10 (0x10)
	float Spread;  // 0x14 (0x14)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
struct FSetAmpEnvelopeInvert
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInInvert : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Synthesis.ModularSynthPreset
// Size: 0xE0(Inherited: 0x8)
struct FModularSynthPreset : FTableRowBase
{
	char bEnablePolyphony : 1;  // 0x8 (0x8)
	char pad_8_1 : 7;  // 0x8 (0x8)
	char pad_9[4];  // 0x9 (0x9)
	uint8_t Osc1Type;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	float Osc1Gain;  // 0x10 (0x10)
	float Osc1Octave;  // 0x14 (0x14)
	float Osc1Semitones;  // 0x18 (0x18)
	float Osc1Cents;  // 0x1C (0x1C)
	float Osc1PulseWidth;  // 0x20 (0x20)
	uint8_t Osc2Type;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	float Osc2Gain;  // 0x28 (0x28)
	float Osc2Octave;  // 0x2C (0x2C)
	float Osc2Semitones;  // 0x30 (0x30)
	float Osc2Cents;  // 0x34 (0x34)
	float Osc2PulseWidth;  // 0x38 (0x38)
	float Portamento;  // 0x3C (0x3C)
	char bEnableUnison : 1;  // 0x40 (0x40)
	char bEnableOscillatorSync : 1;  // 0x40 (0x40)
	char pad_64_1 : 6;  // 0x40 (0x40)
	char pad_65[4];  // 0x41 (0x41)
	float Spread;  // 0x44 (0x44)
	float Pan;  // 0x48 (0x48)
	float LFO1Frequency;  // 0x4C (0x4C)
	float LFO1Gain;  // 0x50 (0x50)
	uint8_t LFO1Type;  // 0x54 (0x54)
	uint8_t LFO1Mode;  // 0x55 (0x55)
	uint8_t LFO1PatchType;  // 0x56 (0x56)
	char pad_87[1];  // 0x57 (0x57)
	float LFO2Frequency;  // 0x58 (0x58)
	float LFO2Gain;  // 0x5C (0x5C)
	uint8_t LFO2Type;  // 0x60 (0x60)
	uint8_t LFO2Mode;  // 0x61 (0x61)
	uint8_t LFO2PatchType;  // 0x62 (0x62)
	char pad_99[1];  // 0x63 (0x63)
	float GainDb;  // 0x64 (0x64)
	float AttackTime;  // 0x68 (0x68)
	float DecayTime;  // 0x6C (0x6C)
	float SustainGain;  // 0x70 (0x70)
	float ReleaseTime;  // 0x74 (0x74)
	uint8_t ModEnvPatchType;  // 0x78 (0x78)
	uint8_t ModEnvBiasPatchType;  // 0x79 (0x79)
	char pad_122[2];  // 0x7A (0x7A)
	char bInvertModulationEnvelope : 1;  // 0x7C (0x7C)
	char bInvertModulationEnvelopeBias : 1;  // 0x7C (0x7C)
	char pad_124_1 : 6;  // 0x7C (0x7C)
	char pad_125[4];  // 0x7D (0x7D)
	float ModulationEnvelopeDepth;  // 0x80 (0x80)
	float ModulationEnvelopeAttackTime;  // 0x84 (0x84)
	float ModulationEnvelopeDecayTime;  // 0x88 (0x88)
	float ModulationEnvelopeSustainGain;  // 0x8C (0x8C)
	float ModulationEnvelopeReleaseTime;  // 0x90 (0x90)
	char bLegato : 1;  // 0x94 (0x94)
	char bRetrigger : 1;  // 0x94 (0x94)
	char pad_148_1 : 6;  // 0x94 (0x94)
	char pad_149[4];  // 0x95 (0x95)
	float FilterFrequency;  // 0x98 (0x98)
	float FilterQ;  // 0x9C (0x9C)
	uint8_t FilterType;  // 0xA0 (0xA0)
	uint8_t FilterAlgorithm;  // 0xA1 (0xA1)
	char pad_162[2];  // 0xA2 (0xA2)
	char bStereoDelayEnabled : 1;  // 0xA4 (0xA4)
	char pad_164_1 : 7;  // 0xA4 (0xA4)
	char pad_165[4];  // 0xA5 (0xA5)
	uint8_t StereoDelayMode;  // 0xA8 (0xA8)
	char pad_169[3];  // 0xA9 (0xA9)
	float StereoDelayTime;  // 0xAC (0xAC)
	float StereoDelayFeedback;  // 0xB0 (0xB0)
	float StereoDelayWetlevel;  // 0xB4 (0xB4)
	float StereoDelayRatio;  // 0xB8 (0xB8)
	char bChorusEnabled : 1;  // 0xBC (0xBC)
	char pad_188_1 : 7;  // 0xBC (0xBC)
	char pad_189[4];  // 0xBD (0xBD)
	float ChorusDepth;  // 0xC0 (0xC0)
	float ChorusFeedback;  // 0xC4 (0xC4)
	float ChorusFrequency;  // 0xC8 (0xC8)
	char pad_204[4];  // 0xCC (0xCC)
	struct TArray<struct FEpicSynth1Patch> Patches;  // 0xD0 (0xD0)


}; 
 
 // Function Synthesis.SubmixEffectFilterPreset.SetFilterQ
struct FSetFilterQ
{
	float InQ;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Synthesis.ModularSynthPresetBankEntry
struct FModularSynthPresetBankEntry
{
	struct FString PresetName;  // 0x0 (0x0)
	struct FModularSynthPreset Preset;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Synthesis.SourceEffectBitCrusherBaseSettings
struct FSourceEffectBitCrusherBaseSettings
{
	float SampleRate;  // 0x0 (0x0)
	float BitDepth;  // 0x4 (0x4)


}; 
 
 // ScriptStruct Synthesis.SourceEffectMotionFilterSettings
struct FSourceEffectMotionFilterSettings
{
	uint8_t MotionFilterTopology;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float MotionFilterMix;  // 0x4 (0x4)
	struct FSourceEffectIndividualFilterSettings FilterASettings;  // 0x8 (0x8)
	struct FSourceEffectIndividualFilterSettings FilterBSettings;  // 0x14 (0x14)
	struct TMap<uint8_t, struct FSourceEffectMotionFilterModulationSettings> ModulationMappings;  // 0x20 (0x20)
	float DryVolumeDb;  // 0x70 (0x70)
	char pad_116[4];  // 0x74 (0x74)


}; 
 
 // ScriptStruct Synthesis.SourceEffectBitCrusherSettings
struct FSourceEffectBitCrusherSettings
{
	float CrushedSampleRate;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FSoundModulationDestinationSettings SampleRateModulation;  // 0x8 (0x8)
	float CrushedBits;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)
	struct FSoundModulationDestinationSettings BitModulation;  // 0x70 (0x70)


}; 
 
 // ScriptStruct Synthesis.SourceEffectChorusSettings
struct FSourceEffectChorusSettings
{
	float Depth;  // 0x0 (0x0)
	float Frequency;  // 0x4 (0x4)
	float Feedback;  // 0x8 (0x8)
	float WetLevel;  // 0xC (0xC)
	float DryLevel;  // 0x10 (0x10)
	float Spread;  // 0x14 (0x14)
	struct FSoundModulationDestinationSettings DepthModulation;  // 0x18 (0x18)
	struct FSoundModulationDestinationSettings FrequencyModulation;  // 0x78 (0x78)
	struct FSoundModulationDestinationSettings FeedbackModulation;  // 0xD8 (0xD8)
	struct FSoundModulationDestinationSettings WetModulation;  // 0x138 (0x138)
	struct FSoundModulationDestinationSettings DryModulation;  // 0x198 (0x198)
	struct FSoundModulationDestinationSettings SpreadModulation;  // 0x1F8 (0x1F8)


}; 
 
 // ScriptStruct Synthesis.SourceEffectConvolutionReverbSettings
struct FSourceEffectConvolutionReverbSettings
{
	float NormalizationVolumeDb;  // 0x0 (0x0)
	float WetVolumeDb;  // 0x4 (0x4)
	float DryVolumeDb;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bBypass : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
struct FSetPositionEnvelopeReleaseTime
{
	float InReleaseTimeMsec;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Synthesis.SourceEffectDynamicsProcessorSettings
struct FSourceEffectDynamicsProcessorSettings
{
	uint8_t DynamicsProcessorType;  // 0x0 (0x0)
	uint8_t PeakMode;  // 0x1 (0x1)
	char pad_2[2];  // 0x2 (0x2)
	float LookAheadMsec;  // 0x4 (0x4)
	float AttackTimeMsec;  // 0x8 (0x8)
	float ReleaseTimeMsec;  // 0xC (0xC)
	float ThresholdDb;  // 0x10 (0x10)
	float Ratio;  // 0x14 (0x14)
	float KneeBandwidthDb;  // 0x18 (0x18)
	float InputGainDb;  // 0x1C (0x1C)
	float OutputGainDb;  // 0x20 (0x20)
	char bStereoLinked : 1;  // 0x24 (0x24)
	char bAnalogMode : 1;  // 0x24 (0x24)
	char pad_36_1 : 6;  // 0x24 (0x24)
	char pad_37[4];  // 0x25 (0x25)


}; 
 
 // Function Synthesis.SubmixEffectTapDelayPreset.SetSettings
struct FSetSettings
{
	struct FSubmixEffectTapDelaySettings InSettings;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Synthesis.SourceEffectMotionFilterModulationSettings
struct FSourceEffectMotionFilterModulationSettings
{
	uint8_t ModulationSource;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FVector2D ModulationInputRange;  // 0x8 (0x8)
	struct FVector2D ModulationOutputMinimumRange;  // 0x18 (0x18)
	struct FVector2D ModulationOutputMaximumRange;  // 0x28 (0x28)
	float UpdateEaseMS;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 // ScriptStruct Synthesis.SourceEffectEnvelopeFollowerSettings
struct FSourceEffectEnvelopeFollowerSettings
{
	float AttackTime;  // 0x0 (0x0)
	float ReleaseTime;  // 0x4 (0x4)
	uint8_t PeakMode;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool bIsAnalogMode : 1;  // 0x9 (0x9)
	char pad_10[2];  // 0xA (0xA)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
struct FSetAmpEnvelopeDepth
{
	float InDepth;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Synthesis.SourceEffectEQBand
struct FSourceEffectEQBand
{
	float Frequency;  // 0x0 (0x0)
	float Bandwidth;  // 0x4 (0x4)
	float GainDb;  // 0x8 (0x8)
	char bEnabled : 1;  // 0xC (0xC)
	char pad_12_1 : 7;  // 0xC (0xC)
	char pad_13[4];  // 0xD (0xD)


}; 
 
 // Function Synthesis.GranularSynth.SetDecayTime
struct FSetDecayTime
{
	float DecayTimeMsec;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetEnablePatch
struct FSetEnablePatch
{
	struct FPatchId PatchId;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bIsEnabled : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool ReturnValue : 1;  // 0x5 (0x5)
	char pad_6[2];  // 0x6 (0x6)


}; 
 
 // Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds
struct FGetTapIds
{
	struct TArray<int32_t> TapIds;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Synthesis.SourceEffectEQSettings
struct FSourceEffectEQSettings
{
	struct TArray<struct FSourceEffectEQBand> EQBands;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Synthesis.SubmixEffectFlexiverbSettings
struct FSubmixEffectFlexiverbSettings
{
	float PreDelay;  // 0x0 (0x0)
	float DecayTime;  // 0x4 (0x4)
	float RoomDampening;  // 0x8 (0x8)
	int32_t Complexity;  // 0xC (0xC)


}; 
 
 // ScriptStruct Synthesis.SubmixEffectStereoDelaySettings
struct FSubmixEffectStereoDelaySettings
{
	uint8_t DelayMode;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float DelayTimeMsec;  // 0x4 (0x4)
	float Feedback;  // 0x8 (0x8)
	float DelayRatio;  // 0xC (0xC)
	float WetLevel;  // 0x10 (0x10)
	float DryLevel;  // 0x14 (0x14)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bFilterEnabled : 1;  // 0x18 (0x18)
	uint8_t FilterType;  // 0x19 (0x19)
	char pad_26[2];  // 0x1A (0x1A)
	float FilterFrequency;  // 0x1C (0x1C)
	float FilterQ;  // 0x20 (0x20)


}; 
 
 // ScriptStruct Synthesis.SourceEffectFilterSettings
struct FSourceEffectFilterSettings
{
	uint8_t FilterCircuit;  // 0x0 (0x0)
	uint8_t FilterType;  // 0x1 (0x1)
	char pad_2[2];  // 0x2 (0x2)
	float CutoffFrequency;  // 0x4 (0x4)
	float FilterQ;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct TArray<struct FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation;  // 0x10 (0x10)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod
struct FSetFilterFrequencyMod
{
	float FilterFrequencyHz;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Synthesis.SourceEffectFoldbackDistortionSettings
struct FSourceEffectFoldbackDistortionSettings
{
	float InputGainDb;  // 0x0 (0x0)
	float ThresholdDb;  // 0x4 (0x4)
	float OutputGainDb;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Synthesis.SourceEffectMidSideSpreaderSettings
struct FSourceEffectMidSideSpreaderSettings
{
	float SpreadAmount;  // 0x0 (0x0)
	uint8_t InputMode;  // 0x4 (0x4)
	uint8_t OutputMode;  // 0x5 (0x5)
	char pad_6_1 : 7;  // 0x6 (0x6)
	bool bEqualPower : 1;  // 0x6 (0x6)
	char pad_7[1];  // 0x7 (0x7)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetFilterFrequency
struct FSetFilterFrequency
{
	float FilterFrequencyHz;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SubmixEffectDelayPreset.SetDefaultSettings
struct FSetDefaultSettings
{
	struct FSubmixEffectDelaySettings InSettings;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Synthesis.SourceEffectStereoDelaySettings
struct FSourceEffectStereoDelaySettings
{
	uint8_t DelayMode;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float DelayTimeMsec;  // 0x4 (0x4)
	float Feedback;  // 0x8 (0x8)
	float DelayRatio;  // 0xC (0xC)
	float WetLevel;  // 0x10 (0x10)
	float DryLevel;  // 0x14 (0x14)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bFilterEnabled : 1;  // 0x18 (0x18)
	uint8_t FilterType;  // 0x19 (0x19)
	char pad_26[2];  // 0x1A (0x1A)
	float FilterFrequency;  // 0x1C (0x1C)
	float FilterQ;  // 0x20 (0x20)


}; 
 
 // ScriptStruct Synthesis.SourceEffectIndividualFilterSettings
struct FSourceEffectIndividualFilterSettings
{
	uint8_t FilterCircuit;  // 0x0 (0x0)
	uint8_t FilterType;  // 0x1 (0x1)
	char pad_2[2];  // 0x2 (0x2)
	float CutoffFrequency;  // 0x4 (0x4)
	float FilterQ;  // 0x8 (0x8)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
struct FSetPositionEnvelopeInvert
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInInvert : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Synthesis.SourceEffectWaveShaperSettings
struct FSourceEffectWaveShaperSettings
{
	float Amount;  // 0x0 (0x0)
	float OutputGainDb;  // 0x4 (0x4)


}; 
 
 // ScriptStruct Synthesis.SourceEffectPannerSettings
struct FSourceEffectPannerSettings
{
	float Spread;  // 0x0 (0x0)
	float Pan;  // 0x4 (0x4)


}; 
 
 // ScriptStruct Synthesis.SubmixEffectFilterSettings
struct FSubmixEffectFilterSettings
{
	uint8_t FilterType;  // 0x0 (0x0)
	uint8_t FilterAlgorithm;  // 0x1 (0x1)
	char pad_2[2];  // 0x2 (0x2)
	float FilterFrequency;  // 0x4 (0x4)
	float FilterQ;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Synthesis.SourceEffectPhaserSettings
struct FSourceEffectPhaserSettings
{
	float WetLevel;  // 0x0 (0x0)
	float Frequency;  // 0x4 (0x4)
	float Feedback;  // 0x8 (0x8)
	uint8_t LFOType;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool UseQuadraturePhase : 1;  // 0xD (0xD)
	char pad_14[2];  // 0xE (0xE)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
struct FGetKeyFrameValuesForTable
{
	float TableIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<float> ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Synthesis.SourceEffectRingModulationSettings
struct FSourceEffectRingModulationSettings
{
	uint8_t ModulatorType;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float Frequency;  // 0x4 (0x4)
	float Depth;  // 0x8 (0x8)
	float DryLevel;  // 0xC (0xC)
	float WetLevel;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct UAudioBus* AudioBusModulator;  // 0x18 (0x18)


}; 
 
 // ScriptStruct Synthesis.SourceEffectSimpleDelaySettings
struct FSourceEffectSimpleDelaySettings
{
	float SpeedOfSound;  // 0x0 (0x0)
	float DelayAmount;  // 0x4 (0x4)
	float DryAmount;  // 0x8 (0x8)
	float WetAmount;  // 0xC (0xC)
	float Feedback;  // 0x10 (0x10)
	char bDelayBasedOnDistance : 1;  // 0x14 (0x14)
	char bUseDistanceOverride : 1;  // 0x14 (0x14)
	char pad_20_1 : 6;  // 0x14 (0x14)
	char pad_21[4];  // 0x15 (0x15)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetEnableRetrigger
struct FSetEnableRetrigger
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool RetriggerEnabled : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Synthesis.SubmixEffectConvolutionReverbSettings
struct FSubmixEffectConvolutionReverbSettings
{
	float NormalizationVolumeDb;  // 0x0 (0x0)
	float WetVolumeDb;  // 0x4 (0x4)
	float DryVolumeDb;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bBypass : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool bMixInputChannelFormatToImpulseResponseFormat : 1;  // 0xD (0xD)
	char pad_14_1 : 7;  // 0xE (0xE)
	bool bMixReverbOutputToOutputChannelFormat : 1;  // 0xE (0xE)
	char pad_15[1];  // 0xF (0xF)
	float SurroundRearChannelBleedDb;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bInvertRearChannelBleedPhase : 1;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool bSurroundRearChannelFlip : 1;  // 0x15 (0x15)
	char pad_22[2];  // 0x16 (0x16)
	float SurroundRearChannelBleedAmount;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct UAudioImpulseResponse* ImpulseResponse;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool AllowHardwareAcceleration : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetModEnvSustainGain
struct FSetModEnvSustainGain
{
	float SustainGain;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
struct FSetFilterAlgorithm
{
	uint8_t InAlgorithm;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Synthesis.SubmixEffectDelaySettings
struct FSubmixEffectDelaySettings
{
	float MaximumDelayLength;  // 0x0 (0x0)
	float InterpolationTime;  // 0x4 (0x4)
	float DelayLength;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Synthesis.DynamicsBandSettings
struct FDynamicsBandSettings
{
	float CrossoverTopFrequency;  // 0x0 (0x0)
	float AttackTimeMsec;  // 0x4 (0x4)
	float ReleaseTimeMsec;  // 0x8 (0x8)
	float ThresholdDb;  // 0xC (0xC)
	float Ratio;  // 0x10 (0x10)
	float KneeBandwidthDb;  // 0x14 (0x14)
	float InputGainDb;  // 0x18 (0x18)
	float OutputGainDb;  // 0x1C (0x1C)


}; 
 
 // Function Synthesis.SourceEffectChorusPreset.SetDepthModulators
struct FSetDepthModulators
{
	struct TSet<struct USoundModulatorBase*> Modulators;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetChorusFeedback
struct FSetChorusFeedback
{
	float Feedback;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Synthesis.SubmixEffectMultibandCompressorSettings
struct FSubmixEffectMultibandCompressorSettings
{
	uint8_t DynamicsProcessorType;  // 0x0 (0x0)
	uint8_t PeakMode;  // 0x1 (0x1)
	uint8_t LinkMode;  // 0x2 (0x2)
	char pad_3[1];  // 0x3 (0x3)
	float LookAheadMsec;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bAnalogMode : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool bFourPole : 1;  // 0x9 (0x9)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool bBypass : 1;  // 0xA (0xA)
	uint8_t KeySource;  // 0xB (0xB)
	char pad_12[4];  // 0xC (0xC)
	struct UAudioBus* ExternalAudioBus;  // 0x10 (0x10)
	struct USoundSubmix* ExternalSubmix;  // 0x18 (0x18)
	float KeyGainDb;  // 0x20 (0x20)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool bKeyAudition : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	struct TArray<struct FDynamicsBandSettings> Bands;  // 0x28 (0x28)


}; 
 
 // ScriptStruct Synthesis.TapDelayInfo
struct FTapDelayInfo
{
	uint8_t TapLineMode;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float DelayLength;  // 0x4 (0x4)
	float Gain;  // 0x8 (0x8)
	int32_t OutputChannel;  // 0xC (0xC)
	float PanInDegrees;  // 0x10 (0x10)
	int32_t TapId;  // 0x14 (0x14)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
struct FGetNumTableEntries
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetModEnvDepth
struct FSetModEnvDepth
{
	float Depth;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Synthesis.SynthSlateStyle
// Size: 0x10(Inherited: 0x8)
struct FSynthSlateStyle : FSlateWidgetStyle
{
	uint8_t SizeType;  // 0x8 (0x8)
	uint8_t ColorStyle;  // 0x9 (0x9)
	char pad_10[6];  // 0xA (0xA)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetModEnvAttackTime
struct FSetModEnvAttackTime
{
	float AttackTimeMsec;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Synthesis.SubmixEffectTapDelaySettings
struct FSubmixEffectTapDelaySettings
{
	float MaximumDelayLength;  // 0x0 (0x0)
	float InterpolationTime;  // 0x4 (0x4)
	struct TArray<struct FTapDelayInfo> Taps;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Synthesis.Synth2DSliderStyle
// Size: 0x430(Inherited: 0x8)
struct FSynth2DSliderStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FSlateBrush NormalThumbImage;  // 0x10 (0x10)
	struct FSlateBrush DisabledThumbImage;  // 0xE0 (0xE0)
	struct FSlateBrush NormalBarImage;  // 0x1B0 (0x1B0)
	struct FSlateBrush DisabledBarImage;  // 0x280 (0x280)
	struct FSlateBrush BackgroundImage;  // 0x350 (0x350)
	float BarThickness;  // 0x420 (0x420)
	char pad_1060[12];  // 0x424 (0x424)


}; 
 
 // ScriptStruct Synthesis.SynthKnobStyle
// Size: 0x360(Inherited: 0x8)
struct FSynthKnobStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FSlateBrush LargeKnob;  // 0x10 (0x10)
	struct FSlateBrush LargeKnobOverlay;  // 0xE0 (0xE0)
	struct FSlateBrush MediumKnob;  // 0x1B0 (0x1B0)
	struct FSlateBrush MediumKnobOverlay;  // 0x280 (0x280)
	float MinValueAngle;  // 0x350 (0x350)
	float MaxValueAngle;  // 0x354 (0x354)
	uint8_t KnobSize;  // 0x358 (0x358)
	char pad_857[7];  // 0x359 (0x359)


}; 
 
 // Function Synthesis.ModularSynthComponent.CreatePatch
struct FCreatePatch
{
	uint8_t PatchSource;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct TArray<struct FSynth1PatchCable> PatchCables;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bEnableByDefault : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	struct FPatchId ReturnValue;  // 0x1C (0x1C)


}; 
 
 // Function Synthesis.GranularSynth.SetAttackTime
struct FSetAttackTime
{
	float AttackTimeMsec;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.NoteOff
struct FNoteOff
{
	float InMidiNote;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod
struct FSetFilterQMod
{
	float InQ;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.NoteOn
struct FNoteOn
{
	float InMidiNote;  // 0x0 (0x0)
	float InVelocity;  // 0x4 (0x4)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetEnableUnison
struct FSetEnableUnison
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool EnableUnison : 1;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetChorusDepth
struct FSetChorusDepth
{
	float Depth;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetChorusEnabled
struct FSetChorusEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool EnableChorus : 1;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetChorusFrequency
struct FSetChorusFrequency
{
	float Frequency;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SubmixEffectFilterPreset.SetFilterType
struct FSetFilterType
{
	uint8_t InType;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetGainDb
struct FSetGainDb
{
	float GainDb;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetLFOFrequency
struct FSetLFOFrequency
{
	int32_t LFOIndex;  // 0x0 (0x0)
	float FrequencyHz;  // 0x4 (0x4)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod
struct FSetLFOFrequencyMod
{
	int32_t LFOIndex;  // 0x0 (0x0)
	float FrequencyModHz;  // 0x4 (0x4)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetLFOGain
struct FSetLFOGain
{
	int32_t LFOIndex;  // 0x0 (0x0)
	float Gain;  // 0x4 (0x4)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetLFOGainMod
struct FSetLFOGainMod
{
	int32_t LFOIndex;  // 0x0 (0x0)
	float GainMod;  // 0x4 (0x4)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetLFOMode
struct FSetLFOMode
{
	int32_t LFOIndex;  // 0x0 (0x0)
	uint8_t LFOMode;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetLFOPatch
struct FSetLFOPatch
{
	int32_t LFOIndex;  // 0x0 (0x0)
	uint8_t LFOPatchType;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetLFOType
struct FSetLFOType
{
	int32_t LFOIndex;  // 0x0 (0x0)
	uint8_t LFOType;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert
struct FSetModEnvBiasInvert
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInvert : 1;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch
struct FSetModEnvBiasPatch
{
	uint8_t InPatchType;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetModEnvDecayTime
struct FSetModEnvDecayTime
{
	float DecayTimeMsec;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetModEnvInvert
struct FSetModEnvInvert
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInvert : 1;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetModEnvPatch
struct FSetModEnvPatch
{
	uint8_t InPatchType;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime
struct FSetModEnvReleaseTime
{
	float Release;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SourceEffectChorusPreset.SetDepthModulator
struct FSetDepthModulator
{
	struct USoundModulatorBase* Modulator;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetOscCents
struct FSetOscCents
{
	int32_t OscIndex;  // 0x0 (0x0)
	float Cents;  // 004 (004)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
struct FSetStereoDelayWetlevel
{
	float DelayWetlevel;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetOscFrequencyMod
struct FSetOscFrequencyMod
{
	int32_t OscIndex;  // 0x0 (0x0)
	float OscFreqMod;  // 0x4 (0x4)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
struct FSetPositionEnvelopeBiasInvert
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInBiasInvert : 1;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetOscGain
struct FSetOscGain
{
	int32_t OscIndex;  // 0x0 (0x0)
	float OscGain;  // 0x4 (0x4)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetOscGainMod
struct FSetOscGainMod
{
	int32_t OscIndex;  // 0x0 (0x0)
	float OscGainMod;  // 0x4 (0x4)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetOscOctave
struct FSetOscOctave
{
	int32_t OscIndex;  // 0x0 (0x0)
	float Octave;  // 0x4 (0x4)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetOscPulsewidth
struct FSetOscPulsewidth
{
	int32_t OscIndex;  // 0x0 (0x0)
	float Pulsewidth;  // 0x4 (0x4)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetOscSemitones
struct FSetOscSemitones
{
	int32_t OscIndex;  // 0x0 (0x0)
	float Semitones;  // 0x4 (0x4)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetOscSync
struct FSetOscSync
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsSynced : 1;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetOscType
struct FSetOscType
{
	int32_t OscIndex;  // 0x0 (0x0)
	uint8_t OscType;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetPan
struct FSetPan
{
	float Pan;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
struct FSetPosLfoFrequency
{
	float InLfoFrequency;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetPitchBend
struct FSetPitchBend
{
	float PitchBend;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetPortamento
struct FSetPortamento
{
	float Portamento;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetReleaseTime
struct FSetReleaseTime
{
	float ReleaseTimeMsec;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SourceEffectChorusPreset.SetSpread
struct FSetSpread
{
	float Spread;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.GranularSynth.GetCurrentPlayheadTime
struct FGetCurrentPlayheadTime
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback
struct FSetStereoDelayFeedback
{
	float DelayFeedback;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
struct FSetStereoDelayIsEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool StereoDelayEnabled : 1;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth
struct FSetScrubTimeWidth
{
	float InScrubTimeWidthSec;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetStereoDelayMode
struct FSetStereoDelayMode
{
	uint8_t StereoDelayMode;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentToneGenerator.SetVolume
struct FSetVolume
{
	float InVolume;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetStereoDelayRatio
struct FSetStereoDelayRatio
{
	float DelayRatio;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetStereoDelayTime
struct FSetStereoDelayTime
{
	float DelayTimeMsec;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.GranularSynth.SetSustainGain
struct FSetSustainGain
{
	float SustainGain;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulator
struct FSetFrequencyModulator
{
	struct USoundModulatorBase* Modulator;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.ModularSynthComponent.SetSynthPreset
struct FSetSynthPreset
{
	struct FModularSynthPreset SynthPreset;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRate
struct FSetSampleRate
{
	float SampleRate;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulator
struct FSetBitModulator
{
	struct USoundModulatorBase* Modulator;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulators
struct FSetBitModulators
{
	struct TSet<struct USoundModulatorBase*> InModulators;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SourceEffectBitCrusherPreset.SetBits
struct FSetBits
{
	float Bits;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SourceEffectChorusPreset.SetModulationSettings
struct FSetModulationSettings
{
	struct FSourceEffectChorusSettings ModulationSettings;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator
struct FSetSampleRateModulator
{
	struct USoundModulatorBase* Modulator;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulators
struct FSetSampleRateModulators
{
	struct TSet<struct USoundModulatorBase*> InModulators;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SourceEffectChorusPreset.SetDry
struct FSetDry
{
	float DryAmount;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SourceEffectChorusPreset.SetDryModulator
struct FSetDryModulator
{
	struct USoundModulatorBase* Modulator;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SourceEffectChorusPreset.SetDryModulators
struct FSetDryModulators
{
	struct TSet<struct USoundModulatorBase*> Modulators;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SourceEffectChorusPreset.SetFeedback
struct FSetFeedback
{
	float Feedback;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulator
struct FSetFeedbackModulator
{
	struct USoundModulatorBase* Modulator;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap
struct FRemoveTap
{
	int32_t TapId;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulators
struct FSetFeedbackModulators
{
	struct TSet<struct USoundModulatorBase*> Modulators;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentToneGenerator.SetFrequency
struct FSetFrequency
{
	float InFrequency;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulators
struct FSetFrequencyModulators
{
	struct TSet<struct USoundModulatorBase*> Modulators;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SourceEffectChorusPreset.SetSpreadModulators
struct FSetSpreadModulators
{
	struct TSet<struct USoundModulatorBase*> Modulators;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
struct FSetAmpEnvelopeReleaseTime
{
	float InReleaseTimeMsec;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SourceEffectChorusPreset.SetWet
struct FSetWet
{
	float WetAmount;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SourceEffectChorusPreset.SetWetModulator
struct FSetWetModulator
{
	struct USoundModulatorBase* Modulator;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SourceEffectChorusPreset.SetWetModulators
struct FSetWetModulators
{
	struct TSet<struct USoundModulatorBase*> Modulators;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
struct FSetImpulseResponse
{
	struct UAudioImpulseResponse* InImpulseResponse;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
struct FRegisterEnvelopeFollowerListener
{
	struct UEnvelopeFollowerListener* EnvelopeFollowerListener;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
struct FUnregisterEnvelopeFollowerListener
{
	struct UEnvelopeFollowerListener* EnvelopeFollowerListener;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.GranularSynth.SetGrainDuration
struct FSetGrainDuration
{
	float BaseDurationMsec;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector2D DurationRange;  // 0x8 (0x8)


}; 
 
 // Function Synthesis.SubmixEffectDelayStatics.SetDelayLength
struct FSetDelayLength
{
	struct FSubmixEffectDelaySettings DelaySettings;  // 0x0 (0x0)
	float DelayLength;  // 0xC (0xC)
	struct FSubmixEffectDelaySettings ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
struct FSetInterpolationTime
{
	float Time;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SubmixEffectDelayStatics.SetMaximumDelayLength
struct FSetMaximumDelayLength
{
	struct FSubmixEffectDelaySettings DelaySettings;  // 0x0 (0x0)
	float MaximumDelayLength;  // 0xC (0xC)
	struct FSubmixEffectDelaySettings ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
struct FGetMaxDelayInMilliseconds
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SubmixEffectDelayPreset.SetDelay
struct FSetDelay
{
	float Length;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
struct FSetFilterCutoffFrequency
{
	float InFrequency;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
struct FSetFilterCutoffFrequencyMod
{
	float InFrequency;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SubmixEffectMultibandCompressorPreset.SetAudioBus
struct FSetAudioBus
{
	struct UAudioBus* AudioBus;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SubmixEffectMultibandCompressorPreset.SetExternalSubmix
struct FSetExternalSubmix
{
	struct USoundSubmix* Submix;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SubmixEffectTapDelayPreset.AddTap
struct FAddTap
{
	int32_t TapId;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SubmixEffectTapDelayPreset.GetTap
struct FGetTap
{
	int32_t TapId;  // 0x0 (0x0)
	struct FTapDelayInfo TapInfo;  // 0x4 (0x4)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
struct FSetFrequencyPitchBend
{
	float FrequencyOffsetCents;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SubmixEffectTapDelayPreset.SetTap
struct FSetTap
{
	int32_t TapId;  // 0x0 (0x0)
	struct FTapDelayInfo TapInfo;  // 0x4 (0x4)


}; 
 
 // Function Synthesis.SynthSamplePlayer.GetSampleDuration
struct FGetSampleDuration
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthSamplePlayer.IsLoaded
struct FIsLoaded
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.GranularSynth.SetGrainEnvelopeType
struct FSetGrainEnvelopeType
{
	uint8_t EnvelopeType;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.GranularSynth.SetGrainPan
struct FSetGrainPan
{
	float BasePan;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector2D PanRange;  // 0x8 (0x8)


}; 
 
 // Function Synthesis.GranularSynth.SetGrainPitch
struct FSetGrainPitch
{
	float BasePitch;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector2D PitchRange;  // 0x8 (0x8)


}; 
 
 // Function Synthesis.GranularSynth.SetGrainProbability
struct FSetGrainProbability
{
	float InGrainProbability;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.GranularSynth.SetGrainVolume
struct FSetGrainVolume
{
	float BaseVolume;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector2D VolumeRange;  // 0x8 (0x8)


}; 
 
 // Function Synthesis.GranularSynth.SetPlaybackSpeed
struct FSetPlaybackSpeed
{
	float InPlayheadRate;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.GranularSynth.SetPlayheadTime
struct FSetPlayheadTime
{
	float InPositionSec;  // 0x0 (0x0)
	float LerpTimeSec;  // 0x4 (0x4)
	uint8_t SeekType;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function Synthesis.GranularSynth.SetReleaseTimeMsec
struct FSetReleaseTimeMsec
{
	float ReleaseTimeMsec;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthSamplePlayer.SetScrubMode
struct FSetScrubMode
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bScrubMode : 1;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthSamplePlayer.SetSoundWave
struct FSetSoundWave
{
	struct USoundWave* InSoundWave;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
struct FGetCurveTangent
{
	int32_t TableIndex;  // 0x0 (0x0)
	float ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
struct FGetMaxTableIndex
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
struct FRefreshWaveTable
{
	int32_t Index;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
struct FSetAmpEnvelopeAttackTime
{
	float InAttackTimeMsec;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
struct FSetAmpEnvelopeBiasDepth
{
	float InDepth;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
struct FSetAmpEnvelopeBiasInvert
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInBiasInvert : 1;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
struct FSetAmpEnvelopeDecayTime
{
	float InDecayTimeMsec;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
struct FSetAmpEnvelopeSustainGain
{
	float InSustainGain;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
struct FSetCurveInterpolationType
{
	uint8_t InterpolationType;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t TableIndex;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
struct FSetCurveTangent
{
	int32_t TableIndex;  // 0x0 (0x0)
	float InNewTangent;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue
struct FSetCurveValue
{
	int32_t TableIndex;  // 0x0 (0x0)
	int32_t KeyframeIndex;  // 0x4 (0x4)
	float NewValue;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
struct FSetFilterEnvelopeAttackTime
{
	float InAttackTimeMsec;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
struct FSetFilterEnvelopeBiasDepth
{
	float InDepth;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
struct FSetFilterEnvelopeBiasInvert
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInBiasInvert : 1;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
struct FSetFilterEnvelopeDepth
{
	float InDepth;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
struct FSetFilterEnvelopeInvert
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInInvert : 1;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
struct FSetFilterEnvelopenDecayTime
{
	float InDecayTimeMsec;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
struct FSetFilterEnvelopeReleaseTime
{
	float InReleaseTimeMsec;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
struct FSetFilterEnvelopeSustainGain
{
	float InSustainGain;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
struct FSetFrequencyWithMidiNote
{
	float InMidiNote;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
struct FSetLowPassFilterResonance
{
	float InNewQ;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
struct FSetPositionEnvelopeAttackTime
{
	float InAttackTimeMsec;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
struct FSetPositionEnvelopeBiasDepth
{
	float InDepth;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
struct FSetPositionEnvelopeDecayTime
{
	float InDecayTimeMsec;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
struct FSetPositionEnvelopeDepth
{
	float InDepth;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
struct FSetPositionEnvelopeSustainGain
{
	float InSustainGain;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
struct FSetPosLfoDepth
{
	float InLfoDepth;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
struct FSetPosLfoType
{
	uint8_t InLfoType;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
struct FSetSustainPedalState
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InSustainPedalState : 1;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
struct FSetWaveTablePosition
{
	float InPosition;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
struct FGetCurrentPlaybackProgressTime
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthSamplePlayer.SeekToTime
struct FSeekToTime
{
	float TimeSec;  // 0x0 (0x0)
	uint8_t SeekType;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool bWrap : 1;  // 0x5 (0x5)
	char pad_6[2];  // 0x6 (0x6)


}; 
 
 // Function Synthesis.SynthSamplePlayer.SetPitch
struct FSetPitch
{
	float InPitch;  // 0x0 (0x0)
	float TimeSec;  // 0x4 (0x4)


}; 
 
 // Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency
struct FGetLinearFrequency
{
	float InLogFrequencyValue;  // 0x0 (0x0)
	float InDomainMin;  // 0x4 (0x4)
	float InDomainMax;  // 0x8 (0x8)
	float InRangeMin;  // 0xC (0xC)
	float InRangeMax;  // 0x10 (0x10)
	float ReturnValue;  // 0x14 (0x14)


}; 
 
 // Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency
struct FGetLogFrequency
{
	float InLinearValue;  // 0x0 (0x0)
	float InDomainMin;  // 0x4 (0x4)
	float InDomainMax;  // 0x8 (0x8)
	float InRangeMin;  // 0xC (0xC)
	float InRangeMax;  // 0x10 (0x10)
	float ReturnValue;  // 0x14 (0x14)


}; 
 
 // Function Synthesis.SynthKnob.GetValue
struct FGetValue
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.Synth2DSlider.SetIndentHandle
struct FSetIndentHandle
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InValue : 1;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthKnob.SetLocked
struct FSetLocked
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InValue : 1;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.Synth2DSlider.SetSliderHandleColor
struct FSetSliderHandleColor
{
	struct FLinearColor InValue;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthKnob.SetStepSize
struct FSetStepSize
{
	float InValue;  // 0x0 (0x0)


}; 
 
 // Function Synthesis.SynthKnob.SetValue
struct FSetValue
{
	float InValue;  // 0x0 (0x0)


}; 
 
 