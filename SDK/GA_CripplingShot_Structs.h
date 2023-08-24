#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_CripplingShot.GA_CripplingShot_C.EventReceived_403A7EA145A71A33FE20CCBE7CD5A052
struct FEventReceived_403A7EA145A71A33FE20CCBE7CD5A052
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_CripplingShot.GA_CripplingShot_C.ExecuteUbergraph_GA_CripplingShot
struct FExecuteUbergraph_GA_CripplingShot
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x10 (0x10)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x18 (0x18)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xC8 (0xC8)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD8 (0xD8)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x188 (0x188)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x190 (0x190)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x1A0 (0x1A0)
	char pad_424_1 : 7;  // 0x1A8 (0x1A8)
	bool CallFunc_HasTag_ReturnValue : 1;  // 0x1A8 (0x1A8)
	char pad_425_1 : 7;  // 0x1A9 (0x1A9)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x1A9 (0x1A9)
	char pad_426[6];  // 0x1AA (0x1AA)
	struct FHitResult CallFunc_EffectContextGetHitResult_ReturnValue;  // 0x1B0 (0x1B0)
	char pad_664_1 : 7;  // 0x298 (0x298)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x298 (0x298)
	char pad_665_1 : 7;  // 0x299 (0x299)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x299 (0x299)
	char pad_666[2];  // 0x29A (0x29A)
	float CallFunc_BreakHitResult_Time;  // 0x29C (0x29C)
	float CallFunc_BreakHitResult_Distance;  // 0x2A0 (0x2A0)
	char pad_676[4];  // 0x2A4 (0x2A4)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x2A8 (0x2A8)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x2C0 (0x2C0)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x2D8 (0x2D8)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x2F0 (0x2F0)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x308 (0x308)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x310 (0x310)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x318 (0x318)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x320 (0x320)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x328 (0x328)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x330 (0x330)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x334 (0x334)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x338 (0x338)
	char pad_828[4];  // 0x33C (0x33C)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x340 (0x340)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x358 (0x358)
	char pad_880_1 : 7;  // 0x370 (0x370)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0x370 (0x370)
	char pad_881[7];  // 0x371 (0x371)
	struct UDCHitBoxComponent* K2Node_DynamicCast_AsDCHit_Box_Component;  // 0x378 (0x378)
	char pad_896_1 : 7;  // 0x380 (0x380)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x380 (0x380)
	char pad_897_1 : 7;  // 0x381 (0x381)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x381 (0x381)
	char pad_898_1 : 7;  // 0x382 (0x382)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x382 (0x382)
	char pad_899_1 : 7;  // 0x383 (0x383)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x383 (0x383)


}; 
 
 