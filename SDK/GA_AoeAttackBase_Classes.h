#pragma once 
#include <GA_AoeAttackBase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_AoeAttackBase.GA_AoeAttackBase_C
// Size: 0x5E0(Inherited: 0x558)
struct UGA_AoeAttackBase_C : UDCGameplayAbilityBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	char pad_1376_1 : 7;  // 0x560 (0x560)
	bool Add Effect : 1;  // 0x560 (0x560)
	char pad_1377_1 : 7;  // 0x561 (0x561)
	bool Add Tag : 1;  // 0x561 (0x561)
	char pad_1378[6];  // 0x562 (0x562)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x568 (0x568)
	char pad_1400_1 : 7;  // 0x578 (0x578)
	bool Player : 1;  // 0x578 (0x578)
	char pad_1401_1 : 7;  // 0x579 (0x579)
	bool Monster : 1;  // 0x579 (0x579)
	char pad_1402[6];  // 0x57A (0x57A)
	struct TArray<struct FGameplayTag> Tag to Check;  // 0x580 (0x580)
	struct TArray<struct FGameplayTag> UnTag to Check;  // 0x590 (0x590)
	int32_t Tag Count;  // 0x5A0 (0x5A0)
	int32_t UnTag Count;  // 0x5A4 (0x5A4)
	struct ABP_DCAoeDefineBase_AutoActive_C* AoeBase;  // 0x5A8 (0x5A8)
	struct ADCCharacterBase* Target Array Element;  // 0x5B0 (0x5B0)
	int32_t Temp Tag Count;  // 0x5B8 (0x5B8)
	int32_t Temp UnTag Count;  // 0x5BC (0x5BC)
	struct FGameplayTag Tag Array Element;  // 0x5C0 (0x5C0)
	struct FGameplayTag UnTag Array Element;  // 0x5C8 (0x5C8)
	struct FGameplayTag Apply Effect Container Tag;  // 0x5D0 (0x5D0)
	struct FGameplayTag Apply Gameplay Tag;  // 0x5D8 (0x5D8)


	void Filter UnTags(); // Function GA_AoeAttackBase.GA_AoeAttackBase_C.Filter UnTags
	void Filter Tags(); // Function GA_AoeAttackBase.GA_AoeAttackBase_C.Filter Tags
	void Filter Target Type(); // Function GA_AoeAttackBase.GA_AoeAttackBase_C.Filter Target Type
	void Set Variables(); // Function GA_AoeAttackBase.GA_AoeAttackBase_C.Set Variables
	void K2_ActivateAbility(); // Function GA_AoeAttackBase.GA_AoeAttackBase_C.K2_ActivateAbility
	void ExecuteUbergraph_GA_AoeAttackBase(int32_t EntryPoint); // Function GA_AoeAttackBase.GA_AoeAttackBase_C.ExecuteUbergraph_GA_AoeAttackBase
}; 
 
 


