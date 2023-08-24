#pragma once 
#include <BP_GameInstance_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C
// Size: 0x3B8(Inherited: 0x3A8)
struct UBP_GameInstance_C : UDCGameInstance
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x3A8 (0x3A8)
	struct UAkAudioEvent* Ak Event;  // 0x3B0 (0x3B0)


	void ReceiveInit(); // Function BP_GameInstance.BP_GameInstance_C.ReceiveInit
	void ExecuteUbergraph_BP_GameInstance(int32_t EntryPoint); // Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance
}; 
 
 


