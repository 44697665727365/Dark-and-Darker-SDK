#pragma once 
#include <GA_UnchainedHarmony_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_UnchainedHarmony.GA_UnchainedHarmony_C
// Size: 0x6E0(Inherited: 0x6D0)
struct UGA_UnchainedHarmony_C : UGA_MusicInstant_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	struct FGameplayTag TriggerTag;  // 0x6D8 (0x6D8)


	void OnApplied(struct AActor* InTarget); // Function GA_UnchainedHarmony.GA_UnchainedHarmony_C.OnApplied
	void ExecuteUbergraph_GA_UnchainedHarmony(int32_t EntryPoint); // Function GA_UnchainedHarmony.GA_UnchainedHarmony_C.ExecuteUbergraph_GA_UnchainedHarmony
}; 
 
 


