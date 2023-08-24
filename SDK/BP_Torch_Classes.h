#pragma once 
#include <BP_Torch_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Torch.BP_Torch_C
// Size: 0x5E9(Inherited: 0x580)
struct ABP_Torch_C : ABP_DCItemActor_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct UPointLightComponent* PointLightFire;  // 0x588 (0x588)
	struct UNiagaraComponent* NS_Util_Torch;  // 0x590 (0x590)
	struct UParticleSystemComponent* ParticleSystem_DEP(NOT VISIBLE);  // 0x598 (0x598)
	struct UPointLightComponent* PointLight;  // 0x5A0 (0x5A0)
	float Timeline_1______0_7F21B36F49084E2FFFDF24934E6F84E3;  // 0x5A8 (0x5A8)
	enum class ETimelineDirection Timeline_1__Direction_7F21B36F49084E2FFFDF24934E6F84E3;  // 0x5AC (0x5AC)
	char pad_1453[3];  // 0x5AD (0x5AD)
	struct UTimelineComponent* Timeline_2;  // 0x5B0 (0x5B0)
	float Timeline_0______0_6145DD0448B5200434111FAC5AB7DB9E;  // 0x5B8 (0x5B8)
	enum class ETimelineDirection Timeline_0__Direction_6145DD0448B5200434111FAC5AB7DB9E;  // 0x5BC (0x5BC)
	char pad_1469[3];  // 0x5BD (0x5BD)
	struct UTimelineComponent* Timeline_1;  // 0x5C0 (0x5C0)
	float Turnoff0______0_E26990AB47A70FBFA31C6995236988FE;  // 0x5C8 (0x5C8)
	enum class ETimelineDirection Turnoff0__Direction_E26990AB47A70FBFA31C6995236988FE;  // 0x5CC (0x5CC)
	char pad_1485[3];  // 0x5CD (0x5CD)
	struct UTimelineComponent* Turnoff0;  // 0x5D0 (0x5D0)
	float Turnon0______0_2833AFE640BF8DAF2D12378F02141537;  // 0x5D8 (0x5D8)
	enum class ETimelineDirection Turnon0__Direction_2833AFE640BF8DAF2D12378F02141537;  // 0x5DC (0x5DC)
	char pad_1501[3];  // 0x5DD (0x5DD)
	struct UTimelineComponent* Turnon0;  // 0x5E0 (0x5E0)
	char pad_1512_1 : 7;  // 0x5E8 (0x5E8)
	bool bAttachedSheathSocket : 1;  // 0x5E8 (0x5E8)


	void Turnon0__FinishedFunc(); // Function BP_Torch.BP_Torch_C.Turnon0__FinishedFunc
	void Turnon0__UpdateFunc(); // Function BP_Torch.BP_Torch_C.Turnon0__UpdateFunc
	void Turnoff0__FinishedFunc(); // Function BP_Torch.BP_Torch_C.Turnoff0__FinishedFunc
	void Turnoff0__UpdateFunc(); // Function BP_Torch.BP_Torch_C.Turnoff0__UpdateFunc
	void Timeline_0__FinishedFunc(); // Function BP_Torch.BP_Torch_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_Torch.BP_Torch_C.Timeline_0__UpdateFunc
	void Timeline_1__FinishedFunc(); // Function BP_Torch.BP_Torch_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function BP_Torch.BP_Torch_C.Timeline_1__UpdateFunc
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_Torch.BP_Torch_C.GameplayTagUpdated
	void OnAttachedSheathSocket(); // Function BP_Torch.BP_Torch_C.OnAttachedSheathSocket
	void ExecuteUbergraph_BP_Torch(int32_t EntryPoint); // Function BP_Torch.BP_Torch_C.ExecuteUbergraph_BP_Torch
}; 
 
 


