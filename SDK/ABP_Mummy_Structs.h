#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_Mummy.ABP_Mummy_C.AnimBlueprintGeneratedMutableData
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
 
 // ScriptStruct ABP_Mummy.ABP_Mummy_C.AnimBlueprintGeneratedConstantData
// Size: 0x188(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_245;  // 0x4 (0x4)
	struct FName __NameProperty_246;  // 0xC (0xC)
	struct FName __NameProperty_247;  // 0x14 (0x14)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool __BoolProperty_248 : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	float __FloatProperty_249;  // 0x20 (0x20)
	uint8_t __EnumProperty_250;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	struct FName __NameProperty_251;  // 0x28 (0x28)
	struct FName __NameProperty_252;  // 0x30 (0x30)
	int32_t __IntProperty_253;  // 0x38 (0x38)
	struct FName __NameProperty_254;  // 0x3C (0x3C)
	int32_t __IntProperty_255;  // 0x44 (0x44)
	struct UBlendProfile* __BlendProfile_256;  // 0x48 (0x48)
	struct UCurveFloat* __CurveFloat_257;  // 0x50 (0x50)
	uint8_t __EnumProperty_258;  // 0x58 (0x58)
	uint8_t __EnumProperty_259;  // 0x59 (0x59)
	char pad_90[6];  // 0x5A (0x5A)
	struct TArray<float> __ArrayProperty_260;  // 0x60 (0x60)
	float __FloatProperty_261;  // 0x70 (0x70)
	struct FInputScaleBiasClampConstants __StructProperty_262;  // 0x74 (0x74)
	float __FloatProperty_263;  // 0xA0 (0xA0)
	char pad_164_1 : 7;  // 0xA4 (0xA4)
	bool __BoolProperty_264 : 1;  // 0xA4 (0xA4)
	uint8_t __EnumProperty_265;  // 0xA5 (0xA5)
	enum class EAnimGroupRole __ByteProperty_266;  // 0xA6 (0xA6)
	char pad_167[1];  // 0xA7 (0xA7)
	struct FName __NameProperty_267;  // 0xA8 (0xA8)
	struct FName __NameProperty_268;  // 0xB0 (0xB0)
	int32_t __IntProperty_269;  // 0xB8 (0xB8)
	struct FName __NameProperty_270;  // 0xBC (0xBC)
	struct FName __NameProperty_271;  // 0xC4 (0xC4)
	int32_t __IntProperty_272;  // 0xCC (0xCC)
	struct FAnimNodeFunctionRef __StructProperty_273;  // 0xD0 (0xD0)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0xF0 (0xF0)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0x170 (0x170)


}; 
 
 // Function ABP_Mummy.ABP_Mummy_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_Mummy.ABP_Mummy_C.BlueprintUpdateAnimation
// Size: 0x4(Inherited: 0x4)
struct FBlueprintUpdateAnimation : FBlueprintUpdateAnimation
{
	float DeltaTimeX;  // 0x0 (0x0)


}; 
 
 // Function ABP_Mummy.ABP_Mummy_C.ExecuteUbergraph_ABP_Mummy
struct FExecuteUbergraph_ABP_Mummy
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct ACharacter* CallFunc_GetPlayerCharacter_ReturnValue;  // 0x8 (0x8)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x10 (0x10)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	float K2Node_Event_DeltaTimeX;  // 0x24 (0x24)
	struct FVector CallFunc_GetSocketLocation_ReturnValue;  // 0x28 (0x28)


}; 
 
 