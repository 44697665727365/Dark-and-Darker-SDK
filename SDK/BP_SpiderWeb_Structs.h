#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_SpiderWeb.BP_SpiderWeb_C.ExchangeYZ
struct FExchangeYZ
{
	struct FVector In;  // 0x0 (0x0)
	struct FVector Out;  // 0x18 (0x18)
	double CallFunc_BreakVector_X;  // 0x30 (0x30)
	double CallFunc_BreakVector_Y;  // 0x38 (0x38)
	double CallFunc_BreakVector_Z;  // 0x40 (0x40)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x48 (0x48)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x50 (0x50)


}; 
 
 // Function BP_SpiderWeb.BP_SpiderWeb_C.IsDisableDestroyContact
struct FIsDisableDestroyContact
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)


}; 
 
 // Function BP_SpiderWeb.BP_SpiderWeb_C.GetRecoveryTime
struct FGetRecoveryTime
{
	double Result;  // 0x0 (0x0)


}; 
 
 // Function BP_SpiderWeb.BP_SpiderWeb_C.ExecuteUbergraph_BP_SpiderWeb
struct FExecuteUbergraph_BP_SpiderWeb
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool CallFunc_HasAuthority_ReturnValue_2 : 1;  // 0x5 (0x5)
	char pad_6[2];  // 0x6 (0x6)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x8 (0x8)
	int32_t K2Node_Event_InCount;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x15 (0x15)
	char pad_22_1 : 7;  // 0x16 (0x16)
	bool CallFunc_HasAuthority_ReturnValue_3 : 1;  // 0x16 (0x16)
	char pad_23[1];  // 0x17 (0x17)
	struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue;  // 0x18 (0x18)
	struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;  // 0x20 (0x20)


}; 
 
 // Function BP_SpiderWeb.BP_SpiderWeb_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // Function BP_SpiderWeb.BP_SpiderWeb_C.IsRecovery
struct FIsRecovery
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)


}; 
 
 // Function BP_SpiderWeb.BP_SpiderWeb_C.GetDestroyCount
struct FGetDestroyCount
{
	int32_t Result;  // 0x0 (0x0)


}; 
 
 // Function BP_SpiderWeb.BP_SpiderWeb_C.IsContactCountDestroy
struct FIsContactCountDestroy
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)


}; 
 
 // Function BP_SpiderWeb.BP_SpiderWeb_C.SetPointPosition
struct FSetPointPosition
{
	struct UMaterialInstanceDynamic* Material Instance;  // 0x0 (0x0)
	struct FVector TopLeft;  // 0x8 (0x8)
	struct FVector TopRight;  // 0x20 (0x20)
	struct FVector BotLeft;  // 0x38 (0x38)
	struct FVector BotRight;  // 0x50 (0x50)
	double Influence;  // 0x68 (0x68)
	struct FVector CallFunc_ExchangeYZ_Out;  // 0x70 (0x70)
	struct FLinearColor CallFunc_Conv_VectorToLinearColor_ReturnValue;  // 0x88 (0x88)
	struct FVector CallFunc_ExchangeYZ_Out_2;  // 0x98 (0x98)
	struct FLinearColor CallFunc_Conv_VectorToLinearColor_ReturnValue_2;  // 0xB0 (0xB0)
	struct FVector CallFunc_ExchangeYZ_Out_3;  // 0xC0 (0xC0)
	struct FLinearColor CallFunc_Conv_VectorToLinearColor_ReturnValue_3;  // 0xD8 (0xD8)
	struct FVector CallFunc_ExchangeYZ_Out_4;  // 0xE8 (0xE8)
	struct FLinearColor CallFunc_Conv_VectorToLinearColor_ReturnValue_4;  // 0x100 (0x100)
	float CallFunc_SetScalarParameterValue_Value_ImplicitCast;  // 0x110 (0x110)


}; 
 
 // Function BP_SpiderWeb.BP_SpiderWeb_C.UpdateSpiderWebMaterial
struct FUpdateSpiderWebMaterial
{
	struct UMaterialInstanceDynamic* InDynamicMaterialInstance;  // 0x0 (0x0)
	struct UMaterialInstanceDynamic* CurrentMaterialInstance;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	double CallFunc_GetTimeSeconds_ReturnValue;  // 0x18 (0x18)
	float CallFunc_SetScalarParameterValue_Value_ImplicitCast;  // 0x20 (0x20)


}; 
 
 // Function BP_SpiderWeb.BP_SpiderWeb_C.UserConstructionScript
struct FUserConstructionScript : FUserConstructionScript
{
	struct FVector CallFunc_K2_GetComponentScale_ReturnValue;  // 0x0 (0x0)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue;  // 0x18 (0x18)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x30 (0x30)
	double CallFunc_BreakVector_X;  // 0x48 (0x48)
	double CallFunc_BreakVector_Y;  // 0x50 (0x50)
	double CallFunc_BreakVector_Z;  // 0x58 (0x58)
	struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue;  // 0x60 (0x60)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x68 (0x68)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool CallFunc_SetStaticMesh_ReturnValue : 1;  // 0x80 (0x80)


}; 
 
 