#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_MagicMissileProjectile.BP_MagicMissileProjectile_C.BndEvt__BP_MagicMissileProjectile_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct FBndEvt__BP_MagicMissileProjectile_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
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
 
 // Function BP_MagicMissileProjectile.BP_MagicMissileProjectile_C.ExecuteUbergraph_BP_MagicMissileProjectile
struct FExecuteUbergraph_BP_MagicMissileProjectile
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate Temp_delegate_Variable;  // 0x4 (0x4)
	struct FDelegate Temp_delegate_Variable_2;  // 0x14 (0x14)
	struct FDelegate Temp_delegate_Variable_3;  // 0x24 (0x24)
	int32_t CallFunc_PostAkEvent_ReturnValue;  // 0x34 (0x34)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x38 (0x38)
	int32_t K2Node_Event_InCount;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent;  // 0x48 (0x48)
	struct AActor* K2Node_ComponentBoundEvent_OtherActor;  // 0x50 (0x50)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp;  // 0x58 (0x58)
	int32_t K2Node_ComponentBoundEvent_OtherBodyIndex;  // 0x60 (0x60)
	char pad_100_1 : 7;  // 0x64 (0x64)
	bool K2Node_ComponentBoundEvent_bFromSweep : 1;  // 0x64 (0x64)
	char pad_101[3];  // 0x65 (0x65)
	struct FHitResult K2Node_ComponentBoundEvent_SweepResult;  // 0x68 (0x68)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character;  // 0x150 (0x150)
	char pad_344_1 : 7;  // 0x158 (0x158)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x158 (0x158)
	char pad_345_1 : 7;  // 0x159 (0x159)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x159 (0x159)
	char pad_346_1 : 7;  // 0x15A (0x15A)
	bool CallFunc_IsLocallyControlled_ReturnValue : 1;  // 0x15A (0x15A)
	char pad_347_1 : 7;  // 0x15B (0x15B)
	bool CallFunc_MatchesTag_ReturnValue : 1;  // 0x15B (0x15B)
	enum class EEndPlayReason K2Node_Event_EndPlayReason;  // 0x15C (0x15C)
	char pad_349[3];  // 0x15D (0x15D)
	int32_t CallFunc_PostAkEvent_ReturnValue_2;  // 0x160 (0x160)
	int32_t CallFunc_PostAkEvent_ReturnValue_3;  // 0x164 (0x164)


}; 
 
 // Function BP_MagicMissileProjectile.BP_MagicMissileProjectile_C.ReceiveEndPlay
// Size: 0x1(Inherited: 0x1)
struct FReceiveEndPlay : FReceiveEndPlay
{
	enum class EEndPlayReason EndPlayReason;  // 0x0 (0x0)


}; 
 
 // Function BP_MagicMissileProjectile.BP_MagicMissileProjectile_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 