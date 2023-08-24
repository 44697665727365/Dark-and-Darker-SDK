#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_Roaster01On.BP_Roaster01On_C.ExecuteUbergraph_BP_Roaster01On
struct FExecuteUbergraph_BP_Roaster01On
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* K2Node_Event_Interacter;  // 0x8 (0x8)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x10 (0x10)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x18 (0x18)
	struct FHitResult K2Node_Event_HitResult;  // 0x20 (0x20)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x108 (0x108)
	int32_t K2Node_Event_InCount;  // 0x110 (0x110)
	char pad_276_1 : 7;  // 0x114 (0x114)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x114 (0x114)
	char pad_277_1 : 7;  // 0x115 (0x115)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x115 (0x115)
	char pad_278_1 : 7;  // 0x116 (0x116)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x116 (0x116)


}; 
 
 // Function BP_Roaster01On.BP_Roaster01On_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 // Function BP_Roaster01On.BP_Roaster01On_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 