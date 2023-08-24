#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_TrackAxe.BP_TrackAxe_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 // Function BP_TrackAxe.BP_TrackAxe_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // Function BP_TrackAxe.BP_TrackAxe_C.ExecuteUbergraph_BP_TrackAxe
struct FExecuteUbergraph_BP_TrackAxe
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FMsgSoundEvent Temp_struct_Variable;  // 0x8 (0x8)
	struct UMsgBaseNode* Temp_object_Variable;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct AActor* K2Node_Event_Interacter;  // 0x40 (0x40)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x48 (0x48)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x50 (0x50)
	struct FHitResult K2Node_Event_HitResult;  // 0x58 (0x58)
	char pad_320_1 : 7;  // 0x140 (0x140)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x140 (0x140)
	char pad_321[3];  // 0x141 (0x141)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x144 (0x144)
	int32_t K2Node_Event_InCount;  // 0x14C (0x14C)
	char pad_336_1 : 7;  // 0x150 (0x150)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x150 (0x150)
	char pad_337_1 : 7;  // 0x151 (0x151)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x151 (0x151)
	char pad_338[6];  // 0x152 (0x152)
	struct UMsgBaseNode* K2Node_CustomEvent_ProxyObject;  // 0x158 (0x158)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x160 (0x160)
	struct FMsgSoundEvent Temp_struct_Variable_2;  // 0x170 (0x170)
	char pad_408_1 : 7;  // 0x198 (0x198)
	bool CallFunc_NotEqual_GameplayTag_ReturnValue : 1;  // 0x198 (0x198)
	char pad_409_1 : 7;  // 0x199 (0x199)
	bool CallFunc_GetPayload_ReturnValue : 1;  // 0x199 (0x199)
	char pad_410_1 : 7;  // 0x19A (0x19A)
	bool CallFunc_SetAbilityTriggerTag_Result : 1;  // 0x19A (0x19A)
	char pad_411[5];  // 0x19B (0x19B)
	struct FMsgSoundEvent K2Node_CustomEvent_Msg;  // 0x1A0 (0x1A0)
	struct TScriptInterface<IBaseInterface> CallFunc_BindMsgNode_BaseInterface_CastInput;  // 0x1C8 (0x1C8)
	struct UBindMsgNode* CallFunc_BindMsgNode_ReturnValue;  // 0x1D8 (0x1D8)
	char pad_480_1 : 7;  // 0x1E0 (0x1E0)
	bool CallFunc_PlaySoundWithTag_ReturnValue : 1;  // 0x1E0 (0x1E0)
	char pad_481_1 : 7;  // 0x1E1 (0x1E1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x1E1 (0x1E1)
	char pad_482[2];  // 0x1E2 (0x1E2)
	float CallFunc_Delay_Duration_ImplicitCast;  // 0x1E4 (0x1E4)
	float CallFunc_Delay_Duration_ImplicitCast_2;  // 0x1E8 (0x1E8)


}; 
 
 // Function BP_TrackAxe.BP_TrackAxe_C.EventFMsgSoundEvent
struct FEventFMsgSoundEvent
{
	struct FMsgSoundEvent Msg;  // 0x0 (0x0)


}; 
 
 // Function BP_TrackAxe.BP_TrackAxe_C.OnMessageReceived_8813A0C944F113C8C2169F887C962471
struct FOnMessageReceived_8813A0C944F113C8C2169F887C962471
{
	struct UMsgBaseNode* ProxyObject;  // 0x0 (0x0)


}; 
 
 // Function BP_TrackAxe.BP_TrackAxe_C.SetAbilityTriggerTag
struct FSetAbilityTriggerTag
{
	struct FGameplayTag New Trigger Tag;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Result : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool CallFunc_NotEqual_GameplayTag_ReturnValue : 1;  // 0x9 (0x9)


}; 
 
 