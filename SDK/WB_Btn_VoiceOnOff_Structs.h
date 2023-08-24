#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WB_Btn_VoiceOnOff.WB_Btn_VoiceOnOff_C.OnVoipUserData
// Size: 0x10(Inherited: 0x10)
struct FOnVoipUserData : FOnVoipUserData
{
	struct FVoipUserData NewValue;  // 0x0 (0x0)
	struct FVoipUserData OldValue;  // 0x8 (0x8)


}; 
 
 // Function WB_Btn_VoiceOnOff.WB_Btn_VoiceOnOff_C.OnVoipPartyData
// Size: 0x40(Inherited: 0x40)
struct FOnVoipPartyData : FOnVoipPartyData
{
	struct FVoipPartyData NewValue;  // 0x0 (0x0)
	struct FVoipPartyData OldValue;  // 0x20 (0x20)


}; 
 
 // Function WB_Btn_VoiceOnOff.WB_Btn_VoiceOnOff_C.ExecuteUbergraph_WB_Btn_VoiceOnOff
struct FExecuteUbergraph_WB_Btn_VoiceOnOff
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FVoipUserData K2Node_Event_NewValue_2;  // 0x4 (0x4)
	struct FVoipUserData K2Node_Event_OldValue_2;  // 0xC (0xC)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct FVoipPartyData K2Node_Event_NewValue;  // 0x18 (0x18)
	struct FVoipPartyData K2Node_Event_OldValue;  // 0x38 (0x38)
	uint8_t CallFunc_GetVoipStatus_ReturnValue;  // 0x58 (0x58)
	char pad_89_1 : 7;  // 0x59 (0x59)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x59 (0x59)
	uint8_t CallFunc_GetVoipStatus_ReturnValue_2;  // 0x5A (0x5A)
	char pad_91_1 : 7;  // 0x5B (0x5B)
	bool K2Node_SwitchEnum_CmpSuccess_2 : 1;  // 0x5B (0x5B)


}; 
 
 