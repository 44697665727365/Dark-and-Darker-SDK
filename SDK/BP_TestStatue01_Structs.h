#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_TestStatue01.BP_TestStatue01_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
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
 
 // Function BP_TestStatue01.BP_TestStatue01_C.ExecuteUbergraph_BP_TestStatue01
struct FExecuteUbergraph_BP_TestStatue01
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate Temp_delegate_Variable;  // 0x4 (0x4)
	struct FDelegate Temp_delegate_Variable_2;  // 0x14 (0x14)
	struct FDelegate Temp_delegate_Variable_3;  // 0x24 (0x24)
	struct FDelegate Temp_delegate_Variable_4;  // 0x34 (0x34)
	struct FDelegate Temp_delegate_Variable_5;  // 0x44 (0x44)
	struct FDelegate Temp_delegate_Variable_6;  // 0x54 (0x54)
	int32_t CallFunc_PostAkEvent_ReturnValue;  // 0x64 (0x64)
	int32_t CallFunc_PostAkEvent_ReturnValue_2;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2;  // 0x70 (0x70)
	struct AActor* K2Node_ComponentBoundEvent_OtherActor_2;  // 0x78 (0x78)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2;  // 0x80 (0x80)
	int32_t K2Node_ComponentBoundEvent_OtherBodyIndex_2;  // 0x88 (0x88)
	char pad_140_1 : 7;  // 0x8C (0x8C)
	bool K2Node_ComponentBoundEvent_bFromSweep : 1;  // 0x8C (0x8C)
	char pad_141[3];  // 0x8D (0x8D)
	struct FHitResult K2Node_ComponentBoundEvent_SweepResult;  // 0x90 (0x90)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character;  // 0x178 (0x178)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x180 (0x180)
	char pad_385[7];  // 0x181 (0x181)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent;  // 0x188 (0x188)
	struct AActor* K2Node_ComponentBoundEvent_OtherActor;  // 0x190 (0x190)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp;  // 0x198 (0x198)
	int32_t K2Node_ComponentBoundEvent_OtherBodyIndex;  // 0x1A0 (0x1A0)
	char pad_420_1 : 7;  // 0x1A4 (0x1A4)
	bool CallFunc_IsLocallyControlled_ReturnValue : 1;  // 0x1A4 (0x1A4)
	char pad_421[3];  // 0x1A5 (0x1A5)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character_2;  // 0x1A8 (0x1A8)
	char pad_432_1 : 7;  // 0x1B0 (0x1B0)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x1B0 (0x1B0)
	char pad_433_1 : 7;  // 0x1B1 (0x1B1)
	bool CallFunc_IsLocallyControlled_ReturnValue_2 : 1;  // 0x1B1 (0x1B1)
	char pad_434[6];  // 0x1B2 (0x1B2)
	struct AActor* K2Node_Event_Interacter;  // 0x1B8 (0x1B8)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x1C0 (0x1C0)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x1C8 (0x1C8)
	struct FHitResult K2Node_Event_HitResult;  // 0x1D0 (0x1D0)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x2B8 (0x2B8)
	char pad_712_1 : 7;  // 0x2C8 (0x2C8)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x2C8 (0x2C8)
	char pad_713_1 : 7;  // 0x2C9 (0x2C9)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x2C9 (0x2C9)
	char pad_714[6];  // 0x2CA (0x2CA)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x2D0 (0x2D0)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x380 (0x380)
	int32_t K2Node_Event_InCount;  // 0x388 (0x388)
	char pad_908_1 : 7;  // 0x38C (0x38C)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x38C (0x38C)
	char pad_909_1 : 7;  // 0x38D (0x38D)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x38D (0x38D)
	char pad_910[2];  // 0x38E (0x38E)
	int32_t CallFunc_PostAkEvent_ReturnValue_3;  // 0x390 (0x390)
	int32_t CallFunc_PostAkEvent_ReturnValue_4;  // 0x394 (0x394)
	int32_t CallFunc_PostAkEvent_ReturnValue_5;  // 0x398 (0x398)
	int32_t CallFunc_PostAkEvent_ReturnValue_6;  // 0x39C (0x39C)
	float CallFunc_Delay_Duration_ImplicitCast;  // 0x3A0 (0x3A0)


}; 
 
 // Function BP_TestStatue01.BP_TestStatue01_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct FBndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)


}; 
 
 // Function BP_TestStatue01.BP_TestStatue01_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 // Function BP_TestStatue01.BP_TestStatue01_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 