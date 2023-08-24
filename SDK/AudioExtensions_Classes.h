#pragma once 
#include <AudioExtensions_Structs.h>
 
 
 
// Class AudioExtensions.SoundfieldEncodingSettingsBase
// Size: 0x28(Inherited: 0x28)
struct USoundfieldEncodingSettingsBase : UObject
{


}; 
 
 


// Class AudioExtensions.SpatializationPluginSourceSettingsBase
// Size: 0x28(Inherited: 0x28)
struct USpatializationPluginSourceSettingsBase : UObject
{


}; 
 
 


// Class AudioExtensions.AudioParameterControllerInterface
// Size: 0x28(Inherited: 0x28)
struct UAudioParameterControllerInterface : UInterface
{


	void SetTriggerParameter(struct FName InName); // Function AudioExtensions.AudioParameterControllerInterface.SetTriggerParameter
	void SetStringParameter(struct FName InName, struct FString InValue); // Function AudioExtensions.AudioParameterControllerInterface.SetStringParameter
	void SetStringArrayParameter(struct FName InName, struct TArray<struct FString>& InValue); // Function AudioExtensions.AudioParameterControllerInterface.SetStringArrayParameter
	void SetParameters_Blueprint(struct TArray<struct FAudioParameter>& InParameters); // Function AudioExtensions.AudioParameterControllerInterface.SetParameters_Blueprint
	void SetObjectParameter(struct FName InName, struct UObject* InValue); // Function AudioExtensions.AudioParameterControllerInterface.SetObjectParameter
	void SetObjectArrayParameter(struct FName InName, struct TArray<struct UObject*>& InValue); // Function AudioExtensions.AudioParameterControllerInterface.SetObjectArrayParameter
	void SetIntParameter(struct FName InName, int32_t inInt); // Function AudioExtensions.AudioParameterControllerInterface.SetIntParameter
	void SetIntArrayParameter(struct FName InName, struct TArray<int32_t>& InValue); // Function AudioExtensions.AudioParameterControllerInterface.SetIntArrayParameter
	void SetFloatParameter(struct FName InName, float InFloat); // Function AudioExtensions.AudioParameterControllerInterface.SetFloatParameter
	void SetFloatArrayParameter(struct FName InName, struct TArray<float>& InValue); // Function AudioExtensions.AudioParameterControllerInterface.SetFloatArrayParameter
	void SetBoolParameter(struct FName InName, bool InBool); // Function AudioExtensions.AudioParameterControllerInterface.SetBoolParameter
	void SetBoolArrayParameter(struct FName InName, struct TArray<bool>& InValue); // Function AudioExtensions.AudioParameterControllerInterface.SetBoolArrayParameter
	void ResetParameters(); // Function AudioExtensions.AudioParameterControllerInterface.ResetParameters
}; 
 
 


// Class AudioExtensions.AudioEndpointSettingsBase
// Size: 0x28(Inherited: 0x28)
struct UAudioEndpointSettingsBase : UObject
{


}; 
 
 


// Class AudioExtensions.SourceDataOverridePluginSourceSettingsBase
// Size: 0x28(Inherited: 0x28)
struct USourceDataOverridePluginSourceSettingsBase : UObject
{


}; 
 
 


// Class AudioExtensions.OcclusionPluginSourceSettingsBase
// Size: 0x28(Inherited: 0x28)
struct UOcclusionPluginSourceSettingsBase : UObject
{


}; 
 
 


// Class AudioExtensions.ReverbPluginSourceSettingsBase
// Size: 0x28(Inherited: 0x28)
struct UReverbPluginSourceSettingsBase : UObject
{


}; 
 
 


// Class AudioExtensions.AudioCodecEncoderSettings
// Size: 0x30(Inherited: 0x28)
struct UAudioCodecEncoderSettings : UObject
{
	int32_t Version;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 


// Class AudioExtensions.DummyEndpointSettings
// Size: 0x28(Inherited: 0x28)
struct UDummyEndpointSettings : UAudioEndpointSettingsBase
{


}; 
 
 


// Class AudioExtensions.SoundModulatorBase
// Size: 0x30(Inherited: 0x28)
struct USoundModulatorBase : UObject
{
	char pad_40[8];  // 0x28 (0x28)


}; 
 
 


// Class AudioExtensions.SoundfieldEndpointSettingsBase
// Size: 0x28(Inherited: 0x28)
struct USoundfieldEndpointSettingsBase : UObject
{


}; 
 
 


// Class AudioExtensions.SoundfieldEffectSettingsBase
// Size: 0x28(Inherited: 0x28)
struct USoundfieldEffectSettingsBase : UObject
{


}; 
 
 


// Class AudioExtensions.SoundfieldEffectBase
// Size: 0x30(Inherited: 0x28)
struct USoundfieldEffectBase : UObject
{
	struct USoundfieldEffectSettingsBase* Settings;  // 0x28 (0x28)


}; 
 
 


// Class AudioExtensions.WaveformTransformationBase
// Size: 0x28(Inherited: 0x28)
struct UWaveformTransformationBase : UObject
{


}; 
 
 


// Class AudioExtensions.WaveformTransformationChain
// Size: 0x38(Inherited: 0x28)
struct UWaveformTransformationChain : UObject
{
	struct TArray<struct UWaveformTransformationBase*> Transformations;  // 0x28 (0x28)


}; 
 
 


// Class AudioExtensions.AudioPcmEncoderSettings
// Size: 0x38(Inherited: 0x30)
struct UAudioPcmEncoderSettings : UAudioCodecEncoderSettings
{
	uint8_t BitDepthConversion;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 


