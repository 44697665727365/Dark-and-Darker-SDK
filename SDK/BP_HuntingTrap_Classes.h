#pragma once 
#include <BP_HuntingTrap_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_HuntingTrap.BP_HuntingTrap_C
// Size: 0x598(Inherited: 0x580)
struct ABP_HuntingTrap_C : ABP_DCItemActor_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct USkeletalMeshComponent* Pin;  // 0x588 (0x588)
	struct UChainComponent* chain;  // 0x590 (0x590)


	void ReceiveBeginPlay(); // Function BP_HuntingTrap.BP_HuntingTrap_C.ReceiveBeginPlay
	void EventFMsgSoundEvent(struct FMsgSoundEvent Msg); // Function BP_HuntingTrap.BP_HuntingTrap_C.EventFMsgSoundEvent
	void OnHiddenInGameStateChanged(bool bIsHidden); // Function BP_HuntingTrap.BP_HuntingTrap_C.OnHiddenInGameStateChanged
	void ExecuteUbergraph_BP_HuntingTrap(int32_t EntryPoint); // Function BP_HuntingTrap.BP_HuntingTrap_C.ExecuteUbergraph_BP_HuntingTrap
}; 
 
 


