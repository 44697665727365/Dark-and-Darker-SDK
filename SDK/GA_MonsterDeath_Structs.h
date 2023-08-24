#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_MonsterDeath.GA_MonsterDeath_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_MonsterDeath.GA_MonsterDeath_C.EventReceived_6BD842A04FEECB3ADB7405A03B1CC235
struct FEventReceived_6BD842A04FEECB3ADB7405A03B1CC235
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_MonsterDeath.GA_MonsterDeath_C.OnInterrupted_6BD842A04FEECB3ADB7405A03B1CC235
struct FOnInterrupted_6BD842A04FEECB3ADB7405A03B1CC235
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_MonsterDeath.GA_MonsterDeath_C.ExecuteUbergraph_GA_MonsterDeath
struct FExecuteUbergraph_GA_MonsterDeath
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x14 (0x14)
	struct FGameplayTag K2Node_CustomEvent_EventTag_5;  // 0x24 (0x24)
	char pad_44[4];  // 0x2C (0x2C)
	struct FGameplayEventData K2Node_CustomEvent_EventData_5;  // 0x30 (0x30)
	struct FGameplayTag K2Node_CustomEvent_EventTag_4;  // 0xE0 (0xE0)
	struct FGameplayEventData K2Node_CustomEvent_EventData_4;  // 0xE8 (0xE8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x198 (0x198)
	struct FGameplayTag K2Node_CustomEvent_EventTag_3;  // 0x1A8 (0x1A8)
	struct FGameplayEventData K2Node_CustomEvent_EventData_3;  // 0x1B0 (0x1B0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x260 (0x260)
	struct FGameplayTag K2Node_CustomEvent_EventTag_2;  // 0x270 (0x270)
	struct FGameplayEventData K2Node_CustomEvent_EventData_2;  // 0x278 (0x278)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_5;  // 0x328 (0x328)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x338 (0x338)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x340 (0x340)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_6;  // 0x3F0 (0x3F0)
	struct FGameplayEventData Temp_struct_Variable;  // 0x400 (0x400)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x4B0 (0x4B0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x4B8 (0x4B8)
	struct UDCAT_PlayMontageAndWaitForEvent* CallFunc_PlayMontageAndWaitForEvent_ReturnValue;  // 0x4C0 (0x4C0)
	struct ADCMonsterBase* K2Node_DynamicCast_AsDCMonster_Base;  // 0x4C8 (0x4C8)
	char pad_1232_1 : 7;  // 0x4D0 (0x4D0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x4D0 (0x4D0)
	char pad_1233_1 : 7;  // 0x4D1 (0x4D1)
	bool CallFunc_BeforeDeath_ReturnValue : 1;  // 0x4D1 (0x4D1)
	char pad_1234[6];  // 0x4D2 (0x4D2)
	struct UAnimInstance* CallFunc_GetAnimInstance_ReturnValue;  // 0x4D8 (0x4D8)
	char pad_1248_1 : 7;  // 0x4E0 (0x4E0)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x4E0 (0x4E0)
	char pad_1249_1 : 7;  // 0x4E1 (0x4E1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x4E1 (0x4E1)
	char pad_1250[6];  // 0x4E2 (0x4E2)
	struct UAbilityTask_WaitMovementModeChange* CallFunc_CreateWaitMovementModeChange_ReturnValue;  // 0x4E8 (0x4E8)
	char pad_1264_1 : 7;  // 0x4F0 (0x4F0)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x4F0 (0x4F0)
	enum class EMovementMode Temp_byte_Variable;  // 0x4F1 (0x4F1)
	char pad_1266[6];  // 0x4F2 (0x4F2)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x4F8 (0x4F8)
	struct ADCMonsterBase* K2Node_DynamicCast_AsDCMonster_Base_2;  // 0x500 (0x500)
	char pad_1288_1 : 7;  // 0x508 (0x508)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x508 (0x508)
	char pad_1289[7];  // 0x509 (0x509)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x510 (0x510)
	struct ABP_DCMonsterBase_C* K2Node_DynamicCast_AsBP_DCMonster_Base;  // 0x518 (0x518)
	char pad_1312_1 : 7;  // 0x520 (0x520)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x520 (0x520)
	char pad_1313_1 : 7;  // 0x521 (0x521)
	bool CallFunc_Death_ReturnValue : 1;  // 0x521 (0x521)
	char pad_1314_1 : 7;  // 0x522 (0x522)
	bool CallFunc_AddGameplayTag_ReturnValue : 1;  // 0x522 (0x522)
	char pad_1315_1 : 7;  // 0x523 (0x523)
	bool K2Node_SwitchEnum_CmpSuccess_2 : 1;  // 0x523 (0x523)
	char pad_1316_1 : 7;  // 0x524 (0x524)
	bool CallFunc_IsFalling_ReturnValue : 1;  // 0x524 (0x524)
	enum class EMovementMode K2Node_CustomEvent_NewMovementMode;  // 0x525 (0x525)
	char pad_1318[2];  // 0x526 (0x526)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x528 (0x528)


}; 
 
 // Function GA_MonsterDeath.GA_MonsterDeath_C.OnBlendOut_6BD842A04FEECB3ADB7405A03B1CC235
struct FOnBlendOut_6BD842A04FEECB3ADB7405A03B1CC235
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_MonsterDeath.GA_MonsterDeath_C.OnCancelled_6BD842A04FEECB3ADB7405A03B1CC235
struct FOnCancelled_6BD842A04FEECB3ADB7405A03B1CC235
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_MonsterDeath.GA_MonsterDeath_C.OnCompleted_6BD842A04FEECB3ADB7405A03B1CC235
struct FOnCompleted_6BD842A04FEECB3ADB7405A03B1CC235
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_MonsterDeath.GA_MonsterDeath_C.OnChange_9E8AFB9E4D98F88ECD2A39BAF1250363
struct FOnChange_9E8AFB9E4D98F88ECD2A39BAF1250363
{
	enum class EMovementMode NewMovementMode;  // 0x0 (0x0)


}; 
 
 