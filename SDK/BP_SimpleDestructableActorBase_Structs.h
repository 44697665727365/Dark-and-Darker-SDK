#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_SimpleDestructableActorBase.BP_SimpleDestructableActorBase_C.BndEvt__BP_ChestBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature
struct FBndEvt__BP_ChestBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature
{
	struct TArray<struct FItemData> ResultItems;  // 0x0 (0x0)


}; 
 
 // Function BP_SimpleDestructableActorBase.BP_SimpleDestructableActorBase_C.ExecuteUbergraph_BP_SimpleDestructableActorBase
struct FExecuteUbergraph_BP_SimpleDestructableActorBase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Array_Index_Variable;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	int32_t Temp_int_Loop_Counter_Variable;  // 0xC (0xC)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x10 (0x10)
	float K2Node_Event_ExhaustedTime;  // 0x14 (0x14)
	UGameplayEffect* K2Node_Event_GameplayEffectClass;  // 0x18 (0x18)
	struct FDCGameplayEffectContext K2Node_Event_EffectContext;  // 0x20 (0x20)
	struct TArray<struct FItemData> K2Node_ComponentBoundEvent_ResultItems;  // 0x1F8 (0x1F8)
	struct AActor* CallFunc_DCEffectContextGetInstigatorActor_ReturnValue;  // 0x208 (0x208)
	struct FItemData CallFunc_Array_Get_Item;  // 0x210 (0x210)
	float CallFunc_GetActorAttributeValue_ReturnValue;  // 0x2B0 (0x2B0)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x2B4 (0x2B4)
	char pad_696_1 : 7;  // 0x2B8 (0x2B8)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x2B8 (0x2B8)
	char pad_697[3];  // 0x2B9 (0x2B9)
	int32_t CallFunc_Conv_ByteToInt_ReturnValue;  // 0x2BC (0x2BC)
	struct FMsgAddContainingItemRequest K2Node_MakeStruct_MsgAddContainingItemRequest;  // 0x2C0 (0x2C0)


}; 
 
 // Function BP_SimpleDestructableActorBase.BP_SimpleDestructableActorBase_C.OnImpactEnduranceExhausted
// Size: 0x1E8(Inherited: 0x1E8)
struct FOnImpactEnduranceExhausted : FOnImpactEnduranceExhausted
{
	float ExhaustedTime;  // 0x0 (0x0)
	UGameplayEffect* GameplayEffectClass;  // 0x8 (0x8)
	struct FDCGameplayEffectContext EffectContext;  // 0x10 (0x10)


}; 
 
 