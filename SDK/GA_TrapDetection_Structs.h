#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_TrapDetection.GA_TrapDetection_C.EventFMsgAccountLinkAccountSessionDataResponse
struct FEventFMsgAccountLinkAccountSessionDataResponse
{
	struct FMsgAccountLinkAccountSessionDataResponse Msg;  // 0x0 (0x0)


}; 
 
 // Function GA_TrapDetection.GA_TrapDetection_C.ExecuteUbergraph_GA_TrapDetection
struct FExecuteUbergraph_GA_TrapDetection
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FMsgAccountLinkAccountSessionDataRequest K2Node_MakeStruct_MsgAccountLinkAccountSessionDataRequest;  // 0x8 (0x8)
	struct UMsgBaseNode* K2Node_CustomEvent_ProxyObject;  // 0x20 (0x20)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x28 (0x28)
	struct FMsgAccountLinkAccountSessionDataResponse Temp_struct_Variable;  // 0x38 (0x38)
	struct UMsgBaseNode* Temp_object_Variable;  // 0x148 (0x148)
	struct FMsgAccountLinkAccountSessionDataResponse K2Node_CustomEvent_Msg;  // 0x150 (0x150)
	char pad_608_1 : 7;  // 0x260 (0x260)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x260 (0x260)
	char pad_609[7];  // 0x261 (0x261)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x268 (0x268)
	char pad_624_1 : 7;  // 0x270 (0x270)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x270 (0x270)
	char pad_625[15];  // 0x271 (0x271)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x280 (0x280)
	struct AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;  // 0x2E0 (0x2E0)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x2E8 (0x2E8)
	struct ABP_GameplayTagColliderActorBase_C* CallFunc_FinishSpawningActor_ReturnValue;  // 0x398 (0x398)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x3A0 (0x3A0)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface;  // 0x3A8 (0x3A8)
	char pad_952_1 : 7;  // 0x3B8 (0x3B8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x3B8 (0x3B8)
	char pad_953_1 : 7;  // 0x3B9 (0x3B9)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x3B9 (0x3B9)
	char pad_954[6];  // 0x3BA (0x3BA)
	struct UBroadcastMsgNode* CallFunc_BroadcastMsgNode_ReturnValue;  // 0x3C0 (0x3C0)
	char pad_968_1 : 7;  // 0x3C8 (0x3C8)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x3C8 (0x3C8)
	char pad_969[7];  // 0x3C9 (0x3C9)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x3D0 (0x3D0)
	struct FMsgAccountLinkAccountSessionDataResponse Temp_struct_Variable_2;  // 0x3D8 (0x3D8)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x4E8 (0x4E8)
	char pad_1264_1 : 7;  // 0x4F0 (0x4F0)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x4F0 (0x4F0)
	char pad_1265_1 : 7;  // 0x4F1 (0x4F1)
	bool CallFunc_GetPayload_ReturnValue : 1;  // 0x4F1 (0x4F1)
	char pad_1266[6];  // 0x4F2 (0x4F2)
	struct FDesignDataPerk CallFunc_GetDesignDataPerk_ReturnValue;  // 0x4F8 (0x4F8)
	double CallFunc_SetDoublePropertyByName_Value_ImplicitCast;  // 0x590 (0x590)


}; 
 
 // Function GA_TrapDetection.GA_TrapDetection_C.OnMessageReceived_AB747E83435B04EED3CD2F9F715D5068
struct FOnMessageReceived_AB747E83435B04EED3CD2F9F715D5068
{
	struct UMsgBaseNode* ProxyObject;  // 0x0 (0x0)


}; 
 
 // Function GA_TrapDetection.GA_TrapDetection_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 