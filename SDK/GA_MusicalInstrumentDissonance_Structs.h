#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_MusicalInstrumentDissonance.GA_MusicalInstrumentDissonance_C.OnTargetActorOverlap_56331A2B438701138DFEA3A1849CC096
struct FOnTargetActorOverlap_56331A2B438701138DFEA3A1849CC096
{
	struct TArray<struct AActor*> RadiusInActors;  // 0x0 (0x0)


}; 
 
 // Function GA_MusicalInstrumentDissonance.GA_MusicalInstrumentDissonance_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_MusicalInstrumentDissonance.GA_MusicalInstrumentDissonance_C.ExecuteUbergraph_GA_MusicalInstrumentDissonance
struct FExecuteUbergraph_GA_MusicalInstrumentDissonance
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct AActor*> K2Node_CustomEvent_RadiusInActors;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x18 (0x18)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x28 (0x28)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x38 (0x38)
	int32_t Temp_int_Array_Index_Variable;  // 0x3C (0x3C)
	struct AActor* CallFunc_Array_Get_Item;  // 0x40 (0x40)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x48 (0x48)
	char pad_73[3];  // 0x49 (0x49)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x4C (0x4C)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x50 (0x50)
	char pad_81[3];  // 0x51 (0x51)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x54 (0x54)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x58 (0x58)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x60 (0x60)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x68 (0x68)
	char pad_280_1 : 7;  // 0x118 (0x118)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0x118 (0x118)
	char pad_281[7];  // 0x119 (0x119)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x120 (0x120)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x130 (0x130)
	struct FGameplayTag K2Node_Event_EventTag;  // 0x1E0 (0x1E0)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x1E8 (0x1E8)
	char pad_664_1 : 7;  // 0x298 (0x298)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x298 (0x298)
	char pad_665[7];  // 0x299 (0x299)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x2A0 (0x2A0)
	struct UDCAT_TargetActorRadius* CallFunc_TargetActorRadius_ReturnValue;  // 0x2A8 (0x2A8)
	char pad_688_1 : 7;  // 0x2B0 (0x2B0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x2B0 (0x2B0)
	char pad_689_1 : 7;  // 0x2B1 (0x2B1)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x2B1 (0x2B1)
	char pad_690[6];  // 0x2B2 (0x2B2)
	struct USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue;  // 0x2B8 (0x2B8)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x2C0 (0x2C0)


}; 
 
 // Function GA_MusicalInstrumentDissonance.GA_MusicalInstrumentDissonance_C.ReceivedEvent
// Size: 0xB8(Inherited: 0xB8)
struct FReceivedEvent : FReceivedEvent
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 