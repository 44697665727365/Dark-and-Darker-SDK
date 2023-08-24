#pragma once 
#include <BP_DemonDog_Nightmare_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_DemonDog_Nightmare.BP_DemonDog_Nightmare_C
// Size: 0x11F0(Inherited: 0x11D8)
struct ABP_DemonDog_Nightmare_C : ABP_DemonDog_Common_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11D8 (0x11D8)
	struct UNiagaraComponent* Niagara;  // 0x11E0 (0x11E0)
	struct UBP_DCHitBox_C* BP_DCHitBox2;  // 0x11E8 (0x11E8)


	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_DemonDog_Nightmare.BP_DemonDog_Nightmare_C.GameplayTagUpdated
	void OnSetAI(); // Function BP_DemonDog_Nightmare.BP_DemonDog_Nightmare_C.OnSetAI
	void ExecuteUbergraph_BP_DemonDog_Nightmare(int32_t EntryPoint); // Function BP_DemonDog_Nightmare.BP_DemonDog_Nightmare_C.ExecuteUbergraph_BP_DemonDog_Nightmare
}; 
 
 


