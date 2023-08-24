#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function ABP_LobbyCreateCharacter.ABP_LobbyCreateCharacter_C.UpdateIdleAnim
struct FUpdateIdleAnim
{
	struct UAnimSequence* CallFunc_GetIdleAnim_ReturnValue;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x8 (0x8)


}; 
 
 // Function ABP_LobbyCreateCharacter.ABP_LobbyCreateCharacter_C.OnChangedStandIdle
struct FOnChangedStandIdle
{
	struct UAnimSequence* ItemStandIdleAnimation;  // 0x0 (0x0)
	struct FGameplayTag ItemHandType;  // 0x8 (0x8)
	struct FGameplayTag ItemSlotType;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ABP_LobbyCreateCharacter.ABP_LobbyCreateCharacter_C.AnimBlueprintGeneratedConstantData
// Size: 0x148(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_64;  // 0x4 (0x4)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool __BoolProperty_65 : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	float __FloatProperty_66;  // 0x10 (0x10)
	struct FInputScaleBiasClampConstants __StructProperty_67;  // 0x14 (0x14)
	float __FloatProperty_68;  // 0x40 (0x40)
	uint8_t __EnumProperty_69;  // 0x44 (0x44)
	enum class EAnimGroupRole __ByteProperty_70;  // 0x45 (0x45)
	char pad_70[2];  // 0x46 (0x46)
	struct FName __NameProperty_71;  // 0x48 (0x48)
	struct UBlendProfile* __BlendProfile_72;  // 0x50 (0x50)
	struct UCurveFloat* __CurveFloat_73;  // 0x58 (0x58)
	uint8_t __EnumProperty_74;  // 0x60 (0x60)
	uint8_t __EnumProperty_75;  // 0x61 (0x61)
	char pad_98[6];  // 0x62 (0x62)
	struct TArray<float> __ArrayProperty_76;  // 0x68 (0x68)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool __BoolProperty_77 : 1;  // 0x78 (0x78)
	char pad_121[3];  // 0x79 (0x79)
	struct FName __NameProperty_78;  // 0x7C (0x7C)
	struct FName __NameProperty_79;  // 0x84 (0x84)
	int32_t __IntProperty_80;  // 0x8C (0x8C)
	struct FAnimNodeFunctionRef __StructProperty_81;  // 0x90 (0x90)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0xB0 (0xB0)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0x130 (0x130)


}; 
 
 // ScriptStruct ABP_LobbyCreateCharacter.ABP_LobbyCreateCharacter_C.AnimBlueprintGeneratedMutableData
// Size: 0x4(Inherited: 0x1)
struct FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool __BoolProperty : 1;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool __BoolProperty_1 : 1;  // 0x2 (0x2)
	char pad_3_1 : 7;  // 0x3 (0x3)
	bool __BoolProperty_2 : 1;  // 0x3 (0x3)


}; 
 
 // Function ABP_LobbyCreateCharacter.ABP_LobbyCreateCharacter_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_LobbyCreateCharacter.ABP_LobbyCreateCharacter_C.ExecuteUbergraph_ABP_LobbyCreateCharacter
struct FExecuteUbergraph_ABP_LobbyCreateCharacter
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool Temp_bool_True_if_break_was_hit_Variable : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0x5 (0x5)
	char pad_6_1 : 7;  // 0x6 (0x6)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2 : 1;  // 0x6 (0x6)
	char pad_7_1 : 7;  // 0x7 (0x7)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3 : 1;  // 0x7 (0x7)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_4 : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_5 : 1;  // 0x9 (0x9)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_6 : 1;  // 0xA (0xA)
	char pad_11_1 : 7;  // 0xB (0xB)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_7 : 1;  // 0xB (0xB)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool CallFunc_BooleanOR_ReturnValue : 1;  // 0xD (0xD)
	char pad_14_1 : 7;  // 0xE (0xE)
	bool CallFunc_BooleanOR_ReturnValue_2 : 1;  // 0xE (0xE)
	char pad_15_1 : 7;  // 0xF (0xF)
	bool CallFunc_BooleanOR_ReturnValue_3 : 1;  // 0xF (0xF)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_8 : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool CallFunc_BooleanOR_ReturnValue_4 : 1;  // 0x11 (0x11)
	char pad_18_1 : 7;  // 0x12 (0x12)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_9 : 1;  // 0x12 (0x12)
	char pad_19_1 : 7;  // 0x13 (0x13)
	bool CallFunc_BooleanOR_ReturnValue_5 : 1;  // 0x13 (0x13)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool CallFunc_BooleanOR_ReturnValue_6 : 1;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool CallFunc_BooleanOR_ReturnValue_7 : 1;  // 0x15 (0x15)
	char pad_22[2];  // 0x16 (0x16)
	int32_t Temp_int_Array_Index_Variable;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_10 : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct UAnimSequence* K2Node_CustomEvent_ItemStandIdleAnimation;  // 0x20 (0x20)
	struct FGameplayTag K2Node_CustomEvent_ItemHandType;  // 0x28 (0x28)
	struct FGameplayTag K2Node_CustomEvent_ItemSlotType;  // 0x30 (0x30)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x38 (0x38)
	char pad_60_1 : 7;  // 0x3C (0x3C)
	bool CallFunc_MatchesTag_ReturnValue : 1;  // 0x3C (0x3C)
	char pad_61[3];  // 0x3D (0x3D)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x40 (0x40)
	char pad_68_1 : 7;  // 0x44 (0x44)
	bool CallFunc_MatchesTag_ReturnValue_2 : 1;  // 0x44 (0x44)
	char pad_69[3];  // 0x45 (0x45)
	float K2Node_Event_DeltaTimeX;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)
	struct USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue;  // 0x50 (0x50)
	struct TArray<struct USceneComponent*> CallFunc_GetChildrenComponents_Children;  // 0x58 (0x58)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)
	struct USceneComponent* CallFunc_Array_Get_Item;  // 0x70 (0x70)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x78 (0x78)
	char pad_121[7];  // 0x79 (0x79)
	struct USkeletalMeshComponent* K2Node_DynamicCast_As____________;  // 0x80 (0x80)
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x88 (0x88)
	char pad_137_1 : 7;  // 0x89 (0x89)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x89 (0x89)
	char pad_138[6];  // 0x8A (0x8A)
	struct USkeletalMesh* CallFunc_GetSkeletalMeshAsset_ReturnValue;  // 0x90 (0x90)
	struct FString CallFunc_GetObjectName_ReturnValue;  // 0x98 (0x98)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool CallFunc_EqualEqual_StrStr_ReturnValue : 1;  // 0xA8 (0xA8)


}; 
 
 // Function ABP_LobbyCreateCharacter.ABP_LobbyCreateCharacter_C.BlueprintUpdateAnimation
// Size: 0x4(Inherited: 0x4)
struct FBlueprintUpdateAnimation : FBlueprintUpdateAnimation
{
	float DeltaTimeX;  // 0x0 (0x0)


}; 
 
 