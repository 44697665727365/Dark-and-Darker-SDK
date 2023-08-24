#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct NiagaraShader.NiagaraShaderScriptParametersMetadata
struct FNiagaraShaderScriptParametersMetadata
{
	struct TArray<struct FNiagaraDataInterfaceGPUParamInfo> DataInterfaceParamInfo;  // 0x0 (0x0)
	struct TArray<struct FString> LooseMetadataNames;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bExternalConstantsInterpolated : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct TArray<struct FNiagaraShaderScriptExternalConstant> ExternalConstants;  // 0x28 (0x28)
	char pad_56[32];  // 0x38 (0x38)


}; 
 
 // ScriptStruct NiagaraShader.SimulationStageMetaData
struct FSimulationStageMetaData
{
	struct FName SimulationStageName;  // 0x0 (0x0)
	struct FName EnabledBinding;  // 0x8 (0x8)
	struct FName ElementCountXBinding;  // 0x10 (0x10)
	struct FName ElementCountYBinding;  // 0x18 (0x18)
	struct FName ElementCountZBinding;  // 0x20 (0x20)
	struct FName IterationSource;  // 0x28 (0x28)
	uint8_t ExecuteBehavior;  // 0x30 (0x30)
	char pad_49[3];  // 0x31 (0x31)
	char bWritesParticles : 1;  // 0x34 (0x34)
	char bPartialParticleUpdate : 1;  // 0x34 (0x34)
	char bParticleIterationStateEnabled : 1;  // 0x34 (0x34)
	char bOverrideElementCount : 1;  // 0x34 (0x34)
	char pad_52_1 : 4;  // 0x34 (0x34)
	char pad_53[4];  // 0x35 (0x35)
	struct FName ParticleIterationStateBinding;  // 0x38 (0x38)
	char pad_64[4];  // 0x40 (0x40)
	struct FIntPoint ParticleIterationStateRange;  // 0x44 (0x44)
	char pad_76[4];  // 0x4C (0x4C)
	struct TArray<struct FName> OutputDestinations;  // 0x50 (0x50)
	struct TArray<struct FName> InputDataInterfaces;  // 0x60 (0x60)
	int32_t NumIterations;  // 0x70 (0x70)
	struct FName NumIterationsBinding;  // 0x74 (0x74)
	uint8_t GpuDispatchType;  // 0x7C (0x7C)
	char pad_125[3];  // 0x7D (0x7D)
	struct FIntVector GpuDispatchNumThreads;  // 0x80 (0x80)
	char pad_140[4];  // 0x8C (0x8C)


}; 
 
 // ScriptStruct NiagaraShader.NiagaraShaderScriptExternalConstant
struct FNiagaraShaderScriptExternalConstant
{
	struct FName Type;  // 0x0 (0x0)
	struct FString Name;  // 0x8 (0x8)


}; 
 
 // ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
struct FNiagaraDataInterfaceGPUParamInfo
{
	struct FString DataInterfaceHLSLSymbol;  // 0x0 (0x0)
	struct FString DIClassName;  // 0x10 (0x10)
	uint32_t ShaderParametersOffset;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;  // 0x28 (0x28)


}; 
 
 // ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
struct FNiagaraDataInterfaceGeneratedFunction
{
	char pad_0[40];  // 0x0 (0x0)


}; 
 
 // ScriptStruct NiagaraShader.NiagaraCompileEvent
struct FNiagaraCompileEvent
{
	uint8_t Severity;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FString Message;  // 0x8 (0x8)
	struct FString ShortDescription;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bDismissable : 1;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	struct FGuid NodeGuid;  // 0x2C (0x2C)
	struct FGuid PinGuid;  // 0x3C (0x3C)
	char pad_76[4];  // 0x4C (0x4C)
	struct TArray<struct FGuid> StackGuids;  // 0x50 (0x50)
	uint8_t Source;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)


}; 
 
 