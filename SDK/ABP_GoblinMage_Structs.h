#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_GoblinMage.ABP_GoblinMage_C.AnimBlueprintGeneratedMutableData
// Size: 0xC(Inherited: 0x1)
struct FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
{
	char pad_1[3];  // 0x1 (0x1)
	float __FloatProperty;  // 0x4 (0x4)
	float __FloatProperty_1;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ABP_GoblinMage.ABP_GoblinMage_C.AnimBlueprintGeneratedConstantData
// Size: 0x160(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_149;  // 0x4 (0x4)
	struct FName __NameProperty_150;  // 0xC (0xC)
	int32_t __IntProperty_151;  // 0x14 (0x14)
	float __FloatProperty_152;  // 0x18 (0x18)
	struct FName __NameProperty_153;  // 0x1C (0x1C)
	uint8_t __EnumProperty_154;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	struct FName __NameProperty_155;  // 0x28 (0x28)
	struct FName __NameProperty_156;  // 0x30 (0x30)
	struct FName __NameProperty_157;  // 0x38 (0x38)
	int32_t __IntProperty_158;  // 0x40 (0x40)
	char pad_68_1 : 7;  // 0x44 (0x44)
	bool __BoolProperty_159 : 1;  // 0x44 (0x44)
	char pad_69[3];  // 0x45 (0x45)
	float __FloatProperty_160;  // 0x48 (0x48)
	struct FInputScaleBiasClampConstants __StructProperty_161;  // 0x4C (0x4C)
	float __FloatProperty_162;  // 0x78 (0x78)
	char pad_124_1 : 7;  // 0x7C (0x7C)
	bool __BoolProperty_163 : 1;  // 0x7C (0x7C)
	uint8_t __EnumProperty_164;  // 0x7D (0x7D)
	enum class EAnimGroupRole __ByteProperty_165;  // 0x7E (0x7E)
	char pad_127[1];  // 0x7F (0x7F)
	struct FName __NameProperty_166;  // 0x80 (0x80)
	struct FName __NameProperty_167;  // 0x88 (0x88)
	int32_t __IntProperty_168;  // 0x90 (0x90)
	struct FName __NameProperty_169;  // 0x94 (0x94)
	struct FName __NameProperty_170;  // 0x9C (0x9C)
	int32_t __IntProperty_171;  // 0xA4 (0xA4)
	struct FAnimNodeFunctionRef __StructProperty_172;  // 0xA8 (0xA8)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0xC8 (0xC8)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0x148 (0x148)


}; 
 
 // Function ABP_GoblinMage.ABP_GoblinMage_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_GoblinMage.ABP_GoblinMage_C.BlueprintThreadSafeUpdateAnimation
// Size: 0x9(Inherited: 0x4)
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
	bool CallFunc_Not_PreBool_ReturnValue_3 : 1;  // 0x7 (0x7)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool CallFunc_BooleanAND_ReturnValue_2 : 1;  // 0x8 (0x8)


}; 
 
 // Function ABP_GoblinMage.ABP_GoblinMage_C.ExecuteUbergraph_ABP_GoblinMage
struct FExecuteUbergraph_ABP_GoblinMage
{
	int32_t EntryPoint;  // 0x0 (0x0)


}; 
 
 