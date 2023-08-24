#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_WeaponPerkBase.GA_WeaponPerkBase_C.FinishAllow
struct FFinishAllow
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_WeaponPerkBase.GA_WeaponPerkBase_C.ExecuteUbergraph_GA_WeaponPerkBase
struct FExecuteUbergraph_GA_WeaponPerkBase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct ADCCharacterV2* K2Node_DynamicCast_AsDCCharacter_V2;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct UDCPerkDataComponent* CallFunc_GetPerkDataComponent_ReturnValue;  // 0x30 (0x30)
	struct UDCPerkDataComponent* CallFunc_GetPerkDataComponent_ReturnValue_2;  // 0x38 (0x38)


}; 
 
 // Function GA_WeaponPerkBase.GA_WeaponPerkBase_C.StartAllow
struct FStartAllow
{
	struct FPrimaryAssetId AssetId;  // 0x0 (0x0)
	struct FDesignDataIdTagGroup CallFunc_GetDesignDataIdTagGroup_ReturnValue;  // 0x10 (0x10)
	int32_t Temp_int_Array_Index_Variable;  // 0x20 (0x20)
	struct FDesignDataIdTagGroupItem CallFunc_Array_Get_Item;  // 0x24 (0x24)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x2C (0x2C)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x30 (0x30)
	char pad_52_1 : 7;  // 0x34 (0x34)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x34 (0x34)
	char pad_53[3];  // 0x35 (0x35)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x38 (0x38)
	char pad_60_1 : 7;  // 0x3C (0x3C)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x3C (0x3C)


}; 
 
 // Function GA_WeaponPerkBase.GA_WeaponPerkBase_C.FinishNotAllow
struct FFinishNotAllow
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_WeaponPerkBase.GA_WeaponPerkBase_C.StartNotAllow
struct FStartNotAllow
{
	struct FPrimaryAssetId AssetId;  // 0x0 (0x0)
	struct FDesignDataIdTagGroup CallFunc_GetDesignDataIdTagGroup_ReturnValue;  // 0x10 (0x10)
	int32_t Temp_int_Array_Index_Variable;  // 0x20 (0x20)
	struct FDesignDataIdTagGroupItem CallFunc_Array_Get_Item;  // 0x24 (0x24)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x2C (0x2C)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x30 (0x30)
	char pad_52_1 : 7;  // 0x34 (0x34)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x34 (0x34)
	char pad_53[3];  // 0x35 (0x35)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x38 (0x38)
	char pad_60_1 : 7;  // 0x3C (0x3C)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x3C (0x3C)


}; 
 
 