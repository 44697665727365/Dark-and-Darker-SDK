#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonArcherAttack2.GA_SkeletonArcherAttack2_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonArcherAttack2.GA_SkeletonArcherAttack2_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonArcherAttack2.GA_SkeletonArcherAttack2_C.EventReceived_A128DB6B484E5F3D046609B4A8E609A0
struct FEventReceived_A128DB6B484E5F3D046609B4A8E609A0
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_SkeletonArcherAttack2.GA_SkeletonArcherAttack2_C.ExecuteUbergraph_GA_SkeletonArcherAttack2
struct FExecuteUbergraph_GA_SkeletonArcherAttack2
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x4 (0x4)
	char pad_12[4];  // 0xC (0xC)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x10 (0x10)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC0 (0xC0)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x170 (0x170)
	char pad_376_1 : 7;  // 0x178 (0x178)
	bool CallFunc_MatchesTag_ReturnValue : 1;  // 0x178 (0x178)
	char pad_377[7];  // 0x179 (0x179)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x180 (0x180)
	char pad_392_1 : 7;  // 0x188 (0x188)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x188 (0x188)
	char pad_393_1 : 7;  // 0x189 (0x189)
	bool Temp_bool_Variable : 1;  // 0x189 (0x189)
	char pad_394_1 : 7;  // 0x18A (0x18A)
	bool Temp_bool_Variable_2 : 1;  // 0x18A (0x18A)
	char pad_395_1 : 7;  // 0x18B (0x18B)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x18B (0x18B)
	char pad_396[4];  // 0x18C (0x18C)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x190 (0x190)
	char pad_576_1 : 7;  // 0x240 (0x240)
	bool K2Node_Event_bWasCancelled : 1;  // 0x240 (0x240)
	char pad_577[3];  // 0x241 (0x241)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x244 (0x244)
	char pad_596[4];  // 0x254 (0x254)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x258 (0x258)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;  // 0x260 (0x260)
	char pad_624_1 : 7;  // 0x270 (0x270)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x270 (0x270)
	char pad_625[7];  // 0x271 (0x271)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x278 (0x278)
	char pad_640_1 : 7;  // 0x280 (0x280)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x280 (0x280)
	char pad_641[7];  // 0x281 (0x281)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x288 (0x288)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x290 (0x290)
	char pad_664_1 : 7;  // 0x298 (0x298)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x298 (0x298)
	char pad_665[7];  // 0x299 (0x299)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x2A0 (0x2A0)
	char pad_680_1 : 7;  // 0x2A8 (0x2A8)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x2A8 (0x2A8)
	char pad_681_1 : 7;  // 0x2A9 (0x2A9)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x2A9 (0x2A9)
	char pad_682[6];  // 0x2AA (0x2AA)
	struct UDCAT_RotateToActor* CallFunc_RotateToActor_ReturnValue;  // 0x2B0 (0x2B0)
	char pad_696_1 : 7;  // 0x2B8 (0x2B8)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x2B8 (0x2B8)
	char pad_697_1 : 7;  // 0x2B9 (0x2B9)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x2B9 (0x2B9)
	char pad_698[6];  // 0x2BA (0x2BA)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As__________________2;  // 0x2C0 (0x2C0)
	char pad_720_1 : 7;  // 0x2D0 (0x2D0)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x2D0 (0x2D0)
	char pad_721_1 : 7;  // 0x2D1 (0x2D1)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_2 : 1;  // 0x2D1 (0x2D1)


}; 
 
 