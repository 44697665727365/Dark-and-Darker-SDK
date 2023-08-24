#pragma once 
#include <BP_DrinkPotionActor_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_DrinkPotionActor.BP_DrinkPotionActor_C
// Size: 0x5E0(Inherited: 0x580)
struct ABP_DrinkPotionActor_C : ABP_DCItemActor_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct UMaterialBillboardComponent* FakeCaustics;  // 0x588 (0x588)
	struct UMaterialBillboardComponent* Glow;  // 0x590 (0x590)
	struct UMaterialInstanceDynamic* LiquidMaterialInstance;  // 0x598 (0x598)
	double RemainDrinkingDuration;  // 0x5A0 (0x5A0)
	double CurrentLiquidAmount;  // 0x5A8 (0x5A8)
	double ReducingAmount;  // 0x5B0 (0x5B0)
	double InitialAmount;  // 0x5B8 (0x5B8)
	double Initial Drinking Duration;  // 0x5C0 (0x5C0)
	struct UMaterialInstanceDynamic* GlowBillboardMaterialInstance;  // 0x5C8 (0x5C8)
	struct UMaterialInterface* CorkMaterial;  // 0x5D0 (0x5D0)
	struct FName Height Control Variable Name;  // 0x5D8 (0x5D8)


	void Set Height Parameter(double New Height, struct UMaterialInstanceDynamic* Material Instance); // Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.Set Height Parameter
	void OnRep_CurrentLiquidAmount(); // Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.OnRep_CurrentLiquidAmount
	void Calculate Liquid Amount(); // Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.Calculate Liquid Amount
	void ReceiveTick(float DeltaSeconds); // Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.ReceiveTick
	void ReceiveBeginPlay(); // Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.ReceiveBeginPlay
	void SetDrinkingDuration(double Duration); // Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.SetDrinkingDuration
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_DrinkPotionActor(int32_t EntryPoint); // Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.ExecuteUbergraph_BP_DrinkPotionActor
}; 
 
 


