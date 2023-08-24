#pragma once 
#include <AkAudio_Structs.h>
 
 
 
// Class AkAudio.AkAcousticTextureSetComponent
// Size: 0x2C0(Inherited: 0x2A0)
struct UAkAcousticTextureSetComponent : USceneComponent
{
	char pad_672[32];  // 0x2A0 (0x2A0)


}; 
 
 


// Class AkAudio.AkItemBoolPropertiesConv
// Size: 0x28(Inherited: 0x28)
struct UAkItemBoolPropertiesConv : UBlueprintFunctionLibrary
{


	struct FText Conv_FAkBoolPropertyToControlToText(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
	struct FString Conv_FAkBoolPropertyToControlToString(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
}; 
 
 


// Class AkAudio.AkAcousticTexture
// Size: 0x50(Inherited: 0x40)
struct UAkAcousticTexture : UAkAudioType
{
	struct FWwiseAcousticTextureCookedData AcousticTextureCookedData;  // 0x40 (0x40)
	char pad_76[4];  // 0x4C (0x4C)


}; 
 
 


// Class AkAudio.AkItemBoolProperties
// Size: 0x190(Inherited: 0x150)
struct UAkItemBoolProperties : UWidget
{
	struct FMulticastInlineDelegate OnSelectionChanged;  // 0x150 (0x150)
	struct FMulticastInlineDelegate OnPropertyDragged;  // 0x160 (0x160)
	char pad_368[32];  // 0x170 (0x170)


	void SetSearchText(struct FString newText); // Function AkAudio.AkItemBoolProperties.SetSearchText
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemBoolProperties.GetSelectedProperty
	struct FString GetSearchText(); // Function AkAudio.AkItemBoolProperties.GetSearchText
}; 
 
 


// Class AkAudio.AkGameObject
// Size: 0x2C0(Inherited: 0x2A0)
struct UAkGameObject : USceneComponent
{
	struct UAkAudioEvent* AkAudioEvent;  // 0x2A0 (0x2A0)
	struct FString EventName;  // 0x2A8 (0x2A8)
	char pad_696[8];  // 0x2B8 (0x2B8)


	void Stop(); // Function AkAudio.AkGameObject.Stop
	void SetRTPCValue(struct UAkRtpc* RtpcValue, float Value, int32_t InterpolationTimeMs, struct FString Rtpc); // Function AkAudio.AkGameObject.SetRTPCValue
	void PostAssociatedAkEventAsync(struct UObject* WorldContextObject, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct FLatentActionInfo LatentInfo, int32_t& PlayingID); // Function AkAudio.AkGameObject.PostAssociatedAkEventAsync
	int32_t PostAssociatedAkEvent(int32_t CallbackMask, struct FDelegate& PostEventCallback); // Function AkAudio.AkGameObject.PostAssociatedAkEvent
	void PostAkEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, int32_t& PlayingID, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameObject.PostAkEventAsync
	int32_t PostAkEvent(struct UAkAudioEvent* AkEvent, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct FString InEventName); // Function AkAudio.AkGameObject.PostAkEvent
	void GetRTPCValue(struct UAkRtpc* RtpcValue, uint8_t InputValueType, float& Value, uint8_t& OutputValueType, struct FString Rtpc, int32_t PlayingID); // Function AkAudio.AkGameObject.GetRTPCValue
}; 
 
 


// Class AkAudio.AkSubmixInputComponent
// Size: 0x520(Inherited: 0x4D0)
struct UAkSubmixInputComponent : UAkAudioInputComponent
{
	struct USoundSubmix* SubmixToRecord;  // 0x4D0 (0x4D0)
	char pad_1240[72];  // 0x4D8 (0x4D8)


}; 
 
 


// Class AkAudio.AkStateValue
// Size: 0x60(Inherited: 0x60)
struct UAkStateValue : UAkGroupValue
{


}; 
 
 


// Class AkAudio.AkAmbientSound
// Size: 0x2D0(Inherited: 0x290)
struct AAkAmbientSound : AActor
{
	struct UAkAudioEvent* AkAudioEvent;  // 0x290 (0x290)
	struct UAkComponent* AkComponent;  // 0x298 (0x298)
	char pad_672_1 : 7;  // 0x2A0 (0x2A0)
	bool StopWhenOwnerIsDestroyed : 1;  // 0x2A0 (0x2A0)
	char pad_673_1 : 7;  // 0x2A1 (0x2A1)
	bool AutoPost : 1;  // 0x2A1 (0x2A1)
	char pad_674[46];  // 0x2A2 (0x2A2)


	void StopAmbientSound(); // Function AkAudio.AkAmbientSound.StopAmbientSound
	void StartAmbientSound(); // Function AkAudio.AkAmbientSound.StartAmbientSound
}; 
 
 


// Class AkAudio.AkPortalComponent
// Size: 0x380(Inherited: 0x2A0)
struct UAkPortalComponent : USceneComponent
{
	char pad_672_1 : 7;  // 0x2A0 (0x2A0)
	bool bDynamic : 1;  // 0x2A0 (0x2A0)
	uint8_t InitialState;  // 0x2A1 (0x2A1)
	char pad_674[2];  // 0x2A2 (0x2A2)
	float ObstructionRefreshInterval;  // 0x2A4 (0x2A4)
	enum class ECollisionChannel ObstructionCollisionChannel;  // 0x2A8 (0x2A8)
	char pad_681[215];  // 0x2A9 (0x2A9)


	bool PortalPlacementValid(); // Function AkAudio.AkPortalComponent.PortalPlacementValid
	void OpenPortal(); // Function AkAudio.AkPortalComponent.OpenPortal
	struct UPrimitiveComponent* GetPrimitiveParent(); // Function AkAudio.AkPortalComponent.GetPrimitiveParent
	uint8_t GetCurrentState(); // Function AkAudio.AkPortalComponent.GetCurrentState
	void ClosePortal(); // Function AkAudio.AkPortalComponent.ClosePortal
}; 
 
 


// Class AkAudio.AkItemPropertiesConv
// Size: 0x28(Inherited: 0x28)
struct UAkItemPropertiesConv : UBlueprintFunctionLibrary
{


	struct FText Conv_FAkPropertyToControlToText(struct FAkPropertyToControl& INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
	struct FString Conv_FAkPropertyToControlToString(struct FAkPropertyToControl& INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
}; 
 
 


// Class AkAudio.AkAudioInputComponent
// Size: 0x4D0(Inherited: 0x4A0)
struct UAkAudioInputComponent : UAkComponent
{
	char pad_1184[48];  // 0x4A0 (0x4A0)


	int32_t PostAssociatedAudioInputEvent(); // Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
}; 
 
 


// Class AkAudio.AkComponent
// Size: 0x4A0(Inherited: 0x2C0)
struct UAkComponent : UAkGameObject
{
	char pad_704_1 : 7;  // 0x2C0 (0x2C0)
	bool bUseSpatialAudio : 1;  // 0x2C0 (0x2C0)
	char pad_705[7];  // 0x2C1 (0x2C1)
	enum class EAkCollisionChannel OcclusionCollisionChannel;  // 0x2C8 (0x2C8)
	char pad_713_1 : 7;  // 0x2C9 (0x2C9)
	bool EnableSpotReflectors : 1;  // 0x2C9 (0x2C9)
	char pad_714[2];  // 0x2CA (0x2CA)
	float OuterRadius;  // 0x2CC (0x2CC)
	float InnerRadius;  // 0x2D0 (0x2D0)
	char pad_724[4];  // 0x2D4 (0x2D4)
	struct UAkAuxBus* EarlyReflectionAuxBus;  // 0x2D8 (0x2D8)
	struct FString EarlyReflectionAuxBusName;  // 0x2E0 (0x2E0)
	int32_t EarlyReflectionOrder;  // 0x2F0 (0x2F0)
	float EarlyReflectionBusSendGain;  // 0x2F4 (0x2F4)
	float EarlyReflectionMaxPathLength;  // 0x2F8 (0x2F8)
	float roomReverbAuxBusGain;  // 0x2FC (0x2FC)
	int32_t diffractionMaxEdges;  // 0x300 (0x300)
	int32_t diffractionMaxPaths;  // 0x304 (0x304)
	float diffractionMaxPathLength;  // 0x308 (0x308)
	char pad_780_1 : 7;  // 0x30C (0x30C)
	bool DrawFirstOrderReflections : 1;  // 0x30C (0x30C)
	char pad_781_1 : 7;  // 0x30D (0x30D)
	bool DrawSecondOrderReflections : 1;  // 0x30D (0x30D)
	char pad_782_1 : 7;  // 0x30E (0x30E)
	bool DrawHigherOrderReflections : 1;  // 0x30E (0x30E)
	char pad_783_1 : 7;  // 0x30F (0x30F)
	bool DrawDiffraction : 1;  // 0x30F (0x30F)
	char pad_784_1 : 7;  // 0x310 (0x310)
	bool StopWhenOwnerDestroyed : 1;  // 0x310 (0x310)
	char pad_785[3];  // 0x311 (0x311)
	float AttenuationScalingFactor;  // 0x314 (0x314)
	float OcclusionRefreshInterval;  // 0x318 (0x318)
	char pad_796_1 : 7;  // 0x31C (0x31C)
	bool bUseReverbVolumes : 1;  // 0x31C (0x31C)
	char pad_797[387];  // 0x31D (0x31D)


	void UseReverbVolumes(bool inUseReverbVolumes); // Function AkAudio.AkComponent.UseReverbVolumes
	void UseEarlyReflections(struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkComponent.UseEarlyReflections
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct FString SwitchGroup, struct FString SwitchState); // Function AkAudio.AkComponent.SetSwitch
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed); // Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
	void SetOutputBusVolume(float BusVolume); // Function AkAudio.AkComponent.SetOutputBusVolume
	void SetListeners(struct TArray<struct UAkComponent*>& Listeners); // Function AkAudio.AkComponent.SetListeners
	void SetGameObjectRadius(float in_outerRadius, float in_innerRadius); // Function AkAudio.AkComponent.SetGameObjectRadius
	void SetEnableSpotReflectors(bool in_enable); // Function AkAudio.AkComponent.SetEnableSpotReflectors
	void SetEarlyReflectionsVolume(float SendVolume); // Function AkAudio.AkComponent.SetEarlyReflectionsVolume
	void SetEarlyReflectionsAuxBus(struct FString AuxBusName); // Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus
	void SetAttenuationScalingFactor(float Value); // Function AkAudio.AkComponent.SetAttenuationScalingFactor
	void PostTrigger(struct UAkTrigger* TriggerValue, struct FString Trigger); // Function AkAudio.AkComponent.PostTrigger
	void PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
	int32_t PostAssociatedAkEventAndWaitForEnd(struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
	void PostAkEventAndWaitForEndAsync(struct UAkAudioEvent* AkEvent, int32_t& PlayingID, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
	int32_t PostAkEventAndWaitForEnd(struct UAkAudioEvent* AkEvent, struct FString in_EventName, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
	enum class ECollisionChannel GetOcclusionCollisionChannel(); // Function AkAudio.AkComponent.GetOcclusionCollisionChannel
	float GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius
}; 
 
 


// Class AkAudio.DrawPortalComponent
// Size: 0x540(Inherited: 0x540)
struct UDrawPortalComponent : UPrimitiveComponent
{


}; 
 
 


// Class AkAudio.AkMediaAsset
// Size: 0x78(Inherited: 0x28)
struct UAkMediaAsset : UObject
{
	struct TMap<struct FString, struct UAkMediaAssetData*> MediaAssetDataPerPlatform;  // 0x28 (0x28)


}; 
 
 


// Class AkAudio.AkAcousticPortal
// Size: 0x2D8(Inherited: 0x2C8)
struct AAkAcousticPortal : AVolume
{
	struct UAkPortalComponent* Portal;  // 0x2C8 (0x2C8)
	uint8_t InitialState;  // 0x2D0 (0x2D0)
	char pad_721_1 : 7;  // 0x2D1 (0x2D1)
	bool bRequiresStateMigration : 1;  // 0x2D1 (0x2D1)
	char pad_722[6];  // 0x2D2 (0x2D2)


	void OpenPortal(); // Function AkAudio.AkAcousticPortal.OpenPortal
	uint8_t GetCurrentState(); // Function AkAudio.AkAcousticPortal.GetCurrentState
	void ClosePortal(); // Function AkAudio.AkAcousticPortal.ClosePortal
}; 
 
 


// Class AkAudio.AkAudioType
// Size: 0x40(Inherited: 0x28)
struct UAkAudioType : UObject
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bAutoLoad : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct TArray<struct UObject*> UserData;  // 0x30 (0x30)


	void UnloadData(); // Function AkAudio.AkAudioType.UnloadData
	void LoadData(); // Function AkAudio.AkAudioType.LoadData
	int32_t GetWwiseShortID(); // Function AkAudio.AkAudioType.GetWwiseShortID
}; 
 
 


// Class AkAudio.AkAndroidInitializationSettings
// Size: 0x100(Inherited: 0x28)
struct UAkAndroidInitializationSettings : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;  // 0x30 (0x30)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;  // 0xA0 (0xA0)
	struct FAkAndroidAdvancedInitializationSettings AdvancedSettings;  // 0xC0 (0xC0)


	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
}; 
 
 


// Class AkAudio.AkSettingsPerUser
// Size: 0x78(Inherited: 0x28)
struct UAkSettingsPerUser : UObject
{
	struct FDirectoryPath WwiseWindowsInstallationPath;  // 0x28 (0x28)
	struct FFilePath WwiseMacInstallationPath;  // 0x38 (0x38)
	struct FDirectoryPath GeneratedSoundBanksFolderUserOverride;  // 0x48 (0x48)
	struct FString WaapiIPAddress;  // 0x58 (0x58)
	uint32_t WaapiPort;  // 0x68 (0x68)
	char pad_108_1 : 7;  // 0x6C (0x6C)
	bool bAutoConnectToWAAPI : 1;  // 0x6C (0x6C)
	char pad_109_1 : 7;  // 0x6D (0x6D)
	bool AutoSyncSelection : 1;  // 0x6D (0x6D)
	char pad_110[2];  // 0x6E (0x6E)
	uint32_t WaapiTranslatorTimeout;  // 0x70 (0x70)
	char pad_116_1 : 7;  // 0x74 (0x74)
	bool SuppressGeneratedSoundBanksPathWarnings : 1;  // 0x74 (0x74)
	char pad_117_1 : 7;  // 0x75 (0x75)
	bool SoundDataGenerationSkipLanguage : 1;  // 0x75 (0x75)
	char pad_118_1 : 7;  // 0x76 (0x76)
	bool AskForWwiseAssetReload : 1;  // 0x76 (0x76)
	char pad_119[1];  // 0x77 (0x77)


}; 
 
 


// Class AkAudio.AkPlatformInfo
// Size: 0x70(Inherited: 0x28)
struct UAkPlatformInfo : UObject
{
	char pad_40[72];  // 0x28 (0x28)


}; 
 
 


// Class AkAudio.AkAndroidPlatformInfo
// Size: 0x70(Inherited: 0x70)
struct UAkAndroidPlatformInfo : UAkPlatformInfo
{


}; 
 
 


// Class AkAudio.AkAudioBank
// Size: 0x48(Inherited: 0x40)
struct UAkAudioBank : UAkAudioType
{
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool AutoLoad : 1;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)


}; 
 
 


// Class AkAudio.AkEffectShareSet
// Size: 0xA8(Inherited: 0x40)
struct UAkEffectShareSet : UAkAudioType
{
	struct FWwiseLocalizedShareSetCookedData ShareSetCookedData;  // 0x40 (0x40)
	char pad_160[8];  // 0xA0 (0xA0)


}; 
 
 


// Class AkAudio.AkMarkerCallbackInfo
// Size: 0x50(Inherited: 0x38)
struct UAkMarkerCallbackInfo : UAkEventCallbackInfo
{
	int32_t Identifier;  // 0x38 (0x38)
	int32_t Position;  // 0x3C (0x3C)
	struct FString Label;  // 0x40 (0x40)


}; 
 
 


// Class AkAudio.MovieSceneAkAudioEventTrack
// Size: 0xB8(Inherited: 0xB0)
struct UMovieSceneAkAudioEventTrack : UMovieSceneAkTrack
{
	char pad_176[8];  // 0xB0 (0xB0)


}; 
 
 


// Class AkAudio.AkAudioEvent
// Size: 0xC0(Inherited: 0x40)
struct UAkAudioEvent : UAkAudioType
{
	float MaxAttenuationRadius;  // 0x40 (0x40)
	char pad_68_1 : 7;  // 0x44 (0x44)
	bool IsInfinite : 1;  // 0x44 (0x44)
	char pad_69[3];  // 0x45 (0x45)
	float MinimumDuration;  // 0x48 (0x48)
	float MaximumDuration;  // 0x4C (0x4C)
	struct FWwiseLocalizedEventCookedData EventCookedData;  // 0x50 (0x50)
	struct UAkAudioBank* RequiredBank;  // 0xB0 (0xB0)
	char pad_184[8];  // 0xB8 (0xB8)


	int32_t PostOnGameObjectAndWait(struct UAkGameObject* GameObject, struct FLatentActionInfo LatentActionInfo); // Function AkAudio.AkAudioEvent.PostOnGameObjectAndWait
	int32_t PostOnGameObject(struct UAkGameObject* GameObject, struct FDelegate& Delegate, int32_t CallbackMask); // Function AkAudio.AkAudioEvent.PostOnGameObject
	int32_t PostOnComponentAndWait(struct UAkComponent* Component, bool bStopWhenAttachedObjectDestroyed, struct FLatentActionInfo LatentActionInfo); // Function AkAudio.AkAudioEvent.PostOnComponentAndWait
	int32_t PostOnComponent(struct UAkComponent* Component, struct FDelegate& Delegate, int32_t CallbackMask, bool bStopWhenAttachedObjectDestroyed); // Function AkAudio.AkAudioEvent.PostOnComponent
	int32_t PostOnActorAndWait(struct AActor* Actor, bool bStopWhenAttachedObjectDestroyed, struct FLatentActionInfo LatentActionInfo); // Function AkAudio.AkAudioEvent.PostOnActorAndWait
	int32_t PostOnActor(struct AActor* Actor, struct FDelegate& Delegate, int32_t CallbackMask, bool bStopWhenAttachedObjectDestroyed); // Function AkAudio.AkAudioEvent.PostOnActor
	int32_t PostAtLocation(struct FVector Location, struct FRotator Orientation, struct FDelegate& Callback, int32_t CallbackMask, struct UObject* WorldContextObject); // Function AkAudio.AkAudioEvent.PostAtLocation
	int32_t ExecuteAction(uint8_t ActionType, struct AActor* Actor, int32_t PlayingID, int32_t TransitionDuration, uint8_t FadeCurve); // Function AkAudio.AkAudioEvent.ExecuteAction
}; 
 
 


// Class AkAudio.AkReverbVolume
// Size: 0x300(Inherited: 0x2C8)
struct AAkReverbVolume : AVolume
{
	char pad_712_1 : 7;  // 0x2C8 (0x2C8)
	bool bEnabled : 1;  // 0x2C8 (0x2C8)
	char pad_713[7];  // 0x2C9 (0x2C9)
	struct UAkAuxBus* AuxBus;  // 0x2D0 (0x2D0)
	struct FString AuxBusName;  // 0x2D8 (0x2D8)
	float SendLevel;  // 0x2E8 (0x2E8)
	float FadeRate;  // 0x2EC (0x2EC)
	float Priority;  // 0x2F0 (0x2F0)
	char pad_756[4];  // 0x2F4 (0x2F4)
	struct UAkLateReverbComponent* LateReverbComponent;  // 0x2F8 (0x2F8)


}; 
 
 


// Class AkAudio.AkAuxBus
// Size: 0xB0(Inherited: 0x40)
struct UAkAuxBus : UAkAudioType
{
	struct FWwiseLocalizedAuxBusCookedData AuxBusCookedData;  // 0x40 (0x40)
	struct UAkAudioBank* RequiredBank;  // 0xA0 (0xA0)
	char pad_168[8];  // 0xA8 (0xA8)


}; 
 
 


// Class AkAudio.AkCheckBox
// Size: 0xFC0(Inherited: 0x168)
struct UAkCheckBox : UContentWidget
{
	char pad_360[656];  // 0x168 (0x168)
	uint8_t CheckedState;  // 0x3F8 (0x3F8)
	char pad_1017[3];  // 0x3F9 (0x3F9)
	struct FDelegate CheckedStateDelegate;  // 0x3FC (0x3FC)
	char pad_1036[4];  // 0x40C (0x40C)
	struct FCheckBoxStyle WidgetStyle;  // 0x410 (0x410)
	enum class EHorizontalAlignment HorizontalAlignment;  // 0xEE0 (0xEE0)
	char pad_3809_1 : 7;  // 0xEE1 (0xEE1)
	bool IsFocusable : 1;  // 0xEE1 (0xEE1)
	char pad_3810[6];  // 0xEE2 (0xEE2)
	struct FAkBoolPropertyToControl ThePropertyToControl;  // 0xEE8 (0xEE8)
	struct FAkWwiseItemToControl ItemToControl;  // 0xEF8 (0xEF8)
	struct FMulticastInlineDelegate AkOnCheckStateChanged;  // 0xF38 (0xF38)
	struct FMulticastInlineDelegate OnItemDropped;  // 0xF48 (0xF48)
	struct FMulticastInlineDelegate OnPropertyDropped;  // 0xF58 (0xF58)
	char pad_3944[88];  // 0xF68 (0xF68)


	void SetIsChecked(bool InIsChecked); // Function AkAudio.AkCheckBox.SetIsChecked
	void SetCheckedState(uint8_t InCheckedState); // Function AkAudio.AkCheckBox.SetCheckedState
	void SetAkItemId(struct FGuid& ItemId); // Function AkAudio.AkCheckBox.SetAkItemId
	void SetAkBoolProperty(struct FString ItemProperty); // Function AkAudio.AkCheckBox.SetAkBoolProperty
	bool IsPressed(); // Function AkAudio.AkCheckBox.IsPressed
	bool IsChecked(); // Function AkAudio.AkCheckBox.IsChecked
	uint8_t GetCheckedState(); // Function AkAudio.AkCheckBox.GetCheckedState
	struct FString GetAkProperty(); // Function AkAudio.AkCheckBox.GetAkProperty
	struct FGuid GetAkItemId(); // Function AkAudio.AkCheckBox.GetAkItemId
}; 
 
 


// Class AkAudio.AkAssetData
// Size: 0x48(Inherited: 0x28)
struct UAkAssetData : UObject
{
	char pad_40[32];  // 0x28 (0x28)


}; 
 
 


// Class AkAudio.DrawRoomComponent
// Size: 0x540(Inherited: 0x540)
struct UDrawRoomComponent : UPrimitiveComponent
{


}; 
 
 


// Class AkAudio.AkTVOSPlatformInfo
// Size: 0x70(Inherited: 0x70)
struct UAkTVOSPlatformInfo : UAkPlatformInfo
{


}; 
 
 


// Class AkAudio.AkAssetPlatformData
// Size: 0x30(Inherited: 0x28)
struct UAkAssetPlatformData : UObject
{
	struct UAkAssetData* CurrentAssetData;  // 0x28 (0x28)


}; 
 
 


// Class AkAudio.AkMediaAssetData
// Size: 0x38(Inherited: 0x28)
struct UAkMediaAssetData : UObject
{
	char pad_40[16];  // 0x28 (0x28)


}; 
 
 


// Class AkAudio.AkWwiseTree
// Size: 0x190(Inherited: 0x150)
struct UAkWwiseTree : UWidget
{
	struct FMulticastInlineDelegate OnSelectionChanged;  // 0x150 (0x150)
	struct FMulticastInlineDelegate OnItemDragged;  // 0x160 (0x160)
	char pad_368[32];  // 0x170 (0x170)


	void SetSearchText(struct FString newText); // Function AkAudio.AkWwiseTree.SetSearchText
	struct FAkWwiseObjectDetails GetSelectedItem(); // Function AkAudio.AkWwiseTree.GetSelectedItem
	struct FString GetSearchText(); // Function AkAudio.AkWwiseTree.GetSearchText
}; 
 
 


// Class AkAudio.AkLocalizedMediaAsset
// Size: 0x78(Inherited: 0x78)
struct UAkLocalizedMediaAsset : UAkMediaAsset
{


}; 
 
 


// Class AkAudio.AkExternalMediaAsset
// Size: 0x78(Inherited: 0x78)
struct UAkExternalMediaAsset : UAkMediaAsset
{


}; 
 
 


// Class AkAudio.AkFolder
// Size: 0x40(Inherited: 0x40)
struct UAkFolder : UAkAudioType
{


}; 
 
 


// Class AkAudio.AkGameplayStatics
// Size: 0x28(Inherited: 0x28)
struct UAkGameplayStatics : UBlueprintFunctionLibrary
{


	void UseReverbVolumes(bool inUseReverbVolumes, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.UseReverbVolumes
	void UseEarlyReflections(struct AActor* Actor, struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkGameplayStatics.UseEarlyReflections
	void UnloadInitBank(); // Function AkAudio.AkGameplayStatics.UnloadInitBank
	void UnloadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.UnloadBankByName
	void StopProfilerCapture(); // Function AkAudio.AkGameplayStatics.StopProfilerCapture
	void StopOutputCapture(); // Function AkAudio.AkGameplayStatics.StopOutputCapture
	void StopAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
	void StopAll(); // Function AkAudio.AkGameplayStatics.StopAll
	void StopActor(struct AActor* Actor); // Function AkAudio.AkGameplayStatics.StopActor
	void StartProfilerCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartProfilerCapture
	void StartOutputCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartOutputCapture
	void StartAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
	struct UAkComponent* SpawnAkComponentAtLocation(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, bool AutoPost, struct FString EventName, bool AutoDestroy); // Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct AActor* Actor, struct FName SwitchGroup, struct FName SwitchState); // Function AkAudio.AkGameplayStatics.SetSwitch
	void SetState(struct UAkStateValue* StateValue, struct FName StateGroup, struct FName State); // Function AkAudio.AkGameplayStatics.SetState
	void SetSpeakerAngles(struct TArray<float>& SpeakerAngles, float HeightAngle, struct FString DeviceShareSet); // Function AkAudio.AkGameplayStatics.SetSpeakerAngles
	void SetRTPCValue(struct UAkRtpc* RtpcValue, float Value, int32_t InterpolationTimeMs, struct AActor* Actor, struct FName Rtpc); // Function AkAudio.AkGameplayStatics.SetRTPCValue
	void SetReflectionsOrder(int32_t Order, bool RefreshPaths); // Function AkAudio.AkGameplayStatics.SetReflectionsOrder
	void SetPortalToPortalObstruction(struct UAkPortalComponent* PortalComponent0, struct UAkPortalComponent* PortalComponent1, float ObstructionValue); // Function AkAudio.AkGameplayStatics.SetPortalToPortalObstruction
	void SetPortalObstructionAndOcclusion(struct UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue); // Function AkAudio.AkGameplayStatics.SetPortalObstructionAndOcclusion
	void SetPanningRule(uint8_t PanRule); // Function AkAudio.AkGameplayStatics.SetPanningRule
	bool SetOutputDeviceEffect(struct FAkOutputDeviceID InDeviceID, int32_t InEffectIndex, struct UAkEffectShareSet* InEffectShareSet); // Function AkAudio.AkGameplayStatics.SetOutputDeviceEffect
	void SetOutputBusVolume(float BusVolume, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetOutputBusVolume
	void SetOcclusionRefreshInterval(float RefreshInterval, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
	void SetMultiplePositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FTransform> Positions, uint8_t MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultiplePositions
	void SetMultipleChannelMaskEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FAkChannelMask> ChannelMasks, struct TArray<struct FTransform> Positions, uint8_t MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions
	void SetMultipleChannelEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<uint8_t> ChannelMasks, struct TArray<struct FTransform> Positions, uint8_t MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
	void SetGameObjectToPortalObstruction(struct UAkComponent* GameObjectAkComponent, struct UAkPortalComponent* PortalComponent, float ObstructionValue); // Function AkAudio.AkGameplayStatics.SetGameObjectToPortalObstruction
	void SetDistanceProbe(struct AActor* Listener, struct AActor* DistanceProbe); // Function AkAudio.AkGameplayStatics.SetDistanceProbe
	void SetCurrentAudioCultureAsync(struct FString AudioCulture, struct FDelegate& Completed); // Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync
	void SetCurrentAudioCulture(struct FString AudioCulture, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture
	bool SetBusEffectByName(struct FString InBusName, int32_t InEffectIndex, struct UAkEffectShareSet* InEffectShareSet); // Function AkAudio.AkGameplayStatics.SetBusEffectByName
	bool SetBusEffectByID(struct FAkUniqueID InBusID, int32_t InEffectIndex, struct UAkEffectShareSet* InEffectShareSet); // Function AkAudio.AkGameplayStatics.SetBusEffectByID
	void SetBusConfig(struct FString BusName, uint8_t ChannelConfiguration); // Function AkAudio.AkGameplayStatics.SetBusConfig
	bool SetAuxBusEffect(struct UAkAuxBus* InAuxBus, int32_t InEffectIndex, struct UAkEffectShareSet* InEffectShareSet); // Function AkAudio.AkGameplayStatics.SetAuxBusEffect
	bool SetActorMixerEffect(struct FAkUniqueID InAudioNodeID, int32_t InEffectIndex, struct UAkEffectShareSet* InEffectShareSet); // Function AkAudio.AkGameplayStatics.SetActorMixerEffect
	void ResetRTPCValue(struct UAkRtpc* RtpcValue, int32_t InterpolationTimeMs, struct AActor* Actor, struct FName Rtpc); // Function AkAudio.AkGameplayStatics.ResetRTPCValue
	void ReplaceMainOutput(struct FAkOutputSettings& MainOutputSettings); // Function AkAudio.AkGameplayStatics.ReplaceMainOutput
	void PostTrigger(struct UAkTrigger* TriggerValue, struct AActor* Actor, struct FName Trigger); // Function AkAudio.AkGameplayStatics.PostTrigger
	void PostEventByName(struct FString EventName, struct AActor* Actor, bool bStopWhenAttachedToDestroyed); // Function AkAudio.AkGameplayStatics.PostEventByName
	void PostEventAtLocationByName(struct FString EventName, struct FVector Location, struct FRotator Orientation, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
	int32_t PostEventAtLocation(struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, struct FString EventName, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PostEventAtLocation
	int32_t PostEvent(struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, bool bStopWhenAttachedToDestroyed, struct FString EventName); // Function AkAudio.AkGameplayStatics.PostEvent
	void PostAndWaitForEndOfEventAsync(struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t& PlayingID, bool bStopWhenAttachedToDestroyed, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync
	int32_t PostAndWaitForEndOfEvent(struct UAkAudioEvent* AkEvent, struct AActor* Actor, bool bStopWhenAttachedToDestroyed, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
	void LoadInitBank(); // Function AkAudio.AkGameplayStatics.LoadInitBank
	void LoadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.LoadBankByName
	bool IsGame(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.IsGame
	bool IsEditor(); // Function AkAudio.AkGameplayStatics.IsEditor
	void GetSpeakerAngles(struct TArray<float>& SpeakerAngles, float& HeightAngle, struct FString DeviceShareSet); // Function AkAudio.AkGameplayStatics.GetSpeakerAngles
	void GetRTPCValue(struct UAkRtpc* RtpcValue, int32_t PlayingID, uint8_t InputValueType, float& Value, uint8_t& OutputValueType, struct AActor* Actor, struct FName Rtpc); // Function AkAudio.AkGameplayStatics.GetRTPCValue
	struct FString GetCurrentAudioCulture(); // Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture
	struct TArray<struct FString> GetAvailableAudioCultures(); // Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures
	struct UAkComponent* GetAkComponent(struct USceneComponent* AttachToComponent, bool& ComponentCreated, struct FName AttachPointName, struct FVector Location, enum class EAttachLocation LocationType); // Function AkAudio.AkGameplayStatics.GetAkComponent
	struct UObject* GetAkAudioTypeUserData(struct UAkAudioType* Instance, UObject* Type); // Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData
	void ExecuteActionOnPlayingID(uint8_t ActionType, int32_t PlayingID, int32_t TransitionDuration, uint8_t FadeCurve); // Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID
	void ExecuteActionOnEvent(struct UAkAudioEvent* AkEvent, uint8_t ActionType, struct AActor* Actor, int32_t TransitionDuration, uint8_t FadeCurve, int32_t PlayingID); // Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent
	void ClearSoundBanksAndMedia(); // Function AkAudio.AkGameplayStatics.ClearSoundBanksAndMedia
	void ClearBanks(); // Function AkAudio.AkGameplayStatics.ClearBanks
	void CancelEventCallback(struct FDelegate& PostEventCallback); // Function AkAudio.AkGameplayStatics.CancelEventCallback
	void AddOutputCaptureMarker(struct FString MarkerText); // Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
}; 
 
 


// Class AkAudio.AkSurfaceReflectorSetComponent
// Size: 0x2F0(Inherited: 0x2C0)
struct UAkSurfaceReflectorSetComponent : UAkAcousticTextureSetComponent
{
	char pad_704_1 : 7;  // 0x2C0 (0x2C0)
	bool bEnableSurfaceReflectors : 1;  // 0x2B8 (0x2B8)
	struct TArray<struct FAkSurfacePoly> AcousticPolys;  // 0x2C0 (0x2C0)
	char pad_721_1 : 7;  // 0x2D1 (0x2D1)
	bool bEnableDiffraction : 1;  // 0x2D0 (0x2D0)
	char pad_722_1 : 7;  // 0x2D2 (0x2D2)
	bool bEnableDiffractionOnBoundaryEdges : 1;  // 0x2D1 (0x2D1)
	char pad_723[5];  // 0x2D3 (0x2D3)
	struct AActor* AssociatedRoom;  // 0x2D8 (0x2D8)
	char pad_736[16];  // 0x2E0 (0x2E0)


	void UpdateSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
	void UpdateAcousticProperties(struct TArray<struct FAkSurfacePoly> in_AcousticPolys); // Function AkAudio.AkSurfaceReflectorSetComponent.UpdateAcousticProperties
	void SendSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
	void RemoveSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
}; 
 
 


// Class AkAudio.AkIOSPlatformInfo
// Size: 0x70(Inherited: 0x70)
struct UAkIOSPlatformInfo : UAkPlatformInfo
{


}; 
 
 


// Class AkAudio.AkEventCallbackInfo
// Size: 0x38(Inherited: 0x30)
struct UAkEventCallbackInfo : UAkCallbackInfo
{
	int32_t PlayingID;  // 0x30 (0x30)
	int32_t EventId;  // 0x34 (0x34)


}; 
 
 


// Class AkAudio.AkCallbackInfo
// Size: 0x30(Inherited: 0x28)
struct UAkCallbackInfo : UObject
{
	struct UAkComponent* AkComponent;  // 0x28 (0x28)


}; 
 
 


// Class AkAudio.AkMIDIEventCallbackInfo
// Size: 0x48(Inherited: 0x38)
struct UAkMIDIEventCallbackInfo : UAkEventCallbackInfo
{
	char pad_56[16];  // 0x38 (0x38)


	uint8_t GetType(); // Function AkAudio.AkMIDIEventCallbackInfo.GetType
	bool GetProgramChange(struct FAkMidiProgramChange& AsProgramChange); // Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
	bool GetPitchBend(struct FAkMidiPitchBend& AsPitchBend); // Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
	bool GetNoteOn(struct FAkMidiNoteOnOff& AsNoteOn); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
	bool GetNoteOff(struct FAkMidiNoteOnOff& AsNoteOff); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch& AsNoteAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
	bool GetGeneric(struct FAkMidiGeneric& AsGeneric); // Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch& AsChannelAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
	char GetChannel(); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannel
	bool GetCc(struct FAkMidiCc& AsCc); // Function AkAudio.AkMIDIEventCallbackInfo.GetCc
}; 
 
 


// Class AkAudio.AkDurationCallbackInfo
// Size: 0x50(Inherited: 0x38)
struct UAkDurationCallbackInfo : UAkEventCallbackInfo
{
	float Duration;  // 0x38 (0x38)
	float EstimatedDuration;  // 0x3C (0x3C)
	int32_t AudioNodeID;  // 0x40 (0x40)
	int32_t MediaId;  // 0x44 (0x44)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool bStreaming : 1;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)


}; 
 
 


// Class AkAudio.AkGroupValue
// Size: 0x60(Inherited: 0x40)
struct UAkGroupValue : UAkAudioType
{
	struct FWwiseGroupValueCookedData GroupValueCookedData;  // 0x40 (0x40)
	uint32_t GroupShortId;  // 0x54 (0x54)
	char pad_88[8];  // 0x58 (0x58)


}; 
 
 


// Class AkAudio.AkMusicSyncCallbackInfo
// Size: 0x70(Inherited: 0x30)
struct UAkMusicSyncCallbackInfo : UAkCallbackInfo
{
	int32_t PlayingID;  // 0x30 (0x30)
	struct FAkSegmentInfo SegmentInfo;  // 0x34 (0x34)
	uint8_t MusicSyncType;  // 0x58 (0x58)
	char pad_89[7];  // 0x59 (0x59)
	struct FString UserCueName;  // 0x60 (0x60)


}; 
 
 


// Class AkAudio.AkTVOSInitializationSettings
// Size: 0x108(Inherited: 0x28)
struct UAkTVOSInitializationSettings : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;  // 0x30 (0x30)
	struct FAkAudioSession AudioSession;  // 0xA0 (0xA0)
	char pad_172[4];  // 0xAC (0xAC)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;  // 0xB0 (0xB0)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;  // 0xD0 (0xD0)


}; 
 
 


// Class AkAudio.AkGeometryComponent
// Size: 0x440(Inherited: 0x2C0)
struct UAkGeometryComponent : UAkAcousticTextureSetComponent
{
	uint8_t MeshType;  // 0x2B8 (0x2B8)
	int32_t LOD;  // 0x2BC (0x2BC)
	float WeldingThreshold;  // 0x2C0 (0x2C0)
	struct TMap<struct UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;  // 0x2C8 (0x2C8)
	struct FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride;  // 0x318 (0x318)
	char pad_817_1 : 7;  // 0x331 (0x331)
	bool bEnableDiffraction : 1;  // 0x330 (0x330)
	char pad_818_1 : 7;  // 0x332 (0x332)
	bool bEnableDiffractionOnBoundaryEdges : 1;  // 0x331 (0x331)
	char pad_819[5];  // 0x333 (0x333)
	struct AActor* AssociatedRoom;  // 0x338 (0x338)
	char pad_832[16];  // 0x340 (0x340)
	struct FAkGeometryData GeometryData;  // 0x350 (0x350)
	struct TMap<int32_t, double> SurfaceAreas;  // 0x3A0 (0x3A0)
	char pad_1008[80];  // 0x3F0 (0x3F0)


	void UpdateGeometry(); // Function AkAudio.AkGeometryComponent.UpdateGeometry
	void SendGeometry(); // Function AkAudio.AkGeometryComponent.SendGeometry
	void RemoveGeometry(); // Function AkAudio.AkGeometryComponent.RemoveGeometry
	void ConvertMesh(); // Function AkAudio.AkGeometryComponent.ConvertMesh
}; 
 
 


// Class AkAudio.AkSpatialAudioVolume
// Size: 0x2E0(Inherited: 0x2C8)
struct AAkSpatialAudioVolume : AVolume
{
	struct UAkSurfaceReflectorSetComponent* SurfaceReflectorSet;  // 0x2C8 (0x2C8)
	struct UAkLateReverbComponent* LateReverb;  // 0x2D0 (0x2D0)
	struct UAkRoomComponent* Room;  // 0x2D8 (0x2D8)


}; 
 
 


// Class AkAudio.AkHololensInitializationSettings
// Size: 0x100(Inherited: 0x28)
struct UAkHololensInitializationSettings : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;  // 0x30 (0x30)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;  // 0xA0 (0xA0)
	struct FAkHololensAdvancedInitializationSettings AdvancedSettings;  // 0xC0 (0xC0)
	char pad_252[4];  // 0xFC (0xFC)


	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering
}; 
 
 


// Class AkAudio.AkHololensPlatformInfo
// Size: 0x70(Inherited: 0x70)
struct UAkHololensPlatformInfo : UAkPlatformInfo
{


}; 
 
 


// Class AkAudio.AkInitBank
// Size: 0x88(Inherited: 0x40)
struct UAkInitBank : UAkAudioType
{
	struct FWwiseInitBankCookedData InitBankCookedData;  // 0x40 (0x40)
	char pad_128[8];  // 0x80 (0x80)


}; 
 
 


// Class AkAudio.AkSpotReflector
// Size: 0x2C8(Inherited: 0x290)
struct AAkSpotReflector : AActor
{
	struct UAkAuxBus* EarlyReflectionAuxBus;  // 0x290 (0x290)
	struct FString EarlyReflectionAuxBusName;  // 0x298 (0x298)
	struct UAkAcousticTexture* AcousticTexture;  // 0x2A8 (0x2A8)
	float DistanceScalingFactor;  // 0x2B0 (0x2B0)
	float Level;  // 0x2B4 (0x2B4)
	char pad_696_1 : 7;  // 0x2B8 (0x2B8)
	bool SameRoomOnly : 1;  // 0x2B8 (0x2B8)
	char pad_697_1 : 7;  // 0x2B9 (0x2B9)
	bool EnableRoomOverride : 1;  // 0x2B9 (0x2B9)
	char pad_698[6];  // 0x2BA (0x2BA)
	struct AActor* RoomOverride;  // 0x2C0 (0x2C0)


}; 
 
 


// Class AkAudio.AkWindowsInitializationSettings
// Size: 0x100(Inherited: 0x28)
struct UAkWindowsInitializationSettings : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;  // 0x30 (0x30)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;  // 0xA0 (0xA0)
	struct FAkWindowsAdvancedInitializationSettings AdvancedSettings;  // 0xC0 (0xC0)


	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
}; 
 
 


// Class AkAudio.AkRoomComponent
// Size: 0x2F0(Inherited: 0x2C0)
struct UAkRoomComponent : UAkGameObject
{
	char pad_704_1 : 7;  // 0x2C0 (0x2C0)
	bool bEnable : 1;  // 0x2C0 (0x2C0)
	char pad_705_1 : 7;  // 0x2C1 (0x2C1)
	bool bDynamic : 1;  // 0x2C1 (0x2C1)
	char pad_706[2];  // 0x2C2 (0x2C2)
	float Priority;  // 0x2C4 (0x2C4)
	float WallOcclusion;  // 0x2C8 (0x2C8)
	float AuxSendLevel;  // 0x2CC (0x2CC)
	char pad_720_1 : 7;  // 0x2D0 (0x2D0)
	bool AutoPost : 1;  // 0x2D0 (0x2D0)
	char pad_721[15];  // 0x2D1 (0x2D1)
	struct UAkAcousticTextureSetComponent* GeometryComponent;  // 0x2E0 (0x2E0)
	char pad_744[8];  // 0x2E8 (0x2E8)


	void SetGeometryComponent(struct UAkAcousticTextureSetComponent* textureSetComponent); // Function AkAudio.AkRoomComponent.SetGeometryComponent
	struct UPrimitiveComponent* GetPrimitiveParent(); // Function AkAudio.AkRoomComponent.GetPrimitiveParent
}; 
 
 


// Class AkAudio.AkIOSInitializationSettings
// Size: 0x108(Inherited: 0x28)
struct UAkIOSInitializationSettings : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;  // 0x30 (0x30)
	struct FAkAudioSession AudioSession;  // 0xA0 (0xA0)
	char pad_172[4];  // 0xAC (0xAC)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;  // 0xB0 (0xB0)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;  // 0xD0 (0xD0)


}; 
 
 


// Class AkAudio.AkLinuxPlatformInfo
// Size: 0x70(Inherited: 0x70)
struct UAkLinuxPlatformInfo : UAkPlatformInfo
{


}; 
 
 


// Class AkAudio.AkItemProperties
// Size: 0x190(Inherited: 0x150)
struct UAkItemProperties : UWidget
{
	struct FMulticastInlineDelegate OnSelectionChanged;  // 0x150 (0x150)
	struct FMulticastInlineDelegate OnPropertyDragged;  // 0x160 (0x160)
	char pad_368[32];  // 0x170 (0x170)


	void SetSearchText(struct FString newText); // Function AkAudio.AkItemProperties.SetSearchText
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemProperties.GetSelectedProperty
	struct FString GetSearchText(); // Function AkAudio.AkItemProperties.GetSearchText
}; 
 
 


// Class AkAudio.AkLateReverbComponent
// Size: 0x330(Inherited: 0x2A0)
struct UAkLateReverbComponent : USceneComponent
{
	char pad_672_1 : 7;  // 0x2A0 (0x2A0)
	bool bEnable : 1;  // 0x2A0 (0x2A0)
	char pad_673[3];  // 0x2A1 (0x2A1)
	float SendLevel;  // 0x2A4 (0x2A4)
	float FadeRate;  // 0x2A8 (0x2A8)
	float Priority;  // 0x2AC (0x2AC)
	char pad_688_1 : 7;  // 0x2B0 (0x2B0)
	bool AutoAssignAuxBus : 1;  // 0x2B0 (0x2B0)
	char pad_689[7];  // 0x2B1 (0x2B1)
	struct UAkAuxBus* AuxBus;  // 0x2B8 (0x2B8)
	struct FString AuxBusName;  // 0x2C0 (0x2C0)
	char pad_720[8];  // 0x2D0 (0x2D0)
	struct UAkAuxBus* AuxBusManual;  // 0x2D8 (0x2D8)
	char pad_736[80];  // 0x2E0 (0x2E0)


	void AssociateAkTextureSetComponent(struct UAkAcousticTextureSetComponent* textureSetComponent); // Function AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent
}; 
 
 


// Class AkAudio.AkTrigger
// Size: 0x50(Inherited: 0x40)
struct UAkTrigger : UAkAudioType
{
	struct FWwiseTriggerCookedData TriggerCookedData;  // 0x40 (0x40)
	char pad_76[4];  // 0x4C (0x4C)


}; 
 
 


// Class AkAudio.AkLinuxInitializationSettings
// Size: 0xF8(Inherited: 0x28)
struct UAkLinuxInitializationSettings : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;  // 0x30 (0x30)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;  // 0xA0 (0xA0)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;  // 0xC0 (0xC0)


	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
}; 
 
 


// Class AkAudio.AkMacInitializationSettings
// Size: 0xF8(Inherited: 0x28)
struct UAkMacInitializationSettings : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;  // 0x30 (0x30)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;  // 0xA0 (0xA0)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;  // 0xC0 (0xC0)


	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
}; 
 
 


// Class AkAudio.AkMacPlatformInfo
// Size: 0x70(Inherited: 0x70)
struct UAkMacPlatformInfo : UAkPlatformInfo
{


}; 
 
 


// Class AkAudio.AkPlatformInitialisationSettingsBase
// Size: 0x28(Inherited: 0x28)
struct UAkPlatformInitialisationSettingsBase : UInterface
{


}; 
 
 


// Class AkAudio.AkSwitchValue
// Size: 0x60(Inherited: 0x60)
struct UAkSwitchValue : UAkGroupValue
{


}; 
 
 


// Class AkAudio.AkRtpc
// Size: 0x50(Inherited: 0x40)
struct UAkRtpc : UAkAudioType
{
	struct FWwiseGameParameterCookedData GameParameterCookedData;  // 0x40 (0x40)
	char pad_76[4];  // 0x4C (0x4C)


}; 
 
 


// Class AkAudio.AkSettings
// Size: 0x370(Inherited: 0x28)
struct UAkSettings : UObject
{
	char MaxSimultaneousReverbVolumes;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct FFilePath WwiseProjectPath;  // 0x30 (0x30)
	struct FDirectoryPath WwiseSoundDataFolder;  // 0x40 (0x40)
	struct FDirectoryPath GeneratedSoundBanksFolder;  // 0x50 (0x50)
	struct FDirectoryPath WwiseStagingDirectory;  // 0x60 (0x60)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool bSoundBanksTransfered : 1;  // 0x70 (0x70)
	char pad_113_1 : 7;  // 0x71 (0x71)
	bool bAssetsMigrated : 1;  // 0x71 (0x71)
	char pad_114_1 : 7;  // 0x72 (0x72)
	bool bProjectMigrated : 1;  // 0x72 (0x72)
	char pad_115_1 : 7;  // 0x73 (0x73)
	bool bAutoConnectToWAAPI : 1;  // 0x73 (0x73)
	enum class ECollisionChannel DefaultOcclusionCollisionChannel;  // 0x74 (0x74)
	enum class ECollisionChannel DefaultFitToGeometryCollisionChannel;  // 0x75 (0x75)
	char pad_118[2];  // 0x76 (0x76)
	struct TMap<struct TSoftObjectPtr<UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap> AkGeometryMap;  // 0x78 (0x78)
	float GlobalDecayAbsorption;  // 0xC8 (0xC8)
	char pad_204[4];  // 0xCC (0xCC)
	struct TSoftObjectPtr<UAkAuxBus> DefaultReverbAuxBus;  // 0xD0 (0xD0)
	struct TMap<float, struct TSoftObjectPtr<UAkAuxBus>> EnvironmentDecayAuxBusMap;  // 0x100 (0x100)
	struct FString HFDampingName;  // 0x150 (0x150)
	struct FString DecayEstimateName;  // 0x160 (0x160)
	struct FString TimeToFirstReflectionName;  // 0x170 (0x170)
	struct TSoftObjectPtr<UAkRtpc> HFDampingRTPC;  // 0x180 (0x180)
	struct TSoftObjectPtr<UAkRtpc> DecayEstimateRTPC;  // 0x1B0 (0x1B0)
	struct TSoftObjectPtr<UAkRtpc> TimeToFirstReflectionRTPC;  // 0x1E0 (0x1E0)
	struct TSoftObjectPtr<UAkAudioEvent> AudioInputEvent;  // 0x210 (0x210)
	struct TMap<struct FGuid, struct FAkAcousticTextureParams> AcousticTextureParamsMap;  // 0x240 (0x240)
	char pad_656_1 : 7;  // 0x290 (0x290)
	bool SplitSwitchContainerMedia : 1;  // 0x290 (0x290)
	char pad_657_1 : 7;  // 0x291 (0x291)
	bool SplitMediaPerFolder : 1;  // 0x291 (0x291)
	char pad_658_1 : 7;  // 0x292 (0x292)
	bool UseEventBasedPackaging : 1;  // 0x292 (0x292)
	char pad_659[5];  // 0x293 (0x293)
	struct FString CommandletCommitMessage;  // 0x298 (0x298)
	struct TMap<struct FString, struct FString> UnrealCultureToWwiseCulture;  // 0x2A8 (0x2A8)
	struct FString DefaultAssetCreationPath;  // 0x2F8 (0x2F8)
	struct TSoftObjectPtr<UAkInitBank> InitBank;  // 0x308 (0x308)
	uint8_t AudioRouting;  // 0x338 (0x338)
	char pad_828_1 : 7;  // 0x33C (0x33C)
	bool bWwiseSoundEngineEnabled : 1;  // 0x33C (0x33C)
	char pad_829_1 : 7;  // 0x33D (0x33D)
	bool bWwiseAudioLinkEnabled : 1;  // 0x33D (0x33D)
	char pad_830_1 : 7;  // 0x33E (0x33E)
	bool bAkAudioMixerEnabled : 1;  // 0x33E (0x33E)
	char pad_831_1 : 7;  // 0x33F (0x33F)
	bool AskedToUseNewAssetManagement : 1;  // 0x33F (0x33F)
	char pad_832_1 : 7;  // 0x340 (0x340)
	bool bEnableMultiCoreRendering : 1;  // 0x340 (0x340)
	char pad_833_1 : 7;  // 0x341 (0x341)
	bool MigratedEnableMultiCoreRendering : 1;  // 0x341 (0x341)
	char pad_834_1 : 7;  // 0x342 (0x342)
	bool FixupRedirectorsDuringMigration : 1;  // 0x342 (0x342)
	char pad_835[5];  // 0x343 (0x343)
	struct FDirectoryPath WwiseWindowsInstallationPath;  // 0x348 (0x348)
	struct FFilePath WwiseMacInstallationPath;  // 0x358 (0x358)
	char pad_872[8];  // 0x368 (0x368)


}; 
 
 


// Class AkAudio.AkSlider
// Size: 0x740(Inherited: 0x150)
struct UAkSlider : UWidget
{
	float Value;  // 0x150 (0x150)
	struct FDelegate ValueDelegate;  // 0x154 (0x154)
	char pad_356[12];  // 0x164 (0x164)
	struct FSliderStyle WidgetStyle;  // 0x170 (0x170)
	enum class EOrientation Orientation;  // 0x670 (0x670)
	char pad_1649[3];  // 0x671 (0x671)
	struct FLinearColor SliderBarColor;  // 0x674 (0x674)
	struct FLinearColor SliderHandleColor;  // 0x684 (0x684)
	char pad_1684_1 : 7;  // 0x694 (0x694)
	bool IndentHandle : 1;  // 0x694 (0x694)
	char pad_1685_1 : 7;  // 0x695 (0x695)
	bool Locked : 1;  // 0x695 (0x695)
	char pad_1686[2];  // 0x696 (0x696)
	float StepSize;  // 0x698 (0x698)
	char pad_1692_1 : 7;  // 0x69C (0x69C)
	bool IsFocusable : 1;  // 0x69C (0x69C)
	char pad_1693[3];  // 0x69D (0x69D)
	struct FAkPropertyToControl ThePropertyToControl;  // 0x6A0 (0x6A0)
	struct FAkWwiseItemToControl ItemToControl;  // 0x6B0 (0x6B0)
	struct FMulticastInlineDelegate OnValueChanged;  // 0x6F0 (0x6F0)
	struct FMulticastInlineDelegate OnItemDropped;  // 0x700 (0x700)
	struct FMulticastInlineDelegate OnPropertyDropped;  // 0x710 (0x710)
	char pad_1824[32];  // 0x720 (0x720)


	void SetValue(float InValue); // Function AkAudio.AkSlider.SetValue
	void SetStepSize(float InValue); // Function AkAudio.AkSlider.SetStepSize
	void SetSliderHandleColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderHandleColor
	void SetSliderBarColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderBarColor
	void SetLocked(bool InValue); // Function AkAudio.AkSlider.SetLocked
	void SetIndentHandle(bool InValue); // Function AkAudio.AkSlider.SetIndentHandle
	void SetAkSliderItemProperty(struct FString ItemProperty); // Function AkAudio.AkSlider.SetAkSliderItemProperty
	void SetAkSliderItemId(struct FGuid& ItemId); // Function AkAudio.AkSlider.SetAkSliderItemId
	float GetValue(); // Function AkAudio.AkSlider.GetValue
	struct FString GetAkSliderItemProperty(); // Function AkAudio.AkSlider.GetAkSliderItemProperty
	struct FGuid GetAkSliderItemId(); // Function AkAudio.AkSlider.GetAkSliderItemId
}; 
 
 


// Class AkAudio.AkWaapiCalls
// Size: 0x28(Inherited: 0x28)
struct UAkWaapiCalls : UBlueprintFunctionLibrary
{


	struct FAKWaapiJsonObject Unsubscribe(struct FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone); // Function AkAudio.AkWaapiCalls.Unsubscribe
	struct FAKWaapiJsonObject SubscribeToWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiOptions, struct FDelegate& Callback, struct FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone); // Function AkAudio.AkWaapiCalls.SubscribeToWaapi
	void SetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription, int32_t ID); // Function AkAudio.AkWaapiCalls.SetSubscriptionID
	bool RegisterWaapiProjectLoadedCallback(struct FDelegate& Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
	bool RegisterWaapiConnectionLostCallback(struct FDelegate& Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
	int32_t GetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription); // Function AkAudio.AkWaapiCalls.GetSubscriptionID
	struct FText Conv_FAkWaapiSubscriptionIdToText(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
	struct FString Conv_FAkWaapiSubscriptionIdToString(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
	struct FAKWaapiJsonObject CallWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiArgs, struct FAKWaapiJsonObject& WaapiOptions); // Function AkAudio.AkWaapiCalls.CallWaapi
}; 
 
 


// Class AkAudio.SAkWaapiFieldNamesConv
// Size: 0x28(Inherited: 0x28)
struct USAkWaapiFieldNamesConv : UBlueprintFunctionLibrary
{


	struct FText Conv_FAkWaapiFieldNamesToText(struct FAkWaapiFieldNames& INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
	struct FString Conv_FAkWaapiFieldNamesToString(struct FAkWaapiFieldNames& INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
}; 
 
 


// Class AkAudio.AkWaapiJsonManager
// Size: 0x28(Inherited: 0x28)
struct UAkWaapiJsonManager : UBlueprintFunctionLibrary
{


	struct FAKWaapiJsonObject SetStringField(struct FAkWaapiFieldNames& FieldName, struct FString FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetStringField
	struct FAKWaapiJsonObject SetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetObjectField
	struct FAKWaapiJsonObject SetNumberField(struct FAkWaapiFieldNames& FieldName, float FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetNumberField
	struct FAKWaapiJsonObject SetBoolField(struct FAkWaapiFieldNames& FieldName, bool FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetBoolField
	struct FAKWaapiJsonObject SetArrayStringFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FString>& FieldStringValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayStringFields
	struct FAKWaapiJsonObject SetArrayObjectFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FAKWaapiJsonObject>& FieldObjectValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields
	struct FString GetStringField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetStringField
	struct FAKWaapiJsonObject GetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetObjectField
	float GetNumberField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetNumberField
	int32_t GetIntegerField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetIntegerField
	bool GetBoolField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetBoolField
	struct TArray<struct FAKWaapiJsonObject> GetArrayField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetArrayField
	struct FText Conv_FAKWaapiJsonObjectToText(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
	struct FString Conv_FAKWaapiJsonObjectToString(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
}; 
 
 


// Class AkAudio.AkWaapiUriConv
// Size: 0x28(Inherited: 0x28)
struct UAkWaapiUriConv : UBlueprintFunctionLibrary
{


	struct FText Conv_FAkWaapiUriToText(struct FAkWaapiUri& INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
	struct FString Conv_FAkWaapiUriToString(struct FAkWaapiUri& INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
}; 
 
 


// Class AkAudio.AkWin32PlatformInfo
// Size: 0x70(Inherited: 0x70)
struct UAkWin32PlatformInfo : UAkPlatformInfo
{


}; 
 
 


// Class AkAudio.AkWin64PlatformInfo
// Size: 0x70(Inherited: 0x70)
struct UAkWin64PlatformInfo : UAkPlatformInfo
{


}; 
 
 


// Class AkAudio.AkWindowsPlatformInfo
// Size: 0x70(Inherited: 0x70)
struct UAkWindowsPlatformInfo : UAkWin64PlatformInfo
{


}; 
 
 


// Class AkAudio.AkWwiseTreeSelector
// Size: 0x1B0(Inherited: 0x150)
struct UAkWwiseTreeSelector : UWidget
{
	struct FMulticastInlineDelegate OnSelectionChanged;  // 0x150 (0x150)
	struct FMulticastInlineDelegate OnItemDragged;  // 0x160 (0x160)
	char pad_368[64];  // 0x170 (0x170)


}; 
 
 


// Class AkAudio.MovieSceneAkAudioEventSection
// Size: 0x170(Inherited: 0xF0)
struct UMovieSceneAkAudioEventSection : UMovieSceneSection
{
	char pad_240[40];  // 0xF0 (0xF0)
	struct UAkAudioEvent* Event;  // 0x118 (0x118)
	char pad_288_1 : 7;  // 0x120 (0x120)
	bool RetriggerEvent : 1;  // 0x120 (0x120)
	char pad_289[3];  // 0x121 (0x121)
	int32_t ScrubTailLengthMs;  // 0x124 (0x124)
	char pad_296_1 : 7;  // 0x128 (0x128)
	bool StopAtSectionEnd : 1;  // 0x128 (0x128)
	char pad_297[7];  // 0x129 (0x129)
	struct FString EventName;  // 0x130 (0x130)
	float MaxSourceDuration;  // 0x140 (0x140)
	char pad_324[4];  // 0x144 (0x144)
	struct FString MaxDurationSourceID;  // 0x148 (0x148)
	char pad_344[24];  // 0x158 (0x158)


}; 
 
 


// Class AkAudio.MovieSceneAkTrack
// Size: 0xB0(Inherited: 0x98)
struct UMovieSceneAkTrack : UMovieSceneTrack
{
	struct TArray<struct UMovieSceneSection*> Sections;  // 0x98 (0x98)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool bIsAMasterTrack : 1;  // 0xA8 (0xA8)
	char pad_169[7];  // 0xA9 (0xA9)


}; 
 
 


// Class AkAudio.MovieSceneAkAudioRTPCSection
// Size: 0x2C8(Inherited: 0xF0)
struct UMovieSceneAkAudioRTPCSection : UMovieSceneSection
{
	struct UAkRtpc* Rtpc;  // 0xF0 (0xF0)
	struct FString Name;  // 0xF8 (0xF8)
	struct FRichCurve FloatCurve;  // 0x108 (0x108)
	struct FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper;  // 0x188 (0x188)
	struct FMovieSceneFloatChannel RTPCChannel;  // 0x1B8 (0x1B8)


}; 
 
 


// Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0xB8(Inherited: 0xB0)
struct UMovieSceneAkAudioRTPCTrack : UMovieSceneAkTrack
{
	char pad_176[8];  // 0xB0 (0xB0)


}; 
 
 


// Class AkAudio.PostEventAsync
// Size: 0x88(Inherited: 0x30)
struct UPostEventAsync : UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate Completed;  // 0x30 (0x30)
	char pad_64[72];  // 0x40 (0x40)


	struct UPostEventAsync* PostEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, bool bStopWhenAttachedToDestroyed); // Function AkAudio.PostEventAsync.PostEventAsync
	void PollPostEventFuture(); // Function AkAudio.PostEventAsync.PollPostEventFuture
}; 
 
 


// Class AkAudio.PostEventAtLocationAsync
// Size: 0x98(Inherited: 0x30)
struct UPostEventAtLocationAsync : UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate Completed;  // 0x30 (0x30)
	char pad_64[88];  // 0x40 (0x40)


	struct UPostEventAtLocationAsync* PostEventAtLocationAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation); // Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
	void PollPostEventFuture(); // Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture
}; 
 
 


