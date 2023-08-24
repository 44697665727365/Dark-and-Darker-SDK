#pragma once 
#include <GA_ShadowRunner_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_ShadowRunner.GA_ShadowRunner_C
// Size: 0x561(Inherited: 0x558)
struct UGA_ShadowRunner_C : UGA_ActivateOnAbilityHandleData_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	char pad_1376_1 : 7;  // 0x560 (0x560)
	bool IsActivate : 1;  // 0x560 (0x560)


	void Removed_8CBF5F874D65963B86B997AC7C280A2C(); // Function GA_ShadowRunner.GA_ShadowRunner_C.Removed_8CBF5F874D65963B86B997AC7C280A2C
	void K2_ActivateAbility(); // Function GA_ShadowRunner.GA_ShadowRunner_C.K2_ActivateAbility
	void ExecuteUbergraph_GA_ShadowRunner(int32_t EntryPoint); // Function GA_ShadowRunner.GA_ShadowRunner_C.ExecuteUbergraph_GA_ShadowRunner
}; 
 
 


