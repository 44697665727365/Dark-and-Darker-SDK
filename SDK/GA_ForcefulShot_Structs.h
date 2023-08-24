#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_ForcefulShot.GA_ForcefulShot_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_ForcefulShot.GA_ForcefulShot_C.ExecuteUbergraph_GA_ForcefulShot
struct FExecuteUbergraph_GA_ForcefulShot
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x10 (0x10)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x18 (0x18)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xC8 (0xC8)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD8 (0xD8)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x188 (0x188)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x190 (0x190)
	char pad_408_1 : 7;  // 0x198 (0x198)
	bool CallFunc_HasTag_ReturnValue : 1;  // 0x198 (0x198)
	char pad_409_1 : 7;  // 0x199 (0x199)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x199 (0x199)
	char pad_410[6];  // 0x19A (0x19A)
	struct FHitResult CallFunc_EffectContextGetHitResult_ReturnValue;  // 0x1A0 (0x1A0)
	char pad_648_1 : 7;  // 0x288 (0x288)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x288 (0x288)
	char pad_649_1 : 7;  // 0x289 (0x289)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x289 (0x289)
	char pad_650[2];  // 0x28A (0x28A)
	float CallFunc_BreakHitResult_Time;  // 0x28C (0x28C)
	float CallFunc_BreakHitResult_Distance;  // 0x290 (0x290)
	char pad_660[4];  // 0x294 (0x294)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x298 (0x298)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x2B0 (0x2B0)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x2C8 (0x2C8)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x2E0 (0x2E0)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x2F8 (0x2F8)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x300 (0x300)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x308 (0x308)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x310 (0x310)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x318 (0x318)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x320 (0x320)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x324 (0x324)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x328 (0x328)
	char pad_812[4];  // 0x32C (0x32C)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x330 (0x330)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x348 (0x348)
	char pad_864_1 : 7;  // 0x360 (0x360)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0x360 (0x360)
	char pad_865[7];  // 0x361 (0x361)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue;  // 0x368 (0x368)
	char pad_896_1 : 7;  // 0x380 (0x380)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x380 (0x380)
	char pad_897[7];  // 0x381 (0x381)
	struct FVector CallFunc_Normal_ReturnValue;  // 0x388 (0x388)
	char pad_928_1 : 7;  // 0x3A0 (0x3A0)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x3A0 (0x3A0)
	char pad_929[7];  // 0x3A1 (0x3A1)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x3A8 (0x3A8)
	char pad_1112_1 : 7;  // 0x458 (0x458)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x458 (0x458)


}; 
 
 // Function GA_ForcefulShot.GA_ForcefulShot_C.EventReceived_71BD8AA2429E3C9F1C2813B20526FB8E
struct FEventReceived_71BD8AA2429E3C9F1C2813B20526FB8E
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_ForcefulShot.GA_ForcefulShot_C.On Launch Character
struct FOn Launch Character
{
	struct AActor* TargetActor;  // 0x0 (0x0)
	struct FVector HitDirection;  // 0x8 (0x8)
	struct FDesignDataSkill CallFunc_GetCurrentDesignDataSkill_ReturnValue;  // 0x20 (0x20)
	struct AActor* CallFunc_GetAttachParentActor_ReturnValue;  // 0xE8 (0xE8)
	struct ACharacter* K2Node_DynamicCast_As___;  // 0xF0 (0xF0)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xF8 (0xF8)
	char pad_249[7];  // 0xF9 (0xF9)
	struct FVector CallFunc_Conv_IntToVector_ReturnValue;  // 0x100 (0x100)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x118 (0x118)
	double CallFunc_Conv_IntToDouble_ReturnValue;  // 0x130 (0x130)
	struct ACharacter* K2Node_DynamicCast_As____2;  // 0x138 (0x138)
	char pad_320_1 : 7;  // 0x140 (0x140)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x140 (0x140)
	char pad_321[7];  // 0x141 (0x141)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x148 (0x148)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x160 (0x160)


}; 
 
 