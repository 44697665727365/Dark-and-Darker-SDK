#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.CastingFinishEvent
// Size: 0xC8(Inherited: 0xC8)
struct FCastingFinishEvent : FCastingFinishEvent
{
	struct FDesignDataSpell CurentDesignSpellData;  // 0x0 (0x0)


}; 
 
 // Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.Cancelled_BD46902F414FE76022DDE5BE621487B9
struct FCancelled_BD46902F414FE76022DDE5BE621487B9
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.CheckGround
struct FCheckGround
{
	struct FHitResult HtResult;  // 0x0 (0x0)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool Result : 1;  // 0xE8 (0xE8)


}; 
 
 // Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.ExecuteUbergraph_GA_PlayerSpellCast
struct FExecuteUbergraph_GA_PlayerSpellCast
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_Data_2;  // 0x18 (0x18)
	struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_Data;  // 0x40 (0x40)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x68 (0x68)
	struct FGameplayAbilityTargetDataHandle Temp_struct_Variable;  // 0x78 (0x78)
	struct UAbilityTask_WaitTargetData* CallFunc_WaitTargetData_ReturnValue;  // 0xA0 (0xA0)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0xA8 (0xA8)
	char pad_169[7];  // 0xA9 (0xA9)
	struct AGameplayAbilityTargetActor* CallFunc_BeginSpawningActor_SpawnedActor;  // 0xB0 (0xB0)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool CallFunc_BeginSpawningActor_ReturnValue : 1;  // 0xB8 (0xB8)
	char pad_185_1 : 7;  // 0xB9 (0xB9)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0xB9 (0xB9)
	char pad_186[6];  // 0xBA (0xBA)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0xC0 (0xC0)
	char pad_368_1 : 7;  // 0x170 (0x170)
	bool CallFunc_IsLocallyControlled_ReturnValue : 1;  // 0x170 (0x170)
	char pad_369[7];  // 0x171 (0x171)
	struct FGameplayAbilityActorInfo CallFunc_GetActorInfo_ReturnValue;  // 0x178 (0x178)
	struct FMsgWidgetInitCrossHairNotify K2Node_MakeStruct_MsgWidgetInitCrossHairNotify;  // 0x1C0 (0x1C0)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface;  // 0x1D8 (0x1D8)
	char pad_488_1 : 7;  // 0x1E8 (0x1E8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x1E8 (0x1E8)
	char pad_489[7];  // 0x1E9 (0x1E9)
	struct FDesignDataSpell K2Node_Event_CurentDesignSpellData;  // 0x1F0 (0x1F0)
	struct FCollisionProfileName Temp_struct_Variable_2;  // 0x2B8 (0x2B8)
	double CallFunc_Conv_IntToDouble_ReturnValue;  // 0x2C0 (0x2C0)
	char pad_712_1 : 7;  // 0x2C8 (0x2C8)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0x2C8 (0x2C8)
	char pad_713[3];  // 0x2C9 (0x2C9)
	float CallFunc_Conv_IntToFloat_ReturnValue;  // 0x2CC (0x2CC)
	float CallFunc_Conv_IntToFloat_ReturnValue_2;  // 0x2D0 (0x2D0)
	char pad_724[4];  // 0x2D4 (0x2D4)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x2D8 (0x2D8)
	struct FWorldReticleParameters K2Node_MakeStruct_WorldReticleParameters;  // 0x2F0 (0x2F0)
	char pad_776[8];  // 0x308 (0x308)
	struct FGameplayAbilityTargetingLocationInfo CallFunc_MakeTargetLocationInfoFromOwnerActor_ReturnValue;  // 0x310 (0x310)
	double CallFunc_MakeVector_Y_ImplicitCast;  // 0x3B0 (0x3B0)
	double CallFunc_MakeVector_Z_ImplicitCast;  // 0x3B8 (0x3B8)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast;  // 0x3C0 (0x3C0)


}; 
 
 // Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.ValidData_BD46902F414FE76022DDE5BE621487B9
struct FValidData_BD46902F414FE76022DDE5BE621487B9
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 