#pragma once 
#include <Niagara_Structs.h>
 
 
 
// Class Niagara.NiagaraDataInterfaceSimCacheReader
// Size: 0x68(Inherited: 0x38)
struct UNiagaraDataInterfaceSimCacheReader : UNiagaraDataInterface
{
	struct FNiagaraUserParameterBinding SimCacheBinding;  // 0x38 (0x38)
	struct UNiagaraSimCache* SimCache;  // 0x58 (0x58)
	struct FName EmitterBinding;  // 0x60 (0x60)


}; 
 
 


// Class Niagara.NiagaraConvertInPlaceUtilityBase
// Size: 0x28(Inherited: 0x28)
struct UNiagaraConvertInPlaceUtilityBase : UObject
{


}; 
 
 


// Class Niagara.NiagaraEditorParametersAdapterBase
// Size: 0x28(Inherited: 0x28)
struct UNiagaraEditorParametersAdapterBase : UObject
{


}; 
 
 


// Class Niagara.NiagaraComponentPool
// Size: 0x80(Inherited: 0x28)
struct UNiagaraComponentPool : UObject
{
	struct TMap<struct UNiagaraSystem*, struct FNCPool> WorldParticleSystemPools;  // 0x28 (0x28)
	char pad_120[8];  // 0x78 (0x78)


}; 
 
 


// Class Niagara.NiagaraDataInterface
// Size: 0x38(Inherited: 0x28)
struct UNiagaraDataInterface : UNiagaraDataInterfaceBase
{
	char pad_40[16];  // 0x28 (0x28)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceSpriteRendererInfo
// Size: 0x40(Inherited: 0x38)
struct UNiagaraDataInterfaceSpriteRendererInfo : UNiagaraDataInterface
{
	struct UNiagaraSpriteRendererProperties* SpriteRenderer;  // 0x38 (0x38)


}; 
 
 


// Class Niagara.NiagaraMessageDataBase
// Size: 0x28(Inherited: 0x28)
struct UNiagaraMessageDataBase : UObject
{


}; 
 
 


// Class Niagara.NiagaraCullProxyComponent
// Size: 0x7E0(Inherited: 0x7D0)
struct UNiagaraCullProxyComponent : UNiagaraComponent
{
	struct TArray<struct FNiagaraCulledComponentInfo> Instances;  // 0x7D0 (0x7D0)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceVirtualTexture
// Size: 0x60(Inherited: 0x38)
struct UNiagaraDataInterfaceVirtualTexture : UNiagaraDataInterface
{
	struct URuntimeVirtualTexture* Texture;  // 0x38 (0x38)
	struct FNiagaraUserParameterBinding TextureUserParameter;  // 0x40 (0x40)


}; 
 
 


// Class Niagara.NiagaraParameterDefinitionsBase
// Size: 0x28(Inherited: 0x28)
struct UNiagaraParameterDefinitionsBase : UObject
{


}; 
 
 


// Class Niagara.NiagaraDataInterfaceArrayFloat3
// Size: 0x58(Inherited: 0x48)
struct UNiagaraDataInterfaceArrayFloat3 : UNiagaraDataInterfaceArray
{
	struct TArray<struct FVector3f> InternalFloatData;  // 0x48 (0x48)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceSpline
// Size: 0xB8(Inherited: 0x38)
struct UNiagaraDataInterfaceSpline : UNiagaraDataInterface
{
	struct AActor* Source;  // 0x38 (0x38)
	struct FNiagaraUserParameterBinding SplineUserParameter;  // 0x40 (0x40)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool bUseLUT : 1;  // 0x60 (0x60)
	char pad_97[3];  // 0x61 (0x61)
	int32_t NumLUTSteps;  // 0x64 (0x64)
	char pad_104[80];  // 0x68 (0x68)


}; 
 
 


// Class Niagara.NiagaraScriptSourceBase
// Size: 0x48(Inherited: 0x28)
struct UNiagaraScriptSourceBase : UObject
{
	char pad_40[32];  // 0x28 (0x28)


}; 
 
 


// Class Niagara.NiagaraSettings
// Size: 0x108(Inherited: 0x38)
struct UNiagaraSettings : UDeveloperSettings
{
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bSystemsSupportLargeWorldCoordinates : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool bEnforceStrictStackTypes : 1;  // 0x39 (0x39)
	char pad_58_1 : 7;  // 0x3A (0x3A)
	bool bExperimentalVMEnabled : 1;  // 0x3A (0x3A)
	char pad_59[5];  // 0x3B (0x3B)
	struct FSoftObjectPath DefaultEffectType;  // 0x40 (0x40)
	struct FLinearColor PositionPinTypeColor;  // 0x60 (0x60)
	struct TArray<struct FText> QualityLevels;  // 0x70 (0x70)
	struct TMap<struct FString, struct FText> ComponentRendererWarningsPerClass;  // 0x80 (0x80)
	enum class ETextureRenderTargetFormat DefaultRenderTargetFormat;  // 0xD0 (0xD0)
	uint8_t DefaultGridFormat;  // 0xD1 (0xD1)
	char pad_210[2];  // 0xD2 (0xD2)
	uint8_t DefaultRendererMotionVectorSetting;  // 0xD4 (0xD4)
	uint8_t DefaultPixelCoverageMode;  // 0xD8 (0xD8)
	uint8_t DefaultSortPrecision;  // 0xD9 (0xD9)
	uint8_t DefaultGpuTranslucentLatency;  // 0xDA (0xDA)
	char pad_219[1];  // 0xDB (0xDB)
	float DefaultLightInverseExposureBlend;  // 0xDC (0xDC)
	enum class ENDISkelMesh_GpuMaxInfluences NDISkelMesh_GpuMaxInfluences;  // 0xE0 (0xE0)
	enum class ENDISkelMesh_GpuUniformSamplingFormat NDISkelMesh_GpuUniformSamplingFormat;  // 0xE1 (0xE1)
	enum class ENDISkelMesh_AdjacencyTriangleIndexFormat NDISkelMesh_AdjacencyTriangleIndexFormat;  // 0xE2 (0xE2)
	char pad_227_1 : 7;  // 0xE3 (0xE3)
	bool NDIStaticMesh_AllowDistanceFields : 1;  // 0xE3 (0xE3)
	char pad_228[4];  // 0xE4 (0xE4)
	struct TArray<enum class ENDICollisionQuery_AsyncGpuTraceProvider> NDICollisionQuery_AsyncGpuTraceProviderOrder;  // 0xE8 (0xE8)
	struct TArray<struct FNiagaraPlatformSetRedirect> PlatformSetRedirects;  // 0xF8 (0xF8)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceCollisionQuery
// Size: 0x40(Inherited: 0x38)
struct UNiagaraDataInterfaceCollisionQuery : UNiagaraDataInterface
{
	char pad_56[8];  // 0x38 (0x38)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceActorComponent
// Size: 0x80(Inherited: 0x38)
struct UNiagaraDataInterfaceActorComponent : UNiagaraDataInterface
{
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bRequireCurrentFrameData : 1;  // 0x38 (0x38)
	uint8_t SourceMode;  // 0x39 (0x39)
	char pad_58[2];  // 0x3A (0x3A)
	int32_t LocalPlayerIndex;  // 0x3C (0x3C)
	 SourceActor;  // 0x40 (0x40)
	char pad_92[4];  // 0x5C (0x5C)
	struct FNiagaraUserParameterBinding ActorOrComponentParameter;  // 0x60 (0x60)


}; 
 
 


// Class Niagara.NiagaraSignificanceHandlerAge
// Size: 0x28(Inherited: 0x28)
struct UNiagaraSignificanceHandlerAge : UNiagaraSignificanceHandler
{


}; 
 
 


// Class Niagara.NiagaraBakerOutputSimCache
// Size: 0x80(Inherited: 0x38)
struct UNiagaraBakerOutputSimCache : UNiagaraBakerOutput
{
	struct FString SimCacheAssetPathFormat;  // 0x38 (0x38)
	struct FNiagaraSimCacheCreateParameters CreateParameters;  // 0x48 (0x48)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceAsyncGpuTrace
// Size: 0x48(Inherited: 0x38)
struct UNiagaraDataInterfaceAsyncGpuTrace : UNiagaraDataInterface
{
	int32_t MaxTracesPerParticle;  // 0x38 (0x38)
	int32_t MaxRetraces;  // 0x3C (0x3C)
	enum class ENDICollisionQuery_AsyncGpuTraceProvider TraceProvider;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceArrayQuat
// Size: 0x58(Inherited: 0x48)
struct UNiagaraDataInterfaceArrayQuat : UNiagaraDataInterfaceArray
{
	struct TArray<struct FQuat4f> InternalQuatData;  // 0x48 (0x48)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceDebugDraw
// Size: 0x40(Inherited: 0x38)
struct UNiagaraDataInterfaceDebugDraw : UNiagaraDataInterface
{
	uint32_t OverrideMaxLineInstances;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceGBuffer
// Size: 0x38(Inherited: 0x38)
struct UNiagaraDataInterfaceGBuffer : UNiagaraDataInterface
{


}; 
 
 


// Class Niagara.NiagaraDataInterfaceEmitterProperties
// Size: 0x48(Inherited: 0x38)
struct UNiagaraDataInterfaceEmitterProperties : UNiagaraDataInterface
{
	struct FNiagaraDataInterfaceEmitterBinding EmitterBinding;  // 0x38 (0x38)
	char pad_68[4];  // 0x44 (0x44)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceCamera
// Size: 0x40(Inherited: 0x38)
struct UNiagaraDataInterfaceCamera : UNiagaraDataInterface
{
	int32_t PlayerControllerIndex;  // 0x38 (0x38)
	char pad_60_1 : 7;  // 0x3C (0x3C)
	bool bRequireCurrentFrameData : 1;  // 0x3C (0x3C)
	char pad_61[3];  // 0x3D (0x3D)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceStaticMesh
// Size: 0xB0(Inherited: 0x38)
struct UNiagaraDataInterfaceStaticMesh : UNiagaraDataInterface
{
	uint8_t SourceMode;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct UStaticMesh* DefaultMesh;  // 0x40 (0x40)
	struct TSoftObjectPtr<AActor> SoftSourceActor;  // 0x48 (0x48)
	struct UStaticMeshComponent* SourceComponent;  // 0x78 (0x78)
	struct FNDIStaticMeshSectionFilter SectionFilter;  // 0x80 (0x80)
	char pad_144_1 : 7;  // 0x90 (0x90)
	bool bUsePhysicsBodyVelocity : 1;  // 0x90 (0x90)
	char pad_145[7];  // 0x91 (0x91)
	struct TArray<struct FName> FilteredSockets;  // 0x98 (0x98)
	char pad_168[8];  // 0xA8 (0xA8)


	void OnSourceEndPlay(struct AActor* InSource, enum class EEndPlayReason Reason); // Function Niagara.NiagaraDataInterfaceStaticMesh.OnSourceEndPlay
}; 
 
 


// Class Niagara.NiagaraDataInterfacePhysicsAsset
// Size: 0xB0(Inherited: 0x38)
struct UNiagaraDataInterfacePhysicsAsset : UNiagaraDataInterface
{
	struct UPhysicsAsset* DefaultSource;  // 0x38 (0x38)
	struct TSoftObjectPtr<AActor> SoftSourceActor;  // 0x40 (0x40)
	struct FNiagaraUserParameterBinding MeshUserParameter;  // 0x70 (0x70)
	char pad_144[32];  // 0x90 (0x90)


}; 
 
 


// Class Niagara.NiagaraRendererProperties
// Size: 0xE0(Inherited: 0x28)
struct UNiagaraRendererProperties : UNiagaraMergeable
{
	struct FNiagaraPlatformSet Platforms;  // 0x28 (0x28)
	int32_t SortOrderHint;  // 0x58 (0x58)
	uint8_t MotionVectorSetting;  // 0x5C (0x5C)
	struct FNiagaraVariableAttributeBinding RendererEnabledBinding;  // 0x60 (0x60)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool bIsEnabled : 1;  // 0xB8 (0xB8)
	char pad_185_1 : 7;  // 0xB9 (0xB9)
	bool bAllowInCullProxies : 1;  // 0xB9 (0xB9)
	char pad_186[2];  // 0xBA (0xBA)
	struct FGuid OuterEmitterVersion;  // 0xBC (0xBC)
	char pad_204_1 : 7;  // 0xCC (0xCC)
	bool bMotionBlurEnabled : 1;  // 0xCC (0xCC)
	char pad_205[19];  // 0xCD (0xCD)


}; 
 
 


// Class Niagara.NiagaraPhysicsAssetDICollectorInterface
// Size: 0x28(Inherited: 0x28)
struct UNiagaraPhysicsAssetDICollectorInterface : UInterface
{


}; 
 
 


// Class Niagara.NiagaraDataInterfaceColorCurve
// Size: 0x270(Inherited: 0x70)
struct UNiagaraDataInterfaceColorCurve : UNiagaraDataInterfaceCurveBase
{
	struct FRichCurve RedCurve;  // 0x70 (0x70)
	struct FRichCurve GreenCurve;  // 0xF0 (0xF0)
	struct FRichCurve BlueCurve;  // 0x170 (0x170)
	struct FRichCurve AlphaCurve;  // 0x1F0 (0x1F0)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceSimpleCounter
// Size: 0x40(Inherited: 0x38)
struct UNiagaraDataInterfaceSimpleCounter : UNiagaraDataInterface
{
	uint8_t GpuSyncMode;  // 0x38 (0x38)
	int32_t InitialValue;  // 0x3C (0x3C)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceUObjectPropertyReader
// Size: 0xA8(Inherited: 0x38)
struct UNiagaraDataInterfaceUObjectPropertyReader : UNiagaraDataInterface
{
	struct FNiagaraUserParameterBinding UObjectParameterBinding;  // 0x38 (0x38)
	struct TArray<struct FNiagaraUObjectPropertyReaderRemap> PropertyRemap;  // 0x58 (0x58)
	struct TSoftObjectPtr<AActor> SourceActor;  // 0x68 (0x68)
	 SourceActorComponentClass;  // 0x98 (0x98)
	char pad_160[8];  // 0xA0 (0xA0)


	void SetUObjectReaderPropertyRemap(struct UNiagaraComponent* NiagaraComponent, struct FName UserParameterName, struct FName GraphName, struct FName RemapName); // Function Niagara.NiagaraDataInterfaceUObjectPropertyReader.SetUObjectReaderPropertyRemap
}; 
 
 


// Class Niagara.NiagaraDataInterfaceArrayColor
// Size: 0x58(Inherited: 0x48)
struct UNiagaraDataInterfaceArrayColor : UNiagaraDataInterfaceArray
{
	struct TArray<struct FLinearColor> ColorData;  // 0x48 (0x48)


}; 
 
 


// Class Niagara.NiagaraComponentRendererProperties
// Size: 0x230(Inherited: 0xE0)
struct UNiagaraComponentRendererProperties : UNiagaraRendererProperties
{
	USceneComponent* ComponentType;  // 0xE0 (0xE0)
	uint32_t ComponentCountLimit;  // 0xE8 (0xE8)
	char pad_236[4];  // 0xEC (0xEC)
	struct FNiagaraVariableAttributeBinding EnabledBinding;  // 0xF0 (0xF0)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;  // 0x148 (0x148)
	char pad_416_1 : 7;  // 0x1A0 (0x1A0)
	bool bAssignComponentsOnParticleID : 1;  // 0x1A0 (0x1A0)
	char pad_417_1 : 7;  // 0x1A1 (0x1A1)
	bool bCreateComponentFirstParticleFrame : 1;  // 0x1A1 (0x1A1)
	char pad_418_1 : 7;  // 0x1A2 (0x1A2)
	bool bOnlyActivateNewlyAquiredComponents : 1;  // 0x1A2 (0x1A2)
	char pad_419[1];  // 0x1A3 (0x1A3)
	int32_t RendererVisibility;  // 0x1A4 (0x1A4)
	struct USceneComponent* TemplateComponent;  // 0x1A8 (0x1A8)
	struct TArray<struct FNiagaraComponentPropertyBinding> PropertyBindings;  // 0x1B0 (0x1B0)
	char pad_448[112];  // 0x1C0 (0x1C0)


}; 
 
 


// Class Niagara.MovieSceneNiagaraParameterTrack
// Size: 0xC8(Inherited: 0xA8)
struct UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraTrack
{
	struct FNiagaraVariable Parameter;  // 0xA8 (0xA8)


}; 
 
 


// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// Size: 0x100(Inherited: 0xF0)
struct UMovieSceneNiagaraSystemSpawnSection : UMovieSceneSection
{
	uint8_t SectionStartBehavior;  // 0xF0 (0xF0)
	uint8_t SectionEvaluateBehavior;  // 0xF4 (0xF4)
	uint8_t SectionEndBehavior;  // 0xF8 (0xF8)
	uint8_t AgeUpdateMode;  // 0xFC (0xFC)
	char pad_253_1 : 7;  // 0xFD (0xFD)
	bool bAllowScalability : 1;  // 0xFD (0xFD)
	char pad_254[2];  // 0xFE (0xFE)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceIntRenderTarget2D
// Size: 0xB0(Inherited: 0x38)
struct UNiagaraDataInterfaceIntRenderTarget2D : UNiagaraDataInterfaceRWBase
{
	struct FIntPoint Size;  // 0x38 (0x38)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter;  // 0x40 (0x40)
	struct TMap<uint64_t, struct UTextureRenderTarget2D*> ManagedRenderTargets;  // 0x60 (0x60)


}; 
 
 


// Class Niagara.MovieSceneNiagaraTrack
// Size: 0xA8(Inherited: 0x98)
struct UMovieSceneNiagaraTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> Sections;  // 0x98 (0x98)


}; 
 
 


// Class Niagara.NiagaraSignificanceHandler
// Size: 0x28(Inherited: 0x28)
struct UNiagaraSignificanceHandler : UObject
{


}; 
 
 


// Class Niagara.MovieSceneNiagaraSystemTrack
// Size: 0xB0(Inherited: 0xA8)
struct UMovieSceneNiagaraSystemTrack : UMovieSceneNiagaraTrack
{
	char pad_168[8];  // 0xA8 (0xA8)


}; 
 
 


// Class Niagara.NiagaraSimulationStageGeneric
// Size: 0x308(Inherited: 0x40)
struct UNiagaraSimulationStageGeneric : UNiagaraSimulationStageBase
{
	struct FNiagaraVariableAttributeBinding EnabledBinding;  // 0x40 (0x40)
	struct FNiagaraVariableAttributeBinding ElementCountBinding;  // 0x98 (0x98)
	struct FNiagaraVariableAttributeBinding ElementCountXBinding;  // 0xF0 (0xF0)
	struct FNiagaraVariableAttributeBinding ElementCountYBinding;  // 0x148 (0x148)
	struct FNiagaraVariableAttributeBinding ElementCountZBinding;  // 0x1A0 (0x1A0)
	uint8_t IterationSource;  // 0x1F8 (0x1F8)
	char pad_505[3];  // 0x1F9 (0x1F9)
	int32_t Iterations;  // 0x1FC (0x1FC)
	struct FNiagaraVariableAttributeBinding NumIterationsBinding;  // 0x200 (0x200)
	char bSpawnOnly : 1;  // 0x258 (0x258)
	char pad_600_1 : 7;  // 0x258 (0x258)
	char pad_601[4];  // 0x259 (0x259)
	uint8_t ExecuteBehavior;  // 0x25C (0x25C)
	char pad_605[3];  // 0x25D (0x25D)
	char bDisablePartialParticleUpdate : 1;  // 0x260 (0x260)
	char pad_608_1 : 7;  // 0x260 (0x260)
	char pad_609[8];  // 0x261 (0x261)
	struct FNiagaraVariableDataInterfaceBinding DataInterface;  // 0x268 (0x268)
	char bParticleIterationStateEnabled : 1;  // 0x288 (0x288)
	char pad_648_1 : 7;  // 0x288 (0x288)
	char pad_649[8];  // 0x289 (0x289)
	struct FNiagaraVariableAttributeBinding ParticleIterationStateBinding;  // 0x290 (0x290)
	struct FIntPoint ParticleIterationStateRange;  // 0x2E8 (0x2E8)
	char bGpuDispatchForceLinear : 1;  // 0x2F0 (0x2F0)
	char bOverrideGpuDispatchType : 1;  // 0x2F0 (0x2F0)
	char pad_752_1 : 6;  // 0x2F0 (0x2F0)
	char pad_753[4];  // 0x2F1 (0x2F1)
	uint8_t OverrideGpuDispatchType;  // 0x2F4 (0x2F4)
	char pad_757[3];  // 0x2F5 (0x2F5)
	char bOverrideGpuDispatchNumThreads : 1;  // 0x2F8 (0x2F8)
	char pad_760_1 : 7;  // 0x2F8 (0x2F8)
	char pad_761[4];  // 0x2F9 (0x2F9)
	struct FIntVector OverrideGpuDispatchNumThreads;  // 0x2FC (0x2FC)


}; 
 
 


// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// Size: 0xD0(Inherited: 0xC8)
struct UMovieSceneNiagaraBoolParameterTrack : UMovieSceneNiagaraParameterTrack
{
	char pad_200[8];  // 0xC8 (0xC8)


}; 
 
 


// Class Niagara.NiagaraBakerOutputTexture2D
// Size: 0xA0(Inherited: 0x38)
struct UNiagaraBakerOutputTexture2D : UNiagaraBakerOutput
{
	struct FNiagaraBakerTextureSource SourceBinding;  // 0x38 (0x38)
	char bGenerateAtlas : 1;  // 0x50 (0x50)
	char bGenerateFrames : 1;  // 0x50 (0x50)
	char bExportFrames : 1;  // 0x50 (0x50)
	char bSetTextureAddressX : 1;  // 0x50 (0x50)
	char bSetTextureAddressY : 1;  // 0x50 (0x50)
	char pad_80_1 : 3;  // 0x50 (0x50)
	char pad_81[4];  // 0x51 (0x51)
	struct FIntPoint FrameSize;  // 0x54 (0x54)
	struct FIntPoint AtlasTextureSize;  // 0x5C (0x5C)
	char pad_100[8];  // 0x64 (0x64)
	enum class TextureAddress TextureAddressX;  // 0x6C (0x6C)
	enum class TextureAddress TextureAddressY;  // 0x6D (0x6D)
	char pad_110[2];  // 0x6E (0x6E)
	struct FString AtlasAssetPathFormat;  // 0x70 (0x70)
	struct FString FramesAssetPathFormat;  // 0x80 (0x80)
	struct FString FramesExportPathFormat;  // 0x90 (0x90)


}; 
 
 


// Class Niagara.MovieSceneNiagaraColorParameterTrack
// Size: 0xD0(Inherited: 0xC8)
struct UMovieSceneNiagaraColorParameterTrack : UMovieSceneNiagaraParameterTrack
{
	char pad_200[8];  // 0xC8 (0xC8)


}; 
 
 


// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// Size: 0xD0(Inherited: 0xC8)
struct UMovieSceneNiagaraIntegerParameterTrack : UMovieSceneNiagaraParameterTrack
{
	char pad_200[8];  // 0xC8 (0xC8)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceArrayBool
// Size: 0x58(Inherited: 0x48)
struct UNiagaraDataInterfaceArrayBool : UNiagaraDataInterfaceArray
{
	struct TArray<bool> BoolData;  // [x48 ([x48)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceArrayFloat2
// Size: 0x58(Inherited: 0x48)
struct UNiagaraDataInterfaceArrayFloat2 : UNiagaraDataInterfaceArray
{
	struct TArray<struct FVector2f> InternalFloatData;  // 0x48 (0x48)


}; 
 
 


// Class Niagara.NiagaraComponent
// Size: 0x7D0(Inherited: 0x540)
struct UNiagaraComponent : UFXSystemComponent
{
	struct UNiagaraSystem* Asset;  // 0x538 (0x538)
	uint8_t TickBehavior;  // 0x540 (0x540)
	int32_t RandomSeedOffset;  // 0x544 (0x544)
	struct FNiagaraUserRedirectionParameterStore OverrideParameters;  // 0x548 (0x548)
	char bForceSolo : 1;  // 0x620 (0x620)
	char bEnableGpuComputeDebug : 1;  // 0x620 (0x620)
	char pad_1573_1 : 6;  // 0x625 (0x625)
	char pad_1574[51];  // 0x626 (0x626)
	char bAutoDestroy : 1;  // 0x658 (0x658)
	char bRenderingEnabled : 1;  // 0x658 (0x658)
	char bAutoManageAttachment : 1;  // 0x658 (0x658)
	char bAutoAttachWeldSimulatedBodies : 1;  // 0x658 (0x658)
	char pad_1624_1 : 4;  // 0x658 (0x658)
	char pad_1625[4];  // 0x659 (0x659)
	float MaxTimeBeforeForceUpdateTransform;  // 0x65C (0x65C)
	char pad_1632[8];  // 0x660 (0x660)
	struct FMulticastInlineDelegate OnSystemFinished;  // 0x668 (0x668)
	struct TWeakObjectPtr<USceneComponent> AutoAttachParent;  // 0x678 (0x678)
	struct FName AutoAttachSocketName;  // 0x680 (0x680)
	uint8_t AutoAttachLocationRule;  // 0x688 (0x688)
	uint8_t AutoAttachRotationRule;  // 0x689 (0x689)
	uint8_t AutoAttachScaleRule;  // 0x68A (0x68A)
	char pad_1675[9];  // 0x68B (0x68B)
	char pad_1684_1 : 4;  // 0x694 (0x694)
	char bAllowScalability : 1;  // 0x694 (0x694)
	char pad_1684_2 : 3;  // 0x694 (0x694)
	char pad_1685[300];  // 0x695 (0x695)
	struct UNiagaraSimCache* SimCache;  // 0x7C0 (0x7C0)
	struct UNiagaraCullProxyComponent* CullProxy;  // 0x7C8 (0x7C8)


	void SetVariableVec4(struct FName InVariableName, struct FVector4& InValue); // Function Niagara.NiagaraComponent.SetVariableVec4
	void SetVariableVec3(struct FName InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetVariableVec3
	void SetVariableVec2(struct FName InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraComponent.SetVariableVec2
	void SetVariableTextureRenderTarget(struct FName InVariableName, struct UTextureRenderTarget* TextureRenderTarget); // Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget
	void SetVariableTexture(struct FName InVariableName, struct UTexture* Texture); // Function Niagara.NiagaraComponent.SetVariableTexture
	void SetVariableStaticMesh(struct FName InVariableName, struct UStaticMesh* InValue); // Function Niagara.NiagaraComponent.SetVariableStaticMesh
	void SetVariableQuat(struct FName InVariableName, struct FQuat& InValue); // Function Niagara.NiagaraComponent.SetVariableQuat
	void SetVariablePosition(struct FName InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetVariablePosition
	void SetVariableObject(struct FName InVariableName, struct UObject* Object); // Function Niagara.NiagaraComponent.SetVariableObject
	void SetVariableMatrix(struct FName InVariableName, struct FMatrix& InValue); // Function Niagara.NiagaraComponent.SetVariableMatrix
	void SetVariableMaterial(struct FName InVariableName, struct UMaterialInterface* Object); // Function Niagara.NiagaraComponent.SetVariableMaterial
	void SetVariableLinearColor(struct FName InVariableName, struct FLinearColor& InValue); // Function Niagara.NiagaraComponent.SetVariableLinearColor
	void SetVariableInt(struct FName InVariableName, int32_t InValue); // Function Niagara.NiagaraComponent.SetVariableInt
	void SetVariableFloat(struct FName InVariableName, float InValue); // Function Niagara.NiagaraComponent.SetVariableFloat
	void SetVariableBool(struct FName InVariableName, bool InValue); // Function Niagara.NiagaraComponent.SetVariableBool
	void SetVariableActor(struct FName InVariableName, struct AActor* Actor); // Function Niagara.NiagaraComponent.SetVariableActor
	void SetTickBehavior(uint8_t NewTickBehavior); // Function Niagara.NiagaraComponent.SetTickBehavior
	void SetSystemFixedBounds(struct FBox LocalBounds); // Function Niagara.NiagaraComponent.SetSystemFixedBounds
	void SetSimCache(struct UNiagaraSimCache* SimCache, bool bResetSystem); // Function Niagara.NiagaraComponent.SetSimCache
	void SetSeekDelta(float InSeekDelta); // Function Niagara.NiagaraComponent.SetSeekDelta
	void SetRenderingEnabled(bool bInRenderingEnabled); // Function Niagara.NiagaraComponent.SetRenderingEnabled
	void SetRandomSeedOffset(int32_t NewRandomSeedOffset); // Function Niagara.NiagaraComponent.SetRandomSeedOffset
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance, float PreviewMaxDistance); // Function Niagara.NiagaraComponent.SetPreviewLODDistance
	void SetPaused(bool bInPaused); // Function Niagara.NiagaraComponent.SetPaused
	void SetNiagaraVariableVec4(struct FString InVariableName, struct FVector4& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
	void SetNiagaraVariableVec3(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
	void SetNiagaraVariableVec2(struct FString InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
	void SetNiagaraVariableQuat(struct FString InVariableName, struct FQuat& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
	void SetNiagaraVariablePosition(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariablePosition
	void SetNiagaraVariableObject(struct FString InVariableName, struct UObject* Object); // Function Niagara.NiagaraComponent.SetNiagaraVariableObject
	void SetNiagaraVariableMatrix(struct FString InVariableName, struct FMatrix& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableMatrix
	void SetNiagaraVariableLinearColor(struct FString InVariableName, struct FLinearColor& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
	void SetNiagaraVariableInt(struct FString InVariableName, int32_t InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableInt
	void SetNiagaraVariableFloat(struct FString InVariableName, float InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
	void SetNiagaraVariableBool(struct FString InVariableName, bool InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableBool
	void SetNiagaraVariableActor(struct FString InVariableName, struct AActor* Actor); // Function Niagara.NiagaraComponent.SetNiagaraVariableActor
	void SetMaxSimTime(float InMaxTime); // Function Niagara.NiagaraComponent.SetMaxSimTime
	void SetLockDesiredAgeDeltaTimeToSeekDelta(bool Block); // Function Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta
	void SetGpuComputeDebug(bool bEnableDebug); // Function Niagara.NiagaraComponent.SetGpuComputeDebug
	void SetForceSolo(bool bInForceSolo); // Function Niagara.NiagaraComponent.SetForceSolo
	void SetForceLocalPlayerEffect(bool bIsPlayerEffect); // Function Niagara.NiagaraComponent.SetForceLocalPlayerEffect
	void SetEmitterFixedBounds(struct FName EmitterName, struct FBox LocalBounds); // Function Niagara.NiagaraComponent.SetEmitterFixedBounds
	void SetDesiredAge(float InDesiredAge); // Function Niagara.NiagaraComponent.SetDesiredAge
	void SetCustomTimeDilation(float Dilation); // Function Niagara.NiagaraComponent.SetCustomTimeDilation
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking); // Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
	void SetAutoDestroy(bool bInAutoDestroy); // Function Niagara.NiagaraComponent.SetAutoDestroy
	void SetAsset(struct UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters); // Function Niagara.NiagaraComponent.SetAsset
	void SetAllowScalability(bool bAllow); // Function Niagara.NiagaraComponent.SetAllowScalability
	void SetAgeUpdateMode(uint8_t InAgeUpdateMode); // Function Niagara.NiagaraComponent.SetAgeUpdateMode
	void SeekToDesiredAge(float InDesiredAge); // Function Niagara.NiagaraComponent.SeekToDesiredAge
	void ResetSystem(); // Function Niagara.NiagaraComponent.ResetSystem
	void ReinitializeSystem(); // Function Niagara.NiagaraComponent.ReinitializeSystem
	bool IsPaused(); // Function Niagara.NiagaraComponent.IsPaused
	void InitForPerformanceBaseline(); // Function Niagara.NiagaraComponent.InitForPerformanceBaseline
	uint8_t GetTickBehavior(); // Function Niagara.NiagaraComponent.GetTickBehavior
	struct FBox GetSystemFixedBounds(); // Function Niagara.NiagaraComponent.GetSystemFixedBounds
	struct UNiagaraSimCache* GetSimCache(); // Function Niagara.NiagaraComponent.GetSimCache
	float GetSeekDelta(); // Function Niagara.NiagaraComponent.GetSeekDelta
	int32_t GetRandomSeedOffset(); // Function Niagara.NiagaraComponent.GetRandomSeedOffset
	bool GetPreviewLODDistanceEnabled(); // Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
	float GetPreviewLODDistance(); // Function Niagara.NiagaraComponent.GetPreviewLODDistance
	struct TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(struct FString InEmitterName, struct FString InValueName); // Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
	struct TArray<float> GetNiagaraParticleValues_DebugOnly(struct FString InEmitterName, struct FString InValueName); // Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
	struct TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(struct FString InEmitterName); // Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
	float GetMaxSimTime(); // Function Niagara.NiagaraComponent.GetMaxSimTime
	bool GetLockDesiredAgeDeltaTimeToSeekDelta(); // Function Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta
	bool GetForceSolo(); // Function Niagara.NiagaraComponent.GetForceSolo
	bool GetForceLocalPlayerEffect(); // Function Niagara.NiagaraComponent.GetForceLocalPlayerEffect
	struct FBox GetEmitterFixedBounds(struct FName EmitterName); // Function Niagara.NiagaraComponent.GetEmitterFixedBounds
	float GetDesiredAge(); // Function Niagara.NiagaraComponent.GetDesiredAge
	struct UNiagaraDataInterface* GetDataInterface(struct FString Name); // Function Niagara.NiagaraComponent.GetDataInterface
	float GetCustomTimeDilation(); // Function Niagara.NiagaraComponent.GetCustomTimeDilation
	struct UNiagaraSystem* GetAsset(); // Function Niagara.NiagaraComponent.GetAsset
	bool GetAllowScalability(); // Function Niagara.NiagaraComponent.GetAllowScalability
	uint8_t GetAgeUpdateMode(); // Function Niagara.NiagaraComponent.GetAgeUpdateMode
	void ClearSystemFixedBounds(); // Function Niagara.NiagaraComponent.ClearSystemFixedBounds
	void ClearSimCache(bool bResetSystem); // Function Niagara.NiagaraComponent.ClearSimCache
	void ClearEmitterFixedBounds(struct FName EmitterName); // Function Niagara.NiagaraComponent.ClearEmitterFixedBounds
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds); // Function Niagara.NiagaraComponent.AdvanceSimulationByTime
	void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds); // Function Niagara.NiagaraComponent.AdvanceSimulation
}; 
 
 


// Class Niagara.NiagaraBakerSettings
// Size: 0x1F0(Inherited: 0x28)
struct UNiagaraBakerSettings : UObject
{
	float StartSeconds;  // 0x28 (0x28)
	float DurationSeconds;  // 0x2C (0x2C)
	int32_t FramesPerSecond;  // 0x30 (0x30)
	char bPreviewLooping : 1;  // 0x34 (0x34)
	char pad_52_1 : 7;  // 0x34 (0x34)
	char pad_53[4];  // 0x35 (0x35)
	struct FIntPoint FramesPerDimension;  // 0x38 (0x38)
	struct TArray<struct UNiagaraBakerOutput*> Outputs;  // 0x40 (0x40)
	struct TArray<struct FNiagaraBakerCameraSettings> CameraSettings;  // 0x50 (0x50)
	int32_t CurrentCameraIndex;  // 0x60 (0x60)
	struct FName BakeQualityLevel;  // 0x64 (0x64)
	char bRenderComponentOnly : 1;  // 0x6C (0x6C)
	char pad_108_1 : 7;  // 0x6C (0x6C)
	char pad_109[4];  // 0x6D (0x6D)
	struct TArray<struct FNiagaraBakerTextureSettings> OutputTextures;  // 0x70 (0x70)
	uint8_t CameraViewportMode;  // 0x80 (0x80)
	char pad_132[4];  // 0x84 (0x84)
	struct FVector CameraViewportLocation[7];  // 0x88 (0x88)
	struct FRotator CameraViewportRotation[7];  // 0x130 (0x130)
	float CameraOrbitDistance;  // 0x1D8 (0x1D8)
	float CameraFOV;  // 0x1DC (0x1DC)
	float CameraOrthoWidth;  // 0x1E0 (0x1E0)
	char bUseCameraAspectRatio : 1;  // 0x1E4 (0x1E4)
	char pad_484_1 : 7;  // 0x1E4 (0x1E4)
	char pad_485[4];  // 0x1E5 (0x1E5)
	float CameraAspectRatio;  // 0x1E8 (0x1E8)
	char pad_492[4];  // 0x1EC (0x1EC)


}; 
 
 


// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// Size: 0xD0(Inherited: 0xC8)
struct UMovieSceneNiagaraFloatParameterTrack : UMovieSceneNiagaraParameterTrack
{
	char pad_200[8];  // 0xC8 (0xC8)


}; 
 
 


// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// Size: 0xD8(Inherited: 0xC8)
struct UMovieSceneNiagaraVectorParameterTrack : UMovieSceneNiagaraParameterTrack
{
	char pad_200[8];  // 0xC8 (0xC8)
	int32_t ChannelsUsed;  // 0xD0 (0xD0)
	char pad_212[4];  // 0xD4 (0xD4)


}; 
 
 


// Class Niagara.NiagaraPreviewBase
// Size: 0x290(Inherited: 0x290)
struct ANiagaraPreviewBase : AActor
{


	void SetSystem(struct UNiagaraSystem* InSystem); // Function Niagara.NiagaraPreviewBase.SetSystem
	void SetLabelText(struct FText& InXAxisText, struct FText& InYAxisText); // Function Niagara.NiagaraPreviewBase.SetLabelText
}; 
 
 


// Class Niagara.NiagaraActor
// Size: 0x2A0(Inherited: 0x290)
struct ANiagaraActor : AActor
{
	struct UNiagaraComponent* NiagaraComponent;  // 0x290 (0x290)
	char bDestroyOnSystemFinish : 1;  // 0x298 (0x298)
	char pad_664_1 : 7;  // 0x298 (0x298)
	char pad_665[8];  // 0x299 (0x299)


	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish); // Function Niagara.NiagaraActor.SetDestroyOnSystemFinish
	void OnNiagaraSystemFinished(struct UNiagaraComponent* FinishedComponent); // Function Niagara.NiagaraActor.OnNiagaraSystemFinished
}; 
 
 


// Class Niagara.NiagaraBakerOutput
// Size: 0x38(Inherited: 0x28)
struct UNiagaraBakerOutput : UObject
{
	struct FString OutputName;  // 0x28 (0x28)


}; 
 
 


// Class Niagara.NiagaraBakerOutputVolumeTexture
// Size: 0x88(Inherited: 0x38)
struct UNiagaraBakerOutputVolumeTexture : UNiagaraBakerOutput
{
	struct FNiagaraBakerTextureSource SourceBinding;  // 0x38 (0x38)
	char bGenerateAtlas : 1;  // 0x50 (0x50)
	char bGenerateFrames : 1;  // 0x50 (0x50)
	char bExportFrames : 1;  // 0x50 (0x50)
	char pad_80_1 : 5;  // 0x50 (0x50)
	char pad_81[8];  // 0x51 (0x51)
	struct FString AtlasAssetPathFormat;  // 0x58 (0x58)
	struct FString FramesAssetPathFormat;  // 0x68 (0x68)
	struct FString FramesExportPathFormat;  // 0x78 (0x78)


}; 
 
 


// Class Niagara.NiagaraComponentSettings
// Size: 0x1B8(Inherited: 0x28)
struct UNiagaraComponentSettings : UObject
{
	struct TSet<struct FName> SuppressActivationList;  // 0x28 (0x28)
	struct TSet<struct FName> ForceAutoPooolingList;  // 0x78 (0x78)
	struct TSet<struct FNiagaraEmitterNameSettingsRef> SuppressEmitterList;  // 0xC8 (0xC8)
	struct TSet<struct FNiagaraEmitterNameSettingsRef> GPUEmitterAllowList;  // 0x118 (0x118)
	struct TSet<struct FName> GpuDataInterfaceDenyList;  // 0x168 (0x168)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary
// Size: 0x28(Inherited: 0x28)
struct UNiagaraDataInterfaceArrayFunctionLibrary : UBlueprintFunctionLibrary
{


	void SetNiagaraArrayVectorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue
	void SetNiagaraArrayVector4Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector4& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value
	void SetNiagaraArrayVector4(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector4>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
	void SetNiagaraArrayVector2DValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector2D& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue
	void SetNiagaraArrayVector2D(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector2D>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
	void SetNiagaraArrayVector(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
	void SetNiagaraArrayUInt8Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, int32_t Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayUInt8Value
	void SetNiagaraArrayUInt8(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<int32_t>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayUInt8
	void SetNiagaraArrayQuatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FQuat& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue
	void SetNiagaraArrayQuat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FQuat>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
	void SetNiagaraArrayPositionValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPositionValue
	void SetNiagaraArrayPosition(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPosition
	void SetNiagaraArrayInt32Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, int32_t Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value
	void SetNiagaraArrayInt32(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<int32_t>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
	void SetNiagaraArrayFloatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, float Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue
	void SetNiagaraArrayFloat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<float>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
	void SetNiagaraArrayColorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FLinearColor& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue
	void SetNiagaraArrayColor(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FLinearColor>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
	void SetNiagaraArrayBoolValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, bool& Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue
	void SetNiagaraArrayBool(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<bool>& ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
	struct FVector GetNiagaraArrayVectorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue
	struct FVector4 GetNiagaraArrayVector4Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value
	struct TArray<struct FVector4> GetNiagaraArrayVector4(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
	struct FVector2D GetNiagaraArrayVector2DValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue
	struct TArray<struct FVector2D> GetNiagaraArrayVector2D(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
	struct TArray<struct FVector> GetNiagaraArrayVector(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
	int32_t GetNiagaraArrayUInt8Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayUInt8Value
	struct TArray<int32_t> GetNiagaraArrayUInt8(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayUInt8
	struct FQuat GetNiagaraArrayQuatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue
	struct TArray<struct FQuat> GetNiagaraArrayQuat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
	struct FVector GetNiagaraArrayPositionValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPositionValue
	struct TArray<struct FVector> GetNiagaraArrayPosition(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPosition
	int32_t GetNiagaraArrayInt32Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value
	struct TArray<int32_t> GetNiagaraArrayInt32(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
	float GetNiagaraArrayFloatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue
	struct TArray<float> GetNiagaraArrayFloat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
	struct FLinearColor GetNiagaraArrayColorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue
	struct TArray<struct FLinearColor> GetNiagaraArrayColor(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
	bool GetNiagaraArrayBoolValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue
	struct TArray<bool> GetNiagaraArrayBool(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
}; 
 
 


// Class Niagara.NiagaraDataInterface2DArrayTexture
// Size: 0x60(Inherited: 0x38)
struct UNiagaraDataInterface2DArrayTexture : UNiagaraDataInterface
{
	struct UTexture* Texture;  // 0x38 (0x38)
	struct FNiagaraUserParameterBinding TextureUserParameter;  // 0x40 (0x40)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceRWBase
// Size: 0x38(Inherited: 0x38)
struct UNiagaraDataInterfaceRWBase : UNiagaraDataInterface
{


}; 
 
 


// Class Niagara.NiagaraDataInterfaceAudioSpectrum
// Size: 0x50(Inherited: 0x40)
struct UNiagaraDataInterfaceAudioSpectrum : UNiagaraDataInterfaceAudioSubmix
{
	int32_t Resolution;  // 0x40 (0x40)
	float MinimumFrequency;  // 0x44 (0x44)
	float MaximumFrequency;  // 0x48 (0x48)
	float NoiseFloorDb;  // 0x4C (0x4C)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceArray
// Size: 0x48(Inherited: 0x38)
struct UNiagaraDataInterfaceArray : UNiagaraDataInterfaceRWBase
{
	char pad_56[8];  // 0x38 (0x38)
	uint8_t GpuSyncMode;  // 0x40 (0x40)
	int32_t MaxElements;  // 0x44 (0x44)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceArrayFloat
// Size: 0x58(Inherited: 0x48)
struct UNiagaraDataInterfaceArrayFloat : UNiagaraDataInterfaceArray
{
	struct TArray<float> FloatData;  // 0x48 (0x48)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceArrayPosition
// Size: 0x58(Inherited: 0x48)
struct UNiagaraDataInterfaceArrayPosition : UNiagaraDataInterfaceArray
{
	struct TArray<struct FNiagaraPosition> PositionData;  // 0x48 (0x48)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceArrayFloat4
// Size: 0x58(Inherited: 0x48)
struct UNiagaraDataInterfaceArrayFloat4 : UNiagaraDataInterfaceArray
{
	struct TArray<struct FVector4f> InternalFloatData;  // 0x48 (0x48)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceCurveBase
// Size: 0x70(Inherited: 0x38)
struct UNiagaraDataInterfaceCurveBase : UNiagaraDataInterface
{
	struct TArray<float> ShaderLUT;  // 0x38 (0x38)
	float LUTMinTime;  // 0x48 (0x48)
	float LUTMaxTime;  // 0x4C (0x4C)
	float LUTInvTimeRange;  // 0x50 (0x50)
	float LUTNumSamplesMinusOne;  // 0x54 (0x54)
	char pad_88[4];  // 0x58 (0x58)
	char bUseLUT : 1;  // 0x5C (0x5C)
	char bExposeCurve : 1;  // 0x5C (0x5C)
	char pad_92_1 : 6;  // 0x5C (0x5C)
	char pad_93[4];  // 0x5D (0x5D)
	struct FName ExposedName;  // 0x60 (0x60)
	struct UTexture2D* ExposedTexture;  // 0x68 (0x68)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceArrayInt32
// Size: 0x58(Inherited: 0x48)
struct UNiagaraDataInterfaceArrayInt32 : UNiagaraDataInterfaceArray
{
	struct TArray<int32_t> IntData;  // 0x48 (0x48)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceArrayUInt8
// Size: 0x58(Inherited: 0x48)
struct UNiagaraDataInterfaceArrayUInt8 : UNiagaraDataInterfaceArray
{
	struct TArray<char> InternalIntData;  // 0x48 (0x48)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceArrayNiagaraID
// Size: 0x58(Inherited: 0x48)
struct UNiagaraDataInterfaceArrayNiagaraID : UNiagaraDataInterfaceArray
{
	struct TArray<struct FNiagaraID> IntData;  // 0x48 (0x48)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceAudioSubmix
// Size: 0x40(Inherited: 0x38)
struct UNiagaraDataInterfaceAudioSubmix : UNiagaraDataInterface
{
	struct USoundSubmix* Submix;  // 0x38 (0x38)


}; 
 
 


// Class Niagara.NiagaraSimCacheFunctionLibrary
// Size: 0x28(Inherited: 0x28)
struct UNiagaraSimCacheFunctionLibrary : UBlueprintFunctionLibrary
{


	struct UNiagaraSimCache* CreateNiagaraSimCache(struct UObject* WorldContextObject); // Function Niagara.NiagaraSimCacheFunctionLibrary.CreateNiagaraSimCache
	bool CaptureNiagaraSimCacheImmediate(struct UNiagaraSimCache* SimCache, struct FNiagaraSimCacheCreateParameters CreateParameters, struct UNiagaraComponent* NiagaraComponent, struct UNiagaraSimCache*& OutSimCache, bool bAdvanceSimulation, float AdvanceDeltaTime); // Function Niagara.NiagaraSimCacheFunctionLibrary.CaptureNiagaraSimCacheImmediate
}; 
 
 


// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
// Size: 0x48(Inherited: 0x38)
struct UNiagaraDataInterfaceAudioOscilloscope : UNiagaraDataInterface
{
	struct USoundSubmix* Submix;  // 0x38 (0x38)
	int32_t Resolution;  // 0x40 (0x40)
	float ScopeInMilliseconds;  // 0x44 (0x44)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceAudioPlayer
// Size: 0x70(Inherited: 0x38)
struct UNiagaraDataInterfaceAudioPlayer : UNiagaraDataInterface
{
	struct USoundBase* SoundToPlay;  // 0x38 (0x38)
	struct USoundAttenuation* Attenuation;  // 0x40 (0x40)
	struct USoundConcurrency* Concurrency;  // 0x48 (0x48)
	struct TArray<struct FName> ParameterNames;  // 0x50 (0x50)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool bLimitPlaysPerTick : 1;  // 0x60 (0x60)
	char pad_97[3];  // 0x61 (0x61)
	int32_t MaxPlaysPerTick;  // 0x64 (0x64)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool bStopWhenComponentIsDestroyed : 1;  // 0x68 (0x68)
	char pad_105_1 : 7;  // 0x69 (0x69)
	bool bAllowLoopingOneShotSounds : 1;  // 0x69 (0x69)
	char pad_106[6];  // 0x6A (0x6A)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceCubeTexture
// Size: 0x60(Inherited: 0x38)
struct UNiagaraDataInterfaceCubeTexture : UNiagaraDataInterface
{
	struct UTexture* Texture;  // 0x38 (0x38)
	struct FNiagaraUserParameterBinding TextureUserParameter;  // 0x40 (0x40)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceCurlNoise
// Size: 0x58(Inherited: 0x38)
struct UNiagaraDataInterfaceCurlNoise : UNiagaraDataInterface
{
	uint32_t Seed;  // 0x38 (0x38)
	char pad_60[28];  // 0x3C (0x3C)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceCurve
// Size: 0xF0(Inherited: 0x70)
struct UNiagaraDataInterfaceCurve : UNiagaraDataInterfaceCurveBase
{
	struct FRichCurve Curve;  // 0x70 (0x70)


}; 
 
 


// Class Niagara.NiagaraPerfBaselineActor
// Size: 0x2A0(Inherited: 0x290)
struct ANiagaraPerfBaselineActor : AActor
{
	struct UNiagaraBaselineController* Controller;  // 0x290 (0x290)
	struct UTextRenderComponent* Label;  // 0x298 (0x298)


}; 
 
 


// Class Niagara.NiagaraParticleCallbackHandler
// Size: 0x28(Inherited: 0x28)
struct UNiagaraParticleCallbackHandler : UInterface
{


	void ReceiveParticleData(struct TArray<struct FBasicParticleData>& Data, struct UNiagaraSystem* NiagaraSystem, struct FVector& SimulationPositionOffset); // Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
}; 
 
 


// Class Niagara.NiagaraDataInterfaceMeshRendererInfo
// Size: 0x50(Inherited: 0x38)
struct UNiagaraDataInterfaceMeshRendererInfo : UNiagaraDataInterface
{
	struct UNiagaraMeshRendererProperties* MeshRenderer;  // 0x38 (0x38)
	char pad_64[16];  // 0x40 (0x40)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceExport
// Size: 0x68(Inherited: 0x38)
struct UNiagaraDataInterfaceExport : UNiagaraDataInterface
{
	struct FNiagaraUserParameterBinding CallbackHandlerParameter;  // 0x38 (0x38)
	uint8_t GPUAllocationMode;  // 0x58 (0x58)
	char pad_89[3];  // 0x59 (0x59)
	int32_t GPUAllocationFixedSize;  // 0x5C (0x5C)
	float GPUAllocationPerParticleSize;  // 0x60 (0x60)
	char pad_100[4];  // 0x64 (0x64)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceGrid2D
// Size: 0x60(Inherited: 0x38)
struct UNiagaraDataInterfaceGrid2D : UNiagaraDataInterfaceRWBase
{
	int32_t NumCellsX;  // 0x38 (0x38)
	int32_t NumCellsY;  // 0x3C (0x3C)
	int32_t NumCellsMaxAxis;  // 0x40 (0x40)
	int32_t NumAttributes;  // 0x44 (0x44)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool SetGridFromMaxAxis : 1;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)
	struct FVector2D WorldBBoxSize;  // 0x50 (0x50)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceGrid2DCollection
// Size: 0x128(Inherited: 0x60)
struct UNiagaraDataInterfaceGrid2DCollection : UNiagaraDataInterfaceGrid2D
{
	struct FNiagaraUserParameterBinding RenderTargetUserParameter;  // 0x60 (0x60)
	uint8_t OverrideBufferFormat;  // 0x80 (0x80)
	char bOverrideFormat : 1;  // 0x81 (0x81)
	char pad_129_1 : 7;  // 0x81 (0x81)
	char pad_130[87];  // 0x82 (0x82)
	struct TMap<uint64_t, struct UTextureRenderTarget2DArray*> ManagedRenderTargets;  // 0xD8 (0xD8)


	void GetTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
	void GetRawTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
	bool FillTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t AttributeIndex); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
	bool FillRawTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
}; 
 
 


// Class Niagara.VolumeCache
// Size: 0x60(Inherited: 0x28)
struct UVolumeCache : UObject
{
	struct FString FilePath;  // 0x28 (0x28)
	uint8_t CacheType;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)
	struct FIntVector Resolution;  // 0x3C (0x3C)
	int32_t FrameRangeStart;  // 0x48 (0x48)
	int32_t FrameRangeEnd;  // 0x4C (0x4C)
	char pad_80[16];  // 0x50 (0x50)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader
// Size: 0x148(Inherited: 0x128)
struct UNiagaraDataInterfaceGrid2DCollectionReader : UNiagaraDataInterfaceGrid2DCollection
{
	struct FString EmitterName;  // 0x128 (0x128)
	struct FString DIName;  // 0x138 (0x138)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceGrid3D
// Size: 0x68(Inherited: 0x38)
struct UNiagaraDataInterfaceGrid3D : UNiagaraDataInterfaceRWBase
{
	struct FIntVector NumCells;  // 0x38 (0x38)
	float CellSize;  // 0x44 (0x44)
	int32_t NumCellsMaxAxis;  // 0x48 (0x48)
	uint8_t SetResolutionMethod;  // 0x4C (0x4C)
	struct FVector WorldBBoxSize;  // 0x50 (0x50)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceGrid3DCollection
// Size: 0xE8(Inherited: 0x68)
struct UNiagaraDataInterfaceGrid3DCollection : UNiagaraDataInterfaceGrid3D
{
	int32_t NumAttributes;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter;  // 0x70 (0x70)
	uint8_t OverrideBufferFormat;  // 0x90 (0x90)
	char bOverrideFormat : 1;  // 0x91 (0x91)
	char pad_145_1 : 7;  // 0x91 (0x91)
	char pad_146[87];  // 0x92 (0x92)


	void GetTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
	void GetRawTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
	bool FillVolumeTexture(struct UNiagaraComponent* Component, struct UVolumeTexture* Dest, int32_t AttributeIndex); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
	bool FillRawVolumeTexture(struct UNiagaraComponent* Component, struct UVolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
}; 
 
 


// Class Niagara.NiagaraSystem
// Size: 0x558(Inherited: 0x30)
struct UNiagaraSystem : UFXSystemAsset
{
	char bSupportLargeWorldCoordinates : 1;  // 0x30 (0x30)
	char bOverrideCastShadow : 1;  // 0x30 (0x30)
	char bOverrideReceivesDecals : 1;  // 0x30 (0x30)
	char bOverrideRenderCustomDepth : 1;  // 0x30 (0x30)
	char bOverrideCustomDepthStencilValue : 1;  // 0x30 (0x30)
	char bOverrideCustomDepthStencilWriteMask : 1;  // 0x30 (0x30)
	char bOverrideTranslucencySortPriority : 1;  // 0x30 (0x30)
	char bOverrideTranslucencySortDistanceOffset : 1;  // 0x30 (0x30)
	char bCastShadow : 1;  // 0x31 (0x31)
	char bReceivesDecals : 1;  // 0x31 (0x31)
	char bRenderCustomDepth : 1;  // 0x31 (0x31)
	char bDisableExperimentalVM : 1;  // 0x31 (0x31)
	char pad_49_1 : 4;  // 0x31 (0x31)
	uint8_t CustomDepthStencilWriteMask;  // 0x32 (0x32)
	char pad_51[1];  // 0x33 (0x33)
	int32_t CustomDepthStencilValue;  // 0x34 (0x34)
	int32_t TranslucencySortPriority;  // 0x38 (0x38)
	float TranslucencySortDistanceOffset;  // 0x3C (0x3C)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool bDumpDebugSystemInfo : 1;  // 0x40 (0x40)
	char pad_65_1 : 7;  // 0x41 (0x41)
	bool bDumpDebugEmitterInfo : 1;  // 0x41 (0x41)
	char pad_66[1];  // 0x42 (0x42)
	char pad_67_1 : 7;  // 0x43 (0x43)
	bool bRequireCurrentFrameData : 1;  // 0x43 (0x43)
	char bFixedBounds : 1;  // 0x44 (0x44)
	char pad_68_1 : 7;  // 0x44 (0x44)
	char pad_69[4];  // 0x45 (0x45)
	struct UNiagaraEffectType* EffectType;  // 0x48 (0x48)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool bOverrideScalabilitySettings : 1;  // 0x50 (0x50)
	char pad_81[3];  // 0x51 (0x51)
	char bOverrideAllowCullingForLocalPlayers : 1;  // 0x54 (0x54)
	char bAllowCullingForLocalPlayersOverride : 1;  // 0x54 (0x54)
	char pad_84_1 : 6;  // 0x54 (0x54)
	char pad_85[4];  // 0x55 (0x55)
	struct TArray<struct FNiagaraSystemScalabilityOverride> ScalabilityOverrides;  // 0x58 (0x58)
	struct FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides;  // 0x68 (0x68)
	struct TArray<struct FNiagaraEmitterHandle> EmitterHandles;  // 0x78 (0x78)
	struct TArray<struct UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;  // 0x88 (0x88)
	struct UNiagaraScript* SystemSpawnScript;  // 0x98 (0x98)
	struct UNiagaraScript* SystemUpdateScript;  // 0xA0 (0xA0)
	char pad_168[16];  // 0xA8 (0xA8)
	struct FNiagaraSystemCompiledData SystemCompiledData;  // 0xB8 (0xB8)
	struct FNiagaraUserRedirectionParameterStore ExposedParameters;  // 0x2E0 (0x2E0)
	struct FBox FixedBounds;  // 0x3B8 (0x3B8)
	char pad_1008_1 : 7;  // 0x3F0 (0x3F0)
	bool bAutoDeactivate : 1;  // 0x3F0 (0x3F0)
	char pad_1009_1 : 7;  // 0x3F1 (0x3F1)
	bool bDeterminism : 1;  // 0x3F1 (0x3F1)
	char pad_1010[2];  // 0x3F2 (0x3F2)
	int32_t RandomSeed;  // 0x3F4 (0x3F4)
	float WarmupTime;  // 0x3F8 (0x3F8)
	int32_t WarmupTickCount;  // 0x3FC (0x3FC)
	float WarmupTickDelta;  // 0x400 (0x400)
	char pad_1028_1 : 7;  // 0x404 (0x404)
	bool bFixedTickDelta : 1;  // 0x404 (0x404)
	char pad_1029[3];  // 0x405 (0x405)
	float FixedTickDeltaTime;  // 0x408 (0x408)
	char pad_1036_1 : 7;  // 0x40C (0x40C)
	bool bHasSystemScriptDIsWithPerInstanceData : 1;  // 0x40C (0x40C)
	char pad_1037_1 : 7;  // 0x40D (0x40D)
	bool bNeedsGPUContextInitForDataInterfaces : 1;  // 0x40D (0x40D)
	char pad_1038[2];  // 0x40E (0x40E)
	struct TArray<struct FName> UserDINamesReadInSystemScripts;  // 0x410 (0x410)
	char pad_1056[312];  // 0x420 (0x420)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceGrid3DCollectionReader
// Size: 0x108(Inherited: 0xE8)
struct UNiagaraDataInterfaceGrid3DCollectionReader : UNiagaraDataInterfaceGrid3DCollection
{
	struct FString EmitterName;  // 0xE8 (0xE8)
	struct FString DIName;  // 0xF8 (0xF8)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceLandscape
// Size: 0x58(Inherited: 0x38)
struct UNiagaraDataInterfaceLandscape : UNiagaraDataInterface
{
	struct AActor* SourceLandscape;  // 0x38 (0x38)
	uint8_t SourceMode;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials;  // 0x48 (0x48)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
// Size: 0x70(Inherited: 0x68)
struct UNiagaraDataInterfaceNeighborGrid3D : UNiagaraDataInterfaceGrid3D
{
	uint32_t MaxNeighborsPerCell;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceVectorField
// Size: 0x48(Inherited: 0x38)
struct UNiagaraDataInterfaceVectorField : UNiagaraDataInterface
{
	struct UVectorField* Field;  // 0x38 (0x38)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool bTileX : 1;  // 0x40 (0x40)
	char pad_65_1 : 7;  // 0x41 (0x41)
	bool bTileY : 1;  // 0x41 (0x41)
	char pad_66_1 : 7;  // 0x42 (0x42)
	bool bTileZ : 1;  // 0x42 (0x42)
	char pad_67[5];  // 0x43 (0x43)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceOcclusion
// Size: 0x38(Inherited: 0x38)
struct UNiagaraDataInterfaceOcclusion : UNiagaraDataInterface
{


}; 
 
 


// Class Niagara.NiagaraDataInterfaceParticleRead
// Size: 0x48(Inherited: 0x38)
struct UNiagaraDataInterfaceParticleRead : UNiagaraDataInterfaceRWBase
{
	struct FString EmitterName;  // 0x38 (0x38)


}; 
 
 


// Class Niagara.NiagaraDataInterfacePlatformSet
// Size: 0x68(Inherited: 0x38)
struct UNiagaraDataInterfacePlatformSet : UNiagaraDataInterface
{
	struct FNiagaraPlatformSet Platforms;  // 0x38 (0x38)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceRasterizationGrid3D
// Size: 0x78(Inherited: 0x68)
struct UNiagaraDataInterfaceRasterizationGrid3D : UNiagaraDataInterfaceGrid3D
{
	int32_t NumAttributes;  // 0x68 (0x68)
	float Precision;  // 0x6C (0x6C)
	int32_t ResetValue;  // 0x70 (0x70)
	char pad_116[4];  // 0x74 (0x74)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceRenderTarget2D
// Size: 0x108(Inherited: 0x38)
struct UNiagaraDataInterfaceRenderTarget2D : UNiagaraDataInterfaceRWBase
{
	struct FIntPoint Size;  // 0x38 (0x38)
	uint8_t MipMapGeneration;  // 0x40 (0x40)
	uint8_t MipMapGenerationType;  // 0x41 (0x41)
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat;  // 0x42 (0x42)
	char bInheritUserParameterSettings : 1;  // 0x43 (0x43)
	char bOverrideFormat : 1;  // 0x43 (0x43)
	char pad_67_1 : 6;  // 0x43 (0x43)
	char pad_68[5];  // 0x44 (0x44)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter;  // 0x48 (0x48)
	char pad_104[80];  // 0x68 (0x68)
	struct TMap<uint64_t, struct UTextureRenderTarget2D*> ManagedRenderTargets;  // 0xB8 (0xB8)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceRenderTarget2DArray
// Size: 0xB8(Inherited: 0x38)
struct UNiagaraDataInterfaceRenderTarget2DArray : UNiagaraDataInterfaceRWBase
{
	struct FIntVector Size;  // 0x38 (0x38)
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat;  // 0x44 (0x44)
	char bInheritUserParameterSettings : 1;  // 0x45 (0x45)
	char bOverrideFormat : 1;  // 0x45 (0x45)
	char pad_69_1 : 6;  // 0x45 (0x45)
	char pad_70[3];  // 0x46 (0x46)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter;  // 0x48 (0x48)
	struct TMap<uint64_t, struct UTextureRenderTarget2DArray*> ManagedRenderTargets;  // 0x68 (0x68)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceRenderTargetCube
// Size: 0xB0(Inherited: 0x38)
struct UNiagaraDataInterfaceRenderTargetCube : UNiagaraDataInterfaceRWBase
{
	int32_t Size;  // 0x38 (0x38)
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat;  // 0x3C (0x3C)
	char bInheritUserParameterSettings : 1;  // 0x3D (0x3D)
	char bOverrideFormat : 1;  // 0x3D (0x3D)
	char pad_61_1 : 6;  // 0x3D (0x3D)
	char pad_62[3];  // 0x3E (0x3E)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter;  // 0x40 (0x40)
	struct TMap<uint64_t, struct UTextureRenderTargetCube*> ManagedRenderTargets;  // 0x60 (0x60)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceRenderTargetVolume
// Size: 0xB8(Inherited: 0x38)
struct UNiagaraDataInterfaceRenderTargetVolume : UNiagaraDataInterfaceRWBase
{
	struct FIntVector Size;  // 0x38 (0x38)
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat;  // 0x44 (0x44)
	char bInheritUserParameterSettings : 1;  // 0x45 (0x45)
	char bOverrideFormat : 1;  // 0x45 (0x45)
	char pad_69_1 : 6;  // 0x45 (0x45)
	char pad_70[3];  // 0x46 (0x46)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter;  // 0x48 (0x48)
	struct TMap<uint64_t, struct UTextureRenderTargetVolume*> ManagedRenderTargets;  // 0x68 (0x68)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceRigidMeshCollisionQuery
// Size: 0x70(Inherited: 0x38)
struct UNiagaraDataInterfaceRigidMeshCollisionQuery : UNiagaraDataInterface
{
	struct TArray<struct FName> ActorTags;  // 0x38 (0x38)
	struct TArray<struct FName> ComponentTags;  // 0x48 (0x48)
	struct TArray<struct TSoftObjectPtr<AActor>> SourceActors;  // 0x58 (0x58)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool OnlyUseMoveable : 1;  // 0x68 (0x68)
	char pad_105_1 : 7;  // 0x69 (0x69)
	bool GlobalSearchAllowed : 1;  // 0x69 (0x69)
	char pad_106_1 : 7;  // 0x6A (0x6A)
	bool GlobalSearchForced : 1;  // 0x6A (0x6A)
	char pad_107_1 : 7;  // 0x6B (0x6B)
	bool GlobalSearchFallback_Unscripted : 1;  // 0x6B (0x6B)
	int32_t MaxNumPrimitives;  // 0x6C (0x6C)


}; 
 
 


// Class Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary
// Size: 0x28(Inherited: 0x28)
struct UNiagaraDIRigidMeshCollisionFunctionLibrary : UBlueprintFunctionLibrary
{


	void SetSourceActors(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct AActor*>& SourceActors); // Function Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary.SetSourceActors
}; 
 
 


// Class Niagara.NiagaraFunctionLibrary
// Size: 0x28(Inherited: 0x28)
struct UNiagaraFunctionLibrary : UBlueprintFunctionLibrary
{


	struct UNiagaraComponent* SpawnSystemAttachedWithParams(struct FFXSystemSpawnParameters& SpawnParams); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttachedWithParams
	struct UNiagaraComponent* SpawnSystemAttached(struct UNiagaraSystem* SystemTemplate, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, uint8_t PoolingMethod, bool bPreCullCheck); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
	struct UNiagaraComponent* SpawnSystemAtLocationWithParams(struct FFXSystemSpawnParameters& SpawnParams); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocationWithParams
	struct UNiagaraComponent* SpawnSystemAtLocation(struct UObject* WorldContextObject, struct UNiagaraSystem* SystemTemplate, struct FVector Location, struct FRotator Rotation, struct FVector Scale, bool bAutoDestroy, bool bAutoActivate, uint8_t PoolingMethod, bool bPreCullCheck); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
	void SetVolumeTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UVolumeTexture* Texture); // Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
	void SetTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UTexture* Texture); // Function Niagara.NiagaraFunctionLibrary.SetTextureObject
	void SetTexture2DArrayObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UTexture2DArray* Texture); // Function Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject
	void SetSkeletalMeshDataInterfaceSamplingRegions(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct TArray<struct FName>& SamplingRegions); // Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
	void SetSkeletalMeshDataInterfaceFilteredSockets(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct TArray<struct FName>& FilteredSockets); // Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredSockets
	void SetSkeletalMeshDataInterfaceFilteredBones(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct TArray<struct FName>& FilteredBones); // Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredBones
	void SetComponentNiagaraGPURayTracedCollisionGroup(struct UObject* WorldContextObject, struct UPrimitiveComponent* Primitive, int32_t CollisionGroup); // Function Niagara.NiagaraFunctionLibrary.SetComponentNiagaraGPURayTracedCollisionGroup
	void SetActorNiagaraGPURayTracedCollisionGroup(struct UObject* WorldContextObject, struct AActor* Actor, int32_t CollisionGroup); // Function Niagara.NiagaraFunctionLibrary.SetActorNiagaraGPURayTracedCollisionGroup
	void ReleaseNiagaraGPURayTracedCollisionGroup(struct UObject* WorldContextObject, int32_t CollisionGroup); // Function Niagara.NiagaraFunctionLibrary.ReleaseNiagaraGPURayTracedCollisionGroup
	void OverrideSystemUserVariableStaticMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMeshComponent* StaticMeshComponent); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
	void OverrideSystemUserVariableStaticMesh(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMesh* StaticMesh); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
	void OverrideSystemUserVariableSkeletalMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct USkeletalMeshComponent* SkeletalMeshComponent); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
	struct UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(struct UObject* WorldContextObject, struct UNiagaraParameterCollection* Collection); // Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
	int32_t AcquireNiagaraGPURayTracedCollisionGroup(struct UObject* WorldContextObject); // Function Niagara.NiagaraFunctionLibrary.AcquireNiagaraGPURayTracedCollisionGroup
}; 
 
 


// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// Size: 0x100(Inherited: 0x38)
struct UNiagaraDataInterfaceSkeletalMesh : UNiagaraDataInterface
{
	uint8_t SourceMode;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct TSoftObjectPtr<AActor> SoftSourceActor;  // 0x40 (0x40)
	struct TArray<struct FName> ComponentTags;  // 0x70 (0x70)
	struct USkeletalMeshComponent* SourceComponent;  // 0x80 (0x80)
	struct FNiagaraUserParameterBinding MeshUserParameter;  // 0x88 (0x88)
	uint8_t SkinningMode;  // 0xA8 (0xA8)
	char pad_169[7];  // 0xA9 (0xA9)
	struct TArray<struct FName> SamplingRegions;  // 0xB0 (0xB0)
	int32_t WholeMeshLOD;  // 0xC0 (0xC0)
	char pad_196[4];  // 0xC4 (0xC4)
	struct TArray<struct FName> FilteredBones;  // 0xC8 (0xC8)
	struct TArray<struct FName> FilteredSockets;  // 0xD8 (0xD8)
	struct FName ExcludeBoneName;  // 0xE8 (0xE8)
	char bExcludeBone : 1;  // 0xF0 (0xF0)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	char pad_241[4];  // 0xF1 (0xF1)
	int32_t UvSetIndex;  // 0xF4 (0xF4)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool bRequireCurrentFrameData : 1;  // 0xF8 (0xF8)
	char pad_249[7];  // 0xF9 (0xF9)


	void OnSourceEndPlay(struct AActor* InSource, enum class EEndPlayReason Reason); // Function Niagara.NiagaraDataInterfaceSkeletalMesh.OnSourceEndPlay
}; 
 
 


// Class Niagara.NiagaraDataInterfaceTexture
// Size: 0x60(Inherited: 0x38)
struct UNiagaraDataInterfaceTexture : UNiagaraDataInterface
{
	struct UTexture* Texture;  // 0x38 (0x38)
	struct FNiagaraUserParameterBinding TextureUserParameter;  // 0x40 (0x40)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceVector2DCurve
// Size: 0x170(Inherited: 0x70)
struct UNiagaraDataInterfaceVector2DCurve : UNiagaraDataInterfaceCurveBase
{
	struct FRichCurve XCurve;  // 0x70 (0x70)
	struct FRichCurve YCurve;  // 0xF0 (0xF0)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceVector4Curve
// Size: 0x270(Inherited: 0x70)
struct UNiagaraDataInterfaceVector4Curve : UNiagaraDataInterfaceCurveBase
{
	struct FRichCurve XCurve;  // 0x70 (0x70)
	struct FRichCurve YCurve;  // 0xF0 (0xF0)
	struct FRichCurve ZCurve;  // 0x170 (0x170)
	struct FRichCurve WCurve;  // 0x1F0 (0x1F0)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceVectorCurve
// Size: 0x1F0(Inherited: 0x70)
struct UNiagaraDataInterfaceVectorCurve : UNiagaraDataInterfaceCurveBase
{
	struct FRichCurve XCurve;  // 0x70 (0x70)
	struct FRichCurve YCurve;  // 0xF0 (0xF0)
	struct FRichCurve ZCurve;  // 0x170 (0x170)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceVolumeCache
// Size: 0x90(Inherited: 0x38)
struct UNiagaraDataInterfaceVolumeCache : UNiagaraDataInterface
{
	struct UVolumeCache* VolumeCache;  // 0x38 (0x38)
	char pad_64[80];  // 0x40 (0x40)


}; 
 
 


// Class Niagara.NiagaraDataInterfaceVolumeTexture
// Size: 0x60(Inherited: 0x38)
struct UNiagaraDataInterfaceVolumeTexture : UNiagaraDataInterface
{
	struct UTexture* Texture;  // 0x38 (0x38)
	struct FNiagaraUserParameterBinding TextureUserParameter;  // 0x40 (0x40)


}; 
 
 


// Class Niagara.NiagaraDebugHUDSettings
// Size: 0x278(Inherited: 0x28)
struct UNiagaraDebugHUDSettings : UObject
{
	char pad_40[32];  // 0x28 (0x28)
	struct FNiagaraDebugHUDSettingsData Data;  // 0x48 (0x48)


}; 
 
 


// Class Niagara.NiagaraEditorDataBase
// Size: 0x28(Inherited: 0x28)
struct UNiagaraEditorDataBase : UObject
{


}; 
 
 


// Class Niagara.NiagaraSignificanceHandlerDistance
// Size: 0x28(Inherited: 0x28)
struct UNiagaraSignificanceHandlerDistance : UNiagaraSignificanceHandler
{


}; 
 
 


// Class Niagara.NiagaraEffectType
// Size: 0xB0(Inherited: 0x28)
struct UNiagaraEffectType : UObject
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bAllowCullingForLocalPlayers : 1;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	uint8_t UpdateFrequency;  // 0x2C (0x2C)
	uint8_t CullReaction;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)
	struct UNiagaraSignificanceHandler* SignificanceHandler;  // 0x38 (0x38)
	struct TArray<struct FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings;  // 0x40 (0x40)
	struct FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings;  // 0x50 (0x50)
	struct FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings;  // 0x60 (0x60)
	struct TArray<struct UNiagaraValidationRule*> ValidationRules;  // 0x70 (0x70)
	char pad_128[8];  // 0x80 (0x80)
	struct UNiagaraBaselineController* PerformanceBaselineController;  // 0x88 (0x88)
	struct FNiagaraPerfBaselineStats PerfBaselineStats;  // 0x90 (0x90)
	struct FGuid PerfBaselineVersion;  // 0xA0 (0xA0)


}; 
 
 


// Class Niagara.NiagaraEmitter
// Size: 0xB8(Inherited: 0x28)
struct UNiagaraEmitter : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	struct FGuid ExposedVersion;  // 0x30 (0x30)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool bVersioningEnabled : 1;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	struct TArray<struct FVersionedNiagaraEmitterData> VersionData;  // 0x48 (0x48)
	char pad_88[8];  // 0x58 (0x58)
	struct FString UniqueEmitterName;  // 0x60 (0x60)
	struct TArray<struct UNiagaraRendererProperties*> RendererProperties;  // 0x70 (0x70)
	struct TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps;  // 0x80 (0x80)
	struct TArray<struct UNiagaraSimulationStageBase*> SimulationStages;  // 0x90 (0x90)
	struct UNiagaraScript* GPUComputeScript;  // 0xA0 (0xA0)
	struct TArray<struct FName> SharedEventGeneratorIds;  // 0xA8 (0xA8)


}; 
 
 


// Class Niagara.NiagaraEventReceiverEmitterAction
// Size: 0x28(Inherited: 0x28)
struct UNiagaraEventReceiverEmitterAction : UObject
{


}; 
 
 


// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// Size: 0x30(Inherited: 0x28)
struct UNiagaraEventReceiverEmitterAction_SpawnParticles : UNiagaraEventReceiverEmitterAction
{
	uint32_t NumParticles;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 


// Class Niagara.NiagaraLensEffectBase
// Size: 0x330(Inherited: 0x2A0)
struct ANiagaraLensEffectBase : ANiagaraActor
{
	char pad_672[16];  // 0x2A0 (0x2A0)
	struct FTransform DesiredRelativeTransform;  // 0x2B0 (0x2B0)
	float BaseAuthoredFOV;  // 0x310 (0x310)
	char bAllowMultipleInstances : 1;  // 0x314 (0x314)
	char bResetWhenRetriggered : 1;  // 0x314 (0x314)
	char pad_788_1 : 6;  // 0x314 (0x314)
	char pad_789[4];  // 0x315 (0x315)
	struct TArray<AActor*> EmittersToTreatAsSame;  // 0x318 (0x318)
	struct APlayerCameraManager* OwningCameraManager;  // 0x328 (0x328)


}; 
 
 


// Class Niagara.NiagaraLightRendererProperties
// Size: 0x398(Inherited: 0xE0)
struct UNiagaraLightRendererProperties : UNiagaraRendererProperties
{
	char bUseInverseSquaredFalloff : 1;  // 0xE0 (0xE0)
	char bAffectsTranslucency : 1;  // 0xE0 (0xE0)
	char bAlphaScalesBrightness : 1;  // 0xE0 (0xE0)
	char bOverrideInverseExposureBlend : 1;  // 0xE0 (0xE0)
	char pad_224_1 : 4;  // 0xE0 (0xE0)
	char pad_225[4];  // 0xE1 (0xE1)
	float RadiusScale;  // 0xE4 (0xE4)
	float DefaultExponent;  // 0xE8 (0xE8)
	struct FVector3f ColorAdd;  // 0xEC (0xEC)
	float InverseExposureBlend;  // 0xF8 (0xF8)
	int32_t RendererVisibility;  // 0xFC (0xFC)
	struct FNiagaraVariableAttributeBinding LightRenderingEnabledBinding;  // 0x100 (0x100)
	struct FNiagaraVariableAttributeBinding LightExponentBinding;  // 0x158 (0x158)
	struct FNiagaraVariableAttributeBinding PositionBinding;  // 0x1B0 (0x1B0)
	struct FNiagaraVariableAttributeBinding ColorBinding;  // 0x208 (0x208)
	struct FNiagaraVariableAttributeBinding RadiusBinding;  // 0x260 (0x260)
	struct FNiagaraVariableAttributeBinding VolumetricScatteringBinding;  // 0x2B8 (0x2B8)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;  // 0x310 (0x310)
	char pad_872[48];  // 0x368 (0x368)


}; 
 
 


// Class Niagara.NiagaraMeshRendererProperties
// Size: 0x958(Inherited: 0xE0)
struct UNiagaraMeshRendererProperties : UNiagaraRendererProperties
{
	struct TArray<struct FNiagaraMeshRendererMeshProperties> Meshes;  // 0xE0 (0xE0)
	uint8_t SourceMode;  // 0xF0 (0xF0)
	uint8_t SortMode;  // 0xF1 (0xF1)
	char pad_242[2];  // 0xF2 (0xF2)
	char bOverrideMaterials : 1;  // 0xF4 (0xF4)
	char bSortOnlyWhenTranslucent : 1;  // 0xF4 (0xF4)
	char pad_244_1 : 6;  // 0xF4 (0xF4)
	char pad_245[4];  // 0xF5 (0xF5)
	uint8_t SortPrecision;  // 0xF8 (0xF8)
	uint8_t GpuTranslucentLatency;  // 0xF9 (0xF9)
	char pad_250[2];  // 0xFA (0xFA)
	char bSubImageBlend : 1;  // 0xFC (0xFC)
	char bEnableFrustumCulling : 1;  // 0xFC (0xFC)
	char bEnableCameraDistanceCulling : 1;  // 0xFC (0xFC)
	char bEnableMeshFlipbook : 1;  // 0xFC (0xFC)
	char pad_252_1 : 4;  // 0xFC (0xFC)
	char pad_253[4];  // 0xFD (0xFD)
	struct TArray<struct FNiagaraMeshMaterialOverride> OverrideMaterials;  // 0x100 (0x100)
	struct FVector2D SubImageSize;  // 0x110 (0x110)
	uint8_t FacingMode;  // 0x120 (0x120)
	char pad_289[3];  // 0x121 (0x121)
	char bLockedAxisEnable : 1;  // 0x124 (0x124)
	char pad_292_1 : 7;  // 0x124 (0x124)
	char pad_293[4];  // 0x125 (0x125)
	struct FVector LockedAxis;  // 0x128 (0x128)
	uint8_t LockedAxisSpace;  // 0x140 (0x140)
	char pad_321[3];  // 0x141 (0x141)
	float MinCameraDistance;  // 0x144 (0x144)
	float MaxCameraDistance;  // 0x148 (0x148)
	uint32_t RendererVisibility;  // 0x14C (0x14C)
	struct FNiagaraVariableAttributeBinding PositionBinding;  // 0x150 (0x150)
	struct FNiagaraVariableAttributeBinding ColorBinding;  // 0x1A8 (0x1A8)
	struct FNiagaraVariableAttributeBinding VelocityBinding;  // 0x200 (0x200)
	struct FNiagaraVariableAttributeBinding MeshOrientationBinding;  // 0x258 (0x258)
	struct FNiagaraVariableAttributeBinding ScaleBinding;  // 0x2B0 (0x2B0)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding;  // 0x308 (0x308)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding;  // 0x360 (0x360)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding;  // 0x3B8 (0x3B8)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding;  // 0x410 (0x410)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding;  // 0x468 (0x468)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding;  // 0x4C0 (0x4C0)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding;  // 0x518 (0x518)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding;  // 0x570 (0x570)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding;  // 0x5C8 (0x5C8)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;  // 0x620 (0x620)
	struct FNiagaraVariableAttributeBinding MeshIndexBinding;  // 0x678 (0x678)
	struct FNiagaraRendererMaterialParameters MaterialParameters;  // 0x6D0 (0x6D0)
	struct FNiagaraVariableAttributeBinding PrevPositionBinding;  // 0x710 (0x710)
	struct FNiagaraVariableAttributeBinding PrevScaleBinding;  // 0x768 (0x768)
	struct FNiagaraVariableAttributeBinding PrevMeshOrientationBinding;  // 0x7C0 (0x7C0)
	struct FNiagaraVariableAttributeBinding PrevCameraOffsetBinding;  // 0x818 (0x818)
	struct FNiagaraVariableAttributeBinding PrevVelocityBinding;  // 0x870 (0x870)
	char pad_2248[104];  // 0x8C8 (0x8C8)
	struct UStaticMesh* ParticleMesh;  // 0x930 (0x930)
	struct FVector PivotOffset;  // 0x938 (0x938)
	uint8_t PivotOffsetSpace;  // 0x950 (0x950)
	char pad_2385[7];  // 0x951 (0x951)


}; 
 
 


// Class Niagara.NiagaraParameterCollectionInstance
// Size: 0xF0(Inherited: 0x28)
struct UNiagaraParameterCollectionInstance : UObject
{
	struct UNiagaraParameterCollection* Collection;  // 0x28 (0x28)
	struct TArray<struct FNiagaraVariable> OverridenParameters;  // 0x30 (0x30)
	struct FNiagaraParameterStore ParameterStorage;  // 0x40 (0x40)
	char pad_200[40];  // 0xC8 (0xC8)


	void SetVectorParameter(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
	void SetVector4Parameter(struct FString InVariableName, struct FVector4& InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
	void SetVector2DParameter(struct FString InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
	void SetQuatParameter(struct FString InVariableName, struct FQuat& InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
	void SetIntParameter(struct FString InVariableName, int32_t InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
	void SetFloatParameter(struct FString InVariableName, float InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
	void SetColorParameter(struct FString InVariableName, struct FLinearColor InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
	void SetBoolParameter(struct FString InVariableName, bool InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
	struct FVector GetVectorParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
	struct FVector4 GetVector4Parameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
	struct FVector2D GetVector2DParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
	struct FQuat GetQuatParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
	int32_t GetIntParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
	float GetFloatParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
	struct FLinearColor GetColorParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
	bool GetBoolParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
}; 
 
 


// Class Niagara.NiagaraParameterCollection
// Size: 0x60(Inherited: 0x28)
struct UNiagaraParameterCollection : UObject
{
	struct FName Namespace;  // 0x28 (0x28)
	struct TArray<struct FNiagaraVariable> Parameters;  // 0x30 (0x30)
	struct UMaterialParameterCollection* SourceMaterialCollection;  // 0x40 (0x40)
	struct UNiagaraParameterCollectionInstance* DefaultInstance;  // 0x48 (0x48)
	struct FGuid CompileId;  // 0x50 (0x50)


}; 
 
 


// Class Niagara.NiagaraBaselineController
// Size: 0x70(Inherited: 0x28)
struct UNiagaraBaselineController : UObject
{
	float TestDuration;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct UNiagaraEffectType* EffectType;  // 0x30 (0x30)
	struct ANiagaraPerfBaselineActor* Owner;  // 0x38 (0x38)
	struct TSoftObjectPtr<UNiagaraSystem> System;  // 0x40 (0x40)


	bool OnTickTest(); // Function Niagara.NiagaraBaselineController.OnTickTest
	void OnOwnerTick(float DeltaTime); // Function Niagara.NiagaraBaselineController.OnOwnerTick
	void OnEndTest(struct FNiagaraPerfBaselineStats Stats); // Function Niagara.NiagaraBaselineController.OnEndTest
	void OnBeginTest(); // Function Niagara.NiagaraBaselineController.OnBeginTest
	struct UNiagaraSystem* GetSystem(); // Function Niagara.NiagaraBaselineController.GetSystem
}; 
 
 


// Class Niagara.NiagaraBaselineController_Basic
// Size: 0x88(Inherited: 0x70)
struct UNiagaraBaselineController_Basic : UNiagaraBaselineController
{
	int32_t NumInstances;  // 0x70 (0x70)
	char pad_116[4];  // 0x74 (0x74)
	struct TArray<struct UNiagaraComponent*> SpawnedComponents;  // 0x78 (0x78)


}; 
 
 


// Class Niagara.NiagaraPrecompileContainer
// Size: 0x40(Inherited: 0x28)
struct UNiagaraPrecompileContainer : UObject
{
	struct TArray<struct UNiagaraScript*> Scripts;  // 0x28 (0x28)
	struct UNiagaraSystem* System;  // 0x38 (0x38)


}; 
 
 


// Class Niagara.NiagaraPreviewAxis
// Size: 0x28(Inherited: 0x28)
struct UNiagaraPreviewAxis : UObject
{


	int32_t Num(); // Function Niagara.NiagaraPreviewAxis.Num
	void ApplyToPreview(struct UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, struct FString& OutLabelText); // Function Niagara.NiagaraPreviewAxis.ApplyToPreview
}; 
 
 


// Class Niagara.NiagaraPreviewAxis_InterpParamBase
// Size: 0x38(Inherited: 0x28)
struct UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis
{
	struct FName Param;  // 0x28 (0x28)
	int32_t Count;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 


// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// Size: 0x40(Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamInt32 : UNiagaraPreviewAxis_InterpParamBase
{
	int32_t Min;  // 0x38 (0x38)
	int32_t Max;  // 0x3C (0x3C)


}; 
 
 


// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// Size: 0x40(Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamFloat : UNiagaraPreviewAxis_InterpParamBase
{
	float Min;  // 0x38 (0x38)
	float Max;  // 0x3C (0x3C)


}; 
 
 


// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// Size: 0x58(Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamVector2D : UNiagaraPreviewAxis_InterpParamBase
{
	struct FVector2D Min;  // 0x38 (0x38)
	struct FVector2D Max;  // 0x48 (0x48)


}; 
 
 


// Class Niagara.NiagaraPreviewAxis_InterpParamVector
// Size: 0x68(Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamVector : UNiagaraPreviewAxis_InterpParamBase
{
	struct FVector Min;  // 0x38 (0x38)
	struct FVector Max;  // 0x50 (0x50)


}; 
 
 


// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// Size: 0x80(Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamVector4 : UNiagaraPreviewAxis_InterpParamBase
{
	char pad_56[8];  // 0x38 (0x38)
	struct FVector4 Min;  // 0x40 (0x40)
	struct FVector4 Max;  // 0x60 (0x60)


}; 
 
 


// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// Size: 0x58(Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamLinearColor : UNiagaraPreviewAxis_InterpParamBase
{
	struct FLinearColor Min;  // 0x38 (0x38)
	struct FLinearColor Max;  // 0x48 (0x48)


}; 
 
 


// Class Niagara.NiagaraPreviewGrid
// Size: 0x2E0(Inherited: 0x290)
struct ANiagaraPreviewGrid : AActor
{
	struct UNiagaraSystem* System;  // 0x290 (0x290)
	uint8_t ResetMode;  // 0x298 (0x298)
	char pad_665[7];  // 0x299 (0x299)
	struct UNiagaraPreviewAxis* PreviewAxisX;  // 0x2A0 (0x2A0)
	struct UNiagaraPreviewAxis* PreviewAxisY;  // 0x2A8 (0x2A8)
	ANiagaraPreviewBase* PreviewClass;  // 0x2B0 (0x2B0)
	float SpacingX;  // 0x2B8 (0x2B8)
	float SpacingY;  // 0x2BC (0x2BC)
	int32_t NumX;  // 0x2C0 (0x2C0)
	int32_t NumY;  // 0x2C4 (0x2C4)
	struct TArray<struct UChildActorComponent*> PreviewComponents;  // 0x2C8 (0x2C8)
	char pad_728[8];  // 0x2D8 (0x2D8)


	void SetPaused(bool bPaused); // Function Niagara.NiagaraPreviewGrid.SetPaused
	void GetPreviews(struct TArray<struct UNiagaraComponent*>& OutPreviews); // Function Niagara.NiagaraPreviewGrid.GetPreviews
	void DeactivatePreviews(); // Function Niagara.NiagaraPreviewGrid.DeactivatePreviews
	void ActivatePreviews(bool bReset); // Function Niagara.NiagaraPreviewGrid.ActivatePreviews
}; 
 
 


// Class Niagara.NiagaraRibbonRendererProperties
// Size: 0xA90(Inherited: 0xE0)
struct UNiagaraRibbonRendererProperties : UNiagaraRendererProperties
{
	struct UMaterialInterface* Material;  // 0xE0 (0xE0)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding;  // 0xE8 (0xE8)
	uint8_t FacingMode;  // 0x108 (0x108)
	char pad_265[7];  // 0x109 (0x109)
	struct FNiagaraRibbonUVSettings UV0Settings;  // 0x110 (0x110)
	struct FNiagaraRibbonUVSettings UV1Settings;  // 0x148 (0x148)
	int32_t MaxNumRibbons;  // 0x180 (0x180)
	char pad_388_1 : 7;  // 0x184 (0x184)
	bool bUseGPUInit : 1;  // 0x184 (0x184)
	uint8_t DrawDirection;  // 0x185 (0x185)
	uint8_t Shape;  // 0x186 (0x186)
	char pad_391_1 : 7;  // 0x187 (0x187)
	bool bEnableAccurateGeometry : 1;  // 0x187 (0x187)
	int32_t WidthSegmentationCount;  // 0x188 (0x188)
	int32_t MultiPlaneCount;  // 0x18C (0x18C)
	int32_t TubeSubdivisions;  // 0x190 (0x190)
	char pad_404[4];  // 0x194 (0x194)
	struct TArray<struct FNiagaraRibbonShapeCustomVertex> CustomVertices;  // 0x198 (0x198)
	float CurveTension;  // 0x1A8 (0x1A8)
	uint8_t TessellationMode;  // 0x1AC (0x1AC)
	char pad_429[3];  // 0x1AD (0x1AD)
	int32_t TessellationFactor;  // 0x1B0 (0x1B0)
	char pad_436_1 : 7;  // 0x1B4 (0x1B4)
	bool bUseConstantFactor : 1;  // 0x1B4 (0x1B4)
	char pad_437[3];  // 0x1B5 (0x1B5)
	float TessellationAngle;  // 0x1B8 (0x1B8)
	char pad_444_1 : 7;  // 0x1BC (0x1BC)
	bool bScreenSpaceTessellation : 1;  // 0x1BC (0x1BC)
	char pad_445[3];  // 0x1BD (0x1BD)
	struct FNiagaraVariableAttributeBinding PositionBinding;  // 0x1C0 (0x1C0)
	struct FNiagaraVariableAttributeBinding ColorBinding;  // 0x218 (0x218)
	struct FNiagaraVariableAttributeBinding VelocityBinding;  // 0x270 (0x270)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding;  // 0x2C8 (0x2C8)
	struct FNiagaraVariableAttributeBinding RibbonTwistBinding;  // 0x320 (0x320)
	struct FNiagaraVariableAttributeBinding RibbonWidthBinding;  // 0x378 (0x378)
	struct FNiagaraVariableAttributeBinding RibbonFacingBinding;  // 0x3D0 (0x3D0)
	struct FNiagaraVariableAttributeBinding RibbonIdBinding;  // 0x428 (0x428)
	struct FNiagaraVariableAttributeBinding RibbonLinkOrderBinding;  // 0x480 (0x480)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding;  // 0x4D8 (0x4D8)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding;  // 0x530 (0x530)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding;  // 0x588 (0x588)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding;  // 0x5E0 (0x5E0)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding;  // 0x638 (0x638)
	struct FNiagaraVariableAttributeBinding RibbonUVDistance;  // 0x690 (0x690)
	struct FNiagaraVariableAttributeBinding U0OverrideBinding;  // 0x6E8 (0x6E8)
	struct FNiagaraVariableAttributeBinding V0RangeOverrideBinding;  // 0x740 (0x740)
	struct FNiagaraVariableAttributeBinding U1OverrideBinding;  // 0x798 (0x798)
	struct FNiagaraVariableAttributeBinding V1RangeOverrideBinding;  // 0x7F0 (0x7F0)
	struct FNiagaraRendererMaterialParameters MaterialParameters;  // 0x848 (0x848)
	struct FNiagaraVariableAttributeBinding PrevPositionBinding;  // 0x888 (0x888)
	struct FNiagaraVariableAttributeBinding PrevRibbonWidthBinding;  // 0x8E0 (0x8E0)
	struct FNiagaraVariableAttributeBinding PrevRibbonFacingBinding;  // 0x938 (0x938)
	struct FNiagaraVariableAttributeBinding PrevRibbonTwistBinding;  // 0x990 (0x990)
	char pad_2536[168];  // 0x9E8 (0x9E8)


}; 
 
 


// Class Niagara.NiagaraScratchPadContainer
// Size: 0x28(Inherited: 0x28)
struct UNiagaraScratchPadContainer : UObject
{


}; 
 
 


// Class Niagara.NiagaraSpriteRendererProperties
// Size: 0xB68(Inherited: 0xE0)
struct UNiagaraSpriteRendererProperties : UNiagaraRendererProperties
{
	struct UMaterialInterface* Material;  // 0xE0 (0xE0)
	uint8_t SourceMode;  // 0xE8 (0xE8)
	char pad_233[7];  // 0xE9 (0xE9)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding;  // 0xF0 (0xF0)
	uint8_t Alignment;  // 0x110 (0x110)
	uint8_t FacingMode;  // 0x111 (0x111)
	char pad_274[6];  // 0x112 (0x112)
	struct FVector2D PivotInUVSpace;  // 0x118 (0x118)
	float MacroUVRadius;  // 0x128 (0x128)
	uint8_t SortMode;  // 0x12C (0x12C)
	char pad_301[3];  // 0x12D (0x12D)
	struct FVector2D SubImageSize;  // 0x130 (0x130)
	char bSubImageBlend : 1;  // 0x140 (0x140)
	char bRemoveHMDRollInVR : 1;  // 0x140 (0x140)
	char bSortOnlyWhenTranslucent : 1;  // 0x140 (0x140)
	char pad_320_1 : 5;  // 0x140 (0x140)
	char pad_321[4];  // 0x141 (0x141)
	uint8_t SortPrecision;  // 0x144 (0x144)
	uint8_t GpuTranslucentLatency;  // 0x145 (0x145)
	uint8_t PixelCoverageMode;  // 0x146 (0x146)
	char pad_327[1];  // 0x147 (0x147)
	float PixelCoverageBlend;  // 0x148 (0x148)
	float MinFacingCameraBlendDistance;  // 0x14C (0x14C)
	float MaxFacingCameraBlendDistance;  // 0x150 (0x150)
	char bEnableCameraDistanceCulling : 1;  // 0x154 (0x154)
	char pad_340_1 : 7;  // 0x154 (0x154)
	char pad_341[4];  // 0x155 (0x155)
	float MinCameraDistance;  // 0x158 (0x158)
	float MaxCameraDistance;  // 0x15C (0x15C)
	uint32_t RendererVisibility;  // 0x160 (0x160)
	char pad_356[4];  // 0x164 (0x164)
	struct FNiagaraVariableAttributeBinding PositionBinding;  // 0x168 (0x168)
	struct FNiagaraVariableAttributeBinding ColorBinding;  // 0x1C0 (0x1C0)
	struct FNiagaraVariableAttributeBinding VelocityBinding;  // 0x218 (0x218)
	struct FNiagaraVariableAttributeBinding SpriteRotationBinding;  // 0x270 (0x270)
	struct FNiagaraVariableAttributeBinding SpriteSizeBinding;  // 0x2C8 (0x2C8)
	struct FNiagaraVariableAttributeBinding SpriteFacingBinding;  // 0x320 (0x320)
	struct FNiagaraVariableAttributeBinding SpriteAlignmentBinding;  // 0x378 (0x378)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding;  // 0x3D0 (0x3D0)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding;  // 0x428 (0x428)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding;  // 0x480 (0x480)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding;  // 0x4D8 (0x4D8)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding;  // 0x530 (0x530)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding;  // 0x588 (0x588)
	struct FNiagaraVariableAttributeBinding UVScaleBinding;  // 0x5E0 (0x5E0)
	struct FNiagaraVariableAttributeBinding PivotOffsetBinding;  // 0x638 (0x638)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding;  // 0x690 (0x690)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding;  // 0x6E8 (0x6E8)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding;  // 0x740 (0x740)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;  // 0x798 (0x798)
	struct FNiagaraRendererMaterialParameters MaterialParameters;  // 0x7F0 (0x7F0)
	struct FNiagaraVariableAttributeBinding PrevPositionBinding;  // 0x830 (0x830)
	struct FNiagaraVariableAttributeBinding PrevVelocityBinding;  // 0x888 (0x888)
	struct FNiagaraVariableAttributeBinding PrevSpriteRotationBinding;  // 0x8E0 (0x8E0)
	struct FNiagaraVariableAttributeBinding PrevSpriteSizeBinding;  // 0x938 (0x938)
	struct FNiagaraVariableAttributeBinding PrevSpriteFacingBinding;  // 0x990 (0x990)
	struct FNiagaraVariableAttributeBinding PrevSpriteAlignmentBinding;  // 0x9E8 (0x9E8)
	struct FNiagaraVariableAttributeBinding PrevCameraOffsetBinding;  // 0xA40 (0xA40)
	struct FNiagaraVariableAttributeBinding PrevPivotOffsetBinding;  // 0xA98 (0xA98)
	char pad_2800[120];  // 0xAF0 (0xAF0)


}; 
 
 


// Class Niagara.NiagaraScript
// Size: 0x3A8(Inherited: 0x28)
struct UNiagaraScript : UNiagaraScriptBase
{
	char pad_40[8];  // 0x28 (0x28)
	uint8_t Usage;  // 0x30 (0x30)
	char pad_49[3];  // 0x31 (0x31)
	struct FGuid UsageId;  // 0x34 (0x34)
	char pad_68[4];  // 0x44 (0x44)
	struct FNiagaraParameterStore RapidIterationParameters;  // 0x48 (0x48)
	struct FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore;  // 0xD0 (0xD0)
	struct TArray<struct FNiagaraBoundParameter> ScriptExecutionBoundParameters;  // 0x178 (0x178)
	struct FNiagaraVMExecutableDataId CachedScriptVMId;  // 0x188 (0x188)
	char pad_480[16];  // 0x1E0 (0x1E0)
	struct FNiagaraVMExecutableData CachedScriptVM;  // 0x1F0 (0x1F0)
	struct TArray<struct UNiagaraParameterCollection*> CachedParameterCollectionReferences;  // 0x380 (0x380)
	struct TArray<struct FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces;  // 0x390 (0x390)
	char pad_928[8];  // 0x3A0 (0x3A0)


	void RaiseOnGPUCompilationComplete(); // Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
}; 
 
 


// Class Niagara.NiagaraSimCache
// Size: 0x180(Inherited: 0x28)
struct UNiagaraSimCache : UObject
{
	struct TSoftObjectPtr<UNiagaraSystem> SoftNiagaraSystem;  // 0x28 (0x28)
	float StartSeconds;  // 0x58 (0x58)
	float DurationSeconds;  // 0x5C (0x5C)
	struct FNiagaraSimCacheCreateParameters CreateParameters;  // 0x60 (0x60)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool bNeedsReadComponentMappingRecache : 1;  // 0x98 (0x98)
	char pad_153[7];  // 0x99 (0x99)
	struct FNiagaraSimCacheLayout CacheLayout;  // 0xA0 (0xA0)
	struct TArray<struct FNiagaraSimCacheFrame> CacheFrames;  // 0x118 (0x118)
	struct TMap<struct FNiagaraVariableBase, struct UObject*> DataInterfaceStorage;  // 0x128 (0x128)
	char pad_376[8];  // 0x178 (0x178)


	void ReadVectorAttribute(struct TArray<struct FVector>& OutValues, struct FName AttributeName, struct FName EmitterName, int32_t FrameIndex); // Function Niagara.NiagaraSimCache.ReadVectorAttribute
	void ReadVector4Attribute(struct TArray<struct FVector4>& OutValues, struct FName AttributeName, struct FName EmitterName, int32_t FrameIndex); // Function Niagara.NiagaraSimCache.ReadVector4Attribute
	void ReadVector2Attribute(struct TArray<struct FVector2D>& OutValues, struct FName AttributeName, struct FName EmitterName, int32_t FrameIndex); // Function Niagara.NiagaraSimCache.ReadVector2Attribute
	void ReadQuatAttributeWithRebase(struct TArray<struct FQuat>& OutValues, struct FQuat Quat, struct FName AttributeName, struct FName EmitterName, int32_t FrameIndex); // Function Niagara.NiagaraSimCache.ReadQuatAttributeWithRebase
	void ReadQuatAttribute(struct TArray<struct FQuat>& OutValues, struct FName AttributeName, struct FName EmitterName, bool bLocalSpaceToWorld, int32_t FrameIndex); // Function Niagara.NiagaraSimCache.ReadQuatAttribute
	void ReadPositionAttributeWithRebase(struct TArray<struct FVector>& OutValues, struct FTransform Transform, struct FName AttributeName, struct FName EmitterName, int32_t FrameIndex); // Function Niagara.NiagaraSimCache.ReadPositionAttributeWithRebase
	void ReadPositionAttribute(struct TArray<struct FVector>& OutValues, struct FName AttributeName, struct FName EmitterName, bool bLocalSpaceToWorld, int32_t FrameIndex); // Function Niagara.NiagaraSimCache.ReadPositionAttribute
	void ReadIntAttribute(struct TArray<int32_t>& OutValues, struct FName AttributeName, struct FName EmitterName, int32_t FrameIndex); // Function Niagara.NiagaraSimCache.ReadIntAttribute
	void ReadFloatAttribute(struct TArray<float>& OutValues, struct FName AttributeName, struct FName EmitterName, int32_t FrameIndex); // Function Niagara.NiagaraSimCache.ReadFloatAttribute
	void ReadColorAttribute(struct TArray<struct FLinearColor>& OutValues, struct FName AttributeName, struct FName EmitterName, int32_t FrameIndex); // Function Niagara.NiagaraSimCache.ReadColorAttribute
	bool IsEmpty(); // Function Niagara.NiagaraSimCache.IsEmpty
	bool IsCacheValid(); // Function Niagara.NiagaraSimCache.IsCacheValid
	float GetStartSeconds(); // Function Niagara.NiagaraSimCache.GetStartSeconds
	int32_t GetNumFrames(); // Function Niagara.NiagaraSimCache.GetNumFrames
	int32_t GetNumEmitters(); // Function Niagara.NiagaraSimCache.GetNumEmitters
	struct TArray<struct FName> GetEmitterNames(); // Function Niagara.NiagaraSimCache.GetEmitterNames
	struct FName GetEmitterName(int32_t EmitterIndex); // Function Niagara.NiagaraSimCache.GetEmitterName
	uint8_t GetAttributeCaptureMode(); // Function Niagara.NiagaraSimCache.GetAttributeCaptureMode
}; 
 
 


// Class Niagara.AsyncNiagaraCaptureSimCache
// Size: 0x78(Inherited: 0x30)
struct UAsyncNiagaraCaptureSimCache : UBlueprintAsyncActionBase
{
	struct UNiagaraSimCache* CaptureSimCache;  // 0x30 (0x30)
	struct UNiagaraComponent* CaptureComponent;  // 0x38 (0x38)
	int32_t CaptureNumFrames;  // 0x40 (0x40)
	int32_t CaptureFrameRate;  // 0x44 (0x44)
	int32_t CaptureFrameCounter;  // 0x48 (0x48)
	int32_t TimeOutCounter;  // 0x4C (0x4C)
	struct FMulticastInlineDelegate CaptureComplete;  // 0x50 (0x50)
	char pad_96[16];  // 0x60 (0x60)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool bAdvanceSimulation : 1;  // 0x70 (0x70)
	char pad_113[3];  // 0x71 (0x71)
	float AdvanceDeltaTime;  // 0x74 (0x74)


	void OnCaptureComplete__DelegateSignature(bool bSuccess); // DelegateFunction Niagara.AsyncNiagaraCaptureSimCache.OnCaptureComplete__DelegateSignature
	struct UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheUntilComplete(struct UNiagaraSimCache* SimCache, struct FNiagaraSimCacheCreateParameters CreateParameters, struct UNiagaraComponent* NiagaraComponent, struct UNiagaraSimCache*& OutSimCache, int32_t CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime); // Function Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheUntilComplete
	struct UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheMultiFrame(struct UNiagaraSimCache* SimCache, struct FNiagaraSimCacheCreateParameters CreateParameters, struct UNiagaraComponent* NiagaraComponent, struct UNiagaraSimCache*& OutSimCache, int32_t NumFrames, int32_t CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime); // Function Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheMultiFrame
}; 
 
 


// Class Niagara.NiagaraSimulationStageBase
// Size: 0x40(Inherited: 0x28)
struct UNiagaraSimulationStageBase : UNiagaraMergeable
{
	struct UNiagaraScript* Script;  // 0x28 (0x28)
	struct FName SimulationStageName;  // 0x30 (0x30)
	char bEnabled : 1;  // 0x38 (0x38)
	char pad_56_1 : 7;  // 0x38 (0x38)
	char pad_57[8];  // 0x39 (0x39)


}; 
 
 


// Class Niagara.NiagaraValidationRule
// Size: 0x28(Inherited: 0x28)
struct UNiagaraValidationRule : UObject
{


}; 
 
 


