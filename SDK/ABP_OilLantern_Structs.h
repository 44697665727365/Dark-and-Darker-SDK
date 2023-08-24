#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_OilLantern.ABP_OilLantern_C.AnimBlueprintGeneratedMutableData
// Size: 0x10(Inherited: 0x1)
struct FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
{
	char pad_1[3];  // 0x1 (0x1)
	float __FloatProperty;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool __BoolProperty_1 : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	float __FloatProperty_2;  // 0xC (0xC)


}; 
 
 // ScriptStruct ABP_OilLantern.ABP_OilLantern_C.AnimBlueprintGeneratedConstantData
// Size: 0x1C0(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_335;  // 0x4 (0x4)
	struct FName __NameProperty_336;  // 0xC (0xC)
	struct FName __NameProperty_337;  // 0x14 (0x14)
	struct FName __NameProperty_338;  // 0x1C (0x1C)
	struct FName __NameProperty_339;  // 0x24 (0x24)
	struct FName __NameProperty_340;  // 0x2C (0x2C)
	struct FName __NameProperty_341;  // 0x34 (0x34)
	float __FloatProperty_342;  // 0x3C (0x3C)
	struct FName __NameProperty_343;  // 0x40 (0x40)
	struct FName __NameProperty_344;  // 0x48 (0x48)
	int32_t __IntProperty_345;  // 0x50 (0x50)
	struct FName __NameProperty_346;  // 0x54 (0x54)
	int32_t __IntProperty_347;  // 0x5C (0x5C)
	float __FloatProperty_348;  // 0x60 (0x60)
	struct FName __NameProperty_349;  // 0x64 (0x64)
	struct FName __NameProperty_350;  // 0x6C (0x6C)
	char pad_116[4];  // 0x74 (0x74)
	struct UBlendProfile* __BlendProfile_351;  // 0x78 (0x78)
	struct UCurveFloat* __CurveFloat_352;  // 0x80 (0x80)
	uint8_t __EnumProperty_353;  // 0x88 (0x88)
	uint8_t __EnumProperty_354;  // 0x89 (0x89)
	char pad_138[6];  // 0x8A (0x8A)
	struct TArray<float> __ArrayProperty_355;  // 0x90 (0x90)
	struct FName __NameProperty_356;  // 0xA0 (0xA0)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool __BoolProperty_357 : 1;  // 0xA8 (0xA8)
	char pad_169[3];  // 0xA9 (0xA9)
	float __FloatProperty_358;  // 0xAC (0xAC)
	struct FInputScaleBiasClampConstants __StructProperty_359;  // 0xB0 (0xB0)
	float __FloatProperty_360;  // 0xDC (0xDC)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool __BoolProperty_361 : 1;  // 0xE0 (0xE0)
	uint8_t __EnumProperty_362;  // 0xE1 (0xE1)
	enum class EAnimGroupRole __ByteProperty_363;  // 0xE2 (0xE2)
	char pad_227[1];  // 0xE3 (0xE3)
	struct FName __NameProperty_364;  // 0xE4 (0xE4)
	int32_t __IntProperty_365;  // 0xEC (0xEC)
	struct FName __NameProperty_366;  // 0xF0 (0xF0)
	struct FName __NameProperty_367;  // 0xF8 (0xF8)
	int32_t __IntProperty_368;  // 0x100 (0x100)
	char pad_260[4];  // 0x104 (0x104)
	struct FAnimNodeFunctionRef __StructProperty_369;  // 0x108 (0x108)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0x128 (0x128)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0x1A8 (0x1A8)


}; 
 
 // Function ABP_OilLantern.ABP_OilLantern_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_OilLantern.ABP_OilLantern_C.OnItemDataUpdated
// Size: 0xA0(Inherited: 0xA0)
struct FOnItemDataUpdated : FOnItemDataUpdated
{
	struct FItemData ItemData;  // 0x0 (0x0)


}; 
 
 // Function ABP_OilLantern.ABP_OilLantern_C.ExecuteUbergraph_ABP_OilLantern
struct FExecuteUbergraph_ABP_OilLantern
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FItemData K2Node_Event_ItemData;  // 0x8 (0x8)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0xA8 (0xA8)
	char pad_169[3];  // 0xA9 (0xA9)
	float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue;  // 0xAC (0xAC)
	float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_2;  // 0xB0 (0xB0)
	char pad_180_1 : 7;  // 0xB4 (0xB4)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0xB4 (0xB4)
	char pad_181_1 : 7;  // 0xB5 (0xB5)
	bool CallFunc_Less_DoubleDouble_ReturnValue_2 : 1;  // 0xB5 (0xB5)
	char pad_182_1 : 7;  // 0xB6 (0xB6)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0xB6 (0xB6)
	char pad_183_1 : 7;  // 0xB7 (0xB7)
	bool CallFunc_BooleanAND_ReturnValue_2 : 1;  // 0xB7 (0xB7)
	float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue;  // 0xB8 (0xB8)
	char pad_188_1 : 7;  // 0xBC (0xBC)
	bool CallFunc_Less_DoubleDouble_ReturnValue_3 : 1;  // 0xBC (0xBC)
	char pad_189[3];  // 0xBD (0xBD)
	float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2;  // 0xC0 (0xC0)
	char pad_196_1 : 7;  // 0xC4 (0xC4)
	bool CallFunc_Less_DoubleDouble_ReturnValue_4 : 1;  // 0xC4 (0xC4)
	char pad_197_1 : 7;  // 0xC5 (0xC5)
	bool CallFunc_Greater_DoubleDouble_ReturnValue_2 : 1;  // 0xC5 (0xC5)
	char pad_198[2];  // 0xC6 (0xC6)
	double CallFunc_Divide_DoubleDouble_ReturnValue;  // 0xC8 (0xC8)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0xD0 (0xD0)
	char pad_209_1 : 7;  // 0xD1 (0xD1)
	bool CallFunc_Not_PreBool_ReturnValue_2 : 1;  // 0xD1 (0xD1)
	char pad_210_1 : 7;  // 0xD2 (0xD2)
	bool CallFunc_BooleanAND_ReturnValue_3 : 1;  // 0xD2 (0xD2)
	char pad_211_1 : 7;  // 0xD3 (0xD3)
	bool CallFunc_BooleanOR_ReturnValue : 1;  // 0xD3 (0xD3)
	char pad_212_1 : 7;  // 0xD4 (0xD4)
	bool CallFunc_Greater_DoubleDouble_ReturnValue_3 : 1;  // 0xD4 (0xD4)
	char pad_213_1 : 7;  // 0xD5 (0xD5)
	bool CallFunc_BooleanAND_ReturnValue_4 : 1;  // 0xD5 (0xD5)
	char pad_214_1 : 7;  // 0xD6 (0xD6)
	bool CallFunc_Less_DoubleDouble_ReturnValue_5 : 1;  // 0xD6 (0xD6)
	char pad_215[1];  // 0xD7 (0xD7)
	double CallFunc_Greater_DoubleDouble_A_ImplicitCast;  // 0xD8 (0xD8)
	double CallFunc_Less_DoubleDouble_A_ImplicitCast;  // 0xE0 (0xE0)
	double CallFunc_Less_DoubleDouble_A_ImplicitCast_2;  // 0xE8 (0xE8)
	double CallFunc_Less_DoubleDouble_A_ImplicitCast_3;  // 0xF0 (0xF0)
	double CallFunc_Less_DoubleDouble_A_ImplicitCast_4;  // 0xF8 (0xF8)
	double CallFunc_Greater_DoubleDouble_A_ImplicitCast_2;  // 0x100 (0x100)
	double CallFunc_Divide_DoubleDouble_A_ImplicitCast;  // 0x108 (0x108)
	float K2Node_StructMemberSet___FloatProperty_ImplicitCast;  // 0x110 (0x110)
	char pad_276[4];  // 0x114 (0x114)
	double CallFunc_Greater_DoubleDouble_A_ImplicitCast_3;  // 0x118 (0x118)
	double CallFunc_Less_DoubleDouble_A_ImplicitCast_5;  // 0x120 (0x120)


}; 
 
 