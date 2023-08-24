#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_Statue03.BP_Statue03_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct FBndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
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
 
 // Function BP_Statue03.BP_Statue03_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct FBndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)


}; 
 
 // Function BP_Statue03.BP_Statue03_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 // Function BP_Statue03.BP_Statue03_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // Function BP_Statue03.BP_Statue03_C.ExecuteUbergraph_BP_Statue03
struct FExecuteUbergraph_BP_Statue03
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate Temp_delegate_Variable;  // 0x4 (0x4)
	struct FDelegate Temp_delegate_Variable_2;  // 0x14 (0x14)
	struct FDelegate Temp_delegate_Variable_3;  // 0x24 (0x24)
	struct FDelegate Temp_delegate_Variable_4;  // 0x34 (0x34)
	struct FDelegate Temp_delegate_Variable_5;  // 0x44 (0x44)
	char pad_84[4];  // 0x54 (0x54)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2;  // 0x58 (0x58)
	struct AActor* K2Node_ComponentBoundEvent_OtherActor_2;  // 0x60 (0x60)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2;  // 0x68 (0x68)
	int32_t K2Node_ComponentBoundEvent_OtherBodyIndex_2;  // 0x70 (0x70)
	char pad_116_1 : 7;  // 0x74 (0x74)
	bool K2Node_ComponentBoundEvent_bFromSweep : 1;  // 0x74 (0x74)
	char pad_117[3];  // 0x75 (0x75)
	struct FHitResult K2Node_ComponentBoundEvent_SweepResult;  // 0x78 (0x78)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character;  // 0x160 (0x160)
	char pad_360_1 : 7;  // 0x168 (0x168)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x168 (0x168)
	char pad_361[7];  // 0x169 (0x169)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent;  // 0x170 (0x170)
	struct AActor* K2Node_ComponentBoundEvent_OtherActor;  // 0x178 (0x178)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp;  // 0x180 (0x180)
	int32_t K2Node_ComponentBoundEvent_OtherBodyIndex;  // 0x188 (0x188)
	char pad_396_1 : 7;  // 0x18C (0x18C)
	bool CallFunc_IsLocallyControlled_ReturnValue : 1;  // 0x18C (0x18C)
	char pad_397[3];  // 0x18D (0x18D)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character_2;  // 0x190 (0x190)
	char pad_408_1 : 7;  // 0x198 (0x198)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x198 (0x198)
	char pad_409_1 : 7;  // 0x199 (0x199)
	bool CallFunc_IsLocallyControlled_ReturnValue_2 : 1;  // 0x199 (0x199)
	char pad_410[6];  // 0x19A (0x19A)
	struct AActor* K2Node_Event_Interacter;  // 0x1A0 (0x1A0)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x1A8 (0x1A8)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x1B0 (0x1B0)
	struct FHitResult K2Node_Event_HitResult;  // 0x1B8 (0x1B8)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x2A0 (0x2A0)
	char pad_688_1 : 7;  // 0x2B0 (0x2B0)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x2B0 (0x2B0)
	char pad_689_1 : 7;  // 0x2B1 (0x2B1)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x2B1 (0x2B1)
	char pad_690[6];  // 0x2B2 (0x2B2)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x2B8 (0x2B8)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x368 (0x368)
	int32_t K2Node_Event_InCount;  // 0x370 (0x370)
	char pad_884_1 : 7;  // 0x374 (0x374)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x374 (0x374)
	char pad_885_1 : 7;  // 0x375 (0x375)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x375 (0x375)
	char pad_886[2];  // 0x376 (0x376)
	int32_t CallFunc_PostAkEvent_ReturnValue;  // 0x378 (0x378)
	int32_t CallFunc_PostAkEvent_ReturnValue_2;  // 0x37C (0x37C)
	int32_t CallFunc_PostAkEvent_ReturnValue_3;  // 0x380 (0x380)
	int32_t CallFunc_PostAkEvent_ReturnValue_4;  // 0x384 (0x384)
	int32_t CallFunc_PostAkEvent_ReturnValue_5;  // 0x388 (0x388)
	char pad_908[4];  // 0x38C (0x38C)
	struct FVector CallFunc_K2_GetComponentLocation_ReturnValue;  // 0x390 (0x390)
	struct USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue;  // 0x3A8 (0x3A8)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x3B0 (0x3B0)
	float CallFunc_Delay_Duration_ImplicitCast;  // 0x488 (0x488)


}; 
 
 