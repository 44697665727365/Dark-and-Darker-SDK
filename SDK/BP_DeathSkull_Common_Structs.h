#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.CheckRemainDistanceByVelocity2D
struct FCheckRemainDistanceByVelocity2D
{
	struct FVector MoveDirection;  // 0x0 (0x0)
	double DeltaTime;  // 0x18 (0x18)
	double RemainDist;  // 0x20 (0x20)
	double ResultDistance;  // 0x28 (0x28)
	float CallFunc_GetMaxSpeed_ReturnValue;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x38 (0x38)
	struct FVector CallFunc_Multiply_VectorFloat_ReturnValue;  // 0x40 (0x40)
	double CallFunc_VSizeXY_ReturnValue;  // 0x58 (0x58)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x60 (0x60)
	double CallFunc_Multiply_DoubleDouble_B_ImplicitCast;  // 0x68 (0x68)


}; 
 
 // Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.ReceiveTick
// Size: 0x4(Inherited: 0x4)
struct FReceiveTick : FReceiveTick
{
	float DeltaSeconds;  // 0x0 (0x0)


}; 
 
 // Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.CheckRemainDistanceByVelocity3D
struct FCheckRemainDistanceByVelocity3D
{
	struct FVector MoveDirection;  // 0x0 (0x0)
	double DeltaTime;  // 0x18 (0x18)
	double RemainDist;  // 0x20 (0x20)
	double ResultDistance;  // 0x28 (0x28)
	float CallFunc_GetMaxSpeed_ReturnValue;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x38 (0x38)
	struct FVector CallFunc_Multiply_VectorFloat_ReturnValue;  // 0x40 (0x40)
	double CallFunc_VSize_ReturnValue;  // 0x58 (0x58)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x60 (0x60)
	double CallFunc_Multiply_DoubleDouble_B_ImplicitCast;  // 0x68 (0x68)


}; 
 
 // Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.OnGlowingEyes
struct FOnGlowingEyes
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool OnAttack : 1;  // 0x0 (0x0)


}; 
 
 // Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.ExecuteUbergraph_BP_DeathSkull_Common
struct FExecuteUbergraph_BP_DeathSkull_Common
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UAbilityAsync_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAddToActor_ReturnValue;  // 0x8 (0x8)
	float K2Node_Event_DeltaSeconds;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x18 (0x18)
	double CallFunc_UpdateGlowing_DeltaTime_ImplicitCast;  // 0x28 (0x28)


}; 
 
 // Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.OnRep_OnRedEyes
struct FOnRep_OnRedEyes
{
	struct FDelegate Temp_delegate_Variable;  // 0x0 (0x0)
	int32_t CallFunc_PostEvent_ReturnValue;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x14 (0x14)


}; 
 
 // Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.UpdateGlowing
struct FUpdateGlowing
{
	double DeltaTime;  // 0x0 (0x0)
	double MaxGlowingTime;  // 0x8 (0x8)
	double MinGlowingTime;  // 0x10 (0x10)
	double GlowingScale;  // 0x18 (0x18)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x20 (0x20)
	double CallFunc_Divide_DoubleDouble_ReturnValue;  // 0x28 (0x28)
	double CallFunc_Add_DoubleDouble_ReturnValue_2;  // 0x30 (0x30)
	double CallFunc_Add_DoubleDouble_ReturnValue_3;  // 0x38 (0x38)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	double CallFunc_Divide_DoubleDouble_ReturnValue_2;  // 0x48 (0x48)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x50 (0x50)
	double CallFunc_Ease_ReturnValue;  // 0x58 (0x58)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_2;  // 0x60 (0x60)
	double CallFunc_Ease_ReturnValue_2;  // 0x68 (0x68)
	struct FMaterialSpriteElement K2Node_MakeStruct_MaterialSpriteElement;  // 0x70 (0x70)
	struct TArray<struct FMaterialSpriteElement> K2Node_MakeArray_Array;  // 0x98 (0x98)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2 : 1;  // 0xA8 (0xA8)
	char pad_169[7];  // 0xA9 (0xA9)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_3;  // 0xB0 (0xB0)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_4;  // 0xB8 (0xB8)
	double CallFunc_Ease_ReturnValue_3;  // 0xC0 (0xC0)
	double CallFunc_Ease_ReturnValue_4;  // 0xC8 (0xC8)
	struct FMaterialSpriteElement K2Node_MakeStruct_MaterialSpriteElement_2;  // 0xD0 (0xD0)
	struct TArray<struct FMaterialSpriteElement> K2Node_MakeArray_Array_2;  // 0xF8 (0xF8)
	float K2Node_MakeStruct_BaseSizeY_ImplicitCast;  // 0x108 (0x108)
	float K2Node_MakeStruct_BaseSizeX_ImplicitCast;  // 0x10C (0x10C)
	float K2Node_MakeStruct_BaseSizeY_ImplicitCast_2;  // 0x110 (0x110)
	float K2Node_MakeStruct_BaseSizeX_ImplicitCast_2;  // 0x114 (0x114)


}; 
 
 // Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.SetAttackByCollisionOption
struct FSetAttackByCollisionOption
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool OnAttack : 1;  // 0x0 (0x0)


}; 
 
 