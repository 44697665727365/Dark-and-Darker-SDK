#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// DelegateFunction AudioSynesthesia.OnLatestOverallLoudnessResults__DelegateSignature
struct FOnLatestOverallLoudnessResults__DelegateSignature
{
	struct FLoudnessResults LatestOverallLoudnessResults;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AudioSynesthesia.OnPerChannelMeterResults__DelegateSignature
struct FOnPerChannelMeterResults__DelegateSignature
{
	int32_t ChannelIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FMeterResults> MeterResults;  // 0x8 (0x8)


}; 
 
 // ScriptStruct AudioSynesthesia.MeterResults
struct FMeterResults
{
	float TimeSeconds;  // 0x0 (0x0)
	float MeterValue;  // 0x4 (0x4)
	float PeakValue;  // 0x8 (0x8)
	int32_t NumSamplesClipping;  // 0xC (0xC)
	float ClippingValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct AudioSynesthesia.LoudnessResults
struct FLoudnessResults
{
	float Loudness;  // 0x0 (0x0)
	float NormalizedLoudness;  // 0x4 (0x4)
	float PerceptualEnergy;  // 0x8 (0x8)
	float TimeSeconds;  // 0xC (0xC)


}; 
 
 // ScriptStruct AudioSynesthesia.SynesthesiaSpectrumResults
struct FSynesthesiaSpectrumResults
{
	float TimeSeconds;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<float> SpectrumValues;  // 0x8 (0x8)


}; 
 
 // DelegateFunction AudioSynesthesia.OnLatestOverallMeterResults__DelegateSignature
struct FOnLatestOverallMeterResults__DelegateSignature
{
	struct FMeterResults LatestOverallMeterResults;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AudioSynesthesia.OnLatestPerChannelMeterResults__DelegateSignature
struct FOnLatestPerChannelMeterResults__DelegateSignature
{
	int32_t ChannelIndex;  // 0x0 (0x0)
	struct FMeterResults LatestMeterResults;  // 0x4 (0x4)


}; 
 
 // Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
struct FGetChannelConstantQAtTime
{
	float InSeconds;  // 0x0 (0x0)
	int32_t InChannel;  // 0x4 (0x4)
	struct TArray<float> OutConstantQ;  // 0x8 (0x8)


}; 
 
 // DelegateFunction AudioSynesthesia.OnLatestPerChannelLoudnessResults__DelegateSignature
struct FOnLatestPerChannelLoudnessResults__DelegateSignature
{
	int32_t ChannelIndex;  // 0x0 (0x0)
	struct FLoudnessResults LatestLoudnessResults;  // 0x4 (0x4)


}; 
 
 // DelegateFunction AudioSynesthesia.OnLatestSpectrumResults__DelegateSignature
struct FOnLatestSpectrumResults__DelegateSignature
{
	int32_t ChannelIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FSynesthesiaSpectrumResults LatestSpectrumResults;  // 0x8 (0x8)


}; 
 
 // DelegateFunction AudioSynesthesia.OnOverallLoudnessResults__DelegateSignature
struct FOnOverallLoudnessResults__DelegateSignature
{
	struct TArray<struct FLoudnessResults> OverallLoudnessResults;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AudioSynesthesia.OnOverallMeterResults__DelegateSignature
struct FOnOverallMeterResults__DelegateSignature
{
	struct TArray<struct FMeterResults> MeterResults;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AudioSynesthesia.OnPerChannelLoudnessResults__DelegateSignature
struct FOnPerChannelLoudnessResults__DelegateSignature
{
	int32_t ChannelIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FLoudnessResults> LoudnessResults;  // 0x8 (0x8)


}; 
 
 // Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
struct FGetNormalizedChannelConstantQAtTime
{
	float InSeconds;  // 0x0 (0x0)
	int32_t InChannel;  // 0x4 (0x4)
	struct TArray<float> OutConstantQ;  // 0x8 (0x8)


}; 
 
 // DelegateFunction AudioSynesthesia.OnSpectrumResults__DelegateSignature
struct FOnSpectrumResults__DelegateSignature
{
	int32_t ChannelIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FSynesthesiaSpectrumResults> SpectrumResults;  // 0x8 (0x8)


}; 
 
 // Function AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetCenterFrequencies
struct FGetCenterFrequencies
{
	float InSampleRate;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<float> OutCenterFrequencies;  // 0x8 (0x8)


}; 
 
 // Function AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetNumCenterFrequencies
struct FGetNumCenterFrequencies
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
struct FGetChannelLoudnessAtTime
{
	float InSeconds;  // 0x0 (0x0)
	int32_t InChannel;  // 0x4 (0x4)
	float OutLoudness;  // 0x8 (0x8)


}; 
 
 // Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
struct FGetLoudnessAtTime
{
	float InSeconds;  // 0x0 (0x0)
	float OutLoudness;  // 0x4 (0x4)


}; 
 
 // Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
struct FGetNormalizedChannelLoudnessAtTime
{
	float InSeconds;  // 0x0 (0x0)
	int32_t InChannel;  // 0x4 (0x4)
	float OutLoudness;  // 0x8 (0x8)


}; 
 
 // Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
struct FGetNormalizedLoudnessAtTime
{
	float InSeconds;  // 0x0 (0x0)
	float OutLoudness;  // 0x4 (0x4)


}; 
 
 // Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
struct FGetChannelOnsetsBetweenTimes
{
	float InStartSeconds;  // 0x0 (0x0)
	float InEndSeconds;  // 0x4 (0x4)
	int32_t InChannel;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct TArray<float> OutOnsetTimestamps;  // 0x10 (0x10)
	struct TArray<float> OutOnsetStrengths;  // 0x20 (0x20)


}; 
 
 // Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
struct FGetNormalizedChannelOnsetsBetweenTimes
{
	float InStartSeconds;  // 0x0 (0x0)
	float InEndSeconds;  // 0x4 (0x4)
	int32_t InChannel;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct TArray<float> OutOnsetTimestamps;  // 0x10 (0x10)
	struct TArray<float> OutOnsetStrengths;  // 0x20 (0x20)


}; 
 
 