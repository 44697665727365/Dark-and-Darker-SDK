#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_Wisp.ABP_Wisp_C.AnimBlueprintGeneratedMutableData
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
 
 // ScriptStruct ABP_Wisp.ABP_Wisp_C.AnimBlueprintGeneratedConstantData
// Size: 0x188(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_164;  // 0x4 (0x4)
	float __FloatProperty_165;  // 0xC (0xC)
	struct FName __NameProperty_166;  // 0x10 (0x10)
	uint8_t __EnumProperty_167;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	struct FName __NameProperty_168;  // 0x1C (0x1C)
	struct FName __NameProperty_169;  // 0x24 (0x24)
	int32_t __IntProperty_170;  // 0x2C (0x2C)
	struct FName __NameProperty_171;  // 0x30 (0x30)
	struct FName __NameProperty_172;  // 0x38 (0x38)
	int32_t __IntProperty_173;  // 0x40 (0x40)
	char pad_68_1 : 7;  // 0x44 (0x44)
	bool __BoolProperty_174 : 1;  // 0x44 (0x44)
	char pad_69[3];  // 0x45 (0x45)
	float __FloatProperty_175;  // 0x48 (0x48)
	struct FInputScaleBiasClampConstants __StructProperty_176;  // 0x4C (0x4C)
	float __FloatProperty_177;  // 0x78 (0x78)
	uint8_t __EnumProperty_178;  // 0x7C (0x7C)
	enum class EAnimGroupRole __ByteProperty_179;  // 0x7D (0x7D)
	char pad_126[2];  // 0x7E (0x7E)
	struct FName __NameProperty_180;  // 0x80 (0x80)
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
 
 // Function ABP_Wisp.ABP_Wisp_C.ExecuteUbergraph_ABP_Wisp
struct FExecuteUbergraph_ABP_Wisp
{
	int32_t EntryPoint;  // 0x0 (0x0)


}; 
 
 // Function ABP_Wisp.ABP_Wisp_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_Wisp.ABP_Wisp_C.BlueprintThreadSafeUpdateAnimation
// Size: 0x8(Inherited: 0x4)
struct FBlueprintThreadSafeUpdateAnimation : FBlueprintThreadSafeUpdateAnimation
{
	float DeltaTime;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x4 (0x4)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x5 (0x5)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool CallFunc_Not_PreBool_ReturnValue_2 : 1;  // 0x6 (0x6)
	char pad_11_1 : 7;  // 0xB (0xB)
	bool CallFunc_BooleanAND_ReturnValue_2 : 1;  // 0x7 (0x7)


}; 
 
 