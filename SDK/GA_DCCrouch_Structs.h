#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_DCCrouch.GA_DCCrouch_C.EventReceived_F8111BF74E13C0F203A0A2A357F51B3A
struct FEventReceived_F8111BF74E13C0F203A0A2A357F51B3A
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_DCCrouch.GA_DCCrouch_C.ExecuteUbergraph_GA_DCCrouch
struct FExecuteUbergraph_GA_DCCrouch
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x4 (0x4)
	char pad_12[4];  // 0xC (0xC)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x10 (0x10)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0xC0 (0xC0)
	char pad_196[4];  // 0xC4 (0xC4)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC8 (0xC8)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x178 (0x178)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x180 (0x180)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x188 (0x188)
	char pad_408_1 : 7;  // 0x198 (0x198)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x198 (0x198)
	char pad_409[7];  // 0x199 (0x199)
	struct UDCAT_WaitForCharacterUnCrouch* CallFunc_WaitForCharacterUnCrouch_ReturnValue;  // 0x1A0 (0x1A0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x1A8 (0x1A8)
	char pad_440_1 : 7;  // 0x1B8 (0x1B8)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x1B8 (0x1B8)
	enum class EMovementMode K2Node_CustomEvent_NewMovementMode;  // 0x1B9 (0x1B9)
	enum class EMovementMode Temp_byte_Variable;  // 0x1BA (0x1BA)
	char pad_443[5];  // 0x1BB (0x1BB)
	struct UAbilityTask_WaitMovementModeChange* CallFunc_CreateWaitMovementModeChange_ReturnValue;  // 0x1C0 (0x1C0)
	char pad_456_1 : 7;  // 0x1C8 (0x1C8)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x1C8 (0x1C8)
	char pad_457[3];  // 0x1C9 (0x1C9)
	int32_t Temp_int_Array_Index_Variable;  // 0x1CC (0x1CC)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x1D0 (0x1D0)
	struct FActiveGameplayEffectHandle CallFunc_Array_Get_Item;  // 0x1D4 (0x1D4)
	char pad_476_1 : 7;  // [x1DC ([x1DC)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x1DC (0x1DC)
	char pad_477[3];  // 0x1DD (0x1DD)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x1E0 (0x1E0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x1E4 (0x1E4)
	char pad_500_1 : 7;  // 0x1F4 (0x1F4)
	bool CallFunc_K2_CommitAbility_ReturnValue : 1;  // 0x1F4 (0x1F4)
	char pad_501[3];  // 0x1F5 (0x1F5)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x1F8 (0x1F8)
	struct ACharacter* K2Node_DynamicCast_As___;  // 0x200 (0x200)
	char pad_520_1 : 7;  // 0x208 (0x208)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x208 (0x208)
	char pad_521_1 : 7;  // 0x209 (0x209)
	bool CallFunc_IsWalking_ReturnValue : 1;  // 0x209 (0x209)


}; 
 
 // Function GA_DCCrouch.GA_DCCrouch_C.OnChange_1B5403AA43F34E6E271364B87A6DC3AC
struct FOnChange_1B5403AA43F34E6E271364B87A6DC3AC
{
	enum class EMovementMode NewMovementMode;  // 0x0 (0x0)


}; 
 
 