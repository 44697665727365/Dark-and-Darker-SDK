#pragma once 
#include <BP_PlayerCharacter_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C
// Size: 0xAE8(Inherited: 0x9A0)
struct ABP_PlayerCharacter_C : ADCPlayerCharacterBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x9A0 (0x9A0)
	struct UBP_VoipAkComponent_C* VoipAkComponent;  // 0x9A8 (0x9A8)
	struct UDCPostProcessingComponent* DCPostProcessing;  // 0x9B0 (0x9B0)
	struct UEmoteComponent* Emote;  // 0x9B8 (0x9B8)
	struct UDCActorStatusComponent* DCActorStatus;  // 0x9C0 (0x9C0)
	struct UDCAkComponent* DCAk;  // 0x9C8 (0x9C8)
	struct ULootComponent* LootComponent;  // 0x9D0 (0x9D0)
	struct UInteractableTargetComponent* InteractableTarget;  // 0x9D8 (0x9D8)
	struct UGameHeadupWidgetComponent* GameHeadupWidget;  // 0x9E0 (0x9E0)
	struct USpringArmComponent* ThirdPersonCameraBoom;  // 0x9E8 (0x9E8)
	struct UCameraComponent* FirstPersonCamera;  // 0x9F0 (0x9F0)
	struct UCameraComponent* ThirdPersonCamera;  // 0x9F8 (0x9F8)
	struct UBP_DCHitBox_C* BP_DCHitBox_Hand_R;  // 0xA00 (0xA00)
	struct UBP_DCHitBox_C* BP_DCHitBox_Arm_R1;  // 0xA08 (0xA08)
	struct UBP_DCHitBox_C* BP_DCHitBox_Arm_R;  // 0xA10 (0xA10)
	struct UBP_DCHitBox_C* BP_DCHitBox_Hand_L;  // 0xA18 (0xA18)
	struct UBP_DCHitBox_C* BP_DCHitBox_Arm_L1;  // 0xA20 (0xA20)
	struct UBP_DCHitBox_C* BP_DCHitBox_Arm_L;  // 0xA28 (0xA28)
	struct UBP_DCHitBox_C* BP_DCHitBox_Foot_R;  // 0xA30 (0xA30)
	struct UBP_DCHitBox_C* BP_DCHitBox_Leg_R1;  // [xA38 ([xA38)
	struct UBP_DCHitBox_C* BP_DCHitBox_Leg_R;  // 0xA40 (0xA40)
	struct UBP_DCHitBox_C* BP_DCHitBox_Foot_L;  // 0xA48 (0xA48)
	struct UBP_DCHitBox_C* BP_DCHitBox_Leg_L1;  // 0xA50 (0xA50)
	struct UBP_DCHitBox_C* BP_DCHitBox_Leg_L;  // 0xA58 (0xA58)
	struct UBP_DCHitBox_C* BP_DCHitBox_Body2;  // 0xA60 (0xA60)
	struct UBP_DCHitBox_C* BP_DCHitBox_Body1;  // 0xA68 (0xA68)
	struct UBP_DCHitBox_C* BP_DCHitBox_Body;  // 0xA70 (0xA70)
	struct UBP_DCHitBox_C* BP_DCHitBox_Head;  // 0xA78 (0xA78)
	struct UEquipmentInventoryComponent* EquipmentInventory;  // 0xA80 (0xA80)
	struct UInventoryComponent* InventoryComponent;  // 0xA88 (0xA88)
	struct FVector GroundTraceStartPoint;  // 0xA90 (0xA90)
	struct FGameplayTag SoundQueryTag;  // 0xAA8 (0xAA8)
	enum class EPhysicalSurface LastFootStepSurface;  // 0xAB0 (0xAB0)
	char pad_2737_1 : 7;  // 0xAB1 (0xAB1)
	bool bFootStepLeft : 1;  // 0xAB1 (0xAB1)
	char pad_2738[6];  // 0xAB2 (0xAB2)
	struct UObject* SoundDataProvider;  // 0xAB8 (0xAB8)
	struct UAkAudioEvent* AkEvent;  // 0xAC0 (0xAC0)
	struct FVector Location;  // 0xAC8 (0xAC8)
	double RTPCValuePlayerSpeed;  // 0xAE0 (0xAE0)


	void OnPhantomize(bool IsActivate); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnPhantomize
	struct UCameraComponent* GetPerspectiveCameraComponent(bool bFirstPersonPerspective); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetPerspectiveCameraComponent
	struct UCameraComponent* GetCameraComponent(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCameraComponent
	void HasLocalCurrentCharacterEnhancedHearing(bool& HasEnhancedHearing); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.HasLocalCurrentCharacterEnhancedHearing
	void SetRTPCValuePlayerSpeed(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetRTPCValuePlayerSpeed
	void OnMessageReceived_EA0BB1014365DB5602FF2A88319323AC(struct UMsgBaseNode* ProxyObject); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnMessageReceived_EA0BB1014365DB5602FF2A88319323AC
	void OnMessageReceived_E32555534626CD303291009A607703E1(struct UMsgBaseNode* ProxyObject); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnMessageReceived_E32555534626CD303291009A607703E1
	void ReceiveBeginPlay(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay
	void EventFMsgGASAttributeNotify(struct FMsgGASAttributeNotify Msg); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.EventFMsgGASAttributeNotify
	void ReceivePreInitializeComponents(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceivePreInitializeComponents
	void EventFMsgSoundEvent(struct FMsgSoundEvent Msg); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.EventFMsgSoundEvent
	void InteractFound(struct AActor* Interacter, struct UPrimitiveComponent* InteractPart); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractFound
	void InteractLost(struct AActor* Interacter); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractLost
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractSucceed
	void OnSetRenderCustomDepth(bool bValue); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSetRenderCustomDepth
	void OnSetPerspective(struct APlayerController* InPlayerController, bool bInIsFirstPersonPerspective); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSetPerspective
	void OnCommemorativePlaqueText(struct FPrimaryAssetId ScriptAseetId, struct FVector Location); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCommemorativePlaqueText
	void OnFMsgGASActorDieNotifyBlueprint(struct FMsgGASActorDieNotify& InMsg); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnFMsgGASActorDieNotifyBlueprint
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_PlayerCharacter(int32_t EntryPoint); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter
}; 
 
 


