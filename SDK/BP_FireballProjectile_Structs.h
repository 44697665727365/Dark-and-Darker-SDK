#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_FireballProjectile.BP_FireballProjectile_C.ExecuteUbergraph_BP_FireballProjectile
struct FExecuteUbergraph_BP_FireballProjectile
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate Temp_delegate_Variable;  // 0x4 (0x4)
	struct FDelegate Temp_delegate_Variable_2;  // 0x14 (0x14)
	int32_t CallFunc_PostAkEvent_ReturnValue;  // 0x24 (0x24)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x28 (0x28)
	int32_t K2Node_Event_InCount;  // 0x30 (0x30)
	enum class EEndPlayReason K2Node_Event_EndPlayReason;  // 0x34 (0x34)
	char pad_53_1 : 7;  // 0x35 (0x35)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x35 (0x35)
	char pad_54_1 : 7;  // 0x36 (0x36)
	bool CallFunc_MatchesTag_ReturnValue : 1;  // 0x36 (0x36)
	char pad_55[1];  // 0x37 (0x37)
	int32_t CallFunc_PostAkEvent_ReturnValue_2;  // 0x38 (0x38)


}; 
 
 // Function BP_FireballProjectile.BP_FireballProjectile_C.ReceiveEndPlay
// Size: 0x1(Inherited: 0x1)
struct FReceiveEndPlay : FReceiveEndPlay
{
	enum class EEndPlayReason EndPlayReason;  // 0x0 (0x0)


}; 
 
 // Function BP_FireballProjectile.BP_FireballProjectile_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 