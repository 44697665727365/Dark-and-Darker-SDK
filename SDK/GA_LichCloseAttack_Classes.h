#pragma once 
#include <GA_LichCloseAttack_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_LichCloseAttack.GA_LichCloseAttack_C
// Size: 0x6E8(Inherited: 0x6C9)
struct UGA_LichCloseAttack_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	struct TArray<enum class EObjectTypeQuery> Object Types;  // 0x6D8 (0x6D8)


	void EventReceived_B89F65DB45E74AE38A9C60A1FF2184F6(struct FGameplayEventData Payload); // Function GA_LichCloseAttack.GA_LichCloseAttack_C.EventReceived_B89F65DB45E74AE38A9C60A1FF2184F6
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_LichCloseAttack.GA_LichCloseAttack_C.AbilityActivated
	void ExecuteUbergraph_GA_LichCloseAttack(int32_t EntryPoint); // Function GA_LichCloseAttack.GA_LichCloseAttack_C.ExecuteUbergraph_GA_LichCloseAttack
}; 
 
 


