#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_HandCrossbow.ABP_HandCrossbow_C.AnimBlueprintGeneratedConstantData
// Size: 0x120(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_42;  // 0x4 (0x4)
	struct FName __NameProperty_43;  // 0xC (0xC)
	int32_t __IntProperty_44;  // 0x14 (0x14)
	float __FloatProperty_45;  // 0x18 (0x18)
	struct FInputScaleBiasClampConstants __StructProperty_46;  // 0x1C (0x1C)
	float __FloatProperty_47;  // 0x48 (0x48)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool __BoolProperty_48 : 1;  // 0x4C (0x4C)
	uint8_t __EnumProperty_49;  // 0x4D (0x4D)
	enum class EAnimGroupRole __ByteProperty_50;  // 0x4E (0x4E)
	char pad_79[1];  // 0x4F (0x4F)
	struct FName __NameProperty_51;  // 0x50 (0x50)
	struct FName __NameProperty_52;  // 0x58 (0x58)
	int32_t __IntProperty_53;  // 0x60 (0x60)
	char pad_100[4];  // 0x64 (0x64)
	struct FAnimNodeFunctionRef __StructProperty_54;  // 0x68 (0x68)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0x88 (0x88)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0x108 (0x108)


}; 
 
 // Function ABP_HandCrossbow.ABP_HandCrossbow_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_HandCrossbow.ABP_HandCrossbow_C.ExecuteUbergraph_ABP_HandCrossbow
struct FExecuteUbergraph_ABP_HandCrossbow
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue_2 : 1;  // 0x5 (0x5)
	char pad_6[2];  // 0x6 (0x6)
	struct USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue;  // 0x8 (0x8)
	struct FItemData K2Node_Event_ItemData;  // 0x10 (0x10)
	char pad_176_1 : 7;  // 0xB0 (0xB0)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0xB0 (0xB0)
	char pad_177[7];  // 0xB1 (0xB1)
	struct FMsgAnimationChangeIdle K2Node_MakeStruct_MsgAnimationChangeIdle;  // 0xB8 (0xB8)
	struct FMsgAnimationChangeIdle K2Node_MakeStruct_MsgAnimationChangeIdle_2;  // 0xD8 (0xD8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xF8 (0xF8)
	struct UAnimMontage* K2Node_CustomEvent_Montage;  // 0x108 (0x108)
	char pad_272_1 : 7;  // 0x110 (0x110)
	bool K2Node_CustomEvent_bInterrupted : 1;  // 0x110 (0x110)
	char pad_273[7];  // 0x111 (0x111)
	struct USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue_2;  // 0x118 (0x118)


}; 
 
 // Function ABP_HandCrossbow.ABP_HandCrossbow_C.OnBlendingOut
struct FOnBlendingOut
{
	struct UAnimMontage* Montage;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bInterrupted : 1;  // 0x8 (0x8)


}; 
 
 // Function ABP_HandCrossbow.ABP_HandCrossbow_C.OnItemDataUpdated
// Size: 0xA0(Inherited: 0xA0)
struct FOnItemDataUpdated : FOnItemDataUpdated
{
	struct FItemData ItemData;  // 0x0 (0x0)


}; 
 
 