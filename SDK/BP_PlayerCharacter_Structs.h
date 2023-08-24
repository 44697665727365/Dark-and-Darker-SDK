#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EventFMsgGASAttributeNotify
struct FEventFMsgGASAttributeNotify
{
	struct FMsgGASAttributeNotify Msg;  // 0x0 (0x0)


}; 
 
 // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractFound
// Size: 0x10(Inherited: 0x10)
struct FInteractFound : FInteractFound
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct UPrimitiveComponent* InteractPart;  // 0x8 (0x8)


}; 
 
 // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetPerspectiveCameraComponent
// Size: 0x10(Inherited: 0x10)
struct FGetPerspectiveCameraComponent : FGetPerspectiveCameraComponent
{
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bFirstPersonPerspective : 1;  // 0x0 (0x0)
	struct UCameraComponent* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractLost
// Size: 0x8(Inherited: 0x8)
struct FInteractLost : FInteractLost
{
	struct AActor* Interacter;  // 0x0 (0x0)


}; 
 
 // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // Function BP_PlayerCharacter.BP_PlayerCharacter_C.EventFMsgSoundEvent
struct FEventFMsgSoundEvent
{
	struct FMsgSoundEvent Msg;  // 0x0 (0x0)


}; 
 
 // Function BP_PlayerCharacter.BP_PlayerCharacter_C.HasLocalCurrentCharacterEnhancedHearing
struct FHasLocalCurrentCharacterEnhancedHearing
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool HasEnhancedHearing : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct APawn* CallFunc_GetCurrentPlayerPawn_ReturnValue;  // 0x8 (0x8)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x20 (0x20)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x30 (0x30)


}; 
 
 // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter
struct FExecuteUbergraph_BP_PlayerCharacter
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FPrimaryAssetId K2Node_MakeStruct_PrimaryAssetId;  // 0x4 (0x4)
	char pad_20[4];  // 0x14 (0x14)
	struct UMsgBaseNode* K2Node_CustomEvent_ProxyObject_2;  // 0x18 (0x18)
	struct FDesignDataPropsInteract CallFunc_GetDesignDataPropsInteract_ReturnValue;  // 0x20 (0x20)
	struct FMsgGASAttributeNotify Temp_struct_Variable;  // 0xC0 (0xC0)
	struct UMsgBaseNode* Temp_object_Variable;  // 0x598 (0x598)
	struct FMsgSoundEvent Temp_struct_Variable_2;  // 0x5A0 (0x5A0)
	struct UMsgBaseNode* K2Node_CustomEvent_ProxyObject;  // 0x5C8 (0x5C8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x5D0 (0x5D0)
	struct FMsgSoundEvent Temp_struct_Variable_3;  // 0x5E0 (0x5E0)
	struct UMsgBaseNode* Temp_object_Variable_2;  // 0x608 (0x608)
	char pad_1552_1 : 7;  // 0x610 (0x610)
	bool CallFunc_GetPayload_ReturnValue : 1;  // 0x610 (0x610)
	char pad_1553[3];  // 0x611 (0x611)
	int32_t Temp_int_Array_Index_Variable;  // 0x614 (0x614)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x618 (0x618)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x61C (0x61C)
	int32_t Temp_int_Array_Index_Variable_2;  // 0x620 (0x620)
	char pad_1572_1 : 7;  // 0x624 (0x624)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x624 (0x624)
	char pad_1573[3];  // 0x625 (0x625)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x628 (0x628)
	struct FMsgGASAttributeNotify K2Node_CustomEvent_Msg_2;  // 0x638 (0x638)
	struct FMsgGASAttributeNotify Temp_struct_Variable_4;  // 0xB10 (0xB10)
	struct FMsgSoundEvent K2Node_CustomEvent_Msg;  // 0xFE8 (0xFE8)
	char pad_4112_1 : 7;  // 0x1010 (0x1010)
	bool CallFunc_GetPayload_ReturnValue_2 : 1;  // 0x1010 (0x1010)
	char pad_4113_1 : 7;  // 0x1011 (0x1011)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x1011 (0x1011)
	char pad_4114_1 : 7;  // 0x1012 (0x1012)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x1012 (0x1012)
	char pad_4115_1 : 7;  // 0x1013 (0x1013)
	bool CallFunc_IsInFirstPersonPerspective_ReturnValue : 1;  // 0x1013 (0x1013)
	char pad_4116_1 : 7;  // 0x1014 (0x1014)
	bool CallFunc_IsInFirstPersonPerspective_ReturnValue_2 : 1;  // 0x1014 (0x1014)
	char pad_4117[3];  // 0x1015 (0x1015)
	struct AActor* K2Node_Event_Interacter_3;  // 0x1018 (0x1018)
	struct UPrimitiveComponent* K2Node_Event_InteractPart;  // 0x1020 (0x1020)
	struct AActor* K2Node_Event_Interacter_2;  // 0x1028 (0x1028)
	struct AActor* K2Node_Event_Interacter;  // 0x1030 (0x1030)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x1038 (0x1038)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x1040 (0x1040)
	struct FHitResult K2Node_Event_HitResult;  // 0x1048 (0x1048)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x1130 (0x1130)
	struct FMsgAddLooter K2Node_MakeStruct_MsgAddLooter;  // 0x1148 (0x1148)
	char pad_4688_1 : 7;  // 0x1250 (0x1250)
	bool CallFunc_MatchesTag_ReturnValue : 1;  // 0x1250 (0x1250)
	char pad_4689[7];  // 0x1251 (0x1251)
	struct FVector CallFunc_GetSocketLocation_ReturnValue;  // 0x1258 (0x1258)
	struct FVector CallFunc_GetSocketLocation_ReturnValue_2;  // 0x1270 (0x1270)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue;  // 0x1288 (0x1288)
	char pad_4768_1 : 7;  // 0x12A0 (0x12A0)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_3 : 1;  // 0x12A0 (0x12A0)
	char pad_4769[7];  // 0x12A1 (0x12A1)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x12A8 (0x12A8)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x12C0 (0x12C0)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue_2;  // 0x12D8 (0x12D8)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue_3;  // 0x12F0 (0x12F0)
	struct FVector CallFunc_GetSocketLocation_ReturnValue_3;  // 0x1308 (0x1308)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue_2;  // 0x1320 (0x1320)
	struct FVector CallFunc_GetSocketLocation_ReturnValue_4;  // 0x1338 (0x1338)
	char pad_4944_1 : 7;  // 0x1350 (0x1350)
	bool K2Node_CustomEvent_bValue : 1;  // 0x1350 (0x1350)
	char pad_4945[7];  // 0x1351 (0x1351)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue_3;  // 0x1358 (0x1358)
	char pad_4976_1 : 7;  // 0x1370 (0x1370)
	bool CallFunc_HasAuthority_ReturnValue_2 : 1;  // 0x1370 (0x1370)
	char pad_4977[7];  // 0x1371 (0x1371)
	struct TArray<struct AActor*> CallFunc_GetAttachedActors_OutActors;  // 0x1378 (0x1378)
	struct AActor* CallFunc_Array_Get_Item;  // 0x1388 (0x1388)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x1390 (0x1390)
	char pad_5012[4];  // 0x1394 (0x1394)
	struct TArray<struct USkeletalMeshComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue;  // 0x1398 (0x1398)
	struct USkeletalMeshComponent* CallFunc_Array_Get_Item_2;  // 0x13A8 (0x13A8)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x13B0 (0x13B0)
	char pad_5044_1 : 7;  // 0x13B4 (0x13B4)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x13B4 (0x13B4)
	char pad_5045[3];  // 0x13B5 (0x13B5)
	struct TArray<struct UItem*> CallFunc_GetItemsBySlotType_ReturnValue;  // 0x13B8 (0x13B8)
	struct UItem* CallFunc_Array_Get_Item_3;  // 0x13C8 (0x13C8)
	int32_t CallFunc_Array_Length_ReturnValue_3;  // 0x13D0 (0x13D0)
	char pad_5076_1 : 7;  // 0x13D4 (0x13D4)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x13D4 (0x13D4)
	char pad_5077_1 : 7;  // 0x13D5 (0x13D5)
	bool CallFunc_PlaySoundWithSwitch_ReturnValue : 1;  // 0x13D5 (0x13D5)
	char pad_5078[10];  // 0x13D6 (0x13D6)
	struct FTransform CallFunc_MakeTransform_ReturnValue;  // 0x13E0 (0x13E0)
	char pad_5184_1 : 7;  // 0x1440 (0x1440)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_4 : 1;  // 0x1440 (0x1440)
	char pad_5185[7];  // 0x1441 (0x1441)
	struct AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;  // 0x1448 (0x1448)
	struct TScriptInterface<IBaseInterface> CallFunc_BindMsgNode_BaseInterface_CastInput;  // 0x1450 (0x1450)
	struct UBindMsgNode* CallFunc_BindMsgNode_ReturnValue;  // 0x1460 (0x1460)
	char pad_5224_1 : 7;  // 0x1468 (0x1468)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x1468 (0x1468)
	char pad_5225[7];  // 0x1469 (0x1469)
	struct ABP_FootTrace_C* CallFunc_FinishSpawningActor_ReturnValue;  // 0x1470 (0x1470)
	struct TArray<struct AActor*> Temp_object_Variable_3;  // 0x1478 (0x1478)
	struct TScriptInterface<IBaseInterface> CallFunc_BindMsgNode_BaseInterface_CastInput_2;  // 0x1488 (0x1488)
	struct UBindMsgNode* CallFunc_BindMsgNode_ReturnValue_2;  // 0x1498 (0x1498)
	struct FHitResult CallFunc_LineTraceSingle_OutHit;  // 0x14A0 (0x14A0)
	char pad_5512_1 : 7;  // 0x1588 (0x1588)
	bool CallFunc_LineTraceSingle_ReturnValue : 1;  // 0x1588 (0x1588)
	char pad_5513_1 : 7;  // 0x1589 (0x1589)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x1589 (0x1589)
	char pad_5514_1 : 7;  // 0x158A (0x158A)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x158A (0x158A)
	char pad_5515[1];  // 0x158B (0x158B)
	float CallFunc_BreakHitResult_Time;  // 0x158C (0x158C)
	float CallFunc_BreakHitResult_Distance;  // 0x1590 (0x1590)
	char pad_5524[4];  // 0x1594 (0x1594)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x1598 (0x1598)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x15B0 (0x15B0)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x15C8 (0x15C8)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x15E0 (0x15E0)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x15F8 (0x15F8)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x1600 (0x1600)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x1608 (0x1608)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x1610 (0x1610)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x1618 (0x1618)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x1620 (0x1620)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x1624 (0x1624)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x1628 (0x1628)
	char pad_5676[4];  // 0x162C (0x162C)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x1630 (0x1630)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x1648 (0x1648)
	struct FTransform CallFunc_MakeTransform_ReturnValue_2;  // 0x1660 (0x1660)
	struct AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2;  // 0x16C0 (0x16C0)
	char pad_5832_1 : 7;  // 0x16C8 (0x16C8)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x16C8 (0x16C8)
	char pad_5833[7];  // 0x16C9 (0x16C9)
	struct ABP_FootTrace_C* CallFunc_FinishSpawningActor_ReturnValue_2;  // 0x16D0 (0x16D0)
	struct TArray<struct AActor*> Temp_object_Variable_4;  // 0x16D8 (0x16D8)
	struct FHitResult CallFunc_LineTraceSingle_OutHit_2;  // 0x16E8 (0x16E8)
	char pad_6096_1 : 7;  // 0x17D0 (0x17D0)
	bool CallFunc_LineTraceSingle_ReturnValue_2 : 1;  // 0x17D0 (0x17D0)
	char pad_6097_1 : 7;  // 0x17D1 (0x17D1)
	bool CallFunc_HasLocalCurrentCharacterEnhancedHearing_HasEnhancedHearing : 1;  // 0x17D1 (0x17D1)
	char pad_6098_1 : 7;  // 0x17D2 (0x17D2)
	bool CallFunc_BreakHitResult_bBlockingHit_2 : 1;  // 0x17D2 (0x17D2)
	char pad_6099_1 : 7;  // 0x17D3 (0x17D3)
	bool CallFunc_BreakHitResult_bInitialOverlap_2 : 1;  // 0x17D3 (0x17D3)
	float CallFunc_BreakHitResult_Time_2;  // 0x17D4 (0x17D4)
	float CallFunc_BreakHitResult_Distance_2;  // 0x17D8 (0x17D8)
	char pad_6108[4];  // 0x17DC (0x17DC)
	struct FVector CallFunc_BreakHitResult_Location_2;  // 0x17E0 (0x17E0)
	struct FVector CallFunc_BreakHitResult_ImpactPoint_2;  // 0x17F8 (0x17F8)
	struct FVector CallFunc_BreakHitResult_Normal_2;  // 0x1810 (0x1810)
	struct FVector CallFunc_BreakHitResult_ImpactNormal_2;  // 0x1828 (0x1828)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2;  // 0x1840 (0x1840)
	struct AActor* CallFunc_BreakHitResult_HitActor_2;  // 0x1848 (0x1848)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2;  // 0x1850 (0x1850)
	struct FName CallFunc_BreakHitResult_HitBoneName_2;  // 0x1858 (0x1858)
	struct FName CallFunc_BreakHitResult_BoneName_2;  // 0x1860 (0x1860)
	int32_t CallFunc_BreakHitResult_HitItem_2;  // 0x1868 (0x1868)
	int32_t CallFunc_BreakHitResult_ElementIndex_2;  // 0x186C (0x186C)
	int32_t CallFunc_BreakHitResult_FaceIndex_2;  // 0x1870 (0x1870)
	char pad_6260[4];  // 0x1874 (0x1874)
	struct FVector CallFunc_BreakHitResult_TraceStart_2;  // 0x1878 (0x1878)
	struct FVector CallFunc_BreakHitResult_TraceEnd_2;  // 0x1890 (0x1890)
	char pad_6312_1 : 7;  // 0x18A8 (0x18A8)
	bool CallFunc_HasLocalCurrentCharacterEnhancedHearing_HasEnhancedHearing_2 : 1;  // 0x18A8 (0x18A8)
	char pad_6313[7];  // 0x18A9 (0x18A9)
	struct TArray<struct AActor*> Temp_object_Variable_5;  // 0x18B0 (0x18B0)
	struct FHitResult CallFunc_LineTraceSingle_OutHit_3;  // 0x18C0 (0x18C0)
	char pad_6568_1 : 7;  // 0x19A8 (0x19A8)
	bool CallFunc_LineTraceSingle_ReturnValue_3 : 1;  // 0x19A8 (0x19A8)
	char pad_6569_1 : 7;  // 0x19A9 (0x19A9)
	bool CallFunc_BreakHitResult_bBlockingHit_3 : 1;  // 0x19A9 (0x19A9)
	char pad_6570_1 : 7;  // 0x19AA (0x19AA)
	bool CallFunc_BreakHitResult_bInitialOverlap_3 : 1;  // 0x19AA (0x19AA)
	char pad_6571[1];  // 0x19AB (0x19AB)
	float CallFunc_BreakHitResult_Time_3;  // 0x19AC (0x19AC)
	float CallFunc_BreakHitResult_Distance_3;  // 0x19B0 (0x19B0)
	char pad_6580[4];  // 0x19B4 (0x19B4)
	struct FVector CallFunc_BreakHitResult_Location_3;  // 0x19B8 (0x19B8)
	struct FVector CallFunc_BreakHitResult_ImpactPoint_3;  // 0x19D0 (0x19D0)
	struct FVector CallFunc_BreakHitResult_Normal_3;  // 0x19E8 (0x19E8)
	struct FVector CallFunc_BreakHitResult_ImpactNormal_3;  // 0x1A00 (0x1A00)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_3;  // 0x1A18 (0x1A18)
	struct AActor* CallFunc_BreakHitResult_HitActor_3;  // 0x1A20 (0x1A20)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_3;  // 0x1A28 (0x1A28)
	struct FName CallFunc_BreakHitResult_HitBoneName_3;  // 0x1A30 (0x1A30)
	struct FName CallFunc_BreakHitResult_BoneName_3;  // 0x1A38 (0x1A38)
	int32_t CallFunc_BreakHitResult_HitItem_3;  // 0x1A40 (0x1A40)
	int32_t CallFunc_BreakHitResult_ElementIndex_3;  // 0x1A44 (0x1A44)
	int32_t CallFunc_BreakHitResult_FaceIndex_3;  // 0x1A48 (0x1A48)
	char pad_6732[4];  // 0x1A4C (0x1A4C)
	struct FVector CallFunc_BreakHitResult_TraceStart_3;  // 0x1A50 (0x1A50)
	struct FVector CallFunc_BreakHitResult_TraceEnd_3;  // 0x1A68 (0x1A68)
	struct APlayerController* K2Node_Event_InPlayerController;  // 0x1A80 (0x1A80)
	char pad_6792_1 : 7;  // 0x1A88 (0x1A88)
	bool K2Node_Event_bInIsFirstPersonPerspective : 1;  // 0x1A88 (0x1A88)
	char pad_6793[7];  // 0x1A89 (0x1A89)
	struct FTransform CallFunc_MakeTransform_ReturnValue_3;  // 0x1A90 (0x1A90)
	struct AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3;  // 0x1AF0 (0x1AF0)
	struct ABP_FootTrace_C* CallFunc_FinishSpawningActor_ReturnValue_3;  // 0x1AF8 (0x1AF8)
	char pad_6912_1 : 7;  // 0x1B00 (0x1B00)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x1B00 (0x1B00)
	char pad_6913[3];  // 0x1B01 (0x1B01)
	struct FPrimaryAssetId K2Node_CustomEvent_ScriptAseetId;  // 0x1B04 (0x1B04)
	char pad_6932[4];  // 0x1B14 (0x1B14)
	struct FVector K2Node_CustomEvent_Location;  // 0x1B18 (0x1B18)
	struct AController* CallFunc_GetController_ReturnValue;  // 0x1B30 (0x1B30)
	struct FMsgWidgetCommemorativePlaqueTextNotify K2Node_MakeStruct_MsgWidgetCommemorativePlaqueTextNotify;  // 0x1B38 (0x1B38)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface;  // 0x1B78 (0x1B78)
	char pad_7048_1 : 7;  // 0x1B88 (0x1B88)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x1B88 (0x1B88)
	char pad_7049[7];  // 0x1B89 (0x1B89)
	struct FMsgWidgetGameGroupToggleRequest K2Node_MakeStruct_MsgWidgetGameGroupToggleRequest;  // 0x1B90 (0x1B90)
	char pad_7088_1 : 7;  // 0x1BB0 (0x1BB0)
	bool CallFunc_PlaySoundWithTag_ReturnValue : 1;  // 0x1BB0 (0x1BB0)
	char pad_7089_1 : 7;  // 0x1BB1 (0x1BB1)
	bool CallFunc_IsSoundPlayable_ReturnValue : 1;  // 0x1BB1 (0x1BB1)
	char pad_7090[2];  // 0x1BB2 (0x1BB2)
	int32_t Temp_int_Loop_Counter_Variable_2;  // 0x1BB4 (0x1BB4)
	struct FMsgGASActorDieNotify K2Node_Event_InMsg;  // 0x1BB8 (0x1BB8)
	char pad_7608_1 : 7;  // 0x1DB8 (0x1DB8)
	bool CallFunc_Less_IntInt_ReturnValue_2 : 1;  // 0x1DB8 (0x1DB8)
	char pad_7609[3];  // 0x1DB9 (0x1DB9)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x1DBC (0x1DBC)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x1DC0 (0x1DC0)
	int32_t K2Node_Event_InCount;  // 0x1DC8 (0x1DC8)
	char pad_7628_1 : 7;  // 0x1DCC (0x1DCC)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x1DCC (0x1DCC)
	char pad_7629_1 : 7;  // 0x1DCD (0x1DCD)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_5 : 1;  // 0x1DCD (0x1DCD)


}; 
 
 // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCameraComponent
// Size: 0x8(Inherited: 0x8)
struct FGetCameraComponent : FGetCameraComponent
{
	struct UCameraComponent* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCommemorativePlaqueText
struct FOnCommemorativePlaqueText
{
	struct FPrimaryAssetId ScriptAseetId;  // 0x0 (0x0)
	struct FVector Location;  // 0x10 (0x10)


}; 
 
 // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnFMsgGASActorDieNotifyBlueprint
// Size: 0x200(Inherited: 0x200)
struct FOnFMsgGASActorDieNotifyBlueprint : FOnFMsgGASActorDieNotifyBlueprint
{
	struct FMsgGASActorDieNotify InMsg;  // 0x0 (0x0)


}; 
 
 // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnMessageReceived_EA0BB1014365DB5602FF2A88319323AC
struct FOnMessageReceived_EA0BB1014365DB5602FF2A88319323AC
{
	struct UMsgBaseNode* ProxyObject;  // 0x0 (0x0)


}; 
 
 // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnMessageReceived_E32555534626CD303291009A607703E1
struct FOnMessageReceived_E32555534626CD303291009A607703E1
{
	struct UMsgBaseNode* ProxyObject;  // 0x0 (0x0)


}; 
 
 // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnPhantomize
struct FOnPhantomize
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsActivate : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FName MeshCollisionProfile;  // 0x4 (0x4)
	struct FName HitBoxCollisionProfile;  // 0xC (0xC)
	struct FName CapsuleCollisionProfile;  // 0x14 (0x14)
	int32_t Temp_int_Array_Index_Variable;  // 0x1C (0x1C)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x20 (0x20)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x24 (0x24)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x28 (0x28)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)
	struct FName CallFunc_GetCollisionProfileName_ReturnValue;  // 0x3C (0x3C)
	char pad_68_1 : 7;  // 0x44 (0x44)
	bool CallFunc_EqualEqual_NameName_ReturnValue : 1;  // 0x44 (0x44)
	char pad_69[3];  // 0x45 (0x45)
	struct TArray<struct UDCHitBoxComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue;  // 0x48 (0x48)
	struct UDCHitBoxComponent* CallFunc_Array_Get_Item;  // 0x58 (0x58)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x60 (0x60)
	char pad_100_1 : 7;  // 0x64 (0x64)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x64 (0x64)


}; 
 
 // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSetPerspective
// Size: 0x9(Inherited: 0x10)
struct FOnSetPerspective : FOnSetPerspective
{
	struct APlayerController* InPlayerController;  // 0x0 (0x0)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bInIsFirstPersonPerspective : 1;  // 0x8 (0x8)


}; 
 
 // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSetRenderCustomDepth
struct FOnSetRenderCustomDepth
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bValue : 1;  // 0x0 (0x0)


}; 
 
 // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetRTPCValuePlayerSpeed
struct FSetRTPCValuePlayerSpeed
{
	struct FGameplayTagContainer CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;  // 0x0 (0x0)
	struct FGameplayTagContainer CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_2;  // 0x20 (0x20)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_self_CastInput;  // 0x40 (0x40)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool CallFunc_HasAllMatchingGameplayTags_ReturnValue : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput;  // 0x58 (0x58)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue : 1;  // 0x68 (0x68)
	char pad_105[3];  // 0x69 (0x69)
	float CallFunc_SetRTPCValue_Value_ImplicitCast;  // 0x6C (0x6C)


}; 
 
 