#include "pch.h"
#include "SDK.h"

void USourceEffectConvolutionReverbPreset::SetSettings(struct FSourceEffectConvolutionReverbSettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectConvolutionReverbPreset.SetSettings");

	FSetSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void USourceEffectConvolutionReverbPreset::SetImpulseResponse(struct UAudioImpulseResponse* InImpulseResponse){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectConvolutionReverbPreset.SetImpulseResponse");

	FSetImpulseResponse parms{};	
	parms.InImpulseResponse = InImpulseResponse;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetSynthPreset(struct FModularSynthPreset& SynthPreset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetSynthPreset");

	FSetSynthPreset parms{};	
	parms.SynthPreset = SynthPreset;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetSustainGain(float SustainGain){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetSustainGain");

	FSetSustainGain parms{};	
	parms.SustainGain = SustainGain;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetStereoDelayWetlevel(float DelayWetlevel){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel");

	FSetStereoDelayWetlevel parms{};	
	parms.DelayWetlevel = DelayWetlevel;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetStereoDelayTime(float DelayTimeMsec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayTime");

	FSetStereoDelayTime parms{};	
	parms.DelayTimeMsec = DelayTimeMsec;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetStereoDelayRatio(float DelayRatio){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayRatio");

	FSetStereoDelayRatio parms{};	
	parms.DelayRatio = DelayRatio;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetStereoDelayMode(uint8_t StereoDelayMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayMode");

	FSetStereoDelayMode parms{};	
	parms.StereoDelayMode = StereoDelayMode;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetStereoDelayIsEnabled(bool StereoDelayEnabled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled");

	FSetStereoDelayIsEnabled parms{};	
	parms.StereoDelayEnabled = StereoDelayEnabled;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetStereoDelayFeedback(float DelayFeedback){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback");

	FSetStereoDelayFeedback parms{};	
	parms.DelayFeedback = DelayFeedback;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetSpread(float Spread){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetSpread");

	FSetSpread parms{};	
	parms.Spread = Spread;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetReleaseTime(float ReleaseTimeMsec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetReleaseTime");

	FSetReleaseTime parms{};	
	parms.ReleaseTimeMsec = ReleaseTimeMsec;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetPortamento(float Portamento){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetPortamento");

	FSetPortamento parms{};	
	parms.Portamento = Portamento;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetPitchBend(float PitchBend){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetPitchBend");

	FSetPitchBend parms{};	
	parms.PitchBend = PitchBend;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetPan(float Pan){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetPan");

	FSetPan parms{};	
	parms.Pan = Pan;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetOscType(int32_t OscIndex, uint8_t OscType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscType");

	FSetOscType parms{};	
	parms.OscIndex = OscIndex;
	parms.OscType = OscType;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetOscSync(bool bIsSynced){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscSync");

	FSetOscSync parms{};	
	parms.bIsSynced = bIsSynced;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetOscSemitones(int32_t OscIndex, float Semitones){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscSemitones");

	FSetOscSemitones parms{};	
	parms.OscIndex = OscIndex;
	parms.Semitones = Semitones;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetOscPulsewidth(int32_t OscIndex, float Pulsewidth){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscPulsewidth");

	FSetOscPulsewidth parms{};	
	parms.OscIndex = OscIndex;
	parms.Pulsewidth = Pulsewidth;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetOscOctave(int32_t OscIndex, float Octave){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscOctave");

	FSetOscOctave parms{};	
	parms.OscIndex = OscIndex;
	parms.Octave = Octave;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetOscGainMod(int32_t OscIndex, float OscGainMod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscGainMod");

	FSetOscGainMod parms{};	
	parms.OscIndex = OscIndex;
	parms.OscGainMod = OscGainMod;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetOscGain(int32_t OscIndex, float OscGain){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscGain");

	FSetOscGain parms{};	
	parms.OscIndex = OscIndex;
	parms.OscGain = OscGain;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscFrequencyMod");

	FSetOscFrequencyMod parms{};	
	parms.OscIndex = OscIndex;
	parms.OscFreqMod = OscFreqMod;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetOscCents(int32_t OscIndex, float Cents){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscCents");

	FSetOscCents parms{};	
	parms.OscIndex = OscIndex;
	parms.Cents = Cents;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetModEnvSustainGain(float SustainGain){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvSustainGain");

	FSetModEnvSustainGain parms{};	
	parms.SustainGain = SustainGain;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetModEnvReleaseTime(float Release){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime");

	FSetModEnvReleaseTime parms{};	
	parms.Release = Release;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetModEnvPatch(uint8_t InPatchType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvPatch");

	FSetModEnvPatch parms{};	
	parms.InPatchType = InPatchType;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetModEnvInvert(bool bInvert){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvInvert");

	FSetModEnvInvert parms{};	
	parms.bInvert = bInvert;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetModEnvDepth(float Depth){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvDepth");

	FSetModEnvDepth parms{};	
	parms.Depth = Depth;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetModEnvDecayTime(float DecayTimeMsec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvDecayTime");

	FSetModEnvDecayTime parms{};	
	parms.DecayTimeMsec = DecayTimeMsec;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetModEnvBiasPatch(uint8_t InPatchType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch");

	FSetModEnvBiasPatch parms{};	
	parms.InPatchType = InPatchType;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetModEnvBiasInvert(bool bInvert){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert");

	FSetModEnvBiasInvert parms{};	
	parms.bInvert = bInvert;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetModEnvAttackTime(float AttackTimeMsec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvAttackTime");

	FSetModEnvAttackTime parms{};	
	parms.AttackTimeMsec = AttackTimeMsec;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetLFOType(int32_t LFOIndex, uint8_t LFOType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOType");

	FSetLFOType parms{};	
	parms.LFOIndex = LFOIndex;
	parms.LFOType = LFOType;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetLFOPatch(int32_t LFOIndex, uint8_t LFOPatchType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOPatch");

	FSetLFOPatch parms{};	
	parms.LFOIndex = LFOIndex;
	parms.LFOPatchType = LFOPatchType;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetLFOMode(int32_t LFOIndex, uint8_t LFOMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOMode");

	FSetLFOMode parms{};	
	parms.LFOIndex = LFOIndex;
	parms.LFOMode = LFOMode;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetLFOGainMod(int32_t LFOIndex, float GainMod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOGainMod");

	FSetLFOGainMod parms{};	
	parms.LFOIndex = LFOIndex;
	parms.GainMod = GainMod;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetLFOGain(int32_t LFOIndex, float Gain){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOGain");

	FSetLFOGain parms{};	
	parms.LFOIndex = LFOIndex;
	parms.Gain = Gain;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod");

	FSetLFOFrequencyMod parms{};	
	parms.LFOIndex = LFOIndex;
	parms.FrequencyModHz = FrequencyModHz;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetLFOFrequency(int32_t LFOIndex, float FrequencyHz){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOFrequency");

	FSetLFOFrequency parms{};	
	parms.LFOIndex = LFOIndex;
	parms.FrequencyHz = FrequencyHz;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetGainDb(float GainDb){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetGainDb");

	FSetGainDb parms{};	
	parms.GainDb = GainDb;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetFilterType(uint8_t FilterType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterType");

	FSetFilterType parms{};	
	parms.FilterType = FilterType;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetFilterQMod(float FilterQ){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterQMod");

	FSetFilterQMod parms{};	
	parms.FilterQ = FilterQ;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetFilterQ(float FilterQ){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterQ");

	FSetFilterQ parms{};	
	parms.FilterQ = FilterQ;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetFilterFrequencyMod(float FilterFrequencyHz){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod");

	FSetFilterFrequencyMod parms{};	
	parms.FilterFrequencyHz = FilterFrequencyHz;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetFilterFrequency(float FilterFrequencyHz){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterFrequency");

	FSetFilterFrequency parms{};	
	parms.FilterFrequencyHz = FilterFrequencyHz;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetFilterAlgorithm(uint8_t FilterAlgorithm){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterAlgorithm");

	FSetFilterAlgorithm parms{};	
	parms.FilterAlgorithm = FilterAlgorithm;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetEnableUnison(bool EnableUnison){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetEnableUnison");

	FSetEnableUnison parms{};	
	parms.EnableUnison = EnableUnison;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetEnableRetrigger(bool RetriggerEnabled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetEnableRetrigger");

	FSetEnableRetrigger parms{};	
	parms.RetriggerEnabled = RetriggerEnabled;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetEnablePolyphony(bool bEnablePolyphony){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetEnablePolyphony");

	FSetEnablePolyphony parms{};	
	parms.bEnablePolyphony = bEnablePolyphony;

	ProcessEvent(fn, &parms);
}

bool UModularSynthComponent::SetEnablePatch(struct FPatchId PatchId, bool bIsEnabled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetEnablePatch");

	FSetEnablePatch parms{};	
	parms.PatchId = PatchId;
	parms.bIsEnabled = bIsEnabled;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UModularSynthComponent::SetEnableLegato(bool LegatoEnabled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetEnableLegato");

	FSetEnableLegato parms{};	
	parms.LegatoEnabled = LegatoEnabled;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetDecayTime(float DecayTimeMsec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetDecayTime");

	FSetDecayTime parms{};	
	parms.DecayTimeMsec = DecayTimeMsec;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetChorusFrequency(float Frequency){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetChorusFrequency");

	FSetChorusFrequency parms{};	
	parms.Frequency = Frequency;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetChorusFeedback(float Feedback){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetChorusFeedback");

	FSetChorusFeedback parms{};	
	parms.Feedback = Feedback;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetChorusEnabled(bool EnableChorus){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetChorusEnabled");

	FSetChorusEnabled parms{};	
	parms.EnableChorus = EnableChorus;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetChorusDepth(float Depth){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetChorusDepth");

	FSetChorusDepth parms{};	
	parms.Depth = Depth;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::SetAttackTime(float AttackTimeMsec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetAttackTime");

	FSetAttackTime parms{};	
	parms.AttackTimeMsec = AttackTimeMsec;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::NoteOn(float Note, int32_t Velocity, float Duration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.NoteOn");

	FNoteOn parms{};	
	parms.Note = Note;
	parms.Velocity = Velocity;
	parms.Duration = Duration;

	ProcessEvent(fn, &parms);
}

void UModularSynthComponent::NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.NoteOff");

	FNoteOff parms{};	
	parms.Note = Note;
	parms.bAllNotesOff = bAllNotesOff;
	parms.bKillAllNotes = bKillAllNotes;

	ProcessEvent(fn, &parms);
}

struct FPatchId UModularSynthComponent::CreatePatch(uint8_t PatchSource, struct TArray<struct FSynth1PatchCable>& PatchCables, bool bEnableByDefault){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.CreatePatch");

	FCreatePatch parms{};	
	parms.PatchSource = PatchSource;
	parms.PatchCables = PatchCables;
	parms.bEnableByDefault = bEnableByDefault;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USynthKnob::SetValue(float InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthKnob.SetValue");

	FSetValue parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void USynthKnob::SetStepSize(float InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthKnob.SetStepSize");

	FSetStepSize parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void USynthKnob::SetLocked(bool InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthKnob.SetLocked");

	FSetLocked parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

float USynthKnob::GetValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthKnob.GetValue");

	FGetValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USubmixEffectConvolutionReverbPreset::SetSettings(struct FSubmixEffectConvolutionReverbSettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings");

	FSetSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void USubmixEffectConvolutionReverbPreset::SetImpulseResponse(struct UAudioImpulseResponse* InImpulseResponse){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse");

	FSetImpulseResponse parms{};	
	parms.InImpulseResponse = InImpulseResponse;

	ProcessEvent(fn, &parms);
}

void USourceEffectDynamicsProcessorPreset::SetSettings(struct FSourceEffectDynamicsProcessorSettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings");

	FSetSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void USubmixEffectTapDelayPreset::SetTap(int32_t TapId, struct FTapDelayInfo& TapInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.SetTap");

	FSetTap parms{};	
	parms.TapId = TapId;
	parms.TapInfo = TapInfo;

	ProcessEvent(fn, &parms);
}

void USubmixEffectTapDelayPreset::SetSettings(struct FSubmixEffectTapDelaySettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.SetSettings");

	FSetSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void USubmixEffectTapDelayPreset::SetInterpolationTime(float Time){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime");

	FSetInterpolationTime parms{};	
	parms.Time = Time;

	ProcessEvent(fn, &parms);
}

void USubmixEffectTapDelayPreset::RemoveTap(int32_t TapId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap");

	FRemoveTap parms{};	
	parms.TapId = TapId;

	ProcessEvent(fn, &parms);
}

void USubmixEffectTapDelayPreset::GetTapIds(struct TArray<int32_t>& TapIds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds");

	FGetTapIds parms{};	
	parms.TapIds = TapIds;

	ProcessEvent(fn, &parms);
}

void USubmixEffectTapDelayPreset::GetTap(int32_t TapId, struct FTapDelayInfo& TapInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.GetTap");

	FGetTap parms{};	
	parms.TapId = TapId;
	parms.TapInfo = TapInfo;

	ProcessEvent(fn, &parms);
}

float USubmixEffectTapDelayPreset::GetMaxDelayInMilliseconds(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds");

	FGetMaxDelayInMilliseconds parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USubmixEffectTapDelayPreset::AddTap(int32_t& TapId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.AddTap");

	FAddTap parms{};	
	parms.TapId = TapId;

	ProcessEvent(fn, &parms);
}

void USourceEffectChorusPreset::SetWetModulators(struct TSet<struct USoundModulatorBase*>& Modulators){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetWetModulators");

	FSetWetModulators parms{};	
	parms.Modulators = Modulators;

	ProcessEvent(fn, &parms);
}

void USourceEffectChorusPreset::SetWetModulator(struct USoundModulatorBase* Modulator){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetWetModulator");

	FSetWetModulator parms{};	
	parms.Modulator = Modulator;

	ProcessEvent(fn, &parms);
}

void USourceEffectChorusPreset::SetWet(float WetAmount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetWet");

	FSetWet parms{};	
	parms.WetAmount = WetAmount;

	ProcessEvent(fn, &parms);
}

void USourceEffectChorusPreset::SetSpreadModulators(struct TSet<struct USoundModulatorBase*>& Modulators){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetSpreadModulators");

	FSetSpreadModulators parms{};	
	parms.Modulators = Modulators;

	ProcessEvent(fn, &parms);
}

void USourceEffectChorusPreset::SetSpreadModulator(struct USoundModulatorBase* Modulator){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetSpreadModulator");

	FSetSpreadModulator parms{};	
	parms.Modulator = Modulator;

	ProcessEvent(fn, &parms);
}

void USourceEffectChorusPreset::SetSpread(float Spread){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetSpread");

	FSetSpread parms{};	
	parms.Spread = Spread;

	ProcessEvent(fn, &parms);
}

void USourceEffectChorusPreset::SetSettings(struct FSourceEffectChorusBaseSettings& Settings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetSettings");

	FSetSettings parms{};	
	parms.Settings = Settings;

	ProcessEvent(fn, &parms);
}

void USourceEffectChorusPreset::SetModulationSettings(struct FSourceEffectChorusSettings& ModulationSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetModulationSettings");

	FSetModulationSettings parms{};	
	parms.ModulationSettings = ModulationSettings;

	ProcessEvent(fn, &parms);
}

void USourceEffectChorusPreset::SetFrequencyModulators(struct TSet<struct USoundModulatorBase*>& Modulators){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulators");

	FSetFrequencyModulators parms{};	
	parms.Modulators = Modulators;

	ProcessEvent(fn, &parms);
}

void USourceEffectChorusPreset::SetFrequencyModulator(struct USoundModulatorBase* Modulator){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulator");

	FSetFrequencyModulator parms{};	
	parms.Modulator = Modulator;

	ProcessEvent(fn, &parms);
}

void USourceEffectChorusPreset::SetFrequency(float Frequency){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetFrequency");

	FSetFrequency parms{};	
	parms.Frequency = Frequency;

	ProcessEvent(fn, &parms);
}

void USourceEffectChorusPreset::SetFeedbackModulators(struct TSet<struct USoundModulatorBase*>& Modulators){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulators");

	FSetFeedbackModulators parms{};	
	parms.Modulators = Modulators;

	ProcessEvent(fn, &parms);
}

void USourceEffectChorusPreset::SetFeedbackModulator(struct USoundModulatorBase* Modulator){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulator");

	FSetFeedbackModulator parms{};	
	parms.Modulator = Modulator;

	ProcessEvent(fn, &parms);
}

void USourceEffectChorusPreset::SetFeedback(float Feedback){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetFeedback");

	FSetFeedback parms{};	
	parms.Feedback = Feedback;

	ProcessEvent(fn, &parms);
}

void USourceEffectChorusPreset::SetDryModulators(struct TSet<struct USoundModulatorBase*>& Modulators){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetDryModulators");

	FSetDryModulators parms{};	
	parms.Modulators = Modulators;

	ProcessEvent(fn, &parms);
}

void USourceEffectChorusPreset::SetDryModulator(struct USoundModulatorBase* Modulator){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetDryModulator");

	FSetDryModulator parms{};	
	parms.Modulator = Modulator;

	ProcessEvent(fn, &parms);
}

void USourceEffectChorusPreset::SetDry(float DryAmount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetDry");

	FSetDry parms{};	
	parms.DryAmount = DryAmount;

	ProcessEvent(fn, &parms);
}

void USourceEffectChorusPreset::SetDepthModulators(struct TSet<struct USoundModulatorBase*>& Modulators){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetDepthModulators");

	FSetDepthModulators parms{};	
	parms.Modulators = Modulators;

	ProcessEvent(fn, &parms);
}

void USourceEffectChorusPreset::SetDepthModulator(struct USoundModulatorBase* Modulator){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetDepthModulator");

	FSetDepthModulator parms{};	
	parms.Modulator = Modulator;

	ProcessEvent(fn, &parms);
}

void USourceEffectChorusPreset::SetDepth(float Depth){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetDepth");

	FSetDepth parms{};	
	parms.Depth = Depth;

	ProcessEvent(fn, &parms);
}

void USourceEffectFilterPreset::SetSettings(struct FSourceEffectFilterSettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectFilterPreset.SetSettings");

	FSetSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void USourceEffectEQPreset::SetSettings(struct FSourceEffectEQSettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectEQPreset.SetSettings");

	FSetSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void UModularSynthLibrary::AddModularSynthPresetToBankAsset(struct UModularSynthPresetBank* InBank, struct FModularSynthPreset& Preset, struct FString PresetName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset");

	FAddModularSynthPresetToBankAsset parms{};	
	parms.InBank = InBank;
	parms.Preset = Preset;
	parms.PresetName = PresetName;

	ProcessEvent(fn, &parms);
}

void USourceEffectMidSideSpreaderPreset::SetSettings(struct FSourceEffectMidSideSpreaderSettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings");

	FSetSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void USourceEffectBitCrusherPreset::SetSettings(struct FSourceEffectBitCrusherBaseSettings& Settings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectBitCrusherPreset.SetSettings");

	FSetSettings parms{};	
	parms.Settings = Settings;

	ProcessEvent(fn, &parms);
}

void USourceEffectBitCrusherPreset::SetSampleRateModulators(struct TSet<struct USoundModulatorBase*>& InModulators){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulators");

	FSetSampleRateModulators parms{};	
	parms.InModulators = InModulators;

	ProcessEvent(fn, &parms);
}

void USourceEffectBitCrusherPreset::SetSampleRateModulator(struct USoundModulatorBase* Modulator){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator");

	FSetSampleRateModulator parms{};	
	parms.Modulator = Modulator;

	ProcessEvent(fn, &parms);
}

void USourceEffectBitCrusherPreset::SetSampleRate(float SampleRate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRate");

	FSetSampleRate parms{};	
	parms.SampleRate = SampleRate;

	ProcessEvent(fn, &parms);
}

void USourceEffectBitCrusherPreset::SetModulationSettings(struct FSourceEffectBitCrusherSettings& ModulationSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings");

	FSetModulationSettings parms{};	
	parms.ModulationSettings = ModulationSettings;

	ProcessEvent(fn, &parms);
}

void USourceEffectBitCrusherPreset::SetBits(float Bits){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectBitCrusherPreset.SetBits");

	FSetBits parms{};	
	parms.Bits = Bits;

	ProcessEvent(fn, &parms);
}

void USourceEffectBitCrusherPreset::SetBitModulators(struct TSet<struct USoundModulatorBase*>& InModulators){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulators");

	FSetBitModulators parms{};	
	parms.InModulators = InModulators;

	ProcessEvent(fn, &parms);
}

void USourceEffectBitCrusherPreset::SetBitModulator(struct USoundModulatorBase* Modulator){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulator");

	FSetBitModulator parms{};	
	parms.Modulator = Modulator;

	ProcessEvent(fn, &parms);
}

struct FSubmixEffectDelaySettings USubmixEffectDelayStatics::SetMaximumDelayLength(struct FSubmixEffectDelaySettings& DelaySettings, float MaximumDelayLength){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectDelayStatics.SetMaximumDelayLength");

	FSetMaximumDelayLength parms{};	
	parms.DelaySettings = DelaySettings;
	parms.MaximumDelayLength = MaximumDelayLength;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSubmixEffectDelaySettings USubmixEffectDelayStatics::SetInterpolationTime(struct FSubmixEffectDelaySettings& DelaySettings, float InterpolationTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectDelayStatics.SetInterpolationTime");

	FSetInterpolationTime parms{};	
	parms.DelaySettings = DelaySettings;
	parms.InterpolationTime = InterpolationTime;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSubmixEffectDelaySettings USubmixEffectDelayStatics::SetDelayLength(struct FSubmixEffectDelaySettings& DelaySettings, float DelayLength){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectDelayStatics.SetDelayLength");

	FSetDelayLength parms{};	
	parms.DelaySettings = DelaySettings;
	parms.DelayLength = DelayLength;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USourceEffectEnvelopeFollowerPreset::UnregisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener");

	FUnregisterEnvelopeFollowerListener parms{};	
	parms.EnvelopeFollowerListener = EnvelopeFollowerListener;

	ProcessEvent(fn, &parms);
}

void USourceEffectEnvelopeFollowerPreset::SetSettings(struct FSourceEffectEnvelopeFollowerSettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings");

	FSetSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void USourceEffectEnvelopeFollowerPreset::RegisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener");

	FRegisterEnvelopeFollowerListener parms{};	
	parms.EnvelopeFollowerListener = EnvelopeFollowerListener;

	ProcessEvent(fn, &parms);
}

void USourceEffectFoldbackDistortionPreset::SetSettings(struct FSourceEffectFoldbackDistortionSettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings");

	FSetSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void USynthComponentToneGenerator::SetVolume(float InVolume){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentToneGenerator.SetVolume");

	FSetVolume parms{};	
	parms.InVolume = InVolume;

	ProcessEvent(fn, &parms);
}

void USynthComponentToneGenerator::SetFrequency(float InFrequency){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentToneGenerator.SetFrequency");

	FSetFrequency parms{};	
	parms.InFrequency = InFrequency;

	ProcessEvent(fn, &parms);
}

void USourceEffectMotionFilterPreset::SetSettings(struct FSourceEffectMotionFilterSettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectMotionFilterPreset.SetSettings");

	FSetSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void USourceEffectPannerPreset::SetSettings(struct FSourceEffectPannerSettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectPannerPreset.SetSettings");

	FSetSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

float USynthesisUtilitiesBlueprintFunctionLibrary::GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency");

	FGetLogFrequency parms{};	
	parms.InLinearValue = InLinearValue;
	parms.InDomainMin = InDomainMin;
	parms.InDomainMax = InDomainMax;
	parms.InRangeMin = InRangeMin;
	parms.InRangeMax = InRangeMax;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float USynthesisUtilitiesBlueprintFunctionLibrary::GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency");

	FGetLinearFrequency parms{};	
	parms.InLogFrequencyValue = InLogFrequencyValue;
	parms.InDomainMin = InDomainMin;
	parms.InDomainMax = InDomainMax;
	parms.InRangeMin = InRangeMin;
	parms.InRangeMax = InRangeMax;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USourceEffectPhaserPreset::SetSettings(struct FSourceEffectPhaserSettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectPhaserPreset.SetSettings");

	FSetSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void UGranularSynth::SetSustainGain(float SustainGain){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetSustainGain");

	FSetSustainGain parms{};	
	parms.SustainGain = SustainGain;

	ProcessEvent(fn, &parms);
}

void UGranularSynth::SetSoundWave(struct USoundWave* InSoundWave){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetSoundWave");

	FSetSoundWave parms{};	
	parms.InSoundWave = InSoundWave;

	ProcessEvent(fn, &parms);
}

void UGranularSynth::SetScrubMode(bool bScrubMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetScrubMode");

	FSetScrubMode parms{};	
	parms.bScrubMode = bScrubMode;

	ProcessEvent(fn, &parms);
}

void UGranularSynth::SetReleaseTimeMsec(float ReleaseTimeMsec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetReleaseTimeMsec");

	FSetReleaseTimeMsec parms{};	
	parms.ReleaseTimeMsec = ReleaseTimeMsec;

	ProcessEvent(fn, &parms);
}

void UGranularSynth::SetPlayheadTime(float InPositionSec, float LerpTimeSec, uint8_t SeekType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetPlayheadTime");

	FSetPlayheadTime parms{};	
	parms.InPositionSec = InPositionSec;
	parms.LerpTimeSec = LerpTimeSec;
	parms.SeekType = SeekType;

	ProcessEvent(fn, &parms);
}

void UGranularSynth::SetPlaybackSpeed(float InPlayheadRate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetPlaybackSpeed");

	FSetPlaybackSpeed parms{};	
	parms.InPlayheadRate = InPlayheadRate;

	ProcessEvent(fn, &parms);
}

void UGranularSynth::SetGrainVolume(float BaseVolume, struct FVector2D VolumeRange){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainVolume");

	FSetGrainVolume parms{};	
	parms.BaseVolume = BaseVolume;
	parms.VolumeRange = VolumeRange;

	ProcessEvent(fn, &parms);
}

void UGranularSynth::SetGrainsPerSecond(float InGrainsPerSecond){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainsPerSecond");

	FSetGrainsPerSecond parms{};	
	parms.InGrainsPerSecond = InGrainsPerSecond;

	ProcessEvent(fn, &parms);
}

void UGranularSynth::SetGrainProbability(float InGrainProbability){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainProbability");

	FSetGrainProbability parms{};	
	parms.InGrainProbability = InGrainProbability;

	ProcessEvent(fn, &parms);
}

void UGranularSynth::SetGrainPitch(float BasePitch, struct FVector2D PitchRange){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainPitch");

	FSetGrainPitch parms{};	
	parms.BasePitch = BasePitch;
	parms.PitchRange = PitchRange;

	ProcessEvent(fn, &parms);
}

void UGranularSynth::SetGrainPan(float BasePan, struct FVector2D PanRange){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainPan");

	FSetGrainPan parms{};	
	parms.BasePan = BasePan;
	parms.PanRange = PanRange;

	ProcessEvent(fn, &parms);
}

void UGranularSynth::SetGrainEnvelopeType(uint8_t EnvelopeType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainEnvelopeType");

	FSetGrainEnvelopeType parms{};	
	parms.EnvelopeType = EnvelopeType;

	ProcessEvent(fn, &parms);
}

void UGranularSynth::SetGrainDuration(float BaseDurationMsec, struct FVector2D DurationRange){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainDuration");

	FSetGrainDuration parms{};	
	parms.BaseDurationMsec = BaseDurationMsec;
	parms.DurationRange = DurationRange;

	ProcessEvent(fn, &parms);
}

void UGranularSynth::SetDecayTime(float DecayTimeMsec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetDecayTime");

	FSetDecayTime parms{};	
	parms.DecayTimeMsec = DecayTimeMsec;

	ProcessEvent(fn, &parms);
}

void UGranularSynth::SetAttackTime(float AttackTimeMsec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetAttackTime");

	FSetAttackTime parms{};	
	parms.AttackTimeMsec = AttackTimeMsec;

	ProcessEvent(fn, &parms);
}

void UGranularSynth::NoteOn(float Note, int32_t Velocity, float Duration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.NoteOn");

	FNoteOn parms{};	
	parms.Note = Note;
	parms.Velocity = Velocity;
	parms.Duration = Duration;

	ProcessEvent(fn, &parms);
}

void UGranularSynth::NoteOff(float Note, bool bKill){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.NoteOff");

	FNoteOff parms{};	
	parms.Note = Note;
	parms.bKill = bKill;

	ProcessEvent(fn, &parms);
}

bool UGranularSynth::IsLoaded(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.IsLoaded");

	FIsLoaded parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UGranularSynth::GetSampleDuration(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.GetSampleDuration");

	FGetSampleDuration parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UGranularSynth::GetCurrentPlayheadTime(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.GetCurrentPlayheadTime");

	FGetCurrentPlayheadTime parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USourceEffectRingModulationPreset::SetSettings(struct FSourceEffectRingModulationSettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectRingModulationPreset.SetSettings");

	FSetSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void USourceEffectSimpleDelayPreset::SetSettings(struct FSourceEffectSimpleDelaySettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings");

	FSetSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void USourceEffectStereoDelayPreset::SetSettings(struct FSourceEffectStereoDelaySettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectStereoDelayPreset.SetSettings");

	FSetSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void USourceEffectWaveShaperPreset::SetSettings(struct FSourceEffectWaveShaperSettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SourceEffectWaveShaperPreset.SetSettings");

	FSetSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void USubmixEffectDelayPreset::SetSettings(struct FSubmixEffectDelaySettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectDelayPreset.SetSettings");

	FSetSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void USubmixEffectDelayPreset::SetInterpolationTime(float Time){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime");

	FSetInterpolationTime parms{};	
	parms.Time = Time;

	ProcessEvent(fn, &parms);
}

void USubmixEffectDelayPreset::SetDelay(float Length){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectDelayPreset.SetDelay");

	FSetDelay parms{};	
	parms.Length = Length;

	ProcessEvent(fn, &parms);
}

void USubmixEffectDelayPreset::SetDefaultSettings(struct FSubmixEffectDelaySettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectDelayPreset.SetDefaultSettings");

	FSetDefaultSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

float USubmixEffectDelayPreset::GetMaxDelayInMilliseconds(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds");

	FGetMaxDelayInMilliseconds parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USubmixEffectFilterPreset::SetSettings(struct FSubmixEffectFilterSettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetSettings");

	FSetSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void USubmixEffectFilterPreset::SetFilterType(uint8_t InType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterType");

	FSetFilterType parms{};	
	parms.InType = InType;

	ProcessEvent(fn, &parms);
}

void USubmixEffectFilterPreset::SetFilterQMod(float InQ){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod");

	FSetFilterQMod parms{};	
	parms.InQ = InQ;

	ProcessEvent(fn, &parms);
}

void USubmixEffectFilterPreset::SetFilterQ(float InQ){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterQ");

	FSetFilterQ parms{};	
	parms.InQ = InQ;

	ProcessEvent(fn, &parms);
}

void USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod(float InFrequency){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod");

	FSetFilterCutoffFrequencyMod parms{};	
	parms.InFrequency = InFrequency;

	ProcessEvent(fn, &parms);
}

void USubmixEffectFilterPreset::SetFilterCutoffFrequency(float InFrequency){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency");

	FSetFilterCutoffFrequency parms{};	
	parms.InFrequency = InFrequency;

	ProcessEvent(fn, &parms);
}

void USubmixEffectFilterPreset::SetFilterAlgorithm(uint8_t InAlgorithm){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm");

	FSetFilterAlgorithm parms{};	
	parms.InAlgorithm = InAlgorithm;

	ProcessEvent(fn, &parms);
}

void USubmixEffectFlexiverbPreset::SetSettings(struct FSubmixEffectFlexiverbSettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings");

	FSetSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void USubmixEffectMultibandCompressorPreset::SetSettings(struct FSubmixEffectMultibandCompressorSettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings");

	FSetSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void USubmixEffectMultibandCompressorPreset::SetExternalSubmix(struct USoundSubmix* Submix){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectMultibandCompressorPreset.SetExternalSubmix");

	FSetExternalSubmix parms{};	
	parms.Submix = Submix;

	ProcessEvent(fn, &parms);
}

void USubmixEffectMultibandCompressorPreset::SetAudioBus(struct UAudioBus* AudioBus){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectMultibandCompressorPreset.SetAudioBus");

	FSetAudioBus parms{};	
	parms.AudioBus = AudioBus;

	ProcessEvent(fn, &parms);
}

void USubmixEffectMultibandCompressorPreset::ResetKey(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectMultibandCompressorPreset.ResetKey");

	FResetKey parms{};	

	ProcessEvent(fn, &parms);
}

void USubmixEffectStereoDelayPreset::SetSettings(struct FSubmixEffectStereoDelaySettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectStereoDelayPreset.SetSettings");

	FSetSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetWaveTablePosition(float InPosition){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition");

	FSetWaveTablePosition parms{};	
	parms.InPosition = InPosition;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetSustainPedalState(bool InSustainPedalState){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState");

	FSetSustainPedalState parms{};	
	parms.InSustainPedalState = InSustainPedalState;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetPosLfoType(uint8_t InLfoType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType");

	FSetPosLfoType parms{};	
	parms.InLfoType = InLfoType;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetPosLfoFrequency(float InLfoFrequency){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency");

	FSetPosLfoFrequency parms{};	
	parms.InLfoFrequency = InLfoFrequency;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetPosLfoDepth(float InLfoDepth){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth");

	FSetPosLfoDepth parms{};	
	parms.InLfoDepth = InLfoDepth;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain(float InSustainGain){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain");

	FSetPositionEnvelopeSustainGain parms{};	
	parms.InSustainGain = InSustainGain;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime");

	FSetPositionEnvelopeReleaseTime parms{};	
	parms.InReleaseTimeMsec = InReleaseTimeMsec;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetPositionEnvelopeInvert(bool bInInvert){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert");

	FSetPositionEnvelopeInvert parms{};	
	parms.bInInvert = bInInvert;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetPositionEnvelopeDepth(float InDepth){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth");

	FSetPositionEnvelopeDepth parms{};	
	parms.InDepth = InDepth;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime(float InDecayTimeMsec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime");

	FSetPositionEnvelopeDecayTime parms{};	
	parms.InDecayTimeMsec = InDecayTimeMsec;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert(bool bInBiasInvert){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert");

	FSetPositionEnvelopeBiasInvert parms{};	
	parms.bInBiasInvert = bInBiasInvert;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth(float InDepth){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth");

	FSetPositionEnvelopeBiasDepth parms{};	
	parms.InDepth = InDepth;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime(float InAttackTimeMsec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime");

	FSetPositionEnvelopeAttackTime parms{};	
	parms.InAttackTimeMsec = InAttackTimeMsec;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetLowPassFilterResonance(float InNewQ){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance");

	FSetLowPassFilterResonance parms{};	
	parms.InNewQ = InNewQ;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetFrequencyWithMidiNote(float InMidiNote){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote");

	FSetFrequencyWithMidiNote parms{};	
	parms.InMidiNote = InMidiNote;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetFrequencyPitchBend(float FrequencyOffsetCents){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend");

	FSetFrequencyPitchBend parms{};	
	parms.FrequencyOffsetCents = FrequencyOffsetCents;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetFrequency(float FrequencyHz){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFrequency");

	FSetFrequency parms{};	
	parms.FrequencyHz = FrequencyHz;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain(float InSustainGain){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain");

	FSetFilterEnvelopeSustainGain parms{};	
	parms.InSustainGain = InSustainGain;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime");

	FSetFilterEnvelopeReleaseTime parms{};	
	parms.InReleaseTimeMsec = InReleaseTimeMsec;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime(float InDecayTimeMsec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime");

	FSetFilterEnvelopenDecayTime parms{};	
	parms.InDecayTimeMsec = InDecayTimeMsec;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetFilterEnvelopeInvert(bool bInInvert){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert");

	FSetFilterEnvelopeInvert parms{};	
	parms.bInInvert = bInInvert;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetFilterEnvelopeDepth(float InDepth){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth");

	FSetFilterEnvelopeDepth parms{};	
	parms.InDepth = InDepth;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert(bool bInBiasInvert){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert");

	FSetFilterEnvelopeBiasInvert parms{};	
	parms.bInBiasInvert = bInBiasInvert;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth(float InDepth){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth");

	FSetFilterEnvelopeBiasDepth parms{};	
	parms.InDepth = InDepth;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime(float InAttackTimeMsec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime");

	FSetFilterEnvelopeAttackTime parms{};	
	parms.InAttackTimeMsec = InAttackTimeMsec;

	ProcessEvent(fn, &parms);
}

bool USynthComponentMonoWaveTable::SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue");

	FSetCurveValue parms{};	
	parms.TableIndex = TableIndex;
	parms.KeyframeIndex = KeyframeIndex;
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool USynthComponentMonoWaveTable::SetCurveTangent(int32_t TableIndex, float InNewTangent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent");

	FSetCurveTangent parms{};	
	parms.TableIndex = TableIndex;
	parms.InNewTangent = InNewTangent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool USynthComponentMonoWaveTable::SetCurveInterpolationType(uint8_t InterpolationType, int32_t TableIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType");

	FSetCurveInterpolationType parms{};	
	parms.InterpolationType = InterpolationType;
	parms.TableIndex = TableIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain(float InSustainGain){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain");

	FSetAmpEnvelopeSustainGain parms{};	
	parms.InSustainGain = InSustainGain;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime");

	FSetAmpEnvelopeReleaseTime parms{};	
	parms.InReleaseTimeMsec = InReleaseTimeMsec;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetAmpEnvelopeInvert(bool bInInvert){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert");

	FSetAmpEnvelopeInvert parms{};	
	parms.bInInvert = bInInvert;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetAmpEnvelopeDepth(float InDepth){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth");

	FSetAmpEnvelopeDepth parms{};	
	parms.InDepth = InDepth;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime(float InDecayTimeMsec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime");

	FSetAmpEnvelopeDecayTime parms{};	
	parms.InDecayTimeMsec = InDecayTimeMsec;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert(bool bInBiasInvert){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert");

	FSetAmpEnvelopeBiasInvert parms{};	
	parms.bInBiasInvert = bInBiasInvert;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth(float InDepth){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth");

	FSetAmpEnvelopeBiasDepth parms{};	
	parms.InDepth = InDepth;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime(float InAttackTimeMsec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime");

	FSetAmpEnvelopeAttackTime parms{};	
	parms.InAttackTimeMsec = InAttackTimeMsec;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::RefreshWaveTable(int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable");

	FRefreshWaveTable parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::RefreshAllWaveTables(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables");

	FRefreshAllWaveTables parms{};	

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::NoteOn(float InMidiNote, float InVelocity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.NoteOn");

	FNoteOn parms{};	
	parms.InMidiNote = InMidiNote;
	parms.InVelocity = InVelocity;

	ProcessEvent(fn, &parms);
}

void USynthComponentMonoWaveTable::NoteOff(float InMidiNote){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.NoteOff");

	FNoteOff parms{};	
	parms.InMidiNote = InMidiNote;

	ProcessEvent(fn, &parms);
}

int32_t USynthComponentMonoWaveTable::GetNumTableEntries(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries");

	FGetNumTableEntries parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t USynthComponentMonoWaveTable::GetMaxTableIndex(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex");

	FGetMaxTableIndex parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<float> USynthComponentMonoWaveTable::GetKeyFrameValuesForTable(float TableIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable");

	FGetKeyFrameValuesForTable parms{};	
	parms.TableIndex = TableIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float USynthComponentMonoWaveTable::GetCurveTangent(int32_t TableIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent");

	FGetCurveTangent parms{};	
	parms.TableIndex = TableIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USynthSamplePlayer::SetSoundWave(struct USoundWave* InSoundWave){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.SetSoundWave");

	FSetSoundWave parms{};	
	parms.InSoundWave = InSoundWave;

	ProcessEvent(fn, &parms);
}

void USynthSamplePlayer::SetScrubTimeWidth(float InScrubTimeWidthSec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth");

	FSetScrubTimeWidth parms{};	
	parms.InScrubTimeWidthSec = InScrubTimeWidthSec;

	ProcessEvent(fn, &parms);
}

void USynthSamplePlayer::SetScrubMode(bool bScrubMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.SetScrubMode");

	FSetScrubMode parms{};	
	parms.bScrubMode = bScrubMode;

	ProcessEvent(fn, &parms);
}

void USynthSamplePlayer::SetPitch(float InPitch, float TimeSec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.SetPitch");

	FSetPitch parms{};	
	parms.InPitch = InPitch;
	parms.TimeSec = TimeSec;

	ProcessEvent(fn, &parms);
}

void USynthSamplePlayer::SeekToTime(float TimeSec, uint8_t SeekType, bool bWrap){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.SeekToTime");

	FSeekToTime parms{};	
	parms.TimeSec = TimeSec;
	parms.SeekType = SeekType;
	parms.bWrap = bWrap;

	ProcessEvent(fn, &parms);
}

bool USynthSamplePlayer::IsLoaded(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.IsLoaded");

	FIsLoaded parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float USynthSamplePlayer::GetSampleDuration(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.GetSampleDuration");

	FGetSampleDuration parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float USynthSamplePlayer::GetCurrentPlaybackProgressTime(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime");

	FGetCurrentPlaybackProgressTime parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float USynthSamplePlayer::GetCurrentPlaybackProgressPercent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent");

	FGetCurrentPlaybackProgressPercent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USynth2DSlider::SetValue(struct FVector2D InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.SetValue");

	FSetValue parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void USynth2DSlider::SetStepSize(float InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.SetStepSize");

	FSetStepSize parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void USynth2DSlider::SetSliderHandleColor(struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.SetSliderHandleColor");

	FSetSliderHandleColor parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void USynth2DSlider::SetLocked(bool InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.SetLocked");

	FSetLocked parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void USynth2DSlider::SetIndentHandle(bool InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.SetIndentHandle");

	FSetIndentHandle parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

struct FVector2D USynth2DSlider::GetValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.GetValue");

	FGetValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

