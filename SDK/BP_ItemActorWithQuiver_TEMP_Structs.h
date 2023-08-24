#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.ReceiveEndPlay
// Size: 0x1(Inherited: 0x1)
struct FReceiveEndPlay : FReceiveEndPlay
{
	enum class EEndPlayReason EndPlayReason;  // 0x0 (0x0)


}; 
 
 // Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.PreReduceAmmoCount
// Size: 0x4(Inherited: 0x4)
struct FPreReduceAmmoCount : FPreReduceAmmoCount
{
	int32_t ReduceCount;  // 0x0 (0x0)


}; 
 
 // Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.ItemDataUpdated
// Size: 0xA0(Inherited: 0xA0)
struct FItemDataUpdated : FItemDataUpdated
{
	struct FItemData InItemData;  // 0x0 (0x0)


}; 
 
 // Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP
struct FExecuteUbergraph_BP_ItemActorWithQuiver_TEMP
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool CallFunc_HasAuthority_ReturnValue_2 : 1;  // 0x5 (0x5)
	enum class EEndPlayReason K2Node_Event_EndPlayReason;  // 0x6 (0x6)
	char pad_7[1];  // 0x7 (0x7)
	struct FItemData K2Node_Event_InItemData;  // 0x8 (0x8)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool CallFunc_HasAuthority_ReturnValue_3 : 1;  // 0xA8 (0xA8)
	char pad_169_1 : 7;  // 0xA9 (0xA9)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xA9 (0xA9)
	char pad_170_1 : 7;  // 0xAA (0xAA)
	bool CallFunc_HasAuthority_ReturnValue_4 : 1;  // 0xAA (0xAA)
	char pad_171[1];  // 0xAB (0xAB)
	int32_t K2Node_Event_ReduceCount;  // 0xAC (0xAC)
	char pad_176_1 : 7;  // 0xB0 (0xB0)
	bool CallFunc_NotEqual_IntInt_ReturnValue : 1;  // 0xB0 (0xB0)
	char pad_177[3];  // 0xB1 (0xB1)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0xB4 (0xB4)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool CallFunc_HasAuthority_ReturnValue_5 : 1;  // 0xB8 (0xB8)
	char pad_185_1 : 7;  // 0xB9 (0xB9)
	bool CallFunc_HasAuthority_ReturnValue_6 : 1;  // 0xB9 (0xB9)
	char pad_186[2];  // 0xBA (0xBA)
	struct FName CallFunc_GetAttachParentSocketName_ReturnValue;  // 0xBC (0xBC)
	char pad_196_1 : 7;  // 0xC4 (0xC4)
	bool CallFunc_EqualEqual_NameName_ReturnValue : 1;  // 0xC4 (0xC4)
	char pad_197_1 : 7;  // 0xC5 (0xC5)
	bool CallFunc_EqualEqual_NameName_ReturnValue_2 : 1;  // 0xC5 (0xC5)
	char pad_198[10];  // 0xC6 (0xC6)
	struct FTransform Temp_struct_Variable;  // 0xD0 (0xD0)
	struct USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue;  // 0x130 (0x130)
	char pad_312_1 : 7;  // 0x138 (0x138)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x138 (0x138)
	char pad_313[7];  // 0x139 (0x139)
	struct FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult;  // 0x140 (0x140)
	char pad_552_1 : 7;  // 0x228 (0x228)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x228 (0x228)
	char pad_553_1 : 7;  // 0x229 (0x229)
	bool CallFunc_EqualEqual_NameName_ReturnValue_3 : 1;  // 0x229 (0x229)
	char pad_554_1 : 7;  // 0x22A (0x22A)
	bool CallFunc_BooleanOR_ReturnValue : 1;  // 0x22A (0x22A)
	char pad_555_1 : 7;  // 0x22B (0x22B)
	bool CallFunc_HasAuthority_ReturnValue_7 : 1;  // 0x22B (0x22B)


}; 
 
 // Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.AmmoCountUpdated
struct FAmmoCountUpdated
{
	int32_t Temp_int_Array_Index_Variable;  // 0x0 (0x0)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	struct FName CallFunc_Array_Get_Item;  // 0x14 (0x14)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool CallFunc_IsBoneHiddenByName_ReturnValue : 1;  // 0x1C (0x1C)
	char pad_29_1 : 7;  // 0x1D (0x1D)
	bool CallFunc_IsBoneHiddenByName_ReturnValue_2 : 1;  // 0x1D (0x1D)
	char pad_30_1 : 7;  // 0x1E (0x1E)
	bool CallFunc_DoesSocketExist_ReturnValue : 1;  // 0x1E (0x1E)
	char pad_31[1];  // 0x1F (0x1F)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x20 (0x20)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool CallFunc_Less_IntInt_ReturnValue_2 : 1;  // 0x24 (0x24)


}; 
 
 // Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.AttachQuiverMeshComponentToSocket
struct FAttachQuiverMeshComponentToSocket
{
	struct FName InSocketName;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Temp_struct_Variable;  // 0x10 (0x10)
	struct USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue;  // 0x70 (0x70)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x78 (0x78)
	char pad_121[3];  // 0x79 (0x79)
	struct FName CallFunc_GetAttachSocketName_ReturnValue;  // 0x7C (0x7C)
	char pad_132_1 : 7;  // 0x84 (0x84)
	bool CallFunc_NotEqual_NameName_ReturnValue : 1;  // 0x84 (0x84)
	char pad_133[3];  // 0x85 (0x85)
	struct AActor* CallFunc_GetAttachParentActor_ReturnValue;  // 0x88 (0x88)
	struct ADCPlayerCharacterBase* K2Node_DynamicCast_AsDCPlayer_Character_Base;  // 0x90 (0x90)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x98 (0x98)
	char pad_153_1 : 7;  // 0x99 (0x99)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x99 (0x99)
	char pad_154_1 : 7;  // 0x9A (0x9A)
	bool CallFunc_K2_AttachToComponent_ReturnValue : 1;  // 0x9A (0x9A)


}; 
 
 // Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.OnMontageFinished
struct FOnMontageFinished
{
	struct FItemData CallFunc_GetItemData_ReturnValue;  // 0x0 (0x0)
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0xA0 (0xA0)


}; 
 
 