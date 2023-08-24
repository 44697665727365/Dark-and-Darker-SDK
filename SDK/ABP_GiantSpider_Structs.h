#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_GiantSpider.ABP_GiantSpider_C.AnimBlueprintGeneratedMutableData
// Size: 0xA(Inherited: 0x1)
struct FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
{
	char pad_1[3];  // 0x1 (0x1)
	float __FloatProperty;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool __BoolProperty_1 : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool __BoolProperty_2 : 1;  // 0x9 (0x9)


}; 
 
 // ScriptStruct ABP_GiantSpider.ABP_GiantSpider_C.AnimBlueprintGeneratedConstantData
// Size: 0x188(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_165;  // 0x4 (0x4)
	struct FName __NameProperty_166;  // 0xC (0xC)
	uint8_t __EnumProperty_167;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct FName __NameProperty_168;  // 0x18 (0x18)
	struct FName __NameProperty_169;  // 0x20 (0x20)
	int32_t __IntProperty_170;  // 0x28 (0x28)
	struct FName __NameProperty_171;  // 0x2C (0x2C)
	struct FName __NameProperty_172;  // 0x34 (0x34)
	int32_t __IntProperty_173;  // 0x3C (0x3C)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool __BoolProperty_174 : 1;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	float __FloatProperty_175;  // 0x44 (0x44)
	struct FInputScaleBiasClampConstants __StructProperty_176;  // 0x48 (0x48)
	float __FloatProperty_177;  // 0x74 (0x74)
	uint8_t __EnumProperty_178;  // 0x78 (0x78)
	enum class EAnimGroupRole __ByteProperty_179;  // 0x79 (0x79)
	char pad_122[2];  // 0x7A (0x7A)
	struct FName __NameProperty_180;  // 0x7C (0x7C)
	char pad_132[4];  // 0x84 (0x84)
	struct UBlendProfile* __BlendProfile_181;  // 0x88 (0x88)
	struct UCurveFloat* __CurveFloat_182;  // 0x90 (0x90)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool __BoolProperty_183 : 1;  // 0x98 (0x98)
	uint8_t __EnumProperty_184;  // 0x99 (0x99)
	uint8_t __EnumProperty_185;  // 0x9A (0x9A)
	char pad_155[5];  // 0x9B (0x9B)
	struct TArray<float> __ArrayProperty_186;  // 0xA0 (0xA0)
	struct FName __NameProperty_187;  // 0xB0 (0xB0)
	int32_t __IntProperty_188;  // 0xB8 (0xB8)
	struct FName __NameProperty_189;  // 0xBC (0xBC)
	struct FName __NameProperty_190;  // 0xC4 (0xC4)
	int32_t __IntProperty_191;  // 0xCC (0xCC)
	struct FAnimNodeFunctionRef __StructProperty_192;  // 0xD0 (0xD0)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0xF0 (0xF0)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0x170 (0x170)


}; 
 
 // Function ABP_GiantSpider.ABP_GiantSpider_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_GiantSpider.ABP_GiantSpider_C.ExecuteUbergraph_ABP_GiantSpider
struct FExecuteUbergraph_ABP_GiantSpider
{
	int32_t EntryPoint;  // 0x0 (0x0)


}; 
 
 // Function ABP_GiantSpider.ABP_GiantSpider_C.BlueprintThreadSafeUpdateAnimation
// Size: 0x10(Inherited: 0x4)
struct FBlueprintThreadSafeUpdateAnimation : FBlueprintThreadSafeUpdateAnimation
{
	float DeltaTime;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool NewLocalVar : 1;  // 0x4 (0x4)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x5 (0x5)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool CallFunc_Not_PreBool_ReturnValue_2 : 1;  // 0x6 (0x6)
	char pad_11_1 : 7;  // 0xB (0xB)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x7 (0x7)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool CallFunc_Not_PreBool_ReturnValue_3 : 1;  // 0x8 (0x8)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool CallFunc_BooleanAND_ReturnValue_2 : 1;  // 0x9 (0x9)
	char pad_14_1 : 7;  // 0xE (0xE)
	bool CallFunc_BooleanAND_ReturnValue_3 : 1;  // 0xA (0xA)
	char pad_15_1 : 7;  // 0xF (0xF)
	bool CallFunc_Not_PreBool_ReturnValue_4 : 1;  // 0xB (0xB)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_Not_PreBool_ReturnValue_5 : 1;  // 0xC (0xC)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool CallFunc_BooleanAND_ReturnValue_4 : 1;  // 0xD (0xD)
	char pad_18_1 : 7;  // 0x12 (0x12)
	bool CallFunc_BooleanAND_ReturnValue_5 : 1;  // 0xE (0xE)
	char pad_19_1 : 7;  // 0x13 (0x13)
	bool CallFunc_BooleanAND_ReturnValue_6 : 1;  // 0xF (0xF)


}; 
 
 