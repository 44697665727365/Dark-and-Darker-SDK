#pragma once 
#include <AudioAnalyzer_Structs.h>
 
 
 
// Class AudioAnalyzer.AudioAnalyzerAssetBase
// Size: 0x28(Inherited: 0x28)
struct UAudioAnalyzerAssetBase : UObject
{


}; 
 
 


// Class AudioAnalyzer.AudioAnalyzerSettings
// Size: 0x28(Inherited: 0x28)
struct UAudioAnalyzerSettings : UAudioAnalyzerAssetBase
{


}; 
 
 


// Class AudioAnalyzer.AudioAnalyzer
// Size: 0x90(Inherited: 0x28)
struct UAudioAnalyzer : UObject
{
	struct UAudioBus* AudioBus;  // 0x28 (0x28)
	char pad_48[8];  // 0x30 (0x30)
	struct UAudioAnalyzerSubsystem* AudioAnalyzerSubsystem;  // 0x38 (0x38)
	char pad_64[80];  // 0x40 (0x40)


	void StopAnalyzing(struct UObject* WorldContextObject); // Function AudioAnalyzer.AudioAnalyzer.StopAnalyzing
	void StartAnalyzing(struct UObject* WorldContextObject, struct UAudioBus* AudioBusToAnalyze); // Function AudioAnalyzer.AudioAnalyzer.StartAnalyzing
}; 
 
 


// Class AudioAnalyzer.AudioAnalyzerNRTSettings
// Size: 0x28(Inherited: 0x28)
struct UAudioAnalyzerNRTSettings : UAudioAnalyzerAssetBase
{


}; 
 
 


// Class AudioAnalyzer.AudioAnalyzerNRT
// Size: 0x78(Inherited: 0x28)
struct UAudioAnalyzerNRT : UAudioAnalyzerAssetBase
{
	struct USoundWave* Sound;  // 0x28 (0x28)
	float DurationInSeconds;  // 0x30 (0x30)
	char pad_52[68];  // 0x34 (0x34)


}; 
 
 


// Class AudioAnalyzer.AudioAnalyzerSubsystem
// Size: 0x50(Inherited: 0x30)
struct UAudioAnalyzerSubsystem : UEngineSubsystem
{
	struct TArray<struct UAudioAnalyzer*> AudioAnalyzers;  // 0x30 (0x30)
	char pad_64[16];  // 0x40 (0x40)


}; 
 
 


