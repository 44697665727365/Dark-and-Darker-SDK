#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_FloorSpikesAura.GA_FloorSpikesAura_C.ExecuteUbergraph_GA_FloorSpikesAura
struct FExecuteUbergraph_GA_FloorSpikesAura
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* K2Node_Event_TargetActor;  // 0x8 (0x8)
	struct FGameplayCueParameters Temp_struct_Variable;  // 0x10 (0x10)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character;  // 0xE8 (0xE8)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xF0 (0xF0)
	char pad_241_1 : 7;  // 0xF1 (0xF1)
	bool CallFunc_IsDead_ReturnValue : 1;  // 0xF1 (0xF1)


}; 
 
 // Function GA_FloorSpikesAura.GA_FloorSpikesAura_C.OnAuraOverlapBeginEvent
// Size: 0x8(Inherited: 0x8)
struct FOnAuraOverlapBeginEvent : FOnAuraOverlapBeginEvent
{
	struct AActor* TargetActor;  // 0x0 (0x0)


}; 
 
 