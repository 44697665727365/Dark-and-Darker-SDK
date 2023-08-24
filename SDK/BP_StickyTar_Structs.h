#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_StickyTar.BP_StickyTar_C.EventCollisionOverlapEnd
struct FEventCollisionOverlapEnd
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)


}; 
 
 // Function BP_StickyTar.BP_StickyTar_C.EventCollisionOverlapBegin
struct FEventCollisionOverlapBegin
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
 
 // Function BP_StickyTar.BP_StickyTar_C.ExecuteUbergraph_BP_StickyTar
struct FExecuteUbergraph_BP_StickyTar
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent_2;  // 0x8 (0x8)
	struct AActor* K2Node_CustomEvent_OtherActor_2;  // 0x10 (0x10)
	struct UPrimitiveComponent* K2Node_CustomEvent_OtherComp_2;  // 0x18 (0x18)
	int32_t K2Node_CustomEvent_OtherBodyIndex_2;  // 0x20 (0x20)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool K2Node_CustomEvent_bFromSweep : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	struct FHitResult K2Node_CustomEvent_SweepResult;  // 0x28 (0x28)
	struct UDCCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue;  // 0x110 (0x110)
	struct UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent;  // 0x118 (0x118)
	struct AActor* K2Node_CustomEvent_OtherActor;  // 0x120 (0x120)
	struct UPrimitiveComponent* K2Node_CustomEvent_OtherComp;  // 0x128 (0x128)
	int32_t K2Node_CustomEvent_OtherBodyIndex;  // 0x130 (0x130)
	char pad_308_1 : 7;  // 0x134 (0x134)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x134 (0x134)
	char pad_309[3];  // 0x135 (0x135)
	struct UDCCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_2;  // 0x138 (0x138)
	char pad_320_1 : 7;  // 0x140 (0x140)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x140 (0x140)
	char pad_321[7];  // 0x141 (0x141)
	struct TArray<struct FPrimaryAssetId> K2Node_MakeArray_Array;  // 0x148 (0x148)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x158 (0x158)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x168 (0x168)


}; 
 
 // Function BP_StickyTar.BP_StickyTar_C.OnTrapActivate
struct FOnTrapActivate
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool CallFunc_NotEqual_GameplayTag_ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 