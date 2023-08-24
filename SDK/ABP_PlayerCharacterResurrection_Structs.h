#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_PlayerCharacterResurrection.ABP_PlayerCharacterResurrection_C.AnimBlueprintGeneratedConstantData
// Size: 0x110(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_16;  // 0x4 (0x4)
	float __FloatProperty_17;  // 0xC (0xC)
	struct FInputScaleBiasClampConstants __StructProperty_18;  // 0x10 (0x10)
	float __FloatProperty_19;  // 0x3C (0x3C)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool __BoolProperty_20 : 1;  // 0x40 (0x40)
	uint8_t __EnumProperty_21;  // 0x41 (0x41)
	enum class EAnimGroupRole __ByteProperty_22;  // 0x42 (0x42)
	char pad_67[1];  // 0x43 (0x43)
	struct FName __NameProperty_23;  // 0x44 (0x44)
	struct FName __NameProperty_24;  // 0x4C (0x4C)
	int32_t __IntProperty_25;  // 0x54 (0x54)
	struct FAnimNodeFunctionRef __StructProperty_26;  // 0x58 (0x58)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0x78 (0x78)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0xF8 (0xF8)


}; 
 
 // Function ABP_PlayerCharacterResurrection.ABP_PlayerCharacterResurrection_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_PlayerCharacterResurrection.ABP_PlayerCharacterResurrection_C.BlueprintUpdateAnimation
// Size: 0x4(Inherited: 0x4)
struct FBlueprintUpdateAnimation : FBlueprintUpdateAnimation
{
	float DeltaTimeX;  // 0x0 (0x0)


}; 
 
 // Function ABP_PlayerCharacterResurrection.ABP_PlayerCharacterResurrection_C.ExecuteUbergraph_ABP_PlayerCharacterResurrection
struct FExecuteUbergraph_ABP_PlayerCharacterResurrection
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetOwningActor_ReturnValue;  // 0x8 (0x8)
	struct TScriptInterface<IDCPlayerCharacterInterface> K2Node_DynamicCast_AsDCPlayer_Character_Interface;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	float K2Node_Event_DeltaTimeX;  // 0x24 (0x24)
	struct USkeletalMesh* CallFunc_GetPartHeadMeshAsset_ReturnValue;  // 0x28 (0x28)


}; 
 
 