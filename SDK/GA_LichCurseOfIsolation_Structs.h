#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_LichCurseOfIsolation.GA_LichCurseOfIsolation_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_LichCurseOfIsolation.GA_LichCurseOfIsolation_C.EventReceived_4946331145B17BC0E77DBD86D5E564EA
struct FEventReceived_4946331145B17BC0E77DBD86D5E564EA
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_LichCurseOfIsolation.GA_LichCurseOfIsolation_C.EventReceived_F6D7C7644E62BFAC1BCCE88C0EA9CFFA
struct FEventReceived_F6D7C7644E62BFAC1BCCE88C0EA9CFFA
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_LichCurseOfIsolation.GA_LichCurseOfIsolation_C.ExecuteUbergraph_GA_LichCurseOfIsolation
struct FExecuteUbergraph_GA_LichCurseOfIsolation
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_CustomEvent_Payload_2;  // 0x8 (0x8)
	struct FGameplayEventData Temp_struct_Variable;  // 0xB8 (0xB8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x168 (0x168)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x178 (0x178)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x228 (0x228)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x2D8 (0x2D8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x388 (0x388)
	struct UAbilityAsync_WaitGameplayEvent* CallFunc_WaitGameplayEventToActor_ReturnValue;  // 0x390 (0x390)
	char pad_920_1 : 7;  // 0x398 (0x398)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x398 (0x398)
	char pad_921[7];  // 0x399 (0x399)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x3A0 (0x3A0)
	struct UAbilityAsync_WaitGameplayEvent* CallFunc_WaitGameplayEventToActor_ReturnValue_2;  // 0x3A8 (0x3A8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x3B0 (0x3B0)
	struct ABP_Lich_Common_C* K2Node_DynamicCast_AsBP_Lich_Common;  // 0x3B8 (0x3B8)
	char pad_960_1 : 7;  // 0x3C0 (0x3C0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x3C0 (0x3C0)
	char pad_961_1 : 7;  // 0x3C1 (0x3C1)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x3C1 (0x3C1)
	char pad_962_1 : 7;  // 0x3C2 (0x3C2)
	bool CallFunc_GetBBTargetActorToCharacterBase_Result : 1;  // 0x3C2 (0x3C2)
	char pad_963[5];  // 0x3C3 (0x3C3)
	struct ADCCharacterBase* CallFunc_GetBBTargetActorToCharacterBase_As_DCCharacter_Base;  // 0x3C8 (0x3C8)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x3D0 (0x3D0)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x3E8 (0x3E8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x4C0 (0x4C0)
	char pad_1232_1 : 7;  // 0x4D0 (0x4D0)
	bool K2Node_Event_bWasCancelled : 1;  // 0x4D0 (0x4D0)


}; 
 
 // Function GA_LichCurseOfIsolation.GA_LichCurseOfIsolation_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 