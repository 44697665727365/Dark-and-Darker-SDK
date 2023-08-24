#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_OilLantern.BP_OilLantern_C.ExecuteUbergraph_BP_OilLantern
struct FExecuteUbergraph_BP_OilLantern
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag Temp_struct_Variable;  // 0x4 (0x4)
	struct FGameplayTag Temp_struct_Variable_2;  // 0xC (0xC)
	struct FDelegate Temp_delegate_Variable;  // 0x14 (0x14)
	struct FDelegate Temp_delegate_Variable_2;  // 0x24 (0x24)
	char pad_52_1 : 7;  // 0x34 (0x34)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x34 (0x34)
	char pad_53[3];  // 0x35 (0x35)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x38 (0x38)
	int32_t K2Node_Event_InCount;  // 0x40 (0x40)
	char pad_68_1 : 7;  // 0x44 (0x44)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x44 (0x44)
	char pad_69_1 : 7;  // 0x45 (0x45)
	bool CallFunc_EqualEqual_IntInt_ReturnValue_2 : 1;  // 0x45 (0x45)
	char pad_70_1 : 7;  // 0x46 (0x46)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x46 (0x46)
	char pad_71[1];  // 0x47 (0x47)
	struct USoundData* CallFunc_GetSoundData_ReturnValue;  // 0x48 (0x48)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x50 (0x50)
	char pad_81_1 : 7;  // 0x51 (0x51)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x51 (0x51)
	char pad_82[6];  // 0x52 (0x52)
	struct UAkAudioEvent* CallFunc_Map_Find_Value;  // 0x58 (0x58)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool CallFunc_Map_Find_ReturnValue : 1;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)
	struct UAkAudioEvent* CallFunc_Map_Find_Value_2;  // 0x68 (0x68)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool CallFunc_Map_Find_ReturnValue_2 : 1;  // 0x70 (0x70)
	char pad_113[7];  // 0x71 (0x71)
	struct FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult;  // 0x78 (0x78)
	int32_t CallFunc_PostAkEvent_ReturnValue;  // 0x160 (0x160)
	int32_t CallFunc_PostAkEvent_ReturnValue_2;  // 0x164 (0x164)


}; 
 
 // Function BP_OilLantern.BP_OilLantern_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 