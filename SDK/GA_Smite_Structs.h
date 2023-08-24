#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Smite.GA_Smite_C.EventReceived_6E6CA3954E759AB441086385A5A2E81E
struct FEventReceived_6E6CA3954E759AB441086385A5A2E81E
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_Smite.GA_Smite_C.ExecuteUbergraph_GA_Smite
struct FExecuteUbergraph_GA_Smite
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
	struct FHitResult CallFunc_EffectContextGetHitResult_ReturnValue;  // 0x198 (0x198)
	char pad_640_1 : 7;  // 0x280 (0x280)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x280 (0x280)
	char pad_641_1 : 7;  // 0x281 (0x281)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x281 (0x281)
	char pad_642[2];  // 0x282 (0x282)
	float CallFunc_BreakHitResult_Time;  // 0x284 (0x284)
	float CallFunc_BreakHitResult_Distance;  // 0x288 (0x288)
	char pad_652[4];  // 0x28C (0x28C)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x290 (0x290)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x2A8 (0x2A8)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x2C0 (0x2C0)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x2D8 (0x2D8)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x2F0 (0x2F0)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x2F8 (0x2F8)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x300 (0x300)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x308 (0x308)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x310 (0x310)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x318 (0x318)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x31C (0x31C)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x320 (0x320)
	char pad_804[4];  // 0x324 (0x324)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x328 (0x328)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x340 (0x340)
	char pad_856_1 : 7;  // 0x358 (0x358)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x358 (0x358)
	char pad_857_1 : 7;  // 0x359 (0x359)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0x359 (0x359)
	char pad_858[6];  // 0x35A (0x35A)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x360 (0x360)
	struct FGameplayTag K2Node_Event_SkillTag;  // 0x368 (0x368)
	struct FGameplayTag K2Node_Event_CooldownTag;  // 0x370 (0x370)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x378 (0x378)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x428 (0x428)


}; 
 
 // Function GA_Smite.GA_Smite_C.ServerOnSkillActivate
// Size: 0x10(Inherited: 0x10)
struct FServerOnSkillActivate : FServerOnSkillActivate
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	struct FGameplayTag CooldownTag;  // 0x8 (0x8)


}; 
 
 