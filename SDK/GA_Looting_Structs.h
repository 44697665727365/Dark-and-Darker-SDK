#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Looting.GA_Looting_C.GetMaximumDistance
struct FGetMaximumDistance
{
	double HitResultDistance;  // 0x0 (0x0)
	double MaximumDistance;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0x10 (0x10)


}; 
 
 // Function GA_Looting.GA_Looting_C.ExecuteUbergraph_GA_Looting
struct FExecuteUbergraph_GA_Looting
{
	int32_t EntryPoint;  // 0x0 (0x0)
	float CallFunc_GetConstantFloat_ReturnValue;  // 0x4 (0x4)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x8 (0x8)
	struct AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x18 (0x18)
	struct FMsgRemoveLooter K2Node_MakeStruct_MsgRemoveLooter;  // 0x20 (0x20)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x48 (0x48)
	struct AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_2;  // 0xF8 (0xF8)
	struct FHitResult CallFunc_EffectContextGetHitResult_ReturnValue;  // 0x100 (0x100)
	char pad_488_1 : 7;  // 0x1E8 (0x1E8)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x1E8 (0x1E8)
	char pad_489_1 : 7;  // 0x1E9 (0x1E9)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x1E9 (0x1E9)
	char pad_490_1 : 7;  // 0x1EA (0x1EA)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x1EA (0x1EA)
	char pad_491[1];  // 0x1EB (0x1EB)
	float CallFunc_BreakHitResult_Time;  // 0x1EC (0x1EC)
	float CallFunc_BreakHitResult_Distance;  // 0x1F0 (0x1F0)
	char pad_500[4];  // 0x1F4 (0x1F4)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x1F8 (0x1F8)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x210 (0x210)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x228 (0x228)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x240 (0x240)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x258 (0x258)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x260 (0x260)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x268 (0x268)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x270 (0x270)
	struct FName CallFunc_BreakHitResult_BoneName;  // 0x278 (0x278)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x280 (0x280)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x284 (0x284)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x288 (0x288)
	char pad_652[4];  // 0x28C (0x28C)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x290 (0x290)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x2A8 (0x2A8)
	struct UDCAT_WaitAimDirChangedFromLoc* CallFunc_WaitAimDirectionChangedFromLocation_ReturnValue;  // 0x2C0 (0x2C0)
	double CallFunc_GetMaximumDistance_MaximumDistance;  // 0x2C8 (0x2C8)
	char pad_720_1 : 7;  // 0x2D0 (0x2D0)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x2D0 (0x2D0)
	char pad_721[7];  // 0x2D1 (0x2D1)
	double CallFunc_GetMaximumDistance_MaximumDistance_2;  // 0x2D8 (0x2D8)
	struct UDCAT_WaitDistChangeFromLocation* CallFunc_WaitDistanceChange_ReturnValue;  // 0x2E0 (0x2E0)
	struct ULootComponent* CallFunc_GetComponentByClass_ReturnValue;  // 0x2E8 (0x2E8)
	struct FMsgLootComponentNotify K2Node_MakeStruct_MsgLootComponentNotify;  // 0x2F0 (0x2F0)
	char pad_784_1 : 7;  // 0x310 (0x310)
	bool CallFunc_IsLootTargetPlayer_ReturnValue : 1;  // 0x310 (0x310)
	char pad_785[7];  // 0x311 (0x311)
	struct TArray<struct UInventoryComponent*> K2Node_MakeArray_Array;  // 0x318 (0x318)
	char pad_808_1 : 7;  // 0x328 (0x328)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x328 (0x328)
	char pad_809[7];  // 0x329 (0x329)
	struct AActor* CallFunc_GetLootTargetActor_ReturnValue;  // 0x330 (0x330)
	struct UDCAT_WaitDistChangeFromView* CallFunc_WaitDistanceChange_ReturnValue_2;  // 0x338 (0x338)
	char pad_832_1 : 7;  // 0x340 (0x340)
	bool CallFunc_IsValid_ReturnValue_5 : 1;  // 0x340 (0x340)
	char pad_833_1 : 7;  // 0x341 (0x341)
	bool CallFunc_IsValid_ReturnValue_6 : 1;  // 0x341 (0x341)
	char pad_834[6];  // 0x342 (0x342)
	struct ACharacter* K2Node_DynamicCast_As___;  // 0x348 (0x348)
	char pad_848_1 : 7;  // 0x350 (0x350)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x350 (0x350)
	char pad_849_1 : 7;  // 0x351 (0x351)
	bool CallFunc_IsValid_ReturnValue_7 : 1;  // 0x351 (0x351)
	char pad_850[2];  // 0x352 (0x352)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x354 (0x354)
	char pad_868_1 : 7;  // 0x364 (0x364)
	bool K2Node_Event_bWasCancelled : 1;  // 0x364 (0x364)
	char pad_869[3];  // 0x365 (0x365)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x368 (0x368)
	struct AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_3;  // 0x378 (0x378)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface;  // 0x380 (0x380)
	char pad_912_1 : 7;  // 0x390 (0x390)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x390 (0x390)
	char pad_913[7];  // 0x391 (0x391)
	struct FMsgRemoveLooter K2Node_MakeStruct_MsgRemoveLooter_2;  // 0x398 (0x398)
	char pad_952_1 : 7;  // 0x3B8 (0x3B8)
	bool CallFunc_IsValid_ReturnValue_8 : 1;  // 0x3B8 (0x3B8)
	char pad_953[7];  // 0x3B9 (0x3B9)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface_2;  // 0x3C0 (0x3C0)
	char pad_976_1 : 7;  // 0x3D0 (0x3D0)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x3D0 (0x3D0)
	char pad_977_1 : 7;  // 0x3D1 (0x3D1)
	bool CallFunc_IsLocallyControlled_ReturnValue : 1;  // 0x3D1 (0x3D1)
	char pad_978_1 : 7;  // 0x3D2 (0x3D2)
	bool CallFunc_IsLocallyControlled_ReturnValue_2 : 1;  // 0x3D2 (0x3D2)
	char pad_979[5];  // 0x3D3 (0x3D3)
	struct UEquipmentInventoryComponent* CallFunc_GetComponentByClass_ReturnValue_2;  // 0x3D8 (0x3D8)
	struct FLootingTargetPlayerInventory K2Node_MakeStruct_LootingTargetPlayerInventory;  // 0x3E0 (0x3E0)
	struct FMsgLootingTargetPlayerInventoryNotify K2Node_MakeStruct_MsgLootingTargetPlayerInventoryNotify;  // 0x3F8 (0x3F8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x428 (0x428)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x438 (0x438)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface_3;  // 0x440 (0x440)
	char pad_1104_1 : 7;  // 0x450 (0x450)
	bool K2Node_DynamicCast_bSuccess_4 : 1;  // 0x450 (0x450)
	char pad_1105[7];  // 0x451 (0x451)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface_4;  // 0x458 (0x458)
	char pad_1128_1 : 7;  // 0x468 (0x468)
	bool K2Node_DynamicCast_bSuccess_5 : 1;  // 0x468 (0x468)
	char pad_1129[7];  // 0x469 (0x469)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x470 (0x470)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface_5;  // 0x478 (0x478)
	char pad_1160_1 : 7;  // 0x488 (0x488)
	bool K2Node_DynamicCast_bSuccess_6 : 1;  // 0x488 (0x488)
	char pad_1161[7];  // 0x489 (0x489)
	double CallFunc_GetMaximumDistance_HitResultDistance_ImplicitCast;  // 0x490 (0x490)
	double CallFunc_GetMaximumDistance_HitResultDistance_ImplicitCast_2;  // 0x498 (0x498)
	float CallFunc_WaitDistanceChange_MaximumDistance_ImplicitCast;  // 0x4A0 (0x4A0)
	float CallFunc_WaitDistanceChange_MaximumDistance_ImplicitCast_2;  // 0x4A4 (0x4A4)


}; 
 
 // Function GA_Looting.GA_Looting_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 // Function GA_Looting.GA_Looting_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 