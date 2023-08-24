#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_Cockatrice.ABP_Cockatrice_C.AnimBlueprintGeneratedMutableData
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
 
 // ScriptStruct ABP_Cockatrice.ABP_Cockatrice_C.AnimBlueprintGeneratedConstantData
// Size: 0x190(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_212;  // 0x4 (0x4)
	float __FloatProperty_213;  // 0xC (0xC)
	struct FName __NameProperty_214;  // 0x10 (0x10)
	struct FName __NameProperty_215;  // 0x18 (0x18)
	uint8_t __EnumProperty_216;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	struct FName __NameProperty_217;  // 0x24 (0x24)
	struct FName __NameProperty_218;  // 0x2C (0x2C)
	int32_t __IntProperty_219;  // 0x34 (0x34)
	struct FName __NameProperty_220;  // 0x38 (0x38)
	struct FName __NameProperty_221;  // 0x40 (0x40)
	int32_t __IntProperty_222;  // 0x48 (0x48)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool __BoolProperty_223 : 1;  // 0x4C (0x4C)
	char pad_77[3];  // 0x4D (0x4D)
	float __FloatProperty_224;  // 0x50 (0x50)
	struct FInputScaleBiasClampConstants __StructProperty_225;  // 0x54 (0x54)
	float __FloatProperty_226;  // 0x80 (0x80)
	uint8_t __EnumProperty_227;  // 0x84 (0x84)
	enum class EAnimGroupRole __ByteProperty_228;  // 0x85 (0x85)
	char pad_134[2];  // 0x86 (0x86)
	struct FName __NameProperty_229;  // 0x88 (0x88)
	struct UBlendProfile* __BlendProfile_230;  // 0x90 (0x90)
	struct UCurveFloat* __CurveFloat_231;  // 0x98 (0x98)
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	bool __BoolProperty_232 : 1;  // 0xA0 (0xA0)
	uint8_t __EnumProperty_233;  // 0xA1 (0xA1)
	uint8_t __EnumProperty_234;  // 0xA2 (0xA2)
	char pad_163[5];  // 0xA3 (0xA3)
	struct TArray<float> __ArrayProperty_235;  // 0xA8 (0xA8)
	struct FName __NameProperty_236;  // 0xB8 (0xB8)
	int32_t __IntProperty_237;  // 0xC0 (0xC0)
	struct FName __NameProperty_238;  // 0xC4 (0xC4)
	struct FName __NameProperty_239;  // 0xCC (0xCC)
	int32_t __IntProperty_240;  // 0xD4 (0xD4)
	struct FAnimNodeFunctionRef __StructProperty_241;  // 0xD8 (0xD8)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0xF8 (0xF8)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0x178 (0x178)


}; 
 
 // Function ABP_Cockatrice.ABP_Cockatrice_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_Cockatrice.ABP_Cockatrice_C.BlueprintThreadSafeUpdateAnimation
// Size: 0x9(Inherited: 0x4)
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
	bool CallFunc_BooleanAND_ReturnValue_2 : 1;  // 0x7 (0x7)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool CallFunc_BooleanAND_ReturnValue_3 : 1;  // 0x8 (0x8)


}; 
 
 // Function ABP_Cockatrice.ABP_Cockatrice_C.ExecuteUbergraph_ABP_Cockatrice
struct FExecuteUbergraph_ABP_Cockatrice
{
	int32_t EntryPoint;  // 0x0 (0x0)


}; 
 
 