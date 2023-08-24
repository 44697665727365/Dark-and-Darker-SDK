#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_FloorPortalScrollBase.BP_FloorPortalScrollBase_C.ClosePortalScroll
// Size: 0x8(Inherited: 0x8)
struct FClosePortalScroll : FClosePortalScroll
{
	struct ADCPlayerCharacterBase* Character;  // 0x0 (0x0)


}; 
 
 // Function BP_FloorPortalScrollBase.BP_FloorPortalScrollBase_C.BndEvt__BP_FloorPortalScrollBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct FBndEvt__BP_FloorPortalScrollBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
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
 
 // Function BP_FloorPortalScrollBase.BP_FloorPortalScrollBase_C.ExecuteUbergraph_BP_FloorPortalScrollBase
struct FExecuteUbergraph_BP_FloorPortalScrollBase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* K2Node_Event_Interacter;  // 0x8 (0x8)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x10 (0x10)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x18 (0x18)
	struct FHitResult K2Node_Event_HitResult;  // 0x20 (0x20)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent;  // 0x108 (0x108)
	struct AActor* K2Node_ComponentBoundEvent_OtherActor;  // 0x110 (0x110)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp;  // 0x118 (0x118)
	int32_t K2Node_ComponentBoundEvent_OtherBodyIndex;  // 0x120 (0x120)
	char pad_292_1 : 7;  // 0x124 (0x124)
	bool K2Node_ComponentBoundEvent_bFromSweep : 1;  // 0x124 (0x124)
	char pad_293[3];  // 0x125 (0x125)
	struct FHitResult K2Node_ComponentBoundEvent_SweepResult;  // 0x128 (0x128)
	char pad_528_1 : 7;  // 0x210 (0x210)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x210 (0x210)
	char pad_529[7];  // 0x211 (0x211)
	struct ADCPlayerCharacterBase* K2Node_DynamicCast_AsDCPlayer_Character_Base;  // 0x218 (0x218)
	char pad_544_1 : 7;  // 0x220 (0x220)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x220 (0x220)
	char pad_545[7];  // 0x221 (0x221)
	struct AController* CallFunc_GetController_ReturnValue;  // 0x228 (0x228)
	struct ADCPlayerController* K2Node_DynamicCast_AsDCPlayer_Controller;  // 0x230 (0x230)
	char pad_568_1 : 7;  // 0x238 (0x238)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x238 (0x238)
	char pad_569[7];  // 0x239 (0x239)
	struct ADCPlayerCharacterBase* K2Node_CustomEvent_PlayerCharacter;  // 0x240 (0x240)
	struct FLinearColor Temp_struct_Variable;  // 0x248 (0x248)
	char pad_600_1 : 7;  // 0x258 (0x258)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x258 (0x258)
	char pad_601[7];  // 0x259 (0x259)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x260 (0x260)
	struct AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;  // 0x2C0 (0x2C0)
	struct UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue;  // 0x2C8 (0x2C8)
	struct ABP_GhostTrailActor_C* CallFunc_FinishSpawningActor_ReturnValue;  // 0x2D0 (0x2D0)
	struct ADCPlayerCharacterBase* K2Node_Event_Character;  // 0x2D8 (0x2D8)


}; 
 
 // Function BP_FloorPortalScrollBase.BP_FloorPortalScrollBase_C.FX_PlayerPortalInteraction
struct FFX_PlayerPortalInteraction
{
	struct ADCPlayerCharacterBase* PlayerCharacter;  // 0x0 (0x0)


}; 
 
 // Function BP_FloorPortalScrollBase.BP_FloorPortalScrollBase_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 