#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BTT_SkeletonWarlord_AddLv.BTT_SkeletonWarlord_AddLv_C.ExecuteUbergraph_BTT_SkeletonWarlord_AddLv
struct FExecuteUbergraph_BTT_SkeletonWarlord_AddLv
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Variable;  // 0x4 (0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct AAIController* K2Node_Event_OwnerController;  // 0x10 (0x10)
	struct APawn* K2Node_Event_ControlledPawn;  // 0x18 (0x18)
	struct TArray<struct FPrimaryAssetId> K2Node_MakeArray_Array;  // 0x20 (0x20)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue;  // 0x30 (0x30)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x40 (0x40)
	char pad_68_1 : 7;  // 0x44 (0x44)
	bool CallFunc_LessEqual_IntInt_ReturnValue : 1;  // 0x44 (0x44)


}; 
 
 // Function BTT_SkeletonWarlord_AddLv.BTT_SkeletonWarlord_AddLv_C.ReceiveExecuteAI
// Size: 0x10(Inherited: 0x10)
struct FReceiveExecuteAI : FReceiveExecuteAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)


}; 
 
 