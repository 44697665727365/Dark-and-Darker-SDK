#pragma once 
#include <BP_LightProjectile_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_LightProjectile.BP_LightProjectile_C
// Size: 0x850(Inherited: 0x6D0)
struct ABP_LightProjectile_C : ABP_ProjectileActor_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	struct USphereComponent* DetectingSphere;  // 0x6D8 (0x6D8)
	struct UPointLightComponent* PointLight;  // 0x6E0 (0x6E0)
	struct UNiagaraComponent* LightEffect;  // 0x6E8 (0x6E8)
	struct TArray<struct AActor*> DetectedActors;  // 0x6F0 (0x6F0)
	struct FGameplayEffectQuery GEQuery;  // 0x700 (0x700)


	void ReceiveBeginPlay(); // Function BP_LightProjectile.BP_LightProjectile_C.ReceiveBeginPlay
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_LightProjectile.BP_LightProjectile_C.ReceiveEndPlay
	void BndEvt__BP_LightProjectile_DetectingSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_LightProjectile.BP_LightProjectile_C.BndEvt__BP_LightProjectile_DetectingSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__BP_LightProjectile_DetectingSphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_LightProjectile.BP_LightProjectile_C.BndEvt__BP_LightProjectile_DetectingSphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
	void ExecuteUbergraph_BP_LightProjectile(int32_t EntryPoint); // Function BP_LightProjectile.BP_LightProjectile_C.ExecuteUbergraph_BP_LightProjectile
}; 
 
 


