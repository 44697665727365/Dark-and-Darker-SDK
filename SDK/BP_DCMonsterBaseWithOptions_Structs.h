#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.IgnoreSignalFromMe
struct FIgnoreSignalFromMe
{
	struct UDCGameObjectLinkComponent* DCGame Link Object;  // 0x0 (0x0)
	struct FObjectLinkRequestEvent Recv Event;  // 0x8 (0x8)
	struct UObjectLinkMetaDataBlueprint* Send Event Param;  // 0xB8 (0xB8)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool Result : 1;  // 0xC0 (0xC0)
	char pad_193_1 : 7;  // 0xC1 (0xC1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xC1 (0xC1)
	char pad_194_1 : 7;  // 0xC2 (0xC2)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue : 1;  // 0xC2 (0xC2)
	char pad_195[5];  // 0xC3 (0xC3)
	struct TArray<struct FGameplayTag> K2Node_MakeArray_Array;  // 0xC8 (0xC8)
	struct FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;  // 0xD8 (0xD8)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool CallFunc_DoesContainerMatchTagQuery_ReturnValue : 1;  // 0xF8 (0xF8)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Check Combat To Comeback
struct FCheck Combat To Comeback
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool CallFunc_Get_And_Compare_To_BlackBoard_Mode_Result : 1;  // 0x1 (0x1)
	char pad_2[2];  // 0x2 (0x2)
	int32_t CallFunc_Get_Number_Of_Active_Players_In_Combat_Area_Number_Of_Players;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x8 (0x8)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.BndEvt__BP_DCMonsterBaseWithOptions_Impactable_K2Node_ComponentBoundEvent_0_ImpactEnduranceExhausted__DelegateSignature
struct FBndEvt__BP_DCMonsterBaseWithOptions_Impactable_K2Node_ComponentBoundEvent_0_ImpactEnduranceExhausted__DelegateSignature
{
	float ExhaustedTime;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	UGameplayEffect* GameplayEffectClass;  // 0x8 (0x8)
	struct FDCGameplayEffectContext EffectContext;  // 0x10 (0x10)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.BndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature
struct FBndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature
{
	struct FObjectLinkRequestEvent RecvEvent;  // 0x0 (0x0)
	struct UObjectLinkMetaDataBlueprint* SendEventParam;  // 0xB0 (0xB0)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnApplied_227A852046B3B9DACFFBA5ABA7D2A95E
struct FOnApplied_227A852046B3B9DACFFBA5ABA7D2A95E
{
	struct AActor* Source;  // 0x0 (0x0)
	struct FGameplayEffectSpecHandle SpecHandle;  // 0x8 (0x8)
	struct FActiveGameplayEffectHandle ActiveHandle;  // 0x18 (0x18)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.ExecuteUbergraph_BP_DCMonsterBaseWithOptions
struct FExecuteUbergraph_BP_DCMonsterBaseWithOptions
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x14 (0x14)
	int32_t Temp_int_Array_Index_Variable;  // 0x24 (0x24)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x28 (0x28)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x38 (0x38)
	float K2Node_ComponentBoundEvent_ExhaustedTime;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)
	UGameplayEffect* K2Node_ComponentBoundEvent_GameplayEffectClass;  // 0x48 (0x48)
	struct FDCGameplayEffectContext K2Node_ComponentBoundEvent_EffectContext;  // 0x50 (0x50)
	char pad_552_1 : 7;  // 0x228 (0x228)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x228 (0x228)
	char pad_553[7];  // 0x229 (0x229)
	struct FObjectLinkMetaData K2Node_MakeStruct_ObjectLinkMetaData;  // 0x230 (0x230)
	char pad_648[8];  // 0x288 (0x288)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x290 (0x290)
	struct FObjectLinkRequestEvent K2Node_MakeStruct_ObjectLinkRequestEvent;  // 0x2F0 (0x2F0)
	struct TArray<struct FObjectLinkResponeEvent> CallFunc_RequestToLinkers_ReturnValue;  // 0x3A0 (0x3A0)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x3B0 (0x3B0)
	int32_t K2Node_Event_InCount;  // 0x3B8 (0x3B8)
	char pad_956_1 : 7;  // 0x3BC (0x3BC)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x3BC (0x3BC)
	char pad_957_1 : 7;  // 0x3BD (0x3BD)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x3BD (0x3BD)
	char pad_958_1 : 7;  // 0x3BE (0x3BE)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x3BE (0x3BE)
	char pad_959[1];  // 0x3BF (0x3BF)
	struct TArray<struct FPrimaryAssetId> K2Node_MakeArray_Array;  // 0x3C0 (0x3C0)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue;  // 0x3D0 (0x3D0)
	char pad_992_1 : 7;  // 0x3E0 (0x3E0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x3E0 (0x3E0)
	char pad_993[7];  // 0x3E1 (0x3E1)
	struct UAbilityAsync_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue;  // 0x3E8 (0x3E8)
	char pad_1008_1 : 7;  // 0x3F0 (0x3F0)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x3F0 (0x3F0)
	char pad_1009[7];  // 0x3F1 (0x3F1)
	struct AController* K2Node_Event_NewController;  // 0x3F8 (0x3F8)
	char pad_1024_1 : 7;  // 0x400 (0x400)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x400 (0x400)
	char pad_1025[7];  // 0x401 (0x401)
	struct UAnimInstance* CallFunc_GetAnimInstance_ReturnValue;  // 0x408 (0x408)
	struct FVector CallFunc_Conv_FloatToVector_ReturnValue;  // 0x410 (0x410)
	char pad_1064_1 : 7;  // 0x428 (0x428)
	bool CallFunc_IsAnyMontagePlaying_ReturnValue : 1;  // 0x428 (0x428)
	char pad_1065[3];  // 0x429 (0x429)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x42C (0x42C)
	char pad_1076[4];  // 0x434 (0x434)
	struct UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2;  // 0x438 (0x438)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2;  // 0x440 (0x440)
	int32_t CallFunc_Get_Number_Of_Active_Players_In_Recognition_Area_Number_Of_Players;  // 0x448 (0x448)
	char pad_1100_1 : 7;  // 0x44C (0x44C)
	bool CallFunc_Greater_IntInt_ReturnValue_2 : 1;  // 0x44C (0x44C)
	char pad_1101[3];  // 0x44D (0x44D)
	struct AAIController* CallFunc_GetAIController_ReturnValue;  // 0x450 (0x450)
	struct UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue;  // 0x458 (0x458)
	struct UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue;  // 0x460 (0x460)
	char pad_1128_1 : 7;  // 0x468 (0x468)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x468 (0x468)
	char pad_1129[7];  // 0x469 (0x469)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x470 (0x470)
	double CallFunc_Vector_Distance_ReturnValue;  // 0x488 (0x488)
	char pad_1168_1 : 7;  // 0x490 (0x490)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0x490 (0x490)
	char pad_1169[3];  // 0x491 (0x491)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x494 (0x494)
	char pad_1188_1 : 7;  // 0x4A4 (0x4A4)
	bool CallFunc_HasAuthority_ReturnValue_2 : 1;  // 0x4A4 (0x4A4)
	char pad_1189[3];  // 0x4A5 (0x4A5)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x4A8 (0x4A8)
	struct FObjectLinkRequestEvent K2Node_MakeStruct_ObjectLinkRequestEvent_2;  // 0x4B0 (0x4B0)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x560 (0x560)
	char pad_1380_1 : 7;  // 0x564 (0x564)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x564 (0x564)
	char pad_1381[3];  // 0x565 (0x565)
	struct FObjectLinkRequestEvent K2Node_MakeStruct_ObjectLinkRequestEvent_3;  // 0x568 (0x568)
	char pad_1560_1 : 7;  // 0x618 (0x618)
	bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute : 1;  // 0x618 (0x618)
	char pad_1561[3];  // 0x619 (0x619)
	float CallFunc_GetFloatAttribute_ReturnValue;  // 0x61C (0x61C)
	struct AAIController* CallFunc_GetAIController_ReturnValue_2;  // 0x620 (0x620)
	struct UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue;  // 0x628 (0x628)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_5;  // 0x630 (0x630)
	float CallFunc_GetSightRange_ReturnValue;  // 0x640 (0x640)
	char pad_1604[4];  // 0x644 (0x644)
	struct FMsgGASAttributeNotify K2Node_Event_InMsg;  // 0x648 (0x648)
	char pad_2848_1 : 7;  // 0xB20 (0xB20)
	bool CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue : 1;  // 0xB20 (0xB20)
	char pad_2849[3];  // 0xB21 (0xB21)
	int32_t CallFunc_Get_Number_Of_Active_Players_In_Combat_Area_Number_Of_Players;  // 0xB24 (0xB24)
	char pad_2856_1 : 7;  // 0xB28 (0xB28)
	bool CallFunc_Greater_IntInt_ReturnValue_3 : 1;  // 0xB28 (0xB28)
	char pad_2857_1 : 7;  // 0xB29 (0xB29)
	bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_2 : 1;  // 0xB29 (0xB29)
	char pad_2858[2];  // 0xB2A (0xB2A)
	float CallFunc_GetFloatAttribute_ReturnValue_2;  // 0xB2C (0xB2C)
	char pad_2864_1 : 7;  // 0xB30 (0xB30)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0xB30 (0xB30)
	char pad_2865_1 : 7;  // 0xB31 (0xB31)
	bool CallFunc_Get_And_Compare_To_BlackBoard_Mode_Result : 1;  // 0xB31 (0xB31)
	char pad_2866[6];  // 0xB32 (0xB32)
	struct TArray<struct FPrimaryAssetId> K2Node_MakeArray_Array_2;  // 0xB38 (0xB38)
	char pad_2888_1 : 7;  // 0xB48 (0xB48)
	bool CallFunc_HasAuthority_ReturnValue_3 : 1;  // 0xB48 (0xB48)
	char pad_2889[7];  // 0xB49 (0xB49)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue_2;  // 0xB50 (0xB50)
	char pad_2912_1 : 7;  // 0xB60 (0xB60)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0xB60 (0xB60)
	char pad_2913_1 : 7;  // 0xB61 (0xB61)
	bool K2Node_SwitchEnum_CmpSuccess_2 : 1;  // 0xB61 (0xB61)
	char pad_2914_1 : 7;  // 0xB62 (0xB62)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0xB62 (0xB62)
	char pad_2915_1 : 7;  // 0xB63 (0xB63)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue_2 : 1;  // 0xB63 (0xB63)
	char pad_2916_1 : 7;  // 0xB64 (0xB64)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue_3 : 1;  // 0xB64 (0xB64)
	char pad_2917[3];  // 0xB65 (0xB65)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_6;  // 0xB68 (0xB68)
	struct TArray<struct FObjectLinkResponeEvent> CallFunc_RequestToLinkers_ReturnValue_2;  // 0xB78 (0xB78)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_2;  // 0xB88 (0xB88)
	enum class EPathFollowingResult Temp_byte_Variable;  // 0xB90 (0xB90)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult;  // 0xB91 (0xB91)
	char pad_2962[6];  // 0xB92 (0xB92)
	struct FHitResult CallFunc_K2_SetActorTransform_SweepHitResult;  // 0xB98 (0xB98)
	char pad_3200_1 : 7;  // 0xC80 (0xC80)
	bool CallFunc_K2_SetActorTransform_ReturnValue : 1;  // 0xC80 (0xC80)
	char pad_3201_1 : 7;  // 0xC81 (0xC81)
	bool CallFunc_HasAuthority_ReturnValue_4 : 1;  // 0xC81 (0xC81)
	char pad_3202[6];  // 0xC82 (0xC82)
	struct UAbilityAsync_WaitGameplayEffectApplied* CallFunc_WaitGameplayEffectAppliedToActor_ReturnValue;  // 0xC88 (0xC88)
	char pad_3216_1 : 7;  // 0xC90 (0xC90)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0xC90 (0xC90)
	char pad_3217[7];  // 0xC91 (0xC91)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0xC98 (0xC98)
	char pad_3240_1 : 7;  // 0xCA8 (0xCA8)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_2 : 1;  // 0xCA8 (0xCA8)
	char pad_3241_1 : 7;  // 0xCA9 (0xCA9)
	bool CallFunc_RemoveGameplayTag_ReturnValue : 1;  // 0xCA9 (0xCA9)
	char pad_3242_1 : 7;  // 0xCAA (0xCAA)
	bool CallFunc_HasAuthority_ReturnValue_5 : 1;  // 0xCAA (0xCAA)
	char pad_3243[1];  // 0xCAB (0xCAB)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_7;  // 0xCAC (0xCAC)
	char pad_3260[4];  // 0xCBC (0xCBC)
	struct AActor* Temp_object_Variable;  // 0xCC0 (0xCC0)
	char pad_3272_1 : 7;  // 0xCC8 (0xCC8)
	bool CallFunc_HasAuthority_ReturnValue_6 : 1;  // 0xCC8 (0xCC8)
	char pad_3273[7];  // 0xCC9 (0xCC9)
	struct TArray<struct FObjectLinkResponeEvent> CallFunc_RequestToLinkers_ReturnValue_3;  // 0xCD0 (0xCD0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_8;  // 0xCE0 (0xCE0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_9;  // 0xCF0 (0xCF0)
	struct FObjectLinkRequestEvent K2Node_ComponentBoundEvent_RecvEvent;  // 0xD00 (0xD00)
	struct UObjectLinkMetaDataBlueprint* K2Node_ComponentBoundEvent_SendEventParam;  // 0xDB0 (0xDB0)
	int32_t CallFunc_FTrunc_ReturnValue;  // 0xDB8 (0xDB8)
	char pad_3516[4];  // 0xDBC (0xDBC)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0xDC0 (0xDC0)
	char pad_3528_1 : 7;  // 0xDC8 (0xDC8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xDC8 (0xDC8)
	char pad_3529_1 : 7;  // 0xDC9 (0xDC9)
	bool K2Node_SwitchInteger_CmpSuccess : 1;  // 0xDC9 (0xDC9)
	char pad_3530[2];  // 0xDCA (0xDCA)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0xDCC (0xDCC)
	struct FGameplayEffectSpecHandle Temp_struct_Variable;  // 0xDD0 (0xDD0)
	char pad_3552_1 : 7;  // 0xDE0 (0xDE0)
	bool CallFunc_Get_Instigator_From_Added_Tag_Result : 1;  // 0xDE0 (0xDE0)
	char pad_3553[7];  // 0xDE1 (0xDE1)
	struct AActor* CallFunc_Get_Instigator_From_Added_Tag_Instigator;  // 0xDE8 (0xDE8)
	char pad_3568_1 : 7;  // 0xDF0 (0xDF0)
	bool CallFunc_Get_Instigator_From_Added_Tag_Result_2 : 1;  // 0xDF0 (0xDF0)
	char pad_3569[7];  // 0xDF1 (0xDF1)
	struct AActor* CallFunc_Get_Instigator_From_Added_Tag_Instigator_2;  // 0xDF8 (0xDF8)
	struct FActiveGameplayEffectHandle Temp_struct_Variable_2;  // 0xE00 (0xE00)
	struct AActor* K2Node_CustomEvent_Source;  // 0xE08 (0xE08)
	struct FGameplayEffectSpecHandle K2Node_CustomEvent_SpecHandle;  // 0xE10 (0xE10)
	struct FActiveGameplayEffectHandle K2Node_CustomEvent_ActiveHandle;  // 0xE20 (0xE20)
	char pad_3624_1 : 7;  // 0xE28 (0xE28)
	bool CallFunc_HasAuthority_ReturnValue_7 : 1;  // 0xE28 (0xE28)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_2;  // 0xE29 (0xE29)
	char pad_3626[2];  // 0xE2A (0xE2A)
	int32_t Temp_int_Loop_Counter_Variable;  // 0xE2C (0xE2C)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0xE30 (0xE30)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_10;  // 0xE34 (0xE34)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_11;  // 0xE44 (0xE44)
	char pad_3668_1 : 7;  // 0xE54 (0xE54)
	bool CallFunc_SetModeGameplayTag_ReturnValue : 1;  // 0xE54 (0xE54)
	char pad_3669_1 : 7;  // 0xE55 (0xE55)
	bool CallFunc_NotEqual_ByteByte_ReturnValue : 1;  // 0xE55 (0xE55)
	char pad_3670[2];  // 0xE56 (0xE56)
	struct ADCCharacterBase* K2Node_Event_InTarget;  // 0xE58 (0xE58)
	struct FObjectLinkMetaData K2Node_MakeStruct_ObjectLinkMetaData_2;  // 0xE60 (0xE60)
	struct FObjectLinkRequestEvent K2Node_MakeStruct_ObjectLinkRequestEvent_4;  // 0xEB8 (0xEB8)
	struct ABP_DCMonsterBaseWithOptions_C* CallFunc_Array_Get_Item;  // 0xF68 (0xF68)
	struct TArray<struct FObjectLinkResponeEvent> CallFunc_RequestToLinkers_ReturnValue_4;  // 0xF70 (0xF70)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0xF80 (0xF80)
	char pad_3972_1 : 7;  // 0xF84 (0xF84)
	bool CallFunc_Array_Contains_ReturnValue : 1;  // 0xF84 (0xF84)
	char pad_3973_1 : 7;  // 0xF85 (0xF85)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0xF85 (0xF85)
	enum class EPathFollowingResult Temp_byte_Variable_2;  // 0xF86 (0xF86)
	char pad_3975_1 : 7;  // 0xF87 (0xF87)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_3 : 1;  // 0xF87 (0xF87)
	char pad_3976_1 : 7;  // 0xF88 (0xF88)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_4 : 1;  // 0xF88 (0xF88)
	char pad_3977_1 : 7;  // 0xF89 (0xF89)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0xF89 (0xF89)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_3;  // 0xF8A (0xF8A)
	char pad_3979[1];  // 0xF8B (0xF8B)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_12;  // 0xF8C (0xF8C)
	char pad_3996[4];  // 0xF9C (0xF9C)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0xFA0 (0xFA0)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_3;  // 0xFB8 (0xFB8)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_4;  // 0xFD0 (0xFD0)
	char pad_4049[7];  // 0xFD1 (0xFD1)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_4;  // 0xFD8 (0xFD8)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0xFF0 (0xFF0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_13;  // 0x1008 (0x1008)
	struct FVector CallFunc_GetForwardVector_ReturnValue;  // 0x1018 (0x1018)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_14;  // 0x1030 (0x1030)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x1040 (0x1040)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_15;  // 0x1058 (0x1058)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x1068 (0x1068)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_16;  // 0x1080 (0x1080)
	struct UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue_2;  // 0x1090 (0x1090)
	char pad_4248_1 : 7;  // 0x1098 (0x1098)
	bool CallFunc_IsValid_ReturnValue_5 : 1;  // 0x1098 (0x1098)
	char pad_4249[3];  // 0x1099 (0x1099)
	int32_t Temp_int_Variable;  // 0x109C (0x109C)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_17;  // 0x10A0 (0x10A0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_18;  // 0x10B0 (0x10B0)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_3;  // 0x10C0 (0x10C0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_19;  // 0x10C8 (0x10C8)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_4;  // 0x10D8 (0x10D8)
	double CallFunc_Less_DoubleDouble_B_ImplicitCast;  // 0x10E0 (0x10E0)
	double K2Node_VariableSet_Default_Sight_Range_ImplicitCast;  // 0x10E8 (0x10E8)
	double CallFunc_Less_DoubleDouble_A_ImplicitCast;  // 0x10F0 (0x10F0)
	double CallFunc_FTrunc_A_ImplicitCast;  // 0x10F8 (0x10F8)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnFail_21CEDD05472CF8AA4A07758D48F80F14
struct FOnFail_21CEDD05472CF8AA4A07758D48F80F14
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Check Peace To Combat
struct FCheck Peace To Combat
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool CallFunc_Get_And_Compare_To_BlackBoard_Mode_Result : 1;  // 0x1 (0x1)
	char pad_2[2];  // 0x2 (0x2)
	int32_t CallFunc_Get_Number_Of_Active_Players_In_Recognition_Area_Number_Of_Players;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x8 (0x8)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnSuccess_21CEDD05472CF8AA4A07758D48F80F14
struct FOnSuccess_21CEDD05472CF8AA4A07758D48F80F14
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GetBBTargetActor
struct FGetBBTargetActor
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct UObject* Return Value;  // 0x8 (0x8)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x10 (0x10)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x18 (0x18)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x28 (0x28)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GetBBTargetActorToCharacterBase
struct FGetBBTargetActorToCharacterBase
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct ADCCharacterBase* As DCCharacter Base;  // 0x8 (0x8)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x10 (0x10)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x18 (0x18)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x20 (0x20)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x30 (0x30)
	char pad_49_1 : 7;  // 0x31 (0x31)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x31 (0x31)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GetBBTargetActorToMonsterBase
struct FGetBBTargetActorToMonsterBase
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct ABP_DCMonsterBaseWithOptions_C* DCMonsterBaseWithOptions;  // 0x8 (0x8)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x10 (0x10)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x18 (0x18)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x20 (0x20)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x30 (0x30)
	char pad_49_1 : 7;  // 0x31 (0x31)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x31 (0x31)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GetLinkedMonsters
struct FGetLinkedMonsters
{
	struct FObjectLinkRequestEvent Recv Event;  // 0x0 (0x0)
	struct UObjectLinkMetaDataBlueprint* Send Event Param;  // 0xB0 (0xB0)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0xB8 (0xB8)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0xBC (0xBC)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xC0 (0xC0)
	char pad_193[7];  // 0xC1 (0xC1)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0xC8 (0xC8)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xD0 (0xD0)
	char pad_209[7];  // 0xD1 (0xD1)
	struct TArray<struct FGameplayTag> K2Node_MakeArray_Array;  // 0xD8 (0xD8)
	struct FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;  // 0xE8 (0xE8)
	char pad_264_1 : 7;  // 0x108 (0x108)
	bool CallFunc_NotEqual_ObjectObject_ReturnValue : 1;  // 0x108 (0x108)
	char pad_265_1 : 7;  // 0x109 (0x109)
	bool CallFunc_DoesContainerMatchTagQuery_ReturnValue : 1;  // 0x109 (0x109)
	char pad_266[2];  // 0x10A (0x10A)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x10C (0x10C)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.LinkEventBase
struct FLinkEventBase
{
	struct UDCGameObjectLinkComponent* DCGame Link Object;  // 0x0 (0x0)
	struct FObjectLinkRequestEvent Recv Event;  // 0x8 (0x8)
	struct UObjectLinkMetaDataBlueprint* Send Event Param;  // 0xB8 (0xB8)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool Result : 1;  // 0xC0 (0xC0)
	char pad_193_1 : 7;  // 0xC1 (0xC1)
	bool CallFunc_IgnoreSignalFromMe_Result : 1;  // 0xC1 (0xC1)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger In Combat Area
struct FTrigger In Combat Area
{
	struct AActor* OverlappedActor;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct ADCPlayerCharacterBase* K2Node_DynamicCast_AsDCPlayer_Character_Base;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool CallFunc_AddGameplayTag_ReturnValue : 1;  // 0x19 (0x19)
	char pad_26[2];  // 0x1A (0x1A)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x1C (0x1C)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Move Fail Timeout
struct FMove Fail Timeout
{
	int32_t Temp_int_Array_Index_Variable;  // 0x0 (0x0)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x4 (0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x8 (0x8)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0xC (0xC)
	struct ABP_DCMonsterBaseWithOptions_C* CallFunc_Array_Get_Item;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct AAIController* CallFunc_GetAIController_ReturnValue;  // 0x20 (0x20)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x28 (0x28)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)
	struct AAIController* CallFunc_GetAIController_ReturnValue_2;  // 0x30 (0x30)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnFail_801A2F7E484A71F27AD0278F8B82FB99
struct FOnFail_801A2F7E484A71F27AD0278F8B82FB99
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnFMsgGASAttributeNotifyBlueprint
// Size: 0x4D8(Inherited: 0x4D8)
struct FOnFMsgGASAttributeNotifyBlueprint : FOnFMsgGASAttributeNotifyBlueprint
{
	struct FMsgGASAttributeNotify InMsg;  // 0x0 (0x0)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnNewTarget
// Size: 0x8(Inherited: 0x8)
struct FOnNewTarget : FOnNewTarget
{
	struct ADCCharacterBase* InTarget;  // 0x0 (0x0)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnSuccess_801A2F7E484A71F27AD0278F8B82FB99
struct FOnSuccess_801A2F7E484A71F27AD0278F8B82FB99
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.ReceivePossessed
// Size: 0x8(Inherited: 0x8)
struct FReceivePossessed : FReceivePossessed
{
	struct AController* NewController;  // 0x0 (0x0)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.SetActivityArea
struct FSetActivityArea
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x0 (0x0)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger In Recog Area
struct FTrigger In Recog Area
{
	struct AActor* OverlappedActor;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct ADCPlayerCharacterBase* K2Node_DynamicCast_AsDCPlayer_Character_Base;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x1C (0x1C)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Spawn Box for Area Check
struct FSpawn Box for Area Check
{
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x0 (0x0)
	struct FTransform CallFunc_GetTransform_ReturnValue_2;  // 0x60 (0x60)
	struct AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;  // 0xC0 (0xC0)
	struct AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2;  // 0xC8 (0xC8)
	struct ATriggerBox* CallFunc_FinishSpawningActor_ReturnValue;  // 0xD0 (0xD0)
	struct ATriggerBox* CallFunc_FinishSpawningActor_ReturnValue_2;  // 0xD8 (0xD8)
	struct UBoxComponent* CallFunc_GetComponentByClass_ReturnValue;  // 0xE0 (0xE0)
	struct UBoxComponent* CallFunc_GetComponentByClass_ReturnValue_2;  // 0xE8 (0xE8)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger Out Recog Area
struct FTrigger Out Recog Area
{
	struct AActor* OverlappedActor;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool CallFunc_Array_RemoveItem_ReturnValue : 1;  // 0x19 (0x19)
	char pad_26_1 : 7;  // 0x1A (0x1A)
	bool CallFunc_Array_RemoveItem_ReturnValue_2 : 1;  // 0x1A (0x1A)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger In Overlap NPT Area
struct FTrigger In Overlap NPT Area
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool bFromSweep : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct FHitResult SweepResult;  // 0x20 (0x20)
	struct APavisePropBase* K2Node_DynamicCast_AsPavise_Prop_Base;  // 0x108 (0x108)
	char pad_272_1 : 7;  // 0x110 (0x110)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x110 (0x110)
	char pad_273[3];  // 0x111 (0x111)
	int32_t Temp_int_Array_Index_Variable;  // 0x114 (0x114)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x118 (0x118)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x11C (0x11C)
	char pad_288_1 : 7;  // 0x120 (0x120)
	bool CallFunc_AddGameplayTag_ReturnValue : 1;  // 0x120 (0x120)
	char pad_289[3];  // 0x121 (0x121)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x124 (0x124)
	int32_t Temp_int_Variable;  // 0x128 (0x128)
	char pad_300_1 : 7;  // 0x12C (0x12C)
	bool CallFunc_AddGameplayTag_ReturnValue_2 : 1;  // 0x12C (0x12C)
	enum class E_NonPlayableTarget CallFunc_Array_Get_Item;  // 0x12D (0x12D)
	char pad_302[2];  // 0x12E (0x12E)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x130 (0x130)
	char pad_308_1 : 7;  // 0x134 (0x134)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x134 (0x134)
	char pad_309_1 : 7;  // 0x135 (0x135)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x135 (0x135)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger Out Combat Area
struct FTrigger Out Combat Area
{
	struct AActor* OverlappedActor;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct ADCPlayerCharacterBase* K2Node_DynamicCast_AsDCPlayer_Character_Base;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool CallFunc_RemoveGameplayTag_ReturnValue : 1;  // 0x19 (0x19)
	char pad_26_1 : 7;  // 0x1A (0x1A)
	bool CallFunc_Array_RemoveItem_ReturnValue : 1;  // 0x1A (0x1A)
	char pad_27_1 : 7;  // 0x1B (0x1B)
	bool CallFunc_Array_RemoveItem_ReturnValue_2 : 1;  // 0x1B (0x1B)


}; 
 
 // Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger Out Overlap NPT Area
struct FTrigger Out Overlap NPT Area
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct APavisePropBase* K2Node_DynamicCast_AsPavise_Prop_Base;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	int32_t Temp_int_Array_Index_Variable;  // 0x2C (0x2C)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x30 (0x30)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x34 (0x34)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_RemoveGameplayTag_ReturnValue : 1;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x3C (0x3C)
	int32_t Temp_int_Variable;  // 0x40 (0x40)
	char pad_68_1 : 7;  // 0x44 (0x44)
	bool CallFunc_RemoveGameplayTag_ReturnValue_2 : 1;  // 0x44 (0x44)
	enum class E_NonPlayableTarget CallFunc_Array_Get_Item;  // 0x45 (0x45)
	char pad_70[2];  // 0x46 (0x46)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x48 (0x48)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x4C (0x4C)
	char pad_77_1 : 7;  // 0x4D (0x4D)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x4D (0x4D)


}; 
 
 