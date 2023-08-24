#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct NiagaraAnimNotifies.CurveParameterPair
struct FCurveParameterPair
{
	struct FName AnimCurveName;  // 0x0 (0x0)
	struct FName UserVariableName;  // 0x8 (0x8)


}; 
 
 // Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
struct FGetSpawnedEffect
{
	struct UFXSystemComponent* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress
struct FGetNotifyProgress
{
	struct UMeshComponent* MeshComp;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 