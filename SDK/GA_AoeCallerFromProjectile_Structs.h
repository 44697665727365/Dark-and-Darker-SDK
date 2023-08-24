#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_AoeCallerFromProjectile.GA_AoeCallerFromProjectile_C.TargetDataReceived
// Size: 0xE8(Inherited: 0xE8)
struct FTargetDataReceived : FTargetDataReceived
{
	struct FHitResult Hit;  // 0x0 (0x0)


}; 
 
 // Function GA_AoeCallerFromProjectile.GA_AoeCallerFromProjectile_C.ExecuteUbergraph_GA_AoeCallerFromProjectile
struct FExecuteUbergraph_GA_AoeCallerFromProjectile
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	char pad_20[4];  // 0x14 (0x14)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x18 (0x18)
	struct FHitResult K2Node_Event_Hit;  // 0x20 (0x20)
	char pad_264_1 : 7;  // 0x108 (0x108)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x108 (0x108)
	char pad_265_1 : 7;  // 0x109 (0x109)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x109 (0x109)
	char pad_266[2];  // 0x10A (0x10A)
	float CallFunc_BreakHitResult_Time;  // 0x10C (0x10C)
	float CallFunc_BreakHitResult_Distance;  // 0x110 (0x110)
	char pad_276[4];  // 0x114 (0x114)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x118 (0x118)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x130 (0x130)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x148 (0x148)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x160 (0x160)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x178 (0x178)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x180 (0x180)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x188 (0x188)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x190 (0x190)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x198 (0x198)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x1A0 (0x1A0)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x1A4 (0x1A4)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x1A8 (0x1A8)
	char pad_428[4];  // 0x1AC (0x1AC)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x1B0 (0x1B0)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x1C8 (0x1C8)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x1E0 (0x1E0)
	char pad_488_1 : 7;  // 0x1E8 (0x1E8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x1E8 (0x1E8)
	char pad_489[7];  // 0x1E9 (0x1E9)
	double CallFunc_BreakVector_X;  // 0x1F0 (0x1F0)
	double CallFunc_BreakVector_Y;  // 0x1F8 (0x1F8)
	double CallFunc_BreakVector_Z;  // 0x200 (0x200)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x208 (0x208)
	char pad_536_1 : 7;  // 0x218 (0x218)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x218 (0x218)
	char pad_537[7];  // 0x219 (0x219)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x220 (0x220)
	char pad_552_1 : 7;  // 0x228 (0x228)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x228 (0x228)
	char pad_553[7];  // 0x229 (0x229)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x230 (0x230)
	double CallFunc_BreakVector_X_2;  // 0x248 (0x248)
	double CallFunc_BreakVector_Y_2;  // 0x250 (0x250)
	double CallFunc_BreakVector_Z_2;  // 0x258 (0x258)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x260 (0x260)
	struct FVector CallFunc_MakeVector_ReturnValue_2;  // 0x268 (0x268)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x280 (0x280)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x298 (0x298)
	char pad_680_1 : 7;  // 0x2A8 (0x2A8)
	bool CallFunc_SpawnAoe_bSuccessfully : 1;  // 0x2A8 (0x2A8)
	char pad_681[7];  // 0x2A9 (0x2A9)
	struct ADCAoeBase* CallFunc_SpawnAoe_ReturnValue;  // 0x2B0 (0x2B0)
	struct FHitResult CallFunc_LineTraceSingleForObjects_OutHit;  // 0x2B8 (0x2B8)
	char pad_928_1 : 7;  // 0x3A0 (0x3A0)
	bool CallFunc_LineTraceSingleForObjects_ReturnValue : 1;  // 0x3A0 (0x3A0)
	char pad_929_1 : 7;  // 0x3A1 (0x3A1)
	bool CallFunc_BreakHitResult_bBlockingHit_2 : 1;  // 0x3A1 (0x3A1)
	char pad_930_1 : 7;  // 0x3A2 (0x3A2)
	bool CallFunc_BreakHitResult_bInitialOverlap_2 : 1;  // 0x3A2 (0x3A2)
	char pad_931[1];  // 0x3A3 (0x3A3)
	float CallFunc_BreakHitResult_Time_2;  // 0x3A4 (0x3A4)
	float CallFunc_BreakHitResult_Distance_2;  // 0x3A8 (0x3A8)
	char pad_940[4];  // 0x3AC (0x3AC)
	struct FVector CallFunc_BreakHitResult_Location_2;  // 0x3B0 (0x3B0)
	struct FVector CallFunc_BreakHitResult_ImpactPoint_2;  // 0x3C8 (0x3C8)
	struct FVector CallFunc_BreakHitResult_Normal_2;  // 0x3E0 (0x3E0)
	struct FVector CallFunc_BreakHitResult_ImpactNormal_2;  // 0x3F8 (0x3F8)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2;  // 0x410 (0x410)
	struct AActor* CallFunc_BreakHitResult_HitActor_2;  // 0x418 (0x418)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2;  // 0x420 (0x420)
	struct FName CallFunc_BreakHitResult_HitBoneName_2;  // 0x428 (0x428)
	struct FName CallFunc_BreakHitResult_BoneName_2;  // 0x430 (0x430)
	int32_t CallFunc_BreakHitResult_HitItem_2;  // 0x438 (0x438)
	int32_t CallFunc_BreakHitResult_ElementIndex_2;  // 0x43C (0x43C)
	int32_t CallFunc_BreakHitResult_FaceIndex_2;  // 0x440 (0x440)
	char pad_1092[4];  // 0x444 (0x444)
	struct FVector CallFunc_BreakHitResult_TraceStart_2;  // 0x448 (0x448)
	struct FVector CallFunc_BreakHitResult_TraceEnd_2;  // 0x460 (0x460)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_2;  // 0x478 (0x478)
	char pad_1168_1 : 7;  // 0x490 (0x490)
	bool CallFunc_SpawnAoe_bSuccessfully_2 : 1;  // 0x490 (0x490)
	char pad_1169[7];  // 0x491 (0x491)
	struct ADCAoeBase* CallFunc_SpawnAoe_ReturnValue_2;  // 0x498 (0x498)


}; 
 
 