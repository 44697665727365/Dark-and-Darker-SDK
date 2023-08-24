#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_Statue02.BP_Statue02_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
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
 
 // Function BP_Statue02.BP_Statue02_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct FBndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)


}; 
 
 // Function BP_Statue02.BP_Statue02_C.ExecuteUbergraph_BP_Statue02
struct FExecuteUbergraph_BP_Statue02
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue;  // 0x8 (0x8)
	struct FDelegate Temp_delegate_Variable;  // 0x10 (0x10)
	struct FDelegate Temp_delegate_Variable_2;  // 0x20 (0x20)
	struct FDelegate Temp_delegate_Variable_3;  // 0x30 (0x30)
	struct FDelegate Temp_delegate_Variable_4;  // 0x40 (0x40)
	struct FDelegate Temp_delegate_Variable_5;  // 0x50 (0x50)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2;  // 0x68 (0x68)
	struct AActor* K2Node_ComponentBoundEvent_OtherActor_2;  // 0x70 (0x70)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2;  // 0x78 (0x78)
	int32_t K2Node_ComponentBoundEvent_OtherBodyIndex_2;  // 0x80 (0x80)
	char pad_132_1 : 7;  // 0x84 (0x84)
	bool K2Node_ComponentBoundEvent_bFromSweep : 1;  // 0x84 (0x84)
	char pad_133[3];  // 0x85 (0x85)
	struct FHitResult K2Node_ComponentBoundEvent_SweepResult;  // 0x88 (0x88)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character;  // 0x170 (0x170)
	char pad_376_1 : 7;  // 0x178 (0x178)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x178 (0x178)
	char pad_377[7];  // 0x179 (0x179)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent;  // 0x180 (0x180)
	struct AActor* K2Node_ComponentBoundEvent_OtherActor;  // 0x188 (0x188)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp;  // 0x190 (0x190)
	int32_t K2Node_ComponentBoundEvent_OtherBodyIndex;  // [x198 ([0004)
	char pad_412_1 : 7;  // 0x19C (0x19C)
	bool CallFunc_IsLocallyControlled_ReturnValue : 1;  // 0x19C (0x19C)
	char pad_413[3];  // 0x19D (0x19D)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character_2;  // 0x1A0 (0x1A0)
	char pad_424_1 : 7;  // 0x1A8 (0x1A8)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x1A8 (0x1A8)
	char pad_425_1 : 7;  // 0x1A9 (0x1A9)
	bool CallFunc_IsLocallyControlled_ReturnValue_2 : 1;  // 0x1A9 (0x1A9)
	char pad_426[6];  // 0x1AA (0x1AA)
	struct AActor* K2Node_Event_Interacter;  // 0x1B0 (0x1B0)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x1B8 (0x1B8)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x1C0 (0x1C0)
	struct FHitResult K2Node_Event_HitResult;  // 0x1C8 (0x1C8)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x2B0 (0x2B0)
	char pad_704_1 : 7;  // 0x2C0 (0x2C0)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x2C0 (0x2C0)
	char pad_705_1 : 7;  // 0x2C1 (0x2C1)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x2C1 (0x2C1)
	char pad_706[6];  // 0x2C2 (0x2C2)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x2C8 (0x2C8)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x378 (0x378)
	int32_t K2Node_Event_InCount;  // 0x380 (0x380)
	char pad_900_1 : 7;  // 0x384 (0x384)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x384 (0x384)
	char pad_901_1 : 7;  // 0x385 (0x385)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x385 (0x385)
	char pad_902[2];  // 0x386 (0x386)
	int32_t CallFunc_PostAkEvent_ReturnValue;  // 0x388 (0x388)
	int32_t CallFunc_PostAkEvent_ReturnValue_2;  // 0x38C (0x38C)
	int32_t CallFunc_PostAkEvent_ReturnValue_3;  // 0x390 (0x390)
	int32_t CallFunc_PostAkEvent_ReturnValue_4;  // 0x394 (0x394)
	int32_t CallFunc_PostAkEvent_ReturnValue_5;  // 0x398 (0x398)
	char pad_924[4];  // 0x39C (0x39C)
	struct FVector CallFunc_K2_GetComponentLocation_ReturnValue;  // 0x3A0 (0x3A0)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x3B8 (0x3B8)
	float CallFunc_Delay_Duration_ImplicitCast;  // 0x490 (0x490)


}; 
 
 // Function BP_Statue02.BP_Statue02_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 // Function BP_Statue02.BP_Statue02_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 