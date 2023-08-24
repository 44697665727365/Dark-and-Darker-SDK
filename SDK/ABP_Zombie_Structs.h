#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_Zombie.ABP_Zombie_C.AnimBlueprintGeneratedMutableData
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
 
 // ScriptStruct ABP_Zombie.ABP_Zombie_C.AnimBlueprintGeneratedConstantData
// Size: 0x188(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_221;  // 0x4 (0x4)
	float __FloatProperty_222;  // 0xC (0xC)
	struct FName __NameProperty_223;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool __BoolProperty_224 : 1;  // 0x18 (0x18)
	uint8_t __EnumProperty_225;  // 0x19 (0x19)
	char pad_26[2];  // 0x1A (0x1A)
	struct FName __NameProperty_226;  // 0x1C (0x1C)
	struct FName __NameProperty_227;  // 0x24 (0x24)
	int32_t __IntProperty_228;  // 0x2C (0x2C)
	struct FName __NameProperty_229;  // 0x30 (0x30)
	struct FName __NameProperty_230;  // 0x38 (0x38)
	int32_t __IntProperty_231;  // 0x40 (0x40)
	float __FloatProperty_232;  // 0x44 (0x44)
	struct FInputScaleBiasClampConstants __StructProperty_233;  // 0x48 (0x48)
	float __FloatProperty_234;  // 0x74 (0x74)
	uint8_t __EnumProperty_235;  // 0x78 (0x78)
	enum class EAnimGroupRole __ByteProperty_236;  // 0x79 (0x79)
	char pad_122[2];  // 0x7A (0x7A)
	struct FName __NameProperty_237;  // 0x7C (0x7C)
	char pad_132[4];  // 0x84 (0x84)
	struct UBlendProfile* __BlendProfile_238;  // 0x88 (0x88)
	struct UCurveFloat* __CurveFloat_239;  // 0x90 (0x90)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool __BoolProperty_240 : 1;  // 0x98 (0x98)
	uint8_t __EnumProperty_241;  // 0x99 (0x99)
	uint8_t __EnumProperty_242;  // 0x9A (0x9A)
	char pad_155[5];  // 0x9B (0x9B)
	struct TArray<float> __ArrayProperty_243;  // 0xA0 (0xA0)
	struct FName __NameProperty_244;  // 0xB0 (0xB0)
	int32_t __IntProperty_245;  // 0xB8 (0xB8)
	struct FName __NameProperty_246;  // 0xBC (0xBC)
	struct FName __NameProperty_247;  // 0xC4 (0xC4)
	int32_t __IntProperty_248;  // 0xCC (0xCC)
	struct FAnimNodeFunctionRef __StructProperty_249;  // 0xD0 (0xD0)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0xF0 (0xF0)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0x170 (0x170)


}; 
 
 // Function ABP_Zombie.ABP_Zombie_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_Zombie.ABP_Zombie_C.ExecuteUbergraph_ABP_Zombie
struct FExecuteUbergraph_ABP_Zombie
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct ACharacter* CallFunc_GetPlayerCharacter_ReturnValue;  // 0x8 (0x8)
	float K2Node_Event_DeltaTimeX;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct FVector CallFunc_GetSocketLocation_ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function ABP_Zombie.ABP_Zombie_C.BlueprintUpdateAnimation
// Size: 0x4(Inherited: 0x4)
struct FBlueprintUpdateAnimation : FBlueprintUpdateAnimation
{
	float DeltaTimeX;  // 0x0 (0x0)


}; 
 
 