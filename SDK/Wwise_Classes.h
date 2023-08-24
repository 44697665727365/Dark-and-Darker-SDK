#pragma once 
#include <Wwise_Structs.h>
 
 
 
// Class Wwise.WwiseAudioLinkComponent
// Size: 0x4C0(Inherited: 0x4A0)
struct UWwiseAudioLinkComponent : UAkComponent
{
	struct UWwiseAudioLinkSettings* Settings;  // 0x4A0 (0x4A0)
	struct USoundBase* Sound;  // 0x4A8 (0x4A8)
	struct UAudioComponent* AudioComponent;  // 0x4B0 (0x4B0)
	char pad_1208[8];  // 0x4B8 (0x4B8)


}; 
 
 


// Class Wwise.WwiseAudioLinkSettings
// Size: 0x90(Inherited: 0x38)
struct UWwiseAudioLinkSettings : UAudioLinkSettingsAbstract
{
	struct TSoftObjectPtr<UAkAudioEvent> StartEvent;  // 0x38 (0x38)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool bShouldClearBufferOnReceipt : 1;  // 0x68 (0x68)
	char pad_105[3];  // 0x69 (0x69)
	float ProducerToConsumerBufferRatio;  // 0x6C (0x6C)
	float InitialSilenceFillRatio;  // 0x70 (0x70)
	char pad_116[20];  // 0x74 (0x74)
	struct UAkAudioEvent* StartEventResolved;  // 0x88 (0x88)


}; 
 
 


