#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_GoblinWarrior.ABP_GoblinWarrior_C.AnimBlueprintGeneratedMutableData
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
 
 // ScriptStruct ABP_GoblinWarrior.ABP_GoblinWarrior_C.AnimBlueprintGeneratedConstantData
// Size: 0x190(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_240;  // 0x4 (0x4)
	struct FName __NameProperty_241;  // 0xC (0xC)
	int32_t __IntProperty_242;  // 0x14 (0x14)
	struct FName __NameProperty_243;  // 0x18 (0x18)
	struct FName __NameProperty_244;  // 0x20 (0x20)
	uint8_t __EnumProperty_245;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	struct FName __NameProperty_246;  // 0x2C (0x2C)
	struct FName __NameProperty_247;  // 0x34 (0x34)
	struct FName __NameProperty_248;  // 0x3C (0x3C)
	int32_t __IntProperty_249;  // 0x44 (0x44)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool __BoolProperty_250 : 1;  // 0x48 (0x48)
	char pad_73[3];  // 0x49 (0x49)
	float __FloatProperty_251;  // 0x4C (0x4C)
	struct FInputScaleBiasClampConstants __StructProperty_252;  // 0x50 (0x50)
	float __FloatProperty_253;  // 0x7C (0x7C)
	float __FloatProperty_254;  // 0x80 (0x80)
	uint8_t __EnumProperty_255;  // 0x84 (0x84)
	enum class EAnimGroupRole __ByteProperty_256;  // 0x85 (0x85)
	char pad_134[2];  // 0x86 (0x86)
	struct FName __NameProperty_257;  // 0x88 (0x88)
	struct UBlendProfile* __BlendProfile_258;  // 0x90 (0x90)
	struct UCurveFloat* __CurveFloat_259;  // 0x98 (0x98)
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	bool __BoolProperty_260 : 1;  // 0xA0 (0xA0)
	uint8_t __EnumProperty_261;  // 0xA1 (0xA1)
	uint8_t __EnumProperty_262;  // 0xA2 (0xA2)
	char pad_163[5];  // 0xA3 (0xA3)
	struct TArray<float> __ArrayProperty_263;  // 0xA8 (0xA8)
	struct FName __NameProperty_264;  // 0xB8 (0xB8)
	int32_t __IntProperty_265;  // 0xC0 (0xC0)
	struct FName __NameProperty_266;  // 0xC4 (0xC4)
	struct FName __NameProperty_267;  // 0xCC (0xCC)
	int32_t __IntProperty_268;  // 0xD4 (0xD4)
	struct FAnimNodeFunctionRef __StructProperty_269;  // 0xD8 (0xD8)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0xF8 (0xF8)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0x178 (0x178)


}; 
 
 // Function ABP_GoblinWarrior.ABP_GoblinWarrior_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_GoblinWarrior.ABP_GoblinWarrior_C.BlueprintThreadSafeUpdateAnimation
// Size: 0xA(Inherited: 0x4)
struct FBlueprintThreadSafeUpdateAnimation : FBlueprintThreadSafeUpdateAnimation
{
	float DeltaTime;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x4 (0x4)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x5 (0x5)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool CallFunc_EqualEqual_IntInt_ReturnValue_2 : 1;  // 0x6 (0x6)
	char pad_11_1 : 7;  // 0xB (0xB)
	bool CallFunc_BooleanAND_ReturnValue_2 : 1;  // 0x7 (0x7)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool CallFunc_EqualEqual_IntInt_ReturnValue_3 : 1;  // 0x8 (0x8)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool CallFunc_BooleanAND_ReturnValue_3 : 1;  // 0x9 (0x9)


}; 
 
 // Function ABP_GoblinWarrior.ABP_GoblinWarrior_C.ExecuteUbergraph_ABP_GoblinWarrior
struct FExecuteUbergraph_ABP_GoblinWarrior
{
	int32_t EntryPoint;  // 0x0 (0x0)


}; 
 
 