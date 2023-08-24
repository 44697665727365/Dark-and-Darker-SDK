#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C.AnimBlueprintGeneratedConstantData
// Size: 0x1B0(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_324;  // 0x4 (0x4)
	char pad_12[4];  // 0xC (0xC)
	struct TArray<float> __ArrayProperty_325;  // 0x10 (0x10)
	struct TArray<float> __ArrayProperty_326;  // 0x20 (0x20)
	struct FName __NameProperty_327;  // 0x30 (0x30)
	struct UBlendProfile* __BlendProfile_328;  // 0x38 (0x38)
	struct UCurveFloat* __CurveFloat_329;  // 0x40 (0x40)
	uint8_t __EnumProperty_330;  // 0x48 (0x48)
	uint8_t __EnumProperty_331;  // 0x49 (0x49)
	char pad_74[6];  // 0x4A (0x4A)
	struct TArray<float> __ArrayProperty_332;  // 0x50 (0x50)
	float __FloatProperty_333;  // 0x60 (0x60)
	uint8_t __EnumProperty_334;  // 0x64 (0x64)
	char pad_101[3];  // 0x65 (0x65)
	struct FName __NameProperty_335;  // 0x68 (0x68)
	int32_t __IntProperty_336;  // 0x70 (0x70)
	float __FloatProperty_337;  // 0x74 (0x74)
	struct FName __NameProperty_338;  // 0x78 (0x78)
	struct FName __NameProperty_339;  // 0x80 (0x80)
	int32_t __IntProperty_340;  // 0x88 (0x88)
	struct FName __NameProperty_341;  // 0x8C (0x8C)
	char pad_148_1 : 7;  // 0x94 (0x94)
	bool __BoolProperty_342 : 1;  // 0x94 (0x94)
	char pad_149[3];  // 0x95 (0x95)
	float __FloatProperty_343;  // 0x98 (0x98)
	struct FInputScaleBiasClampConstants __StructProperty_344;  // 0x9C (0x9C)
	float __FloatProperty_345;  // 0xC8 (0xC8)
	char pad_204_1 : 7;  // 0xCC (0xCC)
	bool __BoolProperty_346 : 1;  // 0xCC (0xCC)
	uint8_t __EnumProperty_347;  // 0xCD (0xCD)
	enum class EAnimGroupRole __ByteProperty_348;  // 0xCE (0xCE)
	char pad_207[1];  // 0xCF (0xCF)
	struct FName __NameProperty_349;  // 0xD0 (0xD0)
	struct FName __NameProperty_350;  // 0xD8 (0xD8)
	int32_t __IntProperty_351;  // 0xE0 (0xE0)
	struct FName __NameProperty_352;  // 0xE4 (0xE4)
	struct FName __NameProperty_353;  // 0xEC (0xEC)
	int32_t __IntProperty_354;  // 0xF4 (0xF4)
	struct FAnimNodeFunctionRef __StructProperty_355;  // 0xF8 (0xF8)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0x118 (0x118)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0x198 (0x198)


}; 
 
 // ScriptStruct ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C.AnimBlueprintGeneratedMutableData
// Size: 0x2C(Inherited: 0x1)
struct FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
{
	char pad_1[3];  // 0x1 (0x1)
	float __FloatProperty;  // 0x4 (0x4)
	float __FloatProperty_1;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool __BoolProperty_2 : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	float __FloatProperty_3;  // 0x10 (0x10)
	float __FloatProperty_4;  // 0x14 (0x14)
	float __FloatProperty_5;  // 0x18 (0x18)
	float __FloatProperty_6;  // 0x1C (0x1C)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool __BoolProperty_7 : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool __BoolProperty_8 : 1;  // 0x21 (0x21)
	char pad_34_1 : 7;  // 0x22 (0x22)
	bool __BoolProperty_9 : 1;  // 0x22 (0x22)
	char pad_35_1 : 7;  // 0x23 (0x23)
	bool __BoolProperty_10 : 1;  // 0x23 (0x23)
	float __FloatProperty_11;  // 0x24 (0x24)
	float __FloatProperty_12;  // 0x28 (0x28)


}; 
 
 // Function ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C.OnChangedStandIdle
struct FOnChangedStandIdle
{
	struct UAnimSequence* ItemStandIdleAnimation;  // 0x0 (0x0)
	struct FGameplayTag ItemHandType;  // 0x8 (0x8)
	struct FGameplayTag ItemSlotType;  // 0x10 (0x10)


}; 
 
 // Function ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C.BlueprintThreadSafeUpdateAnimation
// Size: 0x17(Inherited: 0x4)
struct FBlueprintThreadSafeUpdateAnimation : FBlueprintThreadSafeUpdateAnimation
{
	float DeltaTime;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0x4 (0x4)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2 : 1;  // 0x5 (0x5)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3 : 1;  // 0x6 (0x6)
	char pad_11_1 : 7;  // 0xB (0xB)
	bool CallFunc_BooleanOR_ReturnValue : 1;  // 0x7 (0x7)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_4 : 1;  // 0x8 (0x8)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_5 : 1;  // 0x9 (0x9)
	char pad_14_1 : 7;  // 0xE (0xE)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_6 : 1;  // 0xA (0xA)
	char pad_15_1 : 7;  // 0xF (0xF)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_7 : 1;  // 0xB (0xB)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_8 : 1;  // 0xC (0xC)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_9 : 1;  // 0xD (0xD)
	char pad_18_1 : 7;  // 0x12 (0x12)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_10 : 1;  // 0xE (0xE)
	char pad_19_1 : 7;  // 0x13 (0x13)
	bool CallFunc_BooleanOR_ReturnValue_2 : 1;  // 0xF (0xF)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool CallFunc_BooleanOR_ReturnValue_3 : 1;  // 0x10 (0x10)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x11 (0x11)
	char pad_22_1 : 7;  // 0x16 (0x16)
	bool CallFunc_BooleanOR_ReturnValue_4 : 1;  // 0x12 (0x12)
	char pad_23_1 : 7;  // 0x17 (0x17)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x13 (0x13)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool CallFunc_BooleanOR_ReturnValue_5 : 1;  // 0x14 (0x14)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool CallFunc_BooleanOR_ReturnValue_6 : 1;  // 0x15 (0x15)
	char pad_26_1 : 7;  // 0x1A (0x1A)
	bool CallFunc_BooleanOR_ReturnValue_7 : 1;  // 0x16 (0x16)


}; 
 
 // Function ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C.ExecuteUbergraph_ABP_PlayerCharacterCapture
struct FExecuteUbergraph_ABP_PlayerCharacterCapture
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UAnimSequence* K2Node_CustomEvent_ItemStandIdleAnimation;  // 0x8 (0x8)
	struct FGameplayTag K2Node_CustomEvent_ItemHandType;  // 0x10 (0x10)
	struct FGameplayTag K2Node_CustomEvent_ItemSlotType;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_MatchesTag_ReturnValue : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool CallFunc_MatchesTag_ReturnValue_2 : 1;  // 0x21 (0x21)
	char pad_34_1 : 7;  // 0x22 (0x22)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0x22 (0x22)


}; 
 
 