#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.BndEvt__BP_HuntingTrapProp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct FBndEvt__BP_HuntingTrapProp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool bFromSweep : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct FHitResult SweepResult;  // 0x20 (0x20)


}; 
 
 // Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.BndEvt__BP_HuntingTrapProp_DCTagCollisionDetector_K2Node_ComponentBoundEvent_3_GameplayTagCollisionDetectedSignature__DelegateSignature
// Size: 0x80(Inherited: 0x80)
struct FBndEvt__BP_HuntingTrapProp_DCTagCollisionDetector_K2Node_ComponentBoundEvent_3_GameplayTagCollisionDetectedSignature__DelegateSignature : FBndEvt__BP_HuntingTrapProp_DCTagCollisionDetector_K2Node_ComponentBoundEvent_3_GameplayTagCollisionDetectedSignature__DelegateSignature
{
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool bDetected : 1;  // 0x0 (0x0)
	struct FAccountDataReplication AccountDataReplication;  // 0x8 (0x8)


}; 
 
 // Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.Deactivate Trap
struct FDeactivate Trap
{
	struct TScriptInterface<IBaseInterface> CallFunc_UnbindMsgAll_self_CastInput;  // 0x0 (0x0)
	struct FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult;  // 0x10 (0x10)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xF8 (0xF8)
	char pad_249[7];  // 0xF9 (0xF9)
	struct FVector CallFunc_Vector_Zero_ReturnValue;  // 0x100 (0x100)
	struct UDCCharacterMovementComponent* K2Node_DynamicCast_AsDCCharacter_Movement_Component;  // 0x118 (0x118)
	char pad_288_1 : 7;  // 0x120 (0x120)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x120 (0x120)


}; 
 
 // Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 // Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.ExecuteUbergraph_BP_HuntingTrapProp_0001
struct FExecuteUbergraph_BP_HuntingTrapProp_0001
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x14 (0x14)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x28 (0x28)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_HasAuthority_ReturnValue_2 : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct AActor* K2Node_Event_Interacter;  // 0x40 (0x40)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x48 (0x48)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x50 (0x50)
	struct FHitResult K2Node_Event_HitResult;  // 0x58 (0x58)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x140 (0x140)
	int32_t K2Node_Event_InCount;  // 0x148 (0x148)
	char pad_332_1 : 7;  // 0x14C (0x14C)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x14C (0x14C)
	char pad_333_1 : 7;  // 0x14D (0x14D)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x14D (0x14D)
	char pad_334_1 : 7;  // 0x14E (0x14E)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x14E (0x14E)
	char pad_335[1];  // 0x14F (0x14F)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent;  // 0x150 (0x150)
	struct AActor* K2Node_ComponentBoundEvent_OtherActor;  // 0x158 (0x158)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp;  // 0x160 (0x160)
	int32_t K2Node_ComponentBoundEvent_OtherBodyIndex;  // 0x168 (0x168)
	char pad_364_1 : 7;  // 0x16C (0x16C)
	bool K2Node_ComponentBoundEvent_bFromSweep : 1;  // 0x16C (0x16C)
	char pad_365[3];  // 0x16D (0x16D)
	struct FHitResult K2Node_ComponentBoundEvent_SweepResult;  // 0x170 (0x170)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x258 (0x258)
	char pad_608_1 : 7;  // 0x260 (0x260)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x260 (0x260)
	char pad_609[7];  // 0x261 (0x261)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput;  // 0x268 (0x268)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue : 1;  // 0x278 (0x278)
	char pad_633_1 : 7;  // 0x279 (0x279)
	bool K2Node_ComponentBoundEvent_bDetected : 1;  // 0x279 (0x279)
	char pad_634[6];  // 0x27A (0x27A)
	struct FAccountDataReplication K2Node_ComponentBoundEvent_AccountDataReplication;  // 0x280 (0x280)
	char pad_760_1 : 7;  // 0x2F8 (0x2F8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x2F8 (0x2F8)
	char pad_761[7];  // 0x2F9 (0x2F9)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue;  // 0x300 (0x300)
	int32_t CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;  // 0x308 (0x308)
	char pad_780[4];  // 0x30C (0x30C)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x310 (0x310)
	char pad_800_1 : 7;  // 0x320 (0x320)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x320 (0x320)
	char pad_801[7];  // 0x321 (0x321)
	struct UDCCharacterMovementComponent* K2Node_DynamicCast_AsDCCharacter_Movement_Component;  // 0x328 (0x328)
	char pad_816_1 : 7;  // 0x330 (0x330)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x330 (0x330)
	char pad_817[7];  // 0x331 (0x331)
	struct UAbilityAsync_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue;  // 0x338 (0x338)
	char pad_832_1 : 7;  // 0x340 (0x340)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x340 (0x340)
	char pad_833[7];  // 0x341 (0x341)
	struct FVector K2Node_CustomEvent_velocity;  // 0x348 (0x348)
	double CallFunc_VSize_ReturnValue;  // 0x360 (0x360)
	struct FGameplayTag CallFunc_MakeLiteralGameplayTag_ReturnValue;  // 0x368 (0x368)
	float K2Node_CustomEvent_DeltaSeconds;  // 0x370 (0x370)
	char pad_884[4];  // 0x374 (0x374)
	struct FVector K2Node_CustomEvent_OldLocation;  // 0x378 (0x378)
	struct FVector K2Node_CustomEvent_OldVelocity;  // 0x390 (0x390)
	char pad_936_1 : 7;  // 0x3A8 (0x3A8)
	bool CallFunc_PlaySoundWithTag_ReturnValue : 1;  // 0x3A8 (0x3A8)
	char pad_937[7];  // 0x3A9 (0x3A9)
	double CallFunc_VSize_ReturnValue_2;  // 0x3B0 (0x3B0)
	char pad_952_1 : 7;  // 0x3B8 (0x3B8)
	bool CallFunc_IsTargetReachesMaxRange_ReturnValue : 1;  // 0x3B8 (0x3B8)
	char pad_953_1 : 7;  // 0x3B9 (0x3B9)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0x3B9 (0x3B9)
	char pad_954[2];  // 0x3BA (0x3BA)
	struct FGameplayTag CallFunc_MakeLiteralGameplayTag_ReturnValue_2;  // 0x3BC (0x3BC)
	char pad_964_1 : 7;  // 0x3C4 (0x3C4)
	bool CallFunc_PlaySoundWithTag_ReturnValue_2 : 1;  // 0x3C4 (0x3C4)
	char pad_965_1 : 7;  // 0x3C5 (0x3C5)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x3C5 (0x3C5)
	char pad_966[2];  // 0x3C6 (0x3C6)
	struct FPrimaryAssetId CallFunc_GetPrimaryAssetIdFromObject_ReturnValue;  // 0x3C8 (0x3C8)
	float CallFunc_GetConstantFloat_ReturnValue;  // 0x3D8 (0x3D8)
	int32_t CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue_2;  // 0x3DC (0x3DC)
	double K2Node_VariableSet_ConfineRange_ImplicitCast;  // 0x3E0 (0x3E0)


}; 
 
 // Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.IsTargetReachesMaxRange
struct FIsTargetReachesMaxRange
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x8 (0x8)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x20 (0x20)
	double CallFunc_Vector_Distance_ReturnValue;  // 0x38 (0x38)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x40 (0x40)


}; 
 
 // Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.InitializeChain
struct FInitializeChain
{
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x0 (0x0)
	struct FComponentReference K2Node_MakeStruct_ComponentReference;  // 0x8 (0x8)
	struct FComponentReference K2Node_MakeStruct_ComponentReference_2;  // 0x30 (0x30)
	float K2Node_VariableSet_chainWidth_ImplicitCast;  // 0x58 (0x58)


}; 
 
 // Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.OnChainSound
struct FOnChainSound
{
	struct FVector Velocity;  // 0x0 (0x0)


}; 
 
 // Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.OnCharacterMovementUpdated
struct FOnCharacterMovementUpdated
{
	float DeltaSeconds;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector OldLocation;  // 0x8 (0x8)
	struct FVector OldVelocity;  // 0x20 (0x20)


}; 
 
 // Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.OnRep_TrappedCharacter
struct FOnRep_TrappedCharacter
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x1 (0x1)
	char pad_2[6];  // 0x2 (0x2)
	struct USceneComponent* CallFunc_GetAttachParent_ReturnValue;  // 0x8 (0x8)
	struct FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult;  // 0x10 (0x10)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xF8 (0xF8)
	char pad_249[7];  // 0xF9 (0xF9)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x100 (0x100)
	char pad_432_1 : 7;  // 0x1B0 (0x1B0)
	bool CallFunc_K2_AttachToComponent_ReturnValue : 1;  // 0x1B0 (0x1B0)
	char pad_433[7];  // 0x1B1 (0x1B1)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x1B8 (0x1B8)
	struct UDCCharacterMovementComponent* K2Node_DynamicCast_AsDCCharacter_Movement_Component;  // 0x1D0 (0x1D0)
	char pad_472_1 : 7;  // 0x1D8 (0x1D8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x1D8 (0x1D8)
	char pad_473[3];  // 0x1D9 (0x1D9)
	float CallFunc_SetIsTrapped_InTrapRange_ImplicitCast;  // 0x1DC (0x1DC)


}; 
 
 