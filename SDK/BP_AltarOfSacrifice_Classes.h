#pragma once 
#include <BP_AltarOfSacrifice_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_AltarOfSacrifice.BP_AltarOfSacrifice_C
// Size: 0x5A0(Inherited: 0x4B8)
struct ABP_AltarOfSacrifice_C : ABP_StatueBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4B8 (0x4B8)
	struct UArrowComponent* EffectSpawnLocation;  // 0x4C0 (0x4C0)
	struct UNiagaraComponent* FXS_Resurrection_Altar;  // 0x4C8 (0x4C8)
	struct UArrowComponent* PlayerCharacterSpawnLocation;  // 0x4D0 (0x4D0)
	struct USphereComponent* Sphere;  // 0x4D8 (0x4D8)
	struct UPointLightComponent* PointLight;  // 0x4E0 (0x4E0)
	struct UStaticMeshComponent* SM_Altar_01;  // 0x4E8 (0x4E8)
	float Timeline_1______0_D55664FF4AEF2E069CDFDFA8B6E4ABFE;  // 0x4F0 (0x4F0)
	enum class ETimelineDirection Timeline_1__Direction_D55664FF4AEF2E069CDFDFA8B6E4ABFE;  // 0x4F4 (0x4F4)
	char pad_1269[3];  // 0x4F5 (0x4F5)
	struct UTimelineComponent* Timeline_2;  // 0x4F8 (0x4F8)
	float Timeline_0______0_8F53DD174018071EBC18BF80C8D1B8D4;  // 0x500 (0x500)
	enum class ETimelineDirection Timeline_0__Direction_8F53DD174018071EBC18BF80C8D1B8D4;  // 0x504 (0x504)
	char pad_1285[3];  // 0x505 (0x505)
	struct UTimelineComponent* Timeline_1;  // 0x508 (0x508)
	char pad_1296_1 : 7;  // 0x510 (0x510)
	bool bIsOverlapped : 1;  // 0x510 (0x510)
	char pad_1297[7];  // 0x511 (0x511)
	double reactivationTime;  // 0x518 (0x518)
	char pad_1312_1 : 7;  // 0x520 (0x520)
	bool InteractCancel : 1;  // 0x520 (0x520)
	char pad_1313[7];  // 0x521 (0x521)
	struct FText SystemMessage0;  // 0x528 (0x528)
	struct FText SystemMessage1;  // 0x540 (0x540)
	struct FText SystemMessage2;  // 0x558 (0x558)
	char pad_1392_1 : 7;  // 0x570 (0x570)
	bool EffectResurrectionOn : 1;  // 0x570 (0x570)
	char pad_1393[7];  // 0x571 (0x571)
	struct AActor* Interacter;  // 0x578 (0x578)
	double NeededHealth;  // 0x580 (0x580)
	double EffectMaxTime;  // 0x588 (0x588)
	struct FTimerHandle EffectResurrectionOffTimerHandle;  // 0x590 (0x590)
	struct UNiagaraComponent* EffectResurrection;  // 0x598 (0x598)


	void BroadcastSystemMessage(struct ABP_PlayerCharacter_C* Interacter, struct FText SystemMessage); // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.BroadcastSystemMessage
	void IsEnoughHealth(struct ABP_PlayerCharacter_C* Interacter, bool& Result); // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.IsEnoughHealth
	void OnRep_EffectResurrectionOn(); // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.OnRep_EffectResurrectionOn
	void Timeline_0__FinishedFunc(); // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.Timeline_0__UpdateFunc
	void Timeline_1__FinishedFunc(); // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.Timeline_1__UpdateFunc
	void BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.InteractSucceed
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.GameplayTagUpdated
	void InteractStarted(struct AActor* Interacter, struct FGameplayTag EventTag); // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.InteractStarted
	void InteractFailed(struct AActor* Interacter, struct FGameplayTag EventTag); // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.InteractFailed
	void EffectResurrectionOff(); // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.EffectResurrectionOff
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.ReceiveEndPlay
	void ExecuteUbergraph_BP_AltarOfSacrifice(int32_t EntryPoint); // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.ExecuteUbergraph_BP_AltarOfSacrifice
}; 
 
 


