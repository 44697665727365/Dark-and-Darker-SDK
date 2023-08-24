#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_UndeadKnight_LeapAttack.GA_UndeadKnight_LeapAttack_C.EventReceived_72C25031498FC089C1AC9D9A4F6521BD
struct FEventReceived_72C25031498FC089C1AC9D9A4F6521BD
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_UndeadKnight_LeapAttack.GA_UndeadKnight_LeapAttack_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_UndeadKnight_LeapAttack.GA_UndeadKnight_LeapAttack_C.ExecuteUbergraph_GA_UndeadKnight_LeapAttack
struct FExecuteUbergraph_GA_UndeadKnight_LeapAttack
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag Temp_struct_Variable;  // 0x4 (0x4)
	char pad_12[4];  // 0xC (0xC)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x1C (0x1C)
	enum class EMovementMode K2Node_CustomEvent_NewMovementMode;  // 0x2C (0x2C)
	enum class EMovementMode Temp_byte_Variable;  // 0x2D (0x2D)
	char pad_46[2];  // 0x2E (0x2E)
	struct UAbilityTask_WaitMovementModeChange* CallFunc_CreateWaitMovementModeChange_ReturnValue;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x40 (0x40)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x48 (0x48)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x58 (0x58)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base_2;  // 0x108 (0x108)
	char pad_272_1 : 7;  // 0x110 (0x110)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x110 (0x110)
	char pad_273[3];  // 0x111 (0x111)
	float CallFunc_GetDistanceTo_ReturnValue;  // 0x114 (0x114)
	char pad_280_1 : 7;  // 0x118 (0x118)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x118 (0x118)
	char pad_281[3];  // 0x119 (0x119)
	float CallFunc_GetDistanceTo_ReturnValue_2;  // 0x11C (0x11C)
	char pad_288_1 : 7;  // 0x120 (0x120)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2 : 1;  // 0x120 (0x120)
	char pad_289[3];  // 0x121 (0x121)
	float CallFunc_GetDistanceTo_ReturnValue_3;  // 0x124 (0x124)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x128 (0x128)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x130 (0x130)
	char pad_480_1 : 7;  // 0x1E0 (0x1E0)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue_3 : 1;  // 0x1E0 (0x1E0)
	char pad_481[3];  // 0x1E1 (0x1E1)
	float CallFunc_GetDistanceTo_ReturnValue_4;  // 0x1E4 (0x1E4)
	char pad_488_1 : 7;  // 0x1E8 (0x1E8)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue_4 : 1;  // 0x1E8 (0x1E8)
	char pad_489[3];  // 0x1E9 (0x1E9)
	float CallFunc_GetDistanceTo_ReturnValue_5;  // 0x1EC (0x1EC)
	char pad_496_1 : 7;  // 0x1F0 (0x1F0)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue_5 : 1;  // 0x1F0 (0x1F0)
	char pad_497[3];  // 0x1F1 (0x1F1)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x1F4 (0x1F4)
	float CallFunc_GetDistanceTo_ReturnValue_6;  // 0x204 (0x204)
	char pad_520_1 : 7;  // 0x208 (0x208)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue_6 : 1;  // 0x208 (0x208)
	char pad_521[7];  // 0x209 (0x209)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x210 (0x210)
	double CallFunc_Conv_IntToDouble_ReturnValue;  // 0x2C0 (0x2C0)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x2C8 (0x2C8)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x2D0 (0x2D0)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x2D8 (0x2D8)
	double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;  // 0x2F0 (0x2F0)
	double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_2;  // 0x2F8 (0x2F8)
	double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_3;  // 0x300 (0x300)
	double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_4;  // 0x308 (0x308)
	double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_5;  // 0x310 (0x310)
	double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_6;  // 0x318 (0x318)


}; 
 
 // Function GA_UndeadKnight_LeapAttack.GA_UndeadKnight_LeapAttack_C.OnChange_7D22AAB54594BBCBA38D60B6F1252082
struct FOnChange_7D22AAB54594BBCBA38D60B6F1252082
{
	enum class EMovementMode NewMovementMode;  // 0x0 (0x0)


}; 
 
 