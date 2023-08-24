#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_IceBoltProjectile.BP_IceBoltProjectile_C.ExecuteUbergraph_BP_IceBoltProjectile
struct FExecuteUbergraph_BP_IceBoltProjectile
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x4 (0x4)
	int32_t K2Node_Event_InCount;  // 0xC (0xC)
	enum class EEndPlayReason K2Node_Event_EndPlayReason;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x11 (0x11)
	char pad_18_1 : 7;  // 0x12 (0x12)
	bool CallFunc_MatchesTag_ReturnValue : 1;  // 0x12 (0x12)
	char pad_19[1];  // 0x13 (0x13)
	struct FDelegate Temp_delegate_Variable;  // 0x14 (0x14)
	struct FDelegate Temp_delegate_Variable_2;  // 0x24 (0x24)
	int32_t CallFunc_PostAkEvent_ReturnValue;  // 0x34 (0x34)
	int32_t CallFunc_PostAkEvent_ReturnValue_2;  // 0x38 (0x38)


}; 
 
 // Function BP_IceBoltProjectile.BP_IceBoltProjectile_C.ReceiveEndPlay
// Size: 0x1(Inherited: 0x1)
struct FReceiveEndPlay : FReceiveEndPlay
{
	enum class EEndPlayReason EndPlayReason;  // 0x0 (0x0)


}; 
 
 // Function BP_IceBoltProjectile.BP_IceBoltProjectile_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 