#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_BlowofCorruption.GA_BlowofCorruption_C.EventReceived_5E5E3A7C42347ABBDD4C419FB0CE7488
struct FEventReceived_5E5E3A7C42347ABBDD4C419FB0CE7488
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_BlowofCorruption.GA_BlowofCorruption_C.ExecuteUbergraph_GA_BlowofCorruption
struct FExecuteUbergraph_GA_BlowofCorruption
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x4 (0x4)
	char pad_12[4];  // 0xC (0xC)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x10 (0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xC0 (0xC0)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD0 (0xD0)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x180 (0x180)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x188 (0x188)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x198 (0x198)
	struct FHitResult CallFunc_GetHitResultFromTargetData_ReturnValue;  // 0x1A0 (0x1A0)
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
	struct USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue;  // 0x360 (0x360)
	char pad_872_1 : 7;  // 0x368 (0x368)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x368 (0x368)
	char pad_873_1 : 7;  // 0x369 (0x369)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x369 (0x369)
	char pad_874[2];  // 0x36A (0x36A)
	struct FGameplayTag K2Node_Event_SkillTag;  // 0x36C (0x36C)
	struct FGameplayTag K2Node_Event_CooldownTag;  // 0x374 (0x374)
	char pad_892[4];  // 0x37C (0x37C)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x380 (0x380)
	struct UObject* CallFunc_EffectContextGetSourceObject_ReturnValue;  // 0x388 (0x388)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x390 (0x390)


}; 
 
 // Function GA_BlowofCorruption.GA_BlowofCorruption_C.ServerOnSkillActivate
// Size: 0x10(Inherited: 0x10)
struct FServerOnSkillActivate : FServerOnSkillActivate
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	struct FGameplayTag CooldownTag;  // 0x8 (0x8)


}; 
 
 