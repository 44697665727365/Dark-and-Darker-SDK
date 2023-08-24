#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_WallSpike.BP_WallSpike_C.ExecuteUbergraph_BP_WallSpike
struct FExecuteUbergraph_BP_WallSpike
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UMsgBaseNode* K2Node_CustomEvent_ProxyObject;  // 0x8 (0x8)
	struct FMsgSoundEvent Temp_struct_Variable;  // 0x10 (0x10)
	struct UMsgBaseNode* Temp_object_Variable;  // 0x38 (0x38)
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
	char pad_338[2];  // 0x152 (0x152)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x154 (0x154)
	char pad_356[4];  // 0x164 (0x164)
	struct TArray<struct AActor*> CallFunc_GetOverlappingActors_OverlappingActors;  // 0x168 (0x168)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x178 (0x178)
	char pad_380_1 : 7;  // 0x17C (0x17C)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x17C (0x17C)
	char pad_381[3];  // 0x17D (0x17D)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent;  // 0x180 (0x180)
	struct AActor* K2Node_ComponentBoundEvent_OtherActor;  // 0x188 (0x188)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp;  // 0x190 (0x190)
	int32_t K2Node_ComponentBoundEvent_OtherBodyIndex;  // 0x198 (0x198)
	char pad_412_1 : 7;  // 0x19C (0x19C)
	bool K2Node_ComponentBoundEvent_bFromSweep : 1;  // 0x19C (0x19C)
	char pad_413[3];  // 0x19D (0x19D)
	struct FHitResult K2Node_ComponentBoundEvent_SweepResult;  // 0x1A0 (0x1A0)
	char pad_648_1 : 7;  // 0x288 (0x288)
	bool CallFunc_NotEqual_GameplayTag_ReturnValue : 1;  // 0x288 (0x288)
	char pad_649[7];  // 0x289 (0x289)
	struct FMsgSoundEvent Temp_struct_Variable_2;  // 0x290 (0x290)
	char pad_696_1 : 7;  // 0x2B8 (0x2B8)
	bool CallFunc_GetPayload_ReturnValue : 1;  // 0x2B8 (0x2B8)
	char pad_697_1 : 7;  // 0x2B9 (0x2B9)
	bool CallFunc_SetAbilityTriggerTag_Result : 1;  // 0x2B9 (0x2B9)
	char pad_698_1 : 7;  // 0x2BA (0x2BA)
	bool CallFunc_SetAbilityTriggerTag_Result_2 : 1;  // 0x2BA (0x2BA)
	char pad_699_1 : 7;  // 0x2BB (0x2BB)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue : 1;  // 0x2BB (0x2BB)
	char pad_700[4];  // 0x2BC (0x2BC)
	struct FMsgSoundEvent K2Node_CustomEvent_Msg;  // 0x2C0 (0x2C0)
	struct TScriptInterface<IBaseInterface> CallFunc_BindMsgNode_BaseInterface_CastInput;  // 0x2E8 (0x2E8)
	struct UBindMsgNode* CallFunc_BindMsgNode_ReturnValue;  // 0x2F8 (0x2F8)
	char pad_768_1 : 7;  // 0x300 (0x300)
	bool CallFunc_PlaySoundWithTag_ReturnValue : 1;  // 0x300 (0x300)
	char pad_769_1 : 7;  // 0x301 (0x301)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x301 (0x301)
	char pad_770[2];  // 0x302 (0x302)
	float CallFunc_Delay_Duration_ImplicitCast;  // 0x304 (0x304)
	float CallFunc_Delay_Duration_ImplicitCast_2;  // 0x308 (0x308)
	float CallFunc_Delay_Duration_ImplicitCast_3;  // 0x30C (0x30C)


}; 
 
 // Function BP_WallSpike.BP_WallSpike_C.BndEvt__BP_FloorSpikeTrap_ActiveBox_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
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
 
 // Function BP_WallSpike.BP_WallSpike_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 // Function BP_WallSpike.BP_WallSpike_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // Function BP_WallSpike.BP_WallSpike_C.EventFMsgSoundEvent
struct FEventFMsgSoundEvent
{
	struct FMsgSoundEvent Msg;  // 0x0 (0x0)


}; 
 
 // Function BP_WallSpike.BP_WallSpike_C.OnMessageReceived_55C0747248939B02403D89BE669E525B
struct FOnMessageReceived_55C0747248939B02403D89BE669E525B
{
	struct UMsgBaseNode* ProxyObject;  // 0x0 (0x0)


}; 
 
 // Function BP_WallSpike.BP_WallSpike_C.SetAbilityTriggerTag
struct FSetAbilityTriggerTag
{
	struct FGameplayTag New Tag;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Result : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool CallFunc_NotEqual_GameplayTag_ReturnValue : 1;  // 0x9 (0x9)


}; 
 
 