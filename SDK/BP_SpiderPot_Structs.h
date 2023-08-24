#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_SpiderPot.BP_SpiderPot_C.ExecuteUbergraph_BP_SpiderPot
struct FExecuteUbergraph_BP_SpiderPot
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TScriptInterface<IBaseInterface> CallFunc_BindMsgNode_BaseInterface_CastInput;  // 0x8 (0x8)
	struct UBindMsgNode* CallFunc_BindMsgNode_ReturnValue;  // 0x18 (0x18)
	struct UMsgBaseNode* Temp_object_Variable;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	int32_t Temp_int_Variable;  // 0x2C (0x2C)
	struct FMsgGASActorDieNotify Temp_struct_Variable;  // 0x30 (0x30)
	struct UMsgBaseNode* K2Node_CustomEvent_ProxyObject;  // 0x230 (0x230)
	char pad_568_1 : 7;  // 0x238 (0x238)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x238 (0x238)
	char pad_569_1 : 7;  // 0x239 (0x239)
	bool CallFunc_HasAuthority_ReturnValue_2 : 1;  // 0x239 (0x239)
	char pad_570[2];  // 0x23A (0x23A)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x23C (0x23C)
	char pad_588[4];  // 0x24C (0x24C)
	struct FMsgGASActorDieNotify Temp_struct_Variable_2;  // 0x250 (0x250)
	char pad_1104_1 : 7;  // 0x450 (0x450)
	bool CallFunc_GetPayload_ReturnValue : 1;  // 0x450 (0x450)
	char pad_1105[3];  // 0x451 (0x451)
	int32_t Temp_int_Variable_2;  // 0x454 (0x454)
	char pad_1112[8];  // 0x458 (0x458)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x460 (0x460)
	struct FVector CallFunc_BreakTransform_Location;  // 0x4C0 (0x4C0)
	struct FRotator CallFunc_BreakTransform_Rotation;  // 0x4D8 (0x4D8)
	struct FVector CallFunc_BreakTransform_Scale;  // 0x4F0 (0x4F0)
	struct FVector CallFunc_GetForwardVector_ReturnValue;  // 0x508 (0x508)
	struct FVector CallFunc_Multiply_VectorFloat_ReturnValue;  // 0x520 (0x520)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x538 (0x538)
	struct FTransform CallFunc_MakeTransform_ReturnValue;  // 0x550 (0x550)
	struct AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;  // 0x5B0 (0x5B0)
	char pad_1464_1 : 7;  // 0x5B8 (0x5B8)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x5B8 (0x5B8)
	char pad_1465[7];  // 0x5B9 (0x5B9)
	struct ABP_GameSpawner_C* CallFunc_FinishSpawningActor_ReturnValue;  // 0x5C0 (0x5C0)
	float K2Node_Event_ExhaustedTime;  // 0x5C8 (0x5C8)
	char pad_1484[4];  // 0x5CC (0x5CC)
	UGameplayEffect* K2Node_Event_GameplayEffectClass;  // 0x5D0 (0x5D0)
	struct FDCGameplayEffectContext K2Node_Event_EffectContext;  // 0x5D8 (0x5D8)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x7B0 (0x7B0)
	char pad_1972_1 : 7;  // 0x7B4 (0x7B4)
	bool CallFunc_RandomBool_ReturnValue : 1;  // 0x7B4 (0x7B4)
	char pad_1973[3];  // 0x7B5 (0x7B5)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x7B8 (0x7B8)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x7C0 (0x7C0)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x7C8 (0x7C8)
	double CallFunc_RandomFloatInRange_ReturnValue_2;  // 0x7D0 (0x7D0)
	struct ADCMonsterBase* CallFunc_SpawnMonster_ReturnValue;  // 0x7D8 (0x7D8)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x7E0 (0x7E0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x7E4 (0x7E4)
	char pad_2036[4];  // 0x7F4 (0x7F4)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x7F8 (0x7F8)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast;  // 0x800 (0x800)
	float K2Node_VariableSet_Spawn_Interval_ImplicitCast;  // 0x808 (0x808)


}; 
 
 // Function BP_SpiderPot.BP_SpiderPot_C.OnImpactEnduranceExhausted
// Size: 0x1E8(Inherited: 0x1E8)
struct FOnImpactEnduranceExhausted : FOnImpactEnduranceExhausted
{
	float ExhaustedTime;  // 0x0 (0x0)
	UGameplayEffect* GameplayEffectClass;  // 0x8 (0x8)
	struct FDCGameplayEffectContext EffectContext;  // 0x10 (0x10)


}; 
 
 // Function BP_SpiderPot.BP_SpiderPot_C.OnMessageReceived_72CC1EC34A59F6F630B6F4A7FF85942F
struct FOnMessageReceived_72CC1EC34A59F6F630B6F4A7FF85942F
{
	struct UMsgBaseNode* ProxyObject;  // 0x0 (0x0)


}; 
 
 