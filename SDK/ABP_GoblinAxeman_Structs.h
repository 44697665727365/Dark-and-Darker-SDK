#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_GoblinAxeman.ABP_GoblinAxeman_C.AnimBlueprintGeneratedMutableData
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
 
 // ScriptStruct ABP_GoblinAxeman.ABP_GoblinAxeman_C.AnimBlueprintGeneratedConstantData
// Size: 0x198(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_247;  // 0x4 (0x4)
	float __FloatProperty_248;  // 0xC (0xC)
	struct FName __NameProperty_249;  // 0x10 (0x10)
	int32_t __IntProperty_250;  // 0x18 (0x18)
	float __FloatProperty_251;  // 0x1C (0x1C)
	struct FName __NameProperty_252;  // 0x20 (0x20)
	float __FloatProperty_253;  // 0x28 (0x28)
	struct FName __NameProperty_254;  // 0x2C (0x2C)
	char pad_52_1 : 7;  // 0x34 (0x34)
	bool __BoolProperty_255 : 1;  // 0x34 (0x34)
	uint8_t __EnumProperty_256;  // 0x35 (0x35)
	char pad_54[2];  // 0x36 (0x36)
	struct FName __NameProperty_257;  // 0x38 (0x38)
	struct FName __NameProperty_258;  // 0x40 (0x40)
	struct FName __NameProperty_259;  // 0x48 (0x48)
	int32_t __IntProperty_260;  // 0x50 (0x50)
	float __FloatProperty_261;  // 0x54 (0x54)
	struct FInputScaleBiasClampConstants __StructProperty_262;  // 0x58 (0x58)
	float __FloatProperty_263;  // 0x84 (0x84)
	uint8_t __EnumProperty_264;  // 0x88 (0x88)
	enum class EAnimGroupRole __ByteProperty_265;  // 0x89 (0x89)
	char pad_138[2];  // 0x8A (0x8A)
	struct FName __NameProperty_266;  // 0x8C (0x8C)
	char pad_148[4];  // 0x94 (0x94)
	struct UBlendProfile* __BlendProfile_267;  // 0x98 (0x98)
	struct UCurveFloat* __CurveFloat_268;  // 0xA0 (0xA0)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool __BoolProperty_269 : 1;  // 0xA8 (0xA8)
	uint8_t __EnumProperty_270;  // 0xA9 (0xA9)
	uint8_t __EnumProperty_271;  // 0xAA (0xAA)
	char pad_171[5];  // 0xAB (0xAB)
	struct TArray<float> __ArrayProperty_272;  // 0xB0 (0xB0)
	struct FName __NameProperty_273;  // 0xC0 (0xC0)
	int32_t __IntProperty_274;  // 0xC8 (0xC8)
	struct FName __NameProperty_275;  // 0xCC (0xCC)
	struct FName __NameProperty_276;  // 0xD4 (0xD4)
	int32_t __IntProperty_277;  // 0xDC (0xDC)
	struct FAnimNodeFunctionRef __StructProperty_278;  // 0xE0 (0xE0)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0x100 (0x100)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0x180 (0x180)


}; 
 
 // Function ABP_GoblinAxeman.ABP_GoblinAxeman_C.ExecuteUbergraph_ABP_GoblinAxeman
struct FExecuteUbergraph_ABP_GoblinAxeman
{
	int32_t EntryPoint;  // 0x0 (0x0)


}; 
 
 // Function ABP_GoblinAxeman.ABP_GoblinAxeman_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_GoblinAxeman.ABP_GoblinAxeman_C.BlueprintThreadSafeUpdateAnimation
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
 
 