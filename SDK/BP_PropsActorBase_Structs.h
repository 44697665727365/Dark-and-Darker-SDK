#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_PropsActorBase.BP_PropsActorBase_C.DisableAllMeshs
struct FDisableAllMeshs
{
	struct UGeometryCollectionComponent* GeometryCollection_Default;  // 0x0 (0x0)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x8 (0x8)
	int32_t Temp_int_Array_Index_Variable;  // 0xC (0xC)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct UMeshComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue;  // 0x18 (0x18)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct UActorComponent* CallFunc_Array_Get_Item;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct UMeshComponent* K2Node_DynamicCast_As_______;  // 0x40 (0x40)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)
	struct UStaticMeshComponent* K2Node_DynamicCast_As___________;  // 0x50 (0x50)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x58 (0x58)
	char pad_89[7];  // 0x59 (0x59)
	struct USkeletalMeshComponent* K2Node_DynamicCast_As____________;  // 0x60 (0x60)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x68 (0x68)


}; 
 
 // Function BP_PropsActorBase.BP_PropsActorBase_C.EventFMsgGASAttributeNotify
struct FEventFMsgGASAttributeNotify
{
	struct FMsgGASAttributeNotify InMsg;  // 0x0 (0x0)


}; 
 
 // Function BP_PropsActorBase.BP_PropsActorBase_C.FindNavModifier
struct FFindNavModifier
{
	struct TArray<struct UNavModifierComponent*> Results;  // 0x0 (0x0)
	struct TArray<struct UNavModifierComponent*> NavModifierArray;  // 0x10 (0x10)
	int32_t Temp_int_Array_Index_Variable;  // 0x20 (0x20)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x24 (0x24)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct TArray<struct UNavModifierComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue;  // 0x30 (0x30)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)
	struct UNavModifierComponent* CallFunc_Array_Get_Item;  // 0x48 (0x48)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x50 (0x50)
	char pad_81[3];  // 0x51 (0x51)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x54 (0x54)


}; 
 
 // Function BP_PropsActorBase.BP_PropsActorBase_C.ExecuteUbergraph_BP_PropsActorBase
struct FExecuteUbergraph_BP_PropsActorBase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FMsgGASAttributeNotify Temp_struct_Variable;  // 0x8 (0x8)
	struct UMsgBaseNode* Temp_object_Variable;  // 0x4E0 (0x4E0)
	char pad_1256_1 : 7;  // 0x4E8 (0x4E8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x4E8 (0x4E8)
	char pad_1257[3];  // 0x4E9 (0x4E9)
	int32_t Temp_int_Array_Index_Variable;  // 0x4EC (0x4EC)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x4F0 (0x4F0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4F4 (0x4F4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x504 (0x504)
	char pad_1288_1 : 7;  // 0x508 (0x508)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x508 (0x508)
	char pad_1289[7];  // 0x509 (0x509)
	struct FMsgGASAttributeNotify K2Node_CustomEvent_InMsg;  // 0x510 (0x510)
	enum class EEndPlayReason K2Node_Event_EndPlayReason;  // 0x9E8 (0x9E8)
	char pad_2537[7];  // 0x9E9 (0x9E9)
	struct FMsgGASAttributeNotify Temp_struct_Variable_2;  // 0x9F0 (0x9F0)
	char pad_3784_1 : 7;  // 0xEC8 (0xEC8)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0xEC8 (0xEC8)
	char pad_3785_1 : 7;  // 0xEC9 (0xEC9)
	bool CallFunc_GetPayload_ReturnValue : 1;  // 0xEC9 (0xEC9)
	char pad_3786_1 : 7;  // 0xECA (0xECA)
	bool CallFunc_HasAuthority_ReturnValue_2 : 1;  // 0xECA (0xECA)
	char pad_3787[5];  // 0xECB (0xECB)
	struct TScriptInterface<IBaseInterface> CallFunc_BindMsgNode_BaseInterface_CastInput;  // 0xED0 (0xED0)
	struct UBindMsgNode* CallFunc_BindMsgNode_ReturnValue;  // 0xEE0 (0xEE0)
	char pad_3816_1 : 7;  // 0xEE8 (0xEE8)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0xEE8 (0xEE8)
	char pad_3817[7];  // 0xEE9 (0xEE9)
	struct TArray<struct UNavModifierComponent*> CallFunc_FindNavModifier_Results;  // 0xEF0 (0xEF0)
	struct UNavModifierComponent* CallFunc_Array_Get_Item;  // 0xF00 (0xF00)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0xF08 (0xF08)
	char pad_3852_1 : 7;  // 0xF0C (0xF0C)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0xF0C (0xF0C)
	char pad_3853_1 : 7;  // 0xF0D (0xF0D)
	bool CallFunc_NotEqualExactly_VectorVector_ReturnValue : 1;  // 0xF0D (0xF0D)
	char pad_3854[2];  // 0xF0E (0xF0E)
	float K2Node_Event_ExhaustedTime;  // 0xF10 (0xF10)
	char pad_3860[4];  // 0xF14 (0xF14)
	UGameplayEffect* K2Node_Event_GameplayEffectClass;  // 0xF18 (0xF18)
	struct FDCGameplayEffectContext K2Node_Event_EffectContext;  // 0xF20 (0xF20)
	struct FHitResult CallFunc_DCEffectContextGetHitResult_ReturnValue;  // 0x10F8 (0x10F8)
	char pad_4576_1 : 7;  // 0x11E0 (0x11E0)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x11E0 (0x11E0)
	char pad_4577_1 : 7;  // 0x11E1 (0x11E1)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x11E1 (0x11E1)
	char pad_4578[2];  // 0x11E2 (0x11E2)
	float CallFunc_BreakHitResult_Time;  // 0x11E4 (0x11E4)
	float CallFunc_BreakHitResult_Distance;  // 0x11E8 (0x11E8)
	char pad_4588[4];  // 0x11EC (0x11EC)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x11F0 (0x11F0)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x1208 (0x1208)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x1220 (0x1220)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x1238 (0x1238)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x1250 (0x1250)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x1258 (0x1258)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x1260 (0x1260)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x1268 (0x1268)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x1270 (0x1270)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x1278 (0x1278)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x127C (0x127C)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x1280 (0x1280)
	char pad_4740[4];  // 0x1284 (0x1284)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x1288 (0x1288)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x12A0 (0x12A0)
	char pad_4792_1 : 7;  // 0x12B8 (0x12B8)
	bool CallFunc_PlaySoundWithTag_ReturnValue : 1;  // 0x12B8 (0x12B8)
	char pad_4793[7];  // 0x12B9 (0x12B9)
	struct FTransform CallFunc_MakeTransform_ReturnValue;  // 0x12C0 (0x12C0)
	struct AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;  // 0x1320 (0x1320)
	struct ABP_DestructionField_C* CallFunc_FinishSpawningActor_ReturnValue;  // 0x1328 (0x1328)
	struct UGeometryCollectionComponent* CallFunc_FindGeometryCollectionDefault_GeometryCollection;  // 0x1330 (0x1330)
	char pad_4920_1 : 7;  // 0x1338 (0x1338)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x1338 (0x1338)
	char pad_4921_1 : 7;  // 0x1339 (0x1339)
	bool CallFunc_IsValid_ReturnValue_5 : 1;  // 0x1339 (0x1339)
	char pad_4922_1 : 7;  // 0x133A (0x133A)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x133A (0x133A)
	char pad_4923[1];  // 0x133B (0x133B)
	float CallFunc_GetServerWorldTimeSeconds_ReturnValue;  // 0x133C (0x133C)
	struct UMsgBaseNode* K2Node_CustomEvent_ProxyObject;  // 0x1340 (0x1340)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x1348 (0x1348)
	char pad_4944_1 : 7;  // 0x1350 (0x1350)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0x1350 (0x1350)
	char pad_4945[7];  // 0x1351 (0x1351)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast;  // 0x1358 (0x1358)
	float CallFunc_Delay_Duration_ImplicitCast;  // 0x1360 (0x1360)
	char pad_4964[4];  // 0x1364 (0x1364)
	double CallFunc_Greater_DoubleDouble_A_ImplicitCast;  // 0x1368 (0x1368)


}; 
 
 // Function BP_PropsActorBase.BP_PropsActorBase_C.FindGeometryCollectionDefault
struct FFindGeometryCollectionDefault
{
	struct UGeometryCollectionComponent* GeometryCollection;  // 0x0 (0x0)
	struct UGeometryCollectionComponent* LocalGeometryCollection;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool Temp_bool_True_if_break_was_hit_Variable : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x11 (0x11)
	char pad_18[2];  // 0x12 (0x12)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x14 (0x14)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool Temp_bool_True_if_break_was_hit_Variable_2 : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	int32_t Temp_int_Array_Index_Variable;  // 0x20 (0x20)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool CallFunc_Not_PreBool_ReturnValue_2 : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	int32_t Temp_int_Array_Index_Variable_2;  // 0x28 (0x28)
	int32_t Temp_int_Loop_Counter_Variable_2;  // 0x2C (0x2C)
	struct TArray<struct UGeometryCollectionComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue;  // 0x30 (0x30)
	struct UGeometryCollectionComponent* CallFunc_Array_Get_Item;  // 0x40 (0x40)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x48 (0x48)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x4C (0x4C)
	char pad_77[3];  // 0x4D (0x4D)
	struct FString CallFunc_GetDisplayName_ReturnValue;  // 0x50 (0x50)
	char pad_96_1 : 7;  // [x60 ([x60)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 000052561] ited: 0x3E0)
 (000052561] ited: 0x3E0)
)
	char pad_97[3];  // 0x61 (0x61)
	int32_t CallFunc_FindSubstring_ReturnValue;  // 0x64 (0x64)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x68 (0x68)
	char pad_105[3];  // 0x69 (0x69)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x6C (0x6C)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x70 (0x70)
	char pad_113_1 : 7;  // 0x71 (0x71)
	bool Temp_bool_Variable : 1;  // 0x71 (0x71)
	char pad_114[6];  // 0x72 (0x72)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;  // 0x78 (0x78)
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x88 (0x88)
	char pad_137[7];  // 0x89 (0x89)
	struct TArray<struct FGameplayTag> CallFunc_Map_Keys_Keys;  // 0x90 (0x90)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0xA0 (0xA0)
	struct FGameplayTag CallFunc_Array_Get_Item_2;  // 0xA4 (0xA4)
	char pad_172_1 : 7;  // 0xAC (0xAC)
	bool CallFunc_Less_IntInt_ReturnValue_2 : 1;  // 0xAC (0xAC)
	char pad_173_1 : 7;  // 0xAD ([xAD)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 001131123] Package Wp_Mace_Attack (001131123] /Game/DungeonCrawler/Data/Generated/DT_Emote/Emote/Id_Emote_Bow2)
	char pad_174_1 : 7;  // 0xAE (0xAE)
	bool CallFunc_BooleanAND_ReturnValue_2 : 1;  // 0xAE (0xAE)
	char pad_175[1];  // 0xAF (0xAF)
	struct UGeometryCollectionComponent* CallFunc_Map_Find_Value;  // 0xB0 (0xB0)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool CallFunc_Map_Find_ReturnValue : 1;  // 0xB8 (0xB8)


}; 
 
 // Function BP_PropsActorBase.BP_PropsActorBase_C.OnImpactEnduranceExhausted
// Size: 0x1E8(Inherited: 0x1E8)
struct FOnImpactEnduranceExhausted : FOnImpactEnduranceExhausted
{
	float ExhaustedTime;  // 0x0 (0x0)
	UGameplayEffect* GameplayEffectClass;  // 0x8 (0x8)
	struct FDCGameplayEffectContext EffectContext;  // 0x10 (0x10)


}; 
 
 // Function BP_PropsActorBase.BP_PropsActorBase_C.ReceiveEndPlay
// Size: 0x1(Inherited: 0x1)
struct FReceiveEndPlay : FReceiveEndPlay
{
	enum class EEndPlayReason EndPlayReason;  // 0x0 (0x0)


}; 
 
 // Function BP_PropsActorBase.BP_PropsActorBase_C.OnMessageReceived_276C1C2B4C744D3B8E1075AD9729DE9E
struct FOnMessageReceived_276C1C2B4C744D3B8E1075AD9729DE9E
{
	struct UMsgBaseNode* ProxyObject;  // 0x0 (0x0)


}; 
 
 