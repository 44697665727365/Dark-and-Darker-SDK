#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_RuinsGolem.ABP_RuinsGolem_C.AnimBlueprintGeneratedMutableData
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
 
 // ScriptStruct ABP_RuinsGolem.ABP_RuinsGolem_C.AnimBlueprintGeneratedConstantData
// Size: 0x190(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_189;  // 0x4 (0x4)
	struct FName __NameProperty_190;  // 0xC (0xC)
	struct FName __NameProperty_191;  // 0x14 (0x14)
	uint8_t __EnumProperty_192;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct FName __NameProperty_193;  // 0x20 (0x20)
	struct FName __NameProperty_194;  // 0x28 (0x28)
	int32_t __IntProperty_195;  // 0x30 (0x30)
	struct FName __NameProperty_196;  // 0x34 (0x34)
	struct FName __NameProperty_197;  // 0x3C (0x3C)
	int32_t __IntProperty_198;  // 0x44 (0x44)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool __BoolProperty_199 : 1;  // 0x48 (0x48)
	char pad_73[3];  // 0x49 (0x49)
	float __FloatProperty_200;  // 0x4C (0x4C)
	struct FInputScaleBiasClampConstants __StructProperty_201;  // 0x50 (0x50)
	float __FloatProperty_202;  // 0x7C (0x7C)
	uint8_t __EnumProperty_203;  // 0x80 (0x80)
	enum class EAnimGroupRole __ByteProperty_204;  // 0x81 (0x81)
	char pad_130[2];  // 0x82 (0x82)
	struct FName __NameProperty_205;  // 0x84 (0x84)
	char pad_140[4];  // 0x8C (0x8C)
	struct UBlendProfile* __BlendProfile_206;  // 0x90 (0x90)
	struct UCurveFloat* __CurveFloat_207;  // 0x98 (0x98)
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	bool __BoolProperty_208 : 1;  // 0xA0 (0xA0)
	uint8_t __EnumProperty_209;  // 0xA1 ([xA1)
	uint8_t __EnumProperty_210;  // 000038058] ited: 0x1)
 (000038058] ited: 0x1)
)
	char pad_163[5];  // 0xA3 (0xA3)
	struct TArray<float> __ArrayProperty_211;  // 0xA8 (0xA8)
	struct FName __NameProperty_212;  // 0xB8 (0xB8)
	int32_t __IntProperty_213;  // 0xC0 (0xC0)
	struct FName __NameProperty_214;  // 0xC4 (0xC4)
	struct FName __NameProperty_215;  // 0xCC (0xCC)
	int32_t __IntProperty_216;  // 0xD4 (0xD4)
	struct FAnimNodeFunctionRef __StructProperty_217;  // 0xD8 (0xD8)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0xF8 (0xF8)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0x178 (0x178)


}; 
 
 // Function ABP_RuinsGolem.ABP_RuinsGolem_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_RuinsGolem.ABP_RuinsGolem_C.BlueprintThreadSafeUpdateAnimation
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
 
 // Function ABP_RuinsGolem.ABP_RuinsGolem_C.ExecuteUbergraph_ABP_RuinsGolem
struct FExecuteUbergraph_ABP_RuinsGolem
{
	int32_t EntryPoint;  // 0x0 (0x0)


}; 
 
 