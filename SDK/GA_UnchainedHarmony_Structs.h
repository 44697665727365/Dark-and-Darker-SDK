#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_UnchainedHarmony.GA_UnchainedHarmony_C.ExecuteUbergraph_GA_UnchainedHarmony
struct FExecuteUbergraph_GA_UnchainedHarmony
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* K2Node_Event_InTarget;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x10 (0x10)
	struct ADCInteractableActorBase* K2Node_DynamicCast_AsDCInteractable_Actor_Base;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct FMsgInteractEnd K2Node_MakeStruct_MsgInteractEnd;  // 0x28 (0x28)
	char pad_320_1 : 7;  // 0x140 (0x140)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x140 (0x140)
	char pad_321[3];  // 0x141 (0x141)
	struct FGameplayTag CallFunc_GetStateTag_ReturnValue;  // 0x144 (0x144)
	char pad_332_1 : 7;  // 0x14C (0x14C)
	bool CallFunc_IsGameplayTagValid_ReturnValue : 1;  // 0x14C (0x14C)


}; 
 
 // Function GA_UnchainedHarmony.GA_UnchainedHarmony_C.OnApplied
// Size: 0x8(Inherited: 0x8)
struct FOnApplied : FOnApplied
{
	struct AActor* InTarget;  // 0x0 (0x0)


}; 
 
 