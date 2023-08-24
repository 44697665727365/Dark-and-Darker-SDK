#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_ThornyBrambleDeactivate.GA_ThornyBrambleDeactivate_C.ExecuteUbergraph_GA_ThornyBrambleDeactivate
struct FExecuteUbergraph_GA_ThornyBrambleDeactivate
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData Temp_struct_Variable;  // 0x8 (0x8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0xB8 (0xB8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xC8 (0xC8)
	struct ABP_ThornyBramble_C* K2Node_DynamicCast_AsBP_Thorny_Bramble;  // 0xD0 (0xD0)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xD8 (0xD8)
	char pad_217[7];  // 0xD9 (0xD9)
	double CallFunc_GetRecoveryTime_Result;  // 0xE0 (0xE0)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool CallFunc_IsRecovery_Result : 1;  // 0xE8 (0xE8)
	char pad_233[7];  // 0xE9 (0xE9)
	struct UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue;  // 0xF0 (0xF0)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xF8 (0xF8)
	char pad_249[7];  // 0xF9 (0xF9)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x100 (0x100)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x108 (0x108)
	float CallFunc_WaitDelay_Time_ImplicitCast;  // 0x118 (0x118)


}; 
 
 