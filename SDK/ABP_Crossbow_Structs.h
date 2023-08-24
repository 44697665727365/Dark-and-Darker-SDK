#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_Crossbow.ABP_Crossbow_C.AnimBlueprintGeneratedConstantData
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
 
 // Function ABP_Crossbow.ABP_Crossbow_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_Crossbow.ABP_Crossbow_C.ExecuteUbergraph_ABP_Crossbow
struct FExecuteUbergraph_ABP_Crossbow
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FMsgAnimationChangeIdle K2Node_MakeStruct_MsgAnimationChangeIdle;  // 0x8 (0x8)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue : 1;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue_2 : 1;  // 0x29 (0x29)
	char pad_42[6];  // 0x2A (0x2A)
	struct FItemData K2Node_Event_ItemData;  // 0x30 (0x30)
	struct USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue;  // 0xD0 (0xD0)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0xD8 (0xD8)
	char pad_217[7];  // 0xD9 (0xD9)
	struct FMsgAnimationChangeIdle K2Node_MakeStruct_MsgAnimationChangeIdle_2;  // 0xE0 (0xE0)


}; 
 
 // Function ABP_Crossbow.ABP_Crossbow_C.OnItemDataUpdated
// Size: 0xA0(Inherited: 0xA0)
struct FOnItemDataUpdated : FOnItemDataUpdated
{
	struct FItemData ItemData;  // 0x0 (0x0)


}; 
 
 