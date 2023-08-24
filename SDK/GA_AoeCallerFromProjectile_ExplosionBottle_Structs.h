#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_AoeCallerFromProjectile_ExplosionBottle.GA_AoeCallerFromProjectile_ExplosionBottle_C.Cal Spawn Location
struct FCal Spawn Location
{
	double SpawnDist;  // 0x0 (0x0)
	double NewLocalVar_1;  // 0x8 (0x8)
	double Angle;  // 0x10 (0x10)
	int32_t Temp_int_Variable;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x20 (0x20)
	double CallFunc_Conv_IntToDouble_ReturnValue;  // 0x38 (0x38)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x48 (0x48)
	struct FVector CallFunc_CalRotateLocation_RotateLocation;  // 0x50 (0x50)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x68 (0x68)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x78 (0x78)
	char pad_124[4];  // 0x7C (0x7C)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x80 (0x80)
	struct FHitResult CallFunc_LineTraceSingleForObjects_OutHit;  // 0x90 (0x90)
	char pad_376_1 : 7;  // 0x178 (0x178)
	bool CallFunc_LineTraceSingleForObjects_ReturnValue : 1;  // 0x178 (0x178)
	char pad_377[3];  // 0x179 (0x179)
	int32_t CallFunc_Divide_IntInt_ReturnValue;  // 0x17C (0x17C)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x180 (0x180)
	char pad_385_1 : 7;  // 0x181 (0x181)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x181 (0x181)
	char pad_386[2];  // 0x182 (0x182)
	float CallFunc_BreakHitResult_Time;  // 0x184 (0x184)
	float CallFunc_BreakHitResult_Distance;  // 0x188 (0x188)
	char pad_396[4];  // 0x18C (0x18C)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x190 (0x190)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x1A8 (0x1A8)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x1C0 (0x1C0)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x1D8 (0x1D8)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x1F0 (0x1F0)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x1F8 (0x1F8)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x200 (0x200)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x208 (0x208)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x210 (0x210)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x218 (0x218)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x21C (0x21C)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x220 (0x220)
	char pad_548[4];  // 0x224 (0x224)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x228 (0x228)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x240 (0x240)
	double CallFunc_Conv_IntToDouble_ReturnValue_2;  // 0x258 (0x258)
	char pad_608_1 : 7;  // 0x260 (0x260)
	bool CallFunc_LessEqual_IntInt_ReturnValue : 1;  // 0x260 (0x260)


}; 
 
 // Function GA_AoeCallerFromProjectile_ExplosionBottle.GA_AoeCallerFromProjectile_ExplosionBottle_C.CheckHitGround
struct FCheckHitGround
{
	struct FVector NormalVector;  // 0x0 (0x0)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool Return : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	double CallFunc_BreakVector_X;  // 0x20 (0x20)
	double CallFunc_BreakVector_Y;  // 0x28 (0x28)
	double CallFunc_BreakVector_Z;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0x38 (0x38)


}; 
 
 // Function GA_AoeCallerFromProjectile_ExplosionBottle.GA_AoeCallerFromProjectile_ExplosionBottle_C.CalRotateLocation
struct FCalRotateLocation
{
	double Angle;  // 0x0 (0x0)
	double Distance;  // 0x8 (0x8)
	struct FVector RotateLocation;  // 0x10 (0x10)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue;  // 0x28 (0x28)
	struct FVector CallFunc_RotateAngleAxis_ReturnValue;  // 0x40 (0x40)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x58 (0x58)
	double CallFunc_BreakVector_X;  // 0x70 (0x70)
	double CallFunc_BreakVector_Y;  // 0x78 (0x78)
	double CallFunc_BreakVector_Z;  // 0x80 (0x80)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x88 (0x88)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0xA0 (0xA0)
	float CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast;  // 0xB8 (0xB8)


}; 
 
 // Function GA_AoeCallerFromProjectile_ExplosionBottle.GA_AoeCallerFromProjectile_ExplosionBottle_C.TargetDataReceived
// Size: 0xE8(Inherited: 0xE8)
struct FTargetDataReceived : FTargetDataReceived
{
	struct FHitResult Hit;  // 0x0 (0x0)


}; 
 
 // Function GA_AoeCallerFromProjectile_ExplosionBottle.GA_AoeCallerFromProjectile_ExplosionBottle_C.ExecuteUbergraph_GA_AoeCallerFromProjectile_ExplosionBottle
struct FExecuteUbergraph_GA_AoeCallerFromProjectile_ExplosionBottle
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Variable;  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct FHitResult K2Node_Event_Hit;  // 0x28 (0x28)
	char pad_272_1 : 7;  // 0x110 (0x110)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x110 (0x110)
	char pad_273_1 : 7;  // 0x111 (0x111)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x111 (0x111)
	char pad_274[2];  // 0x112 (0x112)
	float CallFunc_BreakHitResult_Time;  // 0x114 (0x114)
	float CallFunc_BreakHitResult_Distance;  // 0x118 (0x118)
	char pad_284[4];  // 0x11C (0x11C)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x120 (0x120)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x138 (0x138)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x150 (0x150)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x168 (0x168)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x180 (0x180)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x188 (0x188)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x190 (0x190)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x198 (0x198)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x1A0 (0x1A0)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x1A8 (0x1A8)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x1AC (0x1AC)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x1B0 (0x1B0)
	char pad_436[4];  // 0x1B4 (0x1B4)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x1B8 (0x1B8)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x1D0 (0x1D0)
	char pad_488_1 : 7;  // 0x1E8 (0x1E8)
	bool CallFunc_CheckHitGround_Return : 1;  // 0x1E8 (0x1E8)
	char pad_489[7];  // 0x1E9 (0x1E9)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x1F0 (0x1F0)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x208 (0x208)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x218 (0x218)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x21C (0x21C)
	char pad_544_1 : 7;  // 0x220 (0x220)
	bool CallFunc_LessEqual_IntInt_ReturnValue : 1;  // 0x220 (0x220)
	char pad_545_1 : 7;  // 0x221 (0x221)
	bool CallFunc_SpawnAoe_bSuccessfully : 1;  // 0x221 (0x221)
	char pad_546[6];  // 0x222 (0x222)
	struct ADCAoeBase* CallFunc_SpawnAoe_ReturnValue;  // 0x228 (0x228)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x230 (0x230)
	struct FHitResult CallFunc_LineTraceSingleForObjects_OutHit;  // 0x240 (0x240)
	char pad_808_1 : 7;  // 0x328 (0x328)
	bool CallFunc_LineTraceSingleForObjects_ReturnValue : 1;  // 0x328 (0x328)
	char pad_809_1 : 7;  // 0x329 (0x329)
	bool CallFunc_BreakHitResult_bBlockingHit_2 : 1;  // 0x329 (0x329)
	char pad_810_1 : 7;  // 0x32A (0x32A)
	bool CallFunc_BreakHitResult_bInitialOverlap_2 : 1;  // 0x32A (0x32A)
	char pad_811[1];  // 0x32B (0x32B)
	float CallFunc_BreakHitResult_Time_2;  // 0x32C (0x32C)
	float CallFunc_BreakHitResult_Distance_2;  // 0x330 (0x330)
	char pad_820[4];  // 0x334 (0x334)
	struct FVector CallFunc_BreakHitResult_Location_2;  // 0x338 (0x338)
	struct FVector CallFunc_BreakHitResult_ImpactPoint_2;  // 0x350 (0x350)
	struct FVector CallFunc_BreakHitResult_Normal_2;  // 0x368 (0x368)
	struct FVector CallFunc_BreakHitResult_ImpactNormal_2;  // 0x380 (0x380)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2;  // 0x398 (0x398)
	struct AActor* CallFunc_BreakHitResult_HitActor_2;  // 0x3A0 (0x3A0)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2;  // 0x3A8 (0x3A8)
	struct FName CallFunc_BreakHitResult_HitBoneName_2;  // 0x3B0 (0x3B0)
	struct FName CallFunc_BreakHitResult_BoneName_2;  // 0x3B8 (0x3B8)
	int32_t CallFunc_BreakHitResult_HitItem_2;  // 0x3C0 (0x3C0)
	int32_t CallFunc_BreakHitResult_ElementIndex_2;  // 0x3C4 (0x3C4)
	int32_t CallFunc_BreakHitResult_FaceIndex_2;  // 0x3C8 (0x3C8)
	char pad_972[4];  // 0x3CC (0x3CC)
	struct FVector CallFunc_BreakHitResult_TraceStart_2;  // 0x3D0 (0x3D0)
	struct FVector CallFunc_BreakHitResult_TraceEnd_2;  // 0x3E8 (0x3E8)
	char pad_1024_1 : 7;  // 0x400 (0x400)
	bool CallFunc_CheckHitGround_Return_2 : 1;  // 0x400 (0x400)
	char pad_1025_1 : 7;  // 0x401 (0x401)
	bool CallFunc_SpawnAoe_bSuccessfully_2 : 1;  // 0x401 (0x401)
	char pad_1026[6];  // 0x402 (0x402)
	struct ADCAoeBase* CallFunc_SpawnAoe_ReturnValue_2;  // 0x408 (0x408)
	struct ABP_AOE_ExplosionBottle_Area_C* K2Node_DynamicCast_AsBP_AOE_Explosion_Bottle_Area;  // 0x410 (0x410)
	char pad_1048_1 : 7;  // 0x418 (0x418)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x418 (0x418)
	char pad_1049_1 : 7;  // 0x419 (0x419)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0x419 (0x419)
	char pad_1050[6];  // 0x41A (0x41A)
	double CallFunc_Less_DoubleDouble_A_ImplicitCast;  // 0x420 (0x420)


}; 
 
 