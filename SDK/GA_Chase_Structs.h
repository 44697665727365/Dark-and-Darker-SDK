#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Chase.GA_Chase_C.EventFMsgAccountLinkAccountSessionDataResponse
struct FEventFMsgAccountLinkAccountSessionDataResponse
{
	struct FMsgAccountLinkAccountSessionDataResponse Msg;  // 0x0 (0x0)


}; 
 
 // Function GA_Chase.GA_Chase_C.ExecuteUbergraph_GA_Chase
struct FExecuteUbergraph_GA_Chase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FMsgAccountLinkAccountSessionDataRequest K2Node_MakeStruct_MsgAccountLinkAccountSessionDataRequest;  // 0x8 (0x8)
	struct FMsgAccountLinkAccountSessionDataResponse Temp_struct_Variable;  // 0x20 (0x20)
	struct UMsgBaseNode* Temp_object_Variable;  // 0x130 (0x130)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x138 (0x138)
	char pad_488_1 : 7;  // 0x1E8 (0x1E8)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x1E8 (0x1E8)
	char pad_489[7];  // 0x1E9 (0x1E9)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x1F0 (0x1F0)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface;  // 0x1F8 (0x1F8)
	char pad_520_1 : 7;  // 0x208 (0x208)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x208 (0x208)
	char pad_521_1 : 7;  // 0x209 (0x209)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x209 (0x209)
	char pad_522[6];  // 0x20A (0x20A)
	struct UBroadcastMsgNode* CallFunc_BroadcastMsgNode_ReturnValue;  // 0x210 (0x210)
	char pad_536_1 : 7;  // 0x218 (0x218)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x218 (0x218)
	char pad_537[7];  // 0x219 (0x219)
	struct FMsgAccountLinkAccountSessionDataResponse K2Node_CustomEvent_Msg;  // 0x220 (0x220)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x330 (0x330)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x338 (0x338)
	char pad_832_1 : 7;  // 0x340 (0x340)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x340 (0x340)
	char pad_833[15];  // 0x341 (0x341)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x350 (0x350)
	struct AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;  // 0x3B0 (0x3B0)
	char pad_952_1 : 7;  // 0x3B8 (0x3B8)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x3B8 (0x3B8)
	char pad_953[7];  // 0x3B9 (0x3B9)
	struct ABP_GameplayTagColliderActorBase_C* CallFunc_FinishSpawningActor_ReturnValue;  // 0x3C0 (0x3C0)
	struct UMsgBaseNode* K2Node_CustomEvent_ProxyObject;  // 0x3C8 (0x3C8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x3D0 (0x3D0)
	struct FMsgAccountLinkAccountSessionDataResponse Temp_struct_Variable_2;  // 0x3E0 (0x3E0)
	char pad_1264_1 : 7;  // 0x4F0 (0x4F0)
	bool CallFunc_GetPayload_ReturnValue : 1;  // 0x4F0 (0x4F0)
	char pad_1265[7];  // 0x4F1 (0x4F1)
	struct FDesignDataPerk CallFunc_GetDesignDataPerk_ReturnValue;  // 0x4F8 (0x4F8)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast;  // 0x590 (0x590)


}; 
 
 // Function GA_Chase.GA_Chase_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 // Function GA_Chase.GA_Chase_C.OnMessageReceived_48415CF145A92DD77B9BB2ACD9934E4C
struct FOnMessageReceived_48415CF145A92DD77B9BB2ACD9934E4C
{
	struct UMsgBaseNode* ProxyObject;  // 0x0 (0x0)


}; 
 
 