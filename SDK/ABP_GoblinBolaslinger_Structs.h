#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_GoblinBolaslinger.ABP_GoblinBolaslinger_C.AnimBlueprintGeneratedMutableData
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
 
 // ScriptStruct ABP_GoblinBolaslinger.ABP_GoblinBolaslinger_C.AnimBlueprintGeneratedConstantData
// Size: 0x188(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_257;  // 0x4 (0x4)
	struct FName __NameProperty_258;  // 0xC (0xC)
	int32_t __IntProperty_259;  // 0x14 (0x14)
	struct FName __NameProperty_260;  // 0x18 (0x18)
	struct FName __NameProperty_261;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool __BoolProperty_262 : 1;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	struct FName __NameProperty_263;  // 0x2C (0x2C)
	uint8_t __EnumProperty_264;  // 0x34 (0x34)
	char pad_53[3];  // 0x35 (0x35)
	struct FName __NameProperty_265;  // 0x38 (0x38)
	int32_t __IntProperty_266;  // 0x40 (0x40)
	float __FloatProperty_267;  // 0x44 (0x44)
	struct FInputScaleBiasClampConstants __StructProperty_268;  // 0x48 (0x48)
	float __FloatProperty_269;  // 0x74 (0x74)
	uint8_t __EnumProperty_270;  // 0x78 (0x78)
	enum class EAnimGroupRole __ByteProperty_271;  // 0x79 (0x79)
	char pad_122[2];  // 0x7A (0x7A)
	struct FName __NameProperty_272;  // 0x7C (0x7C)
	char pad_132[4];  // 0x84 (0x84)
	struct UBlendProfile* __BlendProfile_273;  // 0x88 (0x88)
	struct UCurveFloat* __CurveFloat_274;  // 0x90 (0x90)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool __BoolProperty_275 : 1;  // 0x98 (0x98)
	uint8_t __EnumProperty_276;  // 0x99 (0x99)
	uint8_t __EnumProperty_277;  // 0x9A (0x9A)
	char pad_155[5];  // 0x9B (0x9B)
	struct TArray<float> __ArrayProperty_278;  // 0xA0 (0xA0)
	struct FName __NameProperty_279;  // 0xB0 (0xB0)
	int32_t __IntProperty_280;  // 0xB8 (0xB8)
	struct FName __NameProperty_281;  // 0xBC (0xBC)
	struct FName __NameProperty_282;  // 0xC4 (0xC4)
	int32_t __IntProperty_283;  // 0xCC (0xCC)
	struct FAnimNodeFunctionRef __StructProperty_284;  // 0xD0 (0xD0)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0xF0 (0xF0)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0x170 (0x170)


}; 
 
 // Function ABP_GoblinBolaslinger.ABP_GoblinBolaslinger_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_GoblinBolaslinger.ABP_GoblinBolaslinger_C.BlueprintThreadSafeUpdateAnimation
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
 
 // Function ABP_GoblinBolaslinger.ABP_GoblinBolaslinger_C.ExecuteUbergraph_ABP_GoblinBolaslinger
struct FExecuteUbergraph_ABP_GoblinBolaslinger
{
	int32_t EntryPoint;  // 0x0 (0x0)


}; 
 
 