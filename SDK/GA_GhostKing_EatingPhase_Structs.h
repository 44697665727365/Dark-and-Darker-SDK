#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.ExecuteUbergraph_GA_GhostKing_EatingPhase
struct FExecuteUbergraph_GA_GhostKing_EatingPhase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag K2Node_CustomEvent_EventTag_3;  // 0x4 (0x4)
	char pad_12[4];  // 0xC (0xC)
	struct FGameplayEventData K2Node_CustomEvent_EventData_3;  // 0x10 (0x10)
	struct FGameplayTag K2Node_CustomEvent_EventTag_2;  // 0xC0 (0xC0)
	struct FGameplayEventData K2Node_CustomEvent_EventData_2;  // 0xC8 (0xC8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x178 (0x178)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x188 (0x188)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x190 (0x190)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x240 (0x240)
	struct FGameplayEventData Temp_struct_Variable;  // 0x250 (0x250)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x300 (0x300)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x308 (0x308)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x3B8 (0x3B8)
	struct FGameplayEventData Temp_struct_Variable_3;  // 0x3C8 (0x3C8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x478 (0x478)
	char pad_1152_1 : 7;  // 0x480 (0x480)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x480 (0x480)
	char pad_1153[3];  // 0x481 (0x481)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x484 (0x484)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_4;  // 0x494 (0x494)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_3;  // 0x495 (0x495)
	char pad_1174[2];  // 0x496 (0x496)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_5;  // 0x498 (0x498)
	enum class EPathFollowingResult Temp_byte_Variable;  // 0x4A8 (0x4A8)
	char pad_1193[3];  // 0x4A9 (0x4A9)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_6;  // 0x4AC (0x4AC)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_2;  // 0x4BC (0x4BC)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult;  // 0x4BD (0x4BD)
	char pad_1214[2];  // 0x4BE (0x4BE)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_7;  // 0x4C0 (0x4C0)
	enum class EPathFollowingResult Temp_byte_Variable_2;  // 0x4D0 (0x4D0)
	char pad_1233[7];  // 0x4D1 (0x4D1)
	struct FGameplayEventData Temp_struct_Variable_4;  // 0x4D8 (0x4D8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x588 (0x588)
	int32_t Temp_int_Array_Index_Variable;  // 0x598 (0x598)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x59C (0x59C)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x5A0 (0x5A0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_8;  // 0x5A4 (0x5A4)
	char pad_1460_1 : 7;  // 0x5B4 (0x5B4)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x5B4 (0x5B4)
	char pad_1461_1 : 7;  // 0x5B5 (0x5B5)
	bool K2Node_Event_bWasCancelled : 1;  // 0x5B5 (0x5B5)
	char pad_1462[2];  // 0x5B6 (0x5B6)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x5B8 (0x5B8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_9;  // 0x668 (0x668)
	struct UDCAT_PlayMontageAndWaitForEvent* CallFunc_PlayMontageAndWaitForEvent_ReturnValue;  // 0x678 (0x678)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x680 (0x680)
	char pad_1840_1 : 7;  // 0x730 (0x730)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x730 (0x730)
	char pad_1841[3];  // 0x731 (0x731)
	struct FGameplayTag K2Node_CustomEvent_EventTag_4;  // 0x734 (0x734)
	char pad_1852[4];  // 0x73C (0x73C)
	struct FGameplayEventData K2Node_CustomEvent_EventData_4;  // 0x740 (0x740)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_10;  // 0x7F0 (0x7F0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x7FF7D3428690 (0x16FAD03EBC0) (0x7FF7D3428690 (0x16FAD03EBC0))
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x808 (0x808)
	char pad_2064_1 : 7;  // 0x810 (0x810)
	bool CallFunc_AddGameplayTag_ReturnValue : 1;  // 0x810 (0x810)
	char pad_2065_1 : 7;  // 0x811 (0x811)
	bool CallFunc_RemoveGameplayTag_ReturnValue : 1;  // 0x811 (0x811)
	char pad_2066[6];  // 0x812 (0x812)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x818 (0x818)
	struct ABP_GhostKing_Common_C* K2Node_DynamicCast_AsBP_Ghost_King_Common;  // 0x7FF7D35967D0 (0x1705D6E0080) (0x7FF7D35967D0 (0x1705D6E0080))
	char pad_2088_1 : 7;  // 0x828 (0x828)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x828 (0x828)
	char pad_2089[3];  // 0x829 (0x829)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_11;  // 0x82C (0x82C)
	char pad_2108_1 : 7;  // 0x83C (0x83C)
	bool CallFunc_GetBBTargetActorToCharacterBase_Result : 1;  // 0x83C (0x83C)
	char pad_2109[3];  // 0x83D (0x83D)
	struct ADCCharacterBase* CallFunc_GetBBTargetActorToCharacterBase_As_DCCharacter_Base;  // 0x840 (0x840)
	float CallFunc_GetDistanceTo_ReturnValue;  // 0x848 (0x848)
	char pad_2124[4];  // 0x84C (0x84C)
	struct UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue;  // 0x850 (0x850)
	char pad_2136_1 : 7;  // 0x858 (0x858)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0x858 (0x858)
	char pad_2137_1 : 7;  // 0x859 (0x859)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x859 (0x859)
	char pad_2138[6];  // 0x85A (0x85A)
	struct UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue_2;  // 0x860 (0x860)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x868 (0x868)
	char pad_2160_1 : 7;  // 0x870 (0x870)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x870 (0x870)
	char pad_2161[7];  // 0x871 (0x871)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x878 (0x878)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x890 (0x890)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x8A8 (0x8A8)
	char pad_2240_1 : 7;  // 0x8C0 (0x8C0)
	bool CallFunc_K2_SetActorRotation_ReturnValue : 1;  // 0x8C0 (0x8C0)
	char pad_2241[3];  // 0x8C1 (0x8C1)
	struct FActiveGameplayEffectHandle CallFunc_Array_Get_Item;  // 0x8C4 (0x8C4)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x8CC (0x8CC)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_2;  // 0x8D0 (0x8D0)
	int32_t CallFunc_Max_ReturnValue;  // 0x8D4 (0x8D4)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x8D8 (0x8D8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_12;  // 0x9B0 (0x9B0)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_2;  // 0x9C0 (0x9C0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;  // 0x0 (0x0) (0x0 (0x0))
	char pad_2512_1 : 7;  // 0x9D0 (0x9D0)
	bool CallFunc_Get_Enemies_In_Range_And_Angle_Result : 1;  // 0x9D0 (0x9D0)
	char pad_2513[7];  // 0x9D1 (0x7FF)
	struct TArray<struct ADCCharacterBase*> CallFunc_Get_Enemies_In_Range_And_Angle_DCCharacterBase;  // 0x9D8 (0x9D8)
	char pad_2536_1 : 7;  // 0x9E8 (0x9E8)
	bool CallFunc_SortTargetsByDistance_ReturnValue : 1;  // 0x9E8 (0x9E8)
	char pad_2537[7];  // 0x9E9 (0x9E9)
	struct ADCCharacterBase* CallFunc_PickTarget_ReturnValue;  // 0x9F0 (0x9F0)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData_2;  // 0x9F8 (0x9F8)
	struct UDCAT_RotateToActor* CallFunc_RotateToActor_ReturnValue;  // 0x0A8 (0x0 (0x0))
	char pad_2736_1 : 7;  // 0xAB0 (0xAB0)
	bool CallFunc_IsValid_ReturnValue_5 : 1;  // 0xAB0 (0xAB0)
	char pad_2737[3];  // 0xAB1 (0xAB1)
	struct FGameplayTag K2Node_CustomEvent_EventTag_5;  // 0xAB4 (0xAB4)
	char pad_2748[4];  // 0xABC (0xABC)
	struct FGameplayEventData K2Node_CustomEvent_EventData_5;  // 0xAC0 (0xAC0)
	float CallFunc_CreateMoveToProxyObject_AcceptanceRadius_ImplicitCast;  // 0xB70 (0xB70)
	char pad_2932[4];  // 0xB74 (0xB74)
	double CallFunc_Greater_DoubleDouble_A_ImplicitCast;  // 0xB78 (0xB78)
	float CallFunc_CreateMoveToProxyObject_AcceptanceRadius_ImplicitCast_2;  // 0xB80 (0xB80)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;  // 0xB84 (0xB84)


}; 
 
 // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.EventReceived_3463EFF4417BB3384BC1978B45CE231A
struct FEventReceived_3463EFF4417BB3384BC1978B45CE231A
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.OnCompleted_3463EFF4417BB3384BC1978B45CE231A
struct FOnCompleted_3463EFF4417BB3384BC1978B45CE231A
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.EventReceived_EDC0A7A64CBF5F3A07573DB4C59A21DB
struct FEventReceived_EDC0A7A64CBF5F3A07573DB4C59A21DB
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.OnFail_5391F5304F1D635B3732248B0EF812AA
struct FOnFail_5391F5304F1D635B3732248B0EF812AA
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.OnCancelled_3463EFF4417BB3384BC1978B45CE231A
struct FOnCancelled_3463EFF4417BB3384BC1978B45CE231A
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.OnBlendOut_3463EFF4417BB3384BC1978B45CE231A
struct FOnBlendOut_3463EFF4417BB3384BC1978B45CE231A
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.OnFail_324969DB431820DCE27899A1BAC9413E
struct FOnFail_324969DB431820DCE27899A1BAC9413E
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.OnInterrupted_3463EFF4417BB3384BC1978B45CE231A
struct FOnInterrupted_3463EFF4417BB3384BC1978B45CE231A
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.OnSuccess_324969DB431820DCE27899A1BAC9413E
struct FOnSuccess_324969DB431820DCE27899A1BAC9413E
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.OnSuccess_5391F5304F1D635B3732248B0EF812AA
struct FOnSuccess_5391F5304F1D635B3732248B0EF812AA
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 