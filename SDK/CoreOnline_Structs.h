#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct CoreOnline.JoinabilitySettings
struct FJoinabilitySettings
{
	struct FName SessionName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bPublicSearchable : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool bAllowInvites : 1;  // 0x9 (0x9)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool bJoinViaPresence : 1;  // 0xA (0xA)
	char pad_11_1 : 7;  // 0xB (0xB)
	bool bJoinViaPresenceFriendsOnly : 1;  // 0xB (0xB)
	int32_t MaxPlayers;  // 0xC (0xC)
	int32_t MaxPartySize;  // 0x10 (0x10)


}; 
 
 // ScriptStruct CoreOnline.UniqueNetIdWrapper
struct FUniqueNetIdWrapper
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 