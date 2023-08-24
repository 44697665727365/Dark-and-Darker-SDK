#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_SkeletonGuardman_Summoned.ABP_SkeletonGuardman_Summoned_C.AnimBlueprintGeneratedMutableData
// Size: 0xE(Inherited: 0x1)
struct FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
{
	char pad_1[3];  // 0x1 (0x1)
	float __FloatProperty;  // 0x4 (0x4)
	float __FloatProperty_1;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool __BoolProperty_2 : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool __BoolProperty_3 : 1;  // 0xD (0xD)


}; 
 
 // ScriptStruct ABP_SkeletonGuardman_Summoned.ABP_SkeletonGuardman_Summoned_C.AnimBlueprintGeneratedConstantData
// Size: 0x180(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_206;  // 0x4 (0x4)
	struct FName __NameProperty_207;  // 0xC (0xC)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool __BoolProperty_208 : 1;  // 0x14 (0x14)
	uint8_t __EnumProperty_209;  // 0x15 (0x15)
	char pad_22[2];  // 0x16 (0x16)
	struct FName __NameProperty_210;  // 0x18 (0x18)
	struct FName __NameProperty_211;  // 0x20 (0x20)
	int32_t __IntProperty_212;  // 0x28 (0x28)
	struct FName __NameProperty_213;  // 0x2C (0x2C)
	struct FName __NameProperty_214;  // 0x34 (0x34)
	int32_t __IntProperty_215;  // 0x3C (0x3C)
	float __FloatProperty_216;  // 0x40 (0x40)
	struct FInputScaleBiasClampConstants __StructProperty_217;  // 0x44 (0x44)
	float __FloatProperty_218;  // 0x70 (0x70)
	uint8_t __EnumProperty_219;  // 0x74 (0x74)
	enum class EAnimGroupRole __ByteProperty_220;  // 0x75 (0x75)
	char pad_118[2];  // 0x76 (0x76)
	struct FName __NameProperty_221;  // 0x78 (0x78)
	struct UBlendProfile* __BlendProfile_222;  // 0x80 (0x80)
	struct UCurveFloat* __CurveFloat_223;  // 0x88 (0x88)
	char pad_144_1 : 7;  // 0x90 (0x90)
	bool __BoolProperty_224 : 1;  // 0x90 (0x90)
	uint8_t __EnumProperty_225;  // 0x91 (0x91)
	uint8_t __EnumProperty_226;  // 0x92 (0x92)
	char pad_147[5];  // 0x93 (0x93)
	struct TArray<float> __ArrayProperty_227;  // 0x98 (0x98)
	struct FName __NameProperty_228;  // 0xA8 (0xA8)
	int32_t __IntProperty_229;  // 0xB0 (0xB0)
	struct FName __NameProperty_230;  // 0xB4 (0xB4)
	struct FName __NameProperty_231;  // 0xBC (0xBC)
	int32_t __IntProperty_232;  // 0xC4 (0xC4)
	struct FAnimNodeFunctionRef __StructProperty_233;  // 0xC8 (0xC8)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0xE8 (0xE8)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0x168 (0x168)


}; 
 
 // Function ABP_SkeletonGuardman_Summoned.ABP_SkeletonGuardman_Summoned_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_SkeletonGuardman_Summoned.ABP_SkeletonGuardman_Summoned_C.BlueprintThreadSafeUpdateAnimation
// Size: 0xC(Inherited: 0x4)
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
	char pad_14_1 : 7;  // 0xE (0xE)
	bool CallFunc_Not_PreBool_ReturnValue_4 : 1;  // 0xA (0xA)
	char pad_15_1 : 7;  // 0xF (0xF)
	bool CallFunc_BooleanAND_ReturnValue_4 : 1;  // 0xB (0xB)


}; 
 
 // Function ABP_SkeletonGuardman_Summoned.ABP_SkeletonGuardman_Summoned_C.ExecuteUbergraph_ABP_SkeletonGuardman_Summoned
struct FExecuteUbergraph_ABP_SkeletonGuardman_Summoned
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x14 (0x14)
	char pad_36[4];  // 0x24 (0x24)
	struct APawn* CallFunc_TryGetPawnOwner_ReturnValue;  // 0x28 (0x28)
	struct UAbilityAsync_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAddToActor_ReturnValue;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct APawn* CallFunc_TryGetPawnOwner_ReturnValue_2;  // 0x40 (0x40)
	struct UAbilityAsync_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue;  // 0x48 (0x48)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x50 (0x50)


}; 
 
 