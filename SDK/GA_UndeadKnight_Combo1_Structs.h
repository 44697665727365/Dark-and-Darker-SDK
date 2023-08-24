#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_UndeadKnight_Combo1.GA_UndeadKnight_Combo1_C.EventReceived_B1C357A44753DEDA6E4606999AAC67F5
struct FEventReceived_B1C357A44753DEDA6E4606999AAC67F5
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_UndeadKnight_Combo1.GA_UndeadKnight_Combo1_C.ExecuteUbergraph_GA_UndeadKnight_Combo1
struct FExecuteUbergraph_GA_UndeadKnight_Combo1
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x10 (0x10)
	struct ABP_UndeadKnight_Common_C* K2Node_DynamicCast_AsBP_Undead_Knight_Common;  // 0xC0 (0xC0)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xC8 (0xC8)
	char pad_201[7];  // 0xC9 (0xC9)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD0 (0xD0)
	int32_t Temp_int_Array_Index_Variable;  // 0x180 (0x180)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x184 (0x184)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x188 (0x188)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x18C (0x18C)
	char pad_412[4];  // 0x19C (0x19C)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1A0 (0x1A0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x250 (0x250)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x258 (0x258)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x270 (0x270)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x288 (0x288)
	struct FVector CallFunc_GetForwardVector_ReturnValue;  // 0x298 (0x298)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x2B0 (0x2B0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x2C0 (0x2C0)
	struct UAbilityAsync_WaitGameplayEvent* CallFunc_WaitGameplayEventToActor_ReturnValue;  // 0x2C8 (0x2C8)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x2D0 (0x2D0)
	char pad_728_1 : 7;  // 0x2D8 (0x2D8)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x2D8 (0x2D8)
	char pad_729_1 : 7;  // 0x2D9 (0x2D9)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x2D9 (0x2D9)
	char pad_730_1 : 7;  // 0x2DA (0x2DA)
	bool CallFunc_SortTargetsByDistance_ReturnValue : 1;  // 0x2DA (0x2DA)
	char pad_731[5];  // 0x2DB (0x2DB)
	struct ADCCharacterBase* CallFunc_Array_Get_Item;  // 0x2E0 (0x2E0)
	struct FVector CallFunc_Conv_FloatToVector_ReturnValue;  // 0x2E8 (0x2E8)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x300 (0x300)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x3B0 (0x3B0)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x3C8 (0x3C8)
	struct TArray<struct AActor*> CallFunc_SphereOverlapActors_OutActors;  // 0x3E0 (0x3E0)
	char pad_1008_1 : 7;  // 0x3F0 (0x3F0)
	bool CallFunc_SphereOverlapActors_ReturnValue : 1;  // 0x3F0 (0x3F0)
	char pad_1009[3];  // 0x3F1 (0x3F1)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x3F4 (0x3F4)
	char pad_1016_1 : 7;  // 0x3F8 (0x3F8)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x3F8 (0x3F8)
	char pad_1017[7];  // 0x3F9 (0x3F9)
	struct AActor* CallFunc_Array_Get_Item_2;  // 0x400 (0x400)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x408 (0x408)
	char pad_1040_1 : 7;  // 0x410 (0x410)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x410 (0x410)
	char pad_1041[3];  // 0x411 (0x411)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x414 (0x414)


}; 
 
 // Function GA_UndeadKnight_Combo1.GA_UndeadKnight_Combo1_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 