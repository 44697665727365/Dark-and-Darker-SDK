#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_ExplosionBottle.BP_ExplosionBottle_C.ExecuteUbergraph_BP_ExplosionBottle
struct FExecuteUbergraph_BP_ExplosionBottle
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult;  // 0x8 (0x8)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0xF0 (0xF0)
	int32_t K2Node_Event_InCount;  // 0xF8 (0xF8)
	char pad_252_1 : 7;  // 0xFC (0xFC)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0xFC (0xFC)
	char pad_253_1 : 7;  // 0xFD (0xFD)
	bool CallFunc_MatchesTag_ReturnValue : 1;  // 0xFD (0xFD)
	char pad_254[2];  // 0xFE (0xFE)
	struct USoundData* CallFunc_GetSoundData_ReturnValue;  // 0x100 (0x100)
	char pad_264_1 : 7;  // 0x108 (0x108)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x108 (0x108)
	char pad_265_1 : 7;  // 0x109 (0x109)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x109 (0x109)
	char pad_266[2];  // 0x10A (0x10A)
	struct FDelegate Temp_delegate_Variable;  // 0x10C (0x10C)
	struct FDelegate Temp_delegate_Variable_2;  // 0x11C (0x11C)
	struct FGameplayTag Temp_struct_Variable;  // 0x12C (0x12C)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x134 (0x134)
	char pad_316[4];  // 0x13C (0x13C)
	struct UAkAudioEvent* CallFunc_Map_Find_Value;  // 0x140 (0x140)
	char pad_328_1 : 7;  // 0x148 (0x148)
	bool CallFunc_Map_Find_ReturnValue : 1;  // 0x148 (0x148)
	char pad_329[7];  // 0x149 (0x149)
	struct UAkAudioEvent* CallFunc_Map_Find_Value_2;  // 0x150 (0x150)
	char pad_344_1 : 7;  // 0x158 (0x158)
	bool CallFunc_Map_Find_ReturnValue_2 : 1;  // 0x158 (0x158)
	char pad_345[3];  // 0x159 (0x159)
	int32_t CallFunc_PostAkEvent_ReturnValue;  // 0x15C (0x15C)
	int32_t CallFunc_PostAkEvent_ReturnValue_2;  // 0x160 (0x160)
	char pad_356_1 : 7;  // 0x164 (0x164)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x164 (0x164)
	char pad_357_1 : 7;  // 0x165 (0x165)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x165 (0x165)


}; 
 
 // Function BP_ExplosionBottle.BP_ExplosionBottle_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 