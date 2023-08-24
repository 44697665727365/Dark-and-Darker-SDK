#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_CaveTroll.BP_CaveTroll_C.ExecuteUbergraph_BP_CaveTroll
struct FExecuteUbergraph_BP_CaveTroll
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x4 (0x4)
	char pad_12[4];  // 0xC (0xC)
	struct FGameplayEventData K2Node_CustomEvent_Payload_2;  // 0x10 (0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xC0 (0xC0)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD0 (0xD0)
	struct UAbilityAsync_WaitGameplayEvent* CallFunc_WaitGameplayEventToActor_ReturnValue;  // 0x180 (0x180)
	char pad_392_1 : 7;  // 0x188 (0x188)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x188 (0x188)
	char pad_393[3];  // 0x189 (0x189)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x18C (0x18C)
	char pad_412[4];  // 0x19C (0x19C)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x1A0 (0x1A0)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x250 (0x250)
	struct UAbilityAsync_WaitGameplayEvent* CallFunc_WaitGameplayEventToActor_ReturnValue_2;  // 0x300 (0x300)
	char pad_776_1 : 7;  // 0x308 (0x308)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x308 (0x308)
	char pad_777[7];  // 0x309 (0x309)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x310 (0x310)
	struct FName CallFunc_MakeLiteralName_ReturnValue_2;  // 0x318 (0x318)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x320 (0x320)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x338 (0x338)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2;  // 0x350 (0x350)


}; 
 
 // Function BP_CaveTroll.BP_CaveTroll_C.EventReceived_0B96BE9F4BE2B9A385CB12AAB43A0BC6
struct FEventReceived_0B96BE9F4BE2B9A385CB12AAB43A0BC6
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function BP_CaveTroll.BP_CaveTroll_C.EventReceived_91854E014BDF1001DBBDF39E92099E75
struct FEventReceived_91854E014BDF1001DBBDF39E92099E75
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function BP_CaveTroll.BP_CaveTroll_C.Trigger In Overlap NPT Area
// Size: 0x1C8(Inherited: 0x136)
struct FTrigger In Overlap NPT Area : FTrigger In Overlap NPT Area
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)
	char pad_338_1 : 7;  // 0x152 (0x152)
	bool bFromSweep : 1;  // 0x1C (0x1C)
	struct FHitResult SweepResult;  // 0x20 (0x20)
	struct APavisePropBase* K2Node_DynamicCast_AsPavise_Prop_Base;  // 0x108 (0x108)
	char pad_579_1 : 7;  // 0x243 (0x243)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x110 (0x110)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x118 (0x118)


}; 
 
 