#pragma once 
#include <OodleNetworkHandlerComponent_Structs.h>
 
 
 
// Class OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet
// Size: 0xA0(Inherited: 0x80)
struct UOodleNetworkTrainerCommandlet : UCommandlet
{
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool bCompressionTest : 1;  // 0x80 (0x80)
	char pad_129_1 : 7;  // 0x81 (0x81)
	bool bWriteV5Dictionaries : 1;  // 0x81 (0x81)
	char pad_130[2];  // 0x82 (0x82)
	int32_t HashTableSize;  // 0x84 (0x84)
	int32_t DictionarySize;  // 0x88 (0x88)
	int32_t DictionaryTrials;  // 0x8C (0x8C)
	int32_t TrialRandomness;  // 0x90 (0x90)
	int32_t TrialGenerations;  // 0x94 (0x94)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool bNoTrials : 1;  // 0x98 (0x98)
	char pad_153[7];  // 0x99 (0x99)


}; 
 
 


