#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_Campfire_Kettle.ABP_Campfire_Kettle_C.AnimBlueprintGeneratedConstantData
// Size: 0x120(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_38;  // 0x4 (0x4)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool __BoolProperty_39 : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	struct FName __NameProperty_40;  // 0x10 (0x10)
	int32_t __IntProperty_41;  // 0x18 (0x18)
	float __FloatProperty_42;  // 0x1C (0x1C)
	struct FInputScaleBiasClampConstants __StructProperty_43;  // 0x20 (0x20)
	float __FloatProperty_44;  // 0x4C (0x4C)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool __BoolProperty_45 : 1;  // 0x50 (0x50)
	uint8_t __EnumProperty_46;  // 0x51 (0x51)
	enum class EAnimGroupRole __ByteProperty_47;  // 0x52 (0x52)
	char pad_83[1];  // 0x53 (0x53)
	struct FName __NameProperty_48;  // 0x54 (0x54)
	struct FName __NameProperty_49;  // 0x5C (0x5C)
	int32_t __IntProperty_50;  // 0x64 (0x64)
	struct FAnimNodeFunctionRef __StructProperty_51;  // 0x68 (0x68)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0x88 (0x88)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0x108 (0x108)


}; 
 
 // Function ABP_Campfire_Kettle.ABP_Campfire_Kettle_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_Campfire_Kettle.ABP_Campfire_Kettle_C.ExecuteUbergraph_ABP_Campfire_Kettle
struct FExecuteUbergraph_ABP_Campfire_Kettle
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue_2 : 1;  // 0x5 (0x5)


}; 
 
 