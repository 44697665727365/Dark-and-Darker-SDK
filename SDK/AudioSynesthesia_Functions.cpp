#include "pch.h"
#include "SDK.h"

void UConstantQNRT::GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, struct TArray<float>& OutConstantQ){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime");

	FGetNormalizedChannelConstantQAtTime parms{};	
	parms.InSeconds = InSeconds;
	parms.InChannel = InChannel;
	parms.OutConstantQ = OutConstantQ;

	ProcessEvent(fn, &parms);
}

void UConstantQNRT::GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, struct TArray<float>& OutConstantQ){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime");

	FGetChannelConstantQAtTime parms{};	
	parms.InSeconds = InSeconds;
	parms.InChannel = InChannel;
	parms.OutConstantQ = OutConstantQ;

	ProcessEvent(fn, &parms);
}

void UOnsetNRT::GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, struct TArray<float>& OutOnsetTimestamps, struct TArray<float>& OutOnsetStrengths){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes");

	FGetNormalizedChannelOnsetsBetweenTimes parms{};	
	parms.InStartSeconds = InStartSeconds;
	parms.InEndSeconds = InEndSeconds;
	parms.InChannel = InChannel;
	parms.OutOnsetTimestamps = OutOnsetTimestamps;
	parms.OutOnsetStrengths = OutOnsetStrengths;

	ProcessEvent(fn, &parms);
}

void UOnsetNRT::GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, struct TArray<float>& OutOnsetTimestamps, struct TArray<float>& OutOnsetStrengths){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes");

	FGetChannelOnsetsBetweenTimes parms{};	
	parms.InStartSeconds = InStartSeconds;
	parms.InEndSeconds = InEndSeconds;
	parms.InChannel = InChannel;
	parms.OutOnsetTimestamps = OutOnsetTimestamps;
	parms.OutOnsetStrengths = OutOnsetStrengths;

	ProcessEvent(fn, &parms);
}

int32_t USynesthesiaSpectrumAnalyzer::GetNumCenterFrequencies(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetNumCenterFrequencies");

	FGetNumCenterFrequencies parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USynesthesiaSpectrumAnalyzer::GetCenterFrequencies(float InSampleRate, struct TArray<float>& OutCenterFrequencies){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetCenterFrequencies");

	FGetCenterFrequencies parms{};	
	parms.InSampleRate = InSampleRate;
	parms.OutCenterFrequencies = OutCenterFrequencies;

	ProcessEvent(fn, &parms);
}

void ULoudnessNRT::GetNormalizedLoudnessAtTime(float InSeconds, float& OutLoudness){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime");

	FGetNormalizedLoudnessAtTime parms{};	
	parms.InSeconds = InSeconds;
	parms.OutLoudness = OutLoudness;

	ProcessEvent(fn, &parms);
}

void ULoudnessNRT::GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime");

	FGetNormalizedChannelLoudnessAtTime parms{};	
	parms.InSeconds = InSeconds;
	parms.InChannel = InChannel;
	parms.OutLoudness = OutLoudness;

	ProcessEvent(fn, &parms);
}

void ULoudnessNRT::GetLoudnessAtTime(float InSeconds, float& OutLoudness){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime");

	FGetLoudnessAtTime parms{};	
	parms.InSeconds = InSeconds;
	parms.OutLoudness = OutLoudness;

	ProcessEvent(fn, &parms);
}

void ULoudnessNRT::GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime");

	FGetChannelLoudnessAtTime parms{};	
	parms.InSeconds = InSeconds;
	parms.InChannel = InChannel;
	parms.OutLoudness = OutLoudness;

	ProcessEvent(fn, &parms);
}

