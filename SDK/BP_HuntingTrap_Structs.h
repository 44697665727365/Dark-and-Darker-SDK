#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_HuntingTrap.BP_HuntingTrap_C.EventFMsgSoundEvent
struct FEventFMsgSoundEvent
{
	struct FMsgSoundEvent Msg;  // 0x0 (0x0)


}; 
 
 // Function BP_HuntingTrap.BP_HuntingTrap_C.ExecuteUbergraph_BP_HuntingTrap
struct FExecuteUbergraph_BP_HuntingTrap
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FMsgSoundEvent K2Node_CustomEvent_Msg;  // 0x8 (0x8)
	struct FComponentReference K2Node_MakeStruct_ComponentReference;  // 0x30 (0x30)
	struct FComponentReference K2Node_MakeStruct_ComponentReference_2;  // 0x58 (0x58)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool K2Node_Event_bIsHidden : 1;  // 0x80 (0x80)
	char pad_129_1 : 7;  // 0x81 (0x81)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x81 (0x81)


}; 
 
 // Function BP_HuntingTrap.BP_HuntingTrap_C.OnHiddenInGameStateChanged
// Size: 0x1(Inherited: 0x1)
struct FOnHiddenInGameStateChanged : FOnHiddenInGameStateChanged
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bIsHidden : 1;  // 0x0 (0x0)


}; 
 
 