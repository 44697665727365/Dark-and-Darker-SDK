#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ABP_DireWolf.ABP_DireWolf_C.AnimBlueprintGeneratedMutableData
// Size: 0xC(Inherited: 0x1)
struct FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool __BoolProperty : 1;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool __BoolProperty_1 : 1;  // 0x2 (0x2)
	char pad_3[1];  // 0x3 (0x3)
	float __FloatProperty_2;  // 0x4 (0x4)
	float __FloatProperty_3;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ABP_DireWolf.ABP_DireWolf_C.AnimBlueprintGeneratedConstantData
// Size: 0x1A8(Inherited: 0x1)
struct FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
{
	char pad_1[3];  // 0x1 (0x1)
	struct FName __NameProperty_224;  // 0x4 (0x4)
	int32_t __IntProperty_225;  // 0xC (0xC)
	struct FName __NameProperty_226;  // 0x10 (0x10)
	struct FName __NameProperty_227;  // 0x18 (0x18)
	uint8_t __EnumProperty_228;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	struct FName __NameProperty_229;  // 0x24 (0x24)
	char pad_44[4];  // 0x2C (0x2C)
	struct UBlendProfile* __BlendProfile_230;  // 0x30 (0x30)
	struct UCurveFloat* __CurveFloat_231;  // 0x38 (0x38)
	uint8_t __EnumProperty_232;  // 0x40 (0x40)
	uint8_t __EnumProperty_233;  // 0x41 (0x41)
	char pad_66[6];  // 0x42 (0x42)
	struct TArray<float> __ArrayProperty_234;  // 0x48 (0x48)
	struct FName __NameProperty_235;  // 0x58 (0x58)
	struct FName __NameProperty_236;  // 0x60 (0x60)
	float __FloatProperty_237;  // 0x68 (0x68)
	struct FName __NameProperty_238;  // 0x6C (0x6C)
	int32_t __IntProperty_239;  // 0x74 (0x74)
	float __FloatProperty_240;  // 0x78 (0x78)
	struct FInputScaleBiasClampConstants __StructProperty_241;  // 0x7C (0x7C)
	struct FName __NameProperty_242;  // 0xA8 (0xA8)
	int32_t __IntProperty_243;  // 0xB0 (0xB0)
	struct FName __NameProperty_244;  // 0xB4 (0xB4)
	int32_t __IntProperty_245;  // 0xBC (0xBC)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool __BoolProperty_246 : 1;  // 0xC0 (0xC0)
	char pad_193[3];  // 0xC1 (0xC1)
	float __FloatProperty_247;  // 0xC4 (0xC4)
	float __FloatProperty_248;  // 0xC8 (0xC8)
	char pad_204_1 : 7;  // 0xCC (0xCC)
	bool __BoolProperty_249 : 1;  // 0xCC (0xCC)
	uint8_t __EnumProperty_250;  // 0xCD (0xCD)
	enum class EAnimGroupRole __ByteProperty_251;  // 0xCE (0xCE)
	char pad_207[1];  // 0xCF (0xCF)
	struct FName __NameProperty_252;  // 0xD0 (0xD0)
	int32_t __IntProperty_253;  // 0xD8 (0xD8)
	char pad_220[4];  // 0xDC (0xDC)
	struct FAnimNodeFunctionRef __StructProperty_254;  // 0xE0 (0xE0)
	struct FName __NameProperty_255;  // 0x100 (0x100)
	struct FName __NameProperty_256;  // 0x108 (0x108)
	struct FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;  // 0x110 (0x110)
	struct FAnimSubsystem_Base AnimBlueprintExtension_Base;  // 0x190 (0x190)


}; 
 
 // Function ABP_DireWolf.ABP_DireWolf_C.AnimGraph
struct FAnimGraph
{
	struct FPoseLink AnimGraph;  // 0x0 (0x0)


}; 
 
 // Function ABP_DireWolf.ABP_DireWolf_C.ExecuteUbergraph_ABP_DireWolf
struct FExecuteUbergraph_ABP_DireWolf
{
	int32_t EntryPoint;  // 0x0 (0x0)
	float K2Node_Event_DeltaTimeX;  // 0x4 (0x4)


}; 
 
 // Function ABP_DireWolf.ABP_DireWolf_C.BlueprintUpdateAnimation
// Size: 0x4(Inherited: 0x4)
struct FBlueprintUpdateAnimation : FBlueprintUpdateAnimation
{
	float DeltaTimeX;  // 0x0 (0x0)


}; 
 
 // Function ABP_DireWolf.ABP_DireWolf_C.BlueprintThreadSafeUpdateAnimation
// Size: 0x12(Inherited: 0x4)
struct FBlueprintThreadSafeUpdateAnimation : FBlueprintThreadSafeUpdateAnimation
{
	float DeltaTime;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool CallFunc_NotEqual_IntInt_ReturnValue : 1;  // 0x4 (0x4)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x5 (0x5)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool CallFunc_EqualEqual_IntInt_ReturnValue_2 : 1;  // 0x6 (0x6)
	char pad_11_1 : 7;  // 0xB (0xB)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x7 (0x7)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool CallFunc_Not_PreBool_ReturnValue_2 : 1;  // 0x8 (0x8)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool CallFunc_Not_PreBool_ReturnValue_3 : 1;  // 0x9 (0x9)
	char pad_14_1 : 7;  // 0xE (0xE)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0xA (0xA)
	char pad_15_1 : 7;  // 0xF (0xF)
	bool CallFunc_Not_PreBool_ReturnValue_4 : 1;  // 0xB (0xB)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_BooleanAND_ReturnValue_2 : 1;  // 0xC (0xC)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool CallFunc_BooleanAND_ReturnValue_3 : 1;  // 0xD (0xD)
	char pad_18_1 : 7;  // 0x12 (0x12)
	bool CallFunc_Not_PreBool_ReturnValue_5 : 1;  // 0xE (0xE)
	char pad_19_1 : 7;  // 0x13 (0x13)
	bool CallFunc_BooleanAND_ReturnValue_4 : 1;  // 0xF (0xF)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool CallFunc_BooleanAND_ReturnValue_5 : 1;  // 0x10 (0x10)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool CallFunc_BooleanAND_ReturnValue_6 : 1;  // 0x11 (0x11)


}; 
 
 // Function ABP_DireWolf.ABP_DireWolf_C.TraceFloor
struct FTraceFloor
{
	struct FName InSocketName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FVector Location;  // 0x10 (0x10)
	float Distance;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x30 (0x30)
	struct FVector CallFunc_GetSocketLocation_ReturnValue;  // 0x40 (0x40)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x58 (0x58)
	struct FHitResult CallFunc_LineTraceSingle_OutHit;  // 0x70 (0x70)
	char pad_344_1 : 7;  // 0x158 (0x158)
	bool CallFunc_LineTraceSingle_ReturnValue : 1;  // 0x158 (0x158)
	char pad_345_1 : 7;  // 0x159 (0x159)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x159 (0x159)
	char pad_346_1 : 7;  // 0x15A (0x15A)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x15A (0x15A)
	char pad_347[1];  // 0x15B (0x15B)
	float CallFunc_BreakHitResult_Time;  // 0x15C (0x15C)
	float CallFunc_BreakHitResult_Distance;  // 0x160 (0x160)
	char pad_356[4];  // 0x164 (0x164)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x168 (0x168)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x180 (0x180)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x198 (0x198)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x1B0 (0x1B0)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x1C8 (0x1C8)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x1D0 (0x1D0)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x1D8 (0x1D8)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x1E0 (0x1E0)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x1E8 (0x1E8)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x1F0 (0x1F0)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x1F4 (0x1F4)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x1F8 (0x1F8)
	char pad_508[4];  // 0x1FC (0x1FC)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x200 (0x200)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x218 (0x218)


}; 
 
 