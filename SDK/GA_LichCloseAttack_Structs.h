#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_LichCloseAttack.GA_LichCloseAttack_C.EventReceived_B89F65DB45E74AE38A9C60A1FF2184F6
struct FEventReceived_B89F65DB45E74AE38A9C60A1FF2184F6
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_LichCloseAttack.GA_LichCloseAttack_C.ExecuteUbergraph_GA_LichCloseAttack
struct FExecuteUbergraph_GA_LichCloseAttack
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x18 (0x18)
	struct FVector CallFunc_Conv_FloatToVector_ReturnValue;  // 0x28 (0x28)
	int32_t Temp_int_Array_Index_Variable;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)
	struct FGameplayEventData Temp_struct_Variable;  // 0x48 (0x48)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xF8 (0xF8)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x100 (0x100)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x118 (0x118)
	struct TArray<struct AActor*> CallFunc_SphereOverlapActors_OutActors;  // 0x120 (0x120)
	char pad_304_1 : 7;  // 0x130 (0x130)
	bool CallFunc_SphereOverlapActors_ReturnValue : 1;  // 0x130 (0x130)
	char pad_305[7];  // 0x131 (0x131)
	struct UAbilityAsync_WaitGameplayEvent* CallFunc_WaitGameplayEventToActor_ReturnValue;  // 0x138 (0x138)
	struct AActor* CallFunc_Array_Get_Item;  // 0x140 (0x140)
	struct ADCPlayerCharacterBase* K2Node_DynamicCast_AsDCPlayer_Character_Base;  // 0x148 (0x148)
	char pad_336_1 : 7;  // 0x150 (0x150)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x150 (0x150)
	char pad_337[7];  // 0x151 (0x151)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x158 (0x158)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x208 (0x208)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x220 (0x220)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue;  // 0x230 (0x230)
	char pad_568_1 : 7;  // 0x238 (0x238)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x238 (0x238)
	char pad_569_1 : 7;  // 0x239 (0x239)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x239 (0x239)
	char pad_570[2];  // 0x23A (0x23A)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x23C (0x23C)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x240 (0x240)
	char pad_580[4];  // 0x244 (0x244)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x248 (0x248)
	char pad_760_1 : 7;  // 0x2F8 (0x2F8)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x2F8 (0x2F8)
	char pad_761[3];  // 0x2F9 (0x2F9)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x2FC (0x2FC)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x300 (0x300)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x3B0 (0x3B0)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_3;  // 0x3B8 (0x3B8)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue;  // 0x3D0 (0x3D0)
	struct FVector CallFunc_Normal_ReturnValue;  // 0x3E8 (0x3E8)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x400 (0x400)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x418 (0x418)


}; 
 
 // Function GA_LichCloseAttack.GA_LichCloseAttack_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 