#pragma once 
#include <AudioSynesthesia_Structs.h>
 
 
 
// Class AudioSynesthesia.AudioSynesthesiaNRTSettings
// Size: 0x28(Inherited: 0x28)
struct UAudioSynesthesiaNRTSettings : UAudioAnalyzerNRTSettings
{


}; 
 
 


// Class AudioSynesthesia.AudioSynesthesiaSettings
// Size: 0x28(Inherited: 0x28)
struct UAudioSynesthesiaSettings : UAudioAnalyzerSettings
{


}; 
 
 


// Class AudioSynesthesia.ConstantQNRT
// Size: 0x80(Inherited: 0x78)
struct UConstantQNRT : UAudioSynesthesiaNRT
{
	struct UConstantQNRTSettings* Settings;  // 0x78 (0x78)


	void GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, struct TArray<float>& OutConstantQ); // Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
	void GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, struct TArray<float>& OutConstantQ); // Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
}; 
 
 


// Class AudioSynesthesia.OnsetNRT
// Size: 0x80(Inherited: 0x78)
struct UOnsetNRT : UAudioSynesthesiaNRT
{
	struct UOnsetNRTSettings* Settings;  // 0x78 (0x78)


	void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, struct TArray<float>& OutOnsetTimestamps, struct TArray<float>& OutOnsetStrengths); // Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
	void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, struct TArray<float>& OutOnsetTimestamps, struct TArray<float>& OutOnsetStrengths); // Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
}; 
 
 


// Class AudioSynesthesia.SynesthesiaSpectrumAnalysisSettings
// Size: 0x30(Inherited: 0x28)
struct USynesthesiaSpectrumAnalysisSettings : UAudioSynesthesiaSettings
{
	float AnalysisPeriod;  // 0x28 (0x28)
	uint8_t FFTSize;  // 0x2C (0x2C)
	uint8_t SpectrumType;  // 0x2D (0x2D)
	uint8_t WindowType;  // 0x2E (0x2E)
	char pad_47_1 : 7;  // 0x2F (0x2F)
	bool bDownmixToMono : 1;  // 0x2F (0x2F)


}; 
 
 


// Class AudioSynesthesia.LoudnessAnalyzer
// Size: 0xD8(Inherited: 0x90)
struct ULoudnessAnalyzer : UAudioAnalyzer
{
	struct ULoudnessSettings* Settings;  // 0x90 (0x90)
	struct FMulticastInlineDelegate OnOverallLoudnessResults;  // 0x98 (0x98)
	struct FMulticastInlineDelegate OnPerChannelLoudnessResults;  // 0xA8 (0xA8)
	struct FMulticastInlineDelegate OnLatestOverallLoudnessResults;  // 0xB8 (0xB8)
	struct FMulticastInlineDelegate OnLatestPerChannelLoudnessResults;  // 0xC8 (0xC8)


}; 
 
 


// Class AudioSynesthesia.LoudnessSettings
// Size: 0x40(Inherited: 0x28)
struct ULoudnessSettings : UAudioSynesthesiaSettings
{
	float AnalysisPeriod;  // 0x28 (0x28)
	float MinimumFrequency;  // 0x2C (0x2C)
	float MaximumFrequency;  // 0x30 (0x30)
	uint8_t CurveType;  // 0x34 (0x34)
	char pad_53[3];  // 0x35 (0x35)
	float NoiseFloorDb;  // 0x38 (0x38)
	float ExpectedMaxLoudness;  // 0x3C (0x3C)


}; 
 
 


// Class AudioSynesthesia.ConstantQNRTSettings
// Size: 0x48(Inherited: 0x28)
struct UConstantQNRTSettings : UAudioSynesthesiaNRTSettings
{
	float StartingFrequency;  // 0x28 (0x28)
	int32_t NumBands;  // 0x2C (0x2C)
	float NumBandsPerOctave;  // 0x30 (0x30)
	float AnalysisPeriod;  // 0x34 (0x34)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bDownmixToMono : 1;  // 0x38 (0x38)
	uint8_t FFTSize;  // 0x39 (0x39)
	uint8_t WindowType;  // 0x3A (0x3A)
	uint8_t SpectrumType;  // 0x3B (0x3B)
	float BandWidthStretch;  // 0x3C (0x3C)
	uint8_t CQTNormalization;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	float NoiseFloorDb;  // 0x44 (0x44)


}; 
 
 


// Class AudioSynesthesia.SynesthesiaSpectrumAnalyzer
// Size: 0xE8(Inherited: 0x90)
struct USynesthesiaSpectrumAnalyzer : UAudioAnalyzer
{
	struct USynesthesiaSpectrumAnalysisSettings* Settings;  // 0x90 (0x90)
	struct FMulticastInlineDelegate OnSpectrumResults;  // 0x98 (0x98)
	char pad_168[24];  // 0xA8 (0xA8)
	struct FMulticastInlineDelegate OnLatestSpectrumResults;  // 0xC0 (0xC0)
	char pad_208[24];  // 0xD0 (0xD0)


	int32_t GetNumCenterFrequencies(); // Function AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetNumCenterFrequencies
	void GetCenterFrequencies(float InSampleRate, struct TArray<float>& OutCenterFrequencies); // Function AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetCenterFrequencies
}; 
 
 


// Class AudioSynesthesia.AudioSynesthesiaNRT
// Size: 0x78(Inherited: 0x78)
struct UAudioSynesthesiaNRT : UAudioAnalyzerNRT
{


}; 
 
 


// Class AudioSynesthesia.LoudnessNRTSettings
// Size: 0x40(Inherited: 0x28)
struct ULoudnessNRTSettings : UAudioSynesthesiaNRTSettings
{
	float AnalysisPeriod;  // 0x28 (0x28)
	float MinimumFrequency;  // 0x2C (0x2C)
	float MaximumFrequency;  // 0x30 (0x30)
	uint8_t CurveType;  // 0x34 (0x34)
	char pad_53[3];  // 0x35 (0x35)
	float NoiseFloorDb;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 


// Class AudioSynesthesia.LoudnessNRT
// Size: 0x80(Inherited: 0x78)
struct ULoudnessNRT : UAudioSynesthesiaNRT
{
	struct ULoudnessNRTSettings* Settings;  // 0x78 (0x78)


	void GetNormalizedLoudnessAtTime(float InSeconds, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
	void GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
	void GetLoudnessAtTime(float InSeconds, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
	void GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
}; 
 
 


// Class AudioSynesthesia.MeterSettings
// Size: 0x40(Inherited: 0x28)
struct UMeterSettings : UAudioSynesthesiaSettings
{
	float AnalysisPeriod;  // 0x28 (0x28)
	uint8_t PeakMode;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)
	int32_t MeterAttackTime;  // 0x30 (0x30)
	int32_t MeterReleaseTime;  // 0x34 (0x34)
	int32_t PeakHoldTime;  // 0x38 (0x38)
	float ClippingThreshold;  // 0x3C (0x3C)


}; 
 
 


// Class AudioSynesthesia.MeterAnalyzer
// Size: 0x138(Inherited: 0x90)
struct UMeterAnalyzer : UAudioAnalyzer
{
	struct UMeterSettings* Settings;  // 0x90 (0x90)
	struct FMulticastInlineDelegate OnOverallMeterResults;  // 0x98 (0x98)
	char pad_168[24];  // 0xA8 (0xA8)
	struct FMulticastInlineDelegate OnPerChannelMeterResults;  // 0xC0 (0xC0)
	char pad_208[24];  // 0xD0 (0xD0)
	struct FMulticastInlineDelegate OnLatestOverallMeterResults;  // 0xE8 (0xE8)
	char pad_248[24];  // 0xF8 (0xF8)
	struct FMulticastInlineDelegate OnLatestPerChannelMeterResults;  // 0x110 (0x110)
	char pad_288[24];  // 0x120 (0x120)


}; 
 
 


// Class AudioSynesthesia.OnsetNRTSettings
// Size: 0x40(Inherited: 0x28)
struct UOnsetNRTSettings : UAudioSynesthesiaNRTSettings
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bDownmixToMono : 1;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	float GranularityInSeconds;  // 0x2C (0x2C)
	float Sensitivity;  // 0x30 (0x30)
	float MinimumFrequency;  // 0x34 (0x34)
	float MaximumFrequency;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 


