#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_Otto.ABP_Otto_C.AnimBlueprintGeneratedConstantData
// Size: 0x138(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_90;  // 0x4 (0x4)
	struct FName __NameProperty_91;  // 0xC (0xC)
	int32_t __IntProperty_92;  // 0x14 (0x14)
	struct FName __NameProperty_93;  // 0x18 (0x18)
	int32_t __IntProperty_94;  // 0x20 (0x20)
	struct FName __NameProperty_95;  // 0x24 (0x24)
	int32_t __IntProperty_96;  // 0x2C (0x2C)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool __BoolProperty_97 : 1;  // 0x30 (0x30)
	char pad_49[3];  // 0x31 (0x31)
	float __FloatProperty_98;  // 0x34 (0x34)
	struct FInputScaleBiasClampConstants __StructProperty_99;  // 0x38 (0x38)
	float __FloatProperty_100;  // 0x64 (0x64)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool __BoolProperty_101 : 1;  // 0x68 (0x68)
	uint8_t __EnumProperty_102;  // 0x69 (0x69)
	enum class EAnimGroupRole __ByteProperty_103;  // 0x6A (0x6A)
	char pad_107[1];  // 0x6B (0x6B)
	struct FName __NameProperty_104;  // 0x6C (0x6C)
	struct FName __NameProperty_105;  // 0x74 (0x74)
	int32_t __IntProperty_106;  // 0x7C (0x7C)
	struct FAnimNodeFunctionRef __StructProperty_107;  // 0x80 (0x80)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0xA0 (0xA0)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0x120 (0x120)


}; 
 
 // Function ABP_Otto.ABP_Otto_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_Otto.ABP_Otto_C.ExecuteUbergraph_ABP_Otto
struct FExecuteUbergraph_ABP_Otto
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x14 (0x14)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x24 (0x24)
	char pad_52[4];  // 0x34 (0x34)
	struct APawn* CallFunc_TryGetPawnOwner_ReturnValue;  // 0x38 (0x38)
	struct UAbilityAsync_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAddToActor_ReturnValue;  // 0x40 (0x40)
	struct UAbilityAsync_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAddToActor_ReturnValue_2;  // 0x48 (0x48)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x50 (0x50)
	char pad_81_1 : 7;  // 0x51 (0x51)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x51 (0x51)
	char pad_82[6];  // 0x52 (0x52)
	struct UAbilityAsync_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAddToActor_ReturnValue_3;  // 0x58 (0x58)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)
	struct UAbilityAsync_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAddToActor_ReturnValue_4;  // 0x68 (0x68)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x70 (0x70)
	char pad_113[3];  // 0x71 (0x71)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x74 (0x74)


}; 
 
 // Function ABP_Otto.ABP_Otto_C.BlueprintThreadSafeUpdateAnimation
// Size: 0x8(Inherited: 0x4)
struct FBlueprintThreadSafeUpdateAnimation : FBlueprintThreadSafeUpdateAnimation
{
	float DeltaTime;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x4 (0x4)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue_2 : 1;  // 0x5 (0x5)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue_3 : 1;  // 0x6 (0x6)
	char pad_11_1 : 7;  // 0xB (0xB)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue_4 : 1;  // 0x7 (0x7)


}; 
 
 