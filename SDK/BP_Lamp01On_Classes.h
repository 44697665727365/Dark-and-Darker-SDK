#pragma once 
#include <BP_Lamp01On_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Lamp01On.BP_Lamp01On_C
// Size: 0x538(Inherited: 0x4F0)
struct ABP_Lamp01On_C : ABP_LightSourceBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4F0 (0x4F0)
	struct UNiagaraComponent* FXS_CandleFlame;  // 0x4F8 (0x4F8)
	struct UStaticMeshComponent* SM_Cave_Support_1X_2;  // 0x500 (0x500)
	struct UStaticMeshComponent* Roaster;  // 0x508 (0x508)
	struct UParticleSystemComponent* ParticleSystem;  // 0x510 (0x510)
	float Timeline_1______0_17EF61FF49290F57E7179D867FDF8ACA;  // 0x518 (0x518)
	enum class ETimelineDirection Timeline_1__Direction_17EF61FF49290F57E7179D867FDF8ACA;  // 0x51C (0x51C)
	char pad_1309[3];  // 0x51D (0x51D)
	struct UTimelineComponent* Timeline_2;  // 0x520 (0x520)
	float _____0______0_DD6B46624DDBB59E0BFB44B6C69CF3E3;  // 0x528 (0x528)
	enum class ETimelineDirection _____0__Direction_DD6B46624DDBB59E0BFB44B6C69CF3E3;  // 0x52C (0x52C)
	char pad_1325[3];  // 0x52D (0x52D)
	struct UTimelineComponent* _1;  // 0x530 (0x530)


	void (); // Function BP_Lamp01On.BP_Lamp01On_C.
	void (); // Function BP_Lamp01On.BP_Lamp01On_C.
	void Timeline_1__FinishedFunc(); // Function BP_Lamp01On.BP_Lamp01On_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function BP_Lamp01On.BP_Lamp01On_C.Timeline_1__UpdateFunc
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_Lamp01On.BP_Lamp01On_C.InteractSucceed
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_Lamp01On.BP_Lamp01On_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_Lamp01On(int32_t EntryPoint); // Function BP_Lamp01On.BP_Lamp01On_C.ExecuteUbergraph_BP_Lamp01On
}; 
 
 


