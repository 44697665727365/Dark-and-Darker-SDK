#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Caltrop.GA_Caltrop_C.Find Installable Location
struct FFind Installable Location
{
	struct FVector FoundInstallLocation;  // 0x0 (0x0)
	uint8_t SkillActivatableType;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FVector FindGroundStartLocation;  // 0x20 (0x20)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue;  // 0x38 (0x38)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x50 (0x50)
	struct FDesignDataSkill CallFunc_GetCurrentDesignDataSkill_ReturnValue;  // 0x60 (0x60)
	struct TArray<struct AActor*> Temp_object_Variable_2;  // 0x128 (0x128)
	struct FHitResult CallFunc_LineTraceSingle_OutHit;  // 0x138 (0x138)
	char pad_544_1 : 7;  // 0x220 (0x220)
	bool CallFunc_LineTraceSingle_ReturnValue : 1;  // 0x220 (0x220)
	char pad_545[3];  // 0x221 (0x221)
	int32_t CallFunc_Multiply_IntInt_ReturnValue;  // 0x224 (0x224)
	struct FVector CallFunc_Conv_IntToVector_ReturnValue;  // 0x228 (0x228)
	char pad_576_1 : 7;  // 0x240 (0x240)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x240 (0x240)
	char pad_577_1 : 7;  // 0x241 (0x241)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x241 (0x241)
	char pad_578[2];  // 0x242 (0x242)
	float CallFunc_BreakHitResult_Time;  // 0x244 (0x244)
	float CallFunc_BreakHitResult_Distance;  // 0x248 (0x248)
	char pad_588[4];  // 0x24C (0x24C)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x250 (0x250)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x268 (0x268)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x280 (0x280)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x298 (0x298)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x2B0 (0x2B0)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x2B8 (0x2B8)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x2C0 (0x2C0)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x2C8 (0x2C8)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x2D0 (0x2D0)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x2D8 (0x2D8)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x2DC (0x2DC)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x2E0 (0x2E0)
	char pad_740[4];  // 0x2E4 (0x2E4)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x2E8 (0x2E8)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x300 (0x300)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x318 (0x318)
	char pad_800_1 : 7;  // 0x320 (0x320)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x320 (0x320)
	char pad_801[7];  // 0x321 (0x321)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x328 (0x328)
	struct FHitResult CallFunc_LineTraceSingle_OutHit_2;  // 0x340 (0x340)
	char pad_1064_1 : 7;  // 0x428 (0x428)
	bool CallFunc_LineTraceSingle_ReturnValue_2 : 1;  // 0x428 (0x428)
	char pad_1065[7];  // 0x429 (0x429)
	struct FVector CallFunc_GetActorForwardVector_ReturnValue;  // 0x430 (0x430)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x448 (0x448)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x460 (0x460)


}; 
 
 // Function GA_Caltrop.GA_Caltrop_C.BroadcastReason
struct FBroadcastReason
{
	uint8_t Reason;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x1 (0x1)
	char pad_2[6];  // 0x2 (0x2)
	struct FGameplayAbilityActorInfo CallFunc_GetActorInfo_ReturnValue;  // 0x8 (0x8)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x50 (0x50)


}; 
 
 // Function GA_Caltrop.GA_Caltrop_C.ExecuteUbergraph_GA_Caltrop
struct FExecuteUbergraph_GA_Caltrop
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector CallFunc_Find_Installable_Location_FoundInstallLocation;  // 0x8 (0x8)
	uint8_t CallFunc_Find_Installable_Location_SkillActivatableType;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct FGameplayEventData Temp_struct_Variable;  // 0x28 (0x28)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0xD8 (0xD8)
	char pad_217[7];  // 0xD9 (0xD9)
	struct FTransform CallFunc_MakeTransform_ReturnValue;  // 0xE0 (0xE0)
	struct AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;  // 0x140 (0x140)
	struct FGameplayTag K2Node_Event_SkillTag;  // 0x148 (0x148)
	struct FGameplayTag K2Node_Event_CooldownTag;  // 0x150 (0x150)
	struct ABP_CaltropProp_C* CallFunc_FinishSpawningActor_ReturnValue;  // 0x158 (0x158)
	char pad_352_1 : 7;  // 0x160 (0x160)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x160 (0x160)
	char pad_353[3];  // 0x161 (0x161)
	float CallFunc_SetLifeSpan_InLifespan_ImplicitCast;  // 0x164 (0x164)


}; 
 
 // Function GA_Caltrop.GA_Caltrop_C.K2_CanActivateAbility
// Size: 0x92(Inherited: 0x78)
struct FK2_CanActivateAbility : FK2_CanActivateAbility
{
	struct FGameplayAbilityActorInfo ActorInfo;  // 0x0 (0x0)
	struct FGameplayAbilitySpecHandle Handle;  // 0x48 (0x48)
	struct FGameplayTagContainer RelevantTags;  // 0x50 (0x50)
	char pad_228_1 : 7;  // 0xE4 (0xE4)
	bool ReturnValue : 1;  // 0x70 (0x70)
	struct FVector CallFunc_Find_Installable_Location_FoundInstallLocation;  // 0x78 (0x78)
	uint8_t CallFunc_Find_Installable_Location_SkillActivatableType;  // 0x90 (0x90)
	char pad_254_1 : 7;  // 0xFE (0xFE)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x91 (0x91)


}; 
 
 // Function GA_Caltrop.GA_Caltrop_C.ServerOnSkillActivate
// Size: 0x10(Inherited: 0x10)
struct FServerOnSkillActivate : FServerOnSkillActivate
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	struct FGameplayTag CooldownTag;  // 0x8 (0x8)


}; 
 
 