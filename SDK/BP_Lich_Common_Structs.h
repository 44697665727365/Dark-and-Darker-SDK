#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_Lich_Common.BP_Lich_Common_C.Reset Variables
struct FReset Variables
{
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x0 (0x0)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x8 (0x8)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x10 (0x10)
	struct FName CallFunc_MakeLiteralName_ReturnValue_2;  // 0x18 (0x18)
	int32_t CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2;  // 0x28 (0x28)
	float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast;  // 0x30 (0x30)


}; 
 
 // Function BP_Lich_Common.BP_Lich_Common_C.Remove Frenzy
struct FRemove Frenzy
{
	int32_t Temp_int_Array_Index_Variable;  // 0x0 (0x0)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x4 (0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x8 (0x8)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0xC (0xC)
	struct ABP_DCMonsterBaseWithOptions_C* CallFunc_Array_Get_Item;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	int32_t CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;  // 0x1C (0x1C)


}; 
 
 // Function BP_Lich_Common.BP_Lich_Common_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // Function BP_Lich_Common.BP_Lich_Common_C.BndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature
// Size: 0xB8(Inherited: 0xB8)
struct FBndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature : FBndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature
{
	struct FObjectLinkRequestEvent RecvEvent;  // 0x0 (0x0)
	struct UObjectLinkMetaDataBlueprint* SendEventParam;  // 0xB0 (0xB0)


}; 
 
 // Function BP_Lich_Common.BP_Lich_Common_C.ExecuteUbergraph_BP_Lich_Common
struct FExecuteUbergraph_BP_Lich_Common
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x5 (0x5)
	char pad_6_1 : 7;  // 0x6 (0x6)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x6 (0x6)
	char pad_7_1 : 7;  // 0x7 (0x7)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x7 (0x7)
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x10 (0x10)
	struct AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;  // 0x70 (0x70)
	struct ABP_Lich_Staff_C* CallFunc_FinishSpawningActor_ReturnValue;  // 0x78 (0x78)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x80 (0x80)
	struct FObjectLinkRequestEvent K2Node_ComponentBoundEvent_RecvEvent;  // 0x88 (0x88)
	struct UObjectLinkMetaDataBlueprint* K2Node_ComponentBoundEvent_SendEventParam;  // 0x138 (0x138)
	char pad_320_1 : 7;  // 0x140 (0x140)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x140 (0x140)
	char pad_321_1 : 7;  // 0x141 (0x141)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x141 (0x141)
	char pad_322_1 : 7;  // 0x142 (0x142)
	bool CallFunc_NotEqual_GameplayTag_ReturnValue : 1;  // 0x142 (0x142)
	char pad_323_1 : 7;  // 0x143 (0x143)
	bool CallFunc_LinkEventBase_Result : 1;  // 0x143 (0x143)
	char pad_324[4];  // 0x144 (0x144)
	struct FObjectLinkMetaData K2Node_MakeStruct_ObjectLinkMetaData;  // 0x148 (0x148)
	char pad_416_1 : 7;  // 0x1A0 (0x1A0)
	bool CallFunc_IsValid_ReturnValue_5 : 1;  // 0x1A0 (0x1A0)
	char pad_417[3];  // 0x1A1 (0x1A1)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x1A4 (0x1A4)
	int32_t K2Node_Event_InCount;  // 0x1AC (0x1AC)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_Change_GE_Attribute_And_Apply_Return_Value;  // 0x1B0 (0x1B0)
	char pad_448_1 : 7;  // 0x1C0 (0x1C0)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x1C0 (0x1C0)
	char pad_449_1 : 7;  // 0x1C1 (0x1C1)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue : 1;  // 0x1C1 (0x1C1)


}; 
 
 // Function BP_Lich_Common.BP_Lich_Common_C.Send Signal Summonee To Die
struct FSend Signal Summonee To Die
{
	struct FObjectLinkMetaData K2Node_MakeStruct_ObjectLinkMetaData;  // 0x0 (0x0)
	struct FObjectLinkRequestEvent K2Node_MakeStruct_ObjectLinkRequestEvent;  // 0x58 (0x58)
	struct TArray<struct FObjectLinkResponeEvent> CallFunc_RequestToLinkers_ReturnValue;  // 0x108 (0x108)


}; 
 
 