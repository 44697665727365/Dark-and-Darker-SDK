#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonWarlord_Combo4.GA_SkeletonWarlord_Combo4_C.EventReceived_90198A41405BBF2E56DA7896FA3EB92F
struct FEventReceived_90198A41405BBF2E56DA7896FA3EB92F
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonWarlord_Combo4.GA_SkeletonWarlord_Combo4_C.ExecuteUbergraph_GA_SkeletonWarlord_Combo4
struct FExecuteUbergraph_GA_SkeletonWarlord_Combo4
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	char pad_20[4];  // 0x14 (0x14)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x18 (0x18)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC8 (0xC8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x178 (0x178)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x180 (0x180)
	char pad_385[7];  // 0x181 (0x181)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x188 (0x188)
	char pad_400_1 : 7;  // 0x190 (0x190)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x190 (0x190)
	char pad_401_1 : 7;  // 0x191 (0x191)
	bool CallFunc_InRange_FloatFloat_ReturnValue : 1;  // 0x191 (0x191)
	char pad_402_1 : 7;  // 0x192 (0x192)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x192 (0x192)
	char pad_403[5];  // 0x193 (0x193)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x198 (0x198)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x248 (0x248)
	char pad_592_1 : 7;  // 0x250 (0x250)
	bool CallFunc_Get_Enemies_In_Range_And_Angle_Result : 1;  // 0x250 (0x250)
	char pad_593[7];  // 0x251 (0x251)
	struct TArray<struct ADCCharacterBase*> CallFunc_Get_Enemies_In_Range_And_Angle_DCCharacterBase;  // 0x258 (0x258)


}; 
 
 // Function GA_SkeletonWarlord_Combo4.GA_SkeletonWarlord_Combo4_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 