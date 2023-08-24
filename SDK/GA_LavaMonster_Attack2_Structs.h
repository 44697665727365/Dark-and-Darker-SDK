#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_LavaMonster_Attack2.GA_LavaMonster_Attack2_C.ExecuteUbergraph_GA_LavaMonster_Attack2
struct FExecuteUbergraph_GA_LavaMonster_Attack2
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector CallFunc_Conv_FloatToVector_ReturnValue;  // 0x8 (0x8)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool K2Node_Event_bWasCancelled : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	struct FGameplayTag K2Node_Event_EventTag;  // 0x24 (0x24)
	struct FGameplayTag K2Node_Event_InChannelTag;  // 0x2C (0x2C)
	char pad_52[4];  // 0x34 (0x34)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x38 (0x38)
	struct FHitResult CallFunc_EffectContextGetHitResult_ReturnValue;  // 0xE8 (0xE8)
	char pad_464_1 : 7;  // 0x1D0 (0x1D0)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x1D0 (0x1D0)
	char pad_465_1 : 7;  // 0x1D1 (0x1D1)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x1D1 (0x1D1)
	char pad_466[2];  // 0x1D2 (0x1D2)
	float CallFunc_BreakHitResult_Time;  // 0x1D4 (0x1D4)
	float CallFunc_BreakHitResult_Distance;  // 0x1D8 (0x1D8)
	char pad_476[4];  // 0x1DC (0x1DC)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x1E0 (0x1E0)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x1F8 (0x1F8)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x210 (0x210)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x228 (0x228)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x240 (0x240)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x248 (0x248)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x250 (0x250)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x258 (0x258)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x260 (0x260)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x268 (0x268)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x26C (0x26C)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x270 (0x270)
	char pad_628[4];  // 0x274 (0x274)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x278 (0x278)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x290 (0x290)
	struct FVector CallFunc_Normal_ReturnValue;  // 0x2A8 (0x2A8)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x2C0 (0x2C0)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x2D8 (0x2D8)
	struct FVector CallFunc_Normal_ReturnValue_2;  // 0x2F0 (0x2F0)
	double CallFunc_BreakVector_X;  // 0x308 (0x308)
	double CallFunc_BreakVector_Y;  // 0x310 (0x310)
	double CallFunc_BreakVector_Z;  // 0x318 (0x318)
	double CallFunc_BreakVector_X_2;  // 0x320 (0x320)
	double CallFunc_BreakVector_Y_2;  // 0x328 (0x328)
	double CallFunc_BreakVector_Z_2;  // 0x330 (0x330)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x338 (0x338)
	char pad_832_1 : 7;  // 0x340 (0x340)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x340 (0x340)
	char pad_833[7];  // 0x341 (0x341)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x348 (0x348)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x350 (0x350)


}; 
 
 // Function GA_LavaMonster_Attack2.GA_LavaMonster_Attack2_C.ServerTargetDataReceived
// Size: 0xC0(Inherited: 0xC0)
struct FServerTargetDataReceived : FServerTargetDataReceived
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayTag InChannelTag;  // 0x8 (0x8)
	struct FGameplayEventData EventData;  // 0x10 (0x10)


}; 
 
 // Function GA_LavaMonster_Attack2.GA_LavaMonster_Attack2_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 