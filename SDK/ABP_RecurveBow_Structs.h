#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_RecurveBow.ABP_RecurveBow_C.AnimBlueprintGeneratedConstantData
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
 
 // Function ABP_RecurveBow.ABP_RecurveBow_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_RecurveBow.ABP_RecurveBow_C.ExecuteUbergraph_ABP_RecurveBow
struct FExecuteUbergraph_ABP_RecurveBow
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetOwningActor_ReturnValue;  // 0x8 (0x8)
	struct ABP_ItemActorWithQuiver_TEMP_C* K2Node_DynamicCast_AsBP_Item_Actor_with_Quiver_TEMP;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x1C (0x1C)
	char pad_44[4];  // 0x2C (0x2C)
	struct UAnimMontage* K2Node_CustomEvent_Montage;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool K2Node_CustomEvent_bInterrupted : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue;  // 0x40 (0x40)


}; 
 
 // Function ABP_RecurveBow.ABP_RecurveBow_C.OnBlendingOut
struct FOnBlendingOut
{
	struct UAnimMontage* Montage;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bInterrupted : 1;  // 0x8 (0x8)


}; 
 
 