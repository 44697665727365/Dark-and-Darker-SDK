#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_DemonDog.ABP_DemonDog_C.AnimBlueprintGeneratedMutableData
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
 
 // ScriptStruct ABP_DemonDog.ABP_DemonDog_C.AnimBlueprintGeneratedConstantData
// Size: 0x188(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_231;  // 0x4 (0x4)
	struct FName __NameProperty_232;  // 0xC (0xC)
	struct FName __NameProperty_233;  // 0x14 (0x14)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool __BoolProperty_234 : 1;  // 0x1C (0x1C)
	uint8_t __EnumProperty_235;  // 0x1D (0x1D)
	char pad_30[2];  // 0x1E (0x1E)
	struct FName __NameProperty_236;  // 0x20 (0x20)
	struct FName __NameProperty_237;  // 0x28 (0x28)
	int32_t __IntProperty_238;  // 0x30 (0x30)
	struct FName __NameProperty_239;  // 0x34 (0x34)
	int32_t __IntProperty_240;  // 0x3C (0x3C)
	struct FName __NameProperty_241;  // 0x40 (0x40)
	struct UBlendProfile* __BlendProfile_242;  // 0x48 (0x48)
	struct UCurveFloat* __CurveFloat_243;  // 0x50 (0x50)
	uint8_t __EnumProperty_244;  // 0x58 (0x58)
	uint8_t __EnumProperty_245;  // 0x59 (0x59)
	char pad_90[6];  // 0x5A (0x5A)
	struct TArray<float> __ArrayProperty_246;  // 0x60 (0x60)
	float __FloatProperty_247;  // 0x70 (0x70)
	struct FInputScaleBiasClampConstants __StructProperty_248;  // 0x74 (0x74)
	float __FloatProperty_249;  // 0xA0 (0xA0)
	char pad_164_1 : 7;  // 0xA4 (0xA4)
	bool __BoolProperty_250 : 1;  // 0xA4 (0xA4)
	uint8_t __EnumProperty_251;  // 0xA5 (0xA5)
	enum class EAnimGroupRole __ByteProperty_252;  // 0xA6 (0xA6)
	char pad_167[1];  // 0xA7 (0xA7)
	struct FName __NameProperty_253;  // 0xA8 (0xA8)
	struct FName __NameProperty_254;  // 0xB0 (0xB0)
	int32_t __IntProperty_255;  // 0xB8 (0xB8)
	struct FName __NameProperty_256;  // 0xBC (0xBC)
	struct FName __NameProperty_257;  // 0xC4 (0xC4)
	int32_t __IntProperty_258;  // 0xCC (0xCC)
	struct FAnimNodeFunctionRef __StructProperty_259;  // 0xD0 (0xD0)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0xF0 (0xF0)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0x170 (0x170)


}; 
 
 // Function ABP_DemonDog.ABP_DemonDog_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_DemonDog.ABP_DemonDog_C.BlueprintThreadSafeUpdateAnimation
// Size: 0xF(Inherited: 0x4)
struct FBlueprintThreadSafeUpdateAnimation : FBlueprintThreadSafeUpdateAnimation
{
	float DeltaTime;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x4 (0x4)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool CallFunc_Not_PreBool_ReturnValue_2 : 1;  // 0x5 (0x5)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x6 (0x6)
	char pad_11_1 : 7;  // 0xB (0xB)
	bool CallFunc_Not_PreBool_ReturnValue_3 : 1;  // 0x7 (0x7)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool CallFunc_BooleanAND_ReturnValue_2 : 1;  // 0x8 (0x8)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool CallFunc_BooleanAND_ReturnValue_3 : 1;  // 0x9 (0x9)
	char pad_14_1 : 7;  // 0xE (0xE)
	bool CallFunc_Not_PreBool_ReturnValue_4 : 1;  // 0xA (0xA)
	char pad_15_1 : 7;  // 0xF (0xF)
	bool CallFunc_Not_PreBool_ReturnValue_5 : 1;  // 0xB (0xB)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_BooleanAND_ReturnValue_4 : 1;  // 0xC (0xC)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool CallFunc_BooleanAND_ReturnValue_5 : 1;  // 0xD (0xD)
	char pad_18_1 : 7;  // 0x12 (0x12)
	bool CallFunc_BooleanAND_ReturnValue_6 : 1;  // 0xE (0xE)


}; 
 
 // Function ABP_DemonDog.ABP_DemonDog_C.ExecuteUbergraph_ABP_DemonDog
struct FExecuteUbergraph_ABP_DemonDog
{
	int32_t EntryPoint;  // 0x0 (0x0)


}; 
 
 