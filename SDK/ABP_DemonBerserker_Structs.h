#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_DemonBerserker.ABP_DemonBerserker_C.AnimBlueprintGeneratedMutableData
// Size: 0xA(Inherited: 0x1)
struct FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
{
	char pad_1[3];  // 0x1 (0x1)
	float __FloatProperty;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool __BoolProperty_1 : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool __BoolProperty_2 : 1;  // 0x9 (0x9)


}; 
 
 // ScriptStruct ABP_DemonBerserker.ABP_DemonBerserker_C.AnimBlueprintGeneratedConstantData
// Size: 0x188(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_213;  // 0x4 (0x4)
	struct FName __NameProperty_214;  // 0xC (0xC)
	uint8_t __EnumProperty_215;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct FName __NameProperty_216;  // 0x18 (0x18)
	struct FName __NameProperty_217;  // 0x20 (0x20)
	int32_t __IntProperty_218;  // 0x28 (0x28)
	struct FName __NameProperty_219;  // 0x2C (0x2C)
	struct FName __NameProperty_220;  // 0x34 (0x34)
	int32_t __IntProperty_221;  // 0x3C (0x3C)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool __BoolProperty_222 : 1;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	float __FloatProperty_223;  // 0x44 (0x44)
	struct FInputScaleBiasClampConstants __StructProperty_224;  // 0x48 (0x48)
	float __FloatProperty_225;  // 0x74 (0x74)
	uint8_t __EnumProperty_226;  // 0x78 (0x78)
	enum class EAnimGroupRole __ByteProperty_227;  // 0x79 (0x79)
	char pad_122[2];  // 0x7A (0x7A)
	struct FName __NameProperty_228;  // 0x7C (0x7C)
	char pad_132[4];  // 0x84 (0x84)
	struct UBlendProfile* __BlendProfile_229;  // 0x88 (0x88)
	struct UCurveFloat* __CurveFloat_230;  // 0x90 (0x90)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool __BoolProperty_231 : 1;  // 0x98 (0x98)
	uint8_t __EnumProperty_232;  // 0x99 (0x99)
	uint8_t __EnumProperty_233;  // 0x9A (0x9A)
	char pad_155[5];  // 0x9B (0x9B)
	struct TArray<float> __ArrayProperty_234;  // 0xA0 (0xA0)
	struct FName __NameProperty_235;  // 0xB0 (0xB0)
	int32_t __IntProperty_236;  // 0xB8 (0xB8)
	struct FName __NameProperty_237;  // 0xBC (0xBC)
	struct FName __NameProperty_238;  // 0xC4 (0xC4)
	int32_t __IntProperty_239;  // 0xCC (0xCC)
	struct FAnimNodeFunctionRef __StructProperty_240;  // 0xD0 (0xD0)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0xF0 (0xF0)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0x170 (0x170)


}; 
 
 // Function ABP_DemonBerserker.ABP_DemonBerserker_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_DemonBerserker.ABP_DemonBerserker_C.BlueprintUpdateAnimation
// Size: 0x4(Inherited: 0x4)
struct FBlueprintUpdateAnimation : FBlueprintUpdateAnimation
{
	float DeltaTimeX;  // 0x0 (0x0)


}; 
 
 // Function ABP_DemonBerserker.ABP_DemonBerserker_C.ExecuteUbergraph_ABP_DemonBerserker
struct FExecuteUbergraph_ABP_DemonBerserker
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct APawn* CallFunc_TryGetPawnOwner_ReturnValue;  // 0x8 (0x8)
	float K2Node_Event_DeltaTimeX;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct FVector CallFunc_GetSocketLocation_ReturnValue;  // 0x38 (0x38)


}; 
 
 