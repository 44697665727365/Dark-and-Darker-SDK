#pragma once 
#include <BP_OilLantern_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_OilLantern.BP_OilLantern_C
// Size: 0x5F0(Inherited: 0x580)
struct ABP_OilLantern_C : ABP_DCItemActor_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct UPointLightComponent* PointLight;  // 0x588 (0x588)
	struct UNiagaraComponent* FXS_Fire_OilLantern_Util;  // 0x590 (0x590)
	struct USpotLightComponent* SpotLight;  // 0x598 (0x598)
	struct UNiagaraComponent* NS_Util_Torch;  // 0x5A0 (0x5A0)
	struct UParticleSystemComponent* ParticleSystem_DEP(NOT VISIBLE);  // 0x5A8 (0x5A8)
	float SpotLight_On_NewTrack_0_9138A06D47E75C45F26A53BA154505DD;  // 0x5B0 (0x5B0)
	enum class ETimelineDirection SpotLight_On__Direction_9138A06D47E75C45F26A53BA154505DD;  // 0x5B4 (0x5B4)
	char pad_1461[3];  // 0x5B5 (0x5B5)
	struct UTimelineComponent* SpotLight_On;  // 0x5B8 (0x5B8)
	float Turnoff1______0_4C171A2240F96018970E5A87042A405D;  // 0x5C0 (0x5C0)
	enum class ETimelineDirection Turnoff1__Direction_4C171A2240F96018970E5A87042A405D;  // 0x5C4 (0x5C4)
	char pad_1477[3];  // 0x5C5 (0x5C5)
	struct UTimelineComponent* Turnoff1;  // 0x5C8 (0x5C8)
	float Turnon1______0_AE10ABAA43FB60B092B1249A5A75277C;  // 0x5D0 (0x5D0)
	enum class ETimelineDirection Turnon1__Direction_AE10ABAA43FB60B092B1249A5A75277C;  // 0x5D4 (0x5D4)
	char pad_1493[3];  // 0x5D5 (0x5D5)
	struct UTimelineComponent* Turnon1;  // 0x5D8 (0x5D8)
	char pad_1504_1 : 7;  // 0x5E0 (0x5E0)
	bool bAttachedSheathSocket : 1;  // 0x5E0 (0x5E0)
	char pad_1505[7];  // 0x5E1 (0x5E1)
	double SpotLight_Time;  // 0x5E8 (0x5E8)


	void Turnoff1__FinishedFunc(); // Function BP_OilLantern.BP_OilLantern_C.Turnoff1__FinishedFunc
	void Turnoff1__UpdateFunc(); // Function BP_OilLantern.BP_OilLantern_C.Turnoff1__UpdateFunc
	void Turnon1__FinishedFunc(); // Function BP_OilLantern.BP_OilLantern_C.Turnon1__FinishedFunc
	void Turnon1__UpdateFunc(); // Function BP_OilLantern.BP_OilLantern_C.Turnon1__UpdateFunc
	void SpotLight_On__FinishedFunc(); // Function BP_OilLantern.BP_OilLantern_C.SpotLight_On__FinishedFunc
	void SpotLight_On__UpdateFunc(); // Function BP_OilLantern.BP_OilLantern_C.SpotLight_On__UpdateFunc
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_OilLantern.BP_OilLantern_C.GameplayTagUpdated
	void OnAttachedSheathSocket(); // Function BP_OilLantern.BP_OilLantern_C.OnAttachedSheathSocket
	void ExecuteUbergraph_BP_OilLantern(int32_t EntryPoint); // Function BP_OilLantern.BP_OilLantern_C.ExecuteUbergraph_BP_OilLantern
}; 
 
 


