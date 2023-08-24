#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_DemonBat_Common.BP_DemonBat_Common_C.ExecuteUbergraph_BP_DemonBat_Common
struct FExecuteUbergraph_BP_DemonBat_Common
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector CallFunc_K2_GetComponentLocation_ReturnValue;  // 0x8 (0x8)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	double CallFunc_BreakVector_X;  // 0x28 (0x28)
	double CallFunc_BreakVector_Y;  // 0x30 (0x30)
	double CallFunc_BreakVector_Z;  // 0x38 (0x38)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x40 (0x40)
	int32_t K2Node_Event_InCount;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x50 (0x50)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x60 (0x60)
	char pad_97_1 : 7;  // 0x61 (0x61)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x61 (0x61)
	char pad_98[6];  // 0x62 (0x62)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x68 (0x68)
	struct AAIController* CallFunc_GetAIController_ReturnValue;  // 0x78 (0x78)
	struct UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue;  // 0x80 (0x80)
	struct AAIController* CallFunc_GetAIController_ReturnValue_2;  // 0x88 (0x88)
	struct UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue_2;  // 0x90 (0x90)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool CallFunc_SetSightRange_ReturnValue : 1;  // 0x98 (0x98)
	char pad_153_1 : 7;  // 0x99 (0x99)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x99 (0x99)
	char pad_154[6];  // 0x9A (0x9A)
	struct FVector CallFunc_K2_GetComponentLocation_ReturnValue_2;  // 0xA0 (0xA0)
	double CallFunc_BreakVector_X_2;  // 0xB8 (0xB8)
	double CallFunc_BreakVector_Y_2;  // 0xC0 (0xC0)
	double CallFunc_BreakVector_Z_2;  // 0xC8 (0xC8)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0xD0 (0xD0)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0xD8 (0xD8)
	struct FHitResult CallFunc_LineTraceSingleForObjects_OutHit;  // 0xF0 (0xF0)
	char pad_472_1 : 7;  // 0x1D8 (0x1D8)
	bool CallFunc_LineTraceSingleForObjects_ReturnValue : 1;  // 0x1D8 (0x1D8)
	char pad_473_1 : 7;  // 0x1D9 (0x1D9)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x1D9 (0x1D9)
	char pad_474_1 : 7;  // 0x1DA (0x1DA)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x1DA (0x1DA)
	char pad_475[1];  // 0x1DB (0x1DB)
	float CallFunc_BreakHitResult_Time;  // 0x1DC (0x1DC)
	float CallFunc_BreakHitResult_Distance;  // 0x1E0 (0x1E0)
	char pad_484[4];  // 0x1E4 (0x1E4)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x1E8 (0x1E8)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x200 (0x200)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x218 (0x218)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x230 (0x230)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x248 (0x248)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x250 (0x250)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x258 (0x258)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x260 (0x260)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x268 (0x268)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x270 (0x270)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x274 (0x274)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x278 (0x278)
	char pad_636[4];  // 0x27C (0x27C)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x280 (0x280)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x298 (0x298)
	double CallFunc_BreakVector_X_3;  // 0x2B0 (0x2B0)
	double CallFunc_BreakVector_Y_3;  // 0x2B8 (0x2B8)
	double CallFunc_BreakVector_Z_3;  // 0x2C0 (0x2C0)
	double CallFunc_Subtract_DoubleDouble_ReturnValue_2;  // 0x2C8 (0x2C8)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x2D0 (0x2D0)
	char pad_728_1 : 7;  // 0x2D8 (0x2D8)
	bool CallFunc_SetSightRange_ReturnValue_2 : 1;  // 0x2D8 (0x2D8)
	char pad_729[3];  // 0x2D9 (0x2D9)
	float CallFunc_SetSightRange_SightRange_ImplicitCast;  // 0x2DC (0x2DC)


}; 
 
 // Function BP_DemonBat_Common.BP_DemonBat_Common_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 