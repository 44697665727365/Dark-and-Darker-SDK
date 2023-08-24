#pragma once 
#include <BP_PropsActorBase_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_PropsActorBase.BP_PropsActorBase_C
// Size: 0x4B8(Inherited: 0x3E0)
struct ABP_PropsActorBase_C : APropsActorBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x3E0 (0x3E0)
	struct UDCLightSourceComponent* DCLightSource;  // 0x3E8 (0x3E8)
	struct UDCGameSpawnableComponent* DCGameSpawnable;  // 0x3F0 (0x3F0)
	struct UDCAkComponent* DCAk;  // 0x3F8 (0x3F8)
	struct USceneComponent* Root;  // 0x400 (0x400)
	struct UGeometryCollectionComponent* SelectedGeometryCollection;  // 0x408 (0x408)
	char pad_1040_1 : 7;  // 0x410 (0x410)
	bool bHideOnClient : 1;  // 0x410 (0x410)
	char pad_1041[7];  // 0x411 (0x411)
	struct TMap<struct FGameplayTag, struct UGeometryCollectionComponent*> MatchGeometryCollection;  // 0x418 (0x418)
	struct ABP_DestructionField_C* DestructionField;  // 0x468 (0x468)
	struct FGameplayTag DestructionSound;  // 0x470 (0x470)
	char pad_1144_1 : 7;  // 0x478 (0x478)
	bool HideGC : 1;  // 0x478 (0x478)
	char pad_1145[7];  // 0x479 (0x479)
	double HideGCDelay;  // 0x480 (0x480)
	struct FVector CustomImpactPoint;  // 0x488 (0x488)
	struct FVector ImpactPoint;  // 0x4A0 (0x4A0)


	void FindNavModifier(struct TArray<struct UNavModifierComponent*>& Results); // Function BP_PropsActorBase.BP_PropsActorBase_C.FindNavModifier
	void DisableAllMeshs(); // Function BP_PropsActorBase.BP_PropsActorBase_C.DisableAllMeshs
	void FindGeometryCollectionDefault(struct UGeometryCollectionComponent*& GeometryCollection); // Function BP_PropsActorBase.BP_PropsActorBase_C.FindGeometryCollectionDefault
	void OnMessageReceived_276C1C2B4C744D3B8E1075AD9729DE9E(struct UMsgBaseNode* ProxyObject); // Function BP_PropsActorBase.BP_PropsActorBase_C.OnMessageReceived_276C1C2B4C744D3B8E1075AD9729DE9E
	void EventFMsgGASAttributeNotify(struct FMsgGASAttributeNotify InMsg); // Function BP_PropsActorBase.BP_PropsActorBase_C.EventFMsgGASAttributeNotify
	void ReceivePreInitializeComponents(); // Function BP_PropsActorBase.BP_PropsActorBase_C.ReceivePreInitializeComponents
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PropsActorBase.BP_PropsActorBase_C.ReceiveEndPlay
	void OnImpactEnduranceExhausted(float ExhaustedTime, UGameplayEffect* GameplayEffectClass, struct FDCGameplayEffectContext EffectContext); // Function BP_PropsActorBase.BP_PropsActorBase_C.OnImpactEnduranceExhausted
	void DestructClient(); // Function BP_PropsActorBase.BP_PropsActorBase_C.DestructClient
	void ExecuteUbergraph_BP_PropsActorBase(int32_t EntryPoint); // Function BP_PropsActorBase.BP_PropsActorBase_C.ExecuteUbergraph_BP_PropsActorBase
}; 
 
 


