#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_Mimic_Base.BP_Mimic_Base_C.Apply Mimic Attribute
struct FApply Mimic Attribute
{
	struct TArray<struct FPrimaryAssetId> K2Node_MakeArray_Array;  // 0x0 (0x0)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue;  // 0x10 (0x10)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue_2;  // 0x20 (0x20)


}; 
 
 // Function BP_Mimic_Base.BP_Mimic_Base_C.BndEvt__BP_Mimic_Impactable_K2Node_ComponentBoundEvent_1_ImpactEnduranceExhausted__DelegateSignature
struct FBndEvt__BP_Mimic_Impactable_K2Node_ComponentBoundEvent_1_ImpactEnduranceExhausted__DelegateSignature
{
	float ExhaustedTime;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	UGameplayEffect* GameplayEffectClass;  // 0x8 (0x8)
	struct FDCGameplayEffectContext EffectContext;  // 0x10 (0x10)


}; 
 
 // Function BP_Mimic_Base.BP_Mimic_Base_C.ExecuteUbergraph_BP_Mimic_Base
struct FExecuteUbergraph_BP_Mimic_Base
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FMsgInteractStarted Temp_struct_Variable;  // 0x8 (0x8)
	struct UMsgBaseNode* K2Node_CustomEvent_ProxyObject_2;  // 0x30 (0x30)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x38 (0x38)
	struct FMsgInteractStarted Temp_struct_Variable_2;  // 0x48 (0x48)
	struct UMsgBaseNode* Temp_object_Variable;  // 0x70 (0x70)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool CallFunc_GetPayload_ReturnValue : 1;  // 0x78 (0x78)
	char pad_121[7];  // 0x79 (0x79)
	struct FMsgInteractFailed Temp_struct_Variable_3;  // 0x80 (0x80)
	struct UMsgBaseNode* K2Node_CustomEvent_ProxyObject;  // 0xA8 (0xA8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0xB0 (0xB0)
	struct FMsgInteractFailed Temp_struct_Variable_4;  // 0xC0 (0xC0)
	struct UMsgBaseNode* Temp_object_Variable_2;  // 0xE8 (0xE8)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool CallFunc_GetPayload_ReturnValue_2 : 1;  // 0xF0 (0xF0)
	char pad_241_1 : 7;  // 0xF1 (0xF1)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0xF1 (0xF1)
	char pad_242[6];  // 0xF2 (0xF2)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0xF8 (0xF8)
	char pad_424_1 : 7;  // 0x1A8 (0x1A8)
	bool CallFunc_HasAuthority_ReturnValue_2 : 1;  // 0x1A8 (0x1A8)
	char pad_425[7];  // 0x1A9 (0x1A9)
	struct AController* K2Node_Event_NewController;  // 0x1B0 (0x1B0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x1B8 (0x1B8)
	struct FMsgInteractStarted K2Node_CustomEvent_Msg_2;  // 0x1C8 (0x1C8)
	struct UAbilityAsync_WaitGameplayEvent* CallFunc_WaitGameplayEventToActor_ReturnValue;  // 0x1F0 (0x1F0)
	char pad_504_1 : 7;  // 0x1F8 (0x1F8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x1F8 (0x1F8)
	char pad_505[7];  // 0x1F9 (0x1F9)
	struct AAIController* CallFunc_GetAIController_ReturnValue;  // 0x200 (0x200)
	struct TArray<struct FPrimaryAssetId> K2Node_MakeArray_Array;  // 0x208 (0x208)
	char pad_536_1 : 7;  // 0x218 (0x218)
	bool CallFunc_Normal_ReturnValue : 1;  // 0x218 (0x218)
	char pad_537[7];  // 0x219 (0x219)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue;  // 0x220 (0x220)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x230 (0x230)
	struct FTimerHandle CallFunc_Map_Find_Value;  // 0x238 (0x238)
	char pad_576_1 : 7;  // 0x240 (0x240)
	bool CallFunc_Map_Find_ReturnValue : 1;  // 0x240 (0x240)
	char pad_577_1 : 7;  // 0x241 (0x241)
	bool CallFunc_Map_Remove_ReturnValue : 1;  // 0x241 (0x241)
	char pad_578[2];  // 0x242 (0x242)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x244 (0x244)
	char pad_596[4];  // 0x254 (0x254)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x258 (0x258)
	struct FMsgInteractFailed K2Node_CustomEvent_Msg;  // 0x260 (0x260)
	struct FTimerHandle CallFunc_Map_Find_Value_2;  // 0x288 (0x288)
	char pad_656_1 : 7;  // 0x290 (0x290)
	bool CallFunc_Map_Find_ReturnValue_2 : 1;  // 0x290 (0x290)
	char pad_657_1 : 7;  // 0x291 (0x291)
	bool CallFunc_Map_Remove_ReturnValue_2 : 1;  // 0x291 (0x291)
	char pad_658_1 : 7;  // 0x292 (0x292)
	bool CallFunc_HasAuthority_ReturnValue_3 : 1;  // 0x292 (0x292)
	char pad_659[1];  // 0x293 (0x293)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x294 (0x294)
	int32_t K2Node_Event_InCount;  // 0x29C (0x29C)
	char pad_672_1 : 7;  // 0x2A0 (0x2A0)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x2A0 (0x2A0)
	char pad_673_1 : 7;  // 0x2A1 (0x2A1)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x2A1 (0x2A1)
	char pad_674_1 : 7;  // 0x2A2 (0x2A2)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x2A2 (0x2A2)
	char pad_675[5];  // 0x2A3 (0x2A3)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x2A8 (0x2A8)
	char pad_696_1 : 7;  // 0x2B8 (0x2B8)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x2B8 (0x2B8)
	char pad_697[7];  // 0x2B9 (0x2B9)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_2;  // 0x2C0 (0x2C0)
	char pad_720_1 : 7;  // 0x2D0 (0x2D0)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_2 : 1;  // 0x2D0 (0x2D0)
	char pad_721[3];  // 0x2D1 (0x2D1)
	float K2Node_ComponentBoundEvent_ExhaustedTime;  // 0x2D4 (0x2D4)
	UGameplayEffect* K2Node_ComponentBoundEvent_GameplayEffectClass;  // 0x2D8 (0x2D8)
	struct FDCGameplayEffectContext K2Node_ComponentBoundEvent_EffectContext;  // 0x2E0 (0x2E0)
	struct FDesignDataProps CallFunc_GetDesignDataProps_ReturnValue;  // 0x4B8 (0x4B8)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x548 (0x548)
	float CallFunc_BreakRotator_Roll;  // 0x560 (0x560)
	float CallFunc_BreakRotator_Pitch;  // 0x564 (0x564)
	float CallFunc_BreakRotator_Yaw;  // 0x568 (0x568)
	char pad_1388[4];  // 0x56C (0x56C)
	struct FRotator CallFunc_MakeRotator_ReturnValue;  // 0x570 (0x570)
	int32_t CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;  // 0x588 (0x588)
	char pad_1420_1 : 7;  // 0x58C (0x58C)
	bool CallFunc_K2_SetActorRotation_ReturnValue : 1;  // 0x58C (0x58C)
	char pad_1421_1 : 7;  // 0x58D (0x58D)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_3 : 1;  // 0x58D (0x58D)
	char pad_1422[2];  // 0x58E (0x58E)
	struct FGameplayEventData Temp_struct_Variable_5;  // 0x590 (0x590)
	struct TScriptInterface<IBaseInterface> CallFunc_BindMsgNode_BaseInterface_CastInput;  // 0x640 (0x640)
	struct UBindMsgNode* CallFunc_BindMsgNode_ReturnValue;  // 0x650 (0x650)
	struct TScriptInterface<IBaseInterface> CallFunc_BindMsgNode_BaseInterface_CastInput_2;  // 0x658 (0x658)
	struct UBindMsgNode* CallFunc_BindMsgNode_ReturnValue_2;  // 0x668 (0x668)
	char pad_1648_1 : 7;  // 0x670 (0x670)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x670 (0x670)
	char pad_1649_1 : 7;  // 0x671 (0x671)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x671 (0x671)
	char pad_1650[6];  // 0x672 (0x672)
	struct FMsgGASAttributeNotify K2Node_Event_InMsg;  // 0x678 (0x678)
	char pad_2896_1 : 7;  // 0xB50 (0xB50)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0xB50 (0xB50)
	char pad_2897_1 : 7;  // 0xB51 (0xB51)
	bool CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue : 1;  // 0xB51 (0xB51)
	char pad_2898[6];  // 0xB52 (0xB52)
	struct FMsgAnimationChangeIdle K2Node_MakeStruct_MsgAnimationChangeIdle;  // 0xB58 (0xB58)
	struct FMsgAnimationChangeIdle K2Node_MakeStruct_MsgAnimationChangeIdle_2;  // 0xB78 (0xB78)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;  // 0xB98 (0xB98)
	char pad_2972[4];  // 0xB9C (0xB9C)
	double CallFunc_Less_DoubleDouble_A_ImplicitCast;  // 0xBA0 (0xBA0)
	double CallFunc_Less_DoubleDouble_B_ImplicitCast;  // 0xBA8 (0xBA8)


}; 
 
 // Function BP_Mimic_Base.BP_Mimic_Base_C.EventFMsgInteractStarted
struct FEventFMsgInteractStarted
{
	struct FMsgInteractStarted Msg;  // 0x0 (0x0)


}; 
 
 // Function BP_Mimic_Base.BP_Mimic_Base_C.EventFMsgInteractFailed
struct FEventFMsgInteractFailed
{
	struct FMsgInteractFailed Msg;  // 0x0 (0x0)


}; 
 
 // Function BP_Mimic_Base.BP_Mimic_Base_C.EventReceived_E61C493B48AD715A2EB816B4A4A8550A
struct FEventReceived_E61C493B48AD715A2EB816B4A4A8550A
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function BP_Mimic_Base.BP_Mimic_Base_C.InteractTargetInfoName
// Size: 0x148(Inherited: 0x18)
struct FInteractTargetInfoName : FInteractTargetInfoName
{
	struct FText Name;  // 0x0 (0x0)
	struct FDesignDataProps CallFunc_GetDesignDataProps_ReturnValue;  // 0x18 (0x18)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0xA8 (0xA8)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0xB8 (0xB8)
	struct FDesignDataMonster CallFunc_GetDesignDataMonster_ReturnValue;  // 0xC0 (0xC0)


}; 
 
 // Function BP_Mimic_Base.BP_Mimic_Base_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // Function BP_Mimic_Base.BP_Mimic_Base_C.OnFMsgGASAttributeNotifyBlueprint
// Size: 0x4D8(Inherited: 0x4D8)
struct FOnFMsgGASAttributeNotifyBlueprint : FOnFMsgGASAttributeNotifyBlueprint
{
	struct FMsgGASAttributeNotify InMsg;  // 0x0 (0x0)


}; 
 
 // Function BP_Mimic_Base.BP_Mimic_Base_C.OnMessageReceived_0C3900FE47946FCE8C6258BAB1382319
struct FOnMessageReceived_0C3900FE47946FCE8C6258BAB1382319
{
	struct UMsgBaseNode* ProxyObject;  // 0x0 (0x0)


}; 
 
 // Function BP_Mimic_Base.BP_Mimic_Base_C.OnMessageReceived_CDDAFC994C6A97AC9DA3D1BB170EF599
struct FOnMessageReceived_CDDAFC994C6A97AC9DA3D1BB170EF599
{
	struct UMsgBaseNode* ProxyObject;  // 0x0 (0x0)


}; 
 
 // Function BP_Mimic_Base.BP_Mimic_Base_C.ReceivePossessed
// Size: 0x8(Inherited: 0x8)
struct FReceivePossessed : FReceivePossessed
{
	struct AController* NewController;  // 0x0 (0x0)


}; 
 
 