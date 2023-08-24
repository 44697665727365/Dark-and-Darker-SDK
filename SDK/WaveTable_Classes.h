#pragma once 
#include <WaveTable_Structs.h>
 
 
 
// Class WaveTable.WaveTableBank
// Size: 0x48(Inherited: 0x28)
struct UWaveTableBank : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	uint8_t Resolution;  // 0x30 (0x30)
	char pad_49_1 : 7;  // 0x31 (0x31)
	bool bBipolar : 1;  // 0x31 (0x31)
	char pad_50[6];  // 0x32 (0x32)
	struct TArray<struct FWaveTableBankEntry> Entries;  // 0x38 (0x38)


}; 
 
 


