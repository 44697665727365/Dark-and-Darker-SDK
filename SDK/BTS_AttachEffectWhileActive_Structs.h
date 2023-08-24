#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BTS_AttachEffectWhileActive.BTS_AttachEffectWhileActive_C.ExecuteUbergraph_BTS_AttachEffectWhileActive
struct FExecuteUbergraph_BTS_AttachEffectWhileActive
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x4 (0x4)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	int32_t Temp_int_Array_Index_Variable;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct AAIController* K2Node_Event_OwnerController_2;  // 0x18 (0x18)
	struct APawn* K2Node_Event_ControlledPawn_2;  // 0x20 (0x20)
	struct AAIController* K2Node_Event_OwnerController;  // 0x28 (0x28)
	struct APawn* K2Node_Event_ControlledPawn;  // 0x30 (0x30)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x38 (0x38)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue;  // 0x48 (0x48)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue;  // 0x58 (0x58)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue_2;  // 0x68 (0x68)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool CallFunc_Array_IsNotEmpty_ReturnValue : 1;  // 0x78 (0x78)
	char pad_121[3];  // 0x79 (0x79)
	struct FActiveGameplayEffectHandle CallFunc_Array_Get_Item;  // 0x7C (0x7C)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x84 (0x84)
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool CallFunc_RemoveActiveGameplayEffect_ReturnValue : 1;  // 0x88 (0x88)
	char pad_137[3];  // 0x89 (0x89)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_2;  // 0x8C (0x8C)
	int32_t CallFunc_Max_ReturnValue;  // 0x90 (0x90)
	char pad_148_1 : 7;  // 0x94 (0x94)
	bool K2Node_SwitchEnum_CmpSuccess_2 : 1;  // 0x94 (0x94)


}; 
 
 // Function BTS_AttachEffectWhileActive.BTS_AttachEffectWhileActive_C.ReceiveActivationAI
// Size: 0x10(Inherited: 0x10)
struct FReceiveActivationAI : FReceiveActivationAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)


}; 
 
 // Function BTS_AttachEffectWhileActive.BTS_AttachEffectWhileActive_C.ReceiveDeactivationAI
// Size: 0x10(Inherited: 0x10)
struct FReceiveDeactivationAI : FReceiveDeactivationAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)


}; 
 
 