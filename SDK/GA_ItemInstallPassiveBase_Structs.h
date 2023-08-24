#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_ItemInstallPassiveBase.GA_ItemInstallPassiveBase_C.Cancelled_4B7FDAA9405950C400722898D559C59E
struct FCancelled_4B7FDAA9405950C400722898D559C59E
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function GA_ItemInstallPassiveBase.GA_ItemInstallPassiveBase_C.EventReceived_85952FD14FE8538A2FA00EA4FDA1DE72
struct FEventReceived_85952FD14FE8538A2FA00EA4FDA1DE72
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_ItemInstallPassiveBase.GA_ItemInstallPassiveBase_C.ExecuteUbergraph_GA_ItemInstallPassiveBase
struct FExecuteUbergraph_GA_ItemInstallPassiveBase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FPrimaryAssetId CallFunc_GetPrimaryAssetIdFromObject_ReturnValue;  // 0x4 (0x4)
	float CallFunc_GetConstantFloat_ReturnValue;  // 0x14 (0x14)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x18 (0x18)
	struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_Data_2;  // 0x28 (0x28)
	struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_Data;  // 0x50 (0x50)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x78 (0x78)
	struct FGameplayAbilityTargetDataHandle Temp_struct_Variable;  // 0x88 (0x88)
	struct UAbilityTask_WaitTargetData* CallFunc_WaitTargetData_ReturnValue;  // 0xB0 (0xB0)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xB8 (0xB8)
	char pad_185[7];  // 0xB9 (0xB9)
	struct AGameplayAbilityTargetActor* CallFunc_BeginSpawningActor_SpawnedActor;  // 0xC0 (0xC0)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool CallFunc_BeginSpawningActor_ReturnValue : 1;  // 0xC8 (0xC8)
	char pad_201_1 : 7;  // 0xC9 (0xC9)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0xC9 (0xC9)
	char pad_202[6];  // 0xCA (0xCA)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0xD0 (0xD0)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x180 (0x180)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x188 (0x188)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x238 (0x238)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x248 (0x248)
	struct FGameplayTag Temp_struct_Variable_3;  // 0x2F8 (0x2F8)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x300 (0x300)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x308 (0x308)
	char pad_952_1 : 7;  // 0x3B8 (0x3B8)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x3B8 (0x3B8)
	char pad_953[7];  // 0x3B9 (0x3B9)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x3C0 (0x3C0)
	struct FVector CallFunc_GetActorForwardVector_ReturnValue;  // 0x3C8 (0x3C8)
	struct FGameplayAbilityTargetingLocationInfo CallFunc_MakeTargetLocationInfoFromOwnerActor_ReturnValue;  // 0x3E0 (0x3E0)
	struct FVector CallFunc_Multiply_VectorFloat_ReturnValue;  // 0x480 (0x480)
	char pad_1176_1 : 7;  // 0x498 (0x498)
	bool CallFunc_K2_CommitAbility_ReturnValue : 1;  // 0x498 (0x498)
	char pad_1177[7];  // 0x499 (0x499)
	struct FVector CallFunc_BreakTransform_Location;  // 0x4A0 (0x4A0)
	struct FRotator CallFunc_BreakTransform_Rotation;  // 0x4B8 (0x4B8)
	struct FVector CallFunc_BreakTransform_Scale;  // 0x4D0 (0x4D0)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x4E8 (0x4E8)
	struct FTransform CallFunc_MakeTransform_ReturnValue;  // 0x500 (0x500)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x560 (0x560)
	char pad_1384[8];  // 0x568 (0x568)
	struct FGameplayAbilityTargetingLocationInfo K2Node_MakeStruct_GameplayAbilityTargetingLocationInfo;  // 0x570 (0x570)
	struct FCollisionProfileName Temp_struct_Variable_4;  // 0x610 (0x610)
	char pad_1560_1 : 7;  // 0x618 (0x618)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x618 (0x618)
	char pad_1561[7];  // 0x619 (0x619)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;  // 0x620 (0x620)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast;  // 0x628 (0x628)


}; 
 
 // Function GA_ItemInstallPassiveBase.GA_ItemInstallPassiveBase_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 // Function GA_ItemInstallPassiveBase.GA_ItemInstallPassiveBase_C.ValidData_4B7FDAA9405950C400722898D559C59E
struct FValidData_4B7FDAA9405950C400722898D559C59E
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 