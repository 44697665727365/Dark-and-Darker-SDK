#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Taunt.GA_Taunt_C.ExecuteUbergraph_GA_Taunt
struct FExecuteUbergraph_GA_Taunt
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	int32_t Temp_int_Array_Index_Variable;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue;  // 0x18 (0x18)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x20 (0x20)
	int32_t Temp_int_Loop_Counter_Variable;  // 0xF8 (0xF8)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0xFC (0xFC)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x100 (0x100)
	struct UObject* CallFunc_GetCurrentSourceObject_ReturnValue;  // 0x108 (0x108)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x110 (0x110)
	struct ASkillActor* K2Node_DynamicCast_AsSkill_Actor;  // 0x128 (0x128)
	char pad_304_1 : 7;  // 0x130 (0x130)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x130 (0x130)
	char pad_305[7];  // 0x131 (0x131)
	struct FDesignDataSkill CallFunc_GetDesignDataSkill_ReturnValue;  // 0x138 (0x138)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x200 (0x200)
	float CallFunc_Conv_IntToFloat_ReturnValue;  // 0x210 (0x210)
	char pad_532[4];  // 0x214 (0x214)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x218 (0x218)
	struct FGameplayTag K2Node_Event_SkillTag;  // 0x220 (0x220)
	struct FGameplayTag K2Node_Event_CooldownTag;  // 0x228 (0x228)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x230 (0x230)
	char pad_568_1 : 7;  // 0x238 (0x238)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x238 (0x238)
	char pad_569[7];  // 0x239 (0x239)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x240 (0x240)
	struct TArray<struct AActor*> CallFunc_SphereOverlapActors_OutActors;  // 0x250 (0x250)
	char pad_608_1 : 7;  // 0x260 (0x260)
	bool CallFunc_SphereOverlapActors_ReturnValue : 1;  // 0x260 (0x260)
	char pad_609[3];  // 0x261 (0x261)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x264 (0x264)
	struct AActor* CallFunc_Array_Get_Item;  // 0x268 (0x268)
	char pad_624_1 : 7;  // 0x270 (0x270)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x270 (0x270)
	char pad_625[7];  // 0x271 (0x271)
	struct ADCMonsterBase* K2Node_DynamicCast_AsDCMonster_Base;  // 0x278 (0x278)
	char pad_640_1 : 7;  // 0x280 (0x280)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x280 (0x280)
	char pad_641[7];  // 0x281 (0x281)
	struct USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_2;  // 0x288 (0x288)
	char pad_656_1 : 7;  // 0x290 (0x290)
	bool CallFunc_GetAggroPoint_bSuccessfully : 1;  // 0x290 (0x290)
	char pad_657[3];  // 0x291 (0x291)
	float CallFunc_GetAggroPoint_ReturnValue;  // 0x294 (0x294)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue_2;  // 0x298 (0x298)
	double CallFunc_FMax_ReturnValue;  // 0x370 (0x370)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x378 (0x378)
	char pad_896_1 : 7;  // 0x380 (0x380)
	bool CallFunc_SetAggro_ReturnValue : 1;  // 0x380 (0x380)
	char pad_897[7];  // 0x381 (0x381)
	double CallFunc_FMax_A_ImplicitCast;  // 0x388 (0x388)
	float CallFunc_SetAggro_Point_ImplicitCast;  // 0x390 (0x390)


}; 
 
 // Function GA_Taunt.GA_Taunt_C.ServerOnSkillActivate
// Size: 0x10(Inherited: 0x10)
struct FServerOnSkillActivate : FServerOnSkillActivate
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	struct FGameplayTag CooldownTag;  // 0x8 (0x8)


}; 
 
 