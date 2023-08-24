#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GiantBat_Attack1.GA_GiantBat_Attack1_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantBat_Attack1.GA_GiantBat_Attack1_C.OnFinish_372A32544DABC7B360308B88A192A4E4
struct FOnFinish_372A32544DABC7B360308B88A192A4E4
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsArrivedDestLocation : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantBat_Attack1.GA_GiantBat_Attack1_C.EventReceived_89DFD7BC4DE1144A2B5028AE4B4B0B46
struct FEventReceived_89DFD7BC4DE1144A2B5028AE4B4B0B46
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantBat_Attack1.GA_GiantBat_Attack1_C.ExecuteUbergraph_GA_GiantBat_Attack1
struct FExecuteUbergraph_GA_GiantBat_Attack1
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x8 (0x8)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xB8 (0xB8)
	char pad_185[7];  // 0xB9 (0xB9)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC0 (0xC0)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x170 (0x170)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x178 (0x178)
	char pad_392_1 : 7;  // 0x188 (0x188)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x188 (0x188)
	char pad_393_1 : 7;  // 0x189 (0x189)
	bool K2Node_CustomEvent_IsArrivedDestLocation_2 : 1;  // 0x189 (0x189)
	char pad_394_1 : 7;  // 0x18A (0x18A)
	bool Temp_bool_Variable : 1;  // 0x18A (0x18A)
	char pad_395[1];  // 0x18B (0x18B)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x18C (0x18C)
	char pad_412_1 : 7;  // 0x19C (0x19C)
	bool K2Node_CustomEvent_IsArrivedDestLocation : 1;  // 0x19C (0x19C)
	char pad_413_1 : 7;  // 0x19D (0x19D)
	bool Temp_bool_Variable_2 : 1;  // 0x19D (0x19D)
	char pad_414[2];  // 0x19E (0x19E)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1A0 (0x1A0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x250 (0x250)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x260 (0x260)
	char pad_616_1 : 7;  // 0x268 (0x268)
	bool CallFunc_Get_Enemies_In_Range_And_Angle_Result : 1;  // 0x268 (0x268)
	char pad_617[7];  // 0x269 (0x269)
	struct TArray<struct ADCCharacterBase*> CallFunc_Get_Enemies_In_Range_And_Angle_DCCharacterBase;  // 0x270 (0x270)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x280 (0x280)
	char pad_648_1 : 7;  // 0x288 (0x288)
	bool CallFunc_Get_Enemies_In_Range_And_Angle_Result_2 : 1;  // 0x288 (0x288)
	char pad_649[7];  // 0x289 (0x289)
	struct TArray<struct ADCCharacterBase*> CallFunc_Get_Enemies_In_Range_And_Angle_DCCharacterBase_2;  // 0x290 (0x290)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x2A0 (0x2A0)
	char pad_680_1 : 7;  // 0x2A8 (0x2A8)
	bool CallFunc_Get_Enemies_In_Range_And_Angle_Result_3 : 1;  // 0x2A8 (0x2A8)
	char pad_681[7];  // 0x2A9 (0x2A9)
	struct TArray<struct ADCCharacterBase*> CallFunc_Get_Enemies_In_Range_And_Angle_DCCharacterBase_3;  // 0x2B0 (0x2B0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;  // 0x2C0 (0x2C0)
	struct FVector CallFunc_Get_Direction_Vector_Result_Vector;  // 0x2C8 (0x2C8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_5;  // 0x2E0 (0x2E0)
	struct UDCAT_DashToLocation* CallFunc_DashToLocation_ReturnValue;  // 0x2E8 (0x2E8)
	struct FVector CallFunc_Get_Direction_Vector_Result_Vector_2;  // 0x2F0 (0x2F0)
	struct UDCAT_DashToLocation* CallFunc_DashToLocation_ReturnValue_2;  // 0x308 (0x308)
	char pad_784_1 : 7;  // 0x310 (0x310)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x310 (0x310)
	char pad_785_1 : 7;  // 0x311 (0x311)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x311 (0x311)
	char pad_786_1 : 7;  // 0x312 (0x312)
	bool K2Node_Event_bWasCancelled : 1;  // 0x312 (0x312)


}; 
 
 // Function GA_GiantBat_Attack1.GA_GiantBat_Attack1_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantBat_Attack1.GA_GiantBat_Attack1_C.OnFinish_A59D6A7B48D10C8B0CB09485131D3822
struct FOnFinish_A59D6A7B48D10C8B0CB09485131D3822
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsArrivedDestLocation : 1;  // 0x0 (0x0)


}; 
 
 