#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_UndeadKnight_Dodge_Combo2.GA_UndeadKnight_Dodge_Combo2_C.EventReceived_8DB53CC341DA1261AF9E4693B61AEA7D
struct FEventReceived_8DB53CC341DA1261AF9E4693B61AEA7D
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_UndeadKnight_Dodge_Combo2.GA_UndeadKnight_Dodge_Combo2_C.ExecuteUbergraph_GA_UndeadKnight_Dodge_Combo2
struct FExecuteUbergraph_GA_UndeadKnight_Dodge_Combo2
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x8 (0x8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0xB8 (0xB8)
	struct FGameplayEventData Temp_struct_Variable;  // 0x168 (0x168)
	int32_t Temp_int_Array_Index_Variable;  // 0x218 (0x218)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x21C (0x21C)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x220 (0x220)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x224 (0x224)
	char pad_564[4];  // 0x234 (0x234)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x238 (0x238)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x240 (0x240)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x250 (0x250)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x268 (0x268)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x280 (0x280)
	struct FVector CallFunc_GetForwardVector_ReturnValue;  // 0x290 (0x290)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x2A8 (0x2A8)
	struct UAbilityAsync_WaitGameplayEvent* CallFunc_WaitGameplayEventToActor_ReturnValue;  // 0x2B0 (0x2B0)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x2B8 (0x2B8)
	char pad_704_1 : 7;  // 0x2C0 (0x2C0)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x2C0 (0x2C0)
	char pad_705_1 : 7;  // 0x2C1 (0x2C1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x2C1 (0x2C1)
	char pad_706_1 : 7;  // 0x2C2 (0x2C2)
	bool CallFunc_SortTargetsByDistance_ReturnValue : 1;  // 0x2C2 (0x2C2)
	char pad_707[5];  // 0x2C3 (0x2C3)
	struct ADCCharacterBase* CallFunc_Array_Get_Item;  // 0x2C8 (0x2C8)
	struct FVector CallFunc_Conv_FloatToVector_ReturnValue;  // 0x2D0 (0x2D0)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x2E8 (0x2E8)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x398 (0x398)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x3B0 (0x3B0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x3C8 (0x3C8)
	struct TArray<struct AActor*> CallFunc_SphereOverlapActors_OutActors;  // 0x3D0 (0x3D0)
	char pad_992_1 : 7;  // 0x3E0 (0x3E0)
	bool CallFunc_SphereOverlapActors_ReturnValue : 1;  // 0x3E0 (0x3E0)
	char pad_993[7];  // 0x3E1 (0x3E1)
	struct ABP_UndeadKnight_Common_C* K2Node_DynamicCast_AsBP_Undead_Knight_Common;  // 0x3E8 (0x3E8)
	char pad_1008_1 : 7;  // 0x3F0 (0x3F0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x3F0 (0x3F0)
	char pad_1009[7];  // 0x3F1 (0x3F1)
	struct AActor* CallFunc_Array_Get_Item_2;  // 0x3F8 (0x3F8)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x400 (0x400)
	char pad_1028[4];  // 0x404 (0x404)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x408 (0x408)
	char pad_1040_1 : 7;  // 0x410 (0x410)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x410 (0x410)
	char pad_1041_1 : 7;  // 0x411 (0x411)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x411 (0x411)
	char pad_1042[2];  // 0x412 (0x412)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x414 (0x414)


}; 
 
 // Function GA_UndeadKnight_Dodge_Combo2.GA_UndeadKnight_Dodge_Combo2_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 