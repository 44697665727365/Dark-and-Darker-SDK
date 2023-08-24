#pragma once 
#include <BP_SpiderWeb_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_SpiderWeb.BP_SpiderWeb_C
// Size: 0x628(Inherited: 0x554)
struct ABP_SpiderWeb_C : ABP_TrapBase_C
{
	char pad_1364[4];  // 0x554 (0x554)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct UStaticMeshComponent* WebMesh;  // 0x560 (0x560)
	struct UNiagaraComponent* Niagara;  // 0x568 (0x568)
	struct UBP_DCHitBox_C* BP_DCHitBox;  // 0x570 (0x570)
	char pad_1400_1 : 7;  // 0x578 (0x578)
	bool OnDisableDestroyContact : 1;  // 0x578 (0x578)
	char pad_1401_1 : 7;  // 0x579 (0x579)
	bool OnContactCountDestroy : 1;  // 0x579 (0x579)
	char pad_1402[2];  // 0x57A (0x57A)
	int32_t MaxContactCount;  // 0x57C (0x57C)
	char pad_1408_1 : 7;  // 0x580 (0x580)
	bool OnRecovery : 1;  // 0x580 (0x580)
	char pad_1409[7];  // 0x581 (0x581)
	double RecoveryTime;  // 0x588 (0x588)
	struct UMaterialInterface* MaterialOnDestroyRect;  // 0x590 (0x590)
	struct UMaterialInterface* MaterialRect;  // 0x598 (0x598)
	double ScaleBoost;  // 0x5A0 (0x5A0)
	double GizmoInfluence;  // 0x5A8 (0x5A8)
	struct UStaticMesh* StaticMesh;  // 0x5B0 (0x5B0)
	struct FVector TopLeft;  // 0x5B8 (0x5B8)
	struct FVector TopRight;  // 0x5D0 (0x5D0)
	struct FVector BotRight;  // 0x5E8 (0x5E8)
	struct FVector BotLeft;  // 0x600 (0x600)
	struct UMaterialInstanceDynamic* MID_Deactivate;  // 0x618 (0x618)
	struct UMaterialInstanceDynamic* MID_Activate;  // 0x620 (0x620)


	void UpdateSpiderWebMaterial(struct UMaterialInstanceDynamic* InDynamicMaterialInstance); // Function BP_SpiderWeb.BP_SpiderWeb_C.UpdateSpiderWebMaterial
	void ExchangeYZ(struct FVector In, struct FVector& Out); // Function BP_SpiderWeb.BP_SpiderWeb_C.ExchangeYZ
	void SetPointPosition(struct UMaterialInstanceDynamic*& Material Instance, struct FVector TopLeft, struct FVector TopRight, struct FVector BotLeft, struct FVector BotRight, double Influence); // Function BP_SpiderWeb.BP_SpiderWeb_C.SetPointPosition
	void GetRecoveryTime(double& Result); // Function BP_SpiderWeb.BP_SpiderWeb_C.GetRecoveryTime
	void IsRecovery(bool& Result); // Function BP_SpiderWeb.BP_SpiderWeb_C.IsRecovery
	void IsContactCountDestroy(bool& Result); // Function BP_SpiderWeb.BP_SpiderWeb_C.IsContactCountDestroy
	void IsDisableDestroyContact(bool& Result); // Function BP_SpiderWeb.BP_SpiderWeb_C.IsDisableDestroyContact
	void GetDestroyCount(int32_t& Result); // Function BP_SpiderWeb.BP_SpiderWeb_C.GetDestroyCount
	void UserConstructionScript(); // Function BP_SpiderWeb.BP_SpiderWeb_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_SpiderWeb.BP_SpiderWeb_C.ReceiveBeginPlay
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_SpiderWeb.BP_SpiderWeb_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_SpiderWeb(int32_t EntryPoint); // Function BP_SpiderWeb.BP_SpiderWeb_C.ExecuteUbergraph_BP_SpiderWeb
}; 
 
 


