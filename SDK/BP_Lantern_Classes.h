#pragma once 
#include <BP_Lantern_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Lantern.BP_Lantern_C
// Size: 0x5E9(Inherited: 0x580)
struct ABP_Lantern_C : ABP_DCItemActor_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct UNiagaraComponent* FXS_Fire_OilLantern_Util;  // 0x588 (0x588)
	struct UPointLightComponent* PointLightFire;  // 0x590 (0x590)
	struct UPointLightComponent* PointLight;  // 0x598 (0x598)
	struct UNiagaraComponent* NS_Util_Torch;  // 0x5A0 (0x5A0)
	float Timeline_2______0_BDFC69AA497AA30B34BE3695DB5B5386;  // 0x5A8 (0x5A8)
	enum class ETimelineDirection Timeline_2__Direction_BDFC69AA497AA30B34BE3695DB5B5386;  // 0x7FF7D35967D0 (0x1705D6E0080) (0x7FF7D35967D0 (0x1705D6E0080))
	char pad_1453[3];  // 0x5AD (0x5AD)
	struct UTimelineComponent* Timeline_3;  // 0x5B0 (0x5B0)
	float Timeline_1______0_3B8649B848CA3FD6C368E6925311FEA3;  // 0x5B8 (0x5B8)
	enum class ETimelineDirection Timeline_1__Direction_3B8649B848CA3FD6C368E6925311FEA3;  // 0x5BC (0x5BC)
	char pad_1469[3];  // 0x5BD (0x5BD)
	struct UTimelineComponent* Timeline_2;  // 0x5C0 (0x5C0)
	float Timeline_0______0_7A2EB05349A7DFBBEF5C9486C78F703E;  // 0x5C8 (0x5C8)
	enum class ETimelineDirection Timeline_0__Direction_7A2EB05349A7DFBBEF5C9486C78F703E;  // 0x7FF (0x7FF7D3388D00 (0x0))
	char pad_1485[3];  // 0x5CD (0x5CD)
	struct UTimelineComponent* Timeline_1;  // 0x5D0 (0x5D0)
	float Timeline______0_B306F89A42E7828A566D08B5F03B02B4;  // 0x5D8 (0x5D8)
	enum class ETimelineDirection Timeline__Direction_B306F89A42E7828A566D08B5F03B02B4;  // 0x0 (0x0) (0x0 (0x0))
	char pad_1501[3];  // 0x5DD (0x5DD)
	struct UTimelineComponent* Timeline;  // 0x5E0 (0x5E0)
	char pad_1512_1 : 7;  // 0x5E8 (0x5E8)
	bool bAttachedSheathSocket : 1;  // 0x5E8 (0x5E8)


	void Timeline__FinishedFunc(); // Function BP_Lantern.BP_Lantern_C.Timeline__FinishedFunc
	void Timeline__UpdateFunc(); // Function BP_Lantern.BP_Lantern_C.Timeline__UpdateFunc
	void Timeline_0__FinishedFunc(); // Function BP_Lantern.BP_Lantern_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_Lantern.BP_Lantern_C.Timeline_0__UpdateFunc
	void Timeline_1__FinishedFunc(); // Function BP_Lantern.BP_Lantern_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function BP_Lantern.BP_Lantern_C.Timeline_1__UpdateFunc
	void Timeline_2__FinishedFunc(); // Function BP_Lantern.BP_Lantern_C.Timeline_2__FinishedFunc
	void Timeline_2__UpdateFunc(); // Function BP_Lantern.BP_Lantern_C.Timeline_2__UpdateFunc
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_Lantern.BP_Lantern_C.GameplayTagUpdated
	void OnAttachedSheathSocket(); // Function BP_Lantern.BP_Lantern_C.OnAttachedSheathSocket
	void ExecuteUbergraph_BP_Lantern(int32_t EntryPoint); // Function BP_Lantern.BP_Lantern_C.ExecuteUbergraph_BP_Lantern
}; 
 
 


