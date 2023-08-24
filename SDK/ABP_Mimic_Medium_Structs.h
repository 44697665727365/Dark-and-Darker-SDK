#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_Mimic_Medium.ABP_Mimic_Medium_C.AnimBlueprintGeneratedMutableData
// Size: 0x8(Inherited: 0x1)
struct FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
{
	char pad_1[3];  // 0x1 (0x1)
	float __FloatProperty;  // 0x4 (0x4)


}; 
 
 // ScriptStruct ABP_Mimic_Medium.ABP_Mimic_Medium_C.AnimBlueprintGeneratedConstantData
// Size: 0x168(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_161;  // 0x4 (0x4)
	struct FName __NameProperty_162;  // 0xC (0xC)
	struct FName __NameProperty_163;  // 0x14 (0x14)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool __BoolProperty_164 : 1;  // 0x1C (0x1C)
	uint8_t __EnumProperty_165;  // 0x1D (0x1D)
	char pad_30[2];  // 0x1E (0x1E)
	struct FName __NameProperty_166;  // 0x20 (0x20)
	struct FName __NameProperty_167;  // 0x28 (0x28)
	int32_t __IntProperty_168;  // 0x30 (0x30)
	struct FName __NameProperty_169;  // 0x34 (0x34)
	struct FName __NameProperty_170;  // 0x3C (0x3C)
	int32_t __IntProperty_171;  // 0x44 (0x44)
	struct FName __NameProperty_172;  // 0x48 (0x48)
	int32_t __IntProperty_173;  // 0x50 (0x50)
	float __FloatProperty_174;  // 0x54 (0x54)
	struct FInputScaleBiasClampConstants __StructProperty_175;  // 0x58 (0x58)
	float __FloatProperty_176;  // 0x84 (0x84)
	float __FloatProperty_177;  // 0x88 (0x88)
	char pad_140_1 : 7;  // 0x8C (0x8C)
	bool __BoolProperty_178 : 1;  // 0x8C (0x8C)
	uint8_t __EnumProperty_179;  // 0x8D (0x8D)
	enum class EAnimGroupRole __ByteProperty_180;  // 0x8E (0x8E)
	char pad_143[1];  // 0x8F (0x8F)
	struct FName __NameProperty_181;  // 0x90 (0x90)
	struct FName __NameProperty_182;  // 0x98 (0x98)
	struct FName __NameProperty_183;  // 0xA0 (0xA0)
	int32_t __IntProperty_184;  // 0xA8 (0xA8)
	char pad_172[4];  // 0xAC (0xAC)
	struct FAnimNodeFunctionRef __StructProperty_185;  // 0xB0 (0xB0)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0xD0 (0xD0)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0x150 (0x150)


}; 
 
 // Function ABP_Mimic_Medium.ABP_Mimic_Medium_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_Mimic_Medium.ABP_Mimic_Medium_C.BlueprintThreadSafeUpdateAnimation
// Size: 0xA(Inherited: 0x4)
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
	char pad_12_1 : 7;  // 0xC (0xC)
	bool CallFunc_Not_PreBool_ReturnValue_3 : 1;  // 0x8 (0x8)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool CallFunc_BooleanAND_ReturnValue_3 : 1;  // 0x9 (0x9)


}; 
 
 // Function ABP_Mimic_Medium.ABP_Mimic_Medium_C.ExecuteUbergraph_ABP_Mimic_Medium
struct FExecuteUbergraph_ABP_Mimic_Medium
{
	int32_t EntryPoint;  // 0x0 (0x0)


}; 
 
 