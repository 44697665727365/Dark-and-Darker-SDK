#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonSwordman_Attack1.GA_SkeletonSwordman_Attack1_C.EventReceived_B9451CAD42065F4E84D7C5B432AF4101
struct FEventReceived_B9451CAD42065F4E84D7C5B432AF4101
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonSwordman_Attack1.GA_SkeletonSwordman_Attack1_C.ExecuteUbergraph_GA_SkeletonSwordman_Attack1
struct FExecuteUbergraph_GA_SkeletonSwordman_Attack1
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_Get_Enemies_In_Range_And_Angle_Result : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct TArray<struct ADCCharacterBase*> CallFunc_Get_Enemies_In_Range_And_Angle_DCCharacterBase;  // 0x18 (0x18)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x28 (0x28)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x38 (0x38)
	struct FGameplayEventData Temp_struct_Variable;  // 0xE8 (0xE8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x198 (0x198)
	char pad_416_1 : 7;  // 0x1A0 (0x1A0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x1A0 (0x1A0)
	char pad_417[7];  // 0x1A1 (0x1A1)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1A8 (0x1A8)


}; 
 
 // Function GA_SkeletonSwordman_Attack1.GA_SkeletonSwordman_Attack1_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 