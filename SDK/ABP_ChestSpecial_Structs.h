#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_ChestSpecial.ABP_ChestSpecial_C.AnimBlueprintGeneratedConstantData
// Size: 0x120(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_41;  // 0x4 (0x4)
	struct FName __NameProperty_42;  // 0xC (0xC)
	int32_t __IntProperty_43;  // 0x14 (0x14)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool __BoolProperty_44 : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	float __FloatProperty_45;  // 0x1C (0x1C)
	struct FInputScaleBiasClampConstants __StructProperty_46;  // 0x20 (0x20)
	float __FloatProperty_47;  // 0x4C (0x4C)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool __BoolProperty_48 : 1;  // 0x50 (0x50)
	uint8_t __EnumProperty_49;  // 0x51 (0x51)
	enum class EAnimGroupRole __ByteProperty_50;  // 0x52 (0x52)
	char pad_83[1];  // 0x53 (0x53)
	struct FName __NameProperty_51;  // 0x54 (0x54)
	struct FName __NameProperty_52;  // 0x5C (0x5C)
	int32_t __IntProperty_53;  // 0x64 (0x64)
	struct FAnimNodeFunctionRef __StructProperty_54;  // 0x68 (0x68)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0x88 (0x88)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0x108 (0x108)


}; 
 
 // Function ABP_ChestSpecial.ABP_ChestSpecial_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_ChestSpecial.ABP_ChestSpecial_C.ExecuteUbergraph_ABP_ChestSpecial
struct FExecuteUbergraph_ABP_ChestSpecial
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue_2 : 1;  // 0x5 (0x5)


}; 
 
 