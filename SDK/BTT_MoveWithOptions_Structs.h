#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.CheckDestinationValid
struct FCheckDestinationValid
{
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x0 (0x0)
	double CallFunc_Vector_Distance_ReturnValue;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	float CallFunc_GetScaledCapsuleRadius_ReturnValue;  // 0x24 (0x24)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct FVector CallFunc_K2_ProjectPointToNavigation_ProjectedLocation;  // 0x38 (0x38)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool CallFunc_K2_ProjectPointToNavigation_ReturnValue : 1;  // 0x50 (0x50)
	char pad_81[3];  // 0x51 (0x51)
	float CallFunc_GetScaledCapsuleRadius_ReturnValue_2;  // 0x54 (0x54)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x58 (0x58)
	double CallFunc_Add_DoubleDouble_ReturnValue_2;  // 0x60 (0x60)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x68 (0x68)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_3;  // 0x80 (0x80)
	struct FVector CallFunc_K2_ProjectPointToNavigation_ProjectedLocation_2;  // 0x98 (0x98)
	char pad_176_1 : 7;  // 0xB0 (0xB0)
	bool CallFunc_K2_ProjectPointToNavigation_ReturnValue_2 : 1;  // 0xB0 (0xB0)
	char pad_177[7];  // 0xB1 (0xB1)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_4;  // 0xB8 (0xB8)
	struct UNavigationPath* CallFunc_FindPathToLocationSynchronously_ReturnValue;  // 0xD0 (0xD0)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xD8 (0xD8)
	char pad_217[7];  // 0xD9 (0xD9)
	struct UNavigationPath* CallFunc_FindPathToActorSynchronously_ReturnValue;  // 0xE0 (0xE0)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0xE8 (0xE8)
	char pad_233_1 : 7;  // 0xE9 (0xE9)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0xE9 (0xE9)
	char pad_234[6];  // 0xEA (0xEA)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast;  // 0xF0 (0xF0)
	double CallFunc_Add_DoubleDouble_B_ImplicitCast;  // 0xF8 (0xF8)
	float CallFunc_FindPathToActorSynchronously_TetherDistance_ImplicitCast;  // 0x100 (0x100)


}; 
 
 // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.EventReceived_CB08A86943F251B5D4DD73871182C746
struct FEventReceived_CB08A86943F251B5D4DD73871182C746
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.Check Invisible Target
struct FCheck Invisible Target
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool CallFunc_Check_Target_Has_State_Tags_To_Lose_From_Array_Result : 1;  // 0x0 (0x0)


}; 
 
 // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.ExecuteUbergraph_BTT_MoveWithOptions
struct FExecuteUbergraph_BTT_MoveWithOptions
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x4 (0x4)
	char pad_12[4];  // 0xC (0xC)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x10 (0x10)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC0 (0xC0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x170 (0x170)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_8;  // 0x180 (0x180)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_7;  // 0x181 (0x181)
	char pad_386[2];  // 0x182 (0x182)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x184 (0x184)
	enum class EPathFollowingResult Temp_byte_Variable;  // 0x194 (0x194)
	char pad_405[3];  // 0x195 (0x195)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x198 (0x198)
	char pad_424_1 : 7;  // 0x1A8 (0x1A8)
	bool Temp_bool_Variable : 1;  // 0x1A8 (0x1A8)
	char pad_425[3];  // 0x1A9 (0x1A9)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x1AC (0x1AC)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_6;  // 0x1BC (0x1BC)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_5;  // 0x1BD (0x1BD)
	char pad_446[2];  // 0x1BE (0x1BE)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_5;  // 0x1C0 (0x1C0)
	enum class EPathFollowingResult Temp_byte_Variable_2;  // 0x1D0 (0x1D0)
	char pad_465[3];  // 0x1D1 (0x1D1)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_6;  // 0x1D4 (0x1D4)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_4;  // 0x1E4 (0x1E4)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_3;  // 0x1E5 (0x1E5)
	char pad_486[2];  // 0x1E6 (0x1E6)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_7;  // 0x1E8 (0x1E8)
	enum class EPathFollowingResult Temp_byte_Variable_3;  // 0x1F8 (0x1F8)
	char pad_505[3];  // 0x1F9 (0x1F9)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_8;  // 0x1FC (0x1FC)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_2;  // 0x20C (0x20C)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult;  // 0x20D (0x20D)
	char pad_526[2];  // 0x20E (0x20E)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_9;  // 0x210 (0x210)
	enum class EPathFollowingResult Temp_byte_Variable_4;  // 0x220 (0x220)
	char pad_545[3];  // 0x221 (0x221)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_10;  // 0x224 (0x224)
	char pad_564_1 : 7;  // 0x234 (0x234)
	bool CallFunc_SetDestination_Result : 1;  // 0x234 (0x234)
	char pad_565_1 : 7;  // 0x235 (0x235)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x235 (0x235)
	char pad_566[2];  // 0x236 (0x236)
	struct FTimerHandle CallFunc_K2_SetTimer_ReturnValue;  // 0x238 (0x238)
	char pad_576_1 : 7;  // 0x240 (0x240)
	bool K2Node_SwitchEnum_CmpSuccess_2 : 1;  // 0x240 (0x240)
	char pad_577[7];  // 0x241 (0x241)
	struct FString CallFunc_Conv_DoubleToString_ReturnValue;  // 0x248 (0x248)
	struct FString CallFunc_Conv_DoubleToString_ReturnValue_2;  // 0x258 (0x258)
	char pad_616_1 : 7;  // 0x268 (0x268)
	bool K2Node_SwitchString_CmpSuccess : 1;  // 0x268 (0x268)
	char pad_617_1 : 7;  // 0x269 (0x269)
	bool K2Node_SwitchString_CmpSuccess_2 : 1;  // 0x269 (0x269)
	char pad_618[6];  // 0x26A (0x26A)
	struct AAIController* K2Node_Event_OwnerController_2;  // 0x270 (0x270)
	struct APawn* K2Node_Event_ControlledPawn_2;  // 0x278 (0x278)
	enum class EBTNodeResult K2Node_Event_TaskResult;  // 0x280 (0x280)
	char pad_641[7];  // 0x281 (0x281)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x288 (0x288)
	char pad_656_1 : 7;  // 0x290 (0x290)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x290 (0x290)
	enum class EPathFollowingResult Temp_byte_Variable_5;  // 0x291 (0x291)
	char pad_658[6];  // 0x292 (0x292)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x298 (0x298)
	char pad_672_1 : 7;  // 0x2A0 (0x2A0)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x2A0 (0x2A0)
	char pad_673[7];  // 0x2A1 (0x2A1)
	struct FVector CallFunc_GetHitBoxLocation_Location;  // 0x2A8 (0x2A8)
	char pad_704_1 : 7;  // 0x2C0 (0x2C0)
	bool CallFunc_GetHitBoxLocation_ReturnValue : 1;  // 0x2C0 (0x2C0)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_10;  // 0x2C1 (0x2C1)
	char pad_706[6];  // 0x2C2 (0x2C2)
	struct UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue;  // 0x2C8 (0x2C8)
	char pad_720_1 : 7;  // 0x2D0 (0x2D0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x2D0 (0x2D0)
	char pad_721[7];  // 0x2D1 (0x2D1)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x2D8 (0x2D8)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;  // 0x2E0 (0x2E0)
	char pad_752_1 : 7;  // 0x2F0 (0x2F0)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x2F0 (0x2F0)
	char pad_753_1 : 7;  // 0x2F1 (0x2F1)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x2F1 (0x2F1)
	char pad_754_1 : 7;  // 0x2F2 (0x2F2)
	bool CallFunc_FilterUnTagedTargets_ReturnValue : 1;  // 0x2F2 (0x2F2)
	char pad_755_1 : 7;  // 0x2F3 (0x2F3)
	bool CallFunc_GetAllTargetArray_ReturnValue : 1;  // 0x2F3 (0x2F3)
	char pad_756_1 : 7;  // 0x2F4 (0x2F4)
	bool CallFunc_FilterTargetsWithinDistance_ReturnValue : 1;  // 0x2F4 (0x2F4)
	char pad_757[3];  // 0x2F5 (0x2F5)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x2F8 (0x2F8)
	char pad_764_1 : 7;  // 0x2FC (0x2FC)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x2FC (0x2FC)
	char pad_765_1 : 7;  // 0x2FD (0x2FD)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x2FD (0x2FD)
	char pad_766[2];  // 0x2FE (0x2FE)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_11;  // 0x300 (0x300)
	struct UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue;  // 0x310 (0x310)
	char pad_792_1 : 7;  // 0x318 (0x318)
	bool CallFunc_EqualEqual_DoubleDouble_ReturnValue : 1;  // 0x318 (0x318)
	char pad_793[3];  // 0x319 (0x319)
	float CallFunc_GetSightRange_ReturnValue;  // 0x31C (0x31C)
	char pad_800_1 : 7;  // 0x320 (0x320)
	bool CallFunc_FilterTargetsWithinDistance_ReturnValue_2 : 1;  // 0x320 (0x320)
	char pad_801[7];  // 0x321 (0x321)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x328 (0x328)
	char pad_816_1 : 7;  // 0x330 (0x330)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0x330 (0x330)
	char pad_817[7];  // 0x331 (0x331)
	struct AAIController* K2Node_Event_OwnerController;  // 0x338 (0x338)
	struct APawn* K2Node_Event_ControlledPawn;  // 0x340 (0x340)
	struct UAbilityAsync_WaitGameplayEvent* CallFunc_WaitGameplayEventToActor_ReturnValue;  // 0x348 (0x348)
	char pad_848_1 : 7;  // 0x350 (0x350)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x350 (0x350)
	char pad_849[7];  // 0x351 (0x351)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2;  // 0x358 (0x358)
	float CallFunc_GetValueAsFloat_ReturnValue;  // 0x360 (0x360)
	char pad_868[4];  // 0x364 (0x364)
	struct FVector CallFunc_K2_ProjectPointToNavigation_ProjectedLocation;  // 0x368 (0x368)
	char pad_896_1 : 7;  // 0x380 (0x380)
	bool CallFunc_K2_ProjectPointToNavigation_ReturnValue : 1;  // 0x380 (0x380)
	char pad_897[7];  // 0x381 (0x381)
	struct FVector CallFunc_K2_ProjectPointToNavigation_ProjectedLocation_2;  // 0x388 (0x388)
	char pad_928_1 : 7;  // 0x3A0 (0x3A0)
	bool CallFunc_K2_ProjectPointToNavigation_ReturnValue_2 : 1;  // 0x3A0 (0x3A0)
	char pad_929[7];  // 0x3A1 (0x3A1)
	struct UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue_2;  // 0x3A8 (0x3A8)
	struct UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue_3;  // 0x3B0 (0x3B0)
	char pad_952_1 : 7;  // 0x3B8 (0x3B8)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x3B8 (0x3B8)
	char pad_953_1 : 7;  // 0x3B9 (0x3B9)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x3B9 (0x3B9)
	char pad_954[6];  // 0x3BA (0x3BA)
	struct UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue_4;  // 0x3C0 (0x3C0)
	struct UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue_5;  // 0x3C8 (0x3C8)
	char pad_976_1 : 7;  // 0x3D0 (0x3D0)
	bool CallFunc_IsValid_ReturnValue_5 : 1;  // 0x3D0 (0x3D0)
	char pad_977_1 : 7;  // 0x3D1 (0x3D1)
	bool CallFunc_IsValid_ReturnValue_6 : 1;  // 0x3D1 (0x3D1)
	char pad_978[6];  // 0x3D2 (0x3D2)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x3D8 (0x3D8)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_9;  // 0x3F0 (0x3F0)
	char pad_1009[7];  // 0x3F1 (0x3F1)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x3F8 (0x3F8)
	double CallFunc_Vector_Distance_ReturnValue;  // 0x410 (0x410)
	char pad_1048_1 : 7;  // 0x418 (0x418)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2 : 1;  // 0x418 (0x418)
	char pad_1049[7];  // 0x419 (0x419)
	struct FString CallFunc_Conv_DoubleToString_ReturnValue_3;  // 0x420 (0x420)
	char pad_1072_1 : 7;  // 0x430 (0x430)
	bool K2Node_SwitchString_CmpSuccess_3 : 1;  // 0x430 (0x430)
	char pad_1073[3];  // 0x431 (0x431)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_12;  // 0x434 (0x434)
	char pad_1092[4];  // 0x444 (0x444)
	struct FTimerHandle CallFunc_K2_SetTimer_ReturnValue_2;  // 0x448 (0x448)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_3;  // 0x450 (0x450)
	float CallFunc_GetValueAsFloat_ReturnValue_2;  // 0x458 (0x458)
	float CallFunc_K2_SetTimer_Time_ImplicitCast;  // 0x45C (0x45C)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;  // 0x460 (0x460)
	float CallFunc_FilterTargetsWithinDistance_Distance_ImplicitCast;  // 0x464 (0x464)
	double K2Node_VariableSet_DestDistance_ImplicitCast;  // 0x468 (0x468)
	double K2Node_VariableSet_MaxDistance_RandomMove_ImplicitCast;  // 0x470 (0x470)
	float CallFunc_CreateMoveToProxyObject_AcceptanceRadius_ImplicitCast;  // 0x478 (0x478)
	float CallFunc_CreateMoveToProxyObject_AcceptanceRadius_ImplicitCast_2;  // 0x47C (0x47C)
	float CallFunc_CreateMoveToProxyObject_AcceptanceRadius_ImplicitCast_3;  // 0x480 (0x480)
	float CallFunc_CreateMoveToProxyObject_AcceptanceRadius_ImplicitCast_4;  // 0x484 (0x484)
	double K2Node_VariableSet_Acceptance_Radius_ImplicitCast;  // 0x488 (0x488)


}; 
 
 // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnFail_06B3D6954D31FD4292F8D68D097E190F
struct FOnFail_06B3D6954D31FD4292F8D68D097E190F
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnFail_4212524D431777D7D0ABCB86B13DACF3
struct FOnFail_4212524D431777D7D0ABCB86B13DACF3
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnFail_2202D91745600789AE05F59B41DB99AF
struct FOnFail_2202D91745600789AE05F59B41DB99AF
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnFail_4BC9A0AB4F88C9DFF7B2AC89B97FEC01
struct FOnFail_4BC9A0AB4F88C9DFF7B2AC89B97FEC01
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnFail_C95BBC0447ADD362FE1D7095E9E15247
struct FOnFail_C95BBC0447ADD362FE1D7095E9E15247
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnSuccess_06B3D6954D31FD4292F8D68D097E190F
struct FOnSuccess_06B3D6954D31FD4292F8D68D097E190F
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnSuccess_2202D91745600789AE05F59B41DB99AF
struct FOnSuccess_2202D91745600789AE05F59B41DB99AF
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnSuccess_4212524D431777D7D0ABCB86B13DACF3
struct FOnSuccess_4212524D431777D7D0ABCB86B13DACF3
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnSuccess_4BC9A0AB4F88C9DFF7B2AC89B97FEC01
struct FOnSuccess_4BC9A0AB4F88C9DFF7B2AC89B97FEC01
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnSuccess_C95BBC0447ADD362FE1D7095E9E15247
struct FOnSuccess_C95BBC0447ADD362FE1D7095E9E15247
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.SetDestination
struct FSetDestination
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool Temp_bool_Variable : 1;  // 0x1 (0x1)
	char pad_2[2];  // 0x2 (0x2)
	int32_t Temp_int_Variable;  // 0x4 (0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool CallFunc_LessEqual_IntInt_ReturnValue : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0xD (0xD)
	char pad_14[2];  // 0xE (0xE)
	int32_t Temp_int_Variable_2;  // 0x10 (0x10)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x14 (0x14)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool CallFunc_LessEqual_IntInt_ReturnValue_2 : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x19 (0x19)
	char pad_26_1 : 7;  // 0x1A (0x1A)
	bool Temp_bool_Variable_2 : 1;  // 0x1A (0x1A)
	char pad_27[5];  // 0x1B (0x1B)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x20 (0x20)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_Not_PreBool_ReturnValue_2 : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool CallFunc_BooleanAND_ReturnValue_2 : 1;  // 0x39 (0x39)
	char pad_58[6];  // 0x3A (0x3A)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x40 (0x40)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x48 (0x48)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x50 (0x50)
	struct AActor* K2Node_DynamicCast_As__;  // 0x58 (0x58)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2;  // 0x68 (0x68)
	struct FVector CallFunc_GetValueAsVector_ReturnValue;  // 0x70 (0x70)
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x88 (0x88)
	char pad_137[7];  // 0x89 (0x89)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_3;  // 0x90 (0x90)
	struct FVector CallFunc_GetValueAsVector_ReturnValue_2;  // 0x98 (0x98)
	struct ABP_DCMonsterBase_C* K2Node_DynamicCast_AsBP_DCMonster_Base;  // 0xB0 (0xB0)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0xB8 (0xB8)
	char pad_185[7];  // 0xB9 (0xB9)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0xC0 (0xC0)
	struct FVector CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation;  // 0xD8 (0xD8)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue : 1;  // 0xF0 (0xF0)
	char pad_241[7];  // 0xF1 (0xF1)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_3;  // 0xF8 (0xF8)
	double CallFunc_Vector_Distance_ReturnValue;  // 0x110 (0x110)
	struct ABP_DCMonsterBase_C* K2Node_DynamicCast_AsBP_DCMonster_Base_2;  // 0x118 (0x118)
	char pad_288_1 : 7;  // 0x120 (0x120)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x120 (0x120)
	char pad_289_1 : 7;  // 0x121 (0x121)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x121 (0x121)
	char pad_290[6];  // 0x122 (0x122)
	struct FVector CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation_2;  // 0x128 (0x128)
	char pad_320_1 : 7;  // 0x140 (0x140)
	bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue_2 : 1;  // 0x140 (0x140)
	char pad_321[7];  // 0x141 (0x141)
	struct FVector CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation_3;  // 0x148 (0x148)
	char pad_352_1 : 7;  // 0x160 (0x160)
	bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue_3 : 1;  // 0x160 (0x160)
	char pad_353[7];  // 0x161 (0x161)
	struct FVector CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation_4;  // 0x168 (0x168)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue_4 : 1;  // 0x180 (0x180)
	char pad_385[7];  // 0x181 (0x181)
	double CallFunc_Vector_Distance_ReturnValue_2;  // 0x188 (0x188)
	char pad_400_1 : 7;  // 0x190 (0x190)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2 : 1;  // 0x190 (0x190)
	char pad_401_1 : 7;  // 0x191 (0x191)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x191 (0x191)
	char pad_402[6];  // 0x192 (0x192)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x198 (0x198)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_4;  // 0x1B0 (0x1B0)
	float CallFunc_BreakRotator_Roll;  // 0x1C8 (0x1C8)
	float CallFunc_BreakRotator_Pitch;  // 0x1CC (0x1CC)
	float CallFunc_BreakRotator_Yaw;  // 0x1D0 (0x1D0)
	char pad_468[4];  // 0x1D4 (0x1D4)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x1D8 (0x1D8)
	struct FRotator CallFunc_MakeRotator_ReturnValue;  // 0x1E0 (0x1E0)
	struct FVector CallFunc_GetForwardVector_ReturnValue;  // 0x1F8 (0x1F8)
	struct FVector CallFunc_Multiply_VectorFloat_ReturnValue;  // 0x210 (0x210)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x228 (0x228)
	float CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast;  // 0x240 (0x240)
	float CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast_2;  // 0x244 (0x244)
	float CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast_3;  // 0x248 (0x248)
	float CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast_4;  // 0x24C (0x24C)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast;  // 0x250 (0x250)
	float CallFunc_MakeRotator_Yaw_ImplicitCast;  // 0x258 (0x258)


}; 
 
 // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnTaskFinished
// Size: 0x11(Inherited: 0x18)
struct FOnTaskFinished : FOnTaskFinished
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)
	enum class EBTNodeResult TaskResult;  // 0x10 (0x10)


}; 
 
 // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.ReceiveExecuteAI
// Size: 0x10(Inherited: 0x10)
struct FReceiveExecuteAI : FReceiveExecuteAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)


}; 
 
 