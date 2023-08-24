#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_WeakpointAttack.GA_WeakpointAttack_C.EventReceived_8E6DDD2E4967A9D071A2EAACDCDADCEE
struct FEventReceived_8E6DDD2E4967A9D071A2EAACDCDADCEE
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_WeakpointAttack.GA_WeakpointAttack_C.ExecuteUbergraph_GA_WeakpointAttack
struct FExecuteUbergraph_GA_WeakpointAttack
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x4 (0x4)
	char pad_12[4];  // 0xC (0xC)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x10 (0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xC0 (0xC0)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD0 (0xD0)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x180 (0x180)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x188 (0x188)
	struct FHitResult CallFunc_GetHitResultFromTargetData_ReturnValue;  // 0x190 (0x190)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x278 (0x278)
	char pad_633_1 : 7;  // 0x279 (0x279)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x279 (0x279)
	char pad_634[2];  // 0x27A (0x27A)
	float CallFunc_BreakHitResult_Time;  // 0x27C (0x27C)
	float CallFunc_BreakHitResult_Distance;  // 0x280 (0x280)
	char pad_644[4];  // 0x284 (0x284)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x288 (0x288)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x2A0 (0x2A0)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x2B8 (0x2B8)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x2D0 (0x2D0)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x2E8 (0x2E8)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x2F0 (0x2F0)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x2F8 (0x2F8)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x300 (0x300)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x308 (0x308)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x310 (0x310)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x314 (0x314)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x318 (0x318)
	char pad_796[4];  // 0x31C (0x31C)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x320 (0x320)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x338 (0x338)
	char pad_848_1 : 7;  // 0x350 (0x350)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x350 (0x350)
	char pad_849[7];  // 0x351 (0x351)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x358 (0x358)
	struct FGameplayTag K2Node_Event_SkillTag;  // 0x360 (0x360)
	struct FGameplayTag K2Node_Event_CooldownTag;  // 0x368 (0x368)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x370 (0x370)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x420 (0x420)


}; 
 
 // Function GA_WeakpointAttack.GA_WeakpointAttack_C.ServerOnSkillActivate
// Size: 0x10(Inherited: 0x10)
struct FServerOnSkillActivate : FServerOnSkillActivate
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	struct FGameplayTag CooldownTag;  // 0x8 (0x8)


}; 
 
 