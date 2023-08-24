#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_Lantern.ABP_Lantern_C.AnimBlueprintGeneratedMutableData
// Size: 0xD(Inherited: 0x1)
struct FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool __BoolProperty : 1;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool __BoolProperty_1 : 1;  // 0x2 (0x2)
	char pad_3[1];  // 0x3 (0x3)
	float __FloatProperty_2;  // 0x4 (0x4)
	float __FloatProperty_3;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool __BoolProperty_4 : 1;  // 0xC (0xC)


}; 
 
 // ScriptStruct ABP_Lantern.ABP_Lantern_C.AnimBlueprintGeneratedConstantData
// Size: 0x160(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_136;  // 0x4 (0x4)
	struct FName __NameProperty_137;  // 0xC (0xC)
	int32_t __IntProperty_138;  // 0x14 (0x14)
	struct TArray<float> __ArrayProperty_139;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool __BoolProperty_140 : 1;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	float __FloatProperty_141;  // 0x2C (0x2C)
	struct FInputScaleBiasClampConstants __StructProperty_142;  // 0x30 (0x30)
	float __FloatProperty_143;  // 0x5C (0x5C)
	uint8_t __EnumProperty_144;  // 0x60 (0x60)
	enum class EAnimGroupRole __ByteProperty_145;  // 0x61 (0x61)
	char pad_98[6];  // 0x62 (0x62)
	struct UBlendProfile* __BlendProfile_146;  // 0x68 (0x68)
	struct UCurveFloat* __CurveFloat_147;  // 0x70 (0x70)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool __BoolProperty_148 : 1;  // 0x78 (0x78)
	uint8_t __EnumProperty_149;  // 0x79 (0x79)
	uint8_t __EnumProperty_150;  // 0x7A (0x7A)
	char pad_123[5];  // 0x7B (0x7B)
	struct TArray<float> __ArrayProperty_151;  // 0x80 (0x80)
	struct FName __NameProperty_152;  // 0x90 (0x90)
	struct FName __NameProperty_153;  // 0x98 (0x98)
	int32_t __IntProperty_154;  // 0xA0 (0xA0)
	char pad_164[4];  // 0xA4 (0xA4)
	struct FAnimNodeFunctionRef __StructProperty_155;  // 0xA8 (0xA8)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0xC8 (0xC8)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0x148 (0x148)


}; 
 
 // Function ABP_Lantern.ABP_Lantern_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_Lantern.ABP_Lantern_C.BlueprintUpdateAnimation
// Size: 0x4(Inherited: 0x4)
struct FBlueprintUpdateAnimation : FBlueprintUpdateAnimation
{
	float DeltaTimeX;  // 0x0 (0x0)


}; 
 
 // Function ABP_Lantern.ABP_Lantern_C.BlueprintThreadSafeUpdateAnimation
// Size: 0xA(Inherited: 0x4)
struct FBlueprintThreadSafeUpdateAnimation : FBlueprintThreadSafeUpdateAnimation
{
	float DeltaTime;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool CallFunc_BooleanOR_ReturnValue : 1;  // 0x4 (0x4)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool CallFunc_BooleanOR_ReturnValue_2 : 1;  // 0x5 (0x5)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool CallFunc_BooleanOR_ReturnValue_3 : 1;  // 0x6 (0x6)
	char pad_11_1 : 7;  // 0xB (0xB)
	bool CallFunc_BooleanOR_ReturnValue_4 : 1;  // 0x7 (0x7)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool CallFunc_BooleanOR_ReturnValue_5 : 1;  // 0x8 (0x8)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool CallFunc_BooleanOR_ReturnValue_6 : 1;  // 0x9 (0x9)


}; 
 
 // Function ABP_Lantern.ABP_Lantern_C.ExecuteUbergraph_ABP_Lantern
struct FExecuteUbergraph_ABP_Lantern
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	double CallFunc_Divide_DoubleDouble_ReturnValue;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool CallFunc_Not_PreBool_ReturnValue_2 : 1;  // 0x11 (0x11)
	char pad_18_1 : 7;  // 0x12 (0x12)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x12 (0x12)
	char pad_19_1 : 7;  // 0x13 (0x13)
	bool CallFunc_BooleanOR_ReturnValue : 1;  // 0x13 (0x13)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool CallFunc_BooleanOR_ReturnValue_2 : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct FRotator CallFunc_MakeRotator_ReturnValue;  // 0x18 (0x18)
	float K2Node_Event_DeltaTimeX;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)
	struct FItemData K2Node_Event_ItemData;  // 0x38 (0x38)
	struct AActor* CallFunc_GetOwningActor_ReturnValue;  // 0xD8 (0xD8)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xE0 (0xE0)
	char pad_225[7];  // 0xE1 (0xE1)
	struct AActor* CallFunc_GetAttachParentActor_ReturnValue;  // 0xE8 (0xE8)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0xF0 (0xF0)
	char pad_264_1 : 7;  // 0x108 (0x108)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x108 (0x108)
	char pad_265[7];  // 0x109 (0x109)
	double CallFunc_Greater_DoubleDouble_A_ImplicitCast;  // 0x110 (0x110)
	double CallFunc_Divide_DoubleDouble_A_ImplicitCast;  // 0x118 (0x118)
	float K2Node_StructMemberSet___FloatProperty_2_ImplicitCast;  // 0x120 (0x120)


}; 
 
 // Function ABP_Lantern.ABP_Lantern_C.OnItemDataUpdated
// Size: 0xA0(Inherited: 0xA0)
struct FOnItemDataUpdated : FOnItemDataUpdated
{
	struct FItemData ItemData;  // 0x0 (0x0)


}; 
 
 