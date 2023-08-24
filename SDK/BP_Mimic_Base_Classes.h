#pragma once 
#include <BP_Mimic_Base_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Mimic_Base.BP_Mimic_Base_C
// Size: 0x1248(Inherited: 0x11B8)
struct ABP_Mimic_Base_C : ABP_DCMonsterBaseWithOptions_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UBP_DCHitBox_C* BP_DCHitBox_Head;  // 0x11C0 (0x11C0)
	struct UBP_DCHitBox_C* BP_DCHitBox_Slate;  // 0x11C8 (0x11C8)
	struct UBP_DCHitBox_C* BP_DCHitBox_Body;  // 0x11D0 (0x11D0)
	struct TMap<struct AActor*, struct FTimerHandle> TimerHandleMap;  // 0x11D8 (0x11D8)
	struct FPrimaryAssetId MimickingPropsId;  // 0x1228 (0x1228)
	struct TArray<struct FPrimaryAssetId> Mimic Attribute Effect;  // 0x1238 (0x1238)


	void Apply Mimic Attribute(); // Function BP_Mimic_Base.BP_Mimic_Base_C.Apply Mimic Attribute
	void SetRotationZero(); // Function BP_Mimic_Base.BP_Mimic_Base_C.SetRotationZero
	void InteractTargetInfoName(struct FText& Name); // Function BP_Mimic_Base.BP_Mimic_Base_C.InteractTargetInfoName
	void EventReceived_E61C493B48AD715A2EB816B4A4A8550A(struct FGameplayEventData Payload); // Function BP_Mimic_Base.BP_Mimic_Base_C.EventReceived_E61C493B48AD715A2EB816B4A4A8550A
	void OnMessageReceived_0C3900FE47946FCE8C6258BAB1382319(struct UMsgBaseNode* ProxyObject); // Function BP_Mimic_Base.BP_Mimic_Base_C.OnMessageReceived_0C3900FE47946FCE8C6258BAB1382319
	void OnMessageReceived_CDDAFC994C6A97AC9DA3D1BB170EF599(struct UMsgBaseNode* ProxyObject); // Function BP_Mimic_Base.BP_Mimic_Base_C.OnMessageReceived_CDDAFC994C6A97AC9DA3D1BB170EF599
	void ReceivePossessed(struct AController* NewController); // Function BP_Mimic_Base.BP_Mimic_Base_C.ReceivePossessed
	void EventFMsgInteractStarted(struct FMsgInteractStarted Msg); // Function BP_Mimic_Base.BP_Mimic_Base_C.EventFMsgInteractStarted
	void OnTimerExpired(); // Function BP_Mimic_Base.BP_Mimic_Base_C.OnTimerExpired
	void EventFMsgInteractFailed(struct FMsgInteractFailed Msg); // Function BP_Mimic_Base.BP_Mimic_Base_C.EventFMsgInteractFailed
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_Mimic_Base.BP_Mimic_Base_C.GameplayTagUpdated
	void BndEvt__BP_Mimic_Impactable_K2Node_ComponentBoundEvent_1_ImpactEnduranceExhausted__DelegateSignature(float ExhaustedTime, UGameplayEffect* GameplayEffectClass, struct FDCGameplayEffectContext EffectContext); // Function BP_Mimic_Base.BP_Mimic_Base_C.BndEvt__BP_Mimic_Impactable_K2Node_ComponentBoundEvent_1_ImpactEnduranceExhausted__DelegateSignature
	void CheckStanceOne(); // Function BP_Mimic_Base.BP_Mimic_Base_C.CheckStanceOne
	void ReceiveBeginPlay(); // Function BP_Mimic_Base.BP_Mimic_Base_C.ReceiveBeginPlay
	void OnFMsgGASAttributeNotifyBlueprint(struct FMsgGASAttributeNotify& InMsg); // Function BP_Mimic_Base.BP_Mimic_Base_C.OnFMsgGASAttributeNotifyBlueprint
	void ExecuteUbergraph_BP_Mimic_Base(int32_t EntryPoint); // Function BP_Mimic_Base.BP_Mimic_Base_C.ExecuteUbergraph_BP_Mimic_Base
}; 
 
 


