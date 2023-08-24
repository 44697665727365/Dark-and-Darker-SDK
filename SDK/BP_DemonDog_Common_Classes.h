#pragma once 
#include <BP_DemonDog_Common_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_DemonDog_Common.BP_DemonDog_Common_C
// Size: 0x11D8(Inherited: 0x11B8)
struct ABP_DemonDog_Common_C : ABP_DCMonsterBaseWithOptions_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UBP_DCHitBox_C* BP_DCHitBox1;  // 0x11C0 (0x11C0)
	struct UBP_DCHitBox_C* BP_DCHitBox;  // 0x11C8 (0x11C8)
	struct UMaterialInstance* DeathMaterial;  // 0x11D0 (0x11D0)


	void Added_2CE881894DEE30E678B9548D67969F60(); // Function BP_DemonDog_Common.BP_DemonDog_Common_C.Added_2CE881894DEE30E678B9548D67969F60
	void OnSetAI(); // Function BP_DemonDog_Common.BP_DemonDog_Common_C.OnSetAI
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_DemonDog_Common.BP_DemonDog_Common_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_DemonDog_Common(int32_t EntryPoint); // Function BP_DemonDog_Common.BP_DemonDog_Common_C.ExecuteUbergraph_BP_DemonDog_Common
}; 
 
 


