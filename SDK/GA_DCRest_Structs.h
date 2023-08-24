#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_DCRest.GA_DCRest_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 // Function GA_DCRest.GA_DCRest_C.EventReceived_1354684B4ED7CD1780504781985CC179
struct FEventReceived_1354684B4ED7CD1780504781985CC179
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_DCRest.GA_DCRest_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_DCRest.GA_DCRest_C.OnPerformAction_08B6AFA441544B64E6F9A8854A58A87C
struct FOnPerformAction_08B6AFA441544B64E6F9A8854A58A87C
{
	int32_t ActionNumber;  // 0x0 (0x0)


}; 
 
 // Function GA_DCRest.GA_DCRest_C.ExecuteUbergraph_GA_DCRest
struct FExecuteUbergraph_GA_DCRest
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	double CallFunc_GetNormalRechargeInterval_RechargeAmount;  // 0x8 (0x8)
	struct FGameplayTag K2Node_CustomEvent_EventTag_4;  // 0x10 (0x10)
	struct FGameplayEventData K2Node_CustomEvent_EventData_4;  // 0x18 (0x18)
	struct UAbilityTask_Repeat* CallFunc_RepeatAction_ReturnValue;  // 0xC8 (0xC8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xD0 (0xD0)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xE0 (0xE0)
	char pad_225[3];  // 0xE1 (0xE1)
	struct FGameplayTag K2Node_CustomEvent_EventTag_3;  // 0xE4 (0xE4)
	char pad_236[4];  // 0xEC (0xEC)
	struct FGameplayEventData K2Node_CustomEvent_EventData_3;  // 0xF0 (0xF0)
	struct FGameplayTag K2Node_CustomEvent_EventTag_2;  // 0x1A0 (0x1A0)
	struct FGameplayEventData K2Node_CustomEvent_EventData_2;  // 0x1A8 (0x1A8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x258 (0x258)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x268 (0x268)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x270 (0x270)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x320 (0x320)
	struct FGameplayEventData Temp_struct_Variable;  // 0x330 (0x330)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x3E0 (0x3E0)
	char pad_1000_1 : 7;  // 0x3E8 (0x3E8)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x3E8 (0x3E8)
	char pad_1001[3];  // 0x3E9 (0x3E9)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x3EC (0x3EC)
	char pad_1020[4];  // 0x3FC (0x3FC)
	struct UDCAT_WaitVelocityChange* CallFunc_WaitVelocityChange_ReturnValue;  // 0x400 (0x400)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_5;  // 0x408 (0x408)
	char pad_1048_1 : 7;  // 0x418 (0x418)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x418 (0x418)
	char pad_1049[7];  // 0x419 (0x419)
	struct UAbilityTask_NetworkSyncPoint* CallFunc_WaitNetSync_ReturnValue;  // 0x420 (0x420)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_6;  // 0x428 (0x428)
	char pad_1080_1 : 7;  // 0x438 (0x438)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x438 (0x438)
	char pad_1081[3];  // 0x439 (0x439)
	int32_t K2Node_CustomEvent_ActionNumber_4;  // 0x43C (0x43C)
	int32_t K2Node_CustomEvent_ActionNumber_3;  // 0x440 (0x440)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_7;  // 0x444 (0x444)
	int32_t Temp_int_Variable;  // 0x454 (0x454)
	struct FGameplayEventData Temp_struct_Variable_3;  // 0x458 (0x458)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x508 (0x508)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_8;  // 0x518 (0x518)
	struct UAbilityTask_NetworkSyncPoint* CallFunc_WaitNetSync_ReturnValue_2;  // 0x528 (0x528)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_9;  // 0x530 (0x530)
	char pad_1344_1 : 7;  // 0x540 (0x540)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x540 (0x540)
	char pad_1345[3];  // 0x541 (0x541)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_10;  // 0x544 (0x544)
	char pad_1364[4];  // 0x554 (0x554)
	struct UDCAT_WaitForInputAction* CallFunc_WaitForInputAction_ReturnValue;  // 0x558 (0x558)
	struct FGameplayEventData Temp_struct_Variable_4;  // 0x560 (0x560)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_2;  // 0x610 (0x610)
	char pad_1568_1 : 7;  // 0x620 (0x620)
	bool CallFunc_IsValid_ReturnValue_5 : 1;  // 0x620 (0x620)
	char pad_1569[3];  // 0x621 (0x621)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_11;  // 0x624 (0x624)
	int32_t K2Node_CustomEvent_ActionNumber_2;  // 0x634 (0x634)
	int32_t K2Node_CustomEvent_ActionNumber;  // 0x638 (0x638)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_12;  // 0x63C (0x63C)
	int32_t Temp_int_Variable_2;  // 0x64C (0x64C)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_13;  // 0x650 (0x650)
	char pad_1632_1 : 7;  // 0x660 (0x660)
	bool K2Node_Event_bWasCancelled : 1;  // 0x660 (0x660)
	char pad_1633[7];  // 0x661 (0x661)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x668 (0x668)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x718 (0x718)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface;  // 0x720 (0x720)
	char pad_1840_1 : 7;  // 0x730 (0x730)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x730 (0x730)
	char pad_1841[7];  // 0x731 (0x731)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x738 (0x738)
	struct FName CallFunc_GetCurrentMontageSectionName_ReturnValue;  // 0x740 (0x740)
	char pad_1864_1 : 7;  // 0x748 (0x748)
	bool CallFunc_IsLocallyControlled_ReturnValue : 1;  // 0x748 (0x748)
	char pad_1865_1 : 7;  // 0x749 (0x749)
	bool K2Node_SwitchName_CmpSuccess : 1;  // 0x749 (0x749)
	char pad_1866[6];  // 0x74A (0x74A)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x750 (0x750)
	struct FGameplayTag K2Node_CustomEvent_EventTag_5;  // 0x758 (0x758)
	struct FGameplayEventData K2Node_CustomEvent_EventData_5;  // 0x760 (0x760)
	char pad_2064_1 : 7;  // 0x810 (0x810)
	bool CallFunc_IsValid_ReturnValue_6 : 1;  // 0x810 (0x810)
	char pad_2065[7];  // 0x811 (0x811)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface_2;  // 0x818 (0x818)
	char pad_2088_1 : 7;  // 0x828 (0x828)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x828 (0x828)
	char pad_2089_1 : 7;  // 0x829 (0x829)
	bool CallFunc_IsLocallyControlled_ReturnValue_2 : 1;  // 0x829 (0x829)
	char pad_2090[6];  // 0x82A (0x82A)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;  // 0x830 (0x830)
	char pad_2104_1 : 7;  // 0x838 (0x838)
	bool CallFunc_IsValid_ReturnValue_7 : 1;  // 0x838 (0x838)
	char pad_2105[7];  // 0x839 (0x839)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_5;  // 0x840 (0x840)
	char pad_2120_1 : 7;  // 0x848 (0x848)
	bool CallFunc_IsLocallyControlled_ReturnValue_3 : 1;  // 0x848 (0x848)
	char pad_2121_1 : 7;  // 0x849 (0x849)
	bool CallFunc_IsValid_ReturnValue_8 : 1;  // 0x849 (0x849)
	char pad_2122_1 : 7;  // 0x84A (0x84A)
	bool CallFunc_IsLocallyControlled_ReturnValue_4 : 1;  // 0x84A (0x84A)
	char pad_2123[5];  // 0x84B (0x84B)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_6;  // 0x850 (0x850)
	char pad_2136_1 : 7;  // 0x858 (0x858)
	bool CallFunc_IsValid_ReturnValue_9 : 1;  // 0x858 (0x858)
	char pad_2137[3];  // 0x859 (0x859)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_14;  // 0x85C (0x85C)
	char pad_2156[4];  // 0x86C (0x86C)
	struct FMsgSetEquippedWeaponsVisibility K2Node_MakeStruct_MsgSetEquippedWeaponsVisibility;  // 0x870 (0x870)
	struct FMsgSetEquippedWeaponsVisibility K2Node_MakeStruct_MsgSetEquippedWeaponsVisibility_2;  // 0x8B0 (0x8B0)
	double CallFunc_GetInCampfireRechargeInterval_RechargeAmount;  // 0x8F0 (0x8F0)
	struct UDCAT_PlayMontageAndWaitForEvent* CallFunc_PlayMontageAndWaitForEvent_ReturnValue;  // 0x8F8 (0x8F8)
	struct UAbilityTask_Repeat* CallFunc_RepeatAction_ReturnValue_2;  // 0x900 (0x900)
	char pad_2312_1 : 7;  // 0x908 (0x908)
	bool CallFunc_IsValid_ReturnValue_10 : 1;  // 0x908 (0x908)
	char pad_2313_1 : 7;  // 0x909 (0x909)
	bool CallFunc_IsValid_ReturnValue_11 : 1;  // 0x909 (0x909)
	char pad_2314[6];  // 0x90A (0x90A)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;  // 0x910 (0x910)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x918 (0x918)
	char pad_2344_1 : 7;  // 0x928 (0x928)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x928 (0x928)
	char pad_2345[7];  // 0x929 (0x929)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue_2;  // 0x930 (0x930)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_2;  // 0x938 (0x938)
	char pad_2376_1 : 7;  // 0x948 (0x948)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_2 : 1;  // 0x948 (0x948)
	char pad_2377[3];  // 0x949 (0x949)
	float CallFunc_RepeatAction_TimeBetweenActions_ImplicitCast;  // 0x94C (0x94C)
	float CallFunc_RepeatAction_TimeBetweenActions_ImplicitCast_2;  // 0x950 (0x950)


}; 
 
 // Function GA_DCRest.GA_DCRest_C.GetSkillRechargeAmount
struct FGetSkillRechargeAmount
{
	int32_t RechargeAmount;  // 0x0 (0x0)
	struct FPrimaryAssetId CallFunc_GetPrimaryAssetIdFromObject_ReturnValue;  // 0x4 (0x4)
	int32_t CallFunc_GetConstantInt32_ReturnValue;  // 0x14 (0x14)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;  // 0x18 (0x18)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x20 (0x20)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x30 (0x30)


}; 
 
 // Function GA_DCRest.GA_DCRest_C.GetInCampfireRechargeInterval
struct FGetInCampfireRechargeInterval
{
	double RechargeAmount;  // 0x0 (0x0)
	struct FPrimaryAssetId CallFunc_GetPrimaryAssetIdFromObject_ReturnValue;  // 0x8 (0x8)
	float CallFunc_GetConstantFloat_ReturnValue;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	double K2Node_FunctionResult_RechargeAmount_ImplicitCast;  // 0x20 (0x20)


}; 
 
 // Function GA_DCRest.GA_DCRest_C.GetNormalRechargeInterval
struct FGetNormalRechargeInterval
{
	double RechargeAmount;  // 0x0 (0x0)
	struct FPrimaryAssetId CallFunc_GetPrimaryAssetIdFromObject_ReturnValue;  // 0x8 (0x8)
	float CallFunc_GetConstantFloat_ReturnValue;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	double K2Node_FunctionResult_RechargeAmount_ImplicitCast;  // 0x20 (0x20)


}; 
 
 // Function GA_DCRest.GA_DCRest_C.OnFinished_08B6AFA441544B64E6F9A8854A58A87C
struct FOnFinished_08B6AFA441544B64E6F9A8854A58A87C
{
	int32_t ActionNumber;  // 0x0 (0x0)


}; 
 
 // Function GA_DCRest.GA_DCRest_C.GetSpellRechargeAmount
struct FGetSpellRechargeAmount
{
	int32_t RechargeAmount;  // 0x0 (0x0)
	struct FPrimaryAssetId CallFunc_GetPrimaryAssetIdFromObject_ReturnValue;  // 0x4 (0x4)
	struct FPrimaryAssetId CallFunc_GetPrimaryAssetIdFromObject_ReturnValue_2;  // 0x14 (0x14)
	int32_t CallFunc_GetConstantInt32_ReturnValue;  // 0x24 (0x24)
	int32_t CallFunc_GetConstantInt32_ReturnValue_2;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;  // 0x30 (0x30)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x38 (0x38)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x48 (0x48)


}; 
 
 // Function GA_DCRest.GA_DCRest_C.OnBlendOut_1354684B4ED7CD1780504781985CC179
struct FOnBlendOut_1354684B4ED7CD1780504781985CC179
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_DCRest.GA_DCRest_C.OnCancelled_1354684B4ED7CD1780504781985CC179
struct FOnCancelled_1354684B4ED7CD1780504781985CC179
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_DCRest.GA_DCRest_C.OnCompleted_1354684B4ED7CD1780504781985CC179
struct FOnCompleted_1354684B4ED7CD1780504781985CC179
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_DCRest.GA_DCRest_C.OnFinished_B9B77D9E49AEACAC3199F88123537880
struct FOnFinished_B9B77D9E49AEACAC3199F88123537880
{
	int32_t ActionNumber;  // 0x0 (0x0)


}; 
 
 // Function GA_DCRest.GA_DCRest_C.OnInterrupted_1354684B4ED7CD1780504781985CC179
struct FOnInterrupted_1354684B4ED7CD1780504781985CC179
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_DCRest.GA_DCRest_C.OnPerformAction_B9B77D9E49AEACAC3199F88123537880
struct FOnPerformAction_B9B77D9E49AEACAC3199F88123537880
{
	int32_t ActionNumber;  // 0x0 (0x0)


}; 
 
 // Function GA_DCRest.GA_DCRest_C.RechargeSpellAndSkill
struct FRechargeSpellAndSkill
{
	int32_t CallFunc_GetSkillRechargeAmount_RechargeAmount;  // 0x0 (0x0)
	int32_t CallFunc_GetSpellRechargeAmount_RechargeAmount;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FMsgSpellRecharge K2Node_MakeStruct_MsgSpellRecharge;  // 0x10 (0x10)
	struct FMsgSkillRechargeRequest K2Node_MakeStruct_MsgSkillRechargeRequest;  // 0x30 (0x30)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x50 (0x50)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface;  // 0x58 (0x58)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x68 (0x68)


}; 
 
 