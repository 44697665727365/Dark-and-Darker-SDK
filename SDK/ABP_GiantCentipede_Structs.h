#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_GiantCentipede.ABP_GiantCentipede_C.AnimBlueprintGeneratedMutableData
// Size: 0x25(Inherited: 0x1)
struct FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool __BoolProperty : 1;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool __BoolProperty_1 : 1;  // 0x2 (0x2)
	char pad_3[1];  // 0x3 (0x3)
	float __FloatProperty_2;  // 0x4 (0x4)
	float __FloatProperty_3;  // 0x8 (0x8)
	float __FloatProperty_4;  // 0xC (0xC)
	float __FloatProperty_5;  // 0x10 (0x10)
	float __FloatProperty_6;  // 0x14 (0x14)
	float __FloatProperty_7;  // 0x18 (0x18)
	float __FloatProperty_8;  // 0x1C (0x1C)
	float __FloatProperty_9;  // 0x20 (0x20)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool __BoolProperty_10 : 1;  // 0x24 (0x24)


}; 
 
 // ScriptStruct ABP_GiantCentipede.ABP_GiantCentipede_C.AnimBlueprintGeneratedConstantData
// Size: 0x1D0(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_361;  // 0x4 (0x4)
	struct FName __NameProperty_362;  // 0xC (0xC)
	struct FName __NameProperty_363;  // 0x14 (0x14)
	struct FName __NameProperty_364;  // 0x1C (0x1C)
	char pad_36[4];  // 0x24 (0x24)
	struct TArray<float> __ArrayProperty_365;  // 0x28 (0x28)
	struct FName __NameProperty_366;  // 0x38 (0x38)
	struct FName __NameProperty_367;  // 0x40 (0x40)
	struct FName __NameProperty_368;  // 0x48 (0x48)
	struct FName __NameProperty_369;  // 0x50 (0x50)
	int32_t __IntProperty_370;  // 0x58 (0x58)
	struct FName __NameProperty_371;  // 0x5C (0x5C)
	int32_t __IntProperty_372;  // 0x64 (0x64)
	float __FloatProperty_373;  // 0x68 (0x68)
	struct FName __NameProperty_374;  // 0x6C (0x6C)
	int32_t __IntProperty_375;  // 0x74 (0x74)
	struct FName __NameProperty_376;  // 0x78 (0x78)
	int32_t __IntProperty_377;  // 0x80 (0x80)
	enum class EAnimGroupRole __ByteProperty_378;  // 0x84 (0x84)
	uint8_t __EnumProperty_379;  // 0x85 (0x85)
	char pad_134[2];  // 0x86 (0x86)
	struct FName __NameProperty_380;  // 0x88 (0x88)
	float __FloatProperty_381;  // 0x90 (0x90)
	char pad_148[4];  // 0x94 (0x94)
	struct UBlendProfile* __BlendProfile_382;  // 0x98 (0x98)
	struct UCurveFloat* __CurveFloat_383;  // 0xA0 (0xA0)
	uint8_t __EnumProperty_384;  // 0xA8 (0xA8)
	uint8_t __EnumProperty_385;  // 0xA9 (0xA9)
	char pad_170[6];  // 0xAA (0xAA)
	struct TArray<float> __ArrayProperty_386;  // 0xB0 (0xB0)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool __BoolProperty_387 : 1;  // 0xC0 (0xC0)
	char pad_193[3];  // 0xC1 (0xC1)
	float __FloatProperty_388;  // 0xC4 (0xC4)
	struct FInputScaleBiasClampConstants __StructProperty_389;  // 0xC8 (0xC8)
	float __FloatProperty_390;  // 0xF4 (0xF4)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool __BoolProperty_391 : 1;  // 0xF8 (0xF8)
	uint8_t __EnumProperty_392;  // 0xF9 (0xF9)
	enum class EAnimGroupRole __ByteProperty_393;  // 0xFA (0xFA)
	char pad_251[1];  // 0xFB (0xFB)
	struct FName __NameProperty_394;  // 0xFC (0xFC)
	int32_t __IntProperty_395;  // 0x104 (0x104)
	struct FName __NameProperty_396;  // 0x108 (0x108)
	struct FName __NameProperty_397;  // 0x110 (0x110)
	struct FAnimNodeFunctionRef __StructProperty_398;  // 0x118 (0x118)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0x138 (0x138)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0x1B8 (0x1B8)


}; 
 
 // Function ABP_GiantCentipede.ABP_GiantCentipede_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_GiantCentipede.ABP_GiantCentipede_C.ExecuteUbergraph_ABP_GiantCentipede
struct FExecuteUbergraph_ABP_GiantCentipede
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct APawn* CallFunc_TryGetPawnOwner_ReturnValue;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FVector CallFunc_GetVelocity_ReturnValue;  // 0x18 (0x18)
	double CallFunc_VSizeXY_ReturnValue;  // 0x30 (0x30)
	struct ABP_GiantCentipede_C* K2Node_DynamicCast_AsBP_Giant_Centipede;  // 0x38 (0x38)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x48 (0x48)
	float CallFunc_CalculateDirection_ReturnValue;  // 0x60 (0x60)
	char pad_100_1 : 7;  // 0x64 (0x64)
	bool CallFunc_NotEqual_DoubleDouble_ReturnValue : 1;  // 0x64 (0x64)
	char pad_101[3];  // 0x65 (0x65)
	struct APawn* CallFunc_TryGetPawnOwner_ReturnValue_2;  // 0x68 (0x68)
	float K2Node_Event_DeltaTimeX;  // 0x70 (0x70)
	char pad_116[4];  // 0x74 (0x74)
	struct ADCMonsterBase* K2Node_DynamicCast_AsDCMonster_Base;  // 0x78 (0x78)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x80 (0x80)
	char pad_129[7];  // 0x81 (0x81)
	double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast;  // 0x88 (0x88)
	double K2Node_VariableSet_Direction_ImplicitCast;  // 0x90 (0x90)


}; 
 
 // Function ABP_GiantCentipede.ABP_GiantCentipede_C.BlueprintUpdateAnimation
// Size: 0x4(Inherited: 0x4)
struct FBlueprintUpdateAnimation : FBlueprintUpdateAnimation
{
	float DeltaTimeX;  // 0x0 (0x0)


}; 
 
 // Function ABP_GiantCentipede.ABP_GiantCentipede_C.BlueprintThreadSafeUpdateAnimation
// Size: 0x28(Inherited: 0x4)
struct FBlueprintThreadSafeUpdateAnimation : FBlueprintThreadSafeUpdateAnimation
{
	float DeltaTime;  // 0x0 (0x0)
	double CallFunc_Divide_DoubleDouble_ReturnValue;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	double CallFunc_Divide_DoubleDouble_A_ImplicitCast;  // 0x18 (0x18)
	double CallFunc_Greater_DoubleDouble_A_ImplicitCast;  // 0x20 (0x20)


}; 
 
 