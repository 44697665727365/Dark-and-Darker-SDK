#pragma once 
#include <NiagaraAnimNotifies_Structs.h>
 
 
 
// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
// Size: 0x78(Inherited: 0x30)
struct UAnimNotifyState_TimedNiagaraEffect : UAnimNotifyState
{
	struct UNiagaraSystem* Template;  // 0x30 (0x30)
	struct FName SocketName;  // 0x38 (0x38)
	struct FVector LocationOffset;  // 0x40 (0x40)
	struct FRotator RotationOffset;  // 0x58 (0x58)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool bDestroyAtEnd : 1;  // 0x70 (0x70)
	char pad_113[7];  // 0x71 (0x71)


	struct UFXSystemComponent* GetSpawnedEffect(struct UMeshComponent* MeshComp); // Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetSpawnedEffect
}; 
 
 


// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
// Size: 0xE8(Inherited: 0x78)
struct UAnimNotifyState_TimedNiagaraEffectAdvanced : UAnimNotifyState_TimedNiagaraEffect
{
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool bEnableNormalizedNotifyProgress : 1;  // 0x78 (0x78)
	char pad_121[3];  // 0x79 (0x79)
	struct FName NotifyProgressUserParameter;  // 0x7C (0x7C)
	char pad_132[4];  // 0x84 (0x84)
	struct TArray<struct FCurveParameterPair> AnimCurves;  // 0x88 (0x88)
	char pad_152[80];  // 0x98 (0x98)


	float GetNotifyProgress(struct UMeshComponent* MeshComp); // Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress
}; 
 
 


// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
// Size: 0xD0(Inherited: 0x38)
struct UAnimNotify_PlayNiagaraEffect : UAnimNotify
{
	struct UNiagaraSystem* Template;  // 0x38 (0x38)
	struct FVector LocationOffset;  // 0x40 (0x40)
	struct FRotator RotationOffset;  // 0x58 (0x58)
	struct FVector Scale;  // 0x70 (0x70)
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool bAbsoluteScale : 1;  // 0x88 (0x88)
	char pad_137[55];  // 0x89 (0x89)
	char Attached : 1;  // 0xC0 (0xC0)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	char pad_193[4];  // 0xC1 (0xC1)
	struct FName SocketName;  // 0xC4 (0xC4)
	char pad_204[4];  // 0xCC (0xCC)


	struct UFXSystemComponent* GetSpawnedEffect(); // Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
}; 
 
 


