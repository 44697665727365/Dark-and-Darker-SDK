#pragma once 
#include <GA_SkeletonWarlord_Order_PositionChange_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonWarlord_Order_PositionChange.GA_SkeletonWarlord_Order_PositionChange_C
// Size: 0x598(Inherited: 0x580)
struct UGA_SkeletonWarlord_Order_PositionChange_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	char pad_1416_1 : 7;  // 0x588 (0x588)
	bool No Summonee : 1;  // 0x588 (0x588)
	char pad_1417[7];  // 0x589 (0x589)
	struct ABP_SkeletonWarlord_C* As BP Skeleton Warlord;  // 0x590 (0x590)


	void EventReceived_83C55BE449DAD0B3E25BBEA000F573A2(struct FGameplayEventData Payload); // Function GA_SkeletonWarlord_Order_PositionChange.GA_SkeletonWarlord_Order_PositionChange_C.EventReceived_83C55BE449DAD0B3E25BBEA000F573A2
	void EventReceived_44DD460049DA934061B4F6814A425E85(struct FGameplayEventData Payload); // Function GA_SkeletonWarlord_Order_PositionChange.GA_SkeletonWarlord_Order_PositionChange_C.EventReceived_44DD460049DA934061B4F6814A425E85
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonWarlord_Order_PositionChange.GA_SkeletonWarlord_Order_PositionChange_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonWarlord_Order_PositionChange(int32_t EntryPoint); // Function GA_SkeletonWarlord_Order_PositionChange.GA_SkeletonWarlord_Order_PositionChange_C.ExecuteUbergraph_GA_SkeletonWarlord_Order_PositionChange
}; 
 
 


