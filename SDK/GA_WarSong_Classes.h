#pragma once 
#include <GA_WarSong_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_WarSong.GA_WarSong_C
// Size: 0x570(Inherited: 0x558)
struct UGA_WarSong_C : UGA_ActivateOnAbilityHandleData_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct FPrimaryAssetId In Id;  // 0x560 (0x560)


	void OnTargetActorOverlap_CC4DB50249EA1F0D6992769AAB7B262C(struct TArray<struct AActor*>& RadiusInActors); // Function GA_WarSong.GA_WarSong_C.OnTargetActorOverlap_CC4DB50249EA1F0D6992769AAB7B262C
	void EventReceived_CEF90083460EE22CE5C347B6048DA36E(struct FGameplayEventData Payload); // Function GA_WarSong.GA_WarSong_C.EventReceived_CEF90083460EE22CE5C347B6048DA36E
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_WarSong.GA_WarSong_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_WarSong(int32_t EntryPoint); // Function GA_WarSong.GA_WarSong_C.ExecuteUbergraph_GA_WarSong
}; 
 
 


