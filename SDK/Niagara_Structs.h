#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function Niagara.NiagaraComponent.GetMaxSimTime
struct FGetMaxSimTime
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.BasicParticleData
struct FBasicParticleData
{
	struct FVector Position;  // 0x0 (0x0)
	float Size;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FVector Velocity;  // 0x20 (0x20)


}; 
 
 // ScriptStruct Niagara.NiagaraDataSetProperties
struct FNiagaraDataSetProperties
{
	struct FNiagaraDataSetID ID;  // 0x0 (0x0)
	char pad_12[4];  // 0xC (0xC)
	struct TArray<struct FNiagaraVariable> Variables;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Niagara.NiagaraDataSetID
struct FNiagaraDataSetID
{
	struct FName Name;  // 0x0 (0x0)
	uint8_t Type;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // ScriptStruct Niagara.NiagaraMatrix
struct FNiagaraMatrix
{
	struct FVector4f Row0;  // 0x0 (0x0)
	struct FVector4f Row1;  // 0x10 (0x10)
	struct FVector4f Row2;  // 0x20 (0x20)
	struct FVector4f Row3;  // 0x30 (0x30)


}; 
 
 // DelegateFunction Niagara.OnNiagaraSystemFinished__DelegateSignature
struct FOnNiagaraSystemFinished__DelegateSignature
{
	struct UNiagaraComponent* PSystem;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraOutlinerEmitterInstanceData
struct FNiagaraOutlinerEmitterInstanceData
{
	struct FString EmitterName;  // 0x0 (0x0)
	uint8_t SimTarget;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	uint8_t ExecState;  // 0x14 (0x14)
	int32_t NumParticles;  // 0x18 (0x18)
	char bRequiresPersistentIDs : 1;  // 0x1C (0x1C)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	char pad_29[4];  // 0x1D (0x1D)


}; 
 
 // ScriptStruct Niagara.NiagaraSimpleClientInfo
struct FNiagaraSimpleClientInfo
{
	struct TArray<struct FString> Systems;  // 0x0 (0x0)
	struct TArray<struct FString> Actors;  // 0x10 (0x10)
	struct TArray<struct FString> Components;  // 0x20 (0x20)
	struct TArray<struct FString> Emitters;  // 0x30 (0x30)


}; 
 
 // ScriptStruct Niagara.NiagaraVariableBase
struct FNiagaraVariableBase
{
	struct FName Name;  // 0x0 (0x0)
	struct FNiagaraTypeDefinitionHandle TypeDefHandle;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Niagara.NiagaraOutlinerSystemData
struct FNiagaraOutlinerSystemData
{
	struct TArray<struct FNiagaraOutlinerSystemInstanceData> SystemInstances;  // 0x0 (0x0)
	struct FNiagaraOutlinerTimingData AveragePerFrameTime;  // 0x10 (0x10)
	struct FNiagaraOutlinerTimingData MaxPerFrameTime;  // 0x18 (0x18)
	struct FNiagaraOutlinerTimingData AveragePerInstanceTime;  // 0x20 (0x20)
	struct FNiagaraOutlinerTimingData MaxPerInstanceTime;  // 0x28 (0x28)


}; 
 
 // Function Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheMultiFrame
struct FCaptureNiagaraSimCacheMultiFrame
{
	struct UNiagaraSimCache* SimCache;  // 0x0 (0x0)
	struct FNiagaraSimCacheCreateParameters CreateParameters;  // 0x8 (0x8)
	struct UNiagaraComponent* NiagaraComponent;  // 0x40 (0x40)
	struct UNiagaraSimCache* OutSimCache;  // 0x48 (0x48)
	int32_t NumFrames;  // 0x50 (0x50)
	int32_t CaptureRate;  // 0x54 (0x54)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool bAdvanceSimulation : 1;  // 0x58 (0x58)
	char pad_89[3];  // 0x59 (0x59)
	float AdvanceDeltaTime;  // 0x5C (0x5C)
	struct UAsyncNiagaraCaptureSimCache* ReturnValue;  // 0x60 (0x60)


}; 
 
 // Function Niagara.NiagaraComponent.GetForceSolo
struct FGetForceSolo
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraBoundParameter
struct FNiagaraBoundParameter
{
	struct FNiagaraVariable Parameter;  // 0x0 (0x0)
	int32_t SrcOffset;  // 0x20 (0x20)
	int32_t DestOffset;  // 0x24 (0x24)


}; 
 
 // ScriptStruct Niagara.NiagaraSimCacheCreateParameters
struct FNiagaraSimCacheCreateParameters
{
	uint8_t AttributeCaptureMode;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	char bAllowRebasing : 1;  // 0x4 (0x4)
	char bAllowDataInterfaceCaching : 1;  // 0x4 (0x4)
	char pad_4_1 : 6;  // 0x4 (0x4)
	char pad_5[4];  // 0x5 (0x5)
	struct TArray<struct FName> RebaseIncludeAttributes;  // 0x8 (0x8)
	struct TArray<struct FName> RebaseExcludeAttributes;  // 0x18 (0x18)
	struct TArray<struct FName> ExplicitCaptureAttributes;  // 0x28 (0x28)


}; 
 
 // ScriptStruct Niagara.NiagaraBakerCameraSettings
struct FNiagaraBakerCameraSettings
{
	uint8_t ViewMode;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector ViewportLocation;  // 0x8 (0x8)
	struct FRotator ViewportRotation;  // 0x20 (0x20)
	float OrbitDistance;  // 0x38 (0x38)
	float FOV;  // 0x3C (0x3C)
	float OrthoWidth;  // 0x40 (0x40)
	char pad_68_1 : 7;  // 0x44 (0x44)
	bool bUseAspectRatio : 1;  // 0x44 (0x44)
	char pad_69[3];  // 0x45 (0x45)
	float AspectRatio;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)


}; 
 
 // Function Niagara.NiagaraBaselineController.OnTickTest
struct FOnTickTest
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
// Size: 0x28(Inherited: 0x10)
struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation
{
	struct FFrameNumber SpawnSectionStartFrame;  // 0x10 (0x10)
	struct FFrameNumber SpawnSectionEndFrame;  // 0x14 (0x14)
	uint8_t SpawnSectionStartBehavior;  // 0x18 (0x18)
	uint8_t SpawnSectionEvaluateBehavior;  // 0x1C (0x1C)
	uint8_t SpawnSectionEndBehavior;  // 0x20 (0x20)
	uint8_t AgeUpdateMode;  // 0x24 (0x24)
	char pad_37_1 : 7;  // 0x25 (0x25)
	bool bAllowScalability : 1;  // 0x25 (0x25)
	char pad_38[2];  // 0x26 (0x26)


}; 
 
 // ScriptStruct Niagara.NiagaraUObjectPropertyReaderRemap
struct FNiagaraUObjectPropertyReaderRemap
{
	struct FName GraphName;  // 0x0 (0x0)
	struct FName RemapName;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Niagara.NiagaraVariableLayoutInfo
struct FNiagaraVariableLayoutInfo
{
	uint32_t FloatComponentStart;  // 0x0 (0x0)
	uint32_t Int32ComponentStart;  // 0x4 (0x4)
	uint32_t HalfComponentStart;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FNiagaraTypeLayoutInfo LayoutInfo;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Niagara.NiagaraSimCacheDataBuffers
struct FNiagaraSimCacheDataBuffers
{
	uint32_t NumInstances;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<char> FloatData;  // 0x8 (0x8)
	struct TArray<char> HalfData;  // 0x18 (0x18)
	struct TArray<char> Int32Data;  // 0x28 (0x28)
	struct TArray<int32_t> IDToIndexTable;  // 0x38 (0x38)
	uint32_t IDAcquireTag;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)


}; 
 
 // Function Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheUntilComplete
struct FCaptureNiagaraSimCacheUntilComplete
{
	struct UNiagaraSimCache* SimCache;  // 0x0 (0x0)
	struct FNiagaraSimCacheCreateParameters CreateParameters;  // 0x8 (0x8)
	struct UNiagaraComponent* NiagaraComponent;  // 0x40 (0x40)
	struct UNiagaraSimCache* OutSimCache;  // 0x48 (0x48)
	int32_t CaptureRate;  // 0x50 (0x50)
	char pad_84_1 : 7;  // 0x54 (0x54)
	bool bAdvanceSimulation : 1;  // 0x54 (0x54)
	char pad_85[3];  // 0x55 (0x55)
	float AdvanceDeltaTime;  // 0x58 (0x58)
	char pad_92[4];  // 0x5C (0x5C)
	struct UAsyncNiagaraCaptureSimCache* ReturnValue;  // 0x60 (0x60)


}; 
 
 // ScriptStruct Niagara.NiagaraSimCacheFrame
struct FNiagaraSimCacheFrame
{
	struct FTransform LocalToWorld;  // 0x0 (0x0)
	struct FVector3f LWCTile;  // 0x60 (0x60)
	char pad_108[4];  // 0x6C (0x6C)
	struct FNiagaraSimCacheSystemFrame SystemData;  // 0x70 (0x70)
	struct TArray<struct FNiagaraSimCacheEmitterFrame> EmitterData;  // 0xF8 (0xF8)
	char pad_264[8];  // 0x108 (0x108)


}; 
 
 // DelegateFunction Niagara.AsyncNiagaraCaptureSimCache.OnCaptureComplete__DelegateSignature
struct FOnCaptureComplete__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bSuccess : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraDataSetCompiledData
struct FNiagaraDataSetCompiledData
{
	struct TArray<struct FNiagaraVariable> Variables;  // 0x0 (0x0)
	struct TArray<struct FNiagaraVariableLayoutInfo> VariableLayouts;  // 0x10 (0x10)
	struct FNiagaraDataSetID ID;  // 0x20 (0x20)
	uint32_t TotalFloatComponents;  // 0x2C (0x2C)
	uint32_t TotalInt32Components;  // 0x30 (0x30)
	uint32_t TotalHalfComponents;  // 0x34 (0x34)
	char bRequiresPersistentIDs : 1;  // 0x38 (0x38)
	char pad_56_1 : 7;  // 0x38 (0x38)
	char pad_57[4];  // 0x39 (0x39)
	uint8_t SimTarget;  // 0x3C (0x3C)
	char pad_61[3];  // 0x3D (0x3D)


}; 
 
 // Function Niagara.NiagaraComponent.GetForceLocalPlayerEffect
struct FGetForceLocalPlayerEffect
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraSystemUpdateContext
struct FNiagaraSystemUpdateContext
{
	struct TArray<struct UNiagaraComponent*> ComponentsToReset;  // 0x0 (0x0)
	struct TArray<struct UNiagaraComponent*> ComponentsToReInit;  // 0x10 (0x10)
	struct TArray<struct UNiagaraComponent*> ComponentsToNotifySimDestroy;  // 0x20 (0x20)
	struct TArray<struct UNiagaraSystem*> SystemSimsToDestroy;  // 0x30 (0x30)
	struct TArray<struct UNiagaraSystem*> SystemSimsToRecache;  // 0x40 (0x40)
	char pad_80[40];  // 0x50 (0x50)


}; 
 
 // ScriptStruct Niagara.NiagaraTypeDefinitionHandle
struct FNiagaraTypeDefinitionHandle
{
	int32_t RegisteredTypeIndex;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraVariable
// Size: 0x20(Inherited: 0xC)
struct FNiagaraVariable : FNiagaraVariableBase
{
	char pad_12[4];  // 0xC (0xC)
	struct TArray<char> VarData;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Niagara.NiagaraScalabilityManager
struct FNiagaraScalabilityManager
{
	struct UNiagaraEffectType* EffectType;  // 0x0 (0x0)
	struct TArray<struct UNiagaraComponent*> ManagedComponents;  // 0x8 (0x8)
	char pad_24[192];  // 0x18 (0x18)


}; 
 
 // ScriptStruct Niagara.NiagaraOutlinerSystemInstanceData
struct FNiagaraOutlinerSystemInstanceData
{
	struct FString ComponentName;  // 0x0 (0x0)
	struct FVector3f LWCTile;  // 0x10 (0x10)
	char pad_28[4];  // 0x1C (0x1C)
	struct TArray<struct FNiagaraOutlinerEmitterInstanceData> Emitters;  // 0x20 (0x20)
	uint8_t ActualExecutionState;  // 0x30 (0x30)
	uint8_t RequestedExecutionState;  // 0x34 (0x34)
	struct FNiagaraScalabilityState ScalabilityState;  // 0x38 (0x38)
	char bPendingKill : 1;  // 0x44 (0x44)
	char bUsingCullProxy : 1;  // 0x44 (0x44)
	char pad_68_1 : 6;  // 0x44 (0x44)
	char pad_69[4];  // 0x45 (0x45)
	uint8_t PoolMethod;  // 0x48 (0x48)
	char pad_73[3];  // 0x49 (0x49)
	struct FNiagaraOutlinerTimingData AverageTime;  // 0x4C (0x4C)
	struct FNiagaraOutlinerTimingData MaxTime;  // 0x54 (0x54)
	enum class ETickingGroup TickGroup;  // 0x5C (0x5C)
	enum class ENiagaraGpuComputeTickStage GpuTickStage;  // 000D (000527871] ted: 0xC)
)
	char pad_94[2];  // 0x5E (0x5E)
	char bIsSolo : 1;  // 0x60 (0x60)
	char bRequiresDistanceFieldData : 1;  // 0x60 (0x60)
	char bRequiresDepthBuffer : 1;  // 0x60 (0x60)
	char bRequiresEarlyViewData : 1;  // 0x60 (0x60)
	char bRequiresViewUniformBuffer : 1;  // 0x60 (0x60)
	char bRequiresRayTracingScene : 1;  // 0x60 (0x60)
	char pad_96_1 : 2;  // 0x60 (0x60)
	char pad_97[8];  // 0x61 (0x61)


}; 
 
 // Function Niagara.NiagaraSimCache.ReadColorAttribute
struct FReadColorAttribute
{
	struct TArray<struct FLinearColor> OutValues;  // 0x0 (0x0)
	struct FName AttributeName;  // 0x10 (0x10)
	struct FName EmitterName;  // 0x18 (0x18)
	int32_t FrameIndex;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
struct FGetNiagaraArrayVector2D
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	struct TArray<struct FVector2D> ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Niagara.NiagaraScriptDataUsageInfo
struct FNiagaraScriptDataUsageInfo
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bReadsAttributeData : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraFunctionSignature
struct FNiagaraFunctionSignature
{
	struct FName Name;  // 0x0 (0x0)
	struct TArray<struct FNiagaraVariable> Inputs;  // 0x8 (0x8)
	struct TArray<struct FNiagaraVariable> Outputs;  // 0x18 (0x18)
	struct FName OwnerName;  // 0x28 (0x28)
	char bRequiresContext : 1;  // 0x30 (0x30)
	char bRequiresExecPin : 1;  // 0x30 (0x30)
	char bMemberFunction : 1;  // 0x30 (0x30)
	char bExperimental : 1;  // 0x30 (0x30)
	char bSupportsCPU : 1;  // 0x30 (0x30)
	char bSupportsGPU : 1;  // 0x30 (0x30)
	char bWriteFunction : 1;  // 0x30 (0x30)
	char bReadFunction : 1;  // 0x30 (0x30)
	char bSoftDeprecatedFunction : 1;  // 0x31 (0x31)
	char bIsCompileTagGenerator : 1;  // 0x31 (0x31)
	char bHidden : 1;  // 0x31 (0x31)
	char pad_49_1 : 5;  // 0x31 (0x31)
	char pad_50[3];  // 0x32 (0x32)
	int32_t ModuleUsageBitmask;  // 0x34 (0x34)
	int32_t ContextStageIndex;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)
	struct TMap<struct FName, struct FName> FunctionSpecifiers;  // 0x40 (0x40)


}; 
 
 // ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
struct FNiagaraScriptDataInterfaceInfo
{
	struct UNiagaraDataInterface* DataInterface;  // 0x0 (0x0)
	struct FName Name;  // 0x8 (0x8)
	int32_t UserPtrIdx;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FNiagaraTypeDefinition Type;  // 0x18 (0x18)
	struct FName RegisteredParameterMapRead;  // 0x28 (0x28)
	struct FName RegisteredParameterMapWrite;  // 0x30 (0x30)


}; 
 
 // ScriptStruct Niagara.NiagaraBakerTextureSource
struct FNiagaraBakerTextureSource
{
	struct FString DisplayString;  // 0x0 (0x0)
	struct FName SourceName;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraPreviewAxis.Num
struct FNum
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraTypeDefinition
struct FNiagaraTypeDefinition
{
	struct UObject* ClassStructOrEnum;  // 0x0 (0x0)
	uint16_t UnderlyingType;  // 0x8 (0x8)
	char Flags;  // 0xA (0xA)
	char pad_11[5];  // 0xB (0xB)


}; 
 
 // ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
// Size: 0x140(Inherited: 0x40)
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneIntegerChannel IntegerChannel;  // 0x40 (0x40)


}; 
 
 // ScriptStruct Niagara.NiagaraUserParameterBinding
struct FNiagaraUserParameterBinding
{
	struct FNiagaraVariable Parameter;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
struct FNiagaraScriptDataInterfaceCompileInfo
{
	struct FName Name;  // 0x0 (0x0)
	int32_t UserPtrIdx;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FNiagaraTypeDefinition Type;  // 0x10 (0x10)
	struct FName RegisteredParameterMapRead;  // 0x20 (0x20)
	struct FName RegisteredParameterMapWrite;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bIsPlaceholder : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
struct FSetNiagaraVariableLinearColor
{
	struct FString InVariableName;  // 0x0 (0x0)
	struct FLinearColor InValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Niagara.NiagaraOutlinerTimingData
struct FNiagaraOutlinerTimingData
{
	float GameThread;  // 0x0 (0x0)
	float RenderThread;  // 0x4 (0x4)


}; 
 
 // ScriptStruct Niagara.NCPool
struct FNCPool
{
	struct TArray<struct FNCPoolElement> FreeElements;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraEmitterScalabilityOverrides
struct FNiagaraEmitterScalabilityOverrides
{
	struct TArray<struct FNiagaraEmitterScalabilityOverride> Overrides;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraStatScope
struct FNiagaraStatScope
{
	struct FName FullName;  // 0x0 (0x0)
	struct FName FriendlyName;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
// Size: 0x20(Inherited: 0x20)
struct FMovieSceneNiagaraSystemTrackTemplate : FMovieSceneEvalTemplate
{


}; 
 
 // ScriptStruct Niagara.VMFunctionSpecifier
struct FVMFunctionSpecifier
{
	struct FName Key;  // 0x0 (0x0)
	struct FName Value;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Niagara.NiagaraPositionSource
struct FNiagaraPositionSource
{
	struct FName Name;  // 0x0 (0x0)
	struct FVector Value;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Niagara.NiagaraDebuggerOutlinerUpdate
struct FNiagaraDebuggerOutlinerUpdate
{
	struct FNiagaraOutlinerData OutlinerData;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.VMExternalFunctionBindingInfo
struct FVMExternalFunctionBindingInfo
{
	struct FName Name;  // 0x0 (0x0)
	struct FName OwnerName;  // 0x8 (0x8)
	struct TArray<bool> InputParamLocations;  // 0x10 (0x10)
	int32_t NumOutputs;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct TArray<struct FVMFunctionSpecifier> FunctionSpecifiers;  // 0x28 (0x28)


}; 
 
 // ScriptStruct Niagara.NiagaraVariableInfo
struct FNiagaraVariableInfo
{
	struct FNiagaraVariable Variable;  // 0x0 (0x0)
	struct FText Definition;  // 0x20 (0x20)
	struct UNiagaraDataInterface* DataInterface;  // 0x38 (0x38)


}; 
 
 // ScriptStruct Niagara.NiagaraVariableAttributeBinding
struct FNiagaraVariableAttributeBinding
{
	struct FNiagaraVariableBase ParamMapVariable;  // 0x0 (0x0)
	char pad_12[4];  // 0xC (0xC)
	struct FNiagaraVariable DataSetVariable;  // 0x10 (0x10)
	struct FNiagaraVariable RootVariable;  // 0x30 (0x30)
	enum class ENiagaraBindingSource BindingSourceMode;  // 0x50 (0x50)
	char pad_81[3];  // 0x51 (0x51)
	char bBindingExistsOnSource : 1;  // 0x54 (0x54)
	char bIsCachedParticleValue : 1;  // 0x54 (0x54)
	char pad_84_1 : 6;  // 0x54 (0x54)
	char pad_85[4];  // 0x55 (0x55)


}; 
 
 // ScriptStruct Niagara.NiagaraDebuggerRequestConnection
struct FNiagaraDebuggerRequestConnection
{
	struct FGuid SessionId;  // 0x0 (0x0)
	struct FGuid InstanceId;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
struct FGetBoolParameter
{
	struct FString InVariableName;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPosition
struct FSetNiagaraArrayPosition
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	struct TArray<struct FVector> ArrayData;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Niagara.NiagaraMaterialAttributeBinding
struct FNiagaraMaterialAttributeBinding
{
	struct FName MaterialParameterName;  // 0x0 (0x0)
	struct FNiagaraVariableBase NiagaraVariable;  // 0x8 (0x8)
	struct FNiagaraVariableBase ResolvedNiagaraVariable;  // 0x14 (0x14)
	struct FNiagaraVariableBase NiagaraChildVariable;  // 0x20 (0x20)


}; 
 
 // Function Niagara.NiagaraComponent.GetRandomSeedOffset
struct FGetRandomSeedOffset
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
// Size: 0xA8(Inherited: 0x88)
struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore
{
	int32_t ParameterSize;  // 0x88 (0x88)
	uint32_t PaddedParameterSize;  // 0x8C (0x8C)
	struct TArray<struct FNiagaraScriptExecutionPaddingInfo> PaddingInfo;  // 0x90 (0x90)
	char bInitialized : 1;  // 0xA0 (0xA0)
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	char pad_161[8];  // 0xA1 (0xA1)


}; 
 
 // ScriptStruct Niagara.NiagaraDebuggerExecuteConsoleCommand
struct FNiagaraDebuggerExecuteConsoleCommand
{
	struct FString Command;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bRequiresWorld : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct Niagara.NiagaraScalabilityState
struct FNiagaraScalabilityState
{
	float Significance;  // 0x0 (0x0)
	float LastVisibleTime;  // 0x4 (0x4)
	char pad_8[2];  // 0x8 (0x8)
	char bCulled : 1;  // 0xA (0xA)
	char bPreviousCulled : 1;  // 0xA (0xA)
	char bCulledByDistance : 1;  // 0xA (0xA)
	char bCulledByInstanceCount : 1;  // 0xA (0xA)
	char bCulledByVisibility : 1;  // 0xA (0xA)
	char bCulledByGlobalBudget : 1;  // 0xA (0xA)
	char pad_10_1 : 2;  // 0xA (0xA)
	char pad_11[2];  // 0xB (0xB)


}; 
 
 // ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
struct FNiagaraVariableDataInterfaceBinding
{
	struct FNiagaraVariable BoundVariable;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraPreviewGrid.GetPreviews
struct FGetPreviews
{
	struct TArray<struct UNiagaraComponent*> OutPreviews;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraCulledComponentInfo
struct FNiagaraCulledComponentInfo
{
	char pad_0[8];  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraScriptVariableBinding
struct FNiagaraScriptVariableBinding
{
	struct FName Name;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraComponent.AdvanceSimulation
struct FAdvanceSimulation
{
	int32_t TickCount;  // 0x0 (0x0)
	float TickDeltaSeconds;  // 0x4 (0x4)


}; 
 
 // ScriptStruct Niagara.NiagaraCompileDependency
struct FNiagaraCompileDependency
{
	struct FString LinkerErrorMessage;  // 0x0 (0x0)
	struct FGuid NodeGuid;  // 0x10 (0x10)
	struct FGuid PinGuid;  // 0x20 (0x20)
	struct TArray<struct FGuid> StackGuids;  // 0x30 (0x30)
	struct FNiagaraVariableBase DependentVariable;  // 0x40 (0x40)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool bDependentVariableFromCustomIterationNamespace : 1;  // 0x4C (0x4C)
	char pad_77[3];  // 0x4D (0x4D)


}; 
 
 // ScriptStruct Niagara.NiagaraOutlinerWorldData
struct FNiagaraOutlinerWorldData
{
	struct TMap<struct FString, struct FNiagaraOutlinerSystemData> Systems;  // 0x0 (0x0)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool bHasBegunPlay : 1;  // 0x50 (0x50)
	char WorldType;  // 0x51 (0x51)
	char NetMode;  // 0x52 (0x52)
	char pad_83[1];  // 0x53 (0x53)
	struct FNiagaraOutlinerTimingData AveragePerFrameTime;  // 0x54 (0x54)
	struct FNiagaraOutlinerTimingData MaxPerFrameTime;  // 0x5C (0x5C)
	char pad_100[4];  // 0x64 (0x64)


}; 
 
 // ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
// Size: 0x488(Inherited: 0x40)
struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel VectorChannels[4];  // 0x40 (0x40)
	int32_t ChannelsUsed;  // 0x480 (0x480)
	char pad_1156[4];  // 0x484 (0x484)


}; 
 
 // Function Niagara.NiagaraPreviewGrid.SetPaused
struct FSetPaused
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bPaused : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraDebugHudTextOptions
struct FNiagaraDebugHudTextOptions
{
	uint8_t Font;  // 0x0 (0x0)
	uint8_t HorizontalAlignment;  // 0x4 (0x4)
	uint8_t VerticalAlignment;  // 0x5 (0x5)
	char pad_6[2];  // 0x6 (0x6)
	struct FVector2D ScreenOffset;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Niagara.NiagaraComponentPropertyBinding
struct FNiagaraComponentPropertyBinding
{
	struct FNiagaraVariableAttributeBinding AttributeBinding;  // 0x0 (0x0)
	struct FName PropertyName;  // 0x58 (0x58)
	struct FNiagaraTypeDefinition PropertyType;  // 0x60 (0x60)
	struct FName MetadataSetterName;  // 0x70 (0x70)
	struct TMap<struct FString, struct FString> PropertySetterParameterDefaults;  // 0x78 (0x78)


}; 
 
 // ScriptStruct Niagara.NiagaraStackSection
struct FNiagaraStackSection
{
	struct FName SectionIdentifier;  // 0x0 (0x0)
	struct FText SectionDisplayName;  // 0x8 (0x8)
	struct TArray<struct FText> Categories;  // 0x20 (0x20)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bEnabled : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // ScriptStruct Niagara.NDIStaticMeshSectionFilter
struct FNDIStaticMeshSectionFilter
{
	struct TArray<int32_t> AllowedMaterialSlots;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
// Size: 0x40(Inherited: 0x20)
struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate
{
	struct FNiagaraVariable Parameter;  // 0x20 (0x20)


}; 
 
 // ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
// Size: 0x140(Inherited: 0x40)
struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneBoolChannel BoolChannel;  // 0x40 (0x40)


}; 
 
 // ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
// Size: 0x480(Inherited: 0x40)
struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel RedChannel;  // 0x40 (0x40)
	struct FMovieSceneFloatChannel GreenChannel;  // 0x150 (0x150)
	struct FMovieSceneFloatChannel BlueChannel;  // 0x260 (0x260)
	struct FMovieSceneFloatChannel AlphaChannel;  // 0x370 (0x370)


}; 
 
 // ScriptStruct Niagara.NiagaraDataInterfaceSplineLUT
struct FNiagaraDataInterfaceSplineLUT
{
	struct TArray<struct FVector> Positions;  // 0x0 (0x0)
	struct TArray<struct FVector> Scales;  // 0x10 (0x10)
	struct TArray<struct FQuat> Rotations;  // 0x20 (0x20)
	float SplineLength;  // 0x30 (0x30)
	float SplineDistanceStep;  // 0x34 (0x34)
	float InvSplineDistanceStep;  // 0x38 (0x38)
	int32_t MaxIndex;  // 0x3C (0x3C)


}; 
 
 // Function Niagara.NiagaraComponent.SeekToDesiredAge
struct FSeekToDesiredAge
{
	float InDesiredAge;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
// Size: 0x150(Inherited: 0x40)
struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel FloatChannel;  // 0x40 (0x40)


}; 
 
 // ScriptStruct Niagara.EmitterCompiledScriptPair
struct FEmitterCompiledScriptPair
{
	char pad_0[152];  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraBakerTextureSettings
struct FNiagaraBakerTextureSettings
{
	struct FName OutputName;  // 0x0 (0x0)
	struct FNiagaraBakerTextureSource SourceBinding;  // 0x8 (0x8)
	char bUseFrameSize : 1;  // 0x20 (0x20)
	char pad_32_1 : 7;  // 0x20 (0x20)
	char pad_33[4];  // 0x21 (0x21)
	struct FIntPoint FrameSize;  // 0x24 (0x24)
	struct FIntPoint TextureSize;  // 0x2C (0x2C)
	char pad_52[4];  // 0x34 (0x34)
	struct UTexture2D* GeneratedTexture;  // 0x38 (0x38)


}; 
 
 // ScriptStruct Niagara.NCPoolElement
struct FNCPoolElement
{
	struct UNiagaraComponent* Component;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)


}; 
 
 // ScriptStruct Niagara.NiagaraEmitterNameSettingsRef
struct FNiagaraEmitterNameSettingsRef
{
	struct FName SystemName;  // 0x0 (0x0)
	struct FString EmitterName;  // 0x8 (0x8)


}; 
 
 // Function Niagara.NiagaraComponent.SetDesiredAge
struct FSetDesiredAge
{
	float InDesiredAge;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraDataInterfaceEmitterBinding
struct FNiagaraDataInterfaceEmitterBinding
{
	uint8_t BindingMode;  // 0x0 (0x0)
	struct FName EmitterName;  // 0x4 (0x4)


}; 
 
 // Function Niagara.NiagaraComponent.GetSeekDelta
struct FGetSeekDelta
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.MeshTriCoordinate
struct FMeshTriCoordinate
{
	int32_t Tri;  // 0x0 (0x0)
	struct FVector3f BaryCoord;  // 0x4 (0x4)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value
struct FGetNiagaraArrayInt32Value
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	int32_t Index;  // 0x10 (0x10)
	int32_t ReturnValue;  // 0x14 (0x14)


}; 
 
 // ScriptStruct Niagara.NiagaraTypeLayoutInfo
struct FNiagaraTypeLayoutInfo
{
	struct TArray<uint32_t> FloatComponentByteOffsets;  // 0x0 (0x0)
	struct TArray<uint32_t> FloatComponentRegisterOffsets;  // 0x10 (0x10)
	struct TArray<uint32_t> Int32ComponentByteOffsets;  // 0x20 (0x20)
	struct TArray<uint32_t> Int32ComponentRegisterOffsets;  // 0x30 (0x30)
	struct TArray<uint32_t> HalfComponentByteOffsets;  // 0x40 (0x40)
	struct TArray<uint32_t> HalfComponentRegisterOffsets;  // 0x50 (0x50)


}; 
 
 // ScriptStruct Niagara.NiagaraOutlinerData
struct FNiagaraOutlinerData
{
	struct TMap<struct FString, struct FNiagaraOutlinerWorldData> WorldData;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraDebuggerAcceptConnection
struct FNiagaraDebuggerAcceptConnection
{
	struct FGuid SessionId;  // 0x0 (0x0)
	struct FGuid InstanceId;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Niagara.NiagaraDebuggerConnectionClosed
struct FNiagaraDebuggerConnectionClosed
{
	struct FGuid SessionId;  // 0x0 (0x0)
	struct FGuid InstanceId;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Niagara.NiagaraDebugHUDVariable
struct FNiagaraDebugHUDVariable
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnabled : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FString Name;  // 0x8 (0x8)


}; 
 
 // Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
struct FSetVolumeTextureObject
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FString OverrideName;  // 0x8 (0x8)
	struct UVolumeTexture* Texture;  // 0x18 (0x18)


}; 
 
 // ScriptStruct Niagara.NiagaraDebugHUDSettingsData
struct FNiagaraDebugHUDSettingsData
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bHudEnabled : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bHudRenderingEnabled : 1;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool bValidateSystemSimulationDataBuffers : 1;  // 0x2 (0x2)
	char pad_3_1 : 7;  // 0x3 (0x3)
	bool bValidateParticleDataBuffers : 1;  // 0x3 (0x3)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bOverviewEnabled : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	uint8_t OverviewMode;  // 0x8 (0x8)
	uint8_t OverviewFont;  // 0xC (0xC)
	struct FVector2D OverviewLocation;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bShowRegisteredComponents : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool bOverviewShowFilteredSystemOnly : 1;  // 0x21 (0x21)
	char pad_34[6];  // 0x22 (0x22)
	struct FString ActorFilter;  // 0x28 (0x28)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bComponentFilterEnabled : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct FString ComponentFilter;  // 0x40 (0x40)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool bSystemFilterEnabled : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)
	struct FString SystemFilter;  // 0x58 (0x58)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool bEmitterFilterEnabled : 1;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)
	struct FString EmitterFilter;  // 0x70 (0x70)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool bActorFilterEnabled : 1;  // 0x80 (0x80)
	char pad_129[3];  // 0x81 (0x81)
	uint8_t SystemDebugVerbosity;  // 0x84 (0x84)
	uint8_t SystemEmitterVerbosity;  // 0x88 (0x88)
	uint8_t DataInterfaceVerbosity;  // 0x8C (0x8C)
	char pad_144_1 : 7;  // 0x90 (0x90)
	bool bSystemShowBounds : 1;  // 0x90 (0x90)
	char pad_145_1 : 7;  // 0x91 (0x91)
	bool bSystemShowActiveOnlyInWorld : 1;  // 0x91 (0x91)
	char pad_146_1 : 7;  // 0x92 (0x92)
	bool bShowSystemVariables : 1;  // 0x92 (0x92)
	char pad_147[5];  // 0x93 (0x93)
	struct TArray<struct FNiagaraDebugHUDVariable> SystemVariables;  // 0x98 (0x98)
	struct FNiagaraDebugHudTextOptions SystemTextOptions;  // 0xA8 (0xA8)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool bShowParticleVariables : 1;  // 0xC0 (0xC0)
	char pad_193_1 : 7;  // 0xC1 (0xC1)
	bool bEnableGpuParticleReadback : 1;  // 0xC1 (0xC1)
	char pad_194_1 : 7;  // 0xC2 (0xC2)
	bool bShowParticleIndex : 1;  // 0xC2 (0xC2)
	char pad_195[5];  // 0xC3 (0xC3)
	struct TArray<struct FNiagaraDebugHUDVariable> ParticlesVariables;  // 0xC8 (0xC8)
	struct FNiagaraDebugHudTextOptions ParticleTextOptions;  // 0xD8 (0xD8)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool bShowParticlesVariablesWithSystem : 1;  // 0xF0 (0xF0)
	char pad_241_1 : 7;  // 0xF1 (0xF1)
	bool bShowParticleVariablesVertical : 1;  // 0xF1 (0xF1)
	char pad_242_1 : 7;  // 0xF2 (0xF2)
	bool bUseMaxParticlesToDisplay : 1;  // 0xF2 (0xF2)
	char pad_243_1 : 7;  // 0xF3 (0xF3)
	bool bUseParticleDisplayClip : 1;  // 0xF3 (0xF3)
	char pad_244[4];  // 0xF4 (0xF4)
	struct FVector2D ParticleDisplayClip;  // 0xF8 (0xF8)
	char pad_264_1 : 7;  // 0x108 (0x108)
	bool bUseParticleDisplayCenterRadius : 1;  // 0x108 (0x108)
	char pad_265[3];  // 0x109 (0x109)
	float ParticleDisplayCenterRadius;  // 0x10C (0x10C)
	int32_t MaxParticlesToDisplay;  // 0x110 (0x110)
	int32_t PerfReportFrames;  // 0x114 (0x114)
	uint8_t PerfSampleMode;  // 0x118 (0x118)
	uint8_t PerfGraphMode;  // 0x11C (0x11C)
	int32_t PerfHistoryFrames;  // 0x120 (0x120)
	float PerfGraphTimeRange;  // 0x124 (0x124)
	struct FVector2D PerfGraphSize;  // 0x128 (0x128)
	struct FLinearColor PerfGraphAxisColor;  // 0x138 (0x138)
	char pad_328_1 : 7;  // 0x148 (0x148)
	bool bEnableSmoothing : 1;  // 0x148 (0x148)
	char pad_329[3];  // 0x149 (0x149)
	int32_t SmoothingWidth;  // 0x14C (0x14C)
	struct FLinearColor DefaultBackgroundColor;  // 0x150 (0x150)
	struct FLinearColor OverviewHeadingColor;  // 0x160 (0x160)
	struct FLinearColor OverviewDetailColor;  // 0x170 (0x170)
	struct FLinearColor OverviewDetailHighlightColor;  // 0x180 (0x180)
	struct FLinearColor InWorldErrorTextColor;  // 0x190 (0x190)
	struct FLinearColor InWorldTextColor;  // 0x1A0 (0x1A0)
	struct FLinearColor MessageInfoTextColor;  // 0x1B0 (0x1B0)
	struct FLinearColor MessageWarningTextColor;  // 0x1C0 (0x1C0)
	struct FLinearColor MessageErrorTextColor;  // 0x1D0 (0x1D0)
	float SystemColorTableOpacity;  // 0x1E0 (0x1E0)
	uint32_t SystemColorSeed;  // 0x1E4 (0x1E4)
	struct FVector SystemColorHSVMin;  // 0x1E8 (0x1E8)
	struct FVector SystemColorHSVMax;  // 0x200 (0x200)
	uint8_t PlaybackMode;  // 0x218 (0x218)
	char pad_537_1 : 7;  // 0x219 (0x219)
	bool bPlaybackRateEnabled : 1;  // 0x219 (0x219)
	char pad_538[2];  // 0x21A (0x21A)
	float PlaybackRate;  // 0x21C (0x21C)
	char pad_544_1 : 7;  // 0x220 (0x220)
	bool bLoopTimeEnabled : 1;  // 0x220 (0x220)
	char pad_545[3];  // 0x221 (0x221)
	float LoopTime;  // 0x224 (0x224)
	char pad_552_1 : 7;  // 0x228 (0x228)
	bool bShowGlobalBudgetInfo : 1;  // 0x228 (0x228)
	char pad_553[7];  // 0x229 (0x229)


}; 
 
 // Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
struct FSetColorParameter
{
	struct FString InVariableName;  // 0x0 (0x0)
	struct FLinearColor InValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Niagara.NiagaraRequestSimpleClientInfoMessage
struct FNiagaraRequestSimpleClientInfoMessage
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraOutlinerCaptureSettings
struct FNiagaraOutlinerCaptureSettings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bTriggerCapture : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	uint32_t CaptureDelayFrames;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bGatherPerfData : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	uint32_t SimCacheCaptureFrames;  // 0xC (0xC)


}; 
 
 // ScriptStruct Niagara.NiagaraSystemSimCacheCaptureRequest
struct FNiagaraSystemSimCacheCaptureRequest
{
	struct FName ComponentName;  // 0x0 (0x0)
	uint32_t CaptureDelayFrames;  // 0x8 (0x8)
	uint32_t CaptureFrames;  // 0xC (0xC)


}; 
 
 // ScriptStruct Niagara.NiagaraSystemSimCacheCaptureReply
struct FNiagaraSystemSimCacheCaptureReply
{
	struct FName ComponentName;  // 0x0 (0x0)
	struct TArray<char> SimCacheData;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Niagara.NiagaraGraphViewSettings
struct FNiagaraGraphViewSettings
{
	struct FVector2D Location;  // 0x0 (0x0)
	float Zoom;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bIsValid : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // ScriptStruct Niagara.NiagaraLinearRamp
struct FNiagaraLinearRamp
{
	float StartX;  // 0x0 (0x0)
	float StartY;  // 0x4 (0x4)
	float EndX;  // 0x8 (0x8)
	float EndY;  // 0xC (0xC)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue
struct FSetNiagaraArrayVector2DValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	int32_t Index;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FVector2D Value;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bSizeToFit : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // ScriptStruct Niagara.NiagaraGlobalBudgetScaling
struct FNiagaraGlobalBudgetScaling
{
	char bCullByGlobalBudget : 1;  // 0x0 (0x0)
	char bScaleMaxDistanceByGlobalBudgetUse : 1;  // 0x0 (0x0)
	char bScaleMaxInstanceCountByGlobalBudgetUse : 1;  // 0x0 (0x0)
	char bScaleSystemInstanceCountByGlobalBudgetUse : 1;  // 0x0 (0x0)
	char pad_0_1 : 4;  // 0x0 (0x0)
	char pad_1[4];  // 0x1 (0x1)
	float MaxGlobalBudgetUsage;  // 0x4 (0x4)
	struct FNiagaraLinearRamp MaxDistanceScaleByGlobalBudgetUse;  // 0x8 (0x8)
	struct FNiagaraLinearRamp MaxInstanceCountScaleByGlobalBudgetUse;  // 0x18 (0x18)
	struct FNiagaraLinearRamp MaxSystemInstanceCountScaleByGlobalBudgetUse;  // 0x28 (0x28)


}; 
 
 // ScriptStruct Niagara.NiagaraSystemVisibilityCullingSettings
struct FNiagaraSystemVisibilityCullingSettings
{
	char bCullWhenNotRendered : 1;  // 0x0 (0x0)
	char bCullByViewFrustum : 1;  // 0x0 (0x0)
	char bAllowPreCullingByViewFrustum : 1;  // 0x0 (0x0)
	char pad_0_1 : 5;  // 0x0 (0x0)
	char pad_1[4];  // 0x1 (0x1)
	float MaxTimeOutsideViewFrustum;  // 0x4 (0x4)
	float MaxTimeWithoutRender;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Niagara.NiagaraSystemScalabilitySettings
struct FNiagaraSystemScalabilitySettings
{
	struct FNiagaraPlatformSet Platforms;  // 0x0 (0x0)
	char bCullByDistance : 1;  // 0x30 (0x30)
	char bCullMaxInstanceCount : 1;  // 0x30 (0x30)
	char bCullPerSystemMaxInstanceCount : 1;  // 0x30 (0x30)
	char pad_48_1 : 5;  // 0x30 (0x30)
	char pad_49[4];  // 0x31 (0x31)
	float MaxDistance;  // 0x34 (0x34)
	char bCullByMaxTimeWithoutRender : 1;  // 0x38 (0x38)
	char pad_56_1 : 7;  // 0x38 (0x38)
	char pad_57[4];  // 0x39 (0x39)
	int32_t MaxInstances;  // 0x3C (0x3C)
	int32_t MaxSystemInstances;  // 0x40 (0x40)
	float MaxTimeWithoutRender;  // 0x44 (0x44)
	uint8_t CullProxyMode;  // 0x48 (0x48)
	int32_t MaxSystemProxies;  // 0x4C (0x4C)
	struct FNiagaraSystemVisibilityCullingSettings VisibilityCulling;  // 0x50 (0x50)
	struct FNiagaraGlobalBudgetScaling BudgetScaling;  // 0x5C (0x5C)
	char pad_148[4];  // 0x94 (0x94)


}; 
 
 // Function Niagara.NiagaraComponent.GetCustomTimeDilation
struct FGetCustomTimeDilation
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraPlatformSet
struct FNiagaraPlatformSet
{
	int32_t QualityLevelMask;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FNiagaraDeviceProfileStateEntry> DeviceProfileStates;  // 0x8 (0x8)
	struct TArray<struct FNiagaraPlatformSetCVarCondition> CVarConditions;  // 0x18 (0x18)
	char pad_40[8];  // 0x28 (0x28)


}; 
 
 // ScriptStruct Niagara.NiagaraPlatformSetCVarCondition
struct FNiagaraPlatformSetCVarCondition
{
	struct FName CVarName;  // 0x0 (0x0)
	uint8_t PassResponse;  // 0x8 (0x8)
	uint8_t FailResponse;  // 0x9 (0x9)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool Value : 1;  // 0xA (0xA)
	char pad_11[1];  // 0xB (0xB)
	int32_t MinInt;  // 0xC (0xC)
	int32_t MaxInt;  // 0x10 (0x10)
	float MinFloat;  // 0x14 (0x14)
	float MaxFloat;  // 0x18 (0x18)
	char bUseMinInt : 1;  // 0x1C (0x1C)
	char bUseMaxInt : 1;  // 0x1C (0x1C)
	char bUseMinFloat : 1;  // 0x1C (0x1C)
	char bUseMaxFloat : 1;  // 0x1C (0x1C)
	char pad_28_1 : 4;  // 0x1C (0x1C)
	char pad_29[20];  // 0x1D (0x1D)


}; 
 
 // ScriptStruct Niagara.NiagaraRendererMaterialVectorParameter
struct FNiagaraRendererMaterialVectorParameter
{
	struct FName MaterialParameterName;  // 0x0 (0x0)
	struct FLinearColor Value;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Niagara.NiagaraDeviceProfileStateEntry
struct FNiagaraDeviceProfileStateEntry
{
	struct FName ProfileName;  // 0x0 (0x0)
	uint32_t QualityLevelMask;  // 0x8 (0x8)
	uint32_t SetQualityLevelMask;  // 0xC (0xC)


}; 
 
 // ScriptStruct Niagara.NiagaraSystemScalabilitySettingsArray
struct FNiagaraSystemScalabilitySettingsArray
{
	struct TArray<struct FNiagaraSystemScalabilitySettings> Settings;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraComponent.GetAgeUpdateMode
struct FGetAgeUpdateMode
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraSystemScalabilityOverride
// Size: 0xA0(Inherited: 0x98)
struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings
{
	char bOverrideDistanceSettings : 1;  // 0x98 (0x98)
	char bOverrideInstanceCountSettings : 1;  // 0x98 (0x98)
	char bOverridePerSystemInstanceCountSettings : 1;  // 0x98 (0x98)
	char bOverrideVisibilitySettings : 1;  // 0x98 (0x98)
	char bOverrideGlobalBudgetScalingSettings : 1;  // 0x98 (0x98)
	char bOverrideCullProxySettings : 1;  // 0x98 (0x98)
	char pad_152_1 : 2;  // 0x98 (0x98)
	char pad_153[8];  // 0x99 (0x99)


}; 
 
 // ScriptStruct Niagara.NiagaraSystemScalabilityOverrides
struct FNiagaraSystemScalabilityOverrides
{
	struct TArray<struct FNiagaraSystemScalabilityOverride> Overrides;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraEmitterScalabilitySettings
struct FNiagaraEmitterScalabilitySettings
{
	struct FNiagaraPlatformSet Platforms;  // 0x0 (0x0)
	char bScaleSpawnCount : 1;  // 0x30 (0x30)
	char pad_48_1 : 7;  // 0x30 (0x30)
	char pad_49[4];  // 0x31 (0x31)
	float SpawnCountScale;  // 0x34 (0x34)


}; 
 
 // Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
struct FSetQuatParameter
{
	struct FString InVariableName;  // 0x0 (0x0)
	struct FQuat InValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Niagara.NiagaraEmitterScalabilitySettingsArray
struct FNiagaraEmitterScalabilitySettingsArray
{
	struct TArray<struct FNiagaraEmitterScalabilitySettings> Settings;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraEmitterScalabilityOverride
// Size: 0x40(Inherited: 0x38)
struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings
{
	char bOverrideSpawnCountScale : 1;  // 0x38 (0x38)
	char pad_56_1 : 7;  // 0x38 (0x38)
	char pad_57[8];  // 0x39 (0x39)


}; 
 
 // ScriptStruct Niagara.NiagaraEventReceiverProperties
struct FNiagaraEventReceiverProperties
{
	struct FName Name;  // 0x0 (0x0)
	struct FName SourceEventGenerator;  // 0x8 (0x8)
	struct FName SourceEmitter;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Niagara.NiagaraEventGeneratorProperties
struct FNiagaraEventGeneratorProperties
{
	int32_t MaxEventsPerFrame;  // 0x0 (0x0)
	struct FName ID;  // 0x4 (0x4)
	char pad_12[4];  // 0xC (0xC)
	struct FNiagaraDataSetCompiledData DataSetCompiledData;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredBones
struct FSetSkeletalMeshDataInterfaceFilteredBones
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FString OverrideName;  // 0x8 (0x8)
	struct TArray<struct FName> FilteredBones;  // 0x18 (0x18)


}; 
 
 // Function Niagara.NiagaraComponent.SetRenderingEnabled
struct FSetRenderingEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInRenderingEnabled : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraEmitterScriptProperties
struct FNiagaraEmitterScriptProperties
{
	struct UNiagaraScript* Script;  // 0x0 (0x0)
	struct TArray<struct FNiagaraEventReceiverProperties> EventReceivers;  // 0x8 (0x8)
	struct TArray<struct FNiagaraEventGeneratorProperties> EventGenerators;  // 0x18 (0x18)


}; 
 
 // ScriptStruct Niagara.NiagaraEventScriptProperties
// Size: 0x58(Inherited: 0x28)
struct FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties
{
	uint8_t ExecutionMode;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	uint32_t SpawnNumber;  // 0x2C (0x2C)
	uint32_t MaxEventsPerFrame;  // 0x30 (0x30)
	struct FGuid SourceEmitterID;  // 0x34 (0x34)
	struct FName SourceEventName;  // 0x44 (0x44)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool bRandomSpawnNumber : 1;  // 0x4C (0x4C)
	char pad_77[3];  // 0x4D (0x4D)
	uint32_t MinSpawnNumber;  // 0x50 (0x50)
	char pad_84_1 : 7;  // 0x54 (0x54)
	bool UpdateAttributeInitialValues : 1;  // 0x54 (0x54)
	char pad_85[3];  // 0x55 (0x55)


}; 
 
 // Function Niagara.NiagaraFunctionLibrary.ReleaseNiagaraGPURayTracedCollisionGroup
struct FReleaseNiagaraGPURayTracedCollisionGroup
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	int32_t CollisionGroup;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // ScriptStruct Niagara.NiagaraDetailsLevelScaleOverrides
struct FNiagaraDetailsLevelScaleOverrides
{
	float Low;  // 0x0 (0x0)
	float Medium;  // 0x4 (0x4)
	float High;  // 0x8 (0x8)
	float Epic;  // 0xC (0xC)
	float Cine;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Niagara.NiagaraRendererMaterialScalarParameter
struct FNiagaraRendererMaterialScalarParameter
{
	struct FName MaterialParameterName;  // 0x0 (0x0)
	float Value;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Niagara.VersionedNiagaraEmitterData
struct FVersionedNiagaraEmitterData
{
	struct FNiagaraAssetVersion Version;  // 0x0 (0x0)
	char pad_28[4];  // 0x1C (0x1C)
	struct FText VersionChangeDescription;  // 0x20 (0x20)
	uint8_t UpdateScriptExecution;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct FString PythonUpdateScript;  // 0x40 (0x40)
	struct FFilePath ScriptAsset;  // 0x50 (0x50)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool bDeprecated : 1;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)
	struct FText DeprecationMessage;  // 0x68 (0x68)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool bLocalSpace : 1;  // 0x80 (0x80)
	char pad_129_1 : 7;  // 0x81 (0x81)
	bool bDeterminism : 1;  // 0x81 (0x81)
	char pad_130[2];  // 0x82 (0x82)
	int32_t RandomSeed;  // 0x84 (0x84)
	char bInterpolatedSpawning : 1;  // 0x88 (0x88)
	char pad_136_1 : 7;  // 0x88 (0x88)
	char pad_137[4];  // 0x89 (0x89)
	uint8_t SimTarget;  // 0x8C (0x8C)
	uint8_t CalculateBoundsMode;  // 0x8D (0x8D)
	char pad_142[2];  // 0x8E (0x8E)
	struct FBox FixedBounds;  // 0x90 (0x90)
	char bRequiresPersistentIDs : 1;  // 0xC8 (0xC8)
	char bCombineEventSpawn : 1;  // 0xC8 (0xC8)
	char pad_200_1 : 6;  // 0xC8 (0xC8)
	char pad_201[8];  // 0xC9 (0xC9)
	struct TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps;  // 0xD0 (0xD0)
	struct FNiagaraPlatformSet Platforms;  // 0xE0 (0xE0)
	struct FNiagaraEmitterScalabilityOverrides ScalabilityOverrides;  // 0x110 (0x110)
	char bLimitDeltaTime : 1;  // 0x120 (0x120)
	char pad_288_1 : 7;  // 0x120 (0x120)
	char pad_289[4];  // 0x121 (0x121)
	int32_t MaxGPUParticlesSpawnPerFrame;  // 0x124 (0x124)
	float MaxDeltaTimePerTick;  // 0x128 (0x128)
	uint8_t AllocationMode;  // 0x12C (0x12C)
	char pad_301[3];  // 0x12D (0x12D)
	int32_t PreAllocationCount;  // 0x130 (0x130)
	char pad_308[4];  // 0x134 (0x134)
	struct FNiagaraEmitterScriptProperties UpdateScriptProps;  // 0x138 (0x138)
	struct FNiagaraEmitterScriptProperties SpawnScriptProps;  // 0x160 (0x160)
	struct FNiagaraParameterStore RendererBindings;  // 0x188 (0x188)
	struct TArray<struct UNiagaraRendererProperties*> RendererProperties;  // 0x210 (0x210)
	struct TArray<struct UNiagaraSimulationStageBase*> SimulationStages;  // 0x220 (0x220)
	struct UNiagaraScript* GPUComputeScript;  // 0x230 (0x230)
	struct TArray<struct FName> SharedEventGeneratorIds;  // 0x238 (0x238)
	struct FNiagaraEmitterScalabilitySettings CurrentScalabilitySettings;  // 0x248 (0x248)
	char pad_640[168];  // 0x280 (0x280)


}; 
 
 // Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
struct FSetBoolParameter
{
	struct FString InVariableName;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool InValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct Niagara.NiagaraParameterStore
struct FNiagaraParameterStore
{
	char pad_0[8];  // 0x0 (0x0)
	struct TWeakObjectPtr<UObject> Owner;  // 0x8 (0x8)
	struct TArray<struct FNiagaraVariableWithOffset> SortedParameterOffsets;  // 0x10 (0x10)
	struct TArray<char> ParameterData;  // 0x20 (0x20)
	struct TArray<struct UNiagaraDataInterface*> DataInterfaces;  // 0x30 (0x30)
	struct TArray<struct UObject*> UObjects;  // 0x40 (0x40)
	struct TArray<struct FNiagaraPositionSource> OriginalPositionData;  // 0x50 (0x50)
	char pad_96[40];  // 0x60 (0x60)


}; 
 
 // Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredSockets
struct FSetSkeletalMeshDataInterfaceFilteredSockets
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FString OverrideName;  // 0x8 (0x8)
	struct TArray<struct FName> FilteredSockets;  // 0x18 (0x18)


}; 
 
 // ScriptStruct Niagara.NiagaraVariableWithOffset
// Size: 0x20(Inherited: 0xC)
struct FNiagaraVariableWithOffset : FNiagaraVariableBase
{
	int32_t Offset;  // 0xC (0xC)
	struct FNiagaraLwcStructConverter StructConverter;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Niagara.NiagaraLwcStructConverter
struct FNiagaraLwcStructConverter
{
	struct TArray<struct FNiagaraStructConversionStep> ConversionSteps;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraPreviewGrid.ActivatePreviews
struct FActivatePreviews
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bReset : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraStructConversionStep
struct FNiagaraStructConversionStep
{
	int32_t SourceBytes;  // 0x0 (0x0)
	int32_t SourceOffset;  // 0x4 (0x4)
	int32_t SimulationBytes;  // 0x8 (0x8)
	int32_t SimulationOffset;  // 0xC (0xC)
	uint8_t ConversionType;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 // Function Niagara.NiagaraPreviewAxis.ApplyToPreview
struct FApplyToPreview
{
	struct UNiagaraComponent* PreviewComponent;  // 0x0 (0x0)
	int32_t PreviewIndex;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bIsXAxis : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	struct FString OutLabelText;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Niagara.NiagaraAssetVersion
struct FNiagaraAssetVersion
{
	int32_t MajorVersion;  // 0x0 (0x0)
	int32_t MinorVersion;  // 0x4 (0x4)
	struct FGuid VersionGuid;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bIsVisibleInVersionSelector : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)


}; 
 
 // ScriptStruct Niagara.NiagaraRendererMaterialTextureParameter
struct FNiagaraRendererMaterialTextureParameter
{
	struct FName MaterialParameterName;  // 0x0 (0x0)
	struct UTexture* Texture;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Niagara.NiagaraEmitterHandle
struct FNiagaraEmitterHandle
{
	struct FGuid ID;  // 0x0 (0x0)
	struct FName IdName;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bIsEnabled : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	struct FName Name;  // 0x1C (0x1C)
	char pad_36[4];  // 0x24 (0x24)
	struct UNiagaraEmitter* Instance;  // 0x28 (0x28)
	struct FVersionedNiagaraEmitter VersionedInstance;  // 0x30 (0x30)


}; 
 
 // ScriptStruct Niagara.VersionedNiagaraEmitter
struct FVersionedNiagaraEmitter
{
	struct UNiagaraEmitter* Emitter;  // 0x0 (0x0)
	struct FGuid Version;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Niagara.NiagaraParameterDataSetBinding
struct FNiagaraParameterDataSetBinding
{
	int32_t ParameterOffset;  // 0x0 (0x0)
	int32_t DataSetComponentOffset;  // 0x4 (0x4)


}; 
 
 // ScriptStruct Niagara.NiagaraCollisionEventPayload
struct FNiagaraCollisionEventPayload
{
	struct FVector CollisionPos;  // 0x0 (0x0)
	struct FVector CollisionNormal;  // 0x18 (0x18)
	struct FVector CollisionVelocity;  // 0x30 (0x30)
	int32_t ParticleIndex;  // 0x48 (0x48)
	int32_t PhysicalMaterialIndex;  // 0x4C (0x4C)


}; 
 
 // ScriptStruct Niagara.NiagaraMeshMaterialOverride
struct FNiagaraMeshMaterialOverride
{
	struct UMaterialInterface* ExplicitMat;  // 0x0 (0x0)
	struct FNiagaraUserParameterBinding UserParamBinding;  // 0x8 (0x8)


}; 
 
 // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
struct FOverrideSystemUserVariableStaticMesh
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FString OverrideName;  // 0x8 (0x8)
	struct UStaticMesh* StaticMesh;  // 0x18 (0x18)


}; 
 
 // ScriptStruct Niagara.NiagaraRendererMaterialParameters
struct FNiagaraRendererMaterialParameters
{
	struct TArray<struct FNiagaraMaterialAttributeBinding> AttributeBindings;  // 0x0 (0x0)
	struct TArray<struct FNiagaraRendererMaterialScalarParameter> ScalarParameters;  // 0x10 (0x10)
	struct TArray<struct FNiagaraRendererMaterialVectorParameter> VectorParameters;  // 0x20 (0x20)
	struct TArray<struct FNiagaraRendererMaterialTextureParameter> TextureParameters;  // 0x30 (0x30)


}; 
 
 // ScriptStruct Niagara.NiagaraMeshRendererMeshProperties
struct FNiagaraMeshRendererMeshProperties
{
	struct UStaticMesh* Mesh;  // 0x0 (0x0)
	struct FNiagaraUserParameterBinding UserParamBinding;  // 0x8 (0x8)
	struct FVector Scale;  // 0x28 (0x28)
	struct FRotator Rotation;  // 0x40 (0x40)
	struct FVector PivotOffset;  // 0x58 (0x58)
	uint8_t PivotOffsetSpace;  // 0x70 (0x70)
	char pad_113[7];  // 0x71 (0x71)


}; 
 
 // ScriptStruct Niagara.ParameterDefinitionsSubscription
struct FParameterDefinitionsSubscription
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraParameters
struct FNiagaraParameters
{
	struct TArray<struct FNiagaraVariable> Parameters;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue
struct FGetNiagaraArrayVector2DValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	int32_t Index;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FVector2D ReturnValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct Niagara.NiagaraPerfBaselineStats
struct FNiagaraPerfBaselineStats
{
	float PerInstanceAvg_GT;  // 0x0 (0x0)
	float PerInstanceAvg_RT;  // 0x4 (0x4)
	float PerInstanceMax_GT;  // 0x8 (0x8)
	float PerInstanceMax_RT;  // 0xC (0xC)


}; 
 
 // ScriptStruct Niagara.NiagaraPlatformSetConflictEntry
struct FNiagaraPlatformSetConflictEntry
{
	struct FName ProfileName;  // 0x0 (0x0)
	int32_t QualityLevelMask;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Niagara.NiagaraPlatformSetConflictInfo
struct FNiagaraPlatformSetConflictInfo
{
	int32_t SetAIndex;  // 0x0 (0x0)
	int32_t SetBIndex;  // 0x4 (0x4)
	struct TArray<struct FNiagaraPlatformSetConflictEntry> Conflicts;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Niagara.NiagaraScriptInstanceParameterStore
// Size: 0x98(Inherited: 0x88)
struct FNiagaraScriptInstanceParameterStore : FNiagaraParameterStore
{
	char pad_136[16];  // 0x88 (0x88)


}; 
 
 // ScriptStruct Niagara.NiagaraPlatformSetRedirect
struct FNiagaraPlatformSetRedirect
{
	struct TArray<struct FName> ProfileNames;  // 0x0 (0x0)
	uint8_t Mode;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	struct FName RedirectProfileName;  // 0x14 (0x14)
	char pad_28[4];  // 0x1C (0x1C)
	struct FNiagaraPlatformSetCVarCondition CVarConditionEnabled;  // 0x20 (0x20)
	struct FNiagaraPlatformSetCVarCondition CVarConditionDisabled;  // 0x50 (0x50)


}; 
 
 // ScriptStruct Niagara.NiagaraRibbonShapeCustomVertex
struct FNiagaraRibbonShapeCustomVertex
{
	struct FVector2f Position;  // 0x0 (0x0)
	struct FVector2f Normal;  // 0x8 (0x8)
	float TextureV;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Niagara.VersionedNiagaraScriptData
struct FVersionedNiagaraScriptData
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraRibbonUVSettings
struct FNiagaraRibbonUVSettings
{
	uint8_t DistributionMode;  // 0x0 (0x0)
	uint8_t LeadingEdgeMode;  // 0x4 (0x4)
	uint8_t TrailingEdgeMode;  // 0x8 (0x8)
	float TilingLength;  // 0xC (0xC)
	struct FVector2D Offset;  // 0x10 (0x10)
	struct FVector2D Scale;  // 0x20 (0x20)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bEnablePerParticleUOverride : 1;  // 0x30 (0x30)
	char pad_49_1 : 7;  // 0x31 (0x31)
	bool bEnablePerParticleVRangeOverride : 1;  // 0x31 (0x31)
	char pad_50[6];  // 0x32 (0x32)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPositionValue
struct FSetNiagaraArrayPositionValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	int32_t Index;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FVector Value;  // 0x18 (0x18)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bSizeToFit : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // ScriptStruct Niagara.NiagaraScriptHighlight
struct FNiagaraScriptHighlight
{
	struct FLinearColor Color;  // 0x0 (0x0)
	struct FText DisplayName;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Niagara.NiagaraModuleDependency
struct FNiagaraModuleDependency
{
	struct FName ID;  // 0x0 (0x0)
	uint8_t Type;  // 0x8 (0x8)
	uint8_t ScriptConstraint;  // 0x9 (0x9)
	char pad_10[6];  // 0xA (0xA)
	struct FString RequiredVersion;  // 0x10 (0x10)
	int32_t OnlyEvaluateInScriptUsage;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct FText Description;  // 0x28 (0x28)
	char pad_64[40];  // 0x40 (0x40)


}; 
 
 // Function Niagara.NiagaraComponent.SetForceSolo
struct FSetForceSolo
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInForceSolo : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraCompilerTag
struct FNiagaraCompilerTag
{
	struct FNiagaraVariable Variable;  // 0x0 (0x0)
	struct FString StringValue;  // 0x20 (0x20)


}; 
 
 // ScriptStruct Niagara.NiagaraVMExecutableDataId
struct FNiagaraVMExecutableDataId
{
	struct FGuid CompilerVersionID;  // 0x0 (0x0)
	uint8_t ScriptUsageType;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	struct FGuid ScriptUsageTypeID;  // 0x14 (0x14)
	char bUsesRapidIterationParams : 1;  // 0x24 (0x24)
	char bDisableDebugSwitches : 1;  // 0x24 (0x24)
	char bInterpolatedSpawn : 1;  // 0x24 (0x24)
	char bRequiresPersistentIDs : 1;  // 0x24 (0x24)
	char pad_36_1 : 4;  // 0x24 (0x24)
	char pad_37[4];  // 0x25 (0x25)
	struct FGuid BaseScriptID;  // 0x28 (0x28)
	struct FNiagaraCompileHash BaseScriptCompileHash;  // 0x38 (0x38)
	struct FGuid ScriptVersionID;  // 0x48 (0x48)


}; 
 
 // ScriptStruct Niagara.NiagaraVMExecutableByteCode
struct FNiagaraVMExecutableByteCode
{
	struct TArray<char> Data;  // 0x0 (0x0)
	int32_t UncompressedSize;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
struct FSpawnSystemAtLocation
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UNiagaraSystem* SystemTemplate;  // 0x8 (0x8)
	struct FVector Location;  // 0x10 (0x10)
	struct FRotator Rotation;  // 0x28 (0x28)
	struct FVector Scale;  // 0x40 (0x40)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool bAutoDestroy : 1;  // 0x58 (0x58)
	char pad_89_1 : 7;  // 0x59 (0x59)
	bool bAutoActivate : 1;  // 0x59 (0x59)
	uint8_t PoolingMethod;  // 0x5A (0x5A)
	char pad_91_1 : 7;  // 0x5B (0x5B)
	bool bPreCullCheck : 1;  // 0x5B (0x5B)
	char pad_92[4];  // 0x5C (0x5C)
	struct UNiagaraComponent* ReturnValue;  // 0x60 (0x60)


}; 
 
 // Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
struct FGetNiagaraParameterCollection
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UNiagaraParameterCollection* Collection;  // 0x8 (0x8)
	struct UNiagaraParameterCollectionInstance* ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Niagara.NiagaraVMExecutableData
struct FNiagaraVMExecutableData
{
	struct FNiagaraVMExecutableByteCode ByteCode;  // 0x0 (0x0)
	struct FNiagaraVMExecutableByteCode OptimizedByteCode;  // 0x18 (0x18)
	char pad_48[56];  // 0x30 (0x30)
	int32_t NumTempRegisters;  // 0x68 (0x68)
	int32_t NumUserPtrs;  // 0x6C (0x6C)
	struct TArray<struct FNiagaraCompilerTag> CompileTags;  // 0x70 (0x70)
	struct TArray<char> ScriptLiterals;  // 0x80 (0x80)
	struct TArray<struct FNiagaraVariable> Attributes;  // 0x90 (0x90)
	struct FNiagaraScriptDataUsageInfo DataUsage;  // 0xA0 (0xA0)
	char pad_161[7];  // 0xA1 (0xA1)
	struct TArray<struct FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;  // 0xA8 (0xA8)
	struct TArray<struct FVMExternalFunctionBindingInfo> CalledVMExternalFunctions;  // 0xB8 (0xB8)
	char pad_200[16];  // 0xC8 (0xC8)
	struct TArray<struct FNiagaraDataSetID> ReadDataSets;  // 0xD8 (0xD8)
	struct TArray<struct FNiagaraDataSetProperties> WriteDataSets;  // 0xE8 (0xE8)
	struct TArray<struct FNiagaraStatScope> StatScopes;  // 0xF8 (0xF8)
	struct FNiagaraShaderScriptParametersMetadata ShaderScriptParametersMetadata;  // 0x108 (0x108)
	uint8_t LastCompileStatus;  // 0x160 (0x160)
	char pad_353[7];  // 0x161 (0x161)
	struct TArray<struct FSimulationStageMetaData> SimulationStageMetaData;  // 0x168 (0x168)
	struct TArray<char> ExperimentalContextData;  // 0x178 (0x178)
	char bReadsSignificanceIndex : 1;  // 0x188 (0x188)
	char bNeedsGPUContextInit : 1;  // 0x188 (0x188)
	char pad_392_1 : 6;  // 0x188 (0x188)
	char pad_393[8];  // 0x189 (0x189)


}; 
 
 // Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
struct FGetFloatParameter
{
	struct FString InVariableName;  // 0x0 (0x0)
	float ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
struct FSetNiagaraVariableFloat
{
	struct FString InVariableName;  // 0x0 (0x0)
	float InValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
struct FNiagaraScriptExecutionPaddingInfo
{
	uint16_t SrcOffset;  // 0x0 (0x0)
	uint16_t DestOffset;  // 0x2 (0x2)
	uint16_t SrcSize;  // 0x4 (0x4)
	uint16_t DestSize;  // 0x6 (0x6)


}; 
 
 // ScriptStruct Niagara.NiagaraSimCacheEmitterFrame
struct FNiagaraSimCacheEmitterFrame
{
	struct FBox LocalBounds;  // 0x0 (0x0)
	int32_t TotalSpawnedParticles;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)
	struct FNiagaraSimCacheDataBuffers ParticleDataBuffers;  // 0x40 (0x40)


}; 
 
 // ScriptStruct Niagara.NiagaraSimCacheSystemFrame
struct FNiagaraSimCacheSystemFrame
{
	struct FBox LocalBounds;  // 0x0 (0x0)
	struct FNiagaraSimCacheDataBuffers SystemDataBuffers;  // 0x38 (0x38)


}; 
 
 // ScriptStruct Niagara.NiagaraSimCacheVariable
struct FNiagaraSimCacheVariable
{
	struct FNiagaraVariableBase Variable;  // 0x0 (0x0)
	uint16_t FloatOffset;  // 0xC (0xC)
	uint16_t FloatCount;  // 0xE (0xE)
	uint16_t HalfOffset;  // 0x10 (0x10)
	uint16_t HalfCount;  // 0x12 (0x12)
	uint16_t Int32Offset;  // 0x14 (0x14)
	uint16_t Int32Count;  // 0x7FF7D3388D00 (0x0) 5D6E0080) (0x7FF7D3388D00 (0x0))


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
struct FGetNiagaraArrayQuat
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0 (0x0))
	struct FName OverrideName;  // 0x8 (0x8)
	struct TArray<struct FQuat> ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Niagara.NiagaraSimCacheDataBuffersLayout
struct FNiagaraSimCacheDataBuffersLayout
{
	struct FName LayoutName;  // 0x0 (0x7FF7D3388D00 (0x0))
	uint8_t SimTarget;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct TArray<struct FNiagaraSimCacheVariable> Variables;  // 0x10 (0x10)
	uint16_t FloatCount;  // 0x20 (0x20)
	uint16_t HalfCount;  // 0x22 (0x22)
	uint16_t Int32Count;  // 0x24 (0x24)
	char pad_38_1 : 7;  // 0x26 (0x26)
	bool bLocalSpace : 1;  // 0x26 (0x26)
	char pad_39[1];  // 0x27 (0x27)
	struct TArray<struct FName> RebaseVariableNames;  // 0x28 (0x28)
	char pad_56[48];  // 0x38 (0x38)


}; 
 
 // Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
struct FSetIntParameter
{
	struct FString InVariableName;  // 0x0 (0x0)
	int32_t InValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function Niagara.NiagaraComponent.SetVariableVec2
struct FSetVariableVec2
{
	struct FName InVariableName;  // 0x7FF7CE0B0110 (0x7FF7CE0B0110)
	struct FVector2D InValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Niagara.NiagaraSimCacheLayout
struct FNiagaraSimCacheLayout
{
	struct FNiagaraSimCacheDataBuffersLayout SystemLayout;  // 0x0 (0x0)
	struct TArray<struct FNiagaraSimCacheDataBuffersLayout> EmitterLayouts;  // 0x68 (0x68)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
struct FGetNiagaraArrayInt32
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	struct TArray<int32_t> ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Niagara.NiagaraEmitterCompiledData
struct FNiagaraEmitterCompiledData
{
	struct TArray<struct FName> SpawnAttributes;  // 0x0 (0x0)
	struct FNiagaraVariable EmitterSpawnIntervalVar;  // 0x10 (0x10)
	struct FNiagaraVariable EmitterInterpSpawnStartDTVar;  // 0x30 (0x30)
	struct FNiagaraVariable EmitterSpawnGroupVar;  // 0x50 (0x50)
	struct FNiagaraVariable EmitterAgeVar;  // 0x70 (0x70)
	struct FNiagaraVariable EmitterRandomSeedVar;  // 0x90 (0x90)
	struct FNiagaraVariable EmitterInstanceSeedVar;  // 0xB0 (0xB0)
	struct FNiagaraVariable EmitterTotalSpawnedParticlesVar;  // 0xD0 (0xD0)
	struct FNiagaraDataSetCompiledData DataSetCompiledData;  // 0xF0 (0xF0)


}; 
 
 // ScriptStruct Niagara.NiagaraParameterDataSetBindingCollection
struct FNiagaraParameterDataSetBindingCollection
{
	struct TArray<struct FNiagaraParameterDataSetBinding> FloatOffsets;  // 0x0 (0x0)
	struct TArray<struct FNiagaraParameterDataSetBinding> Int32Offsets;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Niagara.NiagaraSystemCompiledData
struct FNiagaraSystemCompiledData
{
	struct FNiagaraParameterStore InstanceParamStore;  // 0x0 (0x0)
	struct FNiagaraDataSetCompiledData DataSetCompiledData;  // 0x88 (0x88)
	struct FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData;  // 0xC8 (0xC8)
	struct FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData;  // 0x108 (0x108)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding;  // 0x148 (0x148)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding;  // 0x168 (0x168)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding;  // 0x188 (0x188)
	struct TArray<struct FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings;  // 0x1A8 (0x1A8)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding;  // 0x1B8 (0x1B8)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding;  // 0x1D8 (0x1D8)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding;  // 0x1F8 (0x1F8)
	struct TArray<struct FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings;  // 0x218 (0x218)


}; 
 
 // ScriptStruct Niagara.NiagaraSystemCompileRequest
struct FNiagaraSystemCompileRequest
{
	char pad_0[8];  // 0x0 (0x0)
	struct TArray<struct UObject*> RootObjects;  // 0x8 (0x8)
	char pad_24[24];  // 0x18 (0x18)


}; 
 
 // ScriptStruct Niagara.NiagaraWildcard
struct FNiagaraWildcard
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraFloat
struct FNiagaraFloat
{
	float Value;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraInt32
struct FNiagaraInt32
{
	int32_t Value;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraBool
struct FNiagaraBool
{
	int32_t Value;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraComponent.SetVariableFloat
struct FSetVariableFloat
{
	struct FName InVariableName;  // 0x0 (0x0)
	float InValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Niagara.NiagaraPosition
// Size: 0xC(Inherited: 0xC)
struct FNiagaraPosition : FVector3f
{


}; 
 
 // ScriptStruct Niagara.NiagaraHalf
struct FNiagaraHalf
{
	uint16_t Value;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraHalfVector2
struct FNiagaraHalfVector2
{
	uint16_t X;  // 0x0 (0x0)
	uint16_t Y;  // 0x2 (0x2)


}; 
 
 // ScriptStruct Niagara.NiagaraHalfVector3
struct FNiagaraHalfVector3
{
	uint16_t X;  // 0x0 (0x0)
	uint16_t Y;  // 0x2 (0x2)
	uint16_t Z;  // 0x4 (0x4)


}; 
 
 // ScriptStruct Niagara.NiagaraHalfVector4
struct FNiagaraHalfVector4
{
	uint16_t X;  // 0x0 (0x0)
	uint16_t Y;  // 0x2 (0x2)
	uint16_t Z;  // 0x4 (0x4)
	uint16_t W;  // 0x6 (0x6)


}; 
 
 // ScriptStruct Niagara.NiagaraNumeric
struct FNiagaraNumeric
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraParameterMap
struct FNiagaraParameterMap
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraSpawnInfo
struct FNiagaraSpawnInfo
{
	int32_t Count;  // 0x0 (0x0)
	float InterpStartDt;  // 0x4 (0x4)
	float IntervalDt;  // 0x8 (0x8)
	int32_t SpawnGroup;  // 0xC (0xC)


}; 
 
 // ScriptStruct Niagara.NiagaraID
struct FNiagaraID
{
	int32_t Index;  // 0x0 (0x0)
	int32_t AcquireTag;  // 0x4 (0x4)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
struct FGetNiagaraArrayFloat
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	struct TArray<float> ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraComponent.ClearSimCache
struct FClearSimCache
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bResetSystem : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Niagara.NiagaraRandInfo
struct FNiagaraRandInfo
{
	int32_t Seed1;  // 0x0 (0x0)
	int32_t Seed2;  // 0x4 (0x4)
	int32_t Seed3;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Niagara.NiagaraCompileHashVisitorDebugInfo
struct FNiagaraCompileHashVisitorDebugInfo
{
	struct FString Object;  // 0x0 (0x0)
	struct TArray<struct FString> PropertyKeys;  // 0x10 (0x10)
	struct TArray<struct FString> PropertyValues;  // 0x20 (0x20)


}; 
 
 // Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
struct FGetNiagaraParticleValues_DebugOnly
{
	struct FString InEmitterName;  // 0x0 (0x0)
	struct FString InValueName;  // 0x10 (0x10)
	struct TArray<float> ReturnValue;  // 0x20 (0x20)


}; 
 
 // ScriptStruct Niagara.NiagaraInputConditionMetadata
struct FNiagaraInputConditionMetadata
{
	struct FName InputName;  // 0x0 (0x0)
	struct TArray<struct FString> TargetValues;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Niagara.NiagaraEnumParameterMetaData
struct FNiagaraEnumParameterMetaData
{
	struct FName OverrideName;  // 0x0 (0x0)
	struct UTexture2D* IconOverride;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bUseColorOverride : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	struct FLinearColor ColorOverride;  // 0x14 (0x14)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // ScriptStruct Niagara.NiagaraBoolParameterMetaData
struct FNiagaraBoolParameterMetaData
{
	uint8_t DisplayMode;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FName OverrideNameTrue;  // 0x4 (0x4)
	struct FName OverrideNameFalse;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct UTexture2D* IconOverrideTrue;  // 0x18 (0x18)
	struct UTexture2D* IconOverrideFalse;  // 0x20 (0x20)


}; 
 
 // ScriptStruct Niagara.NiagaraVariableMetaData
struct FNiagaraVariableMetaData
{
	struct FText Description;  // 0x0 (0x0)
	struct FText CategoryName;  // 0x18 (0x18)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bAdvancedDisplay : 1;  // 0x30 (0x30)
	char pad_49_1 : 7;  // 0x31 (0x31)
	bool bDisplayInOverviewStack : 1;  // 0x31 (0x31)
	char pad_50[2];  // 0x32 (0x32)
	int32_t InlineParameterSortPriority;  // 0x34 (0x34)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bOverrideColor : 1;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)
	struct FLinearColor InlineParameterColorOverride;  // 0x3C (0x3C)
	char pad_76[4];  // 0x4C (0x4C)
	struct TArray<struct FNiagaraEnumParameterMetaData> InlineParameterEnumOverrides;  // 0x50 (0x50)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool bEnableBoolOverride : 1;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)
	struct FNiagaraBoolParameterMetaData InlineParameterBoolOverride;  // 0x68 (0x68)
	int32_t EditorSortPriority;  // 0x90 (0x90)
	char pad_148_1 : 7;  // 0x94 (0x94)
	bool bInlineEditConditionToggle : 1;  // 0x94 (0x94)
	char pad_149[3];  // 0x95 (0x95)
	struct FNiagaraInputConditionMetadata EditCondition;  // 0x98 (0x98)
	struct FNiagaraInputConditionMetadata VisibleCondition;  // 0xB0 (0xB0)
	struct TMap<struct FName, struct FString> PropertyMetaData;  // 0xC8 (0xC8)
	struct FName ParentAttribute;  // 0x118 (0x118)
	struct TArray<struct FName> AlternateAliases;  // 0x120 (0x120)
	struct FGuid VariableGuid;  // 0x130 (0x130)
	char pad_320_1 : 7;  // 0x140 (0x140)
	bool bIsStaticSwitch : 1;  // 0x140 (0x140)
	char pad_321[3];  // 0x141 (0x141)
	int32_t StaticSwitchDefaultValue;  // 0x144 (0x144)


}; 
 
 // ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
// Size: 0xD8(Inherited: 0x88)
struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore
{
	struct TMap<struct FNiagaraVariable, struct FNiagaraVariable> UserParameterRedirects;  // 0x88 (0x88)


}; 
 
 // ScriptStruct Niagara.NiagaraVariant
struct FNiagaraVariant
{
	struct UObject* Object;  // 0x0 (0x0)
	struct UNiagaraDataInterface* DataInterface;  // 0x8 (0x8)
	struct TArray<char> Bytes;  // 0x10 (0x10)
	uint8_t CurrentMode;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // ScriptStruct Niagara.NiagaraWorldManagerTickFunction
// Size: 0x30(Inherited: 0x28)
struct FNiagaraWorldManagerTickFunction : FTickFunction
{
	char pad_40[8];  // 0x28 (0x28)


}; 
 
 // Function Niagara.NiagaraComponent.SetVariableObject
struct FSetVariableObject
{
	struct FName InVariableName;  // 0x0 (0x0)
	struct UObject* Object;  // 0x8 (0x8)


}; 
 
 // Function Niagara.NiagaraComponent.SetVariableActor
struct FSetVariableActor
{
	struct FName InVariableName;  // 0x0 (0x0)
	struct AActor* Actor;  // 0x8 (0x8)


}; 
 
 // Function Niagara.NiagaraComponent.SetAgeUpdateMode
struct FSetAgeUpdateMode
{
	uint8_t InAgeUpdateMode;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraDataInterfaceSkeletalMesh.OnSourceEndPlay
struct FOnSourceEndPlay
{
	struct AActor* InSource;  // 0x0 (0x0)
	enum class EEndPlayReason Reason;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function Niagara.NiagaraDataInterfaceUObjectPropertyReader.SetUObjectReaderPropertyRemap
struct FSetUObjectReaderPropertyRemap
{
	struct UNiagaraComponent* NiagaraComponent;  // 0x0 (0x0)
	struct FName UserParameterName;  // 0x8 (0x8)
	struct FName GraphName;  // 0x10 (0x10)
	struct FName RemapName;  // 0x18 (0x18)


}; 
 
 // Function Niagara.NiagaraBaselineController.OnOwnerTick
struct FOnOwnerTick
{
	float DeltaTime;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraComponent.AdvanceSimulationByTime
struct FAdvanceSimulationByTime
{
	float SimulateTime;  // 0x0 (0x0)
	float TickDeltaSeconds;  // 0x4 (0x4)


}; 
 
 // Function Niagara.NiagaraActor.OnNiagaraSystemFinished
struct FOnNiagaraSystemFinished
{
	struct UNiagaraComponent* FinishedComponent;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraActor.SetDestroyOnSystemFinish
struct FSetDestroyOnSystemFinish
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bShouldDestroyOnSystemFinish : 1;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraComponent.ClearEmitterFixedBounds
struct FClearEmitterFixedBounds
{
	struct FName EmitterName;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value
struct FGetNiagaraArrayVector4Value
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	int32_t Index;  // 0x10 (0x10)
	char pad_20[12];  // 0x14 (0x14)
	struct FVector4 ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function Niagara.NiagaraComponent.GetAllowScalability
struct FGetAllowScalability
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraComponent.GetAsset
struct FGetAsset
{
	struct UNiagaraSystem* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraComponent.GetDataInterface
struct FGetDataInterface
{
	struct FString Name;  // 0x0 (0x0)
	struct UNiagaraDataInterface* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraComponent.GetDesiredAge
struct FGetDesiredAge
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraComponent.GetEmitterFixedBounds
struct FGetEmitterFixedBounds
{
	struct FName EmitterName;  // 0x0 (0x0)
	struct FBox ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function Niagara.NiagaraComponent.GetSystemFixedBounds
struct FGetSystemFixedBounds
{
	struct FBox ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta
struct FGetLockDesiredAgeDeltaTimeToSeekDelta
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary.SetSourceActors
struct FSetSourceActors
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	struct TArray<struct AActor*> SourceActors;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
struct FGetNiagaraParticlePositions_DebugOnly
{
	struct FString InEmitterName;  // 0x0 (0x0)
	struct TArray<struct FVector> ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
struct FGetNiagaraParticleValueVec3_DebugOnly
{
	struct FString InEmitterName;  // 0x0 (0x0)
	struct FString InValueName;  // 0x10 (0x10)
	struct TArray<struct FVector> ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function Niagara.NiagaraComponent.GetPreviewLODDistance
struct FGetPreviewLODDistance
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
struct FGetPreviewLODDistanceEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraComponent.GetSimCache
struct FGetSimCache
{
	struct UNiagaraSimCache* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraComponent.GetTickBehavior
struct FGetTickBehavior
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraComponent.IsPaused
struct FIsPaused
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraComponent.SetAllowScalability
struct FSetAllowScalability
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bAllow : 1;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraComponent.SetAsset
struct FSetAsset
{
	struct UNiagaraSystem* InAsset;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bResetExistingOverrideParameters : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function Niagara.NiagaraFunctionLibrary.AcquireNiagaraGPURayTracedCollisionGroup
struct FAcquireNiagaraGPURayTracedCollisionGroup
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function Niagara.NiagaraComponent.SetAutoDestroy
struct FSetAutoDestroy
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInAutoDestroy : 1;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
struct FSetCanRenderWhileSeeking
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInCanRenderWhileSeeking : 1;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraComponent.SetCustomTimeDilation
struct FSetCustomTimeDilation
{
	float Dilation;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraSimCache.ReadPositionAttributeWithRebase
struct FReadPositionAttributeWithRebase
{
	struct TArray<struct FVector> OutValues;  // 0x0 (0x0)
	struct FTransform Transform;  // 0x10 (0x10)
	struct FName AttributeName;  // 0x70 (0x70)
	struct FName EmitterName;  // 0x78 (0x78)
	int32_t FrameIndex;  // 0x80 (0x80)
	char pad_132[12];  // 0x84 (0x84)


}; 
 
 // Function Niagara.NiagaraComponent.SetEmitterFixedBounds
struct FSetEmitterFixedBounds
{
	struct FName EmitterName;  // 0x0 (0x0)
	struct FBox LocalBounds;  // 0x8 (0x8)


}; 
 
 // Function Niagara.NiagaraComponent.SetForceLocalPlayerEffect
struct FSetForceLocalPlayerEffect
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsPlayerEffect : 1;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraComponent.SetGpuComputeDebug
struct FSetGpuComputeDebug
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnableDebug : 1;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
struct FGetVector2DParameter
{
	struct FString InVariableName;  // 0x0 (0x0)
	struct FVector2D ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta
struct FSetLockDesiredAgeDeltaTimeToSeekDelta
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Block : 1;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraComponent.SetMaxSimTime
struct FSetMaxSimTime
{
	float InMaxTime;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraComponent.SetNiagaraVariableActor
struct FSetNiagaraVariableActor
{
	struct FString InVariableName;  // 0x0 (0x0)
	struct AActor* Actor;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraComponent.SetNiagaraVariableBool
struct FSetNiagaraVariableBool
{
	struct FString InVariableName;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool InValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function Niagara.NiagaraComponent.SetNiagaraVariableInt
struct FSetNiagaraVariableInt
{
	struct FString InVariableName;  // 0x0 (0x0)
	int32_t InValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function Niagara.NiagaraComponent.SetNiagaraVariableMatrix
struct FSetNiagaraVariableMatrix
{
	struct FString InVariableName;  // 0x0 (0x0)
	struct FMatrix InValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraComponent.SetNiagaraVariableObject
struct FSetNiagaraVariableObject
{
	struct FString InVariableName;  // 0x0 (0x0)
	struct UObject* Object;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraComponent.SetNiagaraVariablePosition
struct FSetNiagaraVariablePosition
{
	struct FString InVariableName;  // 0x0 (0x0)
	struct FVector InValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
struct FSetNiagaraVariableQuat
{
	struct FString InVariableName;  // 0x0 (0x0)
	struct FQuat InValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
struct FSetNiagaraVariableVec2
{
	struct FString InVariableName;  // 0x0 (0x0)
	struct FVector2D InValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
struct FSetNiagaraVariableVec3
{
	struct FString InVariableName;  // 0x0 (0x0)
	struct FVector InValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
struct FSetNiagaraVariableVec4
{
	struct FString InVariableName;  // 0x0 (0x0)
	struct FVector4 InValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraComponent.SetPreviewLODDistance
struct FSetPreviewLODDistance
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnablePreviewLODDistance : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float PreviewLODDistance;  // 0x4 (0x4)
	float PreviewMaxDistance;  // 0x8 (0x8)


}; 
 
 // Function Niagara.NiagaraComponent.SetRandomSeedOffset
struct FSetRandomSeedOffset
{
	int32_t NewRandomSeedOffset;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraComponent.SetSeekDelta
struct FSetSeekDelta
{
	float InSeekDelta;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraComponent.SetSimCache
struct FSetSimCache
{
	struct UNiagaraSimCache* SimCache;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bResetSystem : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
struct FFillVolumeTexture
{
	struct UNiagaraComponent* Component;  // 0x0 (0x0)
	struct UVolumeTexture* Dest;  // 0x8 (0x8)
	int32_t AttributeIndex;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool ReturnValue : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function Niagara.NiagaraComponent.SetSystemFixedBounds
struct FSetSystemFixedBounds
{
	struct FBox LocalBounds;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraComponent.SetTickBehavior
struct FSetTickBehavior
{
	uint8_t NewTickBehavior;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraComponent.SetVariableBool
struct FSetVariableBool
{
	struct FName InVariableName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool InValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function Niagara.NiagaraComponent.SetVariableInt
struct FSetVariableInt
{
	struct FName InVariableName;  // 0x0 (0x0)
	int32_t InValue;  // 0x8 (0x8)


}; 
 
 // Function Niagara.NiagaraComponent.SetVariableLinearColor
struct FSetVariableLinearColor
{
	struct FName InVariableName;  // 0x0 (0x0)
	struct FLinearColor InValue;  // 0x8 (0x8)


}; 
 
 // Function Niagara.NiagaraComponent.SetVariableMaterial
struct FSetVariableMaterial
{
	struct FName InVariableName;  // 0x0 (0x0)
	struct UMaterialInterface* Object;  // 0x8 (0x8)


}; 
 
 // Function Niagara.NiagaraComponent.SetVariableMatrix
struct FSetVariableMatrix
{
	struct FName InVariableName;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FMatrix InValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraComponent.SetVariablePosition
struct FSetVariablePosition
{
	struct FName InVariableName;  // 0x0 (0x0)
	struct FVector InValue;  // 0x8 (0x8)


}; 
 
 // Function Niagara.NiagaraComponent.SetVariableQuat
struct FSetVariableQuat
{
	struct FName InVariableName;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat InValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraComponent.SetVariableStaticMesh
struct FSetVariableStaticMesh
{
	struct FName InVariableName;  // 0x0 (0x0)
	struct UStaticMesh* InValue;  // 0x8 (0x8)


}; 
 
 // Function Niagara.NiagaraComponent.SetVariableTexture
struct FSetVariableTexture
{
	struct FName InVariableName;  // 0x0 (0x0)
	struct UTexture* Texture;  // 0x8 (0x8)


}; 
 
 // Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget
struct FSetVariableTextureRenderTarget
{
	struct FName InVariableName;  // 0x0 (0x0)
	struct UTextureRenderTarget* TextureRenderTarget;  // 0x8 (0x8)


}; 
 
 // Function Niagara.NiagaraSimCache.ReadVector2Attribute
struct FReadVector2Attribute
{
	struct TArray<struct FVector2D> OutValues;  // 0x0 (0x0)
	struct FName AttributeName;  // 0x10 (0x10)
	struct FName EmitterName;  // 0x18 (0x18)
	int32_t FrameIndex;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function Niagara.NiagaraComponent.SetVariableVec3
struct FSetVariableVec3
{
	struct FName InVariableName;  // 0x0 (0x0)
	struct FVector InValue;  // 0x8 (0x8)


}; 
 
 // Function Niagara.NiagaraComponent.SetVariableVec4
struct FSetVariableVec4
{
	struct FName InVariableName;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FVector4 InValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
struct FGetNiagaraArrayBool
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	struct TArray<bool> ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue
struct FGetNiagaraArrayBoolValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	int32_t Index;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool ReturnValue : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
struct FGetNiagaraArrayColor
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	struct TArray<struct FLinearColor> ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue
struct FGetNiagaraArrayColorValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	int32_t Index;  // 0x10 (0x10)
	struct FLinearColor ReturnValue;  // 0x14 (0x14)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue
struct FGetNiagaraArrayFloatValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	int32_t Index;  // 0x10 (0x10)
	float ReturnValue;  // 0x14 (0x14)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPosition
struct FGetNiagaraArrayPosition
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	struct TArray<struct FVector> ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPositionValue
struct FGetNiagaraArrayPositionValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	int32_t Index;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FVector ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue
struct FGetNiagaraArrayQuatValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	int32_t Index;  // 0x10 (0x10)
	char pad_20[12];  // 0x14 (0x14)
	struct FQuat ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayUInt8
struct FGetNiagaraArrayUInt8
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	struct TArray<int32_t> ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayUInt8Value
struct FGetNiagaraArrayUInt8Value
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	int32_t Index;  // 0x10 (0x10)
	int32_t ReturnValue;  // 0x14 (0x14)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
struct FGetNiagaraArrayVector
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	struct TArray<struct FVector> ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
struct FGetNiagaraArrayVector4
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	struct TArray<struct FVector4> ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue
struct FGetNiagaraArrayVectorValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	int32_t Index;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FVector ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function Niagara.NiagaraFunctionLibrary.SetComponentNiagaraGPURayTracedCollisionGroup
struct FSetComponentNiagaraGPURayTracedCollisionGroup
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UPrimitiveComponent* Primitive;  // 0x8 (0x8)
	int32_t CollisionGroup;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
struct FSetNiagaraArrayBool
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	struct TArray<bool> ArrayData;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue
struct FSetNiagaraArrayBoolValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	int32_t Index;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool Value : 1;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool bSizeToFit : 1;  // 0x15 (0x15)
	char pad_22[2];  // 0x16 (0x16)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
struct FSetNiagaraArrayColor
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	struct TArray<struct FLinearColor> ArrayData;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue
struct FSetNiagaraArrayColorValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	int32_t Index;  // 0x10 (0x10)
	struct FLinearColor Value;  // 0x14 (0x14)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool bSizeToFit : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
struct FSetNiagaraArrayFloat
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	struct TArray<float> ArrayData;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue
struct FSetNiagaraArrayFloatValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	int32_t Index;  // 0x10 (0x10)
	float Value;  // 0x14 (0x14)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bSizeToFit : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function Niagara.NiagaraSimCache.ReadFloatAttribute
struct FReadFloatAttribute
{
	struct TArray<float> OutValues;  // 0x0 (0x0)
	struct FName AttributeName;  // 0x10 (0x10)
	struct FName EmitterName;  // 0x18 (0x18)
	int32_t FrameIndex;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function Niagara.NiagaraFunctionLibrary.SetActorNiagaraGPURayTracedCollisionGroup
struct FSetActorNiagaraGPURayTracedCollisionGroup
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct AActor* Actor;  // 0x8 (0x8)
	int32_t CollisionGroup;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
struct FSetNiagaraArrayInt32
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	struct TArray<int32_t> ArrayData;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value
struct FSetNiagaraArrayInt32Value
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	int32_t Index;  // 0x10 (0x10)
	int32_t Value;  // 0x14 (0x14)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bSizeToFit : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
struct FSetNiagaraArrayQuat
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	struct TArray<struct FQuat> ArrayData;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
struct FGetIntParameter
{
	struct FString InVariableName;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue
struct FSetNiagaraArrayQuatValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	int32_t Index;  // 0x10 (0x10)
	char pad_20[12];  // 0x14 (0x14)
	struct FQuat Value;  // 0x20 (0x20)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool bSizeToFit : 1;  // 0x40 (0x40)
	char pad_65[15];  // 0x41 (0x41)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayUInt8
struct FSetNiagaraArrayUInt8
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	struct TArray<int32_t> ArrayData;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayUInt8Value
struct FSetNiagaraArrayUInt8Value
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	int32_t Index;  // 0x10 (0x10)
	int32_t Value;  // 0x14 (0x14)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bSizeToFit : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
struct FSetNiagaraArrayVector
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	struct TArray<struct FVector> ArrayData;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
struct FSetNiagaraArrayVector2D
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	struct TArray<struct FVector2D> ArrayData;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
struct FSetNiagaraArrayVector4
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	struct TArray<struct FVector4> ArrayData;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value
struct FSetNiagaraArrayVector4Value
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	int32_t Index;  // 0x10 (0x10)
	char pad_20[12];  // 0x14 (0x14)
	struct FVector4 Value;  // 0x20 (0x20)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool bSizeToFit : 1;  // 0x40 (0x40)
	char pad_65[15];  // 0x41 (0x41)


}; 
 
 // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue
struct FSetNiagaraArrayVectorValue
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FName OverrideName;  // 0x8 (0x8)
	int32_t Index;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FVector Value;  // 0x18 (0x18)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bSizeToFit : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
struct FReceiveParticleData
{
	struct TArray<struct FBasicParticleData> Data;  // 0x0 (0x0)
	struct UNiagaraSystem* NiagaraSystem;  // 0x10 (0x10)
	struct FVector SimulationPositionOffset;  // 0x18 (0x18)


}; 
 
 // Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
struct FGetVector4Parameter
{
	struct FString InVariableName;  // 0x0 (0x0)
	struct FVector4 ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
struct FFillRawTexture2D
{
	struct UNiagaraComponent* Component;  // 0x0 (0x0)
	struct UTextureRenderTarget2D* Dest;  // 0x8 (0x8)
	int32_t TilesX;  // 0x10 (0x10)
	int32_t TilesY;  // 0x14 (0x14)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
struct FFillTexture2D
{
	struct UNiagaraComponent* Component;  // 0x0 (0x0)
	struct UTextureRenderTarget2D* Dest;  // 0x8 (0x8)
	int32_t AttributeIndex;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool ReturnValue : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
struct FGetRawTextureSize
{
	struct UNiagaraComponent* Component;  // 0x0 (0x0)
	int32_t SizeX;  // 0x8 (0x8)
	int32_t SizeY;  // 0xC (0xC)
	int32_t SizeZ;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
struct FOverrideSystemUserVariableStaticMeshComponent
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FString OverrideName;  // 0x8 (0x8)
	struct UStaticMeshComponent* StaticMeshComponent;  // 0x18 (0x18)


}; 
 
 // Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
struct FGetTextureSize
{
	struct UNiagaraComponent* Component;  // 0x0 (0x0)
	int32_t SizeX;  // 0x8 (0x8)
	int32_t SizeY;  // 0xC (0xC)
	int32_t SizeZ;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
struct FFillRawVolumeTexture
{
	struct UNiagaraComponent* Component;  // 0x0 (0x0)
	struct UVolumeTexture* Dest;  // 0x8 (0x8)
	int32_t TilesX;  // 0x10 (0x10)
	int32_t TilesY;  // 0x14 (0x14)
	int32_t TileZ;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool ReturnValue : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)


}; 
 
 // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
struct FOverrideSystemUserVariableSkeletalMeshComponent
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FString OverrideName;  // 0x8 (0x8)
	struct USkeletalMeshComponent* SkeletalMeshComponent;  // 0x18 (0x18)


}; 
 
 // Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
struct FSetSkeletalMeshDataInterfaceSamplingRegions
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FString OverrideName;  // 0x8 (0x8)
	struct TArray<struct FName> SamplingRegions;  // 0x18 (0x18)


}; 
 
 // Function Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject
struct FSetTexture2DArrayObject
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FString OverrideName;  // 0x8 (0x8)
	struct UTexture2DArray* Texture;  // 0x18 (0x18)


}; 
 
 // Function Niagara.NiagaraFunctionLibrary.SetTextureObject
struct FSetTextureObject
{
	struct UNiagaraComponent* NiagaraSystem;  // 0x0 (0x0)
	struct FString OverrideName;  // 0x8 (0x8)
	struct UTexture* Texture;  // 0x18 (0x18)


}; 
 
 // Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
struct FGetColorParameter
{
	struct FString InVariableName;  // 0x0 (0x0)
	struct FLinearColor ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
struct FSpawnSystemAttached
{
	struct UNiagaraSystem* SystemTemplate;  // 0x0 (0x0)
	struct USceneComponent* AttachToComponent;  // 0x8 (0x8)
	struct FName AttachPointName;  // 0x10 (0x10)
	struct FVector Location;  // 0x18 (0x18)
	struct FRotator Rotation;  // 0x30 (0x30)
	enum class EAttachLocation LocationType;  // 0x48 (0x48)
	char pad_73_1 : 7;  // 0x49 (0x49)
	bool bAutoDestroy : 1;  // 0x49 (0x49)
	char pad_74_1 : 7;  // 0x4A (0x4A)
	bool bAutoActivate : 1;  // 0x4A (0x4A)
	uint8_t PoolingMethod;  // 0x4B (0x4B)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool bPreCullCheck : 1;  // 0x4C (0x4C)
	char pad_77[3];  // 0x4D (0x4D)
	struct UNiagaraComponent* ReturnValue;  // 0x50 (0x50)


}; 
 
 // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocationWithParams
struct FSpawnSystemAtLocationWithParams
{
	struct FFXSystemSpawnParameters SpawnParams;  // 0x0 (0x0)
	struct UNiagaraComponent* ReturnValue;  // 0x78 (0x78)


}; 
 
 // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttachedWithParams
struct FSpawnSystemAttachedWithParams
{
	struct FFXSystemSpawnParameters SpawnParams;  // 0x0 (0x0)
	struct UNiagaraComponent* ReturnValue;  // 0x78 (0x78)


}; 
 
 // Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
struct FGetQuatParameter
{
	struct FString InVariableName;  // 0x0 (0x0)
	struct FQuat ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
struct FGetVectorParameter
{
	struct FString InVariableName;  // 0x0 (0x0)
	struct FVector ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
struct FSetFloatParameter
{
	struct FString InVariableName;  // 0x0 (0x0)
	float InValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
struct FSetVector2DParameter
{
	struct FString InVariableName;  // 0x0 (0x0)
	struct FVector2D InValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
struct FSetVector4Parameter
{
	struct FString InVariableName;  // 0x0 (0x0)
	struct FVector4 InValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
struct FSetVectorParameter
{
	struct FString InVariableName;  // 0x0 (0x0)
	struct FVector InValue;  // 0x10 (0x10)


}; 
 
 // Function Niagara.NiagaraBaselineController.GetSystem
struct FGetSystem
{
	struct UNiagaraSystem* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraBaselineController.OnEndTest
struct FOnEndTest
{
	struct FNiagaraPerfBaselineStats Stats;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraPreviewBase.SetLabelText
struct FSetLabelText
{
	struct FText InXAxisText;  // 0x0 (0x0)
	struct FText InYAxisText;  // 0x18 (0x18)


}; 
 
 // Function Niagara.NiagaraPreviewBase.SetSystem
struct FSetSystem
{
	struct UNiagaraSystem* InSystem;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraSimCache.GetAttributeCaptureMode
struct FGetAttributeCaptureMode
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraSimCache.GetEmitterName
struct FGetEmitterName
{
	int32_t EmitterIndex;  // 0x0 (0x0)
	struct FName ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function Niagara.NiagaraSimCache.GetEmitterNames
struct FGetEmitterNames
{
	struct TArray<struct FName> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraSimCache.GetNumEmitters
struct FGetNumEmitters
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraSimCache.GetNumFrames
struct FGetNumFrames
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraSimCache.GetStartSeconds
struct FGetStartSeconds
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraSimCache.IsCacheValid
struct FIsCacheValid
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraSimCache.IsEmpty
struct FIsEmpty
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function Niagara.NiagaraSimCache.ReadIntAttribute
struct FReadIntAttribute
{
	struct TArray<int32_t> OutValues;  // 0x0 (0x0)
	struct FName AttributeName;  // 0x10 (0x10)
	struct FName EmitterName;  // 0x18 (0x18)
	int32_t FrameIndex;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function Niagara.NiagaraSimCache.ReadPositionAttribute
struct FReadPositionAttribute
{
	struct TArray<struct FVector> OutValues;  // 0x0 (0x0)
	struct FName AttributeName;  // 0x10 (0x10)
	struct FName EmitterName;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bLocalSpaceToWorld : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	int32_t FrameIndex;  // 0x24 (0x24)


}; 
 
 // Function Niagara.NiagaraSimCache.ReadQuatAttribute
struct FReadQuatAttribute
{
	struct TArray<struct FQuat> OutValues;  // 0x0 (0x0)
	struct FName AttributeName;  // 0x10 (0x10)
	struct FName EmitterName;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bLocalSpaceToWorld : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	int32_t FrameIndex;  // 0x24 (0x24)


}; 
 
 // Function Niagara.NiagaraSimCache.ReadQuatAttributeWithRebase
struct FReadQuatAttributeWithRebase
{
	struct TArray<struct FQuat> OutValues;  // 0x0 (0x0)
	struct FQuat Quat;  // 0x10 (0x10)
	struct FName AttributeName;  // 0x30 (0x30)
	struct FName EmitterName;  // 0x38 (0x38)
	int32_t FrameIndex;  // 0x40 (0x40)
	char pad_68[12];  // 0x44 (0x44)


}; 
 
 // Function Niagara.NiagaraSimCache.ReadVector4Attribute
struct FReadVector4Attribute
{
	struct TArray<struct FVector4> OutValues;  // 0x0 (0x0)
	struct FName AttributeName;  // 0x10 (0x10)
	struct FName EmitterName;  // 0x18 (0x18)
	int32_t FrameIndex;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function Niagara.NiagaraSimCache.ReadVectorAttribute
struct FReadVectorAttribute
{
	struct TArray<struct FVector> OutValues;  // 0x0 (0x0)
	struct FName AttributeName;  // 0x10 (0x10)
	struct FName EmitterName;  // 0x18 (0x18)
	int32_t FrameIndex;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function Niagara.NiagaraSimCacheFunctionLibrary.CaptureNiagaraSimCacheImmediate
struct FCaptureNiagaraSimCacheImmediate
{
	struct UNiagaraSimCache* SimCache;  // 0x0 (0x0)
	struct FNiagaraSimCacheCreateParameters CreateParameters;  // 0x8 (0x8)
	struct UNiagaraComponent* NiagaraComponent;  // 0x40 (0x40)
	struct UNiagaraSimCache* OutSimCache;  // 0x48 (0x48)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool bAdvanceSimulation : 1;  // 0x50 (0x50)
	char pad_81[3];  // 0x51 (0x51)
	float AdvanceDeltaTime;  // 0x54 (0x54)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool ReturnValue : 1;  // 0x58 (0x58)
	char pad_89[7];  // 0x59 (0x59)


}; 
 
 // Function Niagara.NiagaraSimCacheFunctionLibrary.CreateNiagaraSimCache
struct FCreateNiagaraSimCache
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UNiagaraSimCache* ReturnValue;  // 0x8 (0x8)


}; 
 
 