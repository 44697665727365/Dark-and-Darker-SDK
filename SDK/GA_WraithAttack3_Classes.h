#pragma once 
#include <GA_WraithAttack3_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_WraithAttack3.GA_WraithAttack3_C
// Size: 0x6C8(Inherited: 0x6A8)
struct UGA_WraithAttack3_C : UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6A8 (0x6A8)
	enum class ECollisionResponse SetResponse;  // 0x6B0 (0x6B0)
	char pad_1713[7];  // 0x6B1 (0x6B1)
	struct TArray<enum class ECollisionChannel> ObjectTypes;  // 0x6B8 (0x6B8)


	void K2_OnEndAbility(bool bWasCancelled); // Function GA_WraithAttack3.GA_WraithAttack3_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_WraithAttack3(int32_t EntryPoint); // Function GA_WraithAttack3.GA_WraithAttack3_C.ExecuteUbergraph_GA_WraithAttack3
}; 
 
 


