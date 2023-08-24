#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_GoblinBolaslinger_Bolas.BP_GoblinBolaslinger_Bolas_C.ExecuteUbergraph_BP_GoblinBolaslinger_Bolas
struct FExecuteUbergraph_BP_GoblinBolaslinger_Bolas
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate Temp_delegate_Variable;  // 0x4 (0x4)
	struct FDelegate Temp_delegate_Variable_2;  // 0x14 (0x14)
	int32_t CallFunc_PostAkEvent_ReturnValue;  // 0x24 (0x24)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x28 (0x28)
	int32_t K2Node_Event_InCount;  // 0x30 (0x30)
	int32_t CallFunc_PostAkEvent_ReturnValue_2;  // 0x34 (0x34)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool CallFunc_MatchesTag_ReturnValue : 1;  // 0x39 (0x39)
	enum class EEndPlayReason K2Node_Event_EndPlayReason;  // 0x3A (0x3A)


}; 
 
 // Function BP_GoblinBolaslinger_Bolas.BP_GoblinBolaslinger_Bolas_C.ReceiveEndPlay
// Size: 0x1(Inherited: 0x1)
struct FReceiveEndPlay : FReceiveEndPlay
{
	enum class EEndPlayReason EndPlayReason;  // 0x0 (0x0)


}; 
 
 // Function BP_GoblinBolaslinger_Bolas.BP_GoblinBolaslinger_Bolas_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 