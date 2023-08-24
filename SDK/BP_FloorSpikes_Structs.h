#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_FloorSpikes.BP_FloorSpikes_C.BndEvt__BP_FloorSpikeTrap_ActiveBox_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
struct FBndEvt__BP_FloorSpikeTrap_ActiveBox_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
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
 
 // Function BP_FloorSpikes.BP_FloorSpikes_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 // Function BP_FloorSpikes.BP_FloorSpikes_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // Function BP_FloorSpikes.BP_FloorSpikes_C.ExecuteUbergraph_BP_FloorSpikes
struct FExecuteUbergraph_BP_FloorSpikes
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UMsgBaseNode* K2Node_CustomEvent_ProxyObject;  // 0x8 (0x8)
	struct FMsgSoundEvent Temp_struct_Variable;  // 0x10 (0x10)
	struct UMsgBaseNode* Temp_object_Variable;  // 0x38 (0x38)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool Temp_bool_Variable : 1;  // 0x40 (0x40)
	char pad_65_1 : 7;  // 0x41 (0x41)
	bool Temp_bool_Variable_2 : 1;  // 0x41 (0x41)
	char pad_66[2];  // 0x42 (0x42)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x44 (0x44)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x48 (0x48)
	int32_t Temp_int_Array_Index_Variable;  // 0x4C (0x4C)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)
	struct AActor* K2Node_Event_Interacter;  // 0x58 (0x58)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x60 (0x60)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x68 (0x68)
	struct FHitResult K2Node_Event_HitResult;  // 0x70 (0x70)
	char pad_344_1 : 7;  // 0x158 (0x158)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x158 (0x158)
	char pad_345[3];  // 0x159 (0x159)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x15C (0x15C)
	int32_t K2Node_Event_InCount;  // 0x164 (0x164)
	char pad_360_1 : 7;  // 0x168 (0x168)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x168 (0x168)
	char pad_361_1 : 7;  // 0x169 (0x169)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x169 (0x169)
	char pad_362[6];  // 0x16A (0x16A)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent;  // 0x170 (0x170)
	struct AActor* K2Node_ComponentBoundEvent_OtherActor;  // 0x178 (0x178)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp;  // 0x180 (0x180)
	int32_t K2Node_ComponentBoundEvent_OtherBodyIndex;  // 0x188 (0x188)
	char pad_396_1 : 7;  // 0x18C (0x18C)
	bool K2Node_ComponentBoundEvent_bFromSweep : 1;  // 0x18C (0x18C)
	char pad_397[3];  // 0x18D (0x18D)
	struct FHitResult K2Node_ComponentBoundEvent_SweepResult;  // 0x190 (0x190)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;  // 0x278 (0x278)
	char pad_648_1 : 7;  // 0x288 (0x288)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x288 (0x288)
	char pad_649[3];  // 0x289 (0x289)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x28C (0x28C)
	char pad_668[4];  // 0x29C (0x29C)
	struct FMsgSoundEvent Temp_struct_Variable_2;  // 0x2A0 (0x2A0)
	char pad_712_1 : 7;  // 0x2C8 (0x2C8)
	bool CallFunc_SetAbilityTriggerTag_Result : 1;  // 0x2C8 (0x2C8)
	char pad_713_1 : 7;  // 0x2C9 (0x2C9)
	bool CallFunc_GetPayload_ReturnValue : 1;  // 0x2C9 (0x2C9)
	char pad_714_1 : 7;  // 0x2CA (0x2CA)
	bool CallFunc_SetAbilityTriggerTag_Result_2 : 1;  // 0x2CA (0x2CA)
	char pad_715[5];  // 0x2CB (0x2CB)
	struct FMsgSoundEvent K2Node_CustomEvent_Msg;  // 0x2D0 (0x2D0)
	struct TScriptInterface<IBaseInterface> CallFunc_BindMsgNode_BaseInterface_CastInput;  // 0x2F8 (0x2F8)
	struct UBindMsgNode* CallFunc_BindMsgNode_ReturnValue;  // 0x308 (0x308)
	char pad_784_1 : 7;  // 0x310 (0x310)
	bool CallFunc_PlaySoundWithTag_ReturnValue : 1;  // 0x310 (0x310)
	char pad_785_1 : 7;  // 0x311 (0x311)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x311 (0x311)
	char pad_786[6];  // 0x312 (0x312)
	struct TArray<struct AActor*> CallFunc_GetOverlappingActors_OverlappingActors;  // 0x318 (0x318)
	struct AActor* CallFunc_Array_Get_Item;  // 0x328 (0x328)
	char pad_816_1 : 7;  // 0x330 (0x330)
	bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue : 1;  // 0x330 (0x330)
	char pad_817[7];  // 0x331 (0x331)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As__________________2;  // 0x338 (0x338)
	char pad_840_1 : 7;  // 0x348 (0x348)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x348 (0x348)
	char pad_841[3];  // 0x349 (0x349)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x34C (0x34C)
	char pad_848_1 : 7;  // 0x350 (0x350)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x350 (0x350)
	char pad_849_1 : 7;  // 0x351 (0x351)
	bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue_2 : 1;  // 0x351 (0x351)
	char pad_850[2];  // 0x352 (0x352)
	float CallFunc_Delay_Duration_ImplicitCast;  // 0x354 (0x354)
	float CallFunc_Delay_Duration_ImplicitCast_2;  // 0x358 (0x358)


}; 
 
 // Function BP_FloorSpikes.BP_FloorSpikes_C.EventFMsgSoundEvent
struct FEventFMsgSoundEvent
{
	struct FMsgSoundEvent Msg;  // 0x0 (0x0)


}; 
 
 // Function BP_FloorSpikes.BP_FloorSpikes_C.OnMessageReceived_6C1E7AB946EFC9996E4677A2C7074582
struct FOnMessageReceived_6C1E7AB946EFC9996E4677A2C7074582
{
	struct UMsgBaseNode* ProxyObject;  // 0x0 (0x0)


}; 
 
 // Function BP_FloorSpikes.BP_FloorSpikes_C.SetAbilityTriggerTag
struct FSetAbilityTriggerTag
{
	struct FGameplayTag New Trigger Tag;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Result : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool CallFunc_NotEqual_GameplayTag_ReturnValue : 1;  // 0x9 (0x9)


}; 
 
 