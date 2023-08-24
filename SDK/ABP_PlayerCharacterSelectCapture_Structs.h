#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function ABP_PlayerCharacterSelectCapture.ABP_PlayerCharacterSelectCapture_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ABP_PlayerCharacterSelectCapture.ABP_PlayerCharacterSelectCapture_C.AnimBlueprintGeneratedConstantData
// Size: 0x1D0(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_344;  // 0x4 (0x4)
	char pad_12[4];  // 0xC (0xC)
	struct TArray<float> __ArrayProperty_345;  // 0x10 (0x10)
	struct TArray<float> __ArrayProperty_346;  // 0x20 (0x20)
	struct FName __NameProperty_347;  // 0x30 (0x30)
	struct UBlendProfile* __BlendProfile_348;  // 0x38 (0x38)
	struct UCurveFloat* __CurveFloat_349;  // 0x40 (0x40)
	uint8_t __EnumProperty_350;  // 0x48 (0x48)
	uint8_t __EnumProperty_351;  // 0x49 (0x49)
	char pad_74[6];  // 0x4A (0x4A)
	struct TArray<float> __ArrayProperty_352;  // 0x50 (0x50)
	float __FloatProperty_353;  // 0x60 (0x60)
	struct FName __NameProperty_354;  // 0x64 (0x64)
	float __FloatProperty_355;  // 0x6C (0x6C)
	struct FName __NameProperty_356;  // 0x70 (0x70)
	struct FName __NameProperty_357;  // 0x78 (0x78)
	struct FName __NameProperty_358;  // 0x80 (0x80)
	uint8_t __EnumProperty_359;  // 0x88 (0x88)
	char pad_137[3];  // 0x89 (0x89)
	struct FName __NameProperty_360;  // 0x8C (0x8C)
	float __FloatProperty_361;  // 0x94 (0x94)
	struct FName __NameProperty_362;  // 0x98 (0x98)
	int32_t __IntProperty_363;  // 0xA0 (0xA0)
	struct FName __NameProperty_364;  // 0xA4 (0xA4)
	int32_t __IntProperty_365;  // 0xAC (0xAC)
	float __FloatProperty_366;  // 0xB0 (0xB0)
	struct FName __NameProperty_367;  // 0xB4 (0xB4)
	int32_t __IntProperty_368;  // 0xBC (0xBC)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool __BoolProperty_369 : 1;  // 0xC0 (0xC0)
	char pad_193[3];  // 0xC1 (0xC1)
	float __FloatProperty_370;  // 0xC4 (0xC4)
	struct FInputScaleBiasClampConstants __StructProperty_371;  // 0xC8 (0xC8)
	float __FloatProperty_372;  // 0xF4 (0xF4)
	float __FloatProperty_373;  // 0xF8 (0xF8)
	char pad_252_1 : 7;  // 0xFC (0xFC)
	bool __BoolProperty_374 : 1;  // 0xFC (0xFC)
	uint8_t __EnumProperty_375;  // 0xFD (0xFD)
	enum class EAnimGroupRole __ByteProperty_376;  // 0xFE (0xFE)
	char pad_255[1];  // 0xFF (0xFF)
	struct FName __NameProperty_377;  // 0x100 (0x100)
	struct FName __NameProperty_378;  // 0x108 (0x108)
	int32_t __IntProperty_379;  // 0x110 (0x110)
	char pad_276[4];  // 0x114 (0x114)
	struct FAnimNodeFunctionRef __StructProperty_380;  // 0x118 (0x118)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0x138 (0x138)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0x1B8 (0x1B8)


}; 
 
 // ScriptStruct ABP_PlayerCharacterSelectCapture.ABP_PlayerCharacterSelectCapture_C.AnimBlueprintGeneratedMutableData
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
 
 // Function ABP_PlayerCharacterSelectCapture.ABP_PlayerCharacterSelectCapture_C.OnChangedStandIdle
struct FOnChangedStandIdle
{
	struct UAnimSequence* ItemStandIdleAnimation;  // 0x0 (0x0)
	struct FGameplayTag ItemHandType;  // 0x8 (0x8)
	struct FGameplayTag ItemSlotType;  // 0x10 (0x10)


}; 
 
 // Function ABP_PlayerCharacterSelectCapture.ABP_PlayerCharacterSelectCapture_C.ExecuteUbergraph_ABP_PlayerCharacterSelectCapture
struct FExecuteUbergraph_ABP_PlayerCharacterSelectCapture
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool CallFunc_Less_DoubleDouble_ReturnValue_2 : 1;  // 0x5 (0x5)
	char pad_6_1 : 7;  // 0x6 (0x6)
	bool CallFunc_BooleanOR_ReturnValue : 1;  // 0x6 (0x6)
	char pad_7_1 : 7;  // 0x7 (0x7)
	bool CallFunc_BooleanOR_ReturnValue_2 : 1;  // 0x7 (0x7)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x9 (0x9)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0xA (0xA)
	char pad_11_1 : 7;  // 0xB (0xB)
	bool CallFunc_Greater_DoubleDouble_ReturnValue_2 : 1;  // 0xB (0xB)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool CallFunc_Not_PreBool_ReturnValue_2 : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool CallFunc_BooleanAND_ReturnValue_2 : 1;  // 0xD (0xD)
	char pad_14_1 : 7;  // 0xE (0xE)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0xE (0xE)
	char pad_15_1 : 7;  // 0xF (0xF)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2 : 1;  // 0xF (0xF)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3 : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool CallFunc_BooleanOR_ReturnValue_3 : 1;  // 0x11 (0x11)
	char pad_18_1 : 7;  // 0x12 (0x12)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_4 : 1;  // 0x12 (0x12)
	char pad_19_1 : 7;  // 0x13 (0x13)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_5 : 1;  // 0x13 (0x13)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_6 : 1;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_7 : 1;  // 0x15 (0x15)
	char pad_22_1 : 7;  // 0x16 (0x16)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_8 : 1;  // 0x16 (0x16)
	char pad_23_1 : 7;  // 0x17 (0x17)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_9 : 1;  // 0x17 (0x17)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_10 : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool CallFunc_BooleanOR_ReturnValue_4 : 1;  // 0x19 (0x19)
	char pad_26_1 : 7;  // 0x1A (0x1A)
	bool CallFunc_BooleanOR_ReturnValue_5 : 1;  // 0x1A (0x1A)
	char pad_27_1 : 7;  // 0x1B (0x1B)
	bool CallFunc_BooleanOR_ReturnValue_6 : 1;  // 0x1B (0x1B)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool CallFunc_BooleanOR_ReturnValue_7 : 1;  // 0x1C (0x1C)
	char pad_29_1 : 7;  // 0x1D (0x1D)
	bool CallFunc_BooleanOR_ReturnValue_8 : 1;  // 0x1D (0x1D)
	char pad_30[2];  // 0x1E (0x1E)
	struct UAnimSequence* K2Node_CustomEvent_ItemStandIdleAnimation;  // 0x20 (0x20)
	struct FGameplayTag K2Node_CustomEvent_ItemHandType;  // 0x28 (0x28)
	struct FGameplayTag K2Node_CustomEvent_ItemSlotType;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_BooleanOR_ReturnValue_9 : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool CallFunc_MatchesTag_ReturnValue : 1;  // 0x39 (0x39)
	char pad_58_1 : 7;  // 0x3A (0x3A)
	bool CallFunc_MatchesTag_ReturnValue_2 : 1;  // 0x3A (0x3A)
	char pad_59_1 : 7;  // 0x3B (0x3B)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_11 : 1;  // 0x3B (0x3B)
	char pad_60[4];  // 0x3C (0x3C)
	double CallFunc_Less_DoubleDouble_A_ImplicitCast;  // 0x40 (0x40)
	double CallFunc_Less_DoubleDouble_A_ImplicitCast_2;  // 0x48 (0x48)
	double CallFunc_Greater_DoubleDouble_A_ImplicitCast;  // 0x50 (0x50)
	double CallFunc_Greater_DoubleDouble_A_ImplicitCast_2;  // 0x58 (0x58)


}; 
 
 