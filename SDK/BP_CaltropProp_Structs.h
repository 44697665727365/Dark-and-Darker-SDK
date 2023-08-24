#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_CaltropProp.BP_CaltropProp_C.ExecuteUbergraph_BP_CaltropProp
struct FExecuteUbergraph_BP_CaltropProp
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent;  // 0x8 (0x8)
	struct AActor* K2Node_CustomEvent_OtherActor;  // 0x10 (0x10)
	struct UPrimitiveComponent* K2Node_CustomEvent_OtherComp;  // 0x18 (0x18)
	int32_t K2Node_CustomEvent_OtherBodyIndex;  // 0x20 (0x20)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool K2Node_CustomEvent_bFromSweep : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	struct FHitResult K2Node_CustomEvent_SweepResult;  // 0x28 (0x28)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x110 (0x110)
	char pad_280_1 : 7;  // 0x118 (0x118)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x118 (0x118)
	char pad_281_1 : 7;  // 0x119 (0x119)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x119 (0x119)
	char pad_282[6];  // 0x11A (0x11A)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x120 (0x120)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyPremadeSpecArray_ReturnValue;  // 0x1D0 (0x1D0)
	char pad_480_1 : 7;  // 0x1E0 (0x1E0)
	bool CallFunc_HasAuthority_ReturnValue_2 : 1;  // 0x1E0 (0x1E0)
	char pad_481[3];  // 0x1E1 (0x1E1)
	struct FDelegate Temp_delegate_Variable;  // 0x1E4 (0x1E4)
	char pad_500[4];  // 0x1F4 (0x1F4)
	struct AActor* K2Node_Event_Interacter;  // 0x1F8 (0x1F8)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x200 (0x200)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x208 (0x208)
	struct FHitResult K2Node_Event_HitResult;  // 0x210 (0x210)
	char pad_760_1 : 7;  // 0x2F8 (0x2F8)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x2F8 (0x2F8)
	char pad_761[3];  // 0x2F9 (0x2F9)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x2FC (0x2FC)
	int32_t CallFunc_PostEvent_ReturnValue;  // 0x30C (0x30C)


}; 
 
 // Function BP_CaltropProp.BP_CaltropProp_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 // Function BP_CaltropProp.BP_CaltropProp_C.OnOverlapToActor
struct FOnOverlapToActor
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool bFromSweep : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct FHitResult SweepResult;  // 0x20 (0x20)


}; 
 
 