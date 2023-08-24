#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_WarSong.GA_WarSong_C.EventReceived_CEF90083460EE22CE5C347B6048DA36E
struct FEventReceived_CEF90083460EE22CE5C347B6048DA36E
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_WarSong.GA_WarSong_C.OnTargetActorOverlap_CC4DB50249EA1F0D6992769AAB7B262C
struct FOnTargetActorOverlap_CC4DB50249EA1F0D6992769AAB7B262C
{
	struct TArray<struct AActor*> RadiusInActors;  // 0x0 (0x0)


}; 
 
 // Function GA_WarSong.GA_WarSong_C.ExecuteUbergraph_GA_WarSong
struct FExecuteUbergraph_GA_WarSong
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct TArray<struct AActor*> K2Node_CustomEvent_RadiusInActors;  // 0x10 (0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x20 (0x20)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x30 (0x30)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x40 (0x40)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x58 (0x58)
	struct FGameplayEventData Temp_struct_Variable;  // 0x108 (0x108)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x1B8 (0x1B8)
	char pad_448_1 : 7;  // 0x1C0 (0x1C0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x1C0 (0x1C0)
	char pad_449[3];  // 0x1C1 (0x1C1)
	int32_t Temp_int_Array_Index_Variable;  // 0x1C4 (0x1C4)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x1C8 (0x1C8)
	char pad_460[4];  // 0x1CC (0x1CC)
	struct AActor* CallFunc_Array_Get_Item;  // 0x1D0 (0x1D0)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x1D8 (0x1D8)
	char pad_648_1 : 7;  // 0x288 (0x288)
	bool CallFunc_IsSameTeamWithPlayerCharacter_ReturnValue : 1;  // 0x288 (0x288)
	char pad_649[7];  // 0x289 (0x289)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x290 (0x290)
	char pad_672_1 : 7;  // 0x2A0 (0x2A0)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x2A0 (0x2A0)
	char pad_673[3];  // 0x2A1 (0x2A1)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x2A4 (0x2A4)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x2A8 (0x2A8)
	struct FDesignDataPerk CallFunc_GetDesignDataPerk_ReturnValue;  // 0x358 (0x358)
	struct UDCAT_TargetActorRadius* CallFunc_TargetActorRadius_ReturnValue;  // 0x3F0 (0x3F0)
	char pad_1016_1 : 7;  // 0x3F8 (0x3F8)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x3F8 (0x3F8)


}; 
 
 // Function GA_WarSong.GA_WarSong_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 