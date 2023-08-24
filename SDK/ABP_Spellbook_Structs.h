#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_Spellbook.ABP_Spellbook_C.AnimBlueprintGeneratedMutableData
// Size: 0x9(Inherited: 0x1)
struct FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
{
	char pad_1[3];  // 0x1 (0x1)
	float __FloatProperty;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool __BoolProperty_1 : 1;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ABP_Spellbook.ABP_Spellbook_C.AnimBlueprintGeneratedConstantData
// Size: 0x1A0(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_224;  // 0x4 (0x4)
	struct FName __NameProperty_225;  // 0xC (0xC)
	struct FName __NameProperty_226;  // 0x14 (0x14)
	struct FName __NameProperty_227;  // 0x1C (0x1C)
	struct FName __NameProperty_228;  // 0x24 (0x24)
	struct FName __NameProperty_229;  // 0x2C (0x2C)
	struct FName __NameProperty_230;  // 0x34 (0x34)
	struct FName __NameProperty_231;  // 0x3C (0x3C)
	int32_t __IntProperty_232;  // 0x44 (0x44)
	struct FName __NameProperty_233;  // 0x48 (0x48)
	int32_t __IntProperty_234;  // 0x50 (0x50)
	float __FloatProperty_235;  // 0x54 (0x54)
	struct FName __NameProperty_236;  // 0x58 (0x58)
	int32_t __IntProperty_237;  // 0x60 (0x60)
	struct FName __NameProperty_238;  // 0x64 (0x64)
	char pad_108[4];  // 0x6C (0x6C)
	struct UBlendProfile* __BlendProfile_239;  // 0x70 (0x70)
	struct UCurveFloat* __CurveFloat_240;  // 0x78 (0x78)
	uint8_t __EnumProperty_241;  // 0x80 (0x80)
	uint8_t __EnumProperty_242;  // 0x81 (0x81)
	char pad_130[6];  // 0x82 (0x82)
	struct TArray<float> __ArrayProperty_243;  // 0x88 (0x88)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool __BoolProperty_244 : 1;  // 0x98 (0x98)
	char pad_153[3];  // 0x99 (0x99)
	float __FloatProperty_245;  // 000036594] Package Id_MonsterEffect_Lib_State_Skill_Sixteen (000036594] Package Id_MonsterEffect_Lib_State_Skill_Sixteen)
	struct FInputScaleBiasClampConstants __StructProperty_246;  // 0xA0 (0xA0)
	float __FloatProperty_247;  // 0xCC (0xCC)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool __BoolProperty_248 : 1;  // 0xD0 (0xD0)
	uint8_t __EnumProperty_249;  // 0xD1 (0xD1)
	enum class EAnimGroupRole __ByteProperty_250;  // 0xD2 (0xD2)
	char pad_211[1];  // 0xD3 (0xD3)
	struct FName __NameProperty_251;  // 0xD4 (0xD4)
	struct FName __NameProperty_252;  // 0xDC (0xDC)
	int32_t __IntProperty_253;  // 0xE4 (0xE4)
	struct FAnimNodeFunctionRef __StructProperty_254;  // 0xE8 (0xE8)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0x108 (0x108)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0x188 (0x188)


}; 
 
 // Function ABP_Spellbook.ABP_Spellbook_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_Spellbook.ABP_Spellbook_C.ExecuteUbergraph_ABP_Spellbook
struct FExecuteUbergraph_ABP_Spellbook
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FItemData K2Node_Event_ItemData;  // 0x8 (0x8)
	float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue;  // 0xA8 (0xA8)
	char pad_172_1 : 7;  // 0xAC (0xAC)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0xAC (0xAC)
	char pad_173[3];  // 0xAD (0xAD)
	float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2;  // 0xB0 (0xB0)
	char pad_180_1 : 7;  // 0xB4 (0xB4)
	bool CallFunc_Less_DoubleDouble_ReturnValue_2 : 1;  // 0xB4 (0xB4)
	char pad_181_1 : 7;  // 0xB5 (0xB5)
	bool CallFunc_BooleanOR_ReturnValue : 1;  // 0xB5 (0xB5)
	char pad_182_1 : 7;  // 0xB6 (0xB6)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0xB6 (0xB6)
	char pad_183[1];  // 0xB7 (0xB7)
	float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3;  // 0xB8 (0xB8)
	char pad_188_1 : 7;  // 0xBC (0xBC)
	bool CallFunc_Less_DoubleDouble_ReturnValue_3 : 1;  // 0xBC (0xBC)
	char pad_189_1 : 7;  // 0xBD (0xBD)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0xBD (0xBD)
	char pad_190_1 : 7;  // 0xBE (0xBE)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0xBE (0xBE)
	char pad_191_1 : 7;  // 0xBF (0xBF)
	bool CallFunc_Not_PreBool_ReturnValue_2 : 1;  // 0xBF (0xBF)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool CallFunc_BooleanAND_ReturnValue_2 : 1;  // 0xC0 (0xC0)
	char pad_193_1 : 7;  // 0xC1 (0xC1)
	bool CallFunc_Greater_DoubleDouble_ReturnValue_2 : 1;  // 0xC1 (0xC1)
	char pad_194[6];  // 0xC2 (0xC2)
	double CallFunc_Divide_DoubleDouble_ReturnValue;  // 0xC8 (0xC8)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool CallFunc_BooleanAND_ReturnValue_3 : 1;  // 0xD0 (0xD0)
	char pad_209[7];  // 0xD1 (0xD1)
	double CallFunc_Less_DoubleDouble_A_ImplicitCast;  // 0xD8 (0xD8)
	double CallFunc_Less_DoubleDouble_A_ImplicitCast_2;  // 0xE0 (0xE0)
	double CallFunc_Greater_DoubleDouble_A_ImplicitCast;  // 0xE8 (0xE8)
	double CallFunc_Less_DoubleDouble_A_ImplicitCast_3;  // 0xF0 (0xF0)
	double CallFunc_Greater_DoubleDouble_A_ImplicitCast_2;  // 0xF8 (0xF8)
	double CallFunc_Divide_DoubleDouble_A_ImplicitCast;  // 0x100 (0x100)
	float K2Node_StructMemberSet___FloatProperty_ImplicitCast;  // 0x108 (0x108)


}; 
 
 // Function ABP_Spellbook.ABP_Spellbook_C.OnItemDataUpdated
// Size: 0xA0(Inherited: 0xA0)
struct FOnItemDataUpdated : FOnItemDataUpdated
{
	struct FItemData ItemData;  // 0x0 (0x0)


}; 
 
 