#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_PaviseInstallPassive.GA_PaviseInstallPassive_C.ExecuteUbergraph_GA_PaviseInstallPassive
struct FExecuteUbergraph_GA_PaviseInstallPassive
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_CheckGround_Result : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x8 (0x8)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x18 (0x18)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x20 (0x20)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD0 (0xD0)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x180 (0x180)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x188 (0x188)
	char pad_400_1 : 7;  // 0x190 (0x190)
	bool Temp_bool_Variable : 1;  // 0x190 (0x190)
	char pad_401_1 : 7;  // 0x191 (0x191)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x191 (0x191)
	char pad_402_1 : 7;  // 0x192 (0x192)
	bool CallFunc_K2_CommitAbility_ReturnValue : 1;  // 0x192 (0x192)
	char pad_403[5];  // 0x193 (0x193)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x198 (0x198)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;  // 0x1A0 (0x1A0)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;  // 0x1A8 (0x1A8)
	char pad_440_1 : 7;  // 0x1B8 (0x1B8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x1B8 (0x1B8)
	char pad_441[7];  // 0x1B9 (0x1B9)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x1C0 (0x1C0)
	struct FVector CallFunc_GetVelocity_ReturnValue;  // 0x1C8 (0x1C8)
	double CallFunc_VSizeSquared_ReturnValue;  // 0x1E0 (0x1E0)
	char pad_488_1 : 7;  // 0x1E8 (0x1E8)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0x1E8 (0x1E8)
	char pad_489[7];  // 0x1E9 (0x1E9)
	struct FGameplayTagContainer CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;  // 0x1F0 (0x1F0)
	char pad_528_1 : 7;  // 0x210 (0x210)
	bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue : 1;  // 0x210 (0x210)


}; 
 
 // Function GA_PaviseInstallPassive.GA_PaviseInstallPassive_C.BroadcastSystemMessage
struct FBroadcastSystemMessage
{
	struct FText SystemMessage;  // 0x0 (0x0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x18 (0x18)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct AController* CallFunc_GetController_ReturnValue;  // 0x30 (0x30)
	struct APlayerController* K2Node_DynamicCast_As_________;  // 0x38 (0x38)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x40 (0x40)


}; 
 
 // Function GA_PaviseInstallPassive.GA_PaviseInstallPassive_C.CheckGround
struct FCheckGround
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FVector GroundHalfSize;  // 0x8 (0x8)
	struct FVector ForwardHalfSize;  // 0x20 (0x20)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x38 (0x38)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x40 (0x40)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x58 (0x58)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x68 (0x68)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue_2;  // 0x70 (0x70)
	struct TArray<struct AActor*> Temp_object_Variable_2;  // 0x88 (0x88)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue;  // 0x98 (0x98)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0xB0 (0xB0)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue_2;  // 0xB8 (0xB8)
	struct FVector CallFunc_GetActorUpVector_ReturnValue;  // 0xD0 (0xD0)
	struct FVector CallFunc_GetActorForwardVector_ReturnValue;  // 0xE8 (0xE8)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x100 (0x100)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue_2;  // 0x118 (0x118)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x130 (0x130)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x148 (0x148)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_2;  // 0x160 (0x160)
	struct FHitResult CallFunc_BoxTraceSingle_OutHit;  // 0x178 (0x178)
	char pad_608_1 : 7;  // 0x260 (0x260)
	bool CallFunc_BoxTraceSingle_ReturnValue : 1;  // 0x260 (0x260)
	char pad_609[7];  // 0x261 (0x261)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_3;  // 0x268 (0x268)
	char pad_640_1 : 7;  // 0x280 (0x280)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x280 (0x280)
	char pad_641_1 : 7;  // 0x281 (0x281)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x281 (0x281)
	char pad_642[2];  // 0x282 (0x282)
	float CallFunc_BreakHitResult_Time;  // 0x284 (0x284)
	float CallFunc_BreakHitResult_Distance;  // 0x288 (0x288)
	char pad_652[4];  // 0x28C (0x28C)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x290 (0x290)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x2A8 (0x2A8)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x2C0 (0x2C0)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x2D8 (0x2D8)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x2F0 (0x2F0)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x2F8 (0x2F8)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x300 (0x300)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x308 (0x308)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x310 (0x310)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x318 (0x318)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x31C (0x31C)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x320 (0x320)
	char pad_804[4];  // 0x324 (0x324)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x328 (0x328)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x340 (0x340)
	struct FHitResult CallFunc_BoxTraceSingle_OutHit_2;  // 0x358 (0x358)
	char pad_1088_1 : 7;  // 0x440 (0x440)
	bool CallFunc_BoxTraceSingle_ReturnValue_2 : 1;  // 0x440 (0x440)
	char pad_1089_1 : 7;  // 0x441 (0x441)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x441 (0x441)
	char pad_1090_1 : 7;  // 0x442 (0x442)
	bool CallFunc_BreakHitResult_bBlockingHit_2 : 1;  // 0x442 (0x442)
	char pad_1091_1 : 7;  // 0x443 (0x443)
	bool CallFunc_BreakHitResult_bInitialOverlap_2 : 1;  // 0x443 (0x443)
	float CallFunc_BreakHitResult_Time_2;  // 0x444 (0x444)
	float CallFunc_BreakHitResult_Distance_2;  // 0x448 (0x448)
	char pad_1100[4];  // 0x44C (0x44C)
	struct FVector CallFunc_BreakHitResult_Location_2;  // 0x450 (0x450)
	struct FVector CallFunc_BreakHitResult_ImpactPoint_2;  // 0x468 (0x468)
	struct FVector CallFunc_BreakHitResult_Normal_2;  // 0x480 (0x480)
	struct FVector CallFunc_BreakHitResult_ImpactNormal_2;  // 0x498 (0x498)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2;  // 0x4B0 (0x4B0)
	struct AActor* CallFunc_BreakHitResult_HitActor_2;  // 0x4B8 (0x4B8)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2;  // 0x4C0 (0x4C0)
	struct FName CallFunc_BreakHitResult_HitBoneName_2;  // 0x4C8 (0x4C8)
	struct FName CallFunc_BreakHitResult_BoneName_2;  // 0x4D0 (0x4D0)
	int32_t CallFunc_BreakHitResult_HitItem_2;  // 0x4D8 (0x4D8)
	int32_t CallFunc_BreakHitResult_ElementIndex_2;  // 0x4DC (0x4DC)
	int32_t CallFunc_BreakHitResult_FaceIndex_2;  // 0x4E0 (0x4E0)
	char pad_1252[4];  // 0x4E4 (0x4E4)
	struct FVector CallFunc_BreakHitResult_TraceStart_2;  // 0x4E8 (0x4E8)
	struct FVector CallFunc_BreakHitResult_TraceEnd_2;  // 0x500 (0x500)
	struct ABP_PaviseProp_C* K2Node_DynamicCast_AsBP_Pavise_Prop;  // 0x518 (0x518)
	char pad_1312_1 : 7;  // 0x520 (0x520)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x520 (0x520)
	char pad_1313[7];  // 0x521 (0x521)
	struct ABP_LightSourceBase_C* K2Node_DynamicCast_AsBP_Light_Source_Base;  // 0x528 (0x528)
	char pad_1328_1 : 7;  // 0x530 (0x530)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x530 (0x530)
	char pad_1329_1 : 7;  // 0x531 (0x531)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x531 (0x531)
	char pad_1330[6];  // 0x532 (0x532)
	struct ABP_StaticMeshItemHolder_C* K2Node_DynamicCast_AsBP_Static_Mesh_Item_Holder;  // 0x538 (0x538)
	char pad_1344_1 : 7;  // 0x540 (0x540)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x540 (0x540)


}; 
 
 // Function GA_PaviseInstallPassive.GA_PaviseInstallPassive_C.EventReceived_78022699479DE1103E04748305A25585
struct FEventReceived_78022699479DE1103E04748305A25585
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 