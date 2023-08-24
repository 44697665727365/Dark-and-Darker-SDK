#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_UndeadKnight_Dodge.GA_UndeadKnight_Dodge_C.EventReceived_1963BD844B63C23F28070F8DAA3AB658
struct FEventReceived_1963BD844B63C23F28070F8DAA3AB658
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_UndeadKnight_Dodge.GA_UndeadKnight_Dodge_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_UndeadKnight_Dodge.GA_UndeadKnight_Dodge_C.ExecuteUbergraph_GA_UndeadKnight_Dodge
struct FExecuteUbergraph_GA_UndeadKnight_Dodge
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xB8 (0xB8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0xC8 (0xC8)
	struct FGameplayEventData Temp_struct_Variable;  // 0x178 (0x178)
	int32_t Temp_int_Array_Index_Variable;  // 0x228 (0x228)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x22C (0x22C)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x230 (0x230)
	char pad_564[4];  // 0x234 (0x234)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x238 (0x238)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x240 (0x240)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x250 (0x250)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x268 (0x268)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x280 (0x280)
	struct FVector CallFunc_GetForwardVector_ReturnValue;  // 0x290 (0x290)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x2A8 (0x2A8)
	struct UAbilityAsync_WaitGameplayEvent* CallFunc_WaitGameplayEventToActor_ReturnValue;  // 0x2B0 (0x2B0)
	char pad_696_1 : 7;  // 0x2B8 (0x2B8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x2B8 (0x2B8)
	char pad_697_1 : 7;  // 0x2B9 (0x2B9)
	bool CallFunc_SortTargetsByDistance_ReturnValue : 1;  // 0x2B9 (0x2B9)
	char pad_698[6];  // 0x2BA (0x2BA)
	struct FVector CallFunc_Conv_FloatToVector_ReturnValue;  // 0x2C0 (0x2C0)
	struct ADCCharacterBase* CallFunc_Array_Get_Item;  // 0x2D8 (0x2D8)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x2E0 (0x2E0)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x2F8 (0x2F8)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x3A8 (0x3A8)
	struct TArray<struct AActor*> CallFunc_SphereOverlapActors_OutActors;  // 0x3C0 (0x3C0)
	char pad_976_1 : 7;  // 0x3D0 (0x3D0)
	bool CallFunc_SphereOverlapActors_ReturnValue : 1;  // 0x3D0 (0x3D0)
	char pad_977[7];  // 0x3D1 (0x3D1)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x3D8 (0x3D8)
	struct ABP_UndeadKnight_Common_C* K2Node_DynamicCast_AsBP_Undead_Knight_Common;  // 0x3E0 (0x3E0)
	char pad_1000_1 : 7;  // 0x3E8 (0x3E8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x3E8 (0x3E8)
	char pad_1001[7];  // 0x3E9 (0x3E9)
	struct AActor* CallFunc_Array_Get_Item_2;  // 0x3F0 (0x3F0)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x3F8 (0x3F8)
	char pad_1024_1 : 7;  // 0x400 (0x400)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x400 (0x400)
	char pad_1025[3];  // 0x401 (0x401)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x404 (0x404)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x408 (0x408)
	char pad_1036_1 : 7;  // 0x40C (0x40C)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x40C (0x40C)


}; 
 
 