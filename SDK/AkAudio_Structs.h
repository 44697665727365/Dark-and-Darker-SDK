#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct AkAudio.AkMainOutputSettings
struct FAkMainOutputSettings
{
	struct FString AudioDeviceShareSet;  // 0x0 (0x0)
	uint32_t DeviceID;  // 0x10 (0x10)
	uint8_t PanningRule;  // 0x14 (0x14)
	uint8_t ChannelConfigType;  // 0x18 (0x18)
	uint32_t ChannelMask;  // 0x1C (0x1C)
	uint32_t NumberOfChannels;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
struct FGetPitchBend
{
	struct FAkMidiPitchBend AsPitchBend;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // DelegateFunction AkAudio.AkOnCheckBoxComponentStateChanged__DelegateSignature
struct FAkOnCheckBoxComponentStateChanged__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsChecked : 1;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AkAudio.OnEventCallback__DelegateSignature
struct FOnEventCallback__DelegateSignature
{
	struct FAkWaapiSubscriptionId SubscriptionId;  // 0x0 (0x0)
	struct FAKWaapiJsonObject WaapiJsonObject;  // 0x8 (0x8)


}; 
 
 // Function AkAudio.AkSlider.GetValue
struct FGetValue
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkGameplayStatics.GetSpeakerAngles
struct FGetSpeakerAngles
{
	struct TArray<float> SpeakerAngles;  // 0x0 (0x0)
	float HeightAngle;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FString DeviceShareSet;  // 0x18 (0x18)


}; 
 
 // DelegateFunction AkAudio.AkOnFloatValueChangedEvent__DelegateSignature
struct FAkOnFloatValueChangedEvent__DelegateSignature
{
	float Value;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AkAudio.AKWaapiJsonObject
struct FAKWaapiJsonObject
{
	char pad_0[16];  // 0x0 (0x0)


}; 
 
 // DelegateFunction AkAudio.OnAkPostEventCallback__DelegateSignature
struct FOnAkPostEventCallback__DelegateSignature
{
	uint8_t CallbackType;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct UAkCallbackInfo* CallbackInfo;  // 0x8 (0x8)


}; 
 
 // DelegateFunction AkAudio.OnAkBankCallback__DelegateSignature
struct FOnAkBankCallback__DelegateSignature
{
	uint8_t Result;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AkAudio.AkHololensAdvancedInitializationSettings
// Size: 0x3C(Inherited: 0x38)
struct FAkHololensAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool UseHeadMountedDisplayAudioDevice : 1;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)


}; 
 
 // ScriptStruct AkAudio.AkWaapiSubscriptionId
struct FAkWaapiSubscriptionId
{
	char pad_0[8];  // 0x0 (0x0)


}; 
 
 // DelegateFunction AkAudio.OnBoolPropertyDropDetected__DelegateSignature
struct FOnBoolPropertyDropDetected__DelegateSignature
{
	struct FString PropertyDropped;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AkAudio.AkExternalSourceInfo
struct FAkExternalSourceInfo
{
	struct FString ExternalSrcName;  // 0x0 (0x0)
	uint8_t CodecID;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FString Filename;  // 0x18 (0x18)
	struct UAkExternalMediaAsset* ExternalSourceAsset;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool IsStreamed : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // ScriptStruct AkAudio.AkWaapiFieldNames
struct FAkWaapiFieldNames
{
	struct FString FieldName;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AkAudio.AkAudioSession
struct FAkAudioSession
{
	uint8_t AudioSessionCategory;  // 0x0 (0x0)
	uint32_t AudioSessionCategoryOptions;  // 0x4 (0x4)
	uint8_t AudioSessionMode;  // 0x8 (0x8)


}; 
 
 // DelegateFunction AkAudio.OnItemBoolPropertyDragDetected__DelegateSignature
struct FOnItemBoolPropertyDragDetected__DelegateSignature
{
	struct FString PropertyDragged;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AkAudio.AkCommunicationSettingsWithCommSelection
// Size: 0x20(Inherited: 0x18)
struct FAkCommunicationSettingsWithCommSelection : FAkCommunicationSettings
{
	uint8_t CommunicationSystem;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct AkAudio.AkMidiGeneric
// Size: 0x4(Inherited: 0x2)
struct FAkMidiGeneric : FAkMidiEventBase
{
	char Param1;  // 0x2 (0x2)
	char Param2;  // 0x3 (0x3)


}; 
 
 // DelegateFunction AkAudio.OnItemBoolPropertySelectionChanged__DelegateSignature
struct FOnItemBoolPropertySelectionChanged__DelegateSignature
{
	struct FString PropertySelected;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkRoomComponent.GetPrimitiveParent
struct FGetPrimitiveParent
{
	struct UPrimitiveComponent* ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AkAudio.AkWindowsAdvancedInitializationSettings
// Size: 0x40(Inherited: 0x38)
struct FAkWindowsAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool UseHeadMountedDisplayAudioDevice : 1;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)
	uint32_t MaxSystemAudioObjects;  // 0x3C (0x3C)


}; 
 
 // DelegateFunction AkAudio.OnItemDragDetected__DelegateSignature
struct FOnItemDragDetected__DelegateSignature
{
	struct FGuid ItemDraggedID;  // 0x0 (0x0)
	struct FString ItemDraggedName;  // 0x10 (0x10)


}; 
 
 // ScriptStruct AkAudio.AkOutputSettings
struct FAkOutputSettings
{
	struct FString AudioDeviceShareSetName;  // 0x0 (0x0)
	int32_t IdDevice;  // 0x10 (0x10)
	uint8_t PanRule;  // 0x14 (0x14)
	uint8_t ChannelConfig;  // 0x15 (0x15)
	char pad_22[2];  // 0x16 (0x16)


}; 
 
 // DelegateFunction AkAudio.OnItemDropDetected__DelegateSignature
struct FOnItemDropDetected__DelegateSignature
{
	struct FGuid ItemDroppedID;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AkAudio.AkWaapiUri
struct FAkWaapiUri
{
	struct FString Uri;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AkAudio.OnItemPropertyDragDetected__DelegateSignature
struct FOnItemPropertyDragDetected__DelegateSignature
{
	struct FString PropertyDragged;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkGameplayStatics.PostEvent
struct FPostEvent
{
	struct UAkAudioEvent* AkEvent;  // 0x0 (0x0)
	struct AActor* Actor;  // 0x8 (0x8)
	int32_t CallbackMask;  // 0x10 (0x10)
	struct FDelegate PostEventCallback;  // 0x14 (0x14)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool bStopWhenAttachedToDestroyed : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	struct FString EventName;  // 0x28 (0x28)
	int32_t ReturnValue;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 // Function AkAudio.AkCheckBox.GetCheckedState
struct FGetCheckedState
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AkAudio.OnItemPropertySelectionChanged__DelegateSignature
struct FOnItemPropertySelectionChanged__DelegateSignature
{
	struct FString PropertySelected;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AkAudio.AkWwiseObjectDetails
struct FAkWwiseObjectDetails
{
	struct FString ItemName;  // 0x0 (0x0)
	struct FString ItemPath;  // 0x10 (0x10)
	struct FString ItemId;  // 0x20 (0x20)


}; 
 
 // Function AkAudio.AkComponent.SetAttenuationScalingFactor
struct FSetAttenuationScalingFactor
{
	float Value;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AkAudio.AkMidiNoteAftertouch
// Size: 0x4(Inherited: 0x2)
struct FAkMidiNoteAftertouch : FAkMidiEventBase
{
	char Note;  // 0x2 (0x2)
	char Value;  // 0x3 (0x3)


}; 
 
 // Function AkAudio.AkGameplayStatics.StopActor
struct FStopActor
{
	struct AActor* Actor;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AkAudio.OnItemSelectionChanged__DelegateSignature
struct FOnItemSelectionChanged__DelegateSignature
{
	struct FGuid ItemSelectedID;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AkAudio.AkBoolPropertyToControl
struct FAkBoolPropertyToControl
{
	struct FString ItemProperty;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AkAudio.AkAdvancedInitializationSettings
struct FAkAdvancedInitializationSettings
{
	uint32_t IO_MemorySize;  // 0x0 (0x0)
	uint32_t IO_Granularity;  // 0x4 (0x4)
	float TargetAutoStreamBufferLength;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool UseStreamCache : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	uint32_t MaximumPinnedBytesInCache;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool EnableGameSyncPreparation : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	uint32_t ContinuousPlaybackLookAhead;  // 0x18 (0x18)
	uint32_t MonitorQueuePoolSize;  // 0x1C (0x1C)
	uint32_t MaximumHardwareTimeoutMs;  // 0x20 (0x20)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool DebugOutOfRangeCheckEnabled : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	float DebugOutOfRangeLimit;  // 0x28 (0x28)


}; 
 
 // ScriptStruct AkAudio.AkSpatialAudioSettings
struct FAkSpatialAudioSettings
{
	uint32_t MaxSoundPropagationDepth;  // 0x0 (0x0)
	float MovementThreshold;  // 0x4 (0x4)
	uint32_t NumberOfPrimaryRays;  // 0x8 (0x8)
	uint32_t ReflectionOrder;  // 0xC (0xC)
	uint32_t DiffractionOrder;  // 0x10 (0x10)
	uint32_t DiffractionOnReflectionsOrder;  // 0x14 (0x14)
	float MaximumPathLength;  // 0x18 (0x18)
	float CPULimitPercentage;  // 0x1C (0x1C)
	uint32_t LoadBalancingSpread;  // 0x20 (0x20)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool EnableGeometricDiffractionAndTransmission : 1;  // 0x24 (0x24)
	char pad_37_1 : 7;  // 0x25 (0x25)
	bool CalcEmitterVirtualPosition : 1;  // 0x25 (0x25)
	char pad_38[2];  // 0x26 (0x26)


}; 
 
 // DelegateFunction AkAudio.OnPropertyDropDetected__DelegateSignature
struct FOnPropertyDropDetected__DelegateSignature
{
	struct FString PropertyDropped;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AkAudio.OnSetCurrentAudioCultureCallback__DelegateSignature
struct FOnSetCurrentAudioCultureCallback__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Succeeded : 1;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AkAudio.OnWwiseItemDropDetected__DelegateSignature
struct FOnWwiseItemDropDetected__DelegateSignature
{
	struct FGuid ItemDroppedID;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AkAudio.AkSegmentInfo
struct FAkSegmentInfo
{
	int32_t CurrentPosition;  // 0x0 (0x0)
	int32_t PreEntryDuration;  // 0x4 (0x4)
	int32_t ActiveDuration;  // 0x8 (0x8)
	int32_t PostExitDuration;  // 0xC (0xC)
	int32_t RemainingLookAheadTime;  // 0x10 (0x10)
	float BeatDuration;  // 0x14 (0x14)
	float BarDuration;  // 0x18 (0x18)
	float GridDuration;  // 0x1C (0x1C)
	float GridOffset;  // 0x20 (0x20)


}; 
 
 // DelegateFunction AkAudio.PostEventAsyncOutputPin__DelegateSignature
struct FPostEventAsyncOutputPin__DelegateSignature
{
	int32_t PlayingID;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkGameplayStatics.SetSpeakerAngles
struct FSetSpeakerAngles
{
	struct TArray<float> SpeakerAngles;  // 0x0 (0x0)
	float HeightAngle;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FString DeviceShareSet;  // 0x18 (0x18)


}; 
 
 // DelegateFunction AkAudio.PostEventAtLocationAsyncOutputPin__DelegateSignature
struct FPostEventAtLocationAsyncOutputPin__DelegateSignature
{
	int32_t PlayingID;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AkAudio.AkGeometrySurfaceOverride
struct FAkGeometrySurfaceOverride
{
	struct UAkAcousticTexture* AcousticTexture;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bEnableOcclusionOverride : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	float OcclusionValue;  // 0xC (0xC)
	float SurfaceArea;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
// Size: 0x38(Inherited: 0x2C)
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : FAkAdvancedInitializationSettings
{
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool EnableMultiCoreRendering : 1;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)
	uint32_t MaxNumJobWorkers;  // 0x30 (0x30)
	uint32_t JobWorkerMaxExecutionTimeUSec;  // 0x34 (0x34)


}; 
 
 // ScriptStruct AkAudio.AkAndroidAdvancedInitializationSettings
// Size: 0x40(Inherited: 0x38)
struct FAkAndroidAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	uint32_t AudioAPI;  // 0x38 (0x38)
	char pad_60_1 : 7;  // 0x3C (0x3C)
	bool RoundFrameSizeToHardwareSize : 1;  // 0x3C (0x3C)
	char pad_61[3];  // 0x3D (0x3D)


}; 
 
 // ScriptStruct AkAudio.AkCommunicationSettingsWithSystemInitialization
// Size: 0x20(Inherited: 0x18)
struct FAkCommunicationSettingsWithSystemInitialization : FAkCommunicationSettings
{
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool InitializeSystemComms : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct AkAudio.AkChannelMask
struct FAkChannelMask
{
	int32_t ChannelMask;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AkAudio.AkWwiseItemToControl
struct FAkWwiseItemToControl
{
	struct FAkWwiseObjectDetails ItemPicked;  // 0x0 (0x0)
	struct FString ItemPath;  // 0x30 (0x30)


}; 
 
 // ScriptStruct AkAudio.AkMidiEventBase
struct FAkMidiEventBase
{
	uint8_t Type;  // 0x0 (0x0)
	char Chan;  // 0x1 (0x1)


}; 
 
 // ScriptStruct AkAudio.AkReverbDescriptor
struct FAkReverbDescriptor
{
	char pad_0[24];  // 0x0 (0x0)
	struct UPrimitiveComponent* Primitive;  // 0x18 (0x18)
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct AkAudio.AkMidiNoteOnOff
// Size: 0x4(Inherited: 0x2)
struct FAkMidiNoteOnOff : FAkMidiEventBase
{
	char Note;  // 0x2 (0x2)
	char Velocity;  // 0x3 (0x3)


}; 
 
 // ScriptStruct AkAudio.AkMidiCc
// Size: 0x4(Inherited: 0x2)
struct FAkMidiCc : FAkMidiEventBase
{
	uint8_t Cc;  // 0x2 (0x2)
	char Value;  // 0x3 (0x3)


}; 
 
 // Function AkAudio.AkGameplayStatics.SetMultiplePositions
struct FSetMultiplePositions
{
	struct UAkComponent* GameObjectAkComponent;  // 0x0 (0x0)
	struct TArray<struct FTransform> Positions;  // 0x8 (0x8)
	uint8_t MultiPositionType;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
// Size: 0x28(Inherited: 0x20)
struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate
{
	struct UMovieSceneAkAudioEventSection* Section;  // 0x20 (0x20)


}; 
 
 // ScriptStruct AkAudio.AkMidiPitchBend
// Size: 0x8(Inherited: 0x2)
struct FAkMidiPitchBend : FAkMidiEventBase
{
	char ValueLsb;  // 0x2 (0x2)
	char ValueMsb;  // 0x3 (0x3)
	int32_t FullValue;  // 0x4 (0x4)


}; 
 
 // ScriptStruct AkAudio.AkMidiChannelAftertouch
// Size: 0x3(Inherited: 0x2)
struct FAkMidiChannelAftertouch : FAkMidiEventBase
{
	char Value;  // 0x2 (0x2)


}; 
 
 // ScriptStruct AkAudio.AkPropertyToControl
struct FAkPropertyToControl
{
	struct FString ItemProperty;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID
struct FExecuteActionOnPlayingID
{
	uint8_t ActionType;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t PlayingID;  // 0x4 (0x4)
	int32_t TransitionDuration;  // 0x8 (0x8)
	uint8_t FadeCurve;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // ScriptStruct AkAudio.AkMidiProgramChange
// Size: 0x3(Inherited: 0x2)
struct FAkMidiProgramChange : FAkMidiEventBase
{
	char ProgramNum;  // 0x2 (0x2)


}; 
 
 // ScriptStruct AkAudio.AkAcousticSurface
struct FAkAcousticSurface
{
	uint32_t Texture;  // 0x0 (0x0)
	float Occlusion;  // 0x4 (0x4)
	struct FString Name;  // 0x8 (0x8)


}; 
 
 // ScriptStruct AkAudio.AkCommonInitializationSettings
struct FAkCommonInitializationSettings
{
	uint32_t MaximumNumberOfMemoryPools;  // 0x0 (0x0)
	uint32_t MaximumNumberOfPositioningPaths;  // 0x4 (0x4)
	uint32_t CommandQueueSize;  // 0x8 (0x8)
	uint32_t SamplesPerFrame;  // 0xC (0xC)
	struct FAkMainOutputSettings MainOutputSettings;  // 0x10 (0x10)
	float StreamingLookAheadRatio;  // 0x38 (0x38)
	uint16_t NumberOfRefillsInVoice;  // 0x3C (0x3C)
	char pad_62[2];  // 0x3E (0x3E)
	struct FAkSpatialAudioSettings SpatialAudioSettings;  // 0x40 (0x40)


}; 
 
 // ScriptStruct AkAudio.AkTriangle
struct FAkTriangle
{
	uint16_t Point0;  // 0x0 (0x0)
	uint16_t Point1;  // 0x2 (0x2)
	uint16_t Point2;  // 0x4 (0x4)
	uint16_t Surface;  // 0x6 (0x6)


}; 
 
 // Function AkAudio.AkComponent.SetEnableSpotReflectors
struct FSetEnableSpotReflectors
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool in_enable : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AkAudio.AkGeometryData
struct FAkGeometryData
{
	struct TArray<struct FVector> Vertices;  // 0x0 (0x0)
	struct TArray<struct FAkAcousticSurface> Surfaces;  // 0x10 (0x10)
	struct TArray<struct FAkTriangle> Triangles;  // 0x20 (0x20)
	struct TArray<struct UPhysicalMaterial*> ToOverrideAcousticTexture;  // 0x30 (0x30)
	struct TArray<struct UPhysicalMaterial*> ToOverrideOcclusion;  // 0x40 (0x40)


}; 
 
 // ScriptStruct AkAudio.AkCommunicationSettings
struct FAkCommunicationSettings
{
	uint32_t PoolSize;  // 0x0 (0x0)
	uint16_t DiscoveryBroadcastPort;  // 0x4 (0x4)
	uint16_t CommandPort;  // 0x6 (0x6)
	struct FString NetworkName;  // 0x8 (0x8)


}; 
 
 // ScriptStruct AkAudio.AkCommonInitializationSettingsWithSampleRate
// Size: 0x70(Inherited: 0x68)
struct FAkCommonInitializationSettingsWithSampleRate : FAkCommonInitializationSettings
{
	uint32_t SampleRate;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)


}; 
 
 // ScriptStruct AkAudio.AkGeometrySurfacePropertiesToMap
struct FAkGeometrySurfacePropertiesToMap
{
	struct TSoftObjectPtr<UAkAcousticTexture> AcousticTexture;  // 0x0 (0x0)
	float OcclusionValue;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // ScriptStruct AkAudio.AkAcousticTextureParams
struct FAkAcousticTextureParams
{
	struct FVector4 AbsorptionValues;  // 0x0 (0x0)
	char pad_32[16];  // 0x20 (0x20)


}; 
 
 // Function AkAudio.AkGameplayStatics.PostEventAtLocation
struct FPostEventAtLocation
{
	struct UAkAudioEvent* AkEvent;  // 0x0 (0x0)
	struct FVector Location;  // 0x8 (0x8)
	struct FRotator Orientation;  // 0x20 (0x20)
	struct FString EventName;  // 0x38 (0x38)
	struct UObject* WorldContextObject;  // 0x48 (0x48)
	int32_t ReturnValue;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)


}; 
 
 // Function AkAudio.AkGameplayStatics.IsGame
struct FIsGame
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function AkAudio.AkGameObject.PostAssociatedAkEvent
struct FPostAssociatedAkEvent
{
	int32_t CallbackMask;  // 0x0 (0x0)
	struct FDelegate PostEventCallback;  // 0x4 (0x4)
	int32_t ReturnValue;  // 0x14 (0x14)


}; 
 
 // ScriptStruct AkAudio.AkSurfaceEdgeVerts
struct FAkSurfaceEdgeVerts
{
	char pad_0[48];  // 0x0 (0x0)


}; 
 
 // ScriptStruct AkAudio.AkSurfaceEdgeInfo
struct FAkSurfaceEdgeInfo
{
	char pad_0[80];  // 0x0 (0x0)


}; 
 
 // ScriptStruct AkAudio.AkSurfacePoly
struct FAkSurfacePoly
{
	struct UAkAcousticTexture* Texture;  // 0x0 (0x0)
	float Occlusion;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool EnableSurface : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	float SurfaceArea;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function AkAudio.AkSlider.GetAkSliderItemProperty
struct FGetAkSliderItemProperty
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
// Size: 0x28(Inherited: 0x20)
struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate
{
	struct UMovieSceneAkAudioRTPCSection* Section;  // 0x20 (0x20)


}; 
 
 // Function AkAudio.AkWaapiJsonManager.GetNumberField
struct FGetNumberField
{
	struct FAkWaapiFieldNames FieldName;  // 0x0 (0x0)
	struct FAKWaapiJsonObject Target;  // 0x10 (0x10)
	float ReturnValue;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
struct FConv_FAkWaapiSubscriptionIdToString
{
	struct FAkWaapiSubscriptionId INAkWaapiSubscriptionId;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AkAudio.AkAudioEvent.ExecuteAction
struct FExecuteAction
{
	uint8_t ActionType;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct AActor* Actor;  // 0x8 (0x8)
	int32_t PlayingID;  // 0x10 (0x10)
	int32_t TransitionDuration;  // 0x14 (0x14)
	uint8_t FadeCurve;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	int32_t ReturnValue;  // 0x1C (0x1C)


}; 
 
 // ScriptStruct AkAudio.MovieSceneTangentDataSerializationHelper
struct FMovieSceneTangentDataSerializationHelper
{
	float ArriveTangent;  // 0x0 (0x0)
	float LeaveTangent;  // 0x4 (0x4)
	enum class ERichCurveTangentWeightMode TangentWeightMode;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	float ArriveTangentWeight;  // 0xC (0xC)
	float LeaveTangentWeight;  // 0x10 (0x10)


}; 
 
 // ScriptStruct AkAudio.MovieSceneFloatValueSerializationHelper
struct FMovieSceneFloatValueSerializationHelper
{
	float Value;  // 0x0 (0x0)
	enum class ERichCurveInterpMode InterpMode;  // 0x4 (0x4)
	enum class ERichCurveTangentMode TangentMode;  // 0x5 (0x5)
	char pad_6[2];  // 0x6 (0x6)
	struct FMovieSceneTangentDataSerializationHelper Tangent;  // 0x8 (0x8)


}; 
 
 // ScriptStruct AkAudio.MovieSceneFloatChannelSerializationHelper
struct FMovieSceneFloatChannelSerializationHelper
{
	enum class ERichCurveExtrapolation PreInfinityExtrap;  // 0x0 (0x0)
	enum class ERichCurveExtrapolation PostInfinityExtrap;  // 0x1 (0x1)
	char pad_2[6];  // 0x2 (0x2)
	struct TArray<int32_t> Times;  // 0x8 (0x8)
	struct TArray<struct FMovieSceneFloatValueSerializationHelper> Values;  // 0x18 (0x18)
	float DefaultValue;  // 0x28 (0x28)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool bHasDefaultValue : 1;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)


}; 
 
 // Function AkAudio.AkGameplayStatics.GetRTPCValue
struct FGetRTPCValue
{
	struct UAkRtpc* RtpcValue;  // 0x0 (0x0)
	int32_t PlayingID;  // 0x8 (0x8)
	uint8_t InputValueType;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	float Value;  // 0x10 (0x10)
	uint8_t OutputValueType;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct AActor* Actor;  // 0x18 (0x18)
	struct FName Rtpc;  // 0x20 (0x20)


}; 
 
 // Function AkAudio.AkGameplayStatics.SetBusConfig
struct FSetBusConfig
{
	struct FString BusName;  // 0x0 (0x0)
	uint8_t ChannelConfiguration;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function AkAudio.AkGameObject.PostAkEvent
struct FPostAkEvent
{
	struct UAkAudioEvent* AkEvent;  // 0x0 (0x0)
	int32_t CallbackMask;  // 0x8 (0x8)
	struct FDelegate PostEventCallback;  // 0xC (0xC)
	char pad_28[4];  // 0x1C (0x1C)
	struct FString InEventName;  // 0x20 (0x20)
	int32_t ReturnValue;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // Function AkAudio.AkSlider.SetSliderHandleColor
struct FSetSliderHandleColor
{
	struct FLinearColor InValue;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent
struct FAssociateAkTextureSetComponent
{
	struct UAkAcousticTextureSetComponent* textureSetComponent;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures
struct FGetAvailableAudioCultures
{
	struct TArray<struct FString> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkGameObject.PostAkEventAsync
struct FPostAkEventAsync
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UAkAudioEvent* AkEvent;  // 0x8 (0x8)
	int32_t PlayingID;  // 0x10 (0x10)
	int32_t CallbackMask;  // 0x14 (0x14)
	struct FDelegate PostEventCallback;  // 0x18 (0x18)
	struct FLatentActionInfo LatentInfo;  // 0x28 (0x28)


}; 
 
 // Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
struct FPostEventAtLocationAsync
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UAkAudioEvent* AkEvent;  // 0x8 (0x8)
	struct FVector Location;  // 0x10 (0x10)
	struct FRotator Orientation;  // 0x28 (0x28)
	struct UPostEventAtLocationAsync* ReturnValue;  // 0x40 (0x40)


}; 
 
 // Function AkAudio.AkGameObject.PostAssociatedAkEventAsync
struct FPostAssociatedAkEventAsync
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	int32_t CallbackMask;  // 0x8 (0x8)
	struct FDelegate PostEventCallback;  // 0xC (0xC)
	char pad_28[4];  // 0x1C (0x1C)
	struct FLatentActionInfo LatentInfo;  // 0x20 (0x20)
	int32_t PlayingID;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 // Function AkAudio.AkAudioEvent.PostOnActorAndWait
struct FPostOnActorAndWait
{
	struct AActor* Actor;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bStopWhenAttachedObjectDestroyed : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FLatentActionInfo LatentActionInfo;  // 0x10 (0x10)
	int32_t ReturnValue;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // Function AkAudio.AkGameplayStatics.SetRTPCValue
struct FSetRTPCValue
{
	struct UAkRtpc* RtpcValue;  // 0x0 (0x0)
	float Value;  // 0x8 (0x8)
	int32_t InterpolationTimeMs;  // 0xC (0xC)
	struct AActor* Actor;  // 0x10 (0x10)
	struct FName Rtpc;  // 0x18 (0x18)


}; 
 
 // Function AkAudio.AkComponent.GetAttenuationRadius
struct FGetAttenuationRadius
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkComponent.GetOcclusionCollisionChannel
struct FGetOcclusionCollisionChannel
{
	enum class ECollisionChannel ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
struct FPostAkEventAndWaitForEnd
{
	struct UAkAudioEvent* AkEvent;  // 0x0 (0x0)
	struct FString in_EventName;  // 0x8 (0x8)
	struct FLatentActionInfo LatentInfo;  // 0x18 (0x18)
	int32_t ReturnValue;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
struct FPostAkEventAndWaitForEndAsync
{
	struct UAkAudioEvent* AkEvent;  // 0x0 (0x0)
	int32_t PlayingID;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FLatentActionInfo LatentInfo;  // 0x10 (0x10)


}; 
 
 // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
struct FPostAssociatedAkEventAndWaitForEnd
{
	struct FLatentActionInfo LatentInfo;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
struct FPostAssociatedAkEventAndWaitForEndAsync
{
	int32_t PlayingID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FLatentActionInfo LatentInfo;  // 0x8 (0x8)


}; 
 
 // Function AkAudio.AkGameplayStatics.PostTrigger
struct FPostTrigger
{
	struct UAkTrigger* TriggerValue;  // 0x0 (0x0)
	struct AActor* Actor;  // 0x8 (0x8)
	struct FName Trigger;  // 0x10 (0x10)


}; 
 
 // Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus
struct FSetEarlyReflectionsAuxBus
{
	struct FString AuxBusName;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkComponent.SetEarlyReflectionsVolume
struct FSetEarlyReflectionsVolume
{
	float SendVolume;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkComponent.SetGameObjectRadius
struct FSetGameObjectRadius
{
	float in_outerRadius;  // 0x0 (0x0)
	float in_innerRadius;  // 0x4 (0x4)


}; 
 
 // Function AkAudio.AkComponent.SetListeners
struct FSetListeners
{
	struct TArray<struct UAkComponent*> Listeners;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkGameplayStatics.SetOutputBusVolume
struct FSetOutputBusVolume
{
	float BusVolume;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* Actor;  // 0x8 (0x8)


}; 
 
 // Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
struct FSetStopWhenOwnerDestroyed
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bStopWhenOwnerDestroyed : 1;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkGameplayStatics.SetSwitch
struct FSetSwitch
{
	struct UAkSwitchValue* SwitchValue;  // 0x0 (0x0)
	struct AActor* Actor;  // 0x8 (0x8)
	struct FName SwitchGroup;  // 0x10 (0x10)
	struct FName SwitchState;  // 0x18 (0x18)


}; 
 
 // Function AkAudio.AkGameplayStatics.UseEarlyReflections
struct FUseEarlyReflections
{
	struct AActor* Actor;  // 0x0 (0x0)
	struct UAkAuxBus* AuxBus;  // 0x8 (0x8)
	int32_t Order;  // 0x10 (0x10)
	float BusSendGain;  // 0x14 (0x14)
	float MaxPathLength;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool SpotReflectors : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct FString AuxBusName;  // 0x20 (0x20)


}; 
 
 // Function AkAudio.AkGameplayStatics.UseReverbVolumes
struct FUseReverbVolumes
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool inUseReverbVolumes : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct AActor* Actor;  // 0x8 (0x8)


}; 
 
 // Function AkAudio.AkAcousticPortal.GetCurrentState
struct FGetCurrentState
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkPortalComponent.PortalPlacementValid
struct FPortalPlacementValid
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkAudioType.GetWwiseShortID
struct FGetWwiseShortID
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
struct FMigrateMultiCoreRendering
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool NewValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkAudioEvent.PostAtLocation
struct FPostAtLocation
{
	struct FVector Location;  // 0x0 (0x0)
	struct FRotator Orientation;  // 0x18 (0x18)
	struct FDelegate Callback;  // 0x30 (0x30)
	int32_t CallbackMask;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)
	struct UObject* WorldContextObject;  // 0x48 (0x48)
	int32_t ReturnValue;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)


}; 
 
 // Function AkAudio.AkAudioEvent.PostOnActor
struct FPostOnActor
{
	struct AActor* Actor;  // 0x0 (0x0)
	struct FDelegate Delegate;  // 0x8 (0x8)
	int32_t CallbackMask;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool bStopWhenAttachedObjectDestroyed : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	int32_t ReturnValue;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function AkAudio.AkAudioEvent.PostOnComponent
struct FPostOnComponent
{
	struct UAkComponent* Component;  // 0x0 (0x0)
	struct FDelegate Delegate;  // 0x8 (0x8)
	int32_t CallbackMask;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool bStopWhenAttachedObjectDestroyed : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	int32_t ReturnValue;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function AkAudio.AkAudioEvent.PostOnComponentAndWait
struct FPostOnComponentAndWait
{
	struct UAkComponent* Component;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bStopWhenAttachedObjectDestroyed : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FLatentActionInfo LatentActionInfo;  // 0x10 (0x10)
	int32_t ReturnValue;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // Function AkAudio.AkAudioEvent.PostOnGameObject
struct FPostOnGameObject
{
	struct UAkGameObject* GameObject;  // 0x0 (0x0)
	struct FDelegate Delegate;  // 0x8 (0x8)
	int32_t CallbackMask;  // 0x18 (0x18)
	int32_t ReturnValue;  // 0x1C (0x1C)


}; 
 
 // Function AkAudio.AkAudioEvent.PostOnGameObjectAndWait
struct FPostOnGameObjectAndWait
{
	struct UAkGameObject* GameObject;  // 0x0 (0x0)
	struct FLatentActionInfo LatentActionInfo;  // 0x8 (0x8)
	int32_t ReturnValue;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
struct FPostAssociatedAudioInputEvent
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkCheckBox.GetAkItemId
struct FGetAkItemId
{
	struct FGuid ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkCheckBox.GetAkProperty
struct FGetAkProperty
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkWaapiJsonManager.GetStringField
struct FGetStringField
{
	struct FAkWaapiFieldNames FieldName;  // 0x0 (0x0)
	struct FAKWaapiJsonObject Target;  // 0x10 (0x10)
	struct FString ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function AkAudio.AkCheckBox.IsChecked
struct FIsChecked
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkCheckBox.IsPressed
struct FIsPressed
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
struct FConv_FAkWaapiFieldNamesToString
{
	struct FAkWaapiFieldNames INAkWaapiFieldNames;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function AkAudio.AkCheckBox.SetAkBoolProperty
struct FSetAkBoolProperty
{
	struct FString ItemProperty;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkCheckBox.SetAkItemId
struct FSetAkItemId
{
	struct FGuid ItemId;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkCheckBox.SetCheckedState
struct FSetCheckedState
{
	uint8_t InCheckedState;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkCheckBox.SetIsChecked
struct FSetIsChecked
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InIsChecked : 1;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
struct FAddOutputCaptureMarker
{
	struct FString MarkerText;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkGameplayStatics.CancelEventCallback
struct FCancelEventCallback
{
	struct FDelegate PostEventCallback;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkWaapiJsonManager.GetIntegerField
struct FGetIntegerField
{
	struct FAkWaapiFieldNames FieldName;  // 0x0 (0x0)
	struct FAKWaapiJsonObject Target;  // 0x10 (0x10)
	int32_t ReturnValue;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent
struct FExecuteActionOnEvent
{
	struct UAkAudioEvent* AkEvent;  // 0x0 (0x0)
	uint8_t ActionType;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct AActor* Actor;  // 0x10 (0x10)
	int32_t TransitionDuration;  // 0x18 (0x18)
	uint8_t FadeCurve;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	int32_t PlayingID;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData
struct FGetAkAudioTypeUserData
{
	struct UAkAudioType* Instance;  // 0x0 (0x0)
	UObject* Type;  // 0x8 (0x8)
	struct UObject* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function AkAudio.AkGameplayStatics.GetAkComponent
struct FGetAkComponent
{
	struct USceneComponent* AttachToComponent;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ComponentCreated : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	struct FName AttachPointName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct FVector Location;  // 0x18 (0x18)
	enum class EAttachLocation LocationType;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct UAkComponent* ReturnValue;  // 0x38 (0x38)


}; 
 
 // Function AkAudio.AkWaapiJsonManager.SetArrayStringFields
struct FSetArrayStringFields
{
	struct FAkWaapiFieldNames FieldName;  // 0x0 (0x0)
	struct TArray<struct FString> FieldStringValues;  // 0x10 (0x10)
	struct FAKWaapiJsonObject Target;  // 0x20 (0x20)
	struct FAKWaapiJsonObject ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture
struct FGetCurrentAudioCulture
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkGameplayStatics.IsEditor
struct FIsEditor
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkGameplayStatics.LoadBankByName
struct FLoadBankByName
{
	struct FString BankName;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
struct FPostAndWaitForEndOfEvent
{
	struct UAkAudioEvent* AkEvent;  // 0x0 (0x0)
	struct AActor* Actor;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bStopWhenAttachedToDestroyed : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FLatentActionInfo LatentInfo;  // 0x18 (0x18)
	int32_t ReturnValue;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
struct FConv_FAkWaapiUriToString
{
	struct FAkWaapiUri INAkWaapiUri;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync
struct FPostAndWaitForEndOfEventAsync
{
	struct UAkAudioEvent* AkEvent;  // 0x0 (0x0)
	struct AActor* Actor;  // 0x8 (0x8)
	int32_t PlayingID;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bStopWhenAttachedToDestroyed : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct FLatentActionInfo LatentInfo;  // 0x18 (0x18)


}; 
 
 // Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
struct FPostEventAtLocationByName
{
	struct FString EventName;  // 0x0 (0x0)
	struct FVector Location;  // 0x10 (0x10)
	struct FRotator Orientation;  // 0x28 (0x28)
	struct UObject* WorldContextObject;  // 0x40 (0x40)


}; 
 
 // Function AkAudio.AkGameplayStatics.PostEventByName
struct FPostEventByName
{
	struct FString EventName;  // 0x0 (0x0)
	struct AActor* Actor;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bStopWhenAttachedToDestroyed : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function AkAudio.AkGameplayStatics.ReplaceMainOutput
struct FReplaceMainOutput
{
	struct FAkOutputSettings MainOutputSettings;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkGameplayStatics.ResetRTPCValue
struct FResetRTPCValue
{
	struct UAkRtpc* RtpcValue;  // 0x0 (0x0)
	int32_t InterpolationTimeMs;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct AActor* Actor;  // 0x10 (0x10)
	struct FName Rtpc;  // 0x18 (0x18)


}; 
 
 // Function AkAudio.AkGameplayStatics.StartOutputCapture
struct FStartOutputCapture
{
	struct FString Filename;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkGameplayStatics.SetActorMixerEffect
struct FSetActorMixerEffect
{
	struct FAkUniqueID InAudioNodeID;  // 0x0 (0x0)
	int32_t InEffectIndex;  // 0x4 (0x4)
	struct UAkEffectShareSet* InEffectShareSet;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function AkAudio.AkGameplayStatics.SetAuxBusEffect
struct FSetAuxBusEffect
{
	struct UAkAuxBus* InAuxBus;  // 0x0 (0x0)
	int32_t InEffectIndex;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct UAkEffectShareSet* InEffectShareSet;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function AkAudio.AkGameplayStatics.SetBusEffectByID
struct FSetBusEffectByID
{
	struct FAkUniqueID InBusID;  // 0x0 (0x0)
	int32_t InEffectIndex;  // 0x4 (0x4)
	struct UAkEffectShareSet* InEffectShareSet;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function AkAudio.AkGameplayStatics.SetBusEffectByName
struct FSetBusEffectByName
{
	struct FString InBusName;  // 0x0 (0x0)
	int32_t InEffectIndex;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct UAkEffectShareSet* InEffectShareSet;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture
struct FSetCurrentAudioCulture
{
	struct FString AudioCulture;  // 0x0 (0x0)
	struct FLatentActionInfo LatentInfo;  // 0x10 (0x10)
	struct UObject* WorldContextObject;  // 0x28 (0x28)


}; 
 
 // Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync
struct FSetCurrentAudioCultureAsync
{
	struct FString AudioCulture;  // 0x0 (0x0)
	struct FDelegate Completed;  // 0x10 (0x10)


}; 
 
 // Function AkAudio.AkGameplayStatics.SetDistanceProbe
struct FSetDistanceProbe
{
	struct AActor* Listener;  // 0x0 (0x0)
	struct AActor* DistanceProbe;  // 0x8 (0x8)


}; 
 
 // Function AkAudio.AkGameplayStatics.SetGameObjectToPortalObstruction
struct FSetGameObjectToPortalObstruction
{
	struct UAkComponent* GameObjectAkComponent;  // 0x0 (0x0)
	struct UAkPortalComponent* PortalComponent;  // 0x8 (0x8)
	float ObstructionValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
struct FSetMultipleChannelEmitterPositions
{
	struct UAkComponent* GameObjectAkComponent;  // 0x0 (0x0)
	struct TArray<uint8_t> ChannelMasks;  // 0x8 (0x8)
	struct TArray<struct FTransform> Positions;  // 0x18 (0x18)
	uint8_t MultiPositionType;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions
struct FSetMultipleChannelMaskEmitterPositions
{
	struct UAkComponent* GameObjectAkComponent;  // 0x0 (0x0)
	struct TArray<struct FAkChannelMask> ChannelMasks;  // 0x8 (0x8)
	struct TArray<struct FTransform> Positions;  // 0x18 (0x18)
	uint8_t MultiPositionType;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
struct FSetOcclusionRefreshInterval
{
	float RefreshInterval;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* Actor;  // 0x8 (0x8)


}; 
 
 // Function AkAudio.AkGameplayStatics.SetOutputDeviceEffect
struct FSetOutputDeviceEffect
{
	struct FAkOutputDeviceID InDeviceID;  // 0x0 (0x0)
	int32_t InEffectIndex;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct UAkEffectShareSet* InEffectShareSet;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function AkAudio.AkWaapiCalls.SubscribeToWaapi
struct FSubscribeToWaapi
{
	struct FAkWaapiUri WaapiUri;  // 0x0 (0x0)
	struct FAKWaapiJsonObject WaapiOptions;  // 0x10 (0x10)
	struct FDelegate Callback;  // 0x20 (0x20)
	struct FAkWaapiSubscriptionId SubscriptionId;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool SubscriptionDone : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct FAKWaapiJsonObject ReturnValue;  // 0x40 (0x40)


}; 
 
 // Function AkAudio.AkGameplayStatics.SetPanningRule
struct FSetPanningRule
{
	uint8_t PanRule;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkGameplayStatics.SetPortalObstructionAndOcclusion
struct FSetPortalObstructionAndOcclusion
{
	struct UAkPortalComponent* PortalComponent;  // 0x0 (0x0)
	float ObstructionValue;  // 0x8 (0x8)
	float OcclusionValue;  // 0xC (0xC)


}; 
 
 // Function AkAudio.AkGameplayStatics.SetPortalToPortalObstruction
struct FSetPortalToPortalObstruction
{
	struct UAkPortalComponent* PortalComponent0;  // 0x0 (0x0)
	struct UAkPortalComponent* PortalComponent1;  // 0x8 (0x8)
	float ObstructionValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function AkAudio.AkGameplayStatics.SetReflectionsOrder
struct FSetReflectionsOrder
{
	int32_t Order;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool RefreshPaths : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function AkAudio.AkGameplayStatics.SetState
struct FSetState
{
	struct UAkStateValue* StateValue;  // 0x0 (0x0)
	struct FName StateGroup;  // 0x8 (0x8)
	struct FName State;  // 0x10 (0x10)


}; 
 
 // Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
struct FSpawnAkComponentAtLocation
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UAkAudioEvent* AkEvent;  // 0x8 (0x8)
	struct FVector Location;  // 0x10 (0x10)
	struct FRotator Orientation;  // 0x28 (0x28)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool AutoPost : 1;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	struct FString EventName;  // 0x48 (0x48)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool AutoDestroy : 1;  // 0x58 (0x58)
	char pad_89[7];  // 0x59 (0x59)
	struct UAkComponent* ReturnValue;  // 0x60 (0x60)


}; 
 
 // Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
struct FStartAllAmbientSounds
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkGameplayStatics.StartProfilerCapture
struct FStartProfilerCapture
{
	struct FString Filename;  // 000 (000520545] ted: 0x20)
)


}; 
 
 // Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
struct FStopAllAmbientSounds
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkGameplayStatics.UnloadBankByName
struct FUnloadBankByName
{
	struct FString BankName;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkMIDIEventCallbackInfo.GetCc
struct FGetCc
{
	struct FAkMidiCc AsCc;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)


}; 
 
 // Function AkAudio.AkMIDIEventCallbackInfo.GetChannel
struct FGetChannel
{
	char ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
struct FGetChannelAftertouch
{
	struct FAkMidiChannelAftertouch AsChannelAftertouch;  // 0x0 (0x0)
	char pad_3_1 : 7;  // 0x3 (0x3)
	bool ReturnValue : 1;  // 0x3 (0x3)


}; 
 
 // Function AkAudio.AkSlider.SetStepSize
struct FSetStepSize
{
	float InValue;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric
struct FGetGeneric
{
	struct FAkMidiGeneric AsGeneric;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)


}; 
 
 // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
struct FGetNoteAftertouch
{
	struct FAkMidiNoteAftertouch AsNoteAftertouch;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)


}; 
 
 // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
struct FGetNoteOff
{
	struct FAkMidiNoteOnOff AsNoteOff;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)


}; 
 
 // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
struct FGetNoteOn
{
	struct FAkMidiNoteOnOff AsNoteOn;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)


}; 
 
 // Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
struct FGetProgramChange
{
	struct FAkMidiProgramChange AsProgramChange;  // 0x0 (0x0)
	char pad_3_1 : 7;  // 0x3 (0x3)
	bool ReturnValue : 1;  // 0x3 (0x3)


}; 
 
 // Function AkAudio.AkMIDIEventCallbackInfo.GetType
struct FGetType
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
struct FConv_FAkBoolPropertyToControlToString
{
	struct FAkBoolPropertyToControl INAkBoolPropertyToControl;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
struct FConv_FAkBoolPropertyToControlToText
{
	struct FAkBoolPropertyToControl INAkBoolPropertyToControl;  // 0x0 (0x0)
	struct FText ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function AkAudio.AkWwiseTree.GetSearchText
struct FGetSearchText
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkItemProperties.GetSelectedProperty
struct FGetSelectedProperty
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkWwiseTree.SetSearchText
struct FSetSearchText
{
	struct FString newText;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
struct FConv_FAkPropertyToControlToString
{
	struct FAkPropertyToControl INAkPropertyToControl;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
struct FConv_FAkPropertyToControlToText
{
	struct FAkPropertyToControl INAkPropertyToControl;  // 0x0 (0x0)
	struct FText ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function AkAudio.AkRoomComponent.SetGeometryComponent
struct FSetGeometryComponent
{
	struct UAkAcousticTextureSetComponent* textureSetComponent;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkSlider.GetAkSliderItemId
struct FGetAkSliderItemId
{
	struct FGuid ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkSlider.SetAkSliderItemId
struct FSetAkSliderItemId
{
	struct FGuid ItemId;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkSlider.SetAkSliderItemProperty
struct FSetAkSliderItemProperty
{
	struct FString ItemProperty;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkSlider.SetIndentHandle
struct FSetIndentHandle
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkSlider.SetLocked
struct FSetLocked
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkSlider.SetSliderBarColor
struct FSetSliderBarColor
{
	struct FLinearColor InValue;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkSlider.SetValue
struct FSetValue
{
	float InValue;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkWaapiCalls.Unsubscribe
struct FUnsubscribe
{
	struct FAkWaapiSubscriptionId SubscriptionId;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool UnsubscriptionDone : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FAKWaapiJsonObject ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function AkAudio.AkSurfaceReflectorSetComponent.UpdateAcousticProperties
struct FUpdateAcousticProperties
{
	struct TArray<struct FAkSurfacePoly> in_AcousticPolys;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.AkWaapiCalls.CallWaapi
struct FCallWaapi
{
	struct FAkWaapiUri WaapiUri;  // 0x0 (0x0)
	struct FAKWaapiJsonObject WaapiArgs;  // 0x10 (0x10)
	struct FAKWaapiJsonObject WaapiOptions;  // 0x20 (0x20)
	struct FAKWaapiJsonObject ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
struct FConv_FAkWaapiSubscriptionIdToText
{
	struct FAkWaapiSubscriptionId INAkWaapiSubscriptionId;  // 0x0 (0x0)
	struct FText ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AkAudio.AkWaapiCalls.GetSubscriptionID
struct FGetSubscriptionID
{
	struct FAkWaapiSubscriptionId Subscription;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
struct FRegisterWaapiConnectionLostCallback
{
	struct FDelegate Callback;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 // Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
struct FRegisterWaapiProjectLoadedCallback
{
	struct FDelegate Callback;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 // Function AkAudio.AkWaapiCalls.SetSubscriptionID
struct FSetSubscriptionID
{
	struct FAkWaapiSubscriptionId Subscription;  // 0x0 (0x0)
	int32_t ID;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
struct FConv_FAkWaapiFieldNamesToText
{
	struct FAkWaapiFieldNames INAkWaapiFieldNames;  // 0x0 (0x0)
	struct FText ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
struct FConv_FAKWaapiJsonObjectToString
{
	struct FAKWaapiJsonObject INAKWaapiJsonObject;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
struct FConv_FAKWaapiJsonObjectToText
{
	struct FAKWaapiJsonObject INAKWaapiJsonObject;  // 0x0 (0x0)
	struct FText ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function AkAudio.AkWaapiJsonManager.GetArrayField
struct FGetArrayField
{
	struct FAkWaapiFieldNames FieldName;  // 0x0 (0x0)
	struct FAKWaapiJsonObject Target;  // 0x10 (0x10)
	struct TArray<struct FAKWaapiJsonObject> ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function AkAudio.AkWaapiJsonManager.GetBoolField
struct FGetBoolField
{
	struct FAkWaapiFieldNames FieldName;  // 0x0 (0x0)
	struct FAKWaapiJsonObject Target;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function AkAudio.AkWaapiJsonManager.GetObjectField
struct FGetObjectField
{
	struct FAkWaapiFieldNames FieldName;  // 0x0 (0x0)
	struct FAKWaapiJsonObject Target;  // 0x10 (0x10)
	struct FAKWaapiJsonObject ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields
struct FSetArrayObjectFields
{
	struct FAkWaapiFieldNames FieldName;  // 0x0 (0x0)
	struct TArray<struct FAKWaapiJsonObject> FieldObjectValues;  // 0x10 (0x10)
	struct FAKWaapiJsonObject Target;  // 0x20 (0x20)
	struct FAKWaapiJsonObject ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function AkAudio.AkWaapiJsonManager.SetBoolField
struct FSetBoolField
{
	struct FAkWaapiFieldNames FieldName;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool FieldValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FAKWaapiJsonObject Target;  // 0x18 (0x18)
	struct FAKWaapiJsonObject ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function AkAudio.AkWaapiJsonManager.SetNumberField
struct FSetNumberField
{
	struct FAkWaapiFieldNames FieldName;  // 0x0 (0x0)
	float FieldValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FAKWaapiJsonObject Target;  // 0x18 (0x18)
	struct FAKWaapiJsonObject ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function AkAudio.AkWaapiJsonManager.SetObjectField
struct FSetObjectField
{
	struct FAkWaapiFieldNames FieldName;  // 0x0 (0x0)
	struct FAKWaapiJsonObject FieldValue;  // 0x10 (0x10)
	struct FAKWaapiJsonObject Target;  // 0x20 (0x20)
	struct FAKWaapiJsonObject ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function AkAudio.AkWaapiJsonManager.SetStringField
struct FSetStringField
{
	struct FAkWaapiFieldNames FieldName;  // 0x0 (0x0)
	struct FString FieldValue;  // 0x10 (0x10)
	struct FAKWaapiJsonObject Target;  // 0x20 (0x20)
	struct FAKWaapiJsonObject ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
struct FConv_FAkWaapiUriToText
{
	struct FAkWaapiUri INAkWaapiUri;  // 0x0 (0x0)
	struct FText ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function AkAudio.AkWwiseTree.GetSelectedItem
struct FGetSelectedItem
{
	struct FAkWwiseObjectDetails ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AkAudio.PostEventAsync.PostEventAsync
struct FPostEventAsync
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UAkAudioEvent* AkEvent;  // 0x8 (0x8)
	struct AActor* Actor;  // 0x10 (0x10)
	int32_t CallbackMask;  // 0x18 (0x18)
	struct FDelegate PostEventCallback;  // 0x1C (0x1C)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool bStopWhenAttachedToDestroyed : 1;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)
	struct UPostEventAsync* ReturnValue;  // 0x30 (0x30)


}; 
 
 