#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_InfernoTorch_01_On.BP_InfernoTorch_01_On_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
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
 
 // Function BP_InfernoTorch_01_On.BP_InfernoTorch_01_On_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct FBndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)


}; 
 
 // Function BP_InfernoTorch_01_On.BP_InfernoTorch_01_On_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 // Function BP_InfernoTorch_01_On.BP_InfernoTorch_01_On_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // Function BP_InfernoTorch_01_On.BP_InfernoTorch_01_On_C.ExecuteUbergraph_BP_InfernoTorch_01_On
struct FExecuteUbergraph_BP_InfernoTorch_01_On
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate Temp_delegate_Variable;  // 0x4 (0x4)
	struct FDelegate Temp_delegate_Variable_2;  // 0x14 (0x14)
	struct FDelegate Temp_delegate_Variable_3;  // 0x24 (0x24)
	struct FDelegate Temp_delegate_Variable_4;  // 0x34 (0x34)
	struct FDelegate Temp_delegate_Variable_5;  // 0x44 (0x44)
	struct FDelegate Temp_delegate_Variable_6;  // 0x54 (0x54)
	char pad_100[4];  // 0x64 (0x64)
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
	char pad_377_1 : 7;  // 0x179 (0x179)
	bool CallFunc_IsLocallyControlled_ReturnValue : 1;  // 0x179 (0x179)
	char pad_378[6];  // 0x17A (0x17A)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent;  // 0x180 (0x180)
	struct AActor* K2Node_ComponentBoundEvent_OtherActor;  // 0x188 (0x188)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp;  // 0x190 (0x190)
	int32_t K2Node_ComponentBoundEvent_OtherBodyIndex;  // 0x198 (0x198)
	char pad_412[4];  // 0x19C (0x19C)
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
	char pad_706[2];  // 0x2C2 (0x2C2)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x2C4 (0x2C4)
	int32_t K2Node_Event_InCount;  // 0x2CC (0x2CC)
	char pad_720_1 : 7;  // 0x2D0 (0x2D0)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x2D0 (0x2D0)
	char pad_721[3];  // 0x2D1 (0x2D1)
	int32_t CallFunc_PostAkEvent_ReturnValue;  // 0x2D4 (0x2D4)
	int32_t CallFunc_PostAkEvent_ReturnValue_2;  // 0x2D8 (0x2D8)
	char pad_732_1 : 7;  // 0x2DC (0x2DC)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x2DC (0x2DC)
	char pad_733[3];  // 0x2DD (0x2DD)
	int32_t CallFunc_PostAkEvent_ReturnValue_3;  // 0x2E0 (0x2E0)
	int32_t CallFunc_PostAkEvent_ReturnValue_4;  // 0x2E4 (0x2E4)
	int32_t CallFunc_PostAkEvent_ReturnValue_5;  // 0x2E8 (0x2E8)
	int32_t CallFunc_PostAkEvent_ReturnValue_6;  // 0x2EC (0x2EC)


}; 
 
 