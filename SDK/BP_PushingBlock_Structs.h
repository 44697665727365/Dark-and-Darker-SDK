#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_PushingBlock.BP_PushingBlock_C.ReceiveTick
// Size: 0x4(Inherited: 0x4)
struct FReceiveTick : FReceiveTick
{
	float DeltaSeconds;  // 0x0 (0x0)


}; 
 
 // Function BP_PushingBlock.BP_PushingBlock_C.ReceiveActorBeginOverlap
// Size: 0x8(Inherited: 0x8)
struct FReceiveActorBeginOverlap : FReceiveActorBeginOverlap
{
	struct AActor* OtherActor;  // 0x0 (0x0)


}; 
 
 // Function BP_PushingBlock.BP_PushingBlock_C.ExecuteUbergraph_BP_PushingBlock
struct FExecuteUbergraph_BP_PushingBlock
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x4 (0x4)
	int32_t K2Node_Event_InCount;  // 0xC (0xC)
	float K2Node_Event_DeltaSeconds;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct AActor* K2Node_Event_OtherActor;  // 0x18 (0x18)


}; 
 
 // Function BP_PushingBlock.BP_PushingBlock_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 